// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// operator() @ 143b84660

bool __thiscall
`Chaos::FColoringGraph::Colorize'::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  plVar2 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  plVar3 = *(longlong **)this;
  iVar1 = *(int *)((longlong)param_1 * 0x20 + 0x14 + *plVar2);
  uVar7 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  return iVar1 < *(int *)((longlong)param_2 * 0x20 + 0x14 + *plVar3);
}

// AssignColor @ 143b9f080

void __thiscall Chaos::FColoringGraph::AssignColor(FColoringGraph *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  uint local_res20;
  ForAnyElementType local_58;
  int local_50 [4];
  
  uVar13 = 0;
  uVar17 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar4 = uVar17;
  }
  local_res10 = param_1;
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar16 = (longlong)param_1 * 0x20;
  if (*(int *)((this->Vertices).AllocatorInstance.Data + lVar16 + 0x18) != -1) {
    return;
  }
  uVar4 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar4 = uVar17;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res20 = *(uint *)((this->Vertices).AllocatorInstance.Data + lVar16 + 0x10);
  lVar11 = (longlong)(int)local_res20;
  uVar8 = ~local_res20;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  uVar5 = 0;
  uVar4 = uVar5;
  if ((int)local_res20 < (this->Islands).ArrayNum) {
    uVar4 = uVar8 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar11 = lVar11 * 0x18;
  uVar4 = *(uint *)((this->Islands).AllocatorInstance.Data + lVar11 + 0x10);
  if (local_50[0] < (int)uVar4) {
    iVar9 = uVar4 - local_50[0];
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar9,&local_58,local_50,local_50 + 1);
    memset(local_58.Data + iVar6,0,(longlong)iVar9);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < local_50[0]) {
      uVar14 = local_50[0] - uVar4;
      if (((int)(uVar4 | uVar14) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar14 != 0) {
        iVar6 = (local_50[0] - uVar4) - uVar14;
        if (iVar6 != 0) {
          memmove(local_58.Data + (int)uVar4,local_58.Data + (int)uVar4 + (int)uVar14,
                  (longlong)iVar6);
        }
        iVar6 = local_50[0] - uVar14;
        local_50[0] = iVar6;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&local_58,iVar6,local_50 + 1);
      }
    }
  }
  uVar4 = uVar5;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar4 = uVar17;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar19 = (this->Vertices).AllocatorInstance.Data + lVar16;
  local_res18 = *(uint *)(pFVar19 + 8);
  uVar7 = (ulonglong)(int)local_res18;
  puVar18 = *(uint **)pFVar19;
  puVar1 = puVar18 + uVar7;
  while( true ) {
    if (*(int *)(pFVar19 + 8) != (int)uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    uVar4 = 0;
    if (puVar18 == puVar1) break;
    uVar14 = *puVar18;
    lVar12 = (longlong)(int)uVar14;
    uVar15 = ~uVar14 >> 0x1f;
    uVar10 = uVar5;
    if ((int)uVar14 < (this->Edges).ArrayNum) {
      uVar10 = uVar15;
    }
    if ((uVar10 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = (this->Edges).ArrayNum;
    if (*(int *)((this->Edges).AllocatorInstance.Data + lVar12 * 8) == local_res10) {
      if ((int)uVar14 < iVar6) {
        uVar4 = uVar15;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)((this->Edges).AllocatorInstance.Data + lVar12 * 8 + 4);
    }
    else {
      if ((int)uVar14 < iVar6) {
        uVar4 = uVar15;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)((this->Edges).AllocatorInstance.Data + lVar12 * 8);
    }
    uVar14 = uVar5;
    if ((int)uVar4 < (this->Vertices).ArrayNum) {
      uVar14 = ~uVar4 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = *(uint *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20 + 0x18);
    if (uVar4 != 0xffffffff) {
      uVar14 = uVar5;
      if ((int)uVar4 < local_50[0]) {
        uVar14 = ~uVar4 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_58.Data[(int)uVar4] = (FScriptContainerElement)0x1;
    }
    uVar7 = (ulonglong)local_res18;
    puVar18 = puVar18 + 1;
  }
  uVar5 = 0xffffffff;
  uVar7 = uVar13;
  if (0 < local_50[0]) {
    do {
      uVar10 = (uint)uVar13;
      uVar14 = uVar4;
      if ((int)uVar10 < local_50[0]) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = uVar10;
      if (local_58.Data[uVar7] != (FScriptContainerElement)0x0) {
        uVar14 = uVar5;
      }
      uVar13 = (ulonglong)(uVar10 + 1);
      uVar7 = uVar7 + 1;
      uVar5 = uVar14;
    } while ((int)(uVar10 + 1) < local_50[0]);
    if (uVar14 != 0xffffffff) goto LAB_143b9f5af;
  }
  uVar5 = uVar4;
  if ((int)local_res20 < (this->Islands).ArrayNum) {
    uVar5 = uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar19 = (this->Islands).AllocatorInstance.Data;
  uVar14 = *(uint *)(pFVar19 + lVar11 + 0x10);
  *(uint *)(pFVar19 + lVar11 + 0x10) = uVar14 + 1;
LAB_143b9f5af:
  if (local_res10 < (this->Vertices).ArrayNum) {
    uVar4 = uVar17;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)((this->Vertices).AllocatorInstance.Data + lVar16 + 0x18) = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// Colorize @ 143ba1540

void __thiscall Chaos::FColoringGraph::Colorize(FColoringGraph *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  FIdentityFunctor local_res8 [8];
  FColoringGraph *local_res10;
  int local_38 [2];
  ForAnyElementType local_30;
  uint local_28;
  uint auStack_24 [3];
  
  uVar4 = (this->Vertices).ArrayNum;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  auStack_24[0] = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&local_30,0,(int *)auStack_24);
  }
  local_38[0] = 0;
  if (0 < (this->Vertices).ArrayNum) {
    do {
      if (((local_30.Data <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < local_30.Data + (longlong)(int)auStack_24[0] * 4))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_28 == auStack_24[0]) {
        local_28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_30,(int *)auStack_24);
      }
      uVar4 = local_28 + 1;
      *(int *)(local_30.Data + (longlong)(int)local_28 * 4) = local_38[0];
      local_38[0] = local_38[0] + 1;
      local_28 = uVar4;
    } while (local_38[0] < (this->Vertices).ArrayNum);
  }
  local_res10 = this;
  AlgoImpl::
  StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,_Chaos::FColoringGraph::Colorize_::__l2::<lambda_1>_>_>
            ((int *)local_30.Data,local_28,local_res8[0],(<lambda_1> *)&local_res10);
  uVar4 = local_28;
  uVar5 = (ulonglong)(int)local_28;
  pFVar1 = local_30.Data + uVar5 * 4;
  FVar6.Data = local_30.Data;
  while( true ) {
    if ((uint)uVar5 != uVar4) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    AssignColor(this,*(int *)FVar6.Data);
    uVar5 = (ulonglong)local_28;
    FVar6.Data = FVar6.Data + 4;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return;
}

// Islandize @ 143baac00

void __thiscall Chaos::FColoringGraph::Islandize(FColoringGraph *this)

{
  int *piVar1;
  int iVar2;
  FIsland *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint local_28 [4];
  
  piVar1 = &(this->Islands).ArrayMax;
  pFVar3 = (FIsland *)(this->Islands).AllocatorInstance.Data;
  iVar8 = (this->Islands).ArrayNum;
  if ((this->Islands).ArrayMax < 0) {
    DestructItems<Chaos::FColoringGraph::FIsland,int>(pFVar3,iVar8);
    (this->Islands).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->Islands).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FColoringGraph::FIsland,int>(pFVar3,iVar8);
    (this->Islands).ArrayNum = 0;
  }
  local_28[0] = 0;
  if (0 < (this->Vertices).ArrayNum) {
    do {
      uVar6 = (this->Islands).ArrayNum;
      if (uVar6 == *piVar1) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(this->Islands).AllocatorInstance,piVar1);
      }
      (this->Islands).ArrayNum = uVar6 + 1;
      DefaultConstructItems<Chaos::FColoringGraph::FIsland,int>
                ((this->Islands).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18,1);
      lVar12 = (longlong)(int)local_28[0];
      uVar7 = 0;
      if ((int)local_28[0] < (this->Vertices).ArrayNum) {
        uVar7 = ~local_28[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(uint *)((this->Vertices).AllocatorInstance.Data + lVar12 * 0x20 + 0x10) = uVar6;
      uVar7 = 0;
      if ((int)uVar6 < (this->Islands).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (this->Islands).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18;
      if (((*(uint **)&pFVar11->field_0x0 <= local_28) &&
          (local_28 < *(uint **)&pFVar11->field_0x0 + *(int *)(pFVar11 + 0xc))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = *(int *)&pFVar11[8].field_0x0;
      if (iVar8 == *(int *)(pFVar11 + 0xc)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar8 + 1;
      *(uint *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar8 * 4) = local_28[0];
      local_28[0] = local_28[0] + 1;
    } while ((int)local_28[0] < (this->Vertices).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (this->Edges).ArrayNum) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar6 < (this->Edges).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = *(uint *)((this->Edges).AllocatorInstance.Data + lVar12);
      uVar9 = 0;
      if ((int)uVar6 < (this->Edges).ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = *(uint *)((this->Edges).AllocatorInstance.Data + lVar12 + 4);
      uVar10 = 0;
      if ((int)uVar7 < (this->Vertices).ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 0x10)
      ;
      uVar7 = 0;
      if ((int)uVar9 < (this->Vertices).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 0x10)
      ;
      if (iVar8 != iVar2) {
        MergeIslands(this,iVar8,iVar2);
      }
      uVar6 = uVar6 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar6 < (this->Edges).ArrayNum);
  }
  PackIslands(this);
  return;
}

// Levelize @ 143baafe0

void __thiscall Chaos::FColoringGraph::Levelize(FColoringGraph *this)

{
  code *pcVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint *puVar10;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  longlong local_res20;
  uint local_78;
  uint local_74;
  uint local_70 [2];
  uint *local_68;
  ForAnyElementType local_60;
  int local_58;
  int aiStack_54 [5];
  
  uVar5 = (this->Vertices).ArrayNum;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  aiStack_54[0] = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar5,&local_60,0,aiStack_54);
  }
  iVar8 = (this->Vertices).ArrayNum;
  local_78 = 0;
  if (0 < iVar8) {
    do {
      uVar5 = local_78;
      uVar4 = 0;
      if ((int)local_78 < iVar8) {
        uVar4 = ~local_78 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20 + 0x14) ==
          0) {
        if (((local_60.Data <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < local_60.Data + (longlong)aiStack_54[0] * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_58 == aiStack_54[0]) {
          local_58 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_60,aiStack_54);
        }
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        *(uint *)(local_60.Data + lVar6 * 4) = local_78;
      }
      iVar8 = (this->Vertices).ArrayNum;
      local_78 = local_78 + 1;
    } while ((int)local_78 < iVar8);
  }
  local_res10 = 0;
  if (0 < local_58) {
    local_res20 = 0;
    do {
      lVar6 = local_res20;
      uVar5 = 0;
      if ((int)local_res10 < local_58) {
        uVar5 = ~local_res10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = *(uint *)(local_60.Data + lVar6);
      uVar4 = 0;
      if ((int)uVar5 < (this->Vertices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar8 = *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20 + 0x14)
      ;
      uVar4 = 0;
      if ((int)uVar5 < (this->Vertices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar9 = (this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20;
      local_res18 = *(uint *)(pFVar9 + 8);
      uVar7 = (ulonglong)(int)local_res18;
      puVar10 = *(uint **)pFVar9;
      local_68 = puVar10 + uVar7;
      while( true ) {
        puVar2 = local_68;
        if (*(int *)(pFVar9 + 8) != (int)uVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (puVar10 == puVar2) break;
        uVar5 = *puVar10;
        uVar4 = 0;
        if ((int)uVar5 < (this->Edges).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_74 = *(uint *)((this->Edges).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
        uVar4 = 0;
        if ((int)uVar5 < (this->Edges).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar6 = (longlong)(int)local_74;
        local_70[0] = *(uint *)((this->Edges).AllocatorInstance.Data + (longlong)(int)uVar5 * 8 + 4)
        ;
        uVar5 = 0;
        if ((int)local_74 < (this->Vertices).ArrayNum) {
          uVar5 = ~local_74 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)((this->Vertices).AllocatorInstance.Data + lVar6 * 0x20 + 0x14) == -1) {
          lVar6 = (longlong)(int)local_74;
          uVar5 = 0;
          if ((int)local_74 < (this->Vertices).ArrayNum) {
            uVar5 = ~local_74 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          *(int *)((this->Vertices).AllocatorInstance.Data + lVar6 * 0x20 + 0x14) = iVar8 + 1;
          if (((local_60.Data <= (FScriptContainerElement *)&local_74) &&
              ((FScriptContainerElement *)&local_74 < local_60.Data + (longlong)aiStack_54[0] * 4))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_58 == aiStack_54[0]) {
            local_58 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_60,aiStack_54);
          }
          *(uint *)(local_60.Data + (longlong)local_58 * 4) = local_74;
          local_58 = local_58 + 1;
        }
        lVar6 = (longlong)(int)local_70[0];
        uVar5 = 0;
        if ((int)local_70[0] < (this->Vertices).ArrayNum) {
          uVar5 = ~local_70[0] >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)((this->Vertices).AllocatorInstance.Data + lVar6 * 0x20 + 0x14) == -1) {
          lVar6 = (longlong)(int)local_70[0];
          uVar5 = 0;
          if ((int)local_70[0] < (this->Vertices).ArrayNum) {
            uVar5 = ~local_70[0] >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          *(int *)((this->Vertices).AllocatorInstance.Data + lVar6 * 0x20 + 0x14) = iVar8 + 1;
          if (((local_60.Data <= (FScriptContainerElement *)local_70) &&
              ((FScriptContainerElement *)local_70 < local_60.Data + (longlong)aiStack_54[0] * 4))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_58 == aiStack_54[0]) {
            local_58 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_60,aiStack_54);
          }
          *(uint *)(local_60.Data + (longlong)local_58 * 4) = local_70[0];
          local_58 = local_58 + 1;
        }
        uVar7 = (ulonglong)local_res18;
        puVar10 = puVar10 + 1;
      }
      local_res10 = local_res10 + 1;
      local_res20 = local_res20 + 4;
    } while ((int)local_res10 < local_58);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// MergeIslands @ 143bab6a0

void __thiscall Chaos::FColoringGraph::MergeIslands(FColoringGraph *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  uVar8 = 0;
  if (param_1 < (this->Islands).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (this->Islands).AllocatorInstance.Data + (longlong)param_1 * 0x18;
  uVar8 = 0;
  if (param_2 < (this->Islands).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar10 = (this->Islands).AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)param_2 * 0x18;
  pFVar9 = pFVar2;
  if (*(int *)(pFVar10 + (longlong)param_2 * 0x18 + 8) <= *(int *)&pFVar1[8].field_0x0) {
    pFVar9 = pFVar1;
    param_2 = param_1;
    pFVar1 = pFVar2;
  }
  if (0 < *(int *)&pFVar1[8].field_0x0) {
    if ((pFVar9 == pFVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar3 = *(int *)&pFVar1[8].field_0x0;
    if (iVar3 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar3,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 8),
                         (int *)(pFVar9 + 0xc));
      memcpy((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar6 * 4),
             *(FScriptContainerElement **)&pFVar1->field_0x0,(longlong)iVar3 << 2);
    }
    pFVar10 = *(FScriptContainerElement **)&pFVar1->field_0x0;
    iVar3 = *(int *)&pFVar1[8].field_0x0;
    pFVar2 = pFVar10 + (longlong)iVar3 * 4;
    while( true ) {
      if (*(int *)&pFVar1[8].field_0x0 != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar2) break;
      uVar8 = *(uint *)pFVar10;
      uVar7 = 0;
      if ((int)uVar8 < (this->Vertices).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = pFVar10 + 4;
      *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20 + 0x10) =
           param_2;
    }
    iVar3 = *(int *)(pFVar1 + 0xc);
    *(undefined4 *)&pFVar1[8].field_0x0 = 0;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar1,0,(int *)(pFVar1 + 0xc));
    }
  }
  return;
}

// PackIslands @ 143bab970

void __thiscall Chaos::FColoringGraph::PackIslands(FColoringGraph *this)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  TArray<Chaos::FColoringGraph::FIsland,TSizedDefaultAllocator<32>_> *this_00;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  
  AlgoImpl::
  IntroSortInternal<Chaos::FColoringGraph::FIsland,int,FIdentityFunctor,TDereferenceWrapper<Chaos::FColoringGraph::FIsland,_Chaos::FColoringGraph::PackIslands_::__l2::<lambda_1>_>_>
            ((FIsland *)(this->Islands).AllocatorInstance.Data,(this->Islands).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res10);
  uVar11 = 0;
  if (0 < (this->Islands).ArrayNum) {
    lVar12 = 0;
    do {
      this_00 = &this->Islands;
      piVar9 = &(this->Islands).ArrayNum;
      uVar7 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < *piVar9) {
        uVar5 = uVar7;
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
      iVar10 = *piVar9;
      if (*(int *)((this_00->AllocatorInstance).Data + lVar12 + 8) == 0) {
        if (iVar10 < (int)uVar11) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,uVar11 - iVar10,&this_00->AllocatorInstance,piVar9,
                             &(this->Islands).ArrayMax);
          DefaultConstructItems<Chaos::FColoringGraph::FIsland,int>
                    ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x18,uVar11 - iVar10);
          return;
        }
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        if (iVar10 <= (int)uVar11) {
          return;
        }
        iVar10 = iVar10 - uVar11;
        if ((-1 < (char)((byte)(~uVar11 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar10 == 0) {
          return;
        }
        TArray<Chaos::FColoringGraph::FIsland,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar11,iVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&this_00->AllocatorInstance,*piVar9,&(this->Islands).ArrayMax);
        return;
      }
      uVar5 = 0;
      if ((int)uVar11 < iVar10) {
        uVar5 = uVar7;
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
      pFVar2 = (this_00->AllocatorInstance).Data;
      puVar8 = *(uint **)(pFVar2 + lVar12);
      iVar10 = *(int *)(pFVar2 + lVar12 + 8);
      puVar1 = puVar8 + iVar10;
      while( true ) {
        if (*(int *)(pFVar2 + lVar12 + 8) != iVar10) {
          local_res8[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (puVar8 == puVar1) break;
        uVar5 = *puVar8;
        uVar7 = 0;
        if ((int)uVar5 < (this->Vertices).ArrayNum) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar8 = puVar8 + 1;
        *(uint *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20 + 0x10) =
             uVar11;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar11 < (this->Islands).ArrayNum);
  }
  return;
}

