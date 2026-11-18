// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 5

// FPlaneBrushOp @ 14ccb9e50

FPlaneBrushOp * __thiscall FPlaneBrushOp::FPlaneBrushOp(FPlaneBrushOp *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FMeshSculptBrushOp__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = (longlong)&___7FPlaneBrushOp__6B_;
  this->BrushSpeedTuning = 6.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StrokePlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StrokePlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->StrokePlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StrokePlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.W = 1.0;
  return this;
}

// operator() @ 14ccc8830

void __thiscall `FPlaneBrushOp::ApplyStamp'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  bool bVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d0;
  
  plVar19 = *(longlong **)this;
  lVar21 = (longlong)param_1;
  uVar17 = 0;
  if (param_1 < (int)plVar19[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar3 = *(longlong *)((longlong)this + 0x10);
  uVar17 = *(uint *)(*plVar19 + lVar21 * 4);
  uVar20 = (ulonglong)(uVar17 & 0x1ff);
  lVar4 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar17 >> 9) * 8
           );
  pdVar1 = (double *)(lVar4 + uVar20 * 0x18);
  local_f8 = *pdVar1;
  dStack_f0 = pdVar1[1];
  local_e8 = *(double *)(lVar4 + 0x10 + uVar20 * 0x18);
  dVar2 = *(double *)(lVar3 + 0x78);
  dVar25 = *(double *)(lVar3 + 0x80);
  dVar24 = *(double *)(lVar3 + 0x88) + *(double *)(lVar3 + 0x88);
  dVar26 = dVar24 * dVar25 - *(double *)(lVar3 + 0x90) * (dVar2 + dVar2);
  dVar24 = *(double *)(lVar3 + 0x90) * (dVar25 + dVar25) + dVar24 * dVar2;
  dVar2 = __real_3ff0000000000000 - ((dVar25 + dVar25) * dVar25 + (dVar2 + dVar2) * dVar2);
  dVar25 = (dStack_f0 - *(double *)(lVar3 + 0x68)) * dVar26 +
           (local_f8 - *(double *)(lVar3 + 0x60)) * dVar24 +
           (local_e8 - *(double *)(lVar3 + 0x70)) * dVar2;
  dVar9 = local_f8 - dVar25 * dVar24;
  dVar11 = dStack_f0 - dVar25 * dVar26;
  dVar13 = dVar9 - local_f8;
  dVar25 = local_e8 - dVar25 * dVar2;
  dVar15 = dVar11 - dStack_f0;
  dVar22 = dVar25 - local_e8;
  dVar8 = local_e8;
  dVar10 = local_f8;
  dVar12 = dStack_f0;
  if (0.0 <= (dVar15 * dVar26 + dVar13 * dVar24 + dVar22 * dVar2) *
             **(double **)((longlong)this + 0x18)) {
    if ((*(longlong *)(lVar3 + 0x10) == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    uVar6 = *(undefined8 *)((longlong)this + 0x20);
    UE::Core::Private::Function::CheckCallable((void *)*puVar5);
    pcVar7 = (code *)*puVar5;
    plVar19 = puVar5 + 2;
    if ((longlong *)puVar5[5] != (longlong *)0x0) {
      plVar19 = (longlong *)puVar5[5];
    }
    uVar18 = (**(code **)(*plVar19 + 8))();
    dVar23 = (double)(*pcVar7)(uVar18,uVar6,&local_f8);
    dVar24 = dVar23 * **(double **)((longlong)this + 0x28);
    dVar27 = dVar13 * dVar24;
    dVar2 = dVar15 * dVar24;
    dVar24 = dVar22 * dVar24;
    dVar26 = SQRT(dVar13 * dVar13 + dVar15 * dVar15 + dVar22 * dVar22);
    if (dVar26 <= __real_0000000000000000) {
      dVar26 = __real_0000000000000000;
    }
    dVar8 = dVar25;
    dVar10 = dVar9;
    dVar12 = dVar11;
    local_d0 = dVar25;
    if (dVar2 * dVar2 + dVar27 * dVar27 + dVar24 * dVar24 <= dVar26 * dVar26) {
      dVar8 = dVar24 * dVar23 + local_e8;
      dVar12 = dVar2 * dVar23 + dStack_f0;
      dVar10 = dVar27 * dVar23 + local_f8;
      local_d0 = dVar8;
    }
  }
  plVar19 = *(longlong **)((longlong)this + 0x30);
  uVar17 = 0;
  if (param_1 < (int)plVar19[1]) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar3 = *plVar19;
  auVar14._8_4_ = SUB84(dVar12,0);
  auVar14._0_8_ = dVar10;
  auVar14._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + lVar21 * 0x18) = auVar14;
  *(double *)(lVar3 + 0x10 + lVar21 * 0x18) = dVar8;
  return;
}

// ApplyStamp @ 14ccdfb30

void __thiscall
FPlaneBrushOp::ApplyStamp
          (FPlaneBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  double *local_res8;
  FDynamicMesh3 *local_res10;
  double local_res18;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> **local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  FDynamicMesh3 **local_50;
  FPlaneBrushOp *local_48;
  undefined8 *local_40;
  FSculptBrushStamp *local_38;
  double *local_30;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_28;
  
  local_res10 = param_1;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5139374200154226864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                       ,0xb0,"PropertySet.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UBasePlaneBrushOpProps_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14ccdfbea;
  }
  pUVar5 = (UObject *)0x0;
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ccdfbea:
  bVar4 = (**(code **)(*(longlong *)pUVar5 + 0x300))(pUVar5);
  local_res8 = (&`public:_virtual_void___cdecl_FPlaneBrushOp::ApplyStamp(UE::Geometry::FDynamicMesh3_const*___ptr64,FSculptBrushStamp_const&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                 ::__l2::PlaneSigns)[bVar4];
  local_50 = &local_res10;
  local_40 = &local_res8;
  local_30 = &local_res18;
  local_28 = param_4;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPlaneBrushOp::ApplyStamp'::__l2::<lambda_1>,void,int>::Call;
  local_60 = &local_58;
  local_res18 = param_2->Power * param_2->Radius * param_2->DeltaTime * this->BrushSpeedTuning;
  local_78.DataPtr = (void **)0x0;
  local_78.ArrayNum = 0;
  local_58 = param_3;
  local_48 = this;
  local_38 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_68,
             param_4._0_1_,None,&local_78);
  return;
}

// BeginStroke @ 14cce6ba0

void __thiscall
FPlaneBrushOp::BeginStroke
          (FPlaneBrushOp *this,FDynamicMesh3 *param_1,FSculptBrushStamp *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (double)this->_padding_;
  dVar2 = (double)this->_padding_;
  dVar3 = (double)this->_padding_;
  (this->StrokePlane).Origin.field0_0x0._s_0.X = (double)this->_padding_;
  (this->StrokePlane).Origin.field0_0x0._s_0.Y = dVar1;
  dVar4 = (double)this->_padding_;
  dVar5 = (double)this->_padding_;
  (this->StrokePlane).Origin.field0_0x0._s_0.Z = dVar2;
  (this->StrokePlane).Rotation.field0_0x0._s_0.X = dVar3;
  dVar1 = (double)this->_padding_;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Y = dVar4;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Z = dVar5;
  (this->StrokePlane).Rotation.field0_0x0._s_0.W = dVar1;
  return;
}

// GetReferencePlaneType @ 14cd02280

EReferencePlaneType __thiscall FPlaneBrushOp::GetReferencePlaneType(FPlaneBrushOp *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((pUVar1 != (UObject *)0x0) &&
     (pUVar2 = Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_NoRegister(),
     *(UClass **)&pUVar1->field_0x10 == pUVar2)) {
    return InitialROI_ViewAligned;
  }
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((pUVar1 != (UObject *)0x0) &&
     (pUVar2 = Z_Construct_UClass_UFixedPlaneBrushOpProps_NoRegister(),
     *(UClass **)&pUVar1->field_0x10 == pUVar2)) {
    return WorkPlane;
  }
  return InitialROI;
}

