// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 44

// FDynamicMeshUVEditor @ 14c7b2310

FDynamicMeshUVEditor * __thiscall
UE::Geometry::FDynamicMeshUVEditor::FDynamicMeshUVEditor
          (FDynamicMeshUVEditor *this,FDynamicMesh3 *param_1,int param_2,bool param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FDynamicMeshUVEditor *pFVar6;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar7;
  FDynamicMeshAttributeSet *pFVar8;
  
  this->UVOverlay = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
  this->Mesh = param_1;
  this->UVOverlayIndex = param_2;
  pFVar1 = (param_1->AttributeSet).Ptr;
  if ((pFVar1 != (FDynamicMeshAttributeSet *)0x0) &&
     (iVar4 = (**(code **)(pFVar1->_padding_ + 0xa8))(), param_2 < iVar4)) {
    iVar4 = this->UVOverlayIndex;
    pFVar1 = (this->Mesh->AttributeSet).Ptr;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar8 = pFVar1;
    }
    if ((iVar4 < (pFVar8->UVLayers).Array.ArrayNum) && (-1 < iVar4)) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FDynamicMeshUVEditor *)(*pcVar2)();
        return pFVar6;
      }
      pTVar7 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                ((pFVar8->UVLayers).Array.AllocatorInstance.Data + (longlong)iVar4 * 8);
    }
    else {
      pTVar7 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
    }
    this->UVOverlay = pTVar7;
  }
  if ((this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) &&
     (param_3)) {
    iVar4 = this->UVOverlayIndex;
    if ((7 < iVar4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LayerIndex < FDynamicMeshUVEditorLocals::MAX_STATIC_TEXCOORDS",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                           ,0x4a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDynamicMeshUVEditor *)(*pcVar2)();
      return pFVar6;
    }
    if ((this->Mesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
      FDynamicMesh3::EnableAttributes(this->Mesh);
    }
    iVar5 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xa8))();
    if (iVar5 <= iVar4) {
      pFVar1 = (this->Mesh->AttributeSet).Ptr;
      (**(code **)(pFVar1->_padding_ + 0xb0))(pFVar1,iVar4 + 1);
    }
    iVar4 = this->UVOverlayIndex;
    pFVar1 = (this->Mesh->AttributeSet).Ptr;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar8 = pFVar1;
    }
    if ((iVar4 < (pFVar8->UVLayers).Array.ArrayNum) && (-1 < iVar4)) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FDynamicMeshUVEditor *)(*pcVar2)();
        return pFVar6;
      }
      pTVar7 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                ((pFVar8->UVLayers).Array.AllocatorInstance.Data + (longlong)iVar4 * 8);
      this->UVOverlay = pTVar7;
      if (pTVar7 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
        return this;
      }
    }
    else {
      this->UVOverlay = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UVOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x2e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDynamicMeshUVEditor *)(*pcVar2)();
      return pFVar6;
    }
  }
  return this;
}

// FDynamicMeshUVEditor @ 14c7b2500

FDynamicMeshUVEditor * __thiscall
UE::Geometry::FDynamicMeshUVEditor::FDynamicMeshUVEditor
          (FDynamicMeshUVEditor *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDynamicMeshUVEditor *pFVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  longlong lVar9;
  
  this->Mesh = param_1;
  this->UVOverlay = param_2;
  this->UVOverlayIndex = -1;
  if ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    lVar9 = 0;
    for (iVar7 = 0; iVar4 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xa8))(),
        iVar7 < iVar4; iVar7 = iVar7 + 1) {
      pFVar1 = (this->Mesh->AttributeSet).Ptr;
      pFVar8 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar8 = pFVar1;
      }
      if ((iVar7 < (pFVar8->UVLayers).Array.ArrayNum) && (-1 < iVar7)) {
        if ((iVar7 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FDynamicMeshUVEditor *)(*pcVar2)();
          return pFVar5;
        }
        pTVar6 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                  ((pFVar8->UVLayers).Array.AllocatorInstance.Data + lVar9);
      }
      else {
        pTVar6 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
      }
      if (pTVar6 == this->UVOverlay) {
        this->UVOverlayIndex = iVar7;
        break;
      }
      lVar9 = lVar9 + 8;
    }
  }
  if ((this->UVOverlayIndex == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UVOverlayIndex != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDynamicMeshUVEditor *)(*pcVar2)();
    return pFVar5;
  }
  if ((*(FDynamicMesh3 **)this->UVOverlay != this->Mesh) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2321708304872505276>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                         ,0x44,"UVOverlay->GetParentMesh() == Mesh"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDynamicMeshUVEditor *)(*pcVar2)();
    return pFVar5;
  }
  return this;
}

// operator() @ 14c7c2370

TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_> * __thiscall
`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromCylinderProjection'::__l2::<lambda_1>::
operator()(void *this,
          TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_> *__return_storage_ptr__,
          int param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar4 = **(longlong **)this;
  uVar11 = (ulonglong)(param_1 & 0x1ff);
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar3 = *(uint *)(lVar5 + uVar11 * 0xc);
  uVar12 = (ulonglong)(uVar3 & 0x1ff);
  lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  pdVar1 = (double *)(lVar6 + uVar12 * 0x18);
  local_b8 = *pdVar1;
  dStack_b0 = pdVar1[1];
  local_a8 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18);
  uVar3 = *(uint *)(lVar5 + 4 + uVar11 * 0xc);
  uVar12 = (ulonglong)(uVar3 & 0x1ff);
  lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  pdVar1 = (double *)(lVar6 + uVar12 * 0x18);
  local_a0 = *pdVar1;
  dStack_98 = pdVar1[1];
  local_90 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18);
  uVar3 = *(uint *)(lVar5 + 8 + uVar11 * 0xc);
  uVar11 = (ulonglong)(uVar3 & 0x1ff);
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  puVar2 = (undefined8 *)(lVar4 + uVar11 * 0x18);
  local_70 = *puVar2;
  uStack_68 = puVar2[1];
  local_60 = *(undefined8 *)(lVar4 + 0x10 + uVar11 * 0x18);
  (*(code *)**(undefined8 **)((longlong)this + 8))
            (&local_88,(*(undefined8 **)((longlong)this + 8))[1],&local_b8);
  local_b8 = local_88;
  dStack_b0 = dStack_80;
  local_a8 = local_78;
  (*(code *)**(undefined8 **)((longlong)this + 8))
            (&local_88,(*(undefined8 **)((longlong)this + 8))[1],&local_a0);
  local_a0 = local_88;
  dStack_98 = dStack_80;
  local_90 = local_78;
  (*(code *)**(undefined8 **)((longlong)this + 8))
            (&local_88,(*(undefined8 **)((longlong)this + 8))[1],&local_70);
  dVar10 = __real_3fd5555555555555;
  dVar9 = (dStack_80 - dStack_b0) * (local_90 - local_a8) -
          (local_78 - local_a8) * (dStack_98 - dStack_b0);
  dVar16 = 0.0;
  dVar7 = (local_78 - local_a8) * (local_a0 - local_b8) -
          (local_88 - local_b8) * (local_90 - local_a8);
  auVar13._0_8_ = dVar9 * dVar9;
  auVar13._8_8_ = 0;
  dVar8 = (local_88 - local_b8) * (dStack_98 - dStack_b0) -
          (dStack_80 - dStack_b0) * (local_a0 - local_b8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar7 * dVar7 + auVar13._0_8_ + dVar8 * dVar8;
  auVar14 = sqrtpd(auVar13,auVar14);
  if (auVar14._0_8_ <= 0.0) {
    dVar7 = 0.0;
    dVar15 = 0.0;
  }
  else {
    dVar15 = __real_3ff0000000000000 / auVar14._0_8_;
    dVar16 = dVar15 * dVar8;
    dVar7 = dVar15 * dVar7;
    dVar15 = dVar15 * dVar9;
  }
  *(double *)__return_storage_ptr__ = dVar15;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar7;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar16;
  *(double *)&__return_storage_ptr__->field_0x18 = (local_a0 + local_b8 + local_88) * dVar10;
  *(double *)&__return_storage_ptr__->field_0x20 = (dStack_98 + dStack_b0 + dStack_80) * dVar10;
  *(double *)&__return_storage_ptr__->field_0x28 = (local_90 + local_a8 + local_78) * dVar10;
  return __return_storage_ptr__;
}

// operator() @ 14c7ccc10

void __thiscall
`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  TVector<double>_u_0 local_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  TVector<double>_u_0 local_b8;
  TVector<double> local_a0;
  TVector<double> local_88;
  TVector<double> local_70 [2];
  
  plVar3 = *(longlong **)this;
  lVar15 = (longlong)param_1;
  uVar16 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar10 = uVar16;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x10);
  uVar10 = *(uint *)(*plVar3 + lVar15 * 4);
  lVar5 = *(longlong *)*puVar4;
  uVar14 = (ulonglong)(uVar10 & 0x1ff);
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + (ulonglong)(uVar10 >> 9) * 8);
  uVar11 = *(uint *)(lVar6 + uVar14 * 0xc);
  uVar13 = (ulonglong)(uVar11 & 0x1ff);
  lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
  puVar1 = (undefined8 *)(lVar7 + uVar13 * 0x18);
  local_d0 = *puVar1;
  uStack_c8 = puVar1[1];
  local_c0 = *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18);
  uVar11 = *(uint *)(lVar6 + 4 + uVar14 * 0xc);
  uVar13 = (ulonglong)(uVar11 & 0x1ff);
  lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
  puVar1 = (undefined8 *)(lVar7 + uVar13 * 0x18);
  local_e8 = *puVar1;
  uStack_e0 = puVar1[1];
  local_d8 = *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18);
  uVar11 = *(uint *)(lVar6 + 8 + uVar14 * 0xc);
  uVar14 = (ulonglong)(uVar11 & 0x1ff);
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
  puVar1 = (undefined8 *)(lVar5 + uVar14 * 0x18);
  local_100 = *puVar1;
  uStack_f8 = puVar1[1];
  local_f0 = *(undefined8 *)(lVar5 + 0x10 + uVar14 * 0x18);
  (**(code **)puVar4[1])(&local_a0,((undefined8 *)puVar4[1])[1],&local_100);
  (**(code **)puVar4[1])(&local_88,((undefined8 *)puVar4[1])[1],&local_e8);
  (**(code **)puVar4[1])(local_70,((undefined8 *)puVar4[1])[1],&local_d0);
  UE::Geometry::VectorUtil::Normal<double>
            ((TVector<double> *)&local_b8._s_0,local_70,&local_88,&local_a0);
  plVar3 = *(longlong **)((longlong)this + 8);
  uVar11 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar11 = uVar16;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = *plVar3;
  pdVar2 = (double *)(lVar5 + lVar15 * 0x18);
  *pdVar2 = local_b8._s_0.X;
  pdVar2[1] = local_b8._s_0.Y;
  *(double *)(lVar5 + 0x10 + lVar15 * 0x18) = local_b8._s_0.Z;
  lVar5 = *(longlong *)((longlong)this + 0x18);
  plVar3 = *(longlong **)((longlong)this + 8);
  uVar11 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar11 = uVar16;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(lVar5 + 0x18),(TVector<double> *)&local_118._s_0,
             (TVector<double> *)(*plVar3 + lVar15 * 0x18));
  pdVar2 = *(double **)((longlong)this + 0x20);
  local_118._s_0.X = local_118._s_0.X * *pdVar2;
  local_118._s_0.Y = local_118._s_0.Y * pdVar2[1];
  local_118._s_0.Z = local_118._s_0.Z * pdVar2[2];
  dVar19 = (double)CONCAT44((uint)((ulonglong)local_118._s_0.X >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_118._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                           );
  dVar18 = (double)CONCAT44((uint)((ulonglong)local_118._s_0.Y >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_118._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                           );
  dVar17 = (double)CONCAT44((uint)((ulonglong)local_118._s_0.Z >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_118._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                           );
  if (dVar19 <= dVar18) {
    uVar14 = (ulonglong)((dVar18 <= dVar17) + 1);
  }
  else {
    uVar14 = 2;
    if (dVar17 < dVar19) {
      uVar14 = 0;
    }
  }
  dVar17 = *(double *)((longlong)&local_118 + uVar14 * 8);
  if (dVar17 <= 0.0) {
    iVar12 = (0.0 <= dVar17) - 1;
  }
  else {
    iVar12 = 1;
  }
  plVar3 = *(longlong **)((longlong)this + 0x28);
  uVar13 = (ulonglong)((int)uVar14 + 3);
  if ((double)iVar12 <= 0.0) {
    uVar13 = uVar14;
  }
  uVar11 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar11 = uVar16;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(ulonglong *)(*plVar3 + lVar15 * 8) = uVar13 << 0x20 | uVar14;
  plVar3 = *(longlong **)((longlong)this + 0x30);
  uVar16 = 0;
  if ((int)uVar10 < (int)plVar3[1]) {
    uVar16 = ~uVar10 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(int *)(*plVar3 + (longlong)(int)uVar10 * 4) = param_1;
  return;
}

// operator() @ 14c7ccff0

void __thiscall
`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromCylinderProjection'::__l2::<lambda_2>::
operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  double *pdVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  undefined1 local_70 [32];
  double local_50;
  double local_48;
  
  plVar2 = *(longlong **)this;
  lVar9 = (longlong)param_1;
  uVar10 = 0;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar7 = uVar10;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  __l2::<lambda_1>::operator()
            (*(void **)((longlong)this + 8),
             (TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_> *)local_70,
             *(int *)(*plVar2 + lVar9 * 4));
  plVar2 = *(longlong **)((longlong)this + 0x10);
  uVar7 = uVar10;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *plVar2;
  puVar1 = (undefined8 *)(lVar3 + lVar9 * 0x18);
  *puVar1 = local_70._0_8_;
  puVar1[1] = local_70._8_8_;
  *(undefined8 *)(lVar3 + 0x10 + lVar9 * 0x18) = local_70._16_8_;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  lVar3 = *(longlong *)((longlong)this + 0x18);
  if (param_1 < (int)plVar2[1]) {
    uVar10 = uVar11;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(lVar3 + 0x18),(TVector<double> *)&local_b8._s_0,
             (TVector<double> *)(*plVar2 + lVar9 * 0x18));
  pdVar4 = *(double **)((longlong)this + 0x20);
  dVar16 = local_b8._s_0.X * *pdVar4;
  dVar17 = local_b8._s_0.Y * pdVar4[1];
  dVar18 = local_b8._s_0.Z * pdVar4[2];
  auVar14._0_8_ = dVar18 * dVar18;
  auVar14._8_8_ = 0;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar17 * dVar17 + dVar16 * dVar16 + auVar14._0_8_;
  auVar15 = sqrtpd(auVar14,auVar15);
  if (auVar15._0_8_ <= 0.0) {
    local_b8._s_0.Z = 0.0;
    local_b8._s_0.Y = 0.0;
    local_b8._s_0.X = 0.0;
  }
  else {
    dVar13 = __real_3ff0000000000000 / auVar15._0_8_;
    local_b8._s_0.Z = dVar13 * dVar18;
    local_b8._s_0.Y = dVar13 * dVar17;
    local_b8._s_0.X = dVar13 * dVar16;
  }
  dVar16 = (double)CONCAT44((uint)((ulonglong)local_b8._s_0.Z >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_b8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
  ;
  if (dVar16 < **(double **)((longlong)this + 0x28) ||
      dVar16 == **(double **)((longlong)this + 0x28)) {
    pdVar4 = *(double **)((longlong)this + 0x18);
    local_a0._s_0.X = (double)local_70._24_8_ - *pdVar4;
    local_a0._s_0.Y = local_50 - pdVar4[1];
    local_a0._s_0.Z = local_48 - pdVar4[2];
    UE::Geometry::TQuaternion<double>::InverseMultiply
              ((TQuaternion<double> *)(pdVar4 + 3),(TVector<double> *)&local_88._s_0,
               (TVector<double> *)&local_a0._s_0);
    dVar16 = atan2(local_88._s_0.Y,local_88._s_0.X);
    uVar12 = (ulonglong)(0.0 <= dVar16) + 3 << 0x20 | 0xffffffff;
  }
  else {
    if (local_b8._s_0.Z <= 0.0) {
      iVar8 = (0.0 <= local_b8._s_0.Z) - 1;
    }
    else {
      iVar8 = 1;
    }
    uVar12 = 2;
    if (0.0 < (double)iVar8) {
      uVar12 = 0x100000002;
    }
  }
  plVar2 = *(longlong **)((longlong)this + 0x30);
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(ulonglong *)(*plVar2 + lVar9 * 8) = uVar12;
  return;
}

// operator() @ 14c7d0e00

bool __thiscall
`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection'::__l9::<lambda_3>::operator()
          (void *this,int param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  uVar9 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  uVar9 = *(uint *)(*plVar2 + (longlong)param_1 * 4);
  uVar8 = 0;
  if ((int)uVar9 < (int)plVar3[1]) {
    uVar8 = ~uVar9 >> 0x1f;
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
  piVar1 = (int *)(*plVar3 + (longlong)(int)uVar9 * 8);
  plVar3 = *(longlong **)((longlong)this + 8);
  uVar9 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if (uVar9 == 0) {
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
  uVar9 = *(uint *)(*plVar3 + (longlong)param_2 * 4);
  uVar8 = 0;
  if ((int)uVar9 < (int)plVar2[1]) {
    uVar8 = ~uVar9 >> 0x1f;
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
  if ((*piVar1 == *(int *)(lVar4 + (longlong)(int)uVar9 * 8)) &&
     (piVar1[1] == *(int *)(lVar4 + (longlong)(int)uVar9 * 8 + 4))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// operator() @ 14c7d2ef0

int __thiscall
`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection'::__l9::<lambda_4>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  lVar1 = *(longlong *)this;
  uVar9 = 0;
  if (param_1 < *(int *)(lVar1 + 0x10)) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + (longlong)param_1 * 8);
  if (*(int *)(puVar2 + 1) < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  plVar3 = *(longlong **)((longlong)this + 8);
  plVar4 = *(longlong **)((longlong)this + 0x10);
  uVar9 = *(uint *)*puVar2;
  uVar8 = 0;
  if ((int)uVar9 < (int)plVar4[1]) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  uVar9 = *(uint *)(*plVar4 + (longlong)(int)uVar9 * 4);
  uVar8 = 0;
  if ((int)uVar9 < (int)plVar3[1]) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  return *(int *)(*plVar3 + (longlong)(int)uVar9 * 8);
}

// AddUVLayer @ 14c7d9770

int __thiscall UE::Geometry::FDynamicMeshUVEditor::AddUVLayer(FDynamicMeshUVEditor *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar8;
  FDynamicMeshAttributeSet *this_00;
  
  iVar7 = this->UVOverlayIndex;
  iVar5 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xa8))();
  if (7 < iVar5) {
    return -1;
  }
  if ((this->Mesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    FDynamicMesh3::EnableAttributes(this->Mesh);
  }
  iVar6 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xa8))();
  if (iVar6 <= iVar5) {
    pFVar1 = (this->Mesh->AttributeSet).Ptr;
    (**(code **)(pFVar1->_padding_ + 0xb0))(pFVar1,iVar5 + 1);
  }
  pFVar1 = (this->Mesh->AttributeSet).Ptr;
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar1;
  }
  pTVar8 = FDynamicMeshAttributeSet::GetUVLayer(this_00,iVar5);
  this->UVOverlay = pTVar8;
  this->UVOverlayIndex = iVar5;
  if (pTVar8 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UVOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x6d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2321708304872505074>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x10e,"UVOverlay");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  else {
    pFVar2 = this->Mesh;
    if (0 < (pFVar2->TriangleRefCounts).UsedCount) {
      InternalSetPerTriangleUVs<UE::Geometry::FRefCountVector::IndexEnumerable>
                ((IndexEnumerable)&pFVar2->TriangleRefCounts,pFVar2,this->UVOverlay,0.0,
                 (FUVEditResult *)0x0);
    }
  }
  SwitchActiveLayer(this,iVar7);
  return iVar5;
}

// AutoOrientUVArea @ 14c7e3360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::AutoOrientUVArea
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  FDynamicMeshUVEditor *pFVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  bool *pbVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  ulonglong uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStackY_308 [32];
  undefined1 local_2b6 [6];
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  ForAnyElementType local_2a0;
  int local_298;
  int local_294;
  undefined1 local_290;
  undefined1 local_28f [3];
  float local_28c;
  float local_288;
  float local_280;
  float fStack_27c;
  TConvexHull2<float> local_278;
  undefined8 local_260;
  int local_258;
  float local_254;
  float local_250;
  float local_24c;
  int local_248;
  uint uStack_244;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_240;
  undefined4 local_238;
  uint uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 local_220;
  ulonglong local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  int local_1f0 [4];
  int local_1e0;
  int local_1dc;
  FScriptContainerElement **local_1d8;
  FDynamicMeshUVEditor *local_1d0;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  code *local_188;
  undefined1 *local_180;
  code *local_178;
  FScriptContainerElement ***local_170;
  longlong *local_168;
  longlong lStack_160;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  uint uStack_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  undefined4 uStack_13c;
  FScriptContainerElement *local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  ulonglong local_d8;
  
  fVar33 = __real_7f7fffff;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pFVar23 = (param_1->AllocatorInstance).Data;
  iVar12 = 0;
  iVar19 = param_1->ArrayNum;
  local_200 = 0x7f7fffff;
  uStack_1fc = 0x7f7fffff;
  local_210 = 0x7f7fffff7f7fffff;
  pFVar1 = pFVar23 + (longlong)iVar19 * 4;
  local_210._4_4_ = 3.4028235e+38;
  local_210._0_4_ = 3.4028235e+38;
  local_1f8 = 0xff7fffff;
  uStack_1f4 = 0xff7fffff;
  local_208 = 0xff7fffffff7fffff;
  local_208._4_4_ = -3.4028235e+38;
  local_208._0_4_ = -3.4028235e+38;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  local_2a0.Data = (FScriptContainerElement *)0x0;
  local_298 = 0;
  local_294 = 0;
  fVar35 = local_208._4_4_;
  fVar36 = (float)local_208;
  fVar34 = local_210._4_4_;
  fVar38 = (float)local_210;
  local_1d0 = this;
  while( true ) {
    if (param_1->ArrayNum != iVar19) {
      local_2b6[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2b6);
      iVar12 = local_298;
    }
    if (pFVar23 == pFVar1) break;
    uVar29 = *(int *)pFVar23 * 3;
    lVar26 = *(longlong *)&this->UVOverlay->field_0x78;
    iVar2 = *(int *)(*(longlong *)(lVar26 + (ulonglong)(uVar29 >> 9) * 8) +
                    (ulonglong)(uVar29 & 0x1ff) * 4);
    if (-1 < iVar2) {
      pbVar21 = (bool *)local_1f0;
      lVar25 = 3;
      local_1f0[1] = *(undefined4 *)
                      (*(longlong *)(lVar26 + (ulonglong)(uVar29 + 1 >> 9) * 8) +
                      (ulonglong)(uVar29 + 1 & 0x1ff) * 4);
      local_1f0[2] = *(undefined4 *)
                      (*(longlong *)(lVar26 + (ulonglong)(uVar29 + 2 >> 9) * 8) +
                      (ulonglong)(uVar29 + 2 & 0x1ff) * 4);
      local_1f0[0] = iVar2;
      do {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128,&local_1dc,
                   pbVar21);
        uVar29 = *(uint *)pbVar21;
        local_280 = *(float *)(*(longlong *)
                                (*(longlong *)&this->UVOverlay->field_0x48 +
                                (ulonglong)((uVar29 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar29 * 2 & 0x1ff) * 4);
        fStack_27c = *(float *)(*(longlong *)
                                 (*(longlong *)&this->UVOverlay->field_0x48 +
                                 (ulonglong)((uVar29 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(uVar29 * 2 + 1 & 0x1ff) * 4);
        if (((local_2a0.Data <= (FScriptContainerElement *)&local_280) &&
            ((FScriptContainerElement *)&local_280 < local_2a0.Data + (longlong)local_294 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        if (local_298 == local_294) {
          local_298 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_2a0,&local_294);
        }
        iVar12 = local_298 + 1;
        *(ulonglong *)(local_2a0.Data + (longlong)local_298 * 8) = CONCAT44(fStack_27c,local_280);
        if (local_280 < fVar38) {
          fVar38 = local_280;
        }
        if (fVar36 < local_280) {
          fVar36 = local_280;
        }
        if (fStack_27c < fVar34) {
          fVar34 = fStack_27c;
        }
        if (fVar35 < fStack_27c) {
          fVar35 = fStack_27c;
        }
        pbVar21 = pbVar21 + 4;
        lVar25 = lVar25 + -1;
        local_298 = iVar12;
      } while (lVar25 != 0);
    }
    pFVar23 = pFVar23 + 4;
  }
  bVar9 = false;
  if (iVar12 != 0) {
    uVar29 = 0;
    uVar24 = 0;
    fVar39 = (fVar36 + fVar38) * __real_3f000000;
    fVar40 = (fVar35 + fVar34) * __real_3f000000;
    iVar19 = iVar12;
    local_250 = fVar39;
    local_24c = fVar40;
    if (0 < iVar12) {
      lVar26 = 0;
      uVar17 = uVar24;
      do {
        uVar22 = (uint)uVar17;
        uVar20 = uVar29;
        if ((int)uVar22 < iVar19) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        uVar17 = (ulonglong)(uVar22 + 1);
        fVar37 = *(float *)(local_2a0.Data + lVar26 * 8 + 4);
        *(float *)(local_2a0.Data + lVar26 * 8) = *(float *)(local_2a0.Data + lVar26 * 8) - fVar39;
        *(float *)(local_2a0.Data + lVar26 * 8 + 4) = fVar37 - fVar40;
        lVar26 = lVar26 + 1;
        iVar19 = local_298;
      } while (lVar26 < iVar12);
    }
    local_198 = local_2a0.Data;
    local_278.Dimension = 0;
    local_278.NumUniquePoints = 0;
    local_278.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.Hull.ArrayNum = 0;
    local_278.Hull.ArrayMax = 0;
    if ((iVar19 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    local_180 = &local_290;
    uStack_130 = CONCAT44(uStack_18c,iVar19);
    local_138 = local_198;
    local_188 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TConvexHull2<float>::Solve'::__l2::<lambda_2>,bool,int>
                ::Call;
    local_1d8 = &local_138;
    local_170 = &local_1d8;
    local_178 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TConvexHull2<float>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<float>,int>
                ::Call;
    iStack_190 = iVar19;
    bVar9 = TConvexHull2<float>::Solve
                      (&local_278,iVar19,
                       (TFunctionRef<UE::Math::TVector2<float>___cdecl(int)> *)&local_178,
                       (TFunctionRef<bool___cdecl(int)> *)&local_188);
    if (bVar9) {
      if ((local_278.Dimension != 2) &&
         (bVar9 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2612336754539102086>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull2.h"
                             ,0x7a,"IsSolutionAvailable()"), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      uVar17 = (ulonglong)local_278.Hull.ArrayNum;
      uVar20 = uVar29;
      if ((int)(local_278.Hull.ArrayNum - 1U) < local_278.Hull.ArrayNum) {
        uVar20 = ~(local_278.Hull.ArrayNum - 1U) >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        uVar17 = local_278.Hull._8_8_ & 0xffffffff;
      }
      FVar6.Data = local_278.Hull.AllocatorInstance.Data;
      iVar12 = (int)uVar17;
      if (iVar12 < 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        uVar17 = local_278.Hull._8_8_ & 0xffffffff;
      }
      if (*(int *)local_278.Hull.AllocatorInstance.Data ==
          *(int *)(FVar6.Data + (longlong)iVar12 * 4 + -4)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("HullPointIndices[0] != HullPointIndices.Last()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                           ,0x62e,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        uVar17 = local_278.Hull._8_8_ & 0xffffffff;
      }
      local_2b0.Data = (FScriptContainerElement *)0x0;
      local_2a8 = 0;
      iVar12 = (int)uVar17;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar17 & 0xffffffff);
      }
      if (0 < iVar12) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar12,&local_2b0,0,(int *)((longlong)&local_2a8 + 4));
        uVar17 = local_278.Hull._8_8_ & 0xffffffff;
      }
      uVar20 = uVar29;
      if (0 < (int)uVar17) {
        do {
          uVar22 = uVar29;
          if ((int)uVar20 < (int)uVar17) {
            uVar22 = ~uVar20 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          uVar22 = *(uint *)(local_278.Hull.AllocatorInstance.Data + uVar24);
          uVar16 = uVar29;
          if ((int)uVar22 < local_298) {
            uVar16 = ~uVar22 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          pFVar1 = local_2a0.Data + (longlong)(int)uVar22 * 8;
          if (((local_2b0.Data <= pFVar1) &&
              (pFVar1 < local_2b0.Data + (longlong)local_2a8._4_4_ * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          if ((uint)local_2a8 == local_2a8._4_4_) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_2b0,(int *)((longlong)&local_2a8 + 4));
            local_2a8 = CONCAT44(local_2a8._4_4_,iVar12);
          }
          lVar26 = (longlong)(int)(uint)local_2a8;
          uVar20 = uVar20 + 1;
          uVar24 = uVar24 + 4;
          local_2a8 = CONCAT44(local_2a8._4_4_,(uint)local_2a8 + 1);
          *(undefined8 *)(local_2b0.Data + lVar26 * 8) = *(undefined8 *)pFVar1;
          uVar17 = local_278.Hull._8_8_ & 0xffffffff;
        } while ((int)uVar20 < local_278.Hull.ArrayNum);
      }
      uVar20 = (uint)local_2a8;
      uVar24 = local_2a8 & 0xffffffff;
      fVar35 = fVar35 - fVar34;
      bVar9 = false;
      local_288 = 0.0;
      fVar36 = fVar36 - fVar38;
      if (fVar35 <= 0.0) {
        fVar35 = 0.0;
      }
      if (fVar36 <= 0.0) {
        fVar36 = 0.0;
      }
      fVar35 = fVar35 * fVar36;
      local_254 = __real_3f800000;
      local_28c = __real_3f800000;
      if (-1 < (int)(uint)local_2a8) {
        uVar22 = (uint)local_2a8;
        if ((uint)local_2a8 == 0) {
          uVar22 = 1;
        }
        uVar17 = (ulonglong)uVar22;
        iVar12 = (int)(uint)local_2a8 / 2;
        local_218 = uVar17;
        do {
          fVar36 = local_254;
          uVar22 = __xmm_80000000800000008000000080000000;
          uVar18 = 0;
          uVar15 = (int)uVar29 % (int)uVar20;
          uVar13 = 0;
          uVar16 = uVar13;
          if ((int)uVar15 < (int)(uint)local_2a8) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          local_258 = iVar12;
          if ((uVar16 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          local_228 = *(undefined8 *)(local_2b0.Data + (longlong)(int)uVar15 * 8);
          uVar29 = uVar29 + 1;
          uVar15 = (int)uVar29 % (int)uVar20;
          uVar16 = uVar13;
          if ((int)uVar15 < (int)(uint)local_2a8) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          local_260 = *(undefined8 *)(local_2b0.Data + (longlong)(int)uVar15 * 8);
          uVar16 = iVar12 % (int)uVar20;
          if ((int)uVar16 < (int)(uint)local_2a8) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          fVar38 = __real_7f7fffff;
          fVar34 = __real_ff7fffff;
          local_260._0_4_ = (float)local_260 - (float)local_228;
          fVar40 = local_260._4_4_ - local_228._4_4_;
          uVar3 = *(undefined8 *)(local_2b0.Data + (longlong)(int)uVar16 * 8);
          fVar39 = SQRT(fVar40 * fVar40 + (float)local_260 * (float)local_260);
          if (fVar39 <= 0.0) {
            fVar40 = 0.0;
            fVar37 = 0.0;
            fVar39 = 0.0;
          }
          else {
            fVar37 = (float)local_260 * (fVar36 / fVar39);
            fVar40 = fVar40 * (fVar36 / fVar39);
          }
          local_220._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
          local_220._0_4_ = (float)uVar3;
          fVar36 = ((float)local_220 - (float)local_228) * fVar40 +
                   (local_220._4_4_ - local_228._4_4_) * (float)((uint)fVar37 ^ uVar22);
          local_260 = CONCAT44(local_260._4_4_,__real_ff7fffff);
          uVar28 = 0;
          local_220 = uVar3;
          if ((0xbf400000 < uVar20) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ModuloPrime > MaxIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IteratorUtil.h"
                                  ,0x1bc,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          do {
            uVar16 = (uint)uVar18;
            lVar26 = (longlong)(int)uVar16;
            uVar18 = (uVar18 + 0xbf400001) % uVar17;
            if (uVar28 == uVar24) {
              if (fVar36 * fVar39 < fVar35) {
                bVar9 = true;
                fVar35 = fVar36 * fVar39;
                local_28c = fVar37;
                local_288 = fVar40;
              }
              break;
            }
            uVar13 = 0;
            if ((int)uVar16 < (int)(uint)local_2a8) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            uVar13 = 0;
            if ((int)uVar16 < (int)(uint)local_2a8) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            fVar32 = fVar40 * *(float *)(local_2b0.Data + lVar26 * 8 + 4) +
                     fVar37 * *(float *)(local_2b0.Data + lVar26 * 8);
            fVar30 = fVar32;
            if (fVar33 <= fVar32) {
              fVar30 = fVar33;
            }
            if (fVar32 <= (float)local_260) {
              fVar32 = (float)local_260;
            }
            local_260 = CONCAT44(local_260._4_4_,fVar32);
            fVar31 = fVar32 - fVar30;
            if (fVar32 - fVar30 <= fVar39) {
              fVar31 = fVar39;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            fVar33 = (float)((uint)fVar37 ^ uVar22) * *(float *)(local_2b0.Data + lVar26 * 8 + 4) +
                     fVar40 * *(float *)(local_2b0.Data + lVar26 * 8);
            if (fVar34 <= fVar33) {
              fVar34 = fVar33;
            }
            if (fVar33 <= fVar38) {
              fVar38 = fVar33;
            }
            fVar32 = fVar34 - fVar38;
            if (fVar34 - fVar38 <= fVar36) {
              fVar32 = fVar36;
            }
            uVar17 = local_218;
            uVar28 = uVar28 + 1;
            fVar36 = fVar32;
            fVar39 = fVar31;
            fVar33 = fVar30;
          } while (fVar32 * fVar31 <= fVar35);
          iVar12 = local_258 + 1;
          fVar33 = __real_7f7fffff;
        } while ((int)uVar29 <= (int)uVar20);
        local_258 = iVar12;
        if (bVar9) {
          atan2f(local_288,local_28c);
          __libm_sse2_sincosf_();
          uVar29 = local_100;
          pTStack_240 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
          local_248 = 0;
          uStack_244 = 1;
          uStack_234 = 0;
          iStack_230 = 0;
          if (local_100 != 0) {
            puVar27 = (uint *)(local_128 + 0x10);
            if (local_108 != (uint *)0x0) {
              puVar27 = local_108;
            }
            uVar20 = *puVar27;
            iStack_230 = 0;
            local_248 = 0;
            while (uVar20 == 0) {
              iStack_230 = iStack_230 + 0x20;
              lVar26 = (longlong)local_248;
              local_248 = local_248 + 1;
              if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < local_248)
              {
                uStack_234 = local_100;
                goto LAB_14c7e3f7d;
              }
              uVar20 = puVar27[lVar26 + 1];
            }
            uStack_244 = -uVar20 & uVar20;
            uVar24 = (ulonglong)uStack_244 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            uStack_234 = iStack_230 + -1 + (int)lVar26;
            local_1e0 = (int)lVar26;
            if ((int)local_100 < (int)uStack_234) {
              uStack_234 = local_100;
            }
          }
LAB_14c7e3f7d:
          local_238 = 0xffffffff;
          local_168 = (longlong *)local_128;
          lStack_160 = CONCAT44(uStack_244,local_248);
          pTStack_158 = pTStack_240;
          local_140 = local_128._8_4_ - local_f4;
          uVar20 = local_100 & 0xffffffe0;
          iVar12 = (int)local_100 >> 5;
          uStack_150 = 0xffffffff;
          iStack_14c = uStack_234;
          iStack_148 = iStack_230;
          uStack_144 = uStack_22c;
          bVar14 = (byte)local_100;
          local_1c8 = (longlong *)local_128;
          TStack_1c0._padding_ = CONCAT44(uStack_244,local_248);
          TStack_1c0.Array = pTStack_240;
          TStack_1c0.UnvisitedBitMask = 0xffffffff;
          TStack_1c0.CurrentBitIndex = uStack_234;
          TStack_1c0.BaseBitIndex = iStack_230;
          TStack_1c0._28_4_ = uStack_22c;
          uStack_1a0 = CONCAT44(uStack_13c,local_128._8_4_ - local_f4);
          if (((int)local_100 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          pFVar7 = local_1d0;
          fVar33 = local_24c;
          fVar35 = local_250;
          if (uVar29 != local_100) {
            puVar27 = (uint *)(local_128 + 0x10);
            if (local_108 != (uint *)0x0) {
              puVar27 = local_108;
            }
            uVar29 = -1 << (bVar14 & 0x1f) & puVar27[iVar12];
            while (uVar29 == 0) {
              lVar26 = (longlong)iVar12;
              uVar20 = uVar20 + 0x20;
              iVar12 = iVar12 + 1;
              uVar29 = local_100;
              if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
              goto LAB_14c7e40a0;
              uVar29 = puVar27[lVar26 + 1];
            }
            uVar24 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
            lVar26 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            uVar29 = (uVar20 - 1) + (int)lVar26;
            if ((int)local_100 < (int)uVar29) {
              uVar29 = local_100;
            }
          }
LAB_14c7e40a0:
          while( true ) {
            plVar8 = local_1c8;
            if ((int)local_1c8[1] - *(int *)((longlong)local_1c8 + 0x34) != (int)uStack_1a0) {
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_28f);
            }
            if (((TStack_1c0.CurrentBitIndex == uVar29) &&
                (TStack_1c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
               (plVar8 == (longlong *)local_128)) break;
            pTVar4 = pFVar7->UVOverlay;
            uVar20 = *(uint *)(*plVar8 + (longlong)TStack_1c0.CurrentBitIndex * 0xc);
            lVar26 = *(longlong *)&pTVar4->field_0x48;
            uVar24 = (ulonglong)((uVar20 & 0x7fffffff) >> 8);
            uVar18 = (ulonglong)(uVar20 * 2 + 1 & 0x1ff);
            uVar17 = (ulonglong)(uVar20 * 2 & 0x1ff);
            lVar25 = *(longlong *)(lVar26 + (ulonglong)((uVar20 & 0x7fffffff) >> 8) * 8);
            fVar34 = *(float *)(lVar25 + uVar17 * 4) - fVar35;
            fVar36 = *(float *)(*(longlong *)(lVar26 + uVar24 * 8) + uVar18 * 4) - fVar33;
            *(float *)(lVar25 + uVar17 * 4) =
                 (extraout_XMM0_Db * fVar34 - fVar36 * extraout_XMM0_Da) + fVar35;
            TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
            *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar24 * 8) + uVar18 * 4) =
                 extraout_XMM0_Db * fVar36 + extraout_XMM0_Da * fVar34 + fVar33;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
          }
        }
      }
      bVar9 = true;
      if (local_2b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data);
      }
    }
    else {
      bVar9 = false;
    }
    if (local_278.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Hull.AllocatorInstance.Data);
    }
  }
  if (local_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data);
  }
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
  return bVar9;
}

// CopyUVLayer @ 14c7fba70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::CopyUVLayer
          (FDynamicMeshUVEditor *this,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  float local_res10;
  undefined4 local_res14;
  FIndex3i_u_0 local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  if ((param_1 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) ||
     (param_1 == this->UVOverlay)) {
    return false;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&local_38,*(int *)&param_1->field_0x8 * 0x200 + *(int *)&param_1->field_0xc,Default);
  TDynamicMeshOverlay<float,2>::ClearElements((TDynamicMeshOverlay<float,2> *)this->UVOverlay);
  uVar13 = *(int *)&param_1->field_0x8 * 0x200 + *(int *)&param_1->field_0xc;
  uVar11 = 0;
  if (((uVar13 != 0) &&
      (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)&param_1->field_0x10 - 1U))) &&
     (uVar11 = 1, 1 < (int)uVar13)) {
    do {
      uVar8 = (ulonglong)((uint)uVar11 & 0x1ff);
      lVar12 = (*(undefined8 **)&param_1->field_0x10)[uVar11 >> 9];
      if ((*(short *)(lVar12 + uVar8 * 2) != 0) && (*(short *)(lVar12 + uVar8 * 2) != -1)) break;
      uVar9 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar13);
  }
  uVar9 = (uint)uVar11;
joined_r0x00014c7fbb40:
  if (uVar9 != uVar13) {
    while( true ) {
      uVar10 = (uint)uVar11;
      local_res10 = *(float *)(*(longlong *)
                                (*(longlong *)&param_1->field_0x48 +
                                (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar10 * 2 & 0x1ff) * 4);
      local_res14 = *(undefined4 *)
                     (*(longlong *)
                       (*(longlong *)&param_1->field_0x48 +
                       (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                     (ulonglong)(uVar10 * 2 + 1 & 0x1ff) * 4);
      iVar6 = TDynamicMeshOverlay<float,2>::AppendElement
                        ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,&local_res10);
      uVar9 = 0;
      if ((int)uVar10 < local_38.ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar9 = uVar10 + 1;
      uVar11 = (ulonglong)uVar9;
      *(int *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) = iVar6;
      if ((int)uVar13 <= (int)uVar9) break;
      while( true ) {
        uVar8 = (ulonglong)((uint)uVar11 & 0x1ff);
        if ((*(short *)(*(longlong *)(*(longlong *)&param_1->field_0x10 + (uVar11 >> 9) * 8) +
                       uVar8 * 2) != 0) &&
           (*(short *)(*(longlong *)(*(longlong *)&param_1->field_0x10 + (uVar11 >> 9) * 8) +
                      uVar8 * 2) != -1)) break;
        uVar9 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
        if ((int)uVar13 <= (int)uVar9) goto joined_r0x00014c7fbb40;
      }
    }
    goto joined_r0x00014c7fbb40;
  }
  pFVar1 = this->Mesh;
  uVar9 = (pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar13 = 0;
  if ((uVar9 != 0) &&
     (pFVar2 = (pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar10 = 1;
    uVar13 = 1;
    if (1 < (int)uVar9) {
      do {
        lVar12 = *(longlong *)(pFVar2 + (ulonglong)(uVar10 >> 9) * 8);
        if ((*(short *)(lVar12 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
           (uVar13 = uVar10, *(short *)(lVar12 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
        uVar10 = uVar10 + 1;
        uVar13 = uVar10;
      } while ((int)uVar10 < (int)uVar9);
    }
  }
joined_r0x00014c7fbcb8:
  do {
    if (uVar13 == uVar9) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return true;
    }
    while( true ) {
      lVar12 = *(longlong *)&param_1->field_0x78;
      uVar7 = uVar13 * 3;
      uVar10 = *(uint *)(*(longlong *)(lVar12 + (ulonglong)(uVar7 >> 9) * 8) +
                        (ulonglong)(uVar7 & 0x1ff) * 4);
      if (-1 < (int)uVar10) {
        local_48._s_0.C =
             *(uint *)(*(longlong *)(lVar12 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                      (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
        local_48._s_0.B =
             *(uint *)(*(longlong *)(lVar12 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
        uVar7 = 0;
        if ((int)uVar10 < local_38.ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_48._0_4_ = uVar10;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        local_48._s_0.A =
             *(undefined4 *)(local_38.AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
        lVar12 = (longlong)local_48._s_0.B;
        uVar10 = 0;
        if (local_48._s_0.B < local_38.ArrayNum) {
          uVar10 = (uint)~local_48._s_0.B >> 0x1f;
        }
        iVar6 = local_38.ArrayNum;
        if (uVar10 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar6 = local_38.ArrayNum;
        }
        local_48._s_0.B = *(undefined4 *)(local_38.AllocatorInstance.Data + lVar12 * 4);
        lVar12 = (longlong)local_48._s_0.C;
        uVar10 = 0;
        if (local_48._s_0.C < iVar6) {
          uVar10 = (uint)~local_48._s_0.C >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        local_48._s_0.C = *(undefined4 *)(local_38.AllocatorInstance.Data + lVar12 * 4);
        TDynamicMeshOverlay<float,2>::SetTriangle
                  ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,uVar13,(FIndex3i *)&local_48._s_0
                   ,true);
      }
      uVar13 = uVar13 + 1;
      if ((int)uVar9 <= (int)uVar13) break;
      while( true ) {
        lVar12 = *(longlong *)
                  ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar13 >> 9) * 8);
        if ((*(short *)(lVar12 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar12 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
        uVar13 = uVar13 + 1;
        if ((int)uVar9 <= (int)uVar13) goto joined_r0x00014c7fbcb8;
      }
    }
  } while( true );
}

// CreateSeamsAtEdges @ 14c7fd1c0

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::CreateSeamsAtEdges
          (FDynamicMeshUVEditor *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1
          ,FUVEditResult *param_2)

{
  bool bVar1;
  
  bVar1 = FDynamicMeshEditor::CreateSeamsAtEdges
                    (param_1,(TDynamicMeshOverlay<float,2> *)this->UVOverlay,&param_2->NewUVElements
                    );
  return bVar1;
}

// CreateUVLayer @ 14c7fd1e0

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::CreateUVLayer(FDynamicMeshUVEditor *this,int param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (7 < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LayerIndex < FDynamicMeshUVEditorLocals::MAX_STATIC_TEXCOORDS",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x4a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Mesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    FDynamicMesh3::EnableAttributes(this->Mesh);
  }
  iVar4 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xa8))();
  if (iVar4 <= param_1) {
    pFVar1 = (this->Mesh->AttributeSet).Ptr;
    (**(code **)(pFVar1->_padding_ + 0xb0))(pFVar1,param_1 + 1);
  }
  return;
}

// DetermineAreaFromUVs @ 14c8003f0

double __cdecl
UE::Geometry::FDynamicMeshUVEditor::DetermineAreaFromUVs
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TAxisAlignedBox2<float> *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  FScriptContainerElement *pFVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined4 local_res20;
  undefined4 uStackX_24;
  
  if (param_3 != (TAxisAlignedBox2<float> *)0x0) {
    local_res18 = 0x7f7fffff;
    uStackX_1c = 0x7f7fffff;
    (param_3->Min).field0_0x0 = (TVector2<float>_u_0)0x7f7fffff7f7fffff;
    local_res20 = 0xff7fffff;
    uStackX_24 = 0xff7fffff;
    (param_3->Max).field0_0x0 = (TVector2<float>_u_0)0xff7fffffff7fffff;
  }
  fVar15 = __real_3f000000;
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pFVar16 = (param_2->AllocatorInstance).Data;
  dVar12 = 0.0;
  iVar8 = param_2->ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar8 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar8) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar16 == pFVar1) break;
    lVar10 = *(longlong *)&param_1->field_0x78;
    uVar13 = *(int *)pFVar16 * 3;
    uVar9 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar13 >> 9) * 8) +
                     (ulonglong)(uVar13 & 0x1ff) * 4);
    if (-1 < (int)uVar9) {
      lVar11 = *(longlong *)&param_1->field_0x48;
      fVar2 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar9 * 2 & 0x1ff) * 4);
      fVar3 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar9 * 2 + 1 & 0x1ff) * 4);
      uVar9 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                       (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
      fVar4 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar9 * 2 & 0x1ff) * 4);
      fVar5 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar9 * 2 + 1 & 0x1ff) * 4);
      uVar9 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                       (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
      fVar6 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar9 * 2 & 0x1ff) * 4);
      fVar7 = *(float *)(*(longlong *)(lVar11 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar9 * 2 + 1 & 0x1ff) * 4);
      if (param_3 != (TAxisAlignedBox2<float> *)0x0) {
        fVar17 = (param_3->Min).field0_0x0._s_0.X;
        if (fVar2 < fVar17) {
          (param_3->Min).field0_0x0._s_0.X = fVar2;
          fVar17 = fVar2;
        }
        fVar18 = (param_3->Max).field0_0x0._s_0.X;
        if (fVar18 < fVar2) {
          (param_3->Max).field0_0x0._s_0.X = fVar2;
          fVar18 = fVar2;
        }
        fVar19 = (param_3->Min).field0_0x0._s_0.Y;
        if (fVar3 < fVar19) {
          (param_3->Min).field0_0x0._s_0.Y = fVar3;
          fVar19 = fVar3;
        }
        fVar20 = (param_3->Max).field0_0x0._s_0.Y;
        if (fVar20 < fVar3) {
          (param_3->Max).field0_0x0._s_0.Y = fVar3;
          fVar20 = fVar3;
        }
        if (fVar4 < fVar17) {
          (param_3->Min).field0_0x0._s_0.X = fVar4;
          fVar17 = fVar4;
        }
        if (fVar18 < fVar4) {
          (param_3->Max).field0_0x0._s_0.X = fVar4;
          fVar18 = fVar4;
        }
        if (fVar5 < fVar19) {
          (param_3->Min).field0_0x0._s_0.Y = fVar5;
          fVar19 = fVar5;
        }
        if (fVar20 < fVar5) {
          (param_3->Max).field0_0x0._s_0.Y = fVar5;
          fVar20 = fVar5;
        }
        if (fVar6 < fVar17) {
          (param_3->Min).field0_0x0._s_0.X = fVar6;
        }
        if (fVar18 < fVar6) {
          (param_3->Max).field0_0x0._s_0.X = fVar6;
        }
        if (fVar7 < fVar19) {
          (param_3->Min).field0_0x0._s_0.Y = fVar7;
        }
        if (fVar20 < fVar7) {
          (param_3->Max).field0_0x0._s_0.Y = fVar7;
        }
      }
      dVar12 = dVar12 + (double)((float)((uint)((fVar7 - fVar3) * (fVar4 - fVar2) -
                                               (fVar5 - fVar3) * (fVar6 - fVar2)) & uVar14) * fVar15
                                );
    }
    pFVar16 = pFVar16 + 4;
  }
  return dVar12;
}

// EstimateGeodesicCenterFrameVertex @ 14c801660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Geometry::FDynamicMeshUVEditor::EstimateGeodesicCenterFrameVertex
          (FDynamicMesh3 *param_1,TFrame3<double> *param_2,int *param_3,bool param_4)

{
  int *piVar1;
  short sVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  TFrame3<double> *pTVar9;
  TVector<double> *pTVar10;
  longlong *plVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStackY_428 [32];
  undefined1 local_3d8;
  char local_3d7;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_3d0;
  uint *local_3c0;
  double local_3b8;
  double dStack_3b0;
  TVector<double>_u_0 local_3a8;
  TVector<double>_u_0 local_390;
  TVector<double>_u_0 local_378;
  TVector<double> local_360;
  TFrame3<double> local_348;
  TFrame3<double> local_310;
  TFrame3<double> local_2d8;
  undefined1 local_298 [104];
  longlong *local_230;
  ForAnyElementType local_228;
  undefined8 local_220;
  bool local_218;
  ForAnyElementType local_210;
  undefined8 local_208;
  longlong local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8 [3];
  longlong *plStack_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8 [3];
  longlong *plStack_1a0;
  undefined1 local_198 [16];
  longlong local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined1 *puStack_170;
  undefined8 local_168;
  longlong *plStack_160;
  bool local_158;
  code *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong *plStack_120;
  ForAnyElementType local_118;
  undefined8 local_110;
  TBitArray<FDefaultBitArrayAllocator> local_108;
  undefined4 local_e8;
  undefined4 local_e4;
  void *local_d8;
  undefined4 local_d0;
  TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512> local_c8;
  FIndexPriorityQueue local_b0;
  ForAnyElementType local_78;
  undefined8 local_70;
  double local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_428;
  uVar16 = 0;
  iVar15 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar13 = uVar16;
  if ((iVar15 != 0) &&
     (0xfffd < (ushort)(**(short **)
                          (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data - 1U)))
  {
    uVar14 = 1;
    uVar13 = 1;
    if (1 < iVar15) {
      do {
        uVar13 = (uint)uVar14;
        sVar2 = *(short *)(*(longlong *)
                            ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (uVar14 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 2);
        if ((sVar2 != 0) && (sVar2 != -1)) break;
        uVar13 = uVar13 + 1;
        uVar14 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar15);
    }
  }
  *param_3 = uVar13;
  local_3d7 = param_4;
  local_3c0 = (uint *)param_3;
  FMeshNormals::ComputeVertexNormal((TVector<double> *)&local_3a8._s_0,param_1,uVar13,true,true);
  local_298._8_8_ = (FEdgeLoop *)0x0;
  local_298._16_4_ = 0;
  local_298._20_4_ = 0;
  local_298._24_8_ = (FEdgeSpan *)0x0;
  local_298._32_4_ = 0;
  local_298._36_4_ = 0;
  local_298[0x28] = false;
  local_298[0x29] = false;
  local_298[0x2a] = false;
  local_298._44_4_ = Compute;
  local_298._48_4_ = ConvertToOpenSpan;
  local_298._64_8_ = 0;
  local_230 = (longlong *)0x0;
  local_228.Data = (FScriptContainerElement *)0x0;
  local_220._0_4_ = 0;
  local_220._4_4_ = 0;
  local_218 = false;
  local_210.Data = (FScriptContainerElement *)0x0;
  local_208._0_4_ = 0;
  local_208._4_4_ = 0;
  local_298._0_8_ = param_1;
  FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_298);
  if (local_298._16_4_ == 0) {
    pTVar9 = FDynamicMesh3::GetVertexFrame
                       (param_1,&local_348,*param_3,false,(TVector<double> *)&local_3a8._s_0);
    bVar7 = false;
    dVar4 = (pTVar9->Origin).field0_0x0._s_0.Y;
    (param_2->Origin).field0_0x0._s_0.X = (pTVar9->Origin).field0_0x0._s_0.X;
    (param_2->Origin).field0_0x0._s_0.Y = dVar4;
    dVar4 = (pTVar9->Rotation).field0_0x0._s_0.X;
    (param_2->Origin).field0_0x0._s_0.Z = (pTVar9->Origin).field0_0x0._s_0.Z;
    (param_2->Rotation).field0_0x0._s_0.X = dVar4;
    dVar4 = (pTVar9->Rotation).field0_0x0._s_0.Z;
    (param_2->Rotation).field0_0x0._s_0.Y = (pTVar9->Rotation).field0_0x0._s_0.Y;
    (param_2->Rotation).field0_0x0._s_0.Z = dVar4;
    (param_2->Rotation).field0_0x0._s_0.W = (pTVar9->Rotation).field0_0x0._s_0.W;
  }
  else {
    uVar13 = FMeshBoundaryLoops::GetMaxVerticesLoopIndex((FMeshBoundaryLoops *)local_298);
    if ((int)uVar13 < (int)local_298._16_4_) {
      uVar16 = ~uVar13 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    uVar5 = local_298._8_8_;
    local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d0.ArrayMax = 0;
    lVar17 = (longlong)(int)uVar13 * 0x40;
    local_3d0.ArrayNum = 0;
    piVar12 = *(int **)(local_298._8_8_ + lVar17 + 8);
    iVar15 = *(int *)(local_298._8_8_ + lVar17 + 0x10);
    piVar1 = piVar12 + iVar15;
    while( true ) {
      if (*(int *)(uVar5 + lVar17 + 0x10) != iVar15) {
        local_3d8 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3d8);
      }
      if (piVar12 == piVar1) break;
      dStack_3b0 = 0.0;
      local_3b8 = (double)*piVar12;
      if (((local_3d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3b8) &&
          ((FScriptContainerElement *)&local_3b8 <
           local_3d0.AllocatorInstance.Data + (longlong)local_3d0.ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (local_3d0.ArrayNum == local_3d0.ArrayMax) {
        local_3d0.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_3d0.AllocatorInstance,&local_3d0.ArrayMax);
      }
      piVar12 = piVar12 + 1;
      *(double *)(local_3d0.AllocatorInstance.Data + (longlong)local_3d0.ArrayNum * 0x10) =
           local_3b8;
      *(double *)(local_3d0.AllocatorInstance.Data + (longlong)local_3d0.ArrayNum * 0x10 + 8) =
           dStack_3b0;
      local_3d0.ArrayNum = local_3d0.ArrayNum + 1;
    }
    local_108.MaxBits = 0x80;
    local_188 = 0;
    plStack_160 = (longlong *)0x0;
    local_158 = false;
    local_148 = (code *)0x0;
    plStack_120 = (longlong *)0x0;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = 0;
    local_108.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_108.NumBits = 0;
    local_e4 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c8.CurBlock = 0;
    local_c8.CurBlockUsed = 0;
    local_c8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Blocks.ArrayNum = 0;
    local_c8.Blocks.ArrayMax = 0;
    local_e8 = 0xffffffff;
    TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
    AddAllocatedBlock(&local_c8);
    FIndexPriorityQueue::FIndexPriorityQueue(&local_b0);
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70._0_4_ = 0;
    local_70._4_4_ = 0;
    local_198._0_8_ = param_1;
    FIndexPriorityQueue::Initialize
              (&local_b0,
               (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
    plStack_1d0 = plStack_160;
    uVar6 = local_168;
    uVar5 = uStack_180;
    local_1f8 = local_188;
    puStack_170 = local_198;
    local_188 = (longlong)
                Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::TMeshDijkstra<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                ::Call;
    uStack_180 = uStack_1f0;
    local_68 = 0.0;
    local_168 = local_1e8[2];
    plStack_160 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_178 = 0x528cb1b0;
    uStack_174 = 1;
    uStack_1f0 = uVar5;
    local_1e8[2] = uVar6;
    if (local_1f8 != 0) {
      plVar11 = local_1e8;
      if (plStack_1d0 != (longlong *)0x0) {
        plVar11 = plStack_1d0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    plStack_1a0 = plStack_120;
    uVar6 = local_128;
    uVar5 = uStack_140;
    local_1c8 = (longlong)local_148;
    local_148 = Core::Private::Function::
                TFunctionRefCaller<double_(__cdecl*)(int,int,int,double),double,int,int,int,double>
                ::Call;
    uStack_140 = uStack_1c0;
    local_128 = local_1b8[2];
    plStack_120 = (longlong *)0x0;
    local_158 = false;
    local_138 = 0x528cb1d0;
    uStack_134 = 1;
    uStack_130 = 0x4c77f5e0;
    uStack_12c = 1;
    uStack_1c0 = uVar5;
    local_1b8[2] = uVar6;
    if (local_1c8 != 0) {
      plVar11 = local_1b8;
      if (plStack_1a0 != (longlong *)0x0) {
        plVar11 = plStack_1a0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TMeshDijkstra<UE::Geometry::FDynamicMesh3>::ComputeToMaxDistance
              ((TMeshDijkstra<UE::Geometry::FDynamicMesh3> *)local_198,&local_3d0,
               __real_47efffffe0000000);
    uVar13 = local_60;
    if ((((int)local_60 < 0) ||
        ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)local_60)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance
                                       .Data + (ulonglong)(local_60 >> 9) * 8) +
                                    (ulonglong)(local_60 & 0x1ff) * 2) - 1U))) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2321708304872504837>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                         ,0x1fb,"Mesh.IsVertex(MaxDistVID)");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pTVar9 = FDynamicMesh3::GetVertexFrame
                         (param_1,&local_2d8,*local_3c0,false,(TVector<double> *)&local_3a8._s_0);
      bVar7 = false;
      dVar4 = (pTVar9->Origin).field0_0x0._s_0.Y;
      (param_2->Origin).field0_0x0._s_0.X = (pTVar9->Origin).field0_0x0._s_0.X;
      (param_2->Origin).field0_0x0._s_0.Y = dVar4;
      dVar4 = (pTVar9->Rotation).field0_0x0._s_0.X;
      (param_2->Origin).field0_0x0._s_0.Z = (pTVar9->Origin).field0_0x0._s_0.Z;
      (param_2->Rotation).field0_0x0._s_0.X = dVar4;
      dVar4 = (pTVar9->Rotation).field0_0x0._s_0.Z;
      (param_2->Rotation).field0_0x0._s_0.Y = (pTVar9->Rotation).field0_0x0._s_0.Y;
      (param_2->Rotation).field0_0x0._s_0.Z = dVar4;
      (param_2->Rotation).field0_0x0._s_0.W = (pTVar9->Rotation).field0_0x0._s_0.W;
    }
    else {
      *local_3c0 = local_60;
      pTVar10 = FMeshNormals::ComputeVertexNormal(&local_360,param_1,local_60,true,true);
      local_3a8._s_0.X = (pTVar10->field0_0x0)._s_0.X;
      local_3a8._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
      local_3a8._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
      pTVar9 = FDynamicMesh3::GetVertexFrame
                         (param_1,&local_310,uVar13,false,(TVector<double> *)&local_3a8._s_0);
      dVar4 = (pTVar9->Origin).field0_0x0._s_0.Y;
      (param_2->Origin).field0_0x0._s_0.X = (pTVar9->Origin).field0_0x0._s_0.X;
      (param_2->Origin).field0_0x0._s_0.Y = dVar4;
      dVar4 = (pTVar9->Rotation).field0_0x0._s_0.X;
      (param_2->Origin).field0_0x0._s_0.Z = (pTVar9->Origin).field0_0x0._s_0.Z;
      (param_2->Rotation).field0_0x0._s_0.X = dVar4;
      dVar4 = (pTVar9->Rotation).field0_0x0._s_0.Z;
      (param_2->Rotation).field0_0x0._s_0.Y = (pTVar9->Rotation).field0_0x0._s_0.Y;
      (param_2->Rotation).field0_0x0._s_0.Z = dVar4;
      (param_2->Rotation).field0_0x0._s_0.W = (pTVar9->Rotation).field0_0x0._s_0.W;
      if (local_3d7 != '\0') {
        local_378._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
        local_378._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
        local_390._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
        local_390._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
        local_390._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
        local_378._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
        TFrame3<double>::ConstrainedAlignPerpAxes
                  (param_2,0,1,2,(TVector<double> *)&local_378._s_0,
                   (TVector<double> *)&local_390._s_0,__real_3fee666666666666);
      }
      bVar7 = true;
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    if (local_b0.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.id_to_index.AllocatorInstance.Data);
    }
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
    ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_b0.nodes);
    TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
    ~TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
              (&local_c8);
    local_d0 = 0;
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    uVar14 = local_110 >> 0x20;
    local_110 = local_110 & 0xffffffff00000000;
    if ((int)uVar14 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_118,0,(int *)((longlong)&local_110 + 4));
    }
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_108.NumBits = 0;
    if (0x80 < (uint)local_108.MaxBits) {
      local_108.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_108,0);
    }
    if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    if (local_148 != (code *)0x0) {
      plVar11 = (longlong *)&local_138;
      if (plStack_120 != (longlong *)0x0) {
        plVar11 = plStack_120;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((code *)local_188 != (code *)0x0) {
      plVar11 = (longlong *)&local_178;
      if (plStack_160 != (longlong *)0x0) {
        plVar11 = plStack_160;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (local_3d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.AllocatorInstance.Data);
    }
  }
  if (local_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data);
  }
  if (local_228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data);
  }
  if (local_298._64_8_ != 0) {
    plVar11 = (longlong *)(local_298 + 0x50);
    if (local_230 != (longlong *)0x0) {
      plVar11 = local_230;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_298._24_8_,local_298._32_4_);
  if ((FEdgeSpan *)local_298._24_8_ != (FEdgeSpan *)0x0) {
    FMemory::Free((void *)local_298._24_8_);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_298._8_8_,local_298._16_4_);
  if ((FEdgeLoop *)local_298._8_8_ != (FEdgeLoop *)0x0) {
    FMemory::Free((void *)local_298._8_8_);
  }
  return bVar7;
}

// EstimateGeodesicCenterFrameVertex @ 14c801fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Geometry::FDynamicMeshUVEditor::EstimateGeodesicCenterFrameVertex
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TFrame3<double> *param_3,int *param_4,bool param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_678 [32];
  int local_648 [2];
  TVector<double>_u_0 local_640;
  double dStack_628;
  double dStack_620;
  double dStack_618;
  double dStack_610;
  FDynamicSubmesh3 local_608;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_678;
  FDynamicSubmesh3::FDynamicSubmesh3(&local_608,param_1,param_2,0,false);
  local_640._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_640._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_640._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_618 = ___xmm_3ff00000000000000000000000000000;
  dStack_610 = _UNK_15061cbc8;
  dStack_628 = 0.0;
  dStack_620 = 0.0;
  bVar1 = EstimateGeodesicCenterFrameVertex
                    (&local_608.Submesh,(TFrame3<double> *)&local_640._s_0,local_648,true);
  if (bVar1) {
    iVar2 = TIndexMap<int>::GetFrom(&local_608.Mappings.VertexMap,local_648[0]);
    *param_4 = iVar2;
    (param_3->Origin).field0_0x0._s_0.X = local_640._s_0.X;
    (param_3->Origin).field0_0x0._s_0.Y = local_640._s_0.Y;
    (param_3->Origin).field0_0x0._s_0.Z = local_640._s_0.Z;
    (param_3->Rotation).field0_0x0._s_0.X = dStack_628;
    (param_3->Rotation).field0_0x0._s_0.Y = dStack_620;
    (param_3->Rotation).field0_0x0._s_0.Z = dStack_618;
    (param_3->Rotation).field0_0x0._s_0.W = dStack_610;
  }
  FDynamicSubmesh3::~FDynamicSubmesh3(&local_608);
  return bVar1;
}

// MakeIsland @ 14c8196c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::MakeIsland
          (FDynamicMeshUVEditor *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1
          ,FUVEditResult *param_2,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ForElementType<FSetElementId> FVar13;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar14;
  ForElementType<FSetElementId> FVar15;
  int *piVar16;
  int iVar17;
  ForElementType<int> FVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  longlong lVar24;
  undefined1 auStackY_398 [32];
  undefined1 local_368;
  undefined1 local_367 [3];
  uint local_364;
  uint local_360 [2];
  FDynamicMeshUVEditor *local_358;
  uint local_350;
  TArray<int,TSizedDefaultAllocator<32>_> local_348;
  TArray<int,TSizedDefaultAllocator<32>_> *local_338;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_330;
  int iStack_328;
  uint uStack_324;
  undefined1 *local_320;
  undefined4 uStack_318;
  int iStack_314;
  int local_310;
  undefined4 uStack_30c;
  int iStack_308;
  undefined4 uStack_304;
  int local_300;
  int local_2fc;
  undefined4 local_2f4;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  undefined4 local_2d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2d0;
  FDynamicMeshUVEditor *local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  int local_2b0 [2];
  longlong *local_2a8;
  uint uStack_2a0;
  uint uStack_29c;
  TBitArray<FDefaultBitArrayAllocator> *local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  uint local_288;
  int iStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  undefined8 uStack_250;
  longlong *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  FSparseArrayAllocationInfo local_218;
  undefined8 local_208;
  ulonglong uStack_200;
  undefined8 local_1f8;
  ulonglong uStack_1f0;
  undefined4 local_1cc;
  undefined1 local_1c8 [32];
  ForElementType<unsigned_int> local_1a8;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  undefined1 local_190 [8];
  ForElementType<FSetElementId> local_188;
  int local_180;
  undefined1 local_178 [32];
  uint *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_128;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_d8;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_358 = this;
  local_338 = &param_2->NewUVElements;
  local_2d0 = param_3;
  if ((this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) ||
     (this->Mesh == (FDynamicMesh3 *)0x0)) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2321708304872504306>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x40e,"UVOverlay && Mesh");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    bVar7 = false;
  }
  else {
    MakeSureUVsAreSet(this,param_1,param_2,param_3);
    local_d8.Elements._44_4_ = 0x80;
    puVar1 = &(param_1->Elements).field_0x10;
    local_d8.Elements._0_8_ = 0;
    local_d8.Elements._8_8_ = 0;
    iStack_328 = 0;
    local_d8.Elements._32_8_ = 0;
    uStack_324 = 1;
    local_d8.Elements._40_4_ = 0;
    local_d8.Elements._52_4_ = 0;
    local_310 = 0;
    local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d8.HashSize = 0;
    local_128.Elements._0_8_ = 0;
    local_128.Elements._8_8_ = 0;
    local_128.Elements._32_8_ = 0;
    local_128.Elements._40_4_ = 0;
    local_128.Elements._52_4_ = 0;
    local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_128.HashSize = 0;
    local_178._0_8_ = 0;
    local_178._8_8_ = 0;
    local_158 = (uint *)0x0;
    local_150 = 0;
    local_144 = 0;
    local_138 = (ForElementType<FSetElementId>)0x0;
    local_130 = 0;
    local_1c8._0_8_ = (FScriptContainerElement *)0x0;
    local_1c8._8_8_ = 0;
    local_1a8 = (ForElementType<unsigned_int>)0x0;
    local_1a0 = 0;
    local_194 = 0;
    local_188 = (ForElementType<FSetElementId>)0x0;
    local_180 = 0;
    local_d8.Elements._48_4_ = 0xffffffff;
    local_128.Elements._44_4_ = 0x80;
    local_128.Elements._48_4_ = 0xffffffff;
    local_14c = 0x80;
    local_148 = 0xffffffff;
    local_19c = 0x80;
    local_198 = -1;
    iVar10 = *(int *)&(param_1->Elements).field_0x28;
    iStack_314 = iStack_328;
    if (iVar10 != 0) {
      puVar23 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar20 = *puVar23;
      local_310 = 0;
      iStack_328 = 0;
      while (uVar20 == 0) {
        lVar11 = (longlong)iStack_328;
        local_310 = local_310 + 0x20;
        iStack_328 = iStack_328 + 1;
        iStack_314 = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_328)
        goto LAB_14c8198ad;
        uVar20 = puVar23[lVar11 + 1];
      }
      uStack_324 = -uVar20 & uVar20;
      uVar12 = (ulonglong)uStack_324 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_300 = (int)lVar11;
      iStack_314 = local_300 + -1 + local_310;
      if (iVar10 < iStack_314) {
        iStack_314 = iVar10;
      }
    }
LAB_14c8198ad:
    uVar20 = *(uint *)&(param_1->Elements).field_0x28;
    uStack_30c = local_1cc;
    uVar19 = uVar20 & 0xffffffe0;
    iStack_308 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uStack_318 = 0xffffffff;
    TStack_270._padding_ = CONCAT44(uStack_324,iStack_328);
    TStack_270.CurrentBitIndex = iStack_314;
    TStack_270.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar20 >> 5;
    TStack_270._28_4_ = local_1cc;
    TStack_270.BaseBitIndex = local_310;
    uStack_250 = CONCAT44(uStack_304,iStack_308);
    local_364 = uVar20;
    local_330 = param_1;
    local_320 = puVar1;
    local_278 = param_1;
    TStack_270.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar20 < 0) || (iVar10 < (int)uVar20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    uVar21 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar20 != uVar21) {
      puVar22 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar1;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
      while (uVar20 == 0) {
        lVar11 = (longlong)iVar17;
        uVar19 = uVar19 + 0x20;
        iVar17 = iVar17 + 1;
        uVar20 = uVar21;
        local_364 = uVar21;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14c8199c1;
        uVar20 = *(uint *)(puVar22 + lVar11 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_2fc = (int)lVar11;
      uVar20 = (uVar19 - 1) + local_2fc;
      local_364 = uVar20;
      if ((int)uVar21 < (int)uVar20) {
        uVar20 = uVar21;
        local_364 = uVar21;
      }
    }
LAB_14c8199c1:
    while( true ) {
      pTVar14 = local_278;
      if (*(int *)&(local_278->Elements).field_0x8 - *(int *)&(local_278->Elements).field_0x34 !=
          (int)uStack_250) {
        local_368 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_368);
      }
      if (((TStack_270.CurrentBitIndex == uVar20) &&
          (TStack_270.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)) &&
         (pTVar14 == param_1)) break;
      local_350 = *(uint *)(*(longlong *)&pTVar14->Elements +
                           (longlong)TStack_270.CurrentBitIndex * 0xc);
      lVar24 = 0;
      lVar11 = *(longlong *)
                ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_350 >> 9) * 8);
      local_2c0 = *(undefined8 *)(lVar11 + (ulonglong)(local_350 & 0x1ff) * 0xc);
      local_2b8 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(local_350 & 0x1ff) * 0xc);
      do {
        uVar20 = *(uint *)((longlong)&local_2c0 + lVar24 * 4);
        local_360[0] = uVar20;
        if (local_194 == 0) {
          iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,1,(ForAnyElementType *)local_1c8,(int *)(local_1c8 + 8),
                              (int *)(local_1c8 + 0xc));
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1c8 + 0x10),false);
          iVar10 = local_198;
        }
        else {
          iVar10 = *(int *)(local_1c8._0_8_ + (longlong)local_198 * 0xc + 4);
          local_194 = local_194 + -1;
          iVar17 = local_198;
          if (local_194 != 0) {
            *(undefined4 *)(local_1c8._0_8_ + (longlong)iVar10 * 0xc) = 0xffffffff;
          }
        }
        local_198 = iVar10;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_1c8,&local_218,iVar17);
        if (local_218.Pointer != (uint *)0x0) {
          *(uint *)local_218.Pointer = uVar20;
          *(uint *)((longlong)local_218.Pointer + 4) = 0xffffffff;
        }
        uVar19 = *(uint *)local_218.Pointer;
        if ((local_1c8._8_4_ - local_194 != 1) && (local_1c8._8_4_ != local_194)) {
          FVar15 = (ForElementType<FSetElementId>)local_190;
          if (local_188 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_188;
          }
          for (iVar10 = *(int *)((longlong)FVar15 + (ulonglong)(local_180 - 1U & uVar19) * 4);
              iVar10 != -1; iVar10 = *(int *)(local_1c8._0_8_ + (longlong)iVar10 * 0xc + 4)) {
            if (*(uint *)(local_1c8._0_8_ + (longlong)iVar10 * 0xc) == uVar19) {
              this = local_358;
              if (iVar10 != -1) {
                *(uint *)(local_1c8._0_8_ + (longlong)iVar10 * 0xc) = uVar19;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_1c8,local_218.Index,1);
                this = local_358;
                goto LAB_14c819d74;
              }
              break;
            }
          }
        }
        uVar21 = local_1c8._8_4_ - local_194;
        if (uVar21 < 4) {
          iVar10 = 1;
        }
        else {
          uVar12 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_2f4 = (undefined4)lVar11;
          iVar10 = 1 << ((byte)lVar11 & 0x1f);
        }
        if (((int)uVar21 < 1) || (iVar10 <= local_180)) {
          uVar19 = local_180 - 1U & uVar19;
          *(uint *)((longlong)local_218.Pointer + 8) = uVar19;
          FVar15 = (ForElementType<FSetElementId>)local_190;
          if (local_188 != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_188;
          }
          uVar12 = (longlong)local_180 - 1U & (longlong)(int)uVar19;
          *(uint *)((longlong)local_218.Pointer + 4) = *(uint *)((longlong)FVar15 + uVar12 * 4);
          *(int *)((longlong)FVar15 + uVar12 * 4) = local_218.Index;
        }
        else {
          local_180 = iVar10;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1c8);
        }
        lVar11 = *(longlong *)
                  ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8)
        ;
        puVar2 = (undefined8 *)(lVar11 + (ulonglong)(uVar20 & 0x1ff) * 0x10);
        local_208 = *puVar2;
        uStack_200 = puVar2[1];
        uVar12 = *(ulonglong *)(lVar11 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0x10);
        local_1f8 = local_208;
        uStack_1f0 = uStack_200;
        if ((int)(uVar12 >> 0x20) != -1) {
          bVar7 = TDynamicMeshOverlay<float,2>::IsSeamEdge
                            ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,uVar20,(bool *)0x0);
          if ((uint)uVar12 == local_350) {
            uVar12 = uStack_1f0 >> 0x20;
          }
          if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
            FVar15 = (param_1->Hash).SecondaryData;
            FVar13 = (ForElementType<FSetElementId>)&param_1->Hash;
            if (FVar15 != (ForElementType<FSetElementId>)0x0) {
              FVar13 = FVar15;
            }
            iVar10 = *(int *)((longlong)FVar13 +
                             ((ulonglong)(param_1->HashSize - 1) & uVar12 & 0xffffffff) * 4);
            if (iVar10 != -1) {
              do {
                if (*(int *)(*(longlong *)&param_1->Elements + (longlong)iVar10 * 0xc) ==
                    (int)uVar12) goto LAB_14c819d0b;
                iVar10 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar10 * 0xc);
              } while (iVar10 != -1);
            }
          }
          iVar10 = -1;
LAB_14c819d0b:
          if (bVar7 != (iVar10 == -1)) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_178,&local_2f0
                       ,(bool *)&local_208);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_178,&local_2ec
                       ,(bool *)((longlong)&local_208 + 4));
            if (iVar10 == -1) {
              piVar16 = &local_2e8;
              pTVar14 = &local_d8;
            }
            else {
              piVar16 = &local_2e4;
              pTVar14 = &local_128;
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (pTVar14,piVar16,(bool *)local_360);
          }
        }
LAB_14c819d74:
        lVar24 = lVar24 + 1;
      } while (lVar24 < 3);
      TStack_270.UnvisitedBitMask = TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
      uVar20 = local_364;
    }
    if ((local_128.Elements._8_4_ == local_128.Elements._52_4_) &&
       (local_d8.Elements._8_4_ == local_d8.Elements._52_4_)) {
      bVar7 = true;
    }
    else {
      local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348.ArrayNum = 0;
      local_348.ArrayMax = 0;
      bVar7 = FDynamicMeshEditor::CreateSeamsAtEdges
                        (&local_d8,(TDynamicMeshOverlay<float,2> *)this->UVOverlay,&local_348);
      pTVar5 = local_338;
      if (local_338 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        if ((local_338 == &local_348) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        lVar11 = (longlong)local_348.ArrayNum;
        if (local_348.ArrayNum != 0) {
          iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,local_348.ArrayNum,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,
                              &pTVar5->ArrayMax);
          memcpy((pTVar5->AllocatorInstance).Data + (longlong)iVar10 * 4,
                 local_348.AllocatorInstance.Data,lVar11 << 2);
        }
      }
      bVar9 = FDynamicMeshEditor::RemoveSeamsAtEdges
                        (&local_128,(TDynamicMeshOverlay<float,2> *)this->UVOverlay);
      uVar20 = local_150;
      pTVar14 = local_2d0;
      if ((bVar9) && (bVar7)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (local_2d0 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
        uStack_2a0 = 0;
        uStack_29c = 1;
        local_288 = 0;
        uStack_28c = uStack_2a0;
        if (local_150 != 0) {
          puVar23 = (uint *)(local_178 + 0x10);
          if (local_158 != (uint *)0x0) {
            puVar23 = local_158;
          }
          uVar19 = *puVar23;
          local_288 = 0;
          uStack_2a0 = 0;
          while (uVar19 == 0) {
            lVar11 = (longlong)(int)uStack_2a0;
            local_288 = local_288 + 0x20;
            uStack_2a0 = uStack_2a0 + 1;
            uStack_28c = local_150;
            if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)uStack_2a0) goto LAB_14c819f20;
            uVar19 = puVar23[lVar11 + 1];
          }
          uStack_29c = -uVar19 & uVar19;
          uVar12 = (ulonglong)uStack_29c * 2 + 1;
          lVar11 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_2e0 = (int)lVar11;
          uStack_28c = local_2e0 + -1 + local_288;
          if ((int)local_150 < (int)uStack_28c) {
            uStack_28c = local_150;
          }
        }
LAB_14c819f20:
        local_2a8 = (longlong *)local_178;
        iStack_284 = iStack_314;
        local_298 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
        uVar19 = local_150 & 0xffffffe0;
        iStack_280 = local_178._8_4_ - local_144;
        uStack_290 = 0xffffffff;
        TStack_240.CurrentBitIndex = uStack_28c;
        TStack_240.UnvisitedBitMask = 0xffffffff;
        local_364 = -1 << ((byte)local_150 & 0x1f);
        TStack_240._padding_ = CONCAT44(uStack_29c,uStack_2a0);
        iVar10 = (int)local_150 >> 5;
        TStack_240._28_4_ = iStack_314;
        TStack_240.BaseBitIndex = local_288;
        uStack_220 = CONCAT44(uStack_27c,iStack_280);
        local_248 = local_2a8;
        TStack_240.Array = local_298;
        if (((int)local_150 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        this = local_358;
        if (uVar20 != local_150) {
          puVar23 = (uint *)(local_178 + 0x10);
          if (local_158 != (uint *)0x0) {
            puVar23 = local_158;
          }
          uVar20 = local_364 & puVar23[iVar10];
          while (uVar20 == 0) {
            lVar11 = (longlong)iVar10;
            uVar19 = uVar19 + 0x20;
            iVar10 = iVar10 + 1;
            uVar20 = local_150;
            if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
            goto LAB_14c81a050;
            uVar20 = puVar23[lVar11 + 1];
          }
          uVar12 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_2dc = (int)lVar11;
          uVar20 = (uVar19 - 1) + local_2dc;
          if ((int)local_150 < (int)uVar20) {
            uVar20 = local_150;
          }
        }
LAB_14c81a050:
        while( true ) {
          plVar6 = local_248;
          if ((int)local_248[1] - *(int *)((longlong)local_248 + 0x34) != (int)uStack_220) {
            local_367[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_367);
          }
          if (((TStack_240.CurrentBitIndex == uVar20) &&
              (TStack_240.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
             (plVar6 == (longlong *)local_178)) break;
          local_88.ArrayMax = 8;
          local_88.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
          local_88.ArrayNum = 0;
          FDynamicMesh3::
          GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                    (this->Mesh,*(int *)(*plVar6 + (longlong)TStack_240.CurrentBitIndex * 0xc),
                     &local_88);
          iVar10 = local_88.ArrayNum;
          lVar11 = (longlong)local_88.ArrayNum;
          FVar18 = (ForElementType<int>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar18 = local_88.AllocatorInstance.SecondaryData;
          }
          if ((local_88.ArrayNum < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          uVar19 = *(int *)&(pTVar14->Elements).field_0x8 - *(int *)&(pTVar14->Elements).field_0x34;
          uVar21 = iVar10 + uVar19;
          if (uVar19 < uVar21) {
            if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
            }
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar14,uVar21);
            if (uVar21 < 4) {
              iVar10 = 1;
            }
            else {
              uVar12 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
              lVar24 = 0x3f;
              if (uVar12 != 0) {
                for (; uVar12 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              local_2d8 = (undefined4)lVar24;
              iVar10 = 1 << ((byte)lVar24 & 0x1f);
            }
            if ((pTVar14->HashSize == 0) || (pTVar14->HashSize < iVar10)) {
              pTVar14->HashSize = iVar10;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar14);
            }
          }
          FVar3 = (ForElementType<int>)((longlong)FVar18 + lVar11 * 4);
          for (; FVar18 != FVar3; FVar18 = (ForElementType<int>)((longlong)FVar18 + 4)) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (pTVar14,local_2b0,(bool *)FVar18);
          }
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
          }
          TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
        }
      }
      if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.AllocatorInstance.Data);
      }
    }
    local_180 = 0;
    if (local_188 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_188);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1c8);
    local_130 = 0;
    if (local_138 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_138);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_178);
    local_128.HashSize = 0;
    if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_128.Elements);
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d8.Elements);
    if (local_338 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      local_2c8 = this;
      TArray<int,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<__UE::Geometry::FDynamicMeshUVEditor::MakeIsland_::__l2::<lambda_1>::operator()_::__l5::<lambda_1>_>
                (local_338,(<lambda_1> *)&local_2c8,Default);
    }
  }
  return bVar7;
}

// MakeSureUVsAreSet @ 14c81a310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::MakeSureUVsAreSet
          (FDynamicMeshUVEditor *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1
          ,FUVEditResult *param_2,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  undefined1 local_164 [4];
  ForElementType<unsigned_int> local_160;
  FIndex3i_u_0 local_158;
  undefined1 local_148 [4];
  uint local_144;
  TVector2<float>_u_0 local_140;
  undefined8 local_138;
  uint local_130 [2];
  uint *local_128;
  uint *local_120;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  int local_e0 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_d8 = param_1;
  local_d0 = param_3;
  if ((this->Mesh == (FDynamicMesh3 *)0x0) ||
     (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2321708304872504365>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x3d3,"Mesh && UVOverlay");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    iStack_110 = 0;
    uStack_10c = 1;
    local_160 = (ForElementType<unsigned_int>)&(param_1->Elements).field_0x10;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_f8 = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    iVar9 = *(int *)&(param_1->Elements).field_0x28;
    iStack_fc = iStack_110;
    if (iVar9 != 0) {
      puVar17 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)local_160;
      }
      uVar14 = *puVar17;
      local_f8 = 0;
      iStack_110 = 0;
      while (uVar14 == 0) {
        lVar11 = (longlong)iStack_110;
        local_f8 = local_f8 + 0x20;
        iStack_110 = iStack_110 + 1;
        iStack_fc = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_110) goto LAB_14c81a423;
        uVar14 = (puVar17 + 1)[lVar11];
      }
      uStack_10c = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_10c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_e8 = (int)lVar11;
      iStack_fc = local_e8 + -1 + local_f8;
      if (iVar9 < iStack_fc) {
        iStack_fc = iVar9;
      }
    }
LAB_14c81a423:
    uVar14 = *(uint *)&(param_1->Elements).field_0x28;
    iStack_f0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar18 = uVar14 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uStack_10c,iStack_110);
    uStack_100 = 0xffffffff;
    TStack_c0.CurrentBitIndex = iStack_fc;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_c0._28_4_ = iStack_fc;
    TStack_c0.BaseBitIndex = local_f8;
    uStack_a0 = CONCAT44(uStack_ec,iStack_f0);
    local_118 = param_1;
    local_108 = (undefined1 *)local_160;
    iStack_f4 = iStack_fc;
    local_c8 = param_1;
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_160;
    if ((((int)uVar14 < 0) || (iVar9 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar6 = local_d8;
    uVar3 = *(int *)((longlong)local_160 + 0x18);
    if (uVar14 != uVar3) {
      FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_160 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_160 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_160;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar15;
        uVar18 = uVar18 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14c81a52f;
        uVar14 = *(uint *)((undefined1 *)((longlong)FVar16 + 4) + lVar11 * 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_e4 = (int)lVar11;
      uVar14 = local_e4 + -1 + uVar18;
      if ((int)uVar3 < (int)uVar14) {
        uVar14 = uVar3;
      }
    }
LAB_14c81a52f:
    puVar17 = (uint *)0x0;
    while( true ) {
      pTVar7 = local_c8;
      if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
          (int)uStack_a0) {
        local_164[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_164);
      }
      if (((TStack_c0.CurrentBitIndex == uVar14) &&
          ((ForElementType<unsigned_int>)TStack_c0.Array == local_160)) && (pTVar7 == pTVar6))
      break;
      local_144 = *(uint *)(*(longlong *)&pTVar7->Elements +
                           (longlong)TStack_c0.CurrentBitIndex * 0xc);
      if (*(int *)(*(longlong *)
                    ((((TDynamicMeshOverlay<float,2> *)this->UVOverlay)->ElementTriangles).Blocks.
                     AllocatorInstance.Data + (ulonglong)(local_144 * 3 >> 9) * 8) +
                  (ulonglong)(local_144 * 3 & 0x1ff) * 4) < 0) {
        local_158._0_8_ = 0xffffffffffffffff;
        local_158._s_0.C = -1;
        lVar11 = *(longlong *)
                  ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_144 >> 9) * 8);
        local_138 = *(undefined8 *)(lVar11 + (ulonglong)(local_144 & 0x1ff) * 0xc);
        local_130[0] = *(uint *)(lVar11 + 8 + (ulonglong)(local_144 & 0x1ff) * 0xc);
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_98.Hash.SecondaryData;
          }
          uVar18 = *(uint *)((longlong)FVar13 +
                            (ulonglong)(local_98.HashSize - 1U & (uint)local_138) * 4);
          while (uVar18 != 0xffffffff) {
            puVar12 = (uint *)((longlong)(int)uVar18 * 0x10 + local_98.Elements._0_8_);
            if (*puVar12 == (uint)local_138) {
              puVar10 = puVar12 + 1;
              if (puVar12 == (uint *)0x0) {
                puVar10 = puVar17;
              }
              if (puVar10 != (uint *)0x0) {
                local_158._s_0.B = 0xffffffff;
                local_158._s_0.A = *puVar10;
                goto LAB_14c81a737;
              }
              break;
            }
            uVar18 = puVar12[2];
          }
        }
        local_140 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_168 = TDynamicMeshOverlay<float,2>::AppendElement
                              ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,local_140.XY);
        local_158._s_0.A = local_168;
        local_128 = (uint *)&local_138;
        local_120 = &local_168;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  (&local_98,(TPairInitializer<int_const_&,int_const_&> *)local_148,
                   (bool *)&local_128);
        if (param_2 != (FUVEditResult *)0x0) {
          pFVar4 = (param_2->NewUVElements).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 <
               pFVar4 + (longlong)(param_2->NewUVElements).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (param_2->NewUVElements).ArrayNum;
          piVar1 = &(param_2->NewUVElements).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)param_2,piVar1);
          }
          (param_2->NewUVElements).ArrayNum = iVar9 + 1;
          *(uint *)((param_2->NewUVElements).AllocatorInstance.Data + (longlong)iVar9 * 4) =
               local_168;
        }
LAB_14c81a737:
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_98.Hash.SecondaryData;
          }
          uVar18 = *(uint *)((longlong)FVar13 +
                            (ulonglong)(local_98.HashSize - 1U & local_138._4_4_) * 4);
          while (uVar18 != 0xffffffff) {
            puVar12 = (uint *)((longlong)(int)uVar18 * 0x10 + local_98.Elements._0_8_);
            if (*puVar12 == local_138._4_4_) {
              puVar10 = puVar12 + 1;
              if (puVar12 == (uint *)0x0) {
                puVar10 = puVar17;
              }
              if (puVar10 != (uint *)0x0) {
                local_158._s_0.B = *puVar10;
                goto LAB_14c81a869;
              }
              break;
            }
            uVar18 = puVar12[2];
          }
        }
        local_140 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_168 = TDynamicMeshOverlay<float,2>::AppendElement
                              ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,local_140.XY);
        local_158._s_0.B = local_168;
        local_128 = (uint *)((longlong)&local_138 + 4);
        local_120 = &local_168;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  (&local_98,(TPairInitializer<int_const_&,int_const_&> *)local_148,
                   (bool *)&local_128);
        if (param_2 != (FUVEditResult *)0x0) {
          pFVar4 = (param_2->NewUVElements).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 <
               pFVar4 + (longlong)(param_2->NewUVElements).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (param_2->NewUVElements).ArrayNum;
          piVar1 = &(param_2->NewUVElements).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)param_2,piVar1);
          }
          (param_2->NewUVElements).ArrayNum = iVar9 + 1;
          *(uint *)((param_2->NewUVElements).AllocatorInstance.Data + (longlong)iVar9 * 4) =
               local_168;
        }
LAB_14c81a869:
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_98.Hash.SecondaryData;
          }
          uVar18 = *(uint *)((longlong)FVar13 +
                            (ulonglong)(local_98.HashSize - 1U & local_130[0]) * 4);
          while (uVar18 != 0xffffffff) {
            puVar12 = (uint *)((longlong)(int)uVar18 * 0x10 + local_98.Elements._0_8_);
            if (*puVar12 == local_130[0]) {
              puVar10 = puVar12 + 1;
              if (puVar12 == (uint *)0x0) {
                puVar10 = puVar17;
              }
              if (puVar10 != (uint *)0x0) {
                local_158._s_0.C = *puVar10;
                goto LAB_14c81a997;
              }
              break;
            }
            uVar18 = puVar12[2];
          }
        }
        local_140 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_168 = TDynamicMeshOverlay<float,2>::AppendElement
                              ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,local_140.XY);
        local_128 = local_130;
        local_120 = &local_168;
        local_158._s_0.C = local_168;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  (&local_98,(TPairInitializer<int_const_&,int_const_&> *)local_148,
                   (bool *)&local_128);
        if (param_2 != (FUVEditResult *)0x0) {
          pFVar4 = (param_2->NewUVElements).AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 <
               pFVar4 + (longlong)(param_2->NewUVElements).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (param_2->NewUVElements).ArrayNum;
          piVar1 = &(param_2->NewUVElements).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)param_2,piVar1);
          }
          (param_2->NewUVElements).ArrayNum = iVar9 + 1;
          *(uint *)((param_2->NewUVElements).AllocatorInstance.Data + (longlong)iVar9 * 4) =
               local_168;
        }
LAB_14c81a997:
        TDynamicMeshOverlay<float,2>::SetTriangle
                  ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,local_144,
                   (FIndex3i *)&local_158._s_0,true);
        if (local_d0 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (local_d0,local_e0,(bool *)&local_144);
        }
      }
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return;
}

// QuickPack @ 14c8206b0

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::QuickPack(FDynamicMeshUVEditor *this,int param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FDynamicMeshUVPacker local_38;
  
  TDynamicMeshOverlay<float,2>::SplitBowties((TDynamicMeshOverlay<float,2> *)this->UVOverlay,true);
  FDynamicMeshUVPacker::FDynamicMeshUVPacker(&local_38,this->UVOverlay);
  local_38.bAllowFlips = false;
  local_38.TextureResolution = param_1;
  local_38.GutterSize = param_2;
  bVar2 = FDynamicMeshUVPacker::StandardPack(&local_38);
  if (local_38.TidsToRepack.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar1 = ((local_38.TidsToRepack.Ptr)->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(local_38.TidsToRepack.Ptr,0x10);
  }
  return bVar2;
}

// RemoveSeamsAtEdges @ 14c823fc0

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::RemoveSeamsAtEdges
          (FDynamicMeshUVEditor *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1
          )

{
  bool bVar1;
  
  bVar1 = FDynamicMeshEditor::RemoveSeamsAtEdges
                    (param_1,(TDynamicMeshOverlay<float,2> *)this->UVOverlay);
  return bVar1;
}

// RemoveUVLayer @ 14c824080

int __thiscall UE::Geometry::FDynamicMeshUVEditor::RemoveUVLayer(FDynamicMeshUVEditor *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar4;
  FDynamicMeshAttributeSet *pFVar5;
  int iVar6;
  FDynamicMeshAttributeSet *pFVar7;
  longlong lVar8;
  int iVar9;
  FDynamicMeshAttributeSet *pFVar10;
  FDynamicMeshAttributeSet *this_00;
  
  iVar3 = (**(code **)(((this->Mesh->AttributeSet).Ptr)->_padding_ + 0xa8))();
  if (iVar3 == 1) {
    return 0;
  }
  iVar9 = this->UVOverlayIndex;
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  iVar6 = iVar9 + 1;
  for (lVar8 = (longlong)iVar6; lVar8 < iVar3; lVar8 = lVar8 + 1) {
    pFVar10 = (this->Mesh->AttributeSet).Ptr;
    pFVar5 = this_00;
    if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar5 = pFVar10;
    }
    pFVar10 = this_00;
    if ((iVar6 < (pFVar5->UVLayers).Array.ArrayNum) && (-1 < iVar6)) {
      if ((iVar6 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      pFVar10 = *(FDynamicMeshAttributeSet **)
                 ((pFVar5->UVLayers).Array.AllocatorInstance.Data + lVar8 * 8);
    }
    pFVar5 = (this->Mesh->AttributeSet).Ptr;
    pFVar7 = this_00;
    if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar7 = pFVar5;
    }
    pFVar5 = this_00;
    if ((iVar9 < (pFVar7->UVLayers).Array.ArrayNum) && (-1 < iVar9)) {
      if ((iVar9 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      pFVar5 = *(FDynamicMeshAttributeSet **)
                ((pFVar7->UVLayers).Array.AllocatorInstance.Data + lVar8 * 8 + -8);
    }
    this->UVOverlay = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar5;
    CopyUVLayer(this,(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar10);
    iVar6 = iVar6 + 1;
    iVar9 = iVar9 + 1;
  }
  pFVar10 = (this->Mesh->AttributeSet).Ptr;
  (**(code **)(pFVar10->_padding_ + 0xb0))(pFVar10,iVar3 + -1);
  iVar6 = this->UVOverlayIndex + -1;
  iVar3 = 0;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  pFVar10 = (this->Mesh->AttributeSet).Ptr;
  if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar10;
  }
  pTVar4 = FDynamicMeshAttributeSet::GetUVLayer(this_00,iVar3);
  this->UVOverlay = pTVar4;
  this->UVOverlayIndex = iVar3;
  if ((pTVar4 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UVOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return iVar3;
}

// ResetUVs @ 14c824870

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::ResetUVs
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TDynamicMeshOverlay<float,2> *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this_00 = (TDynamicMeshOverlay<float,2> *)this->UVOverlay;
  if (this_00 == (TDynamicMeshOverlay<float,2> *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2321708304872505200>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x90,"UVOverlay");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar5 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar1) break;
      TDynamicMeshOverlay<float,2>::UnsetTriangle(this_00,*(int *)pFVar5,true);
      pFVar5 = pFVar5 + 4;
    }
  }
  return;
}

// ResetUVs @ 14c824920

void __thiscall UE::Geometry::FDynamicMeshUVEditor::ResetUVs(FDynamicMeshUVEditor *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((TDynamicMeshOverlay<float,2> *)this->UVOverlay != (TDynamicMeshOverlay<float,2> *)0x0) {
    TDynamicMeshOverlay<float,2>::ClearElements((TDynamicMeshOverlay<float,2> *)this->UVOverlay);
    return;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2321708304872505208>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                     ,0x88,"UVOverlay");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ScaleUVAreaTo3DArea @ 14c824a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::ScaleUVAreaTo3DArea
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          float param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 uVar12;
  short sVar13;
  TVector2<double> *pTVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  float local_1a0;
  float fStack_19c;
  int local_198;
  undefined4 local_194;
  undefined4 local_190 [2];
  undefined8 local_188;
  TVector2<float>_u_0 local_180;
  undefined8 uStack_178;
  longlong *local_170;
  uint uStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  int local_138 [2];
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  TVector2<double> local_100;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pTVar14 = TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea(&local_100,this->Mesh,param_1);
  dVar7 = __real_3e80000000000000;
  dVar3 = *(double *)((longlong)&pTVar14->field0_0x0 + 8);
  if (((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
       __real_3e80000000000000) || (sVar13 = _dclass(), 0 < sVar13)) {
    return false;
  }
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  uVar22 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_180 = ___xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  uStack_178 = _UNK_150a9e6c8;
  dVar27 = DetermineAreaFromUVs(this->UVOverlay,param_1,(TAxisAlignedBox2<float> *)&local_180._s_0);
  pFVar19 = (param_1->AllocatorInstance).Data;
  iVar17 = param_1->ArrayNum;
  pFVar1 = pFVar19 + (longlong)iVar17 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar17) {
      local_1a8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1a8);
    }
    if (pFVar19 == pFVar1) break;
    uVar21 = *(int *)pFVar19 * 3;
    lVar16 = *(longlong *)&this->UVOverlay->field_0x78;
    iVar18 = *(int *)(*(longlong *)(lVar16 + (ulonglong)(uVar21 >> 9) * 8) +
                     (ulonglong)(uVar21 & 0x1ff) * 4);
    if (-1 < iVar18) {
      local_194 = *(undefined4 *)
                   (*(longlong *)(lVar16 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                   (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
      local_190[0] = *(undefined4 *)
                      (*(longlong *)(lVar16 + (ulonglong)(uVar21 + 2 >> 9) * 8) +
                      (ulonglong)(uVar21 + 2 & 0x1ff) * 4);
      local_198 = iVar18;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,&local_140,
                 (bool *)&local_198);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,&local_13c,
                 (bool *)&local_194);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,local_138,
                 (bool *)local_190);
    }
    pFVar19 = pFVar19 + 4;
  }
  iVar17 = local_e8._8_4_ - local_b4;
  if (((iVar17 != 0) &&
      (dVar7 <= (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
     && (sVar13 = _dclass(), sVar13 < 1)) {
    sVar13 = _dclass();
    uVar21 = local_c0;
    if (sVar13 < 1) {
      uStack_164 = 1;
      local_150 = 0;
      fVar29 = (local_180._s_0.X + (float)uStack_178) * __real_3f000000;
      fVar30 = (local_180._s_0.Y + uStack_178._4_4_) * __real_3f000000;
      local_188._4_4_ = fVar30;
      local_188._0_4_ = fVar29;
      if (param_2) {
        local_188 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      }
      uStack_154 = local_150;
      local_1a0 = fVar29;
      if (local_c0 != 0) {
        puVar23 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar23 = local_c8;
        }
        uVar26 = *puVar23;
        local_150 = 0;
        uVar22 = 0;
        while (uVar26 == 0) {
          lVar16 = (longlong)(int)uVar22;
          local_150 = local_150 + 0x20;
          uVar22 = uVar22 + 1;
          uStack_154 = local_c0;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
          goto LAB_14c824d21;
          uVar26 = puVar23[lVar16 + 1];
        }
        uStack_164 = -uVar26 & uVar26;
        uVar20 = (ulonglong)uStack_164 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1a0 = (float)lVar16;
        uStack_154 = (local_150 - 1) + (int)local_1a0;
        if ((int)local_c0 < (int)uStack_154) {
          uStack_154 = local_c0;
        }
      }
LAB_14c824d21:
      local_170 = (longlong *)local_e8;
      local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      uVar26 = local_c0 & 0xffffffe0;
      uStack_158 = 0xffffffff;
      TStack_128.CurrentBitIndex = uStack_154;
      TStack_128.UnvisitedBitMask = 0xffffffff;
      TStack_128._padding_ = CONCAT44(uStack_164,uVar22);
      iVar18 = (int)local_c0 >> 5;
      TStack_128._28_4_ = uStack_154;
      TStack_128.BaseBitIndex = local_150;
      uStack_108 = CONCAT44(uStack_144,iVar17);
      bVar15 = (byte)local_c0;
      fStack_19c = fVar30;
      uStack_168 = uVar22;
      uStack_14c = uStack_154;
      iStack_148 = iVar17;
      local_130 = local_170;
      TStack_128.Array = local_160;
      if (((int)local_c0 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      if (uVar21 != local_c0) {
        puVar23 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar23 = local_c8;
        }
        uVar22 = -1 << (bVar15 & 0x1f) & puVar23[iVar18];
        while (uVar22 == 0) {
          lVar16 = (longlong)iVar18;
          uVar26 = uVar26 + 0x20;
          iVar18 = iVar18 + 1;
          uVar21 = local_c0;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_14c824e1e;
          uVar22 = puVar23[lVar16 + 1];
        }
        uVar20 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar21 = (int)lVar16 + -1 + uVar26;
        if ((int)local_c0 < (int)uVar21) {
          uVar21 = local_c0;
        }
      }
LAB_14c824e1e:
      fVar9 = (float)local_188._4_4_;
      fVar8 = (float)(undefined4)local_188;
      while( true ) {
        plVar10 = local_130;
        if ((int)local_130[1] - *(int *)((longlong)local_130 + 0x34) != (int)uStack_108) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a7);
        }
        if (((TStack_128.CurrentBitIndex == uVar21) &&
            (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
           (plVar10 == (longlong *)local_e8)) break;
        pTVar4 = this->UVOverlay;
        fVar28 = (float)((SQRT(dVar3) * (double)param_3) / SQRT(dVar27));
        uVar22 = *(uint *)(*plVar10 + (longlong)TStack_128.CurrentBitIndex * 0xc);
        lVar16 = *(longlong *)&pTVar4->field_0x48;
        uVar20 = (ulonglong)((uVar22 & 0x7fffffff) >> 8);
        uVar25 = (ulonglong)(uVar22 * 2 & 0x1ff);
        uVar24 = (ulonglong)(uVar22 * 2 + 1 & 0x1ff);
        lVar5 = *(longlong *)(lVar16 + (ulonglong)((uVar22 & 0x7fffffff) >> 8) * 8);
        fVar2 = *(float *)(*(longlong *)(lVar16 + uVar20 * 8) + uVar24 * 4);
        *(float *)(lVar5 + uVar25 * 4) = (*(float *)(lVar5 + uVar25 * 4) - fVar29) * fVar28 + fVar8;
        TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
        *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar20 * 8) + uVar24 * 4) =
             (fVar2 - fVar30) * fVar28 + fVar9;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
      }
      bVar11 = true;
      goto LAB_14c824f1b;
    }
  }
  bVar11 = false;
LAB_14c824f1b:
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return bVar11;
}

// ScaleUVAreaToBoundingBox @ 14c824fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::ScaleUVAreaToBoundingBox
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TAxisAlignedBox2<float> *param_2,bool param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  TVector2<float>_u_0 local_150;
  undefined8 local_148;
  int local_140 [4];
  undefined1 local_130 [4];
  undefined4 uStack_12c;
  int local_128 [2];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  int local_108 [4];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_f8;
  ulonglong local_a8;
  
  dVar6 = __real_3e80000000000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_178;
  fVar16 = (param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y;
  fVar13 = (param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (((double)CONCAT44((uint)((ulonglong)(double)(fVar16 * fVar13) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84((double)(fVar16 * fVar13),0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) < __real_3e80000000000000) ||
     (sVar9 = _dclass(), 0 < sVar9)) {
    return false;
  }
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  local_140[2] = 0x7f7fffff;
  local_140[3] = 0x7f7fffff;
  local_150 = (TVector2<float>_u_0)0x7f7fffff7f7fffff;
  local_140[0] = -0x800001;
  local_140[1] = 0xff7fffff;
  local_148 = (float *)0xff7fffffff7fffff;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._48_4_ = 0xffffffff;
  dVar15 = DetermineAreaFromUVs(this->UVOverlay,param_1,(TAxisAlignedBox2<float> *)&local_150._s_0);
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_158);
    }
    if (pFVar12 == pFVar1) break;
    uVar5 = *(int *)pFVar12 * 3;
    lVar4 = *(longlong *)&this->UVOverlay->field_0x78;
    iVar3 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar5 >> 9) * 8) +
                    (ulonglong)(uVar5 & 0x1ff) * 4);
    if (-1 < iVar3) {
      uStack_12c = *(undefined4 *)
                    (*(longlong *)(lVar4 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                    (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
      local_128[0] = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                             (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
      local_130 = (undefined1  [4])iVar3;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_f8,local_108,(bool *)local_130);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_f8,local_140,(bool *)&uStack_12c);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_f8,local_140 + 2,(bool *)local_128);
    }
    pFVar12 = pFVar12 + 4;
  }
  if (((local_f8.Elements._8_4_ != local_f8.Elements._52_4_) &&
      (dVar6 <= (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
     && (sVar9 = _dclass(dVar15), sVar9 < 1)) {
    fVar13 = (param_2->Max).field0_0x0._s_0.X;
    uVar7 = local_150._s_0.X;
    fVar16 = (param_2->Max).field0_0x0._s_0.Y;
    fVar14 = (float)local_148 - local_150._s_0.X;
    fVar18 = fVar13 - (param_2->Min).field0_0x0._s_0.X;
    fVar17 = fVar16 - (param_2->Min).field0_0x0._s_0.Y;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    uVar8 = local_150._s_0.Y;
    fVar18 = fVar18 / fVar14;
    fVar14 = local_148._4_4_ - local_150._s_0.Y;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    fVar17 = fVar17 / fVar14;
    fVar14 = fVar18;
    if ((param_3) && (fVar14 = fVar17, fVar18 <= fVar17)) {
      fVar17 = fVar18;
      fVar14 = fVar18;
    }
    sVar9 = _dclass((double)fVar14);
    if ((sVar9 < 1) && (sVar9 = _dclass((double)fVar17), sVar9 < 1)) {
      local_120 = ((float)uVar7 + (float)local_148) * __real_3f000000;
      local_11c = ((float)uVar8 + local_148._4_4_) * __real_3f000000;
      local_110 = local_120;
      local_10c = local_11c;
      if (param_4) {
        local_110 = (fVar13 + (param_2->Min).field0_0x0._s_0.X) * __real_3f000000;
        local_10c = (fVar16 + (param_2->Min).field0_0x0._s_0.Y) * __real_3f000000;
      }
      local_148 = &local_120;
      local_150 = (TVector2<float>_u_0)
                  Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVEditor::ScaleUVAreaToBoundingBox'::__l2::<lambda_1>,UE::Math::TVector2<float>,UE::Math::TVector2<float>_const_&>
                  ::Call;
      local_118 = fVar14;
      local_114 = fVar17;
      pTVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                          (&local_f8,(TArray<int,TSizedDefaultAllocator<32>_> *)local_130);
      TransformUVElements(this,pTVar10,
                          (TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>_const_&)>
                           *)&local_150._s_0);
      if ((void *)CONCAT44(uStack_12c,local_130) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(uStack_12c,local_130));
      }
      bVar11 = true;
      goto LAB_14c82534f;
    }
  }
  bVar11 = false;
LAB_14c82534f:
  local_f8.HashSize = 0;
  if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8.Elements);
  return bVar11;
}

// SetPerTriangleUVs @ 14c8289a0

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetPerTriangleUVs
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          double param_2,FUVEditResult *param_3)

{
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar1;
  FScriptContainerElement *_Src;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  TArray<int,TSizedDefaultAllocator<32>_> local_28 [2];
  
  pTVar1 = this->UVOverlay;
  if (pTVar1 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2321708304872505083>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x105,"UVOverlay");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_28[0].ArrayNum = param_1->ArrayNum;
    lVar5 = (longlong)local_28[0].ArrayNum;
    if (local_28[0].ArrayNum != 0) {
      _Src = (param_1->AllocatorInstance).Data;
      pFVar2 = this->Mesh;
      local_28[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28[0].ArrayNum,0,&local_28[0].AllocatorInstance,local_28[0].ArrayNum,
                 &local_28[0].ArrayMax);
      memcpy(local_28[0].AllocatorInstance.Data,_Src,lVar5 << 2);
      InternalSetPerTriangleUVs<TArray<int,TSizedDefaultAllocator<32>_>_>
                (local_28,pFVar2,pTVar1,param_2,param_3);
    }
  }
  return;
}

// SetPerTriangleUVs @ 14c828ac0

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetPerTriangleUVs
          (FDynamicMeshUVEditor *this,double param_1,FUVEditResult *param_2)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2321708304872505074>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x10e,"UVOverlay");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar1 = this->Mesh;
    if (0 < (pFVar1->TriangleRefCounts).UsedCount) {
      InternalSetPerTriangleUVs<UE::Geometry::FRefCountVector::IndexEnumerable>
                ((IndexEnumerable)&pFVar1->TriangleRefCounts,pFVar1,this->UVOverlay,param_1,param_2)
      ;
    }
  }
  return;
}

// SetToPerVertexUVs @ 14c828b30

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetToPerVertexUVs
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool *param_2
          ,FUVEditResult *param_3)

{
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  TVector2<float>_u_0 local_res8;
  uint local_48 [2];
  FIndex3i_u_0 local_40 [2];
  
  *param_2 = true;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (param_1,&IndexConstants::InvalidID,
             (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed);
  TDynamicMeshOverlay<float,2>::ClearElements((TDynamicMeshOverlay<float,2> *)this->UVOverlay);
  pFVar2 = this->Mesh;
  uVar10 = 0;
  uVar13 = (pFVar2->VertexRefCounts).RefCounts.CurBlockUsed +
           (pFVar2->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar13 == 0) ||
     (pFVar3 = (pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar3 - 1U) < 0xfffe)) {
LAB_14c828bf5:
    uVar9 = (uint)uVar10;
  }
  else {
    uVar10 = 1;
    uVar9 = 1;
    if (1 < (int)uVar13) {
      do {
        lVar11 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
        if ((*(short *)(lVar11 + *(longlong *)(pFVar3 + (uVar10 >> 9) * 8)) != 0) &&
           (*(short *)(lVar11 + *(longlong *)(pFVar3 + (uVar10 >> 9) * 8)) != -1)) break;
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)uVar13);
      goto LAB_14c828bf5;
    }
  }
joined_r0x00014c828bf7:
  if (uVar9 != uVar13) {
    while( true ) {
      local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      uVar6 = TDynamicMeshOverlay<float,2>::AppendElement
                        ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,local_res8.XY);
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      local_48[0] = uVar6;
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
      *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 4) = uVar6;
      *param_2 = (bool)(*param_2 & local_48[0] == uVar9);
      if (param_3 != (FUVEditResult *)0x0) {
        pFVar3 = (param_3->NewUVElements).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 <
             pFVar3 + (longlong)(param_3->NewUVElements).ArrayMax * 4)) &&
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
        iVar7 = (param_3->NewUVElements).ArrayNum;
        piVar1 = &(param_3->NewUVElements).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)param_3,piVar1);
        }
        (param_3->NewUVElements).ArrayNum = iVar7 + 1;
        *(uint *)((param_3->NewUVElements).AllocatorInstance.Data + (longlong)iVar7 * 4) =
             local_48[0];
      }
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar13 <= (int)uVar9) break;
      while( true ) {
        lVar12 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
        lVar11 = *(longlong *)
                  ((pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar10 >> 9) * 8);
        if ((*(short *)(lVar12 + lVar11) != 0) && (*(short *)(lVar12 + lVar11) != -1)) break;
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        if ((int)uVar13 <= (int)uVar9) goto joined_r0x00014c828bf7;
      }
    }
    goto joined_r0x00014c828bf7;
  }
  pFVar2 = this->Mesh;
  uVar10 = 0;
  uVar13 = (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar13 != 0) &&
     (pFVar3 = (pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar10 = 1;
    uVar9 = 1;
    if ((int)uVar13 < 2) goto joined_r0x00014c828df7;
    do {
      lVar11 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar11 + *(longlong *)(pFVar3 + (uVar10 >> 9) * 8)) != 0) &&
         (*(short *)(lVar11 + *(longlong *)(pFVar3 + (uVar10 >> 9) * 8)) != -1)) break;
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar13);
  }
  uVar9 = (uint)uVar10;
joined_r0x00014c828df7:
  do {
    if (uVar9 == uVar13) {
      return;
    }
    while( true ) {
      uVar9 = (uint)uVar10;
      lVar11 = *(longlong *)
                ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8);
      local_40[0]._0_8_ = *(undefined8 *)(lVar11 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      local_40[0]._8_4_ = *(uint *)(lVar11 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      lVar11 = (longlong)(int)local_40[0]._0_4_;
      uVar8 = 0;
      if ((int)local_40[0]._0_4_ < param_1->ArrayNum) {
        uVar8 = (uint)~local_40[0]._s_0.A >> 0x1f;
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
      lVar12 = (longlong)(int)local_40[0]._4_4_;
      local_40[0]._0_4_ = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar11 * 4);
      uVar8 = 0;
      if ((int)local_40[0]._4_4_ < param_1->ArrayNum) {
        uVar8 = (uint)~local_40[0]._s_0.B >> 0x1f;
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
      lVar11 = (longlong)(int)local_40[0]._8_4_;
      local_40[0]._4_4_ = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar12 * 4);
      uVar8 = 0;
      if ((int)local_40[0]._8_4_ < param_1->ArrayNum) {
        uVar8 = (uint)~local_40[0]._s_0.C >> 0x1f;
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
      local_40[0]._8_4_ = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar11 * 4);
      TDynamicMeshOverlay<float,2>::SetTriangle
                ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,uVar9,(FIndex3i *)&local_40[0]._s_0
                 ,true);
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar13 <= (int)uVar9) break;
      while( true ) {
        lVar12 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
        lVar11 = *(longlong *)
                  ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar10 >> 9) * 8);
        if ((*(short *)(lVar12 + lVar11) != 0) && (*(short *)(lVar12 + lVar11) != -1)) break;
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        if ((int)uVar13 <= (int)uVar9) goto joined_r0x00014c828df7;
      }
    }
  } while( true );
}

// SetTriangleUVsFromBoxProjection @ 14c829250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2,TFrame3<double> *param_3,TVector<double> *param_4,int param_5,
          FUVEditResult *param_6)

{
  undefined8 *puVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  int iVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  TQuaternion<double> *pTVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ForElementType<FSetElementId> FVar23;
  int iVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  undefined1 auStackY_468 [32];
  <lambda_1> local_418 [4];
  uint local_414;
  TArray<int,TSizedDefaultAllocator<32>_> local_410;
  undefined1 local_400 [8];
  undefined8 local_3f8;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> local_3f0;
  uint local_3e0;
  int local_3dc;
  FDynamicMeshUVEditor *local_3d8;
  TQuaternion<double> *local_3d0;
  ulonglong local_3c8;
  undefined1 local_3b8 [48];
  ForAnyElementType local_388;
  undefined8 local_380;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_378;
  TArray<int,TSizedDefaultAllocator<32>_> local_368;
  ulonglong local_358;
  FIndex3i_u_0 local_350;
  TFrame3<double> *local_340;
  TArray<int,TSizedDefaultAllocator<32>_> *local_338;
  FScriptContainerElement *local_330;
  double local_328;
  double local_320;
  double local_318;
  float local_310;
  float local_30c;
  TVector<double>_u_0 local_308;
  int local_2f0 [4];
  int local_2e0 [4];
  int local_2d0 [4];
  FMeshConnectedComponents local_2c0;
  int local_2a8 [4];
  TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&> local_298;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_288;
  longlong local_280;
  TArray<int,TSizedDefaultAllocator<32>_> *local_278;
  undefined8 local_270;
  undefined4 local_268;
  FDynamicMeshUVEditor *local_260;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_258;
  TArrayView<std::nullptr_t,int> local_250;
  code *local_240;
  TArray<int,TSizedDefaultAllocator<32>_> **local_238;
  code *local_230;
  undefined1 *local_228;
  code *local_220;
  FMeshConnectedComponents **local_218;
  code *local_210;
  int **local_208;
  uint *local_200;
  FScriptContainerElement *local_1f8;
  FMeshConnectedComponents *local_1f0;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *local_1e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1e0;
  TVector<double>_u_0 local_1d8;
  double local_1c0 [4];
  double local_1a0;
  double local_198;
  TVector<double>_u_0 local_190;
  TArray<int,TSizedDefaultAllocator<32>_> *local_178;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_170;
  FDynamicMeshUVEditor **local_168;
  TFrame3<double> *local_160;
  double *local_158;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *local_150;
  TArray<int,TSizedDefaultAllocator<32>_> *local_148;
  TVector<double> local_140;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  code *local_108 [2];
  undefined **local_f8;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e8;
  undefined8 local_e0;
  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
  local_d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_278 = &param_6->NewUVElements;
  local_3d8 = this;
  local_340 = param_3;
  local_338 = param_1;
  local_288 = param_2;
  if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2321708304872504199>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x479,"UVOverlay");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    iVar24 = param_1->ArrayNum;
    local_358 = CONCAT44(local_358._4_4_,iVar24);
    if (iVar24 != 0) {
      ResetUVs(this,param_1);
      dVar2 = *(double *)&param_4->field0_0x0;
      local_2a8[0] = 1;
      local_2a8[1] = 0;
      local_2a8[2] = 0;
      local_2f0[0] = 2;
      local_2f0[1] = 2;
      local_2f0[2] = 1;
      local_2e0[0] = -1;
      local_2e0[1] = 1;
      local_2e0[2] = 1;
      local_2d0[0] = -1;
      local_2d0[1] = -1;
      local_2d0[2] = 1;
      local_328 = __real_3ff0000000000000;
      if (__real_3eb0c6f7a0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        local_328 = __real_3ff0000000000000 / dVar2;
      }
      dVar2 = *(double *)((longlong)&param_4->field0_0x0 + 8);
      local_320 = __real_3ff0000000000000;
      if (__real_3eb0c6f7a0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        local_320 = __real_3ff0000000000000 / dVar2;
      }
      dVar2 = *(double *)((longlong)&param_4->field0_0x0 + 0x10);
      local_318 = __real_3ff0000000000000;
      if (__real_3eb0c6f7a0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        local_318 = __real_3ff0000000000000 / dVar2;
      }
      local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_378.ArrayNum = 0;
      local_378.ArrayMax = 0;
      local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3f0.ArrayNum = 0;
      local_3f0.ArrayMax = 0;
      local_260 = this;
      local_258 = param_2;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_378,iVar24,Default);
      TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>::SetNum(&local_3f0,iVar24,Default);
      local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.ArrayNum = 0;
      local_368.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                (&local_368,
                 (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
      local_170 = &local_378;
      local_168 = &local_260;
      local_158 = &local_328;
      local_250.DataPtr = (void **)0x0;
      local_150 = &local_3f0;
      local_250.ArrayNum = 0;
      local_240 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection'::__l2::<lambda_2>,void,int>
                  ::Call;
      local_238 = &local_178;
      local_178 = param_1;
      local_160 = param_3;
      local_148 = &local_368;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar24,1,(TFunctionRef<void___cdecl(int)> *)&local_240,
                 local_418[0],None,&local_250);
      if (1 < param_5) {
        local_2c0.Mesh = this->Mesh;
        local_2c0.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection'::`9'::<lambda_3>,0,0>
                    ::_vftable_;
        local_f0 = &local_3f0;
        local_2c0.Components.Array.ArrayNum = 0;
        local_2c0.Components.Array.ArrayMax = 0;
        local_108[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection'::__l9::<lambda_3>,bool,int,int>
                       ::Call;
        local_e0 = 0;
        local_e8 = &local_368;
        FMeshConnectedComponents::FindConnectedTriangles
                  (&local_2c0,param_1,(TFunction<bool___cdecl(int,int)> *)local_108);
        local_228 = local_400;
        local_3b8._0_8_ = (FRegion *)0x0;
        local_230 = Core::Private::Function::
                    TFunctionRefCaller<UE::Geometry::<lambda_33_>,bool,int,int>::Call;
        local_1f0 = &local_2c0;
        local_3b8._8_8_ = 0;
        local_1e8 = &local_3f0;
        local_3b8._16_8_ = (FScriptContainerElement *)0x0;
        local_218 = &local_1f0;
        local_220 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection'::__l9::<lambda_4>,int,int>
                    ::Call;
        local_3b8._24_4_ = 0;
        local_3b8._28_4_ = 0;
        local_3b8._32_8_ = (FScriptContainerElement *)0x0;
        local_3b8._40_4_ = 0;
        local_3b8._44_4_ = 0;
        local_388.Data = (FScriptContainerElement *)0x0;
        local_380._0_4_ = 0;
        local_380._4_4_ = 0;
        local_1e0 = &local_368;
        FMeshRegionGraph::BuildFromComponents
                  ((FMeshRegionGraph *)local_3b8,this->Mesh,&local_2c0,
                   (TFunctionRef<int___cdecl(int)> *)&local_220,
                   (TFunctionRef<bool___cdecl(int,int)> *)&local_230);
        local_298.Value = (int *)local_3b8;
        local_208 = &local_298.Value;
        local_210 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection'::__l9::<lambda_5>,float,int,int>
                    ::Call;
        bVar8 = FMeshRegionGraph::MergeSmallRegions
                          ((FMeshRegionGraph *)local_3b8,param_5 + -1,
                           (TFunctionRef<float___cdecl(int,int)> *)&local_210);
        bVar9 = FMeshRegionGraph::OptimizeBorders((FMeshRegionGraph *)local_3b8,0x19);
        iVar15 = local_3b8._8_4_;
        if ((bVar8) || (bVar9)) {
          uVar16 = (ulonglong)(int)local_3b8._8_4_;
          local_414 = 0;
          param_1 = local_338;
          this = local_3d8;
          local_3c8 = uVar16;
          if (0 < (int)local_3b8._8_4_) {
            local_3d0 = (TQuaternion<double> *)0x0;
            uVar25 = uVar16;
            do {
              pTVar19 = local_3d0;
              uVar21 = local_414;
              if ((-1 < (int)local_414) && ((int)local_414 < (int)uVar16)) {
                uVar18 = ~local_414 >> 0x1f;
                uVar11 = 0;
                uVar10 = uVar11;
                if ((int)local_414 < (int)uVar16) {
                  uVar10 = uVar18;
                }
                local_3c8 = uVar25;
                if (uVar10 == 0) {
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar8) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar16 = local_3b8._8_8_ & 0xffffffff;
                }
                iVar24 = (int)uVar16;
                if (*(FScriptContainerElement *)(local_3b8._0_8_ + (longlong)pTVar19) !=
                    (FScriptContainerElement)0x0) {
                  if ((int)uVar21 < iVar24) {
                    uVar10 = uVar11;
                    if ((int)uVar21 < iVar24) {
                      uVar10 = uVar18;
                    }
                    if (uVar10 == 0) {
                      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar8) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      iVar24 = local_3b8._8_4_;
                    }
                    if (*(FScriptContainerElement *)(local_3b8._0_8_ + (longlong)pTVar19) ==
                        (FScriptContainerElement)0x0) goto LAB_14c8297a8;
                    if ((int)uVar21 < iVar24) {
                      uVar11 = uVar18;
                    }
                    if (uVar11 == 0) {
                      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar8) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      iVar24 = local_3b8._8_4_;
                    }
                    uVar10 = *(uint *)(local_3b8._0_8_ + (longlong)pTVar19 + 4);
                  }
                  else {
LAB_14c8297a8:
                    uVar10 = 0xffffffff;
                  }
                  if ((int)uVar21 < iVar24) {
                    uVar11 = 0;
                    if ((int)uVar21 < iVar24) {
                      uVar11 = uVar18;
                    }
                    if (uVar11 == 0) {
                      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar8) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      iVar24 = local_3b8._8_4_;
                    }
                    if (*(FScriptContainerElement *)(local_3b8._0_8_ + (longlong)pTVar19) ==
                        (FScriptContainerElement)0x0) goto LAB_14c829862;
                    uVar11 = 0;
                    if ((int)uVar21 < iVar24) {
                      uVar11 = uVar18;
                    }
                    if ((uVar11 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pFVar17 = (FScriptContainerElement *)
                              (local_3b8._0_8_ + (longlong)(int)uVar21 * 0x30 + 8);
                  }
                  else {
LAB_14c829862:
                    pFVar17 = (FScriptContainerElement *)&local_388;
                  }
                  uVar16 = (ulonglong)*(int *)(pFVar17 + 8);
                    /* WARNING: Load size is inaccurate */
                  FVar26.Data = *pFVar17;
                  local_3f8 = CONCAT44((int)((ulonglong)pFVar17 >> 0x20),*(int *)(pFVar17 + 8));
                  local_330 = FVar26.Data + uVar16 * 4;
                  while( true ) {
                    pFVar6 = local_330;
                    if (*(int *)(pFVar17 + 8) != (int)uVar16) {
                      local_418[0] = (<lambda_1>)0x0;
                      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(local_418);
                    }
                    if (FVar26.Data == pFVar6) break;
                    uVar21 = *(uint *)FVar26.Data;
                    uVar11 = 0;
                    if ((int)uVar21 < local_368.ArrayNum) {
                      uVar11 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar11 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    uVar21 = *(uint *)(local_368.AllocatorInstance.Data + (longlong)(int)uVar21 * 4)
                    ;
                    uVar11 = 0;
                    if ((int)uVar21 < local_378.ArrayNum) {
                      uVar11 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar11 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    TQuaternion<double>::InverseMultiply
                              (&local_340->Rotation,(TVector<double> *)&local_1d8._s_0,
                               (TVector<double> *)
                               (local_378.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x18));
                    local_1c0[0] = local_1d8._s_0.X * local_328;
                    local_1c0[1] = local_1d8._s_0.Y * local_320;
                    local_1c0[2] = local_1d8._s_0.Z * local_318;
                    if ((2 < uVar10) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValidIndex(Index)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                           ,0x7a2,L""), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if (local_1c0[(int)uVar10] <= 0.0) {
                      iVar24 = (0.0 <= local_1c0[(int)uVar10]) - 1;
                    }
                    else {
                      iVar24 = 1;
                    }
                    uVar11 = uVar10 + 3;
                    if ((double)iVar24 <= 0.0) {
                      uVar11 = uVar10;
                    }
                    uVar18 = 0;
                    if ((int)uVar21 < local_3f0.ArrayNum) {
                      uVar18 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar18 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    FVar26.Data = FVar26.Data + 4;
                    uVar16 = local_3f8 & 0xffffffff;
                    *(ulonglong *)(local_3f0.AllocatorInstance.Data + (longlong)(int)uVar21 * 8) =
                         CONCAT44(uVar11,uVar10);
                  }
                  uVar16 = local_3b8._8_8_ & 0xffffffff;
                  pTVar19 = local_3d0;
                  uVar25 = local_3c8;
                  uVar21 = local_414;
                }
              }
              local_414 = uVar21 + 1;
              local_3d0 = (TQuaternion<double> *)((longlong)pTVar19 + 0x30);
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
            local_3c8 = 0;
            param_3 = local_340;
            param_1 = local_338;
            this = local_3d8;
            iVar24 = (int)local_358;
            iVar15 = (int)uVar16;
          }
        }
        if (local_388.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_388.Data);
          iVar15 = local_3b8._8_4_;
        }
        if ((FScriptContainerElement *)local_3b8._32_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_3b8._32_8_);
          iVar15 = local_3b8._8_4_;
        }
        if ((FScriptContainerElement *)local_3b8._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_3b8._16_8_);
          iVar15 = local_3b8._8_4_;
        }
        DestructItems<UE::Geometry::FMeshRegionGraph::FRegion,int>
                  ((FRegion *)local_3b8._0_8_,iVar15);
        if ((FRegion *)local_3b8._0_8_ != (FRegion *)0x0) {
          FMemory::Free((void *)local_3b8._0_8_);
        }
        TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
        ::
        ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                  (&local_2c0.Components);
      }
      local_280 = (longlong)iVar24;
      local_d8.Elements._0_8_ = 0;
      local_d8.Elements._8_8_ = 0;
      local_d8.Elements._32_8_ = 0;
      local_d8.Elements._40_4_ = 0;
      local_d8.Elements._44_4_ = 0x80;
      local_d8.Elements._48_4_ = 0xffffffff;
      local_d8.Elements._52_4_ = 0;
      local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_d8.HashSize = 0;
      local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_410.ArrayNum = 0;
      local_410.ArrayMax = 0;
      local_414 = 0;
      if (0 < iVar24) {
        local_3d0 = &param_3->Rotation;
        local_3c8 = 0;
        do {
          uVar16 = local_3c8;
          pTVar19 = local_3d0;
          uVar21 = local_414;
          uVar11 = 0;
          uVar18 = ~local_414 >> 0x1f;
          uVar10 = uVar11;
          if ((int)local_414 < param_1->ArrayNum) {
            uVar10 = uVar18;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = *(uint *)((param_1->AllocatorInstance).Data + uVar16 * 4);
          local_3f8 = (ulonglong)uVar10;
          lVar20 = *(longlong *)
                    ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar10 >> 9) * 8);
          local_270 = *(undefined8 *)(lVar20 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
          local_268 = *(undefined4 *)(lVar20 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
          uVar10 = uVar11;
          if ((int)uVar21 < local_3f0.ArrayNum) {
            uVar10 = uVar18;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar16 = *(ulonglong *)(local_3f0.AllocatorInstance.Data + uVar16 * 8);
          local_358 = uVar16 >> 0x20;
          if ((int)uVar21 < local_378.ArrayNum) {
            uVar11 = uVar18;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TQuaternion<double>::InverseMultiply
                    (pTVar19,&local_140,
                     (TVector<double> *)
                     (local_378.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x18));
          uVar21 = (uint)uVar16;
          if ((((int)uVar21 < 0) || (2 < (int)uVar21)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                 ,0x7a2,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (local_140.field0_0x0.XYZ[(int)uVar21] <= 0.0) {
            if ((2 < uVar21) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                   ,0x7a2,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar24 = (0.0 < local_140.field0_0x0.XYZ[(int)uVar21] ||
                     local_140.field0_0x0.XYZ[(int)uVar21] == 0.0) - 1;
          }
          else {
            iVar24 = 1;
          }
          if ((2 < uVar21) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                 ,0x7a2,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar15 = local_2f0[(int)uVar21];
          lVar22 = 0;
          iVar3 = local_2a8[(int)uVar21];
          lVar20 = 3;
          local_350._0_8_ = 0xffffffffffffffff;
          local_350._s_0.C = -1;
          do {
            uVar10 = *(uint *)((longlong)&local_270 + lVar22);
            local_3dc = (int)local_358;
            local_3e0 = uVar10;
            uVar11 = FCrc::MemCrc_DEPRECATED(&local_3e0,8,0);
            if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
              FVar23 = (ForElementType<FSetElementId>)&local_d8.Hash;
              if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar23 = local_d8.Hash.SecondaryData;
              }
              iVar12 = *(int *)((longlong)FVar23 + (ulonglong)(local_d8.HashSize - 1U & uVar11) * 4)
              ;
              while (iVar12 != -1) {
                lVar13 = local_d8.Elements._0_8_ + (longlong)iVar12 * 0x14;
                if ((*(uint *)(local_d8.Elements._0_8_ + (longlong)iVar12 * 0x14) == local_3e0) &&
                   (*(int *)(lVar13 + 4) == local_3dc)) {
                  if (iVar12 != -1) goto LAB_14c829e5a;
                  break;
                }
                iVar12 = *(int *)(lVar13 + 0xc);
              }
            }
            lVar13 = 0;
LAB_14c829e5a:
            puVar14 = (undefined4 *)(lVar13 + 8);
            if (lVar13 == 0) {
              puVar14 = (undefined4 *)0x0;
            }
            if (puVar14 == (undefined4 *)0x0) {
              lVar13 = *(longlong *)
                        ((local_3d8->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar10 >> 9) * 8);
              puVar1 = (undefined8 *)(lVar13 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
              local_128 = *puVar1;
              uStack_120 = puVar1[1];
              local_118 = *(undefined8 *)(lVar13 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
              (**(code **)local_288)(local_1c0 + 3,*(undefined8 *)&local_288->field_0x8,&local_128);
              local_190._s_0.X = local_1c0[3] - (local_340->Origin).field0_0x0._s_0.X;
              local_190._s_0.Y = local_1a0 - (local_340->Origin).field0_0x0._s_0.Y;
              local_190._s_0.Z = local_198 - (local_340->Origin).field0_0x0._s_0.Z;
              TQuaternion<double>::InverseMultiply
                        (local_3d0,(TVector<double> *)&local_308._s_0,
                         (TVector<double> *)&local_190._s_0);
              iVar12 = local_2e0[(int)uVar21];
              iVar4 = local_2d0[(int)uVar21];
              local_308._s_0.X = local_308._s_0.X * local_328;
              local_308._s_0.Y = local_308._s_0.Y * local_320;
              local_308._s_0.Z = local_308._s_0.Z * local_318;
              if ((2 < (ulonglong)(longlong)iVar15) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                     ,0x7ab,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              dVar2 = *(double *)((longlong)&local_308 + (longlong)iVar15 * 8);
              if ((2 < (ulonglong)(longlong)iVar3) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                     ,0x7ab,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar17 = (FScriptContainerElement *)((longlong)&local_350 + lVar22);
              local_310 = (float)*(double *)((longlong)&local_308 + (longlong)iVar3 * 8) *
                          (float)(iVar24 * iVar12);
              local_30c = (float)dVar2 * (float)iVar4;
              iVar12 = TDynamicMeshOverlay<float,2>::AppendElement
                                 ((TDynamicMeshOverlay<float,2> *)local_3d8->UVOverlay,&local_310);
              *(int *)pFVar17 = iVar12;
              if (((local_410.AllocatorInstance.Data <= pFVar17) &&
                  (pFVar17 < local_410.AllocatorInstance.Data + (longlong)local_410.ArrayMax * 4))
                 && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar12 = local_410.ArrayNum;
              if (local_410.ArrayNum == local_410.ArrayMax) {
                iVar12 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_410.AllocatorInstance,&local_410.ArrayMax);
              }
              local_1f8 = pFVar17;
              local_410.ArrayNum = iVar12 + 1;
              *(int *)(local_410.AllocatorInstance.Data + (longlong)iVar12 * 4) = *(int *)pFVar17;
              local_200 = &local_3e0;
              TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&>_>
                        (&local_d8,&local_298,(bool *)&local_200);
            }
            else {
              *(undefined4 *)((longlong)&local_350 + lVar22) = *puVar14;
            }
            this = local_3d8;
            lVar22 = lVar22 + 4;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          TDynamicMeshOverlay<float,2>::SetTriangle
                    ((TDynamicMeshOverlay<float,2> *)local_3d8->UVOverlay,(int)local_3f8,
                     (FIndex3i *)&local_350._s_0,true);
          local_414 = local_414 + 1;
          local_3c8 = local_3c8 + 1;
          param_1 = local_338;
        } while ((longlong)local_3c8 < local_280);
      }
      SplitBowtiesOnUVElements(this,&local_410,true);
      pTVar7 = local_278;
      if ((local_278 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (local_278 != &local_410)
         ) {
        pFVar17 = (local_278->AllocatorInstance).Data;
        if (pFVar17 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar17);
        }
        (pTVar7->AllocatorInstance).Data = local_410.AllocatorInstance.Data;
        pTVar7->ArrayNum = local_410.ArrayNum;
        pTVar7->ArrayMax = local_410.ArrayMax;
        local_410.ArrayNum = 0;
        local_410.ArrayMax = 0;
        local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.AllocatorInstance.Data);
      }
      local_d8.HashSize = 0;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8.Elements);
      if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.AllocatorInstance.Data);
      }
      if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.AllocatorInstance.Data);
      }
      if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetTriangleUVsFromConformal @ 14c82a250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromConformal
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FSetUVsFromConformalOptions *param_2,FUVEditResult *param_3)

{
  undefined1 *puVar1;
  double *pdVar2;
  short sVar3;
  int iVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TDynamicMeshOverlay<float,2> *this_00;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  FDynamicMeshUVEditor *pFVar11;
  FUVEditResult *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ForElementType<FSetElementId> FVar21;
  uint *puVar22;
  FEdgeLoop *pFVar23;
  TUniquePtr<UE::Solvers::IConstrainedMeshUVSolver,TDefaultDelete<UE::Solvers::IConstrainedMeshUVSolver>_>
  TVar24;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar25;
  TTuple<int,int> *pTVar26;
  uint *puVar27;
  longlong *plVar28;
  ForElementType<FSetElementId> FVar29;
  ulonglong uVar30;
  FScriptContainerElement *pFVar31;
  IConstrainedMeshUVSolver IVar32;
  uint uVar33;
  longlong lVar34;
  IConstrainedMeshUVSolver IVar35;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  IConstrainedMeshUVSolver IVar39;
  ulonglong uVar40;
  ForElementType<FSetElementId> FVar41;
  ulonglong uVar42;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar43;
  ulonglong uVar44;
  FScriptContainerElement *pFVar45;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar46;
  FSetUVsFromConformalOptions *pFVar47;
  longlong lVar48;
  double dVar49;
  undefined1 auStackY_6c8 [32];
  int local_674;
  uint local_670;
  undefined1 local_66c [4];
  FUVEditResult local_668;
  FUVEditResult local_658;
  uint local_648 [2];
  ForAnyElementType local_640;
  undefined8 local_638;
  void *local_630;
  ulonglong local_628;
  TArray<int,TSizedDefaultAllocator<32>_> local_620;
  FDynamicMeshUVEditor *local_610;
  undefined8 local_608;
  uint local_5f8;
  int local_5f4;
  IConstrainedMeshUVSolver local_5f0;
  undefined8 local_5e8;
  FSetUVsFromConformalOptions *local_5d8;
  uint local_5d0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_5c8;
  FIndex3i_u_0 local_5c0;
  uint local_5b0;
  undefined4 uStack_5ac;
  float local_5a8;
  float local_5a4;
  FUVEditResult *local_5a0;
  FIndex3i_u_0 local_598;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_588;
  longlong local_568;
  undefined4 local_560;
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [12];
  uint uStack_52c;
  TBitArray<FDefaultBitArrayAllocator> *local_528;
  ForAnyElementType FStack_520;
  ForAnyElementType local_518;
  undefined1 auStack_510 [24];
  ForAnyElementType local_4f8;
  FScriptContainerElement *local_4f0;
  ForAnyElementType local_4e8;
  double local_4e0;
  ForAnyElementType local_4d8;
  float local_4cc;
  float fStack_4c8;
  TVector<double>_u_0 local_4c0;
  ForAnyElementType local_4a8;
  float local_4a0;
  undefined8 local_49c;
  float local_494;
  TVector2<float>_u_0 local_490;
  undefined2 local_488;
  undefined1 local_486;
  undefined1 local_480 [24];
  ForAnyElementType FStack_468;
  FScriptContainerElement *pFStack_460;
  uint local_458;
  uint uStack_454;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_450;
  ForAnyElementType FStack_448;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_440;
  ForAnyElementType FStack_438;
  longlong lStack_430;
  int local_428;
  undefined4 uStack_424;
  undefined1 local_420 [16];
  ForAnyElementType local_410;
  undefined1 auStack_408 [24];
  undefined1 local_3f0 [48];
  ForAnyElementType local_3c0;
  double dStack_3b8;
  ForAnyElementType local_3b0;
  FDynamicMesh3 local_3a8;
  ForElementType<FSetElementId> local_178;
  undefined8 local_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  undefined1 local_140 [8];
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [104];
  longlong *local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  bool local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  bVar13 = param_2->bUseExistingUVTopology;
  local_608 = param_1;
  local_610 = this;
  local_5d8 = param_2;
  local_5a0 = param_3;
  if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2321708304872504599>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                        ,0x2e9,"UVOverlay");
    if (!bVar13) {
      return false;
    }
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  if (param_1->ArrayNum == 0) {
    return false;
  }
  if (bVar13 == false) {
    ResetUVs(this,param_1);
  }
  FDynamicMesh3::FDynamicMesh3(&local_3a8,None);
  local_670 = param_1->ArrayNum;
  uVar42 = (ulonglong)(int)local_670;
  FVar21 = (ForElementType<FSetElementId>)0x0;
  pFVar45 = (param_1->AllocatorInstance).Data;
  local_178 = (ForElementType<FSetElementId>)0x0;
  local_170 = 0;
  local_158 = 0;
  pFVar7 = pFVar45 + uVar42 * 4;
  local_150 = 0;
  local_14c = 0x80;
  local_5f4 = -1;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (ForElementType<FSetElementId>)0x0;
  local_130 = 0;
  local_668.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_668.NewUVElements.ArrayNum = 0;
  local_668.NewUVElements.ArrayMax = 0;
  local_640.Data = (FScriptContainerElement *)0x0;
  local_638 = 0;
  FVar41 = FVar21;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar42) {
      local_66c[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_66c);
      FVar21 = local_178;
      FVar41 = local_138;
    }
    pFVar11 = local_610;
    if (pFVar45 == pFVar7) break;
    local_648[0] = *(uint *)pFVar45;
    if (bVar13 == false) {
      lVar34 = *(longlong *)
                ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_648[0] >> 9) * 8);
      local_5e8 = *(longlong *)(lVar34 + (ulonglong)(local_648[0] & 0x1ff) * 0xc);
      local_560 = *(undefined4 *)(lVar34 + 8 + (ulonglong)(local_648[0] & 0x1ff) * 0xc);
LAB_14c82a451:
      lVar38 = 0;
      lVar34 = 3;
      local_5c0._s_0.C = -1;
      local_568 = local_5e8;
      local_5c0._0_8_ = 0xffffffffffffffff;
      do {
        pFVar31 = (FScriptContainerElement *)((longlong)&local_568 + lVar38);
        uVar18 = *(uint *)pFVar31;
        if ((int)local_170 != local_144) {
          FVar29 = (ForElementType<FSetElementId>)local_140;
          if (FVar41 != (ForElementType<FSetElementId>)0x0) {
            FVar29 = FVar41;
          }
          uVar36 = *(uint *)((longlong)FVar29 + (ulonglong)(local_130 - 1U & uVar18) * 4);
          while (uVar36 != 0xffffffff) {
            puVar27 = (uint *)((longlong)(int)uVar36 * 0x10 + (longlong)FVar21);
            if (*puVar27 == uVar18) {
              puVar22 = puVar27 + 1;
              if (puVar27 == (uint *)0x0) {
                puVar22 = (uint *)0x0;
              }
              if (puVar22 != (uint *)0x0) {
                uVar18 = *puVar22;
                goto LAB_14c82a6a0;
              }
              break;
            }
            uVar36 = puVar27[2];
          }
        }
        if (bVar13 != false) {
          uVar18 = *(uint *)(*(longlong *)
                              (*(longlong *)&pFVar11->UVOverlay->field_0x60 +
                              (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
        }
        local_488 = 0;
        local_486 = 0;
        lVar48 = *(longlong *)
                  ((pFVar11->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar18 >> 9) * 8);
        pdVar2 = (double *)(lVar48 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
        local_4c0._s_0.X = *pdVar2;
        local_4c0._s_0.Y = pdVar2[1];
        local_4c0._s_0.Z = *(double *)(lVar48 + 0x10 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
        local_4a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_494 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_4a8.Data =
             (FScriptContainerElement *)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_49c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_490 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_5f8 = FDynamicMesh3::AppendVertex(&local_3a8,(FVertexInfo *)&local_4c0._s_0);
        if (local_5f8 != local_668.NewUVElements.ArrayNum) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewVtxID == SubmeshToBaseV.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                              ,0x309,L"");
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar14 = (*pcVar8)();
            return (bool)uVar14;
          }
        }
        uVar18 = local_668.NewUVElements.ArrayNum;
        if ((local_668.NewUVElements.AllocatorInstance.Data <= pFVar31) &&
           (pFVar31 < local_668.NewUVElements.AllocatorInstance.Data +
                      (longlong)local_668.NewUVElements.ArrayMax * 4)) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar14 = (*pcVar8)();
            return (bool)uVar14;
          }
          uVar18 = local_668.NewUVElements.ArrayNum;
        }
        if (uVar18 == local_668.NewUVElements.ArrayMax) {
          uVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)&local_668,
                              &local_668.NewUVElements.ArrayMax);
        }
        local_668.NewUVElements.ArrayNum = uVar18 + 1;
        *(uint *)(local_668.NewUVElements.AllocatorInstance.Data + (longlong)(int)uVar18 * 4) =
             *(uint *)pFVar31;
        local_4e8.Data = (FScriptContainerElement *)&local_5f8;
        local_4f0 = pFVar31;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&local_178,(TPairInitializer<int_const_&,int_const_&> *)(local_548 + 8),
                   (bool *)&local_4f0);
        FVar21 = local_178;
        FVar41 = local_138;
        uVar18 = local_5f8;
LAB_14c82a6a0:
        *(uint *)((longlong)&local_5c0 + lVar38) = uVar18;
        lVar38 = lVar38 + 4;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      iVar19 = FDynamicMesh3::AppendTriangle(&local_3a8,(FIndex3i *)&local_5c0._s_0,0);
      param_1 = local_608;
      uVar42 = (ulonglong)local_670;
      if (iVar19 != (int)local_638) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewTriID == SubmeshToBaseT.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                            ,0x311,L"");
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
      }
      iVar19 = (int)local_638;
      if ((local_640.Data <= (FScriptContainerElement *)local_648) &&
         ((FScriptContainerElement *)local_648 < local_640.Data + (longlong)local_638._4_4_ * 4)) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        iVar19 = (int)local_638;
      }
      if (iVar19 == local_638._4_4_) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_640,(int *)((longlong)&local_638 + 4));
      }
      local_638 = CONCAT44(local_638._4_4_,iVar19 + 1);
      *(uint *)(local_640.Data + (longlong)iVar19 * 4) = local_648[0];
      FVar21 = local_178;
      FVar41 = local_138;
    }
    else {
      uVar18 = local_648[0] * 3;
      lVar34 = *(longlong *)&this->UVOverlay->field_0x78;
      iVar19 = *(int *)(*(longlong *)(lVar34 + (ulonglong)(uVar18 >> 9) * 8) +
                       (ulonglong)(uVar18 & 0x1ff) * 4);
      if (-1 < iVar19) {
        local_5e8 = CONCAT44(*(undefined4 *)
                              (*(longlong *)(lVar34 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                              (ulonglong)(uVar18 + 1 & 0x1ff) * 4),iVar19);
        local_560 = *(undefined4 *)
                     (*(longlong *)(lVar34 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                     (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
        goto LAB_14c82a451;
      }
    }
    pFVar45 = pFVar45 + 4;
    this = local_610;
  }
  IVar35 = (IConstrainedMeshUVSolver)0x0;
  local_128._0_8_ = &local_3a8;
  local_5f0 = (IConstrainedMeshUVSolver)0x0;
  local_128[0x28] = false;
  local_128[0x29] = false;
  local_128[0x2a] = false;
  local_a8 = false;
  local_128._8_8_ = (FEdgeLoop *)0x0;
  local_128._16_4_ = 0;
  local_128._20_4_ = 0;
  local_128._24_8_ = (FEdgeSpan *)0x0;
  local_128._32_4_ = 0;
  local_128._36_4_ = 0;
  local_128._44_4_ = Compute;
  local_128._48_4_ = ConvertToOpenSpan;
  local_128._64_8_ = 0;
  local_c0 = (longlong *)0x0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0._0_4_ = 0;
  local_b0._4_4_ = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_128);
  iVar19 = FMeshBoundaryLoops::GetLongestLoopIndex((FMeshBoundaryLoops *)local_128);
  if (iVar19 != -1) {
    pFVar23 = FMeshBoundaryLoops::operator[]((FMeshBoundaryLoops *)local_128,iVar19);
    pFVar47 = local_5d8;
    pTVar43 = (TArray<int,TSizedDefaultAllocator<32>_> *)(longlong)(pFVar23->Vertices).ArrayNum;
    bVar16 = false;
    pTVar46 = &pFVar23->Vertices;
    bVar15 = false;
    IVar32 = IVar35;
    local_608 = pTVar46;
    local_5c8 = pTVar43;
    if (local_5d8->bUseSpectral != false) {
      TVar24 = MeshDeformation::ConstructSpectralConformalParamSolver
                         ((FDynamicMesh3 *)local_548,SUB81(&local_3a8,0));
      if ((IConstrainedMeshUVSolver *)(local_558 + 8) != TVar24.Ptr) {
        IVar32 = *TVar24.Ptr;
        *TVar24.Ptr = (IConstrainedMeshUVSolver)0x0;
        local_5f0 = IVar32;
      }
      if ((FScriptContainerElement *)local_548._0_8_ != (FScriptContainerElement *)0x0) {
        (*(code *)**(undefined8 **)local_548._0_8_)(local_548._0_8_,1);
      }
      IVar39 = IVar35;
      if (0 < (longlong)pTVar43) {
        do {
          uVar36 = IVar39._0_4_;
          pcVar8 = *(code **)(*(longlong *)IVar32 + 8);
          uVar18 = 0;
          if ((int)uVar36 < (pFVar23->Vertices).ArrayNum) {
            uVar18 = ~uVar36 >> 0x1f;
          }
          local_420._0_4_ = 0;
          local_420._4_4_ = 0;
          local_420._8_8_ = (FScriptContainerElement *)0x0;
          if ((uVar18 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            uVar14 = (*pcVar8)();
            return (bool)uVar14;
          }
          (*pcVar8)(IVar32,*(undefined4 *)((pTVar46->AllocatorInstance).Data + (longlong)IVar35 * 4)
                    ,0,local_420);
          IVar39._0_4_ = uVar36 + 1;
          IVar39._4_4_ = 0;
          IVar35 = (IConstrainedMeshUVSolver)((longlong)IVar35 + 1);
        } while ((longlong)IVar35 < (longlong)pTVar43);
        bVar16 = false;
      }
LAB_14c82aff4:
      uVar42 = 0;
      iVar19 = 0;
      local_630 = (void *)0x0;
      local_628 = 0;
      cVar17 = (**(code **)(*(longlong *)IVar32 + 0x30))(IVar32,&local_3a8,&local_630);
      if (cVar17 == '\0') {
        bVar13 = false;
      }
      else {
        if (bVar16) {
          uVar30 = (ulonglong)(int)local_628;
          dVar9 = (double)local_4cc;
          uVar18 = 0;
          if ((int)local_670 < (int)local_628) {
            uVar18 = ~local_670 >> 0x1f;
          }
          dVar49 = (double)fStack_4c8;
          if (uVar18 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            uVar30 = local_628 & 0xffffffff;
          }
          dVar9 = dVar9 - *(double *)((longlong)local_630 + (longlong)(int)local_670 * 0x10);
          dVar49 = dVar49 - *(double *)((longlong)local_630 + (longlong)(int)local_670 * 0x10 + 8);
          if ((dVar9 != 0.0) || (dVar49 != 0.0)) {
            lVar34 = (longlong)local_668.NewUVElements.ArrayNum;
            uVar44 = uVar42;
            uVar40 = uVar42;
            if (0 < lVar34) {
              do {
                uVar36 = (uint)uVar44;
                uVar18 = 0;
                if ((int)uVar36 < (int)uVar30) {
                  uVar18 = ~uVar36 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                *(double *)(uVar40 + (longlong)local_630) =
                     dVar9 + *(double *)(uVar40 + (longlong)local_630);
                *(double *)(uVar40 + 8 + (longlong)local_630) =
                     dVar49 + *(double *)(uVar40 + 8 + (longlong)local_630);
                uVar30 = local_628 & 0xffffffff;
                lVar34 = lVar34 + -1;
                uVar44 = (ulonglong)(uVar36 + 1);
                uVar40 = uVar40 + 0x10;
              } while (lVar34 != 0);
            }
          }
        }
        else {
          uVar30 = local_628 & 0xffffffff;
        }
        pFVar11 = local_610;
        if (bVar13 == false) {
          local_620.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_620.ArrayNum = 0;
          local_620.ArrayMax = 0;
          local_658.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_658.NewUVElements.ArrayNum = 0;
          local_658.NewUVElements.ArrayMax = 0;
          TArray<int,TSizedDefaultAllocator<32>_>::Init
                    (&local_620,&IndexConstants::InvalidID,
                     local_3a8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                     local_3a8.VertexRefCounts.RefCounts.CurBlockUsed);
          pFVar11 = local_610;
          uVar18 = local_3a8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                   local_3a8.VertexRefCounts.RefCounts.CurBlockUsed;
          uVar30 = uVar42;
          if ((uVar18 == 0) ||
             (uVar30 = 0,
             (ushort)(**(short **)local_3a8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data
                     - 1U) < 0xfffe)) {
LAB_14c82b388:
            uVar36 = (uint)uVar30;
          }
          else {
            uVar30 = 1;
            uVar36 = 1;
            if (1 < (int)uVar18) {
              do {
                sVar3 = *(short *)(*(longlong *)
                                    (local_3a8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.
                                     Data + (uVar30 >> 9) * 8) +
                                  (ulonglong)((uint)uVar30 & 0x1ff) * 2);
                if ((sVar3 != 0) && (sVar3 != -1)) break;
                uVar36 = (uint)uVar30 + 1;
                uVar30 = (ulonglong)uVar36;
              } while ((int)uVar36 < (int)uVar18);
              goto LAB_14c82b388;
            }
          }
joined_r0x00014c82b38b:
          if (uVar36 != uVar18) {
            do {
              this_00 = (TDynamicMeshOverlay<float,2> *)pFVar11->UVOverlay;
              uVar36 = (uint)uVar30;
              uVar33 = ~uVar36 >> 0x1f;
              uVar37 = 0;
              if ((int)uVar36 < (int)local_628) {
                uVar37 = uVar33;
              }
              if ((uVar37 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              lVar34 = (longlong)(int)uVar36;
              local_5a4 = (float)*(double *)((longlong)local_630 + lVar34 * 0x10 + 8);
              local_5a8 = (float)*(double *)((longlong)local_630 + lVar34 * 0x10);
              iVar20 = TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_5a8);
              uVar37 = 0;
              if ((int)uVar36 < local_620.ArrayNum) {
                uVar37 = uVar33;
              }
              if ((uVar37 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              *(int *)(local_620.AllocatorInstance.Data + lVar34 * 4) = iVar20;
              uVar37 = 0;
              if ((int)uVar36 < local_620.ArrayNum) {
                uVar37 = uVar33;
              }
              if ((uVar37 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              pFVar7 = local_620.AllocatorInstance.Data + lVar34 * 4;
              if (((local_658.NewUVElements.AllocatorInstance.Data <= pFVar7) &&
                  (pFVar7 < local_658.NewUVElements.AllocatorInstance.Data +
                            (longlong)local_658.NewUVElements.ArrayMax * 4)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              iVar20 = local_658.NewUVElements.ArrayNum;
              if (local_658.NewUVElements.ArrayNum == local_658.NewUVElements.ArrayMax) {
                iVar20 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)&local_658,
                                    &local_658.NewUVElements.ArrayMax);
              }
              local_658.NewUVElements.ArrayNum = iVar20 + 1;
              *(undefined4 *)(local_658.NewUVElements.AllocatorInstance.Data + (longlong)iVar20 * 4)
                   = *(undefined4 *)pFVar7;
              do {
                uVar36 = uVar36 + 1;
                uVar30 = (ulonglong)uVar36;
                IVar32 = local_5f0;
                if ((int)uVar18 <= (int)uVar36) goto joined_r0x00014c82b38b;
                sVar3 = *(short *)(*(longlong *)
                                    (local_3a8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)(uVar36 >> 9) * 8) +
                                  (ulonglong)(uVar36 & 0x1ff) * 2);
              } while ((sVar3 == 0) || (sVar3 == -1));
            } while( true );
          }
          uVar30 = 0;
          uVar18 = local_3a8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                   local_3a8.TriangleRefCounts.RefCounts.CurBlockUsed;
          if ((uVar18 == 0) ||
             ((ushort)(**(short **)
                         local_3a8.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data - 1U) <
              0xfffe)) {
LAB_14c82b607:
            uVar36 = (uint)uVar30;
          }
          else {
            uVar30 = 1;
            uVar36 = 1;
            if (1 < (int)uVar18) {
              do {
                sVar3 = *(short *)(*(longlong *)
                                    (local_3a8.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                                     Data + (uVar30 >> 9) * 8) +
                                  (ulonglong)((uint)uVar30 & 0x1ff) * 2);
                if ((sVar3 != 0) && (sVar3 != -1)) break;
                uVar36 = (uint)uVar30 + 1;
                uVar30 = (ulonglong)uVar36;
              } while ((int)uVar36 < (int)uVar18);
              goto LAB_14c82b607;
            }
          }
          if (uVar36 != uVar18) {
            do {
              uVar37 = (uint)uVar30;
              local_608 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                           (*(longlong *)
                             (local_3a8.Triangles.Blocks.AllocatorInstance.Data + (uVar30 >> 9) * 8)
                           + (ulonglong)(uVar37 & 0x1ff) * 0xc);
              uVar36 = *(uint *)(*(longlong *)
                                  (local_3a8.Triangles.Blocks.AllocatorInstance.Data +
                                  (uVar30 >> 9) * 8) + 8 + (ulonglong)(uVar37 & 0x1ff) * 0xc);
              lVar34 = (longlong)(int)(uint)local_608;
              uVar33 = 0;
              if ((int)(uint)local_608 < local_620.ArrayNum) {
                uVar33 = ~(uint)local_608 >> 0x1f;
              }
              if (uVar33 == 0) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
              }
              iVar19 = *(int *)(local_620.AllocatorInstance.Data + lVar34 * 4);
              lVar34 = (longlong)(int)local_608._4_4_;
              uVar33 = 0;
              if ((int)local_608._4_4_ < local_620.ArrayNum) {
                uVar33 = ~local_608._4_4_ >> 0x1f;
              }
              iVar20 = local_620.ArrayNum;
              if (uVar33 == 0) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                iVar20 = local_620.ArrayNum;
              }
              iVar4 = *(int *)(local_620.AllocatorInstance.Data + lVar34 * 4);
              uVar33 = 0;
              if ((int)uVar36 < iVar20) {
                uVar33 = ~uVar36 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              local_598._s_0.C =
                   *(undefined4 *)(local_620.AllocatorInstance.Data + (longlong)(int)uVar36 * 4);
              local_598._s_0.A = iVar19;
              local_598._s_0.B = iVar4;
              if (((iVar19 == -1) || (iVar4 == -1)) || (local_598._s_0.C == -1)) {
                bVar13 = Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_2321708304872504392>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                                    ,0x3b8,
                                    "UVTri.A != IndexConstants::InvalidID && UVTri.B != IndexConstants::InvalidID && UVTri.C != IndexConstants::InvalidID"
                                   );
                if (bVar13) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                uVar42 = (ulonglong)((int)uVar42 + 1);
              }
              else {
                uVar36 = 0;
                if ((int)uVar37 < (int)local_638) {
                  uVar36 = ~uVar37 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                TDynamicMeshOverlay<float,2>::SetTriangle
                          ((TDynamicMeshOverlay<float,2> *)local_610->UVOverlay,
                           *(int *)(local_640.Data + (longlong)(int)uVar37 * 4),
                           (FIndex3i *)&local_598._s_0,true);
              }
              do {
                uVar37 = uVar37 + 1;
                uVar30 = (ulonglong)uVar37;
                if ((int)uVar18 <= (int)uVar37) {
                  if (uVar37 == uVar18) {
                    iVar19 = (int)uVar42;
                    IVar32 = local_5f0;
                    goto LAB_14c82b843;
                  }
                  break;
                }
                sVar3 = *(short *)(*(longlong *)
                                    (local_3a8.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)(uVar37 >> 9) * 8) +
                                  (ulonglong)(uVar37 & 0x1ff) * 2);
              } while ((sVar3 == 0) || (sVar3 == -1));
            } while( true );
          }
LAB_14c82b843:
          pFVar12 = local_5a0;
          if ((local_5a0 != (FUVEditResult *)0x0) && (local_5a0 != &local_658)) {
            pFVar7 = (local_5a0->NewUVElements).AllocatorInstance.Data;
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar7);
            }
            (pFVar12->NewUVElements).AllocatorInstance.Data =
                 local_658.NewUVElements.AllocatorInstance.Data;
            (pFVar12->NewUVElements).ArrayNum = local_658.NewUVElements.ArrayNum;
            (pFVar12->NewUVElements).ArrayMax = local_658.NewUVElements.ArrayMax;
            local_658.NewUVElements.ArrayNum = 0;
            local_658.NewUVElements.ArrayMax = 0;
            local_658.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_658.NewUVElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.NewUVElements.AllocatorInstance.Data);
          }
          if (local_620.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_620.AllocatorInstance.Data);
          }
        }
        else {
          lVar34 = (longlong)local_668.NewUVElements.ArrayNum;
          if (0 < lVar34) {
            lVar38 = 0;
            lVar48 = 0;
            while( true ) {
              uVar36 = (uint)uVar42;
              uVar18 = 0;
              if ((int)uVar36 < (int)uVar30) {
                uVar18 = ~uVar36 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              dVar9 = *(double *)(lVar48 + (longlong)local_630);
              dVar49 = ((double *)(lVar48 + (longlong)local_630))[1];
              uVar18 = 0;
              if ((int)uVar36 < local_668.NewUVElements.ArrayNum) {
                uVar18 = ~uVar36 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              pTVar6 = pFVar11->UVOverlay;
              uVar42 = (ulonglong)(uVar36 + 1);
              lVar48 = lVar48 + 0x10;
              uVar18 = *(uint *)(local_668.NewUVElements.AllocatorInstance.Data + lVar38 * 4);
              lVar38 = lVar38 + 1;
              *(float *)(*(longlong *)
                          (*(longlong *)&pTVar6->field_0x48 +
                          (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar18 * 2 & 0x1ff) * 4) = (float)dVar9;
              *(float *)(*(longlong *)
                          (*(longlong *)&pTVar6->field_0x48 +
                          (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar18 * 2 + 1 & 0x1ff) * 4) = (float)dVar49;
              if (lVar34 <= lVar38) break;
              uVar30 = local_628 & 0xffffffff;
            }
          }
          pFVar12 = local_5a0;
          iVar19 = 0;
          if ((local_5a0 != (FUVEditResult *)0x0) && (local_5a0 != &local_668)) {
            pFVar7 = (local_5a0->NewUVElements).AllocatorInstance.Data;
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar7);
            }
            (pFVar12->NewUVElements).AllocatorInstance.Data =
                 local_668.NewUVElements.AllocatorInstance.Data;
            (pFVar12->NewUVElements).ArrayNum = local_668.NewUVElements.ArrayNum;
            (pFVar12->NewUVElements).ArrayMax = local_668.NewUVElements.ArrayMax;
            local_668.NewUVElements.ArrayNum = 0;
            local_668.NewUVElements.ArrayMax = 0;
            local_668.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
        }
        bVar13 = iVar19 == 0;
      }
      IVar35 = IVar32;
      if (local_630 != (void *)0x0) {
        FMemory::Free(local_630);
      }
      goto LAB_14c82b8f0;
    }
    TVar24 = MeshDeformation::ConstructNaturalConformalParamSolver((FDynamicMesh3 *)local_558);
    if ((IConstrainedMeshUVSolver *)(local_558 + 8) != TVar24.Ptr) {
      IVar32 = *TVar24.Ptr;
      *TVar24.Ptr = (IConstrainedMeshUVSolver)0x0;
      local_5f0 = IVar32;
    }
    if ((undefined8 *)local_558._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_558._0_8_)();
    }
    uVar10 = __real_3ff0000000000000;
    pTVar5 = pFVar47->PinnedElementIDs;
    if (pTVar5 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      puVar1 = &(pTVar5->Elements).field_0x10;
      local_588._padding_._0_4_ = 0;
      local_588._padding_._4_4_ = 1;
      local_588.UnvisitedBitMask = 0xffffffff;
      local_588.CurrentBitIndex = 0;
      local_588.BaseBitIndex = 0;
      local_588.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (*(int *)&(pTVar5->Elements).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_588);
      }
      unique0x10000f89 =
           (FScriptContainerElement *)CONCAT44(local_588._padding_._4_4_,(uint)local_588._padding_);
      FStack_520.Data =
           (FScriptContainerElement *)CONCAT44(local_588.CurrentBitIndex,local_588.UnvisitedBitMask)
      ;
      local_518.Data = (FScriptContainerElement *)CONCAT44(local_588._28_4_,local_588.BaseBitIndex);
      local_458 = *(int *)&(pTVar5->Elements).field_0x8 - *(int *)&(pTVar5->Elements).field_0x34;
      local_480._16_8_ = local_588.Array;
      auStack_510._4_4_ = uStack_454;
      auStack_510._0_4_ = local_458;
      local_528 = local_588.Array;
      local_538._0_8_ = pTVar5;
      local_480._0_8_ = pTVar5;
      local_480._8_8_ = unique0x10000f89;
      FStack_468.Data = FStack_520.Data;
      pFStack_460 = local_518.Data;
      pTVar25 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_480,
                           (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                           *(int *)&(pTVar5->Elements).field_0x28);
      FStack_448.Data = (FScriptContainerElement *)pTVar25->_padding_;
      pTStack_440 = pTVar25->Array;
      FStack_438.Data = *(FScriptContainerElement **)&pTVar25->UnvisitedBitMask;
      lStack_430 = *(longlong *)&pTVar25->BaseBitIndex;
      local_428 = *(int *)&(pTVar5->Elements).field_0x8 - *(int *)&(pTVar5->Elements).field_0x34;
      local_3f0._40_8_ = CONCAT44(uStack_424,local_428);
      local_450 = pTVar5;
      local_3f0._0_8_ = pTVar5;
      local_3f0._8_8_ = FStack_448.Data;
      local_3f0._16_8_ = pTStack_440;
      local_3f0._24_8_ = FStack_438.Data;
      local_3f0._32_8_ = lStack_430;
      bVar16 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_538,(TRangedForConstIterator *)local_3f0)
      ;
      uVar18 = local_670;
      if (bVar16) {
        do {
          uVar36 = *(uint *)(*(longlong *)local_538._0_8_ +
                            (longlong)(int)FStack_520.Data._4_4_ * 0xc);
          pTVar6 = local_610->UVOverlay;
          if ((-1 < (int)uVar36) &&
             ((int)uVar36 < *(int *)&pTVar6->field_0x8 * 0x200 + *(int *)&pTVar6->field_0xc)) {
            if ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)&pTVar6->field_0x10 +
                                     (ulonglong)(uVar36 >> 9) * 8) + (ulonglong)(uVar36 & 0x1ff) * 2
                                   ) - 1U) < 0xfffe) {
              uVar18 = uVar36;
              if (bVar13 == false) {
                uVar18 = *(uint *)(*(longlong *)
                                    (*(longlong *)&pTVar6->field_0x60 + (ulonglong)(uVar36 >> 9) * 8
                                    ) + (ulonglong)(uVar36 & 0x1ff) * 4);
              }
              pTVar26 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                *)&local_178,uVar18);
              puVar27 = (uint *)&pTVar26->field_0x4;
              if (pTVar26 == (TTuple<int,int> *)0x0) {
                puVar27 = (uint *)0x0;
              }
              uVar18 = local_670;
              if (puVar27 != (uint *)0x0) {
                uVar44 = (ulonglong)((uVar36 & 0x7fffffff) >> 8);
                uVar30 = (ulonglong)((uVar36 & 0x7fffffff) >> 8);
                uVar40 = (ulonglong)(uVar36 * 2 + 1 & 0x1ff);
                uVar42 = (ulonglong)(uVar36 * 2 & 0x1ff);
                local_4d8.Data =
                     (FScriptContainerElement *)
                     (double)*(float *)(*(longlong *)(*(longlong *)&pTVar6->field_0x48 + uVar44 * 8)
                                       + uVar40 * 4);
                local_4e0 = (double)*(float *)(*(longlong *)
                                                (*(longlong *)&pTVar6->field_0x48 + uVar30 * 8) +
                                              uVar42 * 4);
                (**(code **)(*(longlong *)IVar32 + 8))(IVar32,*puVar27,uVar10,&local_4e0);
                IVar35._0_4_ = IVar35._0_4_ + 1;
                IVar35._4_4_ = 0;
                if (!bVar15) {
                  local_670 = *puVar27;
                  lVar34 = *(longlong *)&local_610->UVOverlay->field_0x48;
                  local_5b0 = *(uint *)(*(longlong *)(lVar34 + uVar30 * 8) + uVar42 * 4);
                  bVar15 = true;
                  uStack_5ac = *(undefined4 *)(*(longlong *)(lVar34 + uVar44 * 8) + uVar40 * 4);
                  fStack_4c8 = (float)uStack_5ac;
                  local_4cc = (float)local_5b0;
                  uVar18 = local_670;
                }
              }
            }
          }
          FStack_520.Data._0_4_ = (uint)FStack_520.Data & ~uStack_52c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_538 + 8));
          bVar16 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForConstIterator::operator!=
                             ((TRangedForConstIterator *)local_538,
                              (TRangedForConstIterator *)local_3f0);
        } while (bVar16);
        pTVar43 = local_5c8;
        pTVar46 = local_608;
        if (1 < IVar35._0_4_) {
          local_670 = uVar18;
          bVar16 = false;
          goto LAB_14c82aff4;
        }
      }
    }
    (**(code **)(*(longlong *)IVar32 + 0x20))(IVar32);
    iVar19 = -1;
    dVar9 = 0.0;
    local_674 = -1;
    iVar20 = -1;
    IVar35 = IVar32;
    if (0 < (longlong)pTVar43) {
      local_5e8 = 0;
      local_5d8 = (FSetUVsFromConformalOptions *)&DAT_00000001;
      local_608 = pTVar43;
      uVar18 = 0;
      do {
        lVar34 = local_5e8;
        uVar36 = uVar18 + 1;
        local_5d0 = uVar36;
        if ((longlong)local_5d8 < (longlong)pTVar43) {
          pFVar47 = local_5d8;
          do {
            uVar37 = 0;
            if ((int)uVar36 < pTVar46->ArrayNum) {
              uVar37 = ~uVar36 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            uVar37 = *(uint *)((pTVar46->AllocatorInstance).Data + (longlong)pFVar47 * 4);
            uVar42 = (ulonglong)(uVar37 & 0x1ff);
            pdVar2 = (double *)
                     (*(longlong *)
                       (local_3a8.Vertices.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar37 >> 9) * 8) + uVar42 * 0x18);
            auStack_510._8_8_ = *pdVar2;
            auStack_510._16_8_ = pdVar2[1];
            local_4f8.Data =
                 *(FScriptContainerElement **)
                  (*(longlong *)
                    (local_3a8.Vertices.Blocks.AllocatorInstance.Data + (ulonglong)(uVar37 >> 9) * 8
                    ) + 0x10 + uVar42 * 0x18);
            uVar37 = 0;
            if ((int)uVar18 < pTVar46->ArrayNum) {
              uVar37 = ~uVar18 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            uVar37 = *(uint *)((pTVar46->AllocatorInstance).Data + lVar34);
            uVar42 = (ulonglong)(uVar37 & 0x1ff);
            pdVar2 = (double *)
                     (*(longlong *)
                       (local_3a8.Vertices.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar37 >> 9) * 8) + uVar42 * 0x18);
            local_3c0.Data = (FScriptContainerElement *)*pdVar2;
            dStack_3b8 = pdVar2[1];
            local_3b0.Data =
                 *(FScriptContainerElement **)
                  (*(longlong *)
                    (local_3a8.Vertices.Blocks.AllocatorInstance.Data + (ulonglong)(uVar37 >> 9) * 8
                    ) + 0x10 + uVar42 * 0x18);
            dVar49 = ((double)auStack_510._16_8_ - dStack_3b8) *
                     ((double)auStack_510._16_8_ - dStack_3b8) +
                     ((double)auStack_510._8_8_ - (double)local_3c0.Data) *
                     ((double)auStack_510._8_8_ - (double)local_3c0.Data) +
                     ((double)local_4f8.Data - (double)local_3b0.Data) *
                     ((double)local_4f8.Data - (double)local_3b0.Data);
            if (dVar9 < dVar49) {
              uVar37 = 0;
              if ((int)uVar36 < pTVar46->ArrayNum) {
                uVar37 = ~uVar36 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              local_674 = *(int *)((pTVar46->AllocatorInstance).Data + (longlong)pFVar47 * 4);
              uVar37 = 0;
              if ((int)uVar18 < pTVar46->ArrayNum) {
                uVar37 = ~uVar18 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              local_5f4 = *(int *)((pTVar46->AllocatorInstance).Data + lVar34);
              dVar9 = dVar49;
            }
            uVar36 = uVar36 + 1;
            pFVar47 = (FSetUVsFromConformalOptions *)((longlong)pFVar47 + 1);
            pTVar43 = local_5c8;
            iVar19 = local_5f4;
            iVar20 = local_674;
          } while ((longlong)pFVar47 < (longlong)local_5c8);
        }
        IVar32 = local_5f0;
        local_5d8 = (FSetUVsFromConformalOptions *)((longlong)local_5d8 + 1);
        local_5e8 = lVar34 + 4;
        local_608 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                    ((longlong)&local_608[-1].ArrayMax + 3);
        uVar18 = local_5d0;
      } while (local_608 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
      if ((iVar19 != -1) || (IVar35 = local_5f0, iVar20 != -1)) {
        local_410.Data = ___xmm_3fe00000000000000000000000000000;
        auStack_408._0_4_ = _UNK_15076b778;
        auStack_408._4_4_ = _UNK_15076b77c;
        (**(code **)(*(longlong *)local_5f0 + 8))(local_5f0,iVar19,uVar10,&local_410);
        auStack_408._8_8_ = ___xmm_3fe00000000000003ff0000000000000;
        auStack_408._16_8_ = _UNK_1528cb7e8;
        (**(code **)(*(longlong *)IVar32 + 8))(IVar32,iVar20,uVar10,auStack_408 + 8);
        bVar16 = bVar15;
        goto LAB_14c82aff4;
      }
    }
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2321708304872504458>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                        ,0x376,"MaxDistPair != FIndex2i::Invalid()");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
  }
  bVar13 = false;
LAB_14c82b8f0:
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  if (local_128._64_8_ != 0) {
    plVar28 = (longlong *)(local_128 + 0x50);
    if (local_c0 != (longlong *)0x0) {
      plVar28 = local_c0;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_128._24_8_,local_128._32_4_);
  if ((FEdgeSpan *)local_128._24_8_ != (FEdgeSpan *)0x0) {
    FMemory::Free((void *)local_128._24_8_);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_128._8_8_,local_128._16_4_);
  if ((FEdgeLoop *)local_128._8_8_ != (FEdgeLoop *)0x0) {
    FMemory::Free((void *)local_128._8_8_);
  }
  if (IVar35 != (IConstrainedMeshUVSolver)0x0) {
    (*(code *)**(undefined8 **)IVar35)(IVar35,1);
  }
  if (local_640.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_640.Data);
  }
  if (local_668.NewUVElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.NewUVElements.AllocatorInstance.Data);
  }
  local_130 = 0;
  if (local_138 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_178);
  FDynamicMesh3::~FDynamicMesh3(&local_3a8);
  return bVar13;
}

// SetTriangleUVsFromCylinderProjection @ 14c82ba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromCylinderProjection
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2,TFrame3<double> *param_3,TVector<double> *param_4,float param_5,
          FUVEditResult *param_6)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double _Y;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TFrame3<double> *pTVar11;
  TQuaternion<double> *this_00;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  ulonglong uVar20;
  ForElementType<FSetElementId> FVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStackY_378 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_328;
  <lambda_1> local_318;
  uint local_314;
  uint local_310;
  int local_30c;
  TVector2<float>_u_0 local_308;
  FIndex3i_u_0 local_300;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2f0;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> local_2e0;
  float local_2d0;
  float fStack_2cc;
  float local_2c8;
  uint uStack_2c4;
  longlong local_2c0;
  int local_2b8 [4];
  int local_2a8 [4];
  double local_298;
  double local_290;
  double local_288;
  TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&> local_280;
  TFrame3<double> *local_270;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_268;
  ulonglong local_260;
  longlong local_258;
  undefined8 local_250;
  undefined4 local_248;
  TArray<int,TSizedDefaultAllocator<32>_> *local_240;
  TQuaternion<double> *local_238;
  TArray<int,TSizedDefaultAllocator<32>_> *local_230;
  FDynamicMeshUVEditor *local_228;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_220;
  TArrayView<std::nullptr_t,int> local_218;
  code *local_208;
  TArray<int,TSizedDefaultAllocator<32>_> **local_200;
  uint *local_1f8;
  FScriptContainerElement *local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1a0;
  FDynamicMeshUVEditor **local_198;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_190;
  TFrame3<double> *local_188;
  double *local_180;
  int **local_178;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  TVector<double> local_150;
  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
  local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_240 = &param_6->NewUVElements;
  local_270 = param_3;
  local_268 = param_2;
  local_230 = param_1;
  if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2321708304872504036>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                        ,0x51c,"UVOverlay");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar14 = param_1->ArrayNum;
    if (iVar14 != 0) {
      ResetUVs(this,param_1);
      dVar1 = *(double *)&param_4->field0_0x0;
      local_2a8[0] = -1;
      uVar23 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar24 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_2a8[1] = 1;
      local_2a8[2] = 1;
      local_2b8[0] = -1;
      local_2b8[1] = -1;
      local_2b8[2] = 1;
      local_298 = __real_3ff0000000000000;
      if (__real_3eb0c6f7a0000000 <= (double)CONCAT44(uVar24,uVar23) &&
          (double)CONCAT44(uVar24,uVar23) != __real_3eb0c6f7a0000000) {
        local_298 = __real_3ff0000000000000 / dVar1;
      }
      dVar1 = *(double *)((longlong)&param_4->field0_0x0 + 8);
      uVar23 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar24 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_290 = __real_3ff0000000000000;
      if (__real_3eb0c6f7a0000000 <= (double)CONCAT44(uVar24,uVar23) &&
          (double)CONCAT44(uVar24,uVar23) != __real_3eb0c6f7a0000000) {
        local_290 = __real_3ff0000000000000 / dVar1;
      }
      dVar1 = *(double *)((longlong)&param_4->field0_0x0 + 0x10);
      uVar23 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar24 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_288 = __real_3ff0000000000000;
      if (__real_3eb0c6f7a0000000 <= (double)CONCAT44(uVar24,uVar23) &&
          (double)CONCAT44(uVar24,uVar23) != __real_3eb0c6f7a0000000) {
        local_288 = __real_3ff0000000000000 / dVar1;
      }
      local_228 = this;
      local_220 = param_2;
      local_280.Value = (int *)cos((double)(param_5 * __real_3c8efa35));
      local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f0.ArrayNum = 0;
      local_2f0.ArrayMax = 0;
      local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e0.ArrayNum = 0;
      local_2e0.ArrayMax = 0;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_2f0,iVar14,Default);
      TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_>::SetNum(&local_2e0,iVar14,Default);
      local_198 = &local_228;
      local_190 = &local_2f0;
      local_180 = &local_298;
      local_218.DataPtr = (void **)0x0;
      local_218.ArrayNum = 0;
      local_170 = &local_2e0;
      local_208 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromCylinderProjection'::__l2::<lambda_2>,void,int>
                  ::Call;
      local_200 = &local_1a0;
      local_1a0 = param_1;
      local_188 = param_3;
      local_178 = &local_280.Value;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar14,1,(TFunctionRef<void___cdecl(int)> *)&local_208,
                 local_318,None,&local_218);
      dVar10 = __real_bff921fb54442d18;
      dVar9 = __real_c01921fb54442d18;
      dVar8 = __real_3ff921fb54442d18;
      dVar1 = __real_401921fb54442d18;
      fVar7 = __real_3ea2f983;
      uVar23 = __xmm_80000000800000008000000080000000;
      local_138.Elements._0_8_ = 0;
      local_138.Elements._8_8_ = 0;
      local_138.Elements._32_8_ = 0;
      local_138.Elements._40_4_ = 0;
      local_138.Elements._44_4_ = 0x80;
      local_138.Elements._48_4_ = 0xffffffff;
      local_138.Elements._52_4_ = 0;
      local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_138.HashSize = 0;
      local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.ArrayNum = 0;
      local_328.ArrayMax = 0;
      local_314 = 0;
      local_258 = (longlong)iVar14;
      if (0 < iVar14) {
        local_2c0 = 0;
        local_238 = &param_3->Rotation;
        do {
          this_00 = local_238;
          lVar22 = local_2c0;
          uVar24 = local_314;
          uVar17 = ~local_314 >> 0x1f;
          uVar13 = 0;
          if ((int)local_314 < param_1->ArrayNum) {
            uVar13 = uVar17;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar19 = 0;
          uVar13 = *(uint *)((param_1->AllocatorInstance).Data + lVar22 * 4);
          local_260 = (ulonglong)uVar13;
          lVar15 = *(longlong *)
                    ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar13 >> 9) * 8);
          local_250 = *(undefined8 *)(lVar15 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
          local_248 = *(undefined4 *)(lVar15 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
          uVar13 = 0;
          if ((int)uVar24 < local_2e0.ArrayNum) {
            uVar13 = uVar17;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar22 * 8);
          uVar13 = 0;
          if ((int)uVar24 < local_2f0.ArrayNum) {
            uVar13 = uVar17;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TQuaternion<double>::InverseMultiply
                    (this_00,&local_150,
                     (TVector<double> *)
                     (local_2f0.AllocatorInstance.Data + (longlong)(int)uVar24 * 0x18));
          pTVar11 = local_270;
          lVar22 = 3;
          local_300._0_8_ = 0xffffffffffffffff;
          local_300._s_0.C = -1;
          uVar20 = (ulonglong)(int)uVar3;
          do {
            uVar24 = *(uint *)((longlong)&local_250 + lVar19);
            iVar14 = (int)((ulonglong)uVar3 >> 0x20);
            local_310 = uVar24;
            local_30c = iVar14;
            uVar13 = FCrc::MemCrc_DEPRECATED(&local_310,8,0);
            if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
              FVar21 = (ForElementType<FSetElementId>)&local_138.Hash;
              if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar21 = local_138.Hash.SecondaryData;
              }
              iVar2 = *(int *)((longlong)FVar21 + (ulonglong)(local_138.HashSize - 1U & uVar13) * 4)
              ;
              while (iVar2 != -1) {
                lVar15 = local_138.Elements._0_8_ + (longlong)iVar2 * 0x14;
                if ((*(uint *)(local_138.Elements._0_8_ + (longlong)iVar2 * 0x14) == local_310) &&
                   (*(int *)(lVar15 + 4) == local_30c)) {
                  if (iVar2 != -1) goto LAB_14c82bf7a;
                  break;
                }
                iVar2 = *(int *)(lVar15 + 0xc);
              }
            }
            lVar15 = 0;
LAB_14c82bf7a:
            puVar16 = (undefined4 *)(lVar15 + 8);
            if (lVar15 == 0) {
              puVar16 = (undefined4 *)0x0;
            }
            if (puVar16 == (undefined4 *)0x0) {
              lVar15 = *(longlong *)
                        ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar24 >> 9) * 8);
              puVar16 = (undefined4 *)(lVar15 + (ulonglong)(uVar24 & 0x1ff) * 0x18);
              local_168 = *puVar16;
              uStack_164 = puVar16[1];
              uStack_160 = puVar16[2];
              uStack_15c = puVar16[3];
              local_158 = *(undefined8 *)(lVar15 + 0x10 + (ulonglong)(uVar24 & 0x1ff) * 0x18);
              (**(code **)local_268)(&local_1e8,*(undefined8 *)&local_268->field_0x8,&local_168);
              local_1d0._s_0.X = local_1e8 - (pTVar11->Origin).field0_0x0._s_0.X;
              local_1d0._s_0.Y = local_1e0 - (pTVar11->Origin).field0_0x0._s_0.Y;
              local_1d0._s_0.Z = local_1d8 - (pTVar11->Origin).field0_0x0._s_0.Z;
              TQuaternion<double>::InverseMultiply
                        (&pTVar11->Rotation,(TVector<double> *)&local_1b8._s_0,
                         (TVector<double> *)&local_1d0._s_0);
              dVar5 = local_1b8._s_0.X * local_298;
              local_308 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              _Y = local_1b8._s_0.Y * local_290;
              dVar6 = local_1b8._s_0.Z * local_288;
              if (iVar14 < 3) {
                if ((2 < uVar20) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValidIndex(Index)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                        ,0x7a2,L""), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (local_150.field0_0x0.XYZ[uVar20] <= 0.0) {
                  if ((2 < uVar20) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                          ,0x7a2,L""), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar14 = (0.0 < local_150.field0_0x0.XYZ[uVar20] ||
                           local_150.field0_0x0.XYZ[uVar20] == 0.0) - 1;
                }
                else {
                  iVar14 = 1;
                }
                fStack_2cc = (float)local_2b8[uVar20] * (float)_Y;
                local_2d0 = (float)(iVar14 * local_2a8[uVar20]) * (float)dVar5;
                local_308._s_0.Y = fStack_2cc;
                local_308._s_0.X = local_2d0;
              }
              else {
                dVar5 = atan2(_Y,dVar5);
                if (iVar14 == 4) {
                  if (dVar5 < dVar10) {
                    dVar5 = dVar5 + dVar1;
                  }
                }
                else if ((iVar14 == 3) && (dVar8 < dVar5)) {
                  dVar5 = dVar5 + dVar9;
                }
                local_2c8 = __real_3f800000 - (float)dVar5 * fVar7;
                uStack_2c4 = (uint)(float)dVar6 ^ uVar23;
                local_308._s_0.Y = (float)uStack_2c4;
                local_308._s_0.X = local_2c8;
              }
              pFVar18 = (FScriptContainerElement *)((longlong)&local_300 + lVar19);
              iVar14 = TDynamicMeshOverlay<float,2>::AppendElement
                                 ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,local_308.XY);
              *(int *)pFVar18 = iVar14;
              if (((local_328.AllocatorInstance.Data <= pFVar18) &&
                  (pFVar18 < local_328.AllocatorInstance.Data + (longlong)local_328.ArrayMax * 4))
                 && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar14 = local_328.ArrayNum;
              if (local_328.ArrayNum == local_328.ArrayMax) {
                iVar14 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_328.AllocatorInstance,&local_328.ArrayMax);
              }
              local_1f0 = pFVar18;
              local_328.ArrayNum = iVar14 + 1;
              *(int *)(local_328.AllocatorInstance.Data + (longlong)iVar14 * 4) = *(int *)pFVar18;
              local_1f8 = &local_310;
              TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&>_>
                        (&local_138,&local_280,(bool *)&local_1f8);
            }
            else {
              *(undefined4 *)((longlong)&local_300 + lVar19) = *puVar16;
            }
            lVar19 = lVar19 + 4;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          TDynamicMeshOverlay<float,2>::SetTriangle
                    ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,(int)local_260,
                     (FIndex3i *)&local_300._s_0,true);
          local_314 = local_314 + 1;
          local_2c0 = local_2c0 + 1;
          param_1 = local_230;
          param_6 = (FUVEditResult *)local_240;
        } while (local_2c0 < local_258);
      }
      SplitBowtiesOnUVElements(this,&local_328,true);
      if ((&param_6->NewUVElements != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
         (&param_6->NewUVElements != &local_328)) {
        pFVar18 = (param_6->NewUVElements).AllocatorInstance.Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (param_6->NewUVElements).AllocatorInstance.Data = local_328.AllocatorInstance.Data;
        (param_6->NewUVElements).ArrayNum = local_328.ArrayNum;
        (param_6->NewUVElements).ArrayMax = local_328.ArrayMax;
        local_328.ArrayNum = 0;
        local_328.ArrayMax = 0;
        local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_328.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.AllocatorInstance.Data);
      }
      local_138.HashSize = 0;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138.Elements);
      if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.AllocatorInstance.Data);
      }
      if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetTriangleUVsFromExpMap @ 14c82c400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromExpMap
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FExpMapOptions *param_2,FUVEditResult *param_3)

{
  short sVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FUVEditResult *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  FGraphNode *pFVar14;
  uint *puVar15;
  uint *puVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  ForAnyElementType FVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStackY_878 [32];
  FUVEditResult local_820;
  TArray<int,TSizedDefaultAllocator<32>_> local_810;
  uint local_800;
  float local_7fc;
  float local_7f8;
  FIndex3i_u_0 local_7f0;
  FUVEditResult *local_7e0;
  undefined8 local_7d8;
  TVector<double>_u_0 local_7c8;
  double dStack_7b0;
  double dStack_7a8;
  double dStack_7a0;
  double dStack_798;
  undefined1 local_788 [64];
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_748;
  undefined1 local_710 [8];
  undefined1 *local_708;
  int local_700;
  TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
  local_6f8;
  FIndexPriorityQueue local_6e0;
  TVector<double>_u_0 local_6a8;
  TQuaternion<double>_u_0 TStack_690;
  double local_670;
  double dStack_668;
  FDynamicSubmesh3 local_658;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_878;
  local_7e0 = param_3;
  if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2321708304872504799>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                        ,0x221,"UVOverlay");
    if (!bVar10) {
      return false;
    }
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  if (param_1->ArrayNum == 0) {
    return false;
  }
  ResetUVs(this,param_1);
  FDynamicSubmesh3::FDynamicSubmesh3(&local_658,this->Mesh,param_1,0,false);
  FMeshNormals::QuickComputeVertexNormals(&local_658.Submesh,false);
  if (0 < param_2->NormalSmoothingRounds) {
    FMeshNormals::SmoothVertexNormals
              (&local_658.Submesh,param_2->NormalSmoothingRounds,param_2->NormalSmoothingAlpha);
  }
  local_800 = 0xffffffff;
  local_7c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_7c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_7c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_7a0 = ___xmm_3ff00000000000000000000000000000;
  dStack_798 = _UNK_15061cbc8;
  dStack_7b0 = 0.0;
  dStack_7a8 = 0.0;
  bVar10 = EstimateGeodesicCenterFrameVertex
                     (&local_658.Submesh,(TFrame3<double> *)&local_7c8._s_0,(int *)&local_800,true);
  uVar27 = local_800;
  if ((((int)local_800 < 0) ||
      ((int)(local_658.Submesh.VertexRefCounts.RefCounts.CurBlock * 0x200 +
            local_658.Submesh.VertexRefCounts.RefCounts.CurBlockUsed) <= (int)local_800)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (local_658.Submesh.VertexRefCounts.RefCounts.Blocks.
                                     AllocatorInstance.Data + (ulonglong)(local_800 >> 9) * 8) +
                                  (ulonglong)(local_800 & 0x1ff) * 2) - 1U))) {
    bVar10 = false;
LAB_14c82ccbf:
    FDynamicSubmesh3::~FDynamicSubmesh3(&local_658);
    return bVar10;
  }
  TMeshLocalParam<UE::Geometry::FDynamicMesh3>::TMeshLocalParam<UE::Geometry::FDynamicMesh3>
            ((TMeshLocalParam<UE::Geometry::FDynamicMesh3> *)local_788,&local_658.Submesh);
  local_788[8] = ExponentialMapUpwindAvg;
  local_6a8._s_0.X = local_7c8._s_0.X;
  local_6a8._s_0.Y = local_7c8._s_0.Y;
  local_6a8._s_0.Z = local_7c8._s_0.Z;
  TStack_690._s_0.X = dStack_7b0;
  TStack_690._s_0.Y = dStack_7a8;
  TStack_690._s_0.Z = dStack_7a0;
  local_670 = 0.0;
  dStack_668 = 0.0;
  TStack_690._s_0.W = dStack_798;
  pFVar14 = TMeshLocalParam<UE::Geometry::FDynamicMesh3>::GetNodeForPointSetID
                      ((TMeshLocalParam<UE::Geometry::FDynamicMesh3> *)local_788,uVar27,true);
  puVar28 = (uint *)0x0;
  (pFVar14->UV).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  pFVar14->GraphDistance = 0.0;
  pFVar14->bFrozen = true;
  FIndexPriorityQueue::Insert(&local_6e0,uVar27,0.0);
  TMeshLocalParam<UE::Geometry::FDynamicMesh3>::ProcessQueueUntilTermination
            ((TMeshLocalParam<UE::Geometry::FDynamicMesh3> *)local_788,__real_47efffffe0000000);
  local_810.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_810.ArrayNum = 0;
  local_810.ArrayMax = 0;
  local_820.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_820.NewUVElements.ArrayNum = 0;
  local_820.NewUVElements.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_810,&IndexConstants::InvalidID,
             local_658.Submesh.VertexRefCounts.RefCounts.CurBlock * 0x200 +
             local_658.Submesh.VertexRefCounts.RefCounts.CurBlockUsed);
  uVar8 = _UNK_150a9e64c;
  uVar7 = _UNK_150a9e648;
  uVar6 = _UNK_150a9e644;
  uVar5 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar27 = 0;
  uVar29 = local_658.Submesh.VertexRefCounts.RefCounts.CurBlock * 0x200 +
           local_658.Submesh.VertexRefCounts.RefCounts.CurBlockUsed;
  puVar22 = puVar28;
  lVar23 = local_748._0_8_;
  puVar26 = local_708;
  iVar13 = local_700;
  FVar24.Data = local_6f8.Blocks.AllocatorInstance.Data;
  FVar25.Data = local_658.Submesh.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
  if ((uVar29 != 0) &&
     (puVar22 = (uint *)0x0,
     0xfffd < (ushort)(**(short **)
                         local_658.Submesh.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data -
                      1U))) {
    puVar22 = (uint *)&DAT_00000001;
    uVar20 = 1;
    if ((int)uVar29 < 2) goto joined_r0x00014c82c6ba;
    do {
      sVar1 = *(short *)(*(longlong *)
                          (local_658.Submesh.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data
                          + ((ulonglong)puVar22 >> 9) * 8) + (ulonglong)((uint)puVar22 & 0x1ff) * 2)
      ;
      if ((sVar1 != 0) && (sVar1 != -1)) break;
      uVar20 = (uint)puVar22 + 1;
      puVar22 = (uint *)(ulonglong)uVar20;
    } while ((int)uVar20 < (int)uVar29);
  }
  uVar20 = (uint)puVar22;
joined_r0x00014c82c6ba:
  if (uVar20 != uVar29) {
LAB_14c82c6e3:
    uVar20 = (uint)puVar22;
    if (local_748._8_4_ != local_748._52_4_) {
      puVar19 = local_710;
      if (puVar26 != (undefined1 *)0x0) {
        puVar19 = puVar26;
      }
      uVar21 = *(uint *)(puVar19 + ((ulonglong)(iVar13 - 1) & (ulonglong)puVar22) * 4);
      while (uVar21 != 0xffffffff) {
        puVar16 = (uint *)((longlong)(int)uVar21 * 0x10 + lVar23);
        if (*puVar16 == uVar20) {
          puVar15 = puVar16 + 1;
          if (puVar16 == (uint *)0x0) {
            puVar15 = puVar28;
          }
          if (((puVar15 != (uint *)0x0) &&
              (lVar17 = (ulonglong)(*puVar15 & 0x1ff) * 0x40 +
                        *(longlong *)(FVar24.Data + (ulonglong)(*puVar15 >> 9) * 8), lVar17 != 0))
             && (*(char *)(lVar17 + 0x20) != '\0')) {
            puVar19 = local_710;
            if (puVar26 != (undefined1 *)0x0) {
              puVar19 = puVar26;
            }
            uVar21 = *(uint *)(puVar19 + ((ulonglong)(iVar13 - 1) & (ulonglong)puVar22) * 4);
            goto joined_r0x00014c82c77f;
          }
          break;
        }
        uVar21 = puVar16[2];
      }
    }
    goto joined_r0x00014c82c928;
  }
  uVar20 = local_658.Submesh.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
           local_658.Submesh.TriangleRefCounts.RefCounts.CurBlockUsed;
  uVar29 = 0;
  if ((uVar20 != 0) &&
     (uVar29 = 0,
     0xfffd < (ushort)(**(short **)
                         local_658.Submesh.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data
                      - 1U))) {
    uVar21 = 1;
    uVar29 = 1;
    if (1 < (int)uVar20) {
      do {
        sVar1 = *(short *)(*(longlong *)
                            (local_658.Submesh.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                             Data + (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 2)
        ;
        if ((sVar1 != 0) && (uVar29 = uVar21, sVar1 != -1)) break;
        uVar21 = uVar21 + 1;
        uVar29 = uVar21;
      } while ((int)uVar21 < (int)uVar20);
    }
  }
  if (uVar29 != uVar20) {
    do {
      local_7d8 = *(undefined8 *)
                   (*(longlong *)
                     (local_658.Submesh.Triangles.Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 0xc);
      uVar27 = *(uint *)(*(longlong *)
                          (local_658.Submesh.Triangles.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar29 >> 9) * 8) + 8 + (ulonglong)(uVar29 & 0x1ff) * 0xc);
      lVar23 = (longlong)(int)(uint)local_7d8;
      uVar21 = 0;
      if ((int)(uint)local_7d8 < local_810.ArrayNum) {
        uVar21 = ~(uint)local_7d8 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      iVar13 = *(int *)(local_810.AllocatorInstance.Data + lVar23 * 4);
      lVar23 = (longlong)(int)local_7d8._4_4_;
      uVar21 = 0;
      if ((int)local_7d8._4_4_ < local_810.ArrayNum) {
        uVar21 = ~local_7d8._4_4_ >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      iVar2 = *(int *)(local_810.AllocatorInstance.Data + lVar23 * 4);
      uVar21 = 0;
      if ((int)uVar27 < local_810.ArrayNum) {
        uVar21 = ~uVar27 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      local_7f0._s_0.C =
           *(undefined4 *)(local_810.AllocatorInstance.Data + (longlong)(int)uVar27 * 4);
      local_7f0._s_0.A = iVar13;
      local_7f0._s_0.B = iVar2;
      if (((iVar13 == -1) || (iVar2 == -1)) || (local_7f0._s_0.C == -1)) {
        puVar28 = (uint *)(ulonglong)((int)puVar28 + 1);
      }
      else {
        iVar13 = TIndexMap<int>::GetFrom(&local_658.Mappings.TriangleMap,uVar29);
        TDynamicMeshOverlay<float,2>::SetTriangle
                  ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,iVar13,
                   (FIndex3i *)&local_7f0._s_0,true);
      }
      uVar27 = (uint)puVar28;
      do {
        uVar29 = uVar29 + 1;
        if ((int)uVar20 <= (int)uVar29) {
          if (uVar29 == uVar20) goto LAB_14c82cbcc;
          break;
        }
        sVar1 = *(short *)(*(longlong *)
                            (local_658.Submesh.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                             Data + (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 2)
        ;
      } while ((sVar1 == 0) || (sVar1 == -1));
    } while( true );
  }
LAB_14c82cbcc:
  pFVar9 = local_7e0;
  if ((local_7e0 != (FUVEditResult *)0x0) && (local_7e0 != &local_820)) {
    pFVar3 = (local_7e0->NewUVElements).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar9->NewUVElements).AllocatorInstance.Data = local_820.NewUVElements.AllocatorInstance.Data;
    (pFVar9->NewUVElements).ArrayNum = local_820.NewUVElements.ArrayNum;
    (pFVar9->NewUVElements).ArrayMax = local_820.NewUVElements.ArrayMax;
    local_820.NewUVElements.ArrayNum = 0;
    local_820.NewUVElements.ArrayMax = 0;
    local_820.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if ((bVar10) && (uVar27 == 0)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (local_820.NewUVElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.NewUVElements.AllocatorInstance.Data);
  }
  if (local_810.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_810.AllocatorInstance.Data);
  }
  if (local_6e0.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e0.id_to_index.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_6e0.nodes);
  TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
  ~TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
            (&local_6f8);
  local_700 = 0;
  if (local_708 != (undefined1 *)0x0) {
    FMemory::Free(local_708);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_748);
  if (local_788._16_8_ != 0) {
    plVar18 = (longlong *)(local_788 + 0x20);
    if ((longlong *)local_788._56_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_788._56_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  goto LAB_14c82ccbf;
joined_r0x00014c82c77f:
  uVar30 = uVar5;
  uVar31 = uVar6;
  uVar32 = uVar7;
  uVar33 = uVar8;
  if (uVar21 == 0xffffffff) goto LAB_14c82c79e;
  puVar22 = (uint *)((longlong)(int)uVar21 * 0x10 + lVar23);
  if (*puVar22 == uVar20) {
    puVar16 = puVar22 + 1;
    if (puVar22 == (uint *)0x0) {
      puVar16 = puVar28;
    }
    if (((puVar16 != (uint *)0x0) &&
        (lVar23 = (ulonglong)(*puVar16 & 0x1ff) * 0x40 +
                  *(longlong *)(FVar24.Data + (ulonglong)(*puVar16 >> 9) * 8), lVar23 != 0)) &&
       (*(char *)(lVar23 + 0x20) != '\0')) {
      uVar30 = *(undefined4 *)(lVar23 + 0x10);
      uVar31 = *(undefined4 *)(lVar23 + 0x14);
      uVar32 = *(undefined4 *)(lVar23 + 0x18);
      uVar33 = *(undefined4 *)(lVar23 + 0x1c);
    }
    goto LAB_14c82c79e;
  }
  uVar21 = puVar22[2];
  goto joined_r0x00014c82c77f;
LAB_14c82c79e:
  local_7fc = (float)(double)CONCAT44(uVar31,uVar30);
  local_7f8 = (float)(double)CONCAT44(uVar33,uVar32);
  iVar13 = TDynamicMeshOverlay<float,2>::AppendElement
                     ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,&local_7fc);
  uVar21 = uVar27;
  if ((int)uVar20 < local_810.ArrayNum) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  *(int *)(local_810.AllocatorInstance.Data + (longlong)(int)uVar20 * 4) = iVar13;
  uVar21 = 0;
  if ((int)uVar20 < local_810.ArrayNum) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  pFVar3 = local_810.AllocatorInstance.Data + (longlong)(int)uVar20 * 4;
  if (((local_820.NewUVElements.AllocatorInstance.Data <= pFVar3) &&
      (pFVar3 < local_820.NewUVElements.AllocatorInstance.Data +
                (longlong)local_820.NewUVElements.ArrayMax * 4)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  iVar13 = local_820.NewUVElements.ArrayNum;
  if (local_820.NewUVElements.ArrayNum == local_820.NewUVElements.ArrayMax) {
    iVar13 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)&local_820,&local_820.NewUVElements.ArrayMax);
  }
  local_820.NewUVElements.ArrayNum = iVar13 + 1;
  *(undefined4 *)(local_820.NewUVElements.AllocatorInstance.Data + (longlong)iVar13 * 4) =
       *(undefined4 *)pFVar3;
  iVar13 = local_700;
  puVar26 = local_708;
  FVar25.Data = local_658.Submesh.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
  lVar23 = local_748._0_8_;
  FVar24.Data = local_6f8.Blocks.AllocatorInstance.Data;
joined_r0x00014c82c928:
  do {
    uVar20 = uVar20 + 1;
    puVar22 = (uint *)(ulonglong)uVar20;
    if ((int)uVar29 <= (int)uVar20) goto joined_r0x00014c82c6ba;
    sVar1 = *(short *)(*(longlong *)(FVar25.Data + (ulonglong)(uVar20 >> 9) * 8) +
                      (ulonglong)(uVar20 & 0x1ff) * 2);
  } while ((sVar1 == 0) || (sVar1 == -1));
  goto LAB_14c82c6e3;
}

// SetTriangleUVsFromExpMap @ 14c82cd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromExpMap
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2,TFrame3<double> *param_3,TVector2<double> *param_4,int param_5,double param_6,
          double param_7,FUVEditResult *param_8)

{
  double *pdVar1;
  double dVar2;
  short sVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FUVEditResult *pFVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  TVector<double> *pTVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ForAnyElementType FVar26;
  int iVar27;
  ForAnyElementType FVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  float fVar31;
  double extraout_XMM0_Qa;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  undefined4 uVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStackY_b68 [32];
  undefined1 local_b18 [8];
  FUVEditResult local_b10;
  TArray<int,TSizedDefaultAllocator<32>_> local_b00;
  uint local_af0 [2];
  undefined8 local_ae8;
  IndexIterator local_ae0;
  undefined8 local_ad0;
  float local_ac8;
  undefined8 local_ac0;
  double local_ab0;
  FIndex3i_u_0 local_aa8;
  double local_a98;
  FUVEditResult *local_a90;
  FIndex3i_u_0 local_a88;
  TVector<double>_u_0 local_a78;
  double dStack_a60;
  undefined1 local_a58 [16];
  double local_a48;
  code *local_a40;
  undefined1 *local_a38;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> local_a30;
  IndexIterator local_a20;
  TQuaternion<double>_u_0 local_a10;
  TVector<double>_u_0 local_9e8;
  TVector<double> local_9c8;
  undefined1 local_9a8 [56];
  longlong *local_970;
  bool local_968;
  undefined1 local_958 [64];
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_918;
  undefined1 local_8e0 [8];
  undefined1 *local_8d8;
  int local_8d0;
  TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
  local_8c8;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> local_8a8;
  ForAnyElementType local_888;
  FDynamicSubmesh3 local_828;
  TDistPoint3Triangle3<double> local_238;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_1a8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_b68;
  local_a90 = param_8;
  if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2321708304872504724>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                        ,0x26c,"UVOverlay");
    if (!bVar12) {
      return false;
    }
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  if (param_1->ArrayNum == 0) {
    return false;
  }
  ResetUVs(this,param_1);
  dVar11 = __real_3ff0000000000000;
  local_ac0 = *(double *)&param_4->field0_0x0;
  if ((double)CONCAT44((uint)((ulonglong)local_ac0 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_ac0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3eb0c6f7a0000000) {
    local_ac0 = __real_3ff0000000000000;
  }
  else {
    local_ac0 = __real_3ff0000000000000 / local_ac0;
  }
  local_ab0 = *(double *)((longlong)&param_4->field0_0x0 + 8);
  if ((double)CONCAT44((uint)((ulonglong)local_ab0 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_ab0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3eb0c6f7a0000000) {
    local_ab0 = __real_3ff0000000000000;
  }
  else {
    local_ab0 = __real_3ff0000000000000 / local_ab0;
  }
  FDynamicSubmesh3::FDynamicSubmesh3(&local_828,this->Mesh,param_1,0,false);
  local_a38 = local_b18;
  local_b18[0] = 0;
  local_a40 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromExpMap'::__l2::<lambda_1>,UE::Math::TVector<float>,UE::Math::TVector<float>_const_&>
              ::Call;
  local_a30._0_8_ = *(undefined8 *)param_2;
  local_a30._8_8_ = *(undefined8 *)&param_2->field_0x8;
  MeshTransforms::ApplyTransform
            (&local_828.Submesh,&local_a30,
             (TFunctionRef<UE::Math::TVector<float>___cdecl(UE::Math::TVector<float>_const_&)> *)
             &local_a40);
  FMeshNormals::QuickComputeVertexNormals(&local_828.Submesh,false);
  FMeshNormals::SmoothVertexNormals(&local_828.Submesh,param_5,param_6);
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&local_1a8,&local_828.Submesh,true);
  local_9a8._0_8_ = __real_7fefffffffffffff;
  local_a98 = __real_7fefffffffffffff;
  local_9a8._16_8_ = 0;
  local_970 = (longlong *)0x0;
  local_968 = false;
  local_af0[0] = 0xffffffff;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_nearest_tri<0>
            (&local_1a8,local_1a8.RootIndex,&param_3->Origin,&local_a98,(int *)local_af0,
             (FQueryOptions *)local_9a8);
  if (local_9a8._16_8_ != 0) {
    plVar20 = (longlong *)(local_9a8 + 0x20);
    if (local_970 != (longlong *)0x0) {
      plVar20 = local_970;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  uVar24 = local_af0[0];
  local_9e8._s_0.X = (param_3->Origin).field0_0x0._s_0.X;
  local_9e8._s_0.Y = (param_3->Origin).field0_0x0._s_0.Y;
  local_9e8._s_0.Z = (param_3->Origin).field0_0x0._s_0.Z;
  TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
            (&local_238,&local_828.Submesh,local_af0[0],(TVector<double> *)&local_9e8._s_0);
  local_a58 = *(undefined1 (*) [16])((longlong)&(param_3->Rotation).field0_0x0 + 8);
  uVar40 = local_a58._0_4_;
  uVar41 = local_a58._4_4_;
  uVar37 = local_a58._8_4_;
  uVar39 = local_a58._12_4_;
  dVar9 = (param_3->Rotation).field0_0x0._s_0.X;
  dVar2 = *(double *)((longlong)&(param_3->Rotation).field0_0x0 + 0x18);
  uVar34 = SUB84(dVar2,0);
  uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
  uVar32 = SUB84(dVar9,0);
  uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
  dVar7 = local_a58._0_8_;
  dVar38 = dVar7 + dVar7;
  local_a78._s_0.Z = local_238.ClosestTrianglePoint.field0_0x0._s_0.Z;
  dVar8 = local_a58._8_8_;
  dVar36 = dVar8 + dVar8;
  local_a88._0_8_ =
       *(undefined8 *)
        (*(longlong *)
          (local_828.Submesh.Triangles.Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8)
        + (ulonglong)(uVar24 & 0x1ff) * 0xc);
  local_a88._s_0.C =
       *(int *)(*(longlong *)
                 (local_828.Submesh.Triangles.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar24 >> 9) * 8) + 8 + (ulonglong)(uVar24 & 0x1ff) * 0xc);
  local_a78._s_0.X = local_238.ClosestTrianglePoint.field0_0x0._s_0.X;
  local_a78._s_0.Y = local_238.ClosestTrianglePoint.field0_0x0._s_0.Y;
  local_ae8 = dVar38 * dVar7;
  local_ad0 = dVar38 * dVar2;
  dStack_a60 = dVar9;
  local_a48 = dVar2;
  pTVar15 = FDynamicMesh3::GetTriNormal(&local_828.Submesh,&local_9c8,uVar24);
  if ((dVar36 * dVar7 - (dVar9 + dVar9) * dVar2) * (pTVar15->field0_0x0)._s_0.Y +
      (dVar36 * dVar9 + dVar38 * dVar2) * (pTVar15->field0_0x0)._s_0.X +
      (dVar11 - ((dVar9 + dVar9) * dVar9 + local_ae8)) * (pTVar15->field0_0x0)._s_0.Z < 0.0) {
    __libm_sse2_sincos_();
    local_a10._s_0.Z = (dVar36 * dVar9 - local_ad0) * extraout_XMM0_Qa;
    local_a10._s_0.Y = (dVar36 * dVar2 + dVar38 * dVar9) * extraout_XMM0_Qa;
    local_a10._s_0.X = (dVar11 - (dVar36 * dVar8 + local_ae8)) * extraout_XMM0_Qa;
    TFrame3<double>::Rotate
              ((TFrame3<double> *)&local_a78._s_0,(TQuaternion<double> *)&local_a10._s_0);
    uVar34 = SUB84(local_a48,0);
    uVar35 = (undefined4)((ulonglong)local_a48 >> 0x20);
    uVar37 = local_a58._8_4_;
    uVar39 = local_a58._12_4_;
    uVar40 = local_a58._0_4_;
    uVar41 = local_a58._4_4_;
    uVar32 = SUB84(dStack_a60,0);
    uVar33 = (undefined4)((ulonglong)dStack_a60 >> 0x20);
  }
  if (0.0 <= param_7) {
    if (dVar11 <= param_7) {
      param_7 = dVar11;
    }
    if (0.0 < param_7) {
      dVar8 = (double)CONCAT44(uVar39,uVar37) + (double)CONCAT44(uVar39,uVar37);
      dVar36 = (double)CONCAT44(uVar33,uVar32) + (double)CONCAT44(uVar33,uVar32);
      dVar2 = (double)CONCAT44(uVar41,uVar40) + (double)CONCAT44(uVar41,uVar40);
      FRefCountVector::IndexIterator::IndexIterator
                (&local_ae0,&local_828.Submesh.VertexRefCounts,0,
                 local_828.Submesh.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 local_828.Submesh.VertexRefCounts.RefCounts.CurBlockUsed);
      iVar27 = local_828.Submesh.VertexRefCounts.RefCounts.CurBlock * 0x200 +
               local_828.Submesh.VertexRefCounts.RefCounts.CurBlockUsed;
      FRefCountVector::IndexIterator::IndexIterator
                (&local_a20,&local_828.Submesh.VertexRefCounts,iVar27,iVar27);
      if (local_ae0._8_4_ != local_a20._8_4_) {
        dVar7 = dVar11 - param_7;
        dVar38 = (double)CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                                  UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
        uVar37 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
        uVar39 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        do {
          local_ac8 = (float)uVar39;
          fVar31 = (float)uVar37;
          local_ad0 = dVar38;
          if (local_828.Submesh.VertexNormals.bIsSet != false) {
            pdVar1 = (double *)
                     (*(longlong *)
                       (local_828.Submesh.VertexNormals.TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)((uint)local_ae0._8_4_ >> 9) * 8) +
                     (ulonglong)(local_ae0._8_4_ & 0x1ff) * 0xc);
            local_ac8 = *(float *)(*(longlong *)
                                    (local_828.Submesh.VertexNormals.TypedValue.Blocks.
                                     AllocatorInstance.Data +
                                    (ulonglong)((uint)local_ae0._8_4_ >> 9) * 8) + 8 +
                                  (ulonglong)(local_ae0._8_4_ & 0x1ff) * 0xc);
            fVar31 = *(float *)pdVar1;
            local_ad0 = *pdVar1;
          }
          if (local_828.Submesh.VertexNormals.bIsSet != false) {
            lVar25 = *(longlong *)
                      (local_828.Submesh.VertexNormals.TypedValue.Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)local_ae0._8_4_ >> 9) * 8);
            uVar23 = (ulonglong)(local_ae0._8_4_ & 0x1ff);
            *(float *)(lVar25 + uVar23 * 0xc) =
                 (float)((double)fVar31 * dVar7 +
                        (dVar2 * (double)CONCAT44(uVar35,uVar34) +
                        dVar8 * (double)CONCAT44(uVar33,uVar32)) * param_7);
            *(float *)(lVar25 + 4 + uVar23 * 0xc) =
                 (float)((double)local_ad0._4_4_ * dVar7 +
                        (dVar8 * (double)CONCAT44(uVar41,uVar40) -
                        dVar36 * (double)CONCAT44(uVar35,uVar34)) * param_7);
            *(float *)(lVar25 + 8 + uVar23 * 0xc) =
                 (float)((double)local_ac8 * dVar7 +
                        (dVar11 - (dVar2 * (double)CONCAT44(uVar41,uVar40) +
                                  dVar36 * (double)CONCAT44(uVar33,uVar32))) * param_7);
            dVar38 = (double)CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                                      UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
            uVar37 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
            uVar39 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          }
          local_ae0._8_4_ = local_ae0._8_4_ + 1;
          if ((int)local_ae0._8_4_ < (int)local_ae0._12_4_) {
            do {
              if ((*(short *)(*(longlong *)
                               (*(longlong *)(local_ae0._0_8_ + 8) +
                               (ulonglong)((uint)local_ae0._8_4_ >> 9) * 8) +
                             (ulonglong)(local_ae0._8_4_ & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(local_ae0._0_8_ + 8) +
                              (ulonglong)((uint)local_ae0._8_4_ >> 9) * 8) +
                            (ulonglong)(local_ae0._8_4_ & 0x1ff) * 2) != -1)) break;
              local_ae0._8_4_ = local_ae0._8_4_ + 1;
            } while ((int)local_ae0._8_4_ < (int)local_ae0._12_4_);
          }
        } while (local_ae0._8_4_ != local_a20._8_4_);
      }
    }
  }
  TMeshLocalParam<UE::Geometry::FDynamicMesh3>::TMeshLocalParam<UE::Geometry::FDynamicMesh3>
            ((TMeshLocalParam<UE::Geometry::FDynamicMesh3> *)local_958,&local_828.Submesh);
  local_958[8] = ExponentialMapUpwindAvg;
  TMeshLocalParam<UE::Geometry::FDynamicMesh3>::ComputeToMaxDistance
            ((TMeshLocalParam<UE::Geometry::FDynamicMesh3> *)local_958,
             (TFrame3<double> *)&local_a78._s_0,(FIndex3i *)&local_a88._s_0,__real_47efffffe0000000)
  ;
  local_b00.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b00.ArrayNum = 0;
  local_b00.ArrayMax = 0;
  local_b10.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b10.NewUVElements.ArrayNum = 0;
  local_b10.NewUVElements.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_b00,&IndexConstants::InvalidID,
             local_828.Submesh.VertexRefCounts.RefCounts.CurBlock * 0x200 +
             local_828.Submesh.VertexRefCounts.RefCounts.CurBlockUsed);
  dVar2 = local_ab0;
  dVar11 = local_ac0;
  uVar39 = _UNK_150a9e64c;
  uVar37 = _UNK_150a9e648;
  uVar41 = _UNK_150a9e644;
  uVar40 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar24 = local_828.Submesh.VertexRefCounts.RefCounts.CurBlock * 0x200 +
           local_828.Submesh.VertexRefCounts.RefCounts.CurBlockUsed;
  uVar23 = 0;
  if ((uVar24 == 0) ||
     (uVar23 = 0,
     (ushort)(**(short **)local_828.Submesh.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data
             - 1U) < 0xfffe)) {
LAB_14c82d499:
    uVar22 = (uint)uVar23;
  }
  else {
    uVar23 = 1;
    uVar22 = 1;
    if (1 < (int)uVar24) {
      do {
        sVar3 = *(short *)(*(longlong *)
                            (local_828.Submesh.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.
                             Data + (uVar23 >> 9) * 8) + (ulonglong)((uint)uVar23 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar22 = (uint)uVar23 + 1;
        uVar23 = (ulonglong)uVar22;
      } while ((int)uVar22 < (int)uVar24);
      goto LAB_14c82d499;
    }
  }
  FVar26.Data = local_8c8.Blocks.AllocatorInstance.Data;
  lVar25 = local_918._0_8_;
  FVar28.Data = local_828.Submesh.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
  puVar29 = local_8d8;
  iVar27 = local_8d0;
  if (uVar22 != uVar24) {
LAB_14c82d4d0:
    uVar22 = (uint)uVar23;
    if (local_918._8_4_ != local_918._52_4_) {
      puVar21 = local_8e0;
      if (puVar29 != (undefined1 *)0x0) {
        puVar21 = puVar29;
      }
      uVar17 = *(uint *)(puVar21 + (iVar27 - 1 & uVar23) * 4);
      while (uVar17 != 0xffffffff) {
        puVar18 = (uint *)((longlong)(int)uVar17 * 0x10 + lVar25);
        if (*puVar18 == uVar22) {
          puVar16 = puVar18 + 1;
          if (puVar18 == (uint *)0x0) {
            puVar16 = (uint *)0x0;
          }
          if (((puVar16 != (uint *)0x0) &&
              (lVar19 = (ulonglong)(*puVar16 & 0x1ff) * 0x40 +
                        *(longlong *)(FVar26.Data + (ulonglong)(*puVar16 >> 9) * 8), lVar19 != 0))
             && (*(char *)(lVar19 + 0x20) != '\0')) {
            puVar21 = local_8e0;
            if (puVar29 != (undefined1 *)0x0) {
              puVar21 = puVar29;
            }
            uVar17 = *(uint *)(puVar21 + (iVar27 - 1 & uVar23) * 4);
            goto joined_r0x00014c82d582;
          }
          break;
        }
        uVar17 = puVar18[2];
      }
    }
    goto joined_r0x00014c82d73d;
  }
LAB_14c82d777:
  uVar30 = 0;
  iVar27 = 0;
  uVar24 = local_828.Submesh.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
           local_828.Submesh.TriangleRefCounts.RefCounts.CurBlockUsed;
  uVar23 = uVar30;
  pFVar10 = local_a90;
  if ((uVar24 != 0) &&
     (0xfffd < (ushort)(**(short **)
                          local_828.Submesh.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                          Data - 1U))) {
    uVar23 = 1;
    uVar22 = 1;
    if ((int)uVar24 < 2) goto joined_r0x00014c82d800;
    do {
      sVar3 = *(short *)(*(longlong *)
                          (local_828.Submesh.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                           Data + (uVar23 >> 9) * 8) + (ulonglong)((uint)uVar23 & 0x1ff) * 2);
      if ((sVar3 != 0) && (sVar3 != -1)) break;
      uVar22 = (uint)uVar23 + 1;
      uVar23 = (ulonglong)uVar22;
    } while ((int)uVar22 < (int)uVar24);
  }
  uVar22 = (uint)uVar23;
joined_r0x00014c82d800:
  local_a90 = pFVar10;
  if (uVar22 == uVar24) {
    if ((pFVar10 != (FUVEditResult *)0x0) && (pFVar10 != &local_b10)) {
      pFVar5 = (pFVar10->NewUVElements).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar10->NewUVElements).AllocatorInstance.Data =
           local_b10.NewUVElements.AllocatorInstance.Data;
      (pFVar10->NewUVElements).ArrayNum = local_b10.NewUVElements.ArrayNum;
      (pFVar10->NewUVElements).ArrayMax = local_b10.NewUVElements.ArrayMax;
      local_b10.NewUVElements.ArrayNum = 0;
      local_b10.NewUVElements.ArrayMax = 0;
      local_b10.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_b10.NewUVElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b10.NewUVElements.AllocatorInstance.Data);
    }
    if (local_b00.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b00.AllocatorInstance.Data);
    }
    if (local_888.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data);
    }
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
    ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_8a8);
    TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
    ~TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
              (&local_8c8);
    local_8d0 = 0;
    if (local_8d8 != (undefined1 *)0x0) {
      FMemory::Free(local_8d8);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_918);
    if (local_958._16_8_ != 0) {
      plVar20 = (longlong *)(local_958 + 0x20);
      if ((longlong *)local_958._56_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_958._56_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              (&local_1a8);
    FDynamicSubmesh3::~FDynamicSubmesh3(&local_828);
    return iVar27 == 0;
  }
  do {
    uVar22 = (uint)uVar23;
    local_ac0 = *(double *)
                 (*(longlong *)
                   (local_828.Submesh.Triangles.Blocks.AllocatorInstance.Data + (uVar23 >> 9) * 8) +
                 (ulonglong)(uVar22 & 0x1ff) * 0xc);
    uVar17 = *(uint *)(*(longlong *)
                        (local_828.Submesh.Triangles.Blocks.AllocatorInstance.Data +
                        (uVar23 >> 9) * 8) + 8 + (ulonglong)(uVar22 & 0x1ff) * 0xc);
    lVar25 = (longlong)(int)(uint)local_ac0;
    uVar14 = 0;
    if ((int)(uint)local_ac0 < local_b00.ArrayNum) {
      uVar14 = ~(uint)local_ac0 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar27 = *(int *)(local_b00.AllocatorInstance.Data + lVar25 * 4);
    lVar25 = (longlong)(int)local_ac0._4_4_;
    uVar14 = 0;
    if ((int)local_ac0._4_4_ < local_b00.ArrayNum) {
      uVar14 = ~local_ac0._4_4_ >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar4 = *(int *)(local_b00.AllocatorInstance.Data + lVar25 * 4);
    uVar14 = 0;
    if ((int)uVar17 < local_b00.ArrayNum) {
      uVar14 = ~uVar17 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    local_aa8._s_0.C = *(undefined4 *)(local_b00.AllocatorInstance.Data + (longlong)(int)uVar17 * 4)
    ;
    local_aa8._s_0.A = iVar27;
    local_aa8._s_0.B = iVar4;
    if (((iVar27 == -1) || (iVar4 == -1)) || (local_aa8._s_0.C == -1)) {
      uVar30 = (ulonglong)((int)uVar30 + 1);
    }
    else {
      iVar27 = TIndexMap<int>::GetFrom(&local_828.Mappings.TriangleMap,uVar22);
      TDynamicMeshOverlay<float,2>::SetTriangle
                ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,iVar27,(FIndex3i *)&local_aa8._s_0,
                 true);
    }
    iVar27 = (int)uVar30;
    do {
      uVar22 = uVar22 + 1;
      uVar23 = (ulonglong)uVar22;
      pFVar10 = local_a90;
      if ((int)uVar24 <= (int)uVar22) goto joined_r0x00014c82d800;
      sVar3 = *(short *)(*(longlong *)
                          (local_828.Submesh.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                           Data + (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 2);
    } while ((sVar3 == 0) || (sVar3 == -1));
  } while( true );
joined_r0x00014c82d582:
  uVar32 = uVar40;
  uVar33 = uVar41;
  uVar34 = uVar37;
  uVar35 = uVar39;
  if (uVar17 == 0xffffffff) goto LAB_14c82d5a1;
  puVar18 = (uint *)((longlong)(int)uVar17 * 0x10 + lVar25);
  if (*puVar18 == uVar22) {
    puVar16 = puVar18 + 1;
    if (puVar18 == (uint *)0x0) {
      puVar16 = (uint *)0x0;
    }
    if (((puVar16 != (uint *)0x0) &&
        (lVar25 = (ulonglong)(*puVar16 & 0x1ff) * 0x40 +
                  *(longlong *)(FVar26.Data + (ulonglong)(*puVar16 >> 9) * 8), lVar25 != 0)) &&
       (*(char *)(lVar25 + 0x20) != '\0')) {
      uVar32 = *(undefined4 *)(lVar25 + 0x10);
      uVar33 = *(undefined4 *)(lVar25 + 0x14);
      uVar34 = *(undefined4 *)(lVar25 + 0x18);
      uVar35 = *(undefined4 *)(lVar25 + 0x1c);
    }
    goto LAB_14c82d5a1;
  }
  uVar17 = puVar18[2];
  goto joined_r0x00014c82d582;
LAB_14c82d5a1:
  local_ae8 = (double)CONCAT44((float)((double)CONCAT44(uVar35,uVar34) * dVar2),
                               (float)((double)CONCAT44(uVar33,uVar32) * dVar11));
  iVar27 = TDynamicMeshOverlay<float,2>::AppendElement
                     ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,(float *)&local_ae8);
  uVar17 = 0;
  if ((int)uVar22 < local_b00.ArrayNum) {
    uVar17 = ~uVar22 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  *(int *)(local_b00.AllocatorInstance.Data + (longlong)(int)uVar22 * 4) = iVar27;
  uVar17 = 0;
  if ((int)uVar22 < local_b00.ArrayNum) {
    uVar17 = ~uVar22 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  pFVar5 = local_b00.AllocatorInstance.Data + (longlong)(int)uVar22 * 4;
  if (((local_b10.NewUVElements.AllocatorInstance.Data <= pFVar5) &&
      (pFVar5 < local_b10.NewUVElements.AllocatorInstance.Data +
                (longlong)local_b10.NewUVElements.ArrayMax * 4)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  iVar27 = local_b10.NewUVElements.ArrayNum;
  if (local_b10.NewUVElements.ArrayNum == local_b10.NewUVElements.ArrayMax) {
    iVar27 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)&local_b10,&local_b10.NewUVElements.ArrayMax);
  }
  local_b10.NewUVElements.ArrayNum = iVar27 + 1;
  *(undefined4 *)(local_b10.NewUVElements.AllocatorInstance.Data + (longlong)iVar27 * 4) =
       *(undefined4 *)pFVar5;
  iVar27 = local_8d0;
  puVar29 = local_8d8;
  FVar28.Data = local_828.Submesh.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
  lVar25 = local_918._0_8_;
  FVar26.Data = local_8c8.Blocks.AllocatorInstance.Data;
joined_r0x00014c82d73d:
  do {
    uVar22 = uVar22 + 1;
    uVar23 = (ulonglong)uVar22;
    if ((int)uVar24 <= (int)uVar22) {
      if (uVar22 == uVar24) goto LAB_14c82d777;
      break;
    }
    sVar3 = *(short *)(*(longlong *)(FVar28.Data + (ulonglong)(uVar22 >> 9) * 8) +
                      (ulonglong)(uVar22 & 0x1ff) * 2);
  } while ((sVar3 == 0) || (sVar3 == -1));
  goto LAB_14c82d4d0;
}

// SetTriangleUVsFromFreeBoundaryConformal @ 14c82db40

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromFreeBoundaryConformal
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,FUVEditResult *param_3)

{
  bool bVar1;
  FSetUVsFromConformalOptions local_18;
  
  local_18.bUseExistingUVTopology = true;
  local_18.bUseSpectral = false;
  local_18.bPreserveIrregularity = false;
  local_18.PinnedElementIDs = param_2;
  bVar1 = SetTriangleUVsFromConformal(this,param_1,&local_18,param_3);
  return bVar1;
}

// SetTriangleUVsFromFreeBoundaryConformal @ 14c82db70

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromFreeBoundaryConformal
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FUVEditResult *param_2)

{
  bool bVar1;
  FSetUVsFromConformalOptions local_18;
  
  local_18.PinnedElementIDs = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  local_18.bUseExistingUVTopology = false;
  local_18.bUseSpectral = false;
  local_18.bPreserveIrregularity = false;
  bVar1 = SetTriangleUVsFromConformal(this,param_1,&local_18,param_2);
  return bVar1;
}

// SetTriangleUVsFromFreeBoundaryConformal @ 14c82dbb0

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromFreeBoundaryConformal
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          FUVEditResult *param_3)

{
  bool bVar1;
  FSetUVsFromConformalOptions local_18;
  
  local_18.PinnedElementIDs = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  local_18.bUseSpectral = false;
  local_18.bPreserveIrregularity = false;
  local_18.bUseExistingUVTopology = param_2;
  bVar1 = SetTriangleUVsFromConformal(this,param_1,&local_18,param_3);
  return bVar1;
}

// SetTriangleUVsFromFreeBoundarySpectralConformal @ 14c82dbe0

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromFreeBoundarySpectralConformal
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          bool param_3,FUVEditResult *param_4)

{
  bool bVar1;
  FSetUVsFromConformalOptions local_18;
  
  local_18.PinnedElementIDs = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  local_18.bUseSpectral = true;
  local_18.bUseExistingUVTopology = param_2;
  local_18.bPreserveIrregularity = param_3;
  bVar1 = SetTriangleUVsFromConformal(this,param_1,&local_18,param_4);
  return bVar1;
}

// SetTriangleUVsFromPlanarProjection @ 14c82dc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromPlanarProjection
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2,TFrame3<double> *param_3,TVector2<double> *param_4,FUVEditResult *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int *this_00;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar11;
  FUVEditResult *pFVar12;
  bool bVar13;
  int iVar14;
  uint *puVar15;
  TVector<double> *pTVar16;
  ulonglong uVar17;
  uint *puVar18;
  ForElementType<FSetElementId> FVar19;
  longlong lVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  ForElementType<FSetElementId> FVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [8];
  FUVEditResult local_1f0;
  uint local_1e0;
  FIndex3i_u_0 local_1d8;
  float local_1c8;
  float local_1c4;
  TPairInitializer<int_const_&,int_const_&> local_1c0;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_1b0;
  ulonglong local_1a8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1a0;
  FScriptContainerElement *local_198;
  FUVEditResult *local_190;
  undefined8 local_188;
  undefined4 local_180;
  uint *local_178;
  FScriptContainerElement *local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  TVector<double> local_138;
  TVector<double> local_120;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_108;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_190 = param_5;
  local_1c0.Value = (int *)param_3;
  local_1b0 = param_2;
  local_1a0 = param_1;
  if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2321708304872505055>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                        ,0x121,"UVOverlay");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_1->ArrayNum != 0) {
    ResetUVs(this,param_1);
    dVar2 = *(double *)&param_4->field0_0x0;
    uVar26 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar27 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar10 = __real_3ff0000000000000;
    if (__real_3eb0c6f7a0000000 <= (double)CONCAT44(uVar27,uVar26) &&
        (double)CONCAT44(uVar27,uVar26) != __real_3eb0c6f7a0000000) {
      dVar10 = __real_3ff0000000000000 / dVar2;
    }
    dVar2 = *(double *)((longlong)&param_4->field0_0x0 + 8);
    uVar26 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar27 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar9 = __real_3ff0000000000000;
    if (__real_3eb0c6f7a0000000 <= (double)CONCAT44(uVar27,uVar26) &&
        (double)CONCAT44(uVar27,uVar26) != __real_3eb0c6f7a0000000) {
      dVar9 = __real_3ff0000000000000 / dVar2;
    }
    local_1e0 = param_1->ArrayNum;
    uVar17 = (ulonglong)(int)local_1e0;
    pFVar25 = (param_1->AllocatorInstance).Data;
    local_108.Elements._0_8_ = 0;
    local_108.Elements._8_8_ = 0;
    local_108.Elements._32_8_ = 0;
    local_198 = pFVar25 + uVar17 * 4;
    local_108.Elements._40_4_ = 0;
    local_108.Elements._44_4_ = 0x80;
    local_108.Elements._48_4_ = 0xffffffff;
    local_108.Elements._52_4_ = 0;
    local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_108.HashSize = 0;
    local_1f0.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.NewUVElements.ArrayNum = 0;
    local_1f0.NewUVElements.ArrayMax = 0;
    while( true ) {
      pFVar22 = local_198;
      lVar20 = 0;
      if (param_1->ArrayNum != (int)uVar17) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1f8);
      }
      pFVar12 = local_190;
      pTVar11 = local_1b0;
      this_00 = local_1c0.Value;
      if (pFVar25 == pFVar22) break;
      uVar26 = *(uint *)pFVar25;
      local_1a8 = (ulonglong)uVar26;
      lVar23 = *(longlong *)
                ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar26 >> 9) * 8);
      local_188 = *(undefined8 *)(lVar23 + (ulonglong)(uVar26 & 0x1ff) * 0xc);
      local_180 = *(undefined4 *)(lVar23 + 8 + (ulonglong)(uVar26 & 0x1ff) * 0xc);
      local_1d8._0_8_ = 0xffffffffffffffff;
      local_1d8._s_0.C = -1;
      lVar23 = local_108.Elements._0_8_;
      FVar24 = local_108.Hash.SecondaryData;
      do {
        puVar21 = (uint *)0x0;
        uVar26 = *(uint *)((longlong)&local_188 + lVar20);
        puVar18 = puVar21;
        if (local_108.Elements._8_4_ != local_108.Elements._52_4_) {
          FVar19 = (ForElementType<FSetElementId>)&local_108.Hash;
          if (FVar24 != (ForElementType<FSetElementId>)0x0) {
            FVar19 = FVar24;
          }
          uVar27 = *(uint *)((longlong)FVar19 + (ulonglong)(local_108.HashSize - 1U & uVar26) * 4);
          while ((puVar18 = puVar21, uVar27 != 0xffffffff &&
                 (puVar18 = (uint *)((longlong)(int)uVar27 * 0x10 + lVar23), *puVar18 != uVar26))) {
            uVar27 = puVar18[2];
          }
        }
        puVar15 = puVar18 + 1;
        if (puVar18 == (uint *)0x0) {
          puVar15 = puVar21;
        }
        if (puVar15 == (uint *)0x0) {
          lVar23 = *(longlong *)
                    ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar26 >> 9) * 8);
          puVar1 = (undefined4 *)(lVar23 + (ulonglong)(uVar26 & 0x1ff) * 0x18);
          local_150 = *puVar1;
          uStack_14c = puVar1[1];
          uStack_148 = puVar1[2];
          uStack_144 = puVar1[3];
          local_140 = *(undefined8 *)(lVar23 + 0x10 + (ulonglong)(uVar26 & 0x1ff) * 0x18);
          (**(code **)pTVar11)(&local_168,*(undefined8 *)&pTVar11->field_0x8);
          dVar7 = local_168 - (((TVector<double> *)this_00)->field0_0x0)._s_0.X;
          dVar8 = local_160 - (((TVector<double> *)this_00)->field0_0x0)._s_0.Y;
          dVar6 = local_158 - (((TVector<double> *)this_00)->field0_0x0)._s_0.Z;
          pTVar16 = TFrame3<double>::GetAxis((TFrame3<double> *)this_00,&local_138,0);
          dVar2 = (pTVar16->field0_0x0)._s_0.Y;
          dVar3 = (pTVar16->field0_0x0)._s_0.X;
          dVar4 = (pTVar16->field0_0x0)._s_0.Z;
          pTVar16 = TFrame3<double>::GetAxis((TFrame3<double> *)this_00,&local_120,1);
          pFVar22 = (FScriptContainerElement *)((longlong)&local_1d8 + lVar20);
          local_1c8 = (float)((dVar8 * dVar2 + dVar7 * dVar3 + dVar6 * dVar4) * dVar10);
          local_1c4 = (float)((dVar8 * (pTVar16->field0_0x0)._s_0.Y +
                               dVar7 * (pTVar16->field0_0x0)._s_0.X +
                              dVar6 * (pTVar16->field0_0x0)._s_0.Z) * dVar9);
          iVar14 = TDynamicMeshOverlay<float,2>::AppendElement
                             ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,&local_1c8);
          *(int *)pFVar22 = iVar14;
          if (((local_1f0.NewUVElements.AllocatorInstance.Data <= pFVar22) &&
              (pFVar22 < local_1f0.NewUVElements.AllocatorInstance.Data +
                         (longlong)local_1f0.NewUVElements.ArrayMax * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar14 = local_1f0.NewUVElements.ArrayNum;
          if (local_1f0.NewUVElements.ArrayNum == local_1f0.NewUVElements.ArrayMax) {
            iVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)&local_1f0,
                                &local_1f0.NewUVElements.ArrayMax);
          }
          local_1f0.NewUVElements.ArrayNum = iVar14 + 1;
          *(int *)(local_1f0.NewUVElements.AllocatorInstance.Data + (longlong)iVar14 * 4) =
               *(int *)pFVar22;
          local_178 = (uint *)((longlong)&local_188 + lVar20);
          local_170 = pFVar22;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    (&local_108,&local_1c0,(bool *)&local_178);
          lVar23 = local_108.Elements._0_8_;
          FVar24 = local_108.Hash.SecondaryData;
        }
        else {
          *(uint *)((longlong)&local_1d8 + lVar20) = *puVar15;
        }
        lVar20 = lVar20 + 4;
      } while (lVar20 < 0xc);
      TDynamicMeshOverlay<float,2>::SetTriangle
                ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,(int)local_1a8,
                 (FIndex3i *)&local_1d8._s_0,true);
      pFVar25 = pFVar25 + 4;
      uVar17 = (ulonglong)local_1e0;
      param_1 = local_1a0;
    }
    if ((local_190 != (FUVEditResult *)0x0) && (local_190 != &local_1f0)) {
      pFVar25 = (local_190->NewUVElements).AllocatorInstance.Data;
      if (pFVar25 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar25);
      }
      (pFVar12->NewUVElements).AllocatorInstance.Data =
           local_1f0.NewUVElements.AllocatorInstance.Data;
      (pFVar12->NewUVElements).ArrayNum = local_1f0.NewUVElements.ArrayNum;
      (pFVar12->NewUVElements).ArrayMax = local_1f0.NewUVElements.ArrayMax;
      local_1f0.NewUVElements.ArrayNum = 0;
      local_1f0.NewUVElements.ArrayMax = 0;
      local_1f0.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_1f0.NewUVElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.NewUVElements.AllocatorInstance.Data);
    }
    local_108.HashSize = 0;
    if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_108.Elements);
  }
  return;
}

// SetTriangleUVsFromProjection @ 14c82e190

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromProjection
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFrame3<double> *param_2,FUVEditResult *param_3)

{
  undefined1 local_38 [8];
  code *local_30;
  undefined1 *local_28;
  TVector2<double>_u_0 local_20 [2];
  
  local_28 = local_38;
  local_30 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromProjection'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
             ::Call;
  local_20[0] = UE::Math::TVector2<double>::UnitVector.field0_0x0;
  SetTriangleUVsFromPlanarProjection
            (this,param_1,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_30,param_2,(TVector2<double> *)&local_20[0]._s_0,param_3);
  return;
}

// SplitBowtiesOnUVElements @ 14c835520

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::SplitBowtiesOnUVElements
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  
  if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2321708304872504058>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x506,"UVOverlay");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar7 = 0;
    iVar1 = param_1->ArrayNum;
    if (0 < (longlong)iVar1) {
      lVar8 = 0;
      do {
        pTVar3 = this->UVOverlay;
        uVar6 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar8 * 4);
        iVar2 = *(int *)(*(longlong *)
                          (*(longlong *)&pTVar3->field_0x60 + (ulonglong)(uVar6 >> 9) * 8) +
                        (ulonglong)(uVar6 & 0x1ff) * 4);
        bVar5 = TDynamicMeshOverlay<float,2>::IsBowtieInOverlay
                          ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,iVar2);
        if (bVar5) {
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          if (param_2) {
            pTVar9 = param_1;
          }
          TDynamicMeshOverlay<float,2>::SplitBowtiesAtVertex
                    ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,iVar2,pTVar9);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar1);
    }
  }
  return;
}

// SwitchActiveLayer @ 14c83bfd0

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::SwitchActiveLayer(FDynamicMeshUVEditor *this,int param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar4;
  FDynamicMeshAttributeSet *this_00;
  
  pFVar1 = (this->Mesh->AttributeSet).Ptr;
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar1;
  }
  pTVar4 = FDynamicMeshAttributeSet::GetUVLayer(this_00,param_1);
  this->UVOverlay = pTVar4;
  this->UVOverlayIndex = param_1;
  if (pTVar4 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UVOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                       ,0x6d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// TransferTriangleUVsFromMeshViaDirectionProjection @ 14c848d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::TransferTriangleUVsFromMeshViaDirectionProjection
          (FDynamicMeshUVEditor *this,TArrayView<int_const_,int> *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2,TVector<double> *param_3,double param_4,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_5,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_6,int param_7,
          FTransferFromMeshViaProjectionSettings *param_8,FUVEditResult *param_9)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FDynamicMesh3 *pFVar7;
  FDynamicMeshAttributeSet *this_00;
  TDynamicMeshOverlay<float,2> *this_01;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  FDynamicMeshUVEditor *pFVar15;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar16;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar17;
  FUVEditResult *pFVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ForElementType<FSetElementId> FVar25;
  uint *puVar26;
  int *piVar27;
  longlong lVar28;
  double *pdVar29;
  float *pfVar30;
  ulonglong uVar31;
  double dVar32;
  undefined1 in_XMM3 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStackY_398 [32];
  FUVEditResult local_348;
  undefined1 local_338 [4];
  int iStack_334;
  FScriptContainerElement local_330 [8];
  float local_328;
  uint local_324;
  int local_320 [2];
  FDynamicMeshUVEditor *local_318;
  undefined1 local_310 [8];
  undefined4 local_308 [2];
  undefined8 *local_300;
  FScriptContainerElement *local_2f8;
  longlong local_2f0;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  float *local_2c0;
  longlong local_2b8;
  uint *local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  undefined8 local_270;
  double local_268;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_260;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_258;
  double local_250;
  ulonglong local_248;
  uint *local_240;
  FUVEditResult *local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  TVector<double>_u_0 local_1e8;
  double local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_1a8;
  double local_158;
  undefined1 local_148 [40];
  longlong *local_120;
  undefined1 local_118;
  float local_108;
  float local_104;
  float local_100 [2];
  float local_f8 [2];
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_238 = param_9;
  local_260 = param_6;
  local_318 = this;
  local_258 = param_2;
  if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar19 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2321708304872505007>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                        ,0x151,"UVOverlay");
    if (!bVar19) {
      return;
    }
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (param_1->ArrayNum == 0) {
    return;
  }
  pFVar7 = param_6->Mesh;
  if ((pFVar7 == (FDynamicMesh3 *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceMesh",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                          ,0x157,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this_00 = (pFVar7->AttributeSet).Ptr;
  if (this_00 == (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  local_2e8 = FDynamicMeshAttributeSet::GetUVLayer(this_00,param_7);
  dVar14 = __real_3e45798ee0000000;
  dVar3 = __real_3ff0000000000000;
  if (local_2e8 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    return;
  }
  if (param_8->MaxDistance < param_8->MinDistance || param_8->MaxDistance == param_8->MinDistance) {
    return;
  }
  local_2a8 = (param_3->field0_0x0)._s_0.X;
  dVar32 = (param_3->field0_0x0)._s_0.Z;
  dStack_2a0 = (param_3->field0_0x0)._s_0.Y;
  dVar11 = dStack_2a0 * dStack_2a0 + local_2a8 * local_2a8 + dVar32 * dVar32;
  if (dVar11 == __real_3ff0000000000000) {
    local_2a8 = (param_3->field0_0x0)._s_0.X;
    dStack_2a0 = (param_3->field0_0x0)._s_0.Y;
    local_298 = (param_3->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar11) {
    local_1d0 = __real_3ff0000000000000 / SQRT(dVar11);
    local_2a8 = local_1d0 * local_2a8;
    dStack_2a0 = local_1d0 * dStack_2a0;
    in_XMM3._0_8_ = local_1d0 * dVar32;
    in_XMM3._8_8_ = 0;
    local_298 = in_XMM3._0_8_;
  }
  else {
    local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  (**(code **)param_5)(&local_2d8,*(undefined8 *)&param_5->field_0x8,&local_2a8);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = local_2d8 * local_2d8 + local_2d0 * local_2d0 + local_2c8 * local_2c8;
  auVar33 = sqrtpd(in_XMM3,auVar33);
  dVar32 = auVar33._0_8_;
  if (dVar32 < __real_3e45798ee2308c3a) {
    return;
  }
  fVar36 = param_8->MinDistance;
  dVar11 = dVar3 / dVar32;
  local_2d8 = local_2d8 * dVar11;
  local_2d0 = local_2d0 * dVar11;
  local_2c8 = local_2c8 * dVar11;
  dVar11 = local_2d8 * dVar32;
  dVar12 = local_2d0 * dVar32;
  dVar13 = local_2c8 * dVar32;
  if (0.0 <= fVar36) {
    local_290 = dVar3;
    local_280 = (double)param_8->MaxDistance * dVar32;
  }
  else {
    fVar37 = param_8->MaxDistance;
    local_280 = (double)(float)((uint)fVar36 ^ __xmm_80000000800000008000000080000000) * dVar32;
    local_290 = __real_bff0000000000000;
    if (0.0 < fVar37) {
      local_278 = dVar3;
      local_2f0 = 2;
      local_288 = 0.0;
      local_268 = (double)fVar37 * dVar32;
      local_270 = 0;
      goto LAB_14c84905a;
    }
    fVar36 = (float)((uint)fVar37 ^ __xmm_80000000800000008000000080000000);
  }
  local_288 = (double)fVar36 * dVar32;
  local_2f0 = 1;
LAB_14c84905a:
  if (param_8->bResetUVsForUnmatched != false) {
    piVar27 = param_1->DataPtr;
    this_01 = (TDynamicMeshOverlay<float,2> *)this->UVOverlay;
    piVar1 = piVar27 + param_1->ArrayNum;
    for (; piVar27 != piVar1; piVar27 = piVar27 + 1) {
      TDynamicMeshOverlay<float,2>::UnsetTriangle(this_01,*piVar27,true);
    }
  }
  uVar34 = SUB84(__real_7fefffffffffffff,0);
  uVar35 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_2e0 = __real_7fefffffffffffff;
  local_158 = __real_7fefffffffffffff;
  local_1a8.Elements._0_8_ = 0;
  local_1a8.Elements._8_8_ = 0;
  local_1a8.Elements._32_8_ = 0;
  local_1a8.Elements._40_4_ = 0;
  local_1a8.Elements._52_4_ = 0;
  local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1a8.HashSize = 0;
  local_348.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.NewUVElements.ArrayNum = 0;
  local_348.NewUVElements.ArrayMax = 0;
  local_148._0_8_ = 0;
  local_120 = (longlong *)0x0;
  local_118 = 0;
  local_1a8.Elements._44_4_ = 0x80;
  local_1a8.Elements._48_4_ = 0xffffffff;
  TFunction<bool___cdecl(int)>::operator=
            ((TFunction<bool___cdecl(int)> *)local_148,&param_8->SourceMeshTriFilter);
  local_2b0 = (uint *)param_1->DataPtr;
  local_240 = local_2b0 + param_1->ArrayNum;
  fVar36 = local_328;
  fVar37 = local_328;
  fVar38 = local_328;
  if (local_2b0 != local_2b0 + param_1->ArrayNum) {
    do {
      uVar31 = 0;
      uVar4 = *local_2b0;
      pfVar30 = &local_104;
      local_248 = (ulonglong)uVar4;
      local_324 = 0;
      local_2c0 = pfVar30;
      local_2b8 = 3;
      lVar28 = *(longlong *)
                ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8
                );
      local_310 = (undefined1  [8])*(undefined8 *)(lVar28 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
      local_308[0] = *(undefined4 *)(lVar28 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
      _local_338 = 0xffffffffffffffff;
      local_330[0] = (FScriptContainerElement)0xff;
      local_330[1] = (FScriptContainerElement)0xff;
      local_330[2] = (FScriptContainerElement)0xff;
      local_330[3] = (FScriptContainerElement)0xff;
      uVar23 = uVar31;
      do {
        pTVar17 = local_258;
        pTVar16 = local_260;
        pFVar15 = local_318;
        uVar4 = *(uint *)((longlong)local_308 + (uVar31 - 8));
        if (local_1a8.Elements._8_4_ != local_1a8.Elements._52_4_) {
          FVar25 = (ForElementType<FSetElementId>)&local_1a8.Hash;
          if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar25 = local_1a8.Hash.SecondaryData;
          }
          uVar5 = *(uint *)((longlong)FVar25 + (ulonglong)(local_1a8.HashSize - 1U & uVar4) * 4);
          while (uVar5 != 0xffffffff) {
            puVar26 = (uint *)((longlong)(int)uVar5 * 0x10 + local_1a8.Elements._0_8_);
            if (*puVar26 == uVar4) {
              puVar22 = puVar26 + 1;
              if (puVar26 == (uint *)0x0) {
                puVar22 = (uint *)0x0;
              }
              if (puVar22 != (uint *)0x0) {
                uVar4 = *puVar22;
                *(uint *)(local_330 + (uVar31 - 8)) = uVar4;
                local_324 = (int)uVar23 - ((int)~uVar4 >> 0x1f);
                uVar23 = (ulonglong)local_324;
                goto LAB_14c849566;
              }
              break;
            }
            uVar5 = puVar26[2];
          }
        }
        pdVar29 = &local_290;
        iVar21 = -1;
        lVar28 = local_2f0;
        local_2c0 = pfVar30;
        do {
          uVar4 = *(uint *)((longlong)local_308 + (uVar31 - 8));
          uVar23 = (ulonglong)(uVar4 & 0x1ff);
          lVar8 = *(longlong *)
                   ((pFVar15->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar4 >> 9) * 8);
          puVar2 = (undefined4 *)(lVar8 + uVar23 * 0x18);
          local_1c8 = *puVar2;
          uStack_1c4 = puVar2[1];
          uStack_1c0 = puVar2[2];
          uStack_1bc = puVar2[3];
          local_1b8 = *(undefined8 *)(lVar8 + 0x10 + uVar23 * 0x18);
          (**(code **)pTVar17)(&local_230,*(undefined8 *)&pTVar17->field_0x8,&local_1c8);
          dVar3 = *pdVar29;
          dVar32 = pdVar29[1];
          local_1e8._s_0.X = local_2d8 * dVar3;
          local_1e8._s_0.Y = local_2d0 * dVar3;
          local_200 = local_2d8 * dVar32 * dVar3 + local_230 + dVar11 * param_4;
          local_1f8 = local_2d0 * dVar32 * dVar3 + local_228 + dVar12 * param_4;
          local_1e8._s_0.Z = local_2c8 * dVar3;
          local_1f0 = local_2c8 * dVar32 * dVar3 + local_220 + dVar13 * param_4;
          UE::Math::TVector<double>::Normalize((TVector<double> *)&local_1e8._s_0,dVar14);
          local_158 = pdVar29[2];
          local_320[0] = -1;
          cVar20 = (**(code **)(pTVar16->_padding_ + 0x30))(pTVar16,&local_200,&local_250,local_320)
          ;
          if (cVar20 != '\0') {
            if ((iVar21 == -1) || (local_250 < (double)CONCAT44(uVar35,uVar34))) {
              fVar36 = (float)local_218;
              fVar37 = (float)local_210;
              fVar38 = (float)local_208;
              uVar34 = SUB84(local_250,0);
              uVar35 = (int)((ulonglong)local_250 >> 0x20);
              iVar21 = local_320[0];
            }
          }
          pdVar29 = pdVar29 + 3;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        uVar23 = (ulonglong)local_324;
        if (iVar21 != -1) {
          uVar5 = iVar21 * 3;
          lVar28 = *(longlong *)&local_2e8->field_0x78;
          uVar4 = *(uint *)(*(longlong *)(lVar28 + (ulonglong)(uVar5 >> 9) * 8) +
                           (ulonglong)(uVar5 & 0x1ff) * 4);
          if (-1 < (int)uVar4) {
            lVar8 = *(longlong *)&local_2e8->field_0x48;
            uVar6 = *(uint *)(*(longlong *)(lVar28 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                             (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
            uVar5 = *(uint *)(*(longlong *)(lVar28 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                             (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
            local_2c0[-1] =
                 fVar36 * *(float *)(*(longlong *)
                                      (lVar8 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                                    (ulonglong)(uVar4 * 2 & 0x1ff) * 4) +
                 fVar37 * *(float *)(*(longlong *)
                                      (lVar8 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                                    (ulonglong)(uVar6 * 2 & 0x1ff) * 4) +
                 fVar38 * *(float *)(*(longlong *)
                                      (lVar8 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                                    (ulonglong)(uVar5 * 2 & 0x1ff) * 4);
            local_324 = local_324 + 1;
            uVar23 = (ulonglong)local_324;
            *local_2c0 = fVar36 * *(float *)(*(longlong *)
                                              (lVar8 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                                            (ulonglong)(uVar4 * 2 + 1 & 0x1ff) * 4) +
                         fVar37 * *(float *)(*(longlong *)
                                              (lVar8 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                                            (ulonglong)(uVar6 * 2 + 1 & 0x1ff) * 4) +
                         fVar38 * *(float *)(*(longlong *)
                                              (lVar8 + (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) +
                                            (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4);
          }
        }
        uVar34 = SUB84(local_2e0,0);
        uVar35 = (undefined4)((ulonglong)local_2e0 >> 0x20);
        pfVar30 = local_2c0;
LAB_14c849566:
        this = local_318;
        pfVar30 = pfVar30 + 2;
        uVar31 = uVar31 + 4;
        local_2b8 = local_2b8 + -1;
        local_2c0 = pfVar30;
      } while (local_2b8 != 0);
      if ((int)uVar23 == 3) {
        if (local_338 == (undefined1  [4])0xffffffff) {
          iVar21 = TDynamicMeshOverlay<float,2>::AppendElement
                             ((TDynamicMeshOverlay<float,2> *)local_318->UVOverlay,&local_108);
          local_338 = (undefined1  [4])iVar21;
          if (((local_348.NewUVElements.AllocatorInstance.Data <=
                (FScriptContainerElement *)local_338) &&
              ((FScriptContainerElement *)local_338 <
               local_348.NewUVElements.AllocatorInstance.Data +
               (longlong)local_348.NewUVElements.ArrayMax * 4)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar21 = local_348.NewUVElements.ArrayNum;
          if (local_348.NewUVElements.ArrayNum == local_348.NewUVElements.ArrayMax) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)&local_348,
                                &local_348.NewUVElements.ArrayMax);
          }
          local_348.NewUVElements.ArrayNum = iVar21 + 1;
          *(undefined1 (*) [4])
           (local_348.NewUVElements.AllocatorInstance.Data + (longlong)iVar21 * 4) = local_338;
          local_300 = (undefined8 *)local_310;
          local_2f8 = (FScriptContainerElement *)local_338;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    (&local_1a8,(TPairInitializer<int_const_&,int_const_&> *)&local_328,
                     (bool *)&local_300);
        }
        if (iStack_334 == -1) {
          iVar21 = TDynamicMeshOverlay<float,2>::AppendElement
                             ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,local_100);
          iStack_334 = iVar21;
          if (((local_348.NewUVElements.AllocatorInstance.Data <=
                (FScriptContainerElement *)(local_338 + 4)) &&
              ((FScriptContainerElement *)(local_338 + 4) <
               local_348.NewUVElements.AllocatorInstance.Data +
               (longlong)local_348.NewUVElements.ArrayMax * 4)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar21 = local_348.NewUVElements.ArrayNum;
          if (local_348.NewUVElements.ArrayNum == local_348.NewUVElements.ArrayMax) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)&local_348,
                                &local_348.NewUVElements.ArrayMax);
          }
          local_348.NewUVElements.ArrayNum = iVar21 + 1;
          *(int *)(local_348.NewUVElements.AllocatorInstance.Data + (longlong)iVar21 * 4) =
               iStack_334;
          local_300 = (undefined8 *)(local_310 + 4);
          local_2f8 = (FScriptContainerElement *)(local_338 + 4);
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    (&local_1a8,(TPairInitializer<int_const_&,int_const_&> *)&local_328,
                     (bool *)&local_300);
        }
        if (local_330._0_4_ == -1) {
          local_330._0_4_ =
               TDynamicMeshOverlay<float,2>::AppendElement
                         ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,local_f8);
          if (((local_348.NewUVElements.AllocatorInstance.Data <= local_330) &&
              (local_330 <
               local_348.NewUVElements.AllocatorInstance.Data +
               (longlong)local_348.NewUVElements.ArrayMax * 4)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar21 = local_348.NewUVElements.ArrayNum;
          if (local_348.NewUVElements.ArrayNum == local_348.NewUVElements.ArrayMax) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)&local_348,
                                &local_348.NewUVElements.ArrayMax);
          }
          local_348.NewUVElements.ArrayNum = iVar21 + 1;
          *(undefined4 *)(local_348.NewUVElements.AllocatorInstance.Data + (longlong)iVar21 * 4) =
               local_330._0_4_;
          local_300 = (undefined8 *)local_308;
          local_2f8 = local_330;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    (&local_1a8,(TPairInitializer<int_const_&,int_const_&> *)&local_328,
                     (bool *)&local_300);
        }
        TDynamicMeshOverlay<float,2>::SetTriangle
                  ((TDynamicMeshOverlay<float,2> *)this->UVOverlay,(int)local_248,
                   (FIndex3i *)local_338,true);
      }
      local_2b0 = local_2b0 + 1;
    } while (local_2b0 != local_240);
  }
  pFVar18 = local_238;
  if ((local_238 != (FUVEditResult *)0x0) && (local_238 != &local_348)) {
    pFVar9 = (local_238->NewUVElements).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pFVar18->NewUVElements).AllocatorInstance.Data = local_348.NewUVElements.AllocatorInstance.Data
    ;
    (pFVar18->NewUVElements).ArrayNum = local_348.NewUVElements.ArrayNum;
    (pFVar18->NewUVElements).ArrayMax = local_348.NewUVElements.ArrayMax;
    local_348.NewUVElements.ArrayNum = 0;
    local_348.NewUVElements.ArrayMax = 0;
    local_348.NewUVElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_148._0_8_ != 0) {
    plVar24 = (longlong *)(local_148 + 0x10);
    if (local_120 != (longlong *)0x0) {
      plVar24 = local_120;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if (local_348.NewUVElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.NewUVElements.AllocatorInstance.Data);
  }
  local_1a8.HashSize = 0;
  if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1a8.Elements);
  return;
}

// TransformTriangleSelectionUVs @ 14c84c470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::FDynamicMeshUVEditor::TransformTriangleSelectionUVs
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TArrayView<int_const_,int> *param_2,
          TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>_const_&)>
          *param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  int local_130;
  undefined4 local_12c;
  undefined4 local_128 [2];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  longlong *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  piVar8 = param_2->DataPtr;
  local_98._0_8_ = 0;
  local_98._8_4_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  piVar1 = piVar8 + param_2->ArrayNum;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  if (piVar8 != piVar1) {
    do {
      lVar6 = *(longlong *)&param_1->field_0x78;
      uVar13 = *piVar8 * 3;
      local_130 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar13 >> 9) * 8) +
                          (ulonglong)(uVar13 & 0x1ff) * 4);
      local_12c = *(undefined4 *)
                   (*(longlong *)(lVar6 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                   (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
      local_128[0] = *(undefined4 *)
                      (*(longlong *)(lVar6 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                      (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
      if (local_130 != -1) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_e0,
                   (bool *)&local_130);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_dc,
                   (bool *)&local_12c);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_d8,
                   (bool *)local_128);
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar1);
  }
  uVar13 = local_70;
  uStack_108 = 0;
  uStack_104 = 1;
  uStack_f4 = uStack_108;
  local_f0 = uStack_108;
  if (local_70 != 0) {
    puVar9 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar9 = local_78;
    }
    uVar11 = *puVar9;
    uStack_108 = 0;
    local_f0 = 0;
    while (uVar11 == 0) {
      lVar6 = (longlong)(int)uStack_108;
      local_f0 = local_f0 + 0x20;
      uStack_108 = uStack_108 + 1;
      uStack_f4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_108)
      goto LAB_14c84c61f;
      uVar11 = (puVar9 + 1)[lVar6];
    }
    uStack_104 = -uVar11 & uVar11;
    uVar10 = (ulonglong)uStack_104 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_d4 = (int)lVar6;
    uStack_f4 = local_d4 + -1 + local_f0;
    if ((int)local_70 < (int)uStack_f4) {
      uStack_f4 = local_70;
    }
  }
LAB_14c84c61f:
  iStack_e8 = local_98._8_4_ - local_64;
  local_110 = (longlong *)local_98;
  local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uStack_f8 = 0xffffffff;
  TStack_c8.CurrentBitIndex = uStack_f4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_104,uStack_108);
  uVar11 = local_70 & 0xffffffe0;
  iVar7 = (int)local_70 >> 5;
  TStack_c8._28_4_ = uStack_f4;
  TStack_c8.BaseBitIndex = local_f0;
  uStack_a8 = CONCAT44(uStack_e4,iStack_e8);
  bVar5 = (byte)local_70;
  uStack_ec = uStack_f4;
  local_d0 = local_110;
  TStack_c8.Array = local_100;
  if (((int)local_70 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar13 != local_70) {
    puVar9 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar9 = local_78;
    }
    uVar13 = -1 << (bVar5 & 0x1f) & puVar9[iVar7];
    while (uVar13 == 0) {
      lVar6 = (longlong)iVar7;
      uVar11 = uVar11 + 0x20;
      iVar7 = iVar7 + 1;
      uVar13 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
      goto LAB_14c84c730;
      uVar13 = (puVar9 + 1)[lVar6];
    }
    uVar10 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar13 = (int)lVar6 + -1 + uVar11;
    if ((int)local_70 < (int)uVar13) {
      uVar13 = local_70;
    }
  }
LAB_14c84c730:
  while( true ) {
    plVar3 = local_d0;
    if ((int)local_d0[1] - *(int *)((longlong)local_d0 + 0x34) != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (((TStack_c8.CurrentBitIndex == uVar13) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar3 == (longlong *)local_98)) break;
    uVar11 = *(uint *)(*plVar3 + (longlong)TStack_c8.CurrentBitIndex * 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x7fffffff) >> 8);
    uVar15 = (ulonglong)((uVar11 & 0x7fffffff) >> 8);
    uVar14 = (ulonglong)(uVar11 * 2 & 0x1ff);
    uVar10 = (ulonglong)(uVar11 * 2 + 1 & 0x1ff);
    local_120 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)&param_1->field_0x48 + uVar12 * 8) + uVar14 * 4);
    local_11c = *(undefined4 *)
                 (*(longlong *)(*(longlong *)&param_1->field_0x48 + uVar15 * 8) + uVar10 * 4);
    (**(code **)param_3)(&local_118,*(undefined8 *)&param_3->field_0x8,&local_120);
    *(undefined4 *)(*(longlong *)(*(longlong *)&param_1->field_0x48 + uVar12 * 8) + uVar14 * 4) =
         local_118;
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    *(undefined4 *)(*(longlong *)(*(longlong *)&param_1->field_0x48 + uVar15 * 8) + uVar10 * 4) =
         local_114;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// TransformUVElements @ 14c84c870

void __thiscall
UE::Geometry::FDynamicMeshUVEditor::TransformUVElements
          (FDynamicMeshUVEditor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>_const_&)>
          *param_2)

{
  int iVar1;
  uint uVar2;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>_const_&)> *local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  FScriptContainerElement *local_40;
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar6 = pFVar10 + (longlong)iVar1 * 4;
  local_res18 = param_2;
  local_40 = pFVar6;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar10 == pFVar6) break;
    uVar2 = *(uint *)pFVar10;
    pTVar3 = this->UVOverlay;
    if (((-1 < (int)uVar2) &&
        ((int)uVar2 < *(int *)&pTVar3->field_0x8 * 0x200 + *(int *)&pTVar3->field_0xc)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)&pTVar3->field_0x10 + (ulonglong)(uVar2 >> 9) * 8) +
                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      uVar7 = (ulonglong)((uVar2 & 0x7fffffff) >> 8);
      uVar8 = (ulonglong)(uVar2 * 2 & 0x1ff);
      uVar9 = (ulonglong)((uVar2 & 0x7fffffff) >> 8);
      uVar5 = (ulonglong)(uVar2 * 2 + 1 & 0x1ff);
      local_res20 = CONCAT44(*(undefined4 *)
                              (*(longlong *)(*(longlong *)&pTVar3->field_0x48 + uVar9 * 8) +
                              uVar5 * 4),
                             *(undefined4 *)
                              (*(longlong *)(*(longlong *)&pTVar3->field_0x48 + uVar7 * 8) +
                              uVar8 * 4));
      (**(code **)local_res18)(&local_48,*(undefined8 *)&local_res18->field_0x8,&local_res20);
      pTVar3 = this->UVOverlay;
      local_res20 = local_48;
      uVar4 = local_res20;
      local_res20._0_4_ = (undefined4)local_48;
      *(undefined4 *)(*(longlong *)(*(longlong *)&pTVar3->field_0x48 + uVar7 * 8) + uVar8 * 4) =
           (undefined4)local_res20;
      local_res20._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      *(undefined4 *)(*(longlong *)(*(longlong *)&pTVar3->field_0x48 + uVar9 * 8) + uVar5 * 4) =
           local_res20._4_4_;
      pFVar6 = local_40;
      local_res20 = uVar4;
    }
    pFVar10 = pFVar10 + 4;
  }
  return;
}

// UDIMPack @ 14c84e4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FDynamicMeshUVEditor::UDIMPack
          (FDynamicMeshUVEditor *this,int param_1,float param_2,FVector2i *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMesh3 *pFVar4;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar5;
  code *pcVar6;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  TVar7;
  FDynamicMeshUVEditor *pFVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  TVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  TVar24;
  ulonglong uVar25;
  ForElementType<unsigned_int> FVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8;
  undefined1 local_1f7;
  TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  local_1f0;
  uint local_1e8;
  undefined1 local_1e4 [4];
  int local_1e0;
  int local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0 [2];
  uint local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  FVector2i *local_188;
  FDynamicMeshUVEditor *local_180;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  longlong *local_150;
  int iStack_148;
  uint uStack_144;
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  undefined4 uStack_138;
  uint uStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  FDynamicMeshUVPacker local_f0;
  undefined4 local_b4;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  TVar24.Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_1f0.Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_1a8 = 1;
  local_1e0 = param_1;
  local_188 = param_3;
  local_180 = this;
  TVar13.Ptr = ::operator_new(0x10);
  TVar7.Ptr = local_1f0.Ptr;
  if (param_4 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    if (TVar13.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      ((TVar13.Ptr)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (TVar13.Ptr)->ArrayNum = 0;
      (TVar13.Ptr)->ArrayMax = 0;
      TVar24.Ptr = TVar13.Ptr;
    }
    if (local_1f0.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar3 = ((local_1f0.Ptr)->AllocatorInstance).Data;
      local_1f0.Ptr = TVar24.Ptr;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(TVar7.Ptr,0x10);
      TVar24.Ptr = local_1f0.Ptr;
    }
    local_1f0.Ptr = TVar24.Ptr;
    uVar21 = (this->Mesh->TriangleRefCounts).UsedCount;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if ((local_1f0.Ptr)->ArrayMax < (int)uVar21) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar21,&(local_1f0.Ptr)->AllocatorInstance,(local_1f0.Ptr)->ArrayNum,
                 &(local_1f0.Ptr)->ArrayMax);
    }
    pFVar4 = this->Mesh;
    uVar28 = (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed +
             (pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    uVar21 = 0;
    if ((uVar28 != 0) &&
       (pFVar3 = (pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar21 = 0,
       0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
      uVar20 = 1;
      uVar21 = 1;
      if (1 < (int)uVar28) {
        do {
          lVar19 = *(longlong *)(pFVar3 + (ulonglong)(uVar20 >> 9) * 8);
          if ((*(short *)(lVar19 + (ulonglong)(uVar20 & 0x1ff) * 2) != 0) &&
             (uVar21 = uVar20, *(short *)(lVar19 + (ulonglong)(uVar20 & 0x1ff) * 2) != -1)) break;
          uVar20 = uVar20 + 1;
          uVar21 = uVar20;
        } while ((int)uVar20 < (int)uVar28);
      }
    }
joined_r0x00014c84e6b8:
    TVar13.Ptr = local_1f0.Ptr;
    if (uVar21 != uVar28) {
      while( true ) {
        TVar7.Ptr = local_1f0.Ptr;
        pFVar3 = ((local_1f0.Ptr)->AllocatorInstance).Data;
        local_1e8 = uVar21;
        if (((pFVar3 <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 <
             pFVar3 + (longlong)(local_1f0.Ptr)->ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        iVar12 = (TVar7.Ptr)->ArrayNum;
        if (iVar12 == (TVar7.Ptr)->ArrayMax) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(TVar7.Ptr)->AllocatorInstance,&(TVar7.Ptr)->ArrayMax);
        }
        (TVar7.Ptr)->ArrayNum = iVar12 + 1;
        uVar21 = uVar21 + 1;
        *(uint *)(((TVar7.Ptr)->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_1e8;
        if ((int)uVar28 <= (int)uVar21) break;
        while( true ) {
          lVar19 = *(longlong *)
                    ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar21 >> 9) * 8);
          if ((*(short *)(lVar19 + (ulonglong)(uVar21 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar19 + (ulonglong)(uVar21 & 0x1ff) * 2) != -1)) break;
          uVar21 = uVar21 + 1;
          if ((int)uVar28 <= (int)uVar21) goto joined_r0x00014c84e6b8;
        }
      }
      goto joined_r0x00014c84e6b8;
    }
  }
  else {
    if (TVar13.Ptr == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      TVar13.Ptr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    }
    else {
      ((TVar13.Ptr)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar12 = param_4->ArrayNum;
      pFVar3 = (param_4->AllocatorInstance).Data;
      (TVar13.Ptr)->ArrayNum = iVar12;
      if (iVar12 == 0) {
        (TVar13.Ptr)->ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar12,0,&(TVar13.Ptr)->AllocatorInstance,iVar12,&(TVar13.Ptr)->ArrayMax);
        memcpy(((TVar13.Ptr)->AllocatorInstance).Data,pFVar3,(longlong)iVar12 << 2);
      }
    }
    TVar7.Ptr = local_1f0.Ptr;
    if (local_1f0.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar3 = ((local_1f0.Ptr)->AllocatorInstance).Data;
      local_1f0.Ptr = TVar13.Ptr;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(TVar7.Ptr,0x10);
      TVar13.Ptr = local_1f0.Ptr;
    }
  }
  local_1f0.Ptr = TVar13.Ptr;
  uVar18 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  uVar21 = (local_1f0.Ptr)->ArrayNum * 3;
  if (uVar21 == 0) goto LAB_14c84ea47;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar21);
  if (uVar21 < 4) {
    uVar21 = 1;
  }
  else {
    uVar25 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1a0 = (undefined4)lVar19;
    uVar21 = 1 << ((byte)lVar19 & 0x1f);
  }
  if ((local_60 != 0) && ((int)uVar21 <= (int)local_60)) goto LAB_14c84ea47;
  local_60 = uVar21;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar21 != 0) {
    uVar28 = uVar21;
    if (uVar21 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar28 = 0;
        goto LAB_14c84e89d;
      }
    }
    else {
LAB_14c84e89d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar28,4);
    }
    if (0 < (int)uVar21) {
      uVar27 = (ulonglong)uVar21;
      uVar25 = uVar18;
      do {
        FVar17.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_68.Data;
        }
        uVar14 = uVar25 & (longlong)(int)uVar21 - 1U;
        uVar25 = uVar25 + 1;
        *(undefined4 *)(FVar17.Data + uVar14 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_1c8 = 0;
    uStack_1c4 = 1;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    if (local_80 != 0) {
      FVar26 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_88;
      }
      uVar21 = *(uint *)FVar26;
      uVar25 = uVar18;
      while (uVar21 == 0) {
        uStack_1b0 = (int)uVar25 + 0x20;
        uVar25 = (ulonglong)uStack_1b0;
        iVar12 = (int)uVar18;
        local_1c8 = iVar12 + 1;
        uVar18 = (ulonglong)local_1c8;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1c8)
        goto LAB_14c84e9a9;
        uVar21 = ((uint *)((longlong)FVar26 + 4))[iVar12];
      }
      uStack_1c4 = -uVar21 & uVar21;
      uVar18 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_19c = (int)lVar19;
      uStack_1b4 = (uStack_1b0 - 1) + local_19c;
      uVar18 = (ulonglong)uStack_1b4;
      if ((int)local_80 < (int)uStack_1b4) {
LAB_14c84e9a9:
        uVar18 = (ulonglong)local_80;
        uStack_1b4 = local_80;
      }
    }
    local_1b8 = 0xffffffff;
    local_178 = (longlong *)local_a8;
    local_170._padding_ = CONCAT44(uStack_1c4,local_1c8);
    local_170.CurrentBitIndex = uStack_1b4;
    local_170.UnvisitedBitMask = 0xffffffff;
    local_170._28_4_ = uStack_1ac;
    local_170.BaseBitIndex = uStack_1b0;
    local_170.Array = pTStack_1c0;
    if ((int)uVar18 < (int)local_80) {
      do {
        lVar19 = *local_178;
        lVar15 = (longlong)(int)uVar18;
        uVar21 = local_60 - 1 & *(uint *)(lVar19 + lVar15 * 0xc);
        *(uint *)(lVar19 + 8 + lVar15 * 0xc) = uVar21;
        FVar17.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_68.Data;
        }
        uVar25 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(lVar19 + 4 + lVar15 * 0xc) = *(undefined4 *)(FVar17.Data + uVar25 * 4);
        *(int *)(FVar17.Data + uVar25 * 4) = (int)uVar18;
        local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
        uVar18 = (ulonglong)(uint)local_170.CurrentBitIndex;
      } while (local_170.CurrentBitIndex < (local_170.Array)->NumBits);
    }
  }
LAB_14c84ea47:
  TVar7.Ptr = local_1f0.Ptr;
  pFVar23 = ((local_1f0.Ptr)->AllocatorInstance).Data;
  iVar12 = (local_1f0.Ptr)->ArrayNum;
  pFVar3 = pFVar23 + (longlong)iVar12 * 4;
  while( true ) {
    if ((TVar7.Ptr)->ArrayNum != iVar12) {
      local_1f8 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
    }
    if (pFVar23 == pFVar3) break;
    uVar21 = *(int *)pFVar23 * 3;
    lVar19 = *(longlong *)&this->UVOverlay->field_0x78;
    iVar2 = *(int *)(*(longlong *)(lVar19 + (ulonglong)(uVar21 >> 9) * 8) +
                    (ulonglong)(uVar21 & 0x1ff) * 4);
    if (-1 < iVar2) {
      local_1d4 = *(undefined4 *)
                   (*(longlong *)(lVar19 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                   (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
      local_1d0[0] = *(undefined4 *)
                      (*(longlong *)(lVar19 + (ulonglong)(uVar21 + 2 >> 9) * 8) +
                      (ulonglong)(uVar21 + 2 & 0x1ff) * 4);
      local_1d8 = iVar2;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8,&local_198,
                 (bool *)&local_1d8);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8,&local_194,
                 (bool *)&local_1d4);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8,&local_190,
                 (bool *)local_1d0);
    }
    pFVar23 = pFVar23 + 4;
  }
  if (local_a8._8_4_ != local_74) {
    FVar17.Data = local_70;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FVar17.Data = local_68.Data;
    }
    for (iVar12 = *(int *)(FVar17.Data + (ulonglong)(local_60 - 1) * 4); iVar12 != -1;
        iVar12 = *(int *)(local_a8._0_8_ + (longlong)iVar12 * 0xc + 4)) {
      if (*(int *)(local_a8._0_8_ + (longlong)iVar12 * 0xc) == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ElementsToMove.Contains(IndexConstants::InvalidID)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\DynamicMeshUVEditor.cpp"
                            ,0x6a2,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        break;
      }
    }
  }
  FDynamicMeshUVPacker::FDynamicMeshUVPacker(&local_f0,this->UVOverlay,&local_1f0);
  local_f0.TextureResolution = local_1e0;
  local_f0.bAllowFlips = false;
  local_f0.GutterSize = param_2;
  local_1f7 = FDynamicMeshUVPacker::StandardPack(&local_f0);
  uVar21 = local_80;
  iStack_148 = 0;
  iVar12 = (param_3->field0_0x0)._s_0.X;
  local_130 = 0;
  iVar2 = (local_188->field0_0x0)._s_0.Y;
  uStack_134 = 0;
  if (local_80 == 0) {
LAB_14c84ec70:
    uStack_144 = (uint)local_1a8;
  }
  else {
    FVar26 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar26 = local_88;
    }
    uStack_144 = *(uint *)FVar26;
    while (uStack_144 == 0) {
      lVar19 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      uStack_134 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_148)
      goto LAB_14c84ec70;
      uStack_144 = ((uint *)((longlong)FVar26 + 4))[lVar19];
    }
    uStack_144 = -uStack_144 & uStack_144;
    uVar18 = (ulonglong)uStack_144 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_18c = (int)lVar19;
    uStack_134 = local_18c + -1 + local_130;
    if ((int)local_80 < (int)uStack_134) {
      uStack_134 = local_80;
    }
  }
  local_150 = (longlong *)local_a8;
  local_140 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uStack_138 = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_134;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  uStack_12c = local_b4;
  uVar28 = local_80 & 0xffffffe0;
  iStack_128 = local_a8._8_4_ - local_74;
  TStack_118._padding_ = CONCAT44(uStack_144,iStack_148);
  iVar22 = (int)local_80 >> 5;
  TStack_118._28_4_ = local_b4;
  TStack_118.BaseBitIndex = local_130;
  uStack_f8 = CONCAT44(uStack_124,iStack_128);
  bVar16 = (byte)local_80;
  local_120 = local_150;
  TStack_118.Array = local_140;
  if (((int)local_80 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  pFVar8 = local_180;
  if (uVar21 != local_80) {
    FVar26 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar26 = local_88;
    }
    uVar21 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar26 + (longlong)iVar22 * 4);
    while (uVar21 == 0) {
      lVar19 = (longlong)iVar22;
      uVar28 = uVar28 + 0x20;
      iVar22 = iVar22 + 1;
      uVar21 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_14c84ed7f;
      uVar21 = ((uint *)((longlong)FVar26 + 4))[lVar19];
    }
    uVar18 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar21 = (uVar28 - 1) + (int)lVar19;
    if ((int)local_80 < (int)uVar21) {
      uVar21 = local_80;
    }
  }
LAB_14c84ed7f:
  while( true ) {
    plVar9 = local_120;
    if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e4);
    }
    if (((TStack_118.CurrentBitIndex == uVar21) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar9 == (longlong *)local_a8)) break;
    pTVar5 = pFVar8->UVOverlay;
    lVar19 = *(longlong *)&pTVar5->field_0x48;
    uVar28 = *(uint *)(*plVar9 + (longlong)TStack_118.CurrentBitIndex * 0xc);
    uVar27 = (ulonglong)(uVar28 * 2 & 0x1ff);
    uVar25 = (ulonglong)((uVar28 & 0x7fffffff) >> 8);
    uVar18 = (ulonglong)(uVar28 * 2 + 1 & 0x1ff);
    lVar15 = *(longlong *)(lVar19 + (ulonglong)((uVar28 & 0x7fffffff) >> 8) * 8);
    fVar1 = *(float *)(*(longlong *)(lVar19 + uVar25 * 8) + uVar18 * 4);
    *(float *)(lVar15 + uVar27 * 4) = (float)iVar12 + *(float *)(lVar15 + uVar27 * 4);
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    *(float *)(*(longlong *)(*(longlong *)&pTVar5->field_0x48 + uVar25 * 8) + uVar18 * 4) =
         (float)-iVar2 + fVar1;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  if (local_f0.TidsToRepack.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar3 = ((local_f0.TidsToRepack.Ptr)->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(local_f0.TidsToRepack.Ptr,0x10);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  TVar7.Ptr = local_1f0.Ptr;
  if (local_1f0.Ptr != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar3 = ((local_1f0.Ptr)->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(TVar7.Ptr,0x10);
  }
  return (bool)local_1f7;
}

