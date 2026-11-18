// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 6

// StaticClass @ 14cfacb70

UClass * __cdecl ULiveLinkCurveRemapSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkCurveRemapSettings",
               &Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkCurveRemapSettings,0x108,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkCurveRemapSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkCurveRemapSettings>,local_res8,
               ULiveLinkSourceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.InnerSingleton;
}

// ULiveLinkCurveRemapSettings @ 14cfb5870

ULiveLinkCurveRemapSettings * __thiscall
ULiveLinkCurveRemapSettings::ULiveLinkCurveRemapSettings
          (ULiveLinkCurveRemapSettings *this,FVTableHelper *param_1)

{
  ULiveLinkSourceSettings::ULiveLinkSourceSettings((ULiveLinkSourceSettings *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkCurveRemapSettings__6B_;
  *(undefined8 *)&(this->CurveConversionSettings).CurveConversionAssetMap = 0;
  *(undefined8 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x8 = 0;
  *(undefined8 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x20 = 0;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x28 = 0;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x34 = 0;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x40 = 0;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x48 = 0;
  return this;
}

// ULiveLinkCurveRemapSettings @ 14cfb58e0

ULiveLinkCurveRemapSettings * __thiscall
ULiveLinkCurveRemapSettings::ULiveLinkCurveRemapSettings(ULiveLinkCurveRemapSettings *this)

{
  ULiveLinkSourceSettings::ULiveLinkSourceSettings((ULiveLinkSourceSettings *)this);
  this->_padding_ = (longlong)&___7ULiveLinkCurveRemapSettings__6B_;
  *(undefined8 *)&(this->CurveConversionSettings).CurveConversionAssetMap = 0;
  *(undefined8 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x8 = 0;
  *(undefined8 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x20 = 0;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x28 = 0;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x34 = 0;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x40 = 0;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x48 = 0;
  return this;
}

// ~ULiveLinkCurveRemapSettings @ 14cfb6530

void __thiscall
ULiveLinkCurveRemapSettings::~ULiveLinkCurveRemapSettings(ULiveLinkCurveRemapSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkCurveRemapSettings__6B_;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveConversionSettings);
  this->_padding_ = (longlong)&___7ULiveLinkSourceSettings__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cfbabb0

UClass * __cdecl ULiveLinkCurveRemapSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkCurveRemapSettings",
               &Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkCurveRemapSettings,0x108,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkCurveRemapSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkCurveRemapSettings>,local_res8,
               ULiveLinkSourceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.InnerSingleton;
}

// StaticRegisterNativesULiveLinkCurveRemapSettings @ 14cfbe290

void __cdecl ULiveLinkCurveRemapSettings::StaticRegisterNativesULiveLinkCurveRemapSettings(void)

{
  return;
}

