// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 16

// ClearAxisLock @ 14cbc3060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Geometry::FQuickAxisRotator::ClearAxisLock(FQuickAxisRotator *this)

{
  FRaySpatialSnapSolver *pFVar1;
  
  pFVar1 = &this->MoveAxisSolver;
  (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,(this->IgnoredAxes).field0_0x0._s_0.A);
  (this->IgnoredAxes).field0_0x0._s_0.A = -1;
  (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,(this->IgnoredAxes).field0_0x0._s_0.B);
  (this->IgnoredAxes).field0_0x0._s_0.B = -1;
  (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,(this->IgnoredAxes).field0_0x0._s_0.C);
  (this->IgnoredAxes).field0_0x0._s_0.C = -1;
  this->bHaveLockedToAxis = false;
  return;
}

// GetActiveRotationFrame @ 14cbc5300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TFrame3<double> * __thiscall
UE::Geometry::FQuickAxisRotator::GetActiveRotationFrame
          (FQuickAxisRotator *this,TFrame3<double> *__return_storage_ptr__)

{
  double dVar1;
  char cVar2;
  TVector<double> *pTVar3;
  int iVar4;
  TVector<double> local_28;
  
  cVar2 = (**(code **)(this->_padding_ + 0x60))();
  if (cVar2 == '\0') {
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
    dVar1 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
         (this->AxisFrameWorld).Origin.field0_0x0._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
         (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
    return __return_storage_ptr__;
  }
  if ((char)(this->MoveAxisSolver)._padding_ == '\0') {
    iVar4 = -1;
  }
  else {
    iVar4 = (int)(this->MoveAxisSolver)._padding_;
  }
  pTVar3 = TFrame3<double>::GetAxis(&this->AxisFrameWorld,&local_28,iVar4 + -0x2711);
  TFrame3<double>::TFrame3<double>(__return_storage_ptr__,&(this->AxisFrameWorld).Origin,pTVar3);
  return __return_storage_ptr__;
}

// HaveActiveSnap @ 14cbc80c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UE::Geometry::FQuickAxisRotator::HaveActiveSnap(FQuickAxisRotator *this)

{
  return (bool)(char)(this->MoveAxisSolver)._padding_;
}

// HaveActiveSnapRotation @ 14cbc80e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UE::Geometry::FQuickAxisRotator::HaveActiveSnapRotation(FQuickAxisRotator *this)

{
  if (((char)(this->MoveAxisSolver)._padding_ != '\0') &&
     ((int)(this->MoveAxisSolver)._padding_ - 0x2711U < 3)) {
    return true;
  }
  return false;
}

// Initialize @ 14cbc8120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Geometry::FQuickAxisRotator::Initialize(FQuickAxisRotator *this)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  TPairInitializer<int_const_&,FLinearColor_const_&> local_78;
  FLinearColor *local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  dVar1 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
  (this->MoveAxisSolver)._padding_ = (longlong)dVar1;
  local_58 = (this->MoveAxisSolver)._padding_;
  lVar2 = (this->MoveAxisSolver)._padding_;
  local_48 = (this->MoveAxisSolver)._padding_;
  lStack_40 = (this->MoveAxisSolver)._padding_;
  lVar3 = (this->MoveAxisSolver)._padding_;
  plStack_30 = (longlong *)(this->MoveAxisSolver)._padding_;
  (this->MoveAxisSolver)._padding_ =
       (longlong)
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FQuickAxisRotator::Initialize'::__l2::<lambda_1>,double,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
       ::Call;
  (this->MoveAxisSolver)._padding_ = lStack_50;
  *(undefined4 *)&(this->MoveAxisSolver)._padding_ = 0x5291cbb0;
  *(undefined4 *)((longlong)&(this->MoveAxisSolver)._padding_ + 4) = 1;
  (this->MoveAxisSolver)._padding_ = (longlong)this;
  *(undefined4 *)&(this->MoveAxisSolver)._padding_ = (undefined4)local_38;
  *(undefined4 *)((longlong)&(this->MoveAxisSolver)._padding_ + 4) = local_38._4_4_;
  *(undefined4 *)&(this->MoveAxisSolver)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->MoveAxisSolver)._padding_ + 4) = 0;
  local_38 = lVar3;
  lStack_50 = lVar2;
  if (local_58 != 0) {
    plVar8 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar8 = plStack_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  (this->QuickAxisRenderer).LineColor.field0_0x0._s_0.R = 240.0;
  (this->QuickAxisRenderer).LineColor.field0_0x0._s_0.G = 240.0;
  (this->QuickAxisRenderer).LineColor.field0_0x0._s_0.B = 16.0;
  (this->QuickAxisRenderer).LineColor.field0_0x0._s_0.A = 1.0;
  (this->QuickAxisRenderer).LineThickness = 6.0;
  (this->QuickAxisRenderer).ArrowHeadSize = 4.0;
  (this->QuickAxisRenderer).PointColor.field0_0x0._s_0.R = 240.0;
  (this->QuickAxisRenderer).PointColor.field0_0x0._s_0.G = 240.0;
  (this->QuickAxisRenderer).PointColor.field0_0x0._s_0.B = 240.0;
  (this->QuickAxisRenderer).PointColor.field0_0x0._s_0.A = 1.0;
  local_78.Value = (FLinearColor *)&RotateXSnapID;
  (this->QuickAxisRenderer).PointSize = 8.0;
  local_68 = &FLinearColor::Red;
  (this->QuickAxisRenderer).bDepthTested = false;
  TSet<TTuple<int,FLinearColor>,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FLinearColor_const_&>_>
            ((TSet<TTuple<int,FLinearColor>,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->AxisColorMap,&local_78,(bool *)&local_78.Value);
  local_78.Value = (FLinearColor *)&RotateYSnapID;
  local_68 = &FLinearColor::Green;
  TSet<TTuple<int,FLinearColor>,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FLinearColor_const_&>_>
            ((TSet<TTuple<int,FLinearColor>,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->AxisColorMap,&local_78,(bool *)&local_78.Value);
  local_78.Value = (FLinearColor *)&RotateZSnapID;
  local_68 = &FLinearColor::Blue;
  TSet<TTuple<int,FLinearColor>,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FLinearColor_const_&>_>
            ((TSet<TTuple<int,FLinearColor>,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->AxisColorMap,&local_78,(bool *)&local_78.Value);
  (this->QuickAxisPreviewRenderer).LineColor.field0_0x0._s_0.R = 240.0;
  (this->QuickAxisPreviewRenderer).LineColor.field0_0x0._s_0.G = 240.0;
  (this->QuickAxisPreviewRenderer).LineColor.field0_0x0._s_0.B = 16.0;
  (this->QuickAxisPreviewRenderer).LineColor.field0_0x0._s_0.A = 1.0;
  (this->QuickAxisPreviewRenderer).LineThickness = 1.0;
  (this->QuickAxisPreviewRenderer).ArrowHeadSize = 4.0;
  (this->QuickAxisPreviewRenderer).PointColor.field0_0x0._s_0.R = 240.0;
  (this->QuickAxisPreviewRenderer).PointColor.field0_0x0._s_0.G = 240.0;
  (this->QuickAxisPreviewRenderer).PointColor.field0_0x0._s_0.B = 240.0;
  (this->QuickAxisPreviewRenderer).PointColor.field0_0x0._s_0.A = 1.0;
  dVar4 = _UNK_15061cbc8;
  dVar1 = ___xmm_3ff00000000000000000000000000000;
  (this->QuickAxisPreviewRenderer).PointSize = 1.0;
  (this->QuickAxisPreviewRenderer).bDepthTested = false;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y = (double)uVar5;
  *(undefined4 *)((longlong)&(this->AxisFrameWorld).Origin.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->AxisFrameWorld).Origin.field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)&(this->AxisFrameWorld).Rotation.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->AxisFrameWorld).Rotation.field0_0x0 + 4) = 0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W = dVar4;
  return;
}

// PreviewRender @ 14cbc9290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FQuickAxisRotator::PreviewRender
          (FQuickAxisRotator *this,IToolsContextRenderAPI *param_1)

{
  double dVar1;
  
  dVar1 = ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
                    (&this->CameraState,&(this->AxisFrameWorld).Origin,__real_3ff0000000000000);
  FToolDataVisualizer::BeginFrame(&this->QuickAxisPreviewRenderer,param_1);
  FRaySpatialSnapSolver::Draw
            (&this->MoveAxisSolver,&this->QuickAxisPreviewRenderer,(float)(dVar1 + dVar1),
             (TMap<int,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>_>
              *)0x0);
  FToolDataVisualizer::EndFrame(&this->QuickAxisPreviewRenderer);
  return;
}

// Render @ 14cbc9970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FQuickAxisRotator::Render(FQuickAxisRotator *this,IToolsContextRenderAPI *param_1)

{
  double dVar1;
  
  dVar1 = ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
                    (&this->CameraState,&(this->AxisFrameWorld).Origin,__real_3ff0000000000000);
  FToolDataVisualizer::BeginFrame(&this->QuickAxisRenderer,param_1);
  FRaySpatialSnapSolver::Draw
            (&this->MoveAxisSolver,&this->QuickAxisRenderer,(float)(dVar1 * __real_4008000000000000)
             ,&this->AxisColorMap);
  FToolDataVisualizer::EndFrame(&this->QuickAxisRenderer);
  return;
}

// Reset @ 14cbc9aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Geometry::FQuickAxisRotator::Reset(FQuickAxisRotator *this)

{
  FRaySpatialSnapSolver *pFVar1;
  
  pFVar1 = &this->MoveAxisSolver;
  (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1);
  (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,(this->IgnoredAxes).field0_0x0._s_0.A);
  (this->IgnoredAxes).field0_0x0._s_0.A = -1;
  (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,(this->IgnoredAxes).field0_0x0._s_0.B);
  (this->IgnoredAxes).field0_0x0._s_0.B = -1;
  (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,(this->IgnoredAxes).field0_0x0._s_0.C);
  (this->IgnoredAxes).field0_0x0._s_0.C = -1;
  this->bHaveLockedToAxis = false;
  return;
}

// SetActiveFrameFromWorldAxes @ 14cbca130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FQuickAxisRotator::SetActiveFrameFromWorldAxes
          (FQuickAxisRotator *this,TVector<double> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = _UNK_15061cbc8;
  dVar4 = ___xmm_3ff00000000000000000000000000000;
  uVar1 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar2 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y = dVar3;
  *(undefined4 *)((longlong)&(this->AxisFrameWorld).Origin.field0_0x0 + 0x10) = uVar1;
  *(undefined4 *)((longlong)&(this->AxisFrameWorld).Origin.field0_0x0 + 0x14) = uVar2;
  *(undefined4 *)&(this->AxisFrameWorld).Rotation.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->AxisFrameWorld).Rotation.field0_0x0 + 4) = 0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z = dVar4;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W = dVar5;
  UpdateSnapAxes(this);
  return;
}

// SetActiveFrameFromWorldNormal @ 14cbca1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FQuickAxisRotator::SetActiveFrameFromWorldNormal
          (FQuickAxisRotator *this,TVector<double> *param_1,TVector<double> *param_2,bool param_3)

{
  TFrame3<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TVector<double>_u_0 local_d8;
  TQuaternion<double>_u_0 local_c0;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  
  dStack_90 = _UNK_15061cbc8;
  local_98 = ___xmm_3ff00000000000000000000000000000;
  uVar5 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  this_00 = &this->AxisFrameWorld;
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  (this_00->Origin).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y = dVar8;
  uStack_a0 = 0;
  *(undefined4 *)((longlong)&(this->AxisFrameWorld).Origin.field0_0x0 + 0x10) = uVar5;
  *(undefined4 *)((longlong)&(this->AxisFrameWorld).Origin.field0_0x0 + 0x14) = uVar6;
  *(undefined4 *)&(this->AxisFrameWorld).Rotation.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->AxisFrameWorld).Rotation.field0_0x0 + 4) = 0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z = local_98;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W = dStack_90;
  dVar7 = __real_3ff0000000000000;
  dVar8 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X;
  dVar11 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y;
  dVar9 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z;
  dVar1 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W;
  dVar9 = dVar9 + dVar9;
  local_c0._s_0.W = __real_3ff0000000000000;
  local_d8._s_0.X = dVar1 * (dVar11 + dVar11) + dVar9 * dVar8;
  local_d8._s_0.Y = dVar9 * dVar11 - dVar1 * (dVar8 + dVar8);
  local_d8._s_0.Z = __real_3ff0000000000000 - ((dVar11 + dVar11) * dVar11 + (dVar8 + dVar8) * dVar8)
  ;
  local_c0._s_0.X = 0.0;
  local_c0._s_0.Y = 0.0;
  local_c0._s_0.Z = 0.0;
  TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_c0._s_0,(TVector<double> *)&local_d8._s_0,param_2);
  TFrame3<double>::Rotate(this_00,(TQuaternion<double> *)&local_c0._s_0);
  if (param_3) {
    dVar8 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X;
    dVar11 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y;
    dVar9 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z;
    dVar1 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W;
    dVar10 = dVar11 + dVar11;
    dVar2 = dVar9 + dVar9;
    dVar3 = dVar8 * dVar2 - dVar1 * dVar10;
    dVar4 = dVar7 - (dVar10 * dVar11 + dVar2 * dVar9);
    local_d8._s_0.Y = dVar7 - ((dVar8 + dVar8) * dVar8 + dVar2 * dVar9);
    dVar9 = dVar8 * dVar10 + dVar1 * dVar2;
    local_d8._s_0.X = dVar8 * dVar10 - dVar1 * dVar2;
    local_d8._s_0.Z = (dVar8 + dVar8) * dVar1 + dVar2 * dVar11;
    dVar11 = dVar9 * (double)CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_) +
             dVar4 * (double)CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_) +
             dVar3 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    dVar8 = local_d8._s_0.Y *
            (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_) +
            local_d8._s_0.X *
            (double)CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_) +
            local_d8._s_0.Z * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    if ((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      local_c0._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      local_c0._0_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_;
      local_c0._4_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_;
      local_c0._8_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_;
      local_c0._12_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_;
    }
    else {
      local_c0._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      local_c0._0_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_;
      local_c0._4_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_;
      local_c0._8_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_;
      local_c0._12_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_;
      local_d8._s_0.X = dVar4;
      local_d8._s_0.Y = dVar9;
      local_d8._s_0.Z = dVar3;
    }
    VectorUtil::PlaneAngleSignedD<double>
              ((TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_c0._s_0,param_2);
    __libm_sse2_sincos_();
    local_c0._s_0.W = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    local_c0._s_0.Y =
         (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (param_2->field0_0x0)._s_0.Y;
    local_c0._s_0.X =
         (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (param_2->field0_0x0)._s_0.X;
    local_c0._s_0.Z =
         (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (param_2->field0_0x0)._s_0.Z;
    TFrame3<double>::Rotate(this_00,(TQuaternion<double> *)&local_c0._s_0);
  }
  UpdateSnapAxes(this);
  return;
}

// SetActiveWorldFrame @ 14cbca900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FQuickAxisRotator::SetActiveWorldFrame
          (FQuickAxisRotator *this,TFrame3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.X;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Z;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y = (param_1->Rotation).field0_0x0._s_0.Y;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
  UpdateSnapAxes(this);
  return;
}

// SetAxisLock @ 14cbca980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Geometry::FQuickAxisRotator::SetAxisLock(FQuickAxisRotator *this)

{
  FRaySpatialSnapSolver *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  cVar3 = (**(code **)(this->_padding_ + 0x60))();
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HaveActiveSnapRotation()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\QuickAxisRotator.cpp"
                       ,0x6b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((char)(this->MoveAxisSolver)._padding_ == '\0') {
    iVar5 = -1;
  }
  else {
    iVar5 = (int)(this->MoveAxisSolver)._padding_;
  }
  pFVar1 = &this->MoveAxisSolver;
  (this->IgnoredAxes).field0_0x0._s_0.A = 0x2711;
  (this->IgnoredAxes).field0_0x0._s_0.B = 0x2712;
  (this->IgnoredAxes).field0_0x0._s_0.C = 0x2713;
  if ((this->IgnoredAxes).field0_0x0._s_0.A == iVar5) {
    (this->IgnoredAxes).field0_0x0._s_0.A = -1;
  }
  else {
    (**(code **)(pFVar1->_padding_ + 0x40))(pFVar1);
  }
  if ((this->IgnoredAxes).field0_0x0._s_0.B == iVar5) {
    (this->IgnoredAxes).field0_0x0._s_0.B = -1;
  }
  else {
    (**(code **)(pFVar1->_padding_ + 0x40))(pFVar1);
  }
  if ((this->IgnoredAxes).field0_0x0._s_0.C != iVar5) {
    (**(code **)(pFVar1->_padding_ + 0x40))(pFVar1);
    this->bHaveLockedToAxis = true;
    return;
  }
  (this->IgnoredAxes).field0_0x0._s_0.C = -1;
  this->bHaveLockedToAxis = true;
  return;
}

// UpdateActiveFrameOrigin @ 14cbcbd20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FQuickAxisRotator::UpdateActiveFrameOrigin
          (FQuickAxisRotator *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y = dVar1;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UpdateSnapAxes(this);
  return;
}

// UpdateCameraState @ 14cbcc170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FQuickAxisRotator::UpdateCameraState
          (FQuickAxisRotator *this,FViewCameraState *param_1)

{
  double dVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  undefined2 uVar7;
  
  dVar1 = (param_1->Position).field0_0x0._s_0.Y;
  (this->CameraState).Position.field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->CameraState).Position.field0_0x0._s_0.Y = dVar1;
  uVar2 = *(undefined8 *)&param_1->field_0x18;
  (this->CameraState).Position.field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->CameraState).field_0x18 = uVar2;
  dVar1 = (param_1->Orientation).Y;
  (this->CameraState).Orientation.X = (param_1->Orientation).X;
  (this->CameraState).Orientation.Y = dVar1;
  dVar1 = (param_1->Orientation).W;
  (this->CameraState).Orientation.Z = (param_1->Orientation).Z;
  (this->CameraState).Orientation.W = dVar1;
  fVar3 = param_1->OrthoWorldCoordinateWidth;
  fVar4 = param_1->AspectRatio;
  bVar5 = param_1->bIsOrthographic;
  bVar6 = param_1->bIsVR;
  uVar7 = *(undefined2 *)&param_1->field_0x4e;
  (this->CameraState).HorizontalFOVDegrees = param_1->HorizontalFOVDegrees;
  (this->CameraState).OrthoWorldCoordinateWidth = fVar3;
  (this->CameraState).AspectRatio = fVar4;
  (this->CameraState).bIsOrthographic = bVar5;
  (this->CameraState).bIsVR = bVar6;
  *(undefined2 *)&(this->CameraState).field_0x4e = uVar7;
  uVar2 = *(undefined8 *)&param_1->field_0x58;
  (this->CameraState).DPIScale = param_1->DPIScale;
  *(undefined8 *)&(this->CameraState).field_0x58 = uVar2;
  return;
}

// UpdateSnap @ 14cbccf10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Geometry::FQuickAxisRotator::UpdateSnap
          (FQuickAxisRotator *this,TRay<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  FRaySpatialSnapSolver::UpdateSnappedPoint(&this->MoveAxisSolver,param_1);
  if ((char)(this->MoveAxisSolver)._padding_ != '\0') {
    dVar2 = (double)(this->MoveAxisSolver)._padding_;
    dVar1 = (double)(this->MoveAxisSolver)._padding_;
    (param_2->field0_0x0)._s_0.X = (double)(this->MoveAxisSolver)._padding_;
    (param_2->field0_0x0)._s_0.Y = dVar2;
    (param_2->field0_0x0)._s_0.Z = dVar1;
    return true;
  }
  return false;
}

// UpdateSnapAxes @ 14cbcd0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Geometry::FQuickAxisRotator::UpdateSnapAxes(FQuickAxisRotator *this)

{
  FRaySpatialSnapSolver *pFVar1;
  TFrame3<double> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  TQuaternion<double>_u_0 TStack_120;
  TVector<double>_u_0 local_f8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  TVector<double>_u_0 local_88;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_168;
  pFVar1 = &this->MoveAxisSolver;
  (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1);
  dVar7 = __real_3ff0000000000000;
  pTVar2 = &this->AxisFrameWorld;
  dVar3 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z;
  dVar4 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y;
  dVar9 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X;
  TStack_120._s_0.W = __real_3ff0000000000000;
  dVar10 = dVar3 + dVar3;
  dVar11 = dVar4 + dVar4;
  TStack_120._s_0.X = 0.0;
  TStack_120._s_0.Y = 0.0;
  TStack_120._s_0.Z = 0.0;
  dVar5 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W;
  local_88._s_0.X = __real_3ff0000000000000 - (dVar10 * dVar3 + dVar11 * dVar4);
  local_88._s_0.Y = dVar5 * dVar10 + dVar9 * dVar11;
  local_138 = (pTVar2->Origin).field0_0x0._s_0.X;
  dStack_130 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y;
  local_88._s_0.Z = dVar9 * dVar10 - dVar5 * dVar11;
  local_128 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z;
  local_f8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_f8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_f8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&TStack_120._s_0,(TVector<double> *)&local_f8._s_0,
             (TVector<double> *)&local_88._s_0);
  uVar8 = __real_4049000000000000;
  local_d8 = local_138;
  dStack_d0 = dStack_130;
  local_98 = 0;
  local_c8 = local_128;
  dStack_c0 = TStack_120._s_0.X;
  local_b8 = TStack_120._8_4_;
  uStack_b4 = TStack_120._12_4_;
  uStack_b0 = TStack_120._16_4_;
  uStack_ac = TStack_120._20_4_;
  local_a0 = __real_4049000000000000;
  local_a8 = TStack_120._s_0.W;
  (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,&local_d8,0x2711,100);
  dVar3 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X;
  dVar4 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z;
  dVar9 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y;
  dVar5 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W;
  dVar10 = dVar4 + dVar4;
  local_88._s_0.X = (dVar9 + dVar9) * dVar3 - dVar5 * dVar10;
  TStack_120._s_0.X = 0.0;
  TStack_120._s_0.W = dVar7;
  local_88._s_0.Z = dVar9 * dVar10 + dVar5 * (dVar3 + dVar3);
  TStack_120._s_0.Y = 0.0;
  TStack_120._s_0.Z = 0.0;
  local_88._s_0.Y = dVar7 - (dVar10 * dVar4 + (dVar3 + dVar3) * dVar3);
  local_128 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z;
  local_138 = (pTVar2->Origin).field0_0x0._s_0.X;
  dStack_130 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y;
  local_f8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_f8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_f8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&TStack_120._s_0,(TVector<double> *)&local_f8._s_0,
             (TVector<double> *)&local_88._s_0);
  local_d8 = local_138;
  dStack_d0 = dStack_130;
  local_98 = 0;
  local_c8 = local_128;
  dStack_c0 = TStack_120._s_0.X;
  local_b8 = TStack_120._8_4_;
  uStack_b4 = TStack_120._12_4_;
  uStack_b0 = TStack_120._16_4_;
  uStack_ac = TStack_120._20_4_;
  local_a0 = uVar8;
  local_a8 = TStack_120._s_0.W;
  (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,&local_d8,0x2712,100);
  dVar3 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y;
  dVar4 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X;
  dVar9 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z;
  dVar5 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W;
  dVar9 = dVar9 + dVar9;
  TStack_120._s_0.X = 0.0;
  TStack_120._s_0.W = dVar7;
  local_88._s_0.X = dVar5 * (dVar3 + dVar3) + dVar9 * dVar4;
  TStack_120._s_0.Y = 0.0;
  TStack_120._s_0.Z = 0.0;
  local_88._s_0.Y = dVar9 * dVar3 - dVar5 * (dVar4 + dVar4);
  local_128 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z;
  local_88._s_0.Z = dVar7 - ((dVar3 + dVar3) * dVar3 + (dVar4 + dVar4) * dVar4);
  local_138 = (pTVar2->Origin).field0_0x0._s_0.X;
  dStack_130 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y;
  local_f8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_f8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_f8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&TStack_120._s_0,(TVector<double> *)&local_f8._s_0,
             (TVector<double> *)&local_88._s_0);
  local_d8 = local_138;
  dStack_d0 = dStack_130;
  local_98 = 0;
  local_c8 = local_128;
  dStack_c0 = TStack_120._s_0.X;
  local_b8 = TStack_120._8_4_;
  uStack_b4 = TStack_120._12_4_;
  uStack_b0 = TStack_120._16_4_;
  uStack_ac = TStack_120._20_4_;
  local_a0 = uVar8;
  local_a8 = TStack_120._s_0.W;
  (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,&local_d8,0x2713,100);
  local_f8._s_0.X = (double)((ulonglong)local_f8._s_0.X & 0xffffffff00000000);
  pcVar6 = *(code **)(pFVar1->_padding_ + 8);
  dVar3 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
  local_88._s_0.Y = dVar3 * __real_3fe0000000000000;
  local_148 = 0x32;
  local_88._s_0.X = local_f8._s_0.X;
  (*pcVar6)(pFVar1,pTVar2,0x3e9,&local_88);
  return;
}

