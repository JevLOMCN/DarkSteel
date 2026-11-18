// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// operator() @ 14ccc95b0

void __thiscall
`FSmoothFillBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  undefined8 uVar18;
  TVector<double> *pTVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  undefined8 local_e8;
  double dStack_e0;
  double local_d8;
  TVector<double>_u_0 local_d0;
  double local_a8;
  TVector<double> local_a0;
  TVector<double> local_88 [4];
  
  plVar20 = *(longlong **)this;
  lVar21 = (longlong)param_1;
  uVar22 = (uint)~param_1 >> 0x1f;
  uVar17 = 0;
  if (param_1 < (int)plVar20[1]) {
    uVar17 = uVar22;
  }
  if (uVar17 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar17 = *(uint *)(*plVar20 + lVar21 * 4);
  lVar3 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar17 >> 9) * 8
           );
  pdVar1 = (double *)(lVar3 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
  local_e8 = *pdVar1;
  dStack_e0 = pdVar1[1];
  local_d8 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
  UE::Geometry::FMeshNormals::ComputeVertexNormal
            ((TVector<double> *)&local_d0._s_0,(FDynamicMesh3 *)**(longlong **)((longlong)this + 8),
             uVar17,true,true);
  lVar3 = *(longlong *)((longlong)this + 0x10);
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar4 = *(undefined8 **)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)((longlong)this + 0x18);
  UE::Core::Private::Function::CheckCallable((void *)*puVar4);
  pcVar6 = (code *)*puVar4;
  plVar20 = puVar4 + 2;
  if ((longlong *)puVar4[5] != (longlong *)0x0) {
    plVar20 = (longlong *)puVar4[5];
  }
  uVar18 = (**(code **)(*plVar20 + 8))();
  dVar10 = (double)(*pcVar6)(uVar18,uVar5,&local_e8);
  if (**(char **)((longlong)this + 0x20) == '\0') {
    pTVar19 = UE::Geometry::FMeshWeights::UniformCentroid
                        (local_88,(FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),uVar17);
  }
  else {
    pTVar19 = UE::Geometry::FMeshWeights::CotanCentroidSafe
                        (&local_a0,(FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),uVar17,
                         __real_4024000000000000,(bool *)0x0);
  }
  dVar15 = local_d8;
  local_a8 = (pTVar19->field0_0x0)._s_0.Z;
  uVar12 = (undefined4)local_e8;
  uVar13 = local_e8._4_4_;
  uVar14 = dStack_e0._0_4_;
  dVar10 = dVar10 * *(double *)(*(longlong *)((longlong)this + 0x18) + 0x80);
  plVar20 = *(longlong **)((longlong)this + 0x30);
  dVar7 = __real_3ff0000000000000 - dVar10;
  dVar9 = dVar7 * local_e8 + dVar10 * (pTVar19->field0_0x0)._s_0.X;
  dVar8 = dVar7 * local_d8 + dVar10 * local_a8;
  dVar10 = dVar7 * dStack_e0 + dVar10 * (pTVar19->field0_0x0)._s_0.Y;
  if (0.0 <= ((dVar10 - dStack_e0) * local_d0._s_0.Y + (dVar9 - local_e8) * local_d0._s_0.X +
             (dVar8 - local_d8) * local_d0._s_0.Z) * **(double **)((longlong)this + 0x28)) {
    uVar17 = 0;
    if (param_1 < (int)plVar20[1]) {
      uVar17 = uVar22;
    }
    if (uVar17 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar3 = *plVar20;
    *(double *)(lVar3 + lVar21 * 0x18) = dVar9;
    *(double *)(lVar3 + 8 + lVar21 * 0x18) = dVar10;
    *(double *)(lVar3 + 0x10 + lVar21 * 0x18) = dVar8;
  }
  else {
    uVar11 = (ulonglong)dStack_e0 >> 0x20;
    uVar17 = 0;
    if (param_1 < (int)plVar20[1]) {
      uVar17 = uVar22;
    }
    if (uVar17 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar3 = *plVar20;
    puVar2 = (undefined4 *)(lVar3 + lVar21 * 0x18);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    puVar2[2] = uVar14;
    puVar2[3] = (int)uVar11;
    *(double *)(lVar3 + 0x10 + lVar21 * 0x18) = dVar15;
  }
  return;
}

// ApplyStamp @ 14cce0af0

void __thiscall
FSmoothFillBrushOp::ApplyStamp
          (FSmoothFillBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  UBaseSmoothBrushOpProps *pUVar1;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  double local_res18 [2];
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> **local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  FDynamicMesh3 **local_50;
  FSmoothFillBrushOp *local_48;
  FSculptBrushStamp *local_40;
  undefined1 *local_38;
  double *local_30;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_28;
  
  local_res18[0] = param_2->Direction;
  local_res10 = param_1;
  pUVar1 = FMeshSculptBrushOp::GetPropertySetAs<UBaseSmoothBrushOpProps>((FMeshSculptBrushOp *)this)
  ;
  local_res8[0] = (**(code **)(*(longlong *)pUVar1 + 0x300))();
  local_50 = &local_res10;
  local_78.DataPtr = (void **)0x0;
  local_38 = local_res8;
  local_78.ArrayNum = 0;
  local_30 = local_res18;
  local_28 = param_4;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSmoothFillBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>::Call;
  local_60 = &local_58;
  local_58 = param_3;
  local_48 = this;
  local_40 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_68,
             param_4._0_1_,None,&local_78);
  return;
}

