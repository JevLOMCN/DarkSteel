// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 6

// StaticClass @ 14d80ba30

UClass * __cdecl UAudioAnalyzerAssetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerAssetBase",
               &Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzerAssetBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzerAssetBase>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerAssetBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.InnerSingleton;
}

// UAudioAnalyzerAssetBase @ 14d80cbb0

UAudioAnalyzerAssetBase * __thiscall
UAudioAnalyzerAssetBase::UAudioAnalyzerAssetBase
          (UAudioAnalyzerAssetBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioAnalyzerAssetBase__6B_;
  return this;
}

// UAudioAnalyzerAssetBase @ 14d80cbe0

UAudioAnalyzerAssetBase * __thiscall
UAudioAnalyzerAssetBase::UAudioAnalyzerAssetBase
          (UAudioAnalyzerAssetBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioAnalyzerAssetBase__6B_;
  return this;
}

// ~UAudioAnalyzerAssetBase @ 14d80cf40

void __thiscall UAudioAnalyzerAssetBase::~UAudioAnalyzerAssetBase(UAudioAnalyzerAssetBase *this)

{
  *(undefined ***)this = &___7UAudioAnalyzerAssetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d80f920

UClass * __cdecl UAudioAnalyzerAssetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerAssetBase",
               &Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzerAssetBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzerAssetBase>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerAssetBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.InnerSingleton;
}

// StaticRegisterNativesUAudioAnalyzerAssetBase @ 14d810e20

void __cdecl UAudioAnalyzerAssetBase::StaticRegisterNativesUAudioAnalyzerAssetBase(void)

{
  return;
}

