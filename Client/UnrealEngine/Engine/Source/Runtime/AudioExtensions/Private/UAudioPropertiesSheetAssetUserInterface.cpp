// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 6

// StaticClass @ 14452ab30

UClass * __cdecl UAudioPropertiesSheetAssetUserInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioPropertiesSheetAssetUserInterface",
               &Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.InnerSingleton,
               StaticRegisterNativesUAudioPropertiesSheetAssetUserInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioPropertiesSheetAssetUserInterface>,
               InternalVTableHelperCtorCaller<UAudioPropertiesSheetAssetUserInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.InnerSingleton;
}

// UAudioPropertiesSheetAssetUserInterface @ 14452ffd0

UAudioPropertiesSheetAssetUserInterface * __thiscall
UAudioPropertiesSheetAssetUserInterface::UAudioPropertiesSheetAssetUserInterface
          (UAudioPropertiesSheetAssetUserInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioPropertiesSheetAssetUserInterface__6B_;
  return this;
}

// UAudioPropertiesSheetAssetUserInterface @ 144530000

UAudioPropertiesSheetAssetUserInterface * __thiscall
UAudioPropertiesSheetAssetUserInterface::UAudioPropertiesSheetAssetUserInterface
          (UAudioPropertiesSheetAssetUserInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAudioPropertiesSheetAssetUserInterface__6B_;
  return this;
}

// ~UAudioPropertiesSheetAssetUserInterface @ 144530ba0

void __thiscall
UAudioPropertiesSheetAssetUserInterface::~UAudioPropertiesSheetAssetUserInterface
          (UAudioPropertiesSheetAssetUserInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 144534da0

UClass * __cdecl UAudioPropertiesSheetAssetUserInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioPropertiesSheetAssetUserInterface",
               &Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.InnerSingleton,
               StaticRegisterNativesUAudioPropertiesSheetAssetUserInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioPropertiesSheetAssetUserInterface>,
               InternalVTableHelperCtorCaller<UAudioPropertiesSheetAssetUserInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioPropertiesSheetAssetUserInterface.InnerSingleton;
}

// StaticRegisterNativesUAudioPropertiesSheetAssetUserInterface @ 144537ae0

void __cdecl
UAudioPropertiesSheetAssetUserInterface::
StaticRegisterNativesUAudioPropertiesSheetAssetUserInterface(void)

{
  return;
}

