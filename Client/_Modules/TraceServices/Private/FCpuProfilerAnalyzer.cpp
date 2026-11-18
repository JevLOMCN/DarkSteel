// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 21

// FCpuProfilerAnalyzer @ 14d3cbef0

FCpuProfilerAnalyzer * __thiscall
TraceServices::FCpuProfilerAnalyzer::FCpuProfilerAnalyzer
          (FCpuProfilerAnalyzer *this,IAnalysisSession *param_1,
          IEditableTimingProfilerProvider *param_2,IEditableThreadProvider *param_3)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FCpuProfilerAnalyzer_TraceServices__6B_;
  *(undefined8 *)&this->ThreadStatesMap = 0;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x20 = 0;
  this->EditableTimingProfilerProvider = param_2;
  this->EditableThreadProvider = param_3;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x34 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x48 = 0;
  *(undefined8 *)&this->SpecIdToTimerIdMap = 0;
  *(undefined8 *)&(this->SpecIdToTimerIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->SpecIdToTimerIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpecIdToTimerIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x48 = 0;
  *(undefined8 *)&this->ScopeNameToTimerIdMap = 0;
  *(undefined8 *)&(this->ScopeNameToTimerIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->ScopeNameToTimerIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->ScopeNameToTimerIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->ScopeNameToTimerIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScopeNameToTimerIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->ScopeNameToTimerIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScopeNameToTimerIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->ScopeNameToTimerIdMap).field_0x48 = 0;
  *(undefined8 *)&this->MetadataIdToTimerIdMap = 0;
  *(undefined8 *)&(this->MetadataIdToTimerIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataIdToTimerIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataIdToTimerIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataIdToTimerIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataIdToTimerIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->MetadataIdToTimerIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetadataIdToTimerIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataIdToTimerIdMap).field_0x48 = 0;
  this->TotalEventSize = 0;
  this->TotalScopeCount = 0;
  this->BytesPerScope = 0.0;
  this->NumTimerWarnings = 0;
  this->CoroutineTimerId = 0xffffffff;
  this->CoroutineUnknownTimerId = 0xffffffff;
  this->MetadataUnknownTimerId = 0xffffffff;
  return this;
}

// ~FCpuProfilerAnalyzer @ 14d3d0150

void __thiscall
TraceServices::FCpuProfilerAnalyzer::~FCpuProfilerAnalyzer(FCpuProfilerAnalyzer *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->ThreadStatesMap).field_0x10;
  this->_padding_ = (longlong)&___7FCpuProfilerAnalyzer_TraceServices__6B_;
  iVar3 = *(int *)&(this->ThreadStatesMap).field_0x28;
  iVar14 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ThreadStatesMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d3d01fd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d3d01fd:
  uVar11 = *(uint *)&(this->ThreadStatesMap).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ThreadStatesMap).field_0x8 -
                       *(int *)&(this->ThreadStatesMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ThreadStatesMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ThreadStatesMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d3d0300;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14d3d0300:
  while( true ) {
    if (*(int *)&(this->ThreadStatesMap).field_0x8 - *(int *)&(this->ThreadStatesMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pvVar4 = *(void **)(*(longlong *)&this->ThreadStatesMap + 8 +
                       (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (pvVar4 != (void *)0x0) {
      if (*(void **)((longlong)pvVar4 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar4 + 0x18));
      }
      if (*(void **)((longlong)pvVar4 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar4 + 8));
      }
      ::operator_delete(pvVar4,0x50);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  *(undefined4 *)&(this->MetadataIdToTimerIdMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->MetadataIdToTimerIdMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetadataIdToTimerIdMap);
  *(undefined4 *)&(this->ScopeNameToTimerIdMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ScopeNameToTimerIdMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScopeNameToTimerIdMap);
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->SpecIdToTimerIdMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpecIdToTimerIdMap);
  *(undefined4 *)&(this->ThreadStatesMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ThreadStatesMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadStatesMap);
  return;
}

// AddCpuTimer @ 14d3d3360

uint __thiscall
TraceServices::FCpuProfilerAnalyzer::AddCpuTimer
          (FCpuProfilerAnalyzer *this,uint param_1,wchar_t *param_2,wchar_t *param_3,uint param_4)

{
  IEditableTimingProfilerProvider *pIVar1;
  code *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  uint local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> local_res18;
  wchar_t *local_38;
  uint *puStack_30;
  
  local_res10[0] = param_1;
  (**(code **)((longlong)*this->Session + 0xb0))();
  pIVar1 = this->EditableTimingProfilerProvider;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0xc0);
  uVar3 = 0;
  local_38 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_2);
    uVar3 = (undefined4)sVar4;
  }
  puStack_30 = (uint *)CONCAT44(puStack_30._4_4_,uVar3);
  local_res8[0] = (*pcVar2)(pIVar1,&local_38,param_3,param_4);
  local_38 = (wchar_t *)local_res10;
  puStack_30 = local_res8;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->SpecIdToTimerIdMap,&local_res18,(bool *)&local_38);
  return local_res8[0];
}

// DefineMergedTimer @ 14d3d75f0

uint __thiscall
TraceServices::FCpuProfilerAnalyzer::DefineMergedTimer
          (FCpuProfilerAnalyzer *this,uint param_1,wchar_t *param_2,wchar_t *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  IAnalysisSession *pIVar3;
  IEditableTimingProfilerProvider *pIVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  size_t sVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<unsigned___int64_&&,TraceServices::FCpuProfilerAnalyzer::FTimerInfo_&&>
  local_res18;
  uint local_78 [4];
  wchar_t **local_68;
  undefined8 uStack_60;
  wchar_t **local_58;
  undefined8 uStack_50;
  
  local_res10[0] = param_1;
  local_res18.Value = (FTimerInfo *)param_3;
  local_68 = (wchar_t **)param_2;
  if (*(int *)&(this->ScopeNameToTimerIdMap).field_0x8 !=
      *(int *)&(this->ScopeNameToTimerIdMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ScopeNameToTimerIdMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ScopeNameToTimerIdMap).field_0x38;
    }
    iVar6 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->ScopeNameToTimerIdMap).field_0x48 - 1U &
                    (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->ScopeNameToTimerIdMap).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(wchar_t **)(lVar2 + (longlong)iVar6 * 0x18) == param_2) {
          uVar12 = 0;
          puVar13 = (uint *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar13 = (uint *)0x0;
          }
          if (puVar13 != (uint *)0x0) {
            puVar13[1] = puVar13[1] + 1;
            if (*(int *)&(this->SpecIdToTimerIdMap).field_0x8 ==
                *(int *)&(this->SpecIdToTimerIdMap).field_0x34) goto LAB_14d3d7747;
            puVar11 = *(undefined1 **)&(this->SpecIdToTimerIdMap).field_0x40;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = &(this->SpecIdToTimerIdMap).field_0x38;
            }
            uVar7 = *(uint *)(puVar11 +
                             (ulonglong)
                             (*(int *)&(this->SpecIdToTimerIdMap).field_0x48 - 1U & param_1) * 4);
            if (uVar7 == 0xffffffff) goto LAB_14d3d7747;
            goto LAB_14d3d7730;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_res8[0] = DefineUniqueTimer(this,param_1,param_2,param_3,param_4);
  local_58 = (wchar_t **)&local_68;
  local_78[1] = 1;
  uStack_50 = local_78;
  local_78[0] = local_res8[0];
  TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_&&,TraceServices::FCpuProfilerAnalyzer::FTimerInfo_&&>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>
              *)&this->ScopeNameToTimerIdMap,&local_res18,(bool *)&local_58);
  return local_res8[0];
  while (uVar7 = puVar10[2], uVar7 != 0xffffffff) {
LAB_14d3d7730:
    puVar10 = (uint *)((longlong)(int)uVar7 * 0x10 + *(longlong *)&this->SpecIdToTimerIdMap);
    if (*puVar10 == param_1) {
      puVar8 = puVar10 + 1;
      if (puVar10 == (uint *)0x0) {
        puVar8 = (uint *)0x0;
      }
      if (puVar8 != (uint *)0x0) {
        pIVar3 = this->Session;
        local_res8[0] = *puVar8;
        (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3);
        uVar7 = local_res8[0];
        (**(code **)((longlong)*this->Session + 0xb0))();
        pIVar4 = this->EditableTimingProfilerProvider;
        pcVar5 = *(code **)((longlong)*pIVar4 + 0x38);
        if (param_2 != (wchar_t *)0x0) {
          sVar9 = wcslen(param_2);
          uVar12 = (undefined4)sVar9;
        }
        uStack_60 = (uint *)CONCAT44(uStack_60._4_4_,uVar12);
        local_58 = local_68;
        uStack_50 = (uint *)CONCAT44(uStack_60._4_4_,uVar12);
        (*pcVar5)(pIVar4,uVar7,&local_58);
        (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x48))
                  (this->EditableTimingProfilerProvider,local_res8[0],local_res18.Value,param_4);
        (**(code **)((longlong)*pIVar3 + 0xa8))(pIVar3);
        return local_res8[0];
      }
      break;
    }
  }
LAB_14d3d7747:
  local_res8[0] = *puVar13;
  local_68 = (wchar_t **)local_res10;
  uStack_60 = local_res8;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->SpecIdToTimerIdMap,
             (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)&local_res18,
             (bool *)&local_68);
  return local_res8[0];
}

// DefineUniqueTimer @ 14d3d79f0

uint __thiscall
TraceServices::FCpuProfilerAnalyzer::DefineUniqueTimer
          (FCpuProfilerAnalyzer *this,uint param_1,wchar_t *param_2,wchar_t *param_3,uint param_4)

{
  IAnalysisSession *pIVar1;
  IEditableTimingProfilerProvider *pIVar2;
  code *pcVar3;
  uint uVar4;
  uint *puVar5;
  size_t sVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  wchar_t *local_38;
  undefined4 uStack_30;
  
  if (*(int *)&(this->SpecIdToTimerIdMap).field_0x8 !=
      *(int *)&(this->SpecIdToTimerIdMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->SpecIdToTimerIdMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SpecIdToTimerIdMap).field_0x38;
    }
    uVar4 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->SpecIdToTimerIdMap).field_0x48 - 1U & param_1) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar4 * 0x10 + *(longlong *)&this->SpecIdToTimerIdMap);
        if (*puVar7 == param_1) {
          uVar8 = 0;
          puVar5 = puVar7 + 1;
          if (puVar7 == (uint *)0x0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 != (uint *)0x0) {
            pIVar1 = this->Session;
            uVar4 = *puVar5;
            (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
            (**(code **)((longlong)*this->Session + 0xb0))();
            pIVar2 = this->EditableTimingProfilerProvider;
            pcVar3 = *(code **)((longlong)*pIVar2 + 0x38);
            local_38 = param_2;
            if (param_2 != (wchar_t *)0x0) {
              sVar6 = wcslen(param_2);
              uVar8 = (undefined4)sVar6;
            }
            uStack_30 = uVar8;
            (*pcVar3)(pIVar2,uVar4,&local_38);
            (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x48))
                      (this->EditableTimingProfilerProvider,uVar4,param_3,param_4);
            (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
            return uVar4;
          }
          break;
        }
        uVar4 = puVar7[2];
      } while (uVar4 != 0xffffffff);
    }
  }
  pIVar1 = this->Session;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  uVar4 = AddCpuTimer(this,param_1,param_2,param_3,param_4);
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  return uVar4;
}

// DispatchPendingEvents @ 14d3d89a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FCpuProfilerAnalyzer::DispatchPendingEvents
          (FCpuProfilerAnalyzer *this,ulong64 *param_1,ulong64 param_2,FThreadState *param_3,
          FPendingEvent **param_4,int *param_5,bool param_6)

{
  double dVar1;
  int iVar2;
  ulonglong uVar3;
  IEditableTimeline<TraceServices::FTimingProfilerEvent> *pIVar4;
  ulonglong uVar5;
  uint local_res20 [2];
  
  iVar2 = *param_5;
  if (param_3->bShouldIgnorePendingEvents != false) {
    *param_4 = *param_4 + iVar2;
    *param_5 = 0;
    return;
  }
  do {
    if (iVar2 < 1) {
LAB_14d3d8ac2:
      param_3->LastCycle = *param_1;
      return;
    }
    uVar3 = (*param_4)->Cycle;
    uVar5 = ~uVar3;
    if (-1 < (longlong)uVar3) {
      uVar5 = uVar3;
    }
    if ((param_2 < uVar5) || ((uVar5 == param_2 && (!param_6)))) goto LAB_14d3d8ac2;
    if (uVar5 < *param_1) {
      param_3->bShouldIgnorePendingEvents = true;
      *param_4 = *param_4 + *param_5;
      *param_5 = 0;
      if (1 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      goto LAB_14d3d8ac2;
    }
    *param_1 = uVar5;
    pIVar4 = param_3->Timeline;
    dVar1 = (*param_4)->Time;
    if ((longlong)uVar3 < 0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,dVar1);
    }
    else {
      local_res20[0] = (*param_4)->TimerId;
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,dVar1,local_res20);
      this->TotalScopeCount = this->TotalScopeCount + 1;
    }
    *param_5 = *param_5 + -1;
    *param_4 = *param_4 + 1;
    iVar2 = *param_5;
  } while( true );
}

// DispatchRemainingPendingEvents @ 14d3d8ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FCpuProfilerAnalyzer::DispatchRemainingPendingEvents
          (FCpuProfilerAnalyzer *this,FThreadState *param_1)

{
  ulonglong uVar1;
  IEditableTimeline<TraceServices::FTimingProfilerEvent> *pIVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  
  iVar6 = (param_1->PendingEvents).ArrayNum;
  if (0 < iVar6) {
    uVar7 = param_1->LastCycle;
    pFVar8 = (param_1->PendingEvents).AllocatorInstance.Data;
    if (param_1->bShouldIgnorePendingEvents == false) {
      do {
        uVar1 = *(ulonglong *)pFVar8;
        uVar5 = ~uVar1;
        if (-1 < (longlong)uVar1) {
          uVar5 = uVar1;
        }
        if (uVar5 < uVar7) {
          iVar6 = 0;
          param_1->bShouldIgnorePendingEvents = true;
          if (1 < (byte)LogTraceServices._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
            param_1->LastCycle = uVar7;
            goto LAB_14d3d8ba8;
          }
          break;
        }
        pIVar2 = param_1->Timeline;
        if ((longlong)uVar1 < 0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,*(ulonglong *)(pFVar8 + 8));
        }
        else {
          (**(code **)((longlong)*pIVar2 + 8))();
          this->TotalScopeCount = this->TotalScopeCount + 1;
        }
        iVar6 = iVar6 + -1;
        pFVar8 = pFVar8 + 0x18;
        uVar7 = uVar5;
      } while (0 < iVar6);
      param_1->LastCycle = uVar7;
      if ((iVar6 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RemainingPending == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                             ,0x2c5,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
LAB_14d3d8ba8:
    (param_1->PendingEvents).ArrayNum = 0;
    if ((param_1->PendingEvents).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(param_1->PendingEvents).AllocatorInstance,0,
                 &(param_1->PendingEvents).ArrayMax);
    }
  }
  return;
}

// EndOpenEvents @ 14d3db940

void __thiscall
TraceServices::FCpuProfilerAnalyzer::EndOpenEvents
          (FCpuProfilerAnalyzer *this,FThreadState *param_1,double param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *_Dst;
  
  if ((param_1->ScopeStack).ArrayNum != 0) {
    do {
      if (((param_1->ScopeStack).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = (param_1->ScopeStack).ArrayNum;
      uVar1 = iVar3 - 1;
      _Dst = (param_1->ScopeStack).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
      iVar3 = ~uVar1 + iVar3;
      if (iVar3 != 0) {
        memmove(_Dst,_Dst + 0x10,(longlong)iVar3 << 4);
      }
      piVar2 = &(param_1->ScopeStack).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(param_1->ScopeStack).AllocatorInstance,(param_1->ScopeStack).ArrayNum,
                 &(param_1->ScopeStack).ArrayMax);
      (**(code **)((longlong)*param_1->Timeline + 0x10))(param_1->Timeline,SUB84(param_2,0));
    } while ((param_1->ScopeStack).ArrayNum != 0);
  }
  return;
}

// GetOrAddThreadState @ 14d3e0fe0

FThreadState * __thiscall
TraceServices::FCpuProfilerAnalyzer::GetOrAddThreadState(FCpuProfilerAnalyzer *this,uint param_1)

{
  longlong lVar1;
  IAnalysisSession *pIVar2;
  int iVar3;
  IEditableTimeline<TraceServices::FTimingProfilerEvent> *pIVar4;
  undefined1 *puVar5;
  TPairInitializer<unsigned_int_const_&,TraceServices::FCpuProfilerAnalyzer::FThreadState_*_const_&>
  local_res8;
  FThreadState *local_res18 [2];
  FThreadState ***local_28;
  FThreadState **local_20;
  
  if (*(int *)&(this->ThreadStatesMap).field_0x8 != *(int *)&(this->ThreadStatesMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ThreadStatesMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ThreadStatesMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ThreadStatesMap).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->ThreadStatesMap + (longlong)iVar3 * 0x18;
        if (*(uint *)(*(longlong *)&this->ThreadStatesMap + (longlong)iVar3 * 0x18) == param_1) {
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
  pIVar2 = this->Session;
  local_res8.Value._0_4_ = param_1;
  (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
  local_res18[0] = ::operator_new(0x50);
  if (local_res18[0] != (FThreadState *)0x0) {
    *(undefined8 *)local_res18[0] = 0;
    *(undefined4 *)&local_res18[0]->field_0x39 = 0;
    *(undefined2 *)&local_res18[0]->field_0x3d = 0;
    local_res18[0]->field_0x3f = 0;
    *(undefined8 *)&local_res18[0]->MetadataEventsDepth = 0;
    (local_res18[0]->ScopeStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_res18[0]->ScopeStack).ArrayNum = 0;
    (local_res18[0]->ScopeStack).ArrayMax = 0;
    (local_res18[0]->PendingEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_res18[0]->PendingEvents).ArrayNum = 0;
    (local_res18[0]->PendingEvents).ArrayMax = 0;
    local_res18[0]->Timeline = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
    local_res18[0]->LastCycle = 0;
    local_res18[0]->bShouldIgnorePendingEvents = false;
    local_res18[0]->LastPendingEventTime = 0.0;
  }
  local_res18[0]->ThreadId = (uint)local_res8.Value;
  pIVar4 = (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)
           (**(code **)((longlong)*this->EditableTimingProfilerProvider + 200))
                     (this->EditableTimingProfilerProvider,(uint)local_res8.Value);
  local_res18[0]->Timeline = pIVar4;
  local_28 = &local_res8.Value;
  local_20 = local_res18;
  TSet<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::FCpuProfilerAnalyzer::FThreadState_*_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
              *)&this->ThreadStatesMap,&local_res8,(bool *)&local_28);
  (**(code **)((longlong)*this->EditableThreadProvider + 0x20))
            (this->EditableThreadProvider,(uint)local_res8.Value,0,0);
  (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  return local_res18[0];
}

// GetOrAddTimer @ 14d3e1140

uint __thiscall
TraceServices::FCpuProfilerAnalyzer::GetOrAddTimer(FCpuProfilerAnalyzer *this,uint param_1)

{
  IAnalysisSession *pIVar1;
  IEditableTimingProfilerProvider *pIVar2;
  code *pcVar3;
  uint uVar4;
  uint *puVar5;
  size_t sVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint local_res8 [2];
  uint local_res10 [4];
  FString local_48;
  FScriptContainerElement *local_38;
  uint *puStack_30;
  
  uVar8 = 0;
  if (*(int *)&(this->SpecIdToTimerIdMap).field_0x8 !=
      *(int *)&(this->SpecIdToTimerIdMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->SpecIdToTimerIdMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SpecIdToTimerIdMap).field_0x38;
    }
    uVar4 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->SpecIdToTimerIdMap).field_0x48 - 1U & param_1) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x10 +
                         *(longlong *)&(this->SpecIdToTimerIdMap).field_0x0);
        if (*puVar5 == param_1) {
          puVar7 = puVar5 + 1;
          if (puVar5 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 != (uint *)0x0) {
            return *puVar7;
          }
          break;
        }
        uVar4 = puVar5[2];
      } while (uVar4 != 0xffffffff);
    }
  }
  pIVar1 = this->Session;
  (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1);
  ::FString::PrintfImpl(&local_48,L"<unknown %u>");
  local_38 = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    local_38 = local_48.Data.AllocatorInstance.Data;
  }
  local_res8[0] = param_1;
  (**(code **)((longlong)*this->Session + 0xb0))();
  pIVar2 = this->EditableTimingProfilerProvider;
  pcVar3 = *(code **)((longlong)*pIVar2 + 0xc0);
  if (local_38 != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen((wchar_t *)local_38);
    uVar8 = (undefined4)sVar6;
  }
  puStack_30 = (uint *)CONCAT44(puStack_30._4_4_,uVar8);
  local_res10[0] = (*pcVar3)(pIVar2,&local_38,0,0);
  local_38 = (FScriptContainerElement *)local_res8;
  puStack_30 = local_res10;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->SpecIdToTimerIdMap,
             (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)(local_res10 + 2),
             (bool *)&local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1);
  return local_res10[0];
}

// GetTimerName @ 14d3e3800

wchar_t * __thiscall
TraceServices::FCpuProfilerAnalyzer::GetTimerName(FCpuProfilerAnalyzer *this,uint param_1)

{
  longlong *plVar1;
  wchar_t *local_res8 [4];
  uint local_28 [2];
  wchar_t **local_20;
  code *local_18;
  uint *local_10;
  
  local_res8[0] = (wchar_t *)0x0;
  plVar1 = (longlong *)(**(code **)((longlong)*this->EditableTimingProfilerProvider + 0xd8))();
  if (plVar1 != (longlong *)0x0) {
    local_20 = local_res8;
    local_10 = local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FCpuProfilerAnalyzer::GetTimerName'::__l5::<lambda_1>,void,TraceServices::ITimingProfilerTimerReader_const_&>
               ::Call;
    local_28[0] = param_1;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  }
  return local_res8[0];
}

// OnAnalysisBegin @ 14d3e8680

void __thiscall
TraceServices::FCpuProfilerAnalyzer::OnAnalysisBegin
          (FCpuProfilerAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"CpuProfiler","EventSpec",0);
  (**(code **)*pFVar1)(pFVar1,1,"CpuProfiler","EndThread",0);
  (**(code **)*pFVar1)(pFVar1,2,"CpuProfiler","EventBatchV3",0);
  (**(code **)*pFVar1)(pFVar1,3,"CpuProfiler","EventBatchV2",0);
  (**(code **)*pFVar1)(pFVar1,4,"CpuProfiler","EventBatch",0);
  (**(code **)*pFVar1)(pFVar1,5,"CpuProfiler","EndCapture",0);
  (**(code **)*pFVar1)(pFVar1,7,"CpuProfiler","MetadataSpec",0);
  (**(code **)*pFVar1)(pFVar1,8,"CpuProfiler","Metadata",0);
                    /* WARNING: Could not recover jumptable at 0x00014d3e879f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pFVar1 + 8))(pFVar1,6,"Cpu",1);
  return;
}

// OnAnalysisEnd @ 14d3e9a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd(FCpuProfilerAnalyzer *this)

{
  ulonglong uVar1;
  TMap<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>_>
  *pTVar2;
  TMap<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>
  *pTVar3;
  int iVar4;
  uint uVar5;
  FThreadState *pFVar6;
  IAnalysisSession *pIVar7;
  void *pvVar8;
  code *pcVar9;
  double dVar10;
  TMap<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>_>
  *pTVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FLLMScope local_1c8 [2];
  ulonglong local_1c0;
  TMap<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>
  *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  undefined1 *local_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  TMap<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>_>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  FValueComparisonClass<_public:_virtual_void___cdecl_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd(void)_::_2_::<lambda_1>_>
  local_140;
  FMemScope local_138;
  TMap<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  TMap<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TMap<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined4 local_84;
  undefined4 local_64;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name72,L"Insights/FCpuProfilerAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_1c8,LLMScope_Name72,false,None,Default,true);
  FMemScope::FMemScope(&local_138,&LLMScope_Name72,true);
  pTVar2 = &this->ThreadStatesMap;
  iVar4 = *(int *)&(this->ThreadStatesMap).field_0x28;
  local_178 = &(this->ThreadStatesMap).field_0x10;
  iStack_180 = 0;
  local_1c0 = 1;
  local_168 = 0;
  uStack_17c = 1;
  iStack_16c = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ThreadStatesMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_178;
    }
    uStack_17c = *puVar20;
    local_168 = 0;
    while (uStack_17c == 0) {
      lVar13 = (longlong)iStack_180;
      local_168 = local_168 + 0x20;
      iStack_180 = iStack_180 + 1;
      uStack_17c = 1;
      iStack_16c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14d3e9b5d;
      uStack_17c = puVar20[lVar13 + 1];
    }
    uStack_17c = -uStack_17c & uStack_17c;
    uVar1 = (ulonglong)uStack_17c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_158 = (int)lVar13;
    iStack_16c = local_168 + -1 + local_158;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_14d3e9b5d:
  uVar17 = *(uint *)&(this->ThreadStatesMap).field_0x28;
  uStack_164 = local_84;
  iStack_160 = *(int *)&(this->ThreadStatesMap).field_0x8 -
               *(int *)&(this->ThreadStatesMap).field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_128._padding_ = CONCAT44(uStack_17c,iStack_180);
  uStack_170 = 0xffffffff;
  TStack_128.CurrentBitIndex = iStack_16c;
  TStack_128.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_128._28_4_ = local_84;
  TStack_128.BaseBitIndex = local_168;
  uStack_108 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_130 = pTVar2;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_178;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  dVar10 = __real_7ff0000000000000;
  uVar5 = *(uint *)&(this->ThreadStatesMap).field_0x28;
  if (uVar17 != uVar5) {
    puVar18 = *(undefined1 **)&(this->ThreadStatesMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->ThreadStatesMap).field_0x10;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d3e9c6d;
      uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_154 = (int)lVar13;
    uVar17 = local_154 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14d3e9c6d:
  while( true ) {
    pTVar11 = local_130;
    if (*(int *)&local_130->field_0x8 - *(int *)&local_130->field_0x34 != (int)uStack_108) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_128.CurrentBitIndex == uVar17) &&
        (TStack_128.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->ThreadStatesMap).field_0x10)) &&
       (pTVar11 == pTVar2)) break;
    pFVar6 = *(FThreadState **)
              (*(longlong *)pTVar11 + 8 + (longlong)TStack_128.CurrentBitIndex * 0x18);
    if (pFVar6->LastCycle != 0xffffffffffffffff) {
      pIVar7 = this->Session;
      (**(code **)((longlong)*pIVar7 + 0xa0))(pIVar7);
      DispatchRemainingPendingEvents(this,pFVar6);
      EndOpenEvents(this,pFVar6,dVar10);
      (**(code **)((longlong)*pIVar7 + 0xa8))(pIVar7);
    }
    if (((pFVar6->PendingEvents).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ThreadState.PendingEvents.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                            ,0x55,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((pFVar6->ScopeStack).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ThreadState.ScopeStack.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                            ,0x56,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  }
  local_140.Predicate.Predicate =
       (TDereferenceWrapper<TraceServices::FCpuProfilerAnalyzer::FTimerInfo,_public:_virtual_void___cdecl_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd(void)_::_2_::<lambda_1>_>
        )local_res18;
  pTVar3 = &this->ScopeNameToTimerIdMap;
  TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd_::__l2::<lambda_1>_>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>
              *)pTVar3,&local_140);
  puVar18 = &(this->ScopeNameToTimerIdMap).field_0x10;
  iVar4 = *(int *)&(this->ScopeNameToTimerIdMap).field_0x28;
  iVar14 = 0;
  iStack_1b0 = 0;
  local_198 = 0;
  uStack_1ac = (uint)local_1c0;
  iStack_19c = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ScopeNameToTimerIdMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar18;
    }
    uVar17 = *puVar20;
    local_198 = 0;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_1b0;
      local_198 = local_198 + 0x20;
      iStack_1b0 = iStack_1b0 + 1;
      iStack_19c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b0) goto LAB_14d3e9e1d;
      uVar17 = puVar20[lVar13 + 1];
    }
    uStack_1ac = -uVar17 & uVar17;
    uVar1 = (ulonglong)uStack_1ac * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_150 = (int)lVar13;
    iStack_19c = local_198 + -1 + local_150;
    if (iVar4 < iStack_19c) {
      iStack_19c = iVar4;
    }
  }
LAB_14d3e9e1d:
  uVar17 = *(uint *)&(this->ScopeNameToTimerIdMap).field_0x28;
  iStack_194 = local_64;
  iStack_190 = *(int *)&(this->ScopeNameToTimerIdMap).field_0x8 -
               *(int *)&(this->ScopeNameToTimerIdMap).field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  uStack_1a0 = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
  TStack_f8.CurrentBitIndex = iStack_19c;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_f8._28_4_ = local_64;
  TStack_f8.BaseBitIndex = local_198;
  uStack_d8 = CONCAT44(uStack_18c,iStack_190);
  local_1b8 = pTVar3;
  local_1a8 = puVar18;
  local_100 = pTVar3;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar18;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)&(this->ScopeNameToTimerIdMap).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(this->ScopeNameToTimerIdMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar18;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d3e9f2e;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_14c = (int)lVar13;
    uVar17 = (uVar16 - 1) + local_14c;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14d3e9f2e:
  bVar12 = false;
  while( true ) {
    pTVar3 = local_100;
    if (*(int *)(&local_100->field_0x0 + 8) - *(int *)(&local_100->field_0x0 + 0x34) !=
        (int)uStack_d8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((((TStack_f8.CurrentBitIndex == uVar17) &&
         (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) &&
        (pTVar3 == &this->ScopeNameToTimerIdMap)) ||
       (*(uint *)(*(longlong *)&pTVar3->field_0x0 + 0xc + (longlong)TStack_f8.CurrentBitIndex * 0x18
                 ) < 1000)) break;
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    bVar12 = true;
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  }
  if ((bVar12) && (2 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if ((this->NumTimerWarnings != 0) && (2 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (4 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  iVar4 = *(int *)&(this->ThreadStatesMap).field_0x28;
  local_1a8 = &(this->ThreadStatesMap).field_0x10;
  local_198 = 0;
  iStack_19c = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->ThreadStatesMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_1a8;
    }
    uVar17 = *puVar20;
    local_198 = 0;
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      local_198 = local_198 + 0x20;
      iVar14 = iVar14 + 1;
      iStack_19c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d3ea152;
      uVar17 = puVar20[lVar13 + 1];
    }
    local_1c0 = (ulonglong)(-uVar17 & uVar17);
    uVar1 = local_1c0 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_148 = (int)lVar13;
    iStack_19c = local_198 + -1 + local_148;
    if (iVar4 < iStack_19c) {
      iStack_19c = iVar4;
    }
  }
LAB_14d3ea152:
  uVar17 = *(uint *)&(this->ThreadStatesMap).field_0x28;
  pTVar2 = &this->ThreadStatesMap;
  uStack_1ac = (uint)local_1c0;
  iStack_194 = iStack_16c;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_190 = *(int *)&(this->ThreadStatesMap).field_0x8 -
               *(int *)&(this->ThreadStatesMap).field_0x34;
  puVar18 = &(this->ThreadStatesMap).field_0x10;
  uStack_1a0 = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_1ac,iVar14);
  TStack_c8.CurrentBitIndex = iStack_19c;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_c8._28_4_ = iStack_16c;
  TStack_c8.BaseBitIndex = local_198;
  uStack_a8 = CONCAT44(uStack_18c,iStack_190);
  local_1b8 = (TMap<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>
               *)pTVar2;
  iStack_1b0 = iVar14;
  local_d0 = pTVar2;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1a8;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)&(this->ThreadStatesMap).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(this->ThreadStatesMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar18;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d3ea270;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar17 = (uVar16 - 1) + (int)lVar13;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_14d3ea270:
  while( true ) {
    pTVar11 = local_d0;
    if (*(int *)(&local_d0->field_0x0 + 8) - *(int *)(&local_d0->field_0x0 + 0x34) != (int)uStack_a8
       ) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c8.CurrentBitIndex == uVar17) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) && (pTVar11 == pTVar2)
       ) break;
    pvVar8 = *(void **)(*(longlong *)&pTVar11->field_0x0 + 8 +
                       (longlong)TStack_c8.CurrentBitIndex * 0x18);
    if (pvVar8 != (void *)0x0) {
      if (*(void **)((longlong)pvVar8 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar8 + 0x18));
      }
      if (*(void **)((longlong)pvVar8 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar8 + 8));
      }
      ::operator_delete(pvVar8,0x50);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  TSet<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
           *)pTVar2);
  TSet<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCpuProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
            *)pTVar2);
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
           *)&this->SpecIdToTimerIdMap);
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            *)&this->SpecIdToTimerIdMap);
  TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>
           *)&this->ScopeNameToTimerIdMap);
  TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>
            *)&this->ScopeNameToTimerIdMap);
  FMemScope::~FMemScope(&local_138);
  FLLMScope::~FLLMScope(local_1c8);
  return;
}

// OnCpuScopeEnter @ 14d3eb120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::FCpuProfilerAnalyzer::OnCpuScopeEnter
          (FCpuProfilerAnalyzer *this,FOnEventContext *param_1)

{
  int *piVar1;
  IAnalysisSession *pIVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  FThreadState *pFVar11;
  FEventTypeInfo *pFVar12;
  uint *puVar13;
  char *_Str;
  size_t sVar14;
  ForAnyElementType FVar15;
  undefined1 auStackY_c8 [32];
  FString local_78;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_68;
  ulong64 local_58;
  double dStack_50;
  uint local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar10 = UE::Trace::IAnalyzer::FEventTime::GetTimestamp(param_1->EventTime);
  if (uVar10 != 0) {
    uVar8 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_1->ThreadInfo);
    pFVar11 = GetOrAddThreadState(this,uVar8);
    if (pFVar11->bShouldIgnorePendingEvents == false) {
      pFVar12 = UE::Trace::IAnalyzer::FEventData::GetTypeInfo(param_1->EventData);
      uVar8 = UE::Trace::IAnalyzer::FEventTypeInfo::GetId(pFVar12);
      puVar13 = TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                ::Find((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                        *)&this->SpecIdToTimerIdMap,~uVar8);
      if (puVar13 == (uint *)0x0) {
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        pFVar12 = UE::Trace::IAnalyzer::FEventData::GetTypeInfo(param_1->EventData);
        _Str = UE::Trace::IAnalyzer::FEventTypeInfo::GetName(pFVar12);
        sVar14 = strlen(_Str);
        ::FString::AppendChars(&local_78,_Str,(int)sVar14);
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar15.Data = local_78.Data.AllocatorInstance.Data;
        }
        uVar8 = DefineUniqueTimer(this,~uVar8,(wchar_t *)FVar15.Data,(wchar_t *)0x0,0);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar8 = *puVar13;
      }
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      UE::Trace::IAnalyzer::FEventData::SerializeToCbor(param_1->EventData,&local_68);
      if (local_68.ArrayNum < 1) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8673439970393849094>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                           ,0x2fa,"CborData.Num() > 0");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        pIVar2 = this->Session;
        (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
        uVar8 = (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x58))
                          (this->EditableTimingProfilerProvider,uVar8,&local_68);
        (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
      }
      uVar10 = UE::Trace::IAnalyzer::FEventTime::AsCycle64(param_1->EventTime);
      dVar6 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_1->EventTime);
      if ((uVar10 < pFVar11->LastCycle) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThreadState.LastCycle <= Cycle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                             ,0x303,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((dVar6 < pFVar11->LastPendingEventTime) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThreadState.LastPendingEventTime <= Time",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                             ,0x304,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11->LastPendingEventTime = dVar6;
      pFVar3 = (pFVar11->PendingEvents).AllocatorInstance.Data;
      local_58 = uVar10;
      dStack_50 = dVar6;
      local_48 = uVar8;
      if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar3 + (longlong)(pFVar11->PendingEvents).ArrayMax * 0x18)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (pFVar11->PendingEvents).ArrayNum;
      piVar1 = &(pFVar11->PendingEvents).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pFVar11->PendingEvents).AllocatorInstance,piVar1);
      }
      (pFVar11->PendingEvents).ArrayNum = iVar9 + 1;
      pFVar4 = (pFVar11->PendingEvents).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)iVar9 * 0x18;
      *(ulong64 *)pFVar3 = local_58;
      *(double *)(pFVar3 + 8) = dStack_50;
      *(ulonglong *)(pFVar4 + (longlong)iVar9 * 0x18 + 0x10) = CONCAT44(uStack_44,local_48);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnCpuScopeLeave @ 14d3eb450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::FCpuProfilerAnalyzer::OnCpuScopeLeave
          (FCpuProfilerAnalyzer *this,FOnEventContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  FThreadState *pFVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  double dStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar9 = UE::Trace::IAnalyzer::FEventTime::GetTimestamp(param_1->EventTime);
  if (uVar9 != 0) {
    uVar7 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_1->ThreadInfo);
    pFVar10 = GetOrAddThreadState(this,uVar7);
    if (pFVar10->bShouldIgnorePendingEvents == false) {
      uVar9 = UE::Trace::IAnalyzer::FEventTime::AsCycle64(param_1->EventTime);
      dVar5 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_1->EventTime);
      if (uVar9 < pFVar10->LastCycle) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ThreadState.LastCycle <= Cycle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                           ,0x31e,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (dVar5 < pFVar10->LastPendingEventTime) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ThreadState.LastPendingEventTime <= Time",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                           ,799,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar10->LastPendingEventTime = dVar5;
      pFVar2 = (pFVar10->PendingEvents).AllocatorInstance.Data;
      local_38 = ~uVar9;
      local_28 = 0;
      dStack_30 = dVar5;
      if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
         (lVar11 = (longlong)(pFVar10->PendingEvents).ArrayMax,
         (FScriptContainerElement *)&local_38 < pFVar2 + lVar11 * 0x18)) {
        local_50 = (longlong)(pFVar10->PendingEvents).ArrayNum;
        local_48 = 0x18;
        local_68 = &local_38;
        local_60 = pFVar2;
        local_58 = lVar11;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = (pFVar10->PendingEvents).ArrayNum;
      piVar1 = &(pFVar10->PendingEvents).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pFVar10->PendingEvents).AllocatorInstance,piVar1);
      }
      (pFVar10->PendingEvents).ArrayNum = iVar8 + 1;
      pFVar3 = (pFVar10->PendingEvents).AllocatorInstance.Data;
      pFVar2 = pFVar3 + (longlong)iVar8 * 0x18;
      *(ulonglong *)pFVar2 = local_38;
      *(double *)(pFVar2 + 8) = dStack_30;
      *(ulonglong *)(pFVar3 + (longlong)iVar8 * 0x18 + 0x10) = CONCAT44(uStack_24,local_28);
    }
  }
  return;
}

// OnEvent @ 14d3f0490

bool __thiscall
TraceServices::FCpuProfilerAnalyzer::OnEvent
          (FCpuProfilerAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FEventData *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  ulong64 uVar6;
  FThreadState *pFVar7;
  FArrayReader *this_01;
  uchar *puVar8;
  TArrayView<unsigned_char_const_,int> *pTVar9;
  uint *puVar10;
  int iVar11;
  IAnalysisSession *pIVar12;
  size_t _Size;
  double dVar13;
  char local_res10 [8];
  FLLMScope local_res20 [2];
  uint local_98;
  uint local_94;
  TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> local_90;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  TArrayView<unsigned_char_const_,int> local_70;
  uint *local_60;
  uint *local_58;
  TArrayView<unsigned_char_const_,int> local_50 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name136,L"Insights/FCpuProfilerAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name136,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&local_90.Value,&LLMScope_Name136,true);
  this_00 = param_3->EventData;
  switch(param_1) {
  case 0:
    OnEventSpec(this,param_3);
    break;
  case 1:
    uVar5 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar5 == 0) {
      uVar4 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar4 = 0x70000000;
    }
    pFVar7 = GetOrAddThreadState(this,uVar4 | uVar5);
    if (pFVar7->LastCycle != 0xffffffffffffffff) {
      pIVar12 = this->Session;
      (**(code **)((longlong)*pIVar12 + 0xa0))(pIVar12);
      DispatchRemainingPendingEvents(this,pFVar7);
      (**(code **)((longlong)*pIVar12 + 0xa8))(pIVar12);
      uVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                        (this_00,"Cycle",pFVar7->LastCycle);
      if (uVar6 != 0) {
        if ((uVar6 < pFVar7->LastCycle) &&
           (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8673439970393849688>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                               ,0xa8,"Cycle >= ThreadState.LastCycle"), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar6);
        pIVar12 = this->Session;
        (**(code **)((longlong)*pIVar12 + 0xa0))(pIVar12);
        (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
        EndOpenEvents(this,pFVar7,dVar13);
        (**(code **)((longlong)*pIVar12 + 0xa8))(pIVar12);
      }
      if (((pFVar7->PendingEvents).ArrayNum != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThreadState.PendingEvents.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                             ,0xaf,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (((pFVar7->ScopeStack).ArrayNum != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThreadState.ScopeStack.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                             ,0xb0,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar7->LastCycle = 0xffffffffffffffff;
    }
    break;
  case 2:
  case 3:
    uVar5 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    pFVar7 = GetOrAddThreadState(this,uVar5);
    if (pFVar7->LastCycle != 0xffffffffffffffff) {
      UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_char>
                (param_3->EventData,&local_70,"Data");
      ProcessBufferV2(this,param_3->EventTime,pFVar7,local_70.DataPtr,local_70.ArrayNum,
                      (param_1 == 2) + 2);
      if (pFVar7->LastCycle != 0) {
        dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,pFVar7->LastCycle);
        pIVar12 = this->Session;
        (**(code **)((longlong)*pIVar12 + 0xa0))(pIVar12);
        (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
        (**(code **)((longlong)*pIVar12 + 0xa8))(pIVar12);
      }
      this->TotalEventSize = this->TotalEventSize + (ulonglong)(uint)local_70.ArrayNum;
    }
    break;
  case 4:
  case 5:
    uVar5 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"ThreadId",0);
    if (uVar5 == 0) {
      uVar4 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar4 = 0x70000000;
    }
    pFVar7 = GetOrAddThreadState(this,uVar4 | uVar5);
    if (pFVar7->LastCycle == 0xffffffffffffffff) break;
    this_01 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(param_3->EventData,"Data");
    uVar5 = UE::Trace::IAnalyzer::FArrayReader::Num(this_01);
    puVar8 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_01,0,local_res10);
    if (puVar8 == (uchar *)0x0) {
LAB_14d3f07e2:
      puVar8 = (uchar *)0x0;
    }
    else {
      iVar11 = -(int)local_res10[0];
      if (iVar11 < 0) {
        iVar11 = (int)local_res10[0];
      }
      if (iVar11 != 1) goto LAB_14d3f07e2;
    }
    if (((int)uVar5 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (puVar8 == (uchar *)0x0) {
      uVar5 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_3->EventData);
      puVar8 = UE::Trace::IAnalyzer::FEventData::GetAttachment(param_3->EventData);
      if (((int)uVar5 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    ProcessBuffer(this,param_3->EventTime,pFVar7,puVar8,uVar5);
    if (param_1 == 5) {
      pIVar12 = this->Session;
      (**(code **)((longlong)*pIVar12 + 0xa0))(pIVar12);
      DispatchRemainingPendingEvents(this,pFVar7);
      if (pFVar7->LastCycle != 0) {
        dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,pFVar7->LastCycle);
        (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
        EndOpenEvents(this,pFVar7,dVar13);
      }
      pFVar7->LastCycle = 0xffffffffffffffff;
LAB_14d3f08fb:
      (**(code **)((longlong)*pIVar12 + 0xa8))(pIVar12);
    }
    else if (pFVar7->LastCycle != 0) {
      dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,pFVar7->LastCycle);
      pIVar12 = this->Session;
      (**(code **)((longlong)*pIVar12 + 0xa0))(pIVar12);
      (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(dVar13,0));
      goto LAB_14d3f08fb;
    }
    this->TotalEventSize = this->TotalEventSize + (ulonglong)uVar5;
    break;
  case 6:
    if (param_2 == EnterScope) {
      OnCpuScopeEnter(this,param_3);
    }
    else {
      OnCpuScopeLeave(this,param_3);
    }
    break;
  case 7:
    OnMetadataSpec(this,param_3);
    break;
  case 8:
    local_94 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Id",0);
    uVar5 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_3->EventData,"SpecId",0);
    pTVar9 = UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_char>
                       (this_00,local_50,"Metadata");
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = pTVar9->ArrayNum;
    _Size = (size_t)local_78;
    puVar8 = pTVar9->DataPtr;
    if (local_78 == 0) {
      local_74 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_78,0,&local_80,local_78,&local_74);
      memcpy(local_80.Data,puVar8,_Size);
    }
    local_98 = GetOrAddTimer(this,uVar5);
    if (local_78 < 1) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8673439970393849581>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                         ,0x113,"Metadata.Num() > 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      puVar10 = TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                ::Find((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                        *)&this->MetadataIdToTimerIdMap,local_94);
      pIVar12 = this->Session;
      if (puVar10 == (uint *)0x0) {
        (**(code **)((longlong)*pIVar12 + 0xa0))();
        local_98 = (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x58))
                             (this->EditableTimingProfilerProvider,local_98,&local_80);
        local_60 = &local_94;
        local_58 = &local_98;
        TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                  ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                    *)&this->MetadataIdToTimerIdMap,&local_90,(bool *)&local_60);
      }
      else {
        (**(code **)((longlong)*pIVar12 + 0xa0))(pIVar12);
        (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x60))
                  (this->EditableTimingProfilerProvider,*puVar10,&local_80,local_98);
      }
      (**(code **)((longlong)*pIVar12 + 0xa8))(pIVar12);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  FMemScope::~FMemScope((FMemScope *)&local_90.Value);
  FLLMScope::~FLLMScope(local_res20);
  return true;
}

// OnEventSpec @ 14d3f9970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::FCpuProfilerAnalyzer::OnEventSpec
          (FCpuProfilerAnalyzer *this,FOnEventContext *param_1)

{
  FEventData *this_00;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uchar *_Str;
  size_t sVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  undefined1 auStackY_1c8 [32];
  FString local_198;
  FString local_188;
  FString local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = param_1->EventData;
  uVar3 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Id",0);
  FVar8.Data = (FScriptContainerElement *)0x0;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Name",&local_198);
  uVar7 = 0;
  if (bVar1) {
LAB_14d3f9aa5:
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_198.Data.ArrayNum != 0) {
      FVar5.Data = local_198.Data.AllocatorInstance.Data;
    }
  }
  else {
    bVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"CharSize",'\0');
    if (bVar2 == 1) {
      _Str = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
      local_68.Data = (FScriptContainerElement *)0x0;
      if (_Str == (uchar *)0x0) {
        local_58 = 0;
        local_60 = (FScriptContainerElement *)0x0;
      }
      else {
        sVar4 = strlen((char *)_Str);
        local_58 = (int)sVar4;
        uVar9 = local_58 + 1;
        FVar5.Data = FVar8.Data;
        if (0x80 < uVar9) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar9,2);
          FVar5.Data = local_68.Data;
        }
        local_60 = local_168;
        if (FVar5.Data != (FScriptContainerElement *)0x0) {
          local_60 = FVar5.Data;
        }
        TStringConvert<char,wchar_t>::Convert<char>((wchar_t *)local_60,uVar9,(char *)_Str,uVar9);
      }
      ::FString::operator=(&local_198,(wchar_t *)local_60);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      goto LAB_14d3f9aa5;
    }
    if ((bVar2 & 0xfd) == 0) {
      FVar5.Data = (FScriptContainerElement *)
                   UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
    }
    else {
      ::FString::PrintfImpl(&local_178,L"<invalid %u>");
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_178.Data.ArrayNum != 0) {
        FVar5.Data = local_178.Data.AllocatorInstance.Data;
      }
      local_198.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
      local_198.Data.ArrayMax = local_178.Data.ArrayMax;
      local_198.Data.ArrayNum = local_178.Data.ArrayNum;
    }
  }
  if (*(wchar_t *)FVar5.Data == L'\0') {
    ::FString::PrintfImpl(&local_178,L"<noname %u>");
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar5.Data = local_178.Data.AllocatorInstance.Data;
    }
    local_198.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
    local_198.Data.ArrayMax = local_178.Data.ArrayMax;
    local_198.Data.ArrayNum = local_178.Data.ArrayNum;
  }
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"File",&local_188);
  uVar9 = 0;
  if (bVar1) {
    if (local_188.Data.ArrayNum < 2) goto LAB_14d3f9bb1;
    uVar9 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Line",0);
  }
  uVar7 = uVar9;
  if (1 < local_188.Data.ArrayNum) {
    FVar8.Data = local_188.Data.AllocatorInstance.Data;
  }
LAB_14d3f9bb1:
  pwVar6 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar5.Data);
  DefineMergedTimer(this,uVar3,pwVar6,(wchar_t *)FVar8.Data,uVar7);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return;
}

// OnMetadataSpec @ 14d3fa2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FCpuProfilerAnalyzer::OnMetadataSpec
          (FCpuProfilerAnalyzer *this,FOnEventContext *param_1)

{
  FEventData *this_00;
  IEditableTimingProfilerProvider *pIVar1;
  IAnalysisSession *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FCpuProfilerAnalyzer *this_01;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  FArrayReader *this_02;
  void *pvVar11;
  wchar_t *pwVar12;
  size_t sVar13;
  longlong *plVar14;
  ForAnyElementType _Str1;
  ForAnyElementType FVar15;
  uint *puVar16;
  int iVar17;
  undefined1 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  void *pvVar22;
  ulonglong uVar23;
  uint *puVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  undefined1 auStackY_3c8 [32];
  char local_368 [8];
  FString local_360;
  FString local_350;
  longlong local_340;
  ForAnyElementType FStack_338;
  undefined8 local_330;
  uint local_328;
  undefined8 local_320;
  FString local_318;
  undefined8 local_308;
  wchar_t *pwStack_300;
  int local_2f8;
  undefined8 local_2f4;
  FString local_2e8;
  FCborContext local_2d8;
  FCpuProfilerAnalyzer *local_2b8;
  FString local_2b0;
  FScriptContainerElement *local_2a0;
  int local_298;
  FScriptContainerElement *local_290;
  int local_288;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint local_268 [2];
  undefined8 *local_260;
  code *local_258;
  uint *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  FCborReader local_238;
  FArchiveState local_218;
  undefined8 local_188;
  void *local_180;
  longlong local_178;
  undefined8 local_170;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  this_00 = param_1->EventData;
  local_2b8 = this;
  local_328 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Id",0);
  pvVar22 = (void *)0x0;
  local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_350.Data.ArrayNum = 0;
  local_350.Data.ArrayMax = 0;
  local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360.Data.ArrayNum = 0;
  local_360.Data.ArrayMax = 0;
  UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Name",&local_350);
  UE::Trace::IAnalyzer::FEventData::GetString(this_00,"NameFormat",&local_360);
  this_02 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(this_00,"FieldNames");
  uVar7 = UE::Trace::IAnalyzer::FArrayReader::Num(this_02);
  pvVar11 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_02,0,local_368);
  if (pvVar11 != (void *)0x0) {
    iVar17 = -(int)local_368[0];
    if (iVar17 < 0) {
      iVar17 = (int)local_368[0];
    }
    if (iVar17 == 1) goto LAB_14d3fa3a2;
  }
  pvVar11 = pvVar22;
LAB_14d3fa3a2:
  if (((int)uVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar17 = local_360.Data.ArrayNum;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_360.Data.ArrayNum != 0) {
    FVar15.Data = local_360.Data.AllocatorInstance.Data;
  }
  _Str1.Data = (FScriptContainerElement *)L"";
  if (local_350.Data.ArrayNum != 0) {
    _Str1.Data = local_350.Data.AllocatorInstance.Data;
  }
  iVar8 = wcscmp((wchar_t *)_Str1.Data,(wchar_t *)FVar15.Data);
  if (iVar8 == 0) {
    ::FString::Empty(&local_350);
    iVar17 = local_360.Data.ArrayNum;
  }
  lVar19 = 0;
  while( true ) {
    iVar8 = iVar17 + -1;
    if (iVar17 == 0) {
      iVar8 = 0;
    }
    iVar21 = (int)pvVar22;
    if (iVar8 <= iVar21) break;
    iVar8 = local_350.Data.ArrayNum + -1;
    if (local_350.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if (iVar8 <= iVar21) break;
    if (((iVar21 < 0) || (iVar17 == 0)) || (iVar17 + -1 <= iVar21)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar26 = local_360.Data.AllocatorInstance.Data + lVar19;
      if (-1 < iVar21) {
        iVar17 = local_360.Data.ArrayNum;
        goto LAB_14d3fa48e;
      }
LAB_14d3fa49e:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar17 = local_360.Data.ArrayNum;
    }
    else {
      pFVar26 = local_360.Data.AllocatorInstance.Data + lVar19;
LAB_14d3fa48e:
      iVar8 = local_350.Data.ArrayNum + -1;
      if (local_350.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      if (iVar8 <= iVar21) goto LAB_14d3fa49e;
    }
    if (*(short *)(local_350.Data.AllocatorInstance.Data + lVar19) != *(short *)pFVar26) break;
    pvVar22 = (void *)(ulonglong)(iVar21 + 1);
    lVar19 = lVar19 + 2;
  }
  this_01 = local_2b8;
  if (1 < iVar21) {
    ::FString::RemoveAt(&local_360,0,iVar21,Default);
    iVar17 = local_360.Data.ArrayNum;
  }
  if (local_350.Data.ArrayNum < 2) {
    ::FString::FString(&local_2e8,L"% (=");
    uVar20 = 0;
    uVar23 = uVar20;
    iVar17 = local_360.Data.ArrayNum;
    while( true ) {
      iVar8 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar8 = 0;
      }
      iVar21 = (int)uVar23;
      if (iVar8 <= iVar21) break;
      if (((iVar21 < 0) || (iVar17 == 0)) || (iVar17 + -1 <= iVar21)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar17 = local_360.Data.ArrayNum;
      }
      FVar15.Data = local_2e8.Data.AllocatorInstance.Data;
      if (local_2e8.Data.AllocatorInstance.Data ==
          local_2e8.Data.AllocatorInstance.Data + (longlong)local_2e8.Data.ArrayNum * 2) {
LAB_14d3fa5e6:
        uVar23 = (ulonglong)(iVar21 + 1);
        uVar20 = uVar20 + 2;
      }
      else {
        do {
          if (*(short *)FVar15.Data == *(short *)(local_360.Data.AllocatorInstance.Data + uVar20)) {
            if ((int)((longlong)FVar15.Data - (longlong)local_2e8.Data.AllocatorInstance.Data >> 1)
                == -1) goto LAB_14d3fa5e6;
            iVar8 = iVar17 + -1;
            if (iVar17 == 0) {
              iVar8 = 0;
            }
            if (iVar21 < iVar8) {
              iVar8 = iVar21;
            }
            iVar25 = 0;
            if (0 < iVar8) {
              iVar25 = iVar8;
            }
            FVar15.Data = (FScriptContainerElement *)L"";
            if (iVar17 != 0) {
              FVar15.Data = local_360.Data.AllocatorInstance.Data;
            }
            ::FString::ConstructFromPtrSize(&local_318,(wchar_t *)FVar15.Data,iVar25);
            if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_350.Data.AllocatorInstance.Data);
            }
            uVar4 = local_318.Data._8_8_;
            local_350.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
            local_318.Data.ArrayNum = 0;
            local_318.Data.ArrayMax = 0;
            uVar5 = local_318.Data._8_8_;
            local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_318.Data.ArrayNum = (int)uVar4;
            local_318.Data.ArrayMax = SUB84(uVar4,4);
            local_350.Data.ArrayNum = local_318.Data.ArrayNum;
            local_350.Data.ArrayMax = local_318.Data.ArrayMax;
            local_318.Data._8_8_ = uVar5;
            ::FString::RemoveAt(&local_360,0,iVar21,Default);
            iVar17 = local_360.Data.ArrayNum;
            goto LAB_14d3fa673;
          }
          FVar15.Data = FVar15.Data + 2;
        } while (FVar15.Data !=
                 local_2e8.Data.AllocatorInstance.Data + (longlong)local_2e8.Data.ArrayNum * 2);
        uVar23 = (ulonglong)(iVar21 + 1);
        uVar20 = uVar20 + 2;
      }
    }
LAB_14d3fa673:
    if (local_350.Data.ArrayNum < 2) {
      if (iVar17 < 2) {
        pwVar12 = (wchar_t *)
                  (**(code **)((longlong)*this_01->Session + 0xd0))(this_01->Session,L"Unknown");
        ::FString::operator=(&local_350,pwVar12);
      }
      else {
        iVar8 = iVar17 + -1;
        if (iVar17 == 0) {
          iVar8 = 0;
        }
        ::FString::AssignRange(&local_350,(wchar_t *)local_360.Data.AllocatorInstance.Data,iVar8);
        ::FString::Empty(&local_360);
      }
      iVar17 = local_360.Data.ArrayNum;
    }
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      iVar17 = local_360.Data.ArrayNum;
    }
  }
  local_330 = 0;
  local_340 = 0;
  FStack_338.Data = (FScriptContainerElement *)0x0;
  if (1 < iVar17) {
    local_2a0 = local_360.Data.AllocatorInstance.Data;
    local_298 = iVar17 + -1;
    if (iVar17 == 0) {
      local_298 = 0;
    }
    local_340 = (**(code **)((longlong)*this_01->Session + 200))(this_01->Session,&local_2a0);
  }
  if (0 < (int)uVar7) {
    local_218._padding_ = 0;
    local_218.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_218.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_218.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_218.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_218._40_8_ = 0;
    local_218.ArSerializingDefaults = 0;
    local_218.ArPortFlags = 0;
    local_218.ArMaxSerializeSize = 0;
    local_218.ArUEVer.FileVersionUE4 = 0;
    local_218.ArUEVer.FileVersionUE5 = 0;
    local_218.ArLicenseeUEVer = 0;
    local_218.ArEngineVer.Major = 0;
    local_218.ArEngineVer.Minor = 0;
    local_218.ArEngineVer.Patch = 0;
    local_218.ArEngineVer._6_2_ = 0;
    local_218.ArEngineVer.Changelist = 0;
    local_218.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_218.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_218.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_218.SerializedProperty = (FProperty *)0x0;
    local_218.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_218.bCustomVersionsAreReset = false;
    local_218._129_7_ = 0;
    local_218.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_218);
    local_188 = 0;
    local_170 = 0x7fffffffffffffff;
    local_218._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_180 = pvVar11;
    local_178 = (longlong)(int)uVar7;
    FArchiveState::SetIsLoading(&local_218,true);
    (**(code **)(local_218._padding_ + 0x108))(&local_218,0);
    local_218._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    FCborReader::FCborReader(&local_238,(FArchive *)&local_218,BigEndian);
    local_2d8.Header.Header = 0x1c;
    local_2d8.RawTextValue.ArrayNum = 0;
    local_2d8.RawTextValue.ArrayMax = 0;
    local_2d8.field1_0x8.IntValue = 0;
    local_2d8.RawTextValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar6 = FCborReader::ReadNext(&local_238,&local_2d8);
    if (bVar6) {
      do {
        FVar15.Data = local_2d8.RawTextValue.AllocatorInstance.Data;
        if ((local_2d8.Header.Header & 0xe0) == 0x60) {
          local_68.Data = (FScriptContainerElement *)0x0;
          if (local_2d8.RawTextValue.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            local_58 = 0;
            local_60 = (FScriptContainerElement *)0x0;
          }
          else {
            sVar13 = strlen((char *)local_2d8.RawTextValue.AllocatorInstance.Data);
            local_58 = UE::Core::Private::GetConvertedLength
                                 ((wchar_t *)0x0,(uchar *)FVar15.Data,(int)sVar13);
            uVar7 = local_58 + 1;
            uVar9 = uVar7;
            if (uVar7 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar9 = 0;
                goto LAB_14d3fa87f;
              }
            }
            else {
LAB_14d3fa87f:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar9,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            UE::Core::Private::Convert
                      ((wchar_t *)local_60,uVar7,(uchar *)FVar15.Data,(int)sVar13 + 1);
          }
          ::FString::FString(&local_2b0,(wchar_t *)local_60);
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          local_290 = local_2b0.Data.AllocatorInstance.Data;
          local_288 = local_2b0.Data.ArrayNum + -1;
          if (local_2b0.Data.ArrayNum == 0) {
            local_288 = 0;
          }
          local_320 = (**(code **)((longlong)*this_01->Session + 200))(this_01->Session,&local_290);
          if (((FStack_338.Data <= (FScriptContainerElement *)&local_320) &&
              ((FScriptContainerElement *)&local_320 <
               FStack_338.Data + (longlong)local_330._4_4_ * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar17 = (int)local_330;
          if ((int)local_330 == local_330._4_4_) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&FStack_338,(int *)((longlong)&local_330 + 4));
          }
          local_330 = CONCAT44(local_330._4_4_,iVar17 + 1);
          *(undefined8 *)(FStack_338.Data + (longlong)iVar17 * 8) = local_320;
          if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
          }
        }
        bVar6 = FCborReader::ReadNext(&local_238,&local_2d8);
      } while (bVar6);
    }
    if (local_2d8.RawTextValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.RawTextValue.AllocatorInstance.Data);
    }
    FCborReader::~FCborReader(&local_238);
    FArchive::~FArchive((FArchive *)&local_218);
  }
  uVar7 = local_328;
  if (*(int *)&(this_01->SpecIdToTimerIdMap).field_0x8 !=
      *(int *)&(this_01->SpecIdToTimerIdMap).field_0x34) {
    puVar18 = *(undefined1 **)&(this_01->SpecIdToTimerIdMap).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this_01->SpecIdToTimerIdMap).field_0x38;
    }
    uVar9 = *(uint *)(puVar18 +
                     (ulonglong)(*(int *)&(this_01->SpecIdToTimerIdMap).field_0x48 - 1U & local_328)
                     * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar16 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&this_01->SpecIdToTimerIdMap);
        if (*puVar16 == local_328) {
          puVar24 = puVar16 + 1;
          if (puVar16 == (uint *)0x0) {
            puVar24 = (uint *)0x0;
          }
          if (puVar24 != (uint *)0x0) {
            pIVar2 = this_01->Session;
            uVar9 = *puVar24;
            (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
            local_278 = (FScriptContainerElement *)L"";
            if (local_350.Data.ArrayNum != 0) {
              local_278 = local_350.Data.AllocatorInstance.Data;
            }
            (**(code **)((longlong)*this_01->Session + 0xb0))();
            pIVar1 = this_01->EditableTimingProfilerProvider;
            pcVar3 = *(code **)((longlong)*pIVar1 + 0x38);
            uStack_270 = 0;
            if (local_278 != (FScriptContainerElement *)0x0) {
              sVar13 = wcslen((wchar_t *)local_278);
              uStack_270 = (undefined4)sVar13;
            }
            local_248 = (undefined4)local_278;
            uStack_244 = local_278._4_4_;
            uStack_23c = uStack_26c;
            uStack_240 = uStack_270;
            (*pcVar3)(pIVar1,uVar9,&local_248);
            (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
            goto LAB_14d3fab17;
          }
          break;
        }
        uVar9 = puVar16[2];
      } while (uVar9 != 0xffffffff);
    }
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_350.Data.ArrayNum != 0) {
    FVar15.Data = local_350.Data.AllocatorInstance.Data;
  }
  uVar9 = DefineUniqueTimer(this_01,local_328,(wchar_t *)FVar15.Data,(wchar_t *)0x0,0);
LAB_14d3fab17:
  if ((0 < (int)local_330) || (local_340 != 0)) {
    pIVar2 = this_01->Session;
    (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
    uVar10 = (**(code **)((longlong)*this_01->EditableTimingProfilerProvider + 0x78))
                       (this_01->EditableTimingProfilerProvider,&local_340);
    plVar14 = (longlong *)(**(code **)((longlong)*this_01->EditableTimingProfilerProvider + 0xd8))()
    ;
    if (plVar14 != (longlong *)0x0) {
      local_2f8 = -1;
      local_2f4 = 0;
      local_260 = &local_308;
      local_250 = local_268;
      local_258 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TraceServices::FCpuProfilerAnalyzer::OnMetadataSpec'::__l51::<lambda_1>,void,TraceServices::ITimingProfilerTimerReader_const_&>
                  ::Call;
      local_308 = 0;
      pwStack_300 = (wchar_t *)0x0;
      local_268[0] = uVar9;
      (**(code **)(*plVar14 + 0x38))(plVar14,&local_258);
      if (local_2f8 != -1) {
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_350.Data.ArrayNum != 0) {
          FVar15.Data = local_350.Data.AllocatorInstance.Data;
        }
        uVar9 = AddCpuTimer(this_01,uVar7,(wchar_t *)FVar15.Data,pwStack_300,
                            local_2f4._4_4_ & 0xffffff);
        this_01->NumTimerWarnings = this_01->NumTimerWarnings + 1;
        if (this_01->NumTimerWarnings < 100) {
          lVar19 = (**(code **)(*plVar14 + 0x50))(plVar14,local_2f8);
          if ((lVar19 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("PreviousMetadataSpec",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                                 ,0x3df,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (2 < (byte)LogTraceServices._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
        }
      }
    }
    (**(code **)((longlong)*this_01->EditableTimingProfilerProvider + 0x50))
              (this_01->EditableTimingProfilerProvider,uVar9,uVar10);
    (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  }
  if (FStack_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_338.Data);
  }
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  return;
}

// ProcessBuffer @ 14d3fb810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FCpuProfilerAnalyzer::ProcessBuffer
          (FCpuProfilerAnalyzer *this,FEventTime *param_1,FThreadState *param_2,uchar *param_3,
          uint param_4)

{
  int *piVar1;
  byte bVar2;
  IAnalysisSession *pIVar3;
  IEditableTimeline<TraceServices::FTimingProfilerEvent> *pIVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  TArray<TraceServices::FCpuProfilerAnalyzer::FPendingEvent,TSizedDefaultAllocator<32>_> *pTVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  double dVar24;
  uint local_res20 [2];
  
  pIVar3 = this->Session;
  (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3);
  uVar15 = param_2->LastCycle;
  uVar10 = UE::Trace::IAnalyzer::FEventTime::GetTimestamp(param_1);
  if ((uVar10 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventTime.GetTimestamp() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                         ,0x136,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = UE::Trace::IAnalyzer::FEventTime::AsCycle64(param_1);
  iVar23 = (param_2->PendingEvents).ArrayNum;
  pFVar22 = (param_2->PendingEvents).AllocatorInstance.Data;
  pbVar11 = param_3 + param_4;
  do {
    if (pbVar11 <= param_3) {
      pTVar20 = &param_2->PendingEvents;
      if ((param_3 != pbVar11) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("BufferPtr == BufferEnd",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                             ,0x174,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (iVar23 == 0) {
        (param_2->PendingEvents).ArrayNum = 0;
        if ((param_2->PendingEvents).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&pTVar20->AllocatorInstance,0,&(param_2->PendingEvents).ArrayMax);
        }
      }
      else {
        iVar9 = (param_2->PendingEvents).ArrayNum;
        uVar21 = iVar9 - iVar23;
        uVar8 = 0;
        if ((int)uVar21 <= iVar9) {
          uVar8 = ~uVar21 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar21 != 0) {
          pFVar22 = (pTVar20->AllocatorInstance).Data;
          iVar23 = (param_2->PendingEvents).ArrayNum - uVar21;
          if (iVar23 != 0) {
            memmove(pFVar22,pFVar22 + (longlong)(int)uVar21 * 0x18,(longlong)iVar23 * 0x18);
          }
          piVar1 = &(param_2->PendingEvents).ArrayNum;
          *piVar1 = *piVar1 - uVar21;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&pTVar20->AllocatorInstance,(param_2->PendingEvents).ArrayNum,
                     &(param_2->PendingEvents).ArrayMax);
        }
      }
      param_2->LastCycle = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00014d3fbcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar3 + 0xa8))(pIVar3);
      return;
    }
    uVar19 = 0;
    bVar16 = 0;
    do {
      bVar2 = *param_3;
      param_3 = param_3 + 1;
      bVar6 = bVar16 & 0x3f;
      bVar16 = bVar16 + 7;
      uVar19 = uVar19 | (ulonglong)(bVar2 & 0x7f) << bVar6;
    } while ((char)bVar2 < '\0');
    uVar12 = uVar19 >> 1;
    uVar17 = uVar12 + uVar15;
    if (uVar15 <= uVar12) {
      uVar17 = uVar12;
    }
    uVar12 = uVar17 + uVar10;
    if (uVar10 <= uVar17) {
      uVar12 = uVar17;
    }
    if (param_2->bShouldIgnorePendingEvents == false) {
      for (; 0 < iVar23; iVar23 = iVar23 + -1) {
        uVar17 = *(ulonglong *)pFVar22;
        uVar14 = ~uVar17;
        if (-1 < (longlong)uVar17) {
          uVar14 = uVar17;
        }
        if ((uVar12 < uVar14) || ((uVar14 == uVar12 && ((uVar19 & 1) == 0)))) break;
        if (uVar14 < uVar15) {
          param_2->bShouldIgnorePendingEvents = true;
          pFVar22 = pFVar22 + (longlong)iVar23 * 0x18;
          iVar23 = 0;
          if (1 < (byte)LogTraceServices._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
            iVar23 = 0;
          }
          break;
        }
        pIVar4 = param_2->Timeline;
        if ((longlong)uVar17 < 0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,*(ulonglong *)(pFVar22 + 8));
        }
        else {
          (**(code **)((longlong)*pIVar4 + 8))();
          this->TotalScopeCount = this->TotalScopeCount + 1;
        }
        pFVar22 = pFVar22 + 0x18;
        uVar15 = uVar14;
      }
      param_2->LastCycle = uVar15;
    }
    else {
      lVar13 = (longlong)iVar23;
      iVar23 = 0;
      pFVar22 = pFVar22 + lVar13 * 0x18;
    }
    dVar24 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_1,uVar12);
    if ((uVar19 & 1) == 0) {
      if (0 < (param_2->ScopeStack).ArrayNum) {
        iVar9 = (param_2->ScopeStack).ArrayNum;
        uVar8 = iVar9 - 1;
        pFVar18 = (param_2->ScopeStack).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
        iVar9 = ~uVar8 + iVar9;
        if (iVar9 != 0) {
          memmove(pFVar18,pFVar18 + 0x10,(longlong)iVar9 << 4);
        }
        piVar1 = &(param_2->ScopeStack).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(param_2->ScopeStack).AllocatorInstance,(param_2->ScopeStack).ArrayNum,
                   &(param_2->ScopeStack).ArrayMax);
        (**(code **)((longlong)*param_2->Timeline + 0x10))(param_2->Timeline,dVar24);
      }
    }
    else {
      uVar15 = 0;
      bVar16 = 0;
      do {
        bVar2 = *param_3;
        param_3 = param_3 + 1;
        bVar6 = bVar16 & 0x3f;
        bVar16 = bVar16 + 7;
        uVar15 = (ulonglong)(bVar2 & 0x7f) << bVar6 | uVar15;
      } while ((char)bVar2 < '\0');
      if ((uVar15 != (uVar15 & 0xffffffff)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar7
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = GetOrAddTimer(this,(uint)uVar15);
      piVar1 = &(param_2->ScopeStack).ArrayMax;
      iVar9 = (param_2->ScopeStack).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(param_2->ScopeStack).AllocatorInstance,piVar1);
      }
      (param_2->ScopeStack).ArrayNum = iVar9 + 1;
      pFVar18 = (param_2->ScopeStack).AllocatorInstance.Data;
      *(ulonglong *)(pFVar18 + (longlong)iVar9 * 0x10) = uVar12;
      *(uint *)(pFVar18 + (longlong)iVar9 * 0x10 + 8) = uVar8;
      local_res20[0] = uVar8;
      (**(code **)((longlong)*param_2->Timeline + 8))(param_2->Timeline,dVar24,local_res20);
      this->TotalScopeCount = this->TotalScopeCount + 1;
    }
    uVar15 = uVar12;
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActualCycle > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                           ,0x171,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  } while( true );
}

// ProcessBufferV2 @ 14d3fbce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FCpuProfilerAnalyzer::ProcessBufferV2
          (FCpuProfilerAnalyzer *this,FEventTime *param_1,FThreadState *param_2,uchar *param_3,
          uint param_4,int param_5)

{
  TArray<TraceServices::FCpuProfilerAnalyzer::FEventScopeState,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  byte bVar3;
  IEditableTimeline<TraceServices::FTimingProfilerEvent> *pIVar4;
  undefined1 *puVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  byte bVar16;
  ulonglong uVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  IAnalysisSession *pIVar21;
  ulonglong uVar22;
  uint *puVar23;
  uint uVar24;
  uint *puVar25;
  ulonglong uVar26;
  undefined1 auStackY_2d8 [32];
  uint local_298;
  int local_294;
  ulonglong local_290;
  uint local_288;
  uint local_284;
  uint local_280 [2];
  FScriptContainerElement *local_278;
  ForAnyElementType local_270;
  undefined8 local_268;
  undefined4 local_260 [2];
  undefined4 local_258 [2];
  undefined4 local_250 [2];
  undefined4 local_248 [2];
  uint local_240 [2];
  undefined4 local_238 [2];
  uint local_230;
  uint local_22c;
  undefined8 local_228;
  void *local_220;
  undefined8 local_218;
  undefined1 local_210 [8];
  FEventTime *local_208;
  uint *local_200;
  int *local_1f8;
  byte *local_1f0;
  ulonglong local_1e8;
  IAnalysisSession *local_1e0;
  undefined1 local_1d8 [8];
  FCborWriter local_1d0;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 *local_198;
  uint *local_190;
  wchar_t *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 *local_178;
  uint *local_170;
  longlong local_168 [2];
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 *local_148;
  uint *local_140;
  uint *local_138;
  uint *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FArchiveState local_f8;
  longlong local_68;
  ForAnyElementType *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pIVar21 = this->Session;
  local_208 = param_1;
  local_1e0 = pIVar21;
  (**(code **)((longlong)*pIVar21 + 0xa0))(pIVar21);
  uVar22 = param_2->LastCycle;
  uVar12 = UE::Trace::IAnalyzer::FEventTime::GetTimestamp(param_1);
  if ((uVar12 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventTime.GetTimestamp() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                         ,399,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1e8 = UE::Trace::IAnalyzer::FEventTime::AsCycle64(param_1);
  local_278 = (param_2->PendingEvents).AllocatorInstance.Data;
  local_294 = (param_2->PendingEvents).ArrayNum;
  local_1f0 = param_3 + param_4;
  bVar8 = param_3 == local_1f0;
  if (param_3 < local_1f0) {
    do {
      uVar17 = 0;
      uVar26 = uVar17;
      do {
        bVar3 = *param_3;
        param_3 = param_3 + 1;
        bVar16 = (byte)uVar17;
        uVar17 = uVar17 + 7;
        uVar26 = uVar26 | (ulonglong)(bVar3 & 0x7f) << (bVar16 & 0x3f);
      } while ((char)bVar3 < '\0');
      local_290 = uVar26 >> 2;
      if (local_290 < uVar22) {
        local_290 = local_290 + uVar22;
      }
      if (local_290 < local_1e8) {
        local_290 = local_290 + local_1e8;
      }
      if (param_2->bShouldIgnorePendingEvents == false) {
        while (iVar10 = local_294, 0 < local_294) {
          uVar17 = *(ulonglong *)local_278;
          uVar14 = ~uVar17;
          if (-1 < (longlong)uVar17) {
            uVar14 = uVar17;
          }
          if ((local_290 < uVar14) || ((uVar14 == local_290 && ((uVar26 & 1) == 0)))) break;
          if (uVar14 < uVar22) {
            lVar13 = (longlong)local_294;
            param_2->bShouldIgnorePendingEvents = true;
            local_294 = 0;
            local_278 = local_278 + lVar13 * 0x18;
            if (1 < (byte)LogTraceServices._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices)
              ;
            }
            break;
          }
          pIVar4 = param_2->Timeline;
          if ((longlong)uVar17 < 0) {
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,*(ulonglong *)(local_278 + 8));
          }
          else {
            local_260[0] = *(undefined4 *)(local_278 + 0x10);
            (**(code **)((longlong)*pIVar4 + 8))(pIVar4,*(ulonglong *)(local_278 + 8),local_260);
            this->TotalScopeCount = this->TotalScopeCount + 1;
          }
          local_278 = local_278 + 0x18;
          uVar22 = uVar14;
          local_294 = iVar10 + -1;
        }
        param_2->LastCycle = uVar22;
      }
      else {
        lVar13 = (longlong)local_294;
        local_294 = 0;
        local_278 = local_278 + lVar13 * 0x18;
      }
      puVar18 = (uint *)0x0;
      dVar7 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(local_208,local_290);
      if ((uVar26 & 2) == 0) {
        puVar15 = puVar18;
        puVar23 = puVar18;
        if ((uVar26 & 1) == 0) goto LAB_14d3fc4b8;
        do {
          bVar3 = *param_3;
          param_3 = param_3 + 1;
          puVar23 = (uint *)((ulonglong)(bVar3 & 0x7f) << ((byte)puVar15 & 0x3f) |
                            (ulonglong)puVar23);
          puVar15 = (uint *)((longlong)puVar15 + 7);
        } while ((char)bVar3 < '\0');
        if ((puVar23 != (uint *)((ulonglong)puVar23 & 0xffffffff)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_298 = 0;
        if (param_5 == 3) {
          uVar22 = ((ulonglong)puVar23 & 0xffffffff) >> 1;
          uVar11 = (uint)uVar22;
          if (((ulonglong)puVar23 & 1) == 0) goto LAB_14d3fc7f7;
          local_230 = uVar11;
          if (*(int *)&(this->MetadataIdToTimerIdMap).field_0x8 !=
              *(int *)&(this->MetadataIdToTimerIdMap).field_0x34) {
            puVar5 = *(undefined1 **)&(this->MetadataIdToTimerIdMap).field_0x40;
            puVar20 = &(this->MetadataIdToTimerIdMap).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar20 = puVar5;
            }
            uVar24 = *(uint *)(puVar20 +
                              (*(int *)&(this->MetadataIdToTimerIdMap).field_0x48 - 1 & uVar22) * 4)
            ;
            if (uVar24 != 0xffffffff) {
              do {
                puVar15 = (uint *)((longlong)(int)uVar24 * 0x10 +
                                  *(longlong *)&(this->MetadataIdToTimerIdMap).field_0x0);
                if (*puVar15 == uVar11) {
                  puVar23 = puVar15 + 1;
                  if (puVar15 == (uint *)0x0) {
                    puVar23 = puVar18;
                  }
                  if (puVar23 != (uint *)0x0) {
                    local_298 = *puVar23;
                    goto LAB_14d3fc803;
                  }
                  break;
                }
                uVar24 = puVar15[2];
              } while (uVar24 != 0xffffffff);
            }
          }
          uVar11 = this->MetadataUnknownTimerId;
          if (this->MetadataUnknownTimerId == 0xffffffff) {
            local_238[0] = 0x7ffffffd;
            (**(code **)((longlong)*this->Session + 0xb0))();
            local_158 = L"<unknown>";
            uStack_150 = 9;
            local_108 = 0x507c09a0;
            uStack_104 = 1;
            uStack_100 = 9;
            uStack_fc = uStack_14c;
            local_280[0] = (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0xc0))
                                     (this->EditableTimingProfilerProvider,&local_108,0,0);
            local_148 = local_238;
            local_140 = local_280;
            TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                      ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                        *)&this->SpecIdToTimerIdMap,
                       (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)local_210,
                       (bool *)&local_148);
            this->MetadataUnknownTimerId = local_280[0];
            uVar11 = local_280[0];
          }
          local_220 = (void *)0x0;
          local_218 = 0;
          local_298 = (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x58))
                                (this->EditableTimingProfilerProvider,uVar11,&local_220);
          if (local_220 != (void *)0x0) {
            FMemory::Free(local_220);
          }
          local_138 = &local_230;
          local_130 = &local_298;
          TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                    ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->MetadataIdToTimerIdMap,
                     (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)(local_210 + 4),
                     (bool *)&local_138);
        }
        else {
          uVar11 = (uint)puVar23;
LAB_14d3fc7f7:
          local_298 = GetOrAddTimer(this,uVar11);
        }
LAB_14d3fc803:
        iVar10 = (param_2->ScopeStack).ArrayNum;
        piVar2 = &(param_2->ScopeStack).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(param_2->ScopeStack).AllocatorInstance,piVar2);
        }
        uVar22 = local_290;
        (param_2->ScopeStack).ArrayNum = iVar10 + 1;
        pFVar19 = (param_2->ScopeStack).AllocatorInstance.Data;
        *(ulonglong *)(pFVar19 + (longlong)iVar10 * 0x10) = local_290;
        *(uint *)(pFVar19 + (longlong)iVar10 * 0x10 + 8) = local_298;
        local_22c = local_298;
        (**(code **)((longlong)*param_2->Timeline + 8))(param_2->Timeline,dVar7,&local_22c);
        this->TotalScopeCount = this->TotalScopeCount + 1;
      }
      else {
        puVar15 = puVar18;
        puVar23 = puVar18;
        if ((uVar26 & 1) == 0) {
          do {
            bVar3 = *param_3;
            param_3 = param_3 + 1;
            bVar16 = (byte)puVar18;
            puVar18 = (uint *)((longlong)puVar18 + 7);
            puVar15 = (uint *)((ulonglong)(bVar3 & 0x7f) << (bVar16 & 0x3f) | (ulonglong)puVar15);
          } while ((char)bVar3 < '\0');
          puVar18 = (uint *)((ulonglong)puVar15 & 0xffffffff);
          if ((puVar15 != puVar18) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((int)puVar15 != 0) {
            do {
              pTVar1 = &param_2->ScopeStack;
              if (0 < (param_2->ScopeStack).ArrayNum) {
                iVar10 = (param_2->ScopeStack).ArrayNum;
                uVar11 = iVar10 - 1;
                pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
                iVar10 = ~uVar11 + iVar10;
                if (iVar10 != 0) {
                  memmove(pFVar19,pFVar19 + 0x10,(longlong)iVar10 << 4);
                }
                piVar2 = &(param_2->ScopeStack).ArrayNum;
                *piVar2 = *piVar2 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,&pTVar1->AllocatorInstance,(param_2->ScopeStack).ArrayNum,
                           &(param_2->ScopeStack).ArrayMax);
                (**(code **)((longlong)*param_2->Timeline + 0x10))(param_2->Timeline,dVar7);
              }
              puVar18 = (uint *)((longlong)puVar18 + -1);
            } while (puVar18 != (uint *)0x0);
            iVar10 = (param_2->ScopeStack).ArrayNum;
            if (0 < iVar10) {
              uVar11 = 0;
              if ((int)(iVar10 - 1U) < iVar10) {
                uVar11 = ~(iVar10 - 1U) >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x70))
                        (this->EditableTimingProfilerProvider,local_168,
                         *(undefined4 *)
                          ((pTVar1->AllocatorInstance).Data +
                          (longlong)(param_2->ScopeStack).ArrayNum * 0x10 + -8));
              if ((int)local_168[1] < 1) {
                bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_8673439970393849336>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                                   ,0x208,"Metadata.Num() > 0");
                if (bVar8) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              else {
                *(undefined1 *)((longlong)(int)local_168[1] + -1 + local_168[0]) = 0xf5;
              }
            }
          }
LAB_14d3fc4b8:
          uVar22 = local_290;
          if (0 < (param_2->ScopeStack).ArrayNum) {
            iVar10 = (param_2->ScopeStack).ArrayNum;
            uVar11 = iVar10 - 1;
            pFVar19 = (param_2->ScopeStack).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
            iVar10 = ~uVar11 + iVar10;
            if (iVar10 != 0) {
              memmove(pFVar19,pFVar19 + 0x10,(longlong)iVar10 << 4);
            }
            piVar2 = &(param_2->ScopeStack).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&(param_2->ScopeStack).AllocatorInstance,
                       (param_2->ScopeStack).ArrayNum,&(param_2->ScopeStack).ArrayMax);
            (**(code **)((longlong)*param_2->Timeline + 0x10))(param_2->Timeline,dVar7);
            uVar22 = local_290;
          }
        }
        else {
          do {
            bVar3 = *param_3;
            param_3 = param_3 + 1;
            puVar23 = (uint *)((ulonglong)puVar23 |
                              (ulonglong)(bVar3 & 0x7f) << ((byte)puVar15 & 0x3f));
            puVar15 = (uint *)((longlong)puVar15 + 7);
            puVar25 = puVar18;
          } while ((char)bVar3 < '\0');
          do {
            bVar3 = *param_3;
            param_3 = param_3 + 1;
            bVar16 = (byte)puVar18;
            puVar18 = (uint *)((longlong)puVar18 + 7);
            puVar25 = (uint *)((ulonglong)puVar25 | (ulonglong)(bVar3 & 0x7f) << (bVar16 & 0x3f));
          } while ((char)bVar3 < '\0');
          local_200 = (uint *)((ulonglong)puVar25 & 0xffffffff);
          if ((puVar25 != local_200) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (this->CoroutineTimerId == 0xffffffff) {
            local_258[0] = 0x7fffffff;
            (**(code **)((longlong)*this->Session + 0xb0))();
            local_1a8 = L"Coroutine";
            uStack_1a0 = 9;
            local_128 = 0x52b0b508;
            uStack_124 = 1;
            uStack_120 = 9;
            uStack_11c = uStack_19c;
            local_288 = (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0xc0))
                                  (this->EditableTimingProfilerProvider,&local_128,0,0);
            local_198 = local_258;
            local_190 = &local_288;
            TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                      ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                        *)&this->SpecIdToTimerIdMap,
                       (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)local_1d8,
                       (bool *)&local_198);
            this->CoroutineTimerId = local_288;
          }
          local_270.Data = (FScriptContainerElement *)0x0;
          local_268 = 0;
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x100,&local_270,0,(int *)((longlong)&local_268 + 4));
          local_228 = 0;
          local_f8._padding_ = 0;
          local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
          local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
          local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
          local_f8._40_8_ = 0;
          local_f8.ArSerializingDefaults = 0;
          local_f8.ArPortFlags = 0;
          local_f8.ArMaxSerializeSize = 0;
          local_f8.ArUEVer.FileVersionUE4 = 0;
          local_f8.ArUEVer.FileVersionUE5 = 0;
          local_f8.ArLicenseeUEVer = 0;
          local_f8.ArEngineVer.Major = 0;
          local_f8.ArEngineVer.Minor = 0;
          local_f8.ArEngineVer.Patch = 0;
          local_f8.ArEngineVer._6_2_ = 0;
          local_f8.ArEngineVer.Changelist = 0;
          local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
          local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
          local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
          local_f8.SerializedProperty = (FProperty *)0x0;
          local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
          local_f8.bCustomVersionsAreReset = false;
          local_f8._129_7_ = 0;
          local_f8.NextProxy = (FArchiveState *)0x0;
          FArchiveState::FArchiveState(&local_f8);
          local_68 = 0;
          local_f8._padding_ =
               (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
          local_60 = &local_270;
          local_58 = local_228;
          FArchiveState::SetIsSaving(&local_f8,true);
          (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
          local_68 = (longlong)(int)local_268;
          local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
          FCborWriter::FCborWriter(&local_1d0,(FArchive *)&local_f8,BigEndian);
          FCborWriter::WriteContainerStart(&local_1d0,Map,2);
          FCborWriter::WriteValue(&local_1d0,"Id",2);
          FCborWriter::WriteValue(&local_1d0,(ulong64)puVar23);
          FCborWriter::WriteValue(&local_1d0,"C",1);
          FCborWriter::WriteValue(&local_1d0,false);
          FCborWriter::~FCborWriter(&local_1d0);
          FArchive::~FArchive((FArchive *)&local_f8);
          uVar9 = (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0x58))
                            (this->EditableTimingProfilerProvider,this->CoroutineTimerId,&local_270)
          ;
          iVar10 = (param_2->ScopeStack).ArrayNum;
          local_1f8 = &(param_2->ScopeStack).ArrayMax;
          if (iVar10 == *local_1f8) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(param_2->ScopeStack).AllocatorInstance,local_1f8);
          }
          uVar22 = local_290;
          (param_2->ScopeStack).ArrayNum = iVar10 + 1;
          pFVar19 = (param_2->ScopeStack).AllocatorInstance.Data;
          *(ulonglong *)(pFVar19 + (longlong)iVar10 * 0x10) = local_290;
          *(undefined4 *)(pFVar19 + (longlong)iVar10 * 0x10 + 8) = uVar9;
          local_250[0] = uVar9;
          (**(code **)((longlong)*param_2->Timeline + 8))(param_2->Timeline,dVar7,local_250);
          this->TotalScopeCount = this->TotalScopeCount + 1;
          if (local_270.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_270.Data);
          }
          if (this->CoroutineUnknownTimerId == 0xffffffff) {
            local_248[0] = 0x7ffffffe;
            (**(code **)((longlong)*this->Session + 0xb0))();
            local_188 = L"<unknown>";
            uStack_180 = 9;
            local_118 = 0x507c09a0;
            uStack_114 = 1;
            uStack_110 = 9;
            uStack_10c = uStack_17c;
            local_284 = (**(code **)((longlong)*this->EditableTimingProfilerProvider + 0xc0))
                                  (this->EditableTimingProfilerProvider,&local_118,0,0);
            local_178 = local_248;
            local_170 = &local_284;
            TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                      ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                        *)&this->SpecIdToTimerIdMap,
                       (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)
                       (local_1d8 + 4),(bool *)&local_178);
            this->CoroutineUnknownTimerId = local_284;
          }
          piVar2 = local_1f8;
          if ((int)local_200 != 0) {
            uVar26 = (ulonglong)local_200 & 0xffffffff;
            do {
              iVar10 = (param_2->ScopeStack).ArrayNum;
              if (iVar10 == (param_2->ScopeStack).ArrayMax) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&(param_2->ScopeStack).AllocatorInstance,piVar2);
                (param_2->ScopeStack).ArrayNum = iVar10;
              }
              (param_2->ScopeStack).ArrayNum = iVar10 + 1;
              pFVar19 = (param_2->ScopeStack).AllocatorInstance.Data;
              *(ulonglong *)(pFVar19 + (longlong)iVar10 * 0x10) = uVar22;
              *(uint *)(pFVar19 + (longlong)iVar10 * 0x10 + 8) = this->CoroutineUnknownTimerId;
              local_240[0] = this->CoroutineUnknownTimerId;
              (**(code **)((longlong)*param_2->Timeline + 8))(param_2->Timeline,dVar7,local_240);
              this->TotalScopeCount = this->TotalScopeCount + 1;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
        }
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActualCycle > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                             ,0x261,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    } while (param_3 < local_1f0);
    bVar8 = param_3 == local_1f0;
    pIVar21 = local_1e0;
  }
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferPtr == BufferEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CpuProfilerTraceAnalysis.cpp"
                         ,0x264,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_294 == 0) {
    (param_2->PendingEvents).ArrayNum = 0;
    if ((param_2->PendingEvents).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(param_2->PendingEvents).AllocatorInstance,0,
                 &(param_2->PendingEvents).ArrayMax);
    }
  }
  else {
    iVar10 = (param_2->PendingEvents).ArrayNum;
    uVar24 = iVar10 - local_294;
    uVar11 = 0;
    if ((int)uVar24 <= iVar10) {
      uVar11 = ~uVar24 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar24 != 0) {
      pFVar19 = (param_2->PendingEvents).AllocatorInstance.Data;
      iVar10 = (param_2->PendingEvents).ArrayNum - uVar24;
      if (iVar10 != 0) {
        memmove(pFVar19,pFVar19 + (longlong)(int)uVar24 * 0x18,(longlong)iVar10 * 0x18);
      }
      iVar10 = (param_2->PendingEvents).ArrayNum - uVar24;
      (param_2->PendingEvents).ArrayNum = iVar10;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&(param_2->PendingEvents).AllocatorInstance,iVar10,
                 &(param_2->PendingEvents).ArrayMax);
    }
  }
  param_2->LastCycle = uVar22;
  (**(code **)((longlong)*pIVar21 + 0xa8))(pIVar21);
  return;
}

// SetTimerName @ 14d402340

void __thiscall
TraceServices::FCpuProfilerAnalyzer::SetTimerName
          (FCpuProfilerAnalyzer *this,uint param_1,uint param_2,wchar_t *param_3)

{
  IEditableTimingProfilerProvider *pIVar1;
  code *pcVar2;
  size_t sVar3;
  undefined4 in_register_00000014;
  wchar_t *local_18;
  undefined4 uStack_10;
  
  (**(code **)((longlong)*this->Session + 0xb0))
            (this->Session,CONCAT44(in_register_00000014,param_1));
  pIVar1 = this->EditableTimingProfilerProvider;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x38);
  uStack_10 = 0;
  local_18 = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_3);
    uStack_10 = (undefined4)sVar3;
  }
  (*pcVar2)(pIVar1,param_2,&local_18);
  return;
}

