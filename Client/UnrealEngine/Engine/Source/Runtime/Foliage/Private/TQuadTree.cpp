// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 13

// GetElements<TSizedDefaultAllocator<32>_> @ 145ed4da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::GetElements<TSizedDefaultAllocator<32>_>
          (TQuadTree<FProceduralFoliageInstance_*,4> *this,TBox2<double> *param_1,
          TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  TQuadTree<FProceduralFoliageInstance_*,4> *local_48 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar1 = GetQuads(this,param_1,local_48);
  GetIntersectingElements<TSizedDefaultAllocator<32>_>(this,param_1,param_2);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      GetElements<TSizedDefaultAllocator<32>_>(local_48[lVar2],param_1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}

// GetIntersectingElements<TSizedDefaultAllocator<32>_> @ 145ed4e90

void __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::GetIntersectingElements<TSizedDefaultAllocator<32>_>
          (TQuadTree<FProceduralFoliageInstance_*,4> *this,TBox2<double> *param_1,
          TArray<FProceduralFoliageInstance_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  uVar9 = (this->Nodes).ArrayNum + param_2->ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  iVar2 = (this->Nodes).ArrayNum;
  pFVar8 = (this->Nodes).AllocatorInstance.Data;
  pFVar7 = pFVar8 + 0x28;
  pFVar10 = pFVar8 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->Nodes).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TQuadTree<FProceduralFoliageInstance_*,4>::FNode_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar10) break;
    if (((((param_1->Min).field0_0x0._s_0.X <= *(double *)(pFVar7 + -0x18)) &&
         (*(double *)pFVar8 <= (param_1->Max).field0_0x0._s_0.X)) &&
        ((param_1->Min).field0_0x0._s_0.Y <= *(double *)(pFVar7 + -0x10))) &&
       (*(double *)(pFVar7 + -0x20) <= (param_1->Max).field0_0x0._s_0.Y)) {
      pFVar3 = (param_2->AllocatorInstance).Data;
      if ((pFVar3 <= pFVar7) && (pFVar7 < pFVar3 + (longlong)*piVar1 * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(double *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = *(double *)pFVar7;
    }
    pFVar8 = pFVar8 + 0x30;
    pFVar7 = pFVar7 + 0x30;
  }
  return;
}

// TQuadTree<FProceduralFoliageInstance_*,4> @ 145ed7df0

TQuadTree<FProceduralFoliageInstance_*,4> * __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::TQuadTree<FProceduralFoliageInstance_*,4>
          (TQuadTree<FProceduralFoliageInstance_*,4> *this,TBox2<double> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined7 uVar4;
  double dVar5;
  
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  this->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  this->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  this->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  dVar1 = (param_1->Min).field0_0x0._s_0.Y;
  (this->TreeBox).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->TreeBox).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.Y;
  (this->TreeBox).Max.field0_0x0._s_0.X = (param_1->Max).field0_0x0._s_0.X;
  (this->TreeBox).Max.field0_0x0._s_0.Y = dVar1;
  uVar4 = *(undefined7 *)&param_1->field_0x21;
  (this->TreeBox).bIsValid = param_1->bIsValid;
  *(undefined7 *)&(this->TreeBox).field_0x21 = uVar4;
  dVar1 = (param_1->Max).field0_0x0._s_0.Y;
  dVar2 = (param_1->Min).field0_0x0._s_0.X;
  dVar5 = (param_1->Min).field0_0x0._s_0.Y;
  dVar3 = (param_1->Max).field0_0x0._s_0.X;
  this->bInternal = false;
  this->MinimumQuadSize = param_2;
  this->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  dVar5 = (dVar1 + dVar5) * __real_3fe0000000000000;
  this->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  dVar1 = (dVar2 + dVar3) * __real_3fe0000000000000;
  this->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  this->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  (this->Position).field0_0x0._s_0.Y = dVar5;
  (this->Position).field0_0x0._s_0.X = dVar1;
  return this;
}

// ~TQuadTree<FProceduralFoliageInstance_*,4> @ 145ed9a40

void __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::~TQuadTree<FProceduralFoliageInstance_*,4>
          (TQuadTree<FProceduralFoliageInstance_*,4> *this)

{
  TQuadTree<FProceduralFoliageInstance_*,4> *this_00;
  FScriptContainerElement *pFVar1;
  TQuadTree<FProceduralFoliageInstance_*,4> **ppTVar2;
  
  for (ppTVar2 = this->SubTrees; (TBox2<double> *)ppTVar2 != &this->TreeBox; ppTVar2 = ppTVar2 + 1)
  {
    this_00 = *ppTVar2;
    if (this_00 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
      ~TQuadTree<FProceduralFoliageInstance_*,4>(this_00);
      ::operator_delete(this_00,0x70);
    }
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 145eda7a0

TQuadTree<FProceduralFoliageInstance_*,4> * __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::operator=
          (TQuadTree<FProceduralFoliageInstance_*,4> *this,
          TQuadTree<FProceduralFoliageInstance_*,4> *param_1)

{
  Duplicate(param_1,this);
  return this;
}

// Duplicate @ 145ee0100

void __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::Duplicate
          (TQuadTree<FProceduralFoliageInstance_*,4> *this,
          TQuadTree<FProceduralFoliageInstance_*,4> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TQuadTree<FProceduralFoliageInstance_*,4> *pTVar6;
  double dVar7;
  undefined7 uVar8;
  TQuadTree<FProceduralFoliageInstance_*,4> *pTVar9;
  TBox2<double> *pTVar10;
  TQuadTree<FProceduralFoliageInstance_*,4> *pTVar11;
  TQuadTree<FProceduralFoliageInstance_*,4> *pTVar12;
  TBox2<double> local_78 [2];
  
  dVar7 = __real_3fe0000000000000;
  pTVar6 = this->SubTrees[0];
  pTVar12 = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  if (pTVar6 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    pTVar9 = ::operator_new(0x70);
    pTVar11 = pTVar12;
    if (pTVar9 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
      fVar1 = this->MinimumQuadSize;
      pTVar10 = UE::Math::TBox2<double>::TBox2<double>(local_78,(TVector2<double> *)0x0,0);
      (pTVar9->Nodes).ArrayNum = 0;
      (pTVar9->Nodes).ArrayMax = 0;
      pTVar9->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      (pTVar9->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar9->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      dVar2 = (pTVar10->Min).field0_0x0._s_0.Y;
      (pTVar9->TreeBox).Min.field0_0x0._s_0.X = (pTVar10->Min).field0_0x0._s_0.X;
      (pTVar9->TreeBox).Min.field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar10->Max).field0_0x0._s_0.Y;
      (pTVar9->TreeBox).Max.field0_0x0._s_0.X = (pTVar10->Max).field0_0x0._s_0.X;
      (pTVar9->TreeBox).Max.field0_0x0._s_0.Y = dVar2;
      uVar8 = *(undefined7 *)&pTVar10->field_0x21;
      (pTVar9->TreeBox).bIsValid = pTVar10->bIsValid;
      *(undefined7 *)&(pTVar9->TreeBox).field_0x21 = uVar8;
      dVar2 = (pTVar10->Max).field0_0x0._s_0.Y;
      dVar3 = (pTVar10->Max).field0_0x0._s_0.X;
      dVar4 = (pTVar10->Min).field0_0x0._s_0.Y;
      dVar5 = (pTVar10->Min).field0_0x0._s_0.X;
      pTVar9->MinimumQuadSize = fVar1;
      pTVar9->bInternal = false;
      pTVar9->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      (pTVar9->Position).field0_0x0._s_0.Y = (dVar2 + dVar4) * dVar7;
      (pTVar9->Position).field0_0x0._s_0.X = (dVar3 + dVar5) * dVar7;
      pTVar11 = pTVar9;
    }
    param_1->SubTrees[0] = pTVar11;
    Duplicate(pTVar6,pTVar11);
  }
  pTVar6 = this->SubTrees[1];
  if (pTVar6 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    pTVar9 = ::operator_new(0x70);
    pTVar11 = pTVar12;
    if (pTVar9 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
      fVar1 = this->MinimumQuadSize;
      pTVar10 = UE::Math::TBox2<double>::TBox2<double>(local_78,(TVector2<double> *)0x0,0);
      (pTVar9->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar9->Nodes).ArrayNum = 0;
      (pTVar9->Nodes).ArrayMax = 0;
      pTVar9->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      dVar2 = (pTVar10->Min).field0_0x0._s_0.Y;
      (pTVar9->TreeBox).Min.field0_0x0._s_0.X = (pTVar10->Min).field0_0x0._s_0.X;
      (pTVar9->TreeBox).Min.field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar10->Max).field0_0x0._s_0.Y;
      (pTVar9->TreeBox).Max.field0_0x0._s_0.X = (pTVar10->Max).field0_0x0._s_0.X;
      (pTVar9->TreeBox).Max.field0_0x0._s_0.Y = dVar2;
      uVar8 = *(undefined7 *)&pTVar10->field_0x21;
      (pTVar9->TreeBox).bIsValid = pTVar10->bIsValid;
      *(undefined7 *)&(pTVar9->TreeBox).field_0x21 = uVar8;
      dVar2 = (pTVar10->Max).field0_0x0._s_0.Y;
      dVar3 = (pTVar10->Min).field0_0x0._s_0.Y;
      (pTVar9->Position).field0_0x0._s_0.X =
           ((pTVar10->Max).field0_0x0._s_0.X + (pTVar10->Min).field0_0x0._s_0.X) * dVar7;
      (pTVar9->Position).field0_0x0._s_0.Y = (dVar2 + dVar3) * dVar7;
      pTVar9->MinimumQuadSize = fVar1;
      pTVar9->bInternal = false;
      pTVar9->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar11 = pTVar9;
    }
    param_1->SubTrees[1] = pTVar11;
    Duplicate(pTVar6,pTVar11);
  }
  pTVar6 = this->SubTrees[2];
  if (pTVar6 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    pTVar9 = ::operator_new(0x70);
    pTVar11 = pTVar12;
    if (pTVar9 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
      fVar1 = this->MinimumQuadSize;
      pTVar10 = UE::Math::TBox2<double>::TBox2<double>(local_78,(TVector2<double> *)0x0,0);
      (pTVar9->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar9->Nodes).ArrayNum = 0;
      (pTVar9->Nodes).ArrayMax = 0;
      pTVar9->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      dVar2 = (pTVar10->Min).field0_0x0._s_0.Y;
      (pTVar9->TreeBox).Min.field0_0x0._s_0.X = (pTVar10->Min).field0_0x0._s_0.X;
      (pTVar9->TreeBox).Min.field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar10->Max).field0_0x0._s_0.Y;
      (pTVar9->TreeBox).Max.field0_0x0._s_0.X = (pTVar10->Max).field0_0x0._s_0.X;
      (pTVar9->TreeBox).Max.field0_0x0._s_0.Y = dVar2;
      uVar8 = *(undefined7 *)&pTVar10->field_0x21;
      (pTVar9->TreeBox).bIsValid = pTVar10->bIsValid;
      *(undefined7 *)&(pTVar9->TreeBox).field_0x21 = uVar8;
      dVar2 = (pTVar10->Max).field0_0x0._s_0.Y;
      dVar3 = (pTVar10->Min).field0_0x0._s_0.Y;
      (pTVar9->Position).field0_0x0._s_0.X =
           ((pTVar10->Max).field0_0x0._s_0.X + (pTVar10->Min).field0_0x0._s_0.X) * dVar7;
      (pTVar9->Position).field0_0x0._s_0.Y = (dVar2 + dVar3) * dVar7;
      pTVar9->MinimumQuadSize = fVar1;
      pTVar9->bInternal = false;
      pTVar9->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar9->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar11 = pTVar9;
    }
    param_1->SubTrees[2] = pTVar11;
    Duplicate(pTVar6,pTVar11);
  }
  pTVar6 = this->SubTrees[3];
  if (pTVar6 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    pTVar11 = ::operator_new(0x70);
    if (pTVar11 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
      fVar1 = this->MinimumQuadSize;
      pTVar10 = UE::Math::TBox2<double>::TBox2<double>(local_78,(TVector2<double> *)0x0,0);
      (pTVar11->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar11->Nodes).ArrayNum = 0;
      (pTVar11->Nodes).ArrayMax = 0;
      pTVar11->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar11->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar11->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar11->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      dVar2 = (pTVar10->Min).field0_0x0._s_0.Y;
      (pTVar11->TreeBox).Min.field0_0x0._s_0.X = (pTVar10->Min).field0_0x0._s_0.X;
      (pTVar11->TreeBox).Min.field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar10->Max).field0_0x0._s_0.Y;
      (pTVar11->TreeBox).Max.field0_0x0._s_0.X = (pTVar10->Max).field0_0x0._s_0.X;
      (pTVar11->TreeBox).Max.field0_0x0._s_0.Y = dVar2;
      uVar8 = *(undefined7 *)&pTVar10->field_0x21;
      (pTVar11->TreeBox).bIsValid = pTVar10->bIsValid;
      *(undefined7 *)&(pTVar11->TreeBox).field_0x21 = uVar8;
      dVar2 = (pTVar10->Max).field0_0x0._s_0.Y;
      dVar3 = (pTVar10->Min).field0_0x0._s_0.Y;
      (pTVar11->Position).field0_0x0._s_0.X =
           ((pTVar10->Max).field0_0x0._s_0.X + (pTVar10->Min).field0_0x0._s_0.X) * dVar7;
      (pTVar11->Position).field0_0x0._s_0.Y = (dVar2 + dVar3) * dVar7;
      pTVar11->MinimumQuadSize = fVar1;
      pTVar11->bInternal = false;
      pTVar11->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar11->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar11->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar11->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
      pTVar12 = pTVar11;
    }
    param_1->SubTrees[3] = pTVar12;
    Duplicate(pTVar6,pTVar12);
  }
  TArray<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->Nodes,&this->Nodes);
  dVar7 = (this->TreeBox).Min.field0_0x0._s_0.Y;
  (param_1->TreeBox).Min.field0_0x0._s_0.X = (this->TreeBox).Min.field0_0x0._s_0.X;
  (param_1->TreeBox).Min.field0_0x0._s_0.Y = dVar7;
  dVar7 = (this->TreeBox).Max.field0_0x0._s_0.Y;
  (param_1->TreeBox).Max.field0_0x0._s_0.X = (this->TreeBox).Max.field0_0x0._s_0.X;
  (param_1->TreeBox).Max.field0_0x0._s_0.Y = dVar7;
  uVar8 = *(undefined7 *)&(this->TreeBox).field_0x21;
  (param_1->TreeBox).bIsValid = (this->TreeBox).bIsValid;
  *(undefined7 *)&(param_1->TreeBox).field_0x21 = uVar8;
  dVar7 = (this->Position).field0_0x0._s_0.Y;
  (param_1->Position).field0_0x0._s_0.X = (this->Position).field0_0x0._s_0.X;
  (param_1->Position).field0_0x0._s_0.Y = dVar7;
  param_1->MinimumQuadSize = this->MinimumQuadSize;
  param_1->bInternal = this->bInternal;
  return;
}

// Empty @ 145ee05e0

void __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::Empty(TQuadTree<FProceduralFoliageInstance_*,4> *this)

{
  int *piVar1;
  TQuadTree<FProceduralFoliageInstance_*,4> *pTVar2;
  
  pTVar2 = this->SubTrees[0];
  if (pTVar2 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    ~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar2);
    ::operator_delete(pTVar2,0x70);
    this->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  pTVar2 = this->SubTrees[1];
  if (pTVar2 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    ~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar2);
    ::operator_delete(pTVar2,0x70);
    this->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  pTVar2 = this->SubTrees[2];
  if (pTVar2 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    ~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar2);
    ::operator_delete(pTVar2,0x70);
    this->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  pTVar2 = this->SubTrees[3];
  if (pTVar2 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    ~TQuadTree<FProceduralFoliageInstance_*,4>(pTVar2);
    ::operator_delete(pTVar2,0x70);
    this->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  }
  piVar1 = &(this->Nodes).ArrayMax;
  (this->Nodes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  this->bInternal = false;
  return;
}

// GetQuads @ 145ee55a0

int __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::GetQuads
          (TQuadTree<FProceduralFoliageInstance_*,4> *this,TBox2<double> *param_1,
          TQuadTree<FProceduralFoliageInstance_*,4> **param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = 0;
  iVar10 = 0;
  if (this->bInternal != false) {
    dVar2 = (this->Position).field0_0x0._s_0.X;
    bVar6 = (param_1->Min).field0_0x0._s_0.X <= dVar2;
    dVar3 = (this->Position).field0_0x0._s_0.Y;
    bVar7 = (param_1->Min).field0_0x0._s_0.Y <= dVar3;
    bVar4 = dVar2 == (param_1->Max).field0_0x0._s_0.X;
    bVar8 = dVar2 < (param_1->Max).field0_0x0._s_0.X;
    pdVar1 = &(param_1->Max).field0_0x0._s_0.Y;
    bVar5 = dVar3 == *pdVar1;
    bVar9 = dVar3 < *pdVar1;
    if ((bVar6) && (bVar7)) {
      uVar11 = 1;
      *param_2 = this->SubTrees[2];
    }
    uVar12 = uVar11;
    if ((bVar8 || bVar4) && (bVar7)) {
      uVar12 = (ulonglong)((int)uVar11 + 1);
      param_2[uVar11] = this->SubTrees[3];
    }
    uVar11 = uVar12;
    if ((bVar6) && (bVar9 || bVar5)) {
      uVar11 = (ulonglong)((int)uVar12 + 1);
      param_2[uVar12] = this->SubTrees[0];
    }
    iVar10 = (int)uVar11;
    if ((bVar8 || bVar4) && (bVar9 || bVar5)) {
      param_2[uVar11] = this->SubTrees[1];
      return iVar10 + 1;
    }
  }
  return iVar10;
}

// Insert @ 145ee6c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::Insert
          (TQuadTree<FProceduralFoliageInstance_*,4> *this,FProceduralFoliageInstance **param_1,
          TBox2<double> *param_2,wchar_t *param_3)

{
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((((((this->TreeBox).Max.field0_0x0._s_0.X < (param_2->Min).field0_0x0._s_0.X) ||
        ((param_2->Max).field0_0x0._s_0.X < (this->TreeBox).Min.field0_0x0._s_0.X)) ||
       ((this->TreeBox).Max.field0_0x0._s_0.Y < (param_2->Min).field0_0x0._s_0.Y)) ||
      ((param_2->Max).field0_0x0._s_0.Y < (this->TreeBox).Min.field0_0x0._s_0.Y)) &&
     (2 < (byte)LogQuadTree._0_1_)) {
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_38,L"bIsValid=%s, Min=(%s), Max=(%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f");
    ::FString::PrintfImpl(&local_48,L"bIsValid=%s, Min=(%s), Max=(%s)");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_TQuadTree<FProceduralFoliageInstance*___ptr64,4>::Insert(FProceduralFoliageInstance*___ptr64_const&___ptr64,UE::Math::TBox2<double>_const&___ptr64,wchar_t_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogQuadTree);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  InsertElementRecursive(this,param_1,param_2,param_3);
  return;
}

// InsertElementRecursive @ 145ee6f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::InsertElementRecursive
          (TQuadTree<FProceduralFoliageInstance_*,4> *this,FProceduralFoliageInstance **param_1,
          TBox2<double> *param_2,wchar_t *param_3)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_f8 [32];
  double *local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  TQuadTree<FProceduralFoliageInstance_*,4> *local_48 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  while( true ) {
    while( true ) {
      iVar5 = GetQuads(this,param_2,local_48);
      bVar4 = this->bInternal;
      if (iVar5 == 0) break;
      if (iVar5 != 1) {
        if ((bVar4 == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("bInternal",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GenericQuadTree.h"
                               ,0x12d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_78 = (param_2->Min).field0_0x0._s_0.X;
        dStack_70 = (param_2->Min).field0_0x0._s_0.Y;
        uStack_50 = *param_1;
        local_68 = (param_2->Max).field0_0x0._s_0.X;
        dStack_60 = (param_2->Max).field0_0x0._s_0.Y;
        pFVar6 = (this->Nodes).AllocatorInstance.Data;
        local_58 = *(undefined8 *)&param_2->bIsValid;
        if ((pFVar6 <= (FScriptContainerElement *)&local_78) &&
           (lVar7 = (longlong)(this->Nodes).ArrayMax,
           (FScriptContainerElement *)&local_78 < pFVar6 + lVar7 * 0x30)) {
          local_c0 = (longlong)(this->Nodes).ArrayNum;
          local_b8 = 0x30;
          local_d8 = &local_78;
          local_d0 = pFVar6;
          local_c8 = lVar7;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar5 = (this->Nodes).ArrayNum;
        piVar1 = &(this->Nodes).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,(ForAnyElementType *)this,piVar1);
          (this->Nodes).ArrayNum = iVar5;
        }
        lVar7 = (longlong)iVar5;
        (this->Nodes).ArrayNum = iVar5 + 1;
        pFVar6 = (this->Nodes).AllocatorInstance.Data;
        *(double *)(pFVar6 + lVar7 * 0x30) = local_78;
        *(double *)(pFVar6 + lVar7 * 0x30 + 8) = dStack_70;
        *(double *)(pFVar6 + lVar7 * 0x30 + 0x10) = local_68;
        *(double *)(pFVar6 + lVar7 * 0x30 + 0x10 + 8) = dStack_60;
        local_88._0_4_ = (undefined4)local_58;
        local_88._4_4_ = local_58._4_4_;
        uStack_80._0_4_ = (undefined4)uStack_50;
        uStack_80._4_4_ = uStack_50._4_4_;
        goto LAB_145ee720f;
      }
      this = local_48[0];
      if ((bVar4 == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bInternal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GenericQuadTree.h"
                             ,0x125,L""), this = local_48[0], bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((bVar4 != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bInternal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GenericQuadTree.h"
                           ,0x10e,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    dVar8 = (this->TreeBox).Max.field0_0x0._s_0.Y - (this->TreeBox).Min.field0_0x0._s_0.Y;
    dVar3 = (this->TreeBox).Max.field0_0x0._s_0.X - (this->TreeBox).Min.field0_0x0._s_0.X;
    if ((dVar8 * dVar8 + dVar3 * dVar3 <= (double)(this->MinimumQuadSize * this->MinimumQuadSize))
       || ((this->Nodes).ArrayNum < 4)) break;
    Split(this);
  }
  local_a8 = (param_2->Min).field0_0x0._s_0.X;
  dStack_a0 = (param_2->Min).field0_0x0._s_0.Y;
  uStack_80 = *param_1;
  local_98 = (param_2->Max).field0_0x0._s_0.X;
  dStack_90 = (param_2->Max).field0_0x0._s_0.Y;
  pFVar6 = (this->Nodes).AllocatorInstance.Data;
  local_88 = *(undefined8 *)&param_2->bIsValid;
  if ((pFVar6 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Nodes).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar6 + lVar7 * 0x30)) {
    local_c0 = (longlong)(this->Nodes).ArrayNum;
    local_b8 = 0x30;
    local_d8 = &local_a8;
    local_d0 = pFVar6;
    local_c8 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = (this->Nodes).ArrayNum;
  piVar1 = &(this->Nodes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
    (this->Nodes).ArrayNum = iVar5;
  }
  lVar7 = (longlong)iVar5;
  (this->Nodes).ArrayNum = iVar5 + 1;
  pFVar6 = (this->Nodes).AllocatorInstance.Data;
  *(double *)(pFVar6 + lVar7 * 0x30) = local_a8;
  *(double *)(pFVar6 + lVar7 * 0x30 + 8) = dStack_a0;
  *(double *)(pFVar6 + lVar7 * 0x30 + 0x10) = local_98;
  *(double *)(pFVar6 + lVar7 * 0x30 + 0x10 + 8) = dStack_90;
LAB_145ee720f:
  pFVar6 = pFVar6 + lVar7 * 0x30 + 0x20;
  *(undefined4 *)pFVar6 = (undefined4)local_88;
  *(undefined4 *)(pFVar6 + 4) = local_88._4_4_;
  *(undefined4 *)(pFVar6 + 8) = (undefined4)uStack_80;
  *(undefined4 *)(pFVar6 + 0xc) = uStack_80._4_4_;
  return;
}

// Remove @ 145ee9e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::Remove
          (TQuadTree<FProceduralFoliageInstance_*,4> *this,FProceduralFoliageInstance **param_1,
          TBox2<double> *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  TQuadTree<FProceduralFoliageInstance_*,4> *local_48 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar2 = GetQuads(this,param_2,local_48);
  bVar1 = RemoveNodeForElement(this,param_1);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (bVar1 != false) {
        return bVar1;
      }
      bVar1 = Remove(local_48[lVar3],param_1,param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return bVar1;
}

// RemoveNodeForElement @ 145eea6f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::RemoveNodeForElement
          (TQuadTree<FProceduralFoliageInstance_*,4> *this,FProceduralFoliageInstance **param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  iVar8 = (this->Nodes).ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      uVar12 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < (this->Nodes).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(FProceduralFoliageInstance **)((this->Nodes).AllocatorInstance.Data + lVar10 + 0x28) ==
          *param_1) {
        if (uVar9 == 0xffffffff) {
          return false;
        }
        uVar7 = 0;
        if ((int)uVar9 < (this->Nodes).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar2 = (this->Nodes).ArrayNum;
        pFVar3 = (this->Nodes).AllocatorInstance.Data;
        iVar8 = iVar2 + ~uVar9;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar9 * 0x30,pFVar3 + (longlong)(iVar2 - iVar8) * 0x30,
                  (longlong)iVar8 * 0x30);
        }
        piVar1 = &(this->Nodes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x30;
    } while (lVar11 < iVar8);
  }
  return false;
}

// Split @ 145eec0a0

void __thiscall
TQuadTree<FProceduralFoliageInstance_*,4>::Split(TQuadTree<FProceduralFoliageInstance_*,4> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  double dVar4;
  TVector2<double>_u_0_s_0 TVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  TVector2<double>_u_0 TVar13;
  TVector2<double>_u_0 TVar14;
  double dVar15;
  TVector2<double>_u_0 TVar16;
  TVector2<double>_u_0 TVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  bool bVar28;
  uint uVar29;
  TQuadTree<FProceduralFoliageInstance_*,4> *pTVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  TQuadTree<FProceduralFoliageInstance_*,4> *pTVar33;
  int iVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  TQuadTree<FProceduralFoliageInstance_*,4> *pTVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 local_198 [8];
  undefined1 local_190 [112];
  double dStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  double local_110;
  double dStack_108;
  TVector2<double>_u_0_s_0 local_100;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8;
  undefined7 uStack_c7;
  
  if ((this->bInternal != false) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("bInternal == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GenericQuadTree.h"
                          ,0xc0,L""), bVar28)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  dVar26 = __real_3fe0000000000000;
  TVar5 = (this->Position).field0_0x0._s_0;
  uVar11 = TVar5.Y._0_4_;
  uVar12 = TVar5.Y._4_4_;
  dVar22 = (this->TreeBox).Min.field0_0x0._s_0.X;
  dVar23 = (this->TreeBox).Min.field0_0x0._s_0.Y;
  dVar24 = (this->TreeBox).Max.field0_0x0._s_0.X;
  dVar25 = (this->TreeBox).Max.field0_0x0._s_0.Y;
  dVar15 = ((this->TreeBox).Max.field0_0x0._s_0.Y - (this->TreeBox).Min.field0_0x0._s_0.Y) *
           __real_3fe0000000000000;
  dVar18 = ((this->TreeBox).Max.field0_0x0._s_0.X - (this->TreeBox).Min.field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar4 = TVar5.Y;
  dVar21 = dVar15 + dVar4;
  uVar38 = (undefined4)((ulonglong)dVar21 >> 0x20);
  dVar19 = TVar5.X;
  dVar20 = dVar19 - dVar18;
  dVar18 = dVar18 + dVar19;
  dVar15 = dVar4 - dVar15;
  uVar39 = (undefined4)((ulonglong)dVar15 >> 0x20);
  pTVar30 = ::operator_new(0x70);
  pTVar37 = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
  pTVar33 = pTVar37;
  if (pTVar30 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    fVar3 = this->MinimumQuadSize;
    (pTVar30->Nodes).ArrayNum = 0;
    (pTVar30->Nodes).ArrayMax = 0;
    (pTVar30->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TVar13._8_4_ = uVar11;
    TVar13._s_0.X = dVar20;
    TVar13._12_4_ = uVar12;
    (pTVar30->TreeBox).Min.field0_0x0 = TVar13;
    local_190[0x50] = true;
    TVar16._8_4_ = SUB84(dVar21,0);
    TVar16._s_0.X = dVar19;
    TVar16._12_4_ = uVar38;
    (pTVar30->TreeBox).Max.field0_0x0 = TVar16;
    pTVar30->bInternal = false;
    local_190._56_4_ = uVar11;
    local_190._48_8_ = dVar20;
    local_190._60_4_ = uVar12;
    *(ulonglong *)&(pTVar30->TreeBox).bIsValid = CONCAT71(local_190._81_7_,1);
    (pTVar30->Position).field0_0x0._s_0.Y = (dVar21 + dVar4) * dVar26;
    (pTVar30->Position).field0_0x0._s_0.X = (dVar20 + dVar19) * dVar26;
    pTVar30->MinimumQuadSize = fVar3;
    local_190._72_4_ = SUB84(dVar21,0);
    local_190._64_8_ = dVar19;
    local_190._76_4_ = uVar38;
    pTVar30->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar33 = pTVar30;
  }
  this->SubTrees[0] = pTVar33;
  pTVar30 = ::operator_new(0x70);
  pTVar33 = pTVar37;
  if (pTVar30 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    fVar3 = this->MinimumQuadSize;
    (pTVar30->Nodes).ArrayNum = 0;
    (pTVar30->Nodes).ArrayMax = 0;
    (pTVar30->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar30->TreeBox).Min.field0_0x0._s_0 = TVar5;
    local_118 = 1;
    (pTVar30->TreeBox).Max.field0_0x0._s_0.X = dVar24;
    (pTVar30->TreeBox).Max.field0_0x0._s_0.Y = dVar25;
    pTVar30->bInternal = false;
    *(ulonglong *)&(pTVar30->TreeBox).bIsValid = CONCAT71(uStack_117,1);
    pTVar30->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->MinimumQuadSize = fVar3;
    pTVar30->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    (pTVar30->Position).field0_0x0._s_0.X = (dVar24 + dVar19) * dVar26;
    (pTVar30->Position).field0_0x0._s_0.Y = (dVar25 + dVar4) * dVar26;
    pTVar33 = pTVar30;
    local_190._88_16_ = (undefined1  [16])TVar5;
    local_190._104_8_ = dVar24;
    dStack_120 = dVar25;
  }
  this->SubTrees[1] = pTVar33;
  pTVar30 = ::operator_new(0x70);
  pTVar33 = pTVar37;
  if (pTVar30 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    fVar3 = this->MinimumQuadSize;
    (pTVar30->Nodes).ArrayNum = 0;
    (pTVar30->Nodes).ArrayMax = 0;
    (pTVar30->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar30->TreeBox).Min.field0_0x0._s_0.X = dVar22;
    (pTVar30->TreeBox).Min.field0_0x0._s_0.Y = dVar23;
    local_f0 = 1;
    (pTVar30->TreeBox).Max.field0_0x0._s_0 = TVar5;
    pTVar30->bInternal = false;
    *(ulonglong *)&(pTVar30->TreeBox).bIsValid = CONCAT71(uStack_ef,1);
    pTVar30->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->MinimumQuadSize = fVar3;
    pTVar30->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    (pTVar30->Position).field0_0x0._s_0.X = (dVar22 + dVar19) * dVar26;
    (pTVar30->Position).field0_0x0._s_0.Y = (dVar23 + dVar4) * dVar26;
    pTVar33 = pTVar30;
    local_110 = dVar22;
    dStack_108 = dVar23;
    local_100 = TVar5;
  }
  this->SubTrees[2] = pTVar33;
  pTVar30 = ::operator_new(0x70);
  pTVar33 = pTVar37;
  if (pTVar30 != (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0) {
    fVar3 = this->MinimumQuadSize;
    (pTVar30->Nodes).ArrayNum = 0;
    (pTVar30->Nodes).ArrayMax = 0;
    (pTVar30->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TVar14._8_4_ = SUB84(dVar15,0);
    TVar14._s_0.X = dVar19;
    TVar14._12_4_ = uVar39;
    (pTVar30->TreeBox).Min.field0_0x0 = TVar14;
    local_c8 = 1;
    TVar17._8_4_ = uVar11;
    TVar17._s_0.X = dVar18;
    TVar17._12_4_ = uVar12;
    (pTVar30->TreeBox).Max.field0_0x0 = TVar17;
    pTVar30->bInternal = false;
    local_e8._8_4_ = SUB84(dVar15,0);
    local_e8._0_8_ = dVar19;
    local_e8._12_4_ = uVar39;
    *(ulonglong *)&(pTVar30->TreeBox).bIsValid = CONCAT71(uStack_c7,1);
    (pTVar30->Position).field0_0x0._s_0.Y = (dVar4 + dVar15) * dVar26;
    (pTVar30->Position).field0_0x0._s_0.X = (dVar18 + dVar19) * dVar26;
    pTVar30->MinimumQuadSize = fVar3;
    local_d8._8_4_ = uVar11;
    local_d8._0_8_ = dVar18;
    local_d8._12_4_ = uVar12;
    pTVar30->SubTrees[3] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->SubTrees[2] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->SubTrees[1] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar30->SubTrees[0] = (TQuadTree<FProceduralFoliageInstance_*,4> *)0x0;
    pTVar33 = pTVar30;
  }
  this->SubTrees[3] = pTVar33;
  this->bInternal = true;
  iVar6 = (this->Nodes).ArrayNum;
  pFVar35 = (this->Nodes).AllocatorInstance.Data;
  local_190._0_8_ = (FScriptContainerElement *)0x0;
  local_190._8_4_ = 0;
  local_190._12_4_ = 0;
  pFVar36 = pFVar35 + (longlong)iVar6 * 0x30;
  pTVar33 = pTVar37;
  do {
    uVar29 = (uint)pTVar33;
    if ((this->Nodes).ArrayNum != iVar6) {
      local_198[0] = 0;
      `TCheckedPointerIterator<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_198);
      uVar29 = local_190._8_4_;
    }
    uVar27 = local_190._0_8_;
    if (pFVar35 == pFVar36) {
      if (this != (TQuadTree<FProceduralFoliageInstance_*,4> *)local_190) {
        iVar6 = (this->Nodes).ArrayMax;
        piVar1 = &(this->Nodes).ArrayMax;
        (this->Nodes).ArrayNum = uVar29;
        if ((uVar29 == 0) && (iVar6 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,uVar29,iVar6,(ForAnyElementType *)this,uVar29,piVar1);
          if (uVar29 != 0) {
            memcpy((this->Nodes).AllocatorInstance.Data,(void *)uVar27,(longlong)(int)uVar29 * 0x30)
            ;
          }
        }
      }
      if ((FScriptContainerElement *)local_190._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_190._0_8_);
      }
      return;
    }
    iVar34 = 0;
    if (this->bInternal == false) {
LAB_145eec519:
      bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumQuads > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GenericQuadTree.h"
                          ,0xe8,L"");
      uVar29 = local_190._8_4_;
      if (bVar28) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      dVar15 = (this->Position).field0_0x0._s_0.X;
      dVar4 = *(double *)pFVar35;
      dVar18 = (this->Position).field0_0x0._s_0.Y;
      bVar28 = dVar15 == *(double *)(pFVar35 + 0x10);
      bVar8 = dVar15 < *(double *)(pFVar35 + 0x10);
      bVar7 = dVar18 == *(double *)(pFVar35 + 0x18);
      bVar9 = dVar18 < *(double *)(pFVar35 + 0x18);
      pTVar33 = pTVar37;
      iVar34 = 0;
      if ((dVar4 <= dVar15) && (iVar34 = 0, *(double *)(pFVar35 + 8) <= dVar18)) {
        local_190._16_8_ = this->SubTrees[2];
        iVar34 = 1;
        pTVar33 = (TQuadTree<FProceduralFoliageInstance_*,4> *)&DAT_00000001;
      }
      if ((bVar8 || bVar28) && (*(double *)(pFVar35 + 8) <= dVar18)) {
        iVar34 = iVar34 + 1;
        *(TQuadTree<FProceduralFoliageInstance_*,4> **)(local_190 + (longlong)pTVar33 * 8 + 0x10) =
             this->SubTrees[3];
        pTVar33 = (TQuadTree<FProceduralFoliageInstance_*,4> *)
                  ((longlong)&(pTVar33->Nodes).AllocatorInstance.Data + 1);
      }
      if ((dVar4 <= dVar15) && (bVar9 || bVar7)) {
        iVar34 = iVar34 + 1;
        *(TQuadTree<FProceduralFoliageInstance_*,4> **)(local_190 + (longlong)pTVar33 * 8 + 0x10) =
             this->SubTrees[0];
        pTVar33 = (TQuadTree<FProceduralFoliageInstance_*,4> *)
                  ((longlong)&(pTVar33->Nodes).AllocatorInstance.Data + 1);
      }
      if ((bVar8 || bVar28) && (bVar9 || bVar7)) {
        iVar34 = iVar34 + 1;
        *(TQuadTree<FProceduralFoliageInstance_*,4> **)(local_190 + (longlong)pTVar33 * 8 + 0x10) =
             this->SubTrees[1];
      }
      if (iVar34 == 0) goto LAB_145eec519;
    }
    uVar27 = local_190._16_8_;
    if (iVar34 == 1) {
      pFVar32 = (((TArray<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,TSizedDefaultAllocator<32>_>
                   *)local_190._16_8_)->AllocatorInstance).Data;
      if (((pFVar32 <= pFVar35) &&
          (pFVar35 < pFVar32 + (longlong)
                               ((TArray<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,TSizedDefaultAllocator<32>_>
                                 *)local_190._16_8_)->ArrayMax * 0x30)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar28)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar29 = ((TArray<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,TSizedDefaultAllocator<32>_>
                 *)uVar27)->ArrayNum;
      piVar1 = &((TArray<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,TSizedDefaultAllocator<32>_>
                  *)uVar27)->ArrayMax;
      if (uVar29 == *piVar1) {
        uVar29 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,(ForAnyElementType *)uVar27,piVar1);
      }
      ((TArray<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,TSizedDefaultAllocator<32>_> *)
      uVar27)->ArrayNum = uVar29 + 1;
      pFVar32 = (((TArray<TQuadTree<FProceduralFoliageInstance_*,4>::FNode,TSizedDefaultAllocator<32>_>
                   *)uVar27)->AllocatorInstance).Data;
    }
    else {
      if ((((ulonglong)local_190._0_8_ <= pFVar35) &&
          (pFVar35 < (FScriptContainerElement *)
                     (local_190._0_8_ + (longlong)(int)local_190._12_4_ * 0x30))) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), uVar29 = local_190._8_4_, bVar28)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar29 == local_190._12_4_) {
        uVar29 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,(ForAnyElementType *)local_190,(int *)(local_190 + 0xc));
      }
      local_190._8_4_ = uVar29 + 1;
      pFVar32 = (FScriptContainerElement *)local_190._0_8_;
    }
    lVar31 = (longlong)(int)uVar29;
    dVar15 = *(double *)(pFVar35 + 8);
    *(double *)(pFVar32 + lVar31 * 0x30) = *(double *)pFVar35;
    *(double *)(pFVar32 + lVar31 * 0x30 + 8) = dVar15;
    dVar15 = *(double *)(pFVar35 + 0x18);
    *(double *)(pFVar32 + lVar31 * 0x30 + 0x10) = *(double *)(pFVar35 + 0x10);
    *(double *)(pFVar32 + lVar31 * 0x30 + 0x10 + 8) = dVar15;
    pFVar2 = pFVar35 + 0x20;
    dVar15 = *(double *)(pFVar35 + 0x28);
    pFVar35 = pFVar35 + 0x30;
    *(double *)(pFVar32 + lVar31 * 0x30 + 0x20) = *(double *)pFVar2;
    *(double *)(pFVar32 + lVar31 * 0x30 + 0x20 + 8) = dVar15;
    pTVar33 = (TQuadTree<FProceduralFoliageInstance_*,4> *)(ulonglong)(uint)local_190._8_4_;
  } while( true );
}

