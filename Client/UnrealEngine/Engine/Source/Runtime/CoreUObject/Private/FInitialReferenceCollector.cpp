// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// AddStableReference @ 141e8f2d0

void __thiscall
FInitialReferenceCollector::AddStableReference(FInitialReferenceCollector *this,UObject **param_1)

{
  TArray<UObject_*_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject **local_res10 [3];
  
  pTVar1 = this->Result;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)pTVar1->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar5 + 1;
  *(UObject ***)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// AddStableReference @ 141e8f380

void __thiscall
FInitialReferenceCollector::AddStableReference
          (FInitialReferenceCollector *this,TObjectPtr<UObject> *param_1)

{
  TArray<UObject_*_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UObject> *local_18 [2];
  
  pTVar1 = this->Result;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)pTVar1->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar5 + 1;
  *(TObjectPtr<UObject> **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// AddStableReferenceArray @ 141e8f430

void __thiscall
FInitialReferenceCollector::AddStableReferenceArray
          (FInitialReferenceCollector *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UObject_*_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_28 [2];
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar1) break;
    pTVar3 = this->Result;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    local_28[0] = pFVar8;
    if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)pTVar3->ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = pTVar3->ArrayNum;
    if (iVar7 == pTVar3->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
    }
    pTVar3->ArrayNum = iVar7 + 1;
    pFVar8 = pFVar8 + 8;
    *(FScriptContainerElement **)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_28[0];
  }
  return;
}

// AddStableReferenceArray @ 141e8f560

void __thiscall
FInitialReferenceCollector::AddStableReferenceArray
          (FInitialReferenceCollector *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UObject_*_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_28 [2];
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar1) break;
    pTVar3 = this->Result;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    local_28[0] = pFVar8;
    if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)pTVar3->ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = pTVar3->ArrayNum;
    if (iVar7 == pTVar3->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
    }
    pTVar3->ArrayNum = iVar7 + 1;
    pFVar8 = pFVar8 + 8;
    *(FScriptContainerElement **)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_28[0];
  }
  return;
}

// AddStableReferenceSet @ 141e8f690

void __thiscall
FInitialReferenceCollector::AddStableReferenceSet
          (FInitialReferenceCollector *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  TArray<UObject_*_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  longlong local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_141e8f72d;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_84 = local_res18 + -1 + local_80;
    if (iVar9 < iStack_84) {
      iStack_84 = iVar9;
    }
  }
LAB_141e8f72d:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141e8f830;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar13 = local_res20 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_141e8f830:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    pTVar4 = this->Result;
    local_a8 = (longlong)TStack_68.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements;
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar5 + (longlong)pTVar4->ArrayMax * 8)) &&
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
    iVar9 = pTVar4->ArrayNum;
    if (iVar9 == pTVar4->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
    }
    pTVar4->ArrayNum = iVar9 + 1;
    *(longlong *)((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_a8;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// AddStableReferenceSet @ 141e8f940

void __thiscall
FInitialReferenceCollector::AddStableReferenceSet
          (FInitialReferenceCollector *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  TArray<UObject_*_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  longlong local_a8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_141e8f9dd;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_84 = local_res18 + -1 + local_80;
    if (iVar9 < iStack_84) {
      iStack_84 = iVar9;
    }
  }
LAB_141e8f9dd:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141e8fae0;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar13 = local_res20 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_141e8fae0:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    pTVar4 = this->Result;
    local_a8 = (longlong)TStack_68.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements;
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar5 + (longlong)pTVar4->ArrayMax * 8)) &&
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
    iVar9 = pTVar4->ArrayNum;
    if (iVar9 == pTVar4->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
    }
    pTVar4->ArrayNum = iVar9 + 1;
    *(longlong *)((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_a8;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// HandleObjectReference @ 141ea43b0

void __thiscall
FInitialReferenceCollector::HandleObjectReference
          (FInitialReferenceCollector *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\GCObjectReferencer.cpp"
                     ,0xf0,
                     L"FGCObject constructed with AddStableNativeReferencesOnly should only call AddStableReference, not HandleObjectReference"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// IsIgnoringArchetypeRef @ 141ea9650

bool __thiscall FInitialReferenceCollector::IsIgnoringArchetypeRef(FInitialReferenceCollector *this)

{
  return false;
}

// IsIgnoringTransient @ 141ea9660

bool __thiscall FInitialReferenceCollector::IsIgnoringTransient(FInitialReferenceCollector *this)

{
  return false;
}

// SetIsProcessingNativeReferences @ 141ebc230

void __thiscall
FInitialReferenceCollector::SetIsProcessingNativeReferences
          (FInitialReferenceCollector *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\GCObjectReferencer.cpp"
                     ,0xfc,
                     L"FGCObject constructed with AddStableNativeReferencesOnly should never flip to non-native references"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

