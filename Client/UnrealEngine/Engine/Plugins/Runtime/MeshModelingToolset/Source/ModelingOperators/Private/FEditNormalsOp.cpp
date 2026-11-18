// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 12

// ~FEditNormalsOp @ 14c9494f0

void __thiscall UE::Geometry::FEditNormalsOp::~FEditNormalsOp(FEditNormalsOp *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7FEditNormalsOp_Geometry_UE__6B_;
  (this->EditVertices).HashSize = 0;
  FVar1 = (this->EditVertices).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EditVertices).Elements);
  (this->EditTriangles).HashSize = 0;
  FVar1 = (this->EditTriangles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EditTriangles).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshPolygroups).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

// operator() @ 14c953fb0

bool __thiscall
`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l34::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = *(longlong **)this;
  lVar9 = (longlong)param_2;
  lVar10 = (longlong)param_3;
  uVar8 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2 = *(longlong **)this;
  lVar3 = *plVar1;
  uVar8 = 0;
  if (param_3 < (int)plVar2[1]) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar4 = *plVar2;
  return (double)**(float **)((longlong)this + 8) <
         *(double *)(lVar4 + 8 + lVar10 * 0x18) * *(double *)(lVar3 + 8 + lVar9 * 0x18) +
         *(double *)(lVar3 + lVar9 * 0x18) * *(double *)(lVar4 + lVar10 * 0x18) +
         *(double *)(lVar4 + 0x10 + lVar10 * 0x18) * *(double *)(lVar3 + 0x10 + lVar9 * 0x18);
}

// operator() @ 14c9541f0

bool __thiscall
`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l47::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = *(longlong **)this;
  lVar9 = (longlong)param_2;
  lVar10 = (longlong)param_3;
  uVar8 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2 = *(longlong **)this;
  lVar3 = *plVar1;
  uVar8 = 0;
  if (param_3 < (int)plVar2[1]) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar4 = *plVar2;
  return (double)**(float **)((longlong)this + 8) <
         *(double *)(lVar4 + 8 + lVar10 * 0x18) * *(double *)(lVar3 + 8 + lVar9 * 0x18) +
         *(double *)(lVar3 + lVar9 * 0x18) * *(double *)(lVar4 + lVar10 * 0x18) +
         *(double *)(lVar4 + 0x10 + lVar10 * 0x18) * *(double *)(lVar3 + 0x10 + lVar9 * 0x18);
}

// operator() @ 14c959330

bool __thiscall
`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l56::<lambda_3>::operator()
          (void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  
  lVar8 = 0;
  lVar7 = (longlong)param_2;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x208);
  lVar9 = lVar8;
  if (lVar3 != 0) {
    lVar9 = lVar3;
  }
  if (0 < *(int *)(lVar9 + 0x38)) {
    lVar8 = **(longlong **)(lVar9 + 0x30);
  }
  lVar3 = *(longlong *)(lVar8 + 0x48);
  uVar10 = param_1 * 3;
  lVar8 = *(longlong *)((longlong)this + 8);
  fVar11 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
  fVar1 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                    (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
  fVar2 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                    (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
  uVar10 = 0;
  if (param_2 < *(int *)(lVar8 + 0x10)) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar3 = *(longlong *)(lVar8 + 8);
  fVar11 = (float)*(double *)(lVar3 + 8 + lVar7 * 0x18) * fVar1 +
           (float)*(double *)(lVar3 + lVar7 * 0x18) * fVar11 +
           (float)*(double *)(lVar3 + 0x10 + lVar7 * 0x18) * fVar2;
  return fVar11 < **(float **)((longlong)this + 0x10) ||
         fVar11 == **(float **)((longlong)this + 0x10);
}

// operator() @ 14c959490

bool __thiscall
`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l66::<lambda_3>::operator()
          (void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  
  uVar8 = param_1 * 3;
  lVar9 = (longlong)param_2;
  lVar3 = *(longlong *)((longlong)this + 8);
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x48);
  fVar10 = *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar8 >> 9) * 8) +
                     (ulonglong)(uVar8 & 0x1ff) * 4);
  fVar1 = *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                    (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
  fVar2 = *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                    (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
  uVar8 = 0;
  if (param_2 < *(int *)(lVar3 + 0x10)) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 8);
  fVar10 = (float)*(double *)(lVar3 + 8 + lVar9 * 0x18) * fVar1 +
           (float)*(double *)(lVar3 + lVar9 * 0x18) * fVar10 +
           (float)*(double *)(lVar3 + 0x10 + lVar9 * 0x18) * fVar2;
  return fVar10 < **(float **)((longlong)this + 0x10) ||
         fVar10 == **(float **)((longlong)this + 0x10);
}

// operator() @ 14c95a6d0

void __thiscall
`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l56::<lambda_4>::operator()
          (void *this,int param_1,int param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)((longlong)this + 8);
  lVar7 = (longlong)param_2;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar3 + 0x10)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 8);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar7 * 0x18);
  dVar2 = *(double *)(lVar3 + lVar7 * 0x18);
  param_3[1] = (float)*(double *)(lVar3 + 8 + lVar7 * 0x18);
  *param_3 = (float)dVar2;
  param_3[2] = (float)dVar1;
  return;
}

// operator() @ 14c95a780

void __thiscall
`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l66::<lambda_4>::operator()
          (void *this,int param_1,int param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)((longlong)this + 8);
  lVar7 = (longlong)param_2;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar3 + 0x10)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 8);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar7 * 0x18);
  dVar2 = *(double *)(lVar3 + lVar7 * 0x18);
  param_3[1] = (float)*(double *)(lVar3 + 8 + lVar7 * 0x18);
  *param_3 = (float)dVar2;
  param_3[2] = (float)dVar1;
  return;
}

// CalculateResult @ 14c963ea0

void __thiscall
UE::Geometry::FEditNormalsOp::CalculateResult(FEditNormalsOp *this,FProgressCancel *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FDynamicMesh3 *this_00;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar5 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    bVar3 = (bool)(*pcVar1)(uVar4);
    param_1->WasCancelled = bVar3;
    if (bVar3 != false) {
      return;
    }
  }
  this_00 = (FDynamicMesh3 *)this->_padding_;
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FDynamicMesh3::Copy(this_00,(this->OriginalMesh).Object,true,true,true,true);
  if ((*(longlong *)(this->_padding_ + 0x208) == 0) &&
     (bVar3 = `UE::Geometry::FEditNormalsOp::CalculateResult'::__l6::<lambda_1>::operator()
                        (local_res10), !bVar3)) {
    FDynamicMesh3::EnableAttributes((FDynamicMesh3 *)this->_padding_);
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar5 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    bVar3 = (bool)(*pcVar1)(uVar4);
    param_1->WasCancelled = bVar3;
    if (bVar3 != false) {
      return;
    }
  }
  if ((*(int *)&(this->EditTriangles).Elements.field_0x8 ==
       *(int *)&(this->EditTriangles).Elements.field_0x34) &&
     (*(int *)&(this->EditVertices).Elements.field_0x8 ==
      *(int *)&(this->EditVertices).Elements.field_0x34)) {
    CalculateResultWholeMesh(this,param_1);
    return;
  }
  CalculateResultSelection(this,param_1);
  return;
}

// CalculateResultSelection @ 14c9723f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::FEditNormalsOp::CalculateResultSelection
          (FEditNormalsOp *this,FProgressCancel *param_1)

{
  undefined1 *puVar1;
  TDynamicVector<int,512> *this_00;
  uint uVar2;
  ESplitNormalMethod EVar3;
  ENormalCalculationMethod EVar4;
  FScriptContainerElement *pFVar5;
  FDynamicMesh3 *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  uint uVar9;
  float fVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong *plVar19;
  ForElementType<FSetElementId> FVar20;
  ForElementType<FSetElementId> FVar21;
  TFunctionRef<bool___cdecl(int,int,int)> *pTVar22;
  int iVar23;
  ForElementType<FSetElementId> FVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  undefined1 *puVar31;
  byte bVar32;
  ulonglong uVar33;
  uint *puVar34;
  ulonglong uVar35;
  int iVar36;
  TDynamicMeshOverlay<float,3> *this_01;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  int local_298;
  TDynamicMeshOverlay<float,3> *local_290;
  TDynamicVector<unsigned_short,512> local_288;
  TDynamicVector<int,512> local_270;
  int local_258;
  TDynamicMeshOverlay<float,3> local_248;
  float local_1b8;
  float local_1b4;
  FMeshNormals local_1b0;
  FMeshNormals local_198;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_180;
  uint uStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  uint local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  int local_14c;
  FDynamicMeshEditor local_148;
  undefined8 local_140;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_100;
  float *local_f8;
  code *local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_e8;
  FEditNormalsOp *local_e0;
  FPolygroupSet *local_d8;
  code *local_d0;
  FEditNormalsOp **local_c8;
  FEditNormalsOp *local_c0;
  FMeshNormals *local_b8;
  code *local_b0;
  FEditNormalsOp **local_a8;
  code *local_a0;
  FEditNormalsOp **local_98;
  FEditNormalsOp *local_90;
  FMeshNormals *local_88;
  float *local_80;
  TDynamicMeshOverlay<float,3> *local_78;
  FPolygroupSet local_70 [2];
  
  this_00 = &local_248.ElementTriangles;
  if ((this->bRecomputeNormals != false) ||
     (bVar13 = false, this->SplitNormalMethod != UseExistingTopology)) {
    bVar13 = true;
  }
  uVar27 = 0;
  uVar30 = 0;
  uVar33 = *(ulonglong *)(this->_padding_ + 0x208);
  uVar15 = uVar27;
  if (uVar33 != 0) {
    uVar15 = uVar33;
  }
  if (*(int *)(uVar15 + 0x38) < 1) {
    local_290 = (TDynamicMeshOverlay<float,3> *)0x0;
  }
  else {
    local_290 = (TDynamicMeshOverlay<float,3> *)**(undefined8 **)(uVar15 + 0x30);
  }
  if (this->bInvertNormals != false) {
    if ((param_1 != (FProgressCancel *)0x0) &&
       (bVar12 = FProgressCancel::Cancelled(param_1), bVar12)) {
      return;
    }
    puVar1 = &(this->EditTriangles).Elements.field_0x10;
    iVar36 = *(int *)&(this->EditTriangles).Elements.field_0x28;
    local_180 = &this->EditTriangles;
    uStack_174 = 1;
    local_160 = 0;
    iStack_164 = 0;
    if (iVar36 != 0) {
      puVar34 = *(uint **)&(this->EditTriangles).Elements.field_0x20;
      if (puVar34 == (uint *)0x0) {
        puVar34 = (uint *)puVar1;
      }
      uVar28 = *puVar34;
      uVar33 = uVar27;
      local_160 = 0;
      uVar30 = 0;
      while (uVar28 == 0) {
        iVar23 = (int)uVar27;
        local_160 = (int)uVar33 + 0x20;
        uVar33 = (ulonglong)local_160;
        uVar30 = iVar23 + 1;
        uVar27 = (ulonglong)uVar30;
        iStack_164 = iVar36;
        if ((int)(iVar36 + -1 + (iVar36 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar30)
        goto LAB_14c972540;
        uVar28 = puVar34[(longlong)iVar23 + 1];
      }
      uStack_174 = -uVar28 & uVar28;
      uVar33 = (ulonglong)uStack_174 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_150 = (int)lVar18;
      iStack_164 = (local_160 - 1) + local_150;
      if (iVar36 < iStack_164) {
        iStack_164 = iVar36;
      }
    }
LAB_14c972540:
    uVar28 = *(uint *)&(this->EditTriangles).Elements.field_0x28;
    uVar26 = uVar28 & 0xffffffe0;
    iStack_158 = *(int *)&(this->EditTriangles).Elements.field_0x8 -
                 *(int *)&(this->EditTriangles).Elements.field_0x34;
    uStack_168 = 0xffffffff;
    TStack_128._padding_ = CONCAT44(uStack_174,uVar30);
    TStack_128.CurrentBitIndex = iStack_164;
    TStack_128.UnvisitedBitMask = 0xffffffff;
    iVar23 = (int)uVar28 >> 5;
    TStack_128._28_4_ = iStack_164;
    TStack_128.BaseBitIndex = local_160;
    uStack_108 = CONCAT44(uStack_154,iStack_158);
    uStack_178 = uVar30;
    local_170 = puVar1;
    iStack_15c = iStack_164;
    local_130 = local_180;
    TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar28 < 0) || (iVar36 < (int)uVar28)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar30 = *(uint *)&(this->EditTriangles).Elements.field_0x28;
    if (uVar28 != uVar30) {
      puVar31 = *(undefined1 **)&(this->EditTriangles).Elements.field_0x20;
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = puVar1;
      }
      uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar23 * 4);
      while (uVar28 == 0) {
        lVar18 = (longlong)iVar23;
        uVar26 = uVar26 + 0x20;
        iVar23 = iVar23 + 1;
        uVar28 = uVar30;
        if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_14c972650;
        uVar28 = *(uint *)(puVar31 + lVar18 * 4 + 4);
      }
      uVar33 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_14c = (int)lVar18;
      uVar28 = local_14c + -1 + uVar26;
      if ((int)uVar30 < (int)uVar28) {
        uVar28 = uVar30;
      }
    }
LAB_14c972650:
    do {
      pTVar11 = local_130;
      if (*(int *)&(local_130->Elements).field_0x8 - *(int *)&(local_130->Elements).field_0x34 !=
          (int)uStack_108) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      uVar30 = __xmm_80000000800000008000000080000000;
      if (((TStack_128.CurrentBitIndex == uVar28) &&
          (TStack_128.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->EditTriangles).Elements.field_0x10)) &&
         (pTVar11 == &this->EditTriangles)) {
        if (bVar13) break;
        uVar33 = 0;
        local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2a8.ArrayNum = 0;
        local_2a8.ArrayMax = 0;
        uVar28 = (local_290->ElementsRefCounts).RefCounts.CurBlockUsed;
        iVar36 = (local_290->ElementsRefCounts).RefCounts.CurBlock * 0x200 + uVar28;
        uVar27 = uVar33;
        if (((iVar36 == 0) ||
            (pFVar5 = (local_290->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
            uVar27 = 0, (ushort)(**(short **)pFVar5 - 1U) < 0xfffe)) || (uVar27 = 1, iVar36 < 2))
        goto LAB_14c972945;
        goto LAB_14c972920;
      }
      FVar24 = (ForElementType<FSetElementId>)&(this->EditVertices).Hash;
      uVar30 = *(uint *)(*(longlong *)&pTVar11->Elements +
                        (longlong)TStack_128.CurrentBitIndex * 0xc);
      lVar18 = *(longlong *)
                ((((FDynamicMesh3 *)this->_padding_)->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar30 >> 9) * 8);
      local_140 = *(undefined8 *)(lVar18 + (ulonglong)(uVar30 & 0x1ff) * 0xc);
      uVar26 = *(uint *)(lVar18 + 8 + (ulonglong)(uVar30 & 0x1ff) * 0xc);
      if (*(int *)&(this->EditVertices).Elements.field_0x8 ==
          *(int *)&(this->EditVertices).Elements.field_0x34) {
        bVar32 = 0;
LAB_14c97281e:
        iVar36 = -1;
LAB_14c972821:
        bVar32 = (iVar36 != -1) + bVar32;
        if (1 < bVar32) goto LAB_14c972883;
        if ((bVar32 == 0) &&
           (bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_7788837004187270948>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\EditNormalsOp.cpp"
                                ,0xdc,"NumEditVertices >= 1"), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        FVar21 = (this->EditVertices).Hash.SecondaryData;
        FVar20 = FVar24;
        if (FVar21 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar21;
        }
        iVar36 = *(int *)((longlong)FVar20 +
                         (ulonglong)((this->EditVertices).HashSize - 1U & (uint)local_140) * 4);
        if (iVar36 != -1) {
          lVar18 = *(longlong *)&(this->EditVertices).Elements;
          do {
            if (*(uint *)(lVar18 + (longlong)iVar36 * 0xc) == (uint)local_140) {
              bVar12 = iVar36 != -1;
              goto LAB_14c972763;
            }
            iVar36 = *(int *)(lVar18 + 4 + (longlong)iVar36 * 0xc);
          } while (iVar36 != -1);
        }
        bVar12 = false;
LAB_14c972763:
        FVar21 = (this->EditVertices).Hash.SecondaryData;
        local_140._4_4_ = (uint)((ulonglong)local_140 >> 0x20);
        FVar20 = FVar24;
        if (FVar21 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar21;
        }
        iVar36 = *(int *)((longlong)FVar20 +
                         (ulonglong)((this->EditVertices).HashSize - 1U & local_140._4_4_) * 4);
        if (iVar36 != -1) {
          lVar18 = *(longlong *)&(this->EditVertices).Elements;
          do {
            if (*(uint *)(lVar18 + (longlong)iVar36 * 0xc) == local_140._4_4_) goto LAB_14c9727c5;
            iVar36 = *(int *)(lVar18 + 4 + (longlong)iVar36 * 0xc);
          } while (iVar36 != -1);
        }
        iVar36 = -1;
LAB_14c9727c5:
        bVar32 = bVar12 + (iVar36 != -1);
        if (bVar32 < 2) {
          FVar21 = (this->EditVertices).Hash.SecondaryData;
          if (FVar21 != (ForElementType<FSetElementId>)0x0) {
            FVar24 = FVar21;
          }
          iVar36 = *(int *)((longlong)FVar24 +
                           (ulonglong)((this->EditVertices).HashSize - 1U & uVar26) * 4);
          if (iVar36 != -1) {
            lVar18 = *(longlong *)&(this->EditVertices).Elements;
            do {
              if (*(uint *)(lVar18 + (longlong)iVar36 * 0xc) == uVar26) goto LAB_14c972821;
              iVar36 = *(int *)(lVar18 + 4 + (longlong)iVar36 * 0xc);
            } while (iVar36 != -1);
          }
          goto LAB_14c97281e;
        }
LAB_14c972883:
        FDynamicMesh3::ReverseTriOrientation((FDynamicMesh3 *)this->_padding_,uVar30);
      }
      TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
    } while( true );
  }
  goto LAB_14c972bc6;
LAB_14c972a43:
  if ((int)uVar33 != iVar23) {
    local_res20[0] = 0;
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    uVar33 = local_2a8._8_8_ & 0xffffffff;
  }
  if (FVar25.Data == pFVar5) goto LAB_14c972b56;
  if (*(int *)&(this->EditTriangles).Elements.field_0x8 ==
      *(int *)&(this->EditTriangles).Elements.field_0x34) {
LAB_14c972ac3:
    FVar25.Data = FVar25.Data + 4;
  }
  else {
    FVar24 = (this->EditTriangles).Hash.SecondaryData;
    FVar21 = (ForElementType<FSetElementId>)&(this->EditTriangles).Hash;
    if (FVar24 != (ForElementType<FSetElementId>)0x0) {
      FVar21 = FVar24;
    }
    iVar14 = *(int *)((longlong)FVar21 +
                     (ulonglong)((this->EditTriangles).HashSize - 1U & *(uint *)FVar25.Data) * 4);
    if (iVar14 == -1) goto LAB_14c972ac3;
    lVar18 = *(longlong *)&(this->EditTriangles).Elements;
    do {
      lVar29 = lVar18 + (longlong)iVar14 * 0xc;
      if (*(uint *)(lVar18 + (longlong)iVar14 * 0xc) == *(uint *)FVar25.Data) {
        if (lVar29 == 0) goto LAB_14c972ac3;
        uVar9 = uVar26 * 3;
        pFVar5 = (local_290->Elements).Blocks.AllocatorInstance.Data;
        uVar27 = (ulonglong)(uVar9 + 1 & 0x1ff);
        uVar35 = (ulonglong)(uVar9 + 1 >> 9);
        uVar33 = (ulonglong)(uVar9 + 2 >> 9);
        uVar15 = (ulonglong)(uVar9 + 2 & 0x1ff);
        uVar28 = *(uint *)(*(longlong *)(pFVar5 + uVar35 * 8) + uVar27 * 4);
        uVar2 = *(uint *)(*(longlong *)(pFVar5 + uVar33 * 8) + uVar15 * 4);
        *(uint *)(*(longlong *)(pFVar5 + (ulonglong)(uVar9 >> 9) * 8) +
                 (ulonglong)(uVar9 & 0x1ff) * 4) =
             *(uint *)(*(longlong *)(pFVar5 + (ulonglong)(uVar9 >> 9) * 8) +
                      (ulonglong)(uVar9 & 0x1ff) * 4) ^ uVar30;
        *(uint *)(*(longlong *)((local_290->Elements).Blocks.AllocatorInstance.Data + uVar35 * 8) +
                 uVar27 * 4) = uVar28 ^ uVar30;
        *(uint *)(*(longlong *)((local_290->Elements).Blocks.AllocatorInstance.Data + uVar33 * 8) +
                 uVar15 * 4) = uVar2 ^ uVar30;
        goto LAB_14c972b56;
      }
      iVar14 = *(int *)(lVar29 + 4);
    } while (iVar14 != -1);
    FVar25.Data = FVar25.Data + 4;
  }
  goto LAB_14c972a43;
LAB_14c972b56:
  uVar33 = (ulonglong)local_2a8._8_8_ >> 0x20;
  this_01 = local_290;
  iVar23 = local_298;
LAB_14c972b67:
  uVar27 = (ulonglong)(uVar26 + 1);
  if ((int)(uVar26 + 1) < iVar36) {
    do {
      uVar15 = (ulonglong)((uint)uVar27 & 0x1ff);
      lVar18 = *(longlong *)
                ((this_01->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                (uVar27 >> 9) * 8);
      if ((*(short *)(lVar18 + uVar15 * 2) != 0) && (*(short *)(lVar18 + uVar15 * 2) != -1))
      goto LAB_14c972970;
      uVar28 = (uint)uVar27 + 1;
      uVar27 = (ulonglong)uVar28;
    } while ((int)uVar28 < iVar36);
  }
  if ((int)uVar27 != iVar23) goto LAB_14c972970;
  goto LAB_14c972ba5;
  while (uVar26 = (uint)uVar27 + 1, uVar27 = (ulonglong)uVar26, (int)uVar26 < iVar36) {
LAB_14c972920:
    uVar15 = (ulonglong)((uint)uVar27 & 0x1ff);
    lVar18 = *(longlong *)(pFVar5 + (uVar27 >> 9) * 8);
    if ((*(short *)(lVar18 + uVar15 * 2) != 0) && (*(short *)(lVar18 + uVar15 * 2) != -1)) break;
  }
LAB_14c972945:
  iVar23 = (local_290->ElementsRefCounts).RefCounts.CurBlock * 0x200 + uVar28;
  this_01 = local_290;
  local_298 = iVar23;
  if ((int)uVar27 != iVar23) {
LAB_14c972970:
    uVar26 = (uint)uVar27;
    uVar28 = *(uint *)(*(longlong *)
                        ((this_01->ParentVertices).Blocks.AllocatorInstance.Data + (uVar27 >> 9) * 8
                        ) + (ulonglong)(uVar26 & 0x1ff) * 4);
    if (*(int *)&(this->EditVertices).Elements.field_0x8 !=
        *(int *)&(this->EditVertices).Elements.field_0x34) {
      FVar24 = (this->EditVertices).Hash.SecondaryData;
      FVar21 = (ForElementType<FSetElementId>)&(this->EditVertices).Hash;
      if (FVar24 != (ForElementType<FSetElementId>)0x0) {
        FVar21 = FVar24;
      }
      iVar14 = *(int *)((longlong)FVar21 +
                       (ulonglong)((this->EditVertices).HashSize - 1U & uVar28) * 4);
      if (iVar14 != -1) {
        lVar18 = *(longlong *)&(this->EditVertices).Elements;
        do {
          lVar29 = lVar18 + (longlong)iVar14 * 0xc;
          if (*(uint *)(lVar18 + (longlong)iVar14 * 0xc) == uVar28) {
            if (lVar29 != 0) {
              local_2a8._8_8_ = local_2a8._8_8_ & 0xffffffff00000000;
              if (((int)uVar33 < 0) && ((int)uVar33 != 0)) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_2a8.AllocatorInstance,0,&local_2a8.ArrayMax);
              }
              TDynamicMeshOverlay<float,3>::GetElementTriangles(this_01,uVar26,&local_2a8);
              iVar23 = local_2a8.ArrayNum;
              uVar33 = (ulonglong)local_2a8.ArrayNum;
              pFVar5 = local_2a8.AllocatorInstance.Data + uVar33 * 4;
              FVar25.Data = local_2a8.AllocatorInstance.Data;
              goto LAB_14c972a43;
            }
            break;
          }
          iVar14 = *(int *)(lVar29 + 4);
        } while (iVar14 != -1);
      }
    }
    goto LAB_14c972b67;
  }
LAB_14c972ba5:
  if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
LAB_14c972bc6:
  lVar29 = 0;
  pFVar6 = (FDynamicMesh3 *)this->_padding_;
  local_248.ElementsRefCounts.RefCounts.CurBlock = 0;
  local_248.ElementsRefCounts.RefCounts.CurBlockUsed = 0;
  local_248.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_248.ElementsRefCounts.RefCounts.Blocks.ArrayNum = 0;
  local_248.ElementsRefCounts.RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&local_248.ElementsRefCounts.RefCounts);
  local_248.ElementsRefCounts.FreeIndices.CurBlock = 0;
  local_248.ElementsRefCounts.FreeIndices.CurBlockUsed = 0;
  local_248.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_248.ElementsRefCounts.FreeIndices.Blocks.ArrayNum = 0;
  local_248.ElementsRefCounts.FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_248.ElementsRefCounts.FreeIndices);
  local_248.ElementsRefCounts.UsedCount = 0;
  local_248.Elements.CurBlock = 0;
  local_248.Elements.CurBlockUsed = 0;
  local_248.Elements.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.Elements.Blocks.ArrayNum = 0;
  local_248.Elements.Blocks.ArrayMax = 0;
  TDynamicVector<float,512>::AddAllocatedBlock(&local_248.Elements);
  local_248.ParentVertices.CurBlock = 0;
  local_248.ParentVertices.CurBlockUsed = 0;
  local_248.ParentVertices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ParentVertices.Blocks.ArrayNum = 0;
  local_248.ParentVertices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_248.ParentVertices);
  local_248.ElementTriangles.CurBlock = 0;
  local_248.ElementTriangles.CurBlockUsed = 0;
  local_248.ElementTriangles.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ElementTriangles.Blocks.ArrayNum = 0;
  local_248.ElementTriangles.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(this_00);
  lVar18 = *(longlong *)(this->_padding_ + 0x208);
  lVar16 = lVar29;
  if (lVar18 != 0) {
    lVar16 = lVar18;
  }
  if (0 < *(int *)(lVar16 + 0x38)) {
    lVar29 = **(longlong **)(lVar16 + 0x30);
  }
  local_248.ParentMesh = pFVar6;
  TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
            (&local_288,(TDynamicVector<unsigned_short,512> *)(lVar29 + 8));
  TDynamicVector<int,512>::TDynamicVector<int,512>
            (&local_270,(TDynamicVector<int,512> *)(lVar29 + 0x20));
  local_258 = *(int *)(lVar29 + 0x38);
  TDynamicVector<unsigned_short,512>::Empty(&local_248.ElementsRefCounts.RefCounts,0);
  if (local_248.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data);
  }
  local_248.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data =
       local_288.Blocks.AllocatorInstance.Data;
  local_288.Blocks.ArrayNum = 0;
  local_288.Blocks.ArrayMax = 0;
  local_288.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.CurBlock = 0;
  local_288.CurBlockUsed = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&local_288);
  TDynamicVector<int,512>::Empty(&local_248.ElementsRefCounts.FreeIndices,0);
  if (local_248.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data);
  }
  local_248.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data =
       local_270.Blocks.AllocatorInstance.Data;
  local_270.Blocks.ArrayNum = 0;
  local_270.Blocks.ArrayMax = 0;
  local_270.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.CurBlock = 0;
  local_270.CurBlockUsed = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_270);
  local_248.ElementsRefCounts.UsedCount = local_258;
  local_258 = 0;
  TDynamicVector<int,512>::Empty(&local_270,0);
  if (local_270.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<unsigned_short,512>::Empty(&local_288,0);
  if (local_288.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<float,512>::operator=
            (&local_248.Elements,(TDynamicVector<float,512> *)(lVar29 + 0x40));
  TDynamicVector<int,512>::operator=
            (&local_248.ParentVertices,(TDynamicVector<int,512> *)(lVar29 + 0x58));
  TDynamicVector<int,512>::operator=(this_00,(TDynamicVector<int,512> *)(lVar29 + 0x70));
  fVar10 = __real_3c8efa35;
  local_1b0.Mesh = (FDynamicMesh3 *)this->_padding_;
  local_1b0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.Normals.ArrayNum = 0;
  local_1b0.Normals.ArrayMax = 0;
  if (this->SplitNormalMethod != UseExistingTopology) {
    if (param_1 != (FProgressCancel *)0x0) {
      if (param_1->WasCancelled != false) goto LAB_14c973155;
      Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
      pcVar8 = *(code **)&param_1->CancelF;
      plVar7 = *(longlong **)&(param_1->CancelF).field_0x28;
      plVar19 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar7 != (longlong *)0x0) {
        plVar19 = plVar7;
      }
      uVar17 = (**(code **)(*plVar19 + 8))();
      bVar12 = (bool)(*pcVar8)(uVar17);
      param_1->WasCancelled = bVar12;
      if (bVar12 != false) goto LAB_14c973155;
    }
    EVar3 = this->SplitNormalMethod;
    if (EVar3 == FaceNormalThreshold) {
      FMeshNormals::Compute_Triangle(&local_1b0);
      local_1b8 = cosf(this->NormalSplitThreshold * fVar10);
      local_100 = &local_1b0.Normals;
      pTVar22 = (TFunctionRef<bool___cdecl(int,int,int)> *)&local_f0;
      local_f8 = &local_1b8;
      local_e8 = &local_100;
      local_f0 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l47::<lambda_1>,bool,int,int,int>
                 ::Call;
LAB_14c972f69:
      TDynamicMeshOverlay<float,3>::CreateFromPredicate(&local_248,pTVar22,0.0);
    }
    else if (EVar3 == PerTriangle) {
      FMeshNormals::InitializeOverlayToPerTriangleNormals
                ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)&local_248);
    }
    else {
      if (EVar3 != PerVertex) {
        if ((EVar3 != FaceGroupID) &&
           (bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_7788837004187270889>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\EditNormalsOp.cpp"
                                ,0x117,"SplitNormalMethod == ESplitNormalMethod::FaceGroupID"),
           bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FPolygroupSet::FPolygroupSet(local_70,(FDynamicMesh3 *)this->_padding_);
        if ((this->MeshPolygroups).Object == (FPolygroupSet *)0x0) {
          local_d8 = local_70;
        }
        else {
          local_d8 = TSharedPtr<UE::Geometry::FPolygroupSet,1>::
                     operator*<UE::Geometry::FPolygroupSet>(&this->MeshPolygroups);
        }
        pTVar22 = (TFunctionRef<bool___cdecl(int,int,int)> *)&local_d0;
        local_c8 = &local_e0;
        local_d0 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l57::<lambda_2>,bool,int,int,int>
                   ::Call;
        local_e0 = this;
        goto LAB_14c972f69;
      }
      FMeshNormals::InitializeOverlayToPerVertexNormals
                ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)&local_248,false);
    }
  }
  if (bVar13) {
    if (param_1 != (FProgressCancel *)0x0) {
      if (param_1->WasCancelled != false) goto LAB_14c973155;
      Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
      pcVar8 = *(code **)&param_1->CancelF;
      plVar7 = *(longlong **)&(param_1->CancelF).field_0x28;
      plVar19 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar7 != (longlong *)0x0) {
        plVar19 = plVar7;
      }
      uVar17 = (**(code **)(*plVar19 + 8))();
      bVar13 = (bool)(*pcVar8)(uVar17);
      param_1->WasCancelled = bVar13;
      if (bVar13 != false) goto LAB_14c973155;
    }
    EVar4 = this->NormalCalculationMethod;
    if ((EVar4 == AreaWeighted) || (EVar4 == AreaAngleWeighting)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    local_198.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Normals.ArrayNum = 0;
    local_198.Normals.ArrayMax = 0;
    local_198.Mesh = (FDynamicMesh3 *)this->_padding_;
    FMeshNormals::Compute_Overlay_FaceAvg
              (&local_198,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)&local_248
               ,bVar13,(byte)(EVar4 - AngleWeighted) < 2);
    FMeshNormals::CopyToOverlay
              (&local_198,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)&local_248
               ,false);
    if (local_198.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Normals.AllocatorInstance.Data);
    }
  }
  if ((this->SplitNormalMethod == FaceNormalThreshold) && (this->bAllowSharpVertices != false)) {
    if (param_1 != (FProgressCancel *)0x0) {
      if (param_1->WasCancelled != false) goto LAB_14c973155;
      Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
      pcVar8 = *(code **)&param_1->CancelF;
      plVar7 = *(longlong **)&(param_1->CancelF).field_0x28;
      plVar19 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar7 != (longlong *)0x0) {
        plVar19 = plVar7;
      }
      uVar17 = (**(code **)(*plVar19 + 8))();
      bVar13 = (bool)(*pcVar8)(uVar17);
      param_1->WasCancelled = bVar13;
      if (bVar13 != false) goto LAB_14c973155;
    }
    local_1b4 = cosf(this->NormalSplitThreshold * fVar10);
    local_b8 = &local_1b0;
    local_a8 = &local_c0;
    local_b0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l66::<lambda_4>,void,int,int,float_*>
               ::Call;
    local_88 = &local_1b0;
    local_80 = &local_1b4;
    local_78 = &local_248;
    local_98 = &local_90;
    local_a0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultSelection'::__l66::<lambda_3>,bool,int,int>
               ::Call;
    local_c0 = this;
    local_90 = this;
    TDynamicMeshOverlay<float,3>::SplitVerticesWithPredicate
              (&local_248,(TFunctionRef<bool___cdecl(int,int)> *)&local_a0,
               (TFunctionRef<void___cdecl(int,int,float_*)> *)&local_b0);
  }
  local_148.Mesh = (FDynamicMesh3 *)this->_padding_;
  FDynamicMeshEditor::AppendElementSubset<float,3>
            (&local_148,local_148.Mesh,&this->EditTriangles,&this->EditVertices,&local_248,local_290
            );
LAB_14c973155:
  if (local_1b0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Normals.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(this_00,0);
  if (local_248.ElementTriangles.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ElementTriangles.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_248.ParentVertices,0);
  if (local_248.ParentVertices.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ParentVertices.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<float,512>::Empty(&local_248.Elements,0);
  if (local_248.Elements.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Elements.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_248.ElementsRefCounts.FreeIndices,0);
  if (local_248.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<unsigned_short,512>::Empty(&local_248.ElementsRefCounts.RefCounts,0);
  if (local_248.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data);
  }
  return;
}

// CalculateResultWholeMesh @ 14c973220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh
          (FEditNormalsOp *this,FProgressCancel *param_1)

{
  uint uVar1;
  uint uVar2;
  ESplitNormalMethod EVar3;
  ENormalCalculationMethod EVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar9;
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  FDynamicMeshAttributeSet *pFVar15;
  longlong *plVar16;
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  TFunctionRef<bool___cdecl(int,int,int)> *pTVar20;
  uint uVar21;
  FDynamicMeshAttributeSet *pFVar22;
  FDynamicMeshAttributeSet *pFVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  FDynamicMeshAttributeSet *this_00;
  char cVar28;
  undefined1 auStack_1a8 [32];
  char local_188;
  undefined1 local_184 [4];
  undefined1 local_180 [16];
  FMeshRepairOrientation local_170;
  undefined1 local_150 [16];
  FMeshNormals local_140;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_108 [24];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if ((this->bRecomputeNormals == false) && (this->SplitNormalMethod == UseExistingTopology)) {
    cVar28 = '\0';
  }
  else {
    cVar28 = '\x01';
  }
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  local_188 = cVar28;
  local_180._0_8_ = param_1;
  if (this->bFixInconsistentNormals != false) {
    local_170.Mesh = (FDynamicMesh3 *)this->_padding_;
    local_170._padding_ = (longlong)&___7FMeshRepairOrientation_Geometry_UE__6B_;
    local_170.Components.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.Components.ArrayNum = 0;
    local_170.Components.ArrayMax = 0;
    FMeshRepairOrientation::OrientComponents((FMeshRepairOrientation *)(local_180 + 0x10));
    if ((param_1 != (FProgressCancel *)0x0) &&
       (bVar13 = FProgressCancel::Cancelled(param_1), bVar13)) {
      local_170._padding_ = (longlong)&___7FMeshRepairOrientation_Geometry_UE__6B_;
      DestructItems<UE::Geometry::FMeshRepairOrientation::Component,int>
                ((Component *)local_170.Components.AllocatorInstance.Data,
                 local_170.Components.ArrayNum);
      FVar18.Data = local_170.Components.AllocatorInstance.Data;
      goto LAB_14c973960;
    }
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_108,
               (FDynamicMesh3 *)this->_padding_,true);
    FMeshRepairOrientation::SolveGlobalOrientation
              ((FMeshRepairOrientation *)(local_180 + 0x10),
               (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_108);
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_108);
    local_170._padding_ = (longlong)&___7FMeshRepairOrientation_Geometry_UE__6B_;
    DestructItems<UE::Geometry::FMeshRepairOrientation::Component,int>
              ((Component *)local_170.Components.AllocatorInstance.Data,
               local_170.Components.ArrayNum);
    if ((Component *)local_170.Components.AllocatorInstance.Data != (Component *)0x0) {
      FMemory::Free(local_170.Components.AllocatorInstance.Data);
    }
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar5 = *(code **)&param_1->CancelF;
    plVar6 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar16 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar16 = plVar6;
    }
    uVar14 = (**(code **)(*plVar16 + 8))();
    bVar13 = (bool)(*pcVar5)(uVar14);
    param_1->WasCancelled = bVar13;
    if (bVar13 != false) {
      return;
    }
  }
  if (this->bInvertNormals != false) {
    lVar7 = this->_padding_;
    uVar24 = *(int *)(lVar7 + 0x144) + *(int *)(lVar7 + 0x140) * 0x200;
    pFVar22 = this_00;
    uVar12 = __xmm_80000000800000008000000080000000;
    if ((uVar24 == 0) ||
       (pFVar22 = (FDynamicMeshAttributeSet *)0x0,
       (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x148) - 1U) < 0xfffe)) {
LAB_14c9733f6:
      uVar21 = (uint)pFVar22;
    }
    else {
      pFVar22 = (FDynamicMeshAttributeSet *)&DAT_00000001;
      uVar21 = 1;
      if (1 < (int)uVar24) {
        do {
          uVar19 = (ulonglong)((uint)pFVar22 & 0x1ff);
          lVar8 = (*(undefined8 **)(lVar7 + 0x148))[(ulonglong)pFVar22 >> 9];
          if ((*(short *)(lVar8 + uVar19 * 2) != 0) && (*(short *)(lVar8 + uVar19 * 2) != -1))
          break;
          uVar21 = (uint)pFVar22 + 1;
          pFVar22 = (FDynamicMeshAttributeSet *)(ulonglong)uVar21;
        } while ((int)uVar21 < (int)uVar24);
        goto LAB_14c9733f6;
      }
    }
joined_r0x00014c9733f8:
    __xmm_80000000800000008000000080000000 = uVar12;
    if (uVar21 != uVar24) {
      while( true ) {
        FDynamicMesh3::ReverseTriOrientation((FDynamicMesh3 *)this->_padding_,(int)pFVar22);
        uVar21 = (int)pFVar22 + 1;
        pFVar22 = (FDynamicMeshAttributeSet *)(ulonglong)uVar21;
        uVar12 = __xmm_80000000800000008000000080000000;
        if ((int)uVar24 <= (int)uVar21) break;
        while( true ) {
          uVar19 = (ulonglong)((uint)pFVar22 & 0x1ff);
          lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x148) + ((ulonglong)pFVar22 >> 9) * 8);
          if ((*(short *)(lVar8 + uVar19 * 2) != 0) && (*(short *)(lVar8 + uVar19 * 2) != -1))
          break;
          uVar21 = (uint)pFVar22 + 1;
          pFVar22 = (FDynamicMeshAttributeSet *)(ulonglong)uVar21;
          if ((int)uVar24 <= (int)uVar21) goto joined_r0x00014c9733f8;
        }
      }
      goto joined_r0x00014c9733f8;
    }
    if (cVar28 == '\0') {
      pFVar22 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
      pFVar23 = this_00;
      if (pFVar22 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar23 = pFVar22;
      }
      pFVar22 = this_00;
      if (0 < (pFVar23->NormalLayers).Array.ArrayNum) {
        pFVar22 = *(FDynamicMeshAttributeSet **)(pFVar23->NormalLayers).Array.AllocatorInstance.Data
        ;
      }
      uVar24 = *(int *)((longlong)&pFVar22->_padding_ + 4) + (int)pFVar22->_padding_ * 0x200;
      pFVar23 = this_00;
      if ((uVar24 == 0) ||
         (pFVar23 = (FDynamicMeshAttributeSet *)0x0,
         (ushort)(**(short **)pFVar22->_padding_ - 1U) < 0xfffe)) {
LAB_14c9734e7:
        uVar21 = (uint)pFVar23;
      }
      else {
        pFVar23 = (FDynamicMeshAttributeSet *)&DAT_00000001;
        uVar21 = 1;
        if (1 < (int)uVar24) {
          do {
            uVar19 = (ulonglong)((uint)pFVar23 & 0x1ff);
            lVar7 = ((undefined8 *)pFVar22->_padding_)[(ulonglong)pFVar23 >> 9];
            if ((*(short *)(lVar7 + uVar19 * 2) != 0) && (*(short *)(lVar7 + uVar19 * 2) != -1))
            break;
            uVar21 = (uint)pFVar23 + 1;
            pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)uVar21;
          } while ((int)uVar21 < (int)uVar24);
          goto LAB_14c9734e7;
        }
      }
joined_r0x00014c9734ea:
      param_1 = (FProgressCancel *)local_180._0_8_;
      if (uVar21 != uVar24) {
        while( true ) {
          pTVar9 = (pFVar22->MaterialIDAttrib).Ptr;
          uVar11 = (int)pFVar23 * 3;
          uVar27 = (ulonglong)(uVar11 + 1 >> 9);
          uVar25 = (ulonglong)(uVar11 + 1 & 0x1ff);
          uVar26 = (ulonglong)(uVar11 + 2 & 0x1ff);
          uVar19 = (ulonglong)(uVar11 + 2 >> 9);
          uVar21 = (int)pFVar23 + 1;
          pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)uVar21;
          uVar1 = *(uint *)(*(longlong *)(&pTVar9->field_0x0 + uVar27 * 8) + uVar25 * 4);
          uVar2 = *(uint *)(*(longlong *)(&pTVar9->field_0x0 + uVar19 * 8) + uVar26 * 4);
          *(uint *)(*(longlong *)(&pTVar9->field_0x0 + (ulonglong)(uVar11 >> 9) * 8) +
                   (ulonglong)(uVar11 & 0x1ff) * 4) =
               *(uint *)(*(longlong *)(&pTVar9->field_0x0 + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 4) ^ uVar12;
          *(uint *)(*(longlong *)(&((pFVar22->MaterialIDAttrib).Ptr)->field_0x0 + uVar27 * 8) +
                   uVar25 * 4) = uVar1 ^ uVar12;
          *(uint *)(*(longlong *)(&((pFVar22->MaterialIDAttrib).Ptr)->field_0x0 + uVar19 * 8) +
                   uVar26 * 4) = uVar2 ^ uVar12;
          if ((int)uVar24 <= (int)uVar21) break;
          while( true ) {
            uVar19 = (ulonglong)((uint)pFVar23 & 0x1ff);
            lVar7 = *(longlong *)(pFVar22->_padding_ + ((ulonglong)pFVar23 >> 9) * 8);
            if ((*(short *)(lVar7 + uVar19 * 2) != 0) && (*(short *)(lVar7 + uVar19 * 2) != -1))
            break;
            uVar21 = (uint)pFVar23 + 1;
            pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)uVar21;
            if ((int)uVar24 <= (int)uVar21) goto joined_r0x00014c9734ea;
          }
        }
        goto joined_r0x00014c9734ea;
      }
    }
  }
  if ((FDynamicMesh3 *)param_1 != (FDynamicMesh3 *)0x0) {
    if (*(bool *)&((FDynamicMesh3 *)param_1)->_padding_ != false) {
      return;
    }
    Core::Private::Function::CheckCallable
              (*(void **)&(((FDynamicMesh3 *)param_1)->VertexNormals).bIsSet);
    pcVar5 = *(code **)&(((FDynamicMesh3 *)param_1)->VertexNormals).bIsSet;
    pTVar10 = *(TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                **)&(((FDynamicMesh3 *)param_1)->VertexUVs).TypedValue;
    pTVar17 = &(((FDynamicMesh3 *)param_1)->VertexColors).TypedValue.Blocks;
    if (pTVar10 !=
        (TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)0x0) {
      pTVar17 = pTVar10;
    }
    uVar14 = (**(code **)((pTVar17->AllocatorInstance).Data + 8))();
    bVar13 = (bool)(*pcVar5)(uVar14);
    *(bool *)&((FDynamicMesh3 *)param_1)->_padding_ = bVar13;
    if (bVar13 != false) {
      return;
    }
  }
  local_184 = (undefined1  [4])cosf(this->NormalSplitThreshold * __real_3c8efa35);
  EVar3 = this->SplitNormalMethod;
  local_128._0_8_ = this->_padding_;
  local_128._8_8_ = (Component *)0x0;
  local_118._0_4_ = 0;
  local_118._4_4_ = 0;
  if (EVar3 != UseExistingTopology) {
    pFVar22 = this_00;
    if (EVar3 == FaceNormalThreshold) {
      FMeshNormals::Compute_Triangle((FMeshNormals *)local_128);
      pFVar23 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
      pFVar15 = this_00;
      if (pFVar23 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar15 = pFVar23;
      }
      if (0 < (pFVar15->NormalLayers).Array.ArrayNum) {
        pFVar22 = *(FDynamicMeshAttributeSet **)(pFVar15->NormalLayers).Array.AllocatorInstance.Data
        ;
      }
      local_180._0_8_ = local_128 + 8;
      pTVar20 = (TFunctionRef<bool___cdecl(int,int,int)> *)local_150;
      local_180._8_8_ = local_184;
      local_150._8_8_ = local_180;
      local_150._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l34::<lambda_1>,bool,int,int,int>
           ::Call;
LAB_14c97377f:
      TDynamicMeshOverlay<float,3>::CreateFromPredicate
                ((TDynamicMeshOverlay<float,3> *)pFVar22,pTVar20,0.0);
    }
    else if (EVar3 == PerTriangle) {
      FMeshNormals::InitializeMeshToPerTriangleNormals((FDynamicMesh3 *)local_128._0_8_);
    }
    else {
      if (EVar3 != PerVertex) {
        FPolygroupSet::FPolygroupSet
                  ((FPolygroupSet *)(local_180 + 0x10),(FDynamicMesh3 *)local_128._0_8_);
        if ((this->MeshPolygroups).Object == (FPolygroupSet *)0x0) {
          local_150._8_8_ = local_180 + 0x10;
        }
        else {
          local_150._8_8_ =
               TSharedPtr<UE::Geometry::FPolygroupSet,1>::operator*<UE::Geometry::FPolygroupSet>
                         (&this->MeshPolygroups);
        }
        pFVar23 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
        pFVar15 = this_00;
        if (pFVar23 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar15 = pFVar23;
        }
        if (0 < (pFVar15->NormalLayers).Array.ArrayNum) {
          pFVar22 = *(FDynamicMeshAttributeSet **)
                     (pFVar15->NormalLayers).Array.AllocatorInstance.Data;
        }
        local_180._8_8_ = local_150;
        pTVar20 = (TFunctionRef<bool___cdecl(int,int,int)> *)local_180;
        local_180._0_8_ =
             Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l44::<lambda_2>,bool,int,int,int>
             ::Call;
        local_150._0_8_ = this;
        goto LAB_14c97377f;
      }
      pFVar22 = (((FDynamicMesh3 *)local_128._0_8_)->AttributeSet).Ptr;
      pFVar23 = this_00;
      if (pFVar22 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar23 = pFVar22;
      }
      if ((pFVar23->NormalLayers).Array.ArrayNum < 1) {
        FMeshNormals::InitializeOverlayToPerVertexNormals
                  ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0,false);
      }
      else {
        FMeshNormals::InitializeOverlayToPerVertexNormals
                  (*(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                    (pFVar23->NormalLayers).Array.AllocatorInstance.Data,false);
      }
    }
  }
  if ((FDynamicMesh3 *)param_1 != (FDynamicMesh3 *)0x0) {
    FVar18.Data = (FScriptContainerElement *)local_128._8_8_;
    if (*(bool *)&((FDynamicMesh3 *)param_1)->_padding_ != false) goto LAB_14c973960;
    Core::Private::Function::CheckCallable
              (*(void **)&(((FDynamicMesh3 *)param_1)->VertexNormals).bIsSet);
    pcVar5 = *(code **)&(((FDynamicMesh3 *)param_1)->VertexNormals).bIsSet;
    pTVar10 = *(TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                **)&(((FDynamicMesh3 *)param_1)->VertexUVs).TypedValue;
    pTVar17 = &(((FDynamicMesh3 *)param_1)->VertexColors).TypedValue.Blocks;
    if (pTVar10 !=
        (TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)0x0) {
      pTVar17 = pTVar10;
    }
    uVar14 = (**(code **)((pTVar17->AllocatorInstance).Data + 8))();
    bVar13 = (bool)(*pcVar5)(uVar14);
    *(bool *)&((FDynamicMesh3 *)param_1)->_padding_ = bVar13;
    FVar18.Data = (FScriptContainerElement *)local_128._8_8_;
    if (bVar13 != false) goto LAB_14c973960;
  }
  EVar4 = this->NormalCalculationMethod;
  if ((EVar4 == AreaWeighted) || (EVar4 == AreaAngleWeighting)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (local_188 != '\0') {
    local_140.Mesh = (FDynamicMesh3 *)this->_padding_;
    local_140.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Normals.ArrayNum = 0;
    local_140.Normals.ArrayMax = 0;
    pFVar22 = ((local_140.Mesh)->AttributeSet).Ptr;
    pFVar23 = this_00;
    if (pFVar22 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar23 = pFVar22;
    }
    pFVar22 = this_00;
    if (0 < (pFVar23->NormalLayers).Array.ArrayNum) {
      pFVar22 = *(FDynamicMeshAttributeSet **)(pFVar23->NormalLayers).Array.AllocatorInstance.Data;
    }
    FMeshNormals::Compute_Overlay_FaceAvg
              (&local_140,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar22,
               bVar13,(byte)(EVar4 - AngleWeighted) < 2);
    pFVar22 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
    pFVar23 = this_00;
    if (pFVar22 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar23 = pFVar22;
    }
    pFVar22 = this_00;
    if (0 < (pFVar23->NormalLayers).Array.ArrayNum) {
      pFVar22 = *(FDynamicMeshAttributeSet **)(pFVar23->NormalLayers).Array.AllocatorInstance.Data;
    }
    FMeshNormals::CopyToOverlay
              (&local_140,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar22,
               false);
    if (local_140.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Normals.AllocatorInstance.Data);
    }
  }
  if ((FDynamicMesh3 *)param_1 != (FDynamicMesh3 *)0x0) {
    FVar18.Data = (FScriptContainerElement *)local_128._8_8_;
    if (*(bool *)&((FDynamicMesh3 *)param_1)->_padding_ != false) goto LAB_14c973960;
    Core::Private::Function::CheckCallable
              (*(void **)&(((FDynamicMesh3 *)param_1)->VertexNormals).bIsSet);
    pcVar5 = *(code **)&(((FDynamicMesh3 *)param_1)->VertexNormals).bIsSet;
    pTVar10 = *(TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                **)&(((FDynamicMesh3 *)param_1)->VertexUVs).TypedValue;
    pTVar17 = &(((FDynamicMesh3 *)param_1)->VertexColors).TypedValue.Blocks;
    if (pTVar10 !=
        (TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)0x0) {
      pTVar17 = pTVar10;
    }
    uVar14 = (**(code **)((pTVar17->AllocatorInstance).Data + 8))();
    bVar13 = (bool)(*pcVar5)(uVar14);
    *(bool *)&((FDynamicMesh3 *)param_1)->_padding_ = bVar13;
    FVar18.Data = (FScriptContainerElement *)local_128._8_8_;
    if (bVar13 != false) goto LAB_14c973960;
  }
  FVar18.Data = (FScriptContainerElement *)local_128._8_8_;
  if ((this->SplitNormalMethod == FaceNormalThreshold) && (this->bAllowSharpVertices != false)) {
    pFVar22 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
    pFVar23 = this_00;
    if (pFVar22 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar23 = pFVar22;
    }
    if (0 < (pFVar23->NormalLayers).Array.ArrayNum) {
      this_00 = *(FDynamicMeshAttributeSet **)(pFVar23->NormalLayers).Array.AllocatorInstance.Data;
    }
    local_150._8_8_ = local_128;
    local_180._8_8_ = local_150;
    local_180._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l56::<lambda_4>,void,int,int,float_*>
         ::Call;
    local_170.Mesh = (FDynamicMesh3 *)local_128;
    local_170.Components.AllocatorInstance.Data = (FScriptContainerElement *)local_184;
    local_140.Normals.AllocatorInstance.Data = (FScriptContainerElement *)(local_180 + 0x10);
    local_140.Mesh =
         (FDynamicMesh3 *)
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::FEditNormalsOp::CalculateResultWholeMesh'::__l56::<lambda_3>,bool,int,int>
         ::Call;
    local_170._padding_ = (longlong)this;
    local_150._0_8_ = this;
    TDynamicMeshOverlay<float,3>::SplitVerticesWithPredicate
              ((TDynamicMeshOverlay<float,3> *)this_00,
               (TFunctionRef<bool___cdecl(int,int)> *)&local_140,
               (TFunctionRef<void___cdecl(int,int,float_*)> *)local_180);
    FVar18.Data = (FScriptContainerElement *)local_128._8_8_;
  }
LAB_14c973960:
  if ((Component *)FVar18.Data != (Component *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  return;
}

// SetTransform @ 14c9857a0

void __thiscall
UE::Geometry::FEditNormalsOp::SetTransform(FEditNormalsOp *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

// operator() @ 150574d70

bool __thiscall
`UE::Geometry::FEditNormalsOp::CalculateResult'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7788837004187271137>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7788837004187271137>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

