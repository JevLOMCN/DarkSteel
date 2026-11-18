// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 17

// FSubRegionRemesher @ 14c7b41a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSubRegionRemesher * __thiscall
UE::Geometry::FSubRegionRemesher::FSubRegionRemesher
          (FSubRegionRemesher *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  FRemesher::FRemesher((FRemesher *)this,param_1);
  *(undefined ***)this = &___7FSubRegionRemesher_Geometry_UE__6B_;
  *(undefined8 *)&(this->VertexROI).Elements = 0;
  *(undefined8 *)&(this->VertexROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VertexROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VertexROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VertexROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexROI).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->VertexROI).Elements.field_0x30 = 0xffffffff;
  (this->VertexROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VertexROI).HashSize = 0;
  *(undefined8 *)&(this->EdgeROI).Elements = 0;
  *(undefined8 *)&(this->EdgeROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EdgeROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EdgeROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EdgeROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EdgeROI).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->EdgeROI).Elements.field_0x30 = 0xffffffff;
  (this->EdgeROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EdgeROI).HashSize = 0;
  *(undefined8 *)&(this->TriangleROI).Elements = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x30 = 0xffffffff;
  (this->TriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriangleROI).HashSize = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  *(undefined8 *)&(this->RemovedLastPassTris).Elements = 0;
  *(undefined8 *)&(this->RemovedLastPassTris).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RemovedLastPassTris).Elements.field_0x20 = 0;
  this->CurEdge = -1;
  *(undefined4 *)&(this->RemovedLastPassTris).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RemovedLastPassTris).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RemovedLastPassTris).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RemovedLastPassTris).Elements.field_0x30 = 0xffffffff;
  (this->RemovedLastPassTris).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RemovedLastPassTris).HashSize = 0;
  (this->InitialROIEdgeVertices).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialROIEdgeVertices).Values.ArrayNum = 0;
  (this->InitialROIEdgeVertices).Values.ArrayMax = 0;
  (this->InitialROIEdgeVertices).Bits = (long64 *)0x0;
  (this->InitialROIEdgeVertices).NumWords = 0;
  (this->InitialROITriangles).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialROITriangles).Values.ArrayNum = 0;
  (this->InitialROITriangles).Values.ArrayMax = 0;
  (this->InitialROITriangles).Bits = (long64 *)0x0;
  (this->InitialROITriangles).NumWords = 0;
  this->bTrackRemoved = false;
  this->LastUpdateROICounter = 0;
  this->LastRemeshPassCounter = 0;
  (this->SmoothIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SmoothIndices).ArrayNum = 0;
  (this->SmoothIndices).ArrayMax = 0;
  (this->SmoothedPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SmoothedPositions).ArrayNum = 0;
  (this->SmoothedPositions).ArrayMax = 0;
  local_48 = *(longlong *)&this->field_0xe0;
  uVar2 = *(undefined8 *)&this->field_0xe8;
  local_38 = *(longlong *)&this->field_0xf0;
  uStack_30 = *(undefined8 *)&this->field_0xf8;
  uVar1 = *(undefined8 *)&this->field_0x100;
  plStack_20 = *(longlong **)&this->field_0x108;
  *(code **)&this->field_0xe0 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FSubRegionRemesher::FSubRegionRemesher'::__l2::<lambda_1>,enum_UE::Geometry::FMeshRefinerBase::EVertexControl,int>
       ::Call;
  *(undefined8 *)&this->field_0xe8 = uStack_40;
  *(undefined4 *)&this->field_0xf0 = 0x528caf58;
  *(undefined4 *)&this->field_0xf4 = 1;
  *(FSubRegionRemesher **)&this->field_0xf8 = this;
  *(undefined4 *)&this->field_0x100 = (undefined4)local_28;
  *(undefined4 *)&this->field_0x104 = local_28._4_4_;
  *(undefined4 *)&this->field_0x108 = 0;
  *(undefined4 *)&this->field_0x10c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// ~FSubRegionRemesher @ 14c7b78e0

void __thiscall UE::Geometry::FSubRegionRemesher::~FSubRegionRemesher(FSubRegionRemesher *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined ***)this = &___7FSubRegionRemesher_Geometry_UE__6B_;
  pFVar1 = (this->SmoothedPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SmoothIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FUniqueIndexSet::~FUniqueIndexSet(&this->InitialROITriangles);
  FUniqueIndexSet::~FUniqueIndexSet(&this->InitialROIEdgeVertices);
  (this->RemovedLastPassTris).HashSize = 0;
  FVar2 = (this->RemovedLastPassTris).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RemovedLastPassTris).Elements);
  pFVar1 = (this->Edges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TriangleROI).HashSize = 0;
  FVar2 = (this->TriangleROI).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TriangleROI).Elements);
  (this->EdgeROI).HashSize = 0;
  FVar2 = (this->EdgeROI).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EdgeROI).Elements);
  (this->VertexROI).HashSize = 0;
  FVar2 = (this->VertexROI).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VertexROI).Elements);
  FRemesher::~FRemesher((FRemesher *)this);
  return;
}

// operator() @ 14c7bac90

EVertexControl __thiscall
`UE::Geometry::FSubRegionRemesher::FSubRegionRemesher'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  EVertexControl EVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x268) != *(int *)(lVar1 + 0x294)) {
    lVar4 = *(longlong *)(lVar1 + 0x2a0);
    if (*(longlong *)(lVar1 + 0x2a0) == 0) {
      lVar4 = lVar1 + 0x298;
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar1 + 0x2a8) - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*(longlong *)(lVar1 + 0x260) + (longlong)iVar2 * 0xc) == param_1)
        goto LAB_14c7bacfc;
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0x260) + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14c7bacfc:
  EVar3 = AllowAll;
  if (iVar2 == -1) {
    EVar3 = NoMovement;
  }
  return EVar3;
}

// operator() @ 14c7bd750

void __thiscall
`UE::Geometry::FSubRegionRemesher::FullSmoothPass_Buffer'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined4 uVar13;
  longlong lVar14;
  uint uVar15;
  char local_res10 [8];
  undefined1 local_88 [32];
  longlong local_68 [2];
  undefined1 local_58 [24];
  undefined8 local_40;
  
  lVar2 = *(longlong *)this;
  lVar14 = (longlong)param_1;
  uVar15 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar2 + 0x420)) {
    uVar10 = uVar15;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar3 = *(longlong **)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar13 = *(undefined4 *)(*(longlong *)(lVar2 + 0x418) + lVar14 * 4);
  local_res10[0] = '\0';
  pcVar5 = *(code **)(*plVar3 + 0x90);
  local_68[0] = *plVar4;
  local_40 = 0;
  if (local_68[0] != 0) {
    plVar12 = plVar4 + 2;
    if ((longlong *)plVar4[5] != (longlong *)0x0) {
      plVar12 = (longlong *)plVar4[5];
    }
    (**(code **)*plVar12)(plVar12,local_58);
  }
  puVar11 = (undefined4 *)(*pcVar5)(plVar3,local_88,uVar13,local_68,local_res10);
  lVar2 = *(longlong *)this;
  uVar13 = *puVar11;
  uVar6 = puVar11[1];
  uVar7 = puVar11[2];
  uVar8 = puVar11[3];
  uVar1 = *(undefined8 *)(puVar11 + 4);
  uVar10 = 0;
  if (param_1 < *(int *)(lVar2 + 0x430)) {
    uVar10 = uVar15;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x428);
  puVar11 = (undefined4 *)(lVar2 + lVar14 * 0x18);
  *puVar11 = uVar13;
  puVar11[1] = uVar6;
  puVar11[2] = uVar7;
  puVar11[3] = uVar8;
  *(undefined8 *)(lVar2 + 0x10 + lVar14 * 0x18) = uVar1;
  if (local_res10[0] == '\0') {
    uVar13 = 0xffffffff;
  }
  else {
    lVar2 = *(longlong *)this;
    uVar10 = 0;
    if (param_1 < *(int *)(lVar2 + 0x420)) {
      uVar10 = uVar15;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar13 = *(undefined4 *)(*(longlong *)(lVar2 + 0x418) + lVar14 * 4);
  }
  lVar2 = *(longlong *)this;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar2 + 0x420)) {
    uVar10 = uVar15;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x418) + lVar14 * 4) = uVar13;
  return;
}

// operator() @ 14c7c33d0

void __thiscall
`UE::Geometry::FSubRegionRemesher::InitializeFromVertexROI'::__l7::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int local_res8 [2];
  int local_res10 [6];
  
  uVar5 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1c0) +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  if ((uint)uVar5 == *(uint *)((longlong)this + 0x10)) {
    uVar5 = uVar5 >> 0x20;
  }
  else {
    uVar3 = 0xffffffff;
    if ((uint)(uVar5 >> 0x20) == *(uint *)((longlong)this + 0x10)) {
      uVar3 = (uint)uVar5;
    }
    uVar5 = (ulonglong)uVar3;
  }
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x268) != *(int *)(lVar1 + 0x294)) {
    lVar4 = *(longlong *)(lVar1 + 0x2a0);
    if (*(longlong *)(lVar1 + 0x2a0) == 0) {
      lVar4 = lVar1 + 0x298;
    }
    iVar2 = *(int *)(lVar4 + (*(int *)(lVar1 + 0x2a8) - 1 & uVar5) * 4);
    if (iVar2 != -1) {
      while (*(int *)(*(longlong *)(lVar1 + 0x260) + (longlong)iVar2 * 0xc) != (int)uVar5) {
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0x260) + 4 + (longlong)iVar2 * 0xc);
        if (iVar2 == -1) {
          return;
        }
      }
      local_res10[0] = param_1;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar1 + 0x2b0),local_res8
                 ,(bool *)local_res10);
    }
  }
  return;
}

// operator() @ 14c7cc250

void __thiscall
`UE::Geometry::FSubRegionRemesher::FullSmoothPass_Buffer'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  short sVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  
  lVar4 = *(longlong *)this;
  lVar13 = (longlong)param_1;
  uVar14 = (uint)~param_1 >> 0x1f;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar4 + 0x420)) {
    uVar11 = uVar14;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (-1 < *(int *)(*(longlong *)(lVar4 + 0x418) + lVar13 * 4)) {
    lVar4 = *(longlong *)this;
    lVar5 = *(longlong *)(lVar4 + 8);
    uVar11 = 0;
    if (param_1 < *(int *)(lVar4 + 0x430)) {
      uVar11 = uVar14;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar6 = *(longlong *)this;
    lVar4 = *(longlong *)(lVar4 + 0x428);
    uVar11 = 0;
    if (param_1 < *(int *)(lVar6 + 0x420)) {
      uVar11 = uVar14;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar11 = *(uint *)(*(longlong *)(lVar6 + 0x418) + lVar13 * 4);
    sVar10 = _dclass(*(undefined8 *)(lVar4 + lVar13 * 0x18));
    if (((sVar10 < 1) && (sVar10 = _dclass(*(undefined8 *)(lVar4 + 8 + lVar13 * 0x18)), sVar10 < 1))
       && (sVar10 = _dclass(*(undefined8 *)(lVar4 + 0x10 + lVar13 * 0x18)), sVar10 < 1)) {
      puVar1 = (undefined8 *)(lVar4 + lVar13 * 0x18);
      uVar8 = puVar1[1];
      uVar3 = *(undefined8 *)(lVar4 + 0x10 + lVar13 * 0x18);
      uVar12 = (ulonglong)(uVar11 & 0x1ff);
      lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
      puVar2 = (undefined8 *)(lVar4 + uVar12 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      *(undefined8 *)(lVar4 + 0x10 + uVar12 * 0x18) = uVar3;
    }
  }
  return;
}

// operator() @ 14c7cf0e0

void __thiscall
`UE::Geometry::FSubRegionRemesher::InitializeFromVertexROI'::__l12::<lambda_2>::operator()
          (void *this,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x1c0) +
             (ulonglong)((uint)param_1 >> 9) * 8) + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
  UE::Geometry::FUniqueIndexSet::Add((FUniqueIndexSet *)(*(longlong *)this + 0x3e0),(int)uVar1);
  iVar2 = (int)((ulonglong)uVar1 >> 0x20);
  if (iVar2 != -1) {
    UE::Geometry::FUniqueIndexSet::Add((FUniqueIndexSet *)(*(longlong *)this + 0x3e0),iVar2);
  }
  return;
}

// AddEdgeToTriangleROI @ 14c7d8fd0

void __thiscall
UE::Geometry::FSubRegionRemesher::AddEdgeToTriangleROI(FSubRegionRemesher *this,int param_1)

{
  undefined8 uVar1;
  FSubRegionRemesher *local_res8;
  int iStackX_1c;
  code *local_18;
  FSubRegionRemesher **local_10;
  
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSubRegionRemesher::AddVertexToTriangleROI'::__l2::<lambda_1>,void,int>
             ::Call;
  uVar1 = *(undefined8 *)
           (*(longlong *)
             (((*(FDynamicMesh3 **)&this->field_0x8)->Edges).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  local_10 = &local_res8;
  local_res8 = this;
  FDynamicMesh3::EnumerateVertexTriangles
            (*(FDynamicMesh3 **)&this->field_0x8,(int)uVar1,
             (TFunctionRef<void___cdecl(int)> *)&local_18);
  iStackX_1c = (int)((ulonglong)uVar1 >> 0x20);
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSubRegionRemesher::AddVertexToTriangleROI'::__l2::<lambda_1>,void,int>
             ::Call;
  local_res8 = this;
  FDynamicMesh3::EnumerateVertexTriangles
            (*(FDynamicMesh3 **)&this->field_0x8,iStackX_1c,
             (TFunctionRef<void___cdecl(int)> *)&local_18);
  return;
}

// BasicRemeshPass @ 14c7e4e10

void __thiscall UE::Geometry::FSubRegionRemesher::BasicRemeshPass(FSubRegionRemesher *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->LastRemeshPassCounter == this->LastUpdateROICounter) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LastRemeshPassCounter != LastUpdateROICounter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
                       ,0xe0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->LastRemeshPassCounter = this->LastUpdateROICounter;
  FRemesher::BasicRemeshPass((FRemesher *)this);
  return;
}

// FullSmoothPass_Buffer @ 14c8099c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FSubRegionRemesher::FullSmoothPass_Buffer(FSubRegionRemesher *this,bool param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  atomic<unsigned_char> *this_00;
  ulonglong uVar4;
  FMutex FVar5;
  atomic<unsigned_char> aVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  FSubRegionRemesher *pFVar11;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStackY_1b8 [32];
  <lambda_1> local_168 [4];
  undefined4 local_164;
  int local_160;
  int local_15c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_158;
  FSubRegionRemesher *local_150;
  FSubRegionRemesher *local_148;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FSubRegionRemesher *local_e0;
  longlong *local_d8;
  TArrayView<std::nullptr_t,int> local_d0;
  code *local_c0;
  FSubRegionRemesher **local_b8;
  TArrayView<std::nullptr_t,int> local_b0;
  code *local_a0;
  FSubRegionRemesher **local_98;
  undefined4 local_74;
  longlong local_68 [2];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar2 = &this->SmoothIndices;
  piVar1 = &(this->SmoothIndices).ArrayMax;
  (this->SmoothIndices).ArrayNum = 0;
  local_150 = this;
  if ((this->SmoothIndices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar18 = *(int *)&(this->VertexROI).Elements.field_0x8 -
           *(int *)&(this->VertexROI).Elements.field_0x34;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*piVar1 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&pTVar2->AllocatorInstance,(this->SmoothIndices).ArrayNum,piVar1);
  }
  puVar3 = &(this->VertexROI).Elements.field_0x10;
  local_120 = 0;
  iVar14 = *(int *)&(this->VertexROI).Elements.field_0x28;
  local_158 = &this->VertexROI;
  iStack_138 = 0;
  uStack_134 = 1;
  iStack_124 = 0;
  if (iVar14 != 0) {
    puVar20 = *(uint **)&(this->VertexROI).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar3;
    }
    uVar18 = *puVar20;
    while (uVar18 == 0) {
      lVar15 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      iStack_124 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_14c809b00;
      uVar18 = puVar20[lVar15 + 1];
    }
    uStack_134 = -uVar18 & uVar18;
    uVar4 = (ulonglong)uStack_134 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_160 = (int)lVar15;
    iStack_124 = local_120 + -1 + local_160;
    if (iVar14 < iStack_124) {
      iStack_124 = iVar14;
    }
  }
LAB_14c809b00:
  uStack_11c = local_74;
  iStack_118 = *(int *)&(this->VertexROI).Elements.field_0x8 -
               *(int *)&(this->VertexROI).Elements.field_0x34;
  uVar18 = *(uint *)&(this->VertexROI).Elements.field_0x28;
  uStack_128 = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uStack_134,iStack_138);
  uVar21 = uVar18 & 0xffffffe0;
  TStack_108.CurrentBitIndex = iStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar18 >> 5;
  TStack_108._28_4_ = local_74;
  TStack_108.BaseBitIndex = local_120;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  local_140 = local_158;
  local_130 = puVar3;
  local_110 = local_158;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar18 < 0) || (iVar14 < (int)uVar18)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_158;
  uVar7 = *(uint *)&(this->VertexROI).Elements.field_0x28;
  if (uVar18 != uVar7) {
    puVar19 = *(undefined1 **)&(this->VertexROI).Elements.field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar3;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar18 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14c809c20;
      uVar18 = *(uint *)(puVar19 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_15c = (int)lVar15;
    uVar18 = local_15c + -1 + uVar21;
    if ((int)uVar7 < (int)uVar18) {
      uVar18 = uVar7;
    }
  }
LAB_14c809c20:
  while( true ) {
    pTVar12 = local_110;
    if (*(int *)&(local_110->Elements).field_0x8 - *(int *)&(local_110->Elements).field_0x34 !=
        (int)uStack_e8) {
      local_168[0] = (<lambda_1>)0x0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    pFVar11 = local_150;
    if (((TStack_108.CurrentBitIndex == uVar18) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
       (pTVar12 == pTVar10)) break;
    local_164 = *(undefined4 *)
                 (*(longlong *)&pTVar12->Elements + (longlong)TStack_108.CurrentBitIndex * 0xc);
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_164) &&
        ((FScriptContainerElement *)&local_164 < pFVar8 + (longlong)*piVar1 * 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->SmoothIndices).ArrayNum;
    if (iVar14 == *piVar1) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->SmoothIndices).ArrayNum = iVar14 + 1;
    *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_164;
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  iVar14 = (this->SmoothIndices).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_150->SmoothedPositions,iVar14,No);
  (**(code **)(*(longlong *)pFVar11 + 0xa0))(pFVar11,local_68);
  local_e0 = pFVar11;
  local_d8 = local_68;
  local_d0.DataPtr = (void **)0x0;
  local_d0.ArrayNum = 0;
  local_c0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSubRegionRemesher::FullSmoothPass_Buffer'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b8 = &local_e0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar14,1,(TFunctionRef<void___cdecl(int)> *)&local_c0,local_168[0],
             None,&local_d0);
  local_148 = pFVar11;
  local_a0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSubRegionRemesher::FullSmoothPass_Buffer'::__l2::<lambda_2>,void,int>
             ::Call;
  local_98 = &local_148;
  local_b0.DataPtr = (void **)0x0;
  local_b0.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar14,1,(TFunctionRef<void___cdecl(int)> *)&local_a0,local_168[0],
             None,&local_b0);
  lVar15 = *(longlong *)&pFVar11->field_0x8;
  if (*(char *)(lVar15 + 0x21c) != '\0') {
    this_00 = (atomic<unsigned_char> *)(lVar15 + 0x21d);
    LOCK();
    FVar5.State = *this_00;
    if (FVar5.State == (atomic<unsigned_char>)0x0) {
      *this_00 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar5.State != (atomic<unsigned_char>)0x0) {
      FMutex::LockSlow((FMutex *)this_00);
    }
    *(int *)(lVar15 + 0x220) = *(int *)(lVar15 + 0x220) + 1;
    LOCK();
    aVar6 = *this_00;
    *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
    UNLOCK();
    if (((byte)aVar6 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)this_00);
    }
  }
  if (local_68[0] != 0) {
    plVar16 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar16 = local_40;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  return;
}

// GetNextEdge @ 14c810640

int __thiscall
UE::Geometry::FSubRegionRemesher::GetNextEdge(FSubRegionRemesher *this,int param_1,bool *param_2)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = this->CurEdge + 1;
  this->CurEdge = uVar8;
  if ((int)uVar8 < (this->Edges).ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Edges).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      uVar8 = *(uint *)((this->Edges).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
      if (*(int *)&(this->EdgeROI).Elements.field_0x8 !=
          *(int *)&(this->EdgeROI).Elements.field_0x34) {
        FVar1 = (this->EdgeROI).Hash.SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&(this->EdgeROI).Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar1;
        }
        iVar6 = *(int *)((longlong)FVar7 + (ulonglong)((this->EdgeROI).HashSize - 1U & uVar8) * 4);
        if (iVar6 != -1) {
          lVar2 = *(longlong *)&(this->EdgeROI).Elements;
          do {
            if (*(uint *)(lVar2 + (longlong)iVar6 * 0xc) == uVar8) goto LAB_14c81074e;
            iVar6 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0xc);
          } while (iVar6 != -1);
        }
      }
      this->CurEdge = this->CurEdge + 1;
      uVar8 = this->CurEdge;
    } while ((int)uVar8 < (this->Edges).ArrayNum);
  }
LAB_14c81074e:
  if (this->CurEdge < (this->Edges).ArrayNum) {
    *param_2 = false;
    uVar8 = this->CurEdge;
    uVar5 = 0;
    if ((int)uVar8 < (this->Edges).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    iVar6 = *(int *)((this->Edges).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
  }
  else {
    *param_2 = true;
    iVar6 = -1;
  }
  return iVar6;
}

// InitializeFromVertexROI @ 14c8178b0

void __thiscall UE::Geometry::FSubRegionRemesher::InitializeFromVertexROI(FSubRegionRemesher *this)

{
  long64 **pplVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  ulong64 uVar10;
  long64 *plVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_198;
  undefined4 local_194;
  ulonglong local_190;
  longlong local_188;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  FSubRegionRemesher *local_140;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  code *local_a8;
  FSubRegionRemesher **local_a0;
  code *local_98;
  FSubRegionRemesher **local_90;
  FSubRegionRemesher *local_88;
  longlong local_80;
  int local_78;
  undefined4 local_54;
  
  local_188 = *(longlong *)&this->field_0x8;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Geometry::FSubRegionRemesher::InitializeFromVertexROI(void)___ptr64'
                ::__l3::__CpuProfilerEventSpecId124,"InitializeFromVertexROI_1Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
               ,0x7c);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Geometry::FSubRegionRemesher::InitializeFromVertexROI(void)___ptr64'
               ::__l3::__CpuProfilerEventSpecId124);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->EdgeROI);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->TriangleROI);
  local_170 = &(this->VertexROI).Elements.field_0x10;
  iVar14 = *(int *)&(this->VertexROI).Elements.field_0x28;
  local_180 = &this->VertexROI;
  iStack_178 = 0;
  local_190 = 1;
  local_160 = 0;
  iVar9 = 0;
  uStack_174 = 1;
  iStack_164 = 0;
  if (iVar14 != 0) {
    puVar18 = *(uint **)&(this->VertexROI).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_170;
    }
    uStack_174 = *puVar18;
    local_160 = 0;
    while (uStack_174 == 0) {
      lVar12 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) {
        iVar9 = *(int *)&(this->VertexROI).Elements.field_0x28;
        uStack_174 = 1;
        iStack_164 = iVar14;
        goto LAB_14c8179d6;
      }
      uStack_174 = puVar18[lVar12 + 1];
    }
    iVar9 = *(int *)&(this->VertexROI).Elements.field_0x28;
    uStack_174 = -uStack_174 & uStack_174;
    uVar4 = (ulonglong)uStack_174 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_150 = (int)lVar12;
    iStack_164 = local_160 + -1 + local_150;
    if (iVar9 < iStack_164) {
      iStack_164 = iVar14;
    }
  }
LAB_14c8179d6:
  uStack_15c = local_54;
  iStack_158 = *(int *)&(this->VertexROI).Elements.field_0x8 -
               *(int *)&(this->VertexROI).Elements.field_0x34;
  local_198 = *(uint *)&(this->VertexROI).Elements.field_0x28;
  TStack_100._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar19 = local_198 & 0xffffffe0;
  uStack_168 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_164;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_198 >> 5;
  TStack_100._28_4_ = local_54;
  TStack_100.BaseBitIndex = local_160;
  uStack_e0 = CONCAT44(uStack_154,iStack_158);
  local_108 = local_180;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_170;
  if ((((int)local_198 < 0) || (iVar9 < (int)local_198)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar12 = local_188;
  uVar20 = *(uint *)&(this->VertexROI).Elements.field_0x28;
  if (local_198 != uVar20) {
    puVar16 = *(undefined1 **)&(this->VertexROI).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->VertexROI).Elements.field_0x10;
    }
    uVar21 = -1 << ((byte)local_198 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar21 == 0) {
      lVar13 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      local_198 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14c817b04;
      uVar21 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_14c = (int)lVar13;
    local_198 = local_14c + -1 + uVar19;
    if ((int)uVar20 < (int)local_198) {
      local_198 = uVar20;
    }
  }
LAB_14c817b04:
  while( true ) {
    pTVar7 = local_108;
    if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
        (int)uStack_e0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_100.CurrentBitIndex == local_198) &&
        (TStack_100.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->VertexROI).Elements.field_0x10)) &&
       (pTVar7 == &this->VertexROI)) break;
    local_80 = lVar12;
    local_a8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FSubRegionRemesher::InitializeFromVertexROI'::__l7::<lambda_1>,void,int>
               ::Call;
    local_78 = *(int *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_100.CurrentBitIndex * 0xc)
    ;
    local_a0 = &local_88;
    local_88 = this;
    FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
              ((FSmallListSet *)(lVar12 + 0xb8),local_78,
               (TFunctionRef<void___cdecl(int)> *)&local_a8);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  UpdateROI(this);
  iVar14 = 0;
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Geometry::FSubRegionRemesher::InitializeFromVertexROI(void)___ptr64'
                ::__l8::__CpuProfilerEventSpecId145,"InitializeFromVertexROI_4Triangles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
               ,0x91);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Geometry::FSubRegionRemesher::InitializeFromVertexROI(void)___ptr64'
               ::__l8::__CpuProfilerEventSpecId145);
  }
  pplVar1 = &(this->InitialROITriangles).Bits;
  iVar9 = *(int *)(lVar12 + 0x144) + *(int *)(lVar12 + 0x140) * 0x200;
  (this->InitialROITriangles).MaxIndex = iVar9;
  iVar9 = ((int)((iVar9 >> 0x1f & 0x3fU) + iVar9) >> 6) + 1;
  if ((this->InitialROITriangles).NumWords < iVar9) {
    if (*pplVar1 != (long64 *)0x0) {
      operator_delete__(*pplVar1);
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (longlong)iVar9;
    uVar10 = SUB168(ZEXT816(8) * auVar6,0);
    (this->InitialROITriangles).NumWords = iVar9;
    if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    plVar11 = operator_new__(uVar10);
    *pplVar1 = plVar11;
  }
  memset(*pplVar1,0,(longlong)(iVar9 * 8));
  piVar2 = &(this->InitialROITriangles).Values.ArrayMax;
  iVar9 = *piVar2;
  (this->InitialROITriangles).Values.ArrayNum = 0;
  if (iVar9 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->InitialROITriangles).Values.AllocatorInstance,0,piVar2);
  }
  if (*piVar2 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->InitialROITriangles).Values.AllocatorInstance,
               (this->InitialROITriangles).Values.ArrayNum,piVar2);
  }
  local_128 = &(this->VertexROI).Elements.field_0x10;
  iVar9 = *(int *)&(this->VertexROI).Elements.field_0x28;
  local_138 = &this->VertexROI;
  local_118 = 0;
  iStack_11c = 0;
  if (iVar9 != 0) {
    puVar18 = *(uint **)&(this->VertexROI).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_128;
    }
    uVar19 = *puVar18;
    while (uVar19 == 0) {
      lVar12 = (longlong)iVar14;
      local_118 = local_118 + 0x20;
      iVar14 = iVar14 + 1;
      iStack_11c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14c817d92;
      uVar19 = puVar18[lVar12 + 1];
    }
    local_190 = (ulonglong)(-uVar19 & uVar19);
    uVar4 = local_190 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_148 = (int)lVar12;
    iStack_11c = local_118 + -1 + local_148;
    if (iVar9 < iStack_11c) {
      iStack_11c = iVar9;
    }
  }
LAB_14c817d92:
  puVar16 = &(this->VertexROI).Elements.field_0x10;
  uStack_12c = (undefined4)local_190;
  iStack_114 = iStack_164;
  iStack_110 = *(int *)&(this->VertexROI).Elements.field_0x8 -
               *(int *)&(this->VertexROI).Elements.field_0x34;
  uVar19 = *(uint *)&(this->VertexROI).Elements.field_0x28;
  uStack_120 = 0xffffffff;
  TStack_d0.CurrentBitIndex = iStack_11c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_12c,iVar14);
  uVar20 = uVar19 & 0xffffffe0;
  iVar9 = (int)uVar19 >> 5;
  TStack_d0._28_4_ = iStack_164;
  TStack_d0.BaseBitIndex = local_118;
  uStack_b0 = CONCAT44(uStack_10c,iStack_110);
  iStack_130 = iVar14;
  local_d8 = local_138;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128;
  if (((int)uVar19 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar12 = local_188;
  uVar21 = *(uint *)&(this->VertexROI).Elements.field_0x28;
  if (uVar19 != uVar21) {
    puVar17 = *(undefined1 **)&(this->VertexROI).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar16;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar9 * 4);
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar9;
      uVar20 = uVar20 + 0x20;
      iVar9 = iVar9 + 1;
      uVar19 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14c817e9e;
      uVar19 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar19 = (int)lVar13 + -1 + uVar20;
    if ((int)uVar21 < (int)uVar19) {
      uVar19 = uVar21;
    }
  }
LAB_14c817e9e:
  while( true ) {
    pTVar7 = local_d8;
    if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
        (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_d0.CurrentBitIndex == uVar19) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) &&
       (pTVar7 == &this->VertexROI)) break;
    local_90 = &local_140;
    local_98 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FSubRegionRemesher::InitializeFromVertexROI'::__l12::<lambda_2>,void,int>
               ::Call;
    local_140 = this;
    FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
              ((FSmallListSet *)(lVar12 + 0xb8),
               *(int *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_d0.CurrentBitIndex * 0xc),
               (TFunctionRef<void___cdecl(int)> *)&local_98);
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve
            (&this->TriangleROI,(this->InitialROITriangles).Values.ArrayNum);
  pFVar15 = (this->InitialROITriangles).Values.AllocatorInstance.Data;
  iVar14 = (this->InitialROITriangles).Values.ArrayNum;
  pFVar3 = pFVar15 + (longlong)iVar14 * 4;
  while( true ) {
    if ((this->InitialROITriangles).Values.ArrayNum != iVar14) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar15 == pFVar3) break;
    local_194 = *(undefined4 *)pFVar15;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->TriangleROI,&local_144,(bool *)&local_194);
    pFVar15 = pFVar15 + 4;
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnEdgeCollapse @ 14c81e210

void __thiscall
UE::Geometry::FSubRegionRemesher::OnEdgeCollapse
          (FSubRegionRemesher *this,int param_1,int param_2,int param_3,FEdgeCollapseInfo *param_4)

{
  FEdgeCollapseInfo *pFVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  
  pFVar1 = param_4;
  param_4._0_4_ = (param_4->RemovedTris).field0_0x0._s_0.A;
  if (*(int *)&(this->TriangleROI).Elements.field_0x8 !=
      *(int *)&(this->TriangleROI).Elements.field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (&this->TriangleROI,(uint)param_4,(int *)&param_4);
  }
  if (this->bTrackRemoved != false) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->RemovedLastPassTris,(int *)&param_4,(bool *)&pFVar1->RemovedTris);
  }
  param_4._0_4_ = (pFVar1->RemovedTris).field0_0x0._s_0.B;
  if ((uint)param_4 != 0xffffffff) {
    if (*(int *)&(this->TriangleROI).Elements.field_0x8 !=
        *(int *)&(this->TriangleROI).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&this->TriangleROI,(uint)param_4,(int *)&param_4);
    }
    if (this->bTrackRemoved != false) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->RemovedLastPassTris,(int *)&param_4,
                 (bool *)((longlong)&(pFVar1->RemovedTris).field0_0x0 + 4));
    }
  }
  param_4._0_4_ = pFVar1->RemovedVertex;
  if (*(int *)&(this->VertexROI).Elements.field_0x8 !=
      *(int *)&(this->VertexROI).Elements.field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (&this->VertexROI,(uint)param_4,(int *)&param_4);
  }
  param_4._0_4_ = pFVar1->CollapsedEdge;
  this_00 = &this->EdgeROI;
  if (*(int *)&(this->EdgeROI).Elements.field_0x8 != *(int *)&(this->EdgeROI).Elements.field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (this_00,(uint)param_4,(int *)&param_4);
  }
  param_4._0_4_ = (pFVar1->RemovedEdges).field0_0x0._s_0.A;
  if (*(int *)&(this->EdgeROI).Elements.field_0x8 != *(int *)&(this->EdgeROI).Elements.field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (this_00,(uint)param_4,(int *)&param_4);
  }
  param_4._0_4_ = (pFVar1->RemovedEdges).field0_0x0._s_0.B;
  if (((uint)param_4 != 0xffffffff) &&
     (*(int *)&(this->EdgeROI).Elements.field_0x8 != *(int *)&(this->EdgeROI).Elements.field_0x34))
  {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (this_00,(uint)param_4,(int *)&param_4);
  }
  return;
}

// OnEdgeFlip @ 14c81e690

void __thiscall
UE::Geometry::FSubRegionRemesher::OnEdgeFlip
          (FSubRegionRemesher *this,int param_1,FEdgeFlipInfo *param_2)

{
  undefined8 uVar1;
  undefined8 local_res8;
  int local_res10 [4];
  FSubRegionRemesher *local_res20;
  code *local_28;
  FSubRegionRemesher **local_20;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  local_res8 = uVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->VertexROI,local_res10,(bool *)&local_res8);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->VertexROI,local_res10,(bool *)((longlong)&local_res8 + 4));
  local_20 = &local_res20;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSubRegionRemesher::AddVertexToTriangleROI'::__l2::<lambda_1>,void,int>
             ::Call;
  local_res20 = this;
  FDynamicMesh3::EnumerateVertexTriangles
            (*(FDynamicMesh3 **)&this->field_0x8,(int)uVar1,
             (TFunctionRef<void___cdecl(int)> *)&local_28);
  local_20 = &local_res20;
  local_28 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSubRegionRemesher::AddVertexToTriangleROI'::__l2::<lambda_1>,void,int>
             ::Call;
  local_res20 = this;
  FDynamicMesh3::EnumerateVertexTriangles
            (*(FDynamicMesh3 **)&this->field_0x8,local_res8._4_4_,
             (TFunctionRef<void___cdecl(int)> *)&local_28);
  return;
}

// OnEdgeSplit @ 14c81eae0

void __thiscall
UE::Geometry::FSubRegionRemesher::OnEdgeSplit
          (FSubRegionRemesher *this,int param_1,int param_2,int param_3,FEdgeSplitInfo *param_4)

{
  FEdgeSplitInfo *pFVar1;
  
  pFVar1 = param_4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->VertexROI,(int *)&param_4,(bool *)&param_4->NewVertex);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->EdgeROI,(int *)&param_4,(bool *)&pFVar1->NewEdges);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->EdgeROI,(int *)&param_4,(bool *)((longlong)&(pFVar1->NewEdges).field0_0x0 + 4));
  AddEdgeToTriangleROI(this,(pFVar1->NewEdges).field0_0x0._s_0.B);
  if ((pFVar1->NewEdges).field0_0x0._s_0.C != -1) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->EdgeROI,(int *)&param_4,(bool *)((longlong)&(pFVar1->NewEdges).field0_0x0 + 8)
              );
    AddEdgeToTriangleROI(this,(pFVar1->NewEdges).field0_0x0._s_0.C);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->TriangleROI,(int *)&param_4,(bool *)&pFVar1->NewTriangles);
  if ((pFVar1->NewTriangles).field0_0x0._s_0.B != -1) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->TriangleROI,(int *)&param_4,
               (bool *)((longlong)&(pFVar1->NewTriangles).field0_0x0 + 4));
  }
  return;
}

// StartEdges @ 14c839a70

int __thiscall UE::Geometry::FSubRegionRemesher::StartEdges(FSubRegionRemesher *this)

{
  int iVar1;
  
  iVar1 = (this->Edges).ArrayNum;
  this->CurEdge = 0;
  if (0 < iVar1) {
    return *(int *)(this->Edges).AllocatorInstance.Data;
  }
  return -1;
}

// UpdateROI @ 14c850940

void __thiscall UE::Geometry::FSubRegionRemesher::UpdateROI(FSubRegionRemesher *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 local_e8 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  pTVar2 = &this->Edges;
  uVar15 = *(int *)&(this->EdgeROI).Elements.field_0x8 -
           *(int *)&(this->EdgeROI).Elements.field_0x34;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  iVar13 = 0;
  piVar1 = &(this->Edges).ArrayMax;
  (this->Edges).ArrayNum = 0;
  if (*piVar1 < (int)uVar15) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_e0 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->EdgeROI).Elements.field_0x10;
  uStack_c4 = 1;
  iVar4 = *(int *)&(this->EdgeROI).Elements.field_0x28;
  local_d8 = &this->EdgeROI;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->EdgeROI).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_e0;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      local_b0 = local_b0 + 0x20;
      iVar13 = iVar13 + 1;
      iStack_b4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14c850a3d;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_c4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iStack_b4 = local_res18 + -1 + local_b0;
    if (iVar4 < iStack_b4) {
      iStack_b4 = iVar4;
    }
  }
LAB_14c850a3d:
  uStack_ac = local_54;
  iStack_a8 = *(int *)&(this->EdgeROI).Elements.field_0x8 -
              *(int *)&(this->EdgeROI).Elements.field_0x34;
  uVar15 = *(uint *)&(this->EdgeROI).Elements.field_0x28;
  TStack_98._padding_ = CONCAT44(uStack_c4,iVar13);
  uStack_b8 = 0xffffffff;
  uVar18 = uVar15 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = local_d8;
  iStack_c8 = iVar13;
  local_c0 = (undefined1 *)local_e0;
  local_a0 = local_d8;
  TStack_98.Array = local_e0;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar9 = local_d8;
  pTVar8 = local_e0;
  uVar5 = *(uint *)&(this->EdgeROI).Elements.field_0x28;
  if (uVar15 != uVar5) {
    puVar16 = *(undefined1 **)&(this->EdgeROI).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->EdgeROI).Elements.field_0x10;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14c850b61;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uVar15 = local_res20 + -1 + uVar18;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_14c850b61:
  while( true ) {
    pTVar10 = local_a0;
    if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
        (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_98.CurrentBitIndex == uVar15) && (TStack_98.Array == pTVar8)) &&
       (pTVar10 == pTVar9)) break;
    local_e8[0] = *(undefined4 *)
                   (*(longlong *)&pTVar10->Elements + (longlong)TStack_98.CurrentBitIndex * 0xc);
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)local_e8) &&
        ((FScriptContainerElement *)local_e8 < pFVar6 + (longlong)*piVar1 * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (this->Edges).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Edges).ArrayNum = iVar13 + 1;
    *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_e8[0];
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  this->LastUpdateROICounter = this->LastUpdateROICounter + 1;
  return;
}

