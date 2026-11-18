// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b51c110

UClass * __cdecl UDS_M_ItemImplInventorySlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplInventorySlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplInventorySlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplInventorySlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplInventorySlot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplInventorySlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplInventorySlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplInventorySlot.InnerSingleton;
}

// UDS_M_ItemImplInventorySlot @ 14b5211b0

UDS_M_ItemImplInventorySlot * __thiscall
UDS_M_ItemImplInventorySlot::UDS_M_ItemImplInventorySlot
          (UDS_M_ItemImplInventorySlot *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->OwnedCount = 0;
  return this;
}

// UDS_M_ItemImplInventorySlot @ 14b521220

UDS_M_ItemImplInventorySlot * __thiscall
UDS_M_ItemImplInventorySlot::UDS_M_ItemImplInventorySlot
          (UDS_M_ItemImplInventorySlot *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->OwnedCount = 0;
  return this;
}

// GetPrivateStaticClass @ 14b525920

UClass * __cdecl UDS_M_ItemImplInventorySlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplInventorySlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplInventorySlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplInventorySlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplInventorySlot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplInventorySlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplInventorySlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplInventorySlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplInventorySlot @ 14b527450

void __cdecl UDS_M_ItemImplInventorySlot::StaticRegisterNativesUDS_M_ItemImplInventorySlot(void)

{
  return;
}

// ~UDS_M_ItemImplInventorySlot @ 14bd43d30

void __thiscall
UDS_M_ItemImplInventorySlot::~UDS_M_ItemImplInventorySlot(UDS_M_ItemImplInventorySlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetOwnedQuantity @ 14bd5ed90

int __thiscall UDS_M_ItemImplInventorySlot::GetOwnedQuantity(UDS_M_ItemImplInventorySlot *this)

{
  return this->OwnedCount;
}

// InitItemImplMap @ 14bd67a60

void __thiscall UDS_M_ItemImplInventorySlot::InitItemImplMap(UDS_M_ItemImplInventorySlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplInventorySlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 2;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 2) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x02') {
        if (lVar2 != 0) {
          return;
        }
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_18 = local_res10;
  local_10 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&UDS_M_ItemImplBase::ItemImplMap,(uint)local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_00000002,(bool *)&local_18);
  return;
}

// IsSelected @ 14bd6ca90

bool __thiscall UDS_M_ItemImplInventorySlot::IsSelected(UDS_M_ItemImplInventorySlot *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar6);
  return bVar2;
}

// SetOwnedQuantity @ 14bd8a500

void __thiscall
UDS_M_ItemImplInventorySlot::SetOwnedQuantity(UDS_M_ItemImplInventorySlot *this,int param_1)

{
  this->OwnedCount = param_1;
  return;
}

