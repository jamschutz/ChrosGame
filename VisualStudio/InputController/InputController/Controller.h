#pragma once

#ifdef NATIVECPPLIBRARY_EXPORTS
#define NATIVECPPLIBRARY_API __declspec(dllexport)
#else
#define NATIVECPPLIBRARY_API __declspec(dllimport)
# endif// This class is exported from the dll

class NATIVECPPLIBRARY_API Controller {   
	public: Controller(void);
	// TODO: add your methods here.
};

extern "C" NATIVECPPLIBRARY_API int displayNumber(); 
extern "C" NATIVECPPLIBRARY_API int getRandom(); 
extern "C" NATIVECPPLIBRARY_API int displaySum();