const {app, BrowserWindow, ipcMain} = require('electron');
const cpp_connector = require('./src/cppsrc/CPPconnector/build/Release/CPPconnector.node');


let mainWindow;

function createWindow () {
	mainWindow = new BrowserWindow({
		width: 1000,
		height: 800,
		webPreferences: {
			nodeIntegration: true
		}
	});
	

	//open DevTool if needed
	mainWindow.webContents.openDevTools();
	
	mainWindow.loadURL(`file://${__dirname}/src/index.html`);
};

function getFromCpp(){
	module.exports = cpp_connector;
	cpp_output = cpp_connector.hello();
	return cpp_output;
}

app.on('ready', createWindow);

app.on('window-all-closed', () => {
	// On macOS it is common for applications and their menu bar
	// to stay active until the user quits explicitly with Cmd + Q
	if (process.platform !== 'darwin') {
	  app.quit()
	}
});


ipcMain.on('signalToMain', (event, arg)=> {
	console.log('main process receiced signal from renderer process, msg:'+arg);
	
	var output = getFromCpp();
	console.log('main process received output from c++, msg:' +output);

	event.reply('signalToRenderer', output)
})