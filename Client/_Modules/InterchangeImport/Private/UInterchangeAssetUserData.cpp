// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e673db0

UClass * __cdecl UInterchangeAssetUserData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAssetUserData",
               &Z_Registration_Info_UClass_UInterchangeAssetUserData.InnerSingleton,
               StaticRegisterNativesUInterchangeAssetUserData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeAssetUserData>,
               InternalVTableHelperCtorCaller<UInterchangeAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetUserData.InnerSingleton;
}

// UInterchangeAssetUserData @ 14e690440

UInterchangeAssetUserData * __thiscall
UInterchangeAssetUserData::UInterchangeAssetUserData
          (UInterchangeAssetUserData *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAssetUserData__6B_;
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  return this;
}

// UInterchangeAssetUserData @ 14e690490

UInterchangeAssetUserData * __thiscall
UInterchangeAssetUserData::UInterchangeAssetUserData
          (UInterchangeAssetUserData *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAssetUserData__6B_;
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  return this;
}

// ~UInterchangeAssetUserData @ 14e691dd0

void __thiscall
UInterchangeAssetUserData::~UInterchangeAssetUserData(UInterchangeAssetUserData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeAssetUserData__6B_;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetaData);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetPrivateStaticClass @ 14e69fd00

UClass * __cdecl UInterchangeAssetUserData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeAssetUserData",
               &Z_Registration_Info_UClass_UInterchangeAssetUserData.InnerSingleton,
               StaticRegisterNativesUInterchangeAssetUserData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeAssetUserData>,
               InternalVTableHelperCtorCaller<UInterchangeAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAssetUserData.InnerSingleton;
}

// StaticRegisterNativesUInterchangeAssetUserData @ 14e6a8110

void __cdecl UInterchangeAssetUserData::StaticRegisterNativesUInterchangeAssetUserData(void)

{
  return;
}

