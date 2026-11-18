// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// Clear @ 14a245f80

void __thiscall FControlRigStats::Clear(FControlRigStats *this)

{
  (this->Stack).ArrayNum = 0;
  if ((this->Stack).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Stack).AllocatorInstance,0,&(this->Stack).ArrayMax);
  }
  TSet<TTuple<FName,double>,TDefaultMapHashableKeyFuncs<FName,double,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,double>,TDefaultMapHashableKeyFuncs<FName,double,0>,FDefaultSetAllocator>
              *)&this->Counters);
  return;
}

// Dump @ 14a2503a0

void __thiscall FControlRigStats::Dump(FControlRigStats *this)

{
  undefined1 *puVar1;
  TMap<FName,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,double,0>_> *pTVar2;
  FName *pFVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  void *this_00;
  code *pcVar8;
  TMap<FName,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,double,0>_> *pTVar9;
  bool bVar10;
  FCounterTree *pFVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FName local_res20;
  FName local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  TMap<FName,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,double,0>_> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,double,0>_> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FString local_48;
  
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  ::FName::FName(&local_res20,L"Control Rig Profiling");
  puVar1 = &(this->Counters).field_0x10;
  local_c8 = local_res20;
  local_c0 = 0;
  pTVar2 = &this->Counters;
  iVar6 = *(int *)&(this->Counters).field_0x28;
  uStack_9c = 1;
  iStack_a0 = 0;
  local_88 = 0;
  iStack_8c = iStack_a0;
  if (iVar6 != 0) {
    puVar18 = *(uint **)&(this->Counters).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14a25045f;
      uVar16 = puVar18[lVar12 + 1];
    }
    uStack_9c = -uVar16 & uVar16;
    uVar5 = (ulonglong)uStack_9c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iStack_8c = local_88 + -1 + local_res18;
    if (iVar6 < iStack_8c) {
      iStack_8c = iVar6;
    }
  }
LAB_14a25045f:
  iStack_80 = *(int *)&(this->Counters).field_0x8 - *(int *)&(this->Counters).field_0x34;
  uVar16 = *(uint *)&(this->Counters).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar15 = uVar16 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = pTVar2;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar6 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar7 = *(uint *)&(this->Counters).field_0x28;
  if (uVar16 != uVar7) {
    puVar17 = *(undefined1 **)&(this->Counters).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a250560;
      uVar16 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar16) {
      uVar16 = uVar7;
    }
  }
LAB_14a250560:
  while( true ) {
    pTVar9 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FName,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar16) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    pFVar3 = (FName *)(*(longlong *)pTVar9 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    pFVar11 = `FControlRigStats::Dump'::__l2::FCounterTree::FindOrAddChild(&local_c8,pFVar3);
    pFVar11->Seconds = (double)pFVar3[1];
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  ::FString::FString(&local_48,L"");
  `FControlRigStats::Dump'::__l2::FCounterTree::Dump(&local_c8,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  iVar6 = (int)local_b0;
  puVar4 = local_b8 + (int)local_b0;
  puVar14 = local_b8;
  while( true ) {
    if ((int)local_b0 != iVar6) {
      `TCheckedPointerIterator<`FControlRigStats::Dump'::__l2::FCounterTree_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (puVar14 == puVar4) break;
    this_00 = (void *)*puVar14;
    if (this_00 != (void *)0x0) {
      `FControlRigStats::Dump'::__l2::FCounterTree::~FCounterTree(this_00);
      ::operator_delete(this_00,0x20);
    }
    puVar14 = puVar14 + 1;
  }
  if (local_b8 != (undefined8 *)0x0) {
    FMemory::Free(local_b8);
  }
  return;
}

// Get @ 14a25da20

FControlRigStats * __cdecl FControlRigStats::Get(void)

{
  return &GControlRigStats;
}

// ReleaseCounter @ 14a283960

void __thiscall FControlRigStats::ReleaseCounter(FControlRigStats *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  
  if ((this->Enabled != false) && (0 < (this->Stack).ArrayNum)) {
    iVar3 = (this->Stack).ArrayNum;
    uVar1 = iVar3 - 1;
    _Dst = (this->Stack).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
    iVar3 = ~uVar1 + iVar3;
    if (iVar3 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar3 << 3);
    }
    piVar2 = &(this->Stack).ArrayNum;
    *piVar2 = *piVar2 + -1;
  }
  return;
}

// RetainCounter @ 14a28ce50

double * __thiscall FControlRigStats::RetainCounter(FControlRigStats *this,FName *param_1)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  FName *pFVar8;
  longlong lVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  int local_res8 [4];
  FName *local_res18;
  FName local_res20;
  FName local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  
  if (this->Enabled == false) {
    return &GControlRigStatsCounter;
  }
  local_58 = *param_1;
  if (0 < (this->Stack).ArrayNum) {
    ::FName::ToString(param_1,&local_30);
    iVar5 = (this->Stack).ArrayNum;
    uVar10 = iVar5 - 1;
    uVar6 = 0;
    if ((int)uVar10 < iVar5) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pdVar7 = (double *)(*pcVar2)();
      return pdVar7;
    }
    ::FName::ToString((FName *)((this->Stack).AllocatorInstance.Data +
                               (longlong)(this->Stack).ArrayNum * 8 + -8),&local_40);
    ::FString::PrintfImpl(&local_50,L"%s.%s");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar11.Data = local_50.Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_res20,(wchar_t *)FVar11.Data);
    local_58 = *pFVar8;
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = (FName *)(this->Stack).AllocatorInstance.Data;
  if (((pFVar8 <= &local_58) && (&local_58 < pFVar8 + (this->Stack).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pdVar7 = (double *)(*pcVar2)();
    return pdVar7;
  }
  iVar5 = (this->Stack).ArrayNum;
  piVar1 = &(this->Stack).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->Stack).AllocatorInstance,piVar1);
  }
  FVar3 = local_58;
  (this->Stack).ArrayNum = iVar5 + 1;
  *(FName *)((this->Stack).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_58;
  uVar6 = ::GetTypeHash(local_58.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar3.Number;
  if (GControlRigStats.Counters._8_4_ != GControlRigStats.Counters._52_4_) {
    lVar9 = 0x154ca0fd0;
    if (GControlRigStats.Counters._64_8_ != 0) {
      lVar9 = GControlRigStats.Counters._64_8_;
    }
    iVar5 = *(int *)(lVar9 + (ulonglong)(GControlRigStats.Counters._72_4_ - 1 & uVar6) * 4);
    while (iVar5 != -1) {
      lVar9 = GControlRigStats.Counters._0_8_ + (longlong)iVar5 * 0x18;
      if (*(FName *)(GControlRigStats.Counters._0_8_ + (longlong)iVar5 * 0x18) == local_58) {
        if (lVar9 != 0) goto LAB_14a28d10e;
        break;
      }
      iVar5 = *(int *)(lVar9 + 0x10);
    }
  }
  local_res18 = &local_58;
  TSet<TTuple<FName,double>,TDefaultMapHashableKeyFuncs<FName,double,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,double>,TDefaultMapHashableKeyFuncs<FName,double,0>,FDefaultSetAllocator>
              *)&GControlRigStats.Counters,(uint)local_res8,
             (TKeyInitializer<FName_const_&> *)(ulonglong)uVar6,(bool *)&local_res18);
  lVar9 = GControlRigStats.Counters._0_8_ + (longlong)local_res8[0] * 0x18;
LAB_14a28d10e:
  return (double *)(lVar9 + 8);
}

// RetainCounter @ 14a28d130

double * __thiscall FControlRigStats::RetainCounter(FControlRigStats *this,wchar_t *param_1)

{
  FName *pFVar1;
  double *pdVar2;
  FName local_res18;
  FName local_res20;
  
  ::FName::FName(&local_res18,param_1,FNAME_Find);
  if (local_res18 == (FName)0x0) {
    pFVar1 = ::FName::FName(&local_res20,param_1,FNAME_Add);
    local_res18 = *pFVar1;
  }
  pdVar2 = RetainCounter(this,&local_res18);
  return pdVar2;
}

