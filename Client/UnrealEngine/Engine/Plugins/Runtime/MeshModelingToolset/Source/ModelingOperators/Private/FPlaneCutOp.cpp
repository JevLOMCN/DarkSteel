// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// CalculateResult @ 14c967320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FPlaneCutOp::CalculateResult(FPlaneCutOp *this,FProgressCancel *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FDynamicMesh3 *this_00;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar6;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar7;
  FDynamicMeshAttributeSet *this_01;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  FDynamicMeshAttributeSet *pFVar12;
  uint uVar13;
  FDynamicMeshAttributeSet *pFVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auStackY_218 [32];
  int local_1d8;
  code *local_1b8 [2];
  undefined **local_1a8;
  code *local_1a0;
  undefined8 local_190;
  undefined **local_188;
  FDynamicMesh3 *local_180;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TUniqueFunction<bool___cdecl(int)> local_148;
  undefined2 local_118;
  float local_114;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined2 local_f0;
  bool local_ee;
  float local_ec;
  bool local_e8;
  float local_e4;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar8 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar8 = plVar2;
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    bVar4 = (bool)(*pcVar1)(uVar5);
    param_1->WasCancelled = bVar4;
    if (bVar4 != false) {
      return;
    }
  }
  this_00 = (FDynamicMesh3 *)this->_padding_;
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FDynamicMesh3::Copy(this_00,(this->OriginalMesh).Object,true,true,true,true);
  pFVar12 = (FDynamicMeshAttributeSet *)0x0;
  local_178._s_0.Z = (this->LocalPlaneOrigin).field0_0x0._s_0.Z;
  this->CutPlaneLocalThickness =
       (double)CONCAT44((uint)((ulonglong)this->CutPlaneLocalThickness >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(this->CutPlaneLocalThickness,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_160._s_0.Z = (this->LocalPlaneNormal).field0_0x0._s_0.Z;
  local_188 = &___7FMeshPlaneCut_Geometry_UE__6B_;
  local_180 = (FDynamicMesh3 *)this->_padding_;
  local_110 = __real_3e45798ee2308c3a;
  local_148._0_8_ = 0;
  local_148._40_8_ = 0;
  local_118._0_1_ = false;
  local_118._1_1_ = true;
  local_114 = 1.0;
  local_f0._0_1_ = true;
  local_f0._1_1_ = true;
  local_ee = true;
  local_ec = 1e-06;
  local_e8 = true;
  local_e4 = 0.01;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a0._32_8_ = 0;
  local_60 = (ForElementType<FSetElementId>)0x0;
  local_58 = 0;
  local_178._s_0.X = (this->LocalPlaneOrigin).field0_0x0._s_0.X;
  local_178._s_0.Y = (this->LocalPlaneOrigin).field0_0x0._s_0.Y;
  local_160._s_0.X = (this->LocalPlaneNormal).field0_0x0._s_0.X;
  local_160._s_0.Y = (this->LocalPlaneNormal).field0_0x0._s_0.Y;
  local_108 = ___xmm_3fb999999999999a3ee4f8b588000000;
  dStack_100 = _UNK_1528d8ad8;
  local_f8 = __real_3fd0000000000000;
  local_a0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_a0._48_8_ = _UNK_150631d98;
  if (param_1 == (FProgressCancel *)0x0) {
    local_114 = (float)this->UVScaleFactor;
    local_118._1_1_ = true;
    local_118._0_1_ = this->bSimplifyAlongNewEdges;
  }
  else {
    if (param_1->WasCancelled != false) goto LAB_14c967b7e;
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar8 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar8 = plVar2;
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    bVar4 = (bool)(*pcVar1)(uVar5);
    param_1->WasCancelled = bVar4;
    if (bVar4 != false) goto LAB_14c967b7e;
    local_114 = (float)this->UVScaleFactor;
    local_118._0_1_ = this->bSimplifyAlongNewEdges;
    bVar4 = FProgressCancel::Cancelled(param_1);
    if (bVar4) goto LAB_14c967b7e;
  }
  if (this->bKeepBothHalves == false) {
    FMeshPlaneCut::Cut((FMeshPlaneCut *)&local_188);
  }
  else {
    iVar15 = -1;
    pFVar14 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
    local_1d8 = -1;
    this_01 = pFVar12;
    if (pFVar14 != (FDynamicMeshAttributeSet *)0x0) {
      this_01 = pFVar14;
    }
    pTVar6 = (TDynamicMeshScalarTriangleAttribute<int> *)
             FDynamicMeshAttributeSet::GetAttachedAttribute(this_01,ObjectIndexAttribute);
    lVar3 = this->_padding_;
    iVar16 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
    pFVar14 = pFVar12;
    if (((iVar16 != 0) &&
        (pFVar14 = (FDynamicMeshAttributeSet *)0x0,
        0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) &&
       (pFVar14 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < iVar16)) {
      do {
        uVar9 = (ulonglong)((uint)pFVar14 & 0x1ff);
        lVar18 = (*(undefined8 **)(lVar3 + 0x148))[(ulonglong)pFVar14 >> 9];
        if ((*(short *)(lVar18 + uVar9 * 2) != 0) && (*(short *)(lVar18 + uVar9 * 2) != -1)) break;
        uVar13 = (uint)pFVar14 + 1;
        pFVar14 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
      } while ((int)uVar13 < iVar16);
    }
    iVar10 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
    if ((int)pFVar14 != iVar10) {
LAB_14c967680:
      do {
        iVar17 = *(int *)(*(longlong *)
                           (*(longlong *)&pTVar6->field_0x20 + ((ulonglong)pFVar14 >> 9) * 8) +
                         (ulonglong)((uint)pFVar14 & 0x1ff) * 4);
        if (iVar17 < iVar15) {
          iVar17 = iVar15;
        }
        iVar15 = iVar17;
        uVar13 = (uint)pFVar14 + 1;
        pFVar14 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
        if ((int)uVar13 < iVar16) {
          do {
            uVar9 = (ulonglong)((uint)pFVar14 & 0x1ff);
            lVar18 = *(longlong *)(*(longlong *)(lVar3 + 0x148) + ((ulonglong)pFVar14 >> 9) * 8);
            if ((*(short *)(lVar18 + uVar9 * 2) != 0) && (*(short *)(lVar18 + uVar9 * 2) != -1))
            goto LAB_14c967680;
            uVar13 = (uint)pFVar14 + 1;
            pFVar14 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
          } while ((int)uVar13 < iVar16);
        }
        local_1d8 = iVar15;
      } while ((int)pFVar14 != iVar10);
    }
    dVar19 = this->CutPlaneLocalThickness;
    if (local_108 < dVar19) {
      local_178._s_0.X = local_178._s_0.X - dVar19 * local_160._s_0.X;
      local_178._s_0.Y = local_178._s_0.Y - dVar19 * local_160._s_0.Y;
      local_178._s_0.Z = local_178._s_0.Z - dVar19 * local_160._s_0.Z;
      FMeshPlaneCut::CutWithoutDelete
                ((FMeshPlaneCut *)&local_188,true,0.0,pTVar6,local_1d8 + 1,true,false);
      lVar3 = this->_padding_;
      iVar15 = *(int *)(lVar3 + 0x144) + *(int *)(lVar3 + 0x140) * 0x200;
      pFVar14 = pFVar12;
      if (((iVar15 != 0) &&
          (pFVar14 = (FDynamicMeshAttributeSet *)0x0,
          0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) &&
         (pFVar14 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < iVar15)) {
        do {
          uVar9 = (ulonglong)((uint)pFVar14 & 0x1ff);
          lVar18 = (*(undefined8 **)(lVar3 + 0x148))[(ulonglong)pFVar14 >> 9];
          if ((*(short *)(lVar18 + uVar9 * 2) != 0) && (*(short *)(lVar18 + uVar9 * 2) != -1))
          break;
          uVar13 = (uint)pFVar14 + 1;
          pFVar14 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
        } while ((int)uVar13 < iVar15);
      }
      iVar10 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
      iVar16 = local_1d8;
      if ((int)pFVar14 != iVar10) {
        iVar17 = local_1d8;
LAB_14c967810:
        do {
          iVar16 = *(int *)(*(longlong *)
                             (*(longlong *)&pTVar6->field_0x20 + ((ulonglong)pFVar14 >> 9) * 8) +
                           (ulonglong)((uint)pFVar14 & 0x1ff) * 4);
          if (iVar16 < iVar17) {
            iVar16 = iVar17;
          }
          uVar13 = (uint)pFVar14 + 1;
          pFVar14 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
          iVar17 = iVar16;
          if ((int)uVar13 < iVar15) {
            do {
              uVar9 = (ulonglong)((uint)pFVar14 & 0x1ff);
              lVar18 = *(longlong *)(*(longlong *)(lVar3 + 0x148) + ((ulonglong)pFVar14 >> 9) * 8);
              if ((*(short *)(lVar18 + uVar9 * 2) != 0) && (*(short *)(lVar18 + uVar9 * 2) != -1))
              goto LAB_14c967810;
              uVar13 = (uint)pFVar14 + 1;
              pFVar14 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
            } while ((int)uVar13 < iVar15);
          }
        } while ((int)pFVar14 != iVar10);
      }
      dVar19 = this->CutPlaneLocalThickness + this->CutPlaneLocalThickness;
      local_178._s_0.X = local_178._s_0.X + local_160._s_0.X * dVar19;
      local_178._s_0.Y = local_178._s_0.Y + local_160._s_0.Y * dVar19;
      local_178._s_0.Z = local_178._s_0.Z + local_160._s_0.Z * dVar19;
      FMeshPlaneCut::CutWithoutDelete
                ((FMeshPlaneCut *)&local_188,true,0.0,pTVar6,iVar16 + 1,false,true);
      lVar3 = this->_padding_;
      iVar15 = *(int *)(lVar3 + 0x144) + *(int *)(lVar3 + 0x140) * 0x200;
      if (((iVar15 != 0) &&
          (pFVar12 = (FDynamicMeshAttributeSet *)0x0,
          0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) &&
         (pFVar12 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < iVar15)) {
        do {
          uVar9 = (ulonglong)((uint)pFVar12 & 0x1ff);
          lVar18 = (*(undefined8 **)(lVar3 + 0x148))[(ulonglong)pFVar12 >> 9];
          if ((*(short *)(lVar18 + uVar9 * 2) != 0) && (*(short *)(lVar18 + uVar9 * 2) != -1))
          break;
          uVar13 = (uint)pFVar12 + 1;
          pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
        } while ((int)uVar13 < iVar15);
      }
      iVar10 = *(int *)(lVar3 + 0x140);
      iVar17 = *(int *)(lVar3 + 0x144);
      iVar11 = (int)pFVar12;
      while (iVar11 != iVar10 * 0x200 + iVar17) {
        while( true ) {
          uVar13 = (uint)pFVar12;
          iVar11 = *(int *)(*(longlong *)
                             (*(longlong *)&pTVar6->field_0x20 + ((ulonglong)pFVar12 >> 9) * 8) +
                           (ulonglong)(uVar13 & 0x1ff) * 4);
          if ((local_1d8 < iVar11) && (iVar11 <= iVar16)) {
            FDynamicMesh3::RemoveTriangle((FDynamicMesh3 *)this->_padding_,uVar13,true,false);
          }
          pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar13 + 1);
          if (iVar15 <= (int)(uVar13 + 1)) break;
          while( true ) {
            uVar9 = (ulonglong)((uint)pFVar12 & 0x1ff);
            lVar18 = *(longlong *)(*(longlong *)(lVar3 + 0x148) + ((ulonglong)pFVar12 >> 9) * 8);
            if ((*(short *)(lVar18 + uVar9 * 2) != 0) && (*(short *)(lVar18 + uVar9 * 2) != -1))
            break;
            uVar13 = (uint)pFVar12 + 1;
            pFVar12 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
            if (iVar15 <= (int)uVar13) goto LAB_14c9679fd;
          }
        }
LAB_14c9679fd:
        iVar11 = (int)pFVar12;
      }
    }
    else {
      FMeshPlaneCut::CutWithoutDelete
                ((FMeshPlaneCut *)&local_188,true,0.0,pTVar6,local_1d8 + 1,true,true);
    }
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) goto LAB_14c967b7e;
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar8 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar8 = plVar2;
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    bVar4 = (bool)(*pcVar1)(uVar5);
    param_1->WasCancelled = bVar4;
    if (bVar4 != false) goto LAB_14c967b7e;
  }
  if (this->bFillCutHole != false) {
    local_1a8 = &
                ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_190 = 0;
    local_1a0 = ConstrainedDelaunayTriangulate<double>;
    local_1b8[0] = Core::Private::Function::
                   TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
                   ::Call;
    FMeshPlaneCut::HoleFill
              ((FMeshPlaneCut *)&local_188,
               (TFunction<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>___cdecl(UE::Geometry::TGeneralPolygon2<double>_const_&)>
                *)local_1b8,this->bFillSpans,-1,-1);
  }
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) goto LAB_14c967b7e;
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar8 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar8 = plVar2;
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    bVar4 = (bool)(*pcVar1)(uVar5);
    param_1->WasCancelled = bVar4;
    if (bVar4 != false) goto LAB_14c967b7e;
  }
  if ((this->bFillCutHole != false) && (this->bKeepBothHalves != false)) {
    lVar3 = *(longlong *)(this->_padding_ + 0x208);
    lVar18 = 0;
    if (lVar3 != 0) {
      lVar18 = lVar3;
    }
    pTVar7 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                     *)(lVar18 + 0x130),ObjectIndexAttribute);
    if ((pTVar7 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMeshPlaneCut::TransferTriangleLabelsToHoleFillTriangles
              ((FMeshPlaneCut *)&local_188,
               *(TDynamicMeshScalarTriangleAttribute<int> **)&pTVar7->field_0x8);
  }
LAB_14c967b7e:
  FMeshPlaneCut::~FMeshPlaneCut((FMeshPlaneCut *)&local_188);
  return;
}

// SetTransform @ 14c985890

void __thiscall
UE::Geometry::FPlaneCutOp::SetTransform(FPlaneCutOp *this,TTransformSRT3<double> *param_1)

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

