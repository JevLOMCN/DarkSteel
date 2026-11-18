// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 6

// StaticClass @ 14452ac30

UClass * __cdecl UAudioPropertiesSheetAssetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioPropertiesSheetAssetBase",
               &Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.InnerSingleton,
               StaticRegisterNativesUAudioPropertiesSheetAssetBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioPropertiesSheetAssetBase>,
               InternalVTableHelperCtorCaller<UAudioPropertiesSheetAssetBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.InnerSingleton;
}

// UAudioPropertiesSheetAssetBase @ 14452ff70

UAudioPropertiesSheetAssetBase * __thiscall
UAudioPropertiesSheetAssetBase::UAudioPropertiesSheetAssetBase
          (UAudioPropertiesSheetAssetBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioPropertiesSheetAssetBase__6B_;
  return this;
}

// UAudioPropertiesSheetAssetBase @ 14452ffa0

UAudioPropertiesSheetAssetBase * __thiscall
UAudioPropertiesSheetAssetBase::UAudioPropertiesSheetAssetBase
          (UAudioPropertiesSheetAssetBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioPropertiesSheetAssetBase__6B_;
  return this;
}

// ~UAudioPropertiesSheetAssetBase @ 144530b80

void __thiscall
UAudioPropertiesSheetAssetBase::~UAudioPropertiesSheetAssetBase
          (UAudioPropertiesSheetAssetBase *this)

{
  *(undefined ***)this = &___7UAudioPropertiesSheetAssetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 144534cf0

UClass * __cdecl UAudioPropertiesSheetAssetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"AudioPropertiesSheetAssetBase",
               &Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.InnerSingleton,
               StaticRegisterNativesUAudioPropertiesSheetAssetBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioPropertiesSheetAssetBase>,
               InternalVTableHelperCtorCaller<UAudioPropertiesSheetAssetBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.InnerSingleton;
}

// StaticRegisterNativesUAudioPropertiesSheetAssetBase @ 144537aa0

void __cdecl
UAudioPropertiesSheetAssetBase::StaticRegisterNativesUAudioPropertiesSheetAssetBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

