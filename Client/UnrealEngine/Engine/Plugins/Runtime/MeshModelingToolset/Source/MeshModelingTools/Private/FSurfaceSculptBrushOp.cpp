// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// FSurfaceSculptBrushOp @ 14ccba620

FSurfaceSculptBrushOp * __thiscall
FSurfaceSculptBrushOp::FSurfaceSculptBrushOp
          (FSurfaceSculptBrushOp *this,
          TUniqueFunction<bool___cdecl(int,UE::Math::TVector<double>_const_&,double,UE::Math::TVector<double>_&,UE::Math::TVector<double>_&)>
          *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  this->_padding_ = (longlong)&___7FMeshSculptBrushOp__6B_;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar12;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = (longlong)&___7FSurfaceSculptBrushOp__6B_;
  this->BrushSpeedTuning = 6.0;
  *(undefined8 *)&this->BaseMeshNearestQueryFunc = 0;
  *(undefined8 *)&(this->BaseMeshNearestQueryFunc).field_0x28 = 0;
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->BaseMeshNearestQueryFunc;
  uVar2 = *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->BaseMeshNearestQueryFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->BaseMeshNearestQueryFunc).field_0x28;
  *(undefined8 *)&this->BaseMeshNearestQueryFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->BaseMeshNearestQueryFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->BaseMeshNearestQueryFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  return this;
}

// operator() @ 14ccc9d40

void __thiscall
`FSurfaceSculptBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  double local_res8;
  uint local_res10 [2];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [112];
  
  plVar14 = *(longlong **)this;
  lVar16 = (longlong)param_1;
  uVar17 = 0;
  uVar15 = (uint)~param_1 >> 0x1f;
  uVar11 = uVar17;
  if (param_1 < (int)plVar14[1]) {
    uVar11 = uVar15;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar3 = *(longlong *)((longlong)this + 0x10);
  local_res10[0] = *(uint *)(*plVar14 + lVar16 * 4);
  lVar4 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) +
           (ulonglong)(local_res10[0] >> 9) * 8);
  pdVar1 = (double *)(lVar4 + (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
  local_d8 = *pdVar1;
  dStack_d0 = pdVar1[1];
  local_c8 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
  local_res8 = *(double *)(*(longlong *)((longlong)this + 0x18) + 0x70) * __real_4010000000000000;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x60));
  pcVar6 = *(code **)(lVar3 + 0x60);
  plVar14 = (longlong *)(lVar3 + 0x70);
  if (*(longlong **)(lVar3 + 0x88) != (longlong *)0x0) {
    plVar14 = *(longlong **)(lVar3 + 0x88);
  }
  uVar12 = (**(code **)(*plVar14 + 8))();
  cVar10 = (*pcVar6)(uVar12,local_res10,&local_d8,&local_res8,local_a8,&local_c0);
  dVar7 = local_c8;
  dVar2 = dStack_d0;
  dVar18 = local_d8;
  if (cVar10 == '\0') {
    plVar14 = *(longlong **)((longlong)this + 0x20);
    if (param_1 < (int)plVar14[1]) {
      uVar17 = uVar15;
    }
    if ((uVar17 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *plVar14;
    pdVar1 = (double *)(lVar3 + lVar16 * 0x18);
    *pdVar1 = dVar18;
    pdVar1[1] = dVar2;
    *(double *)(lVar3 + 0x10 + lVar16 * 0x18) = dVar7;
  }
  else {
    dVar18 = __real_3ff0000000000000;
    if (**(char **)((longlong)this + 0x28) != '\0') {
      lVar3 = *(longlong *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x150));
      pcVar6 = *(code **)(lVar3 + 0x150);
      plVar14 = (longlong *)(lVar3 + 0x160);
      if (*(longlong **)(lVar3 + 0x178) != (longlong *)0x0) {
        plVar14 = *(longlong **)(lVar3 + 0x178);
      }
      uVar12 = (**(code **)(*plVar14 + 8))();
      dVar18 = (double)(*pcVar6)(uVar12,lVar3,&local_d8);
    }
    lVar3 = *(longlong *)((longlong)this + 0x10);
    dVar2 = **(double **)((longlong)this + 0x30);
    if ((*(longlong *)(lVar3 + 0x10) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    uVar12 = *(undefined8 *)((longlong)this + 0x18);
    UE::Core::Private::Function::CheckCallable((void *)*puVar5);
    pcVar6 = (code *)*puVar5;
    plVar14 = puVar5 + 2;
    if ((longlong *)puVar5[5] != (longlong *)0x0) {
      plVar14 = (longlong *)puVar5[5];
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    dVar7 = (double)(*pcVar6)(uVar13,uVar12,&local_d8);
    plVar14 = *(longlong **)((longlong)this + 0x20);
    dVar7 = dVar7 * dVar18;
    if (param_1 < (int)plVar14[1]) {
      uVar17 = uVar15;
    }
    dVar18 = dVar7 * dVar2 * local_b8 + dStack_d0;
    dVar8 = dVar7 * dVar2 * local_c0 + local_d8;
    dVar2 = dVar7 * dVar2 * local_b0 + local_c8;
    if ((uVar17 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *plVar14;
    *(double *)(lVar3 + lVar16 * 0x18) = dVar8;
    *(double *)(lVar3 + 8 + lVar16 * 0x18) = dVar18;
    *(double *)(lVar3 + 0x10 + lVar16 * 0x18) = dVar2;
  }
  return;
}

// ApplyStamp @ 14cce0d50

void __thiscall
FSurfaceSculptBrushOp::ApplyStamp
          (FSurfaceSculptBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  double local_res18 [2];
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  TArray<int,TSizedDefaultAllocator<32>_> **local_50;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  FDynamicMesh3 **local_40;
  FSurfaceSculptBrushOp *local_38;
  FSculptBrushStamp *local_30;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_28;
  undefined1 *local_20;
  double *local_18;
  
  local_40 = &local_res10;
  local_res8[0] = *(longlong *)&param_2->StampAlphaFunc != 0;
  local_28 = param_4;
  local_20 = local_res8;
  local_18 = local_res18;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSurfaceSculptBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>::
             Call;
  local_50 = &local_48;
  local_68.DataPtr = (void **)0x0;
  local_res18[0] =
       param_2->DeltaTime * this->BrushSpeedTuning * param_2->Radius *
       param_2->Direction * param_2->Power;
  local_68.ArrayNum = 0;
  local_res10 = param_1;
  local_48 = param_3;
  local_38 = this;
  local_30 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_58,
             param_4._0_1_,None,&local_68);
  return;
}

// GetBrushTargetType @ 14ccfe1b0

ESculptBrushOpTargetType __thiscall
FSurfaceSculptBrushOp::GetBrushTargetType(FSurfaceSculptBrushOp *this)

{
  return TargetMesh;
}

// SupportsStrokeType @ 14cd2f5a0

bool __thiscall
FSurfaceSculptBrushOp::SupportsStrokeType(FSurfaceSculptBrushOp *this,EMeshSculptStrokeType param_1)

{
  if (((param_1 != Spacing) && (param_1 != Airbrush)) && (param_1 != Dots)) {
    return false;
  }
  return true;
}

// SupportsVariableSpacing @ 14cd2f630

bool __thiscall FSurfaceSculptBrushOp::SupportsVariableSpacing(FSurfaceSculptBrushOp *this)

{
  return true;
}

// UsesAlpha @ 14cd3d710

bool __thiscall FSurfaceSculptBrushOp::UsesAlpha(FSurfaceSculptBrushOp *this)

{
  return true;
}

