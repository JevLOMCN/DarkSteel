// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 20

// ~FBasePositionSnapSolver3 @ 14cad1620

void __thiscall
UE::Geometry::FBasePositionSnapSolver3::~FBasePositionSnapSolver3(FBasePositionSnapSolver3 *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  (this->IgnoreTargets).HashSize = 0;
  *(undefined ***)this = &___7FBasePositionSnapSolver3_Geometry_UE__6B_;
  FVar1 = (this->IgnoreTargets).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->IgnoreTargets).Elements);
  pFVar2 = (this->TargetCircles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TargetLines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TargetPoints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)&this->SnapMetricFunc != 0) {
    plVar3 = *(longlong **)&(this->SnapMetricFunc).field_0x28;
    plVar4 = (longlong *)&(this->SnapMetricFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// <lambda_invoker_cdecl> @ 14cb59500

double __cdecl
`UE::Geometry::FBasePositionSnapSolver3::FBasePositionSnapSolver3'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  
  dVar5 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  auVar2._0_8_ = dVar1 * dVar1;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5 * dVar5 + dVar4 * dVar4 + auVar2._0_8_;
  auVar3 = sqrtpd(auVar2,auVar3);
  return auVar3._0_8_;
}

// FBasePositionSnapSolver3 @ 14cb60db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBasePositionSnapSolver3 * __thiscall
UE::Geometry::FBasePositionSnapSolver3::FBasePositionSnapSolver3(FBasePositionSnapSolver3 *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined ***)this = &___7FBasePositionSnapSolver3_Geometry_UE__6B_;
  this->StableSnapImproveThresh = 0.5;
  *(undefined8 *)&this->SnapMetricFunc = 0;
  *(undefined8 *)&(this->SnapMetricFunc).field_0x28 = 0;
  this->bEnableStableSnap = true;
  (this->TargetPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetPoints).ArrayNum = 0;
  (this->TargetPoints).ArrayMax = 0;
  (this->TargetLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetLines).ArrayNum = 0;
  (this->TargetLines).ArrayMax = 0;
  (this->TargetCircles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetCircles).ArrayNum = 0;
  (this->TargetCircles).ArrayMax = 0;
  *(undefined8 *)&(this->IgnoreTargets).Elements = 0;
  *(undefined8 *)&(this->IgnoreTargets).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IgnoreTargets).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IgnoreTargets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IgnoreTargets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IgnoreTargets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IgnoreTargets).Elements.field_0x34 = 0;
  (this->IgnoreTargets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IgnoreTargets).HashSize = 0;
  (this->ActiveSnapTarget).bHaveCustomMetric = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveSnapTarget).bIsSnapLine = false;
  (this->ActiveSnapTarget).SnapLine.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveSnapTarget).SnapLine.Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveSnapTarget).SnapLine.Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  (this->ActiveSnapTarget).SnapLine.Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  (this->ActiveSnapTarget).SnapLine.Direction.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveSnapTarget).SnapLine.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  (this->ActiveSnapTarget).bIsSnapDistance = false;
  (this->ActiveSnapTarget).SnapDistanceID = -1;
  (this->ActiveSnapTarget).bHaveConstrainedPosition = false;
  local_48 = *(longlong *)&this->SnapMetricFunc;
  uVar2 = *(undefined8 *)&(this->SnapMetricFunc).field_0x8;
  local_38 = *(longlong *)&(this->SnapMetricFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->SnapMetricFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->SnapMetricFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->SnapMetricFunc).field_0x28;
  *(code **)&this->SnapMetricFunc =
       Core::Private::Function::
       TFunctionRefCaller<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),double,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
       ::Call;
  *(undefined8 *)&(this->SnapMetricFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->SnapMetricFunc).field_0x10 = 0x51f9c298;
  *(undefined4 *)&(this->SnapMetricFunc).field_0x14 = 1;
  *(undefined4 *)&(this->SnapMetricFunc).field_0x18 = 0x4cb59500;
  *(undefined4 *)&(this->SnapMetricFunc).field_0x1c = 1;
  *(undefined4 *)&(this->SnapMetricFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->SnapMetricFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->SnapMetricFunc).field_0x28 = 0;
  *(undefined4 *)&(this->SnapMetricFunc).field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this->SnapMetricTolerance = 1.0;
  Reset(this);
  return this;
}

// AddCircleTarget @ 14cb73150

void __thiscall
UE::Geometry::FBasePositionSnapSolver3::AddCircleTarget
          (FBasePositionSnapSolver3 *this,TCircle3<double> *param_1,int param_2,int param_3)

{
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetCircle,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  undefined8 local_18;
  int iStack_10;
  int iStack_c;
  
  local_58 = (param_1->Frame).Origin.field0_0x0._s_0.X;
  dStack_50 = (param_1->Frame).Origin.field0_0x0._s_0.Y;
  pTVar1 = &this->TargetCircles;
  local_48 = (param_1->Frame).Origin.field0_0x0._s_0.Z;
  dStack_40 = (param_1->Frame).Rotation.field0_0x0._s_0.X;
  local_38 = (param_1->Frame).Rotation.field0_0x0._s_0.Y;
  dStack_30 = (param_1->Frame).Rotation.field0_0x0._s_0.Z;
  local_28 = (param_1->Frame).Rotation.field0_0x0._s_0.W;
  dStack_20 = param_1->Radius;
  local_18 = *(undefined8 *)&param_1->bIsReversed;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  iStack_10 = param_2;
  iStack_c = param_3;
  if ((pFVar3 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 <
      pFVar3 + (longlong)(this->TargetCircles).ArrayMax * 0x50)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->TargetCircles).ArrayNum;
  piVar2 = &(this->TargetCircles).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->TargetCircles).ArrayNum = iVar6 + 1;
  lVar7 = (longlong)iVar6;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar7 * 0x50) = local_58;
  *(double *)(pFVar3 + lVar7 * 0x50 + 8) = dStack_50;
  *(double *)(pFVar3 + lVar7 * 0x50 + 0x10) = local_48;
  *(double *)(pFVar3 + lVar7 * 0x50 + 0x10 + 8) = dStack_40;
  *(double *)(pFVar3 + lVar7 * 0x50 + 0x20) = local_38;
  *(double *)(pFVar3 + lVar7 * 0x50 + 0x20 + 8) = dStack_30;
  *(double *)(pFVar3 + lVar7 * 0x50 + 0x30) = local_28;
  *(double *)(pFVar3 + lVar7 * 0x50 + 0x30 + 8) = dStack_20;
  *(undefined8 *)(pFVar3 + lVar7 * 0x50 + 0x40) = local_18;
  *(ulonglong *)(pFVar3 + lVar7 * 0x50 + 0x40 + 8) = CONCAT44(iStack_c,iStack_10);
  return;
}

// AddIgnoreTarget @ 14cb73280

void __thiscall
UE::Geometry::FBasePositionSnapSolver3::AddIgnoreTarget(FBasePositionSnapSolver3 *this,int param_1)

{
  int local_res8 [2];
  int local_res10 [6];
  
  local_res10[0] = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->IgnoreTargets,local_res8,(bool *)local_res10);
  return;
}

// AddLineTarget @ 14cb732b0

void __thiscall
UE::Geometry::FBasePositionSnapSolver3::AddLineTarget
          (FBasePositionSnapSolver3 *this,TLine3<double> *param_1,int param_2,int param_3)

{
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetLine,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  int local_18;
  int iStack_14;
  
  local_48 = (param_1->Origin).field0_0x0._s_0.X;
  dStack_40 = (param_1->Origin).field0_0x0._s_0.Y;
  pTVar1 = &this->TargetLines;
  local_38 = (param_1->Origin).field0_0x0._s_0.Z;
  dStack_30 = (param_1->Direction).field0_0x0._s_0.X;
  local_28 = (param_1->Direction).field0_0x0._s_0.Y;
  dStack_20 = (param_1->Direction).field0_0x0._s_0.Z;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18 = param_2;
  iStack_14 = param_3;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)(this->TargetLines).ArrayMax * 0x38)
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->TargetLines).ArrayNum;
  piVar2 = &(this->TargetLines).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->TargetLines).ArrayNum = iVar6 + 1;
  lVar7 = (longlong)iVar6 * 0x38;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar7) = local_48;
  *(double *)(pFVar3 + lVar7 + 8) = dStack_40;
  *(double *)(pFVar3 + lVar7 + 0x10) = local_38;
  *(double *)(pFVar3 + lVar7 + 0x10 + 8) = dStack_30;
  *(double *)(pFVar3 + lVar7 + 0x20) = local_28;
  *(double *)(pFVar3 + lVar7 + 0x20 + 8) = dStack_20;
  *(ulonglong *)(pFVar3 + lVar7 + 0x30) = CONCAT44(iStack_14,local_18);
  return;
}

// AddPointTarget @ 14cb73910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FBasePositionSnapSolver3::AddPointTarget
          (FBasePositionSnapSolver3 *this,TVector<double> *param_1,int param_2,
          FCustomMetric *param_3,int param_4)

{
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  int iStack_a0;
  int iStack_9c;
  undefined8 local_98;
  double dStack_90;
  undefined2 local_88;
  undefined6 uStack_86;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar1 = &this->TargetPoints;
  iStack_9c = param_4;
  dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88 = 1;
  dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_58 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  local_b8 = (param_1->field0_0x0)._s_0.X;
  dStack_b0 = (param_1->field0_0x0)._s_0.Y;
  uStack_50 = uStack_50 & 0xffffff00;
  local_68 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_a8 = (param_1->field0_0x0)._s_0.Z;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  uStack_4c = 0xffffffff;
  local_48 = 0;
  local_98 = *(undefined8 *)param_3;
  dStack_90 = param_3->Value;
  iStack_a0 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
     (lVar7 = (longlong)(this->TargetPoints).ArrayMax,
     (FScriptContainerElement *)&local_b8 < pFVar3 + lVar7 * 0x90)) {
    local_d0 = (longlong)(this->TargetPoints).ArrayNum;
    local_c8 = 0x90;
    local_e8 = &local_b8;
    local_e0 = pFVar3;
    local_d8 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->TargetPoints).ArrayNum;
  piVar2 = &(this->TargetPoints).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x890,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->TargetPoints).ArrayNum = iVar6 + 1;
  lVar7 = (longlong)iVar6;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar7 * 0x90) = local_b8;
  *(double *)(pFVar3 + lVar7 * 0x90 + 8) = dStack_b0;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x10) = local_a8;
  *(ulonglong *)(pFVar3 + lVar7 * 0x90 + 0x10 + 8) = CONCAT44(iStack_9c,iStack_a0);
  *(undefined8 *)(pFVar3 + lVar7 * 0x90 + 0x20) = local_98;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x20 + 8) = dStack_90;
  *(ulonglong *)(pFVar3 + lVar7 * 0x90 + 0x30) = CONCAT62(uStack_86,local_88);
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x30 + 8) = dStack_80;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x40) = dStack_78;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x40 + 8) = dStack_70;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x50) = local_68;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x50 + 8) = dStack_60;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x60) = local_58;
  *(ulonglong *)(pFVar3 + lVar7 * 0x90 + 0x60 + 8) = CONCAT44(uStack_4c,uStack_50);
  *(ulonglong *)(pFVar3 + lVar7 * 0x90 + 0x70) = CONCAT71(uStack_47,local_48);
  *(undefined8 *)(pFVar3 + lVar7 * 0x90 + 0x70 + 8) = uStack_40;
  *(undefined8 *)(pFVar3 + lVar7 * 0x90 + 0x80) = local_38;
  *(undefined8 *)(pFVar3 + lVar7 * 0x90 + 0x80 + 8) = uStack_30;
  return;
}

// AddPointTarget @ 14cb73ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FBasePositionSnapSolver3::AddPointTarget
          (FBasePositionSnapSolver3 *this,TVector<double> *param_1,int param_2,int param_3)

{
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  int iStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined6 uStack_86;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar1 = &this->TargetPoints;
  local_88 = 0;
  uStack_50 = uStack_50 & 0xffffff00;
  dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStack_4c = 0xffffffff;
  dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_58 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  local_b8 = (param_1->field0_0x0)._s_0.X;
  dStack_b0 = (param_1->field0_0x0)._s_0.Y;
  local_48 = 0;
  local_68 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_a8 = (param_1->field0_0x0)._s_0.Z;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  iStack_a0 = param_2;
  iStack_9c = param_3;
  if ((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
     (lVar7 = (longlong)(this->TargetPoints).ArrayMax,
     (FScriptContainerElement *)&local_b8 < pFVar3 + lVar7 * 0x90)) {
    local_d0 = (longlong)(this->TargetPoints).ArrayNum;
    local_c8 = 0x90;
    local_e8 = &local_b8;
    local_e0 = pFVar3;
    local_d8 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->TargetPoints).ArrayNum;
  piVar2 = &(this->TargetPoints).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x890,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->TargetPoints).ArrayNum = iVar6 + 1;
  lVar7 = (longlong)iVar6;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar7 * 0x90) = local_b8;
  *(double *)(pFVar3 + lVar7 * 0x90 + 8) = dStack_b0;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x10) = local_a8;
  *(ulonglong *)(pFVar3 + lVar7 * 0x90 + 0x10 + 8) = CONCAT44(iStack_9c,iStack_a0);
  *(undefined8 *)(pFVar3 + lVar7 * 0x90 + 0x20) = local_98;
  *(undefined8 *)(pFVar3 + lVar7 * 0x90 + 0x20 + 8) = uStack_90;
  *(ulonglong *)(pFVar3 + lVar7 * 0x90 + 0x30) = CONCAT62(uStack_86,local_88);
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x30 + 8) = dStack_80;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x40) = dStack_78;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x40 + 8) = dStack_70;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x50) = local_68;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x50 + 8) = dStack_60;
  *(double *)(pFVar3 + lVar7 * 0x90 + 0x60) = local_58;
  *(ulonglong *)(pFVar3 + lVar7 * 0x90 + 0x60 + 8) = CONCAT44(uStack_4c,uStack_50);
  *(ulonglong *)(pFVar3 + lVar7 * 0x90 + 0x70) = CONCAT71(uStack_47,local_48);
  *(undefined8 *)(pFVar3 + lVar7 * 0x90 + 0x70 + 8) = uStack_40;
  *(undefined8 *)(pFVar3 + lVar7 * 0x90 + 0x80) = local_38;
  *(undefined8 *)(pFVar3 + lVar7 * 0x90 + 0x80 + 8) = uStack_30;
  return;
}

// ClearActiveSnapData @ 14cb79dc0

void __thiscall
UE::Geometry::FBasePositionSnapSolver3::ClearActiveSnapData(FBasePositionSnapSolver3 *this)

{
  this->bHaveActiveSnap = false;
  return;
}

// FindBestSnapInSet @ 14cb8cc10

FSnapTargetPoint * __thiscall
UE::Geometry::FBasePositionSnapSolver3::FindBestSnapInSet
          (FBasePositionSnapSolver3 *this,
          TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,TSizedDefaultAllocator<32>_>
          *param_1,double *param_2,int *param_3,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSnapTargetPoint *pFVar4;
  uint uVar5;
  
  uVar3 = FindIndexOfBestSnapInSet(this,param_1,param_2,param_3,param_4);
  if ((int)uVar3 < 0) {
    return (FSnapTargetPoint *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < param_1->ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSnapTargetPoint *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSnapTargetPoint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x90);
}

// FindIndexOfBestSnapInSet @ 14cb8ce20

int __thiscall
UE::Geometry::FBasePositionSnapSolver3::FindIndexOfBestSnapInSet
          (FBasePositionSnapSolver3 *this,
          TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,TSizedDefaultAllocator<32>_>
          *param_1,double *param_2,int *param_3,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_4)

{
  double dVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_res10;
  undefined1 local_78 [64];
  
  uVar15 = 0;
  lVar12 = (longlong)param_1->ArrayNum;
  uVar9 = 0xffffffff;
  local_res10 = 0xffffffff;
  if (0 < lVar12) {
    lVar16 = 0;
    uVar9 = 0xffffffff;
    do {
      uVar14 = ~uVar15 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + lVar16 + 0x1c) <= *param_3) {
        uVar7 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar7 = *(uint *)((param_1->AllocatorInstance).Data + lVar16 + 0x18);
        if (*(int *)&(this->IgnoreTargets).Elements.field_0x8 !=
            *(int *)&(this->IgnoreTargets).Elements.field_0x34) {
          FVar2 = (this->IgnoreTargets).Hash.SecondaryData;
          FVar13 = (ForElementType<FSetElementId>)&(this->IgnoreTargets).Hash;
          if (FVar2 != (ForElementType<FSetElementId>)0x0) {
            FVar13 = FVar2;
          }
          iVar8 = *(int *)((longlong)FVar13 +
                          (ulonglong)((this->IgnoreTargets).HashSize - 1U & uVar7) * 4);
          if (iVar8 != -1) {
            lVar3 = *(longlong *)&(this->IgnoreTargets).Elements;
            do {
              if (*(uint *)(lVar3 + (longlong)iVar8 * 0xc) == uVar7) goto LAB_14cb8d338;
              iVar8 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0xc);
            } while (iVar8 != -1);
          }
        }
        dVar1 = this->SnapMetricTolerance;
        uVar9 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        if ((param_1->AllocatorInstance).Data[lVar16 + 0x30] != (FScriptContainerElement)0x0) {
          uVar9 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          iVar8 = *(int *)((param_1->AllocatorInstance).Data + lVar16 + 0x20);
          if (iVar8 == 0) {
            uVar9 = 0;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
            dVar1 = *(double *)((param_1->AllocatorInstance).Data + lVar16 + 0x28);
          }
          else if (iVar8 == 1) {
            uVar9 = 0;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
            dVar1 = *(double *)((param_1->AllocatorInstance).Data + lVar16 + 0x28) *
                    this->SnapMetricTolerance;
          }
          else if (iVar8 == 2) {
            uVar9 = 0;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
            dVar1 = *(double *)((param_1->AllocatorInstance).Data + lVar16 + 0x28);
            uVar18 = SUB84(dVar1,0);
            uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
            dVar17 = this->SnapMetricTolerance;
            if (dVar17 <= dVar1) {
              uVar18 = SUB84(dVar17,0);
              uVar19 = (undefined4)((ulonglong)dVar17 >> 0x20);
            }
            dVar1 = (double)CONCAT44(uVar19,uVar18);
          }
        }
        uVar9 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        Core::Private::Function::CheckCallable(*(void **)param_4);
        pcVar5 = *(code **)param_4;
        plVar11 = *(longlong **)&param_4->field_0x28;
        if (*(longlong **)&param_4->field_0x28 == (longlong *)0x0) {
          plVar11 = (longlong *)&param_4->field_0x10;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        (*pcVar5)(local_78,uVar10,pFVar4 + (longlong)(int)uVar15 * 0x90);
        uVar9 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        Core::Private::Function::CheckCallable(*(void **)&this->SnapMetricFunc);
        plVar11 = *(longlong **)&(this->SnapMetricFunc).field_0x28;
        pcVar5 = *(code **)&this->SnapMetricFunc;
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)&(this->SnapMetricFunc).field_0x10;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        dVar17 = (double)(*pcVar5)(uVar10,local_78,pFVar4 + (longlong)(int)uVar15 * 0x90);
        uVar9 = local_res10;
        if (dVar17 < dVar1) {
          if (*param_2 <= dVar17) {
            uVar7 = 0;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar7 = uVar14;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
            if (*param_3 <= *(int *)((param_1->AllocatorInstance).Data + lVar16 + 0x1c))
            goto LAB_14cb8d338;
          }
          *param_2 = dVar17;
          uVar9 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          *param_3 = *(int *)((param_1->AllocatorInstance).Data + lVar16 + 0x1c);
          local_res10 = uVar15;
          uVar9 = uVar15;
        }
      }
LAB_14cb8d338:
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x90;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return uVar9;
}

// IsIgnored @ 14cba41a0

bool __thiscall
UE::Geometry::FBasePositionSnapSolver3::IsIgnored(FBasePositionSnapSolver3 *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->IgnoreTargets).Elements.field_0x8 !=
      *(int *)&(this->IgnoreTargets).Elements.field_0x34) {
    FVar3 = (this->IgnoreTargets).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->IgnoreTargets).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->IgnoreTargets).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->IgnoreTargets).Elements;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0xc) == param_1) goto LAB_14cba41ff;
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14cba41ff:
  return iVar2 != -1;
}

// RemoveCircleTargetsByID @ 14cbabde0

bool __thiscall
UE::Geometry::FBasePositionSnapSolver3::RemoveCircleTargetsByID
          (FBasePositionSnapSolver3 *this,int param_1)

{
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetCircle,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  iVar13 = (this->TargetCircles).ArrayNum;
  bVar8 = false;
  uVar11 = 0;
  if (0 < iVar13) {
    lVar12 = 0;
    pTVar1 = &this->TargetCircles;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->TargetCircles).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (*(int *)((pTVar1->AllocatorInstance).Data + lVar12 + 0x48) == param_1) {
        uVar9 = 0;
        if ((int)uVar11 < (this->TargetCircles).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar3 = (this->TargetCircles).ArrayNum;
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        iVar10 = ~uVar11 + iVar3;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar11 * 0x50,pFVar4 + (longlong)(iVar3 - iVar10) * 0x50,
                  (longlong)iVar10 * 0x50);
        }
        piVar2 = &(this->TargetCircles).ArrayNum;
        *piVar2 = *piVar2 + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&pTVar1->AllocatorInstance,(this->TargetCircles).ArrayNum,
                   &(this->TargetCircles).ArrayMax);
        uVar11 = uVar11 - 1;
        lVar12 = lVar12 + -0x50;
        iVar13 = iVar13 + -1;
        bVar8 = true;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x50;
    } while ((int)uVar11 < iVar13);
  }
  return bVar8;
}

// RemoveIgnoreTarget @ 14cbac060

void __thiscall
UE::Geometry::FBasePositionSnapSolver3::RemoveIgnoreTarget
          (FBasePositionSnapSolver3 *this,int param_1)

{
  int local_res10 [6];
  
  if (*(int *)&(this->IgnoreTargets).Elements.field_0x8 !=
      *(int *)&(this->IgnoreTargets).Elements.field_0x34) {
    local_res10[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              (&this->IgnoreTargets,param_1,local_res10);
  }
  return;
}

// RemoveLineTargetsByID @ 14cbac090

bool __thiscall
UE::Geometry::FBasePositionSnapSolver3::RemoveLineTargetsByID
          (FBasePositionSnapSolver3 *this,int param_1)

{
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetLine,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  iVar13 = (this->TargetLines).ArrayNum;
  bVar8 = false;
  uVar11 = 0;
  if (0 < iVar13) {
    lVar12 = 0;
    pTVar1 = &this->TargetLines;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->TargetLines).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (*(int *)((pTVar1->AllocatorInstance).Data + lVar12 + 0x30) == param_1) {
        uVar9 = 0;
        if ((int)uVar11 < (this->TargetLines).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar3 = (this->TargetLines).ArrayNum;
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        iVar10 = ~uVar11 + iVar3;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar11 * 0x38,pFVar4 + (longlong)(iVar3 - iVar10) * 0x38,
                  (longlong)iVar10 * 0x38);
        }
        piVar2 = &(this->TargetLines).ArrayNum;
        *piVar2 = *piVar2 + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,&pTVar1->AllocatorInstance,(this->TargetLines).ArrayNum,
                   &(this->TargetLines).ArrayMax);
        uVar11 = uVar11 - 1;
        lVar12 = lVar12 + -0x38;
        iVar13 = iVar13 + -1;
        bVar8 = true;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x38;
    } while ((int)uVar11 < iVar13);
  }
  return bVar8;
}

// RemovePointTargetsByID @ 14cbac220

bool __thiscall
UE::Geometry::FBasePositionSnapSolver3::RemovePointTargetsByID
          (FBasePositionSnapSolver3 *this,int param_1)

{
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  iVar13 = (this->TargetPoints).ArrayNum;
  bVar8 = false;
  uVar11 = 0;
  if (0 < iVar13) {
    lVar12 = 0;
    pTVar1 = &this->TargetPoints;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->TargetPoints).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (*(int *)((pTVar1->AllocatorInstance).Data + lVar12 + 0x18) == param_1) {
        uVar9 = 0;
        if ((int)uVar11 < (this->TargetPoints).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar3 = (this->TargetPoints).ArrayNum;
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        iVar10 = ~uVar11 + iVar3;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar11 * 0x90,pFVar4 + (longlong)(iVar3 - iVar10) * 0x90,
                  (longlong)iVar10 * 0x90);
        }
        piVar2 = &(this->TargetPoints).ArrayNum;
        *piVar2 = *piVar2 + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,&pTVar1->AllocatorInstance,(this->TargetPoints).ArrayNum,
                   &(this->TargetPoints).ArrayMax);
        uVar11 = uVar11 - 1;
        lVar12 = lVar12 + -0x90;
        iVar13 = iVar13 + -1;
        bVar8 = true;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x90;
    } while ((int)uVar11 < iVar13);
  }
  return bVar8;
}

// Reset @ 14cbacde0

void __thiscall UE::Geometry::FBasePositionSnapSolver3::Reset(FBasePositionSnapSolver3 *this)

{
  (this->TargetPoints).ArrayNum = 0;
  if ((this->TargetPoints).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,&(this->TargetPoints).AllocatorInstance,0,&(this->TargetPoints).ArrayMax);
  }
  (this->TargetLines).ArrayNum = 0;
  if ((this->TargetLines).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->TargetLines).AllocatorInstance,0,&(this->TargetLines).ArrayMax);
  }
  (this->TargetCircles).ArrayNum = 0;
  if ((this->TargetCircles).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->TargetCircles).AllocatorInstance,0,&(this->TargetCircles).ArrayMax);
  }
                    /* WARNING: Could not recover jumptable at 0x00014cbace8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x60))(this);
  return;
}

// ResetActiveSnap @ 14cbacfb0

void __thiscall
UE::Geometry::FBasePositionSnapSolver3::ResetActiveSnap(FBasePositionSnapSolver3 *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cbacfb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x70))();
  return;
}

// SetActiveSnapData @ 14cbae7f0

void __thiscall
UE::Geometry::FBasePositionSnapSolver3::SetActiveSnapData
          (FBasePositionSnapSolver3 *this,FSnapTargetPoint *param_1,TVector<double> *param_2,
          TVector<double> *param_3,double param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined6 uVar6;
  undefined3 uVar7;
  undefined7 uVar8;
  
  this->bHaveActiveSnap = true;
  dVar1 = (param_1->Position).field0_0x0._s_0.Y;
  (this->ActiveSnapTarget).Position.field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->ActiveSnapTarget).Position.field0_0x0._s_0.Y = dVar1;
  iVar2 = param_1->TargetID;
  iVar3 = param_1->Priority;
  (this->ActiveSnapTarget).Position.field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  (this->ActiveSnapTarget).TargetID = iVar2;
  (this->ActiveSnapTarget).Priority = iVar3;
  uVar4 = *(undefined4 *)&(param_1->CustomMetric).field_0x4;
  dVar1 = (param_1->CustomMetric).Value;
  (this->ActiveSnapTarget).CustomMetric.Type = (param_1->CustomMetric).Type;
  *(undefined4 *)&(this->ActiveSnapTarget).CustomMetric.field_0x4 = uVar4;
  (this->ActiveSnapTarget).CustomMetric.Value = dVar1;
  bVar5 = param_1->bIsSnapLine;
  uVar6 = *(undefined6 *)&param_1->field_0x32;
  dVar1 = (param_1->SnapLine).Origin.field0_0x0._s_0.X;
  (this->ActiveSnapTarget).bHaveCustomMetric = param_1->bHaveCustomMetric;
  (this->ActiveSnapTarget).bIsSnapLine = bVar5;
  *(undefined6 *)&(this->ActiveSnapTarget).field_0x32 = uVar6;
  (this->ActiveSnapTarget).SnapLine.Origin.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->SnapLine).Origin.field0_0x0._s_0.Z;
  (this->ActiveSnapTarget).SnapLine.Origin.field0_0x0._s_0.Y =
       (param_1->SnapLine).Origin.field0_0x0._s_0.Y;
  (this->ActiveSnapTarget).SnapLine.Origin.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_1->SnapLine).Direction.field0_0x0._s_0.Y;
  (this->ActiveSnapTarget).SnapLine.Direction.field0_0x0._s_0.X =
       (param_1->SnapLine).Direction.field0_0x0._s_0.X;
  (this->ActiveSnapTarget).SnapLine.Direction.field0_0x0._s_0.Y = dVar1;
  bVar5 = param_1->bIsSnapDistance;
  uVar7 = *(undefined3 *)&param_1->field_0x69;
  iVar2 = param_1->SnapDistanceID;
  (this->ActiveSnapTarget).SnapLine.Direction.field0_0x0._s_0.Z =
       (param_1->SnapLine).Direction.field0_0x0._s_0.Z;
  (this->ActiveSnapTarget).bIsSnapDistance = bVar5;
  *(undefined3 *)&(this->ActiveSnapTarget).field_0x69 = uVar7;
  (this->ActiveSnapTarget).SnapDistanceID = iVar2;
  uVar8 = *(undefined7 *)&param_1->field_0x71;
  dVar1 = (param_1->ConstrainedPosition).field0_0x0._s_0.X;
  (this->ActiveSnapTarget).bHaveConstrainedPosition = param_1->bHaveConstrainedPosition;
  *(undefined7 *)&(this->ActiveSnapTarget).field_0x71 = uVar8;
  (this->ActiveSnapTarget).ConstrainedPosition.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->ConstrainedPosition).field0_0x0._s_0.Z;
  (this->ActiveSnapTarget).ConstrainedPosition.field0_0x0._s_0.Y =
       (param_1->ConstrainedPosition).field0_0x0._s_0.Y;
  (this->ActiveSnapTarget).ConstrainedPosition.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->ActiveSnapFromPoint).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->ActiveSnapFromPoint).field0_0x0._s_0.Y = dVar1;
  (this->ActiveSnapFromPoint).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->ActiveSnapToPoint).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->ActiveSnapToPoint).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  this->SnappedPointMetric = param_4;
  (this->ActiveSnapToPoint).field0_0x0._s_0.Z = dVar1;
  return;
}

// TestSnapTarget @ 14cbb4930

bool __thiscall
UE::Geometry::FBasePositionSnapSolver3::TestSnapTarget
          (FBasePositionSnapSolver3 *this,FSnapTargetPoint *param_1,double param_2,int param_3,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  double dVar5;
  undefined1 local_38 [48];
  
  if (param_1->Priority <= param_3) {
    Core::Private::Function::CheckCallable(*(void **)param_4);
    pcVar1 = *(code **)param_4;
    plVar3 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_4->field_0x28;
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(local_38,uVar2,param_1);
    Core::Private::Function::CheckCallable(*(void **)&this->SnapMetricFunc);
    plVar3 = *(longlong **)&(this->SnapMetricFunc).field_0x28;
    pcVar1 = *(code **)&this->SnapMetricFunc;
    plVar4 = (longlong *)&(this->SnapMetricFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    uVar2 = (**(code **)(*plVar4 + 8))();
    dVar5 = (double)(*pcVar1)(uVar2,local_38,param_1);
    if (dVar5 < this->SnapMetricTolerance) {
      return dVar5 < param_2;
    }
  }
  return false;
}

