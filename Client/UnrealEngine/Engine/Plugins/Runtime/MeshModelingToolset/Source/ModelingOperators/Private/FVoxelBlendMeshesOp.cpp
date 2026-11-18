// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// CalculateResult @ 14c96e4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FVoxelBlendMeshesOp::CalculateResult
          (FVoxelBlendMeshesOp *this,FProgressCancel *param_1)

{
  double dVar1;
  code *pcVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auVar5 [12];
  double dVar6;
  undefined8 uVar7;
  FProgressCancel *pFVar8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar9;
  undefined **ppuVar10;
  FProgressCancel **ppFVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  FScriptContainerElement *pFVar18;
  TAxisAlignedBox3<double> *pTVar19;
  ulong64 uVar20;
  ulonglong uVar21;
  FMeshShapeGenerator *pFVar22;
  undefined8 uVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong *plVar28;
  undefined ***pppuVar29;
  undefined ***pppuVar30;
  FScriptContainerElement *pFVar31;
  FDynamicMesh3 *pFVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auVar39 [16];
  undefined4 uVar42;
  double dVar43;
  undefined4 uVar44;
  double dVar45;
  double dVar46;
  undefined8 uVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auStackY_bd8 [32];
  ForAnyElementType local_b88;
  int local_b80;
  int iStack_b7c;
  FProgressCancel *local_b78;
  FDynamicMesh3 *local_b70;
  double local_b68;
  double local_b60;
  double local_b58;
  double local_b50;
  double local_b48;
  double local_b40;
  double dStack_b38;
  double local_b30;
  undefined8 uStack_b28;
  double local_b20;
  double dStack_b18;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_b10;
  TQuaternion<double>_u_0 local_ad8;
  double local_ab8;
  double dStack_ab0;
  double local_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  double local_a88;
  double dStack_a80;
  double local_a78;
  double dStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  double local_a50;
  double dStack_a48;
  double local_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  longlong local_a28;
  longlong lStack_a20;
  double local_a18;
  double dStack_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  double dStack_9f8;
  double dStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  double local_9d0;
  double dStack_9c8;
  double local_9c0;
  TAxisAlignedBox3<double> local_9b8;
  TAxisAlignedBox3<double> local_988;
  code *local_958;
  undefined8 uStack_950;
  undefined **local_948;
  code *pcStack_940;
  undefined8 local_938;
  undefined ***pppuStack_930;
  code *local_928;
  undefined8 uStack_920;
  undefined **local_918;
  FProgressCancel **ppFStack_910;
  undefined8 local_908;
  undefined ***pppuStack_900;
  undefined1 local_8f8 [64];
  double local_8b8;
  undefined2 local_8b0;
  ForAnyElementType local_8a8;
  int local_8a0;
  undefined1 local_898 [112];
  undefined **local_828;
  FProgressCancel **ppFStack_820;
  undefined8 local_818;
  undefined ***pppuStack_810;
  FMarchingCubes local_808;
  TVector<double>_u_0 local_558;
  TVector<double>_u_0 TStack_540;
  ForAnyElementType local_528;
  undefined8 local_520;
  ForAnyElementType local_518;
  undefined8 local_510;
  ForAnyElementType local_508;
  undefined8 local_500;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_4f8;
  undefined1 local_438 [128];
  undefined **local_3b8;
  FProgressCancel **ppFStack_3b0;
  undefined8 local_3a8;
  undefined ***pppuStack_3a0;
  FMarchingCubes local_398;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_bd8;
  local_b78 = param_1;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar2 = *(code **)&param_1->CancelF;
    plVar27 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar28 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar27 != (longlong *)0x0) {
      plVar28 = plVar27;
    }
    uVar17 = (**(code **)(*plVar28 + 8))();
    bVar12 = (bool)(*pcVar2)(uVar17);
    param_1->WasCancelled = bVar12;
    if (bVar12 != false) {
      return;
    }
  }
  if ((this->Transforms).ArrayNum != (this->Meshes).ArrayNum) {
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_260852759958388707>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CompositionOps\\VoxelBlendMeshesOp.cpp"
                        ,0x1d,"Transforms.Num() == Meshes.Num()");
    if (!bVar12) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_898._0_8_ = &___7__TImplicitBlend_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  local_828 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  ppFStack_820 = (FProgressCancel **)
                 TImplicitBlend<UE::Geometry::FDynamicMesh3>::<lambda_33_>::<lambda_invoker_cdecl>;
  local_898._96_8_ = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  local_898._16_8_ = (FScriptContainerElement *)0x0;
  local_898._24_4_ = 0;
  local_898._28_4_ = 0;
  local_898._32_8_ = (TAxisAlignedBox3<double> *)0x0;
  local_898._40_4_ = 0;
  local_898._44_4_ = 0;
  local_898._48_8_ = ___xmm_40140000000000004000000000000000;
  local_898._56_8_ = _UNK_1528d8af8;
  local_898._64_8_ = ___xmm_3ff00000000000003ff0000000000000;
  local_898._72_8_ = _UNK_150689688;
  local_898[0x50] = false;
  pppuStack_810 = (undefined ***)0x0;
  FMarchingCubes::FMarchingCubes(&local_808);
  dVar49 = _UNK_150a9e648;
  dVar38 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dVar50 = _UNK_1508ffb58;
  dVar48 = ___xmm_ffefffffffffffffffefffffffffffff;
  dVar4 = __real_3ff0000000000000;
  iVar16 = (this->Transforms).ArrayNum;
  local_528.Data = (FScriptContainerElement *)0x0;
  local_520._0_4_ = 0;
  local_520._4_4_ = 0;
  local_518.Data = (FScriptContainerElement *)0x0;
  local_510._0_4_ = 0;
  local_510._4_4_ = 0;
  local_508.Data = (FScriptContainerElement *)0x0;
  local_500._0_4_ = 0;
  local_500._4_4_ = 0;
  pFVar31 = (this->Transforms).AllocatorInstance.Data;
  local_898[0x50] = this->bSubtract;
  local_a88 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dStack_a80 = _UNK_150a9e648;
  local_558._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_558._8_8_ = _UNK_150a9e648;
  local_558._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  TStack_540._0_8_ = _UNK_150a9e6d8;
  local_a78 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_a70 = _UNK_1508ffb58;
  TStack_540._8_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
  TStack_540._s_0.Z = _UNK_1508ffb58;
  if ((iVar16 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  dStack_9f0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  dStack_9f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uStack_b28 = _UNK_150a9e6d8;
  local_b30 = ___xmm_ffefffffffffffff7fefffffffffffff;
  lStack_a20 = _UNK_15061cbc8;
  local_a28 = ___xmm_3ff00000000000000000000000000000;
  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (iVar16 != 0) {
    dVar43 = 0.0;
    dVar45 = 0.0;
    pFVar24 = pFVar31 + (longlong)iVar16 * 0x60;
    dVar46 = 0.0;
    if (pFVar31 != pFVar24) {
      pFVar18 = pFVar31 + 0x40;
      dVar46 = 0.0;
      do {
        local_9d0 = *(double *)(pFVar18 + -0x20);
        dStack_9c8 = *(double *)(pFVar18 + -0x18);
        pFVar31 = pFVar31 + 0x60;
        local_9c0 = *(double *)(pFVar18 + -0x10);
        dVar43 = dVar43 + local_9d0;
        local_9e8 = *(undefined8 *)pFVar18;
        uStack_9e0 = *(undefined8 *)(pFVar18 + 8);
        dVar46 = dVar46 + local_9c0;
        local_9d8 = *(undefined8 *)(pFVar18 + 0x10);
        pFVar18 = pFVar18 + 0x60;
        dVar45 = dVar45 + dStack_9c8;
      } while (pFVar31 != pFVar24);
    }
    dVar4 = dVar4 / (double)iVar16;
    uVar17 = dVar4 * dVar46;
    uVar23 = dVar4 * dVar43;
    uVar47 = dVar4 * dVar45;
  }
  uVar21 = 0;
  uVar13 = (this->Meshes).ArrayNum;
  local_b88.Data = (FScriptContainerElement *)0x0;
  local_b80 = 0;
  iStack_b7c = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_a28;
  this->_padding_ = lStack_a20;
  this->_padding_ = uVar23;
  this->_padding_ = uVar47;
  local_a00._0_4_ = (undefined4)uVar7;
  local_a00._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  auVar5._4_8_ = uVar47;
  auVar5._0_4_ = uStack_a08._4_4_;
  auVar39._0_8_ = auVar5._0_8_ << 0x20;
  auVar39._8_4_ = (undefined4)local_a00;
  auVar39._12_4_ = local_a00._4_4_;
  local_a00 = auVar39._8_8_;
  this->_padding_ = uVar17;
  this->_padding_ = local_a00;
  this->_padding_ = (longlong)dStack_9f8;
  this->_padding_ = (longlong)dStack_9f0;
  local_a38 = 0;
  uStack_a30 = 0;
  local_b50 = (double)uVar47;
  local_b48 = (double)uVar23;
  local_a18 = (double)uVar23;
  dStack_a10 = (double)uVar47;
  uStack_a08 = (double)uVar17;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x230,8,uVar13,&local_b88,0,&iStack_b7c);
    local_b30 = ___xmm_ffefffffffffffff7fefffffffffffff;
    uStack_b28 = _UNK_150a9e6d8;
  }
  dVar46 = __real_ffefffffffffffff;
  dVar4 = __real_7fefffffffffffff;
  local_b20 = dVar48;
  dStack_b18 = dVar50;
  uVar42 = SUB84(dVar48,0);
  uVar44 = (undefined4)((ulonglong)dVar48 >> 0x20);
  uVar37 = (undefined4)uStack_b28;
  uVar41 = (undefined4)((ulonglong)uStack_b28 >> 0x20);
  local_b40 = dVar38;
  dStack_b38 = dVar49;
  if ((this->Meshes).ArrayNum < 1) {
    uVar36 = SUB84(dVar49,0);
    uVar40 = (undefined4)((ulonglong)dVar49 >> 0x20);
    dVar48 = local_b30;
  }
  else {
    local_b60 = dVar49;
    local_b58 = dVar38;
    uVar35 = uVar21;
    dVar49 = __real_3fe0000000000000;
    local_b68 = local_b30;
    do {
      uVar33 = (uint)uVar21;
      uVar34 = ~uVar33 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar33 < (this->Meshes).ArrayNum) {
        uVar13 = uVar34;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar31 = (this->Meshes).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar31 + uVar35 * 0x10) == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar32 = *(FDynamicMesh3 **)(pFVar31 + uVar35 * 0x10);
      if (local_b80 == iStack_b7c) {
        local_b80 = Core::Private::
                    ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x230,8,&local_b88,&iStack_b7c);
      }
      lVar25 = (longlong)local_b80;
      local_b80 = local_b80 + 1;
      FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(local_b88.Data + lVar25 * 0x230),pFVar32);
      uVar13 = 0;
      if ((int)uVar33 < local_b80) {
        uVar13 = uVar34;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar25 = uVar35 * 0x230;
      if (*(int *)(local_b88.Data + lVar25 + 0x170) == 0) {
LAB_14c96f678:
        uVar36 = SUB84(local_b60,0);
        uVar40 = (undefined4)((ulonglong)local_b60 >> 0x20);
      }
      else {
        uVar13 = 0;
        if ((int)uVar33 < (this->Transforms).ArrayNum) {
          uVar13 = uVar34;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar31 = (this->Transforms).AllocatorInstance.Data;
        lVar26 = uVar35 * 0x60;
        local_ad8._s_0.X = (double)*(undefined8 *)(pFVar31 + lVar26);
        local_ad8._s_0.Y = (double)*(undefined8 *)(pFVar31 + lVar26 + 8);
        local_ad8._s_0.Z = (double)*(undefined8 *)(pFVar31 + lVar26 + 0x10);
        local_ad8._s_0.W = (double)*(undefined8 *)(pFVar31 + lVar26 + 0x10 + 8);
        local_a50 = *(double *)(pFVar31 + lVar26 + 0x20);
        dStack_a48 = *(double *)(pFVar31 + lVar26 + 0x20 + 8);
        local_a40 = *(double *)(pFVar31 + lVar26 + 0x30);
        local_aa0 = *(undefined8 *)(pFVar31 + lVar26 + 0x40);
        uStack_a98 = *(undefined8 *)(pFVar31 + lVar26 + 0x40 + 8);
        local_a90 = *(undefined8 *)(pFVar31 + lVar26 + 0x50);
        local_ab8 = local_a50 - (double)uVar23;
        uVar14 = 0;
        uVar13 = uVar14;
        if ((int)uVar33 < local_b80) {
          uVar13 = uVar34;
        }
        dStack_ab0 = dStack_a48 - (double)uVar47;
        local_aa8 = local_a40 - (double)uVar17;
        local_a68 = local_aa0;
        uStack_a60 = uStack_a98;
        local_a58 = local_a90;
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        MeshTransforms::ApplyTransform
                  ((FDynamicMesh3 *)(local_b88.Data + lVar25),
                   (TTransformSRT3<double> *)&local_ad8._s_0,true,All);
        if (this->bVoxWrap != false) {
          uVar13 = 0;
          if (0.0 < this->ThickenShells) {
            uVar15 = uVar14;
            if ((int)uVar33 < local_b80) {
              uVar15 = uVar34;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            bVar12 = FDynamicMesh3::IsClosed((FDynamicMesh3 *)(local_b88.Data + lVar25));
            if (!bVar12) {
              uVar15 = uVar14;
              if ((int)uVar33 < local_b80) {
                uVar15 = uVar34;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar19 = FDynamicMesh3::GetBounds
                                  ((FDynamicMesh3 *)(local_b88.Data + lVar25),&local_9b8,true);
              dVar38 = (pTVar19->Max).field0_0x0._s_0.Y - (pTVar19->Min).field0_0x0._s_0.Y;
              dVar48 = (pTVar19->Max).field0_0x0._s_0.Z - (pTVar19->Min).field0_0x0._s_0.Z;
              dVar43 = (pTVar19->Max).field0_0x0._s_0.X - (pTVar19->Min).field0_0x0._s_0.X;
              if (dVar38 <= 0.0) {
                dVar38 = 0.0;
              }
              if ((int)uVar33 < local_b80) {
                uVar14 = uVar34;
              }
              if (dVar48 <= 0.0) {
                dVar48 = 0.0;
              }
              if (dVar43 <= 0.0) {
                dVar43 = 0.0;
              }
              if (dVar48 <= dVar38) {
                dVar48 = dVar38;
              }
              if (dVar48 <= dVar43) {
                dVar48 = dVar43;
              }
              dVar38 = (dVar48 + dVar48) / (double)*(int *)((longlong)&this->_padding_ + 4);
              if (dVar38 <= this->ThickenShells) {
                dVar38 = this->ThickenShells;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FMeshNormals::QuickComputeVertexNormals
                        ((FDynamicMesh3 *)(local_b88.Data + lVar25),false);
              uVar14 = uVar13;
              if ((int)uVar33 < local_b80) {
                uVar14 = uVar34;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FExtrudeMesh::FExtrudeMesh
                        ((FExtrudeMesh *)local_8f8,(FDynamicMesh3 *)(local_b88.Data + lVar25));
              local_8b8 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) ^
                                           __xmm_80000000000000008000000000000000._4_4_,
                                           SUB84(dVar38,0) ^
                                           (uint)__xmm_80000000000000008000000000000000);
              local_8b0._0_1_ = false;
              local_8b0._1_1_ = true;
              FExtrudeMesh::Apply((FExtrudeMesh *)local_8f8);
              local_8f8._0_8_ = &___7FExtrudeMesh_Geometry_UE__6B_;
              DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>
                        ((FExtrusionInfo *)local_8a8.Data,local_8a0);
              if ((FExtrusionInfo *)local_8a8.Data != (FExtrusionInfo *)0x0) {
                FMemory::Free(local_8a8.Data);
              }
              if (local_8f8._16_8_ != 0) {
                plVar27 = (longlong *)(local_8f8 + 0x20);
                if ((longlong *)local_8f8._56_8_ != (longlong *)0x0) {
                  plVar27 = (longlong *)local_8f8._56_8_;
                }
                (**(code **)(*plVar27 + 0x10))();
              }
            }
          }
          uVar14 = uVar13;
          if ((int)uVar33 < local_b80) {
            uVar14 = uVar34;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                    (&local_4f8,(FDynamicMesh3 *)(local_b88.Data + lVar25),true);
          local_b10.Tree = &local_4f8;
          local_b10.FWNBeta = __real_4000000000000000;
          local_b10.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b10.FastWindingCache.ArrayNum = 0;
          local_b10.FastWindingCache.ArrayMax = 0;
          local_b10.FastWindingCacheOffset = 0;
          local_b10.FastWindingCacheMeshChangeStamp = 0;
          local_b10.FWNApproxOrder = 2;
          if ((local_4f8.RootIndex < 0) ||
             (uVar20 = FDynamicMesh3::GetChangeStamp(local_4f8.Mesh),
             local_4f8.MeshChangeStamp != uVar20)) {
            pTVar9 = local_b10.Tree;
            TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_b10.Tree,false);
            uVar20 = FDynamicMesh3::GetChangeStamp(pTVar9->Mesh);
            pTVar9->MeshChangeStamp = uVar20;
          }
          TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache(&local_b10);
          local_b10.FastWindingCacheMeshChangeStamp = (local_b10.Tree)->MeshChangeStamp;
          uVar14 = uVar13;
          if ((int)uVar33 < local_b80) {
            uVar14 = uVar34;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_438._8_8_ = &local_4f8;
          local_438._0_8_ = local_b88.Data + lVar25;
          local_438._48_8_ = local_a88;
          local_438._56_8_ = dStack_a80;
          local_438._16_8_ = &local_b10;
          local_3b8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
          local_438._64_8_ = local_a78;
          local_438._72_8_ = dStack_a70;
          ppFStack_3b0 = (FProgressCancel **)
                         TImplicitSolidify<UE::Geometry::FDynamicMesh3>::<lambda_41_>::
                         <lambda_invoker_cdecl>;
          local_438._80_8_ = ___xmm_3ff0000000000000ffefffffffffffff;
          local_438._88_8_ = _UNK_1528d8ae8;
          local_438._112_8_ =
               Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
          local_438._40_8_ = dVar4;
          local_438._104_8_ = __real_3ff0000000000000;
          local_438[0x20] = false;
          local_438[0x60] = true;
          local_438._100_4_ = 4;
          pppuStack_3a0 = (undefined ***)0x0;
          local_438._24_8_ = dVar49;
          FMarchingCubes::FMarchingCubes(&local_398);
          iVar16 = *(int *)((longlong)&this->_padding_ + 4);
          if (local_4f8.RootIndex < 0) {
            bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<2828200105734045879>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                                ,0xb7,"RootIndex >= 0");
            dVar45 = dVar46;
            dVar43 = dVar46;
            dVar1 = dVar4;
            dVar6 = dVar4;
            dVar49 = dVar4;
            dVar38 = dVar46;
            if (bVar12) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            uVar21 = (ulonglong)(local_4f8.RootIndex & 0x1ff);
            lVar26 = *(longlong *)
                      (local_4f8.BoxCenters.Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)local_4f8.RootIndex >> 9) * 8);
            dVar38 = *(double *)(lVar26 + uVar21 * 0x18);
            lVar3 = *(longlong *)
                     (local_4f8.BoxExtents.Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)local_4f8.RootIndex >> 9) * 8);
            dVar48 = *(double *)(lVar26 + 8 + uVar21 * 0x18);
            dVar49 = *(double *)(lVar26 + 0x10 + uVar21 * 0x18);
            dVar45 = dVar38 + *(double *)(lVar3 + uVar21 * 0x18);
            dVar43 = dVar49 + *(double *)(lVar3 + 0x10 + uVar21 * 0x18);
            dVar1 = dVar38 - *(double *)(lVar3 + uVar21 * 0x18);
            dVar6 = dVar48 - *(double *)(lVar3 + 8 + uVar21 * 0x18);
            dVar49 = dVar49 - *(double *)(lVar3 + 0x10 + uVar21 * 0x18);
            dVar38 = dVar48 + *(double *)(lVar3 + 8 + uVar21 * 0x18);
          }
          pppuStack_930 = pppuStack_3a0;
          uVar47 = local_3a8;
          pcStack_940 = (code *)ppFStack_3b0;
          local_948 = local_3b8;
          uVar23 = local_438._120_8_;
          local_958 = (code *)local_438._112_8_;
          dVar43 = dVar43 - dVar49;
          dVar38 = dVar38 - dVar6;
          dVar45 = dVar45 - dVar1;
          if (dVar43 <= 0.0) {
            dVar43 = 0.0;
          }
          local_438._88_8_ = 0.0;
          if (dVar38 <= 0.0) {
            dVar38 = 0.0;
          }
          local_3b8 = &Core::Private::Function::
                       TFunction_OwnedObject<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::`16'::<lambda_1>,0,0>
                       ::_vftable_;
          ppFStack_3b0 = &local_b78;
          if (dVar45 <= 0.0) {
            dVar45 = 0.0;
          }
          if (dVar43 <= dVar38) {
            dVar43 = dVar38;
          }
          if (dVar43 <= dVar45) {
            dVar43 = dVar45;
          }
          local_438._104_8_ = dVar43 / (double)iVar16;
          local_438._112_8_ =
               Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::__l16::<lambda_1>,bool>
               ::Call;
          local_438._120_8_ = uStack_950;
          local_3a8 = local_938;
          pppuStack_3a0 = (undefined ***)0x0;
          uStack_950 = uVar23;
          local_938 = uVar47;
          if (local_958 != (code *)0x0) {
            pppuVar29 = &local_948;
            if (pppuStack_930 != (undefined ***)0x0) {
              pppuVar29 = pppuStack_930;
            }
            (*(code *)(*pppuVar29)[2])();
          }
          if ((int)uVar33 < local_b80) {
            uVar13 = uVar34;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar32 = (FDynamicMesh3 *)(local_b88.Data + lVar25);
          pFVar22 = TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate
                              ((TImplicitSolidify<UE::Geometry::FDynamicMesh3> *)local_438);
          FDynamicMesh3::Copy(pFVar32,pFVar22);
          pFVar8 = local_b78;
          if (local_b78 != (FProgressCancel *)0x0) {
            if (local_b78->WasCancelled == false) {
              Core::Private::Function::CheckCallable(*(void **)&local_b78->CancelF);
              plVar27 = *(longlong **)&(pFVar8->CancelF).field_0x28;
              pcVar2 = *(code **)&pFVar8->CancelF;
              plVar28 = (longlong *)&(pFVar8->CancelF).field_0x10;
              if (plVar27 != (longlong *)0x0) {
                plVar28 = plVar27;
              }
              uVar23 = (**(code **)(*plVar28 + 8))();
              bVar12 = (bool)(*pcVar2)(uVar23);
              pFVar8->WasCancelled = bVar12;
              if (bVar12 == false) goto LAB_14c96f2ac;
            }
            FMarchingCubes::~FMarchingCubes(&local_398);
            if ((code *)local_438._112_8_ != (code *)0x0) {
              pppuVar29 = &local_3b8;
              if (pppuStack_3a0 != (undefined ***)0x0) {
                pppuVar29 = pppuStack_3a0;
              }
              (*(code *)(*pppuVar29)[2])();
            }
            if (local_b10.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_b10.FastWindingCache.AllocatorInstance.Data);
            }
            TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
            ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_4f8);
            goto LAB_14c96f8b8;
          }
LAB_14c96f2ac:
          dVar49 = __real_3fe0000000000000;
          if (this->bRemoveInternalsAfterVoxWrap != false) {
            uVar13 = 0;
            if ((int)uVar33 < local_b80) {
              uVar13 = uVar34;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            dVar49 = __real_3fe0000000000000;
            MeshAutoRepair::RemoveInternalTriangles
                      ((FDynamicMesh3 *)(local_b88.Data + lVar25),true,Centroids,FastWindingNumber,0
                       ,__real_3fe0000000000000,true);
          }
          FMarchingCubes::~FMarchingCubes(&local_398);
          if ((code *)local_438._112_8_ != (code *)0x0) {
            pppuVar29 = &local_3b8;
            if (pppuStack_3a0 != (undefined ***)0x0) {
              pppuVar29 = pppuStack_3a0;
            }
            (*(code *)(*pppuVar29)[2])();
          }
          if (local_b10.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b10.FastWindingCache.AllocatorInstance.Data);
          }
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                    (&local_4f8);
          uVar23 = local_b48;
          uVar47 = local_b50;
        }
        uVar13 = 0;
        if ((int)uVar33 < local_b80) {
          uVar13 = uVar34;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(local_b88.Data + lVar25 + 0x170) == 0) goto LAB_14c96f678;
        uVar13 = 0;
        if ((int)uVar33 < local_b80) {
          uVar13 = uVar34;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_b70 = (FDynamicMesh3 *)(local_b88.Data + lVar25);
        if ((((ulonglong)local_898._16_8_ <= (FScriptContainerElement *)&local_b70) &&
            ((FScriptContainerElement *)&local_b70 <
             (FScriptContainerElement *)(local_898._16_8_ + (longlong)(int)local_898._28_4_ * 8)))
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar16 = local_898._24_4_;
        if (local_898._24_4_ == local_898._28_4_) {
          iVar16 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(local_898 + 0x10),
                              (int *)(local_898 + 0x1c));
        }
        local_898._24_4_ = iVar16 + 1;
        *(FDynamicMesh3 **)(local_898._16_8_ + (longlong)iVar16 * 8) = local_b70;
        uVar13 = 0;
        if ((int)uVar33 < local_b80) {
          uVar13 = uVar34;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar19 = FDynamicMesh3::GetBounds
                            ((FDynamicMesh3 *)(local_b88.Data + lVar25),&local_988,true);
        if ((((ulonglong)local_898._32_8_ <= pTVar19) &&
            (pTVar19 < (TAxisAlignedBox3<double> *)
                       (local_898._32_8_ + (longlong)(int)local_898._44_4_ * 0x30))) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar16 = local_898._40_4_;
        if (local_898._40_4_ == local_898._44_4_) {
          iVar16 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,(ForAnyElementType *)(local_898 + 0x20),
                              (int *)(local_898 + 0x2c));
        }
        lVar25 = (longlong)iVar16;
        local_898._40_4_ = iVar16 + 1;
        dVar38 = (pTVar19->Min).field0_0x0._s_0.Y;
        *(double *)&((FScriptContainerElement *)(local_898._32_8_ + lVar25 * 0x30))->field_0x0 =
             (pTVar19->Min).field0_0x0._s_0.X;
        *(double *)((FScriptContainerElement *)(local_898._32_8_ + lVar25 * 0x30) + 8) = dVar38;
        dVar38 = (pTVar19->Max).field0_0x0._s_0.X;
        *(double *)(local_898._32_8_ + lVar25 * 0x30 + 0x10) = (pTVar19->Min).field0_0x0._s_0.Z;
        *(double *)((FScriptContainerElement *)(local_898._32_8_ + lVar25 * 0x30 + 0x10) + 8) =
             dVar38;
        dVar38 = (pTVar19->Max).field0_0x0._s_0.Z;
        *(double *)(local_898._32_8_ + lVar25 * 0x30 + 0x20) = (pTVar19->Max).field0_0x0._s_0.Y;
        *(double *)((FScriptContainerElement *)(local_898._32_8_ + lVar25 * 0x30 + 0x20) + 8) =
             dVar38;
        dVar38 = *(double *)
                  &((FScriptContainerElement *)(local_898._32_8_ + lVar25 * 0x30))->field_0x0;
        if (local_b58 <=
            *(double *)&((FScriptContainerElement *)(local_898._32_8_ + lVar25 * 0x30))->field_0x0)
        {
          dVar38 = local_b58;
        }
        dVar48 = *(double *)(local_898._32_8_ + lVar25 * 0x30 + 8);
        if (local_b60 <= *(double *)(local_898._32_8_ + lVar25 * 0x30 + 8)) {
          dVar48 = local_b60;
        }
        dVar43 = *(double *)(local_898._32_8_ + lVar25 * 0x30 + 0x10);
        if (local_b68 <= *(double *)(local_898._32_8_ + lVar25 * 0x30 + 0x10)) {
          dVar43 = local_b68;
        }
        uVar36 = SUB84(dVar48,0);
        uVar40 = (undefined4)((ulonglong)dVar48 >> 0x20);
        dVar45 = *(double *)(local_898._32_8_ + lVar25 * 0x30 + 0x18);
        if (dVar45 <= (double)CONCAT44(uVar41,uVar37)) {
          dVar45 = (double)CONCAT44(uVar41,uVar37);
        }
        dVar1 = *(double *)(local_898._32_8_ + lVar25 * 0x30 + 0x20);
        if (dVar1 <= (double)CONCAT44(uVar44,uVar42)) {
          dVar1 = (double)CONCAT44(uVar44,uVar42);
        }
        uVar37 = SUB84(dVar45,0);
        uVar41 = (undefined4)((ulonglong)dVar45 >> 0x20);
        dVar45 = *(double *)(local_898._32_8_ + lVar25 * 0x30 + 0x28);
        if (*(double *)(local_898._32_8_ + lVar25 * 0x30 + 0x28) <= dVar50) {
          dVar45 = dVar50;
        }
        uVar42 = SUB84(dVar1,0);
        uVar44 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar50 = dVar45;
        local_b68 = dVar43;
        local_b60 = dVar48;
        local_b58 = dVar38;
      }
      uVar21 = (ulonglong)(uVar33 + 1);
      uVar35 = uVar35 + 1;
      dVar48 = local_b68;
      dVar38 = local_b58;
    } while ((int)(uVar33 + 1) < (this->Meshes).ArrayNum);
  }
  pppuVar29 = pppuStack_810;
  uVar47 = local_818;
  ppFVar11 = ppFStack_820;
  ppuVar10 = local_828;
  uVar23 = local_898._104_8_;
  uVar17 = local_898._96_8_;
  if (local_898._24_4_ == 0) goto LAB_14c96f8b8;
  local_898._56_8_ = this->BlendFalloff;
  dVar50 = dVar50 - dVar48;
  dVar4 = (double)CONCAT44(uVar44,uVar42) - (double)CONCAT44(uVar40,uVar36);
  dVar38 = (double)CONCAT44(uVar41,uVar37) - dVar38;
  if (dVar50 <= 0.0) {
    dVar50 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar38 <= 0.0) {
    dVar38 = 0.0;
  }
  if (dVar50 <= dVar4) {
    dVar50 = dVar4;
  }
  if (dVar50 <= dVar38) {
    dVar50 = dVar38;
  }
  dVar50 = dVar50 + (double)local_898._56_8_ + (double)local_898._56_8_;
  local_898._48_8_ = this->BlendPower;
  local_898._64_8_ = dVar50 / (double)*(int *)((longlong)&this->_padding_ + 4);
  local_898._96_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::__l2::<lambda_2>,bool>
       ::Call;
  local_898._104_8_ = uStack_920;
  local_818 = local_908;
  pppuStack_810 = (undefined ***)0x0;
  local_928 = (code *)uVar17;
  uStack_920 = uVar23;
  local_908 = uVar47;
  pppuStack_900 = pppuVar29;
  local_828 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::Geometry::FVoxelBlendMeshesOp::CalculateResult'::`2'::<lambda_2>,0,0>
               ::_vftable_;
  ppFStack_820 = &local_b78;
  local_898._72_8_ = dVar50 / (double)(int)this->_padding_;
  local_918 = ppuVar10;
  ppFStack_910 = ppFVar11;
  if ((code *)uVar17 != (code *)0x0) {
    pppuVar30 = &local_918;
    if (pppuVar29 != (undefined ***)0x0) {
      pppuVar30 = pppuVar29;
    }
    (*(code *)(*pppuVar30)[2])();
  }
  pFVar8 = local_b78;
  if (local_b78 != (FProgressCancel *)0x0) {
    if (local_b78->WasCancelled != false) goto LAB_14c96f8b8;
    Core::Private::Function::CheckCallable(*(void **)&local_b78->CancelF);
    pcVar2 = *(code **)&pFVar8->CancelF;
    plVar27 = *(longlong **)&(pFVar8->CancelF).field_0x28;
    plVar28 = (longlong *)&(pFVar8->CancelF).field_0x10;
    if (plVar27 != (longlong *)0x0) {
      plVar28 = plVar27;
    }
    uVar17 = (**(code **)(*plVar28 + 8))();
    bVar12 = (bool)(*pcVar2)(uVar17);
    pFVar8->WasCancelled = bVar12;
    if (bVar12 != false) goto LAB_14c96f8b8;
  }
  pFVar32 = (FDynamicMesh3 *)this->_padding_;
  pFVar22 = TImplicitBlend<UE::Geometry::FDynamicMesh3>::Generate
                      ((TImplicitBlend<UE::Geometry::FDynamicMesh3> *)local_898,false);
  FDynamicMesh3::Copy(pFVar32,pFVar22);
  (**(code **)(this->_padding_ + 0x20))(this,local_b78,local_898._72_8_);
LAB_14c96f8b8:
  DestructItems<UE::Geometry::FDynamicMesh3,int>((FDynamicMesh3 *)local_b88.Data,local_b80);
  if ((FDynamicMesh3 *)local_b88.Data != (FDynamicMesh3 *)0x0) {
    FMemory::Free(local_b88.Data);
  }
  TImplicitBlend<UE::Geometry::FDynamicMesh3>::~TImplicitBlend<UE::Geometry::FDynamicMesh3>
            ((TImplicitBlend<UE::Geometry::FDynamicMesh3> *)local_898);
  return;
}

// SetTransform @ 14c985a80

void __thiscall
UE::Geometry::FVoxelBlendMeshesOp::SetTransform
          (FVoxelBlendMeshesOp *this,TTransformSRT3<double> *param_1)

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

