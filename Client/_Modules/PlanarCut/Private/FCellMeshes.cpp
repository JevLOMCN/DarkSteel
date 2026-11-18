// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 21

// FCellMeshes @ 14c9a0e80

FCellMeshes * __thiscall
UE::PlanarCut::FCellMeshes::FCellMeshes
          (FCellMeshes *this,int param_1,FRandomStream *param_2,FPlanarCells *param_3,
          TAxisAlignedBox3<double> *param_4,double param_5,double param_6,bool param_7)

{
  TVector<double>_u_0 local_38;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  this->OutsideCellIndex = -1;
  (this->CellMeshes).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellMeshes).Array.ArrayNum = 0;
  (this->CellMeshes).Array.ArrayMax = 0;
  this->NumUVLayers = 1;
  local_38._s_0.X = (param_4->Min).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_4->Min).field0_0x0._s_0.Y;
  local_38._s_0.Z = (param_4->Min).field0_0x0._s_0.Z;
  dStack_20 = (param_4->Max).field0_0x0._s_0.X;
  local_18 = (param_4->Max).field0_0x0._s_0.Y;
  dStack_10 = (param_4->Max).field0_0x0._s_0.Z;
  Init(this,param_1,param_2,param_3,(TAxisAlignedBox3<double> *)&local_38._s_0,param_5,param_6,
       param_7);
  return this;
}

// FCellMeshes @ 14c9a0f10

FCellMeshes * __thiscall
UE::PlanarCut::FCellMeshes::FCellMeshes
          (FCellMeshes *this,int param_1,FDynamicMesh3 *param_2,FInternalSurfaceMaterials *param_3,
          TOptional<UE::Math::TTransform<double>_> *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  TVector4<float> TVar6;
  bool bVar7;
  FCellMeshes *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  FDynamicMeshAttributeSet *pFVar12;
  uint uVar13;
  TVector4<float>_u_0 local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  TQuaternion<double>_u_0 local_78;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double dStack_38;
  double local_30;
  
  pFVar12 = (FDynamicMeshAttributeSet *)0x0;
  (this->CellMeshes).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellMeshes).Array.ArrayNum = 0;
  (this->CellMeshes).Array.ArrayMax = 0;
  this->NumUVLayers = param_1;
  this->OutsideCellIndex = -1;
  SetNumCells(this,2);
  if (((this->CellMeshes).Array.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FCellMeshes *)(*pcVar5)();
    return pFVar8;
  }
  UE::Geometry::FDynamicMesh3::operator=
            (*(FDynamicMesh3 **)(this->CellMeshes).Array.AllocatorInstance.Data,param_2);
  if (param_4->bIsSet != false) {
    local_78._s_0.X = (param_4->TypedValue).Rotation.XY.m128d_f64[0];
    local_78._s_0.Y = (param_4->TypedValue).Rotation.XY.m128d_f64[1];
    local_78._s_0.Z = (param_4->TypedValue).Rotation.ZW.m128d_f64[0];
    local_78._s_0.W = (param_4->TypedValue).Rotation.ZW.m128d_f64[1];
    local_98 = (param_4->TypedValue).Translation.ZW.m128d_f64[0];
    local_80 = (param_4->TypedValue).Scale3D.ZW.m128d_f64[0];
    local_a8 = (param_4->TypedValue).Translation.XY.m128d_f64[0];
    dStack_a0 = (param_4->TypedValue).Translation.XY.m128d_f64[1];
    local_90 = (param_4->TypedValue).Scale3D.XY.m128d_f64[0];
    dStack_88 = (param_4->TypedValue).Scale3D.XY.m128d_f64[1];
    local_58 = local_a8;
    dStack_50 = dStack_a0;
    local_48 = local_98;
    local_40 = local_90;
    dStack_38 = dStack_88;
    local_30 = local_80;
    if (((this->CellMeshes).Array.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FCellMeshes *)(*pcVar5)();
      return pFVar8;
    }
    MeshTransforms::ApplyTransform
              (*(FDynamicMesh3 **)(this->CellMeshes).Array.AllocatorInstance.Data,
               (TTransformSRT3<double> *)&local_78._s_0,true,All);
  }
  if (((this->CellMeshes).Array.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FCellMeshes *)(*pcVar5)();
    return pFVar8;
  }
  lVar2 = *(longlong *)(this->CellMeshes).Array.AllocatorInstance.Data;
  if ((*(FDynamicMeshAttributeSet **)(lVar2 + 0x208) == (FDynamicMeshAttributeSet *)0x0) ||
     (bVar7 = UE::Geometry::FDynamicMeshAttributeSet::HasAttachedAttribute
                        (*(FDynamicMeshAttributeSet **)(lVar2 + 0x208),
                         AugmentedDynamicMesh::ColorAttribName), !bVar7)) {
LAB_14c9a115c:
    iVar1 = this->NumUVLayers;
    if (((this->CellMeshes).Array.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FCellMeshes *)(*pcVar5)();
      return pFVar8;
    }
    AugmentedDynamicMesh::Augment
              (*(FDynamicMesh3 **)(this->CellMeshes).Array.AllocatorInstance.Data,iVar1);
    if (((this->CellMeshes).Array.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FCellMeshes *)(*pcVar5)();
      return pFVar8;
    }
    AugmentedDynamicMesh::SplitOverlayAttributesToPerVertex
              (*(FDynamicMesh3 **)(this->CellMeshes).Array.AllocatorInstance.Data,true,true);
  }
  else {
    pFVar9 = pFVar12;
    if (*(FDynamicMeshAttributeSet **)(lVar2 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
      pFVar9 = *(FDynamicMeshAttributeSet **)(lVar2 + 0x208);
    }
    bVar7 = UE::Geometry::FDynamicMeshAttributeSet::HasAttachedAttribute
                      (pFVar9,AugmentedDynamicMesh::TangentUAttribName);
    if (!bVar7) goto LAB_14c9a115c;
    pFVar9 = pFVar12;
    if (*(FDynamicMeshAttributeSet **)(lVar2 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
      pFVar9 = *(FDynamicMeshAttributeSet **)(lVar2 + 0x208);
    }
    bVar7 = UE::Geometry::FDynamicMeshAttributeSet::HasAttachedAttribute
                      (pFVar9,AugmentedDynamicMesh::TangentVAttribName);
    if (!bVar7) goto LAB_14c9a115c;
    pFVar9 = pFVar12;
    if (*(FDynamicMeshAttributeSet **)(lVar2 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
      pFVar9 = *(FDynamicMeshAttributeSet **)(lVar2 + 0x208);
    }
    bVar7 = UE::Geometry::FDynamicMeshAttributeSet::HasAttachedAttribute
                      (pFVar9,AugmentedDynamicMesh::VisibleAttribName);
    if (!bVar7) goto LAB_14c9a115c;
    pFVar9 = pFVar12;
    if (*(FDynamicMeshAttributeSet **)(lVar2 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
      pFVar9 = *(FDynamicMeshAttributeSet **)(lVar2 + 0x208);
    }
    if (((pFVar9->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) ||
       (*(char *)(lVar2 + 0x70) == '\0')) goto LAB_14c9a115c;
  }
  if (((this->CellMeshes).Array.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FCellMeshes *)(*pcVar5)();
    return pFVar8;
  }
  lVar2 = *(longlong *)(this->CellMeshes).Array.AllocatorInstance.Data;
  uVar13 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
  if ((uVar13 != 0) &&
     (pFVar12 = (FDynamicMeshAttributeSet *)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
    pFVar12 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar11 = 1;
    if ((int)uVar13 < 2) goto joined_r0x00014c9a1288;
    do {
      uVar10 = (ulonglong)((uint)pFVar12 & 0x1ff);
      lVar3 = (*(undefined8 **)(lVar2 + 0x28))[(ulonglong)pFVar12 >> 9];
      if ((*(short *)(lVar3 + uVar10 * 2) != 0) && (*(short *)(lVar3 + uVar10 * 2) != -1)) break;
      uVar11 = (uint)pFVar12 + 1;
      pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uVar11;
    } while ((int)uVar11 < (int)uVar13);
  }
  uVar11 = (uint)pFVar12;
joined_r0x00014c9a1288:
  do {
    if (uVar11 == uVar13) {
      if (((this->CellMeshes).Array.ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FCellMeshes *)(*pcVar5)();
        return pFVar8;
      }
      pFVar4 = *(FDynamicMesh3 **)(this->CellMeshes).Array.AllocatorInstance.Data;
      if (((this->CellMeshes).Array.ArrayNum < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FCellMeshes *)(*pcVar5)();
        return pFVar8;
      }
      UE::Geometry::FDynamicMesh3::operator=
                (*(FDynamicMesh3 **)((this->CellMeshes).Array.AllocatorInstance.Data + 8),pFVar4);
      this->OutsideCellIndex = 1;
      return this;
    }
    while( true ) {
      TVar6.field0_0x0 = AugmentedDynamicMesh::UnsetVertexColor.field0_0x0;
      if (((this->CellMeshes).Array.ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FCellMeshes *)(*pcVar5)();
        return pFVar8;
      }
      local_b8 = TVar6.field0_0x0;
      AugmentedDynamicMesh::SetVertexColor
                (*(FDynamicMesh3 **)(this->CellMeshes).Array.AllocatorInstance.Data,(int)pFVar12,
                 (TVector4<float> *)&local_b8._s_0);
      uVar11 = (int)pFVar12 + 1;
      pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uVar11;
      if ((int)uVar13 <= (int)uVar11) break;
      while( true ) {
        uVar10 = (ulonglong)((uint)pFVar12 & 0x1ff);
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + ((ulonglong)pFVar12 >> 9) * 8);
        if ((*(short *)(lVar3 + uVar10 * 2) != 0) && (*(short *)(lVar3 + uVar10 * 2) != -1)) break;
        uVar11 = (uint)pFVar12 + 1;
        pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uVar11;
        if ((int)uVar13 <= (int)uVar11) goto joined_r0x00014c9a1288;
      }
    }
  } while( true );
}

// operator() @ 14c9aade0

void __thiscall
`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint *puVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  FCellMeshes *this_00;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  TVector<double> *pTVar20;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar21;
  FDynamicMeshAttributeSet *pFVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  FDynamicMeshAttributeSet *pFVar26;
  uint *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  ForAnyElementType FVar30;
  FDynamicMeshAttributeSet *pFVar31;
  uint uVar32;
  undefined8 *puVar33;
  FDynamicMesh3 *this_01;
  uint uVar34;
  float fVar35;
  float fVar36;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_2b8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_2b0;
  uint local_2a0;
  float local_29c;
  float fStack_298;
  int local_294;
  int iStack_290;
  undefined8 local_28c [2];
  TConstrainedDelaunay2<float> local_278;
  int local_228;
  uint local_224;
  uint local_220 [2];
  FDynamicMesh3 *local_218;
  FIndex3i_u_0 local_210;
  TVector<double>_u_0 local_200;
  TQuaternion<double>_u_0 local_1e8;
  TGeneralPolygon2<float> local_1c8;
  TVector<double>_u_0 local_198;
  float local_180;
  float local_17c;
  float local_178;
  undefined8 local_174;
  float local_16c;
  TVector2<float>_u_0 local_168;
  undefined1 local_160;
  undefined2 local_15f;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  TVector<double> local_e8;
  TVector<double> local_d0 [6];
  
  pFVar26 = (FDynamicMeshAttributeSet *)0x0;
  plVar8 = *(longlong **)((longlong)this + 0x10);
  lVar29 = (longlong)param_1;
  local_224 = ~param_1;
  uVar34 = local_224 >> 0x1f;
  uVar32 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar32 = uVar34;
  }
  if ((uVar32 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this_01 = (FDynamicMesh3 *)(lVar29 * 0x230 + *plVar8);
  lVar9 = *(longlong *)((longlong)this + 0x18);
  uVar32 = 0;
  if (param_1 < *(int *)(lVar9 + 0x30)) {
    uVar32 = uVar34;
  }
  local_218 = this_01;
  if ((uVar32 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  puVar33 = (undefined8 *)(lVar29 * 0x10 + *(longlong *)(lVar9 + 0x28));
  lVar9 = *(longlong *)((longlong)this + 0x18);
  uVar17 = 0;
  uVar32 = uVar17;
  if (param_1 < *(int *)(lVar9 + 0x10)) {
    uVar32 = uVar34;
  }
  if ((uVar32 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  lVar29 = lVar29 * 0x20;
  lVar9 = *(longlong *)(lVar9 + 8);
  dVar4 = *(double *)(lVar9 + lVar29);
  lVar10 = *(longlong *)((longlong)this + 0x18);
  fVar35 = (float)*(double *)(lVar9 + 8 + lVar29);
  uVar32 = uVar17;
  if (param_1 < *(int *)(lVar10 + 0x10)) {
    uVar32 = uVar34;
  }
  fVar36 = (float)*(double *)(lVar9 + 0x10 + lVar29);
  if ((uVar32 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_1e8._s_0.X = 0.0;
  local_1e8._s_0.Y = 0.0;
  local_1e8._s_0.Z = 0.0;
  lVar9 = *(longlong *)(lVar10 + 8);
  local_1e8._s_0.W = __real_3ff0000000000000;
  dVar5 = *(double *)(lVar9 + 0x18 + lVar29);
  local_158._s_0.X = *(double *)(lVar9 + lVar29);
  local_158._s_0.Y = *(double *)(lVar9 + 8 + lVar29);
  local_158._s_0.Z = *(double *)(lVar9 + 0x10 + lVar29);
  local_200._s_0.X = dVar5 * local_158._s_0.X;
  local_200._s_0.Y = dVar5 * local_158._s_0.Y;
  local_200._s_0.Z = dVar5 * local_158._s_0.Z;
  local_118._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_118._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_118._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_1e8._s_0,(TVector<double> *)&local_118._s_0,
             (TVector<double> *)&local_158._s_0);
  local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_16c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_174 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_168 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_15f = 1;
  local_160 = 1;
  local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.ArrayNum = 0;
  local_2b0.ArrayMax = 0;
  puVar27 = (uint *)*puVar33;
  iVar23 = *(int *)(puVar33 + 1);
  puVar1 = puVar27 + iVar23;
  local_180 = (float)dVar4;
  local_17c = fVar35;
  local_178 = fVar36;
  while( true ) {
    if (*(int *)(puVar33 + 1) != iVar23) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar27 == puVar1) break;
    uVar32 = *puVar27;
    lVar29 = *(longlong *)((longlong)this + 0x18);
    uVar34 = uVar17;
    if ((int)uVar32 < *(int *)(lVar29 + 0x40)) {
      uVar34 = ~uVar32 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar29 = *(longlong *)(lVar29 + 0x38);
    pdVar2 = (double *)(lVar29 + (longlong)(int)uVar32 * 0x18);
    local_198._s_0.X = *pdVar2;
    local_198._s_0.Y = pdVar2[1];
    local_198._s_0.Z = *(double *)(lVar29 + 0x10 + (longlong)(int)uVar32 * 0x18);
    dVar12 = local_198._s_0.X - local_200._s_0.X;
    dVar14 = local_198._s_0.Y - local_200._s_0.Y;
    dVar13 = local_198._s_0.Z - local_200._s_0.Z;
    pTVar20 = UE::Geometry::TFrame3<double>::GetAxis((TFrame3<double> *)&local_200._s_0,&local_e8,0)
    ;
    dVar5 = (pTVar20->field0_0x0)._s_0.Y;
    dVar6 = (pTVar20->field0_0x0)._s_0.X;
    dVar7 = (pTVar20->field0_0x0)._s_0.Z;
    pTVar20 = UE::Geometry::TFrame3<double>::GetAxis((TFrame3<double> *)&local_200._s_0,local_d0,1);
    local_29c = (float)(dVar14 * dVar5 + dVar12 * dVar6 + dVar13 * dVar7);
    fStack_298 = (float)(dVar14 * (pTVar20->field0_0x0)._s_0.Y +
                         dVar12 * (pTVar20->field0_0x0)._s_0.X +
                        dVar13 * (pTVar20->field0_0x0)._s_0.Z);
    if (((local_2b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_29c) &&
        ((FScriptContainerElement *)&local_29c <
         local_2b0.AllocatorInstance.Data + (longlong)local_2b0.ArrayMax * 8)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar18 = local_2b0.ArrayNum;
    if (local_2b0.ArrayNum == local_2b0.ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
    }
    local_2b0.ArrayNum = iVar18 + 1;
    *(ulonglong *)(local_2b0.AllocatorInstance.Data + (longlong)iVar18 * 8) =
         CONCAT44(fStack_298,local_29c);
    UE::Geometry::FDynamicMesh3::AppendVertex(this_01,(FVertexInfo *)&local_198._s_0);
    puVar27 = puVar27 + 1;
  }
  UE::Geometry::TGeneralPolygon2<float>::TGeneralPolygon2<float>
            (&local_1c8,(TPolygon2<float> *)&local_2b0);
  local_278.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.Vertices.ArrayNum = 0;
  local_278.Vertices.ArrayMax = 0;
  local_278.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.Edges.ArrayNum = 0;
  local_278.Edges.ArrayMax = 0;
  local_278.HoleEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.HoleEdges.ArrayNum = 0;
  local_278.HoleEdges.ArrayMax = 0;
  local_278.bOrientedEdges = true;
  local_278.bOutputCCW = false;
  local_278.bSplitBowties = false;
  local_278.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.Triangles.ArrayNum = 0;
  local_278.Triangles.ArrayMax = 0;
  local_278.AddedVerticesStartIndex = -1;
  local_278.FillRule = NonZero;
  UE::Geometry::TConstrainedDelaunay2<float>::Add<float>(&local_278,&local_1c8.Outer,false);
  local_2b8 = (longlong)local_1c8.Holes.ArrayNum;
  local_2a0 = 0;
  pFVar31 = pFVar26;
  pFVar22 = pFVar26;
  if (0 < local_1c8.Holes.ArrayNum) {
    do {
      uVar32 = uVar17;
      if ((int)(uint)pFVar31 < local_1c8.Holes.ArrayNum) {
        uVar32 = ~(uint)pFVar31 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar30.Data = local_1c8.Holes.AllocatorInstance.Data;
      iVar18 = local_278.Vertices.ArrayNum;
      iVar23 = *(int *)(local_1c8.Holes.AllocatorInstance.Data + 8 + (longlong)pFVar22);
      puVar28 = *(undefined8 **)(local_1c8.Holes.AllocatorInstance.Data + (longlong)pFVar22);
      local_228 = local_278.Vertices.ArrayNum + iVar23;
      puVar33 = puVar28 + iVar23;
      while( true ) {
        if (*(int *)(FVar30.Data + 8 + (longlong)pFVar22) != iVar23) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector2<float>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        iVar19 = local_228;
        if (puVar28 == puVar33) break;
        local_28c[0] = *puVar28;
        if (((local_278.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)local_28c) &&
            ((FScriptContainerElement *)local_28c <
             local_278.Vertices.AllocatorInstance.Data + (longlong)local_278.Vertices.ArrayMax * 8))
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar19 = local_278.Vertices.ArrayNum;
        if (local_278.Vertices.ArrayNum == local_278.Vertices.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)&local_278,&local_278.Vertices.ArrayMax);
        }
        puVar28 = puVar28 + 1;
        local_278.Vertices.ArrayNum = iVar19 + 1;
        *(undefined8 *)(local_278.Vertices.AllocatorInstance.Data + (longlong)iVar19 * 8) =
             local_28c[0];
      }
      iVar15 = local_228 + -1;
      iVar23 = local_294;
      this_01 = local_218;
      for (; local_294 = iVar15, local_218 = this_01, iVar18 < iVar19; iVar18 = iVar18 + 1) {
        iStack_290 = iVar18;
        if (((local_278.HoleEdges.AllocatorInstance.Data <= (FScriptContainerElement *)&local_294)
            && ((FScriptContainerElement *)&local_294 <
                local_278.HoleEdges.AllocatorInstance.Data +
                (longlong)local_278.HoleEdges.ArrayMax * 8)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (local_278.HoleEdges.ArrayNum == local_278.HoleEdges.ArrayMax) {
          local_278.HoleEdges.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_278.HoleEdges.AllocatorInstance,&local_278.HoleEdges.ArrayMax
                         );
        }
        *(ulonglong *)
         (local_278.HoleEdges.AllocatorInstance.Data + (longlong)local_278.HoleEdges.ArrayNum * 8) =
             CONCAT44(iStack_290,local_294);
        iVar15 = iVar18;
        iVar23 = local_294;
        this_01 = local_218;
        local_278.HoleEdges.ArrayNum = local_278.HoleEdges.ArrayNum + 1;
      }
      pFVar22 = (FDynamicMeshAttributeSet *)&pFVar22->_padding_;
      local_2a0 = local_2a0 + 1;
      pFVar31 = (FDynamicMeshAttributeSet *)(ulonglong)local_2a0;
      local_2b8 = local_2b8 + -1;
      local_294 = iVar23;
    } while (local_2b8 != 0);
  }
  UE::Geometry::TConstrainedDelaunay2<float>::Triangulate(&local_278);
  bVar16 = false;
  iVar23 = local_278.Triangles.ArrayNum;
  if (local_278.Triangles.ArrayNum == 0) {
    PolygonTriangulation::TriangulateSimplePolygon<float>(&local_2b0,&local_278.Triangles,false);
    bVar16 = local_278.Triangles.ArrayNum == 0;
    iVar23 = local_278.Triangles.ArrayNum;
  }
  uVar32 = local_224;
  if (bVar16 || iVar23 < 0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5943927746286585954>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                        ,0x862,"Triangulation.Triangles.Num() > 0");
    if (bVar16) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    goto LAB_14c9ab909;
  }
  pFVar3 = local_278.Triangles.AllocatorInstance.Data + (longlong)iVar23 * 0xc;
  FVar30.Data = local_278.Triangles.AllocatorInstance.Data;
  iVar18 = iVar23;
  while( true ) {
    if (iVar18 != iVar23) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar30.Data == pFVar3) break;
    local_210._0_8_ = *(undefined8 *)FVar30.Data;
    local_210._s_0.C = *(undefined4 *)(FVar30.Data + 8);
    uVar34 = UE::Geometry::FDynamicMesh3::AppendTriangle(this_01,(FIndex3i *)&local_210._s_0,0);
    if (uVar34 < 0x80000000) {
      pFVar31 = (this_01->AttributeSet).Ptr;
      local_220[0] = uVar32;
      pFVar22 = pFVar26;
      if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar22 = pFVar31;
      }
      UE::Geometry::TDynamicVector<int,512>::InsertAt
                ((TDynamicVector<int,512> *)&((pFVar22->MaterialIDAttrib).Ptr)->field_0x18,
                 (int *)local_220,uVar34);
    }
    else {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5943927746286585960>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                          ,0x868,"TID > -1");
      if (bVar16) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    FVar30.Data = FVar30.Data + 0xc;
    iVar18 = local_278.Triangles.ArrayNum;
  }
  UE::PlanarCut::FCellMeshes::RemeshForNoise
            (*(FCellMeshes **)this,this_01,SplitsOnly,*(double *)((longlong)this + 0x28));
  pFVar31 = (this_01->AttributeSet).Ptr;
  pFVar22 = pFVar26;
  if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar22 = pFVar31;
  }
  pTVar21 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                    *)&pFVar22->GenericAttributes,*(FName *)((longlong)this + 8));
  if ((pTVar21 ==
       (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
        *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  lVar29 = *(longlong *)&pTVar21->field_0x8;
  uVar32 = (this_01->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (this_01->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar32 == 0) ||
     (pFVar3 = (this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar3 - 1U) < 0xfffe)) {
LAB_14c9ab7a7:
    uVar34 = (uint)pFVar26;
  }
  else {
    pFVar26 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar34 = 1;
    if (1 < (int)uVar32) {
      do {
        uVar24 = (ulonglong)((uint)pFVar26 & 0x1ff);
        lVar9 = *(longlong *)(pFVar3 + ((ulonglong)pFVar26 >> 9) * 8);
        if ((*(short *)(lVar9 + uVar24 * 2) != 0) && (*(short *)(lVar9 + uVar24 * 2) != -1)) break;
        uVar34 = (uint)pFVar26 + 1;
        pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)uVar34;
      } while ((int)uVar34 < (int)uVar32);
      goto LAB_14c9ab7a7;
    }
  }
joined_r0x00014c9ab7aa:
  if (uVar34 != uVar32) {
    while( true ) {
      uVar25 = (uint)pFVar26;
      lVar9 = *(longlong *)
               ((this_01->Vertices).Blocks.AllocatorInstance.Data + ((ulonglong)pFVar26 >> 9) * 8);
      uVar17 = uVar25 * 3;
      uVar34 = uVar25 + 1;
      pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)uVar34;
      puVar33 = (undefined8 *)(lVar9 + (ulonglong)(uVar25 & 0x1ff) * 0x18);
      local_100 = *puVar33;
      uStack_f8 = puVar33[1];
      local_f0 = *(undefined8 *)(lVar9 + 0x10 + (ulonglong)(uVar25 & 0x1ff) * 0x18);
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(lVar29 + 0x20) + (ulonglong)(uVar17 >> 9) * 8) +
       (ulonglong)(uVar17 & 0x1ff) * 8) = local_100;
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(lVar29 + 0x20) + (ulonglong)(uVar17 + 1 >> 9) * 8) +
       (ulonglong)(uVar17 + 1 & 0x1ff) * 8) = uStack_f8;
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(lVar29 + 0x20) + (ulonglong)(uVar17 + 2 >> 9) * 8) +
       (ulonglong)(uVar17 + 2 & 0x1ff) * 8) = local_f0;
      if ((int)uVar32 <= (int)uVar34) break;
      while( true ) {
        uVar24 = (ulonglong)((uint)pFVar26 & 0x1ff);
        lVar9 = *(longlong *)
                 ((this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 ((ulonglong)pFVar26 >> 9) * 8);
        if ((*(short *)(lVar9 + uVar24 * 2) != 0) && (*(short *)(lVar9 + uVar24 * 2) != -1)) break;
        uVar34 = (uint)pFVar26 + 1;
        pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)uVar34;
        if ((int)uVar32 <= (int)uVar34) goto joined_r0x00014c9ab7aa;
      }
    }
    goto joined_r0x00014c9ab7aa;
  }
  lVar29 = *(longlong *)((longlong)this + 0x18);
  this_00 = *(FCellMeshes **)this;
  if ((*(char *)(lVar29 + 0x6c) == '\0') &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_138._s_0.X = (double)(float)dVar4;
  local_138._s_0.Z = (double)fVar36;
  local_138._s_0.Y = (double)fVar35;
  UE::PlanarCut::FCellMeshes::ApplyNoise
            (this_00,this_01,(TVector<double> *)&local_138._s_0,(FNoiseSettings *)(lVar29 + 0x54),
             false);
  UE::Geometry::FMeshNormals::QuickComputeVertexNormals(this_01,false);
LAB_14c9ab909:
  if (local_278.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Triangles.AllocatorInstance.Data);
  }
  if (local_278.HoleEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.HoleEdges.AllocatorInstance.Data);
  }
  if (local_278.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Edges.AllocatorInstance.Data);
  }
  if (local_278.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Vertices.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TPolygon2<float>,int>
            ((TPolygon2<float> *)local_1c8.Holes.AllocatorInstance.Data,local_1c8.Holes.ArrayNum);
  if (local_1c8.Holes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Holes.AllocatorInstance.Data);
  }
  if (local_1c8.Outer.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Outer.Vertices.AllocatorInstance.Data);
  }
  if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14c9aec90

double __thiscall
`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l55::<lambda_2>::operator()
          (void *this,FIndex2i param_1)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uStackX_14;
  
  plVar2 = *(longlong **)this;
  iVar6 = param_1.field0_0x0._0_4_;
  if (iVar6 < 0 || (int)plVar2[1] <= iVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      dVar7 = (double)(*pcVar4)();
      return dVar7;
    }
  }
  uStackX_14 = param_1.field0_0x0._4_4_;
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*plVar2 + (longlong)iVar6 * 8) + 0x10) +
           (ulonglong)(uStackX_14 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + (ulonglong)(uStackX_14 & 0x1ff) * 0x18);
  dVar9 = *(double *)(lVar3 + 0x10 + (ulonglong)(uStackX_14 & 0x1ff) * 0x18) -
          *(double *)((longlong)this + 0x18);
  dVar7 = pdVar1[1] - *(double *)((longlong)this + 0x10);
  dVar8 = *pdVar1 - *(double *)((longlong)this + 8);
  return dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9;
}

// operator() @ 14c9afca0

TTriangle3<double> * __thiscall
`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::<lambda_4>::operator()
          (void *this,TTriangle3<double> *__return_storage_ptr__,int param_1,double param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  double dVar9;
  longlong lVar10;
  double *pdVar11;
  double dVar12;
  undefined8 local_48;
  undefined4 local_40;
  
  pdVar11 = &__return_storage_ptr__->V[0].field0_0x0._s_0.Z;
  dVar12 = __real_3ff0000000000000 - param_2;
  lVar10 = 0;
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_48 = *(undefined8 *)(lVar6 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_40 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  do {
    uVar5 = *(uint *)((longlong)&local_48 + lVar10 * 4);
    lVar10 = lVar10 + 1;
    uVar8 = uVar5 * 3;
    lVar6 = *(longlong *)(*(longlong *)(*(longlong **)((longlong)this + 8))[1] + 0x20);
    dVar2 = *(double *)
             (*(longlong *)(lVar6 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
             (ulonglong)(uVar8 + 1 & 0x1ff) * 8);
    lVar7 = *(longlong *)
             (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) +
             (ulonglong)(uVar5 >> 9) * 8);
    pdVar1 = (double *)(lVar7 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
    dVar9 = pdVar1[1];
    dVar3 = *(double *)(lVar7 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
    dVar4 = *(double *)
             (*(longlong *)(lVar6 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
             (ulonglong)(uVar8 + 2 & 0x1ff) * 8);
    ((TVector<double>_u_0_s_0 *)(pdVar11 + -2))->X =
         dVar12 * *(double *)
                   (*(longlong *)(lVar6 + (ulonglong)(uVar8 >> 9) * 8) +
                   (ulonglong)(uVar8 & 0x1ff) * 8) + *pdVar1 * param_2;
    pdVar11[-1] = dVar2 * dVar12 + dVar9 * param_2;
    *pdVar11 = dVar12 * dVar4 + param_2 * dVar3;
    pdVar11 = pdVar11 + 3;
  } while (lVar10 < 3);
  return __return_storage_ptr__;
}

// AppendMesh @ 14c9b35f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PlanarCut::FCellMeshes::AppendMesh
          (FCellMeshes *this,FDynamicMesh3 *param_1,FDynamicMesh3 *param_2,bool param_3)

{
  undefined8 uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStackY_3b8 [32];
  uint uStack_384;
  FDynamicMeshEditor local_378 [2];
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_368;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_338;
  FMeshIndexMappings local_308;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_378[0].Mesh = param_1;
  UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_308);
  uVar11 = 0;
  local_368._0_8_ = 0;
  local_368._40_8_ = 0;
  local_338._0_8_ = 0;
  local_338._40_8_ = 0;
  UE::Geometry::FDynamicMeshEditor::AppendMesh
            (local_378,param_2,&local_308,&local_338,&local_368,false);
  if (!param_3) goto LAB_14c9b38e0;
  uVar10 = (param_2->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar9 = uVar11;
  uVar5 = __xmm_80000000800000008000000080000000;
  if ((uVar10 == 0) ||
     (pFVar3 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar9 = 0,
     (ushort)(**(short **)pFVar3 - 1U) < 0xfffe)) {
LAB_14c9b3705:
    uVar8 = (uint)uVar9;
  }
  else {
    uVar9 = 1;
    uVar8 = 1;
    if (1 < (int)uVar10) {
      do {
        uVar7 = (ulonglong)((uint)uVar9 & 0x1ff);
        lVar4 = *(longlong *)(pFVar3 + (uVar9 >> 9) * 8);
        if ((*(short *)(lVar4 + uVar7 * 2) != 0) && (*(short *)(lVar4 + uVar7 * 2) != -1)) break;
        uVar8 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < (int)uVar10);
      goto LAB_14c9b3705;
    }
  }
joined_r0x00014c9b3707:
  __xmm_80000000800000008000000080000000 = uVar5;
  if (uVar8 != uVar10) {
    while( true ) {
      iVar6 = UE::Geometry::TIndexMap<int>::GetTo(&local_308.TriangleMap,(int)uVar9);
      UE::Geometry::FDynamicMesh3::ReverseTriOrientation(param_1,iVar6);
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar5 = __xmm_80000000800000008000000080000000;
      if ((int)uVar10 <= (int)uVar8) break;
      while( true ) {
        uVar7 = (ulonglong)((uint)uVar9 & 0x1ff);
        lVar4 = *(longlong *)
                 ((param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (uVar9 >> 9) * 8);
        if ((*(short *)(lVar4 + uVar7 * 2) != 0) && (*(short *)(lVar4 + uVar7 * 2) != -1)) break;
        uVar8 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        if ((int)uVar10 <= (int)uVar8) goto joined_r0x00014c9b3707;
      }
    }
    goto joined_r0x00014c9b3707;
  }
  uVar10 = (param_2->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if (((uVar10 != 0) &&
      (pFVar3 = (param_2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      0xfffd < (ushort)(**(short **)pFVar3 - 1U))) && (uVar11 = 1, 1 < (int)uVar10)) {
    do {
      uVar9 = (ulonglong)((uint)uVar11 & 0x1ff);
      lVar4 = *(longlong *)(pFVar3 + (uVar11 >> 9) * 8);
      if ((*(short *)(lVar4 + uVar9 * 2) != 0) && (*(short *)(lVar4 + uVar9 * 2) != -1)) break;
      uVar8 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)uVar10);
  }
  uVar8 = (uint)uVar11;
joined_r0x00014c9b37d0:
  if (uVar8 != uVar10) {
    while( true ) {
      uVar8 = UE::Geometry::TIndexMap<int>::GetTo(&local_308.VertexMap,(int)uVar11);
      if ((param_1->VertexNormals).bIsSet != false) {
        pFVar3 = (param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data;
        uVar9 = (ulonglong)(uVar8 & 0x1ff);
        lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8);
        uVar1 = *(undefined8 *)(lVar4 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
        uVar2 = *(uint *)(lVar4 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
        lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8);
        *(uint *)(lVar4 + uVar9 * 0xc) = (uint)uVar1 ^ uVar5;
        uStack_384 = (uint)((ulonglong)uVar1 >> 0x20);
        *(uint *)(lVar4 + 4 + uVar9 * 0xc) = uStack_384 ^ uVar5;
        *(uint *)(lVar4 + 8 + uVar9 * 0xc) = uVar2 ^ uVar5;
      }
      uVar8 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar8;
      if ((int)uVar10 <= (int)uVar8) break;
      while( true ) {
        uVar9 = (ulonglong)((uint)uVar11 & 0x1ff);
        lVar4 = *(longlong *)
                 ((param_2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (uVar11 >> 9) * 8);
        if ((*(short *)(lVar4 + uVar9 * 2) != 0) && (*(short *)(lVar4 + uVar9 * 2) != -1)) break;
        uVar8 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar8;
        if ((int)uVar10 <= (int)uVar8) goto joined_r0x00014c9b37d0;
      }
    }
    goto joined_r0x00014c9b37d0;
  }
LAB_14c9b38e0:
  UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_308);
  return;
}

// ApplyGeneralGrout @ 14c9b5880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::PlanarCut::FCellMeshes::ApplyGeneralGrout(FCellMeshes *this,double param_1)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  undefined8 uVar12;
  FFunctionStorage *pFVar13;
  undefined ***pppuVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  double dVar21;
  undefined1 auStackY_5a8 [32];
  double local_578;
  double dStack_570;
  undefined8 local_568;
  int local_560 [2];
  FDynamicMeshEditor local_558;
  double local_550;
  double local_548;
  double local_540;
  TVector<double>_u_0 local_538;
  code *local_518;
  undefined **local_508;
  FDynamicMesh3 *local_500;
  undefined ***local_4f0;
  code *local_4e8 [2];
  FFunctionStorage local_4d8;
  TVector<double>_u_0 local_4b8;
  double local_4a0;
  double local_498;
  double local_490;
  FRefCountVector *local_488 [2];
  IndexIterator local_478;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_468;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_438;
  undefined1 local_408 [32];
  void *local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  void *local_3c8;
  undefined4 local_3c0;
  ForAnyElementType local_3b8;
  undefined8 local_3b0;
  TBitArray<FDefaultBitArrayAllocator> local_3a8;
  undefined4 local_388;
  undefined4 local_384;
  void *local_378;
  undefined4 local_370;
  undefined2 local_368;
  ForAnyElementType local_360;
  undefined8 local_358;
  TBitArray<FDefaultBitArrayAllocator> local_350;
  undefined8 uStack_330;
  void *local_320;
  undefined4 local_318;
  ForAnyElementType local_310;
  undefined8 local_308;
  TBitArray<FDefaultBitArrayAllocator> local_300;
  undefined8 uStack_2e0;
  void *local_2d0;
  undefined4 local_2c8;
  undefined2 local_2c0;
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  TBitArray<FDefaultBitArrayAllocator> local_2a8;
  undefined4 local_288;
  undefined4 local_284;
  void *local_278;
  undefined4 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  TBitArray<FDefaultBitArrayAllocator> local_258;
  undefined4 local_238;
  undefined4 local_234;
  void *local_228;
  undefined4 local_220;
  undefined2 local_218;
  ForAnyElementType local_210;
  undefined8 local_208;
  TBitArray<FDefaultBitArrayAllocator> local_200;
  undefined8 uStack_1e0;
  void *local_1d0;
  undefined4 local_1c8;
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  TBitArray<FDefaultBitArrayAllocator> local_1b0;
  undefined8 uStack_190;
  void *local_180;
  undefined4 local_178;
  undefined2 local_170;
  ForAnyElementType local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  BaseIterator local_148;
  code *local_138 [2];
  longlong local_128 [3];
  longlong *local_110;
  undefined1 local_108 [40];
  longlong *local_e0;
  FRefCountVector *local_d8;
  IndexIterator local_c8;
  undefined1 local_b8 [40];
  longlong *local_90;
  ulonglong local_88;
  
  dVar9 = __real_3ee4f8b588e368f1;
  dVar6 = __real_3fe0000000000000;
  dVar5 = __real_3ff0000000000000;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  if (0.0 < param_1) {
    iVar19 = (this->CellMeshes).Array.ArrayNum;
    uVar17 = 0;
    uVar18 = uVar17;
    uVar20 = uVar17;
    if (0 < iVar19) {
      do {
        uVar16 = (uint)uVar18;
        if (uVar16 != this->OutsideCellIndex) {
          uVar11 = 0;
          if ((int)uVar16 < iVar19) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_4f0 = (undefined ***)0x0;
          local_518 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                      ::Call;
          local_4e8[0] = Core::Private::Function::
                         TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                         ::Call;
          pFVar1 = *(FDynamicMesh3 **)((this->CellMeshes).Array.AllocatorInstance.Data + uVar20);
          local_508 = &
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__VerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_U__TVector_N_Math_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
          ;
          local_568 = 0.0;
          _local_578 = ZEXT816(0);
          local_4d8.HeapAllocation = (FFunctionStorage *)0x0;
          local_500 = pFVar1;
          Core::Private::Function::
          TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,0,0>::
          CloneToEmptyStorage(&local_508,&local_4d8);
          local_d8 = &pFVar1->VertexRefCounts;
          local_108._0_8_ = 0;
          local_e0 = (longlong *)0x0;
          TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
                    ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_108,
                     (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_4e8);
          if (local_4e8[0] != (code *)0x0) {
            pFVar13 = &local_4d8;
            if (local_4d8.HeapAllocation != (FFunctionStorage *)0x0) {
              pFVar13 = local_4d8.HeapAllocation;
            }
            (**(code **)(*(longlong *)pFVar13->InlineAllocation + 0x10))();
          }
          if (local_518 != (code *)0x0) {
            pppuVar14 = &local_508;
            if (local_4f0 != (undefined ***)0x0) {
              pppuVar14 = local_4f0;
            }
            (*(code *)(*pppuVar14)[2])();
          }
          UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                    ((IndexIterator *)local_488,local_d8,0,
                     (local_d8->RefCounts).CurBlock * 0x200 + (local_d8->RefCounts).CurBlockUsed);
          local_138[0] = (code *)0x0;
          local_110 = (longlong *)0x0;
          local_148.Vector = local_488[0];
          local_148._8_8_ = local_488[1];
          TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
                    ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_138,
                     (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_108);
          iVar19 = (local_d8->RefCounts).CurBlock * 0x200 + (local_d8->RefCounts).CurBlockUsed;
          UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                    (&local_478,local_d8,iVar19,iVar19);
          local_b8._0_8_ = 0;
          local_90 = (longlong *)0x0;
          local_c8._0_8_ = local_478._0_8_;
          local_c8._8_8_ = local_478._8_8_;
          TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
                    ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_b8,
                     (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_108);
          if (local_148.Index != local_c8._8_4_) {
            do {
              local_560[0] = local_148.Index;
              Core::Private::Function::CheckCallable(local_138[0]);
              pcVar2 = local_138[0];
              plVar15 = local_128;
              if (local_110 != (longlong *)0x0) {
                plVar15 = local_110;
              }
              uVar12 = (**(code **)(*plVar15 + 8))();
              (*pcVar2)(&local_550,uVar12,local_560);
              local_568 = (double)local_568 + local_540;
              dStack_570 = dStack_570 + local_548;
              local_578 = local_578 + local_550;
              UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_148);
            } while (local_148.Index != local_c8._8_4_);
          }
          if (local_b8._0_8_ != 0) {
            plVar15 = (longlong *)(local_b8 + 0x10);
            if (local_90 != (longlong *)0x0) {
              plVar15 = local_90;
            }
            (**(code **)(*plVar15 + 0x10))();
          }
          if (local_138[0] != (code *)0x0) {
            plVar15 = local_128;
            if (local_110 != (longlong *)0x0) {
              plVar15 = local_110;
            }
            (**(code **)(*plVar15 + 0x10))();
          }
          if (local_108._0_8_ != 0) {
            plVar15 = (longlong *)(local_108 + 0x10);
            if (local_e0 != (longlong *)0x0) {
              plVar15 = local_e0;
            }
            (**(code **)(*plVar15 + 0x10))();
          }
          dVar21 = dVar5 / (double)(pFVar1->VertexRefCounts).UsedCount;
          dVar3 = dStack_570 * dVar21;
          unique0x1000037c = SUB84(dVar3,0);
          local_578 = local_578 * dVar21;
          unique0x10000380 = (int)((ulonglong)dVar3 >> 0x20);
          local_568 = (double)local_568 * dVar21;
          UE::Geometry::FDynamicMesh3::GetBounds
                    (pFVar1,(TAxisAlignedBox3<double> *)&local_4b8._s_0,true);
          dVar3 = local_4a0 - local_4b8._s_0.X;
          dVar21 = local_498 - local_4b8._s_0.Y;
          if (local_498 - local_4b8._s_0.Y <= 0.0) {
            dVar21 = 0.0;
          }
          dVar4 = local_490 - local_4b8._s_0.Z;
          if (local_490 - local_4b8._s_0.Z <= 0.0) {
            dVar4 = 0.0;
          }
          if (dVar3 <= 0.0) {
            dVar3 = 0.0;
          }
          if (dVar21 <= dVar4) {
            dVar21 = dVar4;
          }
          if (dVar21 <= dVar3) {
            dVar21 = dVar3;
          }
          dVar21 = (dVar21 - param_1 * dVar6) / dVar21;
          if (dVar9 <= dVar21) {
            local_538._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar21;
            local_538._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar21;
            local_538._s_0.Z = dVar21 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            MeshTransforms::Scale
                      (pFVar1,(TVector<double> *)&local_538._s_0,(TVector<double> *)&local_578,false
                       ,false);
          }
          else {
            UE::Geometry::FDynamicMesh3::Clear(pFVar1);
            AugmentedDynamicMesh::Augment(pFVar1,this->NumUVLayers);
          }
        }
        iVar19 = (this->CellMeshes).Array.ArrayNum;
        uVar18 = (ulonglong)(uVar16 + 1);
        uVar20 = uVar20 + 8;
      } while ((int)(uVar16 + 1) < iVar19);
    }
    uVar16 = this->OutsideCellIndex;
    if (uVar16 != 0xffffffff) {
      uVar11 = 0;
      if ((int)uVar16 < iVar19) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FDynamicMesh3 **)
                ((this->CellMeshes).Array.AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
      UE::Geometry::FDynamicMesh3::Clear(pFVar1);
      AugmentedDynamicMesh::Augment(pFVar1,this->NumUVLayers);
      uVar8 = _UNK_150631d98;
      uVar12 = ___xmm_00000000ffffffff0000008000000000;
      iVar19 = (this->CellMeshes).Array.ArrayNum;
      uVar18 = uVar17;
      local_558.Mesh = pFVar1;
      if (0 < iVar19) {
        do {
          uVar7 = ___xmm_00000000ffffffff0000008000000000;
          uVar16 = (uint)uVar17;
          if (uVar16 != this->OutsideCellIndex) {
            local_408._0_8_ = (void *)0x0;
            local_408._8_8_ = 0;
            local_3e8 = (void *)0x0;
            local_3e0 = 0;
            uVar11 = 0;
            if ((int)uVar16 < iVar19) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            local_3dc = 0x80;
            local_3d8 = 0xffffffff;
            local_3d4 = 0;
            local_3c8 = (void *)0x0;
            local_3c0 = 0;
            local_3b8.Data = (FScriptContainerElement *)0x0;
            local_3b0 = 0;
            local_3a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            local_3a8.NumBits = 0;
            local_3a8.MaxBits = 0x80;
            local_388 = 0xffffffff;
            local_384 = 0;
            local_378 = (void *)0x0;
            local_370 = 0;
            local_368._0_1_ = true;
            local_368._1_1_ = true;
            local_360.Data = (FScriptContainerElement *)0x0;
            local_358 = 0;
            local_350.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            ___xmm_00000000ffffffff0000008000000000 = (int)uVar12;
            _UNK_150631d94 = SUB84(uVar12,4);
            local_350.NumBits = ___xmm_00000000ffffffff0000008000000000;
            local_350.MaxBits = _UNK_150631d94;
            uStack_330 = uVar8;
            local_320 = (void *)0x0;
            local_318 = 0;
            local_310.Data = (FScriptContainerElement *)0x0;
            local_308 = 0;
            local_300.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            ___xmm_00000000ffffffff0000008000000000 = (int)uVar12;
            _UNK_150631d94 = SUB84(uVar12,4);
            local_300.NumBits = ___xmm_00000000ffffffff0000008000000000;
            local_300.MaxBits = _UNK_150631d94;
            uStack_2e0 = uVar8;
            local_2d0 = (void *)0x0;
            local_2c8 = 0;
            local_2c0._0_1_ = true;
            local_2c0._1_1_ = true;
            local_2b8.Data = (FScriptContainerElement *)0x0;
            local_2b0 = 0;
            local_2a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            local_2a8.NumBits = 0;
            local_2a8.MaxBits = 0x80;
            local_288 = 0xffffffff;
            local_284 = 0;
            local_278 = (void *)0x0;
            local_270 = 0;
            local_268.Data = (FScriptContainerElement *)0x0;
            local_260 = 0;
            local_258.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            local_258.NumBits = 0;
            local_258.MaxBits = 0x80;
            local_238 = 0xffffffff;
            local_234 = 0;
            local_228 = (void *)0x0;
            local_220 = 0;
            local_218._0_1_ = true;
            local_218._1_1_ = true;
            local_210.Data = (FScriptContainerElement *)0x0;
            local_208 = 0;
            local_200.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            ___xmm_00000000ffffffff0000008000000000 = (int)uVar12;
            _UNK_150631d94 = SUB84(uVar12,4);
            local_200.NumBits = ___xmm_00000000ffffffff0000008000000000;
            local_200.MaxBits = _UNK_150631d94;
            uStack_1e0 = uVar8;
            local_1d0 = (void *)0x0;
            local_1c8 = 0;
            local_1c0.Data = (FScriptContainerElement *)0x0;
            local_1b8 = 0;
            local_1b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            ___xmm_00000000ffffffff0000008000000000 = (int)uVar12;
            _UNK_150631d94 = SUB84(uVar12,4);
            local_1b0.NumBits = ___xmm_00000000ffffffff0000008000000000;
            local_1b0.MaxBits = _UNK_150631d94;
            uStack_190 = uVar8;
            local_180 = (void *)0x0;
            local_178 = 0;
            local_170._0_1_ = true;
            local_170._1_1_ = true;
            local_168.Data = (FScriptContainerElement *)0x0;
            local_160._0_4_ = 0;
            local_160._4_4_ = 0;
            local_158.Data = (FScriptContainerElement *)0x0;
            local_150._0_4_ = 0;
            local_150._4_4_ = 0;
            local_468._0_8_ = 0;
            local_468._40_8_ = 0;
            local_438._0_8_ = 0;
            local_438._40_8_ = 0;
            ___xmm_00000000ffffffff0000008000000000 = uVar7;
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            UE::Geometry::FDynamicMeshEditor::AppendMesh
                      (&local_558,
                       *(FDynamicMesh3 **)((this->CellMeshes).Array.AllocatorInstance.Data + uVar18)
                       ,(FMeshIndexMappings *)local_408,&local_438,&local_468,false);
            DestructItems<UE::Geometry::TIndexMap<int>,int>
                      ((TIndexMap<int> *)local_158.Data,(int)local_150);
            if ((TIndexMap<int> *)local_158.Data != (TIndexMap<int> *)0x0) {
              FMemory::Free(local_158.Data);
            }
            DestructItems<UE::Geometry::TIndexMap<int>,int>
                      ((TIndexMap<int> *)local_168.Data,(int)local_160);
            if ((TIndexMap<int> *)local_168.Data != (TIndexMap<int> *)0x0) {
              FMemory::Free(local_168.Data);
            }
            local_178 = 0;
            if (local_180 != (void *)0x0) {
              FMemory::Free(local_180);
            }
            uVar20 = local_1b8 >> 0x20;
            local_1b8 = local_1b8 & 0xffffffff00000000;
            if ((int)uVar20 != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_1c0,0,(int *)((longlong)&local_1b8 + 4));
            }
            iVar19 = local_1b0.MaxBits;
            uStack_190 = 0xffffffff;
            local_1b0._24_8_ = (ulonglong)(uint)local_1b0.MaxBits << 0x20;
            if (0x80 < (uint)iVar19) {
              local_1b0.NumBits = 0;
              local_1b0.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1b0,0);
            }
            if (local_1b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_1b0.AllocatorInstance.SecondaryData);
            }
            if (local_1c0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.Data);
            }
            local_1c8 = 0;
            if (local_1d0 != (void *)0x0) {
              FMemory::Free(local_1d0);
            }
            uVar20 = local_208 >> 0x20;
            local_208 = local_208 & 0xffffffff00000000;
            if ((int)uVar20 != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_210,0,(int *)((longlong)&local_208 + 4));
            }
            iVar19 = local_200.MaxBits;
            uStack_1e0 = 0xffffffff;
            local_200._24_8_ = (ulonglong)(uint)local_200.MaxBits << 0x20;
            if (0x80 < (uint)iVar19) {
              local_200.NumBits = 0;
              local_200.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_200,0);
            }
            if (local_200.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_200.AllocatorInstance.SecondaryData);
            }
            if (local_210.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_210.Data);
            }
            local_220 = 0;
            if (local_228 != (void *)0x0) {
              FMemory::Free(local_228);
            }
            uVar20 = local_260 >> 0x20;
            local_260 = local_260 & 0xffffffff00000000;
            if ((int)uVar20 != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_268,0,(int *)((longlong)&local_260 + 4));
            }
            local_238 = 0xffffffff;
            local_234 = 0;
            local_258.NumBits = 0;
            if (0x80 < (uint)local_258.MaxBits) {
              local_258.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_258,0);
            }
            if (local_258.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
            }
            if (local_268.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_268.Data);
            }
            local_270 = 0;
            if (local_278 != (void *)0x0) {
              FMemory::Free(local_278);
            }
            uVar20 = local_2b0 >> 0x20;
            local_2b0 = local_2b0 & 0xffffffff00000000;
            if ((int)uVar20 != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_2b8,0,(int *)((longlong)&local_2b0 + 4));
            }
            local_288 = 0xffffffff;
            local_284 = 0;
            local_2a8.NumBits = 0;
            if (0x80 < (uint)local_2a8.MaxBits) {
              local_2a8.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2a8,0);
            }
            if (local_2a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_2a8.AllocatorInstance.SecondaryData);
            }
            if (local_2b8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b8.Data);
            }
            local_2c8 = 0;
            if (local_2d0 != (void *)0x0) {
              FMemory::Free(local_2d0);
            }
            uVar20 = local_308 >> 0x20;
            local_308 = local_308 & 0xffffffff00000000;
            if ((int)uVar20 != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_310,0,(int *)((longlong)&local_308 + 4));
            }
            iVar19 = local_300.MaxBits;
            uStack_2e0 = 0xffffffff;
            local_300._24_8_ = (ulonglong)(uint)local_300.MaxBits << 0x20;
            if (0x80 < (uint)iVar19) {
              local_300.NumBits = 0;
              local_300.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_300,0);
            }
            if (local_300.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_300.AllocatorInstance.SecondaryData);
            }
            if (local_310.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_310.Data);
            }
            local_318 = 0;
            if (local_320 != (void *)0x0) {
              FMemory::Free(local_320);
            }
            uVar20 = local_358 >> 0x20;
            local_358 = local_358 & 0xffffffff00000000;
            if ((int)uVar20 != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_360,0,(int *)((longlong)&local_358 + 4));
            }
            iVar19 = local_350.MaxBits;
            uStack_330 = 0xffffffff;
            local_350._24_8_ = (ulonglong)(uint)local_350.MaxBits << 0x20;
            if (0x80 < (uint)iVar19) {
              local_350.NumBits = 0;
              local_350.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_350,0);
            }
            if (local_350.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_350.AllocatorInstance.SecondaryData);
            }
            if (local_360.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_360.Data);
            }
            local_370 = 0;
            if (local_378 != (void *)0x0) {
              FMemory::Free(local_378);
            }
            uVar20 = local_3b0 >> 0x20;
            local_3b0 = local_3b0 & 0xffffffff00000000;
            if ((int)uVar20 != 0) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_3b8,0,(int *)((longlong)&local_3b0 + 4));
            }
            local_388 = 0xffffffff;
            local_384 = 0;
            local_3a8.NumBits = 0;
            if (0x80 < (uint)local_3a8.MaxBits) {
              local_3a8.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_3a8,0);
            }
            if (local_3a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_3a8.AllocatorInstance.SecondaryData);
            }
            if (local_3b8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b8.Data);
            }
            local_3c0 = 0;
            if (local_3c8 != (void *)0x0) {
              FMemory::Free(local_3c8);
            }
            TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_408,0);
            if (local_3e8 != (void *)0x0) {
              FMemory::Free(local_3e8);
            }
            if ((void *)local_408._0_8_ != (void *)0x0) {
              FMemory::Free((void *)local_408._0_8_);
            }
          }
          iVar19 = (this->CellMeshes).Array.ArrayNum;
          uVar17 = (ulonglong)(uVar16 + 1);
          uVar18 = uVar18 + 8;
        } while ((int)(uVar16 + 1) < iVar19);
      }
    }
  }
  return;
}

// ApplyNoise @ 14c9b65c0

void __thiscall
UE::PlanarCut::FCellMeshes::ApplyNoise
          (FCellMeshes *this,FDynamicMesh3 *param_1,TVector<double> *param_2,FNoiseSettings *param_3
          ,bool param_4)

{
  FMutex *this_00;
  uint *puVar1;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  short sVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  double local_90;
  
  uVar15 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar14 = 0;
  if ((uVar15 != 0) &&
     (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar14 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar15) {
      do {
        lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar13 >> 9) * 8);
        if ((*(short *)(lVar5 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
           (uVar14 = uVar13, *(short *)(lVar5 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
        uVar13 = uVar13 + 1;
        uVar14 = uVar13;
      } while ((int)uVar13 < (int)uVar15);
    }
  }
joined_r0x00014c9b6648:
  do {
    if (uVar14 == uVar15) {
      return;
    }
    while( true ) {
      uVar12 = (ulonglong)(uVar14 & 0x1ff);
      lVar5 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8);
      local_b8._s_0.Z = *(double *)(lVar5 + 0x10 + uVar12 * 0x18);
      pdVar2 = (double *)(lVar5 + uVar12 * 0x18);
      dVar6 = *pdVar2;
      dVar9 = pdVar2[1];
      dVar19 = (double)param_3->Frequency;
      dVar7 = dVar6 * dVar19;
      dVar8 = local_b8._s_0.Z * dVar19;
      dVar19 = dVar9 * dVar19;
      local_e8._s_0.X = dVar7 + (this->NoiseOffsetZ).field0_0x0._s_0.X;
      local_e8._s_0.Y = dVar19 + (this->NoiseOffsetZ).field0_0x0._s_0.Y;
      local_e8._s_0.Z = dVar8 + (this->NoiseOffsetZ).field0_0x0._s_0.Z;
      local_90 = local_b8._s_0.Z;
      fVar16 = OctaveNoise(this,(TVector<double> *)&local_e8._s_0,param_3);
      local_d0._s_0.X = dVar7 + (this->NoiseOffsetY).field0_0x0._s_0.X;
      local_d0._s_0.Y = dVar19 + (this->NoiseOffsetY).field0_0x0._s_0.Y;
      local_d0._s_0.Z = dVar8 + (this->NoiseOffsetY).field0_0x0._s_0.Z;
      fVar17 = OctaveNoise(this,(TVector<double> *)&local_d0._s_0,param_3);
      local_b8._s_0.X = dVar7 + (this->NoiseOffsetX).field0_0x0._s_0.X;
      local_b8._s_0.Y = dVar19 + (this->NoiseOffsetX).field0_0x0._s_0.Y;
      local_b8._s_0.Z = dVar8 + (this->NoiseOffsetX).field0_0x0._s_0.Z;
      fVar18 = OctaveNoise(this,(TVector<double> *)&local_b8._s_0,param_3);
      dVar7 = (double)param_3->Amplitude;
      dVar8 = dVar7 * (double)fVar18;
      dVar19 = dVar7 * (double)fVar17;
      dVar7 = dVar7 * (double)fVar16;
      if ((param_4) ||
         (bVar10 = UE::Geometry::FDynamicMesh3::IsBoundaryVertex(param_1,uVar14), !bVar10)) {
        dVar7 = dVar19 * (param_2->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.X * dVar8 +
                dVar7 * (param_2->field0_0x0)._s_0.Z;
        dVar8 = dVar7 * (param_2->field0_0x0)._s_0.X;
        dVar19 = dVar7 * (param_2->field0_0x0)._s_0.Y;
        dVar7 = dVar7 * (param_2->field0_0x0)._s_0.Z;
      }
      dVar6 = dVar6 + dVar8;
      dVar9 = dVar9 + dVar19;
      dVar7 = local_90 + dVar7;
      sVar11 = _dclass(dVar6);
      if (((sVar11 < 1) && (sVar11 = _dclass(dVar9), sVar11 < 1)) &&
         (sVar11 = _dclass(dVar7), sVar11 < 1)) {
        lVar5 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8);
        *(double *)(lVar5 + uVar12 * 0x18) = dVar6;
        *(double *)(lVar5 + 8 + uVar12 * 0x18) = dVar9;
        *(double *)(lVar5 + 0x10 + uVar12 * 0x18) = dVar7;
        if ((param_1->ChangeStampShape).bIsEnabled != false) {
          this_00 = &(param_1->ChangeStampShape).Mutex;
          LOCK();
          bVar10 = this_00->State == (atomic<unsigned_char>)0x0;
          if (bVar10) {
            this_00->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar10) {
            FMutex::LockSlow(this_00);
          }
          puVar1 = &(param_1->ChangeStampShape).Value;
          *puVar1 = *puVar1 + 1;
          LOCK();
          aVar3 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          if (((byte)aVar3 & 2) != 0) {
            FMutex::WakeWaitingThread(this_00);
          }
        }
      }
      uVar14 = uVar14 + 1;
      if ((int)uVar15 <= (int)uVar14) break;
      while( true ) {
        lVar5 = *(longlong *)
                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar14 >> 9) * 8);
        if ((*(short *)(lVar5 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar5 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
        uVar14 = uVar14 + 1;
        if ((int)uVar15 <= (int)uVar14) goto joined_r0x00014c9b6648;
      }
    }
  } while( true );
}

// CreateMeshesForBoundedPlanesWithNoise @ 14c9bea70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c9bfbc3) */
/* WARNING: Removing unreachable block (ram,0x00014c9bfbd7) */
/* WARNING: Removing unreachable block (ram,0x00014c9bfbdb) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise
          (FCellMeshes *this,int param_1,FPlanarCells *param_2,TAxisAlignedBox3<double> *param_3,
          bool param_4,double param_5)

{
  atomic<unsigned_char> *this_00;
  double *pdVar1;
  double *pdVar2;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *pTVar3;
  FMutex FVar4;
  atomic<unsigned_char> aVar5;
  int iVar6;
  FDynamicMeshAttributeSet *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FIndex2i FVar10;
  undefined1 *puVar11;
  code *pcVar12;
  byte bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  FName FVar23;
  FIndex2i_u_0 *pFVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  bool bVar27;
  bool bVar28;
  short sVar29;
  int iVar30;
  uint uVar31;
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *pTVar32;
  FNoiseSettings *pFVar33;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar34;
  TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar35;
  TTriangle3<double> *pTVar36;
  TTriangle3<double> *pTVar37;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar38;
  TFrame3<double> *pTVar39;
  TVector<double> *pTVar40;
  ulonglong uVar41;
  longlong *plVar42;
  undefined ***pppuVar43;
  FDynamicMeshAttributeSet *pFVar44;
  undefined1 *puVar45;
  uint uVar46;
  uint uVar47;
  FNameEntryId FVar48;
  TArray<_private:_void___cdecl_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise(int,FPlanarCells_const_&,UE::Geometry::TAxisAlignedBox3<double>_const_&,bool,double)_::_2_::FPlaneIdxAndFlip,TSizedDefaultAllocator<32>_>
  *pTVar49;
  TVector2<float>_u_0 TVar50;
  FScriptContainerElement *pFVar51;
  uint uVar52;
  longlong lVar53;
  ForAnyElementType FVar54;
  longlong lVar55;
  longlong lVar56;
  uint *puVar57;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar58;
  FPlanarCells *pFVar59;
  FName FVar60;
  FDynamicMesh3 *pFVar61;
  longlong lVar62;
  TVector2<float>_u_0 TVar63;
  ulonglong uVar64;
  FIndex2i_u_0 *pFVar65;
  float fVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  float fVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  float fVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined1 auStackY_b28 [32];
  uint local_ad4;
  uint local_ad0;
  undefined1 local_ac0;
  undefined1 local_abf;
  bool local_abe;
  undefined1 local_abd;
  undefined1 local_abc;
  undefined1 local_abb;
  undefined1 local_aba;
  undefined1 local_ab9;
  undefined8 local_ab8;
  ulonglong local_ab0;
  ForAnyElementType local_aa8;
  undefined8 local_aa0;
  ForAnyElementType local_a98;
  int local_a90;
  int local_a8c;
  uint local_a88;
  FScriptContainerElement *local_a80;
  int *piStack_a78;
  double local_a70;
  uint local_a68;
  ForAnyElementType local_a60;
  undefined8 local_a58;
  TArray<_private:_void___cdecl_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise(int,FPlanarCells_const_&,UE::Geometry::TAxisAlignedBox3<double>_const_&,bool,double)_::_2_::FPlaneIdxAndFlip,TSizedDefaultAllocator<32>_>
  *local_a50;
  ulonglong local_a48;
  ForAnyElementType local_a40;
  undefined8 local_a38;
  FIndex2i_u_0 local_a30;
  FPlanarCells *local_a28;
  FName local_a20;
  undefined1 local_a18 [8];
  IndexIterator local_a10;
  FScriptContainerElement *local_a00;
  ulonglong local_9f8;
  FName local_9f0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_9e8;
  uint local_9d8;
  uint uStack_9d4;
  uint local_9d0;
  undefined4 uStack_9cc;
  undefined4 local_9c8;
  undefined4 uStack_9c4;
  longlong local_9c0;
  longlong *local_9b8;
  FVector3i_u_0 local_9b0;
  FIndex2i_u_0 *local_9a0;
  TDynamicMeshScalarTriangleAttribute<int> *local_998;
  undefined8 local_990;
  uint local_988;
  uint auStack_984 [3];
  undefined8 local_978;
  uint local_970;
  uint local_968;
  uint local_964;
  TVector<double>_u_0 local_960;
  int local_948;
  int local_944;
  int local_940;
  undefined8 local_938;
  undefined4 local_930;
  FIntersectionsQueryResult local_928;
  code *local_8f8;
  FCellMeshes **local_8f0;
  FCellMeshes *local_8e8;
  double local_8e0;
  double dStack_8d8;
  double local_8d0;
  code *local_8c8;
  undefined1 *local_8c0;
  longlong local_8b8;
  FIndex2i **local_8b0;
  FScriptContainerElement *local_8a8;
  int *piStack_8a0;
  undefined8 local_898;
  FScriptContainerElement *local_890;
  int *piStack_888;
  undefined8 local_880;
  TPairInitializer<UE::Geometry::FVector3i_const_&,UE::Geometry::FIndex2i_const_&> local_878;
  undefined1 local_868 [12];
  float local_85c;
  FName local_858;
  BaseIterator local_850;
  BaseIterator local_840;
  double local_830;
  double dStack_828;
  double local_820;
  code *local_818 [2];
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  longlong *plStack_7f0;
  int *local_7e8;
  FIndex2i_u_0 *local_7e0;
  IndexIterator local_7d8;
  code *local_7c8;
  FCellMeshes **local_7c0;
  FVector3i *local_7b8;
  uint *local_7b0;
  FVector3i local_7a8;
  FCellMeshes *local_798;
  FName local_790;
  ForAnyElementType *local_788;
  FPlanarCells *local_780;
  double local_778;
  double local_770;
  IndexIterator local_768;
  IndexIterator local_758;
  TVector<double> local_748;
  TVector<double> local_730;
  TVector4<float>_u_0 local_718;
  TVector<double>_u_0 local_708;
  double local_6f0;
  double dStack_6e8;
  double local_6e0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_6d8;
  TVector<double> local_6c8;
  TVector<double> local_6b0;
  TFrame3<double> local_698;
  undefined1 local_658 [64];
  ForElementType<FSetElementId> local_618;
  int local_610;
  FMutex local_608 [8];
  TWrapAroundGridIndexer3<double> local_600;
  FIndex2i_u_0 local_5f8;
  undefined1 local_5e8 [48];
  undefined **local_5b8;
  code *local_5b0;
  undefined ***local_5a0;
  double local_598;
  TDynamicVector<int,512> local_590;
  TDynamicVector<UE::Math::TVector<double>,512> local_578;
  TDynamicVector<UE::Math::TVector<double>,512> local_560;
  TDynamicVector<int,512> local_548;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  TVector<double>_u_0 local_4f8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_4a0;
  double dStack_498;
  double local_490;
  double dStack_488;
  double local_480;
  double dStack_478;
  double local_470;
  undefined8 local_468;
  undefined1 local_460;
  undefined8 local_45c;
  undefined4 local_454;
  undefined1 local_3b8 [56];
  longlong *local_380;
  bool local_378;
  TTriangle3<double> local_368;
  TTriangle3<double> local_318;
  TVector<double>_u_0 local_2c8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  double local_250;
  double dStack_248;
  double local_240;
  undefined8 local_238;
  undefined1 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  TTriangle3<double> local_188;
  TTriangle3<double> local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_b28;
  uVar52 = (param_2->Planes).ArrayNum;
  local_a40.Data = (FScriptContainerElement *)0x0;
  local_a38 = 0;
  local_a28 = param_2;
  if ((int)uVar52 < 1) {
    if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
    }
  }
  else {
    iVar30 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x230,8,uVar52,&local_a40,(int *)&local_a38,
                        (int *)((longlong)&local_a38 + 4));
    DefaultConstructItems<UE::Geometry::FDynamicMesh3,int>
              (local_a40.Data + (longlong)iVar30 * 0x230,uVar52);
  }
  ::FName::FName(&local_9f0,"OriginalPosition");
  iVar30 = (int)local_a38;
  uVar41 = (ulonglong)(int)local_a38;
  pFVar61 = (FDynamicMesh3 *)(local_a40.Data + uVar41 * 0x230);
  FVar54.Data = local_a40.Data;
  while( true ) {
    if ((int)uVar41 != iVar30) {
      local_ac0 = 0;
      `TCheckedPointerIterator<UE::Geometry::FDynamicMesh3,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_ac0);
    }
    if ((FDynamicMesh3 *)FVar54.Data == pFVar61) break;
    AugmentedDynamicMesh::EnableUVChannels
              ((FDynamicMesh3 *)FVar54.Data,this->NumUVLayers,false,true);
    local_868._4_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    local_85c = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    UE::Geometry::FDynamicMesh3::EnableVertexNormals
              ((FDynamicMesh3 *)FVar54.Data,(TVector<float> *)(local_868 + 4));
    UE::Geometry::FDynamicMesh3::EnableAttributes((FDynamicMesh3 *)FVar54.Data);
    pFVar7 = (((FDynamicMesh3 *)FVar54.Data)->AttributeSet).Ptr;
    pFVar44 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar44 = pFVar7;
    }
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar44);
    pFVar7 = (((FDynamicMesh3 *)FVar54.Data)->AttributeSet).Ptr;
    pFVar44 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar44 = pFVar7;
    }
    pTVar32 = ::operator_new(0x30);
    if (pTVar32 == (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar32 = (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0;
    }
    else {
      pTVar32->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar32->_padding_ = 0;
      (pTVar32->AttribValues).CurBlock = 0;
      (pTVar32->AttribValues).CurBlockUsed = 0;
      (pTVar32->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar32->AttribValues).Blocks.ArrayNum = 0;
      (pTVar32->AttribValues).Blocks.ArrayMax = 0;
      pTVar32->Parent = (FDynamicMesh3 *)FVar54.Data;
      UE::Geometry::TDynamicVector<double,512>::AddAllocatedBlock(&pTVar32->AttribValues);
      UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar32,0.0);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
              (pFVar44,local_9f0,(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pTVar32);
    uVar41 = local_a38 & 0xffffffff;
    FVar54.Data = FVar54.Data + 0x230;
  }
  local_a50 = (TArray<_private:_void___cdecl_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise(int,FPlanarCells_const_&,UE::Geometry::TAxisAlignedBox3<double>_const_&,bool,double)_::_2_::FPlaneIdxAndFlip,TSizedDefaultAllocator<32>_>
               *)0x0;
  local_a48 = 0;
  TArray<TArray<`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l2::FPlaneIdxAndFlip,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&local_a50,param_1,Default);
  pFVar59 = local_a28;
  uVar52 = 0;
  if (0 < (local_a28->PlaneCells).ArrayNum) {
    uVar41 = local_a48 & 0xffffffff;
    lVar62 = 0;
    do {
      uVar47 = 0;
      if ((int)uVar52 < (pFVar59->PlaneCells).ArrayNum) {
        uVar47 = ~uVar52 >> 0x1f;
      }
      iVar30 = (int)uVar41;
      if (uVar47 == 0) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar30 = (int)local_a48;
      }
      pFVar51 = (pFVar59->PlaneCells).AllocatorInstance.Data;
      uVar47 = *(uint *)(pFVar51 + lVar62 + 4);
      if ((int)uVar47 < 0) {
        uVar47 = this->OutsideCellIndex;
      }
      uVar46 = *(uint *)(pFVar51 + lVar62);
      if (((int)uVar46 < 0) || (iVar30 <= (int)uVar46)) {
        bVar27 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5943927746286585895>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                            ,0x827,"CellPlanes.IsValidIndex(CellPair.Key)");
        if (bVar27) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      else {
        uVar31 = 0;
        if ((int)uVar46 < iVar30) {
          uVar31 = ~uVar46 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar49 = local_a50 + (int)uVar46;
        uStack_9d4 = uStack_9d4 & 0xffffff00;
        pFVar51 = (pTVar49->AllocatorInstance).Data;
        local_9d8 = uVar52;
        if (((pFVar51 <= (FScriptContainerElement *)&local_9d8) &&
            ((FScriptContainerElement *)&local_9d8 < pFVar51 + (longlong)pTVar49->ArrayMax * 8)) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar30 = pTVar49->ArrayNum;
        if (iVar30 == pTVar49->ArrayMax) {
          iVar30 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&pTVar49->AllocatorInstance,&pTVar49->ArrayMax);
        }
        pTVar49->ArrayNum = iVar30 + 1;
        *(ulonglong *)((pTVar49->AllocatorInstance).Data + (longlong)iVar30 * 8) =
             CONCAT44(uStack_9d4,local_9d8);
      }
      if ((int)uVar47 < 0) {
LAB_14c9bef47:
        uVar41 = local_a48 & 0xffffffff;
      }
      else {
        uVar41 = (ulonglong)(int)local_a48;
        if ((int)uVar47 < (int)local_a48) {
          uVar46 = 0;
          if ((int)uVar47 < (int)local_a48) {
            uVar46 = ~uVar47 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar49 = local_a50 + (int)uVar47;
          uStack_9cc = CONCAT31(uStack_9cc._1_3_,1);
          pFVar51 = (pTVar49->AllocatorInstance).Data;
          local_9d0 = uVar52;
          if (((pFVar51 <= (FScriptContainerElement *)&local_9d0) &&
              ((FScriptContainerElement *)&local_9d0 < pFVar51 + (longlong)pTVar49->ArrayMax * 8))
             && (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar30 = pTVar49->ArrayNum;
          if (iVar30 == pTVar49->ArrayMax) {
            iVar30 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&pTVar49->AllocatorInstance,&pTVar49->ArrayMax);
          }
          pTVar49->ArrayNum = iVar30 + 1;
          *(ulonglong *)((pTVar49->AllocatorInstance).Data + (longlong)iVar30 * 8) =
               CONCAT44(uStack_9cc,local_9d0);
          goto LAB_14c9bef47;
        }
      }
      uVar52 = uVar52 + 1;
      lVar62 = lVar62 + 8;
    } while ((int)uVar52 < (pFVar59->PlaneCells).ArrayNum);
  }
  fVar78 = 0.0;
  local_ad0 = 0;
  if (0 < (pFVar59->Planes).ArrayNum) {
    uVar67 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar68 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    lVar62 = 0;
    uVar69 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    uVar70 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20)
    ;
    uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    do {
      uVar52 = 0;
      if ((int)local_ad0 < (pFVar59->PlaneBoundaries).ArrayNum) {
        uVar52 = ~local_ad0 >> 0x1f;
      }
      if (uVar52 == 0) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar69 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar70 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
        uVar67 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar68 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      pFVar51 = (pFVar59->PlaneBoundaries).AllocatorInstance.Data;
      if (*(int *)(pFVar51 + lVar62 + 8) < 1) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar69 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar70 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
        uVar67 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar68 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      uVar52 = **(uint **)(pFVar51 + lVar62);
      uVar47 = 0;
      if ((int)uVar52 < (pFVar59->PlaneBoundaryVertices).ArrayNum) {
        uVar47 = ~uVar52 >> 0x1f;
      }
      uVar71 = uVar72;
      if (uVar47 == 0) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar69 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar70 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
        uVar67 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar68 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar71 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      dVar22 = (double)CONCAT44(uVar68,uVar67);
      dVar18 = (double)CONCAT44(uVar70,uVar69);
      local_a00 = (pFVar59->PlaneBoundaryVertices).AllocatorInstance.Data;
      local_ab8 = (TVector2<float>_u_0)((longlong)(int)uVar52 * 3);
      iVar30 = *(int *)(pFVar51 + lVar62 + 8);
      uVar72 = uVar71;
      if (2 < iVar30) {
        lVar55 = 4;
        lVar53 = 8;
        uVar52 = 1;
        uVar47 = 2;
        do {
          uVar46 = 0;
          if ((int)uVar52 < iVar30) {
            uVar46 = ~uVar52 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar52 = *(uint *)(lVar55 + *(longlong *)(pFVar51 + lVar62));
          lVar55 = (longlong)(int)uVar52;
          uVar46 = 0;
          if ((int)uVar52 < (pFVar59->PlaneBoundaryVertices).ArrayNum) {
            uVar46 = ~uVar52 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar8 = (pFVar59->PlaneBoundaryVertices).AllocatorInstance.Data;
          uVar52 = 0;
          if ((int)uVar47 < *(int *)(pFVar51 + lVar62 + 8)) {
            uVar52 = ~uVar47 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar52 = *(uint *)(*(longlong *)(pFVar51 + lVar62) + lVar53);
          lVar56 = (longlong)(int)uVar52;
          uVar46 = 0;
          if ((int)uVar52 < (local_a28->PlaneBoundaryVertices).ArrayNum) {
            uVar46 = ~uVar52 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar46 = uVar47 + 1;
          iVar30 = *(int *)(pFVar51 + lVar62 + 8);
          pFVar9 = (local_a28->PlaneBoundaryVertices).AllocatorInstance.Data;
          uVar71 = (double)uVar71 +
                   ((*(double *)(pFVar9 + lVar56 * 0x18 + 0x10) -
                    *(double *)(pFVar8 + lVar55 * 0x18 + 0x10)) *
                    (*(double *)(pFVar8 + lVar55 * 0x18 + 8) -
                    *(double *)(local_a00 + (longlong)((longlong)local_ab8 + 1) * 8)) -
                   (*(double *)(pFVar9 + lVar56 * 0x18 + 8) -
                   *(double *)(pFVar8 + lVar55 * 0x18 + 8)) *
                   (*(double *)(pFVar8 + lVar55 * 0x18 + 0x10) -
                   *(double *)(local_a00 + (longlong)((longlong)local_ab8 + 2) * 8)));
          dVar18 = dVar18 + ((*(double *)(pFVar9 + lVar56 * 0x18) -
                             *(double *)(pFVar8 + lVar55 * 0x18)) *
                             (*(double *)(pFVar8 + lVar55 * 0x18 + 0x10) -
                             *(double *)(local_a00 + (longlong)((longlong)local_ab8 + 2) * 8)) -
                            (*(double *)(pFVar9 + lVar56 * 0x18 + 0x10) -
                            *(double *)(pFVar8 + lVar55 * 0x18 + 0x10)) *
                            (*(double *)(pFVar8 + lVar55 * 0x18) -
                            *(double *)(local_a00 + (longlong)local_ab8 * 8)));
          dVar22 = dVar22 + ((*(double *)(pFVar9 + lVar56 * 0x18 + 8) -
                             *(double *)(pFVar8 + lVar55 * 0x18 + 8)) *
                             (*(double *)(pFVar8 + lVar55 * 0x18) -
                             *(double *)(local_a00 + (longlong)local_ab8 * 8)) -
                            (*(double *)(pFVar9 + lVar56 * 0x18) -
                            *(double *)(pFVar8 + lVar55 * 0x18)) *
                            (*(double *)(pFVar8 + lVar55 * 0x18 + 8) -
                            *(double *)(local_a00 + (longlong)((longlong)local_ab8 + 1) * 8)));
          lVar55 = lVar53;
          pFVar59 = local_a28;
          lVar53 = lVar53 + 4;
          uVar52 = uVar47;
          uVar47 = uVar46;
        } while ((int)uVar46 < iVar30);
        uVar67 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar68 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar69 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        uVar70 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
        uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      local_ad0 = local_ad0 + 1;
      lVar62 = lVar62 + 0x10;
      fVar78 = fVar78 + (float)SQRT(dVar18 * dVar18 + (double)uVar71 * (double)uVar71 +
                                    dVar22 * dVar22);
    } while ((int)local_ad0 < (pFVar59->Planes).ArrayNum);
  }
  pFVar33 = TOptional<FNoiseSettings>::operator->
                      (&(pFVar59->InternalSurfaceMaterials).NoiseSettings);
  local_770 = GetSafeNoiseSpacing(this,fVar78,pFVar33->PointSpacing);
  local_790 = local_9f0;
  local_788 = &local_a40;
  local_7c0 = &local_798;
  local_7c8 = Core::Private::Function::
              TFunctionRefCaller<`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l2::<lambda_1>,void,int>
              ::Call;
  local_778 = param_5;
  local_798 = this;
  local_780 = pFVar59;
  ParallelFor((pFVar59->Planes).ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_7c8,None);
  local_ad0 = 0;
  if (0 < param_1) {
    local_ab0 = 0;
    lVar62 = 0;
    do {
      uVar41 = local_ab0;
      uVar52 = 0;
      if ((int)local_ad0 < (this->CellMeshes).Array.ArrayNum) {
        uVar52 = ~local_ad0 >> 0x1f;
      }
      if ((uVar52 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TVar50 = *(TVector2<float>_u_0 *)
                ((this->CellMeshes).Array.AllocatorInstance.Data + uVar41 * 8);
      pFVar7 = ((TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
                 *)((longlong)TVar50 + 0x208))->Ptr;
      pFVar44 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar44 = pFVar7;
      }
      local_ab8 = TVar50;
      pTVar32 = ::operator_new(0x30);
      if (pTVar32 == (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0) {
        pTVar32 = (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0;
      }
      else {
        pTVar32->Parent = (FDynamicMesh3 *)TVar50;
        (pTVar32->AttribValues).CurBlock = 0;
        pTVar32->_padding_ =
             (longlong)
             &___7__TDynamicVertexAttribute_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
        pTVar32->_padding_ = 0;
        (pTVar32->AttribValues).CurBlockUsed = 0;
        (pTVar32->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar32->AttribValues).Blocks.ArrayNum = 0;
        (pTVar32->AttribValues).Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<double,512>::AddAllocatedBlock(&pTVar32->AttribValues);
        UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::Initialize
                  (pTVar32,0.0);
      }
      UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
                (pFVar44,local_9f0,(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pTVar32);
      uVar52 = this->OutsideCellIndex;
      uVar47 = 0;
      if ((int)local_ad0 < (int)local_a48) {
        uVar47 = ~local_ad0 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar49 = local_a50;
      local_a68 = *(uint *)((longlong)&local_a50->ArrayNum + lVar62);
      uVar41 = (ulonglong)(int)local_a68;
      pFVar51 = *(FScriptContainerElement **)
                 ((longlong)&(local_a50->AllocatorInstance).Data + lVar62);
      local_a00 = pFVar51 + uVar41 * 8;
      while( true ) {
        pFVar8 = local_a00;
        if (*(int *)((longlong)&pTVar49->ArrayNum + lVar62) != (int)uVar41) {
          local_abf = 0;
          `TCheckedPointerIterator<`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l2::FPlaneIdxAndFlip,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_abf);
        }
        if (pFVar51 == pFVar8) break;
        uVar72 = *(undefined8 *)pFVar51;
        uVar46 = (uint)uVar72;
        uVar47 = 0;
        if ((int)uVar46 < (int)local_a38) {
          uVar47 = ~uVar46 >> 0x1f;
        }
        if ((uVar47 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        AppendMesh(this,(FDynamicMesh3 *)local_ab8,
                   (FDynamicMesh3 *)(local_a40.Data + (longlong)(int)uVar46 * 0x230),
                   (bool)((byte)((ulonglong)uVar72 >> 0x20) ^ local_ad0 == uVar52));
        uVar41 = (ulonglong)local_a68;
        pFVar51 = pFVar51 + 8;
      }
      lVar62 = lVar62 + 0x10;
      local_ad0 = local_ad0 + 1;
      local_ab0 = local_ab0 + 1;
    } while ((longlong)local_ab0 < (longlong)param_1);
  }
  uVar41 = (ulonglong)(uint)param_1;
  local_658._0_8_ = 0;
  local_658._8_8_ = 0;
  local_658._32_8_ = 0;
  local_658._40_4_ = 0;
  local_658._44_4_ = 0x80;
  local_658._48_4_ = 0xffffffff;
  local_658._52_4_ = 0;
  local_618 = (ForElementType<FSetElementId>)0x0;
  local_610 = 0;
  local_608[0].State = (atomic<unsigned_char>)0x0;
  UE::Geometry::TWrapAroundGridIndexer3<double>::TWrapAroundGridIndexer3<double>
            (&local_600,__real_3ee4f8b588e368f1);
  uVar52 = 0;
  local_5f8 = (FIndex2i_u_0)0xffffffffffffffff;
  if (0 < param_1) {
    lVar62 = 0;
    do {
      uVar47 = 0;
      if ((int)uVar52 < (this->CellMeshes).Array.ArrayNum) {
        uVar47 = ~uVar52 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar55 = *(longlong *)((this->CellMeshes).Array.AllocatorInstance.Data + lVar62 * 8);
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&local_850,(FRefCountVector *)(lVar55 + 0x20),0,
                 *(int *)(lVar55 + 0x20) * 0x200 + *(int *)(lVar55 + 0x24));
      iVar30 = *(int *)(lVar55 + 0x20) * 0x200 + *(int *)(lVar55 + 0x24);
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_758,(FRefCountVector *)(lVar55 + 0x20),iVar30,iVar30);
      uVar67 = local_758._8_4_;
      if (local_850.Index != local_758._8_4_) {
        local_7b8 = &local_7a8;
        local_7b0 = &local_968;
        do {
          local_964 = local_850.Index;
          lVar53 = *(longlong *)
                    (*(longlong *)(lVar55 + 0x10) + ((local_850._8_8_ & 0xffffffff) >> 9) * 8);
          pdVar1 = (double *)(lVar53 + (ulonglong)(local_964 & 0x1ff) * 0x18);
          local_708._s_0.X = *pdVar1;
          local_708._s_0.Y = pdVar1[1];
          local_708._s_0.Z = *(double *)(lVar53 + 0x10 + (ulonglong)(local_964 & 0x1ff) * 0x18);
          local_968 = uVar52;
          UE::Geometry::TWrapAroundGridIndexer3<double>::ToGrid
                    (&local_600,&local_7a8,(TVector<double> *)&local_708._s_0);
          TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,UE::Geometry::FIndex2i_const_&>_>
                    ((TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
                      *)local_658,
                     (TPairInitializer<UE::Geometry::FVector3i_const_&,UE::Geometry::FIndex2i_const_&>
                      *)local_868,(bool *)&local_7b8);
          UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_850);
        } while (local_850.Index != uVar67);
      }
      uVar52 = uVar52 + 1;
      lVar62 = lVar62 + 1;
    } while (lVar62 < param_1);
  }
  local_9e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9e8.ArrayNum = 0;
  local_9e8.ArrayMax = 0;
  local_abe = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_9e8,&local_abe,param_1);
  dVar18 = __real_41f0000000000000;
  uVar69 = (undefined4)__real_3e45798ee2308c3a;
  uVar70 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
  uVar67 = (undefined4)__real_7fefffffffffffff;
  uVar68 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar76 = SUB84(__real_3ff0000000000000,0);
  uVar77 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar74 = (undefined4)__real_3fe0000000000000;
  uVar75 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  local_a68 = 0;
  do {
    local_a60.Data = (FScriptContainerElement *)0x0;
    local_a58 = 0;
    iVar30 = (int)uVar41;
    if (iVar30 < 1) {
      if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar41 & 0xffffffff);
      }
    }
    else {
      iVar30 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar30,&local_a60,(int *)&local_a58,
                          (int *)((longlong)&local_a58 + 4));
      memset(local_a60.Data + (longlong)iVar30 * 0x10,0,(longlong)param_1 << 4);
    }
    uVar52 = 0;
    bVar27 = false;
    local_ab0 = 0;
    if ((longlong)param_1 < 1) {
LAB_14c9c1069:
      DestructItems<TArray<_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise_::__l32::FUpdate,TSizedDefaultAllocator<32>_>,int>
                ((TArray<_private:_void___cdecl_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise(int,FPlanarCells_const_&,UE::Geometry::TAxisAlignedBox3<double>_const_&,bool,double)_::_32_::FUpdate,TSizedDefaultAllocator<32>_>
                  *)local_a60.Data,(int)local_a58);
      if ((TDynamicMeshScalarTriangleAttribute<int> *)local_a60.Data !=
          (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        FMemory::Free(local_a60.Data);
      }
      if (param_1 < 1) goto LAB_14c9c126b;
      break;
    }
    local_9f8 = 0;
    do {
      uVar64 = local_9f8;
      uVar41 = local_ab0;
      uVar46 = ~uVar52 >> 0x1f;
      uVar47 = 0;
      if ((int)uVar52 < local_9e8.ArrayNum) {
        uVar47 = uVar46;
      }
      if ((uVar47 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (local_9e8.AllocatorInstance.Data[uVar41] == (FScriptContainerElement)0x0) {
        uVar47 = 0;
        if ((int)uVar52 < (this->CellMeshes).Array.ArrayNum) {
          uVar47 = uVar46;
        }
        if ((uVar47 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar61 = *(FDynamicMesh3 **)((this->CellMeshes).Array.AllocatorInstance.Data + uVar41 * 8);
        local_598 = (double)CONCAT44(uVar70,uVar69);
        local_5b0 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                    MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
        local_5e8._32_8_ =
             Core::Private::Function::
             TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
             ::Call;
        local_5e8._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
        local_5e8._16_8_ = 0;
        local_5e8._24_4_ = 3;
        local_5a0 = (undefined ***)0x0;
        local_5b8 = &
                    ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        local_590.CurBlock = 0;
        local_590.CurBlockUsed = 0;
        local_590.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_590.Blocks.ArrayNum = 0;
        local_590.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_590);
        local_578.CurBlock = 0;
        local_578.CurBlockUsed = 0;
        local_578.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_578.Blocks.ArrayNum = 0;
        local_578.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_578);
        local_560.CurBlock = 0;
        local_560.CurBlockUsed = 0;
        local_560.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_560.Blocks.ArrayNum = 0;
        local_560.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_560);
        local_548.CurBlock = 0;
        local_548.CurBlockUsed = 0;
        local_548.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_548.Blocks.ArrayNum = 0;
        local_548.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_548);
        local_530._0_4_ = -1;
        local_530._4_4_ = -1;
        local_5e8._16_8_ = 0;
        local_5e8._8_8_ = pFVar61;
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                  ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_5e8,false);
        local_5e8._16_8_ =
             UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_5e8._8_8_);
        uVar71 = uStack_520;
        uVar26 = uStack_7fc;
        uVar25 = uStack_800;
        uVar80 = uStack_804;
        uVar79 = local_808;
        pcVar12 = local_818[1];
        uVar72 = CONCAT44(uStack_7f4,local_7f8);
        local_818[0] = Core::Private::Function::
                       TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
                       ::Call;
        local_818[1] = (code *)uStack_520;
        local_7f8 = (undefined4)local_508;
        uStack_7f4 = local_508._4_4_;
        plStack_7f0 = (longlong *)0x0;
        local_3b8._0_8_ = CONCAT44(uVar68,uVar67);
        local_3b8._16_8_ = 0;
        local_380 = (longlong *)0x0;
        local_378 = false;
        local_808 = 0x50a9df30;
        uStack_804 = 1;
        uStack_800 = 0x4332f180;
        uStack_7fc = 1;
        local_528 = 0;
        uStack_520 = pcVar12;
        local_518 = CONCAT44(uVar80,uVar79);
        uStack_510 = CONCAT44(uVar26,uVar25);
        local_508 = uVar72;
        uStack_500 = 0;
        local_378 = false;
        local_380 = (longlong *)0x0;
        local_3b8._16_8_ = 0;
        uStack_500 = 0;
        local_528 = 0;
        plStack_7f0 = (longlong *)0x0;
        uStack_7fc = 1;
        uStack_800 = 0x4332f180;
        uStack_804 = 1;
        local_808 = 0x50a9df30;
        local_818[1] = (code *)uVar71;
        local_818[0] = Core::Private::Function::
                       TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
                       ::Call;
        local_928.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_928.Points.ArrayNum = 0;
        local_928.Points.ArrayMax = 0;
        local_928.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_928.Segments.ArrayNum = 0;
        local_928.Segments.ArrayMax = 0;
        local_928.Polygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_928.Polygons.ArrayNum = 0;
        local_928.Polygons.ArrayMax = 0;
        pTVar34 = TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>::
                  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)><TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>_&>
                            (&local_6d8,
                             (TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                              *)local_818);
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_self_intersections
                  ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_5e8,&local_928,true,pTVar34,
                   (FQueryOptions *)local_3b8);
        if (local_818[0] != (code *)0x0) {
          plVar42 = (longlong *)&local_808;
          if (plStack_7f0 != (longlong *)0x0) {
            plVar42 = plStack_7f0;
          }
          (**(code **)(*plVar42 + 0x10))();
        }
        if (local_3b8._16_8_ != 0) {
          plVar42 = (longlong *)(local_3b8 + 0x20);
          if (local_380 != (longlong *)0x0) {
            plVar42 = local_380;
          }
          (**(code **)(*plVar42 + 0x10))();
        }
        uVar41 = (ulonglong)local_928.Segments.ArrayNum;
        local_a88 = local_928.Segments.ArrayNum;
        TVar50 = (TVector2<float>_u_0)
                 (uVar41 * 0x38 + (longlong)local_928.Segments.AllocatorInstance.Data);
        TVar63 = (TVector2<float>_u_0)local_928.Segments.AllocatorInstance;
        local_ab8 = TVar50;
        while( true ) {
          lVar62 = 0;
          if (local_928.Segments.ArrayNum != (int)uVar41) {
            local_abd = 0;
            `TCheckedPointerIterator<MeshIntersection::FSegmentIntersection,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_abd);
          }
          if (TVar63 == TVar50) break;
          pFVar51 = (pFVar61->Triangles).Blocks.AllocatorInstance.Data;
          pFVar8 = (pFVar61->Vertices).Blocks.AllocatorInstance.Data;
          uVar41 = (ulonglong)(*(uint *)TVar63 & 0x1ff);
          lVar55 = *(longlong *)(pFVar51 + (ulonglong)(*(uint *)TVar63 >> 9) * 8);
          local_990 = *(undefined8 *)(lVar55 + uVar41 * 0xc);
          local_988 = *(uint *)(lVar55 + 8 + uVar41 * 0xc);
          uVar71 = local_990;
          uVar41 = (ulonglong)(*(uint *)((longlong)TVar63 + 4) & 0x1ff);
          lVar55 = *(longlong *)(pFVar51 + (ulonglong)(*(uint *)((longlong)TVar63 + 4) >> 9) * 8);
          uVar72 = *(undefined8 *)(lVar55 + uVar41 * 0xc);
          auStack_984[2] = *(undefined4 *)(lVar55 + 8 + uVar41 * 0xc);
          auStack_984[0] = (uint)uVar72;
          auStack_984[1] = (uint)((ulonglong)uVar72 >> 0x20);
          pdVar1 = (double *)
                   (*(longlong *)(pFVar8 + (ulonglong)((uint)local_990 >> 9) * 8) +
                   (ulonglong)((uint)local_990 & 0x1ff) * 0x18);
          lVar55 = lVar62;
          do {
            uVar41 = (ulonglong)(auStack_984[lVar55] & 0x1ff);
            pdVar2 = (double *)
                     (*(longlong *)(pFVar8 + (ulonglong)(auStack_984[lVar55] >> 9) * 8) +
                     uVar41 * 0x18);
            dVar22 = *pdVar2 - *pdVar1;
            dVar16 = pdVar2[1] - pdVar1[1];
            dVar15 = *(double *)
                      (*(longlong *)(pFVar8 + (ulonglong)(auStack_984[lVar55] >> 9) * 8) + 0x10 +
                      uVar41 * 0x18) -
                     *(double *)
                      (*(longlong *)(pFVar8 + (ulonglong)((uint)local_990 >> 9) * 8) + 0x10 +
                      (ulonglong)((uint)local_990 & 0x1ff) * 0x18);
            if (dVar16 * dVar16 + dVar22 * dVar22 + dVar15 * dVar15 <
                (double)CONCAT44(uVar70,uVar69)) {
              lVar53 = 1;
              break;
            }
            lVar55 = lVar55 + 1;
            lVar53 = lVar62;
          } while (lVar55 < 3);
          iVar30 = (int)lVar53;
          local_990._4_4_ = (uint)((ulonglong)local_990 >> 0x20);
          pdVar1 = (double *)
                   (*(longlong *)(pFVar8 + (ulonglong)(local_990._4_4_ >> 9) * 8) +
                   (ulonglong)(local_990._4_4_ & 0x1ff) * 0x18);
          lVar55 = lVar62;
          do {
            uVar41 = (ulonglong)(auStack_984[lVar55] & 0x1ff);
            pdVar2 = (double *)
                     (*(longlong *)(pFVar8 + (ulonglong)(auStack_984[lVar55] >> 9) * 8) +
                     uVar41 * 0x18);
            dVar22 = *pdVar2 - *pdVar1;
            dVar16 = pdVar2[1] - pdVar1[1];
            dVar15 = *(double *)
                      (*(longlong *)(pFVar8 + (ulonglong)(auStack_984[lVar55] >> 9) * 8) + 0x10 +
                      uVar41 * 0x18) -
                     *(double *)
                      (*(longlong *)(pFVar8 + (ulonglong)(local_990._4_4_ >> 9) * 8) + 0x10 +
                      (ulonglong)(local_990._4_4_ & 0x1ff) * 0x18);
            if (dVar16 * dVar16 + dVar22 * dVar22 + dVar15 * dVar15 <
                (double)CONCAT44(uVar70,uVar69)) {
              iVar30 = iVar30 + 1;
              break;
            }
            lVar55 = lVar55 + 1;
          } while (lVar55 < 3);
          pdVar1 = (double *)
                   (*(longlong *)(pFVar8 + (ulonglong)(local_988 >> 9) * 8) +
                   (ulonglong)(local_988 & 0x1ff) * 0x18);
          local_a80 = (FScriptContainerElement *)*pdVar1;
          piStack_a78 = (int *)pdVar1[1];
          do {
            uVar41 = (ulonglong)(auStack_984[lVar62] & 0x1ff);
            pdVar1 = (double *)
                     (*(longlong *)(pFVar8 + (ulonglong)(auStack_984[lVar62] >> 9) * 8) +
                     uVar41 * 0x18);
            local_a70 = *(double *)
                         (*(longlong *)(pFVar8 + (ulonglong)(auStack_984[lVar62] >> 9) * 8) + 0x10 +
                         uVar41 * 0x18);
            dVar22 = *pdVar1 - (double)local_a80;
            dVar16 = pdVar1[1] - (double)piStack_a78;
            dVar15 = local_a70 -
                     *(double *)
                      (*(longlong *)(pFVar8 + (ulonglong)(local_988 >> 9) * 8) + 0x10 +
                      (ulonglong)(local_988 & 0x1ff) * 0x18);
            if (dVar16 * dVar16 + dVar22 * dVar22 + dVar15 * dVar15 <
                (double)CONCAT44(uVar70,uVar69)) {
              iVar30 = iVar30 + 1;
              break;
            }
            lVar62 = lVar62 + 1;
          } while (lVar62 < 3);
          local_990 = uVar71;
          if (iVar30 == 0) {
            bVar27 = true;
            uVar47 = 0;
            if ((int)uVar52 < (int)local_a58) {
              uVar47 = uVar46;
            }
            if ((uVar47 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar51 = local_a60.Data + uVar64;
            iVar30 = *(int *)(pFVar51 + 8);
            if (iVar30 == *(int *)(pFVar51 + 0xc)) {
              iVar30 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,(ForAnyElementType *)pFVar51,(int *)(pFVar51 + 0xc));
            }
                    /* WARNING: Load size is inaccurate */
            FVar54.Data = *pFVar51;
            lVar55 = 2;
            *(int *)(pFVar51 + 8) = iVar30 + 1;
            uVar47 = *(uint *)((longlong)TVar63 + 4);
            lVar62 = (longlong)iVar30;
            *(uint *)(FVar54.Data + lVar62 * 0x18) = *(uint *)TVar63;
            *(uint *)(FVar54.Data + lVar62 * 0x18 + 4) = uVar47;
            local_8c0 = local_a18;
            pTVar3 = (TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *)
                     (FVar54.Data + (lVar62 * 3 + 1) * 8);
            (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_8c8 = Core::Private::Function::
                        TFunctionRefCaller<UE::Geometry::<lambda_36_>,bool,UE::Geometry::FIndex2i_const_&>
                        ::Call;
            puVar57 = (uint *)((longlong)&local_990 + 4);
            pTVar3->ArrayNum = 0;
            pTVar3->ArrayMax = 0;
            local_8f0 = &local_8e8;
            local_8f8 = Core::Private::Function::
                        TFunctionRefCaller<`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l55::<lambda_2>,double,UE::Geometry::FIndex2i_const_&>
                        ::Call;
            do {
              uVar41 = (ulonglong)(puVar57[-1] & 0x1ff);
              lVar62 = *(longlong *)
                        ((pFVar61->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(puVar57[-1] >> 9) * 8);
              pdVar1 = (double *)(lVar62 + uVar41 * 0x18);
              local_960._s_0.X = *pdVar1;
              local_960._s_0.Y = pdVar1[1];
              local_960._s_0.Z = *(double *)(lVar62 + 0x10 + uVar41 * 0x18);
              local_8e8 = this;
              local_8e0 = local_960._s_0.X;
              dStack_8d8 = local_960._s_0.Y;
              local_8d0 = local_960._s_0.Z;
              UE::Geometry::TPointHashGrid3<UE::Geometry::FIndex2i,double>::FindPointsInBall
                        ((TPointHashGrid3<UE::Geometry::FIndex2i,double> *)local_658,
                         (TVector<double> *)&local_960._s_0,(double)CONCAT44(uVar70,uVar69),
                         (TFunctionRef<double___cdecl(UE::Geometry::FIndex2i_const_&)> *)&local_8f8,
                         pTVar3,(TFunctionRef<bool___cdecl(UE::Geometry::FIndex2i_const_&)> *)
                                &local_8c8);
              uVar41 = (ulonglong)(*puVar57 & 0x1ff);
              lVar62 = *(longlong *)
                        ((pFVar61->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar57 >> 9) * 8);
              pdVar1 = (double *)(lVar62 + uVar41 * 0x18);
              local_960._s_0.X = *pdVar1;
              local_960._s_0.Y = pdVar1[1];
              local_960._s_0.Z = *(double *)(lVar62 + 0x10 + uVar41 * 0x18);
              local_8e8 = this;
              local_8e0 = local_960._s_0.X;
              dStack_8d8 = local_960._s_0.Y;
              local_8d0 = local_960._s_0.Z;
              UE::Geometry::TPointHashGrid3<UE::Geometry::FIndex2i,double>::FindPointsInBall
                        ((TPointHashGrid3<UE::Geometry::FIndex2i,double> *)local_658,
                         (TVector<double> *)&local_960._s_0,(double)CONCAT44(uVar70,uVar69),
                         (TFunctionRef<double___cdecl(UE::Geometry::FIndex2i_const_&)> *)&local_8f8,
                         pTVar3,(TFunctionRef<bool___cdecl(UE::Geometry::FIndex2i_const_&)> *)
                                &local_8c8);
              uVar41 = (ulonglong)(puVar57[1] & 0x1ff);
              lVar62 = *(longlong *)
                        ((pFVar61->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(puVar57[1] >> 9) * 8);
              pdVar1 = (double *)(lVar62 + uVar41 * 0x18);
              local_960._s_0.X = *pdVar1;
              local_960._s_0.Y = pdVar1[1];
              local_960._s_0.Z = *(double *)(lVar62 + 0x10 + uVar41 * 0x18);
              local_8e8 = this;
              local_8e0 = local_960._s_0.X;
              dStack_8d8 = local_960._s_0.Y;
              local_8d0 = local_960._s_0.Z;
              UE::Geometry::TPointHashGrid3<UE::Geometry::FIndex2i,double>::FindPointsInBall
                        ((TPointHashGrid3<UE::Geometry::FIndex2i,double> *)local_658,
                         (TVector<double> *)&local_960._s_0,(double)CONCAT44(uVar70,uVar69),
                         (TFunctionRef<double___cdecl(UE::Geometry::FIndex2i_const_&)> *)&local_8f8,
                         pTVar3,(TFunctionRef<bool___cdecl(UE::Geometry::FIndex2i_const_&)> *)
                                &local_8c8);
              puVar57 = puVar57 + 3;
              lVar55 = lVar55 + -1;
              TVar50 = local_ab8;
              uVar64 = local_9f8;
            } while (lVar55 != 0);
          }
          uVar41 = (ulonglong)local_a88;
          TVar63._s_0 = TVar63._s_0 + 0x38;
        }
        if (local_928.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_928.Polygons.AllocatorInstance.Data);
        }
        if ((TVector2<float>_u_0)local_928.Segments.AllocatorInstance.Data !=
            (TVector2<float>_u_0)0x0) {
          FMemory::Free(local_928.Segments.AllocatorInstance.Data);
        }
        if (local_928.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_928.Points.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<int,512>::Empty(&local_548,0);
        if (local_548.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_560,0);
        if (local_560.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_560.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_578,0);
        if (local_578.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<int,512>::Empty(&local_590,0);
        if (local_590.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_590.Blocks.AllocatorInstance.Data);
        }
        uVar41 = local_ab0;
        if ((code *)local_5e8._32_8_ != (code *)0x0) {
          pppuVar43 = &local_5b8;
          if (local_5a0 != (undefined ***)0x0) {
            pppuVar43 = local_5a0;
          }
          (*(code *)(*pppuVar43)[2])();
          uVar41 = local_ab0;
        }
      }
      local_ab0 = uVar41 + 1;
      local_9f8 = uVar64 + 0x10;
      uVar52 = uVar52 + 1;
    } while ((longlong)local_ab0 < (longlong)param_1);
    if (!bVar27) goto LAB_14c9c1069;
    uVar52 = 0;
    lVar62 = 0;
    do {
      uVar47 = 0;
      if ((int)uVar52 < local_9e8.ArrayNum) {
        uVar47 = ~uVar52 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar52 = uVar52 + 1;
      local_9e8.AllocatorInstance.Data[lVar62] = (FScriptContainerElement)0x1;
      lVar62 = lVar62 + 1;
    } while (lVar62 < param_1);
    local_ad0 = 0;
    local_a00 = (FScriptContainerElement *)0x0;
    local_ab8 = (TVector2<float>_u_0)0x0;
    do {
      pFVar51 = local_a00;
      TVar50 = local_ab8;
      uVar47 = ~local_ad0 >> 0x1f;
      uVar52 = 0;
      if ((int)local_ad0 < (this->CellMeshes).Array.ArrayNum) {
        uVar52 = uVar47;
      }
      local_a88 = uVar47;
      if ((uVar52 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar62 = *(longlong *)
                ((this->CellMeshes).Array.AllocatorInstance.Data + (longlong)pFVar51 * 8);
      lVar55 = 0;
      if (*(longlong *)(lVar62 + 0x208) != 0) {
        lVar55 = *(longlong *)(lVar62 + 0x208);
      }
      pTVar35 = TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                ::FindChecked((TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                               *)(lVar55 + 0x130),local_9f0);
      local_878.Value = (FIndex2i *)pTVar35->Ptr;
      local_8b0 = &local_878.Value;
      local_9b8 = &local_8b8;
      uVar52 = 0;
      if ((int)local_ad0 < (int)local_a58) {
        uVar52 = uVar47;
      }
      local_9c0 = lVar62;
      local_8b8 = lVar62;
      if ((uVar52 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_998 = (TDynamicMeshScalarTriangleAttribute<int> *)local_a60.Data;
      uVar41 = (ulonglong)*(int *)(local_a60.Data + (longlong)((longlong)TVar50 + 8));
      FVar60 = *(FName *)(local_a60.Data + (longlong)TVar50);
      local_ab0 = CONCAT44(local_ab0._4_4_,
                           *(int *)(local_a60.Data + (longlong)((longlong)TVar50 + 8)));
      local_a20 = (FName)((longlong)FVar60 + uVar41 * 0x18);
      while( true ) {
        FVar23 = local_a20;
        if (*(int *)(&local_998->field_0x8 + (longlong)TVar50) != (int)uVar41) {
          local_abc = 0;
          `TCheckedPointerIterator<`UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l32::FUpdate,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_abc);
        }
        if (FVar60 == FVar23) break;
        iVar30 = *(int *)FVar60;
        pTVar36 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::
                  <lambda_4>::operator()
                            (&local_9c0,&local_138,*(int *)((longlong)FVar60 + 4),
                             (double)CONCAT44(uVar77,uVar76));
        pTVar37 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::
                  <lambda_4>::operator()
                            (&local_9c0,&local_188,iVar30,(double)CONCAT44(uVar77,uVar76));
        local_238 = CONCAT44(uVar70,uVar69);
        local_22c = 0;
        local_224 = 0;
        local_230 = 0;
        local_2c8._s_0.X = pTVar37->V[0].field0_0x0._s_0.X;
        local_2c8._s_0.Y = pTVar37->V[0].field0_0x0._s_0.Y;
        local_2c8._s_0.Z = pTVar37->V[0].field0_0x0._s_0.Z;
        dStack_2b0 = pTVar37->V[1].field0_0x0._s_0.X;
        local_2a8 = pTVar37->V[1].field0_0x0._s_0.Y;
        dStack_2a0 = pTVar37->V[1].field0_0x0._s_0.Z;
        local_298 = pTVar37->V[2].field0_0x0._s_0.X;
        dStack_290 = pTVar37->V[2].field0_0x0._s_0.Y;
        local_288 = pTVar37->V[2].field0_0x0._s_0.Z;
        local_280 = pTVar36->V[0].field0_0x0._s_0.X;
        dStack_278 = pTVar36->V[0].field0_0x0._s_0.Y;
        local_270 = pTVar36->V[0].field0_0x0._s_0.Z;
        dStack_268 = pTVar36->V[1].field0_0x0._s_0.X;
        local_260 = pTVar36->V[1].field0_0x0._s_0.Y;
        dStack_258 = pTVar36->V[1].field0_0x0._s_0.Z;
        local_250 = pTVar36->V[2].field0_0x0._s_0.X;
        dStack_248 = pTVar36->V[2].field0_0x0._s_0.Y;
        local_240 = pTVar36->V[2].field0_0x0._s_0.Z;
        bVar27 = UE::Geometry::TIntrTriangle3Triangle3<double>::Find
                           ((TIntrTriangle3Triangle3<double> *)&local_2c8._s_0);
        if (bVar27) {
          iVar30 = *(int *)FVar60;
          pTVar36 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::
                    <lambda_4>::operator()
                              (&local_9c0,&local_368,*(int *)((longlong)FVar60 + 4),
                               (double)CONCAT44(uVar75,uVar74));
          pTVar37 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::
                    <lambda_4>::operator()
                              (&local_9c0,&local_318,iVar30,(double)CONCAT44(uVar75,uVar74));
          local_468 = CONCAT44(uVar70,uVar69);
          local_45c = 0;
          local_454 = 0;
          local_460 = 0;
          local_4f8._s_0.X = pTVar37->V[0].field0_0x0._s_0.X;
          local_4f8._s_0.Y = pTVar37->V[0].field0_0x0._s_0.Y;
          local_4f8._s_0.Z = pTVar37->V[0].field0_0x0._s_0.Z;
          dStack_4e0 = pTVar37->V[1].field0_0x0._s_0.X;
          local_4d8 = pTVar37->V[1].field0_0x0._s_0.Y;
          dStack_4d0 = pTVar37->V[1].field0_0x0._s_0.Z;
          local_4c8 = pTVar37->V[2].field0_0x0._s_0.X;
          dStack_4c0 = pTVar37->V[2].field0_0x0._s_0.Y;
          local_4b8 = pTVar37->V[2].field0_0x0._s_0.Z;
          local_4b0 = pTVar36->V[0].field0_0x0._s_0.X;
          dStack_4a8 = pTVar36->V[0].field0_0x0._s_0.Y;
          local_4a0 = pTVar36->V[0].field0_0x0._s_0.Z;
          dStack_498 = pTVar36->V[1].field0_0x0._s_0.X;
          local_490 = pTVar36->V[1].field0_0x0._s_0.Y;
          dStack_488 = pTVar36->V[1].field0_0x0._s_0.Z;
          local_480 = pTVar36->V[2].field0_0x0._s_0.X;
          dStack_478 = pTVar36->V[2].field0_0x0._s_0.Y;
          local_470 = pTVar36->V[2].field0_0x0._s_0.Z;
          bVar27 = UE::Geometry::TIntrTriangle3Triangle3<double>::Find
                             ((TIntrTriangle3Triangle3<double> *)&local_4f8._s_0);
          uVar67 = uVar76;
          uVar68 = uVar77;
          uVar79 = uVar74;
          uVar80 = uVar75;
          if (bVar27) {
            uVar67 = uVar74;
            uVar68 = uVar75;
            uVar79 = 0;
            uVar80 = 0;
          }
          iVar30 = *(int *)FVar60;
          dVar22 = (double)CONCAT44(uVar68,uVar67);
          dVar15 = (dVar22 + (double)CONCAT44(uVar80,uVar79)) * (double)CONCAT44(uVar75,uVar74);
          pTVar36 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::
                    <lambda_4>::operator()
                              (&local_9c0,&local_368,*(int *)((longlong)FVar60 + 4),dVar15);
          pTVar37 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::
                    <lambda_4>::operator()(&local_9c0,&local_318,iVar30,dVar15);
          local_468 = CONCAT44(uVar70,uVar69);
          local_45c = 0;
          local_454 = 0;
          local_460 = 0;
          local_4f8._s_0.X = pTVar37->V[0].field0_0x0._s_0.X;
          local_4f8._s_0.Y = pTVar37->V[0].field0_0x0._s_0.Y;
          local_4f8._s_0.Z = pTVar37->V[0].field0_0x0._s_0.Z;
          dStack_4e0 = pTVar37->V[1].field0_0x0._s_0.X;
          local_4d8 = pTVar37->V[1].field0_0x0._s_0.Y;
          dStack_4d0 = pTVar37->V[1].field0_0x0._s_0.Z;
          local_4c8 = pTVar37->V[2].field0_0x0._s_0.X;
          dStack_4c0 = pTVar37->V[2].field0_0x0._s_0.Y;
          local_4b8 = pTVar37->V[2].field0_0x0._s_0.Z;
          local_4b0 = pTVar36->V[0].field0_0x0._s_0.X;
          dStack_4a8 = pTVar36->V[0].field0_0x0._s_0.Y;
          local_4a0 = pTVar36->V[0].field0_0x0._s_0.Z;
          dStack_498 = pTVar36->V[1].field0_0x0._s_0.X;
          local_490 = pTVar36->V[1].field0_0x0._s_0.Y;
          dStack_488 = pTVar36->V[1].field0_0x0._s_0.Z;
          local_480 = pTVar36->V[2].field0_0x0._s_0.X;
          dStack_478 = pTVar36->V[2].field0_0x0._s_0.Y;
          local_470 = pTVar36->V[2].field0_0x0._s_0.Z;
          bVar27 = UE::Geometry::TIntrTriangle3Triangle3<double>::Find
                             ((TIntrTriangle3Triangle3<double> *)&local_4f8._s_0);
          if (bVar27) {
            dVar22 = dVar15;
            dVar15 = (double)CONCAT44(uVar80,uVar79);
          }
          iVar30 = *(int *)FVar60;
          dVar16 = (dVar22 + dVar15) * (double)CONCAT44(uVar75,uVar74);
          pTVar36 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::
                    <lambda_4>::operator()
                              (&local_9c0,&local_368,*(int *)((longlong)FVar60 + 4),dVar16);
          pTVar37 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::
                    <lambda_4>::operator()(&local_9c0,&local_318,iVar30,dVar16);
          local_468 = CONCAT44(uVar70,uVar69);
          local_45c = 0;
          local_454 = 0;
          local_460 = 0;
          local_4f8._s_0.X = pTVar37->V[0].field0_0x0._s_0.X;
          local_4f8._s_0.Y = pTVar37->V[0].field0_0x0._s_0.Y;
          local_4f8._s_0.Z = pTVar37->V[0].field0_0x0._s_0.Z;
          dStack_4e0 = pTVar37->V[1].field0_0x0._s_0.X;
          local_4d8 = pTVar37->V[1].field0_0x0._s_0.Y;
          dStack_4d0 = pTVar37->V[1].field0_0x0._s_0.Z;
          local_4c8 = pTVar37->V[2].field0_0x0._s_0.X;
          dStack_4c0 = pTVar37->V[2].field0_0x0._s_0.Y;
          local_4b8 = pTVar37->V[2].field0_0x0._s_0.Z;
          local_4b0 = pTVar36->V[0].field0_0x0._s_0.X;
          dStack_4a8 = pTVar36->V[0].field0_0x0._s_0.Y;
          local_4a0 = pTVar36->V[0].field0_0x0._s_0.Z;
          dStack_498 = pTVar36->V[1].field0_0x0._s_0.X;
          local_490 = pTVar36->V[1].field0_0x0._s_0.Y;
          dStack_488 = pTVar36->V[1].field0_0x0._s_0.Z;
          local_480 = pTVar36->V[2].field0_0x0._s_0.X;
          dStack_478 = pTVar36->V[2].field0_0x0._s_0.Y;
          local_470 = pTVar36->V[2].field0_0x0._s_0.Z;
          bVar27 = UE::Geometry::TIntrTriangle3Triangle3<double>::Find
                             ((TIntrTriangle3Triangle3<double> *)&local_4f8._s_0);
          if (bVar27) {
            dVar22 = dVar16;
            dVar16 = dVar15;
          }
          iVar30 = *(int *)FVar60;
          dVar22 = (dVar22 + dVar16) * (double)CONCAT44(uVar75,uVar74);
          pTVar36 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::
                    <lambda_4>::operator()
                              (&local_9c0,&local_368,*(int *)((longlong)FVar60 + 4),dVar22);
          pTVar37 = `UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise'::__l62::
                    <lambda_4>::operator()(&local_9c0,&local_318,iVar30,dVar22);
          local_468 = CONCAT44(uVar70,uVar69);
          local_45c = 0;
          local_454 = 0;
          local_460 = 0;
          local_4f8._s_0.X = pTVar37->V[0].field0_0x0._s_0.X;
          local_4f8._s_0.Y = pTVar37->V[0].field0_0x0._s_0.Y;
          local_4f8._s_0.Z = pTVar37->V[0].field0_0x0._s_0.Z;
          dStack_4e0 = pTVar37->V[1].field0_0x0._s_0.X;
          local_4d8 = pTVar37->V[1].field0_0x0._s_0.Y;
          dStack_4d0 = pTVar37->V[1].field0_0x0._s_0.Z;
          local_4c8 = pTVar37->V[2].field0_0x0._s_0.X;
          dStack_4c0 = pTVar37->V[2].field0_0x0._s_0.Y;
          local_4b8 = pTVar37->V[2].field0_0x0._s_0.Z;
          local_4b0 = pTVar36->V[0].field0_0x0._s_0.X;
          dStack_4a8 = pTVar36->V[0].field0_0x0._s_0.Y;
          local_4a0 = pTVar36->V[0].field0_0x0._s_0.Z;
          dStack_498 = pTVar36->V[1].field0_0x0._s_0.X;
          local_490 = pTVar36->V[1].field0_0x0._s_0.Y;
          dStack_488 = pTVar36->V[1].field0_0x0._s_0.Z;
          local_480 = pTVar36->V[2].field0_0x0._s_0.X;
          dStack_478 = pTVar36->V[2].field0_0x0._s_0.Y;
          local_470 = pTVar36->V[2].field0_0x0._s_0.Z;
          bVar27 = UE::Geometry::TIntrTriangle3Triangle3<double>::Find
                             ((TIntrTriangle3Triangle3<double> *)&local_4f8._s_0);
          if (!bVar27) {
            dVar16 = dVar22;
          }
          uVar52 = 0;
          if ((int)local_ad0 < local_9e8.ArrayNum) {
            uVar52 = local_a88;
          }
          if ((uVar52 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar51[local_9e8.AllocatorInstance.Data] = (FScriptContainerElement)0x0;
          uVar41 = (ulonglong)*(int *)((longlong)FVar60 + 0x10);
          pFVar65 = *(FIndex2i_u_0 **)((longlong)FVar60 + 8);
          local_9f8 = CONCAT44(local_9f8._4_4_,*(int *)((longlong)FVar60 + 0x10));
          local_9a0 = pFVar65 + uVar41;
          while( true ) {
            pFVar24 = local_9a0;
            if (*(int *)((longlong)FVar60 + 0x10) != (int)uVar41) {
              local_abb = 0;
              `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_abb);
            }
            if (pFVar65 == pFVar24) break;
            local_a30 = (FIndex2i_u_0)*(FIndex2i_u_0 *)&pFVar65->_s_0;
            uVar47 = local_a30._s_0.A;
            uVar52 = 0;
            if ((int)uVar47 < (this->CellMeshes).Array.ArrayNum) {
              uVar52 = ~uVar47 >> 0x1f;
            }
            if ((uVar52 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar41 = (ulonglong)(local_a30._s_0.B & 0x1ff);
            uVar64 = (ulonglong)((uint)local_a30._s_0.B >> 9);
            lVar55 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          ((this->CellMeshes).Array.AllocatorInstance.Data +
                          (longlong)(int)uVar47 * 8) + 0x10) + uVar64 * 8);
            pdVar1 = (double *)(lVar55 + uVar41 * 0x18);
            dVar15 = *pdVar1;
            dVar14 = pdVar1[1];
            dVar22 = *(double *)(lVar55 + 0x10 + uVar41 * 0x18);
            uVar52 = local_a30._s_0.A;
            if (uVar52 == local_ad0) {
              uVar52 = local_a30._s_0.B * 3;
              dVar17 = __real_3ff0000000000000 - dVar16;
                    /* WARNING: Load size is inaccurate */
              FVar10.field0_0x0 = *(FIndex2i_u_0 *)(*local_8b0)[4].field0_0x0.AB;
              lVar55 = *(longlong *)(*(longlong *)(local_8b8 + 0x10) + uVar64 * 8);
              pdVar1 = (double *)(lVar55 + uVar41 * 0x18);
              local_a70 = *(double *)(lVar55 + 0x10 + uVar41 * 0x18);
              dVar21 = pdVar1[1] * dVar16 +
                       *(double *)
                        (*(longlong *)
                          ((longlong)FVar10.field0_0x0 + (ulonglong)(uVar52 + 1 >> 9) * 8) +
                        (ulonglong)(uVar52 + 1 & 0x1ff) * 8) * dVar17;
              dVar19 = dVar17 * *(double *)
                                 (*(longlong *)
                                   ((longlong)FVar10.field0_0x0 + (ulonglong)(uVar52 >> 9) * 8) +
                                 (ulonglong)(uVar52 & 0x1ff) * 8) + *pdVar1 * dVar16;
              dVar17 = dVar17 * *(double *)
                                 (*(longlong *)
                                   ((longlong)FVar10.field0_0x0 + (ulonglong)(uVar52 + 2 >> 9) * 8)
                                 + (ulonglong)(uVar52 + 2 & 0x1ff) * 8) + local_a70 * dVar16;
              sVar29 = _dclass(SUB84(dVar19,0));
              if (((sVar29 < 1) && (sVar29 = _dclass(SUB84(dVar21,0)), sVar29 < 1)) &&
                 (sVar29 = _dclass(SUB84(dVar17,0)), sVar29 < 1)) {
                lVar55 = *(longlong *)(*(longlong *)(lVar62 + 0x10) + uVar64 * 8);
                *(double *)(lVar55 + uVar41 * 0x18) = dVar19;
                *(double *)(lVar55 + 8 + uVar41 * 0x18) = dVar21;
                *(double *)(lVar55 + 0x10 + uVar41 * 0x18) = dVar17;
                if (*(char *)(lVar62 + 0x21c) != '\0') {
                  this_00 = (atomic<unsigned_char> *)(lVar62 + 0x21d);
                  LOCK();
                  FVar4.State = *this_00;
                  if (FVar4.State == (atomic<unsigned_char>)0x0) {
                    *this_00 = (atomic<unsigned_char>)0x1;
                  }
                  UNLOCK();
                  if (FVar4.State != (atomic<unsigned_char>)0x0) {
                    FMutex::LockSlow((FMutex *)this_00);
                  }
                  *(int *)(lVar62 + 0x220) = *(int *)(lVar62 + 0x220) + 1;
                  LOCK();
                  aVar5 = *this_00;
                  *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
                  UNLOCK();
                  if (((byte)aVar5 & 2) != 0) {
                    FMutex::WakeWaitingThread((FMutex *)this_00);
                  }
                }
              }
            }
            else {
              uVar47 = 0;
              if ((int)uVar52 < local_9e8.ArrayNum) {
                uVar47 = ~uVar52 >> 0x1f;
              }
              local_a70 = dVar22;
              if ((uVar47 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_9e8.AllocatorInstance.Data[(int)uVar52] = (FScriptContainerElement)0x0;
              lVar55 = (longlong)local_a30._s_0.A;
              uVar52 = 0;
              if (local_a30._s_0.A < (this->CellMeshes).Array.ArrayNum) {
                uVar52 = (uint)~local_a30._s_0.A >> 0x1f;
              }
              if ((uVar52 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar55 = *(longlong *)((this->CellMeshes).Array.AllocatorInstance.Data + lVar55 * 8);
              lVar53 = 0;
              if (*(longlong *)(lVar55 + 0x208) != 0) {
                lVar53 = *(longlong *)(lVar55 + 0x208);
              }
              pTVar38 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                *)(lVar53 + 0x130),local_9f0);
              if ((pTVar38 ==
                   (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                    *)0x0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x288,L""), bVar27)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar67 = local_a30._s_0.B;
              dVar17 = (double)CONCAT44(uVar77,uVar76) - dVar16;
              lVar53 = *(longlong *)(*(longlong *)&pTVar38->field_0x8 + 0x20);
              uVar52 = local_a30._s_0.B * 3;
              dVar21 = dVar14 * dVar16 +
                       *(double *)
                        (*(longlong *)(lVar53 + (ulonglong)(uVar52 + 1 >> 9) * 8) +
                        (ulonglong)(uVar52 + 1 & 0x1ff) * 8) * dVar17;
              dVar19 = dVar17 * *(double *)
                                 (*(longlong *)(lVar53 + (ulonglong)(uVar52 >> 9) * 8) +
                                 (ulonglong)(uVar52 & 0x1ff) * 8) + dVar15 * dVar16;
              dVar17 = dVar17 * *(double *)
                                 (*(longlong *)(lVar53 + (ulonglong)(uVar52 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar52 + 2 & 0x1ff) * 8) + dVar22 * dVar16;
              sVar29 = _dclass(SUB84(dVar19,0));
              if (((sVar29 < 1) && (sVar29 = _dclass(SUB84(dVar21,0)), sVar29 < 1)) &&
                 (sVar29 = _dclass(SUB84(dVar17,0)), sVar29 < 1)) {
                uVar41 = (ulonglong)(uVar67 & 0x1ff);
                lVar53 = *(longlong *)
                          (*(longlong *)(lVar55 + 0x10) + (ulonglong)((uint)uVar67 >> 9) * 8);
                *(double *)(lVar53 + uVar41 * 0x18) = dVar19;
                *(double *)(lVar53 + 8 + uVar41 * 0x18) = dVar21;
                *(double *)(lVar53 + 0x10 + uVar41 * 0x18) = dVar17;
                UE::Geometry::FDynamicMesh3::FChangeStamp::IncrementIfEnabled
                          ((FChangeStamp *)(lVar55 + 0x21c));
              }
            }
            dVar22 = FGenericPlatformMath::Fmod(dVar22 / local_600.CellSize,dVar18);
            if (dVar22 < 0.0) {
              dVar22 = dVar22 + dVar18;
            }
            dVar14 = FGenericPlatformMath::Fmod(dVar14 / local_600.CellSize,dVar18);
            if (dVar14 < 0.0) {
              dVar14 = dVar14 + dVar18;
            }
            dVar15 = FGenericPlatformMath::Fmod(dVar15 / local_600.CellSize,dVar18);
            if (dVar15 < 0.0) {
              dVar15 = dVar15 + dVar18;
            }
            local_9b0._s_0.X = (int)(longlong)dVar15;
            local_9b0._s_0.Y = (int)(longlong)dVar14;
            local_9b0._s_0.Z = (int)(longlong)dVar22;
            dVar22 = FGenericPlatformMath::Fmod(dVar17 / local_600.CellSize,dVar18);
            if (dVar22 < 0.0) {
              dVar22 = dVar22 + dVar18;
            }
            dVar15 = FGenericPlatformMath::Fmod(dVar21 / local_600.CellSize,dVar18);
            if (dVar15 < 0.0) {
              dVar15 = dVar15 + dVar18;
            }
            dVar14 = FGenericPlatformMath::Fmod(dVar19 / local_600.CellSize,dVar18);
            if (dVar14 < 0.0) {
              dVar14 = dVar14 + dVar18;
            }
            local_948 = (int)(longlong)dVar14;
            local_944 = (int)(longlong)dVar15;
            local_940 = (int)(longlong)dVar22;
            if (((local_9b0._s_0.X != local_948) || (local_9b0._s_0.Y != local_944)) ||
               (local_9b0._s_0.Z != local_940)) {
              LOCK();
              bVar27 = local_608[0].State == (atomic<unsigned_char>)0x0;
              if (bVar27) {
                local_608[0].State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar27) {
                FMutex::LockSlow(local_608);
              }
              iVar30 = TMultiMap<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>_>
                       ::RemoveSingle((TMultiMap<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>_>
                                       *)local_658,(FVector3i *)&local_9b0._s_0,
                                      (FIndex2i *)&local_a30._s_0);
              LOCK();
              aVar5 = local_608[0].State - 1;
              UNLOCK();
              bVar13 = (byte)local_608[0].State & 2;
              local_608[0].State = aVar5;
              if (bVar13 != 0) {
                FMutex::WakeWaitingThread(local_608);
              }
              if ((iVar30 < 1) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("bWasAtOldPos",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\PointHashGrid3.h"
                                      ,0xb2,L""), bVar27)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              LOCK();
              bVar27 = local_608[0].State == (atomic<unsigned_char>)0x0;
              if (bVar27) {
                local_608[0].State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar27) {
                FMutex::LockSlow(local_608);
              }
              local_7e8 = &local_948;
              local_7e0 = &local_a30;
              TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,UE::Geometry::FIndex2i_const_&>_>
                        ((TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
                          *)local_658,&local_878,(bool *)&local_7e8);
              LOCK();
              aVar5 = local_608[0].State - 1;
              UNLOCK();
              bVar13 = (byte)local_608[0].State & 2;
              local_608[0].State = aVar5;
              if (bVar13 != 0) {
                FMutex::WakeWaitingThread(local_608);
              }
            }
            uVar76 = SUB84(__real_3ff0000000000000,0);
            uVar77 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            pFVar65 = pFVar65 + 1;
            uVar41 = local_9f8 & 0xffffffff;
          }
          uVar69 = (undefined4)__real_3e45798ee2308c3a;
          uVar70 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
          uVar74 = (undefined4)__real_3fe0000000000000;
          uVar75 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
          pFVar51 = local_a00;
        }
        FVar60 = (FName)((longlong)FVar60 + 0x18);
        uVar41 = local_ab0 & 0xffffffff;
        TVar50 = local_ab8;
      }
      uVar41 = (ulonglong)param_1;
      local_ad0 = local_ad0 + 1;
      local_a00 = pFVar51 + 1;
      local_ab8 = TVar50._s_0 + 0x10;
    } while ((longlong)local_a00 < (longlong)uVar41);
    DestructItems<TArray<_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise_::__l32::FUpdate,TSizedDefaultAllocator<32>_>,int>
              ((TArray<_private:_void___cdecl_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise(int,FPlanarCells_const_&,UE::Geometry::TAxisAlignedBox3<double>_const_&,bool,double)_::_32_::FUpdate,TSizedDefaultAllocator<32>_>
                *)local_a60.Data,(int)local_a58);
    if ((TDynamicMeshScalarTriangleAttribute<int> *)local_a60.Data !=
        (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      FMemory::Free(local_a60.Data);
    }
    uVar67 = (undefined4)__real_7fefffffffffffff;
    uVar68 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    local_a68 = local_a68 + 1;
  } while ((int)local_a68 < 10);
  uVar52 = 0;
  lVar62 = 0;
  do {
    uVar47 = 0;
    if ((int)uVar52 < (this->CellMeshes).Array.ArrayNum) {
      uVar47 = ~uVar52 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar27)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    FVar60 = local_9f0;
    FVar48 = local_9f0.ComparisonIndex.Value;
    local_a20 = local_9f0;
    pFVar61 = *(FDynamicMesh3 **)((this->CellMeshes).Array.AllocatorInstance.Data + lVar62 * 8);
    pFVar7 = (pFVar61->AttributeSet).Ptr;
    pFVar44 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar44 = pFVar7;
    }
    uVar47 = ::GetTypeHash(FVar48);
    if (*(int *)&(pFVar44->GenericAttributes).field_0x8 !=
        *(int *)&(pFVar44->GenericAttributes).field_0x34) {
      puVar11 = *(undefined1 **)&(pFVar44->GenericAttributes).field_0x40;
      puVar45 = &(pFVar44->GenericAttributes).field_0x38;
      if (puVar11 != (undefined1 *)0x0) {
        puVar45 = puVar11;
      }
      iVar30 = *(int *)(puVar45 +
                       (ulonglong)
                       (*(int *)&(pFVar44->GenericAttributes).field_0x48 - 1U &
                       FVar60.Number + uVar47) * 4);
      if (iVar30 != -1) {
        do {
          if (*(FName *)(*(longlong *)&pFVar44->GenericAttributes + (longlong)iVar30 * 0x18) ==
              FVar60) {
            pTVar35 = TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                      ::FindChecked((TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                                     *)&pFVar44->GenericAttributes,FVar60);
            UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::
            UnregisterExternalAttribute
                      ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)pFVar44,pTVar35->Ptr
                      );
            local_858 = FVar60;
            if (*(int *)&(pFVar44->GenericAttributes).field_0x8 !=
                *(int *)&(pFVar44->GenericAttributes).field_0x34) {
              uVar47 = ::GetTypeHash(FVar48);
              TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                   *)&pFVar44->GenericAttributes,uVar47 + local_a20.Number,
                                  &local_858);
            }
            break;
          }
          iVar30 = *(int *)(*(longlong *)&pFVar44->GenericAttributes + 0x10 +
                           (longlong)iVar30 * 0x18);
        } while (iVar30 != -1);
      }
    }
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_840,&pFVar61->VertexRefCounts,0,
               (pFVar61->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar61->VertexRefCounts).RefCounts.CurBlockUsed);
    iVar30 = (pFVar61->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar61->VertexRefCounts).RefCounts.CurBlockUsed;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_768,&pFVar61->VertexRefCounts,iVar30,iVar30);
    uVar67 = local_768._8_4_;
    iVar30 = local_840.Index;
    while (iVar30 != uVar67) {
      local_718 = AugmentedDynamicMesh::UnsetVertexColor.field0_0x0;
      AugmentedDynamicMesh::SetVertexColor
                (pFVar61,local_840.Index,(TVector4<float> *)&local_718._s_0);
      UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_840);
      iVar30 = local_840.Index;
    }
    uVar52 = uVar52 + 1;
    lVar62 = lVar62 + 1;
  } while (lVar62 < param_1);
LAB_14c9c126b:
  pFVar59 = local_a28;
  local_a98.Data = (FScriptContainerElement *)0x0;
  local_a8c = 0;
  local_9c8 = 0x7f7fffff;
  uVar52 = (local_a28->Planes).ArrayNum;
  uVar41 = (ulonglong)uVar52;
  uStack_9c4 = 0x7f7fffff;
  if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar41);
  }
  local_a90 = 0;
  if ((uVar52 != 0) &&
     (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar52,&local_a98,0,&local_a8c), 0 < (int)uVar52)) {
    do {
      if ((local_a98.Data <= (FScriptContainerElement *)&local_9c8) &&
         (((FScriptContainerElement *)&local_9c8 < local_a98.Data + (longlong)local_a8c * 8 &&
          (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar27)))) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (local_a90 == local_a8c) {
        local_a90 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_a98,&local_a8c);
      }
      iVar30 = local_a90 + 1;
      *(ulonglong *)(local_a98.Data + (longlong)local_a90 * 8) = CONCAT44(uStack_9c4,local_9c8);
      uVar41 = uVar41 - 1;
      local_a90 = iVar30;
    } while (uVar41 != 0);
  }
  uVar52 = (pFVar59->Planes).ArrayNum;
  local_aa8.Data = (FScriptContainerElement *)0x0;
  local_aa0 = 0;
  if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar52);
  }
  if (0 < (int)uVar52) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar52,&local_aa8,0,(int *)((longlong)&local_aa0 + 4));
  }
  uVar52 = 0;
  if (0 < (pFVar59->Planes).ArrayNum) {
    do {
      uVar47 = 0;
      if ((int)uVar52 < (pFVar59->Planes).ArrayNum) {
        uVar47 = ~uVar52 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar39 = PlanarCut::`anonymous_namespace'::AxisAlignedFrame
                          (&local_698,
                           (TPlane<double> *)
                           ((pFVar59->Planes).AllocatorInstance.Data + (longlong)(int)uVar52 * 0x20)
                          );
      if (((local_aa8.Data <= pTVar39) &&
          (pTVar39 < (TFrame3<double> *)(local_aa8.Data + (longlong)local_aa0._4_4_ * 0x38))) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar30 = (int)local_aa0;
      if ((int)local_aa0 == local_aa0._4_4_) {
        iVar30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&local_aa8,(int *)((longlong)&local_aa0 + 4));
      }
      uVar52 = uVar52 + 1;
      local_aa0 = CONCAT44(local_aa0._4_4_,iVar30 + 1);
      dVar18 = (pTVar39->Origin).field0_0x0._s_0.Y;
      lVar62 = (longlong)iVar30 * 0x38;
      *(double *)&local_aa8.Data[lVar62].field_0x0 = (pTVar39->Origin).field0_0x0._s_0.X;
      *(double *)(local_aa8.Data + lVar62 + 8) = dVar18;
      dVar18 = (pTVar39->Rotation).field0_0x0._s_0.X;
      *(double *)(local_aa8.Data + lVar62 + 0x10) = (pTVar39->Origin).field0_0x0._s_0.Z;
      *(double *)(local_aa8.Data + lVar62 + 0x10 + 8) = dVar18;
      dVar18 = (pTVar39->Rotation).field0_0x0._s_0.Z;
      *(double *)(local_aa8.Data + lVar62 + 0x20) = (pTVar39->Rotation).field0_0x0._s_0.Y;
      *(double *)(local_aa8.Data + lVar62 + 0x20 + 8) = dVar18;
      *(double *)(local_aa8.Data + lVar62 + 0x30) = (pTVar39->Rotation).field0_0x0._s_0.W;
    } while ((int)uVar52 < (pFVar59->Planes).ArrayNum);
  }
  pFVar51 = (this->CellMeshes).Array.AllocatorInstance.Data;
  piStack_a78 = &(this->CellMeshes).Array.ArrayNum;
  iVar30 = (this->CellMeshes).Array.ArrayNum;
  local_a70 = (double)CONCAT44(local_a70._4_4_,iVar30);
  local_a20 = (FName)(pFVar51 + (longlong)iVar30 * 8);
  local_8a8 = pFVar51;
  piStack_8a0 = piStack_a78;
  local_898 = local_a70;
  local_a80 = pFVar51;
  while( true ) {
    FVar60 = local_a20;
    local_8a8 = pFVar51;
    if (*piStack_8a0 != (int)local_898) {
      local_aba = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_aba);
    }
    if ((FName)pFVar51 == FVar60) break;
    lVar62 = *(longlong *)pFVar51;
    lVar55 = 0;
    if (*(longlong *)(lVar62 + 0x208) != 0) {
      lVar55 = *(longlong *)(lVar62 + 0x208);
    }
    TVar50 = *(TVector2<float>_u_0 *)(lVar55 + 0x48);
    local_ab8 = TVar50;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_a10,(FRefCountVector *)(lVar62 + 0x140),0,
               *(int *)(lVar62 + 0x140) * 0x200 + *(int *)(lVar62 + 0x144));
    iVar30 = *(int *)(lVar62 + 0x140) * 0x200 + *(int *)(lVar62 + 0x144);
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_7d8,(FRefCountVector *)(lVar62 + 0x140),iVar30,iVar30);
    if (local_a10._8_4_ != local_7d8._8_4_) {
      do {
        uVar67 = local_a10._8_4_;
        uVar41 = (ulonglong)(local_a10._8_4_ & 0x1ff);
        uVar52 = *(uint *)(*(longlong *)
                            (*(longlong *)&((FRefCountVector *)((longlong)TVar50 + 0x20))->RefCounts
                            + (ulonglong)((uint)local_a10._8_4_ >> 9) * 8) + uVar41 * 4);
        if (((int)uVar52 < 0) && (uVar47 = ~uVar52, TVar50 = local_ab8, (int)uVar52 < 0)) {
          uVar52 = uVar52 >> 0x1f;
          lVar55 = *(longlong *)
                    (*(longlong *)(lVar62 + 0x130) + (ulonglong)((uint)local_a10._8_4_ >> 9) * 8);
          local_978 = *(undefined8 *)(lVar55 + uVar41 * 0xc);
          local_970 = *(uint *)(lVar55 + 8 + uVar41 * 0xc);
          uVar46 = 0;
          if ((int)uVar47 < (int)local_aa0) {
            uVar46 = uVar52;
          }
          if ((uVar46 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar41 = (ulonglong)((uint)local_978 & 0x1ff);
          lVar53 = (longlong)(int)uVar47;
          lVar55 = *(longlong *)
                    (*(longlong *)(lVar62 + 0x10) + (ulonglong)((uint)local_978 >> 9) * 8);
          pTVar39 = (TFrame3<double> *)(local_aa8.Data + lVar53 * 0x38);
          pdVar1 = (double *)(lVar55 + uVar41 * 0x18);
          local_830 = *pdVar1;
          dStack_828 = pdVar1[1];
          local_820 = *(double *)(lVar55 + 0x10 + uVar41 * 0x18);
          dVar16 = local_830 - (pTVar39->Origin).field0_0x0._s_0.X;
          dVar14 = local_820 - (pTVar39->Origin).field0_0x0._s_0.Z;
          dVar17 = dStack_828 - (pTVar39->Origin).field0_0x0._s_0.Y;
          pTVar40 = UE::Geometry::TFrame3<double>::GetAxis(pTVar39,&local_748,0);
          dVar18 = (pTVar40->field0_0x0)._s_0.Y;
          dVar22 = (pTVar40->field0_0x0)._s_0.X;
          dVar15 = (pTVar40->field0_0x0)._s_0.Z;
          pTVar40 = UE::Geometry::TFrame3<double>::GetAxis(pTVar39,&local_730,1);
          fVar78 = (float)(dVar17 * dVar18 + dVar16 * dVar22 + dVar14 * dVar15);
          uVar46 = 0;
          if ((int)uVar47 < local_a90) {
            uVar46 = uVar52;
          }
          fVar73 = (float)(dVar17 * (pTVar40->field0_0x0)._s_0.Y +
                           dVar16 * (pTVar40->field0_0x0)._s_0.X +
                          dVar14 * (pTVar40->field0_0x0)._s_0.Z);
          if ((uVar46 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(float *)(local_a98.Data + lVar53 * 8) <= fVar78) {
            fVar78 = *(float *)(local_a98.Data + lVar53 * 8);
          }
          fVar66 = *(float *)(local_a98.Data + lVar53 * 8 + 4);
          if (fVar73 <= *(float *)(local_a98.Data + lVar53 * 8 + 4)) {
            fVar66 = fVar73;
          }
          *(float *)(local_a98.Data + lVar53 * 8) = fVar78;
          *(float *)(local_a98.Data + lVar53 * 8 + 4) = fVar66;
          uVar46 = 0;
          if ((int)uVar47 < (int)local_aa0) {
            uVar46 = uVar52;
          }
          if ((uVar46 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar39 = (TFrame3<double> *)(local_aa8.Data + lVar53 * 0x38);
          lVar55 = *(longlong *)
                    (*(longlong *)(lVar62 + 0x10) + (ulonglong)(local_978._4_4_ >> 9) * 8);
          pdVar1 = (double *)(lVar55 + (ulonglong)(local_978._4_4_ & 0x1ff) * 0x18);
          local_830 = *pdVar1;
          dStack_828 = pdVar1[1];
          local_820 = *(double *)(lVar55 + 0x10 + (ulonglong)(local_978._4_4_ & 0x1ff) * 0x18);
          dVar16 = local_830 - (pTVar39->Origin).field0_0x0._s_0.X;
          dVar14 = local_820 - (pTVar39->Origin).field0_0x0._s_0.Z;
          dVar17 = dStack_828 - (pTVar39->Origin).field0_0x0._s_0.Y;
          pTVar40 = UE::Geometry::TFrame3<double>::GetAxis(pTVar39,&local_748,0);
          dVar18 = (pTVar40->field0_0x0)._s_0.Y;
          dVar22 = (pTVar40->field0_0x0)._s_0.X;
          dVar15 = (pTVar40->field0_0x0)._s_0.Z;
          pTVar40 = UE::Geometry::TFrame3<double>::GetAxis(pTVar39,&local_730,1);
          fVar78 = (float)(dVar17 * dVar18 + dVar16 * dVar22 + dVar14 * dVar15);
          uVar46 = 0;
          if ((int)uVar47 < local_a90) {
            uVar46 = uVar52;
          }
          fVar73 = (float)(dVar17 * (pTVar40->field0_0x0)._s_0.Y +
                           dVar16 * (pTVar40->field0_0x0)._s_0.X +
                          dVar14 * (pTVar40->field0_0x0)._s_0.Z);
          if ((uVar46 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(float *)(local_a98.Data + lVar53 * 8) <= fVar78) {
            fVar78 = *(float *)(local_a98.Data + lVar53 * 8);
          }
          *(float *)(local_a98.Data + lVar53 * 8) = fVar78;
          fVar78 = *(float *)(local_a98.Data + lVar53 * 8 + 4);
          if (fVar73 <= *(float *)(local_a98.Data + lVar53 * 8 + 4)) {
            fVar78 = fVar73;
          }
          *(float *)(local_a98.Data + lVar53 * 8 + 4) = fVar78;
          uVar46 = 0;
          if ((int)uVar47 < (int)local_aa0) {
            uVar46 = uVar52;
          }
          if ((uVar46 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar55 = *(longlong *)(*(longlong *)(lVar62 + 0x10) + (ulonglong)(local_970 >> 9) * 8);
          pTVar39 = (TFrame3<double> *)(local_aa8.Data + lVar53 * 0x38);
          pdVar1 = (double *)(lVar55 + (ulonglong)(local_970 & 0x1ff) * 0x18);
          local_830 = *pdVar1;
          dStack_828 = pdVar1[1];
          local_820 = *(double *)(lVar55 + 0x10 + (ulonglong)(local_970 & 0x1ff) * 0x18);
          dVar16 = local_830 - (pTVar39->Origin).field0_0x0._s_0.X;
          dVar14 = local_820 - (pTVar39->Origin).field0_0x0._s_0.Z;
          dVar17 = dStack_828 - (pTVar39->Origin).field0_0x0._s_0.Y;
          pTVar40 = UE::Geometry::TFrame3<double>::GetAxis(pTVar39,&local_748,0);
          dVar18 = (pTVar40->field0_0x0)._s_0.Y;
          dVar22 = (pTVar40->field0_0x0)._s_0.X;
          dVar15 = (pTVar40->field0_0x0)._s_0.Z;
          pTVar40 = UE::Geometry::TFrame3<double>::GetAxis(pTVar39,&local_730,1);
          fVar78 = (float)(dVar17 * dVar18 + dVar16 * dVar22 + dVar14 * dVar15);
          uVar46 = 0;
          if ((int)uVar47 < local_a90) {
            uVar46 = uVar52;
          }
          fVar73 = (float)(dVar17 * (pTVar40->field0_0x0)._s_0.Y +
                           dVar16 * (pTVar40->field0_0x0)._s_0.X +
                          dVar14 * (pTVar40->field0_0x0)._s_0.Z);
          if ((uVar46 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(float *)(local_a98.Data + lVar53 * 8) <= fVar78) {
            fVar78 = *(float *)(local_a98.Data + lVar53 * 8);
          }
          *(float *)(local_a98.Data + lVar53 * 8) = fVar78;
          fVar78 = *(float *)(local_a98.Data + lVar53 * 8 + 4);
          if (fVar73 <= *(float *)(local_a98.Data + lVar53 * 8 + 4)) {
            fVar78 = fVar73;
          }
          *(float *)(local_a98.Data + lVar53 * 8 + 4) = fVar78;
          TVar50 = local_ab8;
        }
        local_a10._8_4_ = uVar67 + 1;
        if ((int)local_a10._8_4_ < (int)local_a10._12_4_) {
          do {
            if ((*(short *)(*(longlong *)
                             (*(longlong *)(local_a10._0_8_ + 8) +
                             (ulonglong)((uint)local_a10._8_4_ >> 9) * 8) +
                           (ulonglong)(local_a10._8_4_ & 0x1ff) * 2) != 0) &&
               (*(short *)(*(longlong *)
                            (*(longlong *)(local_a10._0_8_ + 8) +
                            (ulonglong)((uint)local_a10._8_4_ >> 9) * 8) +
                          (ulonglong)(local_a10._8_4_ & 0x1ff) * 2) != -1)) break;
            local_a10._8_4_ = local_a10._8_4_ + 1;
          } while ((int)local_a10._8_4_ < (int)local_a10._12_4_);
        }
        pFVar51 = local_8a8;
      } while (local_a10._8_4_ != local_7d8._8_4_);
    }
    pFVar51 = pFVar51 + 8;
    local_8a8 = pFVar51;
  }
  iVar30 = (this->CellMeshes).Array.ArrayNum;
  piStack_a78 = &(this->CellMeshes).Array.ArrayNum;
  local_a70 = (double)CONCAT44(local_a70._4_4_,iVar30);
  pFVar51 = (this->CellMeshes).Array.AllocatorInstance.Data;
  local_9a0 = (FIndex2i_u_0 *)(pFVar51 + (longlong)iVar30 * 8);
  local_880 = local_a70;
  local_890 = pFVar51;
  piStack_888 = piStack_a78;
  local_a80 = pFVar51;
  do {
    pFVar65 = local_9a0;
    local_890 = pFVar51;
    if (*piStack_888 != (int)local_880) {
      local_ab9 = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_ab9);
    }
    if ((FIndex2i_u_0 *)pFVar51 == pFVar65) {
      if ((TFrame3<double> *)local_aa8.Data != (TFrame3<double> *)0x0) {
        FMemory::Free(local_aa8.Data);
      }
      if (local_a98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a98.Data);
      }
      if (local_9e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9e8.AllocatorInstance.Data);
      }
      local_610 = 0;
      if (local_618 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_618);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_658);
      DestructItems<TArray<_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise_::__l2::FPlaneIdxAndFlip,TSizedDefaultAllocator<32>_>,int>
                (local_a50,(int)local_a48);
      if (local_a50 !=
          (TArray<_private:_void___cdecl_UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithNoise(int,FPlanarCells_const_&,UE::Geometry::TAxisAlignedBox3<double>_const_&,bool,double)_::_2_::FPlaneIdxAndFlip,TSizedDefaultAllocator<32>_>
           *)0x0) {
        FMemory::Free(local_a50);
      }
      DestructItems<UE::Geometry::FDynamicMesh3,int>((FDynamicMesh3 *)local_a40.Data,(int)local_a38)
      ;
      if ((FDynamicMesh3 *)local_a40.Data != (FDynamicMesh3 *)0x0) {
        FMemory::Free(local_a40.Data);
      }
      return;
    }
    pFVar61 = *(FDynamicMesh3 **)pFVar51;
    pFVar7 = (pFVar61->AttributeSet).Ptr;
    pFVar44 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar44 = pFVar7;
    }
    local_ad4 = 0;
    pTVar58 = (pFVar44->MaterialIDAttrib).Ptr;
    iVar30 = (pFVar61->TriangleRefCounts).RefCounts.CurBlockUsed +
             (pFVar61->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    local_9f8 = CONCAT44(local_9f8._4_4_,iVar30);
    if ((iVar30 != 0) &&
       (pFVar8 = (pFVar61->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
      uVar52 = 1;
      local_ad4 = 1;
      if (1 < iVar30) {
        do {
          if ((*(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar52 >> 9) * 8) +
                         (ulonglong)(uVar52 & 0x1ff) * 2) != 0) &&
             (local_ad4 = uVar52,
             *(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar52 >> 9) * 8) +
                       (ulonglong)(uVar52 & 0x1ff) * 2) != -1)) break;
          uVar52 = uVar52 + 1;
          local_ad4 = uVar52;
        } while ((int)uVar52 < iVar30);
      }
    }
    uVar52 = (pFVar61->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar61->TriangleRefCounts).RefCounts.CurBlockUsed;
    local_a88 = uVar52;
    local_998 = pTVar58;
    if (local_ad4 != uVar52) {
      do {
        uVar41 = (ulonglong)(local_ad4 & 0x1ff);
        uVar47 = *(uint *)(*(longlong *)
                            (*(longlong *)&pTVar58->field_0x20 + (ulonglong)(local_ad4 >> 9) * 8) +
                          uVar41 * 4);
        if ((int)uVar47 < 0) {
          uVar46 = ~uVar47;
          local_ab0 = CONCAT44(local_ab0._4_4_,uVar46);
          if ((int)uVar47 < 0) {
            lVar55 = (longlong)(int)uVar46;
            lVar53 = 0;
            local_a20 = (FName)(lVar55 * 0x38);
            lVar62 = *(longlong *)
                      ((pFVar61->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_ad4 >> 9) * 8);
            local_ab0 = CONCAT44(local_ab0._4_4_,uVar47 >> 0x1f);
            local_938 = *(undefined8 *)(lVar62 + uVar41 * 0xc);
            local_930 = *(undefined4 *)(lVar62 + 8 + uVar41 * 0xc);
            uVar52 = uVar47 >> 0x1f;
            do {
              FVar60 = local_a20;
              uVar47 = 0;
              if ((int)uVar46 < (int)local_aa0) {
                uVar47 = uVar52;
              }
              if ((uVar47 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pTVar39 = (TFrame3<double> *)((longlong)FVar60 + (longlong)local_aa8.Data);
              uVar47 = *(uint *)((longlong)&local_938 + lVar53 * 4);
              uVar41 = (ulonglong)(uVar47 & 0x1ff);
              lVar62 = *(longlong *)
                        ((pFVar61->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar47 >> 9) * 8);
              pdVar1 = (double *)(lVar62 + uVar41 * 0x18);
              local_6f0 = *pdVar1;
              dStack_6e8 = pdVar1[1];
              local_6e0 = *(double *)(lVar62 + 0x10 + uVar41 * 0x18);
              dVar21 = local_6f0 - (pTVar39->Origin).field0_0x0._s_0.X;
              dVar19 = local_6e0 - (pTVar39->Origin).field0_0x0._s_0.Z;
              dVar20 = dStack_6e8 - (pTVar39->Origin).field0_0x0._s_0.Y;
              pTVar40 = UE::Geometry::TFrame3<double>::GetAxis(pTVar39,&local_6c8,0);
              dVar18 = (pTVar40->field0_0x0)._s_0.Y;
              dVar22 = (pTVar40->field0_0x0)._s_0.X;
              dVar15 = (pTVar40->field0_0x0)._s_0.Z;
              pTVar40 = UE::Geometry::TFrame3<double>::GetAxis(pTVar39,&local_6b0,1);
              dVar16 = (pTVar40->field0_0x0)._s_0.X;
              dVar14 = (pTVar40->field0_0x0)._s_0.Y;
              dVar17 = (pTVar40->field0_0x0)._s_0.Z;
              uVar47 = 0;
              if ((int)uVar46 < local_a90) {
                uVar47 = uVar52;
              }
              if ((uVar47 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar30 = 0;
              local_ab8._4_4_ =
                   ((float)(dVar20 * dVar14 + dVar21 * dVar16 + dVar19 * dVar17) -
                   *(float *)(local_a98.Data + lVar55 * 8 + 4)) * (float)param_5;
              local_ab8._0_4_ =
                   ((float)(dVar20 * dVar18 + dVar21 * dVar22 + dVar19 * dVar15) -
                   *(float *)(local_a98.Data + lVar55 * 8)) * (float)param_5;
              TVar50 = local_ab8;
              if (0 < this->NumUVLayers) {
                iVar6 = *(int *)((longlong)&local_938 + lVar53 * 4);
                do {
                  AugmentedDynamicMesh::SetUV(pFVar61,iVar6,(TVector2<float>)TVar50._s_0,iVar30);
                  iVar30 = iVar30 + 1;
                } while (iVar30 < this->NumUVLayers);
              }
              lVar53 = lVar53 + 1;
              uVar52 = (uint)local_ab0;
            } while (lVar53 < 3);
            pTVar58 = local_998;
            iVar30 = (int)local_9f8;
            uVar52 = local_a88;
          }
        }
        local_ad4 = local_ad4 + 1;
        if ((int)local_ad4 < iVar30) {
          do {
            lVar62 = *(longlong *)
                      ((pFVar61->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_ad4 >> 9) * 8);
            if ((*(short *)(lVar62 + (ulonglong)(local_ad4 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar62 + (ulonglong)(local_ad4 & 0x1ff) * 2) != -1)) break;
            local_ad4 = local_ad4 + 1;
          } while ((int)local_ad4 < iVar30);
        }
        pFVar51 = local_890;
      } while (local_ad4 != uVar52);
    }
    pFVar51 = pFVar51 + 8;
    local_890 = pFVar51;
  } while( true );
}

// CreateMeshesForBoundedPlanesWithoutNoise @ 14c9c20b0

void __thiscall
UE::PlanarCut::FCellMeshes::CreateMeshesForBoundedPlanesWithoutNoise
          (FCellMeshes *this,int param_1,FPlanarCells *param_2,TAxisAlignedBox3<double> *param_3,
          bool param_4,double param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FDynamicMesh3 *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  TVector2<float> TVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  TPolygon2<float> *pTVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  TVector<double> *pTVar26;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar27;
  FDynamicMeshAttributeSet *pFVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ForAnyElementType FVar32;
  int iVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  ForAnyElementType FVar37;
  undefined8 *puVar38;
  ulonglong uVar39;
  FScriptContainerElement *pFVar40;
  uint uVar41;
  int iVar42;
  longlong *plVar43;
  ulonglong uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  uint local_304;
  uint local_300;
  uint local_2fc;
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  uint local_2e8;
  FIndex3i_u_0 local_2e0;
  ulonglong local_2d0;
  float local_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  int iStack_2bc;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  TConstrainedDelaunay2<float> local_298;
  uint local_248 [2];
  uint local_240 [2];
  FIndex3i_u_0 local_238;
  float local_228;
  TPolygon2<float> local_220;
  undefined1 local_210;
  TPolygon2<float> *local_208;
  ulonglong local_200;
  longlong local_1f8 [2];
  float local_1e8;
  float fStack_1e4;
  float local_1e0;
  float local_1d8;
  float fStack_1d4;
  TVector<double>_u_0 local_1c8;
  undefined8 local_1b0;
  float local_1a8;
  undefined8 local_1a4;
  float local_19c;
  TVector2<float>_u_0 local_198;
  undefined1 local_190;
  undefined2 local_18f;
  FScriptContainerElement *local_188;
  TVector<double>_u_0 local_180 [2];
  TVector4<float>_u_0 local_148;
  TVector<double> local_138;
  TVector<double> local_120;
  TVector<double> local_108;
  TVector<double> local_f0 [7];
  
  fVar19 = __real_7f7fffff;
  fVar18 = __real_bf800000;
  local_2fc = 0;
  if (0 < (param_2->PlaneCells).ArrayNum) {
    local_2a0 = 0;
    uVar34 = __xmm_80000000800000008000000080000000;
    fVar47 = __real_3f000000;
    do {
      lVar30 = local_2a0;
      uVar24 = local_2fc;
      local_2e8 = ~local_2fc;
      uVar36 = local_2e8 >> 0x1f;
      uVar41 = 0;
      if ((int)local_2fc < (param_2->PlaneCells).ArrayNum) {
        uVar41 = uVar36;
      }
      if ((uVar41 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar40 = (param_2->PlaneCells).AllocatorInstance.Data;
      uVar41 = *(uint *)(pFVar40 + lVar30 * 8);
      uVar22 = 0;
      if ((int)uVar41 < (this->CellMeshes).Array.ArrayNum) {
        uVar22 = ~uVar41 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar30 = local_2a0;
      local_1f8[1] = 0;
      local_1f8[0] = *(longlong *)
                      ((this->CellMeshes).Array.AllocatorInstance.Data + (longlong)(int)uVar41 * 8);
      uVar41 = *(uint *)(pFVar40 + local_2a0 * 8 + 4);
      if ((int)uVar41 < 0) {
        uVar41 = this->OutsideCellIndex;
      }
      iVar33 = ((int)uVar41 >> 0x1f) + 2;
      local_300 = uVar41;
      if (iVar33 == 2) {
        uVar22 = 0;
        if ((int)uVar41 < (this->CellMeshes).Array.ArrayNum) {
          uVar22 = ~uVar41 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_1f8[1] = *(longlong *)
                        ((this->CellMeshes).Array.AllocatorInstance.Data + (longlong)(int)uVar41 * 8
                        );
      }
      uVar22 = 0;
      if ((int)uVar24 < (param_2->PlaneBoundaries).ArrayNum) {
        uVar22 = uVar36;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar40 = (param_2->PlaneBoundaries).AllocatorInstance.Data + lVar30 * 0x10;
      uVar24 = 0;
      if ((int)local_2fc < (param_2->Planes).ArrayNum) {
        uVar24 = uVar36;
      }
      local_188 = pFVar40;
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar7 = (param_2->Planes).AllocatorInstance.Data;
      lVar30 = lVar30 * 0x20;
      fVar49 = (float)*(double *)(pFVar7 + lVar30);
      uVar24 = 0;
      if ((int)local_2fc < (param_2->Planes).ArrayNum) {
        uVar24 = uVar36;
      }
      fStack_1e4 = (float)*(double *)(pFVar7 + lVar30 + 8);
      local_1e0 = (float)*(double *)(pFVar7 + lVar30 + 0x10);
      local_1e8 = fVar49;
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      PlanarCut::`anonymous_namespace'::AxisAlignedFrame
                ((TFrame3<double> *)&local_180[0]._s_0,
                 (TPlane<double> *)((param_2->Planes).AllocatorInstance.Data + lVar30));
      fVar3 = fStack_1e4;
      local_1a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_19c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_198 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_1c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1a4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_18f = 1;
      local_190 = 1;
      local_2b8 = 0xffffffffffffffff;
      local_304 = 0;
      local_2d0 = 0;
      local_2b0 = (longlong)iVar33;
      if (0 < iVar33) {
        plVar43 = local_1f8;
        uVar15 = CONCAT44(fStack_1e4,local_1e8);
        local_228 = local_1e0;
        do {
          local_1b0 = uVar15;
          local_1a8 = local_228;
          if ((local_304 == 1) && (local_300 != this->OutsideCellIndex)) {
            local_1b0 = CONCAT44(fVar3 * fVar18,(uint)fVar49 ^ uVar34);
            local_1a8 = local_228 * fVar18;
          }
          puVar35 = *(uint **)pFVar40;
          iVar33 = *(int *)(pFVar40 + 8);
          puVar1 = puVar35 + iVar33;
          *(int *)((longlong)&local_2b8 + local_2d0 * 4) =
               *(int *)(*plVar43 + 0x20) * 0x200 + *(int *)(*plVar43 + 0x24);
          fVar47 = fVar19;
          fVar46 = fVar19;
          while( true ) {
            fVar48 = fVar46;
            if (*(int *)(pFVar40 + 8) != iVar33) {
              local_308 = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_308);
            }
            if (puVar35 == puVar1) break;
            uVar34 = *puVar35;
            uVar41 = 0;
            if ((int)uVar34 < (param_2->PlaneBoundaryVertices).ArrayNum) {
              uVar41 = ~uVar34 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar8 = (param_2->PlaneBoundaryVertices).AllocatorInstance.Data;
            pFVar7 = pFVar8 + (longlong)(int)uVar34 * 0x18;
            local_138.field0_0x0._s_0.Z =
                 (double)*(undefined8 *)(pFVar8 + (longlong)(int)uVar34 * 0x18 + 0x10);
            dVar12 = *(double *)pFVar7 - (double)local_180[0]._0_8_;
            dVar13 = local_138.field0_0x0._s_0.Z - (double)local_180[0]._16_8_;
            dVar14 = *(double *)(pFVar7 + 8) - (double)local_180[0]._8_8_;
            pTVar26 = UE::Geometry::TFrame3<double>::GetAxis
                                ((TFrame3<double> *)&local_180[0]._s_0,&local_138,0);
            dVar4 = (pTVar26->field0_0x0)._s_0.Y;
            dVar5 = (pTVar26->field0_0x0)._s_0.X;
            dVar6 = (pTVar26->field0_0x0)._s_0.Z;
            pTVar26 = UE::Geometry::TFrame3<double>::GetAxis
                                ((TFrame3<double> *)&local_180[0]._s_0,&local_120,1);
            puVar35 = puVar35 + 1;
            fVar45 = (float)(dVar14 * dVar4 + dVar12 * dVar5 + dVar13 * dVar6);
            if (fVar47 <= fVar45) {
              fVar45 = fVar47;
            }
            fVar46 = (float)(dVar14 * (pTVar26->field0_0x0)._s_0.Y +
                             dVar12 * (pTVar26->field0_0x0)._s_0.X +
                            dVar13 * (pTVar26->field0_0x0)._s_0.Z);
            fVar47 = fVar45;
            if (fVar48 <= fVar46) {
              fVar46 = fVar48;
            }
          }
          puVar35 = *(uint **)pFVar40;
          iVar33 = *(int *)(pFVar40 + 8);
          puVar1 = puVar35 + iVar33;
          while( true ) {
            if (*(int *)(pFVar40 + 8) != iVar33) {
              local_307 = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_307);
            }
            if (puVar35 == puVar1) break;
            uVar34 = *puVar35;
            uVar41 = 0;
            if ((int)uVar34 < (param_2->PlaneBoundaryVertices).ArrayNum) {
              uVar41 = ~uVar34 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar8 = (param_2->PlaneBoundaryVertices).AllocatorInstance.Data;
            pFVar7 = pFVar8 + (longlong)(int)uVar34 * 0x18;
            local_1c8._s_0.X = (double)*(undefined8 *)pFVar7;
            local_1c8._s_0.Y = (double)*(undefined8 *)(pFVar7 + 8);
            local_1c8._s_0.Z = (double)*(undefined8 *)(pFVar8 + (longlong)(int)uVar34 * 0x18 + 0x10)
            ;
            dVar12 = local_1c8._s_0.X - (double)local_180[0]._0_8_;
            dVar14 = local_1c8._s_0.Y - (double)local_180[0]._8_8_;
            dVar13 = local_1c8._s_0.Z - (double)local_180[0]._16_8_;
            pTVar26 = UE::Geometry::TFrame3<double>::GetAxis
                                ((TFrame3<double> *)&local_180[0]._s_0,&local_108,0);
            dVar4 = (pTVar26->field0_0x0)._s_0.Y;
            dVar5 = (pTVar26->field0_0x0)._s_0.X;
            dVar6 = (pTVar26->field0_0x0)._s_0.Z;
            pTVar26 = UE::Geometry::TFrame3<double>::GetAxis
                                ((TFrame3<double> *)&local_180[0]._s_0,local_f0,1);
            pFVar9 = (FDynamicMesh3 *)*plVar43;
            local_1d8 = ((float)(dVar14 * dVar4 + dVar12 * dVar5 + dVar13 * dVar6) - fVar47) *
                        (float)param_5;
            fStack_1d4 = ((float)(dVar14 * (pTVar26->field0_0x0)._s_0.Y +
                                  dVar12 * (pTVar26->field0_0x0)._s_0.X +
                                 dVar13 * (pTVar26->field0_0x0)._s_0.Z) - fVar48) * (float)param_5;
            iVar23 = UE::Geometry::FDynamicMesh3::AppendVertex
                               (pFVar9,(FVertexInfo *)&local_1c8._s_0);
            local_148 = AugmentedDynamicMesh::UnsetVertexColor.field0_0x0;
            AugmentedDynamicMesh::SetVertexColor(pFVar9,iVar23,(TVector4<float> *)&local_148._s_0);
            TVar16.field0_0x0._s_0.Y = fStack_1d4;
            TVar16.field0_0x0._s_0.X = local_1d8;
            AugmentedDynamicMesh::SetAllUV(pFVar9,iVar23,TVar16,this->NumUVLayers);
            puVar35 = puVar35 + 1;
          }
          plVar43 = plVar43 + 1;
          local_304 = local_304 + 1;
          local_2d0 = local_2d0 + 1;
          uVar34 = __xmm_80000000800000008000000080000000;
          fVar47 = __real_3f000000;
          uVar41 = local_300;
        } while ((longlong)local_2d0 < local_2b0);
      }
      fVar49 = 0.0;
      if (param_2->AssumeConvexCells == false) {
        uVar41 = 0;
        uVar39 = 0;
        local_2f8.Data = (FScriptContainerElement *)0x0;
        local_2f0 = 0;
        uVar44 = uVar39;
        uVar34 = uVar41;
        if (0 < *(int *)(pFVar40 + 8)) {
          do {
            uVar34 = (int)local_2b8 + (int)uVar44;
            uVar29 = uVar39;
            if (*(ulonglong *)(local_1f8[0] + 0x208) != 0) {
              uVar29 = *(ulonglong *)(local_1f8[0] + 0x208);
            }
            pTVar27 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                              *)(uVar29 + 0x130),AugmentedDynamicMesh::UVChannelNames[0]);
            if ((pTVar27 ==
                 (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                  *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x27b,L""), bVar21)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar30 = *(longlong *)&pTVar27->field_0x8;
            if (lVar30 == 0) {
              bVar21 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<5943927746286584075>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                  ,0x10b,"UVs");
              if (bVar21) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            else {
              local_2c8 = *(float *)(*(longlong *)
                                      (*(longlong *)(lVar30 + 0x20) +
                                      (ulonglong)((uVar34 & 0x7fffffff) >> 8) * 8) +
                                    (ulonglong)(uVar34 * 2 & 0x1ff) * 4);
              uStack_2c4 = *(undefined4 *)
                            (*(longlong *)
                              (*(longlong *)(lVar30 + 0x20) +
                              (ulonglong)((uVar34 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar34 * 2 + 1 & 0x1ff) * 4);
            }
            if (((local_2f8.Data <= (FScriptContainerElement *)&local_2c8) &&
                ((FScriptContainerElement *)&local_2c8 <
                 local_2f8.Data + (longlong)local_2f0._4_4_ * 8)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar33 = (int)local_2f0;
            if ((int)local_2f0 == local_2f0._4_4_) {
              iVar33 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_2f8,(int *)((longlong)&local_2f0 + 4));
            }
            uVar34 = iVar33 + 1;
            uVar24 = (int)uVar44 + 1;
            local_2f0 = CONCAT44(local_2f0._4_4_,uVar34);
            *(ulonglong *)(local_2f8.Data + (longlong)iVar33 * 8) = CONCAT44(uStack_2c4,local_2c8);
            uVar44 = (ulonglong)uVar24;
          } while ((int)uVar24 < *(int *)(pFVar40 + 8));
        }
        FVar32.Data = local_2f8.Data;
        local_220.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_220.Vertices.ArrayNum = uVar34;
        if (uVar34 == 0) {
          local_220.Vertices.ArrayMax = 0;
          iVar33 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar34,0,(ForAnyElementType *)&local_220,uVar34,
                     &local_220.Vertices.ArrayMax);
          memcpy(local_220.Vertices.AllocatorInstance.Data,FVar32.Data,(longlong)(int)uVar34 << 3);
          iVar33 = (int)local_2f0;
        }
        FVar32.Data = local_2f8.Data;
        local_208 = (TPolygon2<float> *)0x0;
        local_200 = 0;
        if ((iVar33 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (iVar33 != 0) {
          lVar30 = (longlong)iVar33;
          if (0 < iVar33) {
            lVar31 = (longlong)(int)(iVar33 - 1U) * 8;
            FVar37.Data = FVar32.Data;
            uVar24 = uVar41;
            uVar34 = iVar33 - 1U;
            do {
              uVar36 = uVar24;
              uVar24 = uVar41;
              if ((int)uVar34 < iVar33) {
                uVar24 = ~uVar34 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar34 = uVar41;
              if ((int)uVar36 < iVar33) {
                uVar34 = ~uVar36 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar21)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              lVar17 = lVar31 + 4;
              pFVar40 = FVar37.Data + 4;
              pFVar7 = FVar32.Data + lVar31;
              lVar31 = (longlong)FVar37.Data - (longlong)FVar32.Data;
              fVar3 = *(float *)FVar37.Data;
              FVar37.Data = FVar37.Data + 8;
              fVar49 = fVar49 + (*(float *)pFVar40 * *(float *)pFVar7 -
                                *(float *)(FVar32.Data + lVar17) * fVar3);
              lVar30 = lVar30 + -1;
              uVar24 = uVar36 + 1;
              uVar34 = uVar36;
            } while (lVar30 != 0);
          }
          fVar49 = fVar49 * fVar47;
        }
        local_210 = fVar49 < 0.0;
        local_298.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_298.Vertices.ArrayNum = 0;
        local_298.Vertices.ArrayMax = 0;
        local_298.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_298.Edges.ArrayNum = 0;
        local_298.Edges.ArrayMax = 0;
        local_298.HoleEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_298.HoleEdges.ArrayNum = 0;
        local_298.HoleEdges.ArrayMax = 0;
        local_298.bOrientedEdges = true;
        local_298.bOutputCCW = false;
        local_298.bSplitBowties = false;
        local_298.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_298.Triangles.ArrayNum = 0;
        local_298.Triangles.ArrayMax = 0;
        local_298.AddedVerticesStartIndex = -1;
        local_298.FillRule = NonZero;
        UE::Geometry::TConstrainedDelaunay2<float>::Add<float>(&local_298,&local_220,false);
        uVar29 = (ulonglong)(int)local_200;
        local_304 = 0;
        uVar44 = uVar39;
        local_2d0 = uVar29;
        if (0 < (int)local_200) {
          while( true ) {
            uVar34 = 0;
            if ((int)(uint)uVar39 < (int)uVar29) {
              uVar34 = ~(uint)uVar39 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar20 = local_208;
            iVar23 = local_298.Vertices.ArrayNum;
            iVar33 = *(int *)((longlong)&(local_208->Vertices).ArrayNum + uVar44);
            puVar38 = *(undefined8 **)
                       ((longlong)&(local_208->Vertices).AllocatorInstance.Data + uVar44);
            iVar42 = local_298.Vertices.ArrayNum + iVar33;
            puVar2 = puVar38 + iVar33;
            while( true ) {
              if (*(int *)((longlong)&(pTVar20->Vertices).ArrayNum + uVar44) != iVar33) {
                local_306 = 0;
                `TCheckedPointerIterator<UE::Math::TVector2<float>_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_306);
              }
              if (puVar38 == puVar2) break;
              local_2a8 = *puVar38;
              if (((local_298.Vertices.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_2a8) &&
                  ((FScriptContainerElement *)&local_2a8 <
                   local_298.Vertices.AllocatorInstance.Data +
                   (longlong)local_298.Vertices.ArrayMax * 8)) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar25 = local_298.Vertices.ArrayNum;
              if (local_298.Vertices.ArrayNum == local_298.Vertices.ArrayMax) {
                iVar25 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,(ForAnyElementType *)&local_298,
                                    &local_298.Vertices.ArrayMax);
              }
              puVar38 = puVar38 + 1;
              local_298.Vertices.ArrayNum = iVar25 + 1;
              *(undefined8 *)(local_298.Vertices.AllocatorInstance.Data + (longlong)iVar25 * 8) =
                   local_2a8;
            }
            iVar25 = iVar42 + -1;
            iVar33 = local_2c0;
            for (; local_2c0 = iVar25, iVar23 < iVar42; iVar23 = iVar23 + 1) {
              iStack_2bc = iVar23;
              if (((local_298.HoleEdges.AllocatorInstance.Data <=
                    (FScriptContainerElement *)&local_2c0) &&
                  ((FScriptContainerElement *)&local_2c0 <
                   local_298.HoleEdges.AllocatorInstance.Data +
                   (longlong)local_298.HoleEdges.ArrayMax * 8)) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar33 = local_298.HoleEdges.ArrayNum;
              if (local_298.HoleEdges.ArrayNum == local_298.HoleEdges.ArrayMax) {
                iVar33 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&local_298.HoleEdges.AllocatorInstance,
                                    &local_298.HoleEdges.ArrayMax);
              }
              local_298.HoleEdges.ArrayNum = iVar33 + 1;
              *(ulonglong *)(local_298.HoleEdges.AllocatorInstance.Data + (longlong)iVar33 * 8) =
                   CONCAT44(iStack_2bc,local_2c0);
              iVar25 = iVar23;
              iVar33 = local_2c0;
            }
            local_304 = local_304 + 1;
            uVar39 = (ulonglong)local_304;
            local_2c0 = iVar33;
            if (local_2d0 - 1 == 0) break;
            uVar29 = local_200 & 0xffffffff;
            uVar44 = uVar44 + 0x10;
            local_2d0 = local_2d0 - 1;
          }
          local_2d0 = 0;
        }
        uVar39 = 0;
        UE::Geometry::TConstrainedDelaunay2<float>::Triangulate(&local_298);
        uVar44 = uVar39;
        if (0 < local_2b0) {
          do {
            iVar23 = local_298.Triangles.ArrayNum;
            iVar33 = *(int *)((longlong)&local_2b8 + uVar44 * 4);
            pFVar40 = local_298.Triangles.AllocatorInstance.Data +
                      (longlong)local_298.Triangles.ArrayNum * 0xc;
            FVar32.Data = local_298.Triangles.AllocatorInstance.Data;
            while( true ) {
              if (local_298.Triangles.ArrayNum != iVar23) {
                local_305 = 0;
                `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_305);
              }
              if (FVar32.Data == pFVar40) break;
              local_2e0._s_0.C = *(int *)(FVar32.Data + 8) + iVar33;
              local_2e0._s_0.B = (int)((ulonglong)*(undefined8 *)FVar32.Data >> 0x20);
              local_2e0._s_0.A = (int)*(undefined8 *)FVar32.Data;
              local_2e0._s_0.A = local_2e0._s_0.A + iVar33;
              iVar42 = local_2e0._s_0.B + iVar33;
              local_2e0._s_0.B = iVar42;
              if (((int)uVar39 == 1) && (local_300 != this->OutsideCellIndex)) {
                local_2e0._s_0.B = local_2e0._s_0.C;
                local_2e0._s_0.C = iVar42;
              }
              pFVar9 = (FDynamicMesh3 *)local_1f8[uVar44];
              uVar34 = UE::Geometry::FDynamicMesh3::AppendTriangle
                                 (pFVar9,(FIndex3i *)&local_2e0._s_0,0);
              if (uVar34 < 0x80000000) {
                pFVar10 = (pFVar9->AttributeSet).Ptr;
                pFVar28 = (FDynamicMeshAttributeSet *)0x0;
                if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
                  pFVar28 = pFVar10;
                }
                local_248[0] = local_2e8;
                UE::Geometry::TDynamicVector<int,512>::InsertAt
                          ((TDynamicVector<int,512> *)&((pFVar28->MaterialIDAttrib).Ptr)->field_0x18
                           ,(int *)local_248,uVar34);
              }
              else {
                bVar21 = Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<5943927746286585844>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                    ,0x7f4,"TID > -1");
                if (bVar21) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              FVar32.Data = FVar32.Data + 0xc;
            }
            uVar39 = (ulonglong)((int)uVar39 + 1);
            uVar44 = uVar44 + 1;
          } while ((longlong)uVar44 < local_2b0);
        }
        if (local_298.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Triangles.AllocatorInstance.Data);
        }
        if (local_298.HoleEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.HoleEdges.AllocatorInstance.Data);
        }
        if (local_298.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Edges.AllocatorInstance.Data);
        }
        if (local_298.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Vertices.AllocatorInstance.Data);
        }
        DestructItems<UE::Geometry::TPolygon2<float>,int>(local_208,(int)local_200);
        if (local_208 != (TPolygon2<float> *)0x0) {
          FMemory::Free(local_208);
        }
        if (local_220.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Vertices.AllocatorInstance.Data);
        }
        uVar34 = __xmm_80000000800000008000000080000000;
        if (local_2f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data);
          uVar34 = __xmm_80000000800000008000000080000000;
        }
      }
      else {
        iVar23 = 1;
        lVar30 = local_2b0;
        iVar33 = 2;
        if (2 < *(int *)(pFVar40 + 8)) {
          do {
            iVar42 = iVar33;
            iVar33 = 0;
            lVar31 = 0;
            if (0 < lVar30) {
              do {
                local_238._s_0.A = *(int *)((longlong)&local_2b8 + lVar31 * 4);
                local_238._s_0.B = local_238._s_0.A + iVar23;
                local_238._s_0.C = local_238._s_0.A + iVar42;
                if ((iVar33 == 1) && (uVar41 != this->OutsideCellIndex)) {
                  local_238._s_0.B = local_238._s_0.A + iVar42;
                  local_238._s_0.C = local_238._s_0.A + iVar23;
                }
                pFVar9 = (FDynamicMesh3 *)local_1f8[lVar31];
                uVar24 = UE::Geometry::FDynamicMesh3::AppendTriangle
                                   (pFVar9,(FIndex3i *)&local_238._s_0,0);
                if (uVar24 < 0x80000000) {
                  pFVar10 = (pFVar9->AttributeSet).Ptr;
                  pFVar28 = (FDynamicMeshAttributeSet *)0x0;
                  if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
                    pFVar28 = pFVar10;
                  }
                  local_240[0] = local_2e8;
                  UE::Geometry::TDynamicVector<int,512>::InsertAt
                            ((TDynamicVector<int,512> *)
                             &((pFVar28->MaterialIDAttrib).Ptr)->field_0x18,(int *)local_240,uVar24)
                  ;
                }
                else {
                  bVar21 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<5943927746286585807>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                      ,1999,"TID > -1");
                  if (bVar21) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                iVar33 = iVar33 + 1;
                lVar31 = lVar31 + 1;
                lVar30 = local_2b0;
                pFVar40 = local_188;
              } while (lVar31 < local_2b0);
            }
            iVar33 = iVar42 + 1;
            iVar23 = iVar42;
          } while (iVar42 + 1 < *(int *)(pFVar40 + 8));
        }
      }
      local_2fc = local_2fc + 1;
      local_2a0 = local_2a0 + 1;
    } while ((int)local_2fc < (param_2->PlaneCells).ArrayNum);
  }
  return;
}

// CreateMeshesForSinglePlane @ 14c9c3190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PlanarCut::FCellMeshes::CreateMeshesForSinglePlane
          (FCellMeshes *this,FPlanarCells *param_1,TAxisAlignedBox3<double> *param_2,bool param_3,
          double param_4,double param_5,bool param_6)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  FDynamicMesh3 *pFVar5;
  FDynamicMeshAttributeSet *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  int iVar20;
  TAxisAlignedBox3<double> *pTVar21;
  longlong lVar22;
  TVector<double> *pTVar23;
  ulonglong uVar24;
  int iVar25;
  longlong *plVar26;
  FDynamicMeshAttributeSet *pFVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  ForAnyElementType FVar32;
  FDynamicMeshAttributeSet *pFVar33;
  ulonglong uVar34;
  int iVar35;
  double *pdVar36;
  FScriptContainerElement *pFVar37;
  FCellMeshes *pFVar38;
  FDynamicMeshAttributeSet *pFVar39;
  uint uVar40;
  FDynamicMeshAttributeSet *pFVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  float fVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auStackY_a88 [32];
  undefined1 local_a36 [6];
  TArray<int,TSizedDefaultAllocator<32>_> local_a30;
  uint local_a20;
  uint local_a1c;
  TArray<int,TSizedDefaultAllocator<32>_> local_a18;
  TArray<int,TSizedDefaultAllocator<32>_> local_a08;
  uint local_9f8;
  int local_9f4;
  int local_9f0 [2];
  undefined8 local_9e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_9e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_9d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_9c0;
  FCellMeshes *local_9b0;
  int local_9a8 [2];
  double local_9a0;
  double local_998;
  double local_990 [3];
  TPlane<double> local_978;
  FDynamicMeshEditor local_958;
  TVector<double>_u_0 local_950;
  TVector<double>_u_0 local_938;
  float local_920;
  float local_91c;
  float local_918;
  undefined8 local_914;
  float local_90c;
  TVector2<float>_u_0 local_908;
  undefined1 local_900;
  undefined2 local_8ff;
  FIndex3i_u_0 local_8f8;
  FIndex3i_u_0 local_8ec;
  FIndex3i_u_0 local_8e0;
  FIndex3i_u_0 local_8d4;
  FDynamicMeshEditResult local_8c8;
  FDynamicMeshEditResult local_858;
  FDynamicMeshEditor local_7e8;
  TVector<double>_u_0 local_7e0;
  TQuaternion<double>_u_0 local_7c8;
  TVector<double>_u_0 local_7a8;
  TVector<double>_u_0 local_788;
  TVector<double>_u_0 local_770;
  double local_758;
  double dStack_750;
  double local_748;
  double local_740;
  double dStack_738;
  double local_730;
  code *local_728 [5];
  undefined8 *local_700;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_6f8;
  TVector<double> local_6c8;
  TVector<double> local_6b0;
  TVector<double> local_698;
  FDynamicMesh3 local_678;
  undefined1 local_448 [104];
  longlong *local_3e0;
  ForAnyElementType local_3d8;
  undefined8 local_3d0;
  bool local_3c8;
  ForAnyElementType local_3c0;
  undefined8 local_3b8;
  FMeshIndexMappings local_3a8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_a88;
  uVar34 = 0;
  local_9b0 = this;
  if (((param_1->Planes).ArrayNum < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar37 = (param_1->Planes).AllocatorInstance.Data;
  local_978._padding_ = *(longlong *)pFVar37;
  local_978._padding_ = *(longlong *)(pFVar37 + 8);
  local_978._padding_ = *(longlong *)(pFVar37 + 0x10);
  local_978.W = *(double *)(pFVar37 + 0x18);
  PlanarCut::`anonymous_namespace'::AxisAlignedFrame((TFrame3<double> *)&local_7e0._s_0,&local_978);
  local_9a0 = __real_7fefffffffffffff;
  local_998 = __real_ffefffffffffffff;
  uVar24 = uVar34;
  dVar44 = __real_7fefffffffffffff;
  dVar9 = __real_7fefffffffffffff;
  dVar12 = __real_ffefffffffffffff;
  dVar42 = __real_ffefffffffffffff;
  do {
    uVar18 = local_7e0._s_0.Z;
    uVar17 = local_7e0._s_0.Y;
    uVar16 = local_7e0._s_0.X;
    uVar40 = (uint)uVar24;
    pTVar21 = (TAxisAlignedBox3<double> *)&param_2->Max;
    if ((((uint)(uVar24 >> 1) ^ uVar40) & 1) == 0) {
      pTVar21 = param_2;
    }
    dVar1 = (pTVar21->Min).field0_0x0._s_0.X;
    lVar22 = 8;
    if ((uVar24 & 2) != 0) {
      lVar22 = 0x20;
    }
    dVar43 = *(double *)((longlong)&(param_2->Min).field0_0x0 + lVar22);
    lVar22 = 0x10;
    if (3 < uVar40) {
      lVar22 = 0x28;
    }
                    /* WARNING: Load size is inaccurate */
    local_9e8 = *(TVector2<float>_u_0 *)
                 ((TVector2<float>_u_0 *)((longlong)&(param_2->Min).field0_0x0 + lVar22))->XY;
    pTVar23 = UE::Geometry::TFrame3<double>::GetAxis
                        ((TFrame3<double> *)&local_7e0._s_0,&local_6c8,0);
    dVar11 = dVar43 - (double)uVar17;
    dVar46 = dVar1 - (double)uVar16;
    dVar8 = (double)local_9e8 - (double)uVar18;
    dVar10 = dVar11 * (pTVar23->field0_0x0)._s_0.Y + dVar46 * (pTVar23->field0_0x0)._s_0.X +
             dVar8 * (pTVar23->field0_0x0)._s_0.Z;
    pTVar23 = UE::Geometry::TFrame3<double>::GetAxis
                        ((TFrame3<double> *)&local_7e0._s_0,&local_6b0,1);
    lVar15 = local_978._padding_;
    lVar14 = local_978._padding_;
    lVar22 = local_978._padding_;
    dVar8 = dVar11 * (pTVar23->field0_0x0)._s_0.Y + dVar46 * (pTVar23->field0_0x0)._s_0.X +
            dVar8 * (pTVar23->field0_0x0)._s_0.Z;
    if (dVar10 < dVar44) {
      dVar44 = dVar10;
    }
    if (dVar12 < dVar10) {
      dVar12 = dVar10;
    }
    if (dVar8 < dVar9) {
      dVar9 = dVar8;
    }
    if (dVar42 < dVar8) {
      dVar42 = dVar8;
    }
    uVar24 = (ulonglong)(uVar40 + 1);
    dVar43 = ((double)local_978._padding_ * dVar43 + (double)local_978._padding_ * dVar1 +
             (double)local_978._padding_ * (double)local_9e8) - local_978.W;
    dVar1 = dVar43;
    if (local_9a0 <= dVar43) {
      dVar1 = local_9a0;
    }
    if (dVar43 <= local_998) {
      dVar43 = local_998;
    }
    local_9a0 = dVar1;
    local_998 = dVar43;
  } while ((int)(uVar40 + 1) < 8);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_678,true,true,false,false);
  pFVar38 = local_9b0;
  AugmentedDynamicMesh::EnableUVChannels(&local_678,local_9b0->NumUVLayers,false,true);
  local_938._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_938._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_938._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_90c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_908 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_8ff = 1;
  local_900 = 1;
  local_920 = (float)((uint)(float)(double)lVar22 ^ __xmm_80000000800000008000000080000000);
  local_914 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_91c = (float)((uint)(float)(double)lVar14 ^ __xmm_80000000800000008000000080000000);
  local_918 = (float)((uint)(float)(double)lVar15 ^ __xmm_80000000800000008000000080000000);
  fVar45 = (float)param_4;
  uVar24 = uVar34;
  do {
    iVar35 = (int)uVar24;
    iVar20 = (int)(uVar24 / 3) * 3;
    local_770._s_0.X = dVar12;
    if (iVar35 == iVar20) {
      local_770._s_0.X = dVar44;
    }
    local_770._s_0.Y = dVar42;
    if ((uVar24 & 2) == 0) {
      local_770._s_0.Y = dVar9;
    }
    local_770._s_0.Z = 0.0;
    pTVar23 = UE::Geometry::operator*<double>
                        (&local_698,(TQuaternion<double> *)&local_7c8._s_0,
                         (TVector<double> *)&local_770._s_0);
    local_938._s_0.Y = local_7e0._s_0.Y + (pTVar23->field0_0x0)._s_0.Y;
    local_938._s_0.Z = local_7e0._s_0.Z + (pTVar23->field0_0x0)._s_0.Z;
    local_938._s_0.X = local_7e0._s_0.X + (pTVar23->field0_0x0)._s_0.X;
    dVar1 = dVar12;
    if (iVar35 == iVar20) {
      dVar1 = dVar44;
    }
    dVar43 = dVar42;
    if ((uVar24 & 2) == 0) {
      dVar43 = dVar9;
    }
    local_9e8._4_4_ = (float)(dVar43 - dVar9) * fVar45;
    local_9e8._0_4_ = (float)(dVar1 - dVar44) * fVar45;
    iVar20 = UE::Geometry::FDynamicMesh3::AppendVertex(&local_678,(FVertexInfo *)&local_938._s_0);
    AugmentedDynamicMesh::SetAllUV
              (&local_678,iVar20,(TVector2<float>)local_9e8,pFVar38->NumUVLayers);
    uVar24 = (ulonglong)(iVar35 + 1U);
  } while ((int)(iVar35 + 1U) < 4);
  local_8d4._s_0.A = 0;
  local_8d4._s_0.B = 1;
  local_8d4._s_0.C = 2;
  UE::Geometry::FDynamicMesh3::AppendTriangle(&local_678,(FIndex3i *)&local_8d4._s_0,0);
  local_8f8._s_0.A = 0;
  local_8f8._s_0.B = 2;
  local_8f8._s_0.C = 3;
  UE::Geometry::FDynamicMesh3::AppendTriangle(&local_678,(FIndex3i *)&local_8f8._s_0,0);
  dVar1 = __real_3ff0000000000000;
  if (param_3) {
    if (((param_1->InternalSurfaceMaterials).NoiseSettings.bIsSet == false) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    dVar42 = dVar42 - dVar9;
    dVar12 = dVar12 - dVar44;
    dVar44 = (double)(param_1->InternalSurfaceMaterials).NoiseSettings.TypedValue.PointSpacing;
    if (dVar42 <= 0.0) {
      dVar42 = 0.0;
    }
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    auVar47._8_8_ = 0;
    auVar47._0_8_ = (double)(float)(dVar42 * dVar12) * __real_3eb0c6f7a0b5ed8d;
    auVar47 = sqrtpd(ZEXT416((uint)fVar45),auVar47);
    dVar42 = auVar47._0_8_;
    if (auVar47._0_8_ <= __real_3f50624dd2f1a9fc) {
      dVar42 = __real_3f50624dd2f1a9fc;
    }
    if (dVar42 <= dVar44) {
      dVar42 = dVar44;
    }
    if ((dVar44 < dVar42) && (2 < (byte)LogPlanarCut._0_1_)) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlanarCut);
    }
    RemeshForNoise(pFVar38,&local_678,SplitsOnly,dVar42);
    if (((param_1->InternalSurfaceMaterials).NoiseSettings.bIsSet == false) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_7a8._s_0.X =
         (local_7c8._s_0.Y + local_7c8._s_0.Y) * local_7c8._s_0.W +
         (local_7c8._s_0.Z + local_7c8._s_0.Z) * local_7c8._s_0.X;
    local_7a8._s_0.Y =
         (local_7c8._s_0.Z + local_7c8._s_0.Z) * local_7c8._s_0.Y -
         (local_7c8._s_0.X + local_7c8._s_0.X) * local_7c8._s_0.W;
    local_7a8._s_0.Z =
         dVar1 - ((local_7c8._s_0.Y + local_7c8._s_0.Y) * local_7c8._s_0.Y +
                 (local_7c8._s_0.X + local_7c8._s_0.X) * local_7c8._s_0.X);
    ApplyNoise(pFVar38,&local_678,(TVector<double> *)&local_7a8._s_0,
               &(param_1->InternalSurfaceMaterials).NoiseSettings.TypedValue,true);
    UE::Geometry::FMeshNormals::QuickComputeVertexNormals(&local_678,false);
  }
  local_448._0_8_ = &local_678;
  local_a08.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a08.ArrayNum = 0;
  local_a08.ArrayMax = 0;
  local_a18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a18.ArrayNum = 0;
  local_a18.ArrayMax = 0;
  local_448._8_8_ = (FEdgeLoop *)0x0;
  local_448._16_4_ = 0;
  local_448._20_4_ = 0;
  local_448._24_8_ = (FEdgeSpan *)0x0;
  local_448._32_4_ = 0;
  local_448._36_4_ = 0;
  local_448[0x28] = false;
  local_448[0x29] = false;
  local_448[0x2a] = false;
  local_448._44_4_ = Compute;
  local_448._48_4_ = ConvertToOpenSpan;
  local_448._64_8_ = 0;
  local_3e0 = (longlong *)0x0;
  local_3d8.Data = (FScriptContainerElement *)0x0;
  local_3d0._0_4_ = 0;
  local_3d0._4_4_ = 0;
  local_3c8 = false;
  local_3c0.Data = (FScriptContainerElement *)0x0;
  local_3b8._0_4_ = 0;
  local_3b8._4_4_ = 0;
  UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_448);
  if ((int)local_448._16_4_ < 1) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar19) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  piVar4 = *(int **)(local_448._8_8_ + 8);
  for (piVar31 = piVar4; piVar31 != piVar4 + *(int *)(local_448._8_8_ + 0x10); piVar31 = piVar31 + 1
      ) {
    if (*piVar31 == 0) {
      iVar20 = (int)((longlong)piVar31 - (longlong)piVar4 >> 2);
      goto LAB_14c9c3917;
    }
  }
  iVar20 = -1;
LAB_14c9c3917:
  if (((int)local_448._16_4_ < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (&local_a08 != (TArray<int,TSizedDefaultAllocator<32>_> *)(local_448._8_8_ + 8)) {
    iVar35 = *(int *)(local_448._8_8_ + 0x10);
    pFVar37 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(local_448._8_8_ + 8))->AllocatorInstance
              ).Data;
    local_a08.ArrayNum = iVar35;
    if (((iVar35 != 0) || (local_a08.ArrayMax != 0)) &&
       (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar35,local_a08.ArrayMax,&local_a08.AllocatorInstance,iVar35,
                   &local_a08.ArrayMax), iVar35 != 0)) {
      memcpy(local_a08.AllocatorInstance.Data,pFVar37,(longlong)iVar35 << 2);
    }
  }
  if (iVar20 != 0) {
    AlgoImpl::RotateInternal<int>((int *)local_a08.AllocatorInstance.Data,local_a08.ArrayNum,iVar20)
    ;
  }
  local_9f8 = 0;
  if (((local_a18.AllocatorInstance.Data <= (FScriptContainerElement *)&local_9f8) &&
      ((FScriptContainerElement *)&local_9f8 <
       local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 4)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar20 = local_a18.ArrayNum;
  if (local_a18.ArrayNum == local_a18.ArrayMax) {
    iVar20 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
  }
  local_a20 = 0;
  local_a18.ArrayNum = iVar20 + 1;
  iVar35 = 1;
  *(uint *)(local_a18.AllocatorInstance.Data + (longlong)iVar20 * 4) = local_9f8;
  uVar24 = uVar34;
  iVar20 = local_a08.ArrayNum;
  if (0 < local_a08.ArrayNum) {
    do {
      uVar29 = (uint)uVar24;
      uVar40 = 0;
      if ((int)uVar29 < iVar20) {
        uVar40 = ~uVar29 >> 0x1f;
      }
      if (uVar40 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar20 = local_a08.ArrayNum;
      }
      if (*(int *)(local_a08.AllocatorInstance.Data + (longlong)(int)uVar29 * 4) == iVar35) {
        iVar35 = iVar35 + 1;
        if (((local_a18.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a20) &&
            ((FScriptContainerElement *)&local_a20 <
             local_a18.AllocatorInstance.Data + (longlong)local_a18.ArrayMax * 4)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar20 = local_a18.ArrayNum;
        if (local_a18.ArrayNum == local_a18.ArrayMax) {
          iVar20 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_a18.AllocatorInstance,&local_a18.ArrayMax);
        }
        local_a18.ArrayNum = iVar20 + 1;
        *(uint *)(local_a18.AllocatorInstance.Data + (longlong)iVar20 * 4) = local_a20;
        iVar20 = local_a08.ArrayNum;
      }
      local_a20 = local_a20 + 1;
      uVar24 = (ulonglong)local_a20;
    } while ((int)local_a20 < iVar20);
  }
  if (local_3c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data);
  }
  if (local_3d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data);
  }
  if (local_448._64_8_ != 0) {
    plVar26 = (longlong *)(local_448 + 0x50);
    if (local_3e0 != (longlong *)0x0) {
      plVar26 = local_3e0;
    }
    (**(code **)(*plVar26 + 0x10))();
  }
  DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_448._24_8_,local_448._32_4_);
  if ((FEdgeSpan *)local_448._24_8_ != (FEdgeSpan *)0x0) {
    FMemory::Free((void *)local_448._24_8_);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_448._8_8_,local_448._16_4_);
  if ((FEdgeLoop *)local_448._8_8_ != (FEdgeLoop *)0x0) {
    FMemory::Free((void *)local_448._8_8_);
  }
  dVar12 = local_998;
  dVar42 = local_9a0;
  fVar45 = __real_3f800000;
  if (!param_6) {
    local_9e8 = local_9e8 & 0xffffffff00000000;
    uVar24 = uVar34;
    do {
      uVar28 = 0;
      iVar20 = (int)uVar24;
      if (((pFVar38->CellMeshes).Array.ArrayNum <= iVar20) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = *(FDynamicMesh3 **)((pFVar38->CellMeshes).Array.AllocatorInstance.Data + uVar34);
      *(FDynamicMesh3 **)((longlong)local_990 + uVar34) = pFVar5;
      UE::Geometry::FDynamicMesh3::operator=(pFVar5,&local_678);
      local_a30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a30.ArrayNum = 0;
      local_a30.ArrayMax = 0;
      local_9d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9d0.ArrayNum = 0;
      local_9d0.ArrayMax = 0;
      dVar44 = dVar12;
      if (iVar20 == 0) {
        UE::Geometry::FDynamicMesh3::ReverseOrientation(pFVar5,true);
        dVar44 = dVar42;
      }
      local_a1c = 0;
      dVar43 = (double)local_978._padding_ * dVar44;
      dVar9 = (double)local_978._padding_ * dVar44;
      local_918 = ((float)iVar20 + (float)iVar20) - fVar45;
      local_920 = (float)(double)local_978._padding_ * local_918;
      local_91c = (float)(double)local_978._padding_ * local_918;
      local_918 = (float)(double)local_978._padding_ * local_918;
      dVar44 = (double)local_978._padding_ * dVar44;
      do {
        uVar24 = (ulonglong)((uint)uVar28 & 0x1ff);
        lVar22 = *(longlong *)((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (uVar28 >> 9) * 8)
        ;
        pdVar36 = (double *)(lVar22 + uVar24 * 0x18);
        local_758 = *pdVar36;
        dStack_750 = pdVar36[1];
        local_748 = *(double *)(lVar22 + 0x10 + uVar24 * 0x18);
        local_938._s_0.X = dVar43 + local_758;
        local_938._s_0.Y = dVar9 + dStack_750;
        local_938._s_0.Z = dVar44 + local_748;
        local_9f4 = UE::Geometry::FDynamicMesh3::AppendVertex(pFVar5,(FVertexInfo *)&local_938._s_0)
        ;
        if (((local_a30.AllocatorInstance.Data <= (FScriptContainerElement *)&local_9f4) &&
            ((FScriptContainerElement *)&local_9f4 <
             local_a30.AllocatorInstance.Data + (longlong)local_a30.ArrayMax * 4)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar20 = local_a30.ArrayNum;
        if (local_a30.ArrayNum == local_a30.ArrayMax) {
          iVar20 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_a30.AllocatorInstance,&local_a30.ArrayMax);
        }
        local_a30.ArrayNum = iVar20 + 1;
        *(int *)(local_a30.AllocatorInstance.Data + (longlong)iVar20 * 4) = local_9f4;
        if (((local_9d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a1c) &&
            ((FScriptContainerElement *)&local_a1c <
             local_9d0.AllocatorInstance.Data + (longlong)local_9d0.ArrayMax * 4)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar20 = local_9d0.ArrayNum;
        if (local_9d0.ArrayNum == local_9d0.ArrayMax) {
          iVar20 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_9d0.AllocatorInstance,&local_9d0.ArrayMax);
        }
        local_9d0.ArrayNum = iVar20 + 1;
        *(uint *)(local_9d0.AllocatorInstance.Data + (longlong)iVar20 * 4) = local_a1c;
        local_a1c = local_a1c + 1;
        uVar28 = (ulonglong)local_a1c;
      } while ((int)local_a1c < 4);
      if (local_a30.ArrayNum < 3) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar20 = *(int *)(local_a30.AllocatorInstance.Data + 8);
      iVar35 = local_a30.ArrayNum;
      if (local_a30.ArrayNum < 2) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar35 = local_a30.ArrayNum;
      }
      iVar25 = *(int *)(local_a30.AllocatorInstance.Data + 4);
      if ((iVar35 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_8e0._s_0.A = *(undefined4 *)local_a30.AllocatorInstance.Data;
      local_8e0._s_0.B = iVar25;
      local_8e0._s_0.C = iVar20;
      iVar20 = UE::Geometry::FDynamicMesh3::AppendTriangle(pFVar5,(FIndex3i *)&local_8e0._s_0,0);
      pFVar5 = *(FDynamicMesh3 **)((longlong)local_990 + uVar34);
      if (local_a30.ArrayNum < 4) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar35 = *(int *)(local_a30.AllocatorInstance.Data + 0xc);
      iVar25 = local_a30.ArrayNum;
      if (local_a30.ArrayNum < 3) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar25 = local_a30.ArrayNum;
      }
      iVar2 = *(int *)(local_a30.AllocatorInstance.Data + 8);
      if ((iVar25 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_8ec._s_0.A = *(undefined4 *)local_a30.AllocatorInstance.Data;
      local_8ec._s_0.B = iVar2;
      local_8ec._s_0.C = iVar35;
      iVar35 = UE::Geometry::FDynamicMesh3::AppendTriangle(pFVar5,(FIndex3i *)&local_8ec._s_0,0);
      fVar13 = (float)(undefined4)local_9e8;
      if ((float)(undefined4)local_9e8 == 1.4013e-45) {
        UE::Geometry::FDynamicMesh3::ReverseTriOrientation(pFVar5,iVar20);
        UE::Geometry::FDynamicMesh3::ReverseTriOrientation(pFVar5,iVar35);
      }
      local_8c8.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8c8.NewVertices.ArrayNum = 0;
      local_8c8.NewVertices.ArrayMax = 0;
      local_8c8.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8c8.NewTriangles.ArrayNum = 0;
      local_8c8.NewTriangles.ArrayMax = 0;
      local_8c8.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8c8.NewQuads.ArrayNum = 0;
      local_8c8.NewQuads.ArrayMax = 0;
      local_8c8.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8c8.NewPolygons.ArrayNum = 0;
      local_8c8.NewPolygons.ArrayMax = 0;
      local_8c8.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8c8.NewGroups.ArrayNum = 0;
      local_8c8.NewGroups.ArrayMax = 0;
      local_8c8.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8c8.NewNormalOverlayElements.ArrayNum = 0;
      local_8c8.NewNormalOverlayElements.ArrayMax = 0;
      local_8c8.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8c8.NewColorOverlayElements.ArrayNum = 0;
      local_8c8.NewColorOverlayElements.ArrayMax = 0;
      local_7e8.Mesh = pFVar5;
      UE::Geometry::FDynamicMeshEditor::StitchSparselyCorrespondedVertexLoops
                (&local_7e8,&local_a08,&local_a18,&local_a30,&local_9d0,&local_8c8,fVar13 == 0.0);
      if (local_8c8.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_8c8.NewColorOverlayElements.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 local_8c8.NewNormalOverlayElements.AllocatorInstance.Data,
                 local_8c8.NewNormalOverlayElements.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)
          local_8c8.NewNormalOverlayElements.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_8c8.NewNormalOverlayElements.AllocatorInstance.Data);
      }
      if (local_8c8.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.NewGroups.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 local_8c8.NewPolygons.AllocatorInstance.Data,local_8c8.NewPolygons.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_8c8.NewPolygons.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_8c8.NewPolygons.AllocatorInstance.Data);
      }
      if (local_8c8.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.NewQuads.AllocatorInstance.Data);
      }
      if (local_8c8.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.NewTriangles.AllocatorInstance.Data);
      }
      if (local_8c8.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.NewVertices.AllocatorInstance.Data);
      }
      if (local_9d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9d0.AllocatorInstance.Data);
      }
      if (local_a30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a30.AllocatorInstance.Data);
      }
      uVar40 = (int)fVar13 + 1;
      uVar24 = (ulonglong)uVar40;
      uVar34 = uVar34 + 8;
      local_9e8._0_4_ = uVar40;
      pFVar38 = local_9b0;
    } while ((int)uVar40 < 2);
  }
  pFVar39 = (FDynamicMeshAttributeSet *)0x0;
  if (0.0 < param_5) {
    uVar40 = (param_6 ^ 1) * 2;
    if (((pFVar38->CellMeshes).Array.ArrayNum <= (int)uVar40) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    dVar42 = param_5 * __real_3fe0000000000000;
    pFVar5 = *(FDynamicMesh3 **)
              ((pFVar38->CellMeshes).Array.AllocatorInstance.Data + (ulonglong)uVar40 * 8);
    local_950._s_0.X = (double)local_978._padding_ * dVar42;
    local_950._s_0.Y = (double)local_978._padding_ * dVar42;
    local_950._s_0.Z = (double)local_978._padding_ * dVar42;
    if (!param_6) {
      pdVar36 = local_990;
      pFVar33 = pFVar39;
      do {
        dVar42 = (double)(int)pFVar33;
        dVar42 = (dVar42 + dVar42) - dVar1;
        local_788._s_0.X = local_950._s_0.X * dVar42;
        local_788._s_0.Y = local_950._s_0.Y * dVar42;
        local_788._s_0.Z = local_950._s_0.Z * dVar42;
        MeshTransforms::Translate((FDynamicMesh3 *)*pdVar36,(TVector<double> *)&local_788._s_0,All);
        uVar40 = (int)pFVar33 + 1;
        pFVar33 = (FDynamicMeshAttributeSet *)(ulonglong)uVar40;
        pdVar36 = pdVar36 + 1;
      } while ((int)uVar40 < 2);
    }
    UE::Geometry::FDynamicMesh3::operator=(pFVar5,&local_678);
    UE::Geometry::FDynamicMesh3::ReverseOrientation(pFVar5,true);
    MeshTransforms::Translate(pFVar5,(TVector<double> *)&local_950._s_0,All);
    UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_3a8);
    uVar18 = local_950._s_0.Z;
    uVar17 = local_950._s_0.Y;
    uVar16 = local_950._s_0.X;
    local_740 = local_950._s_0.X;
    dStack_738 = local_950._s_0.Y;
    local_6f8._0_8_ = 0;
    local_6f8._40_8_ = 0;
    local_730 = local_950._s_0.Z;
    local_728[0] = (code *)0x0;
    local_958.Mesh = pFVar5;
    local_700 = FMemory::Malloc(0x20,8);
    local_700[1] = uVar16;
    local_700[2] = uVar17;
    local_700[3] = uVar18;
    *local_700 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::PlanarCut::FCellMeshes::CreateMeshesForSinglePlane'::`37'::<lambda_1>,0,1>
                  ::_vftable_;
    if (local_700 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_728[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::PlanarCut::FCellMeshes::CreateMeshesForSinglePlane'::__l37::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                     ::Call;
    }
    UE::Geometry::FDynamicMeshEditor::AppendMesh
              (&local_958,&local_678,&local_3a8,
               (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                *)local_728,&local_6f8,false);
    uVar34 = local_a08._8_8_ & 0xffffffff;
    local_9e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9e0.ArrayNum = 0;
    local_9e0.ArrayMax = 0;
    if (local_a08.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar34);
    }
    if (0 < local_a08.ArrayNum) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_a08.ArrayNum,&local_9e0.AllocatorInstance,0,&local_9e0.ArrayMax);
      uVar34 = local_a08._8_8_ & 0xffffffff;
    }
    FVar32.Data = local_a08.AllocatorInstance.Data;
    local_9c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar40 = (uint)uVar34;
    local_9c0.ArrayNum = uVar40;
    if (uVar40 == 0) {
      local_9c0.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar40,0,&local_9c0.AllocatorInstance,uVar40,&local_9c0.ArrayMax);
      memcpy(local_9c0.AllocatorInstance.Data,FVar32.Data,(longlong)(int)uVar40 << 2);
      uVar34 = (ulonglong)(uint)local_9c0.ArrayNum;
    }
    iVar20 = (int)uVar34 / 2;
    if (0 < iVar20) {
      pFVar33 = pFVar39;
      pFVar37 = local_9c0.AllocatorInstance.Data + (longlong)((int)uVar34 + -1) * 4;
      do {
        uVar3 = *(undefined4 *)(local_9c0.AllocatorInstance.Data + (longlong)pFVar33 * 4);
        *(undefined4 *)(local_9c0.AllocatorInstance.Data + (longlong)pFVar33 * 4) =
             *(undefined4 *)pFVar37;
        pFVar33 = (FDynamicMeshAttributeSet *)((longlong)&pFVar33->_padding_ + 1);
        *(undefined4 *)pFVar37 = uVar3;
        pFVar37 = pFVar37 + -4;
      } while ((longlong)pFVar33 < (longlong)iVar20);
      uVar34 = (ulonglong)(uint)local_9c0.ArrayNum;
    }
    iVar20 = (int)uVar34;
    pFVar37 = local_9c0.AllocatorInstance.Data + (longlong)iVar20 * 4;
    FVar32.Data = local_9c0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar34 != iVar20) {
        local_a36[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_a36);
      }
      if (FVar32.Data == pFVar37) break;
      local_9f0[0] = UE::Geometry::TIndexMap<int>::GetTo(&local_3a8.VertexMap,*(int *)FVar32.Data);
      if (((local_9e0.AllocatorInstance.Data <= (FScriptContainerElement *)local_9f0) &&
          ((FScriptContainerElement *)local_9f0 <
           local_9e0.AllocatorInstance.Data + (longlong)local_9e0.ArrayMax * 4)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar35 = local_9e0.ArrayNum;
      if (local_9e0.ArrayNum == local_9e0.ArrayMax) {
        iVar35 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_9e0.AllocatorInstance,&local_9e0.ArrayMax);
      }
      FVar32.Data = FVar32.Data + 4;
      local_9e0.ArrayNum = iVar35 + 1;
      *(int *)(local_9e0.AllocatorInstance.Data + (longlong)iVar35 * 4) = local_9f0[0];
      uVar34 = (ulonglong)(uint)local_9c0.ArrayNum;
    }
    local_858.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_858.NewVertices.ArrayNum = 0;
    local_858.NewVertices.ArrayMax = 0;
    local_858.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_858.NewTriangles.ArrayNum = 0;
    local_858.NewTriangles.ArrayMax = 0;
    local_858.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_858.NewQuads.ArrayNum = 0;
    local_858.NewQuads.ArrayMax = 0;
    local_858.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_858.NewPolygons.ArrayNum = 0;
    local_858.NewPolygons.ArrayMax = 0;
    local_858.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_858.NewGroups.ArrayNum = 0;
    local_858.NewGroups.ArrayMax = 0;
    local_858.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_858.NewNormalOverlayElements.ArrayNum = 0;
    local_858.NewNormalOverlayElements.ArrayMax = 0;
    local_858.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_858.NewColorOverlayElements.ArrayNum = 0;
    local_858.NewColorOverlayElements.ArrayMax = 0;
    UE::Geometry::FDynamicMeshEditor::StitchVertexLoopsMinimal
              (&local_958,&local_9c0,&local_9e0,&local_858);
    if (local_858.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_858.NewColorOverlayElements.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_858.NewNormalOverlayElements.AllocatorInstance.Data,
               local_858.NewNormalOverlayElements.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)
        local_858.NewNormalOverlayElements.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_858.NewNormalOverlayElements.AllocatorInstance.Data);
    }
    if (local_858.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.NewGroups.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_858.NewPolygons.AllocatorInstance.Data,local_858.NewPolygons.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_858.NewPolygons.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_858.NewPolygons.AllocatorInstance.Data);
    }
    if (local_858.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.NewQuads.AllocatorInstance.Data);
    }
    if (local_858.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.NewTriangles.AllocatorInstance.Data);
    }
    if (local_858.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.NewVertices.AllocatorInstance.Data);
    }
    if (local_9c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c0.AllocatorInstance.Data);
    }
    if (local_9e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e0.AllocatorInstance.Data);
    }
    UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_3a8);
  }
  iVar20 = (pFVar38->CellMeshes).Array.ArrayNum;
  pFVar33 = pFVar39;
  pFVar41 = pFVar39;
  if (0 < iVar20) {
    do {
      uVar29 = (uint)pFVar33;
      uVar40 = 0;
      if ((int)uVar29 < iVar20) {
        uVar40 = ~uVar29 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = *(FDynamicMesh3 **)
                ((longlong)&pFVar41->_padding_ +
                (longlong)(pFVar38->CellMeshes).Array.AllocatorInstance.Data);
      AugmentedDynamicMesh::Augment(pFVar5,pFVar38->NumUVLayers);
      uVar40 = (pFVar5->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar5->TriangleRefCounts).RefCounts.CurBlockUsed;
      pFVar33 = pFVar39;
      if ((uVar40 == 0) ||
         (pFVar37 = (pFVar5->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
         (ushort)(**(short **)pFVar37 - 1U) < 0xfffe)) {
LAB_14c9c48c4:
        uVar30 = (uint)pFVar33;
      }
      else {
        pFVar33 = (FDynamicMeshAttributeSet *)&DAT_00000001;
        uVar30 = 1;
        if (1 < (int)uVar40) {
          do {
            uVar34 = (ulonglong)((uint)pFVar33 & 0x1ff);
            pFVar38 = local_9b0;
            if ((*(short *)(*(longlong *)(pFVar37 + ((ulonglong)pFVar33 >> 9) * 8) + uVar34 * 2) !=
                 0) && (*(short *)(*(longlong *)(pFVar37 + ((ulonglong)pFVar33 >> 9) * 8) +
                                  uVar34 * 2) != -1)) break;
            uVar30 = (uint)pFVar33 + 1;
            pFVar33 = (FDynamicMeshAttributeSet *)(ulonglong)uVar30;
          } while ((int)uVar30 < (int)uVar40);
          goto LAB_14c9c48c4;
        }
      }
      if (uVar30 != uVar40) {
        local_9a8[0] = -1;
LAB_14c9c48d0:
        do {
          pFVar6 = (pFVar5->AttributeSet).Ptr;
          pFVar27 = pFVar39;
          if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar27 = pFVar6;
          }
          UE::Geometry::TDynamicVector<int,512>::InsertAt
                    ((TDynamicVector<int,512> *)&((pFVar27->MaterialIDAttrib).Ptr)->field_0x18,
                     local_9a8,(uint)pFVar33);
          uVar30 = (uint)pFVar33 + 1;
          pFVar33 = (FDynamicMeshAttributeSet *)(ulonglong)uVar30;
          if ((int)uVar30 < (int)uVar40) {
            do {
              uVar34 = (ulonglong)((uint)pFVar33 & 0x1ff);
              lVar22 = *(longlong *)
                        ((pFVar5->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        ((ulonglong)pFVar33 >> 9) * 8);
              if ((*(short *)(lVar22 + uVar34 * 2) != 0) && (*(short *)(lVar22 + uVar34 * 2) != -1))
              goto LAB_14c9c48d0;
              uVar30 = (uint)pFVar33 + 1;
              pFVar33 = (FDynamicMeshAttributeSet *)(ulonglong)uVar30;
            } while ((int)uVar30 < (int)uVar40);
          }
        } while (uVar30 != uVar40);
      }
      iVar20 = (pFVar38->CellMeshes).Array.ArrayNum;
      pFVar33 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar29 + 1);
      pFVar41 = (FDynamicMeshAttributeSet *)&pFVar41->_padding_;
    } while ((int)(uVar29 + 1) < iVar20);
  }
  if (local_a18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a18.AllocatorInstance.Data);
  }
  if (local_a08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.AllocatorInstance.Data);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_678);
  return;
}

// GetSafeNoiseSpacing @ 14c9d2850

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
UE::PlanarCut::FCellMeshes::GetSafeNoiseSpacing(FCellMeshes *this,float param_1,float param_2)

{
  double dVar1;
  double dVar2;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar3 [16];
  
  dVar1 = (double)param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (double)param_1 * __real_3eb0c6f7a0b5ed8d;
  auVar3 = sqrtpd(unaff_XMM6,auVar3);
  dVar2 = auVar3._0_8_;
  if (auVar3._0_8_ <= __real_3f50624dd2f1a9fc) {
    dVar2 = __real_3f50624dd2f1a9fc;
  }
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  if ((dVar1 < dVar2) && (2 < (byte)LogPlanarCut._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlanarCut);
  }
  return dVar2;
}

// Init @ 14c9d36c0

void __thiscall
UE::PlanarCut::FCellMeshes::Init
          (FCellMeshes *this,int param_1,FRandomStream *param_2,FPlanarCells *param_3,
          TAxisAlignedBox3<double> *param_4,double param_5,double param_6,bool param_7)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  undefined1 local_res10 [8];
  
  this->NumUVLayers = param_1;
  InitEmpty(this,param_2);
  fVar13 = (param_3->InternalSurfaceMaterials).GlobalUVScale;
  if ((fVar13 <= 0.0) &&
     (bVar9 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5943927746286585606>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                         ,0x706,"GlobalUVScale > 0"), fVar13 = __real_3f800000, bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar11 = param_3->NumCells;
  if ((param_7) && (bVar9 = FPlanarCells::IsInfinitePlane(param_3), !bVar9)) {
    this->OutsideCellIndex = iVar11;
    iVar11 = iVar11 + 1;
  }
  SetNumCells(this,iVar11);
  bVar9 = (param_3->InternalSurfaceMaterials).NoiseSettings.bIsSet;
  if (bVar9 != false) {
    param_6 = param_6 + (double)(param_3->InternalSurfaceMaterials).NoiseSettings.TypedValue.
                                Amplitude;
  }
  dVar7 = (double)fVar13;
  dVar8 = (param_4->Min).field0_0x0._s_0.X;
  dVar4 = (param_4->Max).field0_0x0._s_0.Y + param_6;
  dVar6 = (param_4->Min).field0_0x0._s_0.Y - param_6;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (param_4->Max).field0_0x0._s_0.X + param_6;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&(param_4->Max).field0_0x0 = auVar3;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar8 - param_6;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&(param_4->Min).field0_0x0 = auVar5;
  dVar4 = (param_4->Min).field0_0x0._s_0.Z;
  (param_4->Max).field0_0x0._s_0.Z = param_6 + (param_4->Max).field0_0x0._s_0.Z;
  (param_4->Min).field0_0x0._s_0.Z = dVar4 - param_6;
  bVar10 = FPlanarCells::IsInfinitePlane(param_3);
  if (bVar10) {
    CreateMeshesForSinglePlane(this,param_3,param_4,bVar9,dVar7,param_5,false);
  }
  else {
    if (bVar9 == false) {
      CreateMeshesForBoundedPlanesWithoutNoise(this,iVar11,param_3,param_4,false,dVar7);
    }
    else {
      CreateMeshesForBoundedPlanesWithNoise(this,iVar11,param_3,param_4,bVar9,dVar7);
    }
    ApplyGeneralGrout(this,param_5);
  }
  iVar11 = (this->CellMeshes).Array.ArrayNum;
  pFVar12 = (this->CellMeshes).Array.AllocatorInstance.Data;
  pFVar1 = pFVar12 + (longlong)iVar11 * 8;
  while( true ) {
    if ((this->CellMeshes).Array.ArrayNum != iVar11) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10)
      ;
    }
    if (pFVar12 == pFVar1) break;
    AugmentedDynamicMesh::SetDefaultAttributes
              (*(FDynamicMesh3 **)pFVar12,(param_3->InternalSurfaceMaterials).bGlobalVisibility);
    pFVar12 = pFVar12 + 8;
  }
  return;
}

// InitEmpty @ 14c9d3fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::PlanarCut::FCellMeshes::InitEmpty(FCellMeshes *this,FRandomStream *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_38 [2];
  
  FRandomStream::GetUnitVector(param_1,(TVector<double> *)&local_38[0]._s_0);
  dVar4 = _UNK_1512468d8;
  dVar5 = ___xmm_40590000000000004059000000000000;
  dVar6 = (double)local_38[0]._16_8_ * ___xmm_40590000000000004059000000000000;
  auVar1._8_4_ = SUB84((double)local_38[0]._8_8_ * _UNK_1512468d8,0);
  auVar1._0_8_ = (double)local_38[0]._0_8_ * ___xmm_40590000000000004059000000000000;
  auVar1._12_4_ = (int)((ulonglong)((double)local_38[0]._8_8_ * _UNK_1512468d8) >> 0x20);
  *(undefined1 (*) [16])&(this->NoiseOffsetX).field0_0x0 = auVar1;
  (this->NoiseOffsetX).field0_0x0._s_0.Z = dVar6;
  FRandomStream::GetUnitVector(param_1,(TVector<double> *)&local_38[0]._s_0);
  dVar6 = (double)local_38[0]._8_8_ * dVar4;
  auVar2._8_4_ = SUB84(dVar6,0);
  auVar2._0_8_ = (double)local_38[0]._0_8_ * dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&(this->NoiseOffsetY).field0_0x0 = auVar2;
  (this->NoiseOffsetY).field0_0x0._s_0.Z = (double)local_38[0]._16_8_ * dVar5;
  FRandomStream::GetUnitVector(param_1,(TVector<double> *)&local_38[0]._s_0);
  dVar4 = (double)local_38[0]._8_8_ * dVar4;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (double)local_38[0]._0_8_ * dVar5;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&(this->NoiseOffsetZ).field0_0x0 = auVar3;
  (this->NoiseOffsetZ).field0_0x0._s_0.Z = (double)local_38[0]._16_8_ * dVar5;
  this->OutsideCellIndex = -1;
  return;
}

// MakeOnlyPlanarGroutCell @ 14c9d6130

void __thiscall
UE::PlanarCut::FCellMeshes::MakeOnlyPlanarGroutCell
          (FCellMeshes *this,FPlanarCells *param_1,TAxisAlignedBox3<double> *param_2,double param_3)

{
  int *piVar1;
  FDynamicMesh3 *this_00;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res8 [8];
  
  piVar1 = &(this->CellMeshes).Array.ArrayNum;
  pFVar11 = (this->CellMeshes).Array.AllocatorInstance.Data;
  for (iVar9 = (this->CellMeshes).Array.ArrayNum; iVar9 != 0; iVar9 = iVar9 + -1) {
    this_00 = *(FDynamicMesh3 **)pFVar11;
    if (this_00 != (FDynamicMesh3 *)0x0) {
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(this_00);
      ::operator_delete(this_00,0x230);
    }
    pFVar11 = pFVar11 + 8;
  }
  iVar9 = (this->CellMeshes).Array.ArrayMax;
  *piVar1 = 0;
  if (iVar9 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->CellMeshes).Array.ArrayMax);
  }
  if (0.0 < param_3) {
    bVar8 = FPlanarCells::IsInfinitePlane(param_1);
    if (bVar8) {
      fVar13 = (param_1->InternalSurfaceMaterials).GlobalUVScale;
      fVar14 = 0.0;
      if ((fVar13 <= 0.0) &&
         (bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5943927746286585488>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                             ,0x690,"GlobalUVScale > 0"), fVar13 = __real_3f800000, bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      SetNumCells(this,1);
      bVar8 = (param_1->InternalSurfaceMaterials).NoiseSettings.bIsSet;
      if (bVar8 != false) {
        fVar14 = (param_1->InternalSurfaceMaterials).NoiseSettings.TypedValue.Amplitude;
      }
      dVar7 = (param_2->Min).field0_0x0._s_0.X;
      dVar12 = (double)fVar14;
      dVar4 = (param_2->Max).field0_0x0._s_0.Y + dVar12;
      dVar6 = (param_2->Min).field0_0x0._s_0.Y - dVar12;
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = (param_2->Max).field0_0x0._s_0.X + dVar12;
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])&(param_2->Max).field0_0x0 = auVar3;
      dVar4 = (param_2->Max).field0_0x0._s_0.Z;
      auVar5._8_4_ = SUB84(dVar6,0);
      auVar5._0_8_ = dVar7 - dVar12;
      auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])&(param_2->Min).field0_0x0 = auVar5;
      dVar6 = (param_2->Min).field0_0x0._s_0.Z;
      (param_2->Max).field0_0x0._s_0.Z = dVar12 + dVar4;
      (param_2->Min).field0_0x0._s_0.Z = dVar6 - dVar12;
      CreateMeshesForSinglePlane(this,param_1,param_2,bVar8,(double)fVar13,param_3,true);
      iVar9 = *piVar1;
      pFVar10 = (this->CellMeshes).Array.AllocatorInstance.Data;
      pFVar11 = pFVar10 + (longlong)iVar9 * 8;
      while( true ) {
        if (*piVar1 != iVar9) {
          `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar10 == pFVar11) break;
        AugmentedDynamicMesh::SetDefaultAttributes
                  (*(FDynamicMesh3 **)pFVar10,(param_1->InternalSurfaceMaterials).bGlobalVisibility)
        ;
        pFVar10 = pFVar10 + 8;
      }
    }
    else {
      bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5943927746286585482>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                         ,0x68a,"Cells.IsInfinitePlane()");
      if (bVar8) goto code_r0x00014c9d6250;
    }
  }
  else {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5943927746286585482>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                       ,0x68a,"Grout > 0");
    if (bVar8) {
code_r0x00014c9d6250:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// NoiseDisplacement @ 14c9dc990

TVector<double> * __thiscall
UE::PlanarCut::FCellMeshes::NoiseDisplacement
          (FCellMeshes *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          FNoiseSettings *param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  TVector<double>_u_0 local_78 [4];
  
  dVar2 = (double)param_2->Frequency;
  dVar1 = dVar2 * (param_1->field0_0x0)._s_0.X;
  dVar6 = dVar2 * (param_1->field0_0x0)._s_0.Y;
  dVar2 = dVar2 * (param_1->field0_0x0)._s_0.Z;
  local_78[0]._0_8_ = dVar1 + (this->NoiseOffsetZ).field0_0x0._s_0.X;
  local_78[0]._8_8_ = dVar6 + (this->NoiseOffsetZ).field0_0x0._s_0.Y;
  local_78[0]._16_8_ = dVar2 + (this->NoiseOffsetZ).field0_0x0._s_0.Z;
  fVar3 = OctaveNoise(this,(TVector<double> *)&local_78[0]._s_0,param_2);
  local_78[0]._0_8_ = dVar1 + (this->NoiseOffsetY).field0_0x0._s_0.X;
  local_78[0]._8_8_ = dVar6 + (this->NoiseOffsetY).field0_0x0._s_0.Y;
  local_78[0]._16_8_ = dVar2 + (this->NoiseOffsetY).field0_0x0._s_0.Z;
  fVar4 = OctaveNoise(this,(TVector<double> *)&local_78[0]._s_0,param_2);
  local_78[0]._0_8_ = dVar1 + (this->NoiseOffsetX).field0_0x0._s_0.X;
  local_78[0]._8_8_ = dVar6 + (this->NoiseOffsetX).field0_0x0._s_0.Y;
  local_78[0]._16_8_ = dVar2 + (this->NoiseOffsetX).field0_0x0._s_0.Z;
  fVar5 = OctaveNoise(this,(TVector<double> *)&local_78[0]._s_0,param_2);
  dVar6 = (double)param_2->Amplitude;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * (double)fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 * (double)fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6 * (double)fVar5;
  return __return_storage_ptr__;
}

// NoiseVector @ 14c9dcb20

TVector<double> * __thiscall
UE::PlanarCut::FCellMeshes::NoiseVector
          (FCellMeshes *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          FNoiseSettings *param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  TVector<double>_u_0 local_78 [4];
  
  dVar2 = (double)param_2->Frequency;
  dVar6 = dVar2 * (param_1->field0_0x0)._s_0.X;
  dVar1 = dVar2 * (param_1->field0_0x0)._s_0.Y;
  dVar2 = dVar2 * (param_1->field0_0x0)._s_0.Z;
  local_78[0]._0_8_ = dVar6 + (this->NoiseOffsetZ).field0_0x0._s_0.X;
  local_78[0]._8_8_ = dVar1 + (this->NoiseOffsetZ).field0_0x0._s_0.Y;
  local_78[0]._16_8_ = dVar2 + (this->NoiseOffsetZ).field0_0x0._s_0.Z;
  fVar3 = OctaveNoise(this,(TVector<double> *)&local_78[0]._s_0,param_2);
  local_78[0]._0_8_ = dVar6 + (this->NoiseOffsetY).field0_0x0._s_0.X;
  local_78[0]._8_8_ = dVar1 + (this->NoiseOffsetY).field0_0x0._s_0.Y;
  local_78[0]._16_8_ = dVar2 + (this->NoiseOffsetY).field0_0x0._s_0.Z;
  fVar4 = OctaveNoise(this,(TVector<double> *)&local_78[0]._s_0,param_2);
  local_78[0]._0_8_ = dVar6 + (this->NoiseOffsetX).field0_0x0._s_0.X;
  local_78[0]._8_8_ = dVar1 + (this->NoiseOffsetX).field0_0x0._s_0.Y;
  local_78[0]._16_8_ = dVar2 + (this->NoiseOffsetX).field0_0x0._s_0.Z;
  fVar5 = OctaveNoise(this,(TVector<double> *)&local_78[0]._s_0,param_2);
  dVar6 = (double)param_2->Amplitude;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * (double)fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 * (double)fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar6 * (double)fVar5;
  return __return_storage_ptr__;
}

// OctaveNoise @ 14c9dcdb0

float __thiscall
UE::PlanarCut::FCellMeshes::OctaveNoise
          (FCellMeshes *this,TVector<double> *param_1,FNoiseSettings *param_2)

{
  double dVar1;
  ulonglong uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TVector<double>_u_0 local_58 [3];
  
  fVar5 = 0.0;
  if (param_2->Octaves < 1) {
    fVar5 = 0.0;
  }
  else {
    uVar2 = (ulonglong)(uint)param_2->Octaves;
    fVar6 = __real_3f800000;
    fVar7 = __real_3f800000;
    do {
      dVar4 = (double)fVar6;
      dVar1 = (param_1->field0_0x0)._s_0.Y * dVar4;
      local_58[0]._16_8_ = dVar4 * (param_1->field0_0x0)._s_0.Z;
      local_58[0]._8_4_ = SUB84(dVar1,0);
      local_58[0]._0_8_ = (param_1->field0_0x0)._s_0.X * dVar4;
      local_58[0]._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      fVar3 = FMath::PerlinNoise3D((TVector<double> *)&local_58[0]._s_0);
      fVar6 = fVar6 * param_2->Lacunarity;
      fVar3 = fVar3 * fVar7;
      fVar7 = fVar7 * param_2->Persistence;
      fVar5 = fVar5 + fVar3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return fVar5;
}

// RemeshForNoise @ 14c9dddf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::PlanarCut::FCellMeshes::RemeshForNoise
          (FCellMeshes *this,FDynamicMesh3 *param_1,EEdgeRefineFlags param_2,double param_3)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *pTVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStackY_698 [32];
  undefined1 local_658 [4];
  FVertexConstraint local_654;
  undefined2 local_640 [2];
  int local_63c;
  undefined8 local_638;
  undefined1 local_630 [8];
  FVertexConstraint *local_628;
  int *local_620;
  undefined2 *local_618;
  undefined4 *local_610;
  EEdgeRefineFlags *local_608;
  EEdgeRefineFlags local_600 [2];
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined1 local_5e8 [72];
  int local_5a0;
  TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
  local_598;
  int local_548;
  ForAnyElementType local_540;
  int local_538;
  int local_534;
  char local_530;
  undefined1 local_528 [104];
  longlong *local_4c0;
  ForAnyElementType local_4b8;
  undefined8 local_4b0;
  bool local_4a8;
  ForAnyElementType local_4a0;
  undefined8 local_498;
  TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
  local_488;
  TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
  local_438;
  int local_3e8;
  TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *local_3e0;
  undefined8 local_3d8;
  undefined1 local_3c8 [16];
  FMeshConstraints local_3b8;
  char local_300;
  longlong local_2f8;
  longlong lStack_2f0;
  longlong local_2e8;
  longlong local_2c0;
  longlong local_2b8;
  longlong lStack_2b0;
  longlong local_2a8;
  undefined2 local_2a0;
  undefined1 local_29e;
  undefined4 local_29c;
  longlong local_298;
  longlong lStack_290;
  undefined4 local_288;
  undefined2 local_284;
  EFlipMetric local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  ESmoothTypes local_258;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_const_&,int,double)>
  local_248;
  TFunction<double___cdecl(UE::Geometry::FDynamicMesh3_const_&,int)> local_218;
  TFunction<double___cdecl(UE::Geometry::FDynamicMesh3_const_&,int,int)> local_1e8;
  undefined2 local_1b8;
  bool local_1b6;
  int local_1b4;
  bool local_1b0;
  ulong64 local_1a8;
  TDynamicVector<UE::Math::TVector<double>,512> local_1a0;
  ForAnyElementType local_188;
  undefined8 local_180;
  int local_168;
  int local_164;
  double local_160;
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_u_0 local_158;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_108;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  TFunction<void___cdecl(int,int,int,int)> local_b8;
  ForAnyElementType local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_2f8 = 0;
  lStack_2f0 = 0;
  local_2b8 = 0;
  lStack_2b0 = 0;
  local_298 = ___xmm_3e45798ee00000000000000000000000;
  lStack_290 = _UNK_1528cb7a8;
  local_278 = ___xmm_3ff00000000000003feccccccccccccd;
  dStack_270 = _UNK_1528da628;
  local_300 = '\0';
  local_2e8 = 0;
  local_2c0 = 0;
  local_2a8 = 0;
  local_2a0 = 0x100;
  local_29e = 0;
  local_29c = 0;
  local_3c8._0_8_ = &___7FRemesher_Geometry_UE__6B_;
  local_288 = 0x1010101;
  local_284 = 0;
  local_280 = OptimalValence;
  local_268 = ___xmm_3fb999999999999a4008000000000000;
  dStack_260 = _UNK_1528da5f8;
  local_258 = Uniform;
  local_248._0_8_ = 0;
  local_248._40_8_ = 0;
  local_218._0_8_ = 0;
  local_218._40_8_ = 0;
  local_1e8._0_8_ = 0;
  local_1e8._40_8_ = 0;
  local_1b8 = 0x101;
  local_1b6 = false;
  local_1b4 = 0;
  local_1b0 = false;
  local_1a8 = 0;
  local_1a0.CurBlock = 0;
  local_1a0.CurBlockUsed = 0;
  local_1a0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Blocks.ArrayNum = 0;
  local_1a0.Blocks.ArrayMax = 0;
  local_3c8._8_8_ = param_1;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_1a0);
  local_160 = __real_3f847ae147ae147b;
  local_3c8._0_8_ = &___7FQueueRemesher_Geometry_UE__6B_;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180._0_4_ = 0;
  local_180._4_4_ = 0;
  local_168 = 0x14;
  local_164 = 0x14;
  local_158._0_8_ = 0;
  local_158._8_4_ = 0;
  local_158._12_4_ = 0xffffffff;
  local_158._32_8_ = 0;
  local_158._40_4_ = 0;
  local_158._44_4_ = 0x80;
  local_158._48_4_ = 0xffffffff;
  local_158._52_4_ = 0;
  local_158.TypedValue.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_158.TypedValue.HashSize = 0;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  local_108._40_4_ = 0;
  local_108._44_4_ = 0x80;
  local_108._48_4_ = 0xffffffff;
  local_108._52_4_ = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  local_b8._0_8_ = 0;
  local_b8._40_8_ = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_284._0_1_ = true;
  local_488.Elements._0_8_ = 0;
  local_488.Elements._8_8_ = 0;
  local_488.Elements._32_8_ = 0;
  local_488.Elements._40_4_ = 0;
  local_488.Elements._44_4_ = 0x80;
  local_488.Elements._48_4_ = 0xffffffff;
  local_488.Elements._52_4_ = 0;
  local_488.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_488.HashSize = 0;
  local_438.Elements._0_8_ = 0;
  local_438.Elements._8_8_ = 0;
  local_438.Elements._32_8_ = 0;
  local_438.Elements._40_4_ = 0;
  local_438.Elements._44_4_ = 0x80;
  local_438.Elements._48_4_ = 0xffffffff;
  local_438.Elements._52_4_ = 0;
  local_438.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_438.HashSize = 0;
  local_3e0 = (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0;
  local_3d8 = 0;
  local_3e8 = 0;
  local_528._8_8_ = (FEdgeLoop *)0x0;
  local_528._16_4_ = 0;
  local_528._20_4_ = 0;
  local_528._24_8_ = (FEdgeSpan *)0x0;
  local_528._32_4_ = 0;
  local_528._36_4_ = 0;
  local_528[0x28] = false;
  local_528[0x29] = false;
  local_528[0x2a] = false;
  local_528._44_4_ = Compute;
  local_528._48_4_ = ConvertToOpenSpan;
  local_528._64_8_ = 0;
  local_4c0 = (longlong *)0x0;
  local_4b8.Data = (FScriptContainerElement *)0x0;
  local_4b0._0_4_ = 0;
  local_4b0._4_4_ = 0;
  local_4a8 = false;
  local_4a0.Data = (FScriptContainerElement *)0x0;
  local_498._0_4_ = 0;
  local_498._4_4_ = 0;
  local_528._0_8_ = param_1;
  UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_528);
  uVar5 = local_528._16_8_;
  local_654.bCannotDelete = (bool)local_528[0x10];
  local_654.bCanMove = (bool)local_528[0x11];
  local_654._2_2_ = local_528._18_2_;
  bVar14 = local_528._16_4_ != 1;
  iVar10 = 1;
  local_528._16_8_ = uVar5;
  if (bVar14) {
    local_628 = &local_654;
    bVar14 = `UE::PlanarCut::FCellMeshes::RemeshForNoise'::__l3::<lambda_1>::operator()(&local_628);
    if ((!bVar14) && (local_654._0_4_ == 0)) goto LAB_14c9de489;
    iVar10 = local_528._16_4_;
  }
  uVar13 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar11 = 0;
  if ((uVar13 == 0) ||
     (pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar11 = 0,
     (ushort)(**(short **)pFVar2 - 1U) < 0xfffe)) {
LAB_14c9de208:
    uVar9 = (uint)uVar11;
  }
  else {
    uVar11 = 1;
    uVar9 = 1;
    if (1 < (int)uVar13) {
      do {
        uVar8 = (ulonglong)((uint)uVar11 & 0x1ff);
        lVar3 = *(longlong *)(pFVar2 + (uVar11 >> 9) * 8);
        if ((*(short *)(lVar3 + uVar8 * 2) != 0) && (*(short *)(lVar3 + uVar8 * 2) != -1)) break;
        uVar9 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)uVar13);
      goto LAB_14c9de208;
    }
  }
  if (uVar9 != uVar13) {
    local_620 = &local_654.FixedSetID;
    local_618 = local_640;
LAB_14c9de230:
    do {
      local_640[0] = 1;
      iVar10 = (int)uVar11;
      local_638 = 0;
      local_654.FixedSetID = iVar10;
      local_63c = iVar10;
      TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
                (&local_438,
                 (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)local_630,
                 (bool *)&local_620);
      uVar9 = iVar10 + 1;
      uVar11 = (ulonglong)uVar9;
      if ((int)uVar9 < (int)uVar13) {
        pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          uVar8 = (ulonglong)((uint)uVar11 & 0x1ff);
          if ((*(short *)(*(longlong *)(pFVar2 + (uVar11 >> 9) * 8) + uVar8 * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar2 + (uVar11 >> 9) * 8) + uVar8 * 2) != -1))
          goto LAB_14c9de230;
          uVar9 = (uint)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while ((int)uVar9 < (int)uVar13);
      }
    } while (uVar9 != uVar13);
    iVar10 = local_528._16_4_;
  }
  local_5f8 = 0;
  local_5f0 = 0xffffffff;
  local_600[0] = param_2;
  if ((iVar10 < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = local_528._8_8_;
  puVar12 = *(undefined4 **)(local_528._8_8_ + 0x18);
  iVar10 = *(int *)(local_528._8_8_ + 0x20);
  puVar1 = puVar12 + iVar10;
  while( true ) {
    if (*(int *)(uVar5 + 0x20) != iVar10) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_658);
    }
    if (puVar12 == puVar1) break;
    local_654.Target._4_4_ = *puVar12;
    local_610 = (undefined4 *)((longlong)&local_654.Target + 4);
    local_608 = local_600;
    TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
              (&local_488,
               (TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *)
               (local_630 + 4),(bool *)&local_610);
    puVar12 = puVar12 + 1;
  }
  local_5e8._0_8_ = 0;
  local_5e8._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_5e8._48_8_ = _UNK_150631d98;
  local_5e8._8_8_ = 0;
  local_5e8._32_8_ = 0;
  local_5e8._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_5a0 = 0;
  TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
               *)local_5e8,&local_488);
  local_598.Elements._0_8_ = 0;
  local_598.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_598.Elements._48_8_ = _UNK_150631d98;
  local_598.Elements._8_8_ = 0;
  local_598.Elements._32_8_ = 0;
  local_598.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_598.HashSize = 0;
  TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
  ::operator=(&local_598,&local_438);
  pTVar6 = local_3e0;
  iVar10 = (int)local_3d8;
  local_548 = local_3e8;
  local_540.Data = (FScriptContainerElement *)0x0;
  local_538 = (int)local_3d8;
  if ((int)local_3d8 == 0) {
    local_534 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_3d8,0,&local_540,(int)local_3d8,&local_534);
    ConstructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
              (local_540.Data,pTVar6,iVar10);
  }
  local_530 = '\x01';
  if (local_300 != '\0') {
    UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_3b8);
  }
  UE::Geometry::FMeshConstraints::FMeshConstraints(&local_3b8,(FMeshConstraints *)local_5e8);
  local_300 = '\x01';
  if (local_530 != '\0') {
    UE::Geometry::FMeshConstraints::~FMeshConstraints((FMeshConstraints *)local_5e8);
  }
  UE::Geometry::FRemesher::SetTargetEdgeLength((FRemesher *)local_3c8,param_3);
  UE::Geometry::FRemesher::Precompute((FRemesher *)local_3c8);
  UE::Geometry::FQueueRemesher::FastestRemesh((FQueueRemesher *)local_3c8);
LAB_14c9de489:
  if (local_4a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data);
  }
  if (local_4b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data);
  }
  if (local_528._64_8_ != 0) {
    plVar7 = (longlong *)(local_528 + 0x50);
    if (local_4c0 != (longlong *)0x0) {
      plVar7 = local_4c0;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_528._24_8_,local_528._32_4_);
  if ((FEdgeSpan *)local_528._24_8_ != (FEdgeSpan *)0x0) {
    FMemory::Free((void *)local_528._24_8_);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_528._8_8_,local_528._16_4_);
  if ((FEdgeLoop *)local_528._8_8_ != (FEdgeLoop *)0x0) {
    FMemory::Free((void *)local_528._8_8_);
  }
  DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>(local_3e0,(int)local_3d8);
  if (local_3e0 != (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
    FMemory::Free(local_3e0);
  }
  local_438.HashSize = 0;
  if (local_438.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_438.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FVertexConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_438.Elements);
  local_488.HashSize = 0;
  if (local_488.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_488.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FEdgeConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_488.Elements);
  UE::Geometry::FQueueRemesher::~FQueueRemesher((FQueueRemesher *)local_3c8);
  return;
}

// SetNumCells @ 14c9e06d0

void __thiscall UE::PlanarCut::FCellMeshes::SetNumCells(FCellMeshes *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FDynamicMesh3 *pFVar4;
  int iVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FDynamicMesh3 *local_28 [2];
  
  pFVar7 = (this->CellMeshes).Array.AllocatorInstance.Data;
  uVar6 = (ulonglong)(uint)param_1;
  for (iVar5 = (this->CellMeshes).Array.ArrayNum; iVar5 != 0; iVar5 = iVar5 + -1) {
    pFVar4 = *(FDynamicMesh3 **)pFVar7;
    if (pFVar4 != (FDynamicMesh3 *)0x0) {
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(pFVar4);
      ::operator_delete(pFVar4,0x230);
    }
    pFVar7 = pFVar7 + 8;
  }
  iVar5 = (this->CellMeshes).Array.ArrayMax;
  piVar1 = &(this->CellMeshes).Array.ArrayMax;
  (this->CellMeshes).Array.ArrayNum = 0;
  if (iVar5 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (0 < param_1) {
    do {
      pFVar4 = ::operator_new(0x230);
      if (pFVar4 == (FDynamicMesh3 *)0x0) {
        pFVar4 = (FDynamicMesh3 *)0x0;
      }
      else {
        iVar5 = this->NumUVLayers;
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar4);
        AugmentedDynamicMesh::Augment(pFVar4,iVar5);
      }
      pFVar7 = (this->CellMeshes).Array.AllocatorInstance.Data;
      local_28[0] = pFVar4;
      if (((pFVar7 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar7 + (longlong)*piVar1 * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (this->CellMeshes).Array.ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->CellMeshes).Array.ArrayNum = iVar5 + 1;
      *(FDynamicMesh3 **)((this->CellMeshes).Array.AllocatorInstance.Data + (longlong)iVar5 * 8) =
           local_28[0];
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// operator() @ 150575370

bool __thiscall
`UE::PlanarCut::FCellMeshes::RemeshForNoise'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5943927746286585517>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5943927746286585517>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

