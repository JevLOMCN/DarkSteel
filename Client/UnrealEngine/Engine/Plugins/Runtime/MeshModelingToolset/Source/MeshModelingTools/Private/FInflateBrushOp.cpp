// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// operator() @ 14ccc80c0

void __thiscall `FInflateBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  double dVar14;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_70 [3];
  
  plVar12 = *(longlong **)this;
  lVar13 = (longlong)param_1;
  uVar10 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar10 = *(uint *)(*plVar12 + lVar13 * 4);
  lVar3 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar10 >> 9) * 8
           );
  pdVar1 = (double *)(lVar3 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
  local_88 = *pdVar1;
  dStack_80 = pdVar1[1];
  local_78 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
  UE::Geometry::FMeshNormals::ComputeVertexNormal
            ((TVector<double> *)&local_70[0]._s_0,
             (FDynamicMesh3 *)**(longlong **)((longlong)this + 8),uVar10,true,true);
  lVar3 = *(longlong *)((longlong)this + 0x18);
  dVar2 = **(double **)((longlong)this + 0x10);
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar4 = *(undefined8 **)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)((longlong)this + 0x20);
  UE::Core::Private::Function::CheckCallable((void *)*puVar4);
  pcVar6 = (code *)*puVar4;
  plVar12 = puVar4 + 2;
  if ((longlong *)puVar4[5] != (longlong *)0x0) {
    plVar12 = (longlong *)puVar4[5];
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  dVar14 = (double)(*pcVar6)(uVar11,uVar5,&local_88);
  plVar12 = *(longlong **)((longlong)this + 0x28);
  dVar7 = dVar2 * (double)local_70[0]._0_8_ * dVar14 + local_88;
  dVar8 = dVar2 * (double)local_70[0]._8_8_ * dVar14 + dStack_80;
  uVar10 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  dVar2 = dVar2 * (double)local_70[0]._16_8_ * dVar14 + local_78;
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar3 = *plVar12;
  *(double *)(lVar3 + lVar13 * 0x18) = dVar7;
  *(double *)(lVar3 + 8 + lVar13 * 0x18) = dVar8;
  *(double *)(lVar3 + 0x10 + lVar13 * 0x18) = dVar2;
  return;
}

// ApplyStamp @ 14ccdf200

void __thiscall
FInflateBrushOp::ApplyStamp
          (FInflateBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double local_res8;
  FDynamicMesh3 *local_res10 [3];
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  TArray<int,TSizedDefaultAllocator<32>_> **local_40;
  TArray<int,TSizedDefaultAllocator<32>_> *local_38;
  FDynamicMesh3 **local_30;
  double *local_28;
  FInflateBrushOp *local_20;
  FSculptBrushStamp *local_18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_10;
  
  local_30 = local_res10;
  local_28 = &local_res8;
  local_10 = param_4;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FInflateBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>::Call;
  local_40 = &local_38;
  local_58.DataPtr = (void **)0x0;
  local_res8 = param_2->DeltaTime * this->BrushSpeedTuning * param_2->Radius *
               param_2->Direction * param_2->Power;
  local_58.ArrayNum = 0;
  local_res10[0] = param_1;
  local_38 = param_3;
  local_20 = this;
  local_18 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_48,
             param_4._0_1_,None,&local_58);
  return;
}

// GetBrushTargetType @ 14ccfe130

ESculptBrushOpTargetType __thiscall FInflateBrushOp::GetBrushTargetType(FInflateBrushOp *this)

{
  return SculptMesh;
}

