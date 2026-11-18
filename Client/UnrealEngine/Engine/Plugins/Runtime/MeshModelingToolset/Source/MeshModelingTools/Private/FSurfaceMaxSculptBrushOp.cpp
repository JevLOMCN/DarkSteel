// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// FSurfaceMaxSculptBrushOp @ 14ccba530

FSurfaceMaxSculptBrushOp * __thiscall
FSurfaceMaxSculptBrushOp::FSurfaceMaxSculptBrushOp
          (FSurfaceMaxSculptBrushOp *this,
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
  this->_padding_ = (longlong)&___7FSurfaceMaxSculptBrushOp__6B_;
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

// operator() @ 14ccc98f0

void __thiscall
`FSurfaceMaxSculptBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double local_res8;
  uint local_res10 [2];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  
  plVar17 = *(longlong **)this;
  lVar18 = (longlong)param_1;
  uVar19 = (uint)~param_1 >> 0x1f;
  uVar13 = 0;
  uVar14 = uVar13;
  if (param_1 < (int)plVar17[1]) {
    uVar14 = uVar19;
  }
  if ((uVar14 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar3 = *(longlong *)((longlong)this + 0x10);
  local_res10[0] = *(uint *)(*plVar17 + lVar18 * 4);
  lVar4 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) +
           (ulonglong)(local_res10[0] >> 9) * 8);
  pdVar1 = (double *)(lVar4 + (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
  local_e8 = *pdVar1;
  dStack_e0 = pdVar1[1];
  local_d8 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
  local_res8 = *(double *)(*(longlong *)((longlong)this + 0x18) + 0x70) * __real_4010000000000000;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x60));
  pcVar6 = *(code **)(lVar3 + 0x60);
  plVar17 = (longlong *)(lVar3 + 0x70);
  if (*(longlong **)(lVar3 + 0x88) != (longlong *)0x0) {
    plVar17 = *(longlong **)(lVar3 + 0x88);
  }
  uVar15 = (**(code **)(*plVar17 + 8))();
  cVar12 = (*pcVar6)(uVar15,local_res10,&local_e8,&local_res8,&local_d0,&local_b8);
  dVar8 = local_d8;
  dVar2 = dStack_e0;
  dVar20 = local_e8;
  dVar7 = __real_3ff0000000000000;
  if (cVar12 == '\0') {
    plVar17 = *(longlong **)((longlong)this + 0x20);
    if (param_1 < (int)plVar17[1]) {
      uVar13 = uVar19;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *plVar17;
    pdVar1 = (double *)(lVar3 + lVar18 * 0x18);
    *pdVar1 = dVar20;
    pdVar1[1] = dVar2;
    *(double *)(lVar3 + 0x10 + lVar18 * 0x18) = dVar8;
  }
  else {
    dVar20 = __real_3ff0000000000000;
    if (**(char **)((longlong)this + 0x28) != '\0') {
      lVar3 = *(longlong *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar3 + 0x150));
      pcVar6 = *(code **)(lVar3 + 0x150);
      plVar17 = (longlong *)(lVar3 + 0x160);
      if (*(longlong **)(lVar3 + 0x178) != (longlong *)0x0) {
        plVar17 = *(longlong **)(lVar3 + 0x178);
      }
      uVar15 = (**(code **)(*plVar17 + 8))();
      dVar20 = (double)(*pcVar6)(uVar15,lVar3,&local_e8);
    }
    lVar3 = *(longlong *)((longlong)this + 0x10);
    dVar2 = **(double **)((longlong)this + 0x30);
    if ((*(longlong *)(lVar3 + 0x10) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    uVar15 = *(undefined8 *)((longlong)this + 0x18);
    UE::Core::Private::Function::CheckCallable((void *)*puVar5);
    pcVar6 = (code *)*puVar5;
    plVar17 = puVar5 + 2;
    if ((longlong *)puVar5[5] != (longlong *)0x0) {
      plVar17 = (longlong *)puVar5[5];
    }
    uVar16 = (**(code **)(*plVar17 + 8))();
    dVar8 = (double)(*pcVar6)(uVar16,uVar15,&local_e8);
    dVar8 = dVar8 * dVar20;
    dVar20 = **(double **)((longlong)this + 0x38);
    dVar10 = dVar8 * dVar2 * local_b8 + local_e8;
    dVar9 = dVar8 * dVar2 * local_b0 + dStack_e0;
    dVar2 = dVar8 * dVar2 * local_a8 + local_d8;
    dVar22 = dVar10 - local_d0;
    dVar23 = dVar9 - local_c8;
    dVar8 = dVar2 - local_c0;
    dVar21 = dVar23 * dVar23 + dVar22 * dVar22 + dVar8 * dVar8;
    if (dVar20 * dVar20 < dVar21) {
      dVar10 = 0.0;
      dVar21 = SQRT(dVar21);
      if (dVar21 <= 0.0) {
        dVar7 = 0.0;
        dVar23 = 0.0;
      }
      else {
        dVar7 = dVar7 / dVar21;
        dVar10 = dVar7 * dVar22;
        dVar23 = dVar7 * dVar23;
        dVar7 = dVar7 * dVar8;
      }
      dVar2 = dVar20 * dVar7 + local_c0;
      dVar9 = dVar20 * dVar23 + local_c8;
      dVar10 = dVar20 * dVar10 + local_d0;
    }
    plVar17 = *(longlong **)((longlong)this + 0x20);
    if (param_1 < (int)plVar17[1]) {
      uVar13 = uVar19;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *plVar17;
    *(double *)(lVar3 + lVar18 * 0x18) = dVar10;
    *(double *)(lVar3 + 8 + lVar18 * 0x18) = dVar9;
    *(double *)(lVar3 + 0x10 + lVar18 * 0x18) = dVar2;
  }
  return;
}

// ApplyStamp @ 14cce0bf0

void __thiscall
FSurfaceMaxSculptBrushOp::ApplyStamp
          (FSurfaceMaxSculptBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  USculptMaxBrushOpProps *pUVar1;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  double local_res18;
  double local_res20;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> **local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  FDynamicMesh3 **local_50;
  FSurfaceMaxSculptBrushOp *local_48;
  FSculptBrushStamp *local_40;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_38;
  undefined1 *local_30;
  double *local_28;
  double *local_20;
  
  local_res18 = param_2->DeltaTime * this->BrushSpeedTuning * param_2->Radius *
                param_2->Direction * param_2->Power;
  local_res10 = param_1;
  pUVar1 = FMeshSculptBrushOp::GetPropertySetAs<USculptMaxBrushOpProps>((FMeshSculptBrushOp *)this);
  if (pUVar1->bUseFixedHeight == false) {
    local_res20 = (double)pUVar1->MaxHeight * param_2->Radius;
  }
  else {
    local_res20 = (double)pUVar1->FixedHeight;
  }
  local_res8[0] = *(longlong *)&param_2->StampAlphaFunc != 0;
  local_50 = &local_res10;
  local_38 = param_4;
  local_30 = local_res8;
  local_78.DataPtr = (void **)0x0;
  local_28 = &local_res18;
  local_20 = &local_res20;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSurfaceMaxSculptBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>::
             Call;
  local_60 = &local_58;
  local_78.ArrayNum = 0;
  local_58 = param_3;
  local_48 = this;
  local_40 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_68,
             param_4._0_1_,None,&local_78);
  return;
}

// GetBrushTargetType @ 14ccfe1a0

ESculptBrushOpTargetType __thiscall
FSurfaceMaxSculptBrushOp::GetBrushTargetType(FSurfaceMaxSculptBrushOp *this)

{
  return TargetMesh;
}

// SupportsStrokeType @ 14cd2f580

bool __thiscall
FSurfaceMaxSculptBrushOp::SupportsStrokeType
          (FSurfaceMaxSculptBrushOp *this,EMeshSculptStrokeType param_1)

{
  if (((param_1 != Spacing) && (param_1 != Airbrush)) && (param_1 != Dots)) {
    return false;
  }
  return true;
}

// SupportsVariableSpacing @ 14cd2f620

bool __thiscall FSurfaceMaxSculptBrushOp::SupportsVariableSpacing(FSurfaceMaxSculptBrushOp *this)

{
  return true;
}

// UsesAlpha @ 14cd3d700

bool __thiscall FSurfaceMaxSculptBrushOp::UsesAlpha(FSurfaceMaxSculptBrushOp *this)

{
  return true;
}

