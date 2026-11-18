// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b58c4b0

UClass * __cdecl UDS_ShopManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ShopManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ShopManager",
               &Z_Registration_Info_UClass_UDS_ShopManager.InnerSingleton,
               StaticRegisterNativesUDS_ShopManager,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ShopManager>,InternalVTableHelperCtorCaller<UDS_ShopManager>,
               local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ShopManager.InnerSingleton;
}

// UDS_ShopManager @ 14b58de80

UDS_ShopManager * __thiscall
UDS_ShopManager::UDS_ShopManager(UDS_ShopManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ShopManager__6B_;
  *(undefined8 *)&this->NpcShopBuyLimitTable = 0;
  *(undefined8 *)&(this->NpcShopBuyLimitTable).field_0x8 = 0;
  *(undefined8 *)&(this->NpcShopBuyLimitTable).field_0x20 = 0;
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x28 = 0;
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x34 = 0;
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NpcShopBuyLimitTable).field_0x40 = 0;
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x48 = 0;
  this->IsDirty = false;
  *(undefined8 *)&this->NpcShopBuyLimitChangedDelegate = 0;
  *(undefined8 *)&(this->NpcShopBuyLimitChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->NpcShopBuyLimitChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->NpcShopBuyLimitChangedDelegate).field_0x18 = 2;
  return this;
}

// UDS_ShopManager @ 14b58df00

UDS_ShopManager * __thiscall
UDS_ShopManager::UDS_ShopManager(UDS_ShopManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ShopManager__6B_;
  *(undefined8 *)&this->NpcShopBuyLimitTable = 0;
  *(undefined8 *)&(this->NpcShopBuyLimitTable).field_0x8 = 0;
  *(undefined8 *)&(this->NpcShopBuyLimitTable).field_0x20 = 0;
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x28 = 0;
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x34 = 0;
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NpcShopBuyLimitTable).field_0x40 = 0;
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x48 = 0;
  this->IsDirty = false;
  *(undefined8 *)&this->NpcShopBuyLimitChangedDelegate = 0;
  *(undefined8 *)&(this->NpcShopBuyLimitChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->NpcShopBuyLimitChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->NpcShopBuyLimitChangedDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_ShopManager @ 14b58e4a0

void __thiscall UDS_ShopManager::~UDS_ShopManager(UDS_ShopManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ShopManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NpcShopBuyLimitChangedDelegate).field_0x8,
             *(int *)&(this->NpcShopBuyLimitChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->NpcShopBuyLimitChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NpcShopBuyLimitChangedDelegate);
  *(undefined4 *)&(this->NpcShopBuyLimitTable).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NpcShopBuyLimitTable).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_ShopBuyLimitTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ShopBuyLimitTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ShopBuyLimitTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NpcShopBuyLimitTable);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b58ef90

UClass * __cdecl UDS_ShopManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ShopManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ShopManager",
               &Z_Registration_Info_UClass_UDS_ShopManager.InnerSingleton,
               StaticRegisterNativesUDS_ShopManager,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ShopManager>,InternalVTableHelperCtorCaller<UDS_ShopManager>,
               local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ShopManager.InnerSingleton;
}

// Init @ 14b58f340

void __thiscall UDS_ShopManager::Init(UDS_ShopManager *this)

{
  return;
}

// StaticRegisterNativesUDS_ShopManager @ 14b58f3a0

void __cdecl UDS_ShopManager::StaticRegisterNativesUDS_ShopManager(void)

{
  return;
}

// DateCheckNpcShopBuyLimitTable @ 14bb5ce40

void __thiscall UDS_ShopManager::DateCheckNpcShopBuyLimitTable(UDS_ShopManager *this)

{
  TMap<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  TMap<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  FDateTime *pFVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  int local_res20;
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  TMap<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  longlong local_90;
  TMap<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FDateTime local_58 [3];
  
  dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar5 = dVar5 * __real_416312d000000000;
  uVar8 = 1;
  iVar16 = 0;
  pFVar9 = FDateTime::FDateTime(local_58,0x7b2,1,1,0,0,0,0);
  this_00 = &this->NpcShopBuyLimitTable;
  local_a8 = 0;
  local_90 = pFVar9->Ticks + (longlong)dVar5;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_b8 = &(this->NpcShopBuyLimitTable).field_0x10;
  local_d0 = 0;
  iStack_cc = 0;
  iVar3 = *(int *)&(this->NpcShopBuyLimitTable).field_0x28;
  iStack_ac = iVar16;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->NpcShopBuyLimitTable).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_b8;
    }
    uVar17 = *puVar19;
    local_a8 = 0;
    iVar16 = 0;
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar16;
      local_a8 = local_a8 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_ac = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14bb5cf2d;
      uVar17 = puVar19[lVar10 + 1];
    }
    uVar8 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iStack_ac = local_a8 + -1 + local_res20;
    if (iVar3 < iStack_ac) {
      iStack_ac = iVar3;
    }
  }
LAB_14bb5cf2d:
  uVar17 = *(uint *)&(this->NpcShopBuyLimitTable).field_0x28;
  puVar1 = &(this->NpcShopBuyLimitTable).field_0x10;
  uVar15 = uVar17 & 0xffffffe0;
  iStack_a0 = *(int *)&(this->NpcShopBuyLimitTable).field_0x8 -
              *(int *)&(this->NpcShopBuyLimitTable).field_0x34;
  uStack_b0 = 0xffffffff;
  TStack_80.CurrentBitIndex = iStack_ac;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uVar8,iVar16);
  iVar12 = (int)uVar17 >> 5;
  TStack_80._28_4_ = iStack_ac;
  TStack_80.BaseBitIndex = local_a8;
  uStack_60 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = this_00;
  iStack_c0 = iVar16;
  uStack_bc = uVar8;
  iStack_a4 = iStack_ac;
  local_88 = this_00;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar10 = local_90;
  uVar8 = *(uint *)&(this->NpcShopBuyLimitTable).field_0x28;
  if (uVar17 != uVar8) {
    puVar18 = *(undefined1 **)&(this->NpcShopBuyLimitTable).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bb5d031;
      uVar17 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_98 = (int)lVar11;
    uVar17 = local_98 + -1 + uVar15;
    if ((int)uVar8 < (int)uVar17) {
      uVar17 = uVar8;
    }
  }
LAB_14bb5d031:
  while( true ) {
    pTVar6 = local_88;
    if (*(int *)(&local_88->field_0x0 + 8) - *(int *)(&local_88->field_0x0 + 0x34) != (int)uStack_60
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FDS_ShopBuyLimitTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    iVar3 = local_d0;
    if (((TStack_80.CurrentBitIndex == uVar17) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == this_00))
    break;
    pFVar13 = (FScriptContainerElement *)
              (*(longlong *)&pTVar6->field_0x0 + (longlong)TStack_80.CurrentBitIndex * 0x30);
    if (*(longlong *)(pFVar13 + 0x18) < lVar10) {
      if (((local_d8.Data <= pFVar13) && (pFVar13 < local_d8.Data + (longlong)iStack_cc * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_d8,&iStack_cc);
      }
      lVar11 = (longlong)local_d0;
      local_d0 = local_d0 + 1;
      *(uint *)(local_d8.Data + lVar11 * 4) = *(uint *)pFVar13;
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  pFVar13 = local_d8.Data + (longlong)local_d0 * 4;
  FVar14.Data = local_d8.Data;
  while( true ) {
    if (local_d0 != iVar3) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar14.Data == pFVar13) break;
    local_res18[0] = *(uint *)FVar14.Data;
    if (*(int *)&(this->NpcShopBuyLimitTable).field_0x8 !=
        *(int *)&(this->NpcShopBuyLimitTable).field_0x34) {
      TSet<TTuple<int,FDS_ShopBuyLimitTable>,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,FDS_ShopBuyLimitTable>,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>,FDefaultSetAllocator>
                         *)this_00,local_res18[0],(int *)local_res18);
    }
    FVar14.Data = FVar14.Data + 4;
  }
  bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->NpcShopBuyLimitChangedDelegate);
  if (bVar7) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->NpcShopBuyLimitChangedDelegate);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// GetInst @ 14bb65ef0

UDS_ShopManager * __cdecl UDS_ShopManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_ShopManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_ShopManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_ShopManager_NoRegister();
  pUVar3 = (UDS_ShopManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ShopManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_ShopManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_ShopManager *)0x0;
}

// GetNpcShopBuyLimitTable @ 14bb66ff0

FDS_ShopBuyLimitTable * __thiscall
UDS_ShopManager::GetNpcShopBuyLimitTable(UDS_ShopManager *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_ShopBuyLimitTable *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->NpcShopBuyLimitTable).field_0x8 !=
      *(int *)&(this->NpcShopBuyLimitTable).field_0x34) {
    puVar4 = *(undefined1 **)&(this->NpcShopBuyLimitTable).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->NpcShopBuyLimitTable).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->NpcShopBuyLimitTable).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->NpcShopBuyLimitTable;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x30) == param_1) {
          pFVar3 = TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                   ::FindChecked((TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                                  *)&this->NpcShopBuyLimitTable,param_1);
          return pFVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x28 + (longlong)iVar2 * 0x30);
      } while (iVar2 != -1);
    }
  }
  return (FDS_ShopBuyLimitTable *)0x0;
}

// Update @ 14bb96220

void __thiscall UDS_ShopManager::Update(UDS_ShopManager *this,float *param_1)

{
  if (this->IsDirty == true) {
    this->IsDirty = false;
    DateCheckNpcShopBuyLimitTable(this);
    return;
  }
  return;
}

// UpdateNpcShopBuyLimitTable @ 14bb97cc0

void __thiscall
UDS_ShopManager::UpdateNpcShopBuyLimitTable(UDS_ShopManager *this,SqlShopBuyLimitTable *param_1)

{
  bool bVar1;
  int iVar2;
  FDateTime FVar3;
  FDS_ShopBuyLimitTable *pFVar4;
  undefined1 *puVar5;
  long64 lVar6;
  uint local_res8 [4];
  uint *local_48;
  long64 *local_40;
  long64 local_38;
  uint local_30;
  undefined8 local_28;
  int local_20;
  
  local_res8[0] = (param_1->_impl_).shop_list_id_;
  if (*(int *)&(this->NpcShopBuyLimitTable).field_0x8 ==
      *(int *)&(this->NpcShopBuyLimitTable).field_0x34) {
    lVar6 = (param_1->_impl_).player_uid_;
  }
  else {
    puVar5 = *(undefined1 **)&(this->NpcShopBuyLimitTable).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->NpcShopBuyLimitTable).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->NpcShopBuyLimitTable).field_0x48 - 1U & local_res8[0]
                              ) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->NpcShopBuyLimitTable + (longlong)iVar2 * 0x30) ==
            local_res8[0]) {
          lVar6 = (param_1->_impl_).player_uid_;
          if (iVar2 == -1) goto LAB_14bb97d46;
          pFVar4 = TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                   ::FindChecked((TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                                  *)&this->NpcShopBuyLimitTable,local_res8[0]);
          pFVar4->PlayerUID = lVar6;
          iVar2 = (param_1->_impl_).shop_list_id_;
          pFVar4 = TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                   ::FindChecked((TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                                  *)&this->NpcShopBuyLimitTable,local_res8[0]);
          pFVar4->ShopListId = iVar2;
          FVar3 = DS_Util::ConvertTimestampToDateTime((Timestamp *)(local_res8 + 2));
                    /* WARNING: Load size is inaccurate */
          lVar6 = *FVar3.Ticks;
          pFVar4 = TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                   ::FindChecked((TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                                  *)&this->NpcShopBuyLimitTable,local_res8[0]);
          (pFVar4->NextDateTime).Ticks = lVar6;
          iVar2 = (param_1->_impl_).quantity_;
          pFVar4 = TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                   ::FindChecked((TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
                                  *)&this->NpcShopBuyLimitTable,local_res8[0]);
          pFVar4->Quantity = iVar2;
          goto LAB_14bb97da4;
        }
        iVar2 = *(int *)(*(longlong *)&this->NpcShopBuyLimitTable + 0x28 + (longlong)iVar2 * 0x30);
      } while (iVar2 != -1);
    }
    lVar6 = (param_1->_impl_).player_uid_;
  }
LAB_14bb97d46:
  local_38 = lVar6;
  local_30 = local_res8[0];
  FVar3 = DS_Util::ConvertTimestampToDateTime((Timestamp *)(local_res8 + 2));
  local_28 = *(undefined8 *)FVar3.Ticks;
  local_20 = (param_1->_impl_).quantity_;
  local_48 = local_res8;
  local_40 = &local_38;
  TSet<TTuple<int,FDS_ShopBuyLimitTable>,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FDS_ShopBuyLimitTable_const_&>_>
            ((TSet<TTuple<int,FDS_ShopBuyLimitTable>,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>,FDefaultSetAllocator>
              *)&this->NpcShopBuyLimitTable,
             (TPairInitializer<int_const_&,FDS_ShopBuyLimitTable_const_&> *)(local_res8 + 2),
             (bool *)&local_48);
LAB_14bb97da4:
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->NpcShopBuyLimitChangedDelegate);
  if (bVar1) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->NpcShopBuyLimitChangedDelegate);
  }
  return;
}

