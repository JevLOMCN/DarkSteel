// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 8

// FAsyncLoadingTraceAnalyzer @ 14d3cbaf0

FAsyncLoadingTraceAnalyzer * __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncLoadingTraceAnalyzer
          (FAsyncLoadingTraceAnalyzer *this,IAnalysisSession *param_1,
          FLoadTimeProfilerProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FAsyncLoadingTraceAnalyzer_TraceServices__6B_;
  *(undefined8 *)&this->ActiveAsyncPackagesMap = 0;
  *(undefined8 *)&(this->ActiveAsyncPackagesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveAsyncPackagesMap).field_0x20 = 0;
  this->LoadTimeProfilerProvider = param_2;
  *(undefined4 *)&(this->ActiveAsyncPackagesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveAsyncPackagesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveAsyncPackagesMap).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveAsyncPackagesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveAsyncPackagesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveAsyncPackagesMap).field_0x48 = 0;
  *(undefined8 *)&this->ActiveLinkersMap = 0;
  *(undefined8 *)&(this->ActiveLinkersMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveLinkersMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveLinkersMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveLinkersMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveLinkersMap).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveLinkersMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveLinkersMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveLinkersMap).field_0x48 = 0;
  *(undefined8 *)&this->ExportsMap = 0;
  *(undefined8 *)&(this->ExportsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ExportsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ExportsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ExportsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExportsMap).field_0x34 = 0;
  *(undefined4 *)&(this->ExportsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExportsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ExportsMap).field_0x48 = 0;
  *(undefined8 *)&this->ActiveRequestsMap = 0;
  *(undefined8 *)&(this->ActiveRequestsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveRequestsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveRequestsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveRequestsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveRequestsMap).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveRequestsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveRequestsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveRequestsMap).field_0x48 = 0;
  (this->FakeRequestsStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FakeRequestsStack).ArrayNum = 0;
  (this->FakeRequestsStack).ArrayMax = 0;
  *(undefined8 *)&this->ActiveBatchesMap = 0;
  *(undefined8 *)&(this->ActiveBatchesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveBatchesMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveBatchesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveBatchesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveBatchesMap).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveBatchesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveBatchesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveBatchesMap).field_0x48 = 0;
  *(undefined8 *)&this->ThreadStatesMap = 0;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x34 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x48 = 0;
  *(undefined8 *)&this->ClassInfosMap = 0;
  *(undefined8 *)&(this->ClassInfosMap).field_0x8 = 0;
  *(undefined8 *)&(this->ClassInfosMap).field_0x20 = 0;
  *(undefined4 *)&(this->ClassInfosMap).field_0x28 = 0;
  *(undefined4 *)&(this->ClassInfosMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassInfosMap).field_0x34 = 0;
  *(undefined4 *)&(this->ClassInfosMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClassInfosMap).field_0x40 = 0;
  *(undefined4 *)&(this->ClassInfosMap).field_0x48 = 0;
  this->UnknownPackageInfo = (FPackageInfo *)0x0;
  this->ErrorCount = 0;
  this->WarningCount = 0;
  return this;
}

// ~FAsyncLoadingTraceAnalyzer @ 14d3cf6b0

void __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::~FAsyncLoadingTraceAnalyzer
          (FAsyncLoadingTraceAnalyzer *this)

{
  TMap<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,0>_>
  *pTVar1;
  undefined1 *puVar2;
  TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>_>
  *this_00;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TMap<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,0>_>
  *pTVar9;
  TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>
  *pTVar10;
  TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,0>_>
  *pTVar11;
  bool bVar12;
  byte bVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  undefined1 *puVar19;
  uint *puVar20;
  TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,0>_>
  *this_01;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_208 [8];
  TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>
  *local_200;
  int iStack_1f8;
  uint uStack_1f4;
  undefined1 *local_1f0;
  undefined4 uStack_1e8;
  int iStack_1e4;
  int local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  ulonglong local_1d0;
  int local_1c8;
  uint uStack_1c4;
  undefined1 *puStack_1c0;
  undefined4 local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  TMap<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,0>_>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_178;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  TMap<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ThreadStatesMap).field_0x10;
  local_1c8 = 0;
  local_1d0 = 1;
  this->_padding_ = (longlong)&___7FAsyncLoadingTraceAnalyzer_TraceServices__6B_;
  pTVar1 = &this->ThreadStatesMap;
  iVar4 = *(int *)&(this->ThreadStatesMap).field_0x28;
  uStack_1c4 = 1;
  iStack_1b4 = 0;
  iStack_1b0 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ThreadStatesMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)pTVar18;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      iStack_1b0 = iStack_1b0 + 0x20;
      lVar14 = (longlong)local_1c8;
      local_1c8 = local_1c8 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1c8) goto LAB_14d3cf7a0;
      uVar17 = puVar20[lVar14 + 1];
    }
    uStack_1c4 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_1c4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_158 = (int)lVar14;
    iStack_1b4 = local_158 + -1 + iStack_1b0;
    if (iVar4 < iStack_1b4) {
LAB_14d3cf7a0:
      iStack_1b4 = iVar4;
    }
  }
  local_1b8 = 0xffffffff;
  uVar17 = *(uint *)&(this->ThreadStatesMap).field_0x28;
  TStack_1a0._padding_ = CONCAT44(uStack_1c4,local_1c8);
  bVar13 = (byte)uVar17 & 0x1f;
  TStack_1a0.CurrentBitIndex = iStack_1b4;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  TStack_1a0._28_4_ = uStack_1ac;
  TStack_1a0.BaseBitIndex = iStack_1b0;
  local_180 = CONCAT44(local_180._4_4_,
                       *(int *)&(this->ThreadStatesMap).field_0x8 -
                       *(int *)&(this->ThreadStatesMap).field_0x34);
  local_178._padding_._0_4_ = (int)uVar17 >> 5;
  local_178._padding_._4_4_ = 1 << bVar13;
  local_178.UnvisitedBitMask = -1 << bVar13;
  local_178.BaseBitIndex = uVar17 & 0xffffffe0;
  uStack_118 = local_180;
  puStack_1c0 = (undefined1 *)pTVar18;
  local_1a8 = pTVar1;
  TStack_1a0.Array = pTVar18;
  local_178.Array = pTVar18;
  local_178.CurrentBitIndex = uVar17;
  local_140 = pTVar1;
  TStack_138._padding_ = TStack_1a0._padding_;
  TStack_138.Array = pTVar18;
  TStack_138._16_8_ = TStack_1a0._16_8_;
  TStack_138._24_8_ = TStack_1a0._24_8_;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar17 != *(uint *)&(this->ThreadStatesMap).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_178);
    pTVar18 = local_178.Array;
    uVar17 = local_178.CurrentBitIndex;
  }
  while( true ) {
    pTVar9 = local_140;
    if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != (int)uStack_118) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_138.CurrentBitIndex == uVar17) && (TStack_138.Array == pTVar18)) &&
       (pTVar9 == pTVar1)) break;
    pvVar6 = *(void **)(*(longlong *)pTVar9 + 8 + (longlong)TStack_138.CurrentBitIndex * 0x18);
    if (pvVar6 != (void *)0x0) {
      DestructItems<TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>,int>
                (*(TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1> **)
                  ((longlong)pvVar6 + 0x2028),*(int *)((longlong)pvVar6 + 0x2030));
      if (*(void **)((longlong)pvVar6 + 0x2028) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar6 + 0x2028));
      }
      ::operator_delete(pvVar6,0x2040);
    }
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  local_200 = &this->ActiveAsyncPackagesMap;
  puVar2 = &(this->ActiveAsyncPackagesMap).field_0x10;
  iStack_1f8 = 0;
  iVar4 = *(int *)&(this->ActiveAsyncPackagesMap).field_0x28;
  local_1e0 = 0;
  iStack_1e4 = 0;
  uStack_1f4 = 1;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ActiveAsyncPackagesMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uStack_1f4 = *puVar20;
    while (uStack_1f4 == 0) {
      lVar14 = (longlong)iStack_1f8;
      local_1e0 = local_1e0 + 0x20;
      iStack_1f8 = iStack_1f8 + 1;
      iStack_1e4 = iVar4;
      uStack_1f4 = 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f8) goto LAB_14d3cf97d;
      uStack_1f4 = puVar20[lVar14 + 1];
    }
    uStack_1f4 = -uStack_1f4 & uStack_1f4;
    uVar3 = (ulonglong)uStack_1f4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_154 = (int)lVar14;
    iStack_1e4 = local_1e0 + -1 + local_154;
    if (iVar4 < iStack_1e4) {
      iStack_1e4 = iVar4;
    }
  }
LAB_14d3cf97d:
  uVar17 = *(uint *)&(this->ActiveAsyncPackagesMap).field_0x28;
  uStack_1dc = local_94;
  iStack_1d8 = *(int *)&(this->ActiveAsyncPackagesMap).field_0x8 -
               *(int *)&(this->ActiveAsyncPackagesMap).field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_108._padding_ = CONCAT44(uStack_1f4,iStack_1f8);
  uStack_1e8 = 0xffffffff;
  TStack_108.CurrentBitIndex = iStack_1e4;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_108._28_4_ = local_94;
  TStack_108.BaseBitIndex = local_1e0;
  uStack_e8 = CONCAT44(uStack_1d4,iStack_1d8);
  local_1f0 = puVar2;
  local_110 = local_200;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&(this->ActiveAsyncPackagesMap).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(this->ActiveAsyncPackagesMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d3cfa8d;
      uVar17 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_150 = (int)lVar14;
    uVar17 = (uVar16 - 1) + local_150;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14d3cfa8d:
  while( true ) {
    pTVar10 = local_110;
    if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_108.CurrentBitIndex == uVar17) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar10 == &this->ActiveAsyncPackagesMap)) break;
    pvVar6 = *(void **)(*(longlong *)pTVar10 + 8 + (longlong)TStack_108.CurrentBitIndex * 0x18);
    if (pvVar6 != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar6 + 0xb0) = 0;
      if (*(void **)((longlong)pvVar6 + 0xa8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar6 + 0xa8));
      }
      TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)pvVar6 + 0x68));
      *(undefined4 *)((longlong)pvVar6 + 0x60) = 0;
      if (*(void **)((longlong)pvVar6 + 0x58) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar6 + 0x58));
      }
      TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)pvVar6 + 0x18));
      ::operator_delete(pvVar6,0xb8);
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  this_01 = &this->ActiveRequestsMap;
  iStack_1f8 = 0;
  local_1e0 = 0;
  puVar2 = &(this->ActiveRequestsMap).field_0x10;
  iVar4 = *(int *)&(this->ActiveRequestsMap).field_0x28;
  uStack_1f4 = (uint)local_1d0;
  iStack_1e4 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ActiveRequestsMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar14 = (longlong)iStack_1f8;
      local_1e0 = local_1e0 + 0x20;
      iStack_1f8 = iStack_1f8 + 1;
      iStack_1e4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f8) goto LAB_14d3cfbdd;
      uVar17 = puVar20[lVar14 + 1];
    }
    uStack_1f4 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_1f4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_14c = (int)lVar14;
    iStack_1e4 = local_1e0 + -1 + local_14c;
    if (iVar4 < iStack_1e4) {
      iStack_1e4 = iVar4;
    }
  }
LAB_14d3cfbdd:
  uVar17 = *(uint *)&(this->ActiveRequestsMap).field_0x28;
  uStack_1dc = local_74;
  iStack_1d8 = *(int *)&(this->ActiveRequestsMap).field_0x8 -
               *(int *)&(this->ActiveRequestsMap).field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_d8._padding_ = CONCAT44(uStack_1f4,iStack_1f8);
  uStack_1e8 = 0xffffffff;
  TStack_d8.CurrentBitIndex = iStack_1e4;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_d8._28_4_ = local_74;
  TStack_d8.BaseBitIndex = local_1e0;
  uStack_b8 = CONCAT44(uStack_1d4,iStack_1d8);
  local_200 = (TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>
               *)this_01;
  local_1f0 = puVar2;
  local_e0 = this_01;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&(this->ActiveRequestsMap).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(this->ActiveRequestsMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d3cfcf0;
      uVar17 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_148 = (int)lVar14;
    uVar17 = (uVar16 - 1) + local_148;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14d3cfcf0:
  while( true ) {
    pTVar11 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_d8.CurrentBitIndex == uVar17) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar11 == this_01)
       ) break;
    pvVar6 = *(void **)(*(longlong *)pTVar11 + 8 + (longlong)TStack_d8.CurrentBitIndex * 0x18);
    if (pvVar6 != (void *)0x0) {
      if (*(void **)((longlong)pvVar6 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar6 + 0x28));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)pvVar6 + 0x20));
      ::operator_delete(pvVar6,0x38);
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  iStack_1f8 = 0;
  local_1e0 = 0;
  puVar2 = &(this->ActiveLinkersMap).field_0x10;
  iVar4 = *(int *)&(this->ActiveLinkersMap).field_0x28;
  this_00 = &this->ActiveLinkersMap;
  iStack_1e4 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ActiveLinkersMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar14 = (longlong)iStack_1f8;
      local_1e0 = local_1e0 + 0x20;
      iStack_1f8 = iStack_1f8 + 1;
      iStack_1e4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f8) goto LAB_14d3cfe00;
      uVar17 = puVar20[lVar14 + 1];
    }
    local_1d0 = (ulonglong)(-uVar17 & uVar17);
    uVar3 = local_1d0 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_144 = (int)lVar14;
    iStack_1e4 = local_144 + -1 + local_1e0;
    if (iVar4 < iStack_1e4) {
      iStack_1e4 = iVar4;
    }
  }
LAB_14d3cfe00:
  uVar17 = *(uint *)&(this->ActiveLinkersMap).field_0x28;
  uStack_1f4 = (uint)local_1d0;
  uStack_1dc = local_54;
  iStack_1d8 = *(int *)&(this->ActiveLinkersMap).field_0x8 -
               *(int *)&(this->ActiveLinkersMap).field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  uStack_1e8 = 0xffffffff;
  TStack_1a0._padding_ = CONCAT44(uStack_1f4,iStack_1f8);
  TStack_1a0.CurrentBitIndex = iStack_1e4;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_1a0._28_4_ = local_54;
  TStack_1a0.BaseBitIndex = local_1e0;
  local_180 = CONCAT44(uStack_1d4,iStack_1d8);
  local_200 = (TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>
               *)this_00;
  local_1f0 = puVar2;
  local_1a8 = (TMap<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,0>_>
               *)this_00;
  TStack_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&(this->ActiveLinkersMap).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(this->ActiveLinkersMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d3cff10;
      uVar17 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar17 = (uVar16 - 1) + (int)lVar14;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14d3cff10:
  while( true ) {
    pTVar1 = local_1a8;
    if (*(int *)&local_1a8->field_0x8 - *(int *)&local_1a8->field_0x34 != (int)local_180) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_208);
    }
    if (((TStack_1a0.CurrentBitIndex == uVar17) &&
        (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar1 == (TMap<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,0>_>
                   *)this_00)) break;
    ::operator_delete(*(void **)(*(longlong *)pTVar1 + 8 +
                                (longlong)TStack_1a0.CurrentBitIndex * 0x18),0x18);
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
  }
  *(undefined4 *)&(this->ClassInfosMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ClassInfosMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FClassInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FClassInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FClassInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassInfosMap);
  *(undefined4 *)&(this->ThreadStatesMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ThreadStatesMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadStatesMap);
  *(undefined4 *)&(this->ActiveBatchesMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ActiveBatchesMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveBatchesMap);
  pFVar7 = (this->FakeRequestsStack).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  *(undefined4 *)&(this->ActiveRequestsMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ActiveRequestsMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_01);
  *(undefined4 *)&(this->ExportsMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ExportsMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExportsMap);
  *(undefined4 *)&(this->ActiveLinkersMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ActiveLinkersMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  *(undefined4 *)&(this->ActiveAsyncPackagesMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ActiveAsyncPackagesMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveAsyncPackagesMap);
  return;
}

// GetClassInfo @ 14d3e0480

FClassInfo * __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::GetClassInfo
          (FAsyncLoadingTraceAnalyzer *this,ulong64 param_1)

{
  FClassInfo **ppFVar1;
  
  ppFVar1 = TMapBase<unsigned___int64,TraceServices::FClassInfo_const_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FClassInfo_const_*>_>
            ::Find((TMapBase<unsigned___int64,TraceServices::FClassInfo_const_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FClassInfo_const_*>_>
                    *)&this->ClassInfosMap,param_1);
  if (ppFVar1 != (FClassInfo **)0x0) {
    return *ppFVar1;
  }
  return (FClassInfo *)0x0;
}

// GetThreadState @ 14d3e2ec0

FThreadState * __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::GetThreadState
          (FAsyncLoadingTraceAnalyzer *this,uint param_1)

{
  longlong lVar1;
  IAnalysisSession *pIVar2;
  int iVar3;
  FThreadState *_Dst;
  ELoadTimeProfilerObjectEventType *pEVar4;
  TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pTVar5;
  longlong lVar6;
  undefined1 *puVar7;
  TPairInitializer<unsigned_int_const_&,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*_const_&>
  local_res8;
  FThreadState *local_res18 [2];
  FThreadState ***local_28;
  FThreadState **local_20;
  
  if (*(int *)&(this->ThreadStatesMap).field_0x8 != *(int *)&(this->ThreadStatesMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ThreadStatesMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ThreadStatesMap).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ThreadStatesMap).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)&(this->ThreadStatesMap).field_0x0;
      do {
        lVar1 = lVar6 + (longlong)iVar3 * 0x18;
        if (*(uint *)(lVar6 + (longlong)iVar3 * 0x18) == param_1) {
          if ((lVar1 != 0) &&
             (local_res18[0] = *(FThreadState **)(lVar1 + 8), local_res18[0] != (FThreadState *)0x0)
             ) {
            return local_res18[0];
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res8.Value._0_4_ = param_1;
  _Dst = ::operator_new(0x2040);
  if (_Dst == (FThreadState *)0x0) {
    _Dst = (FThreadState *)0x0;
  }
  else {
    memset(_Dst,0,0x2000);
    lVar6 = 0x100;
    *(undefined4 *)&(_Dst->CurrentEvent).field_0x14 = 0;
    _Dst->CpuTimeline =
         (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          *)0x0;
    pEVar4 = &_Dst->CpuScopeStack[0].Event.EventType;
    do {
      ((FLoadTimeProfilerCpuEvent *)(pEVar4 + -4))->Package = (FPackageInfo *)0x0;
      *(FPackageExportInfo **)(pEVar4 + -2) = (FPackageExportInfo *)0x0;
      *pEVar4 = LoadTimeProfilerObjectEventType_None;
      pEVar4 = pEVar4 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    _Dst->CpuScopeStackDepth = 0;
    _Dst->PostLoadScopeDepth = 0;
    (_Dst->CurrentEvent).Package = (FPackageInfo *)0x0;
    (_Dst->CurrentEvent).Export = (FPackageExportInfo *)0x0;
    (_Dst->CurrentEvent).EventType = LoadTimeProfilerObjectEventType_None;
    (_Dst->RequestGroupStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (_Dst->RequestGroupStack).ArrayNum = 0;
    (_Dst->RequestGroupStack).ArrayMax = 0;
  }
  local_28 = &local_res8.Value;
  local_20 = local_res18;
  local_res18[0] = _Dst;
  TSet<TTuple<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FAsyncLoadingTraceAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
              *)&this->ThreadStatesMap,&local_res8,(bool *)&local_28);
  pIVar2 = this->Session;
  (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
  pTVar5 = FLoadTimeProfilerProvider::EditCpuTimeline
                     (this->LoadTimeProfilerProvider,(uint)local_res8.Value);
  local_res18[0]->CpuTimeline = pTVar5;
  (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  return local_res18[0];
}

// OnAnalysisBegin @ 14d3e8090

void __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::OnAnalysisBegin
          (FAsyncLoadingTraceAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"LoadTime","StartAsyncLoading",0);
  (**(code **)*pFVar1)(pFVar1,1,"LoadTime","SuspendAsyncLoading",0);
  (**(code **)*pFVar1)(pFVar1,2,"LoadTime","ResumeAsyncLoading",0);
  (**(code **)*pFVar1)(pFVar1,0xb,"LoadTime","PackageSummary",0);
  (**(code **)*pFVar1)(pFVar1,0xf,"LoadTime","BeginProcessSummary",0);
  (**(code **)*pFVar1)(pFVar1,0x10,"LoadTime","EndProcessSummary",0);
  (**(code **)*pFVar1)(pFVar1,0x11,"LoadTime","BeginCreateExport",0);
  (**(code **)*pFVar1)(pFVar1,0x12,"LoadTime","EndCreateExport",0);
  (**(code **)*pFVar1)(pFVar1,0x13,"LoadTime","BeginSerializeExport",0);
  (**(code **)*pFVar1)(pFVar1,0x14,"LoadTime","EndSerializeExport",0);
  (**(code **)*pFVar1)(pFVar1,0x15,"LoadTime","BeginPostLoad",0);
  (**(code **)*pFVar1)(pFVar1,0x16,"LoadTime","EndPostLoad",0);
  (**(code **)*pFVar1)(pFVar1,0x17,"LoadTime","BeginPostLoadObject",0);
  (**(code **)*pFVar1)(pFVar1,0x18,"LoadTime","EndPostLoadObject",0);
  (**(code **)*pFVar1)(pFVar1,3,"LoadTime","NewAsyncPackage",0);
  (**(code **)*pFVar1)(pFVar1,4,"LoadTime","DestroyAsyncPackage",0);
  (**(code **)*pFVar1)(pFVar1,5,"LoadTime","NewLinker",0);
  (**(code **)*pFVar1)(pFVar1,6,"LoadTime","DestroyLinker",0);
  (**(code **)*pFVar1)(pFVar1,7,"LoadTime","BeginRequest",0);
  (**(code **)*pFVar1)(pFVar1,8,"LoadTime","EndRequest",0);
  (**(code **)*pFVar1)(pFVar1,9,"LoadTime","BeginRequestGroup",0);
  (**(code **)*pFVar1)(pFVar1,10,"LoadTime","EndRequestGroup",0);
  (**(code **)*pFVar1)(pFVar1,0xc,"LoadTime","AsyncPackageRequestAssociation",0);
  (**(code **)*pFVar1)(pFVar1,0xd,"LoadTime","AsyncPackageLinkerAssociation",0);
  (**(code **)*pFVar1)(pFVar1,0xe,"LoadTime","AsyncPackageImportDependency",0);
  (**(code **)*pFVar1)(pFVar1,0x19,"LoadTime","ClassInfo",0);
  (**(code **)*pFVar1)(pFVar1,0x1a,"IoDispatcher","BatchIssued",0);
  (**(code **)*pFVar1)(pFVar1,0x1b,"IoDispatcher","BatchResolved",0);
  (**(code **)*pFVar1)(pFVar1,0x1c,"LoadTime","BeginObjectScope",0);
  (**(code **)*pFVar1)(pFVar1,0x1d,"LoadTime","EndObjectScope",0);
  (**(code **)*pFVar1)(pFVar1,0x1e,"LoadTime","BeginPostLoadExport",0);
  (**(code **)*pFVar1)(pFVar1,0x1f,"LoadTime","EndPostLoadExport",0);
  return;
}

// OnAnalysisEnd @ 14d3e9930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::OnAnalysisEnd(FAsyncLoadingTraceAnalyzer *this)

{
  if (this->ErrorCount == 0) {
    if ((this->WarningCount != 0) && (2 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else if (1 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (4 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return;
}

// OnEvent @ 14d3ec310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::OnEvent
          (FAsyncLoadingTraceAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  int *piVar1;
  ulong64 *puVar2;
  TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
  *pTVar3;
  TArray<TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  ulonglong uVar5;
  FEventData *this_00;
  FLinkerLoadState *pFVar6;
  FEventTime *this_01;
  TReferenceControllerBase<1> *pTVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  code *pcVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  FAsyncPackageState *pFVar21;
  TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*> *pTVar22;
  TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*> *pTVar23;
  FPackageExportInfo *pFVar24;
  FPackageInfo *pFVar25;
  wchar_t *pwVar26;
  FClassInfo **ppFVar27;
  TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*> *pTVar28;
  FThreadState *pFVar29;
  ulong64 uVar30;
  TSharedRef<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1> *pTVar31;
  FRequestGroupState *pFVar32;
  TArrayView<unsigned_char_const_,int> *pTVar33;
  size_t sVar34;
  uchar *puVar35;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar36;
  TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*> *pTVar37;
  ulong64 uVar38;
  FStaticBasicLogRecord *pFVar39;
  longlong lVar40;
  ForAnyElementType FVar41;
  undefined1 *puVar42;
  uint uVar43;
  FAsyncPackageState *pFVar44;
  FScriptContainerElement *pFVar45;
  IAnalysisSession *pIVar46;
  TArray<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,TSizedDefaultAllocator<32>_>
  *pTVar47;
  FAsyncPackageState *pFVar48;
  FScriptContainerElement *pFVar49;
  FScopeStackEntry *pFVar50;
  undefined1 *puVar51;
  int iVar52;
  uint *puVar53;
  longlong *plVar54;
  FAsyncPackageState *pFVar55;
  uint uVar56;
  FRequestState *pFVar57;
  undefined4 uVar58;
  double dVar59;
  undefined4 uVar60;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  FAsyncPackageState *local_328;
  undefined1 local_320 [8];
  FThreadState *local_318;
  FAsyncPackageState *local_310;
  FLLMScope local_308 [2];
  FPackageExportInfo *local_300;
  FPackageExportInfo *local_2f8;
  FPackageExportInfo *local_2f0;
  FAsyncPackageState *local_2e8;
  FAsyncPackageState *local_2e0;
  FLinkerLoadState *local_2d8;
  longlong *local_2d0;
  FString local_2c8;
  FRequestGroupState *local_2b8;
  TReferenceControllerBase<1> *pTStack_2b0;
  TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
  *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a0;
  undefined8 local_280;
  uint local_278;
  uint uStack_274;
  undefined1 *puStack_270;
  undefined4 local_268;
  int iStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  ulong64 local_258;
  FRequestState *local_250;
  ulong64 local_248;
  undefined1 local_240 [8];
  undefined1 local_238 [16];
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  FAsyncPackageState *local_218;
  ulong64 local_210;
  FClassInfo *local_208;
  ulong64 local_200;
  FMemScope local_1f8;
  ulong64 local_1f0;
  FAsyncPackageState *local_1e8;
  FString local_1e0;
  TSharedRef<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1> local_1c8;
  FString local_1b8;
  ulong64 local_1a8;
  ulong64 local_1a0;
  TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
  *local_198;
  uint uStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  ulong64 *local_138;
  FAsyncPackageState **local_130;
  ulong64 *local_128;
  FClassInfo **local_120;
  ulong64 *local_118;
  ulong64 *local_110;
  ulong64 *local_108;
  FAsyncPackageState **local_100;
  ulong64 *local_f8;
  FAsyncPackageState **local_f0;
  ulong64 *local_e8;
  FPackageExportInfo **local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  TSharedRef<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1> local_b8;
  undefined8 local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  TArrayView<unsigned_char_const_,int> local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  undefined4 local_4c;
  
  pFVar21 = (FAsyncPackageState *)0x0;
  uVar17 = 0;
  pFVar55 = (FAsyncPackageState *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name177,L"Insights/FAsyncLoadingTraceAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_308,LLMScope_Name177,false,None,Default,true);
  FMemScope::FMemScope(&local_1f8,&LLMScope_Name177,true);
  this_00 = param_3->EventData;
  uVar18 = 0;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    pIVar46 = this->Session;
    uVar58 = SUB84(dVar59,0);
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    goto LAB_14d3ef33d;
  case 3:
    local_1a8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                          (this_00,"AsyncPackage",0);
    pFVar55 = ::operator_new(0xb8);
    if (pFVar55 != (FAsyncPackageState *)0x0) {
      memset(pFVar55,0,0xb8);
      pFVar21 = FAsyncPackageState::FAsyncPackageState(pFVar55);
    }
    pIVar46 = this->Session;
    local_2e8 = pFVar21;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    pFVar25 = FLoadTimeProfilerProvider::CreatePackage(this->LoadTimeProfilerProvider);
    local_2e8->PackageInfo = pFVar25;
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(this_00);
    if (uVar17 != 0) {
      puVar35 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
      pwVar26 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,puVar35);
      local_2e8->PackageInfo->Name = pwVar26;
    }
    (**(code **)((longlong)*pIVar46 + 0xa8))(pIVar46);
    local_108 = &local_1a8;
    local_100 = &local_2e8;
    TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*_const_&>_>
              ((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
                *)&this->ActiveAsyncPackagesMap,
               (TPairInitializer<unsigned___int64_const_&,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*_const_&>
                *)local_238,(bool *)&local_108);
    break;
  case 4:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"AsyncPackage",0);
    bVar13 = TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>
             ::RemoveAndCopyValue(&this->ActiveAsyncPackagesMap,uVar30,&local_2e0);
    if (bVar13) {
      if (local_2e0->Linker != (FLinkerLoadState *)0x0) {
        local_2e0->Linker->AsyncPackage = (FAsyncPackageState *)0x0;
      }
      pFVar57 = local_2e0->Request;
      if (pFVar57 != (FRequestState *)0x0) {
        pFVar49 = (pFVar57->AsyncPackages).AllocatorInstance.Data;
        iVar16 = (pFVar57->AsyncPackages).ArrayNum;
        for (pFVar45 = pFVar49; pFVar45 != pFVar49 + (longlong)iVar16 * 8; pFVar45 = pFVar45 + 8) {
          if (*(FAsyncPackageState **)pFVar45 == local_2e0) {
            uVar43 = (uint)((longlong)pFVar45 - (longlong)pFVar49 >> 3);
            if (uVar43 != 0xffffffff) {
              uVar19 = uVar18;
              if ((int)(uVar43 + 1) <= iVar16) {
                uVar19 = ~uVar43 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar13)) {
                pcVar10 = (code *)swi(3);
                uVar14 = (*pcVar10)();
                return (bool)uVar14;
              }
              TArray<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,TSizedDefaultAllocator<32>_>
              ::RemoveAtSwapImpl(&pFVar57->AsyncPackages,uVar43,1);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&(pFVar57->AsyncPackages).AllocatorInstance,
                         (pFVar57->AsyncPackages).ArrayNum,&(pFVar57->AsyncPackages).ArrayMax);
            }
            break;
          }
        }
      }
      pTVar3 = &local_2e0->ImportedAsyncPackages;
      uStack_274 = 1;
      iVar16 = *(int *)&(local_2e0->ImportedAsyncPackages).Elements.field_0x28;
      TStack_2a0.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           &(local_2e0->ImportedAsyncPackages).Elements.field_0x10;
      local_278 = 0;
      iStack_264 = 0;
      uStack_260 = 0;
      if (iVar16 != 0) {
        puVar53 = *(uint **)&(local_2e0->ImportedAsyncPackages).Elements.field_0x20;
        if (puVar53 == (uint *)0x0) {
          puVar53 = (uint *)TStack_2a0.Array;
        }
        uVar43 = *puVar53;
        pFVar55 = pFVar21;
        pFVar44 = pFVar21;
        while (uVar43 == 0) {
          uStack_260 = (int)pFVar44 + 0x20;
          pFVar44 = (FAsyncPackageState *)(ulonglong)uStack_260;
          iVar52 = (int)pFVar55;
          local_278 = iVar52 + 1;
          pFVar55 = (FAsyncPackageState *)(ulonglong)local_278;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_278)
          goto LAB_14d3ee3b6;
          uVar43 = puVar53[(longlong)iVar52 + 1];
        }
        uStack_274 = -uVar43 & uVar43;
        uVar5 = (ulonglong)uStack_274 * 2 + 1;
        lVar40 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar40 == 0; lVar40 = lVar40 + -1) {
          }
        }
        local_238._4_4_ = (undefined4)lVar40;
        iStack_264 = (uStack_260 - 1) + local_238._4_4_;
        if (iVar16 < iStack_264) {
LAB_14d3ee3b6:
          iStack_264 = iVar16;
        }
      }
      local_268 = 0xffffffff;
      TStack_2a0._padding_ = CONCAT44(uStack_274,local_278);
      TStack_2a0.CurrentBitIndex = iStack_264;
      TStack_2a0.UnvisitedBitMask = 0xffffffff;
      TStack_2a0._28_4_ = uStack_25c;
      TStack_2a0.BaseBitIndex = uStack_260;
      local_280 = CONCAT44(local_280._4_4_,
                           *(int *)&(local_2e0->ImportedAsyncPackages).Elements.field_0x8 -
                           *(int *)&(local_2e0->ImportedAsyncPackages).Elements.field_0x34);
      uStack_140 = local_280;
      local_2a8 = pTVar3;
      puStack_270 = (undefined1 *)TStack_2a0.Array;
      local_168 = pTVar3;
      TStack_160._padding_ = TStack_2a0._padding_;
      TStack_160.Array = TStack_2a0.Array;
      TStack_160._16_8_ = TStack_2a0._16_8_;
      TStack_160._24_8_ = TStack_2a0._24_8_;
      pTVar36 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_88,TStack_2a0.Array,
                           *(int *)&(local_2e0->ImportedAsyncPackages).Elements.field_0x28);
      TStack_2a0._padding_ = pTVar36->_padding_;
      pTVar11 = pTVar36->Array;
      uVar20._0_4_ = pTVar36->UnvisitedBitMask;
      uVar20._4_4_ = pTVar36->CurrentBitIndex;
      TStack_2a0.BaseBitIndex = pTVar36->BaseBitIndex;
      TStack_2a0._28_4_ = *(undefined4 *)&pTVar36->field_0x1c;
      TStack_2a0.Array = pTVar11;
      TStack_2a0._16_8_ = uVar20;
      while( true ) {
        pTVar12 = local_168;
        if (*(int *)&(local_168->Elements).field_0x8 - *(int *)&(local_168->Elements).field_0x34 !=
            (int)uStack_140) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_160.CurrentBitIndex == uVar20._4_4_) && (TStack_160.Array == pTVar11)) &&
           (pTVar12 == pTVar3)) break;
        TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
        ::Remove((TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
                  *)(*(longlong *)
                      (*(longlong *)&pTVar12->Elements + (longlong)TStack_160.CurrentBitIndex * 0x10
                      ) + 0x68),local_2e0);
        TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
      }
      pTVar3 = &local_2e0->ImportedByAsyncPackages;
      uStack_18c = 1;
      uVar43 = *(uint *)&(local_2e0->ImportedByAsyncPackages).Elements.field_0x28;
      puVar42 = &(local_2e0->ImportedByAsyncPackages).Elements.field_0x10;
      uStack_17c = uVar18;
      if (uVar43 != 0) {
        puVar53 = *(uint **)&(local_2e0->ImportedByAsyncPackages).Elements.field_0x20;
        if (puVar53 == (uint *)0x0) {
          puVar53 = (uint *)puVar42;
        }
        uVar19 = *puVar53;
        pFVar55 = pFVar21;
        uVar18 = 0;
        uVar17 = 0;
        while (uVar19 == 0) {
          iVar16 = (int)pFVar55;
          uVar18 = (int)pFVar21 + 0x20;
          pFVar21 = (FAsyncPackageState *)(ulonglong)uVar18;
          uVar17 = iVar16 + 1;
          pFVar55 = (FAsyncPackageState *)(ulonglong)uVar17;
          uStack_17c = uVar43;
          if ((int)((uVar43 - 1) + ((int)(uVar43 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
          goto LAB_14d3ee51f;
          uVar19 = puVar53[(longlong)iVar16 + 1];
        }
        uStack_18c = -uVar19 & uVar19;
        uVar5 = (ulonglong)uStack_18c * 2 + 1;
        lVar40 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar40 == 0; lVar40 = lVar40 + -1) {
          }
        }
        local_238._8_4_ = (undefined4)lVar40;
        uStack_17c = (uVar18 - 1) + local_238._8_4_;
        if ((int)uVar43 < (int)uStack_17c) {
          uStack_17c = uVar43;
        }
      }
LAB_14d3ee51f:
      uStack_174 = local_4c;
      iStack_170 = *(int *)&(local_2e0->ImportedByAsyncPackages).Elements.field_0x8 -
                   *(int *)&(local_2e0->ImportedByAsyncPackages).Elements.field_0x34;
      uVar19 = *(uint *)&(local_2e0->ImportedByAsyncPackages).Elements.field_0x28;
      uStack_180 = 0xffffffff;
      TStack_2a0._padding_ = CONCAT44(uStack_18c,uVar17);
      uVar56 = uVar19 & 0xffffffe0;
      TStack_2a0.CurrentBitIndex = uStack_17c;
      TStack_2a0.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar19 >> 5;
      TStack_2a0._28_4_ = local_4c;
      TStack_2a0.BaseBitIndex = uVar18;
      local_280 = CONCAT44(uStack_16c,iStack_170);
      local_2a8 = pTVar3;
      TStack_2a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar42;
      local_198 = pTVar3;
      uStack_190 = uVar17;
      local_188 = puVar42;
      local_178 = uVar18;
      if ((((int)uVar19 < 0) || ((int)uVar43 < (int)uVar19)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      uVar17 = *(uint *)&(local_2e0->ImportedByAsyncPackages).Elements.field_0x28;
      if (uVar19 != uVar17) {
        puVar8 = *(undefined1 **)&(local_2e0->ImportedByAsyncPackages).Elements.field_0x20;
        puVar51 = puVar42;
        if (puVar8 != (undefined1 *)0x0) {
          puVar51 = puVar8;
        }
        uVar18 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar51 + (longlong)iVar16 * 4);
        while (uVar18 == 0) {
          lVar40 = (longlong)iVar16;
          uVar56 = uVar56 + 0x20;
          iVar16 = iVar16 + 1;
          uVar19 = uVar17;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14d3ee650;
          uVar18 = *(uint *)(puVar51 + lVar40 * 4 + 4);
        }
        uVar5 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar40 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar40 == 0; lVar40 = lVar40 + -1) {
          }
        }
        uVar19 = (int)lVar40 + -1 + uVar56;
        if ((int)uVar17 < (int)uVar19) {
          uVar19 = uVar17;
        }
      }
LAB_14d3ee650:
      while( true ) {
        pTVar12 = local_2a8;
        if (*(int *)&(local_2a8->Elements).field_0x8 - *(int *)&(local_2a8->Elements).field_0x34 !=
            (int)local_280) {
          `TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_320);
        }
        if (((TStack_2a0.CurrentBitIndex == uVar19) &&
            (TStack_2a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar42)) &&
           (pTVar12 == pTVar3)) break;
        TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
        ::Remove((TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
                  *)(*(longlong *)
                      (*(longlong *)&pTVar12->Elements + (longlong)TStack_2a0.CurrentBitIndex * 0x10
                      ) + 0x18),local_2e0);
        TStack_2a0.UnvisitedBitMask = TStack_2a0.UnvisitedBitMask & ~TStack_2a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a0);
      }
      if (local_2e0 != (FAsyncPackageState *)0x0) {
        FAsyncPackageState::_scalar_deleting_destructor_(local_2e0,1);
      }
    }
    else {
      this->WarningCount = this->WarningCount + 1;
      if (this->WarningCount < 0x65) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
    break;
  case 5:
    local_1f0 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Linker",0);
    pFVar55 = ::operator_new(0x18);
    if (pFVar55 != (FAsyncPackageState *)0x0) {
      pFVar55->PackageInfo = (FPackageInfo *)0x0;
      pFVar55->Request = (FRequestState *)0x0;
      pFVar55->Linker = (FLinkerLoadState *)0x0;
      pFVar21 = pFVar55;
    }
    local_138 = &local_1f0;
    local_130 = &local_1e8;
    local_1e8 = pFVar21;
    TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*_const_&>_>
              ((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                *)&this->ActiveLinkersMap,
               (TPairInitializer<unsigned___int64_const_&,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*_const_&>
                *)(local_220 + 4),(bool *)&local_138);
    break;
  case 6:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Linker",0);
    bVar13 = TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>_>
             ::RemoveAndCopyValue(&this->ActiveLinkersMap,uVar30,&local_2d8);
    if (bVar13) {
      pFVar55 = local_2d8->AsyncPackage;
      if ((pFVar55 != (FAsyncPackageState *)0x0) &&
         (pFVar55->Linker = (FLinkerLoadState *)0x0, local_2d8->bHasFakeAsyncPackageState != false))
      {
        if ((*(int *)&(pFVar55->ImportedAsyncPackages).Elements.field_0x8 !=
             *(int *)&(pFVar55->ImportedAsyncPackages).Elements.field_0x34) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5671630968658592593>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\LoadTimeTraceAnalysis.cpp"
                                ,0x351,"AsyncPackageState->ImportedAsyncPackages.IsEmpty()"), bVar13
           )) {
          pcVar10 = (code *)swi(3);
          uVar14 = (*pcVar10)();
          return (bool)uVar14;
        }
        if ((*(int *)&(pFVar55->ImportedByAsyncPackages).Elements.field_0x8 !=
             *(int *)&(pFVar55->ImportedByAsyncPackages).Elements.field_0x34) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5671630968658592594>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\LoadTimeTraceAnalysis.cpp"
                                ,0x352,"AsyncPackageState->ImportedByAsyncPackages.IsEmpty()"),
           bVar13)) {
          pcVar10 = (code *)swi(3);
          uVar14 = (*pcVar10)();
          return (bool)uVar14;
        }
        FAsyncPackageState::_scalar_deleting_destructor_(pFVar55,1);
      }
      ::operator_delete(local_2d8,0x18);
    }
    else {
      this->WarningCount = this->WarningCount + 1;
      if (this->WarningCount < 0x65) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
    break;
  case 7:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar17 | uVar18);
    local_318 = (FThreadState *)
                UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,(ulong64)local_318);
    local_258 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"RequestId",0);
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar59,0));
    (**(code **)((longlong)*pIVar46 + 0xa8))(pIVar46);
    pFVar55 = ::operator_new(0x38);
    local_328 = pFVar21;
    if (pFVar55 != (FAsyncPackageState *)0x0) {
      pFVar55->Request = (FRequestState *)0x0;
      pFVar55->Linker = (FLinkerLoadState *)0x0;
      *(undefined8 *)&(pFVar55->ImportedAsyncPackages).Elements = 0;
      *(undefined8 *)&(pFVar55->ImportedAsyncPackages).Elements.field_0x8 = 0;
      *(undefined8 *)&(pFVar55->ImportedAsyncPackages).Elements.field_0x10 = 0;
      *(undefined8 *)&(pFVar55->ImportedAsyncPackages).Elements.field_0x18 = 0;
      local_328 = pFVar55;
    }
    local_328->PackageInfo = (FPackageInfo *)local_318;
    local_328->Request = (FRequestState *)0x0;
    *(uint *)&local_328->Linker = uVar17 | uVar18;
    if (local_258 == 0) {
      pTVar47 = &this->FakeRequestsStack;
      pFVar49 = (pTVar47->AllocatorInstance).Data;
      if (((pFVar49 <= (FScriptContainerElement *)&local_328) &&
          ((FScriptContainerElement *)&local_328 <
           pFVar49 + (longlong)(this->FakeRequestsStack).ArrayMax * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      iVar16 = (this->FakeRequestsStack).ArrayNum;
      piVar1 = &(this->FakeRequestsStack).ArrayMax;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar47->AllocatorInstance,piVar1);
      }
      (this->FakeRequestsStack).ArrayNum = iVar16 + 1;
      *(FAsyncPackageState **)((pTVar47->AllocatorInstance).Data + (longlong)iVar16 * 8) = local_328
      ;
    }
    else {
      local_f8 = &local_258;
      local_f0 = &local_328;
      TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*_const_&>_>
                ((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,0>,FDefaultSetAllocator>
                  *)&this->ActiveRequestsMap,
                 (TPairInitializer<unsigned___int64_const_&,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*_const_&>
                  *)(local_240 + 4),(bool *)&local_f8);
    }
    iVar16 = (pFVar29->RequestGroupStack).ArrayNum;
    if (iVar16 == 0) {
      local_c8 = 0;
      local_c0 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar55 = pFVar21;
LAB_14d3ed970:
      pTVar31 = MakeShared<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>
                          (&local_b8);
      pFVar48 = (FAsyncPackageState *)(pTVar31->SharedReferenceCount).ReferenceController;
      pFVar32 = pTVar31->Object;
      if (pFVar48 != (FAsyncPackageState *)0x0) {
        LOCK();
        *(int *)&pFVar48->Request = *(int *)&pFVar48->Request + 1;
        UNLOCK();
      }
      pFVar44 = pFVar55;
      if ((pFVar48 != pFVar55) &&
         (pFVar44 = pFVar48, pFVar48 = pFVar21, pFVar55 != (FAsyncPackageState *)0x0)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReference
                  ((TReferenceControllerBase<1> *)pFVar55);
        pFVar48 = (FAsyncPackageState *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      if ((pFVar32 == (FRequestGroupState *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      ::FString::operator=(&pFVar32->Name,L"[ungrouped]");
      if ((pFVar32 == (FRequestGroupState *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
    }
    else {
      if ((iVar16 < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      pFVar49 = (pFVar29->RequestGroupStack).AllocatorInstance.Data;
      pFVar44 = *(FAsyncPackageState **)(pFVar49 + 8);
      pFVar32 = *(FRequestGroupState **)pFVar49;
      if (pFVar44 != (FAsyncPackageState *)0x0) {
        LOCK();
        *(int *)&pFVar44->Request = *(int *)&pFVar44->Request + 1;
        UNLOCK();
      }
      local_d0 = 0;
      local_d8 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar55 = pFVar44;
      if (pFVar32 == (FRequestGroupState *)0x0) goto LAB_14d3ed970;
    }
    pFVar49 = (pFVar32->Requests).AllocatorInstance.Data;
    if (((pFVar49 <= (FScriptContainerElement *)&local_328) &&
        ((FScriptContainerElement *)&local_328 <
         pFVar49 + (longlong)(pFVar32->Requests).ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      uVar14 = (*pcVar10)();
      return (bool)uVar14;
    }
    iVar16 = (pFVar32->Requests).ArrayNum;
    piVar1 = &(pFVar32->Requests).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar32->Requests).AllocatorInstance,piVar1);
    }
    (pFVar32->Requests).ArrayNum = iVar16 + 1;
    *(FAsyncPackageState **)((pFVar32->Requests).AllocatorInstance.Data + (longlong)iVar16 * 8) =
         local_328;
    if ((pFVar32 == (FRequestGroupState *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      uVar14 = (*pcVar10)();
      return (bool)uVar14;
    }
    pFVar32->ActiveRequestsCount = pFVar32->ActiveRequestsCount + 1;
    if (pFVar44 != (FAsyncPackageState *)0x0) {
      LOCK();
      *(int *)&pFVar44->Request = *(int *)&pFVar44->Request + 1;
      UNLOCK();
    }
    local_a8 = *(undefined8 *)&(local_328->ImportedAsyncPackages).Elements;
    pTStack_a0 = *(TReferenceControllerBase<1> **)
                  &(local_328->ImportedAsyncPackages).Elements.field_0x8;
    *(FRequestGroupState **)&(local_328->ImportedAsyncPackages).Elements = pFVar32;
    *(FAsyncPackageState **)&(local_328->ImportedAsyncPackages).Elements.field_0x8 = pFVar44;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar44);
    break;
  case 8:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar38 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"RequestId",0);
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar59,0));
    (**(code **)((longlong)*pIVar46 + 0xa8))(pIVar46);
    local_250 = (FRequestState *)0x0;
    if (uVar38 == 0) {
      iVar16 = (this->FakeRequestsStack).ArrayNum;
      if (iVar16 != 0) {
        if ((iVar16 < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          uVar14 = (*pcVar10)();
          return (bool)uVar14;
        }
        iVar16 = (this->FakeRequestsStack).ArrayNum;
        iVar52 = iVar16 + -1;
        pFVar57 = *(FRequestState **)
                   ((this->FakeRequestsStack).AllocatorInstance.Data + (longlong)iVar16 * 8 + -8);
        (this->FakeRequestsStack).ArrayNum = iVar52;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->FakeRequestsStack).AllocatorInstance,iVar52,
                   &(this->FakeRequestsStack).ArrayMax);
        goto LAB_14d3edc3b;
      }
    }
    else {
      TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,0>_>
      ::RemoveAndCopyValue(&this->ActiveRequestsMap,uVar38,&local_250);
      pFVar57 = local_250;
LAB_14d3edc3b:
      if (pFVar57 != (FRequestState *)0x0) {
        pFVar57->WallTimeEndCycle = uVar30;
        pFVar32 = TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>::
                  operator->(&pFVar57->Group);
        if (uVar30 < pFVar32->LatestEndCycle) {
          uVar30 = pFVar32->LatestEndCycle;
        }
        pFVar32 = TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>::
                  operator->(&pFVar57->Group);
        pFVar32->LatestEndCycle = uVar30;
        pFVar32 = TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>::
                  operator->(&pFVar57->Group);
        pFVar32->ActiveRequestsCount = pFVar32->ActiveRequestsCount - 1;
        pFVar32 = TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>::
                  operator->(&pFVar57->Group);
        if ((pFVar32->LoadRequest != (FLoadRequest *)0x0) &&
           (pFVar32 = TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>::
                      operator->(&pFVar57->Group), pFVar32->ActiveRequestsCount == 0)) {
          pIVar46 = this->Session;
          (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
          this_01 = param_3->EventTime;
          pFVar32 = TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>::
                    operator->(&pFVar57->Group);
          dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(this_01,pFVar32->LatestEndCycle);
          pFVar32 = TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>::
                    operator->(&pFVar57->Group);
          pFVar32->LoadRequest->EndTime = dVar59;
          (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar59,0));
          (**(code **)((longlong)*pIVar46 + 0xa8))(pIVar46);
        }
        pFVar45 = (pFVar57->AsyncPackages).AllocatorInstance.Data;
        iVar16 = (pFVar57->AsyncPackages).ArrayNum;
        pFVar49 = pFVar45 + (longlong)iVar16 * 8;
        while( true ) {
          if ((pFVar57->AsyncPackages).ArrayNum != iVar16) {
            `TCheckedPointerIterator<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar45 == pFVar49) break;
          if (*(FRequestState **)(*(longlong *)pFVar45 + 8) == pFVar57) {
            *(undefined8 *)(*(longlong *)pFVar45 + 8) = 0;
          }
          pFVar45 = pFVar45 + 8;
        }
        pFVar49 = (pFVar57->AsyncPackages).AllocatorInstance.Data;
        if (pFVar49 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar49);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar57->Group).SharedReferenceCount.ReferenceController);
        ::operator_delete(pFVar57,0x38);
        break;
      }
    }
    this->WarningCount = this->WarningCount + 1;
    if (this->WarningCount < 0x65) {
      if (2 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    break;
  case 9:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar18 | uVar17);
    local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.Data.ArrayNum = 0;
    local_2c8.Data.ArrayMax = 0;
    bVar13 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Format",&local_2c8);
    if (bVar13) {
      pTVar33 = UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_char>
                          (this_00,&local_98,"FormatArgs");
      puVar35 = pTVar33->DataPtr;
    }
    else {
      pwVar26 = (wchar_t *)UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
      sVar34 = wcslen(pwVar26);
      puVar35 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
      puVar35 = puVar35 + (longlong)((int)sVar34 + 1) * 2;
      ::FString::operator=(&local_2c8,pwVar26);
    }
    FVar41.Data = (FScriptContainerElement *)L"";
    if (local_2c8.Data.ArrayNum != 0) {
      FVar41.Data = local_2c8.Data.AllocatorInstance.Data;
    }
    FFormatArgsHelper::Format
              (this->FormatBuffer,0xffff,this->TempBuffer,0xffff,(wchar_t *)FVar41.Data,puVar35);
    MakeShared<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>(&local_1c8);
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    pwVar26 = (wchar_t *)
              (**(code **)((longlong)*this->Session + 0xd0))(this->Session,this->FormatBuffer);
    ::FString::operator=(&(local_1c8.Object)->Name,pwVar26);
    pTVar4 = &pFVar29->RequestGroupStack;
    local_2b8 = local_1c8.Object;
    pTStack_2b0 = local_1c8.SharedReferenceCount.ReferenceController;
    if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar49 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar49 <= (FScriptContainerElement *)&local_2b8) &&
        ((FScriptContainerElement *)&local_2b8 <
         pFVar49 + (longlong)(pFVar29->RequestGroupStack).ArrayMax * 0x10)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      uVar14 = (*pcVar10)();
      return (bool)uVar14;
    }
    iVar16 = (pFVar29->RequestGroupStack).ArrayNum;
    piVar1 = &(pFVar29->RequestGroupStack).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar4->AllocatorInstance,piVar1);
    }
    pFVar49 = (pTVar4->AllocatorInstance).Data;
    (pFVar29->RequestGroupStack).ArrayNum = iVar16 + 1;
    *(FRequestGroupState **)(pFVar49 + (longlong)iVar16 * 0x10) = local_2b8;
    *(TReferenceControllerBase<1> **)(pFVar49 + (longlong)iVar16 * 0x10 + 8) = pTStack_2b0;
    pTStack_2b0 = (TReferenceControllerBase<1> *)0x0;
    local_2b8 = (FRequestGroupState *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    (**(code **)((longlong)*pIVar46 + 0xa8))(pIVar46);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    break;
  case 10:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar17 | uVar18);
    iVar16 = (pFVar29->RequestGroupStack).ArrayNum;
    if (iVar16 == 0) {
      this->WarningCount = this->WarningCount + 1;
      if (this->WarningCount < 0x65) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
    else {
      if ((iVar16 < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar14 = (*pcVar10)();
        return (bool)uVar14;
      }
      lVar40 = (longlong)(pFVar29->RequestGroupStack).ArrayNum;
      pFVar49 = (pFVar29->RequestGroupStack).AllocatorInstance.Data;
      pTVar7 = *(TReferenceControllerBase<1> **)(pFVar49 + lVar40 * 0x10 + -8);
      *(undefined8 *)(pFVar49 + lVar40 * 0x10 + -8) = 0;
      *(undefined8 *)(pFVar49 + lVar40 * 0x10 + -0x10) = 0;
      iVar16 = (pFVar29->RequestGroupStack).ArrayNum;
      pFVar49 = (pFVar29->RequestGroupStack).AllocatorInstance.Data + (longlong)iVar16 * 0x10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar49 + -8));
      iVar16 = (pFVar29->RequestGroupStack).ArrayNum - iVar16;
      if (iVar16 != 0) {
        memmove(pFVar49 + -0x10,pFVar49,(longlong)iVar16 << 4);
      }
      piVar1 = &(pFVar29->RequestGroupStack).ArrayNum;
      *piVar1 = *piVar1 + -1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
    break;
  case 0xb:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"AsyncPackage",0);
    pTVar22 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
                      *)&this->ActiveAsyncPackagesMap,uVar30);
    if ((pTVar22 ==
         (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*> *
         )0x0) || (plVar54 = *(longlong **)&pTVar22->field_0x8, plVar54 == (longlong *)0x0)) {
      if (uVar30 == 0) {
        uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Linker",0);
      }
      pTVar23 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                        *)&this->ActiveLinkersMap,uVar30);
      if (((pTVar23 ==
            (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>
             *)0x0) || (*(longlong *)&pTVar23->field_0x8 == 0)) ||
         (plVar54 = *(longlong **)(*(longlong *)&pTVar23->field_0x8 + 8), plVar54 == (longlong *)0x0
         )) {
        this->WarningCount = this->WarningCount + 1;
        if (this->WarningCount < 0x65) {
          if (2 < (byte)LogTraceServices._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
          if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
        }
        break;
      }
    }
    lVar40 = *plVar54;
    if (lVar40 == 0) {
      this->WarningCount = this->WarningCount + 1;
      if (this->WarningCount < 0x65) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    FTraceAnalyzerUtils::LegacyAttachmentString<wchar_t>(&local_1e0,"Name",param_3);
    uVar17 = local_1e0.Data.ArrayNum - 1;
    if (local_1e0.Data.ArrayNum == 0) {
      uVar17 = uVar18;
    }
    if (uVar17 != 0) {
      FVar41.Data = (FScriptContainerElement *)L"";
      if (local_1e0.Data.ArrayNum != 0) {
        FVar41.Data = local_1e0.Data.AllocatorInstance.Data;
      }
      uVar20 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar41.Data);
      *(undefined8 *)(lVar40 + 8) = uVar20;
    }
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"TotalHeaderSize",0);
    *(uint *)(lVar40 + 0x10) = uVar17;
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ImportCount",0);
    *(uint *)(lVar40 + 0x14) = uVar17;
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ExportCount",0);
    *(uint *)(lVar40 + 0x18) = uVar17;
    iVar16 = UE::Trace::IAnalyzer::FEventData::GetValue<int>(this_00,"Priority",0);
    *(int *)(lVar40 + 0x1c) = iVar16;
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    goto LAB_14d3ef34d;
  case 0xc:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"AsyncPackage",0);
    uVar38 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"RequestId",0);
    pTVar22 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
                      *)&this->ActiveAsyncPackagesMap,uVar30);
    if (((pTVar22 ==
          (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>
           *)0x0) ||
        (pFVar55 = *(FAsyncPackageState **)&pTVar22->field_0x8, pFVar55 == (FAsyncPackageState *)0x0
        )) && ((pTVar23 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                                  *)&this->ActiveLinkersMap,uVar30),
               pTVar23 ==
               (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>
                *)0x0 || ((*(longlong *)&pTVar23->field_0x8 == 0 ||
                          (pFVar55 = *(FAsyncPackageState **)(*(longlong *)&pTVar23->field_0x8 + 8),
                          pFVar55 == (FAsyncPackageState *)0x0)))))) {
      this->WarningCount = this->WarningCount + 1;
      if (this->WarningCount < 0x65) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
    if (uVar38 == 0) {
      iVar16 = (this->FakeRequestsStack).ArrayNum;
      if (iVar16 != 0) {
        if ((int)(iVar16 - 1U) < iVar16) {
          uVar18 = ~(iVar16 - 1U) >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          uVar14 = (*pcVar10)();
          return (bool)uVar14;
        }
        pFVar21 = *(FAsyncPackageState **)
                   ((this->FakeRequestsStack).AllocatorInstance.Data +
                   (longlong)(this->FakeRequestsStack).ArrayNum * 8 + -8);
        goto LAB_14d3eec12;
      }
    }
    else {
      pTVar37 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,0>,FDefaultSetAllocator>
                        *)&this->ActiveRequestsMap,uVar38);
      if (pTVar37 !=
          (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*> *)0x0
         ) {
        pFVar21 = *(FAsyncPackageState **)&pTVar37->field_0x8;
      }
LAB_14d3eec12:
      if (pFVar21 != (FAsyncPackageState *)0x0) {
        pIVar46 = this->Session;
        (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
        PackageRequestAssociation(this,param_3,pFVar55,(FRequestState *)pFVar21);
        goto LAB_14d3ef34d;
      }
    }
    this->WarningCount = this->WarningCount + 1;
    if (this->WarningCount < 0x65) {
      if (2 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    break;
  case 0xd:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"AsyncPackage",0);
    uVar38 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Linker",0);
    pTVar22 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
                      *)&this->ActiveAsyncPackagesMap,uVar30);
    if ((pTVar22 ==
         (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*> *
         )0x0) || (plVar54 = *(longlong **)&pTVar22->field_0x8, plVar54 == (longlong *)0x0)) {
      this->WarningCount = this->WarningCount + 1;
      if (this->WarningCount < 0x65) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
    else {
      pTVar23 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                        *)&this->ActiveLinkersMap,uVar38);
      if ((pTVar23 ==
           (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*> *
           )0x0) || (plVar9 = *(longlong **)&pTVar23->field_0x8, plVar9 == (longlong *)0x0)) {
        this->WarningCount = this->WarningCount + 1;
        if (this->WarningCount < 0x65) {
          if (2 < (byte)LogTraceServices._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
          if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
        }
      }
      else {
        if (*plVar9 != 0) {
          pIVar46 = this->Session;
          (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
          *(undefined8 *)(*plVar54 + 8) = *(undefined8 *)(*plVar9 + 8);
          lVar40 = *plVar54;
          uVar20 = *(undefined8 *)(*plVar9 + 0x18);
          *(undefined8 *)(lVar40 + 0x10) = *(undefined8 *)(*plVar9 + 0x10);
          *(undefined8 *)(lVar40 + 0x18) = uVar20;
          (**(code **)((longlong)*pIVar46 + 0xa8))(pIVar46);
        }
        plVar9[1] = (longlong)plVar54;
        plVar54[2] = (longlong)plVar9;
      }
    }
    break;
  case 0xe:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"AsyncPackage",0);
    uVar38 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       (this_00,"ImportedAsyncPackage",0);
    pTVar22 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
                      *)&this->ActiveAsyncPackagesMap,uVar30);
    local_310 = (FAsyncPackageState *)0x0;
    if ((pTVar22 ==
         (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*> *
         )0x0) ||
       (plVar54 = *(longlong **)&pTVar22->field_0x8, local_2d0 = plVar54, plVar54 == (longlong *)0x0
       )) {
      pTVar23 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                        *)&this->ActiveLinkersMap,uVar30);
      if ((pTVar23 ==
           (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*> *
           )0x0) || (*(longlong *)&pTVar23->field_0x8 == 0)) break;
      plVar54 = *(longlong **)(*(longlong *)&pTVar23->field_0x8 + 8);
      local_2d0 = plVar54;
      pTVar23 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                        *)&this->ActiveLinkersMap,uVar38);
      if ((pTVar23 !=
           (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*> *
           )0x0) && (*(longlong *)&pTVar23->field_0x8 != 0)) {
        pFVar21 = *(FAsyncPackageState **)(*(longlong *)&pTVar23->field_0x8 + 8);
        local_310 = pFVar21;
      }
      if (plVar54 == (longlong *)0x0) break;
    }
    else {
      pTVar22 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
                        *)&this->ActiveAsyncPackagesMap,uVar38);
      local_310 = pFVar21;
      if (pTVar22 !=
          (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>
           *)0x0) {
        pFVar21 = *(FAsyncPackageState **)&pTVar22->field_0x8;
        local_310 = pFVar21;
      }
    }
    if ((pFVar21 == (FAsyncPackageState *)0x0) ||
       (uVar17 = ((uint)((ulonglong)pFVar21 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar21 >> 4)) *
                 -0x7a143595, uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb, local_218 = pFVar21,
       iVar16 = TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
                ::
                FindIndexByHash<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_const_*>
                          ((TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
                            *)(plVar54 + 3),uVar17 >> 0x10 ^ uVar17,&local_218), iVar16 != -1))
    break;
    TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
    ::Emplace<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*_const_&>
              ((TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
                *)(plVar54 + 3),(FAsyncPackageState **)(local_238 + 0xc),(bool *)&local_310);
    TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
    ::Emplace<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*_const_&>
              (&pFVar21->ImportedByAsyncPackages,(FAsyncPackageState **)local_228,(bool *)&local_2d0
              );
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    lVar40 = *plVar54;
    if ((*(FAsyncPackageState **)(lVar40 + 0x20) <= pFVar21) &&
       ((pFVar21 < (FAsyncPackageState *)
                   ((longlong)
                    (&((*(FAsyncPackageState **)(lVar40 + 0x20))->ImportedAsyncPackages).Hash + -5)
                   + (longlong)*(int *)(lVar40 + 0x2c) * 8) &&
        (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar13)))) {
      pcVar10 = (code *)swi(3);
      uVar14 = (*pcVar10)();
      return (bool)uVar14;
    }
    iVar16 = *(int *)(lVar40 + 0x28);
    if (iVar16 == *(int *)(lVar40 + 0x2c)) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)(lVar40 + 0x20),(int *)(lVar40 + 0x2c));
    }
    *(int *)(lVar40 + 0x28) = iVar16 + 1;
    *(FPackageInfo **)(*(longlong *)(lVar40 + 0x20) + (longlong)iVar16 * 8) = pFVar21->PackageInfo;
    if ((FRequestState *)plVar54[1] != (FRequestState *)0x0) {
      PackageRequestAssociation(this,param_3,pFVar21,(FRequestState *)plVar54[1]);
    }
    goto LAB_14d3ef34d;
  case 0xf:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"AsyncPackage",0);
    pFVar25 = (FPackageInfo *)0x0;
    pTVar22 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
                      *)&this->ActiveAsyncPackagesMap,uVar30);
    if ((pTVar22 ==
         (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*> *
         )0x0) || (*(longlong **)&pTVar22->field_0x8 == (longlong *)0x0)) {
      pTVar23 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                        *)&this->ActiveLinkersMap,uVar30);
      if ((pTVar23 ==
           (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*> *
           )0x0) ||
         (pFVar6 = *(FLinkerLoadState **)&pTVar23->field_0x8, pFVar6 == (FLinkerLoadState *)0x0)) {
        this->WarningCount = this->WarningCount + 1;
        if (this->WarningCount < 0x65) {
          if (2 < (byte)LogTraceServices._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
          if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
            pFVar39 = &::LOG_Static;
            goto LAB_14d3ec853;
          }
        }
      }
      else if (pFVar6->AsyncPackage == (FAsyncPackageState *)0x0) {
        pIVar46 = this->Session;
        (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
        pFVar25 = FLoadTimeProfilerProvider::CreatePackage(this->LoadTimeProfilerProvider);
        (**(code **)((longlong)*pIVar46 + 0xa8))(pIVar46);
        pFVar55 = ::operator_new(0xb8);
        if (pFVar55 != (FAsyncPackageState *)0x0) {
          memset(pFVar55,0,0xb8);
          pFVar21 = FAsyncPackageState::FAsyncPackageState(pFVar55);
        }
        pFVar21->PackageInfo = pFVar25;
        pFVar21->Linker = pFVar6;
        pFVar6->PackageInfo = pFVar25;
        pFVar6->AsyncPackage = pFVar21;
        pFVar6->bHasFakeAsyncPackageState = true;
      }
      else {
        pFVar25 = pFVar6->AsyncPackage->PackageInfo;
        pFVar6->PackageInfo = pFVar25;
        if ((pFVar25 == (FPackageInfo *)0x0) &&
           (this->WarningCount = this->WarningCount + 1, this->WarningCount < 0x65)) {
          if (2 < (byte)LogTraceServices._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
          if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
            pFVar39 = &::LOG_Static;
            goto LAB_14d3ec853;
          }
        }
      }
    }
    else {
      pFVar25 = (FPackageInfo *)**(longlong **)&pTVar22->field_0x8;
      if ((pFVar25 == (FPackageInfo *)0x0) &&
         (this->WarningCount = this->WarningCount + 1, this->WarningCount < 0x65)) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u__LoadTime__Unkn_152b0cd38,
                     (FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
          pFVar39 = &::LOG_Static;
LAB_14d3ec853:
          UE::Logging::Private::BasicLog<3>(pFVar39,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       (param_3->EventData,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar17 | uVar18);
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    pFVar50 = pFVar29->CpuScopeStack + pFVar29->CpuScopeStackDepth;
    pFVar29->CpuScopeStackDepth = pFVar29->CpuScopeStackDepth + 1;
    (pFVar50->Event).Export = (FPackageExportInfo *)0x0;
    (pFVar50->Event).Package = pFVar25;
    (pFVar50->Event).EventType = LoadTimeProfilerObjectEventType_None;
    pFVar24 = (pFVar50->Event).Export;
    plVar54 = &pFVar29->CpuTimeline->_padding_;
    (pFVar29->CurrentEvent).Package = (pFVar50->Event).Package;
    (pFVar29->CurrentEvent).Export = pFVar24;
    uVar60 = *(undefined4 *)&(pFVar50->Event).field_0x14;
    (pFVar29->CurrentEvent).EventType = (pFVar50->Event).EventType;
    *(undefined4 *)&(pFVar29->CurrentEvent).field_0x14 = uVar60;
    (**(code **)(*plVar54 + 8))(plVar54,uVar58);
    goto LAB_14d3ef33d;
  case 0x10:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar17 | uVar18);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar60 = (undefined4)((ulonglong)dVar59 >> 0x20);
    if (pFVar29->CpuScopeStackDepth == 0) {
      this->ErrorCount = this->ErrorCount + 1;
      if (this->ErrorCount < 0x65) {
        if (1 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->ErrorCount == 100) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
    if (pFVar29->CpuScopeStack[pFVar29->CpuScopeStackDepth - 1].Event.EventType !=
        LoadTimeProfilerObjectEventType_None) {
      this->ErrorCount = this->ErrorCount + 1;
      if (this->ErrorCount < 0x65) {
        if (1 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->ErrorCount == 100) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
    goto LAB_14d3ef31f;
  case 0x11:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    local_318 = GetThreadState(this,uVar18 | uVar17);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"AsyncPackage",0);
    pTVar22 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,FDefaultSetAllocator>
                      *)&this->ActiveAsyncPackagesMap,uVar30);
    pFVar55 = pFVar21;
    if ((pTVar22 ==
         (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*> *
         )0x0) ||
       (pFVar55 = *(FAsyncPackageState **)&pTVar22->field_0x8, pFVar55 == (FAsyncPackageState *)0x0)
       ) {
      if (uVar30 == 0) {
        uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Linker",0);
      }
      pTVar23 = TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>,FDefaultSetAllocator>
                        *)&this->ActiveLinkersMap,uVar30);
      if ((pTVar23 !=
           (TTuple<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*> *
           )0x0) &&
         (pFVar21 = *(FAsyncPackageState **)&pTVar23->field_0x8,
         pFVar21 != (FAsyncPackageState *)0x0)) {
        pFVar55 = (FAsyncPackageState *)pFVar21->Request;
      }
    }
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    pFVar24 = FLoadTimeProfilerProvider::CreateExport(this->LoadTimeProfilerProvider);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"SerialSize",0);
    pFVar24->SerialSize = uVar30;
    if (pFVar55 == (FAsyncPackageState *)0x0) {
      if (pFVar21 == (FAsyncPackageState *)0x0) {
        this->WarningCount = this->WarningCount + 1;
        if (this->WarningCount < 0x65) {
          if (2 < (byte)LogTraceServices._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
          if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
            pFVar39 = &::LOG_Static;
            goto LAB_14d3ece17;
          }
        }
      }
      else {
        pFVar25 = pFVar21->PackageInfo;
        if (pFVar25 == (FPackageInfo *)0x0) {
          this->WarningCount = this->WarningCount + 1;
          if (this->WarningCount < 0x65) {
            if (2 < (byte)LogTraceServices._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices)
              ;
            }
            if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices)
              ;
            }
          }
          if (this->UnknownPackageInfo == (FPackageInfo *)0x0) {
            pFVar25 = FLoadTimeProfilerProvider::CreatePackage(this->LoadTimeProfilerProvider);
            this->UnknownPackageInfo = pFVar25;
            pwVar26 = (wchar_t *)
                      (**(code **)((longlong)*this->Session + 0xd0))(this->Session,L"[unknown]");
            this->UnknownPackageInfo->Name = pwVar26;
          }
          pFVar25 = this->UnknownPackageInfo;
          pFVar21->PackageInfo = pFVar25;
        }
        pFVar49 = (pFVar25->Exports).AllocatorInstance.Data;
        local_2f8 = pFVar24;
        if (((pFVar49 <= (FScriptContainerElement *)&local_2f8) &&
            ((FScriptContainerElement *)&local_2f8 <
             pFVar49 + (longlong)(pFVar25->Exports).ArrayMax * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          uVar14 = (*pcVar10)();
          return (bool)uVar14;
        }
        iVar16 = (pFVar25->Exports).ArrayNum;
        piVar1 = &(pFVar25->Exports).ArrayMax;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(pFVar25->Exports).AllocatorInstance,piVar1);
        }
        (pFVar25->Exports).ArrayNum = iVar16 + 1;
        *(FPackageExportInfo **)((pFVar25->Exports).AllocatorInstance.Data + (longlong)iVar16 * 8) =
             local_2f8;
        pFVar24->Package = pFVar21->PackageInfo;
      }
    }
    else {
      pFVar25 = pFVar55->PackageInfo;
      if (pFVar25 == (FPackageInfo *)0x0) {
        this->WarningCount = this->WarningCount + 1;
        if (this->WarningCount < 0x65) {
          if (2 < (byte)LogTraceServices._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
          if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
            pFVar39 = &::LOG_Static;
LAB_14d3ece17:
            UE::Logging::Private::BasicLog<3>(pFVar39,(FLogCategoryBase *)&LogTraceServices);
          }
        }
      }
      else {
        pFVar49 = (pFVar25->Exports).AllocatorInstance.Data;
        local_300 = pFVar24;
        if (((pFVar49 <= (FScriptContainerElement *)&local_300) &&
            ((FScriptContainerElement *)&local_300 <
             pFVar49 + (longlong)(pFVar25->Exports).ArrayMax * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          uVar14 = (*pcVar10)();
          return (bool)uVar14;
        }
        iVar16 = (pFVar25->Exports).ArrayNum;
        piVar1 = &(pFVar25->Exports).ArrayMax;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(pFVar25->Exports).AllocatorInstance,piVar1);
        }
        (pFVar25->Exports).ArrayNum = iVar16 + 1;
        *(FPackageExportInfo **)((pFVar25->Exports).AllocatorInstance.Data + (longlong)iVar16 * 8) =
             local_300;
        pFVar24->Package = pFVar25;
      }
    }
    pFVar50 = local_318->CpuScopeStack + local_318->CpuScopeStackDepth;
    local_318->CpuScopeStackDepth = local_318->CpuScopeStackDepth + 1;
    (pFVar50->Event).Export = pFVar24;
    (pFVar50->Event).Package = pFVar24->Package;
    ((FPackageSummaryInfo *)&(pFVar50->Event).EventType)->TotalHeaderSize = 0;
    pFVar24 = (pFVar50->Event).Export;
    plVar54 = &local_318->CpuTimeline->_padding_;
    (local_318->CurrentEvent).Package = (pFVar50->Event).Package;
    (local_318->CurrentEvent).Export = pFVar24;
    uVar17 = *(uint *)&(pFVar50->Event).field_0x14;
    (local_318->CurrentEvent).EventType = (pFVar50->Event).EventType;
    *(uint *)&(local_318->CurrentEvent).field_0x14 = uVar17;
    (**(code **)(*plVar54 + 8))(plVar54,uVar58);
    goto LAB_14d3ef33d;
  case 0x12:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar18 | uVar17);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar60 = (undefined4)((ulonglong)dVar59 >> 0x20);
    local_1a0 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Object",0);
    if (pFVar29->CpuScopeStackDepth == 0) {
      this->ErrorCount = this->ErrorCount + 1;
      if (this->ErrorCount < 0x65) {
        if (1 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->ErrorCount == 100) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
    if (pFVar29->CpuScopeStack[pFVar29->CpuScopeStackDepth - 1].Event.EventType !=
        LoadTimeProfilerObjectEventType_Create) {
      this->ErrorCount = this->ErrorCount + 1;
      if (this->ErrorCount < 0x65) {
        if (1 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->ErrorCount == 100) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    if (pFVar29->CpuScopeStackDepth == 0) {
      local_2f0 = (FPackageExportInfo *)0x0;
LAB_14d3ed07d:
      this->WarningCount = this->WarningCount + 1;
      if (this->WarningCount < 0x65) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
    else {
      local_2f0 = pFVar29->CpuScopeStack[pFVar29->CpuScopeStackDepth - 1].Event.Export;
      if (local_2f0 == (FPackageExportInfo *)0x0) goto LAB_14d3ed07d;
      local_e8 = &local_1a0;
      local_e0 = &local_2f0;
      TSet<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FPackageExportInfo_*>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FPackageExportInfo_*_const_&>_>
                ((TSet<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FPackageExportInfo_*>,FDefaultSetAllocator>
                  *)&this->ExportsMap,
                 (TPairInitializer<unsigned___int64_const_&,TraceServices::FPackageExportInfo_*_const_&>
                  *)local_240,(bool *)&local_e8);
      uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Class",0);
      ppFVar27 = TMapBase<unsigned___int64,TraceServices::FClassInfo_const_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FClassInfo_const_*>_>
                 ::Find((TMapBase<unsigned___int64,TraceServices::FClassInfo_const_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FClassInfo_const_*>_>
                         *)&this->ClassInfosMap,uVar30);
      if (ppFVar27 != (FClassInfo **)0x0) {
        pFVar21 = (FAsyncPackageState *)*ppFVar27;
      }
      local_2f0->Class = (FClassInfo *)pFVar21;
    }
    goto LAB_14d3ef335;
  case 0x13:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar18 | uVar17);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Object",0);
    pTVar28 = TSet<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FPackageExportInfo_*>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FPackageExportInfo_*>,FDefaultSetAllocator>
                      *)&this->ExportsMap,uVar30);
    pIVar46 = this->Session;
    if (pTVar28 == (TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*> *)0x0) {
      (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
      pFVar50 = pFVar29->CpuScopeStack + pFVar29->CpuScopeStackDepth;
      pFVar29->CpuScopeStackDepth = pFVar29->CpuScopeStackDepth + 1;
      (pFVar50->Event).Export = (FPackageExportInfo *)0x0;
    }
    else {
      pFVar24 = *(FPackageExportInfo **)&pTVar28->field_0x8;
      (**(code **)((longlong)*pIVar46 + 0xa0))();
      if (pFVar24 != (FPackageExportInfo *)0x0) {
        uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                           (this_00,"SerialSize",0);
        if (uVar30 != 0) {
          pFVar24->SerialSize = uVar30;
        }
        if (pFVar24->Package != (FPackageInfo *)0x0) {
          puVar2 = &pFVar24->Package->TotalExportsSerialSize;
          *puVar2 = *puVar2 + uVar30;
          pFVar50 = pFVar29->CpuScopeStack + pFVar29->CpuScopeStackDepth;
          pFVar29->CpuScopeStackDepth = pFVar29->CpuScopeStackDepth + 1;
          (pFVar50->Event).Export = pFVar24;
          pFVar55 = (FAsyncPackageState *)pFVar24->Package;
          goto LAB_14d3ed22a;
        }
      }
      pFVar50 = pFVar29->CpuScopeStack + pFVar29->CpuScopeStackDepth;
      pFVar29->CpuScopeStackDepth = pFVar29->CpuScopeStackDepth + 1;
      (pFVar50->Event).Export = pFVar24;
      pFVar55 = pFVar21;
      if (pFVar24 != (FPackageExportInfo *)0x0) {
        pFVar55 = (FAsyncPackageState *)pFVar24->Package;
      }
    }
LAB_14d3ed22a:
    (pFVar50->Event).Package = (FPackageInfo *)pFVar55;
    (pFVar50->Event).EventType = LoadTimeProfilerObjectEventType_Serialize;
    pFVar24 = (pFVar50->Event).Export;
    plVar54 = &pFVar29->CpuTimeline->_padding_;
    (pFVar29->CurrentEvent).Package = (pFVar50->Event).Package;
    (pFVar29->CurrentEvent).Export = pFVar24;
    uVar60 = *(undefined4 *)&(pFVar50->Event).field_0x14;
    (pFVar29->CurrentEvent).EventType = (pFVar50->Event).EventType;
    *(undefined4 *)&(pFVar29->CurrentEvent).field_0x14 = uVar60;
    (**(code **)(*plVar54 + 8))(plVar54,uVar58);
    goto LAB_14d3ef33d;
  case 0x14:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar18 | uVar17);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar60 = (undefined4)((ulonglong)dVar59 >> 0x20);
    if (pFVar29->CpuScopeStackDepth == 0) {
      this->ErrorCount = this->ErrorCount + 1;
      if (this->ErrorCount < 0x65) {
        if (1 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->ErrorCount == 100) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
    if (pFVar29->CpuScopeStack[pFVar29->CpuScopeStackDepth - 1].Event.EventType !=
        LoadTimeProfilerObjectEventType_Serialize) {
      this->ErrorCount = this->ErrorCount + 1;
      if (this->ErrorCount < 0x65) {
        if (1 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->ErrorCount == 100) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
    goto LAB_14d3ef31f;
  case 0x15:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar18 | uVar17);
    pFVar29->PostLoadScopeDepth = pFVar29->PostLoadScopeDepth + 1;
    break;
  case 0x16:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar18 | uVar17);
    if (pFVar29->PostLoadScopeDepth < 1) {
      this->WarningCount = this->WarningCount + 1;
      if (this->WarningCount < 0x65) {
        if (2 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
    else {
      pFVar29->PostLoadScopeDepth = pFVar29->PostLoadScopeDepth + -1;
    }
    break;
  case 0x17:
  case 0x1e:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar17 | uVar18);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Object",0);
    if ((param_1 == 0x17) && (pFVar29->PostLoadScopeDepth == 0)) break;
    pTVar28 = TSet<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FPackageExportInfo_*>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FPackageExportInfo_*>,FDefaultSetAllocator>
                      *)&this->ExportsMap,uVar30);
    pFVar55 = pFVar21;
    if (pTVar28 != (TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*> *)0x0) {
      pFVar55 = *(FAsyncPackageState **)&pTVar28->field_0x8;
    }
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    pFVar50 = pFVar29->CpuScopeStack + pFVar29->CpuScopeStackDepth;
    pFVar29->CpuScopeStackDepth = pFVar29->CpuScopeStackDepth + 1;
    (pFVar50->Event).Export = (FPackageExportInfo *)pFVar55;
    if (pFVar55 != (FAsyncPackageState *)0x0) {
      pFVar21 = *(FAsyncPackageState **)&(pFVar55->ImportedAsyncPackages).Elements;
    }
    (pFVar50->Event).EventType = LoadTimeProfilerObjectEventType_PostLoad;
    goto LAB_14d3ed57e;
  case 0x18:
  case 0x1f:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar17 | uVar18);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar60 = (undefined4)((ulonglong)dVar59 >> 0x20);
    if ((param_1 == 0x18) && (pFVar29->PostLoadScopeDepth == 0)) break;
    if (pFVar29->CpuScopeStackDepth == 0) {
      this->ErrorCount = this->ErrorCount + 1;
      if (this->ErrorCount < 0x65) {
        if (1 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->ErrorCount == 100) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
    if (pFVar29->CpuScopeStack[pFVar29->CpuScopeStackDepth - 1].Event.EventType !=
        LoadTimeProfilerObjectEventType_PostLoad) {
      this->ErrorCount = this->ErrorCount + 1;
      if (this->ErrorCount < 0x65) {
        if (1 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->ErrorCount == 100) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
    goto LAB_14d3ef31f;
  case 0x19:
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    local_210 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Class",0);
    FTraceAnalyzerUtils::LegacyAttachmentString<wchar_t>(&local_1b8,"Name",param_3);
    FVar41.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar41.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    local_208 = FLoadTimeProfilerProvider::AddClassInfo
                          (this->LoadTimeProfilerProvider,(wchar_t *)FVar41.Data);
    local_128 = &local_210;
    local_120 = &local_208;
    TSet<TTuple<unsigned___int64,TraceServices::FClassInfo_const_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FClassInfo_const_*>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FClassInfo_const_*_&&>_>
              ((TSet<TTuple<unsigned___int64,TraceServices::FClassInfo_const_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FClassInfo_const_*>,FDefaultSetAllocator>
                *)&this->ClassInfosMap,
               (TPairInitializer<unsigned___int64_const_&,TraceServices::FClassInfo_const_*_&&> *)
               (local_228 + 4),(bool *)&local_128);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    goto LAB_14d3ef34d;
  case 0x1a:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    local_248 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"BatchId",0);
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    local_200 = FLoadTimeProfilerProvider::BeginIoDispatcherBatch
                          (this->LoadTimeProfilerProvider,local_248,dVar59);
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar59,0));
    (**(code **)((longlong)*pIVar46 + 0xa8))(pIVar46);
    local_118 = &local_248;
    local_110 = &local_200;
    TSet<TTuple<unsigned___int64,unsigned___int64>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<unsigned___int64>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned___int64_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned___int64>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<unsigned___int64>,FDefaultSetAllocator>
                *)&this->ActiveBatchesMap,
               (TPairInitializer<unsigned___int64_const_&,unsigned___int64_const_&> *)local_220,
               (bool *)&local_118);
    break;
  case 0x1b:
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"BatchId",0);
    uVar38 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"TotalSize",0);
    uVar17 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    if (*(int *)&(this->ActiveBatchesMap).field_0x8 != *(int *)&(this->ActiveBatchesMap).field_0x34)
    {
      puVar42 = *(undefined1 **)&(this->ActiveBatchesMap).field_0x40;
      if (puVar42 == (undefined1 *)0x0) {
        puVar42 = &(this->ActiveBatchesMap).field_0x38;
      }
      iVar16 = *(int *)(puVar42 +
                       (ulonglong)
                       (*(int *)&(this->ActiveBatchesMap).field_0x48 - 1U &
                       (uVar17 >> 0x10 ^ uVar17)) * 4);
      if (iVar16 != -1) {
        do {
          lVar40 = *(longlong *)&this->ActiveBatchesMap + (longlong)iVar16 * 0x18;
          if (*(ulong64 *)(*(longlong *)&this->ActiveBatchesMap + (longlong)iVar16 * 0x18) == uVar30
             ) {
            pFVar55 = (FAsyncPackageState *)(lVar40 + 8);
            if (lVar40 == 0) {
              pFVar55 = pFVar21;
            }
            if (pFVar55 != (FAsyncPackageState *)0x0) {
              pIVar46 = this->Session;
              (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
              FLoadTimeProfilerProvider::EndIoDispatcherBatch
                        (this->LoadTimeProfilerProvider,(ulong64)pFVar55->PackageInfo,dVar59,uVar38)
              ;
              goto LAB_14d3ef33d;
            }
            break;
          }
          iVar16 = *(int *)(lVar40 + 0x10);
        } while (iVar16 != -1);
      }
    }
    this->WarningCount = this->WarningCount + 1;
    if (this->WarningCount < 0x65) {
      if (2 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      if ((this->WarningCount == 100) && (2 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    break;
  case 0x1c:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar17 | uVar18);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Object",0);
    bVar15 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"EventType",'\0');
    pTVar28 = TSet<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FPackageExportInfo_*>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*>,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FPackageExportInfo_*>,FDefaultSetAllocator>
                      *)&this->ExportsMap,uVar30);
    pFVar55 = pFVar21;
    if (pTVar28 != (TTuple<unsigned___int64,TraceServices::FPackageExportInfo_*> *)0x0) {
      pFVar55 = *(FAsyncPackageState **)&pTVar28->field_0x8;
    }
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
    pFVar50 = pFVar29->CpuScopeStack + pFVar29->CpuScopeStackDepth;
    pFVar29->CpuScopeStackDepth = pFVar29->CpuScopeStackDepth + 1;
    (pFVar50->Event).Export = (FPackageExportInfo *)pFVar55;
    if (pFVar55 != (FAsyncPackageState *)0x0) {
      pFVar21 = *(FAsyncPackageState **)&(pFVar55->ImportedAsyncPackages).Elements;
    }
    (pFVar50->Event).EventType = (uint)bVar15;
LAB_14d3ed57e:
    (pFVar50->Event).Package = (FPackageInfo *)pFVar21;
    pFVar24 = (pFVar50->Event).Export;
    (pFVar29->CurrentEvent).Package = (pFVar50->Event).Package;
    (pFVar29->CurrentEvent).Export = pFVar24;
    uVar60 = *(undefined4 *)&(pFVar50->Event).field_0x14;
    (pFVar29->CurrentEvent).EventType = (pFVar50->Event).EventType;
    *(undefined4 *)&(pFVar29->CurrentEvent).field_0x14 = uVar60;
    plVar54 = &pFVar29->CpuTimeline->_padding_;
    (**(code **)(*plVar54 + 8))(plVar54,uVar58);
    goto LAB_14d3ef33d;
  case 0x1d:
    uVar17 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar17 == 0) {
      uVar18 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar18 = 0x70000000;
    }
    pFVar29 = GetThreadState(this,uVar17 | uVar18);
    uVar30 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar59 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar30);
    uVar58 = SUB84(dVar59,0);
    uVar60 = (undefined4)((ulonglong)dVar59 >> 0x20);
    if (pFVar29->CpuScopeStackDepth == 0) {
      this->ErrorCount = this->ErrorCount + 1;
      if (this->ErrorCount < 0x65) {
        if (1 < (byte)LogTraceServices._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
        if ((this->ErrorCount == 100) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
      break;
    }
LAB_14d3ef31f:
    pIVar46 = this->Session;
    (**(code **)((longlong)*pIVar46 + 0xa0))(pIVar46);
LAB_14d3ef335:
    FThreadState::LeaveScope(pFVar29,(double)CONCAT44(uVar60,uVar58));
LAB_14d3ef33d:
    (**(code **)((longlong)*this->Session + 0x38))(this->Session,uVar58);
LAB_14d3ef34d:
    (**(code **)((longlong)*pIVar46 + 0xa8))(pIVar46);
  }
  FMemScope::~FMemScope(&local_1f8);
  FLLMScope::~FLLMScope(local_308);
  return true;
}

// PackageRequestAssociation @ 14d3fb0a0

void __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::PackageRequestAssociation
          (FAsyncLoadingTraceAnalyzer *this,FOnEventContext *param_1,FAsyncPackageState *param_2,
          FRequestState *param_3)

{
  int *piVar1;
  TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  IAnalysisSession *pIVar7;
  FRequestGroupState *pFVar8;
  FAsyncPackageState *pFVar9;
  code *pcVar10;
  double dVar11;
  FAsyncPackageState *pFVar12;
  TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
  *pTVar13;
  bool bVar14;
  int iVar15;
  FLoadRequest *pFVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  FAsyncPackageState *local_res18;
  undefined1 local_c8 [4];
  int local_c4;
  TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TSet<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,DefaultKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,0>,FDefaultSetAllocator>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  if (param_2->Request == (FRequestState *)0x0) {
    pFVar6 = (param_3->AsyncPackages).AllocatorInstance.Data;
    local_res18 = param_2;
    if (((pFVar6 <= (FScriptContainerElement *)&local_res18) &&
        ((FScriptContainerElement *)&local_res18 <
         pFVar6 + (longlong)(param_3->AsyncPackages).ArrayMax * 8)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar15 = (param_3->AsyncPackages).ArrayNum;
    piVar1 = &(param_3->AsyncPackages).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(param_3->AsyncPackages).AllocatorInstance,piVar1);
    }
    (param_3->AsyncPackages).ArrayNum = iVar15 + 1;
    *(FAsyncPackageState **)((param_3->AsyncPackages).AllocatorInstance.Data + (longlong)iVar15 * 8)
         = local_res18;
    local_res18->Request = param_3;
    if (((param_3->Group).Object == (FRequestGroupState *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar16 = ((param_3->Group).Object)->LoadRequest;
    if (pFVar16 == (FLoadRequest *)0x0) {
      pFVar16 = FLoadTimeProfilerProvider::CreateRequest(this->LoadTimeProfilerProvider);
      dVar11 = UE::Trace::IAnalyzer::FEventTime::AsSeconds
                         (param_1->EventTime,param_3->WallTimeStartCycle);
      pFVar16->StartTime = dVar11;
      pFVar16->EndTime = INFINITY;
      pIVar7 = this->Session;
      pcVar10 = *(code **)((longlong)*pIVar7 + 0xd0);
      if (((param_3->Group).Object == (FRequestGroupState *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (param_3->Group).Object;
      if ((pFVar8->Name).Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar8->Name).Data.AllocatorInstance.Data;
      }
      pwVar17 = (wchar_t *)(*pcVar10)(pIVar7,pwVar17);
      pFVar16->Name = pwVar17;
      pFVar16->ThreadId = param_3->ThreadId;
      if (((param_3->Group).Object == (FRequestGroupState *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      ((param_3->Group).Object)->LoadRequest = pFVar16;
    }
    pFVar12 = local_res18;
    if (local_res18->PackageInfo != (FPackageInfo *)0x0) {
      pFVar9 = (FAsyncPackageState *)(pFVar16->Packages).AllocatorInstance.Data;
      if (((pFVar9 <= local_res18) &&
          (local_res18 <
           (FAsyncPackageState *)
           ((longlong)(&(pFVar9->ImportedAsyncPackages).Hash + -5) +
           (longlong)(pFVar16->Packages).ArrayMax * 8))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar15 = (pFVar16->Packages).ArrayNum;
      piVar1 = &(pFVar16->Packages).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(pFVar16->Packages).AllocatorInstance,piVar1);
      }
      (pFVar16->Packages).ArrayNum = iVar15 + 1;
      *(FPackageInfo **)((pFVar16->Packages).AllocatorInstance.Data + (longlong)iVar15 * 8) =
           pFVar12->PackageInfo;
      local_res18->PackageInfo->RequestId = pFVar16->Id;
    }
    pFVar12 = local_res18;
    iStack_b8 = 0;
    pTVar2 = &local_res18->ImportedAsyncPackages;
    iVar15 = *(int *)&(local_res18->ImportedAsyncPackages).Elements.field_0x28;
    puVar4 = &(local_res18->ImportedAsyncPackages).Elements.field_0x10;
    uStack_b4 = 1;
    local_a0 = 0;
    iStack_a4 = 0;
    if (iVar15 != 0) {
      puVar23 = *(uint **)&(local_res18->ImportedAsyncPackages).Elements.field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar4;
      }
      uVar21 = *puVar23;
      while (uVar21 == 0) {
        lVar18 = (longlong)iStack_b8;
        local_a0 = local_a0 + 0x20;
        iStack_b8 = iStack_b8 + 1;
        iStack_a4 = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14d3fb3bd;
        uVar21 = puVar23[lVar18 + 1];
      }
      uStack_b4 = -uVar21 & uVar21;
      uVar3 = (ulonglong)uStack_b4 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_c4 = (int)lVar18;
      iStack_a4 = local_a0 + -1 + local_c4;
      if (iVar15 < iStack_a4) {
        iStack_a4 = iVar15;
      }
    }
LAB_14d3fb3bd:
    uVar21 = *(uint *)&(local_res18->ImportedAsyncPackages).Elements.field_0x28;
    uStack_9c = local_44;
    uVar20 = uVar21 & 0xffffffe0;
    iStack_98 = *(int *)&(local_res18->ImportedAsyncPackages).Elements.field_0x8 -
                *(int *)&(local_res18->ImportedAsyncPackages).Elements.field_0x34;
    uStack_a8 = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
    TStack_88.CurrentBitIndex = iStack_a4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar21 >> 5;
    TStack_88._28_4_ = local_44;
    TStack_88.BaseBitIndex = local_a0;
    uStack_68 = CONCAT44(uStack_94,iStack_98);
    local_c0 = pTVar2;
    local_b0 = puVar4;
    local_90 = pTVar2;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
    if ((((int)uVar21 < 0) || (iVar15 < (int)uVar21)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar5 = *(uint *)&(pFVar12->ImportedAsyncPackages).Elements.field_0x28;
    if (uVar21 != uVar5) {
      puVar22 = *(undefined1 **)&(pFVar12->ImportedAsyncPackages).Elements.field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar4;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
      while (uVar21 == 0) {
        lVar18 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar21 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14d3fb4c1;
        uVar21 = *(uint *)(puVar22 + lVar18 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar21 = (int)lVar18 + -1 + uVar20;
      if ((int)uVar5 < (int)uVar21) {
        uVar21 = uVar5;
      }
    }
LAB_14d3fb4c1:
    while( true ) {
      pTVar13 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_c8);
      }
      if (((TStack_88.CurrentBitIndex == uVar21) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) &&
         (pTVar13 == pTVar2)) break;
      PackageRequestAssociation
                (this,param_1,
                 *(FAsyncPackageState **)
                  (*(longlong *)&pTVar13->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10),
                 param_3);
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
  }
  return;
}

