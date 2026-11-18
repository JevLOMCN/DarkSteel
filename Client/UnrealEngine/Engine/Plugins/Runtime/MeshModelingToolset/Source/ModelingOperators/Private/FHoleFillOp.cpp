// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// CalculateResult @ 14c964830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FHoleFillOp::CalculateResult(FHoleFillOp *this,FProgressCancel *param_1)

{
  uint *puVar1;
  EHoleFillOpFillType EVar2;
  code *pcVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  double dVar7;
  FDynamicMesh3 *pFVar8;
  undefined7 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  FSmoothHoleFiller *this_00;
  FMinimalHoleFiller *pFVar27;
  FMinimalHoleFiller *pFVar28;
  FEdgeLoop *pFVar29;
  FSimpleHoleFiller *this_01;
  byte bVar30;
  ForAnyElementType FVar31;
  undefined ***pppuVar32;
  longlong *plVar33;
  uint uVar34;
  uint uVar35;
  ulonglong uVar36;
  uint uVar37;
  FScriptContainerElement *pFVar38;
  FDynamicMesh3 *pFVar39;
  ForElementType<unsigned_int> FVar40;
  ulonglong uVar41;
  EFillType EVar42;
  FEdgeLoop *this_02;
  undefined1 auStackY_388 [32];
  undefined1 local_348 [8];
  FEdgeLoop *local_340;
  ForAnyElementType local_338;
  undefined8 local_330;
  int local_328 [2];
  TVector<double>_u_0 local_320;
  int local_308;
  uint local_304;
  uint local_300;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2f8;
  uint local_2e8;
  uint uStack_2e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2e0;
  undefined4 local_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  FDynamicMeshEditor local_2c8;
  TVector<float>_u_0 local_2c0;
  undefined4 local_2b4;
  int local_2b0;
  int local_2ac;
  TVector2<float>_u_0 local_2a8;
  longlong *local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_298;
  TVector<double>_u_0 local_278;
  code *local_258;
  undefined **local_248;
  code *local_240;
  undefined ***local_230;
  FSparseArrayAllocationInfo local_228;
  TVector<double>_u_0 local_218;
  TQuaternion<double>_u_0 local_200;
  TVector<double>_u_0 local_1e0;
  FEdgeLoop local_1c8;
  FEdgeLoop local_188;
  FEdgeLoop local_148;
  undefined1 local_108 [32];
  ForElementType<unsigned_int> local_e8;
  uint local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  FScriptContainerElement local_d0 [8];
  ForAnyElementType local_c8;
  uint local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  this->NumFailedLoops = 0;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar3 = *(code **)&param_1->CancelF;
    plVar4 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar33 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar33 = plVar4;
    }
    uVar23 = (**(code **)(*plVar33 + 8))();
    bVar18 = (bool)(*pcVar3)(uVar23);
    param_1->WasCancelled = bVar18;
    if (bVar18 != false) {
      return;
    }
  }
  pFVar39 = (FDynamicMesh3 *)this->_padding_;
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar18)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FDynamicMesh3::Copy(pFVar39,(this->OriginalMesh).Object,true,true,true,true);
  if (((this->Loops).ArrayNum == 0) ||
     ((param_1 != (FProgressCancel *)0x0 && (bVar18 = FProgressCancel::Cancelled(param_1), bVar18)))
     ) {
    return;
  }
  dVar12 = _UNK_15076c718;
  dVar11 = ___xmm_bff0000000000000bff0000000000000;
  dVar10 = __real_3ff0000000000000;
  local_300 = (this->Loops).ArrayNum;
  uVar24 = (ulonglong)(int)local_300;
  this_02 = (FEdgeLoop *)(this->Loops).AllocatorInstance.Data;
  local_340 = this_02 + uVar24;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (ForElementType<unsigned_int>)0x0;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = -1;
  local_d4 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  pFVar29 = local_340;
LAB_14c9649f3:
  do {
    pFVar27 = (FMinimalHoleFiller *)0x0;
    if ((this->Loops).ArrayNum != (int)uVar24) {
      local_348[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_348);
    }
    if (this_02 == pFVar29) break;
    bVar18 = ::`anonymous_namespace'::LoopIsValid((FDynamicMesh3 *)this->_padding_,this_02);
    if (!bVar18) {
      this->NumFailedLoops = this->NumFailedLoops + 1;
      this_02 = this_02 + 1;
      uVar24 = (ulonglong)local_300;
      goto LAB_14c9649f3;
    }
    if (((this->FillOptions).bRemoveIsolatedTriangles == false) ||
       (bVar18 = ::`anonymous_namespace'::LoopIsAnIsolatedTriangle
                           ((FDynamicMesh3 *)this->_padding_,this_02,&local_308), !bVar18)) {
      if ((((this->FillOptions).bQuickFillSmallHoles == false) || ((this_02->Edges).ArrayNum != 3))
         || (bVar18 = FillSingleTriangleHole(this,this_02,(int *)&local_304), !bVar18)) {
        local_328[0] = *(int *)(this->_padding_ + 0x1b0);
        *(int *)(this->_padding_ + 0x1b0) = local_328[0] + 1;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,&local_2ac,
                   (bool *)local_328);
        local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2f8.ArrayNum = 0;
        local_2f8.ArrayMax = 0;
        FEdgeLoop::GetVertices<UE::Math::TVector<double>_>(this_02,&local_2f8);
        PolygonTriangulation::ComputePolygonPlane<double>
                  (&local_2f8,(TVector<double> *)&local_320._s_0,(TVector<double> *)&local_278._s_0)
        ;
        EVar2 = this->FillType;
        local_338.Data = (FScriptContainerElement *)0x0;
        local_330 = 0;
        dVar7 = local_320._s_0.Y * dVar12;
        local_320._8_4_ = SUB84(dVar7,0);
        local_320._s_0.X = local_320._s_0.X * dVar11;
        local_320._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_320._s_0.Z = local_320._s_0.Z * dVar11;
        if (EVar2 == TriangleFan) {
          pFVar39 = (FDynamicMesh3 *)this->_padding_;
          this_01 = ::operator_new(0x68);
          if (this_01 != (FSimpleHoleFiller *)0x0) {
            pFVar29 = FEdgeLoop::FEdgeLoop(&local_148,this_02);
            EVar42 = TriangleFan;
LAB_14c9651d5:
            pFVar27 = (FMinimalHoleFiller *)
                      FSimpleHoleFiller::FSimpleHoleFiller(this_01,pFVar39,pFVar29,EVar42);
          }
LAB_14c9651eb:
          if (pFVar27 == (FMinimalHoleFiller *)0x0) goto LAB_14c9651f0;
        }
        else {
          if (EVar2 == PolygonEarClipping) {
            pFVar39 = (FDynamicMesh3 *)this->_padding_;
            this_01 = ::operator_new(0x68);
            if (this_01 != (FSimpleHoleFiller *)0x0) {
              pFVar29 = FEdgeLoop::FEdgeLoop(&local_188,this_02);
              EVar42 = PolygonEarClipping;
              goto LAB_14c9651d5;
            }
            goto LAB_14c9651eb;
          }
          if (EVar2 == Planar) {
            iVar20 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_338,(int *)((longlong)&local_330 + 4));
            pFVar38 = local_338.Data + (longlong)iVar20 * 0x10;
            local_330 = CONCAT44(local_330._4_4_,iVar20 + 1);
            *(FScriptContainerElement **)&pFVar38->field_0x0 = (FScriptContainerElement *)0x0;
            iVar20 = (this_02->Vertices).ArrayNum;
            pFVar5 = (this_02->Vertices).AllocatorInstance.Data;
            *(int *)(pFVar38 + 8) = iVar20;
            if (iVar20 == 0) {
              *(int *)(pFVar38 + 0xc) = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar20,0,(ForAnyElementType *)pFVar38,iVar20,(int *)(pFVar38 + 0xc));
              memcpy(*(FScriptContainerElement **)&pFVar38->field_0x0,pFVar5,(longlong)iVar20 << 2);
            }
            lVar6 = this->_padding_;
            pFVar28 = ::operator_new(0x90);
            uVar17 = local_278._s_0.Z;
            uVar16 = local_278._s_0.Y;
            uVar15 = local_278._s_0.X;
            uVar23 = local_320._s_0.Z;
            if (pFVar28 != (FMinimalHoleFiller *)0x0) {
              uVar13 = local_320._s_0.X;
              uVar14 = local_320._s_0.Y;
              local_230 = (undefined ***)0x0;
              local_248 = &
                          ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
              ;
              local_240 = ConstrainedDelaunayTriangulate<double>;
              local_258 = Core::Private::Function::
                          TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
                          ::Call;
              pFVar28->_padding_ = (longlong)&___7FPlanarHoleFiller_Geometry_UE__6B_;
              pFVar28->DevelopabilityTolerance = (double)&local_338;
              pFVar28->_padding_ = 0;
              pFVar28->_padding_ = 0;
              *(longlong *)&pFVar28->bIgnoreBoundaryTriangles = lVar6;
              (pFVar28->FillLoop).Mesh =
                   (FDynamicMesh3 *)
                   Core::Private::Function::
                   TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
                   ::Call;
              (pFVar28->FillLoop).BowtieVertices.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (*(code *)
                ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
              )(&local_248);
              *(undefined8 *)&(pFVar28->FillLoop).BowtieVertices.ArrayNum = uVar15;
              *(undefined8 *)&(pFVar28->FillLoop).bBowtiesCalculated = uVar16;
              pFVar28->FillMesh = (FDynamicMesh3 *)uVar13;
              *(undefined8 *)&(pFVar28->BoundaryVertices).Elements = uVar14;
              (pFVar28->RegionOp).Ptr = (FMeshRegionOperator *)uVar17;
              *(undefined8 *)&(pFVar28->BoundaryVertices).Elements.field_0x8 = uVar23;
              pFVar27 = pFVar28;
              if (local_258 != (code *)0x0) {
                pppuVar32 = &local_248;
                if (local_230 != (undefined ***)0x0) {
                  pppuVar32 = local_230;
                }
                (*(code *)(*pppuVar32)[2])();
              }
            }
            goto LAB_14c9651eb;
          }
          if (EVar2 == Minimal) {
            pFVar39 = (FDynamicMesh3 *)this->_padding_;
            pFVar28 = ::operator_new(0x130);
            if (pFVar28 != (FMinimalHoleFiller *)0x0) {
              pFVar29 = FEdgeLoop::FEdgeLoop(&local_1c8,this_02);
              pFVar27 = FMinimalHoleFiller::FMinimalHoleFiller(pFVar28,pFVar39,pFVar29);
            }
            goto LAB_14c9651eb;
          }
          if (EVar2 == Smooth) {
            pFVar39 = (FDynamicMesh3 *)this->_padding_;
            this_00 = ::operator_new(0x60);
            if (this_00 != (FSmoothHoleFiller *)0x0) {
              pFVar27 = (FMinimalHoleFiller *)
                        FSmoothHoleFiller::FSmoothHoleFiller(this_00,pFVar39,this_02);
            }
            uVar9 = *(undefined7 *)&(this->SmoothFillOptions).field_0x1;
            dVar7 = (this->SmoothFillOptions).InteriorSmoothness;
            pFVar39 = *(FDynamicMesh3 **)&(this->SmoothFillOptions).RemeshingExteriorRegionWidth;
            pFVar8 = *(FDynamicMesh3 **)&(this->SmoothFillOptions).SmoothingInteriorRegionWidth;
            pFVar5 = (FScriptContainerElement *)(this->SmoothFillOptions).FillDensityScalar;
            uVar23 = *(undefined8 *)&(this->SmoothFillOptions).bProjectDuringRemesh;
            pFVar27->bIgnoreBoundaryTriangles = (this->SmoothFillOptions).bConstrainToHoleInterior;
            *(undefined7 *)&pFVar27->bOptimizeDevelopability = uVar9;
            pFVar27->DevelopabilityTolerance = dVar7;
            pFVar27->Mesh = pFVar39;
            (pFVar27->FillLoop).Mesh = pFVar8;
            (pFVar27->FillLoop).Vertices.AllocatorInstance.Data = pFVar5;
            *(undefined8 *)&(pFVar27->FillLoop).Vertices.ArrayNum = uVar23;
            goto LAB_14c9651eb;
          }
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                              ,0x187,L"");
          if (bVar18) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
LAB_14c9651f0:
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Filler",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                              ,0x18a,L"");
          if (bVar18) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        cVar19 = (**(code **)(pFVar27->_padding_ + 8))(pFVar27,local_328[0]);
        if (cVar19 == '\0') {
          this->NumFailedLoops = this->NumFailedLoops + 1;
        }
        else {
          if ((((FDynamicMesh3 *)this->_padding_)->AttributeSet).Ptr !=
              (FDynamicMeshAttributeSet *)0x0) {
            local_218._s_0.X = local_278._s_0.X;
            local_218._s_0.Y = local_278._s_0.Y;
            local_200._s_0.X = 0.0;
            local_1e0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
            local_1e0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
            local_1e0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
            local_200._s_0.W = dVar10;
            local_200._s_0.Y = 0.0;
            local_200._s_0.Z = 0.0;
            local_218._s_0.Z = local_278._s_0.Z;
            local_2c8.Mesh = (FDynamicMesh3 *)this->_padding_;
            TQuaternion<double>::SetFromTo
                      ((TQuaternion<double> *)&local_200._s_0,(TVector<double> *)&local_1e0._s_0,
                       (TVector<double> *)&local_320._s_0);
            local_2c0._s_0.X = (float)local_320._s_0.X;
            local_2c0._s_0.Y = (float)local_320._s_0.Y;
            local_2c0._s_0.Z = (float)local_320._s_0.Z;
            FDynamicMeshEditor::SetTriangleNormals
                      (&local_2c8,(TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar27->_padding_,
                       (TVector<float> *)&local_2c0._s_0);
            local_2a8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            FDynamicMeshEditor::SetTriangleUVsFromProjection
                      (&local_2c8,(TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar27->_padding_,
                       (TFrame3<double> *)&local_218._s_0,(float)this->MeshUVScaleFactor,
                       (TVector2<float> *)&local_2a8._s_0,true,0);
          }
          if (param_1 != (FProgressCancel *)0x0) {
            if (param_1->WasCancelled == false) {
              Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
              plVar4 = *(longlong **)&(param_1->CancelF).field_0x28;
              pcVar3 = *(code **)&param_1->CancelF;
              plVar33 = (longlong *)&(param_1->CancelF).field_0x10;
              if (plVar4 != (longlong *)0x0) {
                plVar33 = plVar4;
              }
              uVar23 = (**(code **)(*plVar33 + 8))();
              bVar18 = (bool)(*pcVar3)(uVar23);
              param_1->WasCancelled = bVar18;
              if (bVar18 == false) goto LAB_14c965371;
            }
            DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)local_338.Data,(int)local_330);
            if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_338.Data !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_338.Data);
            }
            (**(code **)pFVar27->_padding_)(pFVar27,1);
            if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f8.AllocatorInstance.Data);
            }
            goto LAB_14c9655f6;
          }
        }
LAB_14c965371:
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_338.Data,(int)local_330);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_338.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_338.Data);
        }
        (**(code **)pFVar27->_padding_)(pFVar27,1);
        if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.AllocatorInstance.Data);
        }
      }
      else {
        if (local_d4 == 0) {
          iVar20 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,1,(ForAnyElementType *)local_108,(int *)(local_108 + 8),
                              (int *)(local_108 + 0xc));
          iVar21 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),1);
          FVar40 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
          if (local_e8 != (ForElementType<unsigned_int>)0x0) {
            FVar40 = local_e8;
          }
          bVar30 = (byte)iVar21 & 0x1f;
          if (iVar21 < 0) {
            iVar21 = iVar21 + 0x1f;
            bVar30 = bVar30 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar40 + (longlong)(iVar21 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar30 & 0x1f));
          iVar21 = local_d8;
        }
        else {
          local_d4 = local_d4 + -1;
          iVar21 = *(int *)(local_108._0_8_ + (longlong)local_d8 * 0xc + 4);
          iVar20 = local_d8;
          if (local_d4 != 0) {
            *(undefined4 *)(local_108._0_8_ + (longlong)iVar21 * 0xc) = 0xffffffff;
          }
        }
        local_d8 = iVar21;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_108,&local_228,iVar20);
        if (local_228.Pointer != (FMinimalHoleFiller *)0x0) {
          *(uint *)local_228.Pointer = local_304;
          *(undefined4 *)((longlong)local_228.Pointer + 4) = 0xffffffff;
          pFVar27 = local_228.Pointer;
        }
        uVar35 = (uint)pFVar27->_padding_;
        if ((local_108._8_4_ - local_d4 != 1) && (local_108._8_4_ != local_d4)) {
          FVar31.Data = local_d0;
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            FVar31.Data = local_c8.Data;
          }
          for (iVar20 = *(int *)(FVar31.Data + (ulonglong)(local_c0 - 1 & uVar35) * 4); iVar20 != -1
              ; iVar20 = *(int *)(local_108._0_8_ + (longlong)iVar20 * 0xc + 4)) {
            if (*(uint *)(local_108._0_8_ + (longlong)iVar20 * 0xc) == uVar35) {
              if (iVar20 != -1) {
                *(uint *)(local_108._0_8_ + (longlong)iVar20 * 0xc) = uVar35;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_108,local_228.Index,1);
                goto LAB_14c9653a9;
              }
              break;
            }
          }
        }
        uVar24 = 0;
        uVar37 = 1;
        uVar34 = local_108._8_4_ - local_d4;
        if (3 < uVar34) {
          uVar36 = (ulonglong)((uVar34 >> 1) + 7) * 2 + 1;
          lVar6 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          local_2b4 = (undefined4)lVar6;
          uVar37 = 1 << ((byte)lVar6 & 0x1f);
        }
        if (((int)uVar34 < 1) || ((int)uVar37 <= (int)local_c0)) {
          uVar35 = local_c0 - 1 & uVar35;
          *(uint *)&pFVar27->_padding_ = uVar35;
          FVar31.Data = local_d0;
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            FVar31.Data = local_c8.Data;
          }
          this_02 = this_02 + 1;
          uVar36 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar35;
          *(undefined4 *)((longlong)&pFVar27->_padding_ + 4) =
               *(undefined4 *)(FVar31.Data + uVar36 * 4);
          uVar24 = (ulonglong)local_300;
          *(int *)(FVar31.Data + uVar36 * 4) = local_228.Index;
          pFVar29 = local_340;
          goto LAB_14c9649f3;
        }
        local_c0 = uVar37;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,4);
        }
        if (uVar37 != 0) {
          uVar35 = uVar37;
          if (uVar37 < 2) {
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              uVar35 = 0;
              goto LAB_14c964cc1;
            }
          }
          else {
LAB_14c964cc1:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_c8,0,uVar35,4);
          }
          if (0 < (int)uVar37) {
            uVar41 = (ulonglong)uVar37;
            uVar36 = uVar24;
            do {
              FVar31.Data = local_d0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FVar31.Data = local_c8.Data;
              }
              uVar25 = (longlong)(int)uVar37 - 1U & uVar36;
              uVar36 = uVar36 + 1;
              *(undefined4 *)(FVar31.Data + uVar25 * 4) = 0xffffffff;
              uVar41 = uVar41 - 1;
            } while (uVar41 != 0);
          }
        }
        if (local_c0 != 0) {
          pTStack_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
          local_2e8 = 0;
          uStack_2e4 = 1;
          uStack_2d4 = 0;
          uStack_2d0 = 0;
          if (local_e0 != 0) {
            FVar40 = (ForElementType<unsigned_int>)((longlong)local_108 + 0x10);
            if (local_e8 != (ForElementType<unsigned_int>)0x0) {
              FVar40 = local_e8;
            }
            uVar35 = *(uint *)FVar40;
            uVar36 = uVar24;
            while (uVar35 == 0) {
              uStack_2d0 = (int)uVar36 + 0x20;
              uVar36 = (ulonglong)uStack_2d0;
              iVar20 = (int)uVar24;
              local_2e8 = iVar20 + 1;
              uVar24 = (ulonglong)local_2e8;
              if ((int)((local_e0 - 1) + ((int)(local_e0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_2e8) goto LAB_14c964dce;
              uVar35 = ((uint *)((longlong)FVar40 + 4))[iVar20];
            }
            uStack_2e4 = -uVar35 & uVar35;
            uVar24 = (ulonglong)uStack_2e4 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            local_2b0 = (int)lVar6;
            uStack_2d4 = local_2b0 + -1 + (int)uVar36;
            uVar24 = (ulonglong)uStack_2d4;
            if ((int)local_e0 < (int)uStack_2d4) {
LAB_14c964dce:
              uVar24 = (ulonglong)local_e0;
              uStack_2d4 = local_e0;
            }
          }
          local_2d8 = 0xffffffff;
          local_2a0 = (longlong *)local_108;
          local_298._padding_ = CONCAT44(uStack_2e4,local_2e8);
          local_298.CurrentBitIndex = uStack_2d4;
          local_298.UnvisitedBitMask = 0xffffffff;
          local_298._28_4_ = uStack_2cc;
          local_298.BaseBitIndex = uStack_2d0;
          local_298.Array = pTStack_2e0;
          if ((int)uVar24 < (int)local_e0) {
            do {
              lVar6 = *local_2a0;
              lVar26 = (longlong)(int)uVar24;
              uVar35 = local_c0 - 1 & *(uint *)(lVar6 + lVar26 * 0xc);
              *(uint *)(lVar6 + 8 + lVar26 * 0xc) = uVar35;
              FVar31.Data = local_d0;
              if (local_c8.Data != (FScriptContainerElement *)0x0) {
                FVar31.Data = local_c8.Data;
              }
              uVar36 = (longlong)(int)local_c0 - 1U & (longlong)(int)uVar35;
              *(undefined4 *)(lVar6 + 4 + lVar26 * 0xc) = *(undefined4 *)(FVar31.Data + uVar36 * 4);
              *(int *)(FVar31.Data + uVar36 * 4) = (int)uVar24;
              local_298.UnvisitedBitMask = local_298.UnvisitedBitMask & ~local_298._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_298);
              uVar24 = (ulonglong)(uint)local_298.CurrentBitIndex;
            } while (local_298.CurrentBitIndex < (local_298.Array)->NumBits);
          }
        }
      }
LAB_14c9653a9:
      this_02 = this_02 + 1;
      uVar24 = (ulonglong)local_300;
      pFVar29 = local_340;
      goto LAB_14c9649f3;
    }
    FDynamicMesh3::RemoveTriangle((FDynamicMesh3 *)this->_padding_,local_308,true,false);
    uVar24 = (ulonglong)local_300;
    this_02 = this_02 + 1;
  } while( true );
  (this->NewTriangles).ArrayNum = 0;
  if ((this->NewTriangles).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NewTriangles).AllocatorInstance,0,&(this->NewTriangles).ArrayMax);
  }
  lVar6 = this->_padding_;
  iVar20 = *(int *)(lVar6 + 0x144) + *(int *)(lVar6 + 0x140) * 0x200;
  if (((iVar20 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar6 + 0x148) - 1U))) &&
     (pFVar27 = (FMinimalHoleFiller *)&DAT_00000001, 1 < iVar20)) {
    do {
      uVar24 = (ulonglong)((uint)pFVar27 & 0x1ff);
      lVar26 = (*(undefined8 **)(lVar6 + 0x148))[(ulonglong)pFVar27 >> 9];
      if ((*(short *)(lVar26 + uVar24 * 2) != 0) && (*(short *)(lVar26 + uVar24 * 2) != -1)) break;
      uVar35 = (uint)pFVar27 + 1;
      pFVar27 = (FMinimalHoleFiller *)(ulonglong)uVar35;
    } while ((int)uVar35 < iVar20);
  }
  iVar21 = *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144);
  if ((int)pFVar27 != iVar21) {
LAB_14c9654c0:
    do {
      lVar26 = this->_padding_;
      uVar35 = (uint)pFVar27;
      if (*(char *)(lVar26 + 0x1a8) == '\0') {
        uVar24 = 0xffffffff;
      }
      else {
        if ((-1 < (int)uVar35) &&
           ((int)uVar35 < *(int *)(lVar26 + 0x140) * 0x200 + *(int *)(lVar26 + 0x144))) {
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar26 + 0x148) + ((ulonglong)pFVar27 >> 9) * 8) +
                                 (ulonglong)(uVar35 & 0x1ff) * 2) - 1U) < 0xfffe) {
            uVar24 = (ulonglong)
                     *(uint *)(*(longlong *)
                                (*(longlong *)(lVar26 + 0x198) + ((ulonglong)pFVar27 >> 9) * 8) +
                              (ulonglong)(uVar35 & 0x1ff) * 4);
            goto LAB_14c96552a;
          }
        }
        uVar24 = 0;
      }
LAB_14c96552a:
      if (local_108._8_4_ != local_d4) {
        FVar31.Data = local_d0;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FVar31.Data = local_c8.Data;
        }
        for (iVar22 = *(int *)(FVar31.Data + (local_c0 - 1 & uVar24) * 4); iVar22 != -1;
            iVar22 = *(int *)(local_108._0_8_ + (longlong)iVar22 * 0xc + 4)) {
          if (*(int *)(local_108._0_8_ + (longlong)iVar22 * 0xc) == (int)uVar24) {
            iVar22 = (this->NewTriangles).ArrayNum;
            if (iVar22 == (this->NewTriangles).ArrayMax) {
              iVar22 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&(this->NewTriangles).AllocatorInstance,
                                  &(this->NewTriangles).ArrayMax);
            }
            (this->NewTriangles).ArrayNum = iVar22 + 1;
            *(uint *)((this->NewTriangles).AllocatorInstance.Data + (longlong)iVar22 * 4) = uVar35;
            break;
          }
        }
      }
      pFVar27 = (FMinimalHoleFiller *)(ulonglong)(uVar35 + 1);
      if ((int)(uVar35 + 1) < iVar20) {
        do {
          uVar24 = (ulonglong)((uint)pFVar27 & 0x1ff);
          lVar26 = *(longlong *)(*(longlong *)(lVar6 + 0x148) + ((ulonglong)pFVar27 >> 9) * 8);
          if ((*(short *)(lVar26 + uVar24 * 2) != 0) && (*(short *)(lVar26 + uVar24 * 2) != -1))
          goto LAB_14c9654c0;
          uVar35 = (uint)pFVar27 + 1;
          pFVar27 = (FMinimalHoleFiller *)(ulonglong)uVar35;
        } while ((int)uVar35 < iVar20);
      }
    } while ((int)pFVar27 != iVar21);
  }
LAB_14c9655f6:
  local_c0 = 0;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  return;
}

// FillSingleTriangleHole @ 14c97c4a0

bool __thiscall
UE::Geometry::FHoleFillOp::FillSingleTriangleHole(FHoleFillOp *this,FEdgeLoop *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  TDynamicMeshOverlay<float,2> *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  EMeshResult EVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  FIndex3i_u_0 local_e8;
  int aiStack_dc [5];
  FIndex3i_u_0 local_c8;
  TDynamicMeshOverlay<float,2> *local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  ulonglong local_88;
  longlong local_78;
  FDynamicMeshEditor local_70;
  undefined8 local_68;
  int local_60;
  
  if ((param_1->Edges).ArrayNum != 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loop.GetEdgeCount() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                       ,0xaa,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  if ((param_1->Vertices).ArrayNum != 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loop.GetVertexCount() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                       ,0xab,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  iVar10 = *(int *)(this->_padding_ + 0x1b0);
  *(int *)(this->_padding_ + 0x1b0) = iVar10 + 1;
  *param_2 = iVar10;
  if ((param_1->Vertices).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  iVar10 = *(int *)(param_1->Vertices).AllocatorInstance.Data;
  if ((param_1->Vertices).ArrayNum < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  iVar2 = *(int *)((param_1->Vertices).AllocatorInstance.Data + 4);
  if ((param_1->Vertices).ArrayNum < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  local_e8._s_0.C = *(undefined4 *)((param_1->Vertices).AllocatorInstance.Data + 8);
  local_e8._s_0.A = iVar10;
  local_e8._s_0.B = iVar2;
  uVar9 = FDynamicMesh3::FindEdge((FDynamicMesh3 *)this->_padding_,iVar10,iVar2);
  if (uVar9 == 0xffffffff) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3453756856831312055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                       ,0xb7,"ExistingEdges[Nbr] != FDynamicMesh3::InvalidID");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  uVar19 = *(ulonglong *)
            (*(longlong *)(*(longlong *)(this->_padding_ + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) + 8
            + (ulonglong)(uVar9 & 0x1ff) * 0x10);
  if (((uint)uVar19 == 0xffffffff) || ((int)(uVar19 >> 0x20) != -1)) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3453756856831312058>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                       ,0xba,
                       "EdgeTris[0] != FDynamicMesh3::InvalidID && EdgeTris[1] == FDynamicMesh3::InvalidID"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  local_88 = uVar19 & 0xffffffff;
  uVar9 = FDynamicMesh3::FindEdge((FDynamicMesh3 *)this->_padding_,local_e8._s_0.B,local_e8._s_0.C);
  if (uVar9 == 0xffffffff) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3453756856831312055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                       ,0xb7,"ExistingEdges[Nbr] != FDynamicMesh3::InvalidID");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  uVar15 = *(ulonglong *)
            (*(longlong *)(*(longlong *)(this->_padding_ + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) + 8
            + (ulonglong)(uVar9 & 0x1ff) * 0x10);
  if (((int)uVar15 == -1) || ((int)(uVar15 >> 0x20) != -1)) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3453756856831312058>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                       ,0xba,
                       "EdgeTris[0] != FDynamicMesh3::InvalidID && EdgeTris[1] == FDynamicMesh3::InvalidID"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  uVar9 = FDynamicMesh3::FindEdge((FDynamicMesh3 *)this->_padding_,local_e8._s_0.C,local_e8._s_0.A);
  if (uVar9 == 0xffffffff) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3453756856831312055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                       ,0xb7,"ExistingEdges[Nbr] != FDynamicMesh3::InvalidID");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  uVar14 = *(ulonglong *)
            (*(longlong *)(*(longlong *)(this->_padding_ + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) + 8
            + (ulonglong)(uVar9 & 0x1ff) * 0x10);
  if (((int)uVar14 == -1) || ((int)(uVar14 >> 0x20) != -1)) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3453756856831312058>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                       ,0xba,
                       "EdgeTris[0] != FDynamicMesh3::InvalidID && EdgeTris[1] == FDynamicMesh3::InvalidID"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  uVar12 = local_e8._s_0.A;
  lVar20 = ((uVar19 & 0xffffffff) >> 9) * 8;
  lVar16 = (ulonglong)((uint)uVar19 & 0x1ff) * 0xc;
  lVar4 = *(longlong *)
           ((((FDynamicMesh3 *)this->_padding_)->Triangles).Blocks.AllocatorInstance.Data + lVar20);
  local_68 = *(undefined8 *)(lVar4 + lVar16);
  local_60 = *(int *)(lVar4 + 8 + lVar16);
  iVar10 = (int)((ulonglong)local_68 >> 0x20);
  if (((((int)local_68 == local_e8._s_0.A) && (iVar10 == local_e8._s_0.B)) ||
      ((iVar10 == local_e8._s_0.A && (local_60 == local_e8._s_0.B)))) ||
     ((local_60 == local_e8._s_0.A && ((int)local_68 == local_e8._s_0.B)))) {
    local_e8._s_0.A = local_e8._s_0.B;
    local_e8._s_0.B = uVar12;
    uVar19 = uVar15;
    uVar15 = uVar14;
  }
  else {
    uVar19 = uVar14 & 0xffffffff;
  }
  iVar10 = FDynamicMesh3::AppendTriangle
                     ((FDynamicMesh3 *)this->_padding_,(FIndex3i *)&local_e8._s_0,*param_2);
  if (iVar10 < 0) {
LAB_14c97cc12:
    bVar7 = false;
  }
  else {
    lVar4 = *(longlong *)(this->_padding_ + 0x208);
    if (((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x28))) && (**(longlong **)(lVar4 + 0x20) != 0)) {
      this_00 = (TDynamicMeshOverlay<float,2> *)**(longlong **)(lVar4 + 0x20);
      local_78 = *(longlong *)(this->_padding_ + 0x130);
      lVar20 = *(longlong *)(lVar20 + local_78);
      uVar1 = *(undefined8 *)(lVar20 + lVar16);
      iVar2 = *(int *)(lVar20 + 8 + lVar16);
      pFVar5 = (this_00->ElementTriangles).Blocks.AllocatorInstance.Data;
      lVar20 = -4;
      uVar9 = (int)local_88 * 3;
      aiStack_dc[1] =
           *(undefined4 *)
            (*(longlong *)(pFVar5 + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4);
      aiStack_dc[2] =
           *(undefined4 *)
            (*(longlong *)(pFVar5 + (ulonglong)(uVar9 + 1 >> 9) * 8) +
            (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
      aiStack_dc[3] =
           *(undefined4 *)
            (*(longlong *)(pFVar5 + (ulonglong)(uVar9 + 2 >> 9) * 8) +
            (ulonglong)(uVar9 + 2 & 0x1ff) * 4);
      iVar17 = (int)uVar1;
      iVar11 = (int)((ulonglong)uVar1 >> 0x20);
      if (iVar17 == local_e8._s_0.A) {
        lVar16 = 0;
      }
      else if (iVar11 == local_e8._s_0.A) {
        lVar16 = 4;
      }
      else {
        lVar16 = -4;
        if (iVar2 == local_e8._s_0.A) {
          lVar16 = 8;
        }
      }
      local_a0 = *(int *)((longlong)aiStack_dc + lVar16 + 4);
      if (iVar17 == local_e8._s_0.B) {
        lVar16 = 0;
      }
      else if (iVar11 == local_e8._s_0.B) {
        lVar16 = 4;
      }
      else {
        lVar16 = -4;
        if (iVar2 == local_e8._s_0.B) {
          lVar16 = 8;
        }
      }
      iVar2 = *(int *)((longlong)aiStack_dc + lVar16 + 4);
      uVar14 = (ulonglong)((uint)uVar15 & 0x1ff);
      lVar16 = *(longlong *)(local_78 + ((uVar15 & 0xffffffff) >> 9) * 8);
      uVar1 = *(undefined8 *)(lVar16 + uVar14 * 0xc);
      iVar11 = *(int *)(lVar16 + 8 + uVar14 * 0xc);
      uVar9 = (uint)uVar15 * 3;
      aiStack_dc[1] =
           *(undefined4 *)
            (*(longlong *)(pFVar5 + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4);
      aiStack_dc[2] =
           *(undefined4 *)
            (*(longlong *)(pFVar5 + (ulonglong)(uVar9 + 1 >> 9) * 8) +
            (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
      aiStack_dc[3] =
           *(undefined4 *)
            (*(longlong *)(pFVar5 + (ulonglong)(uVar9 + 2 >> 9) * 8) +
            (ulonglong)(uVar9 + 2 & 0x1ff) * 4);
      iVar18 = (int)uVar1;
      iVar17 = (int)((ulonglong)uVar1 >> 0x20);
      if (iVar18 == local_e8._s_0.B) {
        lVar16 = 0;
      }
      else if (iVar17 == local_e8._s_0.B) {
        lVar16 = 4;
      }
      else {
        lVar16 = -4;
        if (iVar11 == local_e8._s_0.B) {
          lVar16 = 8;
        }
      }
      iVar3 = *(int *)((longlong)aiStack_dc + lVar16 + 4);
      if (iVar18 == local_e8._s_0.C) {
        lVar16 = 0;
      }
      else if (iVar17 == local_e8._s_0.C) {
        lVar16 = 4;
      }
      else {
        lVar16 = -4;
        if (iVar11 == local_e8._s_0.C) {
          lVar16 = 8;
        }
      }
      iVar11 = *(int *)((longlong)aiStack_dc + lVar16 + 4);
      uVar15 = (ulonglong)((uint)uVar19 & 0x1ff);
      lVar16 = *(longlong *)(local_78 + ((uVar19 & 0xffffffff) >> 9) * 8);
      local_b0 = *(undefined8 *)(lVar16 + uVar15 * 0xc);
      local_a8 = *(int *)(lVar16 + 8 + uVar15 * 0xc);
      uVar9 = (uint)uVar19 * 3;
      pFVar5 = (this_00->ElementTriangles).Blocks.AllocatorInstance.Data;
      aiStack_dc[1] =
           *(undefined4 *)
            (*(longlong *)(pFVar5 + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4);
      aiStack_dc[2] =
           *(undefined4 *)
            (*(longlong *)(pFVar5 + (ulonglong)(uVar9 + 1 >> 9) * 8) +
            (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
      aiStack_dc[3] =
           *(undefined4 *)
            (*(longlong *)(pFVar5 + (ulonglong)(uVar9 + 2 >> 9) * 8) +
            (ulonglong)(uVar9 + 2 & 0x1ff) * 4);
      iVar17 = (int)((ulonglong)local_b0 >> 0x20);
      if ((int)local_b0 == local_e8._s_0.C) {
        lVar16 = 0;
      }
      else if (iVar17 == local_e8._s_0.C) {
        lVar16 = 4;
      }
      else {
        lVar16 = -4;
        if (local_a8 == local_e8._s_0.C) {
          lVar16 = 8;
        }
      }
      iVar18 = *(int *)((longlong)aiStack_dc + lVar16 + 4);
      if ((int)local_b0 == local_e8._s_0.A) {
        lVar20 = 0;
      }
      else if (iVar17 == local_e8._s_0.A) {
        lVar20 = 4;
      }
      else if (local_a8 == local_e8._s_0.A) {
        lVar20 = 8;
      }
      uVar12 = *(int *)((longlong)aiStack_dc + lVar20 + 4);
      local_c8._0_8_ = 0xffffffffffffffff;
      local_c8._s_0.C = -1;
      local_b8 = this_00;
      if (uVar12 == local_a0) {
        local_c8._s_0.B = iVar2;
        local_c8._s_0.A = uVar12;
        local_c8._s_0.C = iVar18;
      }
      else if (iVar2 == iVar3) {
        local_c8._s_0.B = iVar2;
        local_c8._s_0.A = local_a0;
        uVar12 = local_a0;
        local_c8._s_0.C = iVar11;
      }
      else if (iVar11 == iVar18) {
        local_c8._s_0.B = iVar3;
        local_c8._s_0.A = uVar12;
        local_c8._s_0.C = iVar11;
      }
      else {
        ::`anonymous_namespace'::SetUVTriangleFromAdjacentTriangle
                  ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)this_00,
                   (int)local_88,iVar10,(FIndex3i *)&local_c8._s_0);
        uVar12 = local_c8._s_0.A;
      }
      if (uVar12 != -1) {
        EVar13 = TDynamicMeshOverlay<float,2>::SetTriangle
                           (this_00,iVar10,(FIndex3i *)&local_c8._s_0,true);
        if (EVar13 != Ok) {
          bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3453756856831312150>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CleaningOps\\HoleFillOp.cpp"
                             ,0x116,"Result == EMeshResult::Ok");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          goto LAB_14c97cc12;
        }
      }
    }
    local_70.Mesh = (FDynamicMesh3 *)this->_padding_;
    if (((local_70.Mesh)->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 1;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
      *(int *)local_98.AllocatorInstance.Data = iVar10;
      FDynamicMeshEditor::SetTriangleNormals(&local_70,&local_98);
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
    }
    bVar7 = true;
  }
  return bVar7;
}

