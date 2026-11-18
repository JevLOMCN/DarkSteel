// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 7

// StaticClass @ 14eb01710

UClass * __cdecl UNNERuntimeORTSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTSettings",
               &Z_Registration_Info_UClass_UNNERuntimeORTSettings.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeORTSettings>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTSettings.InnerSingleton;
}

// UNNERuntimeORTSettings @ 14eb06290

UNNERuntimeORTSettings * __thiscall
UNNERuntimeORTSettings::UNNERuntimeORTSettings
          (UNNERuntimeORTSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  (this->EditorThreadingOptions).bUseGlobalThreadPool = true;
  this->_padding_ = (longlong)&___7UNNERuntimeORTSettings__6B_;
  (this->EditorThreadingOptions).IntraOpNumThreads = 0;
  (this->EditorThreadingOptions).InterOpNumThreads = 0;
  (this->EditorThreadingOptions).ExecutionMode.Value = '\0';
  (this->GameThreadingOptions).bUseGlobalThreadPool = false;
  (this->GameThreadingOptions).ExecutionMode.Value = '\0';
  (this->GameThreadingOptions).IntraOpNumThreads = 1;
  (this->GameThreadingOptions).InterOpNumThreads = 1;
  return this;
}

// UNNERuntimeORTSettings @ 14eb062e0

UNNERuntimeORTSettings * __thiscall
UNNERuntimeORTSettings::UNNERuntimeORTSettings(UNNERuntimeORTSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  (this->EditorThreadingOptions).bUseGlobalThreadPool = true;
  this->_padding_ = (longlong)&___7UNNERuntimeORTSettings__6B_;
  (this->EditorThreadingOptions).IntraOpNumThreads = 0;
  (this->EditorThreadingOptions).InterOpNumThreads = 0;
  (this->EditorThreadingOptions).ExecutionMode.Value = '\0';
  (this->GameThreadingOptions).bUseGlobalThreadPool = false;
  (this->GameThreadingOptions).ExecutionMode.Value = '\0';
  (this->GameThreadingOptions).IntraOpNumThreads = 1;
  (this->GameThreadingOptions).InterOpNumThreads = 1;
  return this;
}

// ~UNNERuntimeORTSettings @ 14eb074f0

void __thiscall UNNERuntimeORTSettings::~UNNERuntimeORTSettings(UNNERuntimeORTSettings *this)

{
  this->_padding_ = (longlong)&___7UNNERuntimeORTSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14eb15120

FName __thiscall UNNERuntimeORTSettings::GetCategoryName(UNNERuntimeORTSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Plugins");
  return in_RDX;
}

// GetPrivateStaticClass @ 14eb166d0

UClass * __cdecl UNNERuntimeORTSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTSettings",
               &Z_Registration_Info_UClass_UNNERuntimeORTSettings.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeORTSettings>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTSettings.InnerSingleton;
}

// StaticRegisterNativesUNNERuntimeORTSettings @ 14eb1df00

void __cdecl UNNERuntimeORTSettings::StaticRegisterNativesUNNERuntimeORTSettings(void)

{
  return;
}

