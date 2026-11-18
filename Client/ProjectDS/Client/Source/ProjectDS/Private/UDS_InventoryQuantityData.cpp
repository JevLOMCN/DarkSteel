// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b51a8e0

UClass * __cdecl UDS_InventoryQuantityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InventoryQuantityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InventoryQuantityData",
               &Z_Registration_Info_UClass_UDS_InventoryQuantityData.InnerSingleton,
               StaticRegisterNativesUDS_InventoryQuantityData,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_InventoryQuantityData>,
               InternalVTableHelperCtorCaller<UDS_InventoryQuantityData>,local_res8,
               UDS_QuantityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InventoryQuantityData.InnerSingleton;
}

// UDS_InventoryQuantityData @ 14b5207b0

UDS_InventoryQuantityData * __thiscall
UDS_InventoryQuantityData::UDS_InventoryQuantityData
          (UDS_InventoryQuantityData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InventoryType = PlayerNormal;
  this->_padding_ = (longlong)&___7UDS_InventoryQuantityData__6B_;
  this->TradableQuantity = 0;
  this->UnTradableQuantity = 0;
  this->ModifiedTradableQuantity = 0;
  this->ModifiedUnTradableQuantity = 0;
  return this;
}

// UDS_InventoryQuantityData @ 14b5207f0

UDS_InventoryQuantityData * __thiscall
UDS_InventoryQuantityData::UDS_InventoryQuantityData
          (UDS_InventoryQuantityData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InventoryType = PlayerNormal;
  this->_padding_ = (longlong)&___7UDS_InventoryQuantityData__6B_;
  this->TradableQuantity = 0;
  this->UnTradableQuantity = 0;
  this->ModifiedTradableQuantity = 0;
  this->ModifiedUnTradableQuantity = 0;
  return this;
}

// ~UDS_InventoryQuantityData @ 14b523110

void __thiscall
UDS_InventoryQuantityData::~UDS_InventoryQuantityData(UDS_InventoryQuantityData *this)

{
  this->_padding_ = (longlong)&___7UDS_QuantityData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5250e0

UClass * __cdecl UDS_InventoryQuantityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InventoryQuantityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InventoryQuantityData",
               &Z_Registration_Info_UClass_UDS_InventoryQuantityData.InnerSingleton,
               StaticRegisterNativesUDS_InventoryQuantityData,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_InventoryQuantityData>,
               InternalVTableHelperCtorCaller<UDS_InventoryQuantityData>,local_res8,
               UDS_QuantityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InventoryQuantityData.InnerSingleton;
}

// StaticRegisterNativesUDS_InventoryQuantityData @ 14b527340

void __cdecl UDS_InventoryQuantityData::StaticRegisterNativesUDS_InventoryQuantityData(void)

{
  return;
}

// Adjust @ 14bce87a0

void __thiscall UDS_InventoryQuantityData::Adjust(UDS_InventoryQuantityData *this)

{
  this->TradableQuantity = this->ModifiedTradableQuantity;
  this->UnTradableQuantity = this->ModifiedUnTradableQuantity;
  return;
}

// GetInventoryType @ 14bcf8a40

EDS_InventoryType __thiscall
UDS_InventoryQuantityData::GetInventoryType(UDS_InventoryQuantityData *this)

{
  return this->InventoryType;
}

// GetModifiedTotalQuantity @ 14bcf9180

int __thiscall UDS_InventoryQuantityData::GetModifiedTotalQuantity(UDS_InventoryQuantityData *this)

{
  return this->ModifiedUnTradableQuantity + this->ModifiedTradableQuantity;
}

// GetModifiedTradableQuantity @ 14bcf9190

int __thiscall
UDS_InventoryQuantityData::GetModifiedTradableQuantity(UDS_InventoryQuantityData *this)

{
  return this->ModifiedTradableQuantity;
}

// GetModifiedUnTradableQuantity @ 14bcf91a0

int __thiscall
UDS_InventoryQuantityData::GetModifiedUnTradableQuantity(UDS_InventoryQuantityData *this)

{
  return this->ModifiedUnTradableQuantity;
}

// GetTotalQuantity @ 14bcfead0

int __thiscall UDS_InventoryQuantityData::GetTotalQuantity(UDS_InventoryQuantityData *this)

{
  return this->UnTradableQuantity + this->TradableQuantity;
}

// GetTradableQuantity @ 14bcfeae0

int __thiscall UDS_InventoryQuantityData::GetTradableQuantity(UDS_InventoryQuantityData *this)

{
  return this->TradableQuantity;
}

// GetUnTradableQuantity @ 14bcfecb0

int __thiscall UDS_InventoryQuantityData::GetUnTradableQuantity(UDS_InventoryQuantityData *this)

{
  return this->UnTradableQuantity;
}

// Init @ 14bd00ba0

void __thiscall
UDS_InventoryQuantityData::Init
          (UDS_InventoryQuantityData *this,long64 param_1,EDS_InventoryType param_2,int param_3,
          int param_4,int param_5)

{
  this->UnTradableQuantity = param_4;
  this->ModifiedUnTradableQuantity = param_4;
  this->_padding_ = param_1;
  this->InventoryType = param_2;
  this->TradableQuantity = param_3;
  this->ModifiedTradableQuantity = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014bd00bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this,param_5);
  return;
}

// SetMaxQuantity @ 14bd20290

void __thiscall
UDS_InventoryQuantityData::SetMaxQuantity(UDS_InventoryQuantityData *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    *(int *)&this->_padding_ = param_1;
    return;
  }
  iVar1 = DS_ItemDataUtil::GetTotalStackCountByItemUID(this->InventoryType,this->_padding_);
  *(int *)&this->_padding_ = iVar1;
  return;
}

// SetModifiedTradableQuantity @ 14bd20310

void __thiscall
UDS_InventoryQuantityData::SetModifiedTradableQuantity(UDS_InventoryQuantityData *this,int param_1)

{
  this->ModifiedTradableQuantity = param_1;
  return;
}

// SetModifiedUnTradableQuantity @ 14bd20320

void __thiscall
UDS_InventoryQuantityData::SetModifiedUnTradableQuantity
          (UDS_InventoryQuantityData *this,int param_1)

{
  this->ModifiedUnTradableQuantity = param_1;
  return;
}

// SetTotalQuantity @ 14bd22d10

void __thiscall
UDS_InventoryQuantityData::SetTotalQuantity(UDS_InventoryQuantityData *this,int param_1)

{
  bool bVar1;
  int iVar2;
  UDS_ItemData *this_00;
  int iVar3;
  FWeakObjectPtr local_res8;
  
  iVar3 = 0;
  iVar2 = 0;
  DS_ItemDataUtil::GetItemDataByUID((long64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
    iVar2 = UDS_ItemData::GetStackCount_UnTradable(this_00,PlayerNormal);
    if (param_1 < iVar2) {
      iVar2 = param_1;
    }
    iVar3 = param_1 - iVar2;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  (**(code **)(this->_padding_ + 0x2d8))(this,iVar2);
  (**(code **)(this->_padding_ + 0x2d0))(this,iVar3);
  return;
}

// SetTradableQuantity @ 14bd22db0

void __thiscall
UDS_InventoryQuantityData::SetTradableQuantity(UDS_InventoryQuantityData *this,int param_1)

{
  this->TradableQuantity = param_1;
  return;
}

// SetUnTradableQuantity @ 14bd22dc0

void __thiscall
UDS_InventoryQuantityData::SetUnTradableQuantity(UDS_InventoryQuantityData *this,int param_1)

{
  this->UnTradableQuantity = param_1;
  return;
}

// Undo @ 14bd24ac0

void __thiscall UDS_InventoryQuantityData::Undo(UDS_InventoryQuantityData *this)

{
  this->ModifiedTradableQuantity = this->TradableQuantity;
  this->ModifiedUnTradableQuantity = this->UnTradableQuantity;
  return;
}

