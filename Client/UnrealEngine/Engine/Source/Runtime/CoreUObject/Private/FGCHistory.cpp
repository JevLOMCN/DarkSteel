// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// ~FGCHistory @ 142013210

void __thiscall FGCHistory::~FGCHistory(FGCHistory *this)

{
  FScriptContainerElement *pFVar1;
  
  Cleanup(this);
  DestructItems<FGCSnapshot,int>
            ((FGCSnapshot *)(this->Snapshots).AllocatorInstance.Data,(this->Snapshots).ArrayNum);
  pFVar1 = (this->Snapshots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Cleanup @ 142023950

void __thiscall FGCHistory::Cleanup(FGCHistory *this,FGCSnapshot *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  FGCSnapshot *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 *puVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_138;
  undefined4 uStack_104;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FGCSnapshot *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  iVar12 = 0;
  iVar2 = *(int *)&(param_1->DirectReferences).field_0x28;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->DirectReferences).field_0x10;
  local_138 = 1;
  iVar13 = 0;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar2 != 0) {
    puVar16 = *(uint **)&(param_1->DirectReferences).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_b0.Array;
    }
    uVar8 = *puVar16;
    iVar15 = 0;
    while (uVar8 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar8 = 1;
      iVar9 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142023a10;
      uVar8 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar8 & uVar8;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar15;
    if (iVar2 < iVar9) {
      iVar9 = iVar2;
    }
  }
LAB_142023a10:
  puVar17 = &(param_1->DirectReferences).field_0x10;
  uVar11 = *(uint *)&(param_1->DirectReferences).field_0x28;
  TStack_b0._padding_ = CONCAT44(uVar8,iVar13);
  uVar8 = uVar11 & 0xffffffe0;
  TStack_b0.CurrentBitIndex = iVar9;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar11 >> 5;
  TStack_b0._28_4_ = local_3c;
  TStack_b0.BaseBitIndex = iVar15;
  uStack_90 = CONCAT44(uStack_104,
                       *(int *)&(param_1->DirectReferences).field_0x8 -
                       *(int *)&(param_1->DirectReferences).field_0x34);
  if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(param_1->DirectReferences).field_0x28;
  if (uVar11 != uVar3) {
    puVar14 = *(undefined1 **)&(param_1->DirectReferences).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar17;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar13;
      uVar8 = uVar8 + 0x20;
      iVar13 = iVar13 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_142023b30;
      uVar11 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar8;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_142023b30:
  while( true ) {
    if (*(int *)&(param_1->DirectReferences).field_0x8 -
        *(int *)&(param_1->DirectReferences).field_0x34 != (int)uStack_90) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_b0.CurrentBitIndex == uVar11) &&
       (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) break;
    puVar4 = *(undefined8 **)
              (*(longlong *)&(param_1->DirectReferences).field_0x0 + 8 +
              (longlong)TStack_b0.CurrentBitIndex * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      if ((void *)*puVar4 != (void *)0x0) {
        FMemory::Free((void *)*puVar4);
      }
      ::operator_delete(puVar4,0x10);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  TSet<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
           *)&param_1->DirectReferences);
  iVar2 = *(int *)&(param_1->ObjectToInfoMap).field_0x28;
  puVar17 = &(param_1->ObjectToInfoMap).field_0x10;
  iVar13 = 0;
  iVar15 = 0;
  if (iVar2 != 0) {
    puVar16 = *(uint **)&(param_1->ObjectToInfoMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar17;
    }
    uVar8 = *puVar16;
    iVar13 = 0;
    while (uVar8 == 0) {
      lVar10 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      iVar15 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142023c21;
      uVar8 = puVar16[lVar10 + 1];
    }
    local_138 = -uVar8 & uVar8;
    uVar1 = (ulonglong)local_138 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar15 = iVar13 + -1 + (int)lVar10;
    if (iVar2 < iVar15) {
      iVar15 = iVar2;
    }
  }
LAB_142023c21:
  uVar8 = *(uint *)&(param_1->ObjectToInfoMap).field_0x28;
  uVar11 = uVar8 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(local_138,iVar12);
  TStack_80.CurrentBitIndex = iVar15;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar8 >> 5;
  TStack_80._28_4_ = iVar9;
  TStack_80.BaseBitIndex = iVar13;
  uStack_60 = CONCAT44(uStack_bc,
                       *(int *)&(param_1->ObjectToInfoMap).field_0x8 -
                       *(int *)&(param_1->ObjectToInfoMap).field_0x34);
  local_88 = param_1;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar17;
  if ((((int)uVar8 < 0) || (iVar2 < (int)uVar8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(param_1->ObjectToInfoMap).field_0x28;
  if (uVar8 != uVar3) {
    puVar14 = *(undefined1 **)&(param_1->ObjectToInfoMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar17;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar8 == 0) {
      lVar10 = (longlong)iVar12;
      uVar11 = uVar11 + 0x20;
      iVar12 = iVar12 + 1;
      uVar8 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142023d20;
      uVar8 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar8 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar3 < (int)uVar8) {
      uVar8 = uVar3;
    }
  }
LAB_142023d20:
  while( true ) {
    pFVar6 = local_88;
    if (*(int *)&(local_88->ObjectToInfoMap).field_0x8 -
        *(int *)&(local_88->ObjectToInfoMap).field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_80.CurrentBitIndex == uVar8) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) && (pFVar6 == param_1)
       ) break;
    ::operator_delete(*(void **)(*(longlong *)&pFVar6->ObjectToInfoMap + 8 +
                                (longlong)TStack_80.CurrentBitIndex * 0x18),0x30);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
           *)param_1);
  return;
}

// Cleanup @ 142023da0

void __thiscall FGCHistory::Cleanup(FGCHistory *this)

{
  int *piVar1;
  int iVar2;
  FGCSnapshot *pFVar3;
  FGCSnapshot *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Snapshots).ArrayNum;
  pFVar4 = (FGCSnapshot *)(this->Snapshots).AllocatorInstance.Data;
  pFVar3 = pFVar4 + iVar2;
  while( true ) {
    if ((this->Snapshots).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGCSnapshot,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar3) break;
    Cleanup(this,pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  this->GCBarrier = (UObject *)0x0;
  DestructItems<FGCSnapshot,int>
            ((FGCSnapshot *)(this->Snapshots).AllocatorInstance.Data,(this->Snapshots).ArrayNum);
  piVar1 = &(this->Snapshots).ArrayMax;
  (this->Snapshots).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  this->MostRecentSnapshotIndex = -1;
  return;
}

// Get @ 142054970

FGCHistory * __cdecl FGCHistory::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FGCHistory::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Singleton;
}

// GetAllocatedSize @ 1420549e0

long64 __thiscall FGCHistory::GetAllocatedSize(FGCHistory *this)

{
  int iVar1;
  long64 lVar2;
  FGCSnapshot *this_00;
  FGCSnapshot *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Snapshots).ArrayNum;
  this_00 = (FGCSnapshot *)(this->Snapshots).AllocatorInstance.Data;
  lVar4 = (longlong)(this->Snapshots).ArrayMax * 0xa0;
  pFVar3 = this_00 + iVar1;
  while( true ) {
    if ((this->Snapshots).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FGCSnapshot_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar3) break;
    lVar2 = FGCSnapshot::GetAllocatedSize(this_00);
    lVar4 = lVar4 + lVar2;
    this_00 = this_00 + 1;
  }
  return lVar4;
}

// GetInfoReferenceToken @ 142054fc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FReferenceToken __thiscall
FGCHistory::GetInfoReferenceToken(FGCHistory *this,FReferenceToken param_1,FGCSnapshot *param_2)

{
  code *pcVar1;
  bool bVar2;
  FReferenceToken FVar3;
  FGCObjectInfo *pFVar4;
  uint uVar5;
  TMap<UObject_const_*,FGCObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>_>
  *in_R9;
  
  uVar5 = (uint)param_2 & 7;
  if (((ulonglong)param_2 & 7) == 0) {
    uVar5 = (uint)param_2;
  }
  if (uVar5 == 1) {
    pFVar4 = FGCObjectInfo::FindOrAddInfoHelper
                       ((UObject *)((ulonglong)param_2 & 0xfffffffffffffff8),in_R9);
    *(ulonglong *)param_1.EncodedBits = (ulonglong)pFVar4 | 4;
    return (FReferenceToken)param_1.EncodedBits;
  }
  if (uVar5 != 3) {
    *(FGCSnapshot **)param_1.EncodedBits = param_2;
    return (FReferenceToken)param_1.EncodedBits;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionHistory.cpp"
                     ,0x9a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3.EncodedBits = (*pcVar1)();
    return (FReferenceToken)FVar3.EncodedBits;
  }
  *(FGCSnapshot **)param_1.EncodedBits = param_2;
  return (FReferenceToken)param_1.EncodedBits;
}

// GetSnapshot @ 142055ef0

FGCSnapshot * __thiscall FGCHistory::GetSnapshot(FGCHistory *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FGCSnapshot *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar4 = -param_1;
  if (-param_1 < 0) {
    iVar4 = param_1;
  }
  iVar1 = (this->Snapshots).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar4 < iVar1) {
    iVar6 = iVar4;
  }
  uVar8 = this->MostRecentSnapshotIndex - iVar6;
  uVar10 = uVar8 + iVar1;
  if (-1 < (int)uVar8) {
    uVar10 = uVar8;
  }
  if ((-1 < (int)uVar10) && ((int)uVar10 < iVar1)) {
    if (((int)uVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGCSnapshot *)(*pcVar3)();
      return pFVar7;
    }
    pFVar2 = (this->Snapshots).AllocatorInstance.Data;
    lVar9 = (longlong)(int)uVar10 * 0xa0;
    if (*(int *)(pFVar2 + lVar9 + 8) != *(int *)(pFVar2 + lVar9 + 0x34)) {
      uVar8 = 0;
      if ((int)uVar10 < (this->Snapshots).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FGCSnapshot *)(*pcVar3)();
        return pFVar7;
      }
      return (FGCSnapshot *)((this->Snapshots).AllocatorInstance.Data + lVar9);
    }
  }
  return (FGCSnapshot *)0x0;
}

// MergeArrayStructHistory @ 142065550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FGCHistory::MergeArrayStructHistory
          (FGCHistory *this,
          TMap<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
          *param_1,FGCSnapshot *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  ForAnyElementType *pFVar10;
  ulonglong uVar11;
  FGCObjectInfo *pFVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  ForAnyElementType *pFVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined1 local_res20 [8];
  undefined1 local_d8 [4];
  uint local_d4;
  ulonglong local_d0;
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  ulonglong uStack_b8;
  TMap<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  ulonglong *local_78;
  TBitArray<FDefaultBitArrayAllocator> *local_70;
  TMap<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = *(int *)&param_1->field_0x28;
  pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar9 != 0) {
    puVar19 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)pTVar22;
    }
    uVar18 = *puVar19;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1420655fd;
      uVar18 = puVar19[lVar13 + 1];
    }
    uStack_a4 = -uVar18 & uVar18;
    uVar11 = (ulonglong)uStack_a4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_80 = (int)lVar13;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar9 < iStack_94) {
      iStack_94 = iVar9;
    }
  }
LAB_1420655fd:
  uVar18 = *(uint *)&param_1->field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_88 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_98 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_60.CurrentBitIndex = iStack_94;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_60._28_4_ = iStack_94;
  TStack_60.BaseBitIndex = local_90;
  uStack_40 = CONCAT44(uStack_84,iStack_88);
  local_d4 = uVar18;
  local_b0 = param_1;
  local_a0 = (undefined1 *)pTVar22;
  iStack_8c = iStack_94;
  local_70 = pTVar22;
  local_68 = param_1;
  TStack_60.Array = pTVar22;
  if ((((int)uVar18 < 0) || (iVar9 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = *(uint *)&param_1->field_0x28;
  if (uVar18 != uVar2) {
    puVar20 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar20 = (undefined1 *)pTVar22;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar2;
      local_d4 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_142065701;
      uVar18 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_7c = (int)lVar13;
    uVar18 = local_7c + -1 + uVar17;
    local_d4 = uVar18;
    if ((int)uVar2 < (int)uVar18) {
      uVar18 = uVar2;
      local_d4 = uVar2;
    }
  }
LAB_142065701:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_60.CurrentBitIndex == uVar18) && (TStack_60.Array == pTVar22)) &&
       (pTVar7 == param_1)) {
      return;
    }
    lVar13 = *(longlong *)pTVar7;
    uVar11 = *(ulonglong *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    lVar13 = lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x18;
    uVar18 = (uint)uVar11;
    if ((uVar11 & 7) != 0) {
      uVar18 = (uint)uVar11 & 7;
    }
    if (uVar18 == 1) {
      pFVar12 = FGCObjectInfo::FindOrAddInfoHelper
                          ((UObject *)(uVar11 & 0xfffffffffffffff8),&param_2->ObjectToInfoMap);
      uVar11 = (ulonglong)pFVar12 | 4;
    }
    else if ((uVar18 == 3) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Unimplemented function called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionHistory.cpp"
                                ,0x9a,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_d0 = uVar11;
    uVar18 = (int)(local_d0 >> 0x20) * 0x17 + (int)local_d0;
    if (*(int *)&(param_2->DirectReferences).field_0x8 !=
        *(int *)&(param_2->DirectReferences).field_0x34) {
      puVar20 = *(undefined1 **)&(param_2->DirectReferences).field_0x40;
      puVar14 = &(param_2->DirectReferences).field_0x38;
      if (puVar20 != (undefined1 *)0x0) {
        puVar14 = puVar20;
      }
      iVar9 = *(int *)(puVar14 +
                      (ulonglong)(*(int *)&(param_2->DirectReferences).field_0x48 - 1U & uVar18) * 4
                      );
      if (iVar9 != -1) {
        do {
          lVar24 = *(longlong *)&param_2->DirectReferences + (longlong)iVar9 * 0x18;
          if (*(ulonglong *)(*(longlong *)&param_2->DirectReferences + (longlong)iVar9 * 0x18) ==
              local_d0) {
            if (lVar24 != 0) goto LAB_142065849;
            break;
          }
          iVar9 = *(int *)(lVar24 + 0x10);
        } while (iVar9 != -1);
      }
    }
    local_78 = &local_d0;
    TSet<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FReferenceToken_const_&>_>
              ((TSet<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                *)&param_2->DirectReferences,(uint)&local_c8,
               (TKeyInitializer<FReferenceToken_const_&> *)(ulonglong)uVar18,(bool *)&local_78);
    lVar24 = *(longlong *)&param_2->DirectReferences + (longlong)local_c8 * 0x18;
LAB_142065849:
    pFVar16 = (ForAnyElementType *)0x0;
    if (*(longlong *)(lVar24 + 8) == 0) {
      pFVar10 = ::operator_new(0x10);
      if (pFVar10 != (ForAnyElementType *)0x0) {
        pFVar10->Data = (FScriptContainerElement *)0x0;
        pFVar10[1].Data = (FScriptContainerElement *)0x0;
        pFVar16 = pFVar10;
      }
      *(ForAnyElementType **)(lVar24 + 8) = pFVar16;
      uVar18 = *(uint *)(*(longlong *)(lVar13 + 8) + 8);
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if (*(int *)((longlong)&pFVar16[1].Data + 4) < (int)uVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar18,pFVar16,*(int *)&pFVar16[1].Data,
                   (int *)((longlong)&pFVar16[1].Data + 4));
      }
    }
    plVar3 = *(longlong **)(lVar13 + 8);
    local_c4 = *(uint *)(plVar3 + 1);
    uVar11 = (ulonglong)(int)local_c4;
    puVar23 = (undefined8 *)*plVar3;
    puVar21 = puVar23 + uVar11 * 2;
    while( true ) {
      if ((int)plVar3[1] != (int)uVar11) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<FGCDirectReference,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (puVar23 == puVar21) break;
      uVar11 = puVar23[1];
      pFVar16 = *(ForAnyElementType **)(lVar24 + 8);
      uVar4 = *puVar23;
      uVar18 = (uint)uVar11;
      if ((uVar11 & 7) != 0) {
        uVar18 = (uint)uVar11 & 7;
      }
      if (uVar18 == 1) {
        pFVar12 = FGCObjectInfo::FindOrAddInfoHelper
                            ((UObject *)(uVar11 & 0xfffffffffffffff8),&param_2->ObjectToInfoMap);
        uVar11 = (ulonglong)pFVar12 | 4;
      }
      else if ((uVar18 == 3) &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Unimplemented function called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionHistory.cpp"
                                  ,0x9a,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_c0 = uVar4;
      uStack_b8 = uVar11;
      if (((pFVar16->Data <= (FScriptContainerElement *)&local_c0) &&
          ((FScriptContainerElement *)&local_c0 <
           pFVar16->Data + (longlong)*(int *)((longlong)&pFVar16[1].Data + 4) * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)&pFVar16[1].Data;
      piVar1 = (int *)((longlong)&pFVar16[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar16,piVar1);
      }
      *(int *)&pFVar16[1].Data = iVar9 + 1;
      pFVar5 = pFVar16->Data;
      puVar23 = puVar23 + 2;
      *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x10) = local_c0;
      *(ulonglong *)(pFVar5 + (longlong)iVar9 * 0x10 + 8) = uStack_b8;
      uVar11 = (ulonglong)local_c4;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    pTVar22 = local_70;
    uVar18 = local_d4;
  } while( true );
}

// SetHistorySize @ 14208ead0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FGCHistory::SetHistorySize(FGCHistory *this,int param_1)

{
  int *piVar1;
  FName FVar2;
  longlong lVar3;
  int iVar4;
  FName *pFVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FUObjectItem *pFVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStackY_e8 [32];
  FName local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  piVar1 = &(this->Snapshots).ArrayNum;
  if ((param_1 == *piVar1) || (Cleanup(this), param_1 < 1)) {
    pUVar8 = this->GCBarrier;
    if (param_1 < 1) {
      if (pUVar8 == (UObject *)0x0) {
        return;
      }
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar8->field_0xc);
      do {
        lVar3 = (pFVar9->field0_0x0).FlagsAndRefCount;
        uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
        if ((uVar11 >> 0x1e & 1) == 0) {
          return;
        }
        if (((ulonglong)pFVar9 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar12 = lVar3 == (pFVar9->field0_0x0).FlagsAndRefCount;
        if (bVar12) {
          (pFVar9->field0_0x0).FlagsAndRefCount =
               ((longlong)(int)uVar11 & 0xffffffffbfffffffU) << 0x20 | (longlong)(int)lVar3;
        }
        UNLOCK();
      } while (!bVar12);
      if ((lVar3 >> 0x20 & 0x4e500000U) == 0) {
        return;
      }
      if ((lVar3 >> 0x20 & 0xe500000U) != 0) {
        return;
      }
      if ((int)lVar3 != 0) {
        return;
      }
      FUObjectItem::MarkRootAsDirty(pFVar9);
      return;
    }
  }
  else {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa0,8,param_1,(ForAnyElementType *)this,piVar1,&(this->Snapshots).ArrayMax);
    DefaultConstructItems<FGCSnapshot,int>
              ((this->Snapshots).AllocatorInstance.Data + (longlong)iVar4 * 0xa0,param_1);
    pUVar8 = this->GCBarrier;
  }
  if (pUVar8 == (UObject *)0x0) {
    pFVar5 = ::FName::FName(local_b8,L"GC_Barrier");
    FVar2 = *pFVar5;
    pUVar6 = GetTransientPackage();
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar6,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = Z_Construct_UClass_UGCBarrier_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar7);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = pUVar6;
    local_a8._16_8_ = FVar2;
    pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar10 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    this->GCBarrier = pUVar8;
    pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar8->field_0xc);
    FUObjectItem::ThisThreadAtomicallySetFlag(pFVar9,RootSet);
  }
  return;
}

// Update @ 142093300

void __thiscall
FGCHistory::Update(FGCHistory *this,
                  TArrayView<TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_>_const_,int>
                  *param_1)

{
  TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_> *pTVar7;
  FGCSnapshot *pFVar8;
  
  iVar2 = (this->Snapshots).ArrayNum;
  if (0 < iVar2) {
    uVar6 = (this->MostRecentSnapshotIndex + 1) % iVar2;
    this->MostRecentSnapshotIndex = uVar6;
    uVar5 = 0;
    if ((int)uVar6 < iVar2) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = (FGCSnapshot *)((this->Snapshots).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xa0)
    ;
    if (*(int *)&(pFVar8->DirectReferences).field_0x8 !=
        *(int *)&(pFVar8->DirectReferences).field_0x34) {
      Cleanup(this,pFVar8);
    }
    pTVar7 = param_1->DataPtr;
    pTVar1 = pTVar7 + param_1->ArrayNum;
    for (; pTVar7 != pTVar1; pTVar7 = pTVar7 + 1) {
      MergeArrayStructHistory(this,&pTVar7->Ptr->History,pFVar8);
    }
  }
  return;
}

