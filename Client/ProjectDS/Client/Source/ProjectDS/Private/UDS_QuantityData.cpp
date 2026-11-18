// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b51a630

UClass * __cdecl UDS_QuantityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuantityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuantityData",
               &Z_Registration_Info_UClass_UDS_QuantityData.InnerSingleton,
               StaticRegisterNativesUDS_QuantityData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_QuantityData>,
               InternalVTableHelperCtorCaller<UDS_QuantityData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuantityData.InnerSingleton;
}

// UDS_QuantityData @ 14b522cd0

UDS_QuantityData * __thiscall
UDS_QuantityData::UDS_QuantityData(UDS_QuantityData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuantityData__6B_;
  return this;
}

// UDS_QuantityData @ 14b522d00

UDS_QuantityData * __thiscall
UDS_QuantityData::UDS_QuantityData(UDS_QuantityData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuantityData__6B_;
  return this;
}

// ~UDS_QuantityData @ 14b523880

void __thiscall UDS_QuantityData::~UDS_QuantityData(UDS_QuantityData *this)

{
  this->_padding_ = (longlong)&___7UDS_QuantityData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Adjust @ 14b524d90

void __thiscall UDS_QuantityData::Adjust(UDS_QuantityData *this)

{
  return;
}

// GetInventoryPriorityType @ 14b525090

EDS_ItemInvenPriorityType __thiscall
UDS_QuantityData::GetInventoryPriorityType(UDS_QuantityData *this)

{
  return None;
}

// GetInventoryType @ 14b5250a0

EDS_InventoryType __thiscall UDS_QuantityData::GetInventoryType(UDS_QuantityData *this)

{
  return None;
}

// GetModifiedTotalQuantity @ 14b5250b0

int __thiscall UDS_QuantityData::GetModifiedTotalQuantity(UDS_QuantityData *this)

{
  return 0;
}

// GetModifiedTradableQuantity @ 14b5250c0

int __thiscall UDS_QuantityData::GetModifiedTradableQuantity(UDS_QuantityData *this)

{
  return 0;
}

// GetModifiedUnTradableQuantity @ 14b5250d0

int __thiscall UDS_QuantityData::GetModifiedUnTradableQuantity(UDS_QuantityData *this)

{
  return 0;
}

// GetPrivateStaticClass @ 14b526fa0

UClass * __cdecl UDS_QuantityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuantityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuantityData",
               &Z_Registration_Info_UClass_UDS_QuantityData.InnerSingleton,
               StaticRegisterNativesUDS_QuantityData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_QuantityData>,
               InternalVTableHelperCtorCaller<UDS_QuantityData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuantityData.InnerSingleton;
}

// GetTotalQuantity @ 14b5271f0

int __thiscall UDS_QuantityData::GetTotalQuantity(UDS_QuantityData *this)

{
  return 0;
}

// GetTradableQuantity @ 14b527200

int __thiscall UDS_QuantityData::GetTradableQuantity(UDS_QuantityData *this)

{
  return 0;
}

// GetUnTradableQuantity @ 14b527210

int __thiscall UDS_QuantityData::GetUnTradableQuantity(UDS_QuantityData *this)

{
  return 0;
}

// SetMaxQuantity @ 14b5272e0

void __thiscall UDS_QuantityData::SetMaxQuantity(UDS_QuantityData *this,int param_1)

{
  return;
}

// SetModifiedTradableQuantity @ 14b5272f0

void __thiscall UDS_QuantityData::SetModifiedTradableQuantity(UDS_QuantityData *this,int param_1)

{
  return;
}

// SetModifiedUnTradableQuantity @ 14b527300

void __thiscall UDS_QuantityData::SetModifiedUnTradableQuantity(UDS_QuantityData *this,int param_1)

{
  return;
}

// SetTotalQuantity @ 14b527310

void __thiscall UDS_QuantityData::SetTotalQuantity(UDS_QuantityData *this,int param_1)

{
  return;
}

// SetTradableQuantity @ 14b527320

void __thiscall UDS_QuantityData::SetTradableQuantity(UDS_QuantityData *this,int param_1)

{
  return;
}

// SetUnTradableQuantity @ 14b527330

void __thiscall UDS_QuantityData::SetUnTradableQuantity(UDS_QuantityData *this,int param_1)

{
  return;
}

// StaticRegisterNativesUDS_QuantityData @ 14b5276f0

void __cdecl UDS_QuantityData::StaticRegisterNativesUDS_QuantityData(void)

{
  return;
}

// Undo @ 14b527710

void __thiscall UDS_QuantityData::Undo(UDS_QuantityData *this)

{
  return;
}

// GetItemUID @ 14bcf8ff0

long64 __thiscall UDS_QuantityData::GetItemUID(UDS_QuantityData *this)

{
  return this->ItemUID;
}

// GetMaxQuantity @ 14bcf9170

int __thiscall UDS_QuantityData::GetMaxQuantity(UDS_QuantityData *this)

{
  return this->MaxQuantity;
}

// Init @ 14bd01100

void __thiscall UDS_QuantityData::Init(UDS_QuantityData *this,long64 param_1,int param_2)

{
  this->ItemUID = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014bd0110a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this,param_2);
  return;
}

// IsValid @ 14bd068c0

bool __thiscall UDS_QuantityData::IsValid(UDS_QuantityData *this)

{
  int iVar1;
  
  if (0 < this->ItemUID) {
    iVar1 = (**(code **)(this->_padding_ + 0x2f8))();
    if (0 < iVar1) {
      return true;
    }
  }
  return false;
}

