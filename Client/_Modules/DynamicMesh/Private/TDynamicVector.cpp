// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 32

// ~TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512> @ 14c6e0530

void __thiscall
UE::Geometry::
TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
::
~TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
          (TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
           *this)

{
  TArray<UE::Geometry::TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x1000);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// ~TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512> @ 14c6e0630

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::
~TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>
          (TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x1800);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// Add @ 14c6fd7a0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::Add
          (TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512> *this,
          FSurfacePoint *param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = this->CurBlockUsed;
  if (uVar8 == 0x200) {
    if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
      AddAllocatedBlock(this);
    }
    this->CurBlock = this->CurBlock + 1;
    uVar8 = 0;
    this->CurBlockUsed = 0;
  }
  uVar5 = *(undefined8 *)&param_1->Position;
  lVar9 = (longlong)(int)uVar8;
  dVar6 = (param_1->Position).EdgePosition.Alpha;
  dVar7 = *(double *)((longlong)&param_1->Position + 0x10);
  uVar3 = *(undefined8 *)((longlong)&param_1->Position + 0x18);
  lVar4 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8);
  puVar1 = (undefined8 *)(lVar4 + lVar9 * 0x28);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar5;
  pdVar2 = (double *)(lVar4 + 0x10 + lVar9 * 0x28);
  *pdVar2 = dVar6;
  pdVar2[1] = dVar7;
  *(undefined8 *)(lVar4 + 0x20 + lVar9 * 0x28) = uVar3;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// AddAllocatedBlock @ 14c6fd9f0

void __thiscall
UE::Geometry::
TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
::AddAllocatedBlock(TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
                    *this)

{
  TArray<UE::Geometry::TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x1000);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14c6fdab0

void __thiscall
UE::Geometry::
TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>::
AddAllocatedBlock(TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>
                  *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x2000);
  if (local_18[0] != (undefined8 *)0x0) {
    lVar8 = 0x200;
    puVar7 = local_18[0];
    do {
      *puVar7 = 0x3ff0000000000000;
      *(undefined1 *)(puVar7 + 1) = 0;
      puVar7 = puVar7 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(undefined8 **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14c6fdba0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::AddAllocatedBlock
          (TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x1800);
  if (local_18[0] != (undefined4 *)0x0) {
    lVar8 = 0x200;
    puVar7 = local_18[0];
    do {
      *puVar7 = 0xffffffff;
      puVar7[2] = 0xffffffff;
      puVar7 = puVar7 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(undefined4 **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14c6fdc90

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::
AddAllocatedBlock(TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>
                  *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 *local_18 [2];
  
  pTVar1 = &this->Blocks;
  puVar7 = ::operator_new(0x5000);
  local_18[0] = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    lVar9 = 0x200;
    puVar8 = puVar7;
    do {
      *puVar8 = 0;
      puVar8[2] = 0xffffffff;
      puVar8 = puVar8 + 10;
      lVar9 = lVar9 + -1;
      local_18[0] = puVar7;
    } while (lVar9 != 0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) &&
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(undefined4 **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// InsertAt @ 14c74c6d0

void __thiscall
UE::Geometry::TDynamicVector<double,512>::InsertAt
          (TDynamicVector<double,512> *this,double *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = this->CurBlockUsed;
  uVar1 = this->CurBlock;
  uVar2 = uVar1 * 0x200 + uVar3;
  if (param_2 == uVar2) {
    if (uVar3 == 0x200) {
      if (uVar1 == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar1 = this->CurBlock;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
  }
  else {
    if (param_2 <= uVar2) {
      *(double *)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8) +
       (ulonglong)(param_2 & 0x1ff) * 8) = *param_1;
      return;
    }
    Resize(this,param_2);
    uVar3 = this->CurBlockUsed;
    if (uVar3 == 0x200) {
      if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
    uVar1 = this->CurBlock;
  }
  *(double *)
   (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
   (longlong)(int)uVar3 * 8) = *param_1;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// InsertAt @ 14c74c7b0

void __thiscall
UE::Geometry::
TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
::InsertAt(TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
           *this,TDoubleLinkedListNode **param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = this->CurBlockUsed;
  uVar1 = this->CurBlock;
  uVar2 = uVar1 * 0x200 + uVar3;
  if (param_2 == uVar2) {
    if (uVar3 == 0x200) {
      if (uVar1 == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar1 = this->CurBlock;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
  }
  else {
    if (param_2 <= uVar2) {
      *(TDoubleLinkedListNode **)
       (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8) +
       (ulonglong)(param_2 & 0x1ff) * 8) = *param_1;
      return;
    }
    Resize(this,param_2);
    uVar3 = this->CurBlockUsed;
    if (uVar3 == 0x200) {
      if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
    uVar1 = this->CurBlock;
  }
  *(TDoubleLinkedListNode **)
   (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
   (longlong)(int)uVar3 * 8) = *param_1;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// InsertAt @ 14c74c890

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::InsertAt
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this,FEdge *param_1,uint param_2)

{
  FIndex2i_u_0 *pFVar1;
  uint uVar2;
  FIndex2i_u_0 FVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = this->CurBlockUsed;
  uVar2 = this->CurBlock;
  uVar5 = uVar2 * 0x200 + uVar4;
  if (param_2 == uVar5) {
    if (uVar4 == 0x200) {
      if (uVar2 == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar2 = this->CurBlock;
      uVar4 = 0;
      this->CurBlockUsed = 0;
    }
  }
  else {
    if (param_2 <= uVar5) {
      FVar3 = (param_1->Tri).field0_0x0;
      pFVar1 = (FIndex2i_u_0 *)
               (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8)
               + (ulonglong)(param_2 & 0x1ff) * 0x10);
      *pFVar1 = (param_1->Vert).field0_0x0;
      pFVar1[1] = FVar3;
      return;
    }
    Resize(this,param_2);
    uVar4 = this->CurBlockUsed;
    if (uVar4 == 0x200) {
      if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar4 = 0;
      this->CurBlockUsed = 0;
    }
    uVar2 = this->CurBlock;
  }
  FVar3 = (param_1->Tri).field0_0x0;
  pFVar1 = (FIndex2i_u_0 *)
           (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
           (longlong)(int)uVar4 * 0x10);
  *pFVar1 = (param_1->Vert).field0_0x0;
  pFVar1[1] = FVar3;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// InsertAt @ 14c74c970

void __thiscall
UE::Geometry::
TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>::InsertAt
          (TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>
           *this,FGeometricInfo *param_1,uint param_2)

{
  double *pdVar1;
  uint uVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = this->CurBlockUsed;
  uVar2 = this->CurBlock;
  uVar5 = uVar2 * 0x200 + uVar4;
  if (param_2 == uVar5) {
    if (uVar4 == 0x200) {
      if (uVar2 == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar2 = this->CurBlock;
      uVar4 = 0;
      this->CurBlockUsed = 0;
    }
  }
  else {
    if (param_2 <= uVar5) {
      dVar3 = *(double *)&param_1->bIsInterior;
      pdVar1 = (double *)
               (*(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8)
               + (ulonglong)(param_2 & 0x1ff) * 0x10);
      *pdVar1 = param_1->ToRadians;
      pdVar1[1] = dVar3;
      return;
    }
    Resize(this,param_2);
    uVar4 = this->CurBlockUsed;
    if (uVar4 == 0x200) {
      if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar4 = 0;
      this->CurBlockUsed = 0;
    }
    uVar2 = this->CurBlock;
  }
  dVar3 = *(double *)&param_1->bIsInterior;
  pdVar1 = (double *)
           (*(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
           (longlong)(int)uVar4 * 0x10);
  *pdVar1 = param_1->ToRadians;
  pdVar1[1] = dVar3;
  this->CurBlockUsed = this->CurBlockUsed + 1;
  return;
}

// InsertAt @ 14c74ca50

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::
InsertAt(TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512> *this,
        FSurfacePoint *param_1,uint param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar9 = this->CurBlock * 0x200 + this->CurBlockUsed;
  if (param_2 != uVar9) {
    if (param_2 <= uVar9) {
      uVar5 = *(undefined8 *)&param_1->Position;
      dVar6 = (param_1->Position).EdgePosition.Alpha;
      dVar7 = *(double *)((longlong)&param_1->Position + 0x10);
      uVar3 = *(undefined8 *)((longlong)&param_1->Position + 0x18);
      uVar8 = (ulonglong)(param_2 & 0x1ff);
      lVar4 = *(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8);
      puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x28);
      *puVar1 = *(undefined8 *)param_1;
      puVar1[1] = uVar5;
      pdVar2 = (double *)(lVar4 + 0x10 + uVar8 * 0x28);
      *pdVar2 = dVar6;
      pdVar2[1] = dVar7;
      *(undefined8 *)(lVar4 + 0x20 + uVar8 * 0x28) = uVar3;
      return;
    }
    Resize(this,param_2);
  }
  Add(this,param_1);
  return;
}

// Resize @ 14c75ead0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::
TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
::Resize(TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
         *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x1000);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 14c75ec60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::
TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>::Resize
          (TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>
           *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *local_38 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar7 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar7) {
      uVar9 = (ulonglong)(uint)(iVar7 - iVar1);
      do {
        local_38[0] = ::operator_new(0x2000);
        if (local_38[0] == (undefined8 *)0x0) {
          local_38[0] = (undefined8 *)0x0;
        }
        else {
          lVar8 = 0x200;
          puVar6 = local_38[0];
          do {
            *puVar6 = 0x3ff0000000000000;
            *(undefined1 *)(puVar6 + 1) = 0;
            puVar6 = puVar6 + 2;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Blocks).ArrayNum;
        if (iVar7 == (this->Blocks).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar7 + 1;
        *(undefined8 **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else if (iVar7 < iVar1) {
      TruncateBlocks(this,iVar7,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 14c75ee20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::Resize
          (TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar7 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar7) {
      uVar9 = (ulonglong)(uint)(iVar7 - iVar1);
      do {
        local_28[0] = ::operator_new(0x1800);
        if (local_28[0] == (undefined4 *)0x0) {
          local_28[0] = (undefined4 *)0x0;
        }
        else {
          lVar8 = 0x200;
          puVar6 = local_28[0];
          do {
            *puVar6 = 0xffffffff;
            puVar6[2] = 0xffffffff;
            puVar6 = puVar6 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Blocks).ArrayNum;
        if (iVar7 == (this->Blocks).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar7 + 1;
        *(undefined4 **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else if (iVar7 < iVar1) {
      TruncateBlocks(this,iVar7,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// Resize @ 14c75efe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::Resize
          (TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512> *this,
          uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar7 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar7) {
      uVar9 = (ulonglong)(uint)(iVar7 - iVar1);
      do {
        local_28[0] = ::operator_new(0x5000);
        if (local_28[0] == (undefined4 *)0x0) {
          local_28[0] = (undefined4 *)0x0;
        }
        else {
          lVar8 = 0x200;
          puVar6 = local_28[0];
          do {
            *puVar6 = 0;
            puVar6[2] = 0xffffffff;
            puVar6 = puVar6 + 10;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->Blocks).ArrayNum;
        if (iVar7 == (this->Blocks).ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar7 + 1;
        *(undefined4 **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else if (iVar7 < iVar1) {
      TruncateBlocks(this,iVar7,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// TruncateBlocks @ 14c7705a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::
TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
::TruncateBlocks(TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
                 *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x1000);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 14c7707a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::
TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>::
TruncateBlocks(TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>
               *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x2000);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 14c7709a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512>::TruncateBlocks
          (TDynamicVector<UE::Geometry::FDeformableEdgePath::FPathJoint,512> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x1800);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// TruncateBlocks @ 14c770ba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::
TruncateBlocks(TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512> *this,
              int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x5000);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

// ~TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> @ 14c7b5f60

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::
~TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>
          (TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x2000);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// ~TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512> @ 14c7b6060

void __thiscall
UE::Geometry::
TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
~TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
          (TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
           *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x4000);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// ~TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512> @ 14c7b6160

void __thiscall
UE::Geometry::
TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
~TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
          (TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
           *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x8000);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// ~TDynamicVector<UE::Geometry::FIndex3i,512> @ 14c7b6260

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::
~TDynamicVector<UE::Geometry::FIndex3i,512>(TDynamicVector<UE::Geometry::FIndex3i,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x1800);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// AddAllocatedBlock @ 14c7d8e50

void __thiscall
UE::Geometry::
TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
AddAllocatedBlock(TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
                  *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x4000);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14c7d8f10

void __thiscall
UE::Geometry::
TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
AddAllocatedBlock(TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
                  *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x8000);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// ~TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> @ 14c898f70

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::
~TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>
          (TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x1800);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// ~TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512> @ 14c899070

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>::
~TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>
          (TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x4000);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// AddAllocatedBlock @ 14c8b6cc0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::AddAllocatedBlock
          (TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x1800);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// AddAllocatedBlock @ 14c8b6d80

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>::
AddAllocatedBlock(TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>
                  *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x4000);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// Resize @ 14c914e10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::Resize
          (TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x1800);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// TruncateBlocks @ 14c91fbd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512>::TruncateBlocks
          (TDynamicVector<UE::Geometry::FDynamicGraph::FEdge,512> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x1800);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

