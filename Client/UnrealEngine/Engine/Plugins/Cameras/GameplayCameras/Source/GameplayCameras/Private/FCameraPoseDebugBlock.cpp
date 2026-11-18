// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// FCameraPoseDebugBlock @ 14d58ce30

FCameraPoseDebugBlock * __thiscall
UE::Cameras::FCameraPoseDebugBlock::FCameraPoseDebugBlock
          (FCameraPoseDebugBlock *this,FCameraPose *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar9;
  FCameraPoseFlags FVar10;
  undefined3 uVar11;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCameraPoseDebugBlock_Cameras_UE__6B_;
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  (this->CameraPose).Location.field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->CameraPose).Location.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).Pitch;
  (this->CameraPose).Location.field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  (this->CameraPose).Rotation.Pitch = dVar1;
  dVar1 = (param_1->Rotation).Roll;
  (this->CameraPose).Rotation.Yaw = (param_1->Rotation).Yaw;
  (this->CameraPose).Rotation.Roll = dVar1;
  fVar2 = param_1->FieldOfView;
  fVar3 = param_1->FocalLength;
  (this->CameraPose).TargetDistance = param_1->TargetDistance;
  (this->CameraPose).FieldOfView = fVar2;
  (this->CameraPose).FocalLength = fVar3;
  fVar2 = param_1->Aperture;
  fVar3 = param_1->ShutterSpeed;
  fVar4 = param_1->FocusDistance;
  (this->CameraPose).OrthographicWidth = param_1->OrthographicWidth;
  (this->CameraPose).Aperture = fVar2;
  (this->CameraPose).ShutterSpeed = fVar3;
  (this->CameraPose).FocusDistance = fVar4;
  fVar2 = param_1->SensorHeight;
  fVar3 = param_1->SensorHorizontalOffset;
  fVar4 = param_1->SensorVerticalOffset;
  (this->CameraPose).SensorWidth = param_1->SensorWidth;
  (this->CameraPose).SensorHeight = fVar2;
  (this->CameraPose).SensorHorizontalOffset = fVar3;
  (this->CameraPose).SensorVerticalOffset = fVar4;
  fVar2 = param_1->SqueezeFactor;
  fVar3 = param_1->Overscan;
  iVar5 = param_1->DiaphragmBladeCount;
  (this->CameraPose).ISO = param_1->ISO;
  (this->CameraPose).SqueezeFactor = fVar2;
  (this->CameraPose).Overscan = fVar3;
  (this->CameraPose).DiaphragmBladeCount = iVar5;
  fVar2 = param_1->FarClippingPlane;
  fVar3 = param_1->PhysicalCameraBlendWeight;
  bVar6 = param_1->EnablePhysicalCamera;
  bVar7 = param_1->ConstrainAspectRatio;
  bVar8 = param_1->OverrideAspectRatioAxisConstraint;
  TVar9.Value = (param_1->AspectRatioAxisConstraint).Value;
  (this->CameraPose).NearClippingPlane = param_1->NearClippingPlane;
  (this->CameraPose).FarClippingPlane = fVar2;
  (this->CameraPose).PhysicalCameraBlendWeight = fVar3;
  (this->CameraPose).EnablePhysicalCamera = bVar6;
  (this->CameraPose).ConstrainAspectRatio = bVar7;
  (this->CameraPose).OverrideAspectRatioAxisConstraint = bVar8;
  (this->CameraPose).AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar9.Value;
  FVar10 = param_1->ChangedFlags;
  uVar11 = *(undefined3 *)&param_1->field_0x85;
  (this->CameraPose).ProjectionMode =
       (TEnumAsByte<ECameraProjectionMode::Type>)(param_1->ProjectionMode).Value;
  (this->CameraPose).ChangedFlags = FVar10;
  *(undefined3 *)&(this->CameraPose).field_0x85 = uVar11;
  (this->ShowUnchangedCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowUnchangedCVarName).Data.ArrayNum = 0;
  (this->ShowUnchangedCVarName).Data.ArrayMax = 0;
  this->bDrawText = true;
  this->bDrawInExternalRendering = true;
  return this;
}

// FCameraPoseDebugBlock @ 14d58ced0

FCameraPoseDebugBlock * __thiscall
UE::Cameras::FCameraPoseDebugBlock::FCameraPoseDebugBlock(FCameraPoseDebugBlock *this)

{
  undefined1 *puVar1;
  
  (this->CameraPose).ChangedFlags.ProjectionMode = false;
  this->_padding_ = (longlong)&___7FCameraPoseDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  (this->CameraPose).TargetDistance = 1000.0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CameraPose).Location.field0_0x0._s_0.X = 0.0;
  (this->CameraPose).Location.field0_0x0._s_0.Y = 0.0;
  (this->CameraPose).Location.field0_0x0._s_0.Z = 0.0;
  (this->CameraPose).Rotation.Pitch = 0.0;
  (this->CameraPose).Rotation.Yaw = 0.0;
  (this->CameraPose).Rotation.Roll = 0.0;
  (this->CameraPose).FieldOfView = -1.0;
  (this->CameraPose).FocalLength = 35.0;
  (this->CameraPose).OrthographicWidth = 1536.0;
  (this->CameraPose).Aperture = 2.8;
  (this->CameraPose).ShutterSpeed = 60.0;
  (this->CameraPose).FocusDistance = -1.0;
  (this->CameraPose).SensorWidth = 24.89;
  (this->CameraPose).SensorHeight = 18.67;
  (this->CameraPose).SensorHorizontalOffset = 0.0;
  (this->CameraPose).SensorVerticalOffset = 0.0;
  (this->CameraPose).ISO = 100.0;
  (this->CameraPose).SqueezeFactor = 1.0;
  (this->CameraPose).Overscan = 0.0;
  (this->CameraPose).DiaphragmBladeCount = 8;
  (this->CameraPose).NearClippingPlane = 10.0;
  (this->CameraPose).FarClippingPlane = -1.0;
  (this->CameraPose).PhysicalCameraBlendWeight = 0.0;
  (this->CameraPose).EnablePhysicalCamera = false;
  (this->CameraPose).ConstrainAspectRatio = false;
  (this->CameraPose).OverrideAspectRatioAxisConstraint = false;
  (this->CameraPose).AspectRatioAxisConstraint = '\0';
  *(undefined4 *)&(this->CameraPose).ProjectionMode = 0;
  (this->ShowUnchangedCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowUnchangedCVarName).Data.ArrayNum = 0;
  (this->ShowUnchangedCVarName).Data.ArrayMax = 0;
  this->bDrawText = true;
  this->bDrawInExternalRendering = true;
  return this;
}

// GetTypeID @ 14d5abb90

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraPoseDebugBlock::GetTypeID(FCameraPoseDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4740

bool __thiscall
UE::Cameras::FCameraPoseDebugBlock::IsKindOf
          (FCameraPoseDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraPoseDebugBlock>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5ba740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraPoseDebugBlock::OnDebugDraw
          (FCameraPoseDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  undefined1 uVar1;
  uchar uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FColor FVar6;
  bool bVar7;
  FColor_u_0 FVar8;
  longlong *plVar9;
  TQuat<double> *pTVar10;
  UFont *pUVar11;
  FText *pFVar12;
  FSceneView *this_00;
  wchar_t *pwVar13;
  FColor_u_0 FVar14;
  FColor_u_0 *pFVar15;
  float fVar16;
  double dVar17;
  char local_res8;
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_3f8 [2];
  FCameraPoseDebugBlock *local_3f0;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  TVector<double>_u_0 local_388;
  TVector2<double>_u_0 local_370;
  TVector2<double>_u_0 local_360;
  FText local_350;
  TTransform<double> local_338;
  TQuat<double> local_2b8;
  FCanvasTextItem local_298;
  
  if (this->bDrawText == false) goto LAB_14d5bb119;
  local_res8 = '\0';
  if (1 < (this->ShowUnchangedCVarName).Data.ArrayNum) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->ShowUnchangedCVarName).Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(this->ShowUnchangedCVarName).Data.AllocatorInstance.Data;
    }
    plVar9 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,pwVar13,0);
    if ((plVar9 != (longlong *)0x0) ||
       (local_3f0 = this,
       bVar7 = `UE::Cameras::FCameraPoseDebugBlock::OnDebugDraw'::__l9::<lambda_1>::operator()
                         (&local_3f0), bVar7)) {
      local_res8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    }
  }
  FVar14 = FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0;
  FVar6.field0_0x0 = FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
  local_res20[0] = FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
  local_3f8[0] = FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0;
  if ((local_res8 != '\0') || ((this->CameraPose).ChangedFlags.Location)) {
    dVar17 = (this->CameraPose).Location.field0_0x0._s_0.Z;
    FCameraDebugRenderer::FlushText(param_2);
    FVar8 = FVar14;
    if ((this->CameraPose).ChangedFlags.Location) {
      FVar8 = FVar6.field0_0x0;
    }
    (param_2->DrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar8;
    local_388._s_0.Z = dVar17;
    ::FString::PrintfImpl(&local_3e8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if (local_res8 == '\0') goto LAB_14d5ba904;
LAB_14d5ba912:
    dVar17 = (this->CameraPose).Rotation.Roll;
    FCameraDebugRenderer::FlushText(param_2);
    FVar8 = FVar14;
    if ((this->CameraPose).ChangedFlags.Rotation) {
      FVar8 = FVar6.field0_0x0;
    }
    (param_2->DrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar8;
    local_388._s_0.Z = dVar17;
    ::FString::PrintfImpl(&local_3d8,L"P=%f Y=%f R=%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    if (local_res8 == '\0') goto LAB_14d5ba9a2;
LAB_14d5ba9ac:
    FCameraDebugRenderer::FlushText(param_2);
    FVar8 = FVar14;
    if ((this->CameraPose).ChangedFlags.TargetDistance) {
      FVar8 = FVar6.field0_0x0;
    }
    (param_2->DrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar8;
    ::FString::PrintfImpl(&local_3c8,L"%f");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
    if (local_res8 == '\0') goto LAB_14d5baa20;
LAB_14d5baa2a:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.Aperture) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"Aperture",(this->CameraPose).Aperture,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5baa5c;
LAB_14d5baa66:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.ShutterSpeed) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"ShutterSpeed",(this->CameraPose).ShutterSpeed,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5baa98;
LAB_14d5baaa2:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.FocusDistance) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"FocusDistance",(this->CameraPose).FocusDistance,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5baad4;
LAB_14d5baade:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.SensorWidth) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"SensorWidth",(this->CameraPose).SensorWidth,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bab10;
LAB_14d5bab1a:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.SensorHeight) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"SensorHeight",(this->CameraPose).SensorHeight,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bab4c;
LAB_14d5bab5a:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.SensorHorizontalOffset) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"SensorHorizontalOffset",(this->CameraPose).SensorHorizontalOffset,
               (FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bab96;
LAB_14d5baba0:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.SensorVerticalOffset) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"SensorVerticalOffset",(this->CameraPose).SensorVerticalOffset,
               (FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5babd3;
LAB_14d5babdd:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.ISO) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"ISO",(this->CameraPose).ISO,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bac10;
LAB_14d5bac1a:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.SqueezeFactor) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"SqueezeFactor",(this->CameraPose).SqueezeFactor,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bac4d;
LAB_14d5bac57:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.Overscan) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"Overscan",(this->CameraPose).Overscan,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bac8a;
LAB_14d5bac94:
    FCameraDebugRenderer::FlushText(param_2);
    FVar8 = FVar14;
    if ((this->CameraPose).ChangedFlags.DiaphragmBladeCount) {
      FVar8 = FVar6.field0_0x0;
    }
    (param_2->DrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar8;
    ::FString::PrintfImpl(&local_3b8,L"%d");
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    if (local_res8 == '\0') goto LAB_14d5bad0d;
LAB_14d5bad17:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.PhysicalCameraBlendWeight) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"PhysicalCameraBlendWeight",(this->CameraPose).PhysicalCameraBlendWeight,
               (FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bad4a;
LAB_14d5bad54:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.NearClippingPlane) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"NearClippingPlane",(this->CameraPose).NearClippingPlane,
               (FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bad84;
LAB_14d5bad90:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.FarClippingPlane) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"FarClippingPlane",(this->CameraPose).FarClippingPlane,
               (FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5badca;
LAB_14d5badd2:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.OrthographicWidth) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"OrthographicWidth",(this->CameraPose).OrthographicWidth,
               (FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bae04;
LAB_14d5bae0c:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.FieldOfView) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"FieldOfView",(this->CameraPose).FieldOfView,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bae3e;
LAB_14d5bae46:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.FocalLength) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<float>
              (param_2,L"FocalLength",(this->CameraPose).FocalLength,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5bae78;
LAB_14d5bae80:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.EnablePhysicalCamera) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<bool>
              (param_2,L"EnablePhysicalCamera",(this->CameraPose).EnablePhysicalCamera,
               (FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5baeb4;
LAB_14d5baebc:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.ConstrainAspectRatio) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<bool>
              (param_2,L"ConstrainAspectRatio",(this->CameraPose).ConstrainAspectRatio,
               (FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5baef0;
LAB_14d5baef8:
    pFVar15 = local_res20;
    if (!(this->CameraPose).ChangedFlags.OverrideAspectRatioAxisConstraint) {
      pFVar15 = local_3f8;
    }
    Cameras::Private::DebugDrawCameraPoseField<bool>
              (param_2,L"OverrideAspectRatioAxisConstraint",
               (this->CameraPose).OverrideAspectRatioAxisConstraint,(FColor *)&pFVar15->_s_0);
    if (local_res8 == '\0') goto LAB_14d5baf2c;
LAB_14d5baf38:
    uVar2 = (this->CameraPose).AspectRatioAxisConstraint.Value;
    FCameraDebugRenderer::FlushText(param_2);
    FVar8 = FVar14;
    if ((this->CameraPose).ChangedFlags.AspectRatioAxisConstraint) {
      FVar8 = FVar6.field0_0x0;
    }
    (param_2->DrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar8;
    if (uVar2 == '\0') {
      pwVar13 = L"Maintain Y-Axis FOV";
    }
    else if (uVar2 == '\x01') {
      pwVar13 = L"Maintain X-Axis FOV";
    }
    else if (uVar2 == '\x02') {
      pwVar13 = L"Maintain Major Axis FOV";
    }
    else {
      pwVar13 = L"Invalid";
    }
    ::FString::FString(&local_3a8,pwVar13);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_res8 == '\0') goto LAB_14d5bafda;
LAB_14d5bafe8:
    uVar2 = (this->CameraPose).ProjectionMode.Value;
    FCameraDebugRenderer::FlushText(param_2);
    if ((this->CameraPose).ChangedFlags.ProjectionMode) {
      FVar14 = FVar6.field0_0x0;
    }
    (param_2->DrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar14;
    if (uVar2 == '\0') {
      pwVar13 = L"Perspective";
    }
    else if (uVar2 == '\x01') {
      pwVar13 = L"Orthographic";
    }
    else {
      pwVar13 = L"Invalid";
    }
    ::FString::FString(&local_398,pwVar13);
    FCameraDebugRenderer::AddText(param_2,L"%s  : %s\n");
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_14d5ba904:
    if ((this->CameraPose).ChangedFlags.Rotation) goto LAB_14d5ba912;
LAB_14d5ba9a2:
    if ((this->CameraPose).ChangedFlags.TargetDistance) goto LAB_14d5ba9ac;
LAB_14d5baa20:
    if ((this->CameraPose).ChangedFlags.Aperture) goto LAB_14d5baa2a;
LAB_14d5baa5c:
    if ((this->CameraPose).ChangedFlags.ShutterSpeed) goto LAB_14d5baa66;
LAB_14d5baa98:
    if ((this->CameraPose).ChangedFlags.FocusDistance) goto LAB_14d5baaa2;
LAB_14d5baad4:
    if ((this->CameraPose).ChangedFlags.SensorWidth) goto LAB_14d5baade;
LAB_14d5bab10:
    if ((this->CameraPose).ChangedFlags.SensorHeight) goto LAB_14d5bab1a;
LAB_14d5bab4c:
    if ((this->CameraPose).ChangedFlags.SensorHorizontalOffset) goto LAB_14d5bab5a;
LAB_14d5bab96:
    if ((this->CameraPose).ChangedFlags.SensorVerticalOffset) goto LAB_14d5baba0;
LAB_14d5babd3:
    if ((this->CameraPose).ChangedFlags.ISO) goto LAB_14d5babdd;
LAB_14d5bac10:
    if ((this->CameraPose).ChangedFlags.SqueezeFactor) goto LAB_14d5bac1a;
LAB_14d5bac4d:
    if ((this->CameraPose).ChangedFlags.Overscan) goto LAB_14d5bac57;
LAB_14d5bac8a:
    if ((this->CameraPose).ChangedFlags.DiaphragmBladeCount) goto LAB_14d5bac94;
LAB_14d5bad0d:
    if ((this->CameraPose).ChangedFlags.PhysicalCameraBlendWeight) goto LAB_14d5bad17;
LAB_14d5bad4a:
    if ((this->CameraPose).ChangedFlags.NearClippingPlane) goto LAB_14d5bad54;
LAB_14d5bad84:
    if ((this->CameraPose).ChangedFlags.FarClippingPlane) goto LAB_14d5bad90;
LAB_14d5badca:
    if ((this->CameraPose).ChangedFlags.OrthographicWidth) goto LAB_14d5badd2;
LAB_14d5bae04:
    if ((this->CameraPose).ChangedFlags.FieldOfView) goto LAB_14d5bae0c;
LAB_14d5bae3e:
    if ((this->CameraPose).ChangedFlags.FocalLength) goto LAB_14d5bae46;
LAB_14d5bae78:
    if ((this->CameraPose).ChangedFlags.EnablePhysicalCamera) goto LAB_14d5bae80;
LAB_14d5baeb4:
    if ((this->CameraPose).ChangedFlags.ConstrainAspectRatio) goto LAB_14d5baebc;
LAB_14d5baef0:
    if ((this->CameraPose).ChangedFlags.OverrideAspectRatioAxisConstraint) goto LAB_14d5baef8;
LAB_14d5baf2c:
    if ((this->CameraPose).ChangedFlags.AspectRatioAxisConstraint) goto LAB_14d5baf38;
LAB_14d5bafda:
    if ((this->CameraPose).ChangedFlags.ProjectionMode) goto LAB_14d5bafe8;
  }
  FCameraDebugRenderer::FlushText(param_2);
  (param_2->DrawColor).field0_0x0._s_0 =
       (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
  FCameraPose::GetEffectiveFieldOfView
            ((this->CameraPose).FocalLength,(this->CameraPose).FieldOfView,
             (this->CameraPose).SensorWidth,(this->CameraPose).SensorHeight,
             (this->CameraPose).SqueezeFactor,(this->CameraPose).Overscan);
  FCameraDebugRenderer::AddText(param_2,L"Effective FOV  : %f\n");
  FCameraDebugRenderer::AddText(param_2,L"Effective Aspect Ratio  : %f\n");
LAB_14d5bb119:
  if ((this->bDrawInExternalRendering != false) && (param_2->bIsExternalRendering != false)) {
    local_338.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_338.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_338.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_338.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_338.Translation.XY.m128d_f64[0] = (this->CameraPose).Location.field0_0x0._s_0.X;
    local_338.Translation.XY.m128d_f64[1] = (this->CameraPose).Location.field0_0x0._s_0.Y;
    local_338.Translation.ZW.m128d_f64[0] = (this->CameraPose).Location.field0_0x0._s_0.Z;
    local_338.Translation.ZW.m128d_f64[1] = 0.0;
    pTVar10 = UE::Math::TRotator<double>::Quaternion(&(this->CameraPose).Rotation,&local_2b8);
    local_338.Rotation.XY.m128d_f64[0] = pTVar10->X;
    local_338.Rotation.XY.m128d_f64[1] = pTVar10->Y;
    local_338.Rotation.ZW.m128d_f64[0] = pTVar10->Z;
    local_338.Rotation.ZW.m128d_f64[1] = pTVar10->W;
    dVar17 = FCameraPose::GetEffectiveFieldOfView
                       ((this->CameraPose).FocalLength,(this->CameraPose).FieldOfView,
                        (this->CameraPose).SensorWidth,(this->CameraPose).SensorHeight,
                        (this->CameraPose).SqueezeFactor,(this->CameraPose).Overscan);
    fVar16 = (this->CameraPose).SensorHeight;
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = (this->CameraPose).SensorWidth / fVar16;
    }
    FCameraDebugRenderer::DrawCamera
              (param_2,&local_338,(float)dVar17,fVar16,(float)(this->CameraPose).TargetDistance,
               &GlobalCameraPoseLineColor,0.0,__real_3f800000);
    if (1 < GlobalCameraPoseLabel.Data.ArrayNum) {
      dVar17 = (double)GGameplayCamerasDebugCameraPoseLabelWorldOffset;
      pUVar11 = UEngine::GetLargeFont();
      local_388._s_0.X = (this->CameraPose).Location.field0_0x0._s_0.X;
      local_388._s_0.Y = (this->CameraPose).Location.field0_0x0._s_0.Y;
      local_388._s_0.Z = (this->CameraPose).Location.field0_0x0._s_0.Z + dVar17;
      if ((param_2->Canvas != (FCanvas *)0x0) &&
         (this_00 = param_2->SceneView, this_00 != (FSceneView *)0x0)) {
        if (pUVar11 == (UFont *)0x0) {
          pUVar11 = UEngine::GetSmallFont();
          this_00 = param_2->SceneView;
        }
        if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X != 0.0) ||
           (uVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X,
           uVar4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,
           UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y != 0.0)) {
          uVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X /
                  (double)(*(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 8) -
                          *(int *)&(this_00->UnscaledViewRect).field0_0x0);
          uVar4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y /
                  (double)(*(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 0xc) -
                          *(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 4));
        }
        FSceneView::WorldToPixel
                  (this_00,(TVector<double> *)&local_388._s_0,(TVector2<double> *)&local_370._s_0);
        pFVar12 = FText::FromString(&local_350,&GlobalCameraPoseLabel);
        local_360._s_0.X = local_370._s_0.X + (double)uVar5;
        local_360._s_0.Y = local_370._s_0.Y + (double)uVar4;
        FCanvasTextItem::FCanvasTextItem
                  (&local_298,(TVector2<double> *)&local_360._s_0,pFVar12,pUVar11,
                   &GlobalCameraPoseLineColor);
        if (local_350.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_350.TextData.Reference + 0x10))();
        }
        local_298._padding_ = ___xmm_3ff00000000000003ff0000000000000;
        local_298._padding_ = _UNK_150689688;
        local_298._padding_._4_4_ = 2;
        FCanvas::DrawItem(param_2->Canvas,(FCanvasItem *)&local_298);
        FCanvasTextItem::~FCanvasTextItem(&local_298);
      }
    }
  }
  return;
}

// OnSerialize @ 14d5c36d0

void __thiscall
UE::Cameras::FCameraPoseDebugBlock::OnSerialize(FCameraPoseDebugBlock *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->CameraPose,0x88);
  ::operator<<(param_1,&this->ShowUnchangedCVarName);
  ::operator<<(param_1,&this->bDrawText);
  ::operator<<(param_1,&this->bDrawInExternalRendering);
  return;
}

// operator() @ 150583210

bool __thiscall
`UE::Cameras::FCameraPoseDebugBlock::OnDebugDraw'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2800056151410999213>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_2800056151410999213>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

