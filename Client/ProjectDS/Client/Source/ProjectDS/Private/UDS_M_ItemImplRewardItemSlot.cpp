// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b519b80

UClass * __cdecl UDS_M_ItemImplRewardItemSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplRewardItemSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplRewardItemSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplRewardItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplRewardItemSlot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplRewardItemSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplRewardItemSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplRewardItemSlot.InnerSingleton;
}

// UDS_M_ItemImplRewardItemSlot @ 14b5219d0

UDS_M_ItemImplRewardItemSlot * __thiscall
UDS_M_ItemImplRewardItemSlot::UDS_M_ItemImplRewardItemSlot
          (UDS_M_ItemImplRewardItemSlot *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->bIsFirstClearReward = false;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// UDS_M_ItemImplRewardItemSlot @ 14b521a40

UDS_M_ItemImplRewardItemSlot * __thiscall
UDS_M_ItemImplRewardItemSlot::UDS_M_ItemImplRewardItemSlot
          (UDS_M_ItemImplRewardItemSlot *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->bIsFirstClearReward = false;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// ~UDS_M_ItemImplRewardItemSlot @ 14b523290

void __thiscall
UDS_M_ItemImplRewardItemSlot::~UDS_M_ItemImplRewardItemSlot(UDS_M_ItemImplRewardItemSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b525f20

UClass * __cdecl UDS_M_ItemImplRewardItemSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplRewardItemSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplRewardItemSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplRewardItemSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplRewardItemSlot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplRewardItemSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplRewardItemSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplRewardItemSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplRewardItemSlot @ 14b5274d0

void __cdecl UDS_M_ItemImplRewardItemSlot::StaticRegisterNativesUDS_M_ItemImplRewardItemSlot(void)

{
  return;
}

// InitItemImplMap @ 14bd686d0

void __thiscall UDS_M_ItemImplRewardItemSlot::InitItemImplMap(UDS_M_ItemImplRewardItemSlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplRewardItemSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 6;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 6) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x06') {
        if (lVar2 != 0) goto LAB_14bd68794;
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
             &DAT_00000006,(bool *)&local_18);
LAB_14bd68794:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplRewardItemSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0x45;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0x45) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == 'E') {
        if (lVar2 != 0) goto LAB_14bd68844;
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
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)0x45,
             (bool *)&local_18);
LAB_14bd68844:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplRewardItemSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0x48;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0x48) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == 'H') {
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
             &DAT_00000048,(bool *)&local_18);
  return;
}

// IsDimmed @ 14bd6b540

bool __thiscall UDS_M_ItemImplRewardItemSlot::IsDimmed(UDS_M_ItemImplRewardItemSlot *this)

{
  bool bVar1;
  UDS_DungeonManager *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  bVar1 = UDS_M_ItemImplBase::IsDimmed((UDS_M_ItemImplBase *)this);
  if (bVar1) {
    return true;
  }
  pUVar2 = UDS_DungeonManager::GetInst();
  if (pUVar2 != (UDS_DungeonManager *)0x0) {
    UDS_DungeonRecordData::GetData
              ((ulong64)local_res10,UDS_PlayerData::MainPlayerEntityID,
               SUB41(pUVar2->SelectedDungeonID,0));
    bVar1 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)local_res10,
                       (void *)0x0);
    if ((!bVar1) && (this->bIsFirstClearReward != false)) {
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      return (bool)pUVar3[2].field_0x14;
    }
  }
  return false;
}

// SetFirstClearReWard @ 14bd88730

void __thiscall
UDS_M_ItemImplRewardItemSlot::SetFirstClearReWard(UDS_M_ItemImplRewardItemSlot *this,bool param_1)

{
  this->bIsFirstClearReward = param_1;
  return;
}

