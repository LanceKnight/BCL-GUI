#include <string>
#include "CPPconnector.h"

std::string get_output(int input) {
	std::string aspirin =
			"  Marvin  12270700542D\n\n 13 13  0  0  0  0            999 V2000\n   -0.7145   -0.4125    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.0000   -0.8250    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -0.7145    0.4125    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.7145    0.4125    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.0000    0.8250    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.7145   -0.4125    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    1.4289    0.8250    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    2.1433    0.4126    0.0000 O   0  0  0  0  0  0  0  0  0  0  0  0\n    1.4289    1.6501    0.0000 O   0  0  0  0  0  0  0  0  0  0  0  0\n   -0.0002    1.6500    0.0000 O   0  0  0  0  0  0  0  0  0  0  0  0\n   -0.7145    2.0625    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -1.4290    1.6500    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -0.7145    2.8875    0.0000 O   0  0  0  0  0  0  0  0  0  0  0  0\n  2  1  1  0  0  0  0\n  3  1  2  0  0  0  0\n  4  7  1  0  0  0  0\n  5  3  1  0  0  0  0\n  4  5  2  0  0  0  0\n 10  5  1  0  0  0  0\n  6  4  1  0  0  0  0\n  2  6  2  0  0  0  0\n  8  7  1  0  0  0  0\n  9  7  2  0  0  0  0\n 11 10  1  0  0  0  0\n 12 11  1  0  0  0  0\n 13 11  2  0  0  0  0\nM  END";
	;
	std::string wrapped_aspirin = "CPP\n\n" + aspirin + "";

	std::string ibuprofen =
			"  Marvin  11200711372D\n\n 15 15  0  0  0  0            999 V2000\n    0.0000   -0.8250    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -0.7145   -0.4125    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.7145    0.4125    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.7145   -0.4125    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.0000    0.8250    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -0.7145    0.4125    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    1.4289   -0.8250    0.0000 C   0  0  3  0  0  0  0  0  0  0  0  0\n    2.1434   -0.4125    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    2.1434    0.4125    0.0000 O   0  0  0  0  0  0  0  0  0  0  0  0\n    2.8579   -0.8250    0.0000 O   0  0  0  0  0  0  0  0  0  0  0  0\n    1.4289   -1.6500    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -1.4289    0.8250    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -2.8579    0.8250    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -2.1434    0.4125    0.0000 C   0  0  3  0  0  0  0  0  0  0  0  0\n   -2.1434   -0.4125    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n  2  1  1  0  0  0  0\n  4  3  1  0  0  0  0\n  1  4  2  0  0  0  0\n  7  4  1  0  0  0  0\n  5  3  2  0  0  0  0\n  2  6  2  0  0  0  0\n  6  5  1  0  0  0  0\n 12  6  1  0  0  0  0\n  8  7  1  0  0  0  0\n 11  7  1  0  0  0  0\n  9  8  2  0  0  0  0\n 10  8  1  0  0  0  0\n 12 14  1  0  0  0  0\n 14 13  1  0  0  0  0\n 14 15  1  0  0  0  0\nM  END";
	std::string wrapped_ibuprofen = "CPP\n\n" + ibuprofen + "";

	std::string vitaminD2 =
			"  Marvin  11170508402D          \n\n 31 33  0  0  1  0            999 V2000\n   -1.0890    1.2765    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -1.0890   -0.3735    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.4101   -0.2159    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.8950    0.4515    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -1.8035    0.8640    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -1.0890   -1.1985    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -1.8035    0.0390    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -1.8035   -1.6110    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -1.8035   -2.4360    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -1.0890   -2.8485    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -2.5179   -2.8485    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -1.0890   -3.6735    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -0.3745   -2.4360    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -2.5179   -3.6735    0.0000 C   0  0  2  0  0  0  0  0  0  0  0  0\n   -1.8035   -4.0860    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n   -3.2324   -4.0860    0.0000 O   0  0  0  0  0  0  0  0  0  0  0  0\n   -0.3044    2.3565    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.4101    1.9440    0.0000 C   0  0  2  0  0  0  0  0  0  0  0  0\n    1.1246    2.3565    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    1.8390    1.9440    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    3.9825    2.3565    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    3.2680    1.9440    0.0000 C   0  0  3  0  0  0  0  0  0  0  0  0\n    3.2680    1.1190    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    2.5535    2.3565    0.0000 C   0  0  1  0  0  0  0  0  0  0  0  0\n    2.5535    3.1815    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n    0.4101    1.1190    0.0000 C   0  0  2  0  0  0  0  0  0  0  0  0\n    1.1246    1.5315    0.0000 H   0  0  0  0  0  0  0  0  0  0  0  0\n   -0.3745    0.0390    0.0000 C   0  0  2  0  0  0  0  0  0  0  0  0\n   -0.3745   -0.7860    0.0000 H   0  0  0  0  0  0  0  0  0  0  0  0\n   -0.3745    0.8640    0.0000 C   0  0  2  0  0  0  0  0  0  0  0  0\n   -0.3745    1.6890    0.0000 C   0  0  0  0  0  0  0  0  0  0  0  0\n 28 30  1  0  0  0  0\n 30 26  1  0  0  0  0\n 30  1  1  0  0  0  0\n 28  2  1  0  0  0  0\n 28  3  1  0  0  0  0\n 26  4  1  0  0  0  0\n  1  5  1  0  0  0  0\n  2  6  2  0  0  0  0\n  2  7  1  0  0  0  0\n  6  8  1  0  0  0  0\n  8  9  2  0  0  0  0\n  9 10  1  0  0  0  0\n  9 11  1  0  0  0  0\n 10 12  1  0  0  0  0\n 10 13  2  0  0  0  0\n 11 14  1  0  0  0  0\n 12 15  1  0  0  0  0\n 14 16  1  6  0  0  0\n  3  4  1  0  0  0  0\n  5  7  1  0  0  0  0\n 14 15  1  0  0  0  0\n 26 18  1  0  0  0  0\n 18 17  1  6  0  0  0\n 18 19  1  0  0  0  0\n 19 20  2  0  0  0  0\n 20 24  1  0  0  0  0\n 24 22  1  0  0  0  0\n 22 21  1  0  0  0  0\n 22 23  1  0  0  0  0\n 24 25  1  6  0  0  0\n 26 27  1  6  0  0  0\n 28 29  1  6  0  0  0\n 30 31  1  1  0  0  0\nM  END";
	std::string wrapped_vitaminD2 = "CPP\n\n" + vitaminD2 + "";

	std::string result;
	switch(input){
		case 0:
			result = wrapped_aspirin;
			break;
		case 1:
			result = wrapped_ibuprofen;
			break;
		case 2:
			result = wrapped_vitaminD2;
			break;
		default:
			result = "input has no corresponding output:";

	}
	return result;
}