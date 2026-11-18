// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// FSingleNormalMaxSculptBrushOp @ 14ccba440

FSingleNormalMaxSculptBrushOp * __thiscall
UE::Geometry::FSingleNormalMaxSculptBrushOp::FSingleNormalMaxSculptBrushOp
          (FSingleNormalMaxSculptBrushOp *this,
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
  this->_padding_ = 0x4018000000000000;
  this->_padding_ = (longlong)&___7FSingleNormalMaxSculptBrushOp_Geometry_UE__6B_;
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

// operator() @ 14ccc8c80

void __thiscall
`UE::Geometry::FSingleNormalMaxSculptBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
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
  undefined1 local_b8 [128];
  
  plVar17 = *(longlong **)((longlong)this + 0x18);
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
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = *(longlong *)this;
  local_res10[0] = *(uint *)(*plVar17 + lVar18 * 4);
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) +
           (ulonglong)(local_res10[0] >> 9) * 8);
  pdVar1 = (double *)(lVar6 + (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
  local_e8 = *pdVar1;
  dStack_e0 = pdVar1[1];
  local_d8 = *(double *)(lVar6 + 0x10 + (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
  local_res8 = *(double *)(*(longlong *)((longlong)this + 0x10) + 0x70) * __real_4010000000000000;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar5 + 0x60));
  pcVar8 = *(code **)(lVar5 + 0x60);
  plVar17 = (longlong *)(lVar5 + 0x70);
  if (*(longlong **)(lVar5 + 0x88) != (longlong *)0x0) {
    plVar17 = *(longlong **)(lVar5 + 0x88);
  }
  uVar15 = (**(code **)(*plVar17 + 8))();
  cVar12 = (*pcVar8)(uVar15,local_res10,&local_e8,&local_res8,&local_d0,local_b8);
  dVar3 = local_d8;
  dVar2 = dStack_e0;
  dVar20 = local_e8;
  dVar9 = __real_3ff0000000000000;
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
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar5 = *plVar17;
    pdVar1 = (double *)(lVar5 + lVar18 * 0x18);
    *pdVar1 = dVar20;
    pdVar1[1] = dVar2;
    *(double *)(lVar5 + 0x10 + lVar18 * 0x18) = dVar3;
  }
  else {
    dVar20 = __real_3ff0000000000000;
    if (*(char *)((longlong)this + 0x38) != '\0') {
      lVar5 = *(longlong *)((longlong)this + 0x10);
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar5 + 0x150));
      pcVar8 = *(code **)(lVar5 + 0x150);
      plVar17 = (longlong *)(lVar5 + 0x160);
      if (*(longlong **)(lVar5 + 0x178) != (longlong *)0x0) {
        plVar17 = *(longlong **)(lVar5 + 0x178);
      }
      uVar15 = (**(code **)(*plVar17 + 8))();
      dVar20 = (double)(*pcVar8)(uVar15,lVar5,&local_e8);
    }
    pdVar1 = *(double **)((longlong)this + 0x40);
    dVar2 = *(double *)((longlong)this + 0x28);
    lVar5 = *(longlong *)this;
    dVar3 = *pdVar1;
    dVar21 = pdVar1[1];
    dVar23 = pdVar1[2];
    if ((*(longlong *)(lVar5 + 0x10) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar7 = *(undefined8 **)(lVar5 + 0x10);
    uVar15 = *(undefined8 *)((longlong)this + 0x10);
    UE::Core::Private::Function::CheckCallable((void *)*puVar7);
    pcVar8 = (code *)*puVar7;
    plVar17 = puVar7 + 2;
    if ((longlong *)puVar7[5] != (longlong *)0x0) {
      plVar17 = (longlong *)puVar7[5];
    }
    uVar16 = (**(code **)(*plVar17 + 8))();
    dVar22 = (double)(*pcVar8)(uVar16,uVar15,&local_e8);
    dVar4 = *(double *)((longlong)this + 0x30);
    dVar22 = dVar22 * dVar20;
    dVar10 = dVar22 * dVar2 * dVar3 + local_e8;
    dVar3 = dVar22 * dVar2 * dVar21 + dStack_e0;
    dVar20 = dVar22 * dVar2 * dVar23 + local_d8;
    dVar22 = dVar10 - local_d0;
    dVar23 = dVar3 - local_c8;
    dVar2 = dVar20 - local_c0;
    dVar21 = dVar23 * dVar23 + dVar22 * dVar22 + dVar2 * dVar2;
    if (dVar4 * dVar4 < dVar21) {
      dVar10 = 0.0;
      dVar21 = SQRT(dVar21);
      if (dVar21 <= 0.0) {
        dVar9 = 0.0;
        dVar23 = 0.0;
      }
      else {
        dVar9 = dVar9 / dVar21;
        dVar10 = dVar9 * dVar22;
        dVar23 = dVar9 * dVar23;
        dVar9 = dVar9 * dVar2;
      }
      dVar20 = dVar4 * dVar9 + local_c0;
      dVar3 = dVar4 * dVar23 + local_c8;
      dVar10 = dVar4 * dVar10 + local_d0;
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
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar5 = *plVar17;
    *(double *)(lVar5 + lVar18 * 0x18) = dVar10;
    *(double *)(lVar5 + 8 + lVar18 * 0x18) = dVar3;
    *(double *)(lVar5 + 0x10 + lVar18 * 0x18) = dVar20;
  }
  return;
}

// ApplyStamp @ 14cce06b0

void __thiscall
UE::Geometry::FSingleNormalMaxSculptBrushOp::ApplyStamp
          (FSingleNormalMaxSculptBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  USculptMaxBrushOpProps *pUVar9;
  double dVar10;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FSingleNormalMaxSculptBrushOp **local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  FSingleNormalMaxSculptBrushOp *local_90;
  FDynamicMesh3 *local_88;
  FSculptBrushStamp *local_80;
  TArray<int,TSizedDefaultAllocator<32>_> *local_78;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  double *local_50;
  
  dVar1 = param_2->Direction;
  dVar2 = param_2->Power;
  dVar3 = param_2->DeltaTime;
  dVar4 = (double)this->_padding_;
  dVar5 = param_2->Radius;
  pUVar9 = FMeshSculptBrushOp::GetPropertySetAs<USculptMaxBrushOpProps>((FMeshSculptBrushOp *)this);
  if (pUVar9->bUseFixedHeight == false) {
    local_60 = (double)pUVar9->MaxHeight * param_2->Radius;
  }
  else {
    local_60 = (double)pUVar9->FixedHeight;
  }
  dVar6 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.X;
  dVar7 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.Y;
  dVar10 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.Z;
  dVar8 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.W;
  dVar10 = dVar10 + dVar10;
  local_70 = param_4;
  local_58 = *(longlong *)&param_2->StampAlphaFunc != 0;
  local_50 = &local_a8;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSingleNormalMaxSculptBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = &local_90;
  local_a8 = dVar8 * (dVar7 + dVar7) + dVar10 * dVar6;
  local_c8.DataPtr = (void **)0x0;
  local_c8.ArrayNum = 0;
  local_a0 = dVar10 * dVar7 - dVar8 * (dVar6 + dVar6);
  local_98 = __real_3ff0000000000000 - ((dVar7 + dVar7) * dVar7 + (dVar6 + dVar6) * dVar6);
  local_90 = this;
  local_88 = param_1;
  local_80 = param_2;
  local_78 = param_3;
  local_68 = dVar3 * dVar4 * dVar5 * dVar1 * dVar2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,
             param_4._0_1_,None,&local_c8);
  return;
}

