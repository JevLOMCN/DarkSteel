// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// CalculateResult @ 14c961a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FCubeGridBooleanOp::CalculateResult(FCubeGridBooleanOp *this,FProgressCancel *param_1)

{
  FRefCountVector *pFVar1;
  TTransformSRT3<double> *pTVar2;
  TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *pTVar3;
  uint uVar4;
  FCornerInfo *pFVar5;
  FDynamicMeshAttributeSet *this_00;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  FDynamicMesh3 *pFVar15;
  FMeshShapeGenerator *pFVar16;
  FDynamicMesh3 *pFVar17;
  FDynamicMesh3 *pFVar18;
  undefined8 uVar19;
  TAxisAlignedBox3<double> *pTVar20;
  uint *puVar21;
  int iVar22;
  uint *puVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  ForElementType<FSetElementId> FVar27;
  TReferenceControllerBase<1> *pTVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  FDynamicMesh3 *pFVar32;
  uint uVar33;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar34;
  FDynamicMesh3 *pFVar35;
  undefined1 auVar36 [16];
  float fVar37;
  double dVar38;
  undefined1 auStackY_658 [32];
  IndexIterator local_610;
  TArray<int,TSizedDefaultAllocator<32>_> *local_600;
  FSharedReferencer<1> FStack_5f8;
  TPairInitializer<int_const_&,int_const_&> local_5f0;
  FProgressCancel *local_5e0;
  BaseIterator local_5d8;
  FDynamicMesh3 *local_5c8;
  TTypeCompatibleBytes<int> *local_5c0;
  IndexIterator local_5b8;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  double dStack_568;
  double dStack_560;
  TQuaternion<double>_u_0 local_558;
  double local_538;
  double dStack_530;
  double local_528;
  double local_520;
  double dStack_518;
  double local_510;
  TOptional<UE::Geometry::TTransformSRT3<double>_> local_508;
  TAxisAlignedBox3<double> local_4b0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_478;
  FWeldedMinimalBoxMeshGenerator local_428;
  undefined1 local_2f8 [552];
  int local_d0;
  bool local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_658;
  local_5e0 = param_1;
  if ((param_1 != (FProgressCancel *)0x0) && (bVar14 = FProgressCancel::Cancelled(param_1), bVar14))
  {
    return;
  }
  pFVar32 = (FDynamicMesh3 *)this->_padding_;
  pFVar15 = TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1>::
            operator*<UE::Geometry::FDynamicMesh3_const_>(&this->InputMesh);
  FDynamicMesh3::Copy(pFVar32,pFVar15,true,true,true,true);
  if ((((FDynamicMesh3 *)this->_padding_)->TriangleGroups).bIsSet == false) {
    FDynamicMesh3::EnableTriangleGroups((FDynamicMesh3 *)this->_padding_,0);
  }
  if ((param_1 != (FProgressCancel *)0x0) && (bVar14 = FProgressCancel::Cancelled(param_1), bVar14))
  {
    return;
  }
  local_428.Box.Frame.Origin.field0_0x0._s_0.X = (this->WorldBox).Frame.Origin.field0_0x0._s_0.X;
  local_428.Box.Frame.Origin.field0_0x0._s_0.Y = (this->WorldBox).Frame.Origin.field0_0x0._s_0.Y;
  local_428.Box.Frame.Origin.field0_0x0._s_0.Z = (this->WorldBox).Frame.Origin.field0_0x0._s_0.Z;
  local_428.Box.Frame.Rotation.field0_0x0._s_0.X = (this->WorldBox).Frame.Rotation.field0_0x0._s_0.X
  ;
  pFVar32 = (FDynamicMesh3 *)0x0;
  local_428.Box.Frame.Rotation.field0_0x0._s_0.Y = (this->WorldBox).Frame.Rotation.field0_0x0._s_0.Y
  ;
  local_428.Box.Frame.Rotation.field0_0x0._s_0.Z = (this->WorldBox).Frame.Rotation.field0_0x0._s_0.Z
  ;
  local_428._padding_ = (longlong)&___7FWeldedMinimalBoxMeshGenerator_CubeGridBooleanOpLocals__6B_;
  pFVar5 = (this->CornerInfo).Object;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_ = 0;
  local_428._padding_._0_1_ = 0;
  local_428.CornerInfo.WeldedAtBase[0] = false;
  local_428.CornerInfo.WeldedAtBase[1] = false;
  local_428.CornerInfo.WeldedAtBase[2] = false;
  local_428.CornerInfo.WeldedAtBase[3] = false;
  local_428.FaceUVOrientations.ArrayNum = 0;
  local_428.FaceUVOrientations.ArrayMax = 6;
  local_428.Box.Extents.field0_0x0._s_0.Y = (this->WorldBox).Extents.field0_0x0._s_0.Y;
  local_428.Box.Extents.field0_0x0._s_0.Z = (this->WorldBox).Extents.field0_0x0._s_0.Z;
  local_428.Box.Frame.Rotation.field0_0x0._s_0.W = (this->WorldBox).Frame.Rotation.field0_0x0._s_0.W
  ;
  local_428.Box.Extents.field0_0x0._s_0.X = (this->WorldBox).Extents.field0_0x0._s_0.X;
  if (pFVar5 != (FCornerInfo *)0x0) {
    local_428.CornerInfo.WeldedAtBase = *&pFVar5->WeldedAtBase;
  }
  local_428.bCrosswiseDiagonal = this->bCrosswiseDiagonal;
  local_428.HeightUVOffset = this->OpMeshHeightUVOffset;
  local_428.bFlipUVsForSubtraction = this->bSubtract;
  if (&local_428.FaceUVOrientations != &this->FaceUVOrientations) {
    iVar31 = (this->FaceUVOrientations).ArrayNum;
    local_428.FaceUVOrientations.ArrayNum = iVar31;
    Core::Private::ReallocForCopy<0,TFixedAllocator<6>::ForElementType<int>_>
              (4,4,iVar31,6,&local_428.FaceUVOrientations.AllocatorInstance,iVar31,
               &local_428.FaceUVOrientations.ArrayMax);
    if (iVar31 != 0) {
      memcpy(&local_428.FaceUVOrientations,&this->FaceUVOrientations,(longlong)iVar31 << 2);
    }
  }
  pFVar16 = CubeGridBooleanOpLocals::FWeldedMinimalBoxMeshGenerator::Generate(&local_428);
  pFVar17 = ::operator_new(0x230);
  pFVar15 = pFVar32;
  if (pFVar17 != (FDynamicMesh3 *)0x0) {
    pFVar15 = FDynamicMesh3::FDynamicMesh3(pFVar17,pFVar16);
  }
  this_00 = (pFVar15->AttributeSet).Ptr;
  if (this_00 == (FDynamicMeshAttributeSet *)0x0) {
    bVar14 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2742019654204522979>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CompositionOps\\CubeGridBooleanOp.cpp"
                        ,0x1e3,"OpMesh->HasAttributes()");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    FDynamicMeshAttributeSet::EnableMaterialID(this_00);
    pFVar17 = (FDynamicMesh3 *)(pFVar15->AttributeSet).Ptr;
    pFVar1 = &pFVar15->TriangleRefCounts;
    pFVar18 = pFVar32;
    if (pFVar17 != (FDynamicMesh3 *)0x0) {
      pFVar18 = pFVar17;
    }
    lVar7 = *(longlong *)&(pFVar18->VertexRefCounts).FreeIndices.Blocks.ArrayNum;
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_5d8,pFVar1,0,
               (pFVar1->RefCounts).CurBlock * 0x200 +
               (pFVar15->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar31 = (pFVar1->RefCounts).CurBlock * 0x200 +
             (pFVar15->TriangleRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&local_5b8,pFVar1,iVar31,iVar31);
    iVar31 = local_5d8.Index;
    while (iVar31 != local_5b8._8_4_) {
      *(int *)(*(longlong *)
                (*(longlong *)(lVar7 + 0x20) + ((local_5d8._8_8_ & 0xffffffff) >> 9) * 8) +
              (ulonglong)((uint)local_5d8._8_8_ & 0x1ff) * 4) = this->OpMeshMaterialID;
      FRefCountVector::BaseIterator::goto_next(&local_5d8);
      iVar31 = local_5d8.Index;
    }
    fVar37 = this->UVScale;
    if (this->bWorldSpaceUVs != false) {
      fVar37 = fVar37 * __real_3c23d70a;
    }
    local_508.bIsSet = false;
    local_5f0.Value = (int *)pFVar15;
    FDynamicMeshEditor::RescaleAttributeUVs
              ((FDynamicMeshEditor *)&local_5f0.Value,fVar37,this->bWorldSpaceUVs,0,&local_508);
    pFVar17 = (FDynamicMesh3 *)(pFVar15->AttributeSet).Ptr;
    pFVar18 = pFVar32;
    if (pFVar17 != (FDynamicMesh3 *)0x0) {
      pFVar18 = pFVar17;
    }
    pFVar17 = pFVar32;
    if (0 < *(int *)&(pFVar18->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data) {
      pFVar17 = (FDynamicMesh3 *)**(undefined8 **)&(pFVar18->VertexRefCounts).RefCounts;
    }
    FRefCountVector::IndexIterator::IndexIterator
              (&local_610,(FRefCountVector *)&pFVar17->Vertices,0,
               (pFVar17->Vertices).CurBlock * 0x200 + (pFVar17->Vertices).CurBlockUsed);
    fVar37 = __real_3f800000;
    uVar29 = (pFVar17->Vertices).CurBlock;
    uVar33 = (pFVar17->Vertices).CurBlockUsed;
joined_r0x00014c961e80:
    if (local_610._8_4_ != uVar29 * 0x200 + uVar33) {
      uVar30 = local_610._8_4_ + 1;
      uVar25 = (ulonglong)(local_610._8_4_ * 2 + 1U & 0x1ff);
      lVar7 = *(longlong *)
               (*(longlong *)&(pFVar17->VertexRefCounts).FreeIndices.Blocks.ArrayNum +
               (ulonglong)((local_610._8_4_ & 0x7fffffff) >> 8) * 8);
      *(float *)(lVar7 + uVar25 * 4) = fVar37 - *(float *)(lVar7 + uVar25 * 4);
      local_610._8_4_ = uVar30;
      if ((int)uVar30 < (int)local_610._12_4_) {
        do {
          if ((*(short *)(*(longlong *)
                           (*(longlong *)(local_610._0_8_ + 8) + (ulonglong)(uVar30 >> 9) * 8) +
                         (ulonglong)(uVar30 & 0x1ff) * 2) != 0) &&
             (local_610._8_4_ = uVar30,
             *(short *)(*(longlong *)
                         (*(longlong *)(local_610._0_8_ + 8) + (ulonglong)(uVar30 >> 9) * 8) +
                       (ulonglong)(uVar30 & 0x1ff) * 2) != -1)) break;
          uVar30 = uVar30 + 1;
          local_610._8_4_ = uVar30;
        } while ((int)uVar30 < (int)local_610._12_4_);
      }
      goto joined_r0x00014c961e80;
    }
  }
  if ((((FDynamicMesh3 *)this->_padding_)->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    FDynamicMesh3::EnableAttributes((FDynamicMesh3 *)this->_padding_);
  }
  pFVar17 = *(FDynamicMesh3 **)(this->_padding_ + 0x208);
  pFVar18 = pFVar32;
  if (pFVar17 != (FDynamicMesh3 *)0x0) {
    pFVar18 = pFVar17;
  }
  lVar7._0_4_ = (pFVar18->VertexRefCounts).FreeIndices.Blocks.ArrayNum;
  lVar7._4_4_ = (pFVar18->VertexRefCounts).FreeIndices.Blocks.ArrayMax;
  if (lVar7 == 0) {
    FDynamicMeshAttributeSet::EnableMaterialID((FDynamicMeshAttributeSet *)pFVar17);
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) goto LAB_14c962828;
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar9 = *(code **)&param_1->CancelF;
    plVar6 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar24 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar24 = plVar6;
    }
    uVar19 = (**(code **)(*plVar24 + 8))();
    bVar14 = (bool)(*pcVar9)(uVar19);
    param_1->WasCancelled = bVar14;
    if (bVar14 != false) goto LAB_14c962828;
  }
  pTVar2 = &this->InputTransform;
  local_558._s_0.X = 0.0;
  local_558._s_0.Y = 0.0;
  local_538 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_530 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_558._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_558._s_0.W = _UNK_15061cbc8;
  local_528 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_510 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_520 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_518 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  FMeshBoolean::FMeshBoolean
            ((FMeshBoolean *)local_2f8,(FDynamicMesh3 *)this->_padding_,pTVar2,pFVar15,
             (TTransformSRT3<double> *)&local_558._s_0,(FDynamicMesh3 *)this->_padding_,
             (uint)(this->bSubtract != false));
  local_2f8[0xe0] = true;
  local_2f8[0xf0] = true;
  local_2f8[0x1d8] = true;
  FMeshBoolean::Compute((FMeshBoolean *)local_2f8);
  if (param_1 == (FProgressCancel *)0x0) {
LAB_14c962086:
    if (this->bKeepInputTransform == false) {
      pTVar20 = FDynamicMesh3::GetBounds((FDynamicMesh3 *)this->_padding_,&local_4b0,false);
      dStack_560 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      dStack_568 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      uVar19 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      dStack_590 = _UNK_15061cbc8;
      local_598 = ___xmm_3ff00000000000000000000000000000;
      local_5a8 = 0;
      uStack_5a0 = 0;
      dStack_580 = ((pTVar20->Max).field0_0x0._s_0.Y + (pTVar20->Min).field0_0x0._s_0.Y) *
                   __real_3fe0000000000000;
      local_588 = ((pTVar20->Max).field0_0x0._s_0.X + (pTVar20->Min).field0_0x0._s_0.X) *
                  __real_3fe0000000000000;
      dVar38 = ((pTVar20->Max).field0_0x0._s_0.Z + (pTVar20->Min).field0_0x0._s_0.Z) *
               __real_3fe0000000000000;
      this->_padding_ = 0;
      this->_padding_ = 0;
      this->_padding_ = (longlong)local_598;
      this->_padding_ = (longlong)dStack_590;
      this->_padding_ = (longlong)local_588;
      this->_padding_ = (longlong)dStack_580;
      local_570._0_4_ = (undefined4)uVar19;
      local_570._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
      auVar10._4_8_ = dStack_580;
      auVar10._0_4_ = uStack_578._4_4_;
      auVar36._0_8_ = auVar10._0_8_ << 0x20;
      auVar36._8_4_ = (undefined4)local_570;
      auVar36._12_4_ = local_570._4_4_;
      local_570 = auVar36._8_8_;
      this->_padding_ = (longlong)dVar38;
      this->_padding_ = local_570;
      this->_padding_ = (longlong)dStack_568;
      this->_padding_ = (longlong)dStack_560;
      uStack_578 = dVar38;
    }
    else {
      dVar38 = (this->InputTransform).Rotation.field0_0x0._s_0.Y;
      dVar11 = (this->InputTransform).Rotation.field0_0x0._s_0.Z;
      dVar12 = (this->InputTransform).Rotation.field0_0x0._s_0.W;
      this->_padding_ = (longlong)(pTVar2->Rotation).field0_0x0._s_0.X;
      this->_padding_ = (longlong)dVar38;
      dVar38 = (this->InputTransform).Translation.field0_0x0._s_0.X;
      dVar13 = (this->InputTransform).Translation.field0_0x0._s_0.Y;
      this->_padding_ = (longlong)dVar11;
      this->_padding_ = (longlong)dVar12;
      dVar11 = (this->InputTransform).Translation.field0_0x0._s_0.Z;
      dVar12 = (this->InputTransform).Scale3D.field0_0x0._s_0.X;
      this->_padding_ = (longlong)dVar38;
      this->_padding_ = (longlong)dVar13;
      dVar38 = (this->InputTransform).Scale3D.field0_0x0._s_0.Y;
      dVar13 = (this->InputTransform).Scale3D.field0_0x0._s_0.Z;
      this->_padding_ = (longlong)dVar11;
      this->_padding_ = (longlong)dVar12;
      this->_padding_ = (longlong)dVar38;
      this->_padding_ = (longlong)dVar13;
    }
    MeshTransforms::ApplyTransformInverse((FDynamicMesh3 *)this->_padding_,pTVar2,true,All);
    if (param_1 == (FProgressCancel *)0x0) {
LAB_14c9621c6:
      local_478.Elements._0_8_ = 0;
      local_478.Elements._8_8_ = 0;
      local_478.Elements._32_8_ = 0;
      local_478.Elements._40_4_ = 0;
      local_478.Elements._44_4_ = 0x80;
      local_478.Elements._48_4_ = 0xffffffff;
      local_478.Elements._52_4_ = 0;
      local_478.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_478.HashSize = 0;
      pFVar17 = pFVar32;
      pFVar18 = pFVar32;
      pFVar35 = pFVar32;
      if ((this->OpMeshSideGroups).ArrayNum == 4) {
        do {
          if ((local_78 == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bWantForward",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                  ,0xac,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar31 = (int)pFVar17;
          if (local_2f8._488_4_ != local_2f8._532_4_) {
            puVar26 = (undefined1 *)
                      ((longlong)&((FMeshBoolean *)local_2f8)->SecondMeshGroupMap + 0x38);
            if ((undefined1 *)local_2f8._544_8_ != (undefined1 *)0x0) {
              puVar26 = (undefined1 *)local_2f8._544_8_;
            }
            uVar29 = *(uint *)(puVar26 + (ulonglong)(local_d0 - 1U & iVar31 + 1U) * 4);
            while (uVar29 != 0xffffffff) {
              puVar23 = (uint *)((longlong)(int)uVar29 * 0x10 + local_2f8._480_8_);
              if (*puVar23 == iVar31 + 1U) {
                pFVar17 = (FDynamicMesh3 *)(puVar23 + 1);
                if (puVar23 == (uint *)0x0) {
                  pFVar17 = pFVar32;
                }
                if (pFVar17 != (FDynamicMesh3 *)0x0) {
                  if (((this->OpMeshSideGroups).ArrayNum <= iVar31) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar22 = (this->OpMeshSideGroups).ArrayNum;
                  if (*(int *)((longlong)&this->_padding_ +
                              (longlong)&(pFVar35->TriangleEdges).Blocks.AllocatorInstance) == -1) {
                    lVar7 = pFVar17->_padding_;
                    if ((iVar22 <= iVar31) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    *(int *)((longlong)&this->_padding_ +
                            (longlong)&(pFVar35->TriangleEdges).Blocks.AllocatorInstance) =
                         (int)lVar7;
                  }
                  else {
                    if ((iVar22 <= iVar31) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    local_5c0 = (this->OpMeshSideGroups).AllocatorInstance.InlineData +
                                (longlong)pFVar18;
                    local_5c8 = pFVar17;
                    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                              (&local_478,&local_5f0,(bool *)&local_5c8);
                  }
                }
                break;
              }
              uVar29 = puVar23[2];
            }
          }
          pFVar17 = (FDynamicMesh3 *)(ulonglong)(iVar31 + 1U);
          pFVar18 = (FDynamicMesh3 *)((longlong)&pFVar18->_padding_ + 1);
          pFVar35 = (FDynamicMesh3 *)((longlong)&pFVar35->_padding_ + 4);
        } while ((int)(iVar31 + 1U) < 4);
      }
      else {
        bVar14 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2742019654204523058>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CompositionOps\\CubeGridBooleanOp.cpp"
                            ,0x232,"OpMeshSideGroups.Num() == 4");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (local_478.Elements._8_4_ == local_478.Elements._52_4_) {
LAB_14c96269b:
        if (this->bTrackChangedTids != false) {
          FStack_5f8.ReferenceController = ::operator_new(0x20);
          pTVar28 = (TReferenceControllerBase<1> *)0x0;
          if (FStack_5f8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
            local_600 = ___xmm_00000000000000000000000000000010;
            pTVar34 = (TArray<int,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
            FStack_5f8.ReferenceController = _UNK_150651568;
          }
          else {
            (FStack_5f8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
            pTVar34 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                      (FStack_5f8.ReferenceController + 1);
            (FStack_5f8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
            (FStack_5f8.ReferenceController)->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_V__TArray_HV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
            ;
            FStack_5f8.ReferenceController[1]._padding_ = 0;
            FStack_5f8.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
            FStack_5f8.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
            if ((pTVar34 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            LOCK();
            (FStack_5f8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_5f8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
            pTVar28 = FStack_5f8.ReferenceController;
            local_600 = pTVar34;
          }
          pTVar3 = &this->ChangedTids;
          if (pTVar3 != (TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *)&local_600) {
            local_600 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
            pTVar3->Object = pTVar34;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->ChangedTids).SharedReferenceCount,&FStack_5f8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_5f8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar28);
          if ((pTVar3->Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar34 = pTVar3->Object;
          pFVar32 = (FDynamicMesh3 *)this->_padding_;
          if (((this->InputMesh).Object == (FDynamicMesh3 *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          CubeGridBooleanOpLocals::GetTrisWithChangedPositionsAndConnectivity
                    ((this->InputMesh).Object,pFVar32,pTVar34);
        }
      }
      else {
        lVar7 = this->_padding_;
        uVar29 = 0;
        iVar31 = *(int *)(lVar7 + 0x144) + *(int *)(lVar7 + 0x140) * 0x200;
        if (((iVar31 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x148) - 1U)))
           && (uVar29 = 1, 1 < iVar31)) {
          do {
            lVar8 = (*(undefined8 **)(lVar7 + 0x148))[uVar29 >> 9];
            if ((*(short *)(lVar8 + (ulonglong)(uVar29 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar8 + (ulonglong)(uVar29 & 0x1ff) * 2) != -1)) break;
            uVar29 = uVar29 + 1;
          } while ((int)uVar29 < iVar31);
        }
        uVar33 = *(int *)(lVar7 + 0x140) * 0x200 + *(int *)(lVar7 + 0x144);
        if (uVar29 != uVar33) {
LAB_14c9624c0:
          do {
            lVar8 = this->_padding_;
            if (*(char *)(lVar8 + 0x1a8) == '\0') {
              uVar30 = 0xffffffff;
            }
            else {
              if ((-1 < (int)uVar29) &&
                 ((int)uVar29 < *(int *)(lVar8 + 0x140) * 0x200 + *(int *)(lVar8 + 0x144))) {
                if ((ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(lVar8 + 0x148) +
                                         (ulonglong)(uVar29 >> 9) * 8) +
                                       (ulonglong)(uVar29 & 0x1ff) * 2) - 1U) < 0xfffe) {
                  uVar30 = *(uint *)(*(longlong *)
                                      (*(longlong *)(lVar8 + 0x198) + (ulonglong)(uVar29 >> 9) * 8)
                                    + (ulonglong)(uVar29 & 0x1ff) * 4);
                  goto LAB_14c962530;
                }
              }
              uVar30 = 0;
            }
LAB_14c962530:
            if (local_478.Elements._8_4_ != local_478.Elements._52_4_) {
              FVar27 = (ForElementType<FSetElementId>)&local_478.Hash;
              if (local_478.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar27 = local_478.Hash.SecondaryData;
              }
              uVar4 = *(uint *)((longlong)FVar27 + (ulonglong)(local_478.HashSize - 1U & uVar30) * 4
                               );
              while (uVar4 != 0xffffffff) {
                puVar23 = (uint *)((longlong)(int)uVar4 * 0x10 + local_478.Elements._0_8_);
                if (*puVar23 == uVar30) {
                  puVar21 = puVar23 + 1;
                  if (puVar23 == (uint *)0x0) {
                    puVar21 = (uint *)0x0;
                  }
                  if (puVar21 != (uint *)0x0) {
                    lVar8 = this->_padding_;
                    uVar30 = *puVar21;
                    if (*(char *)(lVar8 + 0x1a8) != '\0') {
                      *(uint *)(*(longlong *)
                                 (*(longlong *)(lVar8 + 0x198) + (ulonglong)(uVar29 >> 9) * 8) +
                               (ulonglong)(uVar29 & 0x1ff) * 4) = uVar30;
                      iVar22 = uVar30 + 1;
                      if (iVar22 < *(int *)(lVar8 + 0x1b0)) {
                        iVar22 = *(int *)(lVar8 + 0x1b0);
                      }
                      *(int *)(lVar8 + 0x1b0) = iVar22;
                    }
                  }
                  break;
                }
                uVar4 = puVar23[2];
              }
            }
            uVar29 = uVar29 + 1;
            if ((int)uVar29 < iVar31) {
              do {
                lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x148) + (ulonglong)(uVar29 >> 9) * 8);
                if ((*(short *)(lVar8 + (ulonglong)(uVar29 & 0x1ff) * 2) != 0) &&
                   (*(short *)(lVar8 + (ulonglong)(uVar29 & 0x1ff) * 2) != -1)) goto LAB_14c9624c0;
                uVar29 = uVar29 + 1;
              } while ((int)uVar29 < iVar31);
            }
            param_1 = local_5e0;
          } while (uVar29 != uVar33);
        }
        if (param_1 == (FProgressCancel *)0x0) goto LAB_14c96269b;
        if (param_1->WasCancelled == false) {
          Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
          pcVar9 = *(code **)&param_1->CancelF;
          plVar6 = *(longlong **)&(param_1->CancelF).field_0x28;
          plVar24 = (longlong *)&(param_1->CancelF).field_0x10;
          if (plVar6 != (longlong *)0x0) {
            plVar24 = plVar6;
          }
          uVar19 = (**(code **)(*plVar24 + 8))();
          bVar14 = (bool)(*pcVar9)(uVar19);
          param_1->WasCancelled = bVar14;
          if (bVar14 == false) goto LAB_14c96269b;
        }
      }
      local_478.HashSize = 0;
      if (local_478.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_478.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_478.Elements);
    }
    else if (param_1->WasCancelled == false) {
      Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
      pcVar9 = *(code **)&param_1->CancelF;
      plVar6 = *(longlong **)&(param_1->CancelF).field_0x28;
      plVar24 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar6 != (longlong *)0x0) {
        plVar24 = plVar6;
      }
      uVar19 = (**(code **)(*plVar24 + 8))();
      bVar14 = (bool)(*pcVar9)(uVar19);
      param_1->WasCancelled = bVar14;
      if (bVar14 == false) goto LAB_14c9621c6;
    }
  }
  else if (param_1->WasCancelled == false) {
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar9 = *(code **)&param_1->CancelF;
    plVar6 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar24 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar24 = plVar6;
    }
    uVar19 = (**(code **)(*plVar24 + 8))();
    bVar14 = (bool)(*pcVar9)(uVar19);
    param_1->WasCancelled = bVar14;
    if (bVar14 == false) goto LAB_14c962086;
  }
  FMeshBoolean::~FMeshBoolean((FMeshBoolean *)local_2f8);
LAB_14c962828:
  local_428._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((void *)local_428._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_428._padding_);
  }
  if ((void *)local_428._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_428._padding_);
  }
  if ((void *)local_428._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_428._padding_);
  }
  if ((void *)local_428._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_428._padding_);
  }
  if ((void *)local_428._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_428._padding_);
  }
  if ((void *)local_428._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_428._padding_);
  }
  if ((void *)local_428._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_428._padding_);
  }
  if ((void *)local_428._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_428._padding_);
  }
  if ((void *)local_428._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_428._padding_);
  }
  (**(code **)pFVar15->_padding_)(pFVar15,1);
  return;
}

