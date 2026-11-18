// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 41

// FPersistentStatContainerBase @ 148bc3150

FPersistentStatContainerBase * __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::FPersistentStatContainerBase
          (FPersistentStatContainerBase *this)

{
  this->_padding_ =
       (longlong)&___7FPersistentStatContainerBase_PersistentStats_InstallBundleUtil__6B_;
  *(undefined8 *)&(this->PerBundlePersistentStatMap).field_0x10 = 0;
  *(undefined8 *)&(this->PerBundlePersistentStatMap).field_0x18 = 0;
  *(undefined8 *)&(this->PerBundlePersistentStatMap).field_0x38 = 0;
  *(undefined8 *)&(this->PerBundlePersistentStatMap).field_0x48 = 0;
  *(undefined8 *)&this->PerBundlePersistentStatMap = 0;
  *(undefined8 *)&(this->PerBundlePersistentStatMap).field_0x8 = 0;
  *(undefined8 *)&(this->PerBundlePersistentStatMap).field_0x20 = 0;
  *(undefined4 *)&(this->PerBundlePersistentStatMap).field_0x28 = 0;
  *(undefined4 *)&(this->PerBundlePersistentStatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerBundlePersistentStatMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerBundlePersistentStatMap).field_0x34 = 0;
  *(undefined8 *)&(this->PerBundlePersistentStatMap).field_0x40 = 0;
  *(undefined8 *)&(this->SessionPersistentStatMap).field_0x10 = 0;
  *(undefined8 *)&(this->SessionPersistentStatMap).field_0x18 = 0;
  *(undefined8 *)&(this->SessionPersistentStatMap).field_0x38 = 0;
  *(undefined8 *)&(this->SessionPersistentStatMap).field_0x48 = 0;
  *(undefined8 *)&this->SessionPersistentStatMap = 0;
  *(undefined8 *)&(this->SessionPersistentStatMap).field_0x8 = 0;
  *(undefined8 *)&(this->SessionPersistentStatMap).field_0x20 = 0;
  *(undefined4 *)&(this->SessionPersistentStatMap).field_0x28 = 0;
  *(undefined4 *)&(this->SessionPersistentStatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SessionPersistentStatMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SessionPersistentStatMap).field_0x34 = 0;
  *(undefined8 *)&(this->SessionPersistentStatMap).field_0x40 = 0;
  (this->TickHandle).Object = (FElement *)0x0;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OnApp_EnteringForegroundHandle).ID = 0;
  (this->OnApp_EnteringBackgroundHandle).ID = 0;
  this->TimerAutoUpdateTimeRemaining = 10.0;
  this->TimerDirtyStatUpdateTimeRemaining = 10.0;
  this->bShouldAutoUpdateTimersInTick = true;
  this->TimerAutoUpdateRate = 10.0;
  this->bShouldSaveDirtyStatsOnTick = true;
  this->DirtyStatSaveToDiskRate = 5.0;
  this->bShouldAutoHandleFGBGStats = true;
  InitializeBase(this);
  return this;
}

// ~FPersistentStatContainerBase @ 148bc3f50

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::~FPersistentStatContainerBase
          (FPersistentStatContainerBase *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar2 = &this->TickHandle;
  this->_padding_ =
       (longlong)&___7FPersistentStatContainerBase_PersistentStats_InstallBundleUtil__6B_;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar2->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->TickHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  if ((this->OnApp_EnteringForegroundHandle).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::ApplicationHasEnteredForegroundDelegate,
               (FDelegateHandle)(this->OnApp_EnteringForegroundHandle).ID);
    (this->OnApp_EnteringForegroundHandle).ID = 0;
  }
  if ((this->OnApp_EnteringBackgroundHandle).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,
               (FDelegateHandle)(this->OnApp_EnteringBackgroundHandle).ID);
    (this->OnApp_EnteringBackgroundHandle).ID = 0;
  }
  pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  *(undefined4 *)&(this->SessionPersistentStatMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->SessionPersistentStatMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SessionPersistentStatMap);
  *(undefined4 *)&(this->PerBundlePersistentStatMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->PerBundlePersistentStatMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerBundlePersistentStatMap);
  return;
}

// GetBundleStat @ 148bca970

FBundlePersistentStats * __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::GetBundleStat
          (FPersistentStatContainerBase *this,FName param_1)

{
  FBundlePersistentStats *pFVar1;
  
  pFVar1 = TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
           ::Find((TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
                   *)&this->PerBundlePersistentStatMap,param_1);
  return pFVar1;
}

// GetSessionStat @ 148bcca70

FSessionPersistentStats * __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::GetSessionStat
          (FPersistentStatContainerBase *this,FString *param_1)

{
  FSessionPersistentStats *pFVar1;
  
  pFVar1 = TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
           ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
                   *)&this->SessionPersistentStatMap,param_1);
  return pFVar1;
}

// IncrementBundlePersistentCounter @ 148bce5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::IncrementBundlePersistentCounter
          (FPersistentStatContainerBase *this,FName param_1,ECountStatNames param_2)

{
  int iVar1;
  ulonglong uVar2;
  FName FVar3;
  uint uVar4;
  FBundlePersistentStats *pFVar5;
  FString *pFVar6;
  int *piVar7;
  FName *pFVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  int iVar11;
  uint uVar12;
  FName local_res10 [3];
  undefined1 auStackY_158 [32];
  ECountStatNames local_128 [8];
  FName local_120;
  FName *local_118;
  undefined1 local_108 [16];
  undefined8 uStack_f8;
  TBitArray<FDefaultBitArrayAllocator> local_f0;
  longlong local_d0;
  longlong lStack_c8;
  void *local_c0;
  ulonglong uStack_b8;
  undefined1 local_b0 [24];
  longlong lStack_98;
  void *local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong lStack_78;
  void *local_70;
  ulonglong uStack_68;
  void *local_60;
  longlong lStack_58;
  undefined2 local_50;
  undefined1 local_4e;
  FString local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_108._8_8_ = (void *)0x0;
  uStack_f8 = 0;
  local_f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c0 = (void *)0x0;
  iVar11 = 0;
  uStack_b8 = 0;
  local_b0._0_8_ = (FScriptContainerElement *)0x0;
  local_b0._8_8_ = 0;
  lStack_c8 = 0;
  local_90 = (void *)0x0;
  lStack_78 = 0;
  local_70 = (void *)0x0;
  local_f0._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_d0 = _UNK_150631d98;
  uStack_88 = ___xmm_00000000ffffffff0000008000000000;
  local_80 = _UNK_150631d98;
  uStack_68 = 0;
  local_60 = (void *)0x0;
  lStack_58 = 0;
  local_f0.AllocatorInstance.InlineData[0] = '\0';
  local_f0.AllocatorInstance.InlineData[1] = '\0';
  local_f0.AllocatorInstance.InlineData[2] = '\0';
  local_f0.AllocatorInstance.InlineData[3] = '\0';
  local_f0.AllocatorInstance.InlineData[4] = '\0';
  local_f0.AllocatorInstance.InlineData[5] = '\0';
  local_f0.AllocatorInstance.InlineData[6] = '\0';
  local_f0.AllocatorInstance.InlineData[7] = '\0';
  local_f0.AllocatorInstance.InlineData[8] = '\0';
  local_f0.AllocatorInstance.InlineData[9] = '\0';
  local_f0.AllocatorInstance.InlineData[10] = '\0';
  local_f0.AllocatorInstance.InlineData[0xb] = '\0';
  local_f0.AllocatorInstance.InlineData[0xc] = '\0';
  local_f0.AllocatorInstance.InlineData[0xd] = '\0';
  local_f0.AllocatorInstance.InlineData[0xe] = '\0';
  local_f0.AllocatorInstance.InlineData[0xf] = '\0';
  local_50 = 0;
  local_b0._16_8_ = 0;
  lStack_98 = 0;
  local_4e = 0;
  local_108._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  local_res10[0] = param_1;
  local_128[0] = param_2;
  local_120 = param_1;
  ::FName::ToString(&local_120,&local_48);
  FVar3 = local_res10[0];
  uVar4 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  uVar4 = uVar4 + FVar3.Number;
  if (*(int *)&(this->PerBundlePersistentStatMap).field_0x8 !=
      *(int *)&(this->PerBundlePersistentStatMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->PerBundlePersistentStatMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->PerBundlePersistentStatMap).field_0x38;
    }
    uVar12 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&(this->PerBundlePersistentStatMap).field_0x48 - 1U & uVar4
                                ) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        pFVar8 = (FName *)((longlong)(int)uVar12 * 0xe0 +
                          *(longlong *)&this->PerBundlePersistentStatMap);
        if (*pFVar8 == local_res10[0]) {
          if (pFVar8 != (FName *)0x0) {
            pFVar5 = (FBundlePersistentStats *)(pFVar8 + 1);
            goto LAB_148bce6fa;
          }
          break;
        }
        uVar12 = pFVar8[0x1b].ComparisonIndex.Value;
      } while (uVar12 != 0xffffffff);
    }
  }
  pFVar5 = TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
           ::EmplaceByHash<FName_const_&,InstallBundleUtil::PersistentStats::FBundlePersistentStats>
                     ((TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
                       *)&this->PerBundlePersistentStatMap,uVar4,local_res10,
                      (FBundlePersistentStats *)local_108);
LAB_148bce6fa:
  local_108._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_108._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b0,0,local_b0._8_4_);
  iVar1 = SUB84(local_b0._8_8_,4);
  local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
  }
  uVar4 = uStack_88._4_4_;
  local_80 = 0xffffffff;
  uStack_88 = (ulonglong)uStack_88._4_4_ << 0x20;
  if (0x80 < uVar4) {
    uStack_88 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  uStack_b8 = uStack_b8 & 0xffffffff00000000;
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_108 + 8),0,(int)uStack_f8);
  uVar2 = uStack_f8 >> 0x20;
  uStack_f8 = uStack_f8 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(local_108 + 8),0,(int *)((longlong)&uStack_f8 + 4));
  }
  iVar1 = local_f0.MaxBits;
  local_d0 = 0xffffffff;
  local_f0._24_8_ = (ulonglong)(uint)local_f0.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_f0.NumBits = 0;
    local_f0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_f0,0);
  }
  if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f0.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_108._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._8_8_);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_108);
  pFVar6 = PersistentStats::LexToString(local_128[0]);
  iVar1 = (pFVar6->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    iVar11 = iVar1 + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar10);
  piVar7 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                       *)&pFVar5->_padding_,uVar4,pFVar6);
  *piVar7 = *piVar7 + 1;
  *(undefined1 *)((longlong)&pFVar5->_padding_ + 1) = 1;
  if ((char)pFVar5->_padding_ == '\0') {
    local_120 = (FName)local_128;
    local_118 = local_res10;
    `InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::
    IncrementBundlePersistentCounter'::__l2::<lambda_1>::operator()(&local_120);
  }
  return;
}

// IncrementSessionPersistentCounter @ 148bce970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::IncrementSessionPersistentCounter
          (FPersistentStatContainerBase *this,FString *param_1,ECountStatNames param_2)

{
  ulonglong uVar1;
  uint uVar2;
  FSessionPersistentStats *pFVar3;
  FString *pFVar4;
  int *piVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined1 auStackY_178 [32];
  ECountStatNames local_148 [8];
  ECountStatNames *local_140;
  FString *local_138;
  undefined1 local_128 [16];
  undefined8 uStack_118;
  TBitArray<FDefaultBitArrayAllocator> local_110;
  longlong local_f0;
  longlong lStack_e8;
  void *local_e0;
  ulonglong uStack_d8;
  undefined1 local_d0 [24];
  longlong lStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  void *local_90;
  ulonglong uStack_88;
  void *local_80;
  longlong lStack_78;
  undefined2 local_70;
  undefined1 local_6e;
  FString local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_70 = 0;
  local_128._8_8_ = (void *)0x0;
  uStack_118 = 0;
  local_110.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e0 = (void *)0x0;
  iVar9 = 0;
  uStack_d8 = 0;
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  lStack_e8 = 0;
  local_d0._8_8_ = 0;
  lStack_98 = 0;
  local_b0 = (void *)0x0;
  local_110._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_f0 = _UNK_150631d98;
  uStack_a8 = ___xmm_00000000ffffffff0000008000000000;
  local_a0 = _UNK_150631d98;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  lStack_78 = 0;
  local_110.AllocatorInstance.InlineData[0] = '\0';
  local_110.AllocatorInstance.InlineData[1] = '\0';
  local_110.AllocatorInstance.InlineData[2] = '\0';
  local_110.AllocatorInstance.InlineData[3] = '\0';
  local_110.AllocatorInstance.InlineData[4] = '\0';
  local_110.AllocatorInstance.InlineData[5] = '\0';
  local_110.AllocatorInstance.InlineData[6] = '\0';
  local_110.AllocatorInstance.InlineData[7] = '\0';
  local_110.AllocatorInstance.InlineData[8] = '\0';
  local_110.AllocatorInstance.InlineData[9] = '\0';
  local_110.AllocatorInstance.InlineData[10] = '\0';
  local_110.AllocatorInstance.InlineData[0xb] = '\0';
  local_110.AllocatorInstance.InlineData[0xc] = '\0';
  local_110.AllocatorInstance.InlineData[0xd] = '\0';
  local_110.AllocatorInstance.InlineData[0xe] = '\0';
  local_110.AllocatorInstance.InlineData[0xf] = '\0';
  local_6e = 0;
  local_d0._16_8_ = 0;
  lStack_b8 = 0;
  local_128._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  local_148[0] = param_2;
  ::FString::FString(&local_68,param_1);
  iVar6 = (param_1->Data).ArrayNum;
  pwVar8 = L"";
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  if (iVar6 == 0) {
    pwVar7 = L"";
    iVar6 = iVar9;
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar6 = iVar6 + -1;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  pFVar3 = TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
           ::
           FindOrAddImpl<FString_const_&,InstallBundleUtil::PersistentStats::FSessionPersistentStats>
                     ((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
                       *)&this->SessionPersistentStatMap,uVar2,param_1,
                      (FSessionPersistentStats *)local_128);
  local_128._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_128._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  uStack_88 = uStack_88 & 0xffffffff00000000;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d0,0,local_d0._8_4_);
  iVar6 = SUB84(local_d0._8_8_,4);
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
  }
  uVar2 = uStack_a8._4_4_;
  local_a0 = 0xffffffff;
  uStack_a8 = (ulonglong)uStack_a8._4_4_ << 0x20;
  if (0x80 < uVar2) {
    uStack_a8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d0._0_8_);
  }
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_128 + 8),0,(int)uStack_118);
  uVar1 = uStack_118 >> 0x20;
  uStack_118 = uStack_118 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(local_128 + 8),0,(int *)((longlong)&uStack_118 + 4));
  }
  iVar6 = local_110.MaxBits;
  local_f0 = 0xffffffff;
  local_110._24_8_ = (ulonglong)(uint)local_110.MaxBits << 0x20;
  if (0x80 < (uint)iVar6) {
    local_110.NumBits = 0;
    local_110.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_110,0);
  }
  if (local_110.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_110.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_128._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_128._8_8_);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_128);
  pFVar4 = PersistentStats::LexToString(local_148[0]);
  iVar6 = (pFVar4->Data).ArrayNum;
  if (iVar6 != 0) {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    iVar9 = iVar6 + -1;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar8);
  piVar5 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                       *)&pFVar3->_padding_,uVar2,pFVar4);
  *piVar5 = *piVar5 + 1;
  *(undefined1 *)((longlong)&pFVar3->_padding_ + 1) = 1;
  if ((char)pFVar3->_padding_ == '\0') {
    local_140 = local_148;
    local_138 = param_1;
    `InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::
    IncrementSessionPersistentCounter'::__l2::<lambda_1>::operator()(&local_140);
  }
  return;
}

// InitializeBase @ 148bcecb0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::InitializeBase
          (FPersistentStatContainerBase *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FTSTicker *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  TWeakPtr<FTSTicker::FElement,1> *pTVar7;
  FDelegateHandle FVar8;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FConfigCacheIni::GetBool
            (GConfig,L"InstallBundleManager.PersistentStatSettings",L"bShouldAutoUpdateTimersInTick"
             ,&this->bShouldAutoUpdateTimersInTick,&GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"InstallBundleManager.PersistentStatSettings",L"TimerAutoUpdateRate",
             &this->TimerAutoUpdateRate,&GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"InstallBundleManager.PersistentStatSettings",L"bShouldSaveDirtyStatsOnTick",
             &this->bShouldSaveDirtyStatsOnTick,&GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"InstallBundleManager.PersistentStatSettings",L"DirtyStatSaveToDiskRate",
             &this->DirtyStatSaveToDiskRate,&GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"InstallBundleManager.PersistentStatSettings",L"bShouldAutoHandleFGBGStats",
             &this->bShouldAutoHandleFGBGStats,&GEngineIni);
  (**(code **)(this->_padding_ + 0x98))(this);
  (**(code **)(this->_padding_ + 0xa0))(this);
  if (((this->bShouldAutoUpdateTimersInTick != false) ||
      (this->bShouldSaveDirtyStatsOnTick != false)) &&
     ((pTVar2 = &this->TickHandle, pTVar2->Object == (FElement *)0x0 ||
      ((pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController,
       pTVar4 == (TReferenceControllerBase<1> *)0x0 || ((int)pTVar4->SharedReferenceCount < 1))))))
  {
    this_00 = FTSTicker::GetCoreTicker();
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFPersistentStatContainerBase_PersistentStats_InstallBundleUtil____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[4] = _vcall__144__flat______;
      puVar5[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar7 = FTSTicker::AddTicker
                       (this_00,&local_68,
                        (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58,0.0);
    if (pTVar2 != pTVar7) {
      pTVar2->Object = pTVar7->Object;
      pTVar7->Object = (FElement *)0x0;
      pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      (this->TickHandle).WeakReferenceCount.ReferenceController =
           (pTVar7->WeakReferenceCount).ReferenceController;
      (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_68.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  if (this->bShouldAutoHandleFGBGStats != false) {
    if ((this->OnApp_EnteringForegroundHandle).ID == 0) {
      FVar8 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
              AddRaw<InstallBundleUtil::PersistentStats::FPersistentStatContainerBase>
                        ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                          *)&FCoreDelegates::ApplicationHasEnteredForegroundDelegate,
                         (FPersistentStatContainerBase *)&stack0x00000008,(pmf_859e8758)this);
                    /* WARNING: Load size is inaccurate */
      (this->OnApp_EnteringForegroundHandle).ID = *FVar8.ID;
    }
    if ((this->OnApp_EnteringBackgroundHandle).ID == 0) {
      FVar8 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
              AddRaw<InstallBundleUtil::PersistentStats::FPersistentStatContainerBase>
                        ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                          *)&FCoreDelegates::ApplicationWillEnterBackgroundDelegate,
                         (FPersistentStatContainerBase *)&stack0x00000008,(pmf_859e8758)this);
                    /* WARNING: Load size is inaccurate */
      (this->OnApp_EnteringBackgroundHandle).ID = *FVar8.ID;
    }
  }
  return;
}

// LoadRequiredBundleDataFromDiskForSession @ 148bd0860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::
LoadRequiredBundleDataFromDiskForSession(FPersistentStatContainerBase *this,FString *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  FName FVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  FPersistentStatContainerBase *pFVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FSessionPersistentStats *pFVar15;
  FName *pFVar16;
  longlong lVar17;
  FPersistentStatsBase *this_00;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  TMap<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
  *this_01;
  FScriptContainerElement *pFVar20;
  TSparseSetElement<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>_>
  *pTVar21;
  wchar_t *pwVar22;
  ForAnyElementType FVar23;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [8];
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  undefined1 local_160 [4];
  int local_15c;
  FPersistentStatContainerBase *local_158;
  FName local_150;
  FSparseArrayAllocationInfo local_148;
  FName local_138;
  FName local_130;
  undefined1 local_128 [8];
  undefined1 local_120 [24];
  undefined8 uStack_108;
  void *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  ulonglong uStack_d8;
  undefined1 local_d0 [24];
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulonglong uStack_88;
  ForAnyElementType local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  bool local_6e;
  FString local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_158 = this;
  pFVar15 = TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
            ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
                    *)&this->SessionPersistentStatMap,param_1);
  if (pFVar15 != (FSessionPersistentStats *)0x0) {
    local_170.Data = (FScriptContainerElement *)0x0;
    local_164 = 0;
    DestructItems<FString,int>((FString *)0x0,0);
    local_168 = 0;
    if (local_164 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_170,0,&local_164);
    }
    iVar2 = (pFVar15->RequiredBundles).ArrayNum;
    pFVar19 = (pFVar15->RequiredBundles).AllocatorInstance.Data;
    pFVar20 = pFVar19 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((pFVar15->RequiredBundles).ArrayNum != iVar2) {
        local_178[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_178);
      }
      iVar10 = local_168;
      uVar9 = _UNK_150631d98;
      uVar8 = ___xmm_00000000ffffffff0000008000000000;
      if (pFVar19 == pFVar20) break;
      if (((local_170.Data <= pFVar19) && (pFVar19 < local_170.Data + (longlong)local_164 * 0x10))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_168 == local_164) {
        local_168 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_170,&local_164);
      }
      lVar17 = (longlong)local_168;
      local_168 = local_168 + 1;
      ::FString::FString((FString *)(local_170.Data + lVar17 * 0x10),(FString *)pFVar19);
      pFVar19 = pFVar19 + 0x10;
    }
    pFVar19 = local_170.Data + (longlong)local_168 * 0x10;
    FVar23.Data = local_170.Data;
    while( true ) {
      if (local_168 != iVar10) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_160);
      }
      pFVar11 = local_158;
      if (FVar23.Data == pFVar19) break;
      this_01 = &local_158->PerBundlePersistentStatMap;
      if (*(int *)(FVar23.Data + 8) == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = *(wchar_t **)FVar23.Data;
      }
      pFVar16 = ::FName::FName(&local_138,pwVar22);
      FVar4 = *pFVar16;
      uVar13 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      puVar1 = &(pFVar11->PerBundlePersistentStatMap).field_0x8;
      if (*(int *)puVar1 != *(int *)&(pFVar11->PerBundlePersistentStatMap).field_0x34) {
        puVar5 = *(undefined1 **)&(pFVar11->PerBundlePersistentStatMap).field_0x40;
        puVar18 = &(pFVar11->PerBundlePersistentStatMap).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar18 = puVar5;
        }
        uVar13 = *(uint *)(puVar18 +
                          (ulonglong)
                          (*(int *)&(pFVar11->PerBundlePersistentStatMap).field_0x48 - 1U &
                          FVar4.Number + uVar13) * 4);
        if (uVar13 != 0xffffffff) {
          do {
            pFVar16 = (FName *)((longlong)(int)uVar13 * 0xe0 + *(longlong *)&this_01->field_0x0);
            if (*pFVar16 == FVar4) goto LAB_148bd0ad2;
            uVar13 = pFVar16[0x1b].ComparisonIndex.Value;
          } while (uVar13 != 0xffffffff);
        }
      }
      pFVar16 = (FName *)0x0;
LAB_148bd0ad2:
      this_00 = (FPersistentStatsBase *)(pFVar16 + 1);
      if (pFVar16 == (FName *)0x0) {
        this_00 = (FPersistentStatsBase *)0x0;
      }
      if (this_00 == (FPersistentStatsBase *)0x0) {
        if (*(int *)(FVar23.Data + 8) == 0) {
          pwVar22 = L"";
        }
        else {
          pwVar22 = *(wchar_t **)FVar23.Data;
        }
        pFVar16 = ::FName::FName(&local_130,pwVar22);
        local_150 = *pFVar16;
        local_120._0_8_ = (FScriptContainerElement *)0x0;
        local_120._8_8_ = 0;
        local_100 = (void *)0x0;
        local_e0 = (void *)0x0;
        uStack_d8 = 0;
        local_d0._0_8_ = (FScriptContainerElement *)0x0;
        uStack_e8 = 0;
        local_d0._8_8_ = 0;
        uStack_98 = 0;
        local_b0 = (void *)0x0;
        local_120._16_8_ = 0;
        uStack_108 = 0;
        local_90 = (void *)0x0;
        uStack_f8 = uVar8;
        local_f0 = uVar9;
        local_d0._16_8_ = 0;
        uStack_b8 = 0;
        uStack_88 = 0;
        uStack_a8 = uVar8;
        local_a0 = uVar9;
        local_80.Data = (FScriptContainerElement *)0x0;
        uStack_78._0_4_ = 0;
        uStack_78._4_4_ = 0;
        local_70._0_1_ = false;
        local_70._1_1_ = false;
        local_6e = false;
        local_128 = (undefined1  [8])
                    &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
        ::FName::ToString(&local_150,&local_68);
        FPersistentStatsBase::LoadStatsFromDisk((FPersistentStatsBase *)local_128);
        if (*(int *)(FVar23.Data + 8) == 0) {
          pwVar22 = L"";
        }
        else {
          pwVar22 = *(wchar_t **)FVar23.Data;
        }
        iVar2 = *(int *)&(pFVar11->PerBundlePersistentStatMap).field_0x34;
        if (iVar2 == 0) {
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xe0,8,1,(ForAnyElementType *)this_01,(int *)puVar1,
                              (int *)&(pFVar11->PerBundlePersistentStatMap).field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(pFVar11->PerBundlePersistentStatMap).field_0x10,false);
        }
        else {
          iVar14 = *(int *)&(pFVar11->PerBundlePersistentStatMap).field_0x30;
          iVar2 = iVar2 + -1;
          lVar17 = *(longlong *)&this_01->field_0x0;
          iVar3 = *(int *)((longlong)iVar14 * 0xe0 + 4 + lVar17);
          *(int *)&(pFVar11->PerBundlePersistentStatMap).field_0x30 = iVar3;
          *(int *)&(pFVar11->PerBundlePersistentStatMap).field_0x34 = iVar2;
          if (iVar2 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0xe0 + lVar17) = 0xffffffff;
          }
        }
        TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_01,&local_148,iVar14);
        pTVar21 = local_148.Pointer;
        if (local_148.Pointer ==
            (TSparseSetElement<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>_>
             *)0x0) {
          pTVar21 = (TSparseSetElement<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>_>
                     *)0x0;
        }
        else {
          ::FName::FName(local_148.Pointer,pwVar22);
          FPersistentStatsBase::FPersistentStatsBase
                    ((FPersistentStatsBase *)((longlong)pTVar21 + 8),
                     (FPersistentStatsBase *)local_128);
          *(undefined ***)((longlong)pTVar21 + 8) =
               &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
          ::FString::FString((FString *)((longlong)pTVar21 + 200),&local_68);
          *(undefined4 *)((longlong)pTVar21 + 0xd8) = 0xffffffff;
        }
        uVar6 = *(undefined8 *)pTVar21;
        local_15c = local_148.Index;
        uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
        uVar13 = (int)((ulonglong)uVar6 >> 0x20) + uVar13;
        bVar12 = TSet<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>,FDefaultSetAllocator>
                 ::TryReplaceExisting
                           ((TSet<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>,FDefaultSetAllocator>
                             *)this_01,uVar13,pTVar21,&local_15c,(bool *)0x0);
        if (!bVar12) {
          TSet<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>,FDefaultSetAllocator>
          ::RehashOrLink((TSet<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>,FDefaultSetAllocator>
                          *)this_01,uVar13,pTVar21,local_15c);
        }
        local_128 = (undefined1  [8])
                    &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_128 = (undefined1  [8])
                    &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
        if (local_80.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data);
        }
        uStack_88 = uStack_88 & 0xffffffff00000000;
        if (local_90 != (void *)0x0) {
          FMemory::Free(local_90);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_d0,0,local_d0._8_4_);
        bVar12 = local_d0._12_4_ != 0;
        local_d0._8_8_ = (ulonglong)(uint)local_d0._12_4_ << 0x20;
        if (bVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
        }
        uVar13 = uStack_a8._4_4_;
        local_a0 = 0xffffffff;
        uStack_a8 = (ulonglong)uStack_a8._4_4_ << 0x20;
        if (0x80 < uVar13) {
          uStack_a8 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
        }
        if (local_b0 != (void *)0x0) {
          FMemory::Free(local_b0);
        }
        if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_d0._0_8_);
        }
        uStack_d8 = uStack_d8 & 0xffffffff00000000;
        if (local_e0 != (void *)0x0) {
          FMemory::Free(local_e0);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_120,0,local_120._8_4_);
        bVar12 = local_120._12_4_ != 0;
        local_120._8_8_ = (ulonglong)(uint)local_120._12_4_ << 0x20;
        if (bVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,(ForAnyElementType *)local_120,0,(int *)(local_120 + 0xc));
        }
        uVar13 = uStack_f8._4_4_;
        local_f0 = 0xffffffff;
        uStack_f8 = (ulonglong)uStack_f8._4_4_ << 0x20;
        if (0x80 < uVar13) {
          uStack_f8 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_120 + 0x10),0);
        }
        if (local_100 != (void *)0x0) {
          FMemory::Free(local_100);
        }
        if ((FScriptContainerElement *)local_120._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_120._0_8_);
        }
        FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_128);
        FVar23.Data = FVar23.Data + 0x10;
      }
      else {
        FPersistentStatsBase::LoadStatsFromDisk(this_00);
        FVar23.Data = FVar23.Data + 0x10;
      }
    }
    DestructItems<FString,int>((FString *)local_170.Data,local_168);
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
  }
  return;
}

// OnApp_EnteringBackground @ 148bd1070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnApp_EnteringBackground
          (FPersistentStatContainerBase *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnApp_EnteringBackground(void)_::_2_::FStat_STAT_InstallBundle_OnApp_EnteringBackground>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_InstallBundle_OnApp_EnteringBackground ==
          (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnApp_EnteringBackground(void)_::_2_::FStat_STAT_InstallBundle_OnApp_EnteringBackground>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_InstallBundle_OnApp_EnteringBackground"
                               );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstallBundle_OnApp_EnteringBackground
                   ,*pFVar5,L"STAT_InstallBundle_OnApp_EnteringBackground","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_InstallBundle_OnApp_EnteringBackground;
  if (StatPtr_STAT_InstallBundle_OnApp_EnteringBackground ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnApp_EnteringBackground(void)_::_2_::FStat_STAT_InstallBundle_OnApp_EnteringBackground>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_InstallBundle_OnApp_EnteringBackground");
    FVar6 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnApp_EnteringBackground(void)_::_2_::FStat_STAT_InstallBundle_OnApp_EnteringBackground>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_InstallBundle_OnApp_EnteringBackground,*pFVar5,
                         L"STAT_InstallBundle_OnApp_EnteringBackground","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleUtils.cpp"
                   ,0x568);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_148bd11f6;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_148bd11f6:
  (**(code **)(this->_padding_ + 200))(this);
  (**(code **)(this->_padding_ + 0xd8))(this);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// OnApp_EnteringForeground @ 148bd13a0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnApp_EnteringForeground
          (FPersistentStatContainerBase *this)

{
  (**(code **)(this->_padding_ + 0xd0))();
                    /* WARNING: Could not recover jumptable at 0x000148bd13bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xe0))(this);
  return;
}

// OnBackground_HandleBundleStats @ 148bd13d0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnBackground_HandleBundleStats
          (FPersistentStatContainerBase *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->PerBundlePersistentStatMap).field_0x28;
  puVar1 = &(this->PerBundlePersistentStatMap).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->PerBundlePersistentStatMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148bd146d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_148bd146d:
  uVar10 = *(uint *)&(this->PerBundlePersistentStatMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->PerBundlePersistentStatMap).field_0x8 -
                       *(int *)&(this->PerBundlePersistentStatMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->PerBundlePersistentStatMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->PerBundlePersistentStatMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148bd1570;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_148bd1570:
  while( true ) {
    if (*(int *)&(this->PerBundlePersistentStatMap).field_0x8 -
        *(int *)&(this->PerBundlePersistentStatMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(char *)(*(longlong *)&this->PerBundlePersistentStatMap +
                  (longlong)TStack_60.CurrentBitIndex * 0xe0 + 0xc0) != '\0') {
      (**(code **)(this->_padding_ + 0xf8))(this);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// OnBackground_HandleSessionStats @ 148bd1600

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnBackground_HandleSessionStats
          (FPersistentStatContainerBase *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->SessionPersistentStatMap).field_0x10;
  iVar3 = *(int *)&(this->SessionPersistentStatMap).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->SessionPersistentStatMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148bd169d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_148bd169d:
  uVar10 = *(uint *)&(this->SessionPersistentStatMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->SessionPersistentStatMap).field_0x8 -
                       *(int *)&(this->SessionPersistentStatMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->SessionPersistentStatMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->SessionPersistentStatMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148bd17a0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_148bd17a0:
  while( true ) {
    if (*(int *)&(this->SessionPersistentStatMap).field_0x8 -
        *(int *)&(this->SessionPersistentStatMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(char *)(*(longlong *)&this->SessionPersistentStatMap +
                  (longlong)TStack_60.CurrentBitIndex * 0xf8 + 200) != '\0') {
      (**(code **)(this->_padding_ + 0xf8))(this);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// OnForeground_HandleBundleStats @ 148bd1b80

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnForeground_HandleBundleStats
          (FPersistentStatContainerBase *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->PerBundlePersistentStatMap).field_0x28;
  puVar1 = &(this->PerBundlePersistentStatMap).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->PerBundlePersistentStatMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148bd1c1d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_148bd1c1d:
  uVar10 = *(uint *)&(this->PerBundlePersistentStatMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->PerBundlePersistentStatMap).field_0x8 -
                       *(int *)&(this->PerBundlePersistentStatMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->PerBundlePersistentStatMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->PerBundlePersistentStatMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148bd1d20;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_148bd1d20:
  while( true ) {
    if (*(int *)&(this->PerBundlePersistentStatMap).field_0x8 -
        *(int *)&(this->PerBundlePersistentStatMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(char *)(*(longlong *)&this->PerBundlePersistentStatMap +
                  (longlong)TStack_60.CurrentBitIndex * 0xe0 + 0xc0) != '\0') {
      (**(code **)(this->_padding_ + 0x100))(this);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// OnForeground_HandleSessionStats @ 148bd1db0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnForeground_HandleSessionStats
          (FPersistentStatContainerBase *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->SessionPersistentStatMap).field_0x10;
  iVar3 = *(int *)&(this->SessionPersistentStatMap).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->SessionPersistentStatMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148bd1e4d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_148bd1e4d:
  uVar10 = *(uint *)&(this->SessionPersistentStatMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->SessionPersistentStatMap).field_0x8 -
                       *(int *)&(this->SessionPersistentStatMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->SessionPersistentStatMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->SessionPersistentStatMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148bd1f50;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_148bd1f50:
  while( true ) {
    if (*(int *)&(this->SessionPersistentStatMap).field_0x8 -
        *(int *)&(this->SessionPersistentStatMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(char *)(*(longlong *)&this->SessionPersistentStatMap +
                  (longlong)TStack_60.CurrentBitIndex * 0xf8 + 200) != '\0') {
      (**(code **)(this->_padding_ + 0x100))(this);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// OnTimerStartedForStat @ 148bd1ff0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnTimerStartedForStat
          (FPersistentStatContainerBase *this,FPersistentStatsBase *param_1,ETimingStatNames param_2
          )

{
  bool bVar1;
  ETimingStatNames EVar2;
  
  if (this->bShouldAutoHandleFGBGStats != false) {
    bVar1 = IsTimerReal(param_2);
    if (bVar1) {
      EVar2 = GetAssociatedFGTimerName(param_2);
      FPersistentStatsBase::StartTimingStat(param_1,EVar2);
      EVar2 = GetAssociatedBGTimerName(param_2);
      bVar1 = FPersistentStatsBase::IsTimingStatStarted(param_1,EVar2);
      if (bVar1) {
        FPersistentStatsBase::StopTimingStat(param_1,EVar2,true);
      }
    }
  }
  return;
}

// OnTimerStoppedForStat @ 148bd2070

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::OnTimerStoppedForStat
          (FPersistentStatContainerBase *this,FPersistentStatsBase *param_1,ETimingStatNames param_2
          )

{
  bool bVar1;
  ETimingStatNames EVar2;
  
  if (this->bShouldAutoHandleFGBGStats != false) {
    bVar1 = IsTimerReal(param_2);
    if (bVar1) {
      EVar2 = GetAssociatedFGTimerName(param_2);
      FPersistentStatsBase::StopTimingStat(param_1,EVar2,true);
      EVar2 = GetAssociatedBGTimerName(param_2);
      FPersistentStatsBase::StopTimingStat(param_1,EVar2,true);
    }
  }
  return;
}

// RemoveBundleStats @ 148bd3a70

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::RemoveBundleStats
          (FPersistentStatContainerBase *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->PerBundlePersistentStatMap).field_0x8 !=
      *(int *)&(this->PerBundlePersistentStatMap).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>,FDefaultSetAllocator>
                         *)&this->PerBundlePersistentStatMap,local_res10.Number + uVar1,&local_res8)
    ;
  }
  return;
}

// RemoveSessionStats @ 148bd3ac0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::RemoveSessionStats
          (FPersistentStatContainerBase *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->SessionPersistentStatMap).field_0x8 !=
      *(int *)&(this->SessionPersistentStatMap).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>,FDefaultSetAllocator>
                *)&this->SessionPersistentStatMap,uVar2,param_1);
  }
  return;
}

// ResetDirtyStatUpdate @ 148bd4250

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::ResetDirtyStatUpdate
          (FPersistentStatContainerBase *this)

{
  this->TimerDirtyStatUpdateTimeRemaining = this->DirtyStatSaveToDiskRate;
  return;
}

// ResetTimerUpdate @ 148bd4380

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::ResetTimerUpdate
          (FPersistentStatContainerBase *this)

{
  this->TimerAutoUpdateTimeRemaining = this->TimerAutoUpdateRate;
  return;
}

// SaveAllDirtyStatsToDisk @ 148bd4480

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::SaveAllDirtyStatsToDisk
          (FPersistentStatContainerBase *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  FPersistentStatsBase *pFVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FPersistentStatsBase *pFVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar15 = (FPersistentStatsBase *)0x0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
              *)&this->PerBundlePersistentStatMap,&local_38);
  iVar3 = local_38.ArrayNum;
  uVar8 = (ulonglong)local_38.ArrayNum;
  pFVar13 = local_38.AllocatorInstance.Data + uVar8 * 8;
  FVar14.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar14.Data == pFVar13) break;
    lVar11 = *(longlong *)FVar14.Data;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar11);
    pFVar12 = pFVar15;
    if (*(int *)&(this->PerBundlePersistentStatMap).field_0x8 !=
        *(int *)&(this->PerBundlePersistentStatMap).field_0x34) {
      puVar1 = *(undefined1 **)&(this->PerBundlePersistentStatMap).field_0x40;
      puVar9 = &(this->PerBundlePersistentStatMap).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      iVar6 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->PerBundlePersistentStatMap).field_0x48 - 1U &
                                (int)((ulonglong)lVar11 >> 0x20) + uVar5) * 4);
      if (iVar6 != -1) {
        do {
          plVar7 = (longlong *)
                   ((longlong)iVar6 * 0xe0 + *(longlong *)&this->PerBundlePersistentStatMap);
          if (*plVar7 == lVar11) {
            pFVar12 = (FPersistentStatsBase *)(plVar7 + 1);
            if (plVar7 == (longlong *)0x0) {
              pFVar12 = pFVar15;
            }
            if (pFVar12 != (FPersistentStatsBase *)0x0) goto LAB_148bd4575;
            break;
          }
          iVar6 = (int)plVar7[0x1b];
        } while (iVar6 != -1);
      }
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BundleStats",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleUtils.cpp"
                       ,0x4c5,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_148bd4575:
    if (pFVar12->bIsDirty != false) {
      FPersistentStatsBase::SaveStatsToDisk(pFVar12);
    }
    uVar8 = local_38._8_8_ & 0xffffffff;
    FVar14.Data = FVar14.Data + 8;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
              *)&this->SessionPersistentStatMap,&local_48);
  iVar3 = local_48.ArrayNum;
  pFVar13 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
  FVar14.Data = local_48.AllocatorInstance.Data;
  do {
    if (local_48.ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar14.Data == pFVar13) {
      DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return;
    }
    iVar6 = *(int *)(FVar14.Data + 8) + -1;
    if (*(int *)(FVar14.Data + 8) == 0) {
      pwVar10 = L"";
      iVar6 = 0;
    }
    else {
      pwVar10 = *(wchar_t **)FVar14.Data;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
    iVar6 = TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>,FDefaultSetAllocator>
                        *)&this->SessionPersistentStatMap,uVar5,(FString *)FVar14.Data);
    pFVar12 = pFVar15;
    if (iVar6 == -1) {
LAB_148bd4643:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SessionStats",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleUtils.cpp"
                         ,0x4d1,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      lVar11 = (longlong)iVar6 * 0xf8 + *(longlong *)&this->SessionPersistentStatMap;
      pFVar12 = (FPersistentStatsBase *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        pFVar12 = pFVar15;
      }
      if (pFVar12 == (FPersistentStatsBase *)0x0) goto LAB_148bd4643;
    }
    if (pFVar12->bIsDirty != false) {
      FPersistentStatsBase::SaveStatsToDisk(pFVar12);
    }
    FVar14.Data = FVar14.Data + 0x10;
  } while( true );
}

// ShutdownBase @ 148bd8170

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::ShutdownBase
          (FPersistentStatContainerBase *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar2 = &this->TickHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar2->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->TickHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  if ((this->OnApp_EnteringForegroundHandle).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::ApplicationHasEnteredForegroundDelegate,
               (FDelegateHandle)(this->OnApp_EnteringForegroundHandle).ID);
    (this->OnApp_EnteringForegroundHandle).ID = 0;
  }
  if ((this->OnApp_EnteringBackgroundHandle).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,
               (FDelegateHandle)(this->OnApp_EnteringBackgroundHandle).ID);
    (this->OnApp_EnteringBackgroundHandle).ID = 0;
  }
  return;
}

// StartBundlePersistentStatTimer @ 148bd8490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::StartBundlePersistentStatTimer
          (FPersistentStatContainerBase *this,FName param_1,ETimingStatNames param_2)

{
  int iVar1;
  ulonglong uVar2;
  FName FVar3;
  uint uVar4;
  FBundlePersistentStats *this_00;
  FName *pFVar5;
  undefined1 *puVar6;
  uint uVar7;
  FName local_res10 [2];
  undefined1 auStackY_158 [32];
  ETimingStatNames local_128 [8];
  FName local_120;
  FName *local_118;
  undefined1 local_108 [16];
  undefined8 uStack_f8;
  TBitArray<FDefaultBitArrayAllocator> local_f0;
  longlong local_d0;
  longlong lStack_c8;
  void *local_c0;
  ulonglong uStack_b8;
  undefined1 local_b0 [24];
  longlong lStack_98;
  void *local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong lStack_78;
  void *local_70;
  ulonglong uStack_68;
  void *local_60;
  longlong lStack_58;
  undefined2 local_50;
  undefined1 local_4e;
  FString local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_108._8_8_ = (void *)0x0;
  uStack_f8 = 0;
  local_f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c0 = (void *)0x0;
  uStack_b8 = 0;
  local_b0._0_8_ = (FScriptContainerElement *)0x0;
  lStack_c8 = 0;
  local_b0._8_8_ = 0;
  lStack_78 = 0;
  local_90 = (void *)0x0;
  local_f0._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_d0 = _UNK_150631d98;
  uStack_88 = ___xmm_00000000ffffffff0000008000000000;
  local_80 = _UNK_150631d98;
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = (void *)0x0;
  lStack_58 = 0;
  local_f0.AllocatorInstance.InlineData[0] = '\0';
  local_f0.AllocatorInstance.InlineData[1] = '\0';
  local_f0.AllocatorInstance.InlineData[2] = '\0';
  local_f0.AllocatorInstance.InlineData[3] = '\0';
  local_f0.AllocatorInstance.InlineData[4] = '\0';
  local_f0.AllocatorInstance.InlineData[5] = '\0';
  local_f0.AllocatorInstance.InlineData[6] = '\0';
  local_f0.AllocatorInstance.InlineData[7] = '\0';
  local_f0.AllocatorInstance.InlineData[8] = '\0';
  local_f0.AllocatorInstance.InlineData[9] = '\0';
  local_f0.AllocatorInstance.InlineData[10] = '\0';
  local_f0.AllocatorInstance.InlineData[0xb] = '\0';
  local_f0.AllocatorInstance.InlineData[0xc] = '\0';
  local_f0.AllocatorInstance.InlineData[0xd] = '\0';
  local_f0.AllocatorInstance.InlineData[0xe] = '\0';
  local_f0.AllocatorInstance.InlineData[0xf] = '\0';
  local_50 = 0;
  local_b0._16_8_ = 0;
  lStack_98 = 0;
  local_4e = 0;
  local_108._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  local_res10[0] = param_1;
  local_128[0] = param_2;
  local_120 = param_1;
  ::FName::ToString(&local_120,&local_48);
  FVar3 = local_res10[0];
  uVar4 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  uVar4 = uVar4 + FVar3.Number;
  if (*(int *)&(this->PerBundlePersistentStatMap).field_0x8 !=
      *(int *)&(this->PerBundlePersistentStatMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->PerBundlePersistentStatMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->PerBundlePersistentStatMap).field_0x38;
    }
    uVar7 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->PerBundlePersistentStatMap).field_0x48 - 1U & uVar4)
                               * 4);
    if (uVar7 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar7 * 0xe0 +
                          *(longlong *)&this->PerBundlePersistentStatMap);
        if (*pFVar5 == local_res10[0]) {
          if (pFVar5 != (FName *)0x0) {
            this_00 = (FBundlePersistentStats *)(pFVar5 + 1);
            goto LAB_148bd85eb;
          }
          break;
        }
        uVar7 = pFVar5[0x1b].ComparisonIndex.Value;
      } while (uVar7 != 0xffffffff);
    }
  }
  this_00 = TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
            ::
            EmplaceByHash<FName_const_&,InstallBundleUtil::PersistentStats::FBundlePersistentStats>
                      ((TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
                        *)&this->PerBundlePersistentStatMap,uVar4,local_res10,
                       (FBundlePersistentStats *)local_108);
LAB_148bd85eb:
  local_108._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_108._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b0,0,local_b0._8_4_);
  iVar1 = SUB84(local_b0._8_8_,4);
  local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
  }
  uVar4 = uStack_88._4_4_;
  local_80 = 0xffffffff;
  uStack_88 = (ulonglong)uStack_88._4_4_ << 0x20;
  if (0x80 < uVar4) {
    uStack_88 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  uStack_b8 = uStack_b8 & 0xffffffff00000000;
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_108 + 8),0,(int)uStack_f8);
  uVar2 = uStack_f8 >> 0x20;
  uStack_f8 = uStack_f8 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(local_108 + 8),0,(int *)((longlong)&uStack_f8 + 4));
  }
  iVar1 = local_f0.MaxBits;
  local_d0 = 0xffffffff;
  local_f0._24_8_ = (ulonglong)(uint)local_f0.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_f0.NumBits = 0;
    local_f0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_f0,0);
  }
  if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f0.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_108._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._8_8_);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_108);
  FPersistentStatsBase::StartTimingStat((FPersistentStatsBase *)this_00,local_128[0]);
  if ((char)this_00->_padding_ == '\0') {
    local_120 = (FName)local_128;
    local_118 = local_res10;
    `InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::
    StartBundlePersistentStatTimer'::__l2::<lambda_1>::operator()(&local_120);
  }
  (**(code **)(this->_padding_ + 0xe8))(this,this_00,local_128[0]);
  return;
}

// StartBundlePersistentStatTracking @ 148bd87e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::StartBundlePersistentStatTracking
          (FPersistentStatContainerBase *this,FName param_1,FString *param_2,bool param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  ulonglong uVar5;
  ForAnyElementType _Src_00;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  FBundlePersistentStats *this_00;
  FName *pFVar10;
  undefined1 *puVar11;
  FName FVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  FName local_res10 [3];
  undefined1 auStackY_1a8 [32];
  FName local_168;
  int local_160;
  int local_15c;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  FString local_148;
  FString local_138;
  FString local_128;
  undefined1 local_118 [16];
  undefined8 uStack_108;
  TBitArray<FDefaultBitArrayAllocator> local_100;
  longlong local_e0;
  longlong lStack_d8;
  void *local_d0;
  ulonglong uStack_c8;
  undefined1 local_c0 [24];
  longlong lStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong lStack_88;
  void *local_80;
  ulonglong uStack_78;
  void *local_70;
  longlong lStack_68;
  undefined2 local_60;
  undefined1 local_5e;
  FString local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168 = (FName)((ulonglong)local_168 & 0xffffffff00000000);
  iVar7 = (param_2->Data).ArrayNum;
  local_res10[0] = param_1;
  if (iVar7 < 2) {
    pwVar8 = FApp::GetBuildVersion();
    pFVar9 = FGenericPlatformMisc::GetDeviceId(&local_128);
    ::FString::ConcatFC(&local_138,pFVar9,L"_");
    ::FString::ConcatFC(&local_148,&local_138,pwVar8);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
    bVar15 = false;
    FVar12 = (FName)local_148.Data.AllocatorInstance.Data;
    iVar7 = local_148.Data.ArrayNum;
  }
  else {
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_168.ComparisonIndex.Value = 0;
    local_168.Number = 0;
    local_160 = iVar7;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)&local_168,iVar7,&local_15c);
    memcpy((void *)local_168,_Src,(longlong)iVar7 * 2);
    bVar4 = false;
    bVar15 = true;
    FVar12 = local_168;
    iVar7 = local_160;
  }
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = iVar7;
  if (iVar7 == 0) {
    local_14c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,&local_158,iVar7,&local_14c);
    memcpy(local_158.Data,(void *)FVar12,(longlong)iVar7 * 2);
  }
  if ((bVar15) && (local_168 != (FName)0x0)) {
    FMemory::Free((void *)local_168);
  }
  if ((bVar4) && ((FName)local_148.Data.AllocatorInstance.Data != (FName)0x0)) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  local_168 = local_res10[0];
  local_118._8_8_ = (void *)0x0;
  uStack_108 = 0;
  local_100.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d0 = (void *)0x0;
  uStack_c8 = 0;
  local_c0._0_8_ = (FScriptContainerElement *)0x0;
  local_c0._8_8_ = 0;
  lStack_d8 = 0;
  local_a0 = (void *)0x0;
  lStack_88 = 0;
  local_80 = (void *)0x0;
  local_100.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_100.MaxBits = _UNK_150631d94;
  local_e0 = _UNK_150631d98;
  uStack_98 = ___xmm_00000000ffffffff0000008000000000;
  local_90 = _UNK_150631d98;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  lStack_68 = 0;
  local_100.AllocatorInstance.InlineData[0] = '\0';
  local_100.AllocatorInstance.InlineData[1] = '\0';
  local_100.AllocatorInstance.InlineData[2] = '\0';
  local_100.AllocatorInstance.InlineData[3] = '\0';
  local_100.AllocatorInstance.InlineData[4] = '\0';
  local_100.AllocatorInstance.InlineData[5] = '\0';
  local_100.AllocatorInstance.InlineData[6] = '\0';
  local_100.AllocatorInstance.InlineData[7] = '\0';
  local_100.AllocatorInstance.InlineData[8] = '\0';
  local_100.AllocatorInstance.InlineData[9] = '\0';
  local_100.AllocatorInstance.InlineData[10] = '\0';
  local_100.AllocatorInstance.InlineData[0xb] = '\0';
  local_100.AllocatorInstance.InlineData[0xc] = '\0';
  local_100.AllocatorInstance.InlineData[0xd] = '\0';
  local_100.AllocatorInstance.InlineData[0xe] = '\0';
  local_100.AllocatorInstance.InlineData[0xf] = '\0';
  local_60 = 0;
  local_c0._16_8_ = 0;
  lStack_a8 = 0;
  local_5e = 0;
  local_118._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  ::FName::ToString(&local_168,&local_58);
  FVar12 = local_res10[0];
  uVar6 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  uVar6 = uVar6 + FVar12.Number;
  if (*(int *)&(this->PerBundlePersistentStatMap).field_0x8 !=
      *(int *)&(this->PerBundlePersistentStatMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->PerBundlePersistentStatMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->PerBundlePersistentStatMap).field_0x38;
    }
    uVar14 = *(uint *)(puVar11 +
                      (ulonglong)
                      (*(int *)&(this->PerBundlePersistentStatMap).field_0x48 - 1U & uVar6) * 4);
    if (uVar14 != 0xffffffff) {
      do {
        pFVar10 = (FName *)((longlong)(int)uVar14 * 0xe0 +
                           *(longlong *)&this->PerBundlePersistentStatMap);
        if (*pFVar10 == local_res10[0]) {
          if (pFVar10 != (FName *)0x0) {
            this_00 = (FBundlePersistentStats *)(pFVar10 + 1);
            goto LAB_148bd8a8d;
          }
          break;
        }
        uVar14 = pFVar10[0x1b].ComparisonIndex.Value;
      } while (uVar14 != 0xffffffff);
    }
  }
  this_00 = TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
            ::
            EmplaceByHash<FName_const_&,InstallBundleUtil::PersistentStats::FBundlePersistentStats>
                      ((TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
                        *)&this->PerBundlePersistentStatMap,uVar6,local_res10,
                       (FBundlePersistentStats *)local_118);
LAB_148bd8a8d:
  local_118._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_118._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  uStack_78 = uStack_78 & 0xffffffff00000000;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c0,0,local_c0._8_4_);
  iVar7 = SUB84(local_c0._8_8_,4);
  local_c0._8_8_ = local_c0._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c0,0,(int *)(local_c0 + 0xc));
  }
  uVar6 = uStack_98._4_4_;
  local_90 = 0xffffffff;
  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
  if (0x80 < uVar6) {
    uStack_98 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c0 + 0x10),0);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if ((FScriptContainerElement *)local_c0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c0._0_8_);
  }
  uStack_c8 = uStack_c8 & 0xffffffff00000000;
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_118 + 8),0,(int)uStack_108);
  uVar5 = uStack_108 >> 0x20;
  uStack_108 = uStack_108 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(local_118 + 8),0,(int *)((longlong)&uStack_108 + 4));
  }
  iVar7 = local_100.MaxBits;
  local_e0 = 0xffffffff;
  local_100._24_8_ = (ulonglong)(uint)local_100.MaxBits << 0x20;
  if (0x80 < (uint)iVar7) {
    local_100.NumBits = 0;
    local_100.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_100,0);
  }
  if (local_100.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_118._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_118._8_8_);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_118);
  *(undefined1 *)&this_00->_padding_ = 1;
  FPersistentStatsBase::LoadStatsFromDisk((FPersistentStatsBase *)this_00);
  if (!param_3) {
    iVar7 = (int)this_00->_padding_;
    if (iVar7 == local_150) {
      if (iVar7 < 2) goto LAB_148bd8cc7;
      iVar7 = wcscmp((wchar_t *)this_00->_padding_,(wchar_t *)local_158.Data);
      bVar15 = iVar7 == 0;
    }
    else {
      bVar15 = iVar7 + local_150 == 1;
    }
    if (bVar15) goto LAB_148bd8cc7;
  }
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
           *)&this_00->_padding_);
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)&this_00->_padding_);
  iVar7 = local_150;
  _Src_00.Data = local_158.Data;
  plVar2 = &this_00->_padding_;
  if ((ForAnyElementType *)plVar2 != &local_158) {
    lVar13 = (longlong)local_150;
    piVar1 = (int *)((longlong)&this_00->_padding_ + 4);
    iVar3 = *piVar1;
    *(int *)&this_00->_padding_ = local_150;
    if ((local_150 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_150,iVar3,(ForAnyElementType *)plVar2,local_150,piVar1);
      if (iVar7 != 0) {
        memcpy((void *)*plVar2,_Src_00.Data,lVar13 * 2);
      }
    }
  }
  *(undefined1 *)((longlong)&this_00->_padding_ + 1) = 1;
LAB_148bd8cc7:
  FPersistentStatsBase::SaveStatsToDisk((FPersistentStatsBase *)this_00);
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  return;
}

// StartSessionPersistentStatTimer @ 148bd9340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::StartSessionPersistentStatTimer
          (FPersistentStatContainerBase *this,FString *param_1,ETimingStatNames param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  FSessionPersistentStats *this_00;
  wchar_t *pwVar4;
  int iVar5;
  undefined1 auStackY_168 [32];
  ETimingStatNames local_138 [8];
  ETimingStatNames *local_130;
  FString *local_128;
  undefined1 local_118 [16];
  undefined8 uStack_108;
  TBitArray<FDefaultBitArrayAllocator> local_100;
  longlong local_e0;
  longlong lStack_d8;
  void *local_d0;
  ulonglong uStack_c8;
  undefined1 local_c0 [24];
  longlong lStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong lStack_88;
  void *local_80;
  ulonglong uStack_78;
  void *local_70;
  longlong lStack_68;
  undefined2 local_60;
  undefined1 local_5e;
  FString local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_60 = 0;
  local_118._8_8_ = (void *)0x0;
  uStack_108 = 0;
  local_100.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d0 = (void *)0x0;
  iVar5 = 0;
  uStack_c8 = 0;
  local_c0._0_8_ = (FScriptContainerElement *)0x0;
  lStack_d8 = 0;
  local_c0._8_8_ = 0;
  lStack_88 = 0;
  local_a0 = (void *)0x0;
  local_100._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_e0 = _UNK_150631d98;
  uStack_98 = ___xmm_00000000ffffffff0000008000000000;
  local_90 = _UNK_150631d98;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  lStack_68 = 0;
  local_100.AllocatorInstance.InlineData[0] = '\0';
  local_100.AllocatorInstance.InlineData[1] = '\0';
  local_100.AllocatorInstance.InlineData[2] = '\0';
  local_100.AllocatorInstance.InlineData[3] = '\0';
  local_100.AllocatorInstance.InlineData[4] = '\0';
  local_100.AllocatorInstance.InlineData[5] = '\0';
  local_100.AllocatorInstance.InlineData[6] = '\0';
  local_100.AllocatorInstance.InlineData[7] = '\0';
  local_100.AllocatorInstance.InlineData[8] = '\0';
  local_100.AllocatorInstance.InlineData[9] = '\0';
  local_100.AllocatorInstance.InlineData[10] = '\0';
  local_100.AllocatorInstance.InlineData[0xb] = '\0';
  local_100.AllocatorInstance.InlineData[0xc] = '\0';
  local_100.AllocatorInstance.InlineData[0xd] = '\0';
  local_100.AllocatorInstance.InlineData[0xe] = '\0';
  local_100.AllocatorInstance.InlineData[0xf] = '\0';
  local_5e = 0;
  local_c0._16_8_ = 0;
  lStack_a8 = 0;
  local_118._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  local_138[0] = param_2;
  ::FString::FString(&local_58,param_1);
  iVar1 = (param_1->Data).ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  if (iVar1 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar5 = iVar1 + -1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar4);
  this_00 = TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
            ::
            FindOrAddImpl<FString_const_&,InstallBundleUtil::PersistentStats::FSessionPersistentStats>
                      ((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
                        *)&this->SessionPersistentStatMap,uVar3,param_1,
                       (FSessionPersistentStats *)local_118);
  local_118._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  DestructItems<FString,int>((FString *)local_48.Data,(int)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_118._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  uStack_78 = uStack_78 & 0xffffffff00000000;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c0,0,local_c0._8_4_);
  iVar1 = SUB84(local_c0._8_8_,4);
  local_c0._8_8_ = local_c0._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c0,0,(int *)(local_c0 + 0xc));
  }
  uVar3 = uStack_98._4_4_;
  local_90 = 0xffffffff;
  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
  if (0x80 < uVar3) {
    uStack_98 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c0 + 0x10),0);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if ((FScriptContainerElement *)local_c0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c0._0_8_);
  }
  uStack_c8 = uStack_c8 & 0xffffffff00000000;
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_118 + 8),0,(int)uStack_108);
  uVar2 = uStack_108 >> 0x20;
  uStack_108 = uStack_108 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(local_118 + 8),0,(int *)((longlong)&uStack_108 + 4));
  }
  iVar1 = local_100.MaxBits;
  local_e0 = 0xffffffff;
  local_100._24_8_ = (ulonglong)(uint)local_100.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_100.NumBits = 0;
    local_100.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_100,0);
  }
  if (local_100.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_118._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_118._8_8_);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_118);
  FPersistentStatsBase::StartTimingStat((FPersistentStatsBase *)this_00,local_138[0]);
  if ((char)this_00->_padding_ == '\0') {
    local_130 = local_138;
    local_128 = param_1;
    `InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::
    StartSessionPersistentStatTimer'::__l2::<lambda_1>::operator()(&local_130);
  }
  (**(code **)(this->_padding_ + 0xe8))(this,this_00,local_138[0]);
  return;
}

// StartSessionPersistentStatTracking @ 148bd9640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::StartSessionPersistentStatTracking
          (FPersistentStatContainerBase *this,FString *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,FString *param_3,bool param_4)

{
  int *piVar1;
  longlong *plVar2;
  FName *pFVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  ulonglong uVar5;
  ForAnyElementType _Src_00;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  FSessionPersistentStats *this_00;
  longlong lVar10;
  FName *pFVar11;
  FName _Src_01;
  int iVar12;
  bool bVar13;
  undefined1 auStackY_1c8 [32];
  undefined1 local_188 [8];
  FName local_180;
  int local_178;
  int local_174;
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  FString local_160;
  FString local_150;
  FString local_140;
  undefined1 local_128 [16];
  undefined8 uStack_118;
  TBitArray<FDefaultBitArrayAllocator> local_110;
  longlong local_f0;
  longlong lStack_e8;
  void *local_e0;
  ulonglong uStack_d8;
  undefined1 local_d0 [24];
  longlong lStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  void *local_90;
  ulonglong uStack_88;
  void *local_80;
  longlong lStack_78;
  undefined2 local_70;
  undefined1 local_6e;
  FString local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  iVar12 = 0;
  local_180 = (FName)((ulonglong)local_180 & 0xffffffff00000000);
  iVar7 = (param_3->Data).ArrayNum;
  if (iVar7 < 2) {
    pwVar8 = FApp::GetBuildVersion();
    pFVar9 = FGenericPlatformMisc::GetDeviceId(&local_150);
    ::FString::ConcatFC(&local_140,pFVar9,L"_");
    ::FString::ConcatFC(&local_160,&local_140,pwVar8);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
    bVar13 = false;
    _Src_01 = (FName)local_160.Data.AllocatorInstance.Data;
    iVar7 = local_160.Data.ArrayNum;
  }
  else {
    _Src = (param_3->Data).AllocatorInstance.Data;
    local_180.ComparisonIndex.Value = 0;
    local_180.Number = 0;
    local_178 = iVar7;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)&local_180,iVar7,&local_174);
    memcpy((void *)local_180,_Src,(longlong)iVar7 * 2);
    bVar4 = false;
    bVar13 = true;
    _Src_01 = local_180;
    iVar7 = local_178;
  }
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = iVar7;
  if (iVar7 == 0) {
    local_164 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,&local_170,iVar7,&local_164);
    memcpy(local_170.Data,(void *)_Src_01,(longlong)iVar7 * 2);
  }
  if ((bVar13) && (local_180 != (FName)0x0)) {
    FMemory::Free((void *)local_180);
  }
  if ((bVar4) && ((FName)local_160.Data.AllocatorInstance.Data != (FName)0x0)) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  local_70 = 0;
  local_128._8_8_ = (void *)0x0;
  uStack_118 = 0;
  local_110.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e0 = (void *)0x0;
  uStack_d8 = 0;
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  lStack_e8 = 0;
  local_d0._8_8_ = 0;
  lStack_98 = 0;
  local_b0 = (void *)0x0;
  local_110.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_110.MaxBits = _UNK_150631d94;
  local_f0 = _UNK_150631d98;
  uStack_a8 = ___xmm_00000000ffffffff0000008000000000;
  local_a0 = _UNK_150631d98;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  lStack_78 = 0;
  local_110.AllocatorInstance.InlineData[0] = '\0';
  local_110.AllocatorInstance.InlineData[1] = '\0';
  local_110.AllocatorInstance.InlineData[2] = '\0';
  local_110.AllocatorInstance.InlineData[3] = '\0';
  local_110.AllocatorInstance.InlineData[4] = '\0';
  local_110.AllocatorInstance.InlineData[5] = '\0';
  local_110.AllocatorInstance.InlineData[6] = '\0';
  local_110.AllocatorInstance.InlineData[7] = '\0';
  local_110.AllocatorInstance.InlineData[8] = '\0';
  local_110.AllocatorInstance.InlineData[9] = '\0';
  local_110.AllocatorInstance.InlineData[10] = '\0';
  local_110.AllocatorInstance.InlineData[0xb] = '\0';
  local_110.AllocatorInstance.InlineData[0xc] = '\0';
  local_110.AllocatorInstance.InlineData[0xd] = '\0';
  local_110.AllocatorInstance.InlineData[0xe] = '\0';
  local_110.AllocatorInstance.InlineData[0xf] = '\0';
  local_6e = 0;
  local_d0._16_8_ = 0;
  lStack_b8 = 0;
  local_128._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  ::FString::FString(&local_68,param_1);
  iVar7 = (param_1->Data).ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  if (iVar7 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar12 = iVar7 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar8);
  this_00 = TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
            ::
            FindOrAddImpl<FString_const_&,InstallBundleUtil::PersistentStats::FSessionPersistentStats>
                      ((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
                        *)&this->SessionPersistentStatMap,uVar6,param_1,
                       (FSessionPersistentStats *)local_128);
  local_128._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_128._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  uStack_88 = uStack_88 & 0xffffffff00000000;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d0,0,local_d0._8_4_);
  iVar7 = SUB84(local_d0._8_8_,4);
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
  }
  uVar6 = uStack_a8._4_4_;
  local_a0 = 0xffffffff;
  uStack_a8 = (ulonglong)uStack_a8._4_4_ << 0x20;
  if (0x80 < uVar6) {
    uStack_a8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d0._0_8_);
  }
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_128 + 8),0,(int)uStack_118);
  uVar5 = uStack_118 >> 0x20;
  uStack_118 = uStack_118 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(local_128 + 8),0,(int *)((longlong)&uStack_118 + 4));
  }
  iVar7 = local_110.MaxBits;
  local_f0 = 0xffffffff;
  local_110._24_8_ = (ulonglong)(uint)local_110.MaxBits << 0x20;
  if (0x80 < (uint)iVar7) {
    local_110.NumBits = 0;
    local_110.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_110,0);
  }
  if (local_110.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_110.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_128._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_128._8_8_);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_128);
  *(undefined1 *)&this_00->_padding_ = 1;
  FPersistentStatsBase::LoadStatsFromDisk((FPersistentStatsBase *)this_00);
  if (!param_4) {
    iVar7 = (int)this_00->_padding_;
    if (iVar7 == local_168) {
      if (iVar7 < 2) goto LAB_148bd9adf;
      iVar7 = wcscmp((wchar_t *)this_00->_padding_,(wchar_t *)local_170.Data);
      bVar13 = iVar7 == 0;
    }
    else {
      bVar13 = iVar7 + local_168 == 1;
    }
    if (bVar13) goto LAB_148bd9adf;
  }
  TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
           *)&this_00->_padding_);
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)&this_00->_padding_);
  iVar7 = local_168;
  _Src_00.Data = local_170.Data;
  plVar2 = &this_00->_padding_;
  if ((ForAnyElementType *)plVar2 != &local_170) {
    lVar10 = (longlong)local_168;
    piVar1 = (int *)((longlong)&this_00->_padding_ + 4);
    iVar12 = *piVar1;
    *(int *)&this_00->_padding_ = local_168;
    if ((local_168 == 0) && (iVar12 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_168,iVar12,(ForAnyElementType *)plVar2,local_168,piVar1);
      if (iVar7 != 0) {
        memcpy((void *)*plVar2,_Src_00.Data,lVar10 * 2);
      }
    }
  }
  *(undefined1 *)((longlong)&this_00->_padding_ + 1) = 1;
LAB_148bd9adf:
  FPersistentStatsBase::SaveStatsToDisk((FPersistentStatsBase *)this_00);
  pFVar11 = (FName *)(param_2->AllocatorInstance).Data;
  iVar7 = param_2->ArrayNum;
  pFVar3 = pFVar11 + iVar7;
  while( true ) {
    if (param_2->ArrayNum != iVar7) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_188);
    }
    if (pFVar11 == pFVar3) break;
    local_180 = *pFVar11;
    pFVar9 = ::FName::ToString(&local_180,&local_150);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&this_00->RequiredBundles,pFVar9);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    pFVar11 = pFVar11 + 1;
  }
  *(undefined1 *)((longlong)&this_00->_padding_ + 1) = 1;
  (**(code **)(this->_padding_ + 0x108))(this,param_1);
  if (local_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data);
  }
  return;
}

// StopBundlePersistentStatTimer @ 148bda770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::StopBundlePersistentStatTimer
          (FPersistentStatContainerBase *this,FName param_1,ETimingStatNames param_2)

{
  int iVar1;
  ulonglong uVar2;
  FName FVar3;
  uint uVar4;
  FBundlePersistentStats *this_00;
  FName *pFVar5;
  undefined1 *puVar6;
  uint uVar7;
  FName local_res10 [3];
  undefined1 auStackY_158 [32];
  FName local_128 [2];
  undefined1 local_118 [16];
  undefined8 uStack_108;
  TBitArray<FDefaultBitArrayAllocator> local_100;
  longlong local_e0;
  longlong lStack_d8;
  void *local_d0;
  ulonglong uStack_c8;
  undefined1 local_c0 [24];
  longlong lStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong lStack_88;
  void *local_80;
  ulonglong uStack_78;
  void *local_70;
  longlong lStack_68;
  undefined2 local_60;
  undefined1 local_5e;
  FString local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_60 = 0;
  local_118._8_8_ = (void *)0x0;
  uStack_108 = 0;
  local_100.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d0 = (void *)0x0;
  uStack_c8 = 0;
  local_c0._0_8_ = (FScriptContainerElement *)0x0;
  lStack_d8 = 0;
  local_c0._8_8_ = 0;
  lStack_88 = 0;
  local_a0 = (void *)0x0;
  local_100._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_e0 = _UNK_150631d98;
  uStack_98 = ___xmm_00000000ffffffff0000008000000000;
  local_90 = _UNK_150631d98;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  lStack_68 = 0;
  local_100.AllocatorInstance.InlineData[0] = '\0';
  local_100.AllocatorInstance.InlineData[1] = '\0';
  local_100.AllocatorInstance.InlineData[2] = '\0';
  local_100.AllocatorInstance.InlineData[3] = '\0';
  local_100.AllocatorInstance.InlineData[4] = '\0';
  local_100.AllocatorInstance.InlineData[5] = '\0';
  local_100.AllocatorInstance.InlineData[6] = '\0';
  local_100.AllocatorInstance.InlineData[7] = '\0';
  local_100.AllocatorInstance.InlineData[8] = '\0';
  local_100.AllocatorInstance.InlineData[9] = '\0';
  local_100.AllocatorInstance.InlineData[10] = '\0';
  local_100.AllocatorInstance.InlineData[0xb] = '\0';
  local_100.AllocatorInstance.InlineData[0xc] = '\0';
  local_100.AllocatorInstance.InlineData[0xd] = '\0';
  local_100.AllocatorInstance.InlineData[0xe] = '\0';
  local_100.AllocatorInstance.InlineData[0xf] = '\0';
  local_5e = 0;
  local_c0._16_8_ = 0;
  lStack_a8 = 0;
  local_118._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  local_res10[0] = param_1;
  local_128[0] = param_1;
  ::FName::ToString(local_128,&local_58);
  FVar3 = local_res10[0];
  uVar4 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  uVar4 = uVar4 + FVar3.Number;
  if (*(int *)&(this->PerBundlePersistentStatMap).field_0x8 !=
      *(int *)&(this->PerBundlePersistentStatMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->PerBundlePersistentStatMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->PerBundlePersistentStatMap).field_0x38;
    }
    uVar7 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->PerBundlePersistentStatMap).field_0x48 - 1U & uVar4)
                               * 4);
    if (uVar7 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar7 * 0xe0 +
                          *(longlong *)&this->PerBundlePersistentStatMap);
        if (*pFVar5 == local_res10[0]) {
          if (pFVar5 != (FName *)0x0) {
            this_00 = (FBundlePersistentStats *)(pFVar5 + 1);
            goto LAB_148bda8cb;
          }
          break;
        }
        uVar7 = pFVar5[0x1b].ComparisonIndex.Value;
      } while (uVar7 != 0xffffffff);
    }
  }
  this_00 = TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
            ::
            EmplaceByHash<FName_const_&,InstallBundleUtil::PersistentStats::FBundlePersistentStats>
                      ((TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
                        *)&this->PerBundlePersistentStatMap,uVar4,local_res10,
                       (FBundlePersistentStats *)local_118);
LAB_148bda8cb:
  local_118._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_118._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  uStack_78 = uStack_78 & 0xffffffff00000000;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c0,0,local_c0._8_4_);
  iVar1 = SUB84(local_c0._8_8_,4);
  local_c0._8_8_ = local_c0._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c0,0,(int *)(local_c0 + 0xc));
  }
  uVar4 = uStack_98._4_4_;
  local_90 = 0xffffffff;
  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
  if (0x80 < uVar4) {
    uStack_98 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c0 + 0x10),0);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if ((FScriptContainerElement *)local_c0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c0._0_8_);
  }
  uStack_c8 = uStack_c8 & 0xffffffff00000000;
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_118 + 8),0,(int)uStack_108);
  uVar2 = uStack_108 >> 0x20;
  uStack_108 = uStack_108 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(local_118 + 8),0,(int *)((longlong)&uStack_108 + 4));
  }
  iVar1 = local_100.MaxBits;
  local_e0 = 0xffffffff;
  local_100._24_8_ = (ulonglong)(uint)local_100.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_100.NumBits = 0;
    local_100.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_100,0);
  }
  if (local_100.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_118._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_118._8_8_);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_118);
  FPersistentStatsBase::StopTimingStat((FPersistentStatsBase *)this_00,param_2,true);
  (**(code **)(this->_padding_ + 0xf0))(this,this_00,param_2);
  return;
}

// StopBundlePersistentStatTracking @ 148bdaaa0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::StopBundlePersistentStatTracking
          (FPersistentStatContainerBase *this,FName param_1,bool param_2)

{
  FBundlePersistentStats *this_00;
  
  this_00 = TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
            ::Find((TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
                    *)&this->PerBundlePersistentStatMap,param_1);
  if (this_00 != (FBundlePersistentStats *)0x0) {
    FPersistentStatsBase::StatsEnd((FPersistentStatsBase *)this_00,param_2);
    return;
  }
  return;
}

// StopSessionPersistentStatTimer @ 148bdaae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::StopSessionPersistentStatTimer
          (FPersistentStatContainerBase *this,FString *param_1,ETimingStatNames param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  FSessionPersistentStats *this_00;
  wchar_t *pwVar4;
  int iVar5;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [16];
  undefined8 uStack_108;
  TBitArray<FDefaultBitArrayAllocator> local_100;
  longlong local_e0;
  longlong lStack_d8;
  void *local_d0;
  ulonglong uStack_c8;
  undefined1 local_c0 [24];
  longlong lStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong lStack_88;
  void *local_80;
  ulonglong uStack_78;
  void *local_70;
  longlong lStack_68;
  undefined2 local_60;
  undefined1 local_5e;
  FString local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_118._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  local_60 = 0;
  local_118._8_8_ = (void *)0x0;
  uStack_108 = 0;
  local_100.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d0 = (void *)0x0;
  iVar5 = 0;
  uStack_c8 = 0;
  local_c0._0_8_ = (FScriptContainerElement *)0x0;
  lStack_d8 = 0;
  local_c0._8_8_ = 0;
  lStack_88 = 0;
  local_a0 = (void *)0x0;
  local_100._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_e0 = _UNK_150631d98;
  uStack_98 = ___xmm_00000000ffffffff0000008000000000;
  local_90 = _UNK_150631d98;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  lStack_68 = 0;
  local_100.AllocatorInstance.InlineData[0] = '\0';
  local_100.AllocatorInstance.InlineData[1] = '\0';
  local_100.AllocatorInstance.InlineData[2] = '\0';
  local_100.AllocatorInstance.InlineData[3] = '\0';
  local_100.AllocatorInstance.InlineData[4] = '\0';
  local_100.AllocatorInstance.InlineData[5] = '\0';
  local_100.AllocatorInstance.InlineData[6] = '\0';
  local_100.AllocatorInstance.InlineData[7] = '\0';
  local_100.AllocatorInstance.InlineData[8] = '\0';
  local_100.AllocatorInstance.InlineData[9] = '\0';
  local_100.AllocatorInstance.InlineData[10] = '\0';
  local_100.AllocatorInstance.InlineData[0xb] = '\0';
  local_100.AllocatorInstance.InlineData[0xc] = '\0';
  local_100.AllocatorInstance.InlineData[0xd] = '\0';
  local_100.AllocatorInstance.InlineData[0xe] = '\0';
  local_100.AllocatorInstance.InlineData[0xf] = '\0';
  local_5e = 0;
  local_c0._16_8_ = 0;
  lStack_a8 = 0;
  ::FString::FString(&local_58,param_1);
  iVar1 = (param_1->Data).ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  if (iVar1 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar5 = iVar1 + -1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar4);
  this_00 = TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
            ::
            FindOrAddImpl<FString_const_&,InstallBundleUtil::PersistentStats::FSessionPersistentStats>
                      ((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
                        *)&this->SessionPersistentStatMap,uVar3,param_1,
                       (FSessionPersistentStats *)local_118);
  local_118._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  DestructItems<FString,int>((FString *)local_48.Data,(int)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_118._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  uStack_78 = uStack_78 & 0xffffffff00000000;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c0,0,local_c0._8_4_);
  iVar1 = SUB84(local_c0._8_8_,4);
  local_c0._8_8_ = local_c0._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c0,0,(int *)(local_c0 + 0xc));
  }
  uVar3 = uStack_98._4_4_;
  local_90 = 0xffffffff;
  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
  if (0x80 < uVar3) {
    uStack_98 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c0 + 0x10),0);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if ((FScriptContainerElement *)local_c0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c0._0_8_);
  }
  uStack_c8 = uStack_c8 & 0xffffffff00000000;
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_118 + 8),0,(int)uStack_108);
  uVar2 = uStack_108 >> 0x20;
  uStack_108 = uStack_108 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(local_118 + 8),0,(int *)((longlong)&uStack_108 + 4));
  }
  iVar1 = local_100.MaxBits;
  local_e0 = 0xffffffff;
  local_100._24_8_ = (ulonglong)(uint)local_100.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_100.NumBits = 0;
    local_100.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_100,0);
  }
  if (local_100.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_118._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_118._8_8_);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_118);
  FPersistentStatsBase::StopTimingStat((FPersistentStatsBase *)this_00,param_2,true);
  (**(code **)(this->_padding_ + 0xf0))(this,this_00,param_2);
  return;
}

// StopSessionPersistentStatTracking @ 148bdadc0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::StopSessionPersistentStatTracking
          (FPersistentStatContainerBase *this,FString *param_1,bool param_2)

{
  FSessionPersistentStats *this_00;
  
  this_00 = TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
            ::Find((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
                    *)&this->SessionPersistentStatMap,param_1);
  if (this_00 != (FSessionPersistentStats *)0x0) {
    FPersistentStatsBase::StatsEnd((FPersistentStatsBase *)this_00,param_2);
    return;
  }
  return;
}

// Tick @ 148bdb230

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::Tick
          (FPersistentStatContainerBase *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::Tick(float)_::_2_::FStat_STAT_FPersistentStatContainerBase_Tick>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  float fVar11;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_48 [3];
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FPersistentStatContainerBase_Tick ==
          (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::Tick(float)_::_2_::FStat_STAT_FPersistentStatContainerBase_Tick>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_FPersistentStatContainerBase_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FPersistentStatContainerBase_Tick,
                   *pFVar5,L"STAT_FPersistentStatContainerBase_Tick","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_FPersistentStatContainerBase_Tick;
  if (StatPtr_STAT_FPersistentStatContainerBase_Tick ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::Tick(float)_::_2_::FStat_STAT_FPersistentStatContainerBase_Tick>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_FPersistentStatContainerBase_Tick");
    FVar6 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::Tick(float)_::_2_::FStat_STAT_FPersistentStatContainerBase_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FPersistentStatContainerBase_Tick,*pFVar5,
                         L"STAT_FPersistentStatContainerBase_Tick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleUtils.cpp"
                   ,0x47f);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_148bdb3c1;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_148bdb3c1:
  if (this->bShouldAutoUpdateTimersInTick != false) {
    fVar11 = this->TimerAutoUpdateTimeRemaining - param_1;
    this->TimerAutoUpdateTimeRemaining = fVar11;
    if (fVar11 < 0.0) {
      (**(code **)(this->_padding_ + 0x98))(this);
      (**(code **)(this->_padding_ + 0xa8))(this);
      (**(code **)(this->_padding_ + 0xb0))(this);
    }
  }
  if (this->bShouldSaveDirtyStatsOnTick != false) {
    fVar11 = this->TimerDirtyStatUpdateTimeRemaining - param_1;
    this->TimerDirtyStatUpdateTimeRemaining = fVar11;
    if (fVar11 < 0.0) {
      (**(code **)(this->_padding_ + 0xa0))(this);
      (**(code **)(this->_padding_ + 0x78))(this);
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48[0].NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_48[0].NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return true;
}

// UpdateAllBundlesActiveTimers @ 148bdc7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::UpdateAllBundlesActiveTimers
          (FPersistentStatContainerBase *this)

{
  FName *pFVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  FName FVar7;
  int iVar8;
  uint uVar9;
  FBundlePersistentStats *this_00;
  ulonglong uVar10;
  FName *pFVar11;
  undefined1 *puVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  FName local_140;
  TArray<FName,TSizedDefaultAllocator<32>_> local_138;
  FName local_128 [2];
  undefined1 local_118 [16];
  undefined8 uStack_108;
  TBitArray<FDefaultBitArrayAllocator> local_100;
  longlong local_e0;
  longlong lStack_d8;
  void *local_d0;
  ulonglong uStack_c8;
  undefined1 local_c0 [24];
  longlong lStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong lStack_88;
  void *local_80;
  ulonglong uStack_78;
  void *local_70;
  longlong lStack_68;
  undefined2 local_60;
  undefined1 local_5e;
  FString local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
              *)&this->PerBundlePersistentStatMap,&local_138);
  lVar6 = _UNK_150631d98;
  lVar4 = ___xmm_00000000ffffffff0000008000000000;
  iVar8 = local_138.ArrayNum;
  uVar10 = (ulonglong)local_138.ArrayNum;
  pFVar1 = (FName *)(local_138.AllocatorInstance.Data + uVar10 * 8);
  FVar13.Data = local_138.AllocatorInstance.Data;
  do {
    if ((int)uVar10 != iVar8) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    lVar5 = ___xmm_00000000ffffffff0000008000000000;
    if ((FName *)FVar13.Data == pFVar1) {
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      return;
    }
    local_140 = *(FName *)FVar13.Data;
    local_118._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
    local_118._8_8_ = (void *)0x0;
    uStack_108 = 0;
    local_100.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_d0 = (void *)0x0;
    uStack_c8 = 0;
    local_c0._0_8_ = (FScriptContainerElement *)0x0;
    local_c0._8_8_ = 0;
    lStack_d8 = 0;
    local_a0 = (void *)0x0;
    lStack_88 = 0;
    local_80 = (void *)0x0;
    ___xmm_00000000ffffffff0000008000000000 = (undefined4)lVar4;
    _UNK_150631d94 = SUB84(lVar4,4);
    local_100.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_100.MaxBits = _UNK_150631d94;
    local_e0 = lVar6;
    uStack_98 = lVar4;
    local_90 = lVar6;
    uStack_78 = 0;
    local_70 = (void *)0x0;
    lStack_68 = 0;
    local_100.AllocatorInstance.InlineData[0] = '\0';
    local_100.AllocatorInstance.InlineData[1] = '\0';
    local_100.AllocatorInstance.InlineData[2] = '\0';
    local_100.AllocatorInstance.InlineData[3] = '\0';
    local_100.AllocatorInstance.InlineData[4] = '\0';
    local_100.AllocatorInstance.InlineData[5] = '\0';
    local_100.AllocatorInstance.InlineData[6] = '\0';
    local_100.AllocatorInstance.InlineData[7] = '\0';
    local_100.AllocatorInstance.InlineData[8] = '\0';
    local_100.AllocatorInstance.InlineData[9] = '\0';
    local_100.AllocatorInstance.InlineData[10] = '\0';
    local_100.AllocatorInstance.InlineData[0xb] = '\0';
    local_100.AllocatorInstance.InlineData[0xc] = '\0';
    local_100.AllocatorInstance.InlineData[0xd] = '\0';
    local_100.AllocatorInstance.InlineData[0xe] = '\0';
    local_100.AllocatorInstance.InlineData[0xf] = '\0';
    local_60 = 0;
    local_c0._16_8_ = 0;
    lStack_a8 = 0;
    local_5e = 0;
    ___xmm_00000000ffffffff0000008000000000 = lVar5;
    local_128[0] = local_140;
    ::FName::ToString(local_128,&local_58);
    FVar7 = local_140;
    uVar9 = ::GetTypeHash(local_140.ComparisonIndex.Value);
    uVar9 = uVar9 + FVar7.Number;
    if (*(int *)&(this->PerBundlePersistentStatMap).field_0x8 !=
        *(int *)&(this->PerBundlePersistentStatMap).field_0x34) {
      puVar2 = *(undefined1 **)&(this->PerBundlePersistentStatMap).field_0x40;
      puVar12 = &(this->PerBundlePersistentStatMap).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar12 = puVar2;
      }
      uVar14 = *(uint *)(puVar12 +
                        (ulonglong)
                        (*(int *)&(this->PerBundlePersistentStatMap).field_0x48 - 1U & uVar9) * 4);
      if (uVar14 != 0xffffffff) {
        do {
          pFVar11 = (FName *)((longlong)(int)uVar14 * 0xe0 +
                             *(longlong *)&this->PerBundlePersistentStatMap);
          if (*pFVar11 == local_140) {
            if (pFVar11 != (FName *)0x0) {
              this_00 = (FBundlePersistentStats *)(pFVar11 + 1);
              goto LAB_148bdc97c;
            }
            break;
          }
          uVar14 = pFVar11[0x1b].ComparisonIndex.Value;
        } while (uVar14 != 0xffffffff);
      }
    }
    this_00 = TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
              ::
              EmplaceByHash<FName_const_&,InstallBundleUtil::PersistentStats::FBundlePersistentStats>
                        ((TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
                          *)&this->PerBundlePersistentStatMap,uVar9,&local_140,
                         (FBundlePersistentStats *)local_118);
LAB_148bdc97c:
    local_118._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_118._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    uStack_78 = uStack_78 & 0xffffffff00000000;
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_c0,0,local_c0._8_4_);
    iVar3 = SUB84(local_c0._8_8_,4);
    local_c0._8_8_ = local_c0._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_c0,0,(int *)(local_c0 + 0xc));
    }
    uVar9 = uStack_98._4_4_;
    local_90 = 0xffffffff;
    uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
    if (0x80 < uVar9) {
      uStack_98 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_c0 + 0x10),0);
    }
    if (local_a0 != (void *)0x0) {
      FMemory::Free(local_a0);
    }
    if ((FScriptContainerElement *)local_c0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c0._0_8_);
    }
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    if (local_d0 != (void *)0x0) {
      FMemory::Free(local_d0);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)(local_118 + 8),0,(int)uStack_108);
    uVar10 = uStack_108 >> 0x20;
    uStack_108 = uStack_108 & 0xffffffff00000000;
    if ((int)uVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)(local_118 + 8),0,(int *)((longlong)&uStack_108 + 4))
      ;
    }
    iVar3 = local_100.MaxBits;
    local_e0 = 0xffffffff;
    local_100._24_8_ = (ulonglong)(uint)local_100.MaxBits << 0x20;
    if (0x80 < (uint)iVar3) {
      local_100.NumBits = 0;
      local_100.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_100,0);
    }
    if (local_100.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
    }
    if ((void *)local_118._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_118._8_8_);
    }
    FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_118);
    FPersistentStatsBase::UpdateAllActiveTimers((FPersistentStatsBase *)this_00);
    uVar10 = local_138._8_8_ & 0xffffffff;
    FVar13.Data = FVar13.Data + 8;
  } while( true );
}

// UpdateAllSessionActiveTimers @ 148bdcb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::UpdateAllSessionActiveTimers
          (FPersistentStatContainerBase *this)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  FSessionPersistentStats *this_00;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_140;
  undefined1 local_128 [16];
  undefined8 uStack_118;
  TBitArray<FDefaultBitArrayAllocator> local_110;
  longlong local_f0;
  longlong lStack_e8;
  void *local_e0;
  ulonglong uStack_d8;
  undefined1 local_d0 [24];
  longlong lStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  void *local_90;
  ulonglong uStack_88;
  void *local_80;
  longlong lStack_78;
  undefined2 local_70;
  undefined1 local_6e;
  FString local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
              *)&this->SessionPersistentStatMap,&local_140);
  lVar4 = _UNK_150631d98;
  lVar2 = ___xmm_00000000ffffffff0000008000000000;
  iVar5 = local_140.ArrayNum;
  pFVar9 = local_140.AllocatorInstance.Data + (longlong)local_140.ArrayNum * 0x10;
  FVar8.Data = local_140.AllocatorInstance.Data;
  while( true ) {
    if (local_140.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    lVar3 = ___xmm_00000000ffffffff0000008000000000;
    if (FVar8.Data == pFVar9) break;
    local_70 = 0;
    local_128._8_8_ = (void *)0x0;
    uStack_118 = 0;
    local_110.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_e0 = (void *)0x0;
    iVar10 = 0;
    uStack_d8 = 0;
    local_d0._0_8_ = (FScriptContainerElement *)0x0;
    lStack_e8 = 0;
    local_d0._8_8_ = 0;
    lStack_98 = 0;
    local_b0 = (void *)0x0;
    ___xmm_00000000ffffffff0000008000000000 = (undefined4)lVar2;
    _UNK_150631d94 = SUB84(lVar2,4);
    local_110.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_110.MaxBits = _UNK_150631d94;
    local_f0 = lVar4;
    uStack_a8 = lVar2;
    local_a0 = lVar4;
    local_90 = (void *)0x0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    lStack_78 = 0;
    local_110.AllocatorInstance.InlineData[0] = '\0';
    local_110.AllocatorInstance.InlineData[1] = '\0';
    local_110.AllocatorInstance.InlineData[2] = '\0';
    local_110.AllocatorInstance.InlineData[3] = '\0';
    local_110.AllocatorInstance.InlineData[4] = '\0';
    local_110.AllocatorInstance.InlineData[5] = '\0';
    local_110.AllocatorInstance.InlineData[6] = '\0';
    local_110.AllocatorInstance.InlineData[7] = '\0';
    local_110.AllocatorInstance.InlineData[8] = '\0';
    local_110.AllocatorInstance.InlineData[9] = '\0';
    local_110.AllocatorInstance.InlineData[10] = '\0';
    local_110.AllocatorInstance.InlineData[0xb] = '\0';
    local_110.AllocatorInstance.InlineData[0xc] = '\0';
    local_110.AllocatorInstance.InlineData[0xd] = '\0';
    local_110.AllocatorInstance.InlineData[0xe] = '\0';
    local_110.AllocatorInstance.InlineData[0xf] = '\0';
    local_6e = 0;
    local_d0._16_8_ = 0;
    lStack_b8 = 0;
    local_128._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
    ___xmm_00000000ffffffff0000008000000000 = lVar3;
    ::FString::FString(&local_68,(FString *)FVar8.Data);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50._0_4_ = 0;
    local_50._4_4_ = 0;
    if (*(int *)(FVar8.Data + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)FVar8.Data;
      iVar10 = *(int *)(FVar8.Data + 8) + -1;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar7);
    this_00 = TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
              ::
              FindOrAddImpl<FString_const_&,InstallBundleUtil::PersistentStats::FSessionPersistentStats>
                        ((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
                          *)&this->SessionPersistentStatMap,uVar6,(FString *)FVar8.Data,
                         (FSessionPersistentStats *)local_128);
    local_128._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
    DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_128._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    uStack_88 = uStack_88 & 0xffffffff00000000;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d0,0,local_d0._8_4_);
    iVar10 = SUB84(local_d0._8_8_,4);
    local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
    }
    uVar6 = uStack_a8._4_4_;
    local_a0 = 0xffffffff;
    uStack_a8 = (ulonglong)uStack_a8._4_4_ << 0x20;
    if (0x80 < uVar6) {
      uStack_a8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
    }
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d0._0_8_);
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
    if (local_e0 != (void *)0x0) {
      FMemory::Free(local_e0);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)(local_128 + 8),0,(int)uStack_118);
    uVar1 = uStack_118 >> 0x20;
    uStack_118 = uStack_118 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)(local_128 + 8),0,(int *)((longlong)&uStack_118 + 4))
      ;
    }
    iVar10 = local_110.MaxBits;
    local_f0 = 0xffffffff;
    local_110._24_8_ = (ulonglong)(uint)local_110.MaxBits << 0x20;
    if (0x80 < (uint)iVar10) {
      local_110.NumBits = 0;
      local_110.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_110,0);
    }
    if (local_110.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_110.AllocatorInstance.SecondaryData);
    }
    if ((void *)local_128._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_128._8_8_);
    }
    FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_128);
    FPersistentStatsBase::UpdateAllActiveTimers((FPersistentStatsBase *)this_00);
    FVar8.Data = FVar8.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

// UpdateBundlePersistentStatTimer @ 148bdd1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::UpdateBundlePersistentStatTimer
          (FPersistentStatContainerBase *this,FName param_1,ETimingStatNames param_2)

{
  int iVar1;
  ulonglong uVar2;
  FName FVar3;
  uint uVar4;
  FBundlePersistentStats *this_00;
  FName *pFVar5;
  undefined1 *puVar6;
  uint uVar7;
  FName local_res10 [2];
  undefined1 auStackY_148 [32];
  FName local_118 [2];
  undefined1 local_108 [16];
  undefined8 uStack_f8;
  TBitArray<FDefaultBitArrayAllocator> local_f0;
  longlong local_d0;
  longlong lStack_c8;
  void *local_c0;
  ulonglong uStack_b8;
  undefined1 local_b0 [24];
  longlong lStack_98;
  void *local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong lStack_78;
  void *local_70;
  ulonglong uStack_68;
  void *local_60;
  longlong lStack_58;
  undefined2 local_50;
  undefined1 local_4e;
  FString local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_50 = 0;
  local_108._8_8_ = (void *)0x0;
  uStack_f8 = 0;
  local_f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c0 = (void *)0x0;
  uStack_b8 = 0;
  local_b0._0_8_ = (FScriptContainerElement *)0x0;
  local_b0._8_8_ = 0;
  lStack_c8 = 0;
  local_90 = (void *)0x0;
  lStack_78 = 0;
  local_70 = (void *)0x0;
  local_f0._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_d0 = _UNK_150631d98;
  uStack_88 = ___xmm_00000000ffffffff0000008000000000;
  local_80 = _UNK_150631d98;
  uStack_68 = 0;
  local_60 = (void *)0x0;
  lStack_58 = 0;
  local_f0.AllocatorInstance.InlineData[0] = '\0';
  local_f0.AllocatorInstance.InlineData[1] = '\0';
  local_f0.AllocatorInstance.InlineData[2] = '\0';
  local_f0.AllocatorInstance.InlineData[3] = '\0';
  local_f0.AllocatorInstance.InlineData[4] = '\0';
  local_f0.AllocatorInstance.InlineData[5] = '\0';
  local_f0.AllocatorInstance.InlineData[6] = '\0';
  local_f0.AllocatorInstance.InlineData[7] = '\0';
  local_f0.AllocatorInstance.InlineData[8] = '\0';
  local_f0.AllocatorInstance.InlineData[9] = '\0';
  local_f0.AllocatorInstance.InlineData[10] = '\0';
  local_f0.AllocatorInstance.InlineData[0xb] = '\0';
  local_f0.AllocatorInstance.InlineData[0xc] = '\0';
  local_f0.AllocatorInstance.InlineData[0xd] = '\0';
  local_f0.AllocatorInstance.InlineData[0xe] = '\0';
  local_f0.AllocatorInstance.InlineData[0xf] = '\0';
  local_4e = 0;
  local_b0._16_8_ = 0;
  lStack_98 = 0;
  local_108._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  local_res10[0] = param_1;
  local_118[0] = param_1;
  ::FName::ToString(local_118,&local_48);
  FVar3 = local_res10[0];
  uVar4 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  uVar4 = uVar4 + FVar3.Number;
  if (*(int *)&(this->PerBundlePersistentStatMap).field_0x8 !=
      *(int *)&(this->PerBundlePersistentStatMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->PerBundlePersistentStatMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->PerBundlePersistentStatMap).field_0x38;
    }
    uVar7 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->PerBundlePersistentStatMap).field_0x48 - 1U & uVar4)
                               * 4);
    if (uVar7 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar7 * 0xe0 +
                          *(longlong *)&this->PerBundlePersistentStatMap);
        if (*pFVar5 == local_res10[0]) {
          if (pFVar5 != (FName *)0x0) {
            this_00 = (FBundlePersistentStats *)(pFVar5 + 1);
            goto LAB_148bdd34a;
          }
          break;
        }
        uVar7 = pFVar5[0x1b].ComparisonIndex.Value;
      } while (uVar7 != 0xffffffff);
    }
  }
  this_00 = TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
            ::
            EmplaceByHash<FName_const_&,InstallBundleUtil::PersistentStats::FBundlePersistentStats>
                      ((TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
                        *)&this->PerBundlePersistentStatMap,uVar4,local_res10,
                       (FBundlePersistentStats *)local_108);
LAB_148bdd34a:
  local_108._0_8_ = &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_108._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b0,0,local_b0._8_4_);
  iVar1 = SUB84(local_b0._8_8_,4);
  local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
  }
  uVar4 = uStack_88._4_4_;
  local_80 = 0xffffffff;
  uStack_88 = (ulonglong)uStack_88._4_4_ << 0x20;
  if (0x80 < uVar4) {
    uStack_88 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  uStack_b8 = uStack_b8 & 0xffffffff00000000;
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_108 + 8),0,(int)uStack_f8);
  uVar2 = uStack_f8 >> 0x20;
  uStack_f8 = uStack_f8 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(local_108 + 8),0,(int *)((longlong)&uStack_f8 + 4));
  }
  iVar1 = local_f0.MaxBits;
  local_d0 = 0xffffffff;
  local_f0._24_8_ = (ulonglong)(uint)local_f0.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_f0.NumBits = 0;
    local_f0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_f0,0);
  }
  if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f0.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_108._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._8_8_);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_108);
  FPersistentStatsBase::UpdateTimingStat((FPersistentStatsBase *)this_00,param_2);
  return;
}

// UpdateSessionPersistentStatTimer @ 148bde1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::UpdateSessionPersistentStatTimer
          (FPersistentStatContainerBase *this,FString *param_1,ETimingStatNames param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  FSessionPersistentStats *this_00;
  wchar_t *pwVar4;
  int iVar5;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [16];
  undefined8 uStack_108;
  TBitArray<FDefaultBitArrayAllocator> local_100;
  longlong local_e0;
  longlong lStack_d8;
  void *local_d0;
  ulonglong uStack_c8;
  undefined1 local_c0 [24];
  longlong lStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong lStack_88;
  void *local_80;
  ulonglong uStack_78;
  void *local_70;
  longlong lStack_68;
  undefined2 local_60;
  undefined1 local_5e;
  FString local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_118._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  local_60 = 0;
  local_118._8_8_ = (void *)0x0;
  uStack_108 = 0;
  local_100.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d0 = (void *)0x0;
  iVar5 = 0;
  uStack_c8 = 0;
  local_c0._0_8_ = (FScriptContainerElement *)0x0;
  lStack_d8 = 0;
  local_c0._8_8_ = 0;
  lStack_88 = 0;
  local_a0 = (void *)0x0;
  local_100._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_e0 = _UNK_150631d98;
  uStack_98 = ___xmm_00000000ffffffff0000008000000000;
  local_90 = _UNK_150631d98;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  lStack_68 = 0;
  local_100.AllocatorInstance.InlineData[0] = '\0';
  local_100.AllocatorInstance.InlineData[1] = '\0';
  local_100.AllocatorInstance.InlineData[2] = '\0';
  local_100.AllocatorInstance.InlineData[3] = '\0';
  local_100.AllocatorInstance.InlineData[4] = '\0';
  local_100.AllocatorInstance.InlineData[5] = '\0';
  local_100.AllocatorInstance.InlineData[6] = '\0';
  local_100.AllocatorInstance.InlineData[7] = '\0';
  local_100.AllocatorInstance.InlineData[8] = '\0';
  local_100.AllocatorInstance.InlineData[9] = '\0';
  local_100.AllocatorInstance.InlineData[10] = '\0';
  local_100.AllocatorInstance.InlineData[0xb] = '\0';
  local_100.AllocatorInstance.InlineData[0xc] = '\0';
  local_100.AllocatorInstance.InlineData[0xd] = '\0';
  local_100.AllocatorInstance.InlineData[0xe] = '\0';
  local_100.AllocatorInstance.InlineData[0xf] = '\0';
  local_5e = 0;
  local_c0._16_8_ = 0;
  lStack_a8 = 0;
  ::FString::FString(&local_58,param_1);
  iVar1 = (param_1->Data).ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  if (iVar1 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar5 = iVar1 + -1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar4);
  this_00 = TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
            ::
            FindOrAddImpl<FString_const_&,InstallBundleUtil::PersistentStats::FSessionPersistentStats>
                      ((TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
                        *)&this->SessionPersistentStatMap,uVar3,param_1,
                       (FSessionPersistentStats *)local_118);
  local_118._0_8_ = &___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  DestructItems<FString,int>((FString *)local_48.Data,(int)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_118._0_8_ = &___7FPersistentStatsBase_PersistentStats_InstallBundleUtil__6B_;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  uStack_78 = uStack_78 & 0xffffffff00000000;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c0,0,local_c0._8_4_);
  iVar1 = SUB84(local_c0._8_8_,4);
  local_c0._8_8_ = local_c0._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c0,0,(int *)(local_c0 + 0xc));
  }
  uVar3 = uStack_98._4_4_;
  local_90 = 0xffffffff;
  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
  if (0x80 < uVar3) {
    uStack_98 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c0 + 0x10),0);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if ((FScriptContainerElement *)local_c0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c0._0_8_);
  }
  uStack_c8 = uStack_c8 & 0xffffffff00000000;
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(local_118 + 8),0,(int)uStack_108);
  uVar2 = uStack_108 >> 0x20;
  uStack_108 = uStack_108 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(local_118 + 8),0,(int *)((longlong)&uStack_108 + 4));
  }
  iVar1 = local_100.MaxBits;
  local_e0 = 0xffffffff;
  local_100._24_8_ = (ulonglong)(uint)local_100.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_100.NumBits = 0;
    local_100.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_100,0);
  }
  if (local_100.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_118._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_118._8_8_);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)local_118);
  FPersistentStatsBase::UpdateTimingStat((FPersistentStatsBase *)this_00,param_2);
  return;
}

// UpdateStatsForBackground @ 148bde4a0

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::UpdateStatsForBackground
          (FPersistentStatContainerBase *this,FPersistentStatsBase *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  int *piVar5;
  int iVar6;
  ETimingStatNames EVar7;
  wchar_t *pwVar8;
  
  pFVar4 = PersistentStats::LexToString(NumBackgrounded);
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar8 = L"";
    iVar6 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  piVar5 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                       *)&param_1->CountStatMap,uVar3,pFVar4);
  *piVar5 = *piVar5 + 1;
  param_1->bIsDirty = true;
  bVar2 = FPersistentStatsBase::IsTimingStatStarted(param_1,TotalTime_FG);
  if (bVar2) {
    FPersistentStatsBase::StartTimingStat(param_1,TotalTime_BG);
    FPersistentStatsBase::StopTimingStat(param_1,TotalTime_FG,true);
  }
  bVar2 = FPersistentStatsBase::IsTimingStatStarted(param_1,ChunkDBDownloadTime_FG);
  if (bVar2) {
    FPersistentStatsBase::StartTimingStat(param_1,ChunkDBDownloadTime_BG);
    EVar7 = ChunkDBDownloadTime_FG;
  }
  else {
    bVar2 = FPersistentStatsBase::IsTimingStatStarted(param_1,InstallTime_FG);
    if (bVar2) {
      FPersistentStatsBase::StartTimingStat(param_1,InstallTime_BG);
      EVar7 = InstallTime_FG;
    }
    else {
      bVar2 = FPersistentStatsBase::IsTimingStatStarted(param_1,PSOTime_FG);
      if (!bVar2) {
        return;
      }
      FPersistentStatsBase::StartTimingStat(param_1,PSOTime_BG);
      EVar7 = PSOTime_FG;
    }
  }
  FPersistentStatsBase::StopTimingStat(param_1,EVar7,true);
  return;
}

// UpdateStatsForForeground @ 148bde590

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::UpdateStatsForForeground
          (FPersistentStatContainerBase *this,FPersistentStatsBase *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  int *piVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  pFVar4 = PersistentStats::LexToString(NumResumedFromBackground);
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  piVar5 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                       *)&param_1->CountStatMap,uVar3,pFVar4);
  *piVar5 = *piVar5 + 1;
  param_1->bIsDirty = true;
  bVar2 = FPersistentStatsBase::IsTimingStatStarted(param_1,TotalTime_BG);
  if (bVar2) {
    FPersistentStatsBase::StopTimingStat(param_1,TotalTime_BG,true);
    FPersistentStatsBase::StartTimingStat(param_1,TotalTime_FG);
  }
  bVar2 = FPersistentStatsBase::IsTimingStatStarted(param_1,ChunkDBDownloadTime_BG);
  if (!bVar2) {
    bVar2 = FPersistentStatsBase::IsTimingStatStarted(param_1,InstallTime_BG);
    if (!bVar2) {
      bVar2 = FPersistentStatsBase::IsTimingStatStarted(param_1,PSOTime_BG);
      if (bVar2) {
        FPersistentStatsBase::StopTimingStat(param_1,PSOTime_BG,true);
        FPersistentStatsBase::StartTimingStat(param_1,PSOTime_FG);
      }
      return;
    }
    FPersistentStatsBase::StopTimingStat(param_1,InstallTime_BG,true);
    FPersistentStatsBase::StartTimingStat(param_1,InstallTime_FG);
    return;
  }
  FPersistentStatsBase::StopTimingStat(param_1,ChunkDBDownloadTime_BG,true);
  FPersistentStatsBase::StartTimingStat(param_1,ChunkDBDownloadTime_FG);
  return;
}

// operator() @ 150537780

bool __thiscall
`InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::IncrementBundlePersistentCounter'
::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407794341>);
  if (bVar2) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    InstallBundleUtil::PersistentStats::LexToString(**(ECountStatNames **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407794341>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150537817;
    }
  }
  bVar2 = false;
LAB_150537817:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150537850

bool __thiscall
`InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::
IncrementSessionPersistentCounter'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407794333>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ECountStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407794333>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150537aa0

bool __thiscall
`InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::StartBundlePersistentStatTimer'::
__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407794389>);
  if (bVar2) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407794389>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150537b37;
    }
  }
  bVar2 = false;
LAB_150537b37:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150537b70

bool __thiscall
`InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::StartSessionPersistentStatTimer'
::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407794379>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407794379>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

