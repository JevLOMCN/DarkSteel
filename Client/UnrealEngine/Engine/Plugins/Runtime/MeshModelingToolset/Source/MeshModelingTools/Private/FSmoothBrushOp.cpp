// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// operator() @ 14ccc9330

void __thiscall `FSmoothBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  undefined8 uVar16;
  TVector<double> *pTVar17;
  longlong *plVar18;
  longlong lVar19;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a0;
  TVector<double> local_98;
  TVector<double> local_80 [3];
  
  plVar18 = *(longlong **)this;
  lVar19 = (longlong)param_1;
  uVar15 = 0;
  if (param_1 < (int)plVar18[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar15 = *(uint *)(*plVar18 + lVar19 * 4);
  lVar3 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar15 >> 9) * 8
           );
  pdVar1 = (double *)(lVar3 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
  local_c8 = *pdVar1;
  dStack_c0 = pdVar1[1];
  local_b8 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar4 = *(undefined8 **)(lVar2 + 0x10);
  uVar5 = *(undefined8 *)((longlong)this + 0x18);
  UE::Core::Private::Function::CheckCallable((void *)*puVar4);
  pcVar6 = (code *)*puVar4;
  plVar18 = puVar4 + 2;
  if ((longlong *)puVar4[5] != (longlong *)0x0) {
    plVar18 = (longlong *)puVar4[5];
  }
  uVar16 = (**(code **)(*plVar18 + 8))();
  dVar10 = (double)(*pcVar6)(uVar16,uVar5,&local_c8);
  if (**(char **)((longlong)this + 0x20) == '\0') {
    pTVar17 = UE::Geometry::FMeshWeights::UniformCentroid
                        (local_80,(FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),uVar15);
  }
  else {
    pTVar17 = UE::Geometry::FMeshWeights::CotanCentroidSafe
                        (&local_98,(FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),uVar15,
                         __real_4024000000000000,(bool *)0x0);
  }
  local_a0 = (pTVar17->field0_0x0)._s_0.Z;
  dVar12 = (pTVar17->field0_0x0)._s_0.X;
  dVar13 = (pTVar17->field0_0x0)._s_0.Y;
  plVar18 = *(longlong **)((longlong)this + 0x28);
  dVar10 = dVar10 * *(double *)(*(longlong *)((longlong)this + 0x18) + 0x80);
  dVar7 = __real_3ff0000000000000 - dVar10;
  uVar15 = 0;
  if (param_1 < (int)plVar18[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  dVar8 = dVar7 * local_c8;
  dVar9 = dVar7 * dStack_c0;
  dVar7 = dVar7 * local_b8;
  dVar11 = dVar10 * local_a0;
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar2 = *plVar18;
  *(double *)(lVar2 + lVar19 * 0x18) = dVar8 + dVar10 * dVar12;
  *(double *)(lVar2 + 8 + lVar19 * 0x18) = dVar9 + dVar10 * dVar13;
  *(double *)(lVar2 + 0x10 + lVar19 * 0x18) = dVar7 + dVar11;
  return;
}

// ApplyStamp @ 14cce0a00

void __thiscall
FSmoothBrushOp::ApplyStamp
          (FSmoothBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  UBaseSmoothBrushOpProps *pUVar1;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  TArray<int,TSizedDefaultAllocator<32>_> **local_40;
  TArray<int,TSizedDefaultAllocator<32>_> *local_38;
  FDynamicMesh3 **local_30;
  FSmoothBrushOp *local_28;
  FSculptBrushStamp *local_20;
  undefined1 *local_18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_10;
  
  local_res10 = param_1;
  pUVar1 = FMeshSculptBrushOp::GetPropertySetAs<UBaseSmoothBrushOpProps>((FMeshSculptBrushOp *)this)
  ;
  local_res8[0] = (**(code **)(*(longlong *)pUVar1 + 0x300))();
  local_30 = &local_res10;
  local_58.DataPtr = (void **)0x0;
  local_18 = local_res8;
  local_58.ArrayNum = 0;
  local_10 = param_4;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSmoothBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>::Call;
  local_40 = &local_38;
  local_38 = param_3;
  local_28 = this;
  local_20 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_48,
             param_4._0_1_,None,&local_58);
  return;
}

