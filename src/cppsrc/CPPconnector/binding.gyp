{	"variables": {
	},
    "targets": [{
        "target_name": "integrated_cpp_connector",
        "cflags!": [ "-fno-exceptions" ],
        "cflags_cc!": [ "-fno-exceptions" ],
        "ldflags!": ["-rpath","."],
        "sources": [
            "main_CPPconnector.cpp"
        ],
        'include_dirs': [
            "<!@(node -p \"require('node-addon-api').include\")",
			"./include"
        ],
		  'libraries':["-Wl,-rpath,.","-L/hd0/lance/projects/BCL_interface/final/src/cppsrc/CPPconnector/include","-lCPPconnector"],
        'dependencies': [
            "<!(node -p \"require('node-addon-api').gyp\")"
        ],
        'defines': [ 'NAPI_DISABLE_CPP_EXCEPTIONS' ]
    }]
}
