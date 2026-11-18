// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 6

// CalculateResult @ 14c96e3a0

void __thiscall
UE::Geometry::FUVProjectionOp::CalculateResult(FUVProjectionOp *this,FProgressCancel *param_1)

{
  EUVProjectionMethod EVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar2 = *(code **)&param_1->CancelF;
    plVar3 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar6 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    bVar4 = (bool)(*pcVar2)(uVar5);
    param_1->WasCancelled = bVar4;
    if (bVar4 != false) {
      return;
    }
  }
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FDynamicMesh3::operator=((FDynamicMesh3 *)this->_padding_,(this->OriginalMesh).Object);
  if ((*(longlong *)(this->_padding_ + 0x208) == 0) &&
     (bVar4 = `UE::Geometry::FUVProjectionOp::CalculateResult'::__l6::<lambda_1>::operator()
                        (local_res10), !bVar4)) {
    FDynamicMesh3::EnableAttributes((FDynamicMesh3 *)this->_padding_);
  }
  if (this->ProjectionMethod == Plane) {
    (**(code **)(this->_padding_ + 0x28))(this,param_1);
  }
  EVar1 = this->ProjectionMethod;
  if (EVar1 != ExpMap) {
    if (EVar1 != Box) {
      if (EVar1 == Cylinder) {
        (**(code **)(this->_padding_ + 0x38))(this,param_1);
      }
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014c96e4af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))(this,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c96e494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x30))(this,param_1);
  return;
}

// CalculateResult_Box @ 14c974590

void __thiscall
UE::Geometry::FUVProjectionOp::CalculateResult_Box(FUVProjectionOp *this,FProgressCancel *param_1)

{
  double dVar1;
  double dVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 extraout_XMM0_Qa;
  FUVProjectionOp *local_res8;
  FUVProjectionOp *local_res18;
  TVector2<float>_u_0 local_res20;
  int local_108 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  TArray<int,TSizedDefaultAllocator<32>_> local_f0;
  undefined4 local_e0;
  uint local_dc;
  uint local_d8;
  undefined4 local_d4;
  TVector2<float>_u_0 local_d0;
  TVector2<float>_u_0 local_c8;
  code *local_c0;
  FUVProjectionOp **local_b8;
  code *local_b0;
  FUVProjectionOp **local_a8;
  code *local_a0;
  undefined4 **local_98;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  FDynamicMeshUVEditor local_60;
  undefined4 *local_48;
  TVector2<float>_u_0 *local_40;
  TVector2<float>_u_0 *local_38;
  TVector2<float>_u_0 *local_30;
  
  FDynamicMeshUVEditor::FDynamicMeshUVEditor
            (&local_60,(FDynamicMesh3 *)this->_padding_,this->UseUVLayer,true);
  pTVar3 = (this->TriangleROI).Object;
  uVar9 = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if ((pTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (pTVar3->ArrayNum != 0)) {
    dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.X;
    local_b8 = &local_res8;
    dVar2 = (this->ProjectionBox).Extents.field0_0x0._s_0.Y;
    local_90._s_0.X = dVar1 + dVar1;
    local_90._s_0.Y = dVar2 + dVar2;
    local_c0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Box'::__l11::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
               ::Call;
    dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.Z;
    local_90._s_0.Z = dVar1 + dVar1;
    local_res8 = this;
    FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection
              (&local_60,(this->TriangleROI).Object,
               (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *
               )&local_c0,&(this->ProjectionBox).Frame,(TVector<double> *)&local_90._s_0,
               this->MinRegionSize,(FUVEditResult *)&local_f0);
    goto LAB_14c9748b9;
  }
  lVar4 = this->_padding_;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  uVar13 = *(int *)(lVar4 + 0x144) + *(int *)(lVar4 + 0x140) * 0x200;
  uVar12 = uVar9;
  if ((uVar13 == 0) ||
     (uVar12 = 0, (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U) < 0xfffe)) {
LAB_14c974708:
    uVar10 = (uint)uVar12;
  }
  else {
    uVar12 = 1;
    uVar10 = 1;
    if (1 < (int)uVar13) {
      do {
        uVar14 = (ulonglong)((uint)uVar12 & 0x1ff);
        lVar5 = (*(undefined8 **)(lVar4 + 0x148))[uVar12 >> 9];
        if ((*(short *)(lVar5 + uVar14 * 2) != 0) && (*(short *)(lVar5 + uVar14 * 2) != -1)) break;
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while ((int)uVar10 < (int)uVar13);
      goto LAB_14c974708;
    }
  }
  if (uVar10 != uVar13) {
    while( true ) {
      iVar11 = (int)uVar12;
      iVar8 = (int)uVar9;
      local_108[0] = iVar11;
      if ((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)local_108) &&
         ((FScriptContainerElement *)local_108 <
          local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 4)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = local_100.ArrayNum;
      }
      if (iVar8 == local_100.ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_100.AllocatorInstance,&local_100.ArrayMax);
      }
      local_100.ArrayNum = iVar8 + 1U;
      uVar10 = iVar11 + 1;
      uVar12 = (ulonglong)uVar10;
      *(int *)(local_100.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_108[0];
      if ((int)uVar10 < (int)uVar13) {
        do {
          uVar9 = (ulonglong)((uint)uVar12 & 0x1ff);
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x148) + (uVar12 >> 9) * 8);
          if ((*(short *)(lVar5 + uVar9 * 2) != 0) && (*(short *)(lVar5 + uVar9 * 2) != -1))
          goto LAB_14c974800;
          uVar10 = (uint)uVar12 + 1;
          uVar12 = (ulonglong)uVar10;
        } while ((int)uVar10 < (int)uVar13);
      }
      if (uVar10 == uVar13) break;
LAB_14c974800:
      uVar9 = (ulonglong)(iVar8 + 1U);
    }
  }
  dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.X;
  local_a8 = &local_res18;
  dVar2 = (this->ProjectionBox).Extents.field0_0x0._s_0.Y;
  local_78._s_0.X = dVar1 + dVar1;
  local_78._s_0.Y = dVar2 + dVar2;
  local_b0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Box'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
             ::Call;
  dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.Z;
  local_78._s_0.Z = dVar1 + dVar1;
  local_res18 = this;
  FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection
            (&local_60,&local_100,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_b0,&(this->ProjectionBox).Frame,(TVector<double> *)&local_78._s_0,
             this->MinRegionSize,(FUVEditResult *)&local_f0);
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
LAB_14c9748b9:
  local_c8 = (this->UVTranslate).field0_0x0;
  local_res20 = (this->UVScale).field0_0x0;
  local_d0 = (this->UVOrigin).field0_0x0;
  __libm_sse2_sincosf_();
  local_48 = &local_e0;
  local_d8 = (uint)extraout_XMM0_Qa;
  local_40 = &local_res20;
  local_e0 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
  local_38 = &local_d0;
  local_30 = &local_c8;
  local_dc = local_d8 ^ __xmm_80000000800000008000000080000000;
  local_98 = &local_48;
  local_a0 = Core::Private::Function::
             TFunctionRefCaller<`ApplyUVTransforms'::__l2::<lambda_1>,UE::Math::TVector2<float>,UE::Math::TVector2<float>_const_&>
             ::Call;
  local_d4 = local_e0;
  FDynamicMeshUVEditor::TransformUVElements
            (&local_60,&local_f0,
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>_const_&)> *)
             &local_a0);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// CalculateResult_Cylinder @ 14c974990

void __thiscall
UE::Geometry::FUVProjectionOp::CalculateResult_Cylinder
          (FUVProjectionOp *this,FProgressCancel *param_1)

{
  double dVar1;
  double dVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 extraout_XMM0_Qa;
  FUVProjectionOp *local_res8;
  FUVProjectionOp *local_res18;
  TVector2<float>_u_0 local_res20;
  int local_108 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  TArray<int,TSizedDefaultAllocator<32>_> local_f0;
  undefined4 local_e0;
  uint local_dc;
  uint local_d8;
  undefined4 local_d4;
  TVector2<float>_u_0 local_d0;
  TVector2<float>_u_0 local_c8;
  code *local_c0;
  FUVProjectionOp **local_b8;
  code *local_b0;
  FUVProjectionOp **local_a8;
  code *local_a0;
  undefined4 **local_98;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  FDynamicMeshUVEditor local_60;
  undefined4 *local_48;
  TVector2<float>_u_0 *local_40;
  TVector2<float>_u_0 *local_38;
  TVector2<float>_u_0 *local_30;
  
  FDynamicMeshUVEditor::FDynamicMeshUVEditor
            (&local_60,(FDynamicMesh3 *)this->_padding_,this->UseUVLayer,true);
  pTVar3 = (this->TriangleROI).Object;
  uVar9 = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if ((pTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (pTVar3->ArrayNum != 0)) {
    dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.X;
    local_b8 = &local_res8;
    dVar2 = (this->ProjectionBox).Extents.field0_0x0._s_0.Y;
    local_90._s_0.X = dVar1 + dVar1;
    local_90._s_0.Y = dVar2 + dVar2;
    local_c0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Cylinder'::__l11::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
               ::Call;
    dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.Z;
    local_90._s_0.Z = dVar1 + dVar1;
    local_res8 = this;
    FDynamicMeshUVEditor::SetTriangleUVsFromCylinderProjection
              (&local_60,(this->TriangleROI).Object,
               (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *
               )&local_c0,&(this->ProjectionBox).Frame,(TVector<double> *)&local_90._s_0,
               this->CylinderSplitAngle,(FUVEditResult *)&local_f0);
    goto LAB_14c974cbd;
  }
  lVar4 = this->_padding_;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  uVar13 = *(int *)(lVar4 + 0x144) + *(int *)(lVar4 + 0x140) * 0x200;
  uVar12 = uVar9;
  if ((uVar13 == 0) ||
     (uVar12 = 0, (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U) < 0xfffe)) {
LAB_14c974b08:
    uVar10 = (uint)uVar12;
  }
  else {
    uVar12 = 1;
    uVar10 = 1;
    if (1 < (int)uVar13) {
      do {
        uVar14 = (ulonglong)((uint)uVar12 & 0x1ff);
        lVar5 = (*(undefined8 **)(lVar4 + 0x148))[uVar12 >> 9];
        if ((*(short *)(lVar5 + uVar14 * 2) != 0) && (*(short *)(lVar5 + uVar14 * 2) != -1)) break;
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while ((int)uVar10 < (int)uVar13);
      goto LAB_14c974b08;
    }
  }
  if (uVar10 != uVar13) {
    while( true ) {
      iVar11 = (int)uVar12;
      iVar8 = (int)uVar9;
      local_108[0] = iVar11;
      if ((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)local_108) &&
         ((FScriptContainerElement *)local_108 <
          local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 4)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = local_100.ArrayNum;
      }
      if (iVar8 == local_100.ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_100.AllocatorInstance,&local_100.ArrayMax);
      }
      local_100.ArrayNum = iVar8 + 1U;
      uVar10 = iVar11 + 1;
      uVar12 = (ulonglong)uVar10;
      *(int *)(local_100.AllocatorInstance.Data + (longlong)iVar8 * 4) = local_108[0];
      if ((int)uVar10 < (int)uVar13) {
        do {
          uVar9 = (ulonglong)((uint)uVar12 & 0x1ff);
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x148) + (uVar12 >> 9) * 8);
          if ((*(short *)(lVar5 + uVar9 * 2) != 0) && (*(short *)(lVar5 + uVar9 * 2) != -1))
          goto LAB_14c974c00;
          uVar10 = (uint)uVar12 + 1;
          uVar12 = (ulonglong)uVar10;
        } while ((int)uVar10 < (int)uVar13);
      }
      if (uVar10 == uVar13) break;
LAB_14c974c00:
      uVar9 = (ulonglong)(iVar8 + 1U);
    }
  }
  dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.X;
  local_a8 = &local_res18;
  dVar2 = (this->ProjectionBox).Extents.field0_0x0._s_0.Y;
  local_78._s_0.X = dVar1 + dVar1;
  local_78._s_0.Y = dVar2 + dVar2;
  local_b0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Cylinder'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
             ::Call;
  dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.Z;
  local_78._s_0.Z = dVar1 + dVar1;
  local_res18 = this;
  FDynamicMeshUVEditor::SetTriangleUVsFromCylinderProjection
            (&local_60,&local_100,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_b0,&(this->ProjectionBox).Frame,(TVector<double> *)&local_78._s_0,
             this->CylinderSplitAngle,(FUVEditResult *)&local_f0);
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
LAB_14c974cbd:
  local_c8 = (this->UVTranslate).field0_0x0;
  local_res20 = (this->UVScale).field0_0x0;
  local_d0 = (this->UVOrigin).field0_0x0;
  __libm_sse2_sincosf_();
  local_48 = &local_e0;
  local_d8 = (uint)extraout_XMM0_Qa;
  local_40 = &local_res20;
  local_e0 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
  local_38 = &local_d0;
  local_30 = &local_c8;
  local_dc = local_d8 ^ __xmm_80000000800000008000000080000000;
  local_98 = &local_48;
  local_a0 = Core::Private::Function::
             TFunctionRefCaller<`ApplyUVTransforms'::__l2::<lambda_1>,UE::Math::TVector2<float>,UE::Math::TVector2<float>_const_&>
             ::Call;
  local_d4 = local_e0;
  FDynamicMeshUVEditor::TransformUVElements
            (&local_60,&local_f0,
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>_const_&)> *)
             &local_a0);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// CalculateResult_ExpMap @ 14c974d90

void __thiscall
UE::Geometry::FUVProjectionOp::CalculateResult_ExpMap
          (FUVProjectionOp *this,FProgressCancel *param_1)

{
  double dVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint extraout_XMM0_Da;
  FUVProjectionOp *local_res8;
  FUVProjectionOp *local_res18;
  TVector2<float>_u_0 local_res20;
  int local_128 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_120;
  TArray<int,TSizedDefaultAllocator<32>_> local_110;
  undefined1 local_100 [4];
  uint local_fc;
  TVector2<float>_u_0 local_f0;
  TVector2<float>_u_0 local_e8;
  TVector2<double>_u_0 local_e0;
  code *local_d0;
  FUVProjectionOp **local_c8;
  code *local_c0;
  FUVProjectionOp **local_b8;
  code *local_b0;
  undefined1 **local_a8;
  FDynamicMeshUVEditor local_a0;
  undefined1 *local_88;
  TVector2<float>_u_0 *local_80;
  TVector2<float>_u_0 *local_78;
  TVector2<float>_u_0 *local_70;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  
  local_68._s_0.X = (this->ProjectionBox).Frame.Origin.field0_0x0._s_0.X;
  local_68._s_0.Y = (this->ProjectionBox).Frame.Origin.field0_0x0._s_0.Y;
  local_68._s_0.Z = (this->ProjectionBox).Frame.Origin.field0_0x0._s_0.Z;
  dStack_50 = (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.X;
  local_48 = (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.Y;
  dStack_40 = (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.Z;
  local_38 = (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.W;
  dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.X;
  local_e0._s_0.X = dVar1 + dVar1;
  dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.Y;
  local_e0._s_0.Y = dVar1 + dVar1;
  FDynamicMeshUVEditor::FDynamicMeshUVEditor
            (&local_a0,(FDynamicMesh3 *)this->_padding_,this->UseUVLayer,true);
  pTVar2 = (this->TriangleROI).Object;
  uVar8 = 0;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  if ((pTVar2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (pTVar2->ArrayNum != 0)) {
    local_c8 = &local_res8;
    local_d0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_ExpMap'::__l11::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
               ::Call;
    local_res8 = this;
    FDynamicMeshUVEditor::SetTriangleUVsFromExpMap
              (&local_a0,(this->TriangleROI).Object,
               (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *
               )&local_d0,(TFrame3<double> *)&local_68._s_0,(TVector2<double> *)&local_e0._s_0,
               this->SmoothingRounds,this->SmoothingAlpha,this->BlendWeight,
               (FUVEditResult *)&local_110);
    goto LAB_14c9750dd;
  }
  lVar3 = this->_padding_;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  uVar12 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
  uVar11 = uVar8;
  if ((uVar12 == 0) ||
     (uVar11 = 0, (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U) < 0xfffe)) {
LAB_14c974f38:
    uVar9 = (uint)uVar11;
  }
  else {
    uVar11 = 1;
    uVar9 = 1;
    if (1 < (int)uVar12) {
      do {
        uVar13 = (ulonglong)((uint)uVar11 & 0x1ff);
        lVar4 = (*(undefined8 **)(lVar3 + 0x148))[uVar11 >> 9];
        if ((*(short *)(lVar4 + uVar13 * 2) != 0) && (*(short *)(lVar4 + uVar13 * 2) != -1)) break;
        uVar9 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)uVar12);
      goto LAB_14c974f38;
    }
  }
  if (uVar9 != uVar12) {
    while( true ) {
      iVar10 = (int)uVar11;
      iVar7 = (int)uVar8;
      local_128[0] = iVar10;
      if ((local_120.AllocatorInstance.Data <= (FScriptContainerElement *)local_128) &&
         ((FScriptContainerElement *)local_128 <
          local_120.AllocatorInstance.Data + (longlong)local_120.ArrayMax * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = local_120.ArrayNum;
      }
      if (iVar7 == local_120.ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_120.AllocatorInstance,&local_120.ArrayMax);
      }
      local_120.ArrayNum = iVar7 + 1U;
      uVar9 = iVar10 + 1;
      uVar11 = (ulonglong)uVar9;
      *(int *)(local_120.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_128[0];
      if ((int)uVar9 < (int)uVar12) {
        do {
          uVar8 = (ulonglong)((uint)uVar11 & 0x1ff);
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x148) + (uVar11 >> 9) * 8);
          if ((*(short *)(lVar4 + uVar8 * 2) != 0) && (*(short *)(lVar4 + uVar8 * 2) != -1))
          goto LAB_14c975030;
          uVar9 = (uint)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while ((int)uVar9 < (int)uVar12);
      }
      if (uVar9 == uVar12) break;
LAB_14c975030:
      uVar8 = (ulonglong)(iVar7 + 1U);
    }
  }
  local_b8 = &local_res18;
  local_c0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_ExpMap'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
             ::Call;
  local_res18 = this;
  FDynamicMeshUVEditor::SetTriangleUVsFromExpMap
            (&local_a0,&local_120,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_c0,(TFrame3<double> *)&local_68._s_0,(TVector2<double> *)&local_e0._s_0,
             this->SmoothingRounds,this->SmoothingAlpha,this->BlendWeight,
             (FUVEditResult *)&local_110);
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
LAB_14c9750dd:
  local_e8 = (this->UVTranslate).field0_0x0;
  local_res20 = (this->UVScale).field0_0x0;
  local_f0 = (this->UVOrigin).field0_0x0;
  __libm_sse2_sincosf_();
  local_88 = local_100;
  local_80 = &local_res20;
  local_78 = &local_f0;
  local_70 = &local_e8;
  local_fc = extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000;
  local_a8 = &local_88;
  local_b0 = Core::Private::Function::
             TFunctionRefCaller<`ApplyUVTransforms'::__l2::<lambda_1>,UE::Math::TVector2<float>,UE::Math::TVector2<float>_const_&>
             ::Call;
  FDynamicMeshUVEditor::TransformUVElements
            (&local_a0,&local_110,
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>_const_&)> *)
             &local_b0);
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  return;
}

// CalculateResult_Plane @ 14c9751b0

void __thiscall
UE::Geometry::FUVProjectionOp::CalculateResult_Plane(FUVProjectionOp *this,FProgressCancel *param_1)

{
  double dVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint extraout_XMM0_Da;
  FUVProjectionOp *local_res8;
  FUVProjectionOp *local_res18;
  TVector2<float>_u_0 local_res20;
  int local_128 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_120;
  TArray<int,TSizedDefaultAllocator<32>_> local_110;
  undefined1 local_100 [4];
  uint local_fc;
  TVector2<float>_u_0 local_f0;
  TVector2<float>_u_0 local_e8;
  TVector2<double>_u_0 local_e0;
  code *local_d0;
  FUVProjectionOp **local_c8;
  code *local_c0;
  FUVProjectionOp **local_b8;
  code *local_b0;
  undefined1 **local_a8;
  FDynamicMeshUVEditor local_a0;
  undefined1 *local_88;
  TVector2<float>_u_0 *local_80;
  TVector2<float>_u_0 *local_78;
  TVector2<float>_u_0 *local_70;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  
  local_68._s_0.X = (this->ProjectionBox).Frame.Origin.field0_0x0._s_0.X;
  local_68._s_0.Y = (this->ProjectionBox).Frame.Origin.field0_0x0._s_0.Y;
  local_68._s_0.Z = (this->ProjectionBox).Frame.Origin.field0_0x0._s_0.Z;
  dStack_50 = (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.X;
  local_48 = (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.Y;
  dStack_40 = (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.Z;
  local_38 = (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.W;
  dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.X;
  local_e0._s_0.X = dVar1 + dVar1;
  dVar1 = (this->ProjectionBox).Extents.field0_0x0._s_0.Y;
  local_e0._s_0.Y = dVar1 + dVar1;
  FDynamicMeshUVEditor::FDynamicMeshUVEditor
            (&local_a0,(FDynamicMesh3 *)this->_padding_,this->UseUVLayer,true);
  pTVar2 = (this->TriangleROI).Object;
  uVar8 = 0;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  if ((pTVar2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (pTVar2->ArrayNum != 0)) {
    local_c8 = &local_res8;
    local_d0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Plane'::__l11::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
               ::Call;
    local_res8 = this;
    FDynamicMeshUVEditor::SetTriangleUVsFromPlanarProjection
              (&local_a0,(this->TriangleROI).Object,
               (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *
               )&local_d0,(TFrame3<double> *)&local_68._s_0,(TVector2<double> *)&local_e0._s_0,
               (FUVEditResult *)&local_110);
    goto LAB_14c9754b4;
  }
  lVar3 = this->_padding_;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  uVar12 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
  uVar11 = uVar8;
  if ((uVar12 == 0) ||
     (uVar11 = 0, (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U) < 0xfffe)) {
LAB_14c975338:
    uVar9 = (uint)uVar11;
  }
  else {
    uVar11 = 1;
    uVar9 = 1;
    if (1 < (int)uVar12) {
      do {
        uVar13 = (ulonglong)((uint)uVar11 & 0x1ff);
        lVar4 = (*(undefined8 **)(lVar3 + 0x148))[uVar11 >> 9];
        if ((*(short *)(lVar4 + uVar13 * 2) != 0) && (*(short *)(lVar4 + uVar13 * 2) != -1)) break;
        uVar9 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)uVar12);
      goto LAB_14c975338;
    }
  }
  if (uVar9 != uVar12) {
    while( true ) {
      iVar10 = (int)uVar11;
      iVar7 = (int)uVar8;
      local_128[0] = iVar10;
      if ((local_120.AllocatorInstance.Data <= (FScriptContainerElement *)local_128) &&
         ((FScriptContainerElement *)local_128 <
          local_120.AllocatorInstance.Data + (longlong)local_120.ArrayMax * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = local_120.ArrayNum;
      }
      if (iVar7 == local_120.ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_120.AllocatorInstance,&local_120.ArrayMax);
      }
      local_120.ArrayNum = iVar7 + 1U;
      uVar9 = iVar10 + 1;
      uVar11 = (ulonglong)uVar9;
      *(int *)(local_120.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_128[0];
      if ((int)uVar9 < (int)uVar12) {
        do {
          uVar8 = (ulonglong)((uint)uVar11 & 0x1ff);
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x148) + (uVar11 >> 9) * 8);
          if ((*(short *)(lVar4 + uVar8 * 2) != 0) && (*(short *)(lVar4 + uVar8 * 2) != -1))
          goto LAB_14c975430;
          uVar9 = (uint)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while ((int)uVar9 < (int)uVar12);
      }
      if (uVar9 == uVar12) break;
LAB_14c975430:
      uVar8 = (ulonglong)(iVar7 + 1U);
    }
  }
  local_b8 = &local_res18;
  local_c0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FUVProjectionOp::CalculateResult_Plane'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
             ::Call;
  local_res18 = this;
  FDynamicMeshUVEditor::SetTriangleUVsFromPlanarProjection
            (&local_a0,&local_120,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_c0,(TFrame3<double> *)&local_68._s_0,(TVector2<double> *)&local_e0._s_0,
             (FUVEditResult *)&local_110);
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
LAB_14c9754b4:
  local_e8 = (this->UVTranslate).field0_0x0;
  local_res20 = (this->UVScale).field0_0x0;
  local_f0 = (this->UVOrigin).field0_0x0;
  __libm_sse2_sincosf_();
  local_88 = local_100;
  local_80 = &local_res20;
  local_78 = &local_f0;
  local_70 = &local_e8;
  local_fc = extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000;
  local_a8 = &local_88;
  local_b0 = Core::Private::Function::
             TFunctionRefCaller<`ApplyUVTransforms'::__l2::<lambda_1>,UE::Math::TVector2<float>,UE::Math::TVector2<float>_const_&>
             ::Call;
  FDynamicMeshUVEditor::TransformUVElements
            (&local_a0,&local_110,
             (TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>_const_&)> *)
             &local_b0);
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 150574e30

bool __thiscall
`UE::Geometry::FUVProjectionOp::CalculateResult'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_691414662922633195>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_691414662922633195>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

