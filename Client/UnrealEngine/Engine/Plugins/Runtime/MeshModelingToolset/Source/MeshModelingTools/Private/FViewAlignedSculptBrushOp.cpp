// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// FViewAlignedSculptBrushOp @ 14ccba940

FViewAlignedSculptBrushOp * __thiscall
FViewAlignedSculptBrushOp::FViewAlignedSculptBrushOp
          (FViewAlignedSculptBrushOp *this,
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
  this->_padding_ = (longlong)&___7FViewAlignedSculptBrushOp__6B_;
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

// operator() @ 14ccca0c0

void __thiscall
`FViewAlignedSculptBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  double dVar20;
  double local_res8;
  uint local_res10 [2];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [112];
  
  plVar16 = *(longlong **)this;
  lVar18 = (longlong)param_1;
  uVar19 = 0;
  uVar17 = (uint)~param_1 >> 0x1f;
  uVar13 = uVar19;
  if (param_1 < (int)plVar16[1]) {
    uVar13 = uVar17;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar6 = *(longlong *)((longlong)this + 0x10);
  local_res10[0] = *(uint *)(*plVar16 + lVar18 * 4);
  lVar7 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) +
           (ulonglong)(local_res10[0] >> 9) * 8);
  pdVar1 = (double *)(lVar7 + (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
  local_d8 = *pdVar1;
  dStack_d0 = pdVar1[1];
  local_c8 = *(double *)(lVar7 + 0x10 + (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
  local_res8 = *(double *)(*(longlong *)((longlong)this + 0x18) + 0x70) * __real_4010000000000000;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar6 + 0x60));
  pcVar9 = *(code **)(lVar6 + 0x60);
  plVar16 = (longlong *)(lVar6 + 0x70);
  if (*(longlong **)(lVar6 + 0x88) != (longlong *)0x0) {
    plVar16 = *(longlong **)(lVar6 + 0x88);
  }
  uVar14 = (**(code **)(*plVar16 + 8))();
  cVar12 = (*pcVar9)(uVar14,local_res10,&local_d8,&local_res8,local_a8,local_c0);
  dVar3 = local_c8;
  dVar2 = dStack_d0;
  dVar20 = local_d8;
  if (cVar12 == '\0') {
    plVar16 = *(longlong **)((longlong)this + 0x20);
    if (param_1 < (int)plVar16[1]) {
      uVar19 = uVar17;
    }
    if ((uVar19 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar6 = *plVar16;
    pdVar1 = (double *)(lVar6 + lVar18 * 0x18);
    *pdVar1 = dVar20;
    pdVar1[1] = dVar2;
    *(double *)(lVar6 + 0x10 + lVar18 * 0x18) = dVar3;
  }
  else {
    dVar20 = __real_3ff0000000000000;
    if (**(char **)((longlong)this + 0x28) != '\0') {
      lVar6 = *(longlong *)((longlong)this + 0x18);
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar6 + 0x150));
      pcVar9 = *(code **)(lVar6 + 0x150);
      plVar16 = (longlong *)(lVar6 + 0x160);
      if (*(longlong **)(lVar6 + 0x178) != (longlong *)0x0) {
        plVar16 = *(longlong **)(lVar6 + 0x178);
      }
      uVar14 = (**(code **)(*plVar16 + 8))();
      dVar20 = (double)(*pcVar9)(uVar14,lVar6,&local_d8);
    }
    pdVar1 = *(double **)((longlong)this + 0x38);
    lVar6 = *(longlong *)((longlong)this + 0x10);
    dVar2 = **(double **)((longlong)this + 0x30);
    dVar3 = *pdVar1;
    dVar4 = pdVar1[1];
    dVar5 = pdVar1[2];
    if ((*(longlong *)(lVar6 + 0x10) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    puVar8 = *(undefined8 **)(lVar6 + 0x10);
    uVar14 = *(undefined8 *)((longlong)this + 0x18);
    UE::Core::Private::Function::CheckCallable((void *)*puVar8);
    pcVar9 = (code *)*puVar8;
    plVar16 = puVar8 + 2;
    if ((longlong *)puVar8[5] != (longlong *)0x0) {
      plVar16 = (longlong *)puVar8[5];
    }
    uVar15 = (**(code **)(*plVar16 + 8))();
    dVar10 = (double)(*pcVar9)(uVar15,uVar14,&local_d8);
    plVar16 = *(longlong **)((longlong)this + 0x20);
    dVar10 = dVar10 * dVar20;
    if (param_1 < (int)plVar16[1]) {
      uVar19 = uVar17;
    }
    dVar4 = dVar10 * dVar2 * dVar4 + dStack_d0;
    dVar3 = dVar10 * dVar2 * dVar3 + local_d8;
    dVar20 = dVar10 * dVar2 * dVar5 + local_c8;
    if ((uVar19 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar6 = *plVar16;
    *(double *)(lVar6 + lVar18 * 0x18) = dVar3;
    *(double *)(lVar6 + 8 + lVar18 * 0x18) = dVar4;
    *(double *)(lVar6 + 0x10 + lVar18 * 0x18) = dVar20;
  }
  return;
}

// ApplyStamp @ 14cce1160

void __thiscall
FViewAlignedSculptBrushOp::ApplyStamp
          (FViewAlignedSculptBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  double local_res18 [2];
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  TArray<int,TSizedDefaultAllocator<32>_> **local_90;
  double local_88;
  double local_80;
  double local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  FDynamicMesh3 **local_68;
  FViewAlignedSculptBrushOp *local_60;
  FSculptBrushStamp *local_58;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_50;
  undefined1 *local_48;
  double *local_40;
  double *local_38;
  
  dVar1 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.X;
  dVar2 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.Y;
  dVar4 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.Z;
  dVar3 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.W;
  dVar4 = dVar4 + dVar4;
  local_res8[0] = *(longlong *)&param_2->StampAlphaFunc != 0;
  local_68 = &local_res10;
  local_50 = param_4;
  local_48 = local_res8;
  local_40 = local_res18;
  local_38 = &local_88;
  local_88 = dVar3 * (dVar2 + dVar2) + dVar4 * dVar1;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FViewAlignedSculptBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>
             ::Call;
  local_90 = &local_70;
  local_80 = dVar4 * dVar2 - dVar3 * (dVar1 + dVar1);
  local_a8.DataPtr = (void **)0x0;
  local_a8.ArrayNum = 0;
  local_78 = __real_3ff0000000000000 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1);
  local_res18[0] =
       param_2->DeltaTime * this->BrushSpeedTuning * param_2->Radius *
       param_2->Direction * param_2->Power;
  local_res10 = param_1;
  local_70 = param_3;
  local_60 = this;
  local_58 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_98,
             param_4._0_1_,None,&local_a8);
  return;
}

// GetAlignStampToView @ 14ccfd8b0

bool __thiscall FViewAlignedSculptBrushOp::GetAlignStampToView(FViewAlignedSculptBrushOp *this)

{
  return true;
}

// GetBrushTargetType @ 14ccfe1d0

ESculptBrushOpTargetType __thiscall
FViewAlignedSculptBrushOp::GetBrushTargetType(FViewAlignedSculptBrushOp *this)

{
  return TargetMesh;
}

// SupportsStrokeType @ 14cd2f5e0

bool __thiscall
FViewAlignedSculptBrushOp::SupportsStrokeType
          (FViewAlignedSculptBrushOp *this,EMeshSculptStrokeType param_1)

{
  if (((param_1 != Spacing) && (param_1 != Airbrush)) && (param_1 != Dots)) {
    return false;
  }
  return true;
}

// SupportsVariableSpacing @ 14cd2f650

bool __thiscall FViewAlignedSculptBrushOp::SupportsVariableSpacing(FViewAlignedSculptBrushOp *this)

{
  return true;
}

// UsesAlpha @ 14cd3d720

bool __thiscall FViewAlignedSculptBrushOp::UsesAlpha(FViewAlignedSculptBrushOp *this)

{
  return true;
}

