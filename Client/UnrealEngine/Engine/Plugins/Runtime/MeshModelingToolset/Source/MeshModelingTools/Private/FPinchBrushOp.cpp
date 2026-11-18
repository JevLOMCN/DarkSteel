// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// operator() @ 14ccc84d0

void __thiscall `FPinchBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  
  plVar3 = *(longlong **)this;
  lVar15 = (longlong)param_1;
  uVar14 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar23 = 0.0;
  uVar14 = *(uint *)(*plVar3 + lVar15 * 4);
  uVar16 = (ulonglong)(uVar14 & 0x1ff);
  lVar4 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar14 >> 9) * 8
           );
  pdVar1 = (double *)(lVar4 + uVar16 * 0x18);
  dVar11 = *pdVar1;
  dVar12 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + uVar16 * 0x18);
  pdVar1 = *(double **)((longlong)this + 0x10);
  dVar8 = *pdVar1 - dVar11;
  dVar9 = pdVar1[1] - dVar12;
  dVar10 = pdVar1[2] - dVar2;
  auVar18._0_8_ = dVar8 * dVar8;
  auVar18._8_8_ = 0;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar9 * dVar9 + auVar18._0_8_ + dVar10 * dVar10;
  auVar19 = sqrtpd(auVar18,auVar19);
  if (auVar19._0_8_ <= 0.0) {
    dVar10 = 0.0;
    dVar9 = 0.0;
    dVar24 = 0.0;
  }
  else {
    dVar24 = __real_3ff0000000000000 / auVar19._0_8_;
    dVar10 = dVar24 * dVar10;
    dVar9 = dVar24 * dVar9;
    dVar24 = dVar24 * dVar8;
  }
  pdVar1 = *(double **)((longlong)this + 0x18);
  auVar22._0_8_ = (*pdVar1 - dVar11) * (*pdVar1 - dVar11);
  auVar22._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (pdVar1[1] - dVar12) * (pdVar1[1] - dVar12) + auVar22._0_8_ +
                 (pdVar1[2] - dVar2) * (pdVar1[2] - dVar2);
  auVar19 = sqrtpd(auVar22,auVar6);
  dVar8 = __real_3fefff2e48e8a71e -
          auVar19._0_8_ *
          (__real_3ff0000000000000 / *(double *)(*(longlong *)((longlong)this + 0x20) + 0x70));
  if (0.0 <= dVar8) {
    if (__real_3ff0000000000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000;
    }
  }
  else {
    dVar8 = 0.0;
  }
  dVar17 = *(double *)(*(longlong *)((longlong)this + 0x20) + 0x78);
  if (0.0 <= dVar17) {
    if (__real_3ff0000000000000 <= dVar17) {
      dVar17 = __real_3ff0000000000000;
    }
  }
  else {
    dVar17 = 0.0;
  }
  dVar8 = dVar8 * dVar17 * dVar8 * dVar8 + (__real_3ff0000000000000 - dVar17) * dVar8;
  if (((**(char **)((longlong)this + 0x28) != '\0') && (**(char **)((longlong)this + 0x30) != '\0'))
     && (dVar8 < __real_3fe6666660000000)) {
    auVar20._0_8_ = dVar24 * dVar24;
    auVar20._8_8_ = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar9 * dVar9 + auVar20._0_8_ + dVar10 * dVar10;
    auVar19 = sqrtpd(auVar20,auVar7);
    if (auVar19._0_8_ <= 0.0) {
      dVar17 = 0.0;
      dVar21 = 0.0;
    }
    else {
      dVar23 = __real_3ff0000000000000 / auVar19._0_8_;
      dVar17 = dVar23 * dVar9;
      dVar21 = dVar23 * dVar10;
      dVar23 = dVar23 * dVar24;
    }
    pdVar1 = *(double **)((longlong)this + 0x38);
    dVar23 = dVar17 * pdVar1[1] + dVar23 * *pdVar1 + dVar21 * pdVar1[2];
    dVar8 = dVar8 * (__real_3ff0000000000000 -
                    (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
  }
  plVar3 = *(longlong **)((longlong)this + 0x48);
  dVar8 = dVar8 * **(double **)((longlong)this + 0x40);
  uVar14 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *plVar3;
  *(double *)(lVar4 + lVar15 * 0x18) = dVar8 * dVar24 + dVar11;
  *(double *)(lVar4 + 8 + lVar15 * 0x18) = dVar8 * dVar9 + dVar12;
  *(double *)(lVar4 + 0x10 + lVar15 * 0x18) = dVar8 * dVar10 + dVar2;
  return;
}

// ApplyStamp @ 14ccdf690

void __thiscall
FPinchBrushOp::ApplyStamp
          (FPinchBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  undefined1 local_res18 [8];
  double local_res20;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  TArrayView<std::nullptr_t,int> local_158;
  code *local_148;
  TArray<int,TSizedDefaultAllocator<32>_> **local_140;
  double local_138;
  double local_130;
  double local_128;
  TArray<int,TSizedDefaultAllocator<32>_> *local_120;
  FDynamicMesh3 **local_118;
  double *local_110;
  double *local_108;
  FSculptBrushStamp *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  double *local_e8;
  double *local_e0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_d8;
  
  dVar1 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.X;
  dVar14 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.Z;
  dVar14 = dVar14 + dVar14;
  dVar15 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.Y;
  dVar2 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.W;
  local_160 = (param_2->LocalFrame).Origin.field0_0x0._s_0.Z * __real_3fe8000000000000 +
              (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Z * __real_3fd0000000000000;
  dStack_168 = (param_2->LocalFrame).Origin.field0_0x0._s_0.Y * __real_3fe8000000000000 +
               (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Y * __real_3fd0000000000000;
  local_170 = (this->LastSmoothBrushPosLocal).field0_0x0._s_0.X * __real_3fd0000000000000 +
              (param_2->LocalFrame).Origin.field0_0x0._s_0.X * __real_3fe8000000000000;
  dVar7 = (__real_3ff0000000000000 - (dVar1 * (dVar1 + dVar1) + dVar15 * (dVar15 + dVar15))) *
          __real_3fe8000000000000 +
          (this->LastSmoothBrushNormalLocal).field0_0x0._s_0.Z * __real_3fd0000000000000;
  dVar6 = (dVar15 * dVar14 - dVar2 * (dVar1 + dVar1)) * __real_3fe8000000000000 +
          (this->LastSmoothBrushNormalLocal).field0_0x0._s_0.Y * __real_3fd0000000000000;
  dVar1 = (dVar2 * (dVar15 + dVar15) + dVar1 * dVar14) * __real_3fe8000000000000 +
          (this->LastSmoothBrushNormalLocal).field0_0x0._s_0.X * __real_3fd0000000000000;
  auVar11._0_8_ = dVar6 * dVar6;
  auVar11._8_8_ = 0;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar1 * dVar1 + auVar11._0_8_ + dVar7 * dVar7;
  auVar12 = sqrtpd(auVar11,auVar12);
  if (auVar12._0_8_ <= 0.0) {
    dVar14 = 0.0;
    dVar6 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar14 = __real_3ff0000000000000 / auVar12._0_8_;
    dVar1 = dVar1 * dVar14;
    dVar6 = dVar14 * dVar6;
    dVar14 = dVar14 * dVar7;
  }
  local_180 = dStack_168 - (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Y;
  local_188 = local_170 - (this->LastSmoothBrushPosLocal).field0_0x0._s_0.X;
  dVar15 = local_160 - (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Z;
  auVar13._0_8_ = local_180 * local_180;
  auVar13._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_188 * local_188 + auVar13._0_8_ + dVar15 * dVar15;
  auVar12 = sqrtpd(auVar13,auVar5);
  dStack_178 = auVar12._0_8_;
  local_res18[0] = __real_3e45798ee2308c3a < dStack_178;
  if (dStack_178 <= 0.0) {
    local_188 = 0.0;
    local_180 = 0.0;
    dStack_178 = 0.0;
  }
  else {
    dStack_178 = __real_3ff0000000000000 / dStack_178;
    local_188 = dStack_178 * local_188;
    local_180 = dStack_178 * local_180;
    dStack_178 = dStack_178 * dVar15;
  }
  dVar15 = param_2->Radius * param_2->Depth;
  local_138 = local_170 - dVar15 * dVar1;
  local_130 = dStack_168 - dVar15 * dVar6;
  local_128 = local_160 - dVar15 * dVar14;
  local_res20 = param_2->DeltaTime * this->BrushSpeedTuning * param_2->Power *
                param_2->Radius * param_2->Direction;
  (this->LastSmoothBrushPosLocal).field0_0x0._s_0.X = local_170;
  (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Y = dStack_168;
  (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Z = local_160;
  local_res10 = param_1;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5139374200154226864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                       ,0xb0,"PropertySet.IsValid()");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar9 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_UPinchBrushOpProps_NoRegister();
    iVar3 = (int)pUVar10->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar10->_padding_)) goto LAB_14ccdfa18;
  }
  pUVar9 = (UObject *)0x0;
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14ccdfa18:
  local_res8[0] = pUVar9[4].field_0x24;
  local_118 = &local_res10;
  local_110 = &local_138;
  local_108 = &local_170;
  local_f8 = local_res8;
  local_f0 = local_res18;
  local_e8 = &local_188;
  local_e0 = &local_res20;
  local_d8 = param_4;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPinchBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>::Call;
  local_140 = &local_120;
  local_158.DataPtr = (void **)0x0;
  local_158.ArrayNum = 0;
  local_120 = param_3;
  local_100 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_148,
             param_4._0_1_,None,&local_158);
  return;
}

// BeginStroke @ 14cce6af0

void __thiscall
FPinchBrushOp::BeginStroke
          (FPinchBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_2->LocalFrame).Origin.field0_0x0._s_0.Y;
  (this->LastSmoothBrushPosLocal).field0_0x0._s_0.X = (param_2->LocalFrame).Origin.field0_0x0._s_0.X
  ;
  (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Y = dVar1;
  (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Z = (param_2->LocalFrame).Origin.field0_0x0._s_0.Z
  ;
  dVar1 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.Y;
  dVar2 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.X;
  dVar4 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.Z;
  dVar3 = (param_2->LocalFrame).Rotation.field0_0x0._s_0.W;
  dVar4 = dVar4 + dVar4;
  (this->LastSmoothBrushNormalLocal).field0_0x0._s_0.X = dVar3 * (dVar1 + dVar1) + dVar4 * dVar2;
  (this->LastSmoothBrushNormalLocal).field0_0x0._s_0.Y = dVar4 * dVar1 - dVar3 * (dVar2 + dVar2);
  (this->LastSmoothBrushNormalLocal).field0_0x0._s_0.Z =
       __real_3ff0000000000000 - ((dVar1 + dVar1) * dVar1 + (dVar2 + dVar2) * dVar2);
  return;
}

// GetBrushTargetType @ 14ccfe160

ESculptBrushOpTargetType __thiscall FPinchBrushOp::GetBrushTargetType(FPinchBrushOp *this)

{
  return TargetMesh;
}

