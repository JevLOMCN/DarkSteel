// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 13

// FTransferVertexColorAttribute @ 14c7b4d60

FTransferVertexColorAttribute * __thiscall
UE::Geometry::FTransferVertexColorAttribute::FTransferVertexColorAttribute
          (FTransferVertexColorAttribute *this,FDynamicMesh3 *param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2)

{
  TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar9;
  undefined8 *puVar10;
  longlong local_18 [2];
  
  this->bUseParallel = true;
  this->TransferMethod = ClosestPointOnSurface;
  this->_padding_ = (longlong)&___7FTransferVertexColorAttribute_Geometry_UE__6B_;
  pTVar1 = &this->InternalSourceBVH;
  pTVar9 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  this->Progress = (FProgressCancel *)0x0;
  uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetToWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->TargetToWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetToWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetToWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->TargetToWorld).Translation.field0_0x0._s_0.X = (double)uVar2;
  (this->TargetToWorld).Translation.field0_0x0._s_0.Y = (double)uVar3;
  (this->TargetToWorld).Translation.field0_0x0._s_0.Z = (double)uVar4;
  (this->TargetToWorld).Scale3D.field0_0x0._s_0.X = (double)uVar5;
  (this->TargetToWorld).Scale3D.field0_0x0._s_0.Y = (double)uVar6;
  (this->TargetToWorld).Scale3D.field0_0x0._s_0.Z = (double)uVar7;
  (this->ForceInpaint).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForceInpaint).ArrayNum = 0;
  (this->ForceInpaint).ArrayMax = 0;
  (this->TargetVerticesSubset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetVerticesSubset).ArrayNum = 0;
  (this->TargetVerticesSubset).ArrayMax = 0;
  (this->MatchedVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatchedVertices).ArrayNum = 0;
  (this->MatchedVertices).ArrayMax = 0;
  this->SourceMesh = param_1;
  pTVar1->Ptr = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->InternalSourceMeshNormals).Ptr = (FMeshNormals *)0x0;
  this->SearchRadius = -1.0;
  this->NormalThreshold = -1.0;
  this->LayeredMeshSupport = false;
  this->NumSmoothingIterations = 0;
  this->SmoothingStrength = 0.0;
  this->bUseIntrinsicLaplacian = false;
  this->bHardEdges = false;
  this->BiasRatio = 0.0001;
  this->SourceBVH = param_2;
  if (param_2 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar8 = ::operator_new(0xc0);
    if (pTVar8 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar9 = TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
               TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(pTVar8,this->SourceMesh,true);
    }
    if (pTVar1 == (TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>_>
                   *)local_18) {
      if (pTVar9 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
        return this;
      }
      puVar10 = (undefined8 *)pTVar9->_padding_;
    }
    else {
      pTVar8 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar9;
      if (pTVar8 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
        return this;
      }
      puVar10 = (undefined8 *)pTVar8->_padding_;
      pTVar9 = pTVar8;
    }
    (*(code *)*puVar10)(pTVar9,1);
  }
  return this;
}

// ~FTransferVertexColorAttribute @ 14c7b7c40

void __thiscall
UE::Geometry::FTransferVertexColorAttribute::~FTransferVertexColorAttribute
          (FTransferVertexColorAttribute *this)

{
  FMeshNormals *pFVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar3;
  
  this->_padding_ = (longlong)&___7FTransferVertexColorAttribute_Geometry_UE__6B_;
  pFVar1 = (this->InternalSourceMeshNormals).Ptr;
  if (pFVar1 != (FMeshNormals *)0x0) {
    pFVar2 = (pFVar1->Normals).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x18);
  }
  pTVar3 = (this->InternalSourceBVH).Ptr;
  if (pTVar3 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    (**(code **)pTVar3->_padding_)(pTVar3,1);
  }
  pFVar2 = (this->MatchedVertices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TargetVerticesSubset).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForceInpaint).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 14c7c6a80

void __thiscall
`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_1>::operator()
          (void *this,FTaskContext *param_1,int param_2)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  TVector4<float> *pTVar17;
  undefined1 local_res8 [8];
  TVector<float>_u_0 local_68;
  float local_58;
  float fStack_54;
  float local_50;
  undefined8 local_4c;
  undefined4 local_44;
  TVector<double>_u_0 local_40;
  
  lVar12 = (longlong)param_2;
  cVar8 = (**(code **)(**(longlong **)this + 0x18))();
  if (cVar8 != '\0') {
    return;
  }
  lVar4 = *(longlong *)((longlong)this + 8);
  if (((param_2 < 0) || (*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24) <= param_2)) ||
     (uVar13 = (ulonglong)((uint)param_2 >> 9),
     0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + uVar13 * 8) +
                                 (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    bVar9 = false;
    uVar13 = (ulonglong)((uint)param_2 >> 9);
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar5 = *(longlong *)this;
  iVar3 = *(int *)(lVar5 + 0x90);
  if (iVar3 == *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)) {
    uVar10 = 0;
    if (param_2 < iVar3) {
      uVar10 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(float *)(*(longlong *)(lVar5 + 0x88) + lVar12 * 4) != 0.0) {
      return;
    }
  }
  lVar4 = *(longlong *)((longlong)this + 8);
  uVar15 = (ulonglong)(param_2 & 0x1ff);
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar13 * 8);
  local_68._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  pdVar1 = (double *)(lVar5 + uVar15 * 0x18);
  local_40._s_0.X = *pdVar1;
  local_40._s_0.Y = pdVar1[1];
  local_40._s_0.Z = *(double *)(lVar5 + 0x10 + uVar15 * 0x18);
  local_68._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  if (0.0 < *(double *)(*(longlong *)this + 0x70) || *(double *)(*(longlong *)this + 0x70) == 0.0) {
    if (*(char *)(lVar4 + 0x70) == '\0') {
      if (**(longlong **)((longlong)this + 0x18) == 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3781658402787163861>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferDynamicMeshAttributes.cpp"
                           ,299,"bHasNormals || InternalTargetMeshNormals.IsValid()");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        goto LAB_14c7c6cfa;
      }
      lVar4 = **(longlong **)((longlong)this + 0x18);
      uVar10 = 0;
      if (param_2 < *(int *)(lVar4 + 0x10)) {
        uVar10 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 8);
      local_58 = (float)*(double *)(lVar4 + lVar12 * 0x18);
      pfVar11 = &local_58;
      fStack_54 = (float)*(double *)(lVar4 + 8 + lVar12 * 0x18);
      local_50 = (float)*(double *)(lVar4 + 0x10 + lVar12 * 0x18);
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + uVar13 * 8);
      local_44 = *(undefined4 *)(lVar4 + 8 + uVar15 * 0xc);
      pfVar11 = (float *)&local_4c;
      local_4c = *(undefined8 *)(lVar4 + uVar15 * 0xc);
    }
    local_68._0_8_ = *(undefined8 *)pfVar11;
    local_68._s_0.Z = pfVar11[2];
  }
LAB_14c7c6cfa:
  plVar6 = *(longlong **)((longlong)this + 0x20);
  uVar10 = 0;
  if (param_2 < (int)plVar6[1]) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar17 = (TVector4<float> *)(*plVar6 + lVar12 * 0x10);
  bVar9 = UE::Geometry::FTransferVertexColorAttribute::TransferColorToPoint
                    (*(FTransferVertexColorAttribute **)this,pTVar17,
                     (TVector<double> *)&local_40._s_0,(TVector<float> *)&local_68._s_0);
  if (bVar9) {
    UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements
              ((TDynamicMeshOverlay<float,4> *)**(undefined8 **)((longlong)this + 0x10),param_2,
               &param_1->ElementIDs);
    pFVar14 = (param_1->ElementIDs).AllocatorInstance.Data;
    iVar3 = (param_1->ElementIDs).ArrayNum;
    pFVar2 = pFVar14 + (longlong)iVar3 * 4;
    while( true ) {
      if ((param_1->ElementIDs).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar14 == pFVar2) break;
      uVar10 = *(uint *)pFVar14;
      uVar16 = uVar10 * 4;
      lVar4 = **(longlong **)((longlong)this + 0x10);
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar16 & 0x1ff) * 4) = (pTVar17->field0_0x0)._s_0.X;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar16 + 1 & 0x1ff) * 4) = (pTVar17->field0_0x0)._s_0.Y;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar16 + 2 & 0x1ff) * 4) = (pTVar17->field0_0x0)._s_0.Z;
      pFVar14 = pFVar14 + 4;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar16 + 3 & 0x1ff) * 4) = (pTVar17->field0_0x0)._s_0.W;
    }
    lVar4 = *(longlong *)this;
    uVar10 = 0;
    if (param_2 < *(int *)(lVar4 + 0xb0)) {
      uVar10 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined1 *)(lVar12 + *(longlong *)(lVar4 + 0xa8)) = 1;
  }
  return;
}

// operator() @ 14c7c7380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::__l11::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  TVector<float>_u_0 local_68;
  float local_58;
  float fStack_54;
  float local_50;
  undefined8 local_4c;
  undefined4 local_44;
  TVector4<float>_u_0 local_38;
  
  cVar5 = (**(code **)(**(longlong **)this + 0x18))();
  if (cVar5 != '\0') {
    return;
  }
  lVar10 = **(longlong **)((longlong)this + 0x10);
  if (param_1 < 0) {
    return;
  }
  if (*(int *)(lVar10 + 8) * 0x200 + *(int *)(lVar10 + 0xc) <= param_1) {
    return;
  }
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar10 + 0x10) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U)) {
    return;
  }
  lVar8 = *(longlong *)((longlong)this + 8);
  uVar12 = *(uint *)(*(longlong *)
                      (*(longlong *)(lVar10 + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 4);
  lVar10 = (longlong)(int)uVar12;
  if ((int)uVar12 < 0) {
    return;
  }
  if (*(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24) <= (int)uVar12) {
    return;
  }
  uVar11 = (ulonglong)(uVar12 & 0x1ff);
  uVar13 = (ulonglong)(uVar12 >> 9);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar8 + 0x28) + uVar13 * 8) +
                                  uVar11 * 2) - 1U)) {
    return;
  }
  plVar1 = *(longlong **)((longlong)this + 0x20);
  if (param_1 < (int)plVar1[1]) {
    if ((param_1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar8 = *plVar1;
    uVar4 = (longlong)param_1;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + uVar13 * 8);
    uVar4 = uVar11;
  }
  local_68._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  local_68._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  if (0.0 < *(double *)(*(longlong *)this + 0x70) || *(double *)(*(longlong *)this + 0x70) == 0.0) {
    if (*(char *)(*(longlong *)((longlong)this + 8) + 0x70) == '\0') {
      lVar2 = **(longlong **)((longlong)this + 0x18);
      if (lVar2 == 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3781658402787163475>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferDynamicMeshAttributes.cpp"
                           ,0x2ad,"bHasNormals || InTargetMeshNormals");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_14c7c7603;
      }
      uVar7 = 0;
      if ((int)uVar12 < *(int *)(lVar2 + 0x10)) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 8);
      local_58 = (float)*(double *)(lVar2 + lVar10 * 0x18);
      pfVar9 = &local_58;
      fStack_54 = (float)*(double *)(lVar2 + 8 + lVar10 * 0x18);
      local_50 = (float)*(double *)(lVar2 + 0x10 + lVar10 * 0x18);
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x60) + uVar13 * 8);
      local_44 = *(undefined4 *)(lVar10 + 8 + uVar11 * 0xc);
      pfVar9 = (float *)&local_4c;
      local_4c = *(undefined8 *)(lVar10 + uVar11 * 0xc);
    }
    local_68._0_8_ = *(undefined8 *)pfVar9;
    local_68._s_0.Z = pfVar9[2];
  }
LAB_14c7c7603:
  local_38._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_38._8_8_ = _UNK_150689648;
  bVar6 = UE::Geometry::FTransferVertexColorAttribute::TransferColorToPoint
                    (*(FTransferVertexColorAttribute **)this,(TVector4<float> *)&local_38._s_0,
                     (TVector<double> *)(lVar8 + uVar4 * 0x18),(TVector<float> *)&local_68._s_0);
  if (bVar6) {
    uVar12 = param_1 * 4;
    lVar10 = *(longlong *)this;
    lVar8 = **(longlong **)((longlong)this + 0x10);
    *(float *)(*(longlong *)
                (*(longlong *)(lVar8 + 0x48) + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar12 & 0x1ff) * 4) = local_38._s_0.X;
    *(float *)(*(longlong *)
                (*(longlong *)(lVar8 + 0x48) + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar12 + 1 & 0x1ff) * 4) = local_38._s_0.Y;
    *(float *)(*(longlong *)
                (*(longlong *)(lVar8 + 0x48) + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar12 + 2 & 0x1ff) * 4) = local_38._s_0.Z;
    *(float *)(*(longlong *)
                (*(longlong *)(lVar8 + 0x48) + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
              (ulonglong)(uVar12 + 3 & 0x1ff) * 4) = local_38._s_0.W;
    uVar12 = 0;
    if (param_1 < *(int *)(lVar10 + 0xb0)) {
      uVar12 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar10 + 0xa8)) = 1;
  }
  return;
}

// operator() @ 14c7cd990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::__l2::<lambda_2>::
operator()(void *this,FTaskContext *param_1,int param_2)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  float *pfVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  TVector<float>_u_0 local_c8;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  TVector4<float>_u_0 local_98;
  TVector<double>_u_0 local_88 [4];
  
  cVar11 = (**(code **)(**(longlong **)this + 0x18))();
  if (cVar11 != '\0') {
    return;
  }
  if (*(char *)((longlong)this + 0x20) != '\0') {
    lVar4 = *(longlong *)this;
    uVar13 = 0;
    if (param_2 < *(int *)(lVar4 + 0xa0)) {
      uVar13 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_2 = *(uint *)(*(longlong *)(lVar4 + 0x98) + (longlong)param_2 * 4);
  }
  lVar4 = *(longlong *)((longlong)this + 8);
  if (param_2 < 0) {
    return;
  }
  if (*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24) <= param_2) {
    return;
  }
  uVar18 = (ulonglong)((uint)param_2 >> 9);
  lVar19 = (longlong)param_2;
  uVar16 = (ulonglong)(param_2 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + uVar18 * 8) +
                                  uVar16 * 2) - 1U)) {
    return;
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar18 * 8);
  local_c8._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  pdVar1 = (double *)(lVar5 + uVar16 * 0x18);
  local_88[0]._0_8_ = *pdVar1;
  local_88[0]._8_8_ = pdVar1[1];
  local_88[0]._16_8_ = *(double *)(lVar5 + 0x10 + uVar16 * 0x18);
  local_c8._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  if (0.0 < *(double *)(*(longlong *)this + 0x70) || *(double *)(*(longlong *)this + 0x70) == 0.0) {
    if (*(char *)(lVar4 + 0x70) == '\0') {
      lVar4 = **(longlong **)((longlong)this + 0x18);
      if (lVar4 == 0) {
        bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3781658402787163420>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferDynamicMeshAttributes.cpp"
                            ,0x2e4,"bHasNormals || InTargetMeshNormals");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_14c7cdbd2;
      }
      uVar13 = 0;
      if (param_2 < *(int *)(lVar4 + 0x10)) {
        uVar13 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 8);
      local_b8 = (float)*(double *)(lVar4 + lVar19 * 0x18);
      pfVar14 = &local_b8;
      fStack_b4 = (float)*(double *)(lVar4 + 8 + lVar19 * 0x18);
      local_b0 = (float)*(double *)(lVar4 + 0x10 + lVar19 * 0x18);
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + uVar18 * 8);
      local_a4 = *(undefined4 *)(lVar4 + 8 + uVar16 * 0xc);
      pfVar14 = (float *)&local_ac;
      local_ac = *(undefined8 *)(lVar4 + uVar16 * 0xc);
    }
    local_c8._0_8_ = *(undefined8 *)pfVar14;
    local_c8._s_0.Z = pfVar14[2];
  }
LAB_14c7cdbd2:
  local_98._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_98._8_8_ = _UNK_150689648;
  bVar12 = UE::Geometry::FTransferVertexColorAttribute::TransferColorToPoint
                     (*(FTransferVertexColorAttribute **)this,(TVector4<float> *)&local_98._s_0,
                      (TVector<double> *)&local_88[0]._s_0,(TVector<float> *)&local_c8._s_0);
  if (bVar12) {
    UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements
              ((TDynamicMeshOverlay<float,4> *)**(undefined8 **)((longlong)this + 0x10),param_2,
               &param_1->ElementIDs);
    pFVar15 = (param_1->ElementIDs).AllocatorInstance.Data;
    iVar3 = (param_1->ElementIDs).ArrayNum;
    uVar10 = local_98._s_0.W;
    uVar9 = local_98._s_0.Z;
    uVar8 = local_98._s_0.Y;
    uVar7 = local_98._s_0.X;
    pFVar2 = pFVar15 + (longlong)iVar3 * 4;
    while( true ) {
      if ((param_1->ElementIDs).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar2) break;
      uVar13 = *(uint *)pFVar15;
      uVar17 = uVar13 * 4;
      lVar4 = **(longlong **)((longlong)this + 0x10);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar17 & 0x1ff) * 4) = uVar7;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar17 + 1 & 0x1ff) * 4) = uVar8;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar17 + 2 & 0x1ff) * 4) = uVar9;
      pFVar15 = pFVar15 + 4;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar17 + 3 & 0x1ff) * 4) = uVar10;
    }
    lVar4 = *(longlong *)this;
    uVar13 = 0;
    if (param_2 < *(int *)(lVar4 + 0xb0)) {
      uVar13 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined1 *)(lVar19 + *(longlong *)(lVar4 + 0xa8)) = 1;
  }
  return;
}

// operator() @ 14c7ce990

bool __thiscall
`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l46::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((-1 < param_1) && (lVar1 = *(longlong *)this, param_1 < *(int *)(lVar1 + 0xb0))) {
    uVar5 = 0;
    if (param_1 < *(int *)(lVar1 + 0xb0)) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(char *)((longlong)param_1 + *(longlong *)(lVar1 + 0xa8)) != '\0') {
      return true;
    }
  }
  return false;
}

// operator() @ 14c7d1de0

void __thiscall
`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_3>::operator()
          (void *this)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  undefined1 local_res8 [8];
  uint local_res10;
  uint *local_res18;
  FScriptContainerElement *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_60 [2];
  
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].ArrayNum = 0;
  local_60[0].ArrayMax = 0;
  if ((**(longlong **)((longlong)this + 0x10) != 0) &&
     (**(longlong **)((longlong)this + 0x10) != **(longlong **)((longlong)this + 0x18))) {
    local_res10 = *(uint *)((longlong)this + 8);
    uVar11 = (ulonglong)(int)local_res10;
    puVar14 = *(uint **)this;
    puVar1 = puVar14 + uVar11;
    while( true ) {
      local_res18 = puVar14;
      if (*(int *)((longlong)this + 8) != (int)uVar11) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar14 == puVar1) break;
      uVar5 = *puVar14;
      lVar6 = *(longlong *)((longlong)this + 0x20);
      if (((-1 < (int)uVar5) &&
          ((int)uVar5 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                             (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements
                  ((TDynamicMeshOverlay<float,4> *)**(undefined8 **)((longlong)this + 0x18),uVar5,
                   local_60);
        iVar9 = local_60[0].ArrayNum;
        uVar11 = (ulonglong)local_60[0].ArrayNum;
        local_res20 = local_60[0].AllocatorInstance.Data + uVar11 * 4;
        FVar19.Data = local_60[0].AllocatorInstance.Data;
        while( true ) {
          pFVar8 = local_res20;
          if ((int)uVar11 != iVar9) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          puVar14 = local_res18;
          if (FVar19.Data == pFVar8) break;
          uVar5 = *(uint *)FVar19.Data;
          uVar10 = uVar5 * 4;
          uVar13 = (ulonglong)((uVar5 & 0x3fffffff) >> 7);
          uVar17 = (ulonglong)((uVar5 & 0x3fffffff) >> 7);
          uVar11 = (ulonglong)(uVar10 + 1 & 0x1ff);
          uVar18 = (ulonglong)((uVar5 & 0x3fffffff) >> 7);
          uVar12 = (ulonglong)((uVar5 & 0x3fffffff) >> 7);
          uVar16 = (ulonglong)(uVar10 + 2 & 0x1ff);
          uVar15 = (ulonglong)(uVar10 + 3 & 0x1ff);
          lVar6 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x48);
          FVar19.Data = FVar19.Data + 4;
          uVar2 = *(undefined4 *)(*(longlong *)(lVar6 + uVar13 * 8) + uVar11 * 4);
          uVar3 = *(undefined4 *)(*(longlong *)(lVar6 + uVar17 * 8) + uVar16 * 4);
          uVar4 = *(undefined4 *)(*(longlong *)(lVar6 + uVar18 * 8) + uVar15 * 4);
          lVar7 = **(longlong **)((longlong)this + 0x18);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar12 * 8) +
           (ulonglong)(uVar10 & 0x1ff) * 4) =
               *(undefined4 *)(*(longlong *)(lVar6 + uVar12 * 8) + (ulonglong)(uVar10 & 0x1ff) * 4);
          *(undefined4 *)(*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar13 * 8) + uVar11 * 4) =
               uVar2;
          *(undefined4 *)(*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar17 * 8) + uVar16 * 4) =
               uVar3;
          *(undefined4 *)(*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar18 * 8) + uVar15 * 4) =
               uVar4;
          uVar11 = local_60[0]._8_8_ & 0xffffffff;
        }
      }
      uVar11 = (ulonglong)local_res10;
      puVar14 = puVar14 + 1;
    }
  }
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return;
}

// Cancelled @ 14c7e7f40

bool __thiscall
UE::Geometry::FTransferVertexColorAttribute::Cancelled(FTransferVertexColorAttribute *this)

{
  FProgressCancel *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pFVar1 = this->Progress;
  if (pFVar1 == (FProgressCancel *)0x0) {
    return false;
  }
  if (pFVar1->WasCancelled != false) {
    return true;
  }
  Core::Private::Function::CheckCallable(*(void **)&pFVar1->CancelF);
  pcVar2 = *(code **)&pFVar1->CancelF;
  plVar3 = *(longlong **)&(pFVar1->CancelF).field_0x28;
  plVar6 = (longlong *)&(pFVar1->CancelF).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  bVar4 = (bool)(*pcVar2)(uVar5);
  pFVar1->WasCancelled = bVar4;
  return bVar4;
}

// FindClosestPointOnSourceSurface @ 14c806b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FTransferVertexColorAttribute::FindClosestPointOnSourceSurface
          (FTransferVertexColorAttribute *this,TVector<double> *param_1,
          TTransformSRT3<double> *param_2,int *param_3,TVector<double> *param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TVector<double> *pTVar11;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStackY_1e8 [32];
  TVector<double>_u_0 local_1b8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined1 local_188 [16];
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TVector<double> local_140;
  TVector<double> local_128;
  undefined8 local_108 [2];
  longlong local_f8;
  longlong local_e8 [3];
  longlong *local_d0;
  undefined1 local_c8;
  TDistPoint3Triangle3<double> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1b8._s_0.Y = (param_2->Scale3D).field0_0x0._s_0.Y * (param_1->field0_0x0)._s_0.Y;
  local_108[0] = __real_7fefffffffffffff;
  local_1b8._s_0.X = (param_1->field0_0x0)._s_0.X * (param_2->Scale3D).field0_0x0._s_0.X;
  local_f8 = 0;
  local_d0 = (longlong *)0x0;
  local_c8 = 0;
  local_1b8._s_0.Z = (param_2->Scale3D).field0_0x0._s_0.Z * (param_1->field0_0x0)._s_0.Z;
  pTVar11 = operator*<double>(&local_140,&param_2->Rotation,(TVector<double> *)&local_1b8._s_0);
  local_190 = (param_2->Translation).field0_0x0._s_0.Z + (pTVar11->field0_0x0)._s_0.Z;
  dStack_198 = (param_2->Translation).field0_0x0._s_0.Y + (pTVar11->field0_0x0)._s_0.Y;
  local_1a0 = (param_2->Translation).field0_0x0._s_0.X + (pTVar11->field0_0x0)._s_0.X;
  pTVar12 = this->SourceBVH;
  if (pTVar12 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar12 = (this->InternalSourceBVH).Ptr;
  }
  iVar10 = (**(code **)(pTVar12->_padding_ + 0x20))
                     (SUB84(local_1a0,0),&local_1a0,local_188,local_108);
  *param_3 = iVar10;
  if (iVar10 == -1) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3781658402787163537>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferDynamicMeshAttributes.cpp"
                       ,0x26f,"NearTriID != IndexConstants::InvalidID");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    bVar8 = false;
  }
  else {
    local_178._s_0.X = local_1a0;
    local_178._s_0.Y = dStack_198;
    local_178._s_0.Z = local_190;
    TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
              (&local_b8,this->SourceMesh,iVar10,(TVector<double> *)&local_178._s_0);
    uVar13 = (ulonglong)(*param_3 & 0x1ff);
    pFVar2 = (this->SourceMesh->Vertices).Blocks.AllocatorInstance.Data;
    local_158._s_0.X = local_b8.ClosestTrianglePoint.field0_0x0._s_0.X;
    local_158._s_0.Y = local_b8.ClosestTrianglePoint.field0_0x0._s_0.Y;
    local_158._s_0.Z = local_b8.ClosestTrianglePoint.field0_0x0._s_0.Z;
    lVar3 = *(longlong *)
             ((this->SourceMesh->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)*param_3 >> 9) * 8);
    uVar1 = *(uint *)(lVar3 + 8 + uVar13 * 0xc);
    local_1b8._s_0.X = *(double *)(lVar3 + uVar13 * 0xc);
    local_1b8._8_4_ = uVar1;
    pTVar11 = VectorUtil::BarycentricCoords<double>
                        (&local_128,(TVector<double> *)&local_158._s_0,
                         (TVector<double> *)
                         (*(longlong *)
                           (pFVar2 + (((ulonglong)local_1b8._s_0.X & 0xffffffff) >> 9) * 8) +
                         (ulonglong)(SUB84(local_1b8._s_0.X,0) & 0x1ff) * 0x18),
                         (TVector<double> *)
                         (*(longlong *)(pFVar2 + ((ulonglong)local_1b8._s_0.X >> 0x29) * 8) +
                         (ulonglong)((uint)((ulonglong)local_1b8._s_0.X >> 0x20) & 0x1ff) * 0x18),
                         (TVector<double> *)
                         (*(longlong *)(pFVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 0x18));
    bVar8 = true;
    uVar5 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 4);
    uVar6 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 8);
    uVar7 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 0xc);
    *(undefined4 *)&param_4->field0_0x0 = *(undefined4 *)&pTVar11->field0_0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 4) = uVar5;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = uVar6;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = uVar7;
    (param_4->field0_0x0)._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  }
  if (local_f8 != 0) {
    plVar14 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar14 = local_d0;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return bVar8;
}

// TransferColorToPoint @ 14c8464d0

bool __thiscall
UE::Geometry::FTransferVertexColorAttribute::TransferColorToPoint
          (FTransferVertexColorAttribute *this,TVector4<float> *param_1,TVector<double> *param_2,
          TVector<float> *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  FMeshNormals *pFVar6;
  FMeshNormals *pFVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  FDynamicMeshAttributeSet *pFVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 uVar16;
  float *pfVar17;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint local_188;
  uint uStack_184;
  TVector<float>_u_0 local_178;
  uint local_168 [2];
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  float local_144;
  undefined8 local_140;
  undefined8 local_130;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  FIndex3i_u_0 local_e8;
  undefined8 local_d8;
  float local_d0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0 [5];
  
  bVar10 = FindClosestPointOnSourceSurface
                     (this,param_2,&this->TargetToWorld,(int *)local_168,
                      (TVector<double> *)&local_c8._s_0);
  if (bVar10) {
    pFVar3 = (this->SourceMesh->AttributeSet).Ptr;
    local_178._s_0.X = (float)local_c8._s_0.X;
    pFVar13 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar13 = pFVar3;
    }
    uVar2 = local_168[0] * 3;
    pTVar18 = (pFVar13->ColorLayer).Ptr;
    lVar14 = *(longlong *)&pTVar18->field_0x78;
    local_178._s_0.Z = (float)local_c8._s_0.Z;
    local_178._s_0.Y = (float)local_c8._s_0.Y;
    local_e8._s_0.A =
         *(int *)(*(longlong *)(lVar14 + (ulonglong)(uVar2 >> 9) * 8) +
                 (ulonglong)(uVar2 & 0x1ff) * 4);
    local_e8._s_0.B =
         *(int *)(*(longlong *)(lVar14 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                 (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
    local_e8._s_0.C =
         *(int *)(*(longlong *)(lVar14 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                 (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
    local_160 = pTVar18;
    if ((0.0 <= this->SearchRadius) || (0.0 < this->NormalThreshold || this->NormalThreshold == 0.0)
       ) {
      bVar10 = true;
      if (0.0 <= this->SearchRadius) {
        FDynamicMesh3::GetTriBaryPoint
                  (this->SourceMesh,(TVector<double> *)&local_b0[0]._s_0,local_168[0],
                   local_c8._s_0.X,local_c8._s_0.Y,local_c8._s_0.Z);
        dVar9 = (param_2->field0_0x0)._s_0.Y - (double)local_b0[0]._8_8_;
        dVar23 = (param_2->field0_0x0)._s_0.Z - (double)local_b0[0]._16_8_;
        dVar26 = (param_2->field0_0x0)._s_0.X - (double)local_b0[0]._0_8_;
        auVar24._0_8_ = dVar23 * dVar23;
        auVar24._8_8_ = 0;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = dVar9 * dVar9 + dVar26 * dVar26 + auVar24._0_8_;
        auVar25 = sqrtpd(auVar24,auVar25);
        bVar10 = auVar25._0_8_ < this->SearchRadius || auVar25._0_8_ == this->SearchRadius;
      }
      uVar16 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
      bVar11 = true;
      if (0.0 < this->NormalThreshold || this->NormalThreshold == 0.0) {
        pFVar4 = this->SourceMesh;
        bVar11 = (pFVar4->VertexNormals).bIsSet;
        local_130 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        local_140 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        local_f8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        if ((bVar11 == false) && ((this->InternalSourceMeshNormals).Ptr == (FMeshNormals *)0x0)) {
          bVar11 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3781658402787163585>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferDynamicMeshAttributes.cpp"
                              ,0x23f,"bHasSourceNormals || InternalSourceMeshNormals.IsValid()");
          uVar20 = uVar16;
          uVar19 = uVar16;
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
        }
        else {
          lVar14 = *(longlong *)
                    ((pFVar4->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_168[0] >> 9) * 8);
          uVar1 = *(undefined8 *)(lVar14 + (ulonglong)(local_168[0] & 0x1ff) * 0xc);
          uVar2 = *(uint *)(lVar14 + 8 + (ulonglong)(local_168[0] & 0x1ff) * 0xc);
          local_188 = (uint)uVar1;
          uStack_184 = (uint)((ulonglong)uVar1 >> 0x20);
          if (bVar11 == false) {
            pFVar6 = (this->InternalSourceMeshNormals).Ptr;
            uVar15 = 0;
            if ((int)local_188 < (pFVar6->Normals).ArrayNum) {
              uVar15 = ~local_188 >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                uVar12 = (*pcVar8)();
                return (bool)uVar12;
              }
            }
            lVar14 = (longlong)(int)local_188;
            pFVar5 = (pFVar6->Normals).AllocatorInstance.Data;
            pFVar6 = (this->InternalSourceMeshNormals).Ptr;
            local_120 = (float)*(double *)(pFVar5 + lVar14 * 0x18);
            uVar19 = (undefined4)*(double *)(pFVar5 + lVar14 * 0x18 + 0x10);
            uVar15 = 0;
            if ((int)uStack_184 < (pFVar6->Normals).ArrayNum) {
              uVar15 = ~uStack_184 >> 0x1f;
            }
            fStack_11c = (float)*(double *)(pFVar5 + lVar14 * 0x18 + 8);
            local_118 = (float)uVar19;
            local_130 = CONCAT44((float)*(double *)(pFVar5 + lVar14 * 0x18 + 8),
                                 (float)*(double *)(pFVar5 + lVar14 * 0x18));
            if (uVar15 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                uVar12 = (*pcVar8)();
                return (bool)uVar12;
              }
            }
            lVar14 = (longlong)(int)uStack_184;
            pFVar7 = (this->InternalSourceMeshNormals).Ptr;
            pFVar5 = (pFVar6->Normals).AllocatorInstance.Data;
            local_114 = (float)*(double *)(pFVar5 + lVar14 * 0x18);
            uVar20 = (undefined4)*(double *)(pFVar5 + lVar14 * 0x18 + 0x10);
            uVar15 = 0;
            if ((int)uVar2 < (pFVar7->Normals).ArrayNum) {
              uVar15 = ~uVar2 >> 0x1f;
            }
            fStack_110 = (float)*(double *)(pFVar5 + lVar14 * 0x18 + 8);
            local_10c = (float)uVar20;
            local_140 = CONCAT44((float)*(double *)(pFVar5 + lVar14 * 0x18 + 8),
                                 (float)*(double *)(pFVar5 + lVar14 * 0x18));
            if (uVar15 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                uVar12 = (*pcVar8)();
                return (bool)uVar12;
              }
            }
            lVar14 = (longlong)(int)uVar2;
            pFVar5 = (pFVar7->Normals).AllocatorInstance.Data;
            pfVar17 = &local_108;
            local_108 = (float)*(double *)(pFVar5 + lVar14 * 0x18);
            local_104 = (float)*(double *)(pFVar5 + lVar14 * 0x18 + 8);
            local_100 = (float)*(double *)(pFVar5 + lVar14 * 0x18 + 0x10);
          }
          else {
            pFVar5 = (pFVar4->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
            lVar14 = *(longlong *)(pFVar5 + (ulonglong)(local_188 >> 9) * 8);
            local_d8 = *(undefined8 *)(lVar14 + (ulonglong)(local_188 & 0x1ff) * 0xc);
            uVar19 = *(float *)(lVar14 + 8 + (ulonglong)(local_188 & 0x1ff) * 0xc);
            local_130 = local_d8;
            if (bVar11 == false) {
              local_158 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
              local_150 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
            }
            else {
              lVar14 = *(longlong *)(pFVar5 + (ulonglong)(uStack_184 >> 9) * 8);
              local_158 = *(undefined8 *)(lVar14 + (ulonglong)(uStack_184 & 0x1ff) * 0xc);
              local_150 = *(float *)(lVar14 + 8 + (ulonglong)(uStack_184 & 0x1ff) * 0xc);
            }
            local_140 = local_158;
            uVar20 = local_150;
            local_d0 = (float)uVar19;
            if (bVar11 == false) {
              local_144 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
              pfVar17 = (float *)&local_14c;
              local_14c = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
            }
            else {
              pfVar17 = (float *)&local_14c;
              lVar14 = *(longlong *)
                        ((pFVar4->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar2 >> 9) * 8);
              local_14c = *(undefined8 *)(lVar14 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
              local_144 = *(float *)(lVar14 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
            }
          }
          local_f8 = *(undefined8 *)pfVar17;
          uVar16 = pfVar17[2];
        }
        fVar28 = (float)local_140 * local_178._s_0.Y + (float)local_130 * local_178._s_0.X +
                 (float)local_f8 * local_178._s_0.Z;
        fVar29 = local_140._4_4_ * local_178._s_0.Y + local_130._4_4_ * local_178._s_0.X +
                 local_f8._4_4_ * local_178._s_0.Z;
        fVar31 = (float)uVar20 * local_178._s_0.Y + (float)uVar19 * local_178._s_0.X +
                 (float)uVar16 * local_178._s_0.Z;
        fVar21 = SQRT(fVar29 * fVar29 + fVar28 * fVar28 + fVar31 * fVar31);
        if (fVar21 <= 0.0) {
          fVar28 = 0.0;
          fVar29 = 0.0;
          fVar21 = 0.0;
        }
        else {
          fVar21 = __real_3f800000 / fVar21;
          fVar28 = fVar21 * fVar28;
          fVar29 = fVar21 * fVar29;
          fVar21 = fVar21 * fVar31;
        }
        fVar31 = (param_3->field0_0x0)._s_0.X;
        fVar27 = (param_3->field0_0x0)._s_0.Y;
        fVar30 = (param_3->field0_0x0)._s_0.Z;
        fVar22 = SQRT(fVar27 * fVar27 + fVar31 * fVar31 + fVar30 * fVar30);
        if (fVar22 <= 0.0) {
          fVar31 = 0.0;
          fVar27 = 0.0;
          fVar30 = 0.0;
        }
        else {
          fVar22 = __real_3f800000 / fVar22;
          fVar31 = fVar31 * fVar22;
          fVar27 = fVar27 * fVar22;
          fVar30 = fVar30 * fVar22;
        }
        fVar21 = acosf(fVar27 * fVar29 + fVar31 * fVar28 + fVar30 * fVar21);
        bVar11 = (double)fVar21 <= this->NormalThreshold;
        pTVar18 = local_160;
        if ((!bVar11) && (this->LayeredMeshSupport != false)) {
          bVar11 = (double)(__real_40490fdb - fVar21) <= this->NormalThreshold;
        }
      }
      if ((!bVar10) || (!bVar11)) goto LAB_14c846c01;
    }
    TransferValuesLocals::InterpolateVertexAttribute
              (param_1,(FIndex3i *)&local_e8._s_0,(TVector<float> *)&local_178._s_0,pTVar18);
    bVar10 = true;
  }
  else {
LAB_14c846c01:
    bVar10 = false;
  }
  return bVar10;
}

// TransferColorsToMesh @ 14c846c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh
          (FTransferVertexColorAttribute *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_> TVar8;
  FDynamicMesh3 *pFVar9;
  double *pdVar10;
  int *piVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  FDynamicMeshAttributeSet *pFVar19;
  TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_> TVar20;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Dst;
  TDynamicMeshOverlay<float,4> *pTVar21;
  ulonglong uVar22;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Dst_00;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var23;
  ulonglong uVar24;
  longlong *plVar25;
  ulong64 uVar26;
  uint uVar27;
  EParallelForFlags EVar28;
  FDynamicMeshAttributeSet *this_00;
  ulonglong uVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  ForAnyElementType FVar32;
  longlong lVar33;
  int iVar34;
  longlong lVar35;
  size_t _Size;
  TArray<bool,TSizedDefaultAllocator<32>_> *this_01;
  uint uVar36;
  FTransferVertexColorAttribute *pFVar37;
  int iVar38;
  char cVar39;
  undefined1 auStackY_858 [32];
  FScriptContainerElement local_808 [8];
  TArray<bool,TSizedDefaultAllocator<32>_> local_800;
  <lambda_1> local_7f0;
  bool local_7ef;
  undefined1 local_7ee;
  undefined1 local_7ed;
  undefined1 local_7ec;
  char local_7eb;
  uint local_7e8;
  uint local_7e4;
  ForAnyElementType local_7e0;
  undefined8 local_7d8;
  ForAnyElementType local_7d0;
  undefined8 local_7c8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_7c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_7b0;
  vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> local_7a0;
  uint local_788;
  FTransferVertexColorAttribute *local_780;
  ulonglong local_778;
  undefined8 local_768;
  undefined8 uStack_760;
  TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_> local_758;
  int local_750;
  TDynamicMeshOverlay<float,4> *local_748;
  longlong local_740;
  longlong local_738;
  TDynamicMeshOverlay<float,4> *local_730;
  TDynamicVector<unsigned_short,512> local_728;
  TDynamicVector<int,512> local_710;
  int local_6f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_6f0;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_6d0;
  FScriptContainerElement *local_6c0;
  TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_> local_6b8;
  FDynamicMesh3 *local_6b0;
  TDynamicMeshOverlay<float,4> local_6a8;
  undefined8 local_618;
  undefined8 uStack_610;
  FVertexLinearization local_608;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_5e0;
  TDynamicMeshOverlay<float,4> *local_5d8;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_5d0;
  FTransferVertexColorAttribute *local_5c8;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_5c0;
  SparseMatrix<double,0,int> local_5b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_568;
  TDynamicMeshOverlay<float,4> **local_558;
  TDynamicMeshOverlay<float,4> **local_550;
  FDynamicMesh3 *local_548;
  code *local_540;
  TDynamicMeshOverlay<float,4> **local_538;
  code *local_530;
  <lambda_1> *local_528;
  TArrayView<TransferValuesLocals::FTaskContext,int> local_520;
  SparseMatrixBase<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_>_> local_510 [8];
  SparseMatrix<double,0,int> *local_508;
  SparseMatrix<double,0,int> local_4f8;
  <lambda_1> local_4a8;
  SparseMatrix<double,0,int> local_478;
  CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::SparseMatrix<double,0,int>,2>_const_>
  local_428;
  undefined4 local_3c7;
  undefined2 local_3c3;
  undefined1 local_3c1;
  SparseMatrix<double,0,int> local_3a8;
  SparseMatrix<double,0,int> local_358;
  SparseMatrix<double,0,int> local_308;
  undefined1 local_2b8 [120];
  undefined1 local_240 [64];
  void *local_200;
  undefined4 local_1f8;
  double local_1f0;
  FEigenSparseMatrixAssembler local_1e8;
  FEigenSparseMatrixAssembler local_138;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_858;
  local_780 = this;
  local_6b0 = param_1;
  iVar15 = (**(code **)(this->_padding_ + 8))();
  if (iVar15 != 0) {
    return false;
  }
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    FDynamicMesh3::EnableAttributes(param_1);
  }
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  local_758.Ptr = (FMeshNormals *)0x0;
  if (0.0 < this->NormalThreshold || this->NormalThreshold == 0.0) {
    if (((this->SourceMesh->VertexNormals).bIsSet == false) &&
       ((this->InternalSourceMeshNormals).Ptr == (FMeshNormals *)0x0)) {
      pFVar19 = ::operator_new(0x18);
      local_6b8.Ptr = (FMeshNormals *)this_00;
      if (pFVar19 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar19->_padding_ = (longlong)this->SourceMesh;
        pFVar19->_padding_ = 0;
        pFVar19->_padding_ = 0;
        local_6b8.Ptr = (FMeshNormals *)pFVar19;
      }
      TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>::operator=
                (&this->InternalSourceMeshNormals,&local_6b8);
      TVar8.Ptr = local_6b8.Ptr;
      if ((FDynamicMeshAttributeSet *)local_6b8.Ptr != (FDynamicMeshAttributeSet *)0x0) {
        pFVar4 = ((local_6b8.Ptr)->Normals).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(TVar8.Ptr,0x18);
      }
      FMeshNormals::Compute_FaceAvg((this->InternalSourceMeshNormals).Ptr,true,true);
    }
    if ((param_1->VertexNormals).bIsSet == false) {
      pFVar19 = ::operator_new(0x18);
      TVar8.Ptr = local_758.Ptr;
      TVar20.Ptr = (FMeshNormals *)this_00;
      if (pFVar19 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar19->_padding_ = 0;
        pFVar19->_padding_ = 0;
        pFVar19->_padding_ = (longlong)param_1;
        TVar20.Ptr = (FMeshNormals *)pFVar19;
      }
      if ((FDynamicMeshAttributeSet *)local_758.Ptr != (FDynamicMeshAttributeSet *)0x0) {
        pFVar4 = ((local_758.Ptr)->Normals).AllocatorInstance.Data;
        local_758.Ptr = TVar20.Ptr;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(TVar8.Ptr,0x18);
        TVar20.Ptr = local_758.Ptr;
      }
      local_758.Ptr = TVar20.Ptr;
      FMeshNormals::Compute_FaceAvg(local_758.Ptr,true,true);
    }
  }
  pFVar19 = (param_1->AttributeSet).Ptr;
  bVar12 = this->bHardEdges;
  if (pFVar19 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar19;
  }
  pTVar21 = (TDynamicMeshOverlay<float,4> *)(this_00->ColorLayer).Ptr;
  if (pTVar21 == (TDynamicMeshOverlay<float,4> *)0x0) {
    FDynamicMeshAttributeSet::EnablePrimaryColors(this_00);
    TDynamicMeshOverlay<float,4>::CreatePerVertex
              ((TDynamicMeshOverlay<float,4> *)(this_00->ColorLayer).Ptr,0.0);
    pTVar21 = (TDynamicMeshOverlay<float,4> *)(this_00->ColorLayer).Ptr;
  }
  if (bVar12 != false) {
    local_538 = &local_5d8;
    local_540 = Core::Private::Function::
                TFunctionRefCaller<`TransferValuesLocals::GetOrCreateColorAttribute'::__l9::<lambda_2>,void,int,int,float_*>
                ::Call;
    local_528 = &local_7f0;
    local_530 = Core::Private::Function::
                TFunctionRefCaller<`TransferValuesLocals::GetOrCreateColorAttribute'::__l9::<lambda_1>,bool,int,int>
                ::Call;
    local_5d8 = pTVar21;
    TDynamicMeshOverlay<float,4>::SplitVerticesWithPredicate
              (pTVar21,(TFunctionRef<bool___cdecl(int,int)> *)&local_530,
               (TFunctionRef<void___cdecl(int,int,float_*)> *)&local_540);
  }
  local_748 = (TDynamicMeshOverlay<float,4> *)(this_00->ColorLayer).Ptr;
  cVar39 = '\0';
  iVar15 = (this->TargetVerticesSubset).ArrayNum;
  iVar38 = iVar15;
  if (iVar15 == 0) {
    iVar38 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  }
  if (this->TransferMethod == ClosestPointOnSurface) {
    iVar15 = TransferUsingClosestPoint(this,param_1,&local_758);
    if (this->bHardEdges != false) {
      iVar38 = (local_748->ElementsRefCounts).UsedCount;
    }
    cVar39 = '\0';
    if ((this->SearchRadius <= 0.0 && this->SearchRadius != 0.0) &&
       (this->NormalThreshold <= 0.0 && this->NormalThreshold != 0.0)) {
      cVar39 = iVar15 != iVar38;
    }
  }
  else {
    if (this->TransferMethod == Inpaint) {
      this_01 = &this->MatchedVertices;
      local_7ef = false;
      local_5d0 = this_01;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init
                (this_01,&local_7ef,
                 (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
      uVar27 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
      uVar29 = (ulonglong)uVar27;
      local_7c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7c0.ArrayMax = 0;
      local_618 = 0;
      uStack_610 = 0;
      if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
      }
      local_7c0.ArrayNum = 0;
      if ((uVar27 != 0) &&
         (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,uVar27,&local_7c0.AllocatorInstance,0,&local_7c0.ArrayMax),
         0 < (int)uVar27)) {
        do {
          if ((local_7c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_618) &&
             (((FScriptContainerElement *)&local_618 <
               local_7c0.AllocatorInstance.Data + (longlong)local_7c0.ArrayMax * 0x10 &&
              (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)))) {
            pcVar5 = (code *)swi(3);
            uVar13 = (*pcVar5)();
            return (bool)uVar13;
          }
          if (local_7c0.ArrayNum == local_7c0.ArrayMax) {
            local_7c0.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&local_7c0.AllocatorInstance,&local_7c0.ArrayMax);
          }
          iVar34 = local_7c0.ArrayNum + 1;
          *(undefined8 *)(local_7c0.AllocatorInstance.Data + (longlong)local_7c0.ArrayNum * 0x10) =
               local_618;
          *(undefined8 *)
           (local_7c0.AllocatorInstance.Data + (longlong)local_7c0.ArrayNum * 0x10 + 8) = uStack_610
          ;
          uVar29 = uVar29 - 1;
          local_7c0.ArrayNum = iVar34;
        } while (uVar29 != 0);
      }
      FRefCountVector::FRefCountVector(&local_6a8.ElementsRefCounts);
      local_6a8.Elements.CurBlock = 0;
      local_6a8.Elements.CurBlockUsed = 0;
      local_6a8.Elements.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a8.Elements.Blocks.ArrayNum = 0;
      local_6a8.Elements.Blocks.ArrayMax = 0;
      TDynamicVector<float,512>::AddAllocatedBlock(&local_6a8.Elements);
      local_6a8.ParentVertices.CurBlock = 0;
      local_6a8.ParentVertices.CurBlockUsed = 0;
      local_6a8.ParentVertices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a8.ParentVertices.Blocks.ArrayNum = 0;
      local_6a8.ParentVertices.Blocks.ArrayMax = 0;
      TDynamicVector<int,512>::AddAllocatedBlock(&local_6a8.ParentVertices);
      local_6a8.ElementTriangles.CurBlock = 0;
      local_6a8.ElementTriangles.CurBlockUsed = 0;
      local_6a8.ElementTriangles.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a8.ElementTriangles.Blocks.ArrayNum = 0;
      local_6a8.ElementTriangles.Blocks.ArrayMax = 0;
      TDynamicVector<int,512>::AddAllocatedBlock(&local_6a8.ElementTriangles);
      pTVar21 = local_748;
      local_6a8.ParentMesh = (FDynamicMesh3 *)0x0;
      if (iVar15 != 0) {
        TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
                  (&local_728,&(local_748->ElementsRefCounts).RefCounts);
        TDynamicVector<int,512>::TDynamicVector<int,512>
                  (&local_710,&(pTVar21->ElementsRefCounts).FreeIndices);
        local_6f8 = (pTVar21->ElementsRefCounts).UsedCount;
        TDynamicVector<unsigned_short,512>::Empty(&local_6a8.ElementsRefCounts.RefCounts,0);
        local_6a8.ElementsRefCounts.RefCounts.CurBlock = local_728.CurBlock;
        local_6a8.ElementsRefCounts.RefCounts.CurBlockUsed = local_728.CurBlockUsed;
        if (local_6a8.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a8.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data);
        }
        local_6a8.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data =
             local_728.Blocks.AllocatorInstance.Data;
        local_6a8.ElementsRefCounts.RefCounts.Blocks.ArrayNum = local_728.Blocks.ArrayNum;
        local_6a8.ElementsRefCounts.RefCounts.Blocks.ArrayMax = local_728.Blocks.ArrayMax;
        local_728.Blocks.ArrayNum = 0;
        local_728.Blocks.ArrayMax = 0;
        local_728.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_728.CurBlock = 0;
        local_728.CurBlockUsed = 0;
        TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&local_728);
        TDynamicVector<int,512>::Empty(&local_6a8.ElementsRefCounts.FreeIndices,0);
        local_6a8.ElementsRefCounts.FreeIndices.CurBlock = local_710.CurBlock;
        local_6a8.ElementsRefCounts.FreeIndices.CurBlockUsed = local_710.CurBlockUsed;
        if (local_6a8.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a8.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data);
        }
        local_6a8.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data =
             local_710.Blocks.AllocatorInstance.Data;
        local_6a8.ElementsRefCounts.FreeIndices.Blocks.ArrayNum = local_710.Blocks.ArrayNum;
        local_6a8.ElementsRefCounts.FreeIndices.Blocks.ArrayMax = local_710.Blocks.ArrayMax;
        local_710.Blocks.ArrayNum = 0;
        local_710.Blocks.ArrayMax = 0;
        local_710.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_710.CurBlock = 0;
        local_710.CurBlockUsed = 0;
        TDynamicVector<int,512>::AddAllocatedBlock(&local_710);
        local_6a8.ElementsRefCounts.UsedCount = local_6f8;
        local_6f8 = 0;
        TDynamicVector<int,512>::Empty(&local_710,0);
        if (local_710.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_710.Blocks.AllocatorInstance.Data);
        }
        TDynamicVector<unsigned_short,512>::Empty(&local_728,0);
        if (local_728.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_728.Blocks.AllocatorInstance.Data);
        }
        TDynamicVector<float,512>::operator=(&local_6a8.Elements,&pTVar21->Elements);
        TDynamicVector<int,512>::operator=(&local_6a8.ParentVertices,&pTVar21->ParentVertices);
        TDynamicVector<int,512>::operator=(&local_6a8.ElementTriangles,&pTVar21->ElementTriangles);
      }
      local_7e0.Data = (FScriptContainerElement *)0x0;
      local_7d8 = 0;
      local_730 = &local_6a8;
      if (iVar15 == 0) {
        local_730 = local_748;
      }
      iVar34 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
      if (0 < iVar34) {
        EVar28 = (EParallelForFlags)(local_780->bUseParallel == false);
        iVar16 = ParallelForImpl::GetNumberOfThreadTasks(iVar34,1,EVar28);
        if (local_7d8 < 0) {
          DestructItems<TransferValuesLocals::FTaskContext,int>
                    ((FTaskContext *)local_7e0.Data,(int)local_7d8);
          if (local_7d8._4_4_ != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_7e0,0,(int *)((longlong)&local_7d8 + 4));
          }
        }
        else {
          DestructItems<TransferValuesLocals::FTaskContext,int>
                    ((FTaskContext *)local_7e0.Data,(int)local_7d8);
        }
        iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,iVar16,&local_7e0,(int *)&local_7d8,
                            (int *)((longlong)&local_7d8 + 4));
        DefaultConstructItems<TransferValuesLocals::FTaskContext,int>
                  (local_7e0.Data + (longlong)iVar17 * 0x10,iVar16);
        local_520.ArrayNum = (int)local_7d8;
        local_520.DataPtr = (FTaskContext *)local_7e0.Data;
        if (((int)local_7d8 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        local_4a8.__this = local_780;
        local_4a8.EditedColors =
             (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **)&local_730;
        local_4a8.MatchedColors = &local_7c0;
        local_4a8.InOutTargetMesh = param_1;
        local_4a8.InternalTargetMeshNormals = &local_758;
        ParallelForImpl::
        ParallelForInternal<_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh_::__l28::<lambda_1>,_ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh_::__l28::<lambda_1>_>_::__l5::<lambda_1>,TransferValuesLocals::FTaskContext>
                  (L"ParallelFor Task",iVar34,1,&local_4a8,local_7f0,EVar28,&local_520);
      }
      uVar29 = 0;
      cVar39 = (**(code **)(local_780->_padding_ + 0x18))();
      pFVar37 = local_780;
      if (cVar39 == '\0') {
        local_778 = 0;
        if (iVar15 == 0) {
          pFVar30 = (this_01->AllocatorInstance).Data;
          iVar15 = (this->MatchedVertices).ArrayNum;
          pFVar4 = pFVar30 + iVar15;
          while( true ) {
            if ((this->MatchedVertices).ArrayNum != iVar15) {
              local_7ee = 0;
              `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_7ee);
              uVar29 = local_778;
            }
            pFVar37 = local_780;
            if (pFVar30 == pFVar4) break;
            if (*pFVar30 != (FScriptContainerElement)0x0) {
              uVar29 = (ulonglong)((int)uVar29 + 1);
              local_778 = uVar29;
            }
            pFVar30 = pFVar30 + 1;
          }
        }
        else {
          local_778 = 0;
          local_5c8 = local_780;
          pFVar30 = (local_780->TargetVerticesSubset).AllocatorInstance.Data;
          iVar15 = (local_780->TargetVerticesSubset).ArrayNum;
          pFVar4 = pFVar30 + (longlong)iVar15 * 4;
          while( true ) {
            if ((pFVar37->TargetVerticesSubset).ArrayNum != iVar15) {
              local_7ed = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_7ed);
            }
            if (pFVar30 == pFVar4) break;
            bVar12 = `UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l46::
                     <lambda_2>::operator()(&local_5c8,*(int *)pFVar30);
            if (bVar12) {
              local_778 = local_778 + 1;
            }
            pFVar30 = pFVar30 + 4;
          }
        }
        uVar29 = local_778;
        iVar15 = (int)local_778;
        if (iVar15 == 0) goto LAB_14c8489c3;
        local_568.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                  (&local_568,(int *)(pFVar37->TargetVerticesSubset).AllocatorInstance.Data,
                   (pFVar37->TargetVerticesSubset).ArrayNum,0);
        local_558 = &local_730;
        local_550 = &local_748;
        local_548 = param_1;
        if (iVar15 != iVar38) {
          FVertexLinearization::FVertexLinearization<UE::Geometry::FDynamicMesh3>
                    (&local_608,param_1,false);
          Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_3a8);
          Eigen::SparseMatrix<double,0,int>::resize(&local_3a8,(longlong)iVar15,4);
          uVar24 = 0;
          local_7a0._Mypair._Myval2._Myfirst = (Triplet<double,int> *)0x0;
          local_7a0._Mypair._Myval2._Mylast = (Triplet<double,int> *)0x0;
          local_7a0._Mypair._Myval2._Myend = (Triplet<double,int> *)0x0;
          std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
          reserve(&local_7a0,(longlong)iVar15);
          local_7b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7b0.ArrayNum = 0;
          local_7b0.ArrayMax = 0;
          if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum(uVar29 & 0xffffffff);
          }
          if (0 < iVar15) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar15,&local_7b0.AllocatorInstance,0,&local_7b0.ArrayMax);
          }
          uVar27 = (param_1->VertexRefCounts).RefCounts.CurBlock;
          uVar36 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
          local_7e4 = 0;
          if (0 < (int)(uVar27 * 0x200 + uVar36)) {
            local_740 = 0;
            local_738 = 0;
            do {
              lVar33 = local_738;
              lVar31 = local_740;
              iVar15 = 0;
              uVar18 = (uint)uVar24;
              if (((-1 < (int)uVar18) && ((int)uVar18 < (int)(uVar27 * 0x200 + uVar36))) &&
                 ((ushort)(*(short *)(*(longlong *)
                                       ((param_1->VertexRefCounts).RefCounts.Blocks.
                                        AllocatorInstance.Data + (uVar24 >> 9) * 8) +
                                     (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                local_788 = ~uVar18 >> 0x1f;
                uVar27 = 0;
                if ((int)uVar18 < this_01->ArrayNum) {
                  uVar27 = local_788;
                }
                if (uVar27 == 0) {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar12) {
                    pcVar5 = (code *)swi(3);
                    uVar13 = (*pcVar5)();
                    return (bool)uVar13;
                  }
                  uVar24 = (ulonglong)local_7e4;
                }
                uVar18 = (uint)uVar24;
                if ((this_01->AllocatorInstance).Data[lVar33] != (FScriptContainerElement)0x0) {
                  uVar27 = 0;
                  if ((int)(uint)uVar24 < local_7c0.ArrayNum) {
                    uVar27 = local_788;
                  }
                  if ((uVar27 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    uVar13 = (*pcVar5)();
                    return (bool)uVar13;
                  }
                  local_6c0 = local_7c0.AllocatorInstance.Data + lVar31;
                  local_750 = local_7b0.ArrayNum;
                  iVar38 = local_7b0.ArrayNum;
                  do {
                    _Var23 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                              )local_7a0._Mypair._Myval2._Mylast;
                    uVar29 = 0xfffffffffffffff;
                    fVar2 = *(float *)local_6c0;
                    if (local_7a0._Mypair._Myval2._Mylast == local_7a0._Mypair._Myval2._Myend) {
                      lVar31 = (longlong)local_7a0._Mypair._Myval2._Mylast -
                               (longlong)local_7a0._Mypair._Myval2._Myfirst >> 4;
                      if (lVar31 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::
                        vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
                        ::_Xlength();
                      }
                      uVar24 = lVar31 + 1;
                      uVar22 = (longlong)local_7a0._Mypair._Myval2._Myend -
                               (longlong)local_7a0._Mypair._Myval2._Myfirst >> 4;
                      if (uVar22 <= 0xfffffffffffffff - (uVar22 >> 1)) {
                        uVar22 = (uVar22 >> 1) + uVar22;
                        uVar29 = uVar24;
                        if (uVar24 <= uVar22) {
                          uVar29 = uVar22;
                        }
                        if (0xfffffffffffffff < uVar29) {
                    /* WARNING: Subroutine does not return */
                          std::_Throw_bad_array_new_length();
                        }
                      }
                      _Dst = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                              )std::_Allocate<16,std::_Default_allocate_traits>(uVar29 * 0x10);
                      ((int *)((longlong)_Dst + 4))[lVar31 * 4] = iVar15;
                      ((Triplet<double,int> *)((longlong)_Dst + lVar31 * 0x10))->m_row = local_750;
                      ((double *)((longlong)_Dst + 8))[lVar31 * 2] = (double)fVar2;
                      if (_Var23 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                     )local_7a0._Mypair._Myval2._Mylast) {
                        _Size = (longlong)local_7a0._Mypair._Myval2._Mylast -
                                (longlong)local_7a0._Mypair._Myval2._Myfirst;
                        _Dst_00 = _Dst;
                        _Var23 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                  )local_7a0._Mypair._Myval2._Myfirst;
                      }
                      else {
                        memmove((void *)_Dst,local_7a0._Mypair._Myval2._Myfirst,
                                (longlong)_Var23 - (longlong)local_7a0._Mypair._Myval2._Myfirst);
                        _Dst_00 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                   )((Triplet<double,int> *)((longlong)_Dst + lVar31 * 0x10) + 1);
                        _Size = (longlong)local_7a0._Mypair._Myval2._Mylast - (longlong)_Var23;
                      }
                      memmove((void *)_Dst_00,(void *)_Var23,_Size);
                      if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                           )local_7a0._Mypair._Myval2._Myfirst !=
                          (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                           )0x0) {
                        uVar26 = (longlong)local_7a0._Mypair._Myval2._Myend -
                                 (longlong)local_7a0._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
                        _Var23 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                  )local_7a0._Mypair._Myval2._Myfirst;
                        if (0xfff < uVar26) {
                          _Var23 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                     *)((longlong)local_7a0._Mypair._Myval2._Myfirst + -8);
                          uVar26 = uVar26 + 0x27;
                          if (0x1f < ((longlong)local_7a0._Mypair._Myval2._Myfirst -
                                     (longlong)_Var23) - 8U) goto LAB_14c84886e;
                        }
                        ::operator_delete((void *)_Var23,uVar26);
                      }
                      local_7a0._Mypair._Myval2._Myend =
                           (Triplet<double,int> *)(uVar29 * 0x10 + (longlong)_Dst);
                      local_7a0._Mypair._Myval2._Mylast =
                           (Triplet<double,int> *)(uVar24 * 0x10 + (longlong)_Dst);
                      iVar38 = local_750;
                      local_7a0._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Dst;
                    }
                    else {
                      (local_7a0._Mypair._Myval2._Mylast)->m_row = iVar38;
                      *(int *)((longlong)local_7a0._Mypair._Myval2._Mylast + 4) = iVar15;
                      *(double *)((longlong)local_7a0._Mypair._Myval2._Mylast + 8) = (double)fVar2;
                      local_7a0._Mypair._Myval2._Mylast =
                           (Triplet<double,int> *)
                           ((longlong)local_7a0._Mypair._Myval2._Mylast + 0x10);
                    }
                    lVar31 = local_738;
                    local_6c0 = local_6c0 + 4;
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < 4);
                  uVar27 = 0;
                  if ((int)local_7e4 < (int)local_608._padding_) {
                    uVar27 = local_788;
                  }
                  if ((uVar27 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    uVar13 = (*pcVar5)();
                    return (bool)uVar13;
                  }
                  pFVar4 = (FScriptContainerElement *)(local_608._padding_ + lVar31 * 4);
                  if (((local_7b0.AllocatorInstance.Data <= pFVar4) &&
                      (pFVar4 < local_7b0.AllocatorInstance.Data + (longlong)local_7b0.ArrayMax * 4)
                      ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    uVar13 = (*pcVar5)();
                    return (bool)uVar13;
                  }
                  iVar15 = local_7b0.ArrayNum;
                  if (local_7b0.ArrayNum == local_7b0.ArrayMax) {
                    iVar15 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_7b0.AllocatorInstance,&local_7b0.ArrayMax);
                  }
                  local_7b0.ArrayNum = iVar15 + 1;
                  *(undefined4 *)(local_7b0.AllocatorInstance.Data + (longlong)iVar15 * 4) =
                       *(undefined4 *)pFVar4;
                  lVar33 = local_738;
                  lVar31 = local_740;
                  this_01 = local_5d0;
                  param_1 = local_6b0;
                  uVar18 = local_7e4;
                }
              }
              uVar27 = (param_1->VertexRefCounts).RefCounts.CurBlock;
              local_7e4 = uVar18 + 1;
              uVar24 = (ulonglong)local_7e4;
              uVar36 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
              local_738 = lVar33 + 1;
              local_740 = lVar31 + 0x10;
            } while ((int)local_7e4 < (int)(uVar27 * 0x200 + uVar36));
          }
          uVar29 = 0;
          local_5e0 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                       )local_7a0._Mypair._Myval2._Mylast;
          local_5c0 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                       )local_7a0._Mypair._Myval2._Myfirst;
          Eigen::internal::
          set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
                    (&local_5c0,&local_5e0,&local_3a8,(scalar_sum_op<double,double>)local_7f0);
          iVar15 = (int)local_608._padding_;
          FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler(&local_138,iVar15,iVar15);
          FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler(&local_1e8,iVar15,iVar15);
          this = local_780;
          if (local_780->bUseIntrinsicLaplacian == false) {
            MeshDeformation::ConstructFullCotangentLaplacian<double>
                      (param_1,&local_608,(TSparseMatrixAssembler<double> *)&local_138,Default,
                       NoArea);
            MeshDeformation::ConstructFullCotangentLaplacian<double>
                      (param_1,&local_608,(TSparseMatrixAssembler<double> *)&local_1e8,Default,
                       VoronoiArea);
          }
          else {
            MeshDeformation::ConstructFullIDTCotangentLaplacian<double>
                      (param_1,&local_608,(TSparseMatrixAssembler<double> *)&local_138,Default,
                       NoArea);
            MeshDeformation::ConstructFullIDTCotangentLaplacian<double>
                      (param_1,&local_608,(TSparseMatrixAssembler<double> *)&local_1e8,Default,
                       VoronoiArea);
          }
          Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_478);
          Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_308);
          FEigenSparseMatrixAssembler::ExtractResult(&local_138,&local_478);
          FEigenSparseMatrixAssembler::ExtractResult(&local_1e8,&local_308);
          local_428.m_lhs.m_lhs.m_rows.m_value = local_478.m_innerSize;
          local_428.m_lhs.m_lhs.m_cols.m_value = local_478.m_outerSize;
          local_428.m_lhs.m_rhs = &local_478;
          local_428.m_rhs._padding_._1_4_ = local_3c7;
          local_428.m_rhs._padding_._5_2_ = local_3c3;
          local_428.m_rhs._padding_._7_1_ = local_3c1;
          local_428.m_rhs.m_lhs = &local_478;
          local_428.m_rhs.m_rhs = &local_308;
          local_428.m_lhs.m_lhs.m_functor.m_other = __real_bff0000000000000;
          local_428._padding_._0_1_ = 0;
          local_428.m_lhs._padding_._0_1_ = 0;
          local_428.m_rhs._padding_._0_1_ = 0;
          local_4f8._padding_._0_1_ = 0;
          local_4f8.m_outerSize = 0;
          local_4f8.m_innerSize = 0;
          local_4f8.m_outerIndex = (int *)0x0;
          local_4f8.m_innerNonZeros = (int *)0x0;
          local_4f8.m_data.m_values = (double *)0x0;
          local_4f8.m_data.m_indices = (int *)0x0;
          local_4f8.m_data.m_size = 0;
          local_4f8.m_data.m_allocatedSize = 0;
          Eigen::internal::
          assign_sparse_to_sparse<Eigen::SparseMatrix<double,0,int>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::SparseMatrix<double,0,int>,2>_const_>_>
                    (&local_4f8,&local_428);
          Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_358);
          local_6d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_6d0.ArrayNum = 0;
          local_6d0.ArrayMax = 0;
          bVar12 = FQuadraticProgramming::SolveWithFixedConstraints
                             (&local_4f8,(Matrix<double,_1,1,0,_1,1> *)0x0,&local_7b0,&local_3a8,
                              &local_358,true,__real_3f1a36e2e0000000,&local_6d0);
          cVar39 = !bVar12;
          local_7eb = cVar39;
          if (!(bool)cVar39) {
            local_510[0].m_isRValue = false;
            local_508 = &local_358;
            local_5b8.m_innerSize = 0;
            local_5b8.m_outerIndex = (int *)0x0;
            local_5b8.m_innerNonZeros = (int *)0x0;
            local_5b8.m_data.m_values = (double *)0x0;
            local_5b8.m_data.m_indices = (int *)0x0;
            local_5b8.m_data.m_size = 0;
            local_5b8._padding_._0_1_ = 0;
            local_5b8.m_outerSize = 0;
            local_5b8.m_data.m_allocatedSize = 0;
            Eigen::SparseMatrix<double,0,int>::
            operator=<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_>_>(&local_5b8,local_510);
            uVar7 = _UNK_150689648;
            uVar6 = ___xmm_3f800000000000000000000000000000;
            local_6f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_6f0.ArrayNum = 0;
            local_6f0.ArrayMax = 0;
            if (0 < local_5b8.m_outerSize) {
              local_740 = 0;
              uVar24 = uVar29;
              do {
                piVar11 = local_5b8.m_data.m_indices;
                pdVar10 = local_5b8.m_data.m_values;
                local_768 = uVar6;
                uStack_760 = uVar7;
                lVar31 = (longlong)*(int *)((longlong)local_5b8.m_outerIndex + local_740);
                local_6e0 = 0;
                uStack_6d8 = 0;
                if (local_5b8.m_innerNonZeros == (int *)0x0) {
                  lVar33 = (longlong)local_5b8.m_outerIndex[uVar29 + 1];
                }
                else {
                  lVar33 = local_5b8.m_innerNonZeros[uVar29] + lVar31;
                }
                for (; lVar31 < lVar33; lVar31 = lVar31 + 1) {
                  lVar35 = (longlong)piVar11[lVar31];
                  dVar3 = pdVar10[lVar31];
                  if ((3 < (uint)piVar11[lVar31]) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                          ,0x310,L""), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    uVar13 = (*pcVar5)();
                    return (bool)uVar13;
                  }
                  piVar1 = (int *)((longlong)&local_6e0 + lVar35 * 4);
                  *piVar1 = *piVar1 + 1;
                  *(float *)((longlong)&local_768 + lVar35 * 4) =
                       (float)dVar3 + *(float *)((longlong)&local_768 + lVar35 * 4);
                }
                if (1 < (int)local_6e0) {
                  local_768._4_4_ = (float)((ulonglong)local_768 >> 0x20);
                  local_768 = CONCAT44(local_768._4_4_,(float)local_768 / (float)(int)local_6e0);
                }
                local_6e0._4_4_ = (int)((ulonglong)local_6e0 >> 0x20);
                if (1 < local_6e0._4_4_) {
                  local_768 = CONCAT44(local_768._4_4_ / (float)local_6e0._4_4_,(float)local_768);
                }
                if (1 < (int)uStack_6d8) {
                  uStack_760._4_4_ = (float)((ulonglong)uStack_760 >> 0x20);
                  uStack_760 = CONCAT44(uStack_760._4_4_,(float)uStack_760 / (float)(int)uStack_6d8)
                  ;
                }
                uStack_6d8._4_4_ = (int)((ulonglong)uStack_6d8 >> 0x20);
                if (1 < uStack_6d8._4_4_) {
                  uStack_760 = CONCAT44(uStack_760._4_4_ / (float)uStack_6d8._4_4_,(float)uStack_760
                                       );
                }
                uVar36 = (uint)uVar24;
                uVar27 = 0;
                if ((int)uVar36 < local_6d0.ArrayNum) {
                  uVar27 = ~uVar36 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  uVar13 = (*pcVar5)();
                  return (bool)uVar13;
                }
                uVar27 = *(uint *)(local_6d0.AllocatorInstance.Data + uVar29 * 4);
                uVar18 = 0;
                if ((int)uVar27 < (int)local_608._padding_) {
                  uVar18 = ~uVar27 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  uVar13 = (*pcVar5)();
                  return (bool)uVar13;
                }
                TDynamicMeshOverlay<float,4>::GetVertexElements
                          (local_730,*(int *)(local_608._padding_ + (longlong)(int)uVar27 * 4),
                           &local_6f0);
                iVar15 = local_6f0.ArrayNum;
                uVar24 = (ulonglong)local_6f0.ArrayNum;
                pFVar4 = local_6f0.AllocatorInstance.Data + uVar24 * 4;
                FVar32.Data = local_6f0.AllocatorInstance.Data;
                while( true ) {
                  if ((int)uVar24 != iVar15) {
                    local_7ec = 0;
                    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (&local_7ec);
                  }
                  if (FVar32.Data == pFVar4) break;
                  uVar27 = *(uint *)FVar32.Data;
                  uVar18 = uVar27 * 4;
                  *(float *)(*(longlong *)
                              ((local_730->Elements).Blocks.AllocatorInstance.Data +
                              (ulonglong)((uVar27 & 0x3fffffff) >> 7) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4) = (float)local_768;
                  *(float *)(*(longlong *)
                              ((local_730->Elements).Blocks.AllocatorInstance.Data +
                              (ulonglong)((uVar27 & 0x3fffffff) >> 7) * 8) +
                            (ulonglong)(uVar18 + 1 & 0x1ff) * 4) = local_768._4_4_;
                  *(float *)(*(longlong *)
                              ((local_730->Elements).Blocks.AllocatorInstance.Data +
                              (ulonglong)((uVar27 & 0x3fffffff) >> 7) * 8) +
                            (ulonglong)(uVar18 + 2 & 0x1ff) * 4) = (float)uStack_760;
                  FVar32.Data = FVar32.Data + 4;
                  *(float *)(*(longlong *)
                              ((local_730->Elements).Blocks.AllocatorInstance.Data +
                              (ulonglong)((uVar27 & 0x3fffffff) >> 7) * 8) +
                            (ulonglong)(uVar18 + 3 & 0x1ff) * 4) = uStack_760._4_4_;
                  uVar24 = local_6f0._8_8_ & 0xffffffff;
                }
                uVar24 = (ulonglong)(uVar36 + 1);
                uVar29 = uVar29 + 1;
                local_740 = local_740 + 4;
                this = local_780;
                cVar39 = local_7eb;
              } while ((int)(uVar36 + 1) < local_5b8.m_outerSize);
            }
            uVar29 = 0;
            `UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_3>::
            operator()(&local_568);
            pFVar9 = local_6b0;
            if ((0 < this->NumSmoothingIterations) && (0.0 < this->SmoothingStrength)) {
              local_7d0.Data = (FScriptContainerElement *)0x0;
              local_7c8._0_4_ = 0;
              local_7c8._4_4_ = 0;
              uVar27 = (local_6b0->VertexRefCounts).UsedCount - (int)local_778;
              if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
              }
              if (0 < (int)uVar27) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar27,&local_7d0,0,(int *)((longlong)&local_7c8 + 4));
              }
              uVar27 = (pFVar9->VertexRefCounts).RefCounts.CurBlock;
              uVar36 = (pFVar9->VertexRefCounts).RefCounts.CurBlockUsed;
              local_7e8 = 0;
              if (0 < (int)(uVar27 * 0x200 + uVar36)) {
                do {
                  uVar18 = (uint)uVar29;
                  if (((-1 < (int)uVar18) && ((int)uVar18 < (int)(uVar27 * 0x200 + uVar36))) &&
                     ((ushort)(*(short *)(*(longlong *)
                                           ((pFVar9->VertexRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data + (uVar29 >> 9) * 8) +
                                         (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                    uVar27 = 0;
                    if ((int)uVar18 < (this->MatchedVertices).ArrayNum) {
                      uVar27 = ~uVar18 >> 0x1f;
                    }
                    if ((uVar27 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar5 = (code *)swi(3);
                      uVar13 = (*pcVar5)();
                      return (bool)uVar13;
                    }
                    if ((this->MatchedVertices).AllocatorInstance.Data[(int)uVar18] ==
                        (FScriptContainerElement)0x0) {
                      if (((local_7d0.Data <= (FScriptContainerElement *)&local_7e8) &&
                          ((FScriptContainerElement *)&local_7e8 <
                           local_7d0.Data + (longlong)local_7c8._4_4_ * 4)) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar12)) {
                        pcVar5 = (code *)swi(3);
                        uVar13 = (*pcVar5)();
                        return (bool)uVar13;
                      }
                      if ((int)local_7c8 == local_7c8._4_4_) {
                        local_7c8._0_4_ =
                             Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_7d0,(int *)((longlong)&local_7c8 + 4));
                      }
                      lVar31 = (longlong)(int)local_7c8;
                      local_7c8._0_4_ = (int)local_7c8 + 1;
                      *(uint *)(local_7d0.Data + lVar31 * 4) = local_7e8;
                    }
                  }
                  uVar27 = (pFVar9->VertexRefCounts).RefCounts.CurBlock;
                  local_7e8 = local_7e8 + 1;
                  uVar36 = (pFVar9->VertexRefCounts).RefCounts.CurBlockUsed;
                  uVar29 = (ulonglong)local_7e8;
                } while ((int)local_7e8 < (int)(uVar27 * 0x200 + uVar36));
              }
              local_2b8._0_8_ = &___7FSmoothDynamicMeshAttributes_Geometry_UE__6B_;
              local_2b8._44_4_ = this->NumSmoothingIterations;
              local_240._40_8_ = ___xmm_00000000ffffffff0000008000000000;
              local_240._48_8_ = _UNK_150631d98;
              local_2b8._24_8_ = local_7d0.Data;
              local_1f0 = __real_3ff0000000000000;
              local_2b8._32_4_ = (int)local_7c8;
              local_2b8._48_8_ = (undefined8)this->SmoothingStrength;
              local_2b8._36_4_ = local_7c8._4_4_;
              local_2b8._8_8_ = (FProgressCancel *)0x0;
              local_2b8[0x10] = true;
              local_2b8[0x28] = CotanWeights;
              local_2b8[0x29] = SetAllToSmoothed;
              local_2b8._56_8_ = 0.0;
              local_2b8._64_8_ = pFVar9;
              local_2b8._72_8_ = (FScriptContainerElement *)0x0;
              local_2b8._80_4_ = 0;
              local_2b8._84_4_ = 0;
              local_2b8._88_8_ = (FScriptContainerElement *)0x0;
              local_2b8._96_4_ = 0;
              local_2b8._100_4_ = 0;
              local_2b8._104_8_ = (FScriptContainerElement *)0x0;
              local_2b8._112_4_ = 0;
              local_2b8._116_4_ = 0;
              local_240._0_8_ = 0;
              local_240._8_8_ = 0;
              local_240._32_8_ = 0;
              local_200 = (void *)0x0;
              local_1f8 = 0;
              local_7d0.Data = (FScriptContainerElement *)0x0;
              local_7c8 = 0;
              local_800.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_800.ArrayNum = 0;
              local_800.ArrayMax = 0;
              local_808[0] = (FScriptContainerElement)0x1;
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,4,&local_800.AllocatorInstance,0,&local_800.ArrayMax);
              if (((local_800.AllocatorInstance.Data <= local_808) &&
                  (local_808 < local_800.AllocatorInstance.Data + local_800.ArrayMax)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar5 = (code *)swi(3);
                uVar13 = (*pcVar5)();
                return (bool)uVar13;
              }
              iVar15 = local_800.ArrayNum;
              if (local_800.ArrayNum == local_800.ArrayMax) {
                iVar15 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x101,&local_800.AllocatorInstance,&local_800.ArrayMax);
              }
              iVar38 = iVar15 + 1;
              local_800.AllocatorInstance.Data[iVar15] = local_808[0];
              local_800.ArrayNum = iVar38;
              if (((local_800.AllocatorInstance.Data <= local_808) &&
                  (local_808 < local_800.AllocatorInstance.Data + local_800.ArrayMax)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar5 = (code *)swi(3);
                uVar13 = (*pcVar5)();
                return (bool)uVar13;
              }
              if (local_800.ArrayNum == local_800.ArrayMax) {
                local_800.ArrayNum =
                     Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_800.AllocatorInstance,&local_800.ArrayMax);
              }
              iVar15 = local_800.ArrayNum + 1;
              local_800.AllocatorInstance.Data[local_800.ArrayNum] = local_808[0];
              local_800.ArrayNum = iVar15;
              if (((local_800.AllocatorInstance.Data <= local_808) &&
                  (local_808 < local_800.AllocatorInstance.Data + local_800.ArrayMax)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar5 = (code *)swi(3);
                uVar13 = (*pcVar5)();
                return (bool)uVar13;
              }
              if (local_800.ArrayNum == local_800.ArrayMax) {
                local_800.ArrayNum =
                     Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_800.AllocatorInstance,&local_800.ArrayMax);
              }
              iVar15 = local_800.ArrayNum + 1;
              local_800.AllocatorInstance.Data[local_800.ArrayNum] = local_808[0];
              local_800.ArrayNum = iVar15;
              if (((local_800.AllocatorInstance.Data <= local_808) &&
                  (local_808 < local_800.AllocatorInstance.Data + local_800.ArrayMax)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar5 = (code *)swi(3);
                uVar13 = (*pcVar5)();
                return (bool)uVar13;
              }
              iVar15 = local_800.ArrayNum;
              if (local_800.ArrayNum == local_800.ArrayMax) {
                iVar15 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x101,&local_800.AllocatorInstance,&local_800.ArrayMax);
              }
              local_800.ArrayNum = iVar15 + 1;
              local_800.AllocatorInstance.Data[iVar15] = local_808[0];
              bVar12 = FSmoothDynamicMeshAttributes::SmoothOverlay<float,4>
                                 ((FSmoothDynamicMeshAttributes *)local_2b8,local_748,&local_800);
              if ((!bVar12) &&
                 (bVar12 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_3781658402787163639>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferDynamicMeshAttributes.cpp"
                                      ,0x209,"BlurOp.SmoothOverlay(TargetColors, ValuesToSmooth)"),
                 bVar12)) {
                pcVar5 = (code *)swi(3);
                uVar13 = (*pcVar5)();
                return (bool)uVar13;
              }
              if (local_800.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_800.AllocatorInstance.Data);
              }
              local_1f8 = 0;
              if (local_200 != (void *)0x0) {
                FMemory::Free(local_200);
              }
              TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_240);
              if ((FScriptContainerElement *)local_2b8._104_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_2b8._104_8_);
              }
              if ((FScriptContainerElement *)local_2b8._88_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_2b8._88_8_);
              }
              if ((FScriptContainerElement *)local_2b8._72_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_2b8._72_8_);
              }
              if ((FScriptContainerElement *)local_2b8._24_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_2b8._24_8_);
              }
              if (local_7d0.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7d0.Data);
              }
            }
            if (local_6f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6f0.AllocatorInstance.Data);
            }
            FMemory_Free(local_5b8.m_outerIndex);
            FMemory_Free(local_5b8.m_innerNonZeros);
            operator_delete__(local_5b8.m_data.m_values);
            operator_delete__(local_5b8.m_data.m_indices);
          }
          if (local_6d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6d0.AllocatorInstance.Data);
          }
          FMemory_Free(local_358.m_outerIndex);
          FMemory_Free(local_358.m_innerNonZeros);
          operator_delete__(local_358.m_data.m_values);
          operator_delete__(local_358.m_data.m_indices);
          FMemory_Free(local_4f8.m_outerIndex);
          FMemory_Free(local_4f8.m_innerNonZeros);
          operator_delete__(local_4f8.m_data.m_values);
          operator_delete__(local_4f8.m_data.m_indices);
          FMemory_Free(local_308.m_outerIndex);
          FMemory_Free(local_308.m_innerNonZeros);
          operator_delete__(local_308.m_data.m_values);
          operator_delete__(local_308.m_data.m_indices);
          FMemory_Free(local_478.m_outerIndex);
          FMemory_Free(local_478.m_innerNonZeros);
          operator_delete__(local_478.m_data.m_values);
          operator_delete__(local_478.m_data.m_indices);
          std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
          ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
                    (&local_1e8.EntryTriplets);
          if (local_1e8.Matrix.Ptr != (SparseMatrix<double,0,int> *)0x0) {
            FMemory_Free((local_1e8.Matrix.Ptr)->m_outerIndex);
            FMemory_Free((local_1e8.Matrix.Ptr)->m_innerNonZeros);
            operator_delete__(((local_1e8.Matrix.Ptr)->m_data).m_values);
            operator_delete__(((local_1e8.Matrix.Ptr)->m_data).m_indices);
            ::operator_delete(local_1e8.Matrix.Ptr,0x48);
          }
          if (local_1e8._padding_ != 0) {
            plVar25 = &local_1e8._padding_;
            if ((longlong *)local_1e8._padding_ != (longlong *)0x0) {
              plVar25 = (longlong *)local_1e8._padding_;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          if (local_1e8._padding_ != 0) {
            plVar25 = &local_1e8._padding_;
            if ((longlong *)local_1e8._padding_ != (longlong *)0x0) {
              plVar25 = (longlong *)local_1e8._padding_;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          if (local_1e8._padding_ != 0) {
            plVar25 = &local_1e8._padding_;
            if ((longlong *)local_1e8._padding_ != (longlong *)0x0) {
              plVar25 = (longlong *)local_1e8._padding_;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
          ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
                    (&local_138.EntryTriplets);
          if (local_138.Matrix.Ptr != (SparseMatrix<double,0,int> *)0x0) {
            FMemory_Free((local_138.Matrix.Ptr)->m_outerIndex);
            FMemory_Free((local_138.Matrix.Ptr)->m_innerNonZeros);
            operator_delete__(((local_138.Matrix.Ptr)->m_data).m_values);
            operator_delete__(((local_138.Matrix.Ptr)->m_data).m_indices);
            ::operator_delete(local_138.Matrix.Ptr,0x48);
          }
          if (local_138._padding_ != 0) {
            plVar25 = &local_138._padding_;
            if ((longlong *)local_138._padding_ != (longlong *)0x0) {
              plVar25 = (longlong *)local_138._padding_;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          if (local_138._padding_ != 0) {
            plVar25 = &local_138._padding_;
            if ((longlong *)local_138._padding_ != (longlong *)0x0) {
              plVar25 = (longlong *)local_138._padding_;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          if (local_138._padding_ != 0) {
            plVar25 = &local_138._padding_;
            if ((longlong *)local_138._padding_ != (longlong *)0x0) {
              plVar25 = (longlong *)local_138._padding_;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          if (local_7b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7b0.AllocatorInstance.Data);
          }
          if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_7a0._Mypair._Myval2._Myfirst !=
              (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )0x0) {
            uVar26 = (longlong)local_7a0._Mypair._Myval2._Myend -
                     (longlong)local_7a0._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
            _Var23 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_7a0._Mypair._Myval2._Myfirst;
            if (0xfff < uVar26) {
              _Var23 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         *)((longlong)local_7a0._Mypair._Myval2._Myfirst + -8);
              uVar26 = uVar26 + 0x27;
              if (0x1f < ((longlong)local_7a0._Mypair._Myval2._Myfirst - (longlong)_Var23) - 8U) {
LAB_14c84886e:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)_Var23,uVar26);
            local_7a0._Mypair._Myval2._Myend = (Triplet<double,int> *)0x0;
            local_7a0._Mypair._Myval2._Myfirst = (Triplet<double,int> *)0x0;
            local_7a0._Mypair._Myval2._Mylast = (Triplet<double,int> *)0x0;
          }
          FMemory_Free(local_3a8.m_outerIndex);
          FMemory_Free(local_3a8.m_innerNonZeros);
          operator_delete__(local_3a8.m_data.m_values);
          operator_delete__(local_3a8.m_data.m_indices);
          if ((void *)local_608._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_608._padding_);
          }
          if ((void *)local_608._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_608._padding_);
          }
          if (local_568.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_568.AllocatorInstance.Data);
          }
          DestructItems<TransferValuesLocals::FTaskContext,int>
                    ((FTaskContext *)local_7e0.Data,(int)local_7d8);
          if (local_7e0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7e0.Data);
          }
          TDynamicVector<int,512>::Empty(&local_6a8.ElementTriangles,0);
          if (local_6a8.ElementTriangles.Blocks.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6a8.ElementTriangles.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<int,512>::Empty(&local_6a8.ParentVertices,0);
          if (local_6a8.ParentVertices.Blocks.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6a8.ParentVertices.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<float,512>::Empty(&local_6a8.Elements,0);
          if (local_6a8.Elements.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6a8.Elements.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<int,512>::Empty(&local_6a8.ElementsRefCounts.FreeIndices,0);
          if (local_6a8.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6a8.ElementsRefCounts.FreeIndices.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<unsigned_short,512>::Empty(&local_6a8.ElementsRefCounts.RefCounts,0);
          if (local_6a8.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6a8.ElementsRefCounts.RefCounts.Blocks.AllocatorInstance.Data);
          }
          if (local_7c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7c0.AllocatorInstance.Data);
          }
          goto LAB_14c848a23;
        }
        `UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_3>::
        operator()(&local_568);
        bVar12 = true;
        if (local_568.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.AllocatorInstance.Data);
        }
      }
      else {
LAB_14c8489c3:
        bVar12 = false;
      }
      DestructItems<TransferValuesLocals::FTaskContext,int>
                ((FTaskContext *)local_7e0.Data,(int)local_7d8);
      if (local_7e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e0.Data);
      }
      TDynamicMeshOverlay<float,4>::~TDynamicMeshOverlay<float,4>(&local_6a8);
      if (local_7c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c0.AllocatorInstance.Data);
      }
      goto LAB_14c848a3c;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferDynamicMeshAttributes.cpp"
                        ,0x20f,L"");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
  }
LAB_14c848a23:
  cVar14 = (**(code **)(this->_padding_ + 0x18))(this);
  if ((cVar14 == '\0') && (cVar39 == '\0')) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
LAB_14c848a3c:
  TVar8.Ptr = local_758.Ptr;
  if ((FDynamicMeshAttributeSet *)local_758.Ptr != (FDynamicMeshAttributeSet *)0x0) {
    pFVar4 = ((local_758.Ptr)->Normals).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(TVar8.Ptr,0x18);
  }
  return bVar12;
}

// TransferUsingClosestPoint @ 14c8499e0

int __thiscall
UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint
          (FTransferVertexColorAttribute *this,FDynamicMesh3 *param_1,
          TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  short sVar2;
  longlong lVar3;
  code *pcVar4;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  FDynamicMeshAttributeSet *pFVar11;
  atomic<unsigned_char> *paVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  FDynamicMeshAttributeSet *pFVar16;
  FScriptContainerElement *pFVar17;
  FDynamicMeshAttributeSet *pFVar18;
  uint uVar19;
  EParallelForFlags EVar20;
  <lambda_1> local_res8 [8];
  bool local_res20 [8];
  ForAnyElementType local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e8;
  FTransferVertexColorAttribute *local_d8;
  FDynamicMesh3 *pFStack_d0;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **local_c8;
  TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_> *pTStack_c0;
  <lambda_1> local_b8;
  undefined7 uStack_b7;
  code *local_b0;
  FTransferVertexColorAttribute **local_a8;
  TArrayView<TransferValuesLocals::FTaskContext,int> local_a0;
  FTransferVertexColorAttribute *local_90;
  FDynamicMesh3 *local_88;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **local_80;
  TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_> *local_78;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_70;
  <lambda_2> local_68;
  
  if (this->TransferMethod != ClosestPointOnSurface) {
    pcVar10 = "TransferMethod == ETransferMethod::ClosestPointOnSurface";
    iVar7 = 0x283;
    paVar12 = &bGEnsureHasExecuted<_3781658402787163517>;
LAB_14c849a4c:
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (paVar12,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferDynamicMeshAttributes.cpp"
                       ,iVar7,pcVar10);
    if (!bVar6) {
      return 0;
    }
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  pFVar16 = (param_1->AttributeSet).Ptr;
  pFVar18 = (FDynamicMeshAttributeSet *)0x0;
  iVar7 = 0;
  pFVar11 = pFVar18;
  if (pFVar16 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar16;
  }
  local_f0 = (pFVar11->ColorLayer).Ptr;
  if (local_f0 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    pcVar10 = "MeshAttributes->HasPrimaryColors()";
    iVar7 = 0x289;
    paVar12 = &bGEnsureHasExecuted<_3781658402787163511>;
    goto LAB_14c849a4c;
  }
  if (this->bHardEdges == false) {
    iVar7 = (this->TargetVerticesSubset).ArrayNum;
    local_res8[0] = (<lambda_1>)(iVar7 != 0);
    if (iVar7 == 0) {
      iVar7 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    }
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100 = 0;
    local_res20[0] = false;
    TArray<bool,TSizedDefaultAllocator<32>_>::Init(&this->MatchedVertices,local_res20,iVar7);
    local_c8 = &local_f0;
    local_b8 = local_res8[0];
    local_d8 = this;
    pFStack_d0 = param_1;
    pTStack_c0 = param_2;
    if (0 < iVar7) {
      EVar20 = (EParallelForFlags)(this->bUseParallel == false);
      iVar14 = ParallelForImpl::GetNumberOfThreadTasks(iVar7,1,EVar20);
      if (local_100 < 0) {
        DestructItems<TransferValuesLocals::FTaskContext,int>
                  ((FTaskContext *)local_108.Data,(int)local_100);
        if (local_100._4_4_ != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_108,0,(int *)((longlong)&local_100 + 4));
        }
      }
      else {
        DestructItems<TransferValuesLocals::FTaskContext,int>
                  ((FTaskContext *)local_108.Data,(int)local_100);
      }
      iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar14,&local_108,(int *)&local_100,
                         (int *)((longlong)&local_100 + 4));
      DefaultConstructItems<TransferValuesLocals::FTaskContext,int>
                (local_108.Data + (longlong)iVar9 * 0x10,iVar14);
      local_a0.ArrayNum = (int)local_100;
      local_a0.DataPtr = (FTaskContext *)local_108.Data;
      if (((int)local_100 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      local_68.__this = local_d8;
      local_68.InOutTargetMesh = pFStack_d0;
      local_68._33_7_ = uStack_b7;
      local_68.bUseSubset = (bool)local_b8;
      local_68.TargetColors = local_c8;
      local_68.InTargetMeshNormals = pTStack_c0;
      ParallelForImpl::
      ParallelForInternal<_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint_::__l2::<lambda_2>,_ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint_::__l2::<lambda_2>_>_::__l5::<lambda_1>,TransferValuesLocals::FTaskContext>
                (L"ParallelFor Task",iVar7,1,&local_68,local_res8[0],EVar20,&local_a0);
    }
    pFVar17 = (this->MatchedVertices).AllocatorInstance.Data;
    iVar7 = (this->MatchedVertices).ArrayNum;
    pFVar1 = pFVar17 + iVar7;
    while( true ) {
      if ((this->MatchedVertices).ArrayNum != iVar7) {
        `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f8);
      }
      iVar14 = (int)pFVar18;
      if (pFVar17 == pFVar1) break;
      if (*pFVar17 != (FScriptContainerElement)0x0) {
        pFVar18 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar14 + 1);
      }
      pFVar17 = pFVar17 + 1;
    }
    DestructItems<TransferValuesLocals::FTaskContext,int>
              ((FTaskContext *)local_108.Data,(int)local_100);
    if (local_108.Data == (FScriptContainerElement *)0x0) {
      return iVar14;
    }
    FMemory::Free(local_108.Data);
    return iVar14;
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  TransferValuesLocals::GetBiasedElementPositions(param_1,this->BiasRatio,&local_e8);
  local_res8[0] = (<lambda_1>)0x0;
  iVar14 = *(int *)&local_f0->field_0x8 * 0x200 + *(int *)&local_f0->field_0xc;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&this->MatchedVertices,(bool *)local_res8,iVar14);
  local_80 = &local_f0;
  local_70 = &local_e8;
  local_a8 = &local_90;
  local_b0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::__l11::<lambda_1>,void,int>
             ::Call;
  local_90 = this;
  local_88 = param_1;
  local_78 = param_2;
  ParallelFor(iVar14,(TFunctionRef<void___cdecl(int)> *)&local_b0,
              (uint)(this->bUseParallel == false));
  pTVar5 = local_f0;
  uVar19 = *(int *)&local_f0->field_0x8 * 0x200 + *(int *)&local_f0->field_0xc;
  pFVar16 = pFVar18;
  if ((uVar19 != 0) &&
     (pFVar16 = (FDynamicMeshAttributeSet *)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)&local_f0->field_0x10 - 1U))) {
    pFVar16 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar15 = 1;
    if ((int)uVar19 < 2) goto joined_r0x00014c849b99;
    do {
      sVar2 = *(short *)((*(undefined8 **)&local_f0->field_0x10)[(ulonglong)pFVar16 >> 9] +
                        (ulonglong)((uint)pFVar16 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar15 = (uint)pFVar16 + 1;
      pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar19);
  }
  uVar15 = (uint)pFVar16;
joined_r0x00014c849b99:
  do {
    if (uVar15 == uVar19) {
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      return iVar7;
    }
    while( true ) {
      uVar15 = (uint)pFVar16;
      uVar8 = 0;
      if ((int)uVar15 < (this->MatchedVertices).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if ((this->MatchedVertices).AllocatorInstance.Data[(int)uVar15] !=
          (FScriptContainerElement)0x0) {
        pFVar18 = (FDynamicMeshAttributeSet *)(ulonglong)((int)pFVar18 + 1);
      }
      iVar7 = (int)pFVar18;
      uVar15 = uVar15 + 1;
      pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
      if ((int)uVar19 <= (int)uVar15) break;
      while( true ) {
        uVar13 = (ulonglong)((uint)pFVar16 & 0x1ff);
        lVar3 = *(longlong *)(*(longlong *)&pTVar5->field_0x10 + ((ulonglong)pFVar16 >> 9) * 8);
        if ((*(short *)(lVar3 + uVar13 * 2) != 0) && (*(short *)(lVar3 + uVar13 * 2) != -1)) break;
        uVar15 = (uint)pFVar16 + 1;
        pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
        if ((int)uVar19 <= (int)uVar15) goto joined_r0x00014c849b99;
      }
    }
  } while( true );
}

// Validate @ 14c851320

EOperationValidationResult __thiscall
UE::Geometry::FTransferVertexColorAttribute::Validate(FTransferVertexColorAttribute *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  
  if ((this->SourceMesh != (FDynamicMesh3 *)0x0) &&
     (((this->SourceBVH != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0 ||
       ((this->InternalSourceBVH).Ptr != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0)) &&
      (pFVar1 = (this->SourceMesh->AttributeSet).Ptr, pFVar1 != (FDynamicMeshAttributeSet *)0x0))))
  {
    return (EOperationValidationResult)
           ((pFVar1->ColorLayer).Ptr ==
           (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0);
  }
  return Failed_UnknownReason;
}

