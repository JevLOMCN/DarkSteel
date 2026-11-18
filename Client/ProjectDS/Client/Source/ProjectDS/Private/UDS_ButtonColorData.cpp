// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b430d70

UClass * __cdecl UDS_ButtonColorData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonColorData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonColorData",
               &Z_Registration_Info_UClass_UDS_ButtonColorData.InnerSingleton,
               StaticRegisterNativesUDS_ButtonColorData,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ButtonColorData>,
               InternalVTableHelperCtorCaller<UDS_ButtonColorData>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonColorData.InnerSingleton;
}

// UDS_ButtonColorData @ 14b434230

UDS_ButtonColorData * __thiscall
UDS_ButtonColorData::UDS_ButtonColorData(UDS_ButtonColorData *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ButtonColorData__6B_;
  return this;
}

// UDS_ButtonColorData @ 14b434260

UDS_ButtonColorData * __thiscall
UDS_ButtonColorData::UDS_ButtonColorData(UDS_ButtonColorData *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ButtonColorData__6B_;
  return this;
}

// ~UDS_ButtonColorData @ 14b434cd0

void __thiscall UDS_ButtonColorData::~UDS_ButtonColorData(UDS_ButtonColorData *this)

{
  this->_padding_ = (longlong)&___7UDS_ButtonColorData__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b4364e0

UClass * __cdecl UDS_ButtonColorData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonColorData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonColorData",
               &Z_Registration_Info_UClass_UDS_ButtonColorData.InnerSingleton,
               StaticRegisterNativesUDS_ButtonColorData,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ButtonColorData>,
               InternalVTableHelperCtorCaller<UDS_ButtonColorData>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonColorData.InnerSingleton;
}

// StaticRegisterNativesUDS_ButtonColorData @ 14b437030

void __cdecl UDS_ButtonColorData::StaticRegisterNativesUDS_ButtonColorData(void)

{
  return;
}

