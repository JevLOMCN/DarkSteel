// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 8

// StaticClass @ 14a0266e0

UClass * __cdecl UWN_WorldEditInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_WorldEditInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_WorldEditInfo",
               &Z_Registration_Info_UClass_UWN_WorldEditInfo.InnerSingleton,
               StaticRegisterNativesUWN_WorldEditInfo,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_WorldEditInfo>,
               InternalVTableHelperCtorCaller<UWN_WorldEditInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_WorldEditInfo.InnerSingleton;
}

// UWN_WorldEditInfo @ 14a02dcd0

UWN_WorldEditInfo * __thiscall
UWN_WorldEditInfo::UWN_WorldEditInfo(UWN_WorldEditInfo *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Version = 0;
  this->_padding_ = (longlong)&___7UWN_WorldEditInfo__6B_;
  return this;
}

// UWN_WorldEditInfo @ 14a02dd00

UWN_WorldEditInfo * __thiscall
UWN_WorldEditInfo::UWN_WorldEditInfo(UWN_WorldEditInfo *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Version = 0;
  this->_padding_ = (longlong)&___7UWN_WorldEditInfo__6B_;
  return this;
}

// ~UWN_WorldEditInfo @ 14a02ecc0

void __thiscall UWN_WorldEditInfo::~UWN_WorldEditInfo(UWN_WorldEditInfo *this)

{
  this->_padding_ = (longlong)&___7UWN_WorldEditInfo__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a034ce0

UClass * __cdecl UWN_WorldEditInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_WorldEditInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_WorldEditInfo",
               &Z_Registration_Info_UClass_UWN_WorldEditInfo.InnerSingleton,
               StaticRegisterNativesUWN_WorldEditInfo,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_WorldEditInfo>,
               InternalVTableHelperCtorCaller<UWN_WorldEditInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_WorldEditInfo.InnerSingleton;
}

// Serialize @ 14a039b00

void __thiscall UWN_WorldEditInfo::Serialize(UWN_WorldEditInfo *this,FArchive *param_1)

{
  int iVar1;
  FGuid local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) == 0) {
    iVar1 = 6;
  }
  else {
    local_18 = FWN_WorldInfoCustomVersion::GUID;
    iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  }
  if (((param_1->field_0x28 & 1) == 0) || (iVar1 != -1)) {
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FWN_WorldInfoCustomVersion::GUID);
  }
  return;
}

// Serialize @ 14a039b70

void __thiscall
UWN_WorldEditInfo::Serialize(UWN_WorldEditInfo *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  FGuid local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar2);
  if ((pFVar2->field_0x28 & 1) == 0) {
    iVar1 = 6;
  }
  else {
    local_18 = FWN_WorldInfoCustomVersion::GUID;
    iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  }
  if (((pFVar2->field_0x28 & 1) == 0) || (iVar1 != -1)) {
    (**(code **)(*(longlong *)pFVar2 + 0x230))(pFVar2,&FWN_WorldInfoCustomVersion::GUID);
  }
  return;
}

// StaticRegisterNativesUWN_WorldEditInfo @ 14a03a810

void __cdecl UWN_WorldEditInfo::StaticRegisterNativesUWN_WorldEditInfo(void)

{
  return;
}

