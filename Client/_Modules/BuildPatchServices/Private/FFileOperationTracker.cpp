// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 17

// FFileOperationTracker @ 14327fb10

FFileOperationTracker * __thiscall
BuildPatchServices::FFileOperationTracker::FFileOperationTracker
          (FFileOperationTracker *this,FTSTicker *param_1)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FTSTicker *this_00;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  FFileOperationTracker *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TWeakPtr<FTSTicker::FElement,1> *pTVar12;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  this->Ticker = param_1;
  pTVar1 = &this->TickerHandle;
  pTVar8 = (TNode *)0x0;
  *(undefined ***)this = &___7FFileOperationTracker_BuildPatchServices__6B_;
  (this->FileOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileOperationStates).ArrayNum = 0;
  (this->FileOperationStates).ArrayMax = 0;
  (this->DummyOperationStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DummyOperationStates).ArrayNum = 0;
  (this->DummyOperationStates).ArrayMax = 0;
  *(undefined8 *)&this->FileOperationStatesDataIdLookup = 0;
  *(undefined8 *)&(this->FileOperationStatesDataIdLookup).field_0x8 = 0;
  *(undefined8 *)&(this->FileOperationStatesDataIdLookup).field_0x20 = 0;
  pTVar1->Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)&(this->FileOperationStatesDataIdLookup).field_0x28 = 0;
  *(undefined4 *)&(this->FileOperationStatesDataIdLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileOperationStatesDataIdLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileOperationStatesDataIdLookup).field_0x34 = 0;
  *(undefined8 *)&(this->FileOperationStatesDataIdLookup).field_0x40 = 0;
  *(undefined4 *)&(this->FileOperationStatesDataIdLookup).field_0x48 = 0;
  *(undefined8 *)&this->FileOperationStatesFilenameLookup = 0;
  *(undefined8 *)&(this->FileOperationStatesFilenameLookup).field_0x8 = 0;
  *(undefined8 *)&(this->FileOperationStatesFilenameLookup).field_0x20 = 0;
  *(undefined4 *)&(this->FileOperationStatesFilenameLookup).field_0x28 = 0;
  *(undefined4 *)&(this->FileOperationStatesFilenameLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileOperationStatesFilenameLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileOperationStatesFilenameLookup).field_0x34 = 0;
  *(undefined8 *)&(this->FileOperationStatesFilenameLookup).field_0x40 = 0;
  *(undefined4 *)&(this->FileOperationStatesFilenameLookup).field_0x48 = 0;
  pTVar7 = ::operator_new(0x38);
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    *(undefined8 *)&(pTVar7->Item).Values = 0;
    *(undefined8 *)((longlong)&(pTVar7->Item).Values + 8) = 0;
    *(undefined8 *)((longlong)&(pTVar7->Item).Values + 0x10) = 0;
    *(undefined8 *)((longlong)&(pTVar7->Item).Values + 0x18) = 0;
    *(undefined8 *)((longlong)&(pTVar7->Item).Values + 0x20) = 0;
    *(undefined8 *)&(pTVar7->Item).CurrentSubtypeIndex = 0;
    pTVar7->NextNode = (TNode *)0x0;
    (pTVar7->Item).CurrentSubtypeIndex = 0xff;
    pTVar8 = pTVar7;
  }
  (this->UpdateMessages).Tail = pTVar8;
  (this->UpdateMessages).Head = pTVar8;
  this->LastUsedManifestSet = (IBuildManifestSet *)0x0;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\FileOperationTracker.cpp"
                         ,0x5b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FFileOperationTracker *)(*pcVar5)();
    return pFVar9;
  }
  this_00 = this->Ticker;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFFileOperationTracker_BuildPatchServices____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[4] = Tick;
    puVar10[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar12 = FTSTicker::AddTicker
                      (this_00,&local_78,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
  if (pTVar1 != pTVar12) {
    pTVar1->Object = pTVar12->Object;
    pTVar12->Object = (FElement *)0x0;
    pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
    (this->TickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar12->WeakReferenceCount).ReferenceController;
    (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return this;
}

// ~FFileOperationTracker @ 143288330

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FFileOperationTracker::~FFileOperationTracker(FFileOperationTracker *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TNode *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  *(undefined ***)this = &___7FFileOperationTracker_BuildPatchServices__6B_;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\FileOperationTracker.cpp"
                         ,99,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_18.Object = (this->TickerHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  pTVar3 = (this->UpdateMessages).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->UpdateMessages).Tail = pTVar3->NextNode;
    TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
    ::Reset(&pTVar3->Item);
    ::operator_delete(pTVar3,0x38);
    pTVar3 = (this->UpdateMessages).Tail;
  }
  *(undefined4 *)&(this->FileOperationStatesFilenameLookup).field_0x48 = 0;
  pvVar4 = *(void **)&(this->FileOperationStatesFilenameLookup).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileOperationStatesFilenameLookup);
  *(undefined4 *)&(this->FileOperationStatesDataIdLookup).field_0x48 = 0;
  pvVar4 = *(void **)&(this->FileOperationStatesDataIdLookup).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileOperationStatesDataIdLookup);
  DestructItems<BuildPatchServices::FFileOperation,int>
            ((FFileOperation *)(this->DummyOperationStates).AllocatorInstance.Data,
             (this->DummyOperationStates).ArrayNum);
  pFVar5 = (this->DummyOperationStates).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<BuildPatchServices::FFileOperation,int>
            ((FFileOperation *)(this->FileOperationStates).AllocatorInstance.Data,
             (this->FileOperationStates).ArrayNum);
  pFVar5 = (this->FileOperationStates).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  *(undefined ***)this = &___7IFileOperationTracker_BuildPatchServices__6B_;
  return;
}

// BuildOperationInitialiser @ 1432c1be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
* __cdecl BuildPatchServices::FFileOperationTracker::BuildOperationInitialiser
                    (TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
                     *__return_storage_ptr__,IBuildManifestSet *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar5;
  ForAnyElementType *pFVar6;
  longlong *plVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
  *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  FString *pFVar17;
  byte bVar18;
  uint *puVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  undefined8 *puVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  undefined1 auStackY_228 [32];
  FIdentityFunctor local_1e8 [4];
  uint local_1e4;
  undefined1 local_1e0;
  undefined1 local_1df [7];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_1d8;
  uint local_1d0;
  undefined8 local_1c8;
  IBuildManifestSet *local_1c0;
  int local_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b0;
  undefined4 local_1a8;
  uint uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
  *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  int local_180;
  int local_17c;
  FIdentityFunctor *local_178;
  ForAnyElementType *local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  longlong *local_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FString local_e0;
  FString local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_170 = (ForAnyElementType *)&__return_storage_ptr__->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *local_170 = (FScriptContainerElement *)0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_1c0 = param_1;
  local_198 = __return_storage_ptr__;
  (**(code **)((longlong)*param_1 + 0x50))(param_1,local_98);
  local_178 = local_1e8;
  uVar31 = local_98._8_4_ - local_64;
  local_1e4 = local_64;
  local_1d0 = local_98._8_4_;
  local_1c8 = 1;
  if (0 < (int)uVar31) {
    uVar3 = 1;
    uVar24 = local_98._8_4_;
    uVar23 = local_64;
    uVar27 = local_98._8_4_;
    pTVar8 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_98._0_8_;
    pTVar5 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)local_98._0_8_;
    iVar12 = local_68;
    if (local_64 != 0) {
      while (iVar13 = iVar12, local_1d8 = pTVar8, local_1e4 = uVar23, local_1d0 = uVar27,
            iVar13 != -1) {
        iVar12 = *(int *)((longlong)pTVar5 + (longlong)iVar13 * 0x18 + 4);
        param_1 = local_1c0;
        pTVar8 = local_1d8;
        if (iVar13 < (int)uVar31) {
          bVar18 = (byte)uVar24 & 0x1f;
          uVar27 = (uint)uVar3 << bVar18 | (uint)uVar3 >> 0x20 - bVar18;
          uVar23 = uVar24;
          do {
            uVar27 = uVar27 >> 1 | (uint)((uVar27 & 1) != 0) << 0x1f;
            uVar24 = uVar23 - 1;
            if ((((int)uVar24 < 0) || ((int)local_70 <= (int)uVar24)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar2 = (code *)swi(3);
              pTVar14 = (TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
                         *)(*pcVar2)();
              return pTVar14;
            }
            puVar19 = (uint *)(local_98 + 0x10);
            if (local_78 != (uint *)0x0) {
              puVar19 = local_78;
            }
            uVar10 = uVar24;
            if ((int)uVar24 < 0) {
              uVar10 = uVar23 + 0x1e;
            }
            uVar23 = uVar24;
          } while ((puVar19[(int)uVar10 >> 5] & uVar27) == 0);
          memmove(pTVar5 + iVar13,local_1d8 + (int)uVar24,0x18);
          if (((iVar13 < 0) || ((int)local_70 <= iVar13)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar2 = (code *)swi(3);
            pTVar14 = (TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
                       *)(*pcVar2)();
            return pTVar14;
          }
          puVar19 = (uint *)(local_98 + 0x10);
          if (local_78 != (uint *)0x0) {
            puVar19 = local_78;
          }
          iVar11 = iVar13;
          if (iVar13 < 0) {
            iVar11 = iVar13 + 0x1f;
          }
          puVar19[iVar11 >> 5] = puVar19[iVar11 >> 5] | (int)local_1c8 << ((byte)iVar13 & 0x1f);
          uVar3 = local_1c8;
          param_1 = local_1c0;
          uVar23 = local_1e4;
          uVar27 = local_1d0;
          pTVar8 = local_1d8;
          pTVar5 = local_1d8;
        }
      }
      uVar24 = 0;
      if ((int)uVar27 <= (int)local_98._8_4_) {
        uVar24 = ~(uVar23 | uVar31) >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar2 = (code *)swi(3);
        pTVar14 = (TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
                   *)(*pcVar2)();
        return pTVar14;
      }
      iVar12 = (local_98._8_4_ - uVar23) - uVar31;
      if (iVar12 != 0) {
        memmove((FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar31 * 0x18),
                (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar31 * 0x18) +
                (longlong)(int)uVar23 * 0x18,(longlong)iVar12 * 0x18);
      }
      local_98._8_4_ = local_98._8_4_ - uVar23;
      if ((((int)uVar23 < 0) || ((int)local_70 < (int)uVar27)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3ee,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        pTVar14 = (TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
                   *)(*pcVar2)();
        return pTVar14;
      }
      if (uVar27 != local_70) {
        puVar19 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar19 = local_78;
        }
        FBitArrayMemory::MemmoveBitsWordOrder
                  (puVar19,uVar31,puVar19,uVar27,(local_70 - uVar23) - uVar31);
      }
      local_70 = local_70 - uVar23;
      uVar24 = (int)local_70 >> 0x1f & 0x1f;
      uVar31 = local_70 + uVar24;
      iVar12 = (uVar31 & 0x1f) - uVar24;
      if (iVar12 != 0) {
        puVar19 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar19 = local_78;
        }
        puVar19[(int)uVar31 >> 5] =
             puVar19[(int)uVar31 >> 5] & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f);
      }
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10));
      local_64 = 0;
      local_68 = -1;
      if (local_98._12_4_ != local_98._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_98._8_4_,(ForAnyElementType *)local_98,local_98._8_4_,
                   (int *)(local_98 + 0xc));
      }
    }
    uVar3 = local_98._0_8_;
    iVar12 = local_98._8_4_ - local_64;
    if ((iVar12 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      pTVar14 = (TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
                 *)(*pcVar2)();
      return pTVar14;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FElementCompareClass<TLess<FString>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)uVar3,iVar12,local_1e8[0],
               (FElementCompareClass<TLess<FString>_> *)&local_178);
  }
  uVar31 = local_50;
  uVar30 = (ulonglong)local_50;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar31 == 0) goto LAB_1432c20ae;
  uVar24 = uVar31;
  if (uVar31 < 2) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar24 = 0;
      goto LAB_1432c204e;
    }
  }
  else {
LAB_1432c204e:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar24,4);
  }
  uVar29 = 0;
  if (0 < (int)uVar31) {
    do {
      FVar20.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar20.Data = local_58.Data;
      }
      uVar15 = (longlong)(int)uVar31 - 1U & uVar29;
      uVar29 = uVar29 + 1;
      *(undefined4 *)(FVar20.Data + uVar15 * 4) = 0xffffffff;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
LAB_1432c20ae:
  uVar31 = (uint)local_1c8;
  uVar24 = 0;
  if (local_50 != 0) {
    local_1b8 = 0;
    pTStack_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_1a4 = 0;
    iStack_1a0 = 0;
    uStack_1b4 = uVar31;
    if (local_70 != 0) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar23 = *puVar19;
      while (uVar23 == 0) {
        iStack_1a0 = iStack_1a0 + 0x20;
        lVar21 = (longlong)local_1b8;
        local_1b8 = local_1b8 + 1;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1b8)
        goto LAB_1432c216a;
        uVar23 = (puVar19 + 1)[lVar21];
      }
      uStack_1b4 = -uVar23 & uVar23;
      uVar30 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_180 = (int)lVar21;
      uStack_1a4 = iStack_1a0 + -1 + local_180;
      if ((int)local_70 < (int)uStack_1a4) {
LAB_1432c216a:
        uStack_1a4 = local_70;
      }
    }
    local_1a8 = 0xffffffff;
    local_168 = (longlong *)local_98;
    local_160._padding_ = CONCAT44(uStack_1b4,local_1b8);
    local_160.CurrentBitIndex = uStack_1a4;
    local_160.UnvisitedBitMask = 0xffffffff;
    local_160._28_4_ = uStack_19c;
    local_160.BaseBitIndex = iStack_1a0;
    local_160.Array = pTStack_1b0;
    uVar23 = uStack_1a4;
    if ((int)uStack_1a4 < (int)local_70) {
      do {
        puVar1 = (undefined8 *)(*local_168 + (longlong)(int)uVar23 * 0x18);
        iVar12 = *(int *)(*local_168 + 8 + (longlong)(int)uVar23 * 0x18);
        if (iVar12 == 0) {
          pwVar22 = L"";
          uVar27 = uVar24;
        }
        else {
          pwVar22 = (wchar_t *)*puVar1;
          uVar27 = iVar12 - 1;
        }
        uVar27 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar27,pwVar22);
        uVar27 = local_50 - 1 & uVar27;
        *(uint *)((longlong)puVar1 + 0x14) = uVar27;
        FVar20.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_58.Data;
        }
        uVar30 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar27;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar20.Data + uVar30 * 4);
        *(uint *)(FVar20.Data + uVar30 * 4) = uVar23;
        local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
        uVar23 = local_160.CurrentBitIndex;
      } while (local_160.CurrentBitIndex < (local_160.Array)->NumBits);
    }
  }
  uVar23 = local_70;
  uStack_124 = uVar24;
  local_120 = uVar24;
  if (local_70 != 0) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar27 = *puVar19;
    local_120 = 0;
    uVar24 = 0;
    while (uVar27 == 0) {
      lVar21 = (longlong)(int)uVar24;
      local_120 = local_120 + 0x20;
      uVar24 = uVar24 + 1;
      uStack_124 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
      goto LAB_1432c22b1;
      uVar27 = (puVar19 + 1)[lVar21];
    }
    uVar31 = -uVar27 & uVar27;
    uVar30 = (ulonglong)uVar31 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_17c = (int)lVar21;
    uStack_124 = (local_120 - 1) + local_17c;
    if ((int)local_70 < (int)uStack_124) {
      uStack_124 = local_70;
    }
  }
LAB_1432c22b1:
  local_140 = (longlong *)local_98;
  uStack_11c = local_a4;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_118 = local_98._8_4_ - local_64;
  uVar27 = local_70 & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_108.CurrentBitIndex = uStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uVar31,uVar24);
  iVar12 = (int)local_70 >> 5;
  TStack_108._28_4_ = local_a4;
  TStack_108.BaseBitIndex = local_120;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  bVar18 = (byte)local_70;
  local_1e4 = local_70;
  uStack_138 = uVar24;
  uStack_134 = uVar31;
  local_110 = local_140;
  TStack_108.Array = local_130;
  if (((int)local_70 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    pTVar14 = (TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
               *)(*pcVar2)();
    return pTVar14;
  }
  if (uVar23 != local_70) {
    puVar19 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar31 = -1 << (bVar18 & 0x1f) & puVar19[iVar12];
    while (uVar31 == 0) {
      lVar21 = (longlong)iVar12;
      uVar27 = uVar27 + 0x20;
      iVar12 = iVar12 + 1;
      local_1e4 = local_70;
      uVar23 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_1432c23e0;
      uVar31 = (puVar19 + 1)[lVar21];
    }
    uVar30 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_1e4 = (uVar27 - 1) + (int)lVar21;
    uVar23 = local_1e4;
    if ((int)local_70 < (int)local_1e4) {
      local_1e4 = local_70;
      uVar23 = local_70;
    }
  }
LAB_1432c23e0:
  while( true ) {
    plVar7 = local_110;
    lVar21 = 0;
    if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1e0);
    }
    if (((TStack_108.CurrentBitIndex == uVar23) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar7 == (longlong *)local_98)) break;
    local_1d8 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)
                (*plVar7 + (longlong)TStack_108.CurrentBitIndex * 0x18);
    lVar16 = (**(code **)((longlong)*param_1 + 0x70))(param_1,local_1d8);
    iVar12 = *(int *)(lVar16 + 0x50);
    puVar26 = *(undefined8 **)(lVar16 + 0x48);
    puVar1 = puVar26 + (longlong)iVar12 * 3;
    while( true ) {
      if (*(int *)(lVar16 + 0x50) != iVar12) {
        `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1df);
      }
      pFVar6 = local_170;
      pTVar14 = local_198;
      if (puVar26 == puVar1) break;
      iVar13 = *(int *)&local_198->field_0x8;
      if (iVar13 == *(int *)&local_198->field_0xc) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,(ForAnyElementType *)local_198,(int *)&local_198->field_0xc);
      }
      *(int *)&pTVar14->field_0x8 = iVar13 + 1;
      puVar28 = (undefined8 *)((longlong)iVar13 * 0x38 + *(longlong *)pTVar14);
      uVar31 = *(uint *)((longlong)puVar26 + 0x14);
      pFVar17 = ::FString::FString(&local_e0,(FString *)&local_1d8->ElementData);
      *puVar28 = 0;
      *puVar28 = (pFVar17->Data).AllocatorInstance.Data;
      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar28 + 1) = (pFVar17->Data).ArrayNum;
      *(int *)((longlong)puVar28 + 0xc) = (pFVar17->Data).ArrayMax;
      (pFVar17->Data).ArrayNum = 0;
      (pFVar17->Data).ArrayMax = 0;
      uVar3 = *puVar26;
      uVar4 = puVar26[1];
      puVar28[4] = lVar21;
      puVar28[5] = (ulonglong)uVar31;
      puVar28[2] = uVar3;
      puVar28[3] = uVar4;
      *(undefined4 *)(puVar28 + 6) = 0;
      pFVar25 = (pFVar17->Data).AllocatorInstance.Data;
      if (pFVar25 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar25);
      }
      lVar21 = lVar21 + (ulonglong)*(uint *)((longlong)puVar26 + 0x14);
      puVar26 = puVar26 + 3;
    }
    if (*(int *)(lVar16 + 0x50) == 0) {
      local_190 = 0;
      uStack_188 = 0;
      iVar12 = *(int *)&local_170[1].Data;
      if (iVar12 == *(int *)((longlong)&local_170[1].Data + 4)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,local_170,(int *)((longlong)&local_170[1].Data + 4));
      }
      *(int *)&pFVar6[1].Data = iVar12 + 1;
      pFVar25 = pFVar6->Data + (longlong)iVar12 * 0x38;
      pFVar17 = ::FString::FString(local_d0,(FString *)&local_1d8->ElementData);
      *(undefined8 *)pFVar25 = 0;
      *(FScriptContainerElement **)pFVar25 = (pFVar17->Data).AllocatorInstance.Data;
      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar25 + 8) = (pFVar17->Data).ArrayNum;
      *(int *)(pFVar25 + 0xc) = (pFVar17->Data).ArrayMax;
      (pFVar17->Data).ArrayNum = 0;
      (pFVar17->Data).ArrayMax = 0;
      *(undefined8 *)(pFVar25 + 0x10) = local_190;
      *(undefined8 *)(pFVar25 + 0x18) = uStack_188;
      *(undefined8 *)(pFVar25 + 0x20) = 0;
      *(undefined8 *)(pFVar25 + 0x28) = 0;
      *(undefined4 *)(pFVar25 + 0x30) = 0;
      pFVar25 = (pFVar17->Data).AllocatorInstance.Data;
      if (pFVar25 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar25);
      }
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
    param_1 = local_1c0;
    uVar23 = local_1e4;
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return local_198;
}

// GetStates @ 1432d97e0

TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FFileOperationTracker::GetStates(FFileOperationTracker *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\FileOperationTracker.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
      ;
      return pTVar3;
    }
  }
  return &this->FileOperationStates;
}

// OnDataStateUpdate @ 1432de360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FFileOperationTracker::OnDataStateUpdate
          (FFileOperationTracker *this,FGuid *param_1,EFileOperationState param_2)

{
  TQueue<TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>,0>
  *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  <unnamed_type_Values> local_48;
  char local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._0_8_ = *(undefined8 *)param_1;
  local_48._8_4_ = param_1->C;
  local_48._12_4_ = param_1->D;
  pTVar1 = &this->UpdateMessages;
  local_20 = '\x01';
  local_48._16_4_ = param_2;
  pTVar3 = ::operator_new(0x38);
  if (pTVar3 != (TNode *)0x0) {
    (pTVar3->Item).CurrentSubtypeIndex = 0xff;
    pTVar3->NextNode = (TNode *)0x0;
    TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
    ::operator=(&pTVar3->Item,
                (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                 *)&local_48.A);
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  switch(local_20) {
  case '\0':
    if (local_20 != '\0') {
      return;
    }
    local_20 = 0xff;
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)CONCAT44(local_48._20_4_,local_48._16_4_),local_48._24_4_);
    if ((void *)CONCAT44(local_48._20_4_,local_48._16_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_48._20_4_,local_48._16_4_));
    }
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)local_48._0_8_,local_48._8_4_);
    goto LAB_1432de474;
  default:
    goto switchD_1432de42d_caseD_1;
  case '\x02':
    bVar4 = local_20 == '\x02';
    break;
  case '\x03':
    bVar4 = local_20 == '\x03';
  }
  if (bVar4) {
    local_20 = 0xff;
LAB_1432de474:
    if ((FFileOperation *)local_48._0_8_ != (FFileOperation *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
switchD_1432de42d_caseD_1:
  return;
}

// OnDataStateUpdate @ 1432de4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FFileOperationTracker::OnDataStateUpdate
          (FFileOperationTracker *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1,
          EFileOperationState param_2)

{
  TQueue<TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>,0>
  *pTVar1;
  TNode *pTVar2;
  int iVar3;
  TNode *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  EFileOperationState local_64;
  <unnamed_type_Values> local_60;
  char local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  iVar3 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar3 * 0x10;
  local_64 = param_2;
  do {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_68);
    }
    if (pFVar5 == pFVar6) {
      return;
    }
    local_60._0_8_ = *(undefined8 *)pFVar5;
    local_60._8_8_ = *(undefined8 *)(pFVar5 + 8);
    pTVar1 = &this->UpdateMessages;
    local_38 = '\x01';
    local_60._16_4_ = local_64;
    pTVar4 = ::operator_new(0x38);
    if (pTVar4 != (TNode *)0x0) {
      pTVar4->NextNode = (TNode *)0x0;
      (pTVar4->Item).CurrentSubtypeIndex = 0xff;
      TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
      ::operator=(&pTVar4->Item,
                  (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                   *)&local_60.A);
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar4;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar4;
      UNLOCK();
    }
    switch(local_38) {
    case '\0':
      if (local_38 != '\0') goto switchD_1432de5c2_caseD_1;
      local_38 = -1;
      DestructItems<BuildPatchServices::FFileOperation,int>
                ((FFileOperation *)CONCAT44(local_60._20_4_,local_60._16_4_),local_60._24_4_);
      if ((void *)CONCAT44(local_60._20_4_,local_60._16_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_60._20_4_,local_60._16_4_));
      }
      DestructItems<BuildPatchServices::FFileOperation,int>
                ((FFileOperation *)local_60._0_8_,local_60._8_4_);
      goto LAB_1432de609;
    default:
      goto switchD_1432de5c2_caseD_1;
    case '\x02':
      bVar7 = local_38 == '\x02';
      break;
    case '\x03':
      bVar7 = local_38 == '\x03';
    }
    if (bVar7) {
      local_38 = -1;
LAB_1432de609:
      if ((FFileOperation *)local_60._0_8_ != (FFileOperation *)0x0) {
        FMemory::Free((void *)local_60._0_8_);
      }
    }
switchD_1432de5c2_caseD_1:
    pFVar5 = pFVar5 + 0x10;
  } while( true );
}

// OnDataStateUpdate @ 1432de680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FFileOperationTracker::OnDataStateUpdate
          (FFileOperationTracker *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1,
          EFileOperationState param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  TQueue<TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>,0>
  *pTVar4;
  TNode *pTVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  TNode *pTVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  EFileOperationState local_c4;
  int local_c0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  <unnamed_type_Values> local_68;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar6 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  local_68._8_4_ = 0;
  local_68._32_4_ = 0;
  local_68._12_4_ = 1;
  local_68._28_4_ = 0;
  if (iVar6 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)(int)local_68._8_4_;
      local_68._32_4_ = local_68._32_4_ + 0x20;
      local_68._8_4_ = local_68._8_4_ + 1;
      local_68._28_4_ = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_68._8_4_)
      goto LAB_1432de73d;
      uVar15 = puVar17[lVar12 + 1];
    }
    local_68._12_4_ = -uVar15 & uVar15;
    uVar3 = (ulonglong)(uint)local_68._12_4_ * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_c0 = (int)lVar12;
    local_68._28_4_ = local_c0 + -1 + local_68._32_4_;
    if (iVar6 < (int)local_68._28_4_) {
      local_68._28_4_ = iVar6;
    }
  }
LAB_1432de73d:
  uVar15 = *(uint *)&(param_1->Elements).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_40 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  local_68._24_4_ = 0xffffffff;
  TStack_b0.CurrentBitIndex = local_68._28_4_;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._padding_ = local_68._8_8_;
  iVar13 = (int)uVar15 >> 5;
  TStack_b0._28_4_ = local_6c;
  TStack_b0.BaseBitIndex = local_68._32_4_;
  uStack_90 = CONCAT44(uStack_3c,iStack_40);
  local_c4 = param_2;
  local_b8 = param_1;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_68._0_8_ = param_1;
  local_68._16_8_ = puVar1;
  if ((((int)uVar15 < 0) || (iVar6 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar15 != uVar7) {
    puVar16 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1432de840;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
    }
  }
LAB_1432de840:
  while( true ) {
    pTVar9 = local_b8;
    if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
        (int)uStack_90) {
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar15) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == param_1))
    {
      return;
    }
    iStack_40 = CONCAT31(iStack_40._1_3_,1);
    pTVar4 = &this->UpdateMessages;
    puVar2 = (undefined8 *)
             (*(longlong *)&pTVar9->Elements + (longlong)TStack_b0.CurrentBitIndex * 0x18);
    local_68._0_8_ = *puVar2;
    local_68._8_8_ = puVar2[1];
    local_68._16_4_ = local_c4;
    pTVar11 = ::operator_new(0x38);
    if (pTVar11 != (TNode *)0x0) {
      pTVar11->NextNode = (TNode *)0x0;
      (pTVar11->Item).CurrentSubtypeIndex = 0xff;
      TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
      ::operator=(&pTVar11->Item,
                  (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                   *)&local_68.A);
      if (((ulonglong)pTVar4 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar5 = pTVar4->Head;
      pTVar4->Head = pTVar11;
      UNLOCK();
      if (((ulonglong)pTVar5 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar5->NextNode = pTVar11;
      UNLOCK();
    }
    if ((byte)iStack_40 < 6) break;
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001432de90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
            *(uint *)(&UNK_1432de9a0 + (ulonglong)(byte)iStack_40 * 4)))
            (switchD_1501dbc7b::caseD_1.e_magic +
             *(uint *)(&UNK_1432de9a0 + (ulonglong)(byte)iStack_40 * 4));
  return;
}

// OnFileByteRangeStateUpdate @ 1432df560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FFileOperationTracker::OnFileByteRangeStateUpdate
          (FFileOperationTracker *this,FString *param_1,
          TTuple<unsigned___int64,unsigned___int64> *param_2,EFileOperationState param_3)

{
  TQueue<TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>,0>
  *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  undefined1 auStack_98 [32];
  FString local_78;
  FFileOperation *local_68;
  undefined8 uStack_60;
  EFileOperationState local_58;
  <unnamed_type_Values> local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar1 = &this->UpdateMessages;
  ::FString::FString(&local_78,param_1);
  local_68 = *(FFileOperation **)param_2;
  uStack_60 = *(undefined8 *)&param_2->field_0x8;
  local_28 = 0xff;
  local_58 = param_3;
  ::FString::FString((FString *)&local_50.A,&local_78);
  local_50._32_4_ = local_58;
  local_50._16_8_ = local_68;
  local_50._24_8_ = uStack_60;
  local_28 = '\x03';
  pTVar3 = ::operator_new(0x38);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).CurrentSubtypeIndex = 0xff;
    TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
    ::operator=(&pTVar3->Item,
                (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                 *)&local_50.A);
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  switch(local_28) {
  case '\0':
    if (local_28 != '\0') goto switchD_1432df63e_default;
    local_28 = -1;
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)local_50._16_8_,local_50._24_4_);
    if ((FFileOperation *)local_50._16_8_ != (FFileOperation *)0x0) {
      FMemory::Free((void *)local_50._16_8_);
    }
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)local_50._0_8_,local_50._8_4_);
    break;
  case '\x01':
    if (local_28 != '\x01') goto switchD_1432df63e_default;
    goto LAB_1432df6a7;
  case '\x02':
    if (local_28 != '\x02') goto switchD_1432df63e_default;
    local_28 = -1;
    break;
  case '\x03':
    if (local_28 != '\x03') goto switchD_1432df63e_default;
    local_28 = -1;
    break;
  case '\x04':
    goto joined_r0x0001432df6a5;
  case '\x05':
joined_r0x0001432df6a5:
    if (local_28 == '\x04') {
LAB_1432df6a7:
      local_28 = -1;
    }
  default:
    goto switchD_1432df63e_default;
  }
  if ((FFileOperation *)local_50._0_8_ != (FFileOperation *)0x0) {
    FMemory::Free((void *)local_50._0_8_);
  }
switchD_1432df63e_default:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// OnFileStateUpdate @ 1432dfa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FFileOperationTracker::OnFileStateUpdate
          (FFileOperationTracker *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          EFileOperationState param_2)

{
  TQueue<TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>,0>
  *pTVar1;
  TNode *pTVar2;
  int iVar3;
  TNode *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  EFileOperationState local_84;
  FFileOperationTracker *local_80;
  FString local_78;
  EFileOperationState local_68;
  <unnamed_type_Values> local_60;
  char local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar3 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar3 * 0x10;
  local_84 = param_2;
  local_80 = this;
  do {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_88);
    }
    if (pFVar5 == pFVar6) {
      return;
    }
    pTVar1 = &local_80->UpdateMessages;
    ::FString::FString(&local_78,(FString *)pFVar5);
    local_38 = 0xff;
    local_68 = param_2;
    ::FString::FString((FString *)&local_60.A,&local_78);
    local_60._16_4_ = local_68;
    local_38 = '\x02';
    pTVar4 = ::operator_new(0x38);
    if (pTVar4 != (TNode *)0x0) {
      pTVar4->NextNode = (TNode *)0x0;
      (pTVar4->Item).CurrentSubtypeIndex = 0xff;
      TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
      ::operator=(&pTVar4->Item,
                  (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                   *)&local_60.A);
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar4;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar4;
      UNLOCK();
      param_2 = local_84;
    }
    switch(local_38) {
    case '\0':
      if (local_38 == '\0') {
        local_38 = -1;
        DestructItems<BuildPatchServices::FFileOperation,int>
                  ((FFileOperation *)CONCAT44(local_60._20_4_,local_60._16_4_),local_60._24_4_);
        if ((void *)CONCAT44(local_60._20_4_,local_60._16_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_60._20_4_,local_60._16_4_));
        }
        DestructItems<BuildPatchServices::FFileOperation,int>
                  ((FFileOperation *)local_60._0_8_,local_60._8_4_);
LAB_1432dfb7c:
        if ((FFileOperation *)local_60._0_8_ != (FFileOperation *)0x0) {
          FMemory::Free((void *)local_60._0_8_);
        }
      }
      break;
    case '\x01':
      if (local_38 != '\x01') break;
      goto LAB_1432dfbb5;
    case '\x02':
      if (local_38 == '\x02') {
        local_38 = -1;
        goto LAB_1432dfb7c;
      }
      break;
    case '\x03':
      if (local_38 == '\x03') {
        local_38 = -1;
        goto LAB_1432dfb7c;
      }
      break;
    case '\x04':
      goto joined_r0x0001432dfbb3;
    case '\x05':
joined_r0x0001432dfbb3:
      if (local_38 == '\x04') {
LAB_1432dfbb5:
        local_38 = -1;
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pFVar5 = pFVar5 + 0x10;
  } while( true );
}

// OnFileStateUpdate @ 1432dfc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FFileOperationTracker::OnFileStateUpdate
          (FFileOperationTracker *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          EFileOperationState param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  TNode *pTVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  TNode *pTVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  TQueue<TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>,0>
  *pTVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  int local_d4;
  FFileOperationTracker *local_d0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FString local_98;
  EFileOperationState local_88;
  undefined4 local_64;
  <unnamed_type_Values> local_60;
  int iStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  local_60._32_4_ = 0;
  local_60._8_4_ = 0;
  local_60._12_4_ = 1;
  local_60._28_4_ = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)(int)local_60._8_4_;
      local_60._32_4_ = local_60._32_4_ + 0x20;
      local_60._8_4_ = local_60._8_4_ + 1;
      local_60._28_4_ = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_60._8_4_)
      goto LAB_1432dfced;
      uVar14 = puVar16[lVar10 + 1];
    }
    local_60._12_4_ = -uVar14 & uVar14;
    uVar2 = (ulonglong)(uint)local_60._12_4_ * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_d4 = (int)lVar10;
    local_60._28_4_ = local_d4 + -1 + local_60._32_4_;
    if (iVar4 < (int)local_60._28_4_) {
      local_60._28_4_ = iVar4;
    }
  }
LAB_1432dfced:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar14 & 0xffffffe0;
  iStack_38 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  local_60._24_4_ = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(local_60._12_4_,local_60._8_4_);
  TStack_c0.CurrentBitIndex = local_60._28_4_;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_c0._28_4_ = local_64;
  TStack_c0.BaseBitIndex = local_60._32_4_;
  uStack_a0 = CONCAT44(uStack_34,iStack_38);
  local_d0 = this;
  local_c8 = param_1;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_60._0_8_ = param_1;
  local_60._16_8_ = puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1432dfdf0;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_1432dfdf0:
  while( true ) {
    pTVar7 = local_c8;
    if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
        (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (((TStack_c0.CurrentBitIndex == uVar14) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    {
      return;
    }
    pTVar13 = &local_d0->UpdateMessages;
    ::FString::FString(&local_98,
                       (FString *)
                       (*(longlong *)&pTVar7->Elements + (longlong)TStack_c0.CurrentBitIndex * 0x18)
                      );
    iStack_38._0_1_ = 0xff;
    local_88 = param_2;
    ::FString::FString((FString *)&local_60.A,&local_98);
    local_60._16_4_ = local_88;
    iStack_38 = CONCAT31(iStack_38._1_3_,2);
    pTVar9 = ::operator_new(0x38);
    if (pTVar9 != (TNode *)0x0) {
      pTVar9->NextNode = (TNode *)0x0;
      (pTVar9->Item).CurrentSubtypeIndex = 0xff;
      TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
      ::operator=(&pTVar9->Item,
                  (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                   *)&local_60.A);
      if (((ulonglong)pTVar13 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar3 = pTVar13->Head;
      pTVar13->Head = pTVar9;
      UNLOCK();
      if (((ulonglong)pTVar3 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar3->NextNode = pTVar9;
      UNLOCK();
    }
    if ((byte)iStack_38 < 6) break;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001432dfed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
            *(uint *)(&UNK_1432dff98 + (ulonglong)(byte)iStack_38 * 4)))
            (switchD_1501dbc7b::caseD_1.e_magic +
             *(uint *)(&UNK_1432dff98 + (ulonglong)(byte)iStack_38 * 4));
  return;
}

// OnFileStateUpdate @ 1432dffc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FFileOperationTracker::OnFileStateUpdate
          (FFileOperationTracker *this,FString *param_1,EFileOperationState param_2)

{
  TQueue<TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>,0>
  *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  undefined1 auStack_78 [32];
  FString local_58;
  EFileOperationState local_48;
  <unnamed_type_Values> local_40;
  char local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar1 = &this->UpdateMessages;
  ::FString::FString(&local_58,param_1);
  local_18 = 0xff;
  local_48 = param_2;
  ::FString::FString((FString *)&local_40.A,&local_58);
  local_40._16_4_ = local_48;
  local_18 = '\x02';
  pTVar3 = ::operator_new(0x38);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).CurrentSubtypeIndex = 0xff;
    TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
    ::operator=(&pTVar3->Item,
                (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                 *)&local_40.A);
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  switch(local_18) {
  case '\0':
    if (local_18 != '\0') goto switchD_1432e0098_default;
    local_18 = -1;
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)CONCAT44(local_40._20_4_,local_40._16_4_),local_40._24_4_);
    if ((void *)CONCAT44(local_40._20_4_,local_40._16_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_40._20_4_,local_40._16_4_));
    }
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)local_40._0_8_,local_40._8_4_);
    break;
  case '\x01':
    if (local_18 != '\x01') goto switchD_1432e0098_default;
    goto LAB_1432e010a;
  case '\x02':
    if (local_18 != '\x02') goto switchD_1432e0098_default;
    local_18 = -1;
    break;
  case '\x03':
    if (local_18 != '\x03') goto switchD_1432e0098_default;
    local_18 = -1;
    break;
  case '\x04':
    goto joined_r0x0001432e0108;
  case '\x05':
joined_r0x0001432e0108:
    if (local_18 == '\x04') {
LAB_1432e010a:
      local_18 = -1;
    }
  default:
    goto switchD_1432e0098_default;
  }
  if ((FFileOperation *)local_40._0_8_ != (FFileOperation *)0x0) {
    FMemory::Free((void *)local_40._0_8_);
  }
switchD_1432e0098_default:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// OnManifestSelection @ 1432e03e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FFileOperationTracker::OnManifestSelection
          (FFileOperationTracker *this,IBuildManifestSet *param_1)

{
  TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  undefined1 auStack_88 [32];
  FFileOperation *local_68;
  int local_60;
  FFileOperation *local_58;
  int local_50;
  <unnamed_type_Values> local_48;
  char local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (this->LastUsedManifestSet == param_1) {
    return;
  }
  this->LastUsedManifestSet = param_1;
  pTVar1 = BuildOperationInitialiser
                     ((TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
                       *)&local_68,param_1);
  local_20 = -1;
  TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
  ::
  SetSubtype<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>_>
            (&local_48,pTVar1);
  TQueue<TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>,0>
  ::Enqueue(&this->UpdateMessages,
            (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
             *)&local_48.A);
  switch(local_20) {
  case '\0':
    if (local_20 != '\0') goto switchD_1432e045c_default;
    local_20 = -1;
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)local_48._16_8_,local_48._24_4_);
    if ((FFileOperation *)local_48._16_8_ != (FFileOperation *)0x0) {
      FMemory::Free((void *)local_48._16_8_);
    }
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)local_48._0_8_,local_48._8_4_);
    break;
  case '\x01':
    if (local_20 != '\x01') goto switchD_1432e045c_default;
    goto LAB_1432e04ce;
  case '\x02':
    if (local_20 != '\x02') goto switchD_1432e045c_default;
    local_20 = -1;
    break;
  case '\x03':
    if (local_20 != '\x03') goto switchD_1432e045c_default;
    local_20 = -1;
    break;
  case '\x04':
    goto joined_r0x0001432e04cc;
  case '\x05':
joined_r0x0001432e04cc:
    if (local_20 == '\x04') {
LAB_1432e04ce:
      local_20 = -1;
    }
  default:
    goto switchD_1432e045c_default;
  }
  if ((FFileOperation *)local_48._0_8_ != (FFileOperation *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
switchD_1432e045c_default:
  DestructItems<BuildPatchServices::FFileOperation,int>(local_58,local_50);
  if (local_58 != (FFileOperation *)0x0) {
    FMemory::Free(local_58);
  }
  DestructItems<BuildPatchServices::FFileOperation,int>(local_68,local_60);
  if (local_68 != (FFileOperation *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// ProcessMessage @ 1432e1880

void __thiscall
BuildPatchServices::FFileOperationTracker::ProcessMessage
          (FFileOperationTracker *this,
          TTuple<FGuid,BuildPatchServices::EFileOperationState> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulong64 uVar3;
  TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->FileOperationStatesDataIdLookup,(uint)uVar3,(FGuid *)param_1);
  if (iVar2 != -1) {
    pTVar4 = TMapBase<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked((TMapBase<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->FileOperationStatesDataIdLookup,(FGuid *)param_1);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    iVar2 = pTVar4->ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<BuildPatchServices::FFileOperation_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      if (*(int *)(*(longlong *)pFVar5 + 0x30) < 10) {
        *(undefined4 *)(*(longlong *)pFVar5 + 0x30) = *(undefined4 *)&param_1->field_0x10;
      }
      pFVar5 = pFVar5 + 8;
    }
  }
  return;
}

// ProcessMessage @ 1432e1920

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall
BuildPatchServices::FFileOperationTracker::ProcessMessage
          (FFileOperationTracker *this,
          TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong64 uVar11;
  TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  FGuid *pFVar15;
  FScriptContainerElement *pFVar16;
  TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_res10;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48 [2];
  
  pTVar1 = &this->FileOperationStates;
  piVar2 = &(this->FileOperationStates).ArrayNum;
  if ((TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
       *)pTVar1 != param_1) {
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)(pTVar1->AllocatorInstance).Data,*piVar2);
    pFVar16 = (pTVar1->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar1->AllocatorInstance).Data = *(FScriptContainerElement **)param_1;
    *(undefined8 *)param_1 = 0;
    *piVar2 = *(int *)&param_1->field_0x8;
    (this->FileOperationStates).ArrayMax = *(int *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
  }
  puVar3 = &param_1->field_0x10;
  pTVar4 = &this->DummyOperationStates;
  if (pTVar4 != (TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_> *)puVar3) {
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)(pTVar4->AllocatorInstance).Data,
               (this->DummyOperationStates).ArrayNum);
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = *(FScriptContainerElement **)puVar3;
    *(undefined8 *)puVar3 = 0;
    (this->DummyOperationStates).ArrayNum = *(int *)&param_1->field_0x18;
    (this->DummyOperationStates).ArrayMax = *(int *)&param_1->field_0x1c;
    *(undefined8 *)&param_1->field_0x18 = 0;
  }
  TSet<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->FileOperationStatesDataIdLookup);
  local_res10 = (TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)&this->FileOperationStatesFilenameLookup;
  TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset(local_res10);
  this_00 = local_res10;
  pFVar16 = (pTVar1->AllocatorInstance).Data;
  iVar5 = *piVar2;
  pFVar15 = (FGuid *)(pFVar16 + 0x10);
  pFVar14 = pFVar16 + (longlong)iVar5 * 0x38;
  while( true ) {
    if (*piVar2 != iVar5) {
      local_res10 = (TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     *)((ulonglong)local_res10 & 0xffffffffffffff00);
      `TCheckedPointerIterator<BuildPatchServices::FFileOperation,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res10);
    }
    if (pFVar16 == pFVar14) break;
    uVar11 = CityHash64((char *)pFVar15,0x10);
    pTVar12 = TMapBase<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<FGuid_const_&>
                        ((TMapBase<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->FileOperationStatesDataIdLookup,(uint)uVar11,pFVar15);
    pFVar6 = (pTVar12->AllocatorInstance).Data;
    local_58 = pFVar16;
    if ((pFVar6 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 < pFVar6 + (longlong)pTVar12->ArrayMax * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = pTVar12->ArrayNum;
    if (iVar9 == pTVar12->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
    }
    pTVar12->ArrayNum = iVar9 + 1;
    *(FScriptContainerElement **)((pTVar12->AllocatorInstance).Data + (longlong)iVar9 * 8) =
         local_58;
    iVar9 = pFVar15[-1].C - 1;
    if (pFVar15[-1].C == 0) {
      pwVar13 = L"";
      iVar9 = 0;
    }
    else {
      pwVar13 = *(wchar_t **)pFVar16;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar13);
    pTVar12 = TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<FString_const_&>
                        ((TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)this_00,uVar10,(FString *)pFVar16);
    pFVar6 = (pTVar12->AllocatorInstance).Data;
    local_50 = pFVar16;
    if ((pFVar6 <= (FScriptContainerElement *)&local_50) &&
       ((FScriptContainerElement *)&local_50 < pFVar6 + (longlong)pTVar12->ArrayMax * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = pTVar12->ArrayNum;
    if (iVar9 == pTVar12->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
    }
    pTVar12->ArrayNum = iVar9 + 1;
    pFVar16 = pFVar16 + 0x38;
    pFVar15 = (FGuid *)&pFVar15[3].C;
    *(FScriptContainerElement **)((pTVar12->AllocatorInstance).Data + (longlong)iVar9 * 8) =
         local_50;
  }
  iVar5 = (this->DummyOperationStates).ArrayNum;
  pFVar16 = (this->DummyOperationStates).AllocatorInstance.Data;
  pFVar14 = pFVar16 + (longlong)iVar5 * 0x38;
  while( true ) {
    if ((this->DummyOperationStates).ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileOperation,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar16 == pFVar14) break;
    iVar9 = *(int *)(pFVar16 + 8) + -1;
    if (*(int *)(pFVar16 + 8) == 0) {
      pwVar13 = L"";
      iVar9 = 0;
    }
    else {
      pwVar13 = *(wchar_t **)pFVar16;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar13);
    pTVar12 = TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<FString_const_&>
                        ((TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->FileOperationStatesFilenameLookup,uVar10,(FString *)pFVar16);
    pFVar6 = (pTVar12->AllocatorInstance).Data;
    local_48[0] = pFVar16;
    if ((pFVar6 <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 < pFVar6 + (longlong)pTVar12->ArrayMax * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = pTVar12->ArrayNum;
    if (iVar9 == pTVar12->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
    }
    pTVar12->ArrayNum = iVar9 + 1;
    pFVar16 = pFVar16 + 0x38;
    *(FScriptContainerElement **)((pTVar12->AllocatorInstance).Data + (longlong)iVar9 * 8) =
         local_48[0];
  }
  return;
}

// ProcessMessage @ 1432e1d00

void __thiscall
BuildPatchServices::FFileOperationTracker::ProcessMessage
          (FFileOperationTracker *this,
          TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *pTVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar6 = *(int *)&param_1->field_0x8 + -1;
  if (*(int *)&param_1->field_0x8 == 0) {
    pwVar8 = L"";
    iVar6 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)param_1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  iVar6 = TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->FileOperationStatesFilenameLookup,uVar5,(FString *)param_1);
  if (iVar6 != -1) {
    uVar2 = *(ulonglong *)&param_1->field_0x18;
    uVar3 = *(ulonglong *)&param_1->field_0x10;
    pTVar7 = TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked((TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->FileOperationStatesFilenameLookup,(FString *)param_1);
    pFVar9 = (pTVar7->AllocatorInstance).Data;
    iVar6 = pTVar7->ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar6 * 8;
    while( true ) {
      if (pTVar7->ArrayNum != iVar6) {
        `TCheckedPointerIterator<BuildPatchServices::FFileOperation_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar1) break;
      lVar4 = *(longlong *)pFVar9;
      if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
        return;
      }
      if (uVar3 < *(ulonglong *)(lVar4 + 0x20) + *(longlong *)(lVar4 + 0x28)) {
        *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)&param_1->field_0x20;
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  return;
}

// ProcessMessage @ 1432e1df0

void __thiscall
BuildPatchServices::FFileOperationTracker::ProcessMessage
          (FFileOperationTracker *this,
          TTuple<FString,BuildPatchServices::EFileOperationState> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *pTVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar4 = *(int *)&param_1->field_0x8 + -1;
  if (*(int *)&param_1->field_0x8 == 0) {
    pwVar6 = L"";
    iVar4 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)param_1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  iVar4 = TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->FileOperationStatesFilenameLookup,uVar3,(FString *)param_1);
  if (iVar4 != -1) {
    pTVar5 = TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked((TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->FileOperationStatesFilenameLookup,(FString *)param_1);
    pFVar7 = (pTVar5->AllocatorInstance).Data;
    iVar4 = pTVar5->ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar4 * 8;
    while( true ) {
      if (pTVar5->ArrayNum != iVar4) {
        `TCheckedPointerIterator<BuildPatchServices::FFileOperation_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      lVar2 = *(longlong *)pFVar7;
      pFVar7 = pFVar7 + 8;
      *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)&param_1->field_0x10;
    }
  }
  return;
}

// Tick @ 1432f3bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001432f3f70) */
/* WARNING: Removing unreachable block (ram,0x0001432f3f95) */
/* WARNING: Removing unreachable block (ram,0x0001432f402a) */
/* WARNING: Removing unreachable block (ram,0x0001432f404f) */
/* WARNING: Removing unreachable block (ram,0x0001432f3ec8) */
/* WARNING: Removing unreachable block (ram,0x0001432f3eed) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FFileOperationTracker::Tick(FFileOperationTracker *this,float param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  longlong lVar5;
  FFileOperation *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_private:_bool___cdecl_BuildPatchServices::FFileOperationTracker::Tick(float)_::_2_::FStat_STAT_FFileOperationTracker_Tick>
  FVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_> *pTVar20;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_148 [32];
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  FColor_u_0 local_e4;
  FName local_e0;
  FFileOperationTracker *local_d8;
  FName local_d0;
  FName local_c8;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  FName local_a0;
  FName local_98;
  FFileOperation *local_90;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  char local_68;
  <unnamed_type_Values> local_60;
  char local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_d8 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FFileOperationTracker_Tick ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_BuildPatchServices::FFileOperationTracker::Tick(float)_::_2_::FStat_STAT_FFileOperationTracker_Tick>
         )0x0) {
      pFVar15 = ::FName::FName(&local_a0,"STAT_FFileOperationTracker_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FFileOperationTracker_Tick,*pFVar15,
                 L"STAT_FFileOperationTracker_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_FFileOperationTracker_Tick;
  if (StatPtr_STAT_FFileOperationTracker_Tick ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_BuildPatchServices::FFileOperationTracker::Tick(float)_::_2_::FStat_STAT_FFileOperationTracker_Tick>
       )0x0) {
    pFVar15 = ::FName::FName(&local_98,"STAT_FFileOperationTracker_Tick");
    FVar16 = (FThreadSafeStaticStat<_private:_bool___cdecl_BuildPatchServices::FFileOperationTracker::Tick(float)_::_2_::FStat_STAT_FFileOperationTracker_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FFileOperationTracker_Tick,
                          *pFVar15,L"STAT_FFileOperationTracker_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar16;
  bVar9 = false;
  bVar10 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_1432f3d81:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    FVar21 = local_c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e4._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_d0.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\FileOperationTracker.cpp"
                   ,0xa8);
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1432f3d81;
    local_e0 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar11 = true;
  }
  uVar17 = FStatsCollector::SecondsToCycles(__real_3f81111111111111);
  uVar18 = FStatsCollector::GetCycles();
  local_68 = -1;
  local_e0 = (FName)(uVar17 + uVar18);
  uVar19 = FStatsCollector::GetCycles();
  if (uVar19 < uVar17 + uVar18) {
    do {
      pTVar3 = ((this->UpdateMessages).Tail)->NextNode;
      if (pTVar3 == (TNode *)0x0) break;
      TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
      ::operator=(&local_90,&pTVar3->Item);
      pTVar4 = (this->UpdateMessages).Tail;
      (this->UpdateMessages).Tail = pTVar3;
      local_38 = -1;
      TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
      ::operator=(&pTVar3->Item,
                  (TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,BuildPatchServices::EFileOperationState>,TTuple<FString,BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,BuildPatchServices::EFileOperationState>,FNull,FNull>
                   *)&local_60.A);
      switch(local_38) {
      case '\0':
        if (local_38 == '\0') {
          local_38 = -1;
          DestructItems<BuildPatchServices::FFileOperation,int>
                    ((FFileOperation *)local_60._16_8_,local_60._24_4_);
          if ((FFileOperation *)local_60._16_8_ != (FFileOperation *)0x0) {
            FMemory::Free((void *)local_60._16_8_);
          }
          DestructItems<BuildPatchServices::FFileOperation,int>
                    ((FFileOperation *)local_60._0_8_,local_60._8_4_);
LAB_1432f3e4a:
          if ((FFileOperation *)local_60._0_8_ != (FFileOperation *)0x0) {
            FMemory::Free((void *)local_60._0_8_);
          }
        }
        break;
      case '\x01':
        if (local_38 != '\x01') break;
        goto LAB_1432f3e83;
      case '\x02':
        if (local_38 == '\x02') {
          local_38 = -1;
          goto LAB_1432f3e4a;
        }
        break;
      case '\x03':
        if (local_38 == '\x03') {
          local_38 = -1;
          goto LAB_1432f3e4a;
        }
        break;
      case '\x04':
        goto joined_r0x0001432f3e81;
      case '\x05':
joined_r0x0001432f3e81:
        if (local_38 == '\x04') {
LAB_1432f3e83:
          local_38 = -1;
        }
      }
      if (pTVar4 != (TNode *)0x0) {
        TUnion<TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>,TTuple<FGuid,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,enum_BuildPatchServices::EFileOperationState>,TTuple<FString,TTuple<unsigned___int64,unsigned___int64>,enum_BuildPatchServices::EFileOperationState>,FNull,FNull>
        ::Reset(&pTVar4->Item);
        ::operator_delete(pTVar4,0x38);
      }
      if (local_68 == '\0') {
        ProcessMessage(this,(TTuple<TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>,TArray<BuildPatchServices::FFileOperation,TSizedDefaultAllocator<32>_>_>
                             *)&local_90);
      }
      else if (local_68 == '\x01') {
        uVar17 = CityHash64((char *)&local_90,0x10);
        iVar13 = TSet<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FGuid>
                           ((TSet<TTuple<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)&this->FileOperationStatesDataIdLookup,(uint)uVar17,
                            (FGuid *)&local_90);
        if (iVar13 != -1) {
          pTVar20 = TMapBase<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked((TMapBase<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                                   *)&this->FileOperationStatesDataIdLookup,(FGuid *)&local_90);
          pFVar22 = (pTVar20->AllocatorInstance).Data;
          iVar13 = pTVar20->ArrayNum;
          pFVar2 = pFVar22 + (longlong)iVar13 * 8;
          while( true ) {
            if (pTVar20->ArrayNum != iVar13) {
              local_e7 = 0;
              `TCheckedPointerIterator<BuildPatchServices::FFileOperation_*,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_e7);
            }
            this = local_d8;
            if (pFVar22 == pFVar2) break;
            if (*(int *)(*(longlong *)pFVar22 + 0x30) < 10) {
              *(undefined4 *)(*(longlong *)pFVar22 + 0x30) = local_80;
            }
            pFVar22 = pFVar22 + 8;
          }
        }
      }
      else if (local_68 == '\x02') {
        iVar13 = local_88 - 1;
        pFVar6 = local_90;
        if (local_88 == 0) {
          iVar13 = 0;
          pFVar6 = (FFileOperation *)L"";
        }
        uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)pFVar6);
        iVar13 = TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)&this->FileOperationStatesFilenameLookup,uVar14,(FString *)&local_90)
        ;
        if (iVar13 != -1) {
          pTVar20 = TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked((TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                                   *)&this->FileOperationStatesFilenameLookup,(FString *)&local_90);
          pFVar22 = (pTVar20->AllocatorInstance).Data;
          iVar13 = pTVar20->ArrayNum;
          pFVar2 = pFVar22 + (longlong)iVar13 * 8;
          while( true ) {
            if (pTVar20->ArrayNum != iVar13) {
              local_e6 = 0;
              `TCheckedPointerIterator<BuildPatchServices::FFileOperation_*,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_e6);
            }
            this = local_d8;
            if (pFVar22 == pFVar2) break;
            lVar5 = *(longlong *)pFVar22;
            pFVar22 = pFVar22 + 8;
            *(undefined4 *)(lVar5 + 0x30) = local_80;
          }
        }
      }
      else if (local_68 == '\x03') {
        iVar13 = local_88 - 1;
        pFVar6 = local_90;
        if (local_88 == 0) {
          iVar13 = 0;
          pFVar6 = (FFileOperation *)L"";
        }
        uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)pFVar6);
        iVar13 = TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)&this->FileOperationStatesFilenameLookup,uVar14,(FString *)&local_90)
        ;
        if (iVar13 != -1) {
          uVar7 = CONCAT44(uStack_7c,local_80);
          uVar8 = CONCAT44(uStack_74,local_78);
          pTVar20 = TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked((TMapBase<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileOperation_*,TSizedDefaultAllocator<32>_>,0>_>
                                   *)&this->FileOperationStatesFilenameLookup,(FString *)&local_90);
          pFVar22 = (pTVar20->AllocatorInstance).Data;
          iVar13 = pTVar20->ArrayNum;
          pFVar2 = pFVar22 + (longlong)iVar13 * 8;
          while( true ) {
            if (pTVar20->ArrayNum != iVar13) {
              local_e5 = 0;
              `TCheckedPointerIterator<BuildPatchServices::FFileOperation_*,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_e5);
            }
            this = local_d8;
            if (pFVar22 == pFVar2) break;
            lVar5 = *(longlong *)pFVar22;
            if (uVar8 <= *(ulonglong *)(lVar5 + 0x20)) break;
            if (uVar7 < *(ulonglong *)(lVar5 + 0x20) + *(longlong *)(lVar5 + 0x28)) {
              *(undefined4 *)(lVar5 + 0x30) = local_70;
            }
            pFVar22 = pFVar22 + 8;
          }
        }
      }
      uVar17 = FStatsCollector::GetCycles();
    } while (uVar17 < (ulonglong)local_e0);
  }
  switch(local_68) {
  case '\0':
    if (local_68 != '\0') goto switchD_1432f413e_default;
    local_68 = -1;
    DestructItems<BuildPatchServices::FFileOperation,int>
              ((FFileOperation *)CONCAT44(uStack_7c,local_80),local_78);
    if ((void *)CONCAT44(uStack_7c,local_80) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(uStack_7c,local_80));
    }
    DestructItems<BuildPatchServices::FFileOperation,int>(local_90,local_88);
    break;
  case '\x01':
    if (local_68 != '\x01') goto switchD_1432f413e_default;
    goto LAB_1432f41a7;
  case '\x02':
    if (local_68 != '\x02') goto switchD_1432f413e_default;
    local_68 = -1;
    break;
  case '\x03':
    if (local_68 != '\x03') goto switchD_1432f413e_default;
    local_68 = -1;
    break;
  case '\x04':
    goto joined_r0x0001432f41a5;
  case '\x05':
joined_r0x0001432f41a5:
    if (local_68 == '\x04') {
LAB_1432f41a7:
      local_68 = -1;
    }
  default:
    goto switchD_1432f413e_default;
  }
  if (local_90 != (FFileOperation *)0x0) {
    FMemory::Free(local_90);
  }
switchD_1432f413e_default:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_b0);
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

