// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 6

// StaticClass @ 146c73fc0

UClass * __cdecl UMoviePlayerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePlayerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MoviePlayer",L"MoviePlayerSettings",
               &Z_Registration_Info_UClass_UMoviePlayerSettings.InnerSingleton,
               StaticRegisterNativesUMoviePlayerSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UMoviePlayerSettings>,
               InternalVTableHelperCtorCaller<UMoviePlayerSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePlayerSettings.InnerSingleton;
}

// UMoviePlayerSettings @ 146c77210

UMoviePlayerSettings * __thiscall
UMoviePlayerSettings::UMoviePlayerSettings(UMoviePlayerSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePlayerSettings__6B_;
  (this->StartupMovies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartupMovies).ArrayNum = 0;
  (this->StartupMovies).ArrayMax = 0;
  return this;
}

// UMoviePlayerSettings @ 146c77250

UMoviePlayerSettings * __thiscall
UMoviePlayerSettings::UMoviePlayerSettings(UMoviePlayerSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePlayerSettings__6B_;
  (this->StartupMovies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartupMovies).ArrayNum = 0;
  (this->StartupMovies).ArrayMax = 0;
  return this;
}

// ~UMoviePlayerSettings @ 146c77770

void __thiscall UMoviePlayerSettings::~UMoviePlayerSettings(UMoviePlayerSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePlayerSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->StartupMovies).AllocatorInstance.Data,(this->StartupMovies).ArrayNum)
  ;
  pFVar1 = (this->StartupMovies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146c7cff0

UClass * __cdecl UMoviePlayerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePlayerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MoviePlayer",L"MoviePlayerSettings",
               &Z_Registration_Info_UClass_UMoviePlayerSettings.InnerSingleton,
               StaticRegisterNativesUMoviePlayerSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UMoviePlayerSettings>,
               InternalVTableHelperCtorCaller<UMoviePlayerSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePlayerSettings.InnerSingleton;
}

// StaticRegisterNativesUMoviePlayerSettings @ 146c812f0

void __cdecl UMoviePlayerSettings::StaticRegisterNativesUMoviePlayerSettings(void)

{
  return;
}

