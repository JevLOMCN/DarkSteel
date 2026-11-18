// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// HaveActiveSnap @ 14cbc80d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UE::Geometry::FQuickAxisTranslater::HaveActiveSnap(FQuickAxisTranslater *this)

{
  return (bool)(char)(this->MoveAxisSolver)._padding_;
}

// Initialize @ 14cbc83d0

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

void __thiscall UE::Geometry::FQuickAxisTranslater::Initialize(FQuickAxisTranslater *this)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
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
  (this->MoveAxisSolver)._padding_ = 0x40c3878000000000;
  local_58 = (this->MoveAxisSolver)._padding_;
  lVar1 = (this->MoveAxisSolver)._padding_;
  local_48 = (this->MoveAxisSolver)._padding_;
  lStack_40 = (this->MoveAxisSolver)._padding_;
  lVar2 = (this->MoveAxisSolver)._padding_;
  plStack_30 = (longlong *)(this->MoveAxisSolver)._padding_;
  (this->MoveAxisSolver)._padding_ =
       (longlong)
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FQuickAxisTranslater::Initialize'::__l2::<lambda_1>,double,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
       ::Call;
  (this->MoveAxisSolver)._padding_ = lStack_50;
  *(undefined4 *)&(this->MoveAxisSolver)._padding_ = 0x5291cbd0;
  *(undefined4 *)((longlong)&(this->MoveAxisSolver)._padding_ + 4) = 1;
  (this->MoveAxisSolver)._padding_ = (longlong)this;
  *(undefined4 *)&(this->MoveAxisSolver)._padding_ = (undefined4)local_38;
  *(undefined4 *)((longlong)&(this->MoveAxisSolver)._padding_ + 4) = local_38._4_4_;
  *(undefined4 *)&(this->MoveAxisSolver)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->MoveAxisSolver)._padding_ + 4) = 0;
  local_38 = lVar2;
  lStack_50 = lVar1;
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
  local_78.Value = (FLinearColor *)&TranslateXSnapID;
  (this->QuickAxisRenderer).PointSize = 8.0;
  local_68 = &FLinearColor::Red;
  (this->QuickAxisRenderer).bDepthTested = false;
  TSet<TTuple<int,FLinearColor>,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FLinearColor_const_&>_>
            ((TSet<TTuple<int,FLinearColor>,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->AxisColorMap,&local_78,(bool *)&local_78.Value);
  local_78.Value = (FLinearColor *)&TranslateYSnapID;
  local_68 = &FLinearColor::Green;
  TSet<TTuple<int,FLinearColor>,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FLinearColor_const_&>_>
            ((TSet<TTuple<int,FLinearColor>,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>,FDefaultSetAllocator>
              *)&this->AxisColorMap,&local_78,(bool *)&local_78.Value);
  local_78.Value = (FLinearColor *)&TranslateZSnapID;
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
  dVar3 = ___xmm_3ff00000000000000000000000000000;
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
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z = dVar3;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W = dVar4;
  return;
}

// PreviewRender @ 14cbc9320

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
UE::Geometry::FQuickAxisTranslater::PreviewRender
          (FQuickAxisTranslater *this,IToolsContextRenderAPI *param_1)

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

// Render @ 14cbc9a10

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
UE::Geometry::FQuickAxisTranslater::Render
          (FQuickAxisTranslater *this,IToolsContextRenderAPI *param_1)

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

// Reset @ 14cbc9b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Geometry::FQuickAxisTranslater::Reset(FQuickAxisTranslater *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014cbc9b1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->MoveAxisSolver)._padding_ + 0x58))();
  return;
}

// SetActiveFrameFromWorldAxes @ 14cbca190

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
UE::Geometry::FQuickAxisTranslater::SetActiveFrameFromWorldAxes
          (FQuickAxisTranslater *this,TVector<double> *param_1)

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

// SetActiveFrameFromWorldNormal @ 14cbca570

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
UE::Geometry::FQuickAxisTranslater::SetActiveFrameFromWorldNormal
          (FQuickAxisTranslater *this,TVector<double> *param_1,TVector<double> *param_2,bool param_3
          )

{
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
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
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
  TFrame3<double>::Rotate(&this->AxisFrameWorld,(TQuaternion<double> *)&local_c0._s_0);
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
    TFrame3<double>::Rotate(&this->AxisFrameWorld,(TQuaternion<double> *)&local_c0._s_0);
  }
  UpdateSnapAxes(this);
  return;
}

// SetActiveWorldFrame @ 14cbca940

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
UE::Geometry::FQuickAxisTranslater::SetActiveWorldFrame
          (FQuickAxisTranslater *this,TFrame3<double> *param_1)

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

// UpdateActiveFrameOrigin @ 14cbcbd50

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
UE::Geometry::FQuickAxisTranslater::UpdateActiveFrameOrigin
          (FQuickAxisTranslater *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y = dVar1;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UpdateSnapAxes(this);
  return;
}

// UpdateCameraState @ 14cbcc1b0

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
UE::Geometry::FQuickAxisTranslater::UpdateCameraState
          (FQuickAxisTranslater *this,FViewCameraState *param_1)

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

// UpdateSnap @ 14cbccf70

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
UE::Geometry::FQuickAxisTranslater::UpdateSnap
          (FQuickAxisTranslater *this,TRay<double> *param_1,TVector<double> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3)

{
  double dVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (*(longlong *)param_3 == 0) {
    FRaySpatialSnapSolver::UpdateSnappedPoint(&this->MoveAxisSolver,param_1);
  }
  else {
    if (*(longlong *)&(this->MoveAxisSolver).PointConstraintFunc != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MoveAxisSolver.PointConstraintFunc == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Transforms\\QuickAxisTranslater.cpp"
                         ,0xc6,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>::operator=
              (&(this->MoveAxisSolver).PointConstraintFunc,param_3);
    FRaySpatialSnapSolver::UpdateSnappedPoint(&this->MoveAxisSolver,param_1);
    if (*(longlong *)&(this->MoveAxisSolver).PointConstraintFunc != 0) {
      plVar9 = *(longlong **)&(this->MoveAxisSolver).PointConstraintFunc.field_0x28;
      plVar8 = (longlong *)&(this->MoveAxisSolver).PointConstraintFunc.field_0x10;
      if (plVar9 != (longlong *)0x0) {
        plVar8 = plVar9;
      }
      (**(code **)(*plVar8 + 0x10))();
      *(undefined8 *)&(this->MoveAxisSolver).PointConstraintFunc = 0;
    }
  }
  if ((char)(this->MoveAxisSolver)._padding_ != '\0') {
    uVar3 = *(undefined4 *)((longlong)&(this->MoveAxisSolver)._padding_ + 4);
    lVar5 = (this->MoveAxisSolver)._padding_;
    uVar4 = *(undefined4 *)((longlong)&(this->MoveAxisSolver)._padding_ + 4);
    dVar1 = (double)(this->MoveAxisSolver)._padding_;
    *(int *)&param_2->field0_0x0 = (int)(this->MoveAxisSolver)._padding_;
    *(undefined4 *)((longlong)&param_2->field0_0x0 + 4) = uVar3;
    *(int *)((longlong)&param_2->field0_0x0 + 8) = (int)lVar5;
    *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc) = uVar4;
    (param_2->field0_0x0)._s_0.Z = dVar1;
    if (*(longlong *)param_3 != 0) {
      plVar9 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar9 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    return true;
  }
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return false;
}

// UpdateSnapAxes @ 14cbcd4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall UE::Geometry::FQuickAxisTranslater::UpdateSnapAxes(FQuickAxisTranslater *this)

{
  TFrame3<double> *pTVar1;
  FRaySpatialSnapSolver *pFVar2;
  double dVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  char *pcVar19;
  double *pdVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  uint uVar37;
  uint uVar38;
  double dVar39;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  char local_268 [8];
  double local_260;
  undefined4 local_258;
  double local_250;
  TVector2<double>_u_0 local_248;
  TVector2<double>_u_0 local_238;
  TVector2<double>_u_0 local_228;
  TVector2<double>_u_0 local_218;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  TQuaternion<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_298;
  pFVar2 = &this->MoveAxisSolver;
  (**(code **)(pFVar2->_padding_ + 0x58))(pFVar2);
  dVar32 = (this->CameraState).Position.field0_0x0._s_0.X;
  dVar35 = (this->CameraState).Position.field0_0x0._s_0.Y;
  dVar3 = (this->CameraState).Position.field0_0x0._s_0.Z;
  local_158._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_158._s_0.Y = _UNK_150689518;
  local_158._s_0.Z = 0.0;
  local_208._s_0.X = dVar32;
  local_208._s_0.Y = dVar35;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,(TVector<double> *)&local_1b8._s_0,
             (TVector<double> *)&local_158._s_0);
  dVar10 = __real_3ff0000000000000;
  local_1f0._s_0.X = local_1b8._s_0.X * __real_3fb999999999999a + dVar32;
  local_1d8._s_0.X = 0.0;
  local_1d8._s_0.W = __real_3ff0000000000000;
  local_1f0._s_0.Y = local_1b8._s_0.Y * __real_3fb999999999999a + dVar35;
  local_1d8._s_0.Y = 0.0;
  local_1d8._s_0.Z = 0.0;
  local_1f0._s_0.Z = local_1b8._s_0.Z * __real_3fb999999999999a + dVar3;
  local_138._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_138._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_138._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  local_208._s_0.Z = dVar3;
  TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_1d8._s_0,(TVector<double> *)&local_138._s_0,
             (TVector<double> *)&local_1b8._s_0);
  pTVar1 = &this->AxisFrameWorld;
  dVar33 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z;
  dVar28 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y;
  dVar36 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W;
  dVar39 = dVar33 + dVar33;
  dVar26 = dVar28 + dVar28;
  local_250 = dVar10 - (dVar39 * dVar33 + dVar26 * dVar28);
  dVar31 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X;
  local_e8 = dVar36 * dVar39 + dVar31 * dVar26;
  dVar30 = dVar31 * dVar26 - dVar36 * dVar39;
  local_248._s_0.X = dVar31 * dVar39 - dVar36 * dVar26;
  dVar27 = (dVar31 + dVar31) * dVar36;
  dVar36 = dVar31 * dVar39 + dVar36 * dVar26;
  dVar31 = (dVar31 + dVar31) * dVar31;
  dVar35 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y - dVar35;
  dVar3 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z - dVar3;
  local_260 = dVar39 * dVar28 + dVar27;
  dVar27 = dVar39 * dVar28 - dVar27;
  local_218._s_0.X = dVar10 - (dVar31 + dVar39 * dVar33);
  dVar33 = dVar10 - (dVar31 + dVar26 * dVar28);
  dVar32 = (pTVar1->Origin).field0_0x0._s_0.X - dVar32;
  auVar21._0_8_ = dVar32 * dVar32;
  auVar21._8_8_ = 0;
  auVar29._0_8_ = dVar35 * dVar35 + auVar21._0_8_ + dVar3 * dVar3;
  auVar29._8_8_ = 0;
  auVar21 = sqrtpd(auVar21,auVar29);
  if (auVar21._0_8_ <= 0.0) {
    auVar34 = ZEXT416(0);
    dVar35 = 0.0;
    dVar28 = 0.0;
  }
  else {
    dVar28 = dVar10 / auVar21._0_8_;
    auVar34._0_8_ = dVar32 * dVar28;
    auVar34._8_8_ = 0;
    dVar35 = dVar35 * dVar28;
    dVar28 = dVar28 * dVar3;
  }
  iVar17 = 1;
  dVar3 = auVar34._0_8_;
  dVar31 = dVar3 * local_250 + dVar35 * local_e8 + dVar28 * local_248._s_0.X;
  dVar32 = dVar3 * dVar30 + dVar35 * local_218._s_0.X + dVar28 * local_260;
  dVar3 = dVar36 * dVar3 + dVar27 * dVar35 + dVar33 * dVar28;
  bVar12 = ForwardDotTol <
           (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  bVar8 = ForwardDotTol <
          (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  iVar15 = 1;
  bVar9 = ForwardDotTol <
          (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_268[0] = bVar12;
  local_268[1] = bVar8;
  local_268[2] = bVar9;
  local_228._s_0.X = dVar30;
  bVar11 = ProjectToCameraPlanePos
                     (&pTVar1->Origin,(TFrame3<double> *)&local_1f0._s_0,
                      (TVector<double> *)&local_208._s_0,(TVector2<double> *)&local_238._s_0);
  dVar28 = __real_4024000000000000;
  if (!bVar11) {
    return;
  }
  local_1a0._s_0.X = local_250 * __real_4024000000000000 + (pTVar1->Origin).field0_0x0._s_0.X;
  local_1a0._s_0.Y =
       local_e8 * __real_4024000000000000 + (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y;
  local_1a0._s_0.Z =
       local_248._s_0.X * __real_4024000000000000 + (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z;
  bVar11 = ProjectToCameraPlanePos
                     ((TVector<double> *)&local_1a0._s_0,(TFrame3<double> *)&local_1f0._s_0,
                      (TVector<double> *)&local_208._s_0,(TVector2<double> *)&local_228._s_0);
  if (!bVar11) {
    return;
  }
  local_188._s_0.Y = local_218._s_0.X * dVar28 + (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y;
  local_188._s_0.X = dVar30 * dVar28 + (pTVar1->Origin).field0_0x0._s_0.X;
  local_188._s_0.Z = local_260 * dVar28 + (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z;
  bVar11 = ProjectToCameraPlanePos
                     ((TVector<double> *)&local_188._s_0,(TFrame3<double> *)&local_1f0._s_0,
                      (TVector<double> *)&local_208._s_0,(TVector2<double> *)&local_218._s_0);
  if (!bVar11) {
    return;
  }
  local_170._s_0.X = dVar36 * dVar28 + (pTVar1->Origin).field0_0x0._s_0.X;
  local_170._s_0.Y = dVar27 * dVar28 + (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y;
  local_170._s_0.Z = dVar33 * dVar28 + (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z;
  bVar11 = ProjectToCameraPlanePos
                     ((TVector<double> *)&local_170._s_0,(TFrame3<double> *)&local_1f0._s_0,
                      (TVector<double> *)&local_208._s_0,(TVector2<double> *)&local_248._s_0);
  if (!bVar11) {
    return;
  }
  dVar33 = (double)CONCAT44(local_238._4_4_,local_238._0_4_);
  dVar28 = local_228._s_0.X - dVar33;
  dVar36 = local_228._s_0.Y - local_238._s_0.Y;
  auVar23._0_8_ = dVar36 * dVar36 + dVar28 * dVar28;
  auVar23._8_8_ = 0;
  auVar21 = sqrtpd(auVar34,auVar23);
  if (auVar21._0_8_ <= 0.0) {
    dVar28 = 0.0;
    dVar36 = 0.0;
  }
  else {
    dVar35 = dVar10 / auVar21._0_8_;
    dVar28 = dVar28 * dVar35;
    dVar36 = dVar36 * dVar35;
  }
  dVar35 = local_218._s_0.X - dVar33;
  dVar26 = local_218._s_0.Y - local_238._s_0.Y;
  auVar24._0_8_ = dVar26 * dVar26 + dVar35 * dVar35;
  auVar24._8_8_ = 0;
  auVar21 = sqrtpd(auVar21,auVar24);
  if (auVar21._0_8_ <= 0.0) {
    dVar35 = 0.0;
    dVar26 = 0.0;
  }
  else {
    dVar27 = dVar10 / auVar21._0_8_;
    dVar35 = dVar35 * dVar27;
    dVar26 = dVar26 * dVar27;
  }
  dVar33 = local_248._s_0.X - dVar33;
  dVar27 = local_248._s_0.Y - local_238._s_0.Y;
  auVar22._0_8_ = dVar33 * dVar33;
  auVar22._8_8_ = 0;
  auVar25._0_8_ = dVar27 * dVar27 + auVar22._0_8_;
  auVar25._8_8_ = 0;
  auVar21 = sqrtpd(auVar22,auVar25);
  if (auVar21._0_8_ <= 0.0) {
    dVar33 = 0.0;
    dVar30 = 0.0;
  }
  else {
    dVar30 = dVar10 / auVar21._0_8_;
    dVar33 = dVar33 * dVar30;
    dVar30 = dVar30 * dVar27;
  }
  if ((bVar12) || (bVar8)) {
    dVar27 = 0.0;
    if (!bVar12) goto LAB_14cbcda8e;
  }
  else {
    dVar27 = dVar26 * dVar36 + dVar35 * dVar28;
    dVar27 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
LAB_14cbcda8e:
    if (!bVar9) {
      dVar28 = dVar30 * dVar36 + dVar33 * dVar28;
      uVar37 = SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar38 = (uint)((ulonglong)dVar28 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      goto LAB_14cbcdab2;
    }
  }
  uVar37 = 0;
  uVar38 = 0;
LAB_14cbcdab2:
  if ((bVar8) || (bVar9)) {
    dVar33 = 0.0;
  }
  else {
    dVar33 = dVar30 * dVar26 + dVar33 * dVar35;
    dVar33 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  uVar18 = 0;
  if (OverlapDotTol < dVar27) {
    iVar14 = iVar15;
    if (dVar31 <= 0.0) {
      iVar14 = (0.0 <= dVar31) - 1;
    }
    iVar13 = iVar15;
    if (dVar32 <= 0.0) {
      iVar13 = (0.0 <= dVar32) - 1;
    }
    local_268[(double)iVar13 <= (double)iVar14] = '\x01';
  }
  if (OverlapDotTol <= (double)CONCAT44(uVar38,uVar37) &&
      (double)CONCAT44(uVar38,uVar37) != OverlapDotTol) {
    if (dVar31 <= 0.0) {
      iVar15 = (0.0 <= dVar31) - 1;
    }
    if (dVar3 <= 0.0) {
      iVar14 = (0.0 <= dVar3) - 1;
    }
    else {
      iVar14 = 1;
    }
    uVar16 = 2;
    if ((double)iVar15 < (double)iVar14) {
      uVar16 = uVar18;
    }
    local_268[uVar16] = '\x01';
  }
  if (OverlapDotTol < dVar33) {
    if (dVar32 <= 0.0) {
      iVar15 = (0.0 <= dVar32) - 1;
    }
    else {
      iVar15 = 1;
    }
    if (dVar3 <= 0.0) {
      iVar17 = (0.0 <= dVar3) - 1;
    }
    local_268[(ulonglong)((double)iVar17 <= (double)iVar15) + 1] = '\x01';
  }
  pcVar19 = local_268;
  local_260 = 2.12242019061758e-310;
  pdVar20 = &local_260;
  local_258 = 0x2713;
  do {
    iVar15 = (int)uVar18;
    if (*pcVar19 == '\0') {
      if (iVar15 == 0) {
        dVar3 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z;
        dVar33 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y;
        dVar31 = dVar3 + dVar3;
        dVar32 = dVar33 + dVar33;
        dVar28 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X;
        dVar36 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W;
        uVar5 = dVar10 - (dVar31 * dVar3 + dVar32 * dVar33);
        uVar6 = dVar31 * dVar36 + dVar32 * dVar28;
        uVar7 = dVar31 * dVar28 - dVar32 * dVar36;
      }
      else if (iVar15 == 1) {
        dVar3 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X;
        dVar33 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z;
        dVar28 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y;
        dVar36 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W;
        dVar31 = dVar33 + dVar33;
        uVar5 = (dVar28 + dVar28) * dVar3 - dVar31 * dVar36;
        uVar6 = dVar10 - ((dVar3 + dVar3) * dVar3 + dVar31 * dVar33);
        uVar7 = (dVar3 + dVar3) * dVar36 + dVar31 * dVar28;
      }
      else if (iVar15 == 2) {
        dVar3 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y;
        dVar33 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X;
        dVar28 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z;
        dVar36 = (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W;
        dVar28 = dVar28 + dVar28;
        uVar5 = (dVar3 + dVar3) * dVar36 + dVar28 * dVar33;
        uVar6 = dVar28 * dVar3 - (dVar33 + dVar33) * dVar36;
        uVar7 = dVar10 - ((dVar33 + dVar33) * dVar33 + (dVar3 + dVar3) * dVar3);
      }
      else {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\FrameTypes.h"
                            ,0x88,L"");
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_120 = (pTVar1->Origin).field0_0x0._s_0.X;
      dStack_118 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y;
      local_110 = (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z;
      local_108 = (double)uVar5;
      local_100 = (double)uVar6;
      local_f8 = (double)uVar7;
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,&local_120,*(undefined4 *)pdVar20,100);
    }
    uVar18 = (ulonglong)(iVar15 + 1U);
    pcVar19 = pcVar19 + 1;
    pdVar20 = (double *)((longlong)pdVar20 + 4);
  } while ((int)(iVar15 + 1U) < 3);
  local_238._0_4_ = 0;
  pcVar4 = *(code **)(pFVar2->_padding_ + 8);
  dStack_e0 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
  dStack_e0 = dStack_e0 * __real_3fe0000000000000;
  local_e8 = (double)CONCAT44(local_238._4_4_,local_238._0_4_);
  local_278 = 0x32;
  (*pcVar4)(pFVar2,pTVar1,0x3e9,&local_e8);
  return;
}

