const {app, BrowserWindow} = require('electron');


let mainWindow;

function createWindow () {
	mainWindow = new BrowserWindow({
		width: 1000,
		height: 800,
		webPreferences: {
			nodeIntegration: false
		}
	});
	
	//open DevTool if needed
	mainWindow.webContents.openDevTools();
	
	mainWindow.loadURL(`file://${__dirname}/src/index.html`);
};

app.on('ready', createWindow);

app.on('window-all-closed', () => {
	// On macOS it is common for applications and their menu bar
	// to stay active until the user quits explicitly with Cmd + Q
	if (process.platform !== 'darwin') {
	  app.quit()
	}
});