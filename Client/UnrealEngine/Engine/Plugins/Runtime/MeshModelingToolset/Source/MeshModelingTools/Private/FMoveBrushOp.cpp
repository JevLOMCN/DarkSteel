// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// operator() @ 14ccc82e0

void __thiscall `FMoveBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
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
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  double local_78;
  double dStack_70;
  double local_68;
  
  plVar12 = *(longlong **)this;
  lVar14 = (longlong)param_1;
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
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar10 = *(uint *)(*plVar12 + lVar14 * 4);
  uVar13 = (ulonglong)(uVar10 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar10 >> 9) * 8
           );
  pdVar1 = (double *)(lVar3 + uVar13 * 0x18);
  local_78 = *pdVar1;
  dStack_70 = pdVar1[1];
  local_68 = *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
  if (*(longlong *)(lVar2 + 0x10) == 0) {
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
  puVar4 = *(undefined8 **)(lVar2 + 0x10);
  uVar5 = *(undefined8 *)((longlong)this + 0x18);
  UE::Core::Private::Function::CheckCallable((void *)*puVar4);
  pcVar6 = (code *)*puVar4;
  plVar12 = puVar4 + 2;
  if ((longlong *)puVar4[5] != (longlong *)0x0) {
    plVar12 = (longlong *)puVar4[5];
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  dVar15 = (double)(*pcVar6)(uVar11,uVar5,&local_78);
  pdVar1 = *(double **)((longlong)this + 0x20);
  plVar12 = *(longlong **)((longlong)this + 0x28);
  dVar7 = dVar15 * *pdVar1 + local_78;
  dVar8 = dVar15 * pdVar1[1] + dStack_70;
  dVar15 = dVar15 * pdVar1[2] + local_68;
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
  lVar2 = *plVar12;
  *(double *)(lVar2 + lVar14 * 0x18) = dVar7;
  *(double *)(lVar2 + 8 + lVar14 * 0x18) = dVar8;
  *(double *)(lVar2 + 0x10 + lVar14 * 0x18) = dVar15;
  return;
}

// ApplyStamp @ 14ccdf350

void __thiscall
FMoveBrushOp::ApplyStamp
          (FMoveBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  FDynamicMesh3 *local_res10;
  double local_108;
  double dStack_100;
  double local_f8;
  TVector<double>_u_0 local_f0;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8;
  TArray<int,TSizedDefaultAllocator<32>_> **local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  FDynamicMesh3 **local_b0;
  FMoveBrushOp *local_a8;
  FSculptBrushStamp *local_a0;
  double *local_98;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_90;
  TVector<double>_u_0 local_88;
  TVector<double> local_70 [3];
  
  local_108 = (param_2->LocalFrame).Origin.field0_0x0._s_0.X -
              (param_2->PrevLocalFrame).Origin.field0_0x0._s_0.X;
  dStack_100 = (param_2->LocalFrame).Origin.field0_0x0._s_0.Y -
               (param_2->PrevLocalFrame).Origin.field0_0x0._s_0.Y;
  local_f8 = (param_2->LocalFrame).Origin.field0_0x0._s_0.Z -
             (param_2->PrevLocalFrame).Origin.field0_0x0._s_0.Z;
  local_res10 = param_1;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x8);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5139374200154226864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                       ,0xb0,"PropertySet.IsValid()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_UMoveBrushOpProps_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) goto LAB_14ccdf454;
  }
  pUVar7 = (UObject *)0x0;
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ccdf454:
  if (((pUVar7[4].field_0x24 == '\0') || (pUVar7[4].field_0x25 == '\0')) ||
     (pUVar7[4].field_0x26 == '\0')) {
    auVar12._0_8_ =
         (param_2->WorldFrame).Origin.field0_0x0._s_0.X -
         (param_2->PrevWorldFrame).Origin.field0_0x0._s_0.X;
    auVar12._8_8_ = 0;
    dVar5 = (param_2->WorldFrame).Origin.field0_0x0._s_0.Y -
            (param_2->PrevWorldFrame).Origin.field0_0x0._s_0.Y;
    dVar9 = (param_2->WorldFrame).Origin.field0_0x0._s_0.Z -
            (param_2->PrevWorldFrame).Origin.field0_0x0._s_0.Z;
    auVar10._0_8_ = auVar12._0_8_ * auVar12._0_8_;
    auVar10._8_8_ = 0;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar5 * dVar5 + auVar10._0_8_ + dVar9 * dVar9;
    auVar11 = sqrtpd(auVar10,auVar11);
    if (auVar11._0_8_ <= 0.0) {
      dVar4 = 0.0;
      dVar5 = 0.0;
      dVar13 = 0.0;
    }
    else {
      dVar13 = __real_3ff0000000000000 / auVar11._0_8_;
      dVar4 = dVar13 * auVar12._0_8_;
      dVar5 = dVar13 * dVar5;
      dVar13 = dVar13 * dVar9;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dStack_100 * dStack_100 + local_108 * local_108 + local_f8 * local_f8;
    auVar11 = sqrtpd(auVar12,auVar3);
    dVar9 = auVar11._0_8_;
    local_f0._s_0.X = dVar9 * dVar4;
    local_f0._s_0.Y = dVar9 * dVar5;
    local_70[0].field0_0x0._16_8_ = dVar9 * dVar13;
    if (pUVar7[4].field_0x24 == '\0') {
      local_f0._s_0.X = 0.0;
    }
    if (pUVar7[4].field_0x25 == '\0') {
      local_f0._s_0.Y = 0.0;
    }
    local_f0._s_0.Z = (double)local_70[0].field0_0x0._16_8_;
    if (pUVar7[4].field_0x26 == '\0') {
      local_f0._s_0.Z = 0.0;
    }
    UE::Geometry::TQuaternion<double>::InverseMultiply
              (&(param_2->WorldFrame).Rotation,local_70,(TVector<double> *)&local_f0._s_0);
    UE::Geometry::operator*<double>
              ((TVector<double> *)&local_88._s_0,&(param_2->LocalFrame).Rotation,local_70);
    local_108 = local_88._s_0.X;
    dStack_100 = local_88._s_0.Y;
    local_f8 = local_88._s_0.Z;
  }
  local_b0 = &local_res10;
  local_98 = &local_108;
  local_90 = param_4;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMoveBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>::Call;
  local_c0 = &local_b8;
  local_d8.DataPtr = (void **)0x0;
  local_d8.ArrayNum = 0;
  local_b8 = param_3;
  local_a8 = this;
  local_a0 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_c8,
             param_4._0_1_,None,&local_d8);
  return;
}

// GetBrushTargetType @ 14ccfe150

ESculptBrushOpTargetType __thiscall FMoveBrushOp::GetBrushTargetType(FMoveBrushOp *this)

{
  return ActivePlane;
}

// IgnoreZeroMovements @ 14cd03b30

bool __thiscall FMoveBrushOp::IgnoreZeroMovements(FMoveBrushOp *this)

{
  return true;
}

