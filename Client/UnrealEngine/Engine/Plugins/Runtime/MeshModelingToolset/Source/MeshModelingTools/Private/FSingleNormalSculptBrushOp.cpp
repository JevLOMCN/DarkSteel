// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// operator() @ 14ccc90c0

void __thiscall
`UE::Geometry::FSingleNormalSculptBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  double dVar18;
  double local_98;
  double dStack_90;
  double local_88;
  
  plVar16 = *(longlong **)((longlong)this + 0x18);
  lVar17 = (longlong)param_1;
  uVar12 = 0;
  if (param_1 < (int)plVar16[1]) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar12 = *(uint *)(*plVar16 + lVar17 * 4);
  uVar15 = (ulonglong)(uVar12 & 0x1ff);
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
  pdVar1 = (double *)(lVar6 + uVar15 * 0x18);
  local_98 = *pdVar1;
  dStack_90 = pdVar1[1];
  local_88 = *(double *)(lVar6 + 0x10 + uVar15 * 0x18);
  dVar18 = __real_3ff0000000000000;
  if (*(char *)((longlong)this + 0x30) != '\0') {
    lVar6 = *(longlong *)((longlong)this + 0x10);
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar6 + 0x150));
    pcVar8 = *(code **)(lVar6 + 0x150);
    plVar16 = (longlong *)(lVar6 + 0x160);
    if (*(longlong **)(lVar6 + 0x178) != (longlong *)0x0) {
      plVar16 = *(longlong **)(lVar6 + 0x178);
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    dVar18 = (double)(*pcVar8)(uVar13,lVar6,&local_98);
  }
  pdVar1 = *(double **)((longlong)this + 0x38);
  dVar2 = *(double *)((longlong)this + 0x28);
  lVar6 = *(longlong *)this;
  dVar3 = *pdVar1;
  dVar4 = pdVar1[1];
  dVar5 = pdVar1[2];
  if ((*(longlong *)(lVar6 + 0x10) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar7 = *(undefined8 **)(lVar6 + 0x10);
  uVar13 = *(undefined8 *)((longlong)this + 0x10);
  UE::Core::Private::Function::CheckCallable((void *)*puVar7);
  pcVar8 = (code *)*puVar7;
  plVar16 = puVar7 + 2;
  if ((longlong *)puVar7[5] != (longlong *)0x0) {
    plVar16 = (longlong *)puVar7[5];
  }
  uVar14 = (**(code **)(*plVar16 + 8))();
  dVar9 = (double)(*pcVar8)(uVar14,uVar13,&local_98);
  plVar16 = *(longlong **)((longlong)this + 0x20);
  dVar9 = dVar9 * dVar18;
  uVar12 = 0;
  if (param_1 < (int)plVar16[1]) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  dVar10 = dVar9 * dVar2 * dVar3 + local_98;
  dVar3 = dVar9 * dVar2 * dVar5 + local_88;
  dVar18 = dVar9 * dVar2 * dVar4 + dStack_90;
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar6 = *plVar16;
  *(double *)(lVar6 + lVar17 * 0x18) = dVar10;
  *(double *)(lVar6 + 8 + lVar17 * 0x18) = dVar18;
  *(double *)(lVar6 + 0x10 + lVar17 * 0x18) = dVar3;
  return;
}

// ApplyStamp @ 14cce08a0

void __thiscall
UE::Geometry::FSingleNormalSculptBrushOp::ApplyStamp
          (FSingleNormalSculptBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  FSingleNormalSculptBrushOp **local_90;
  double local_88;
  double local_80;
  double local_78;
  FSingleNormalSculptBrushOp *local_70;
  FDynamicMesh3 *local_68;
  FSculptBrushStamp *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_50;
  double local_48;
  undefined1 local_40;
  double *local_38;
  
  dVar1 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.X;
  dVar2 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.Y;
  dVar4 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.Z;
  dVar3 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.W;
  dVar4 = dVar4 + dVar4;
  local_40 = *(longlong *)&param_2->StampAlphaFunc != 0;
  local_50 = param_4;
  local_38 = &local_88;
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSingleNormalSculptBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>
             ::Call;
  local_90 = &local_70;
  local_88 = dVar3 * (dVar2 + dVar2) + dVar4 * dVar1;
  local_80 = dVar4 * dVar2 - dVar3 * (dVar1 + dVar1);
  local_a8.DataPtr = (void **)0x0;
  local_a8.ArrayNum = 0;
  local_78 = __real_3ff0000000000000 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1);
  local_48 = param_2->DeltaTime * this->BrushSpeedTuning * param_2->Radius *
             param_2->Direction * param_2->Power;
  local_70 = this;
  local_68 = param_1;
  local_60 = param_2;
  local_58 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_98,
             param_4._0_1_,None,&local_a8);
  return;
}

// GetBrushTargetType @ 14ccfe190

ESculptBrushOpTargetType __thiscall
UE::Geometry::FSingleNormalSculptBrushOp::GetBrushTargetType(FSingleNormalSculptBrushOp *this)

{
  return TargetMesh;
}

// SupportsStrokeType @ 14cd2f560

bool __thiscall
UE::Geometry::FSingleNormalSculptBrushOp::SupportsStrokeType
          (FSingleNormalSculptBrushOp *this,EMeshSculptStrokeType param_1)

{
  if (((param_1 != Spacing) && (param_1 != Airbrush)) && (param_1 != Dots)) {
    return false;
  }
  return true;
}

// SupportsVariableSpacing @ 14cd2f610

bool __thiscall
UE::Geometry::FSingleNormalSculptBrushOp::SupportsVariableSpacing(FSingleNormalSculptBrushOp *this)

{
  return true;
}

// UsesAlpha @ 14cd3d6f0

bool __thiscall
UE::Geometry::FSingleNormalSculptBrushOp::UsesAlpha(FSingleNormalSculptBrushOp *this)

{
  return true;
}

