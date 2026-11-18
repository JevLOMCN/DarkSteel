// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// GetElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 148ef6820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraUvQuadTree::FSubTree::GetElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (FSubTree *this,FNiagaraUvQuadTree *param_1,TBox2<double> *param_2,
          TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  TStaticArray<int,4,4294967295> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  GetIntersectingElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            (this,param_1,param_2,param_3);
  iVar5 = GetQuads(this,param_2,&local_58);
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar1 = local_58.Elements[lVar7];
      iVar2 = (param_1->ChildTrees).ArrayNum;
      uVar6 = 0;
      if ((int)uVar1 < iVar2) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (local_68 = (longlong)(int)uVar1, local_60 = (longlong)iVar2,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      GetElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                ((FSubTree *)
                 ((param_1->ChildTrees).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x50),
                 param_1,param_2,param_3);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  return;
}

// GetIntersectingElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 148efa180

void __thiscall
FNiagaraUvQuadTree::FSubTree::
GetIntersectingElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (FSubTree *this,FNiagaraUvQuadTree *param_1,TBox2<double> *param_2,
          TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<int> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<int> FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<int> FVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  
  uVar14 = (this->ContentIndices).ArrayNum + param_3->ArrayNum;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar1 = &param_3->ArrayMax;
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar14,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
  }
  pFVar12 = (this->ContentIndices).AllocatorInstance.Data;
  iVar3 = (this->ContentIndices).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar3 * 4;
  while( true ) {
    if ((this->ContentIndices).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar12 == pFVar2) {
      return;
    }
    uVar14 = *(uint *)pFVar12;
    uVar8 = 0;
    if ((int)uVar14 < (param_1->ChildNodes).ArrayNum) {
      uVar8 = ~uVar14 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    pFVar4 = (param_1->ChildNodes).AllocatorInstance.Data;
    lVar11 = (longlong)(int)uVar14 * 0x30;
    if (((((param_2->Min).field0_0x0._s_0.X <= *(double *)(pFVar4 + lVar11 + 0x10)) &&
         (*(double *)(pFVar4 + lVar11) <= (param_2->Max).field0_0x0._s_0.X)) &&
        ((param_2->Min).field0_0x0._s_0.Y <= *(double *)(pFVar4 + lVar11 + 0x18))) &&
       (*(double *)(pFVar4 + lVar11 + 8) <= (param_2->Max).field0_0x0._s_0.Y)) {
      FVar5 = (param_3->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<int>)((longlong)pFVar4 + lVar11 + 0x28);
      FVar10 = (ForElementType<int>)param_3;
      if (FVar5 != (ForElementType<int>)0x0) {
        FVar10 = FVar5;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar13) {
        FVar10 = (ForElementType<int>)param_3;
        if (FVar5 != (ForElementType<int>)0x0) {
          FVar10 = FVar5;
        }
        if (((ulonglong)FVar13 < (ulonglong)((longlong)FVar10 + (longlong)*piVar1 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = param_3->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar9 + 1;
      FVar5 = (param_3->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<int>)param_3;
      if (FVar5 != (ForElementType<int>)0x0) {
        FVar10 = FVar5;
      }
      *(undefined4 *)((longlong)FVar10 + (longlong)iVar9 * 4) = *(undefined4 *)FVar13;
    }
    pFVar12 = pFVar12 + 4;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// FSubTree @ 1494283e0

FSubTree * __thiscall FNiagaraUvQuadTree::FSubTree::FSubTree(FSubTree *this,TBox2<double> *param_1)

{
  double dVar1;
  undefined7 uVar2;
  
  dVar1 = (param_1->Min).field0_0x0._s_0.Y;
  (this->Coverage).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->Coverage).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.Y;
  (this->Coverage).Max.field0_0x0._s_0.X = (param_1->Max).field0_0x0._s_0.X;
  (this->Coverage).Max.field0_0x0._s_0.Y = dVar1;
  uVar2 = *(undefined7 *)&param_1->field_0x21;
  (this->Coverage).bIsValid = param_1->bIsValid;
  *(undefined7 *)&(this->Coverage).field_0x21 = uVar2;
  (this->ContentIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentIndices).ArrayNum = 0;
  (this->ContentIndices).ArrayMax = 0;
  this->bInternal = false;
  (this->SubTreeIndices).Elements[2] = -1;
  (this->SubTreeIndices).Elements[3] = -1;
  (this->SubTreeIndices).Elements[0] = -1;
  (this->SubTreeIndices).Elements[1] = -1;
  return this;
}

// Freeze @ 149445550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FNiagaraUvQuadTree::FSubTree::Freeze(FSubTree *this,FNiagaraUvQuadTree *param_1,FArchive *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  uint local_78;
  uint local_74;
  uint local_70 [2];
  FNiagaraUvQuadTree *local_68;
  ulonglong local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_68 = param_1;
  uVar8 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
  plVar2 = *(longlong **)&param_2->field_0x8;
  local_78 = 0xffffffff;
  local_60 = uVar8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_78,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_78);
    }
  }
  else {
    local_78 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  puVar1 = &param_2->field_0x2a;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_78,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_78);
    }
  }
  else {
    local_78 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_78,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_78);
    }
  }
  else {
    local_78 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_78,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_78);
    }
  }
  else {
    local_78 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  local_74 = (this->ContentIndices).ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_74,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_74);
    }
  }
  else {
    local_74 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar10 = 0;
  if (0 < (int)local_74) {
    lVar11 = 0;
    do {
      iVar6 = (this->ContentIndices).ArrayNum;
      uVar5 = 0;
      if ((int)uVar10 < iVar6) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_88 = (longlong)(int)uVar10;
        local_80 = (longlong)iVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      uVar5 = *(uint *)((this->ContentIndices).AllocatorInstance.Data + lVar11);
      iVar6 = (local_68->ChildNodes).ArrayNum;
      uVar7 = 0;
      if ((int)uVar5 < iVar6) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_88 = (longlong)(int)uVar5, local_80 = (longlong)iVar6,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      param_1 = local_68;
      local_70[0] = *(uint *)((local_68->ChildNodes).AllocatorInstance.Data +
                             (longlong)(int)uVar5 * 0x30 + 0x28);
      plVar2 = *(longlong **)&param_2->field_0x8;
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_70,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_2,local_70);
        }
      }
      else {
        local_70[0] = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 4;
      uVar8 = local_60;
    } while ((int)uVar10 < (int)local_74);
  }
  if (this->bInternal != false) {
    uVar10 = (this->SubTreeIndices).Elements[0];
    iVar6 = (param_1->ChildTrees).ArrayNum;
    uVar5 = 0;
    if ((int)uVar10 < iVar6) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (local_88 = (longlong)(int)uVar10, local_80 = (longlong)iVar6,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    local_58 = Freeze((FSubTree *)
                      ((param_1->ChildTrees).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x50),
                      param_1,param_2);
    uVar10 = (this->SubTreeIndices).Elements[1];
    iVar6 = (param_1->ChildTrees).ArrayNum;
    uVar5 = 0;
    if ((int)uVar10 < iVar6) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (local_88 = (longlong)(int)uVar10, local_80 = (longlong)iVar6,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    local_54 = Freeze((FSubTree *)
                      ((param_1->ChildTrees).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x50),
                      param_1,param_2);
    uVar10 = (this->SubTreeIndices).Elements[2];
    iVar6 = (param_1->ChildTrees).ArrayNum;
    uVar5 = 0;
    if ((int)uVar10 < iVar6) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (local_88 = (longlong)(int)uVar10, local_80 = (longlong)iVar6,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    local_50 = Freeze((FSubTree *)
                      ((param_1->ChildTrees).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x50),
                      param_1,param_2);
    uVar10 = (this->SubTreeIndices).Elements[3];
    iVar6 = (param_1->ChildTrees).ArrayNum;
    uVar5 = 0;
    if ((int)uVar10 < iVar6) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (local_88 = (longlong)(int)uVar10, local_80 = (longlong)iVar6,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    local_4c = Freeze((FSubTree *)
                      ((param_1->ChildTrees).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x50),
                      param_1,param_2);
    uVar9 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
    (**(code **)(*(longlong *)param_2 + 0x1b8))(param_2,uVar8);
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_58,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_58);
      }
    }
    else {
      local_58 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_54,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_54);
      }
    }
    else {
      local_54 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_50,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_50);
      }
    }
    else {
      local_50 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_4c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_4c);
      }
    }
    else {
      local_4c = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    (**(code **)(*(longlong *)param_2 + 0x1b8))(param_2,uVar9);
  }
  return (int)(uVar8 >> 2);
}

// GetQuads @ 14944c8a0

int __thiscall
FNiagaraUvQuadTree::FSubTree::GetQuads
          (FSubTree *this,TBox2<double> *param_1,TStaticArray<int,4,4294967295> *param_2)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  
  uVar9 = 0;
  iVar8 = 0;
  if (this->bInternal != false) {
    dVar12 = ((this->Coverage).Min.field0_0x0._s_0.X + (this->Coverage).Max.field0_0x0._s_0.X) *
             __real_3fe0000000000000;
    dVar11 = ((this->Coverage).Max.field0_0x0._s_0.Y + (this->Coverage).Min.field0_0x0._s_0.Y) *
             __real_3fe0000000000000;
    bVar4 = (param_1->Min).field0_0x0._s_0.X <= dVar12;
    bVar5 = (param_1->Min).field0_0x0._s_0.Y <= dVar11;
    bVar2 = dVar12 == (param_1->Max).field0_0x0._s_0.X;
    bVar6 = dVar12 < (param_1->Max).field0_0x0._s_0.X;
    pdVar1 = &(param_1->Max).field0_0x0._s_0.Y;
    bVar3 = dVar11 == *pdVar1;
    bVar7 = dVar11 < *pdVar1;
    if ((bVar4) && (bVar5)) {
      uVar9 = 1;
      param_2->Elements[0] = (this->SubTreeIndices).Elements[2];
    }
    uVar10 = uVar9;
    if ((bVar6 || bVar2) && (bVar5)) {
      uVar10 = (ulonglong)((int)uVar9 + 1);
      param_2->Elements[uVar9] = (this->SubTreeIndices).Elements[3];
    }
    uVar9 = uVar10;
    if ((bVar4) && (bVar7 || bVar3)) {
      uVar9 = (ulonglong)((int)uVar10 + 1);
      param_2->Elements[uVar10] = (this->SubTreeIndices).Elements[0];
    }
    iVar8 = (int)uVar9;
    if ((bVar6 || bVar2) && (bVar7 || bVar3)) {
      param_2->Elements[uVar9] = (this->SubTreeIndices).Elements[1];
      return iVar8 + 1;
    }
  }
  return iVar8;
}

