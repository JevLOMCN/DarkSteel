// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a481840

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlTransform_Settings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Settings.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Settings.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Settings,
                           (UObject *)pUVar1,L"RigUnit_HierarchyAddControlTransform_Settings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Settings.
         OuterSingleton;
}

// ConfigureFrom @ 14a4818d0

void __thiscall
FRigUnit_HierarchyAddControlTransform_Settings::ConfigureFrom
          (FRigUnit_HierarchyAddControlTransform_Settings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  this->_padding_ = (longlong)param_2->DisplayName;
  *(bool *)&this->_padding_ = param_2->AnimationType != VisualCue;
  TArray<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>::operator=
            (&this->FilteredChannels,&param_2->FilteredChannels);
  this->bUsePreferredRotationOrder = param_2->bUsePreferredRotationOrder;
  this->PreferredRotationOrder = param_2->PreferredRotationOrder;
  (this->Proxy).bIsProxy = param_2->AnimationType == ProxyControl;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Proxy).DrivenControls,&param_2->DrivenControls);
  (this->Proxy).ShapeVisibility = param_2->ShapeVisibility;
  FRigUnit_HierarchyAddControlTransform_LimitSettings::ConfigureFrom(&this->Limits,param_1,param_2);
  FRigUnit_HierarchyAddControl_ShapeSettings::ConfigureFrom(&this->Shape,param_1,param_2);
  return;
}

// Configure @ 14a481a80

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FRigUnit_HierarchyAddControlTransform_Settings::Configure
          (FRigUnit_HierarchyAddControlTransform_Settings *this,FRigControlSettings *param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  ERigControlAnimationType EVar5;
  
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (param_1->DisplayName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (param_1->DisplayName).Number = uVar3;
  EVar5 = VisualCue;
  lVar4 = this->_padding_;
  param_1->ControlType = EulerTransform;
  if ((char)lVar4 != '\0') {
    EVar5 = AnimationControl;
  }
  param_1->AnimationType = EVar5;
  TArray<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->FilteredChannels,&this->FilteredChannels);
  param_1->bUsePreferredRotationOrder = this->bUsePreferredRotationOrder;
  param_1->PreferredRotationOrder = this->PreferredRotationOrder;
  if ((this->Proxy).bIsProxy != false) {
    param_1->AnimationType = ProxyControl;
  }
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->DrivenControls,&(this->Proxy).DrivenControls);
  param_1->ShapeVisibility = (this->Proxy).ShapeVisibility;
  FRigUnit_HierarchyAddControlTransform_LimitSettings::Configure(&this->Limits,param_1);
  param_1->bShapeVisible = (this->Shape).bVisible;
  param_1->ShapeName = (this->Shape).Name;
  uVar1 = *(undefined8 *)((longlong)&(this->Shape).Color.field0_0x0 + 8);
  *(undefined8 *)&(param_1->ShapeColor).field0_0x0 = *(undefined8 *)&(this->Shape).Color.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->ShapeColor).field0_0x0 + 8) = uVar1;
  dVar2 = (this->Shape).Transform.Rotation.XY.m128d_f64[1];
  (param_1->ShapeTransform).Rotation.XY.m128d_f64[0] =
       (this->Shape).Transform.Rotation.XY.m128d_f64[0];
  (param_1->ShapeTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (this->Shape).Transform.Rotation.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Rotation.ZW.m128d_f64[0] =
       (this->Shape).Transform.Rotation.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (this->Shape).Transform.Translation.XY.m128d_f64[1];
  (param_1->ShapeTransform).Translation.XY.m128d_f64[0] =
       (this->Shape).Transform.Translation.XY.m128d_f64[0];
  (param_1->ShapeTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (this->Shape).Transform.Translation.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Translation.ZW.m128d_f64[0] =
       (this->Shape).Transform.Translation.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (this->Shape).Transform.Scale3D.XY.m128d_f64[1];
  (param_1->ShapeTransform).Scale3D.XY.m128d_f64[0] =
       (this->Shape).Transform.Scale3D.XY.m128d_f64[0];
  (param_1->ShapeTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (this->Shape).Transform.Scale3D.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[0] =
       (this->Shape).Transform.Scale3D.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  return;
}

// FRigUnit_HierarchyAddControlTransform_Settings @ 14a510bd0

FRigUnit_HierarchyAddControlTransform_Settings * __thiscall
FRigUnit_HierarchyAddControlTransform_Settings::FRigUnit_HierarchyAddControlTransform_Settings
          (FRigUnit_HierarchyAddControlTransform_Settings *this)

{
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlTransform_Settings__6B_;
  this->InitialSpace = LocalSpace;
  this->bUsePreferredRotationOrder = false;
  this->PreferredRotationOrder = YZX;
  FRigUnit_HierarchyAddControlTransform_LimitSettings::
  FRigUnit_HierarchyAddControlTransform_LimitSettings(&this->Limits);
  FRigUnit_HierarchyAddControl_ShapeSettings::FRigUnit_HierarchyAddControl_ShapeSettings
            (&this->Shape);
  (this->Proxy).bIsProxy = false;
  (this->Proxy).DrivenControls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Proxy).DrivenControls.ArrayNum = 0;
  (this->Proxy).DrivenControls.ArrayMax = 0;
  (this->Proxy).ShapeVisibility = BasedOnSelection;
  (this->FilteredChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredChannels).ArrayNum = 0;
  (this->FilteredChannels).ArrayMax = 0;
  return this;
}

// ~FRigUnit_HierarchyAddControlTransform_Settings @ 14a5187e0

void __thiscall
FRigUnit_HierarchyAddControlTransform_Settings::~FRigUnit_HierarchyAddControlTransform_Settings
          (FRigUnit_HierarchyAddControlTransform_Settings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlTransform_Settings__6B_;
  pFVar1 = (this->FilteredChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Proxy).DrivenControls.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControl_Settings__6B_;
  return;
}

// operator= @ 14a51a7c0

/* WARNING: Type propagation algorithm not settling */

FRigUnit_HierarchyAddControlTransform_Settings * __thiscall
FRigUnit_HierarchyAddControlTransform_Settings::operator=
          (FRigUnit_HierarchyAddControlTransform_Settings *this,
          FRigUnit_HierarchyAddControlTransform_Settings *param_1)

{
  double dVar1;
  undefined8 uVar2;
  FRigControlLimitEnabled FVar3;
  FRigControlLimitEnabled FVar4;
  FRigControlLimitEnabled FVar5;
  FRigControlLimitEnabled FVar6;
  FRigControlLimitEnabled FVar7;
  FRigControlLimitEnabled FVar8;
  FRigControlLimitEnabled FVar9;
  undefined6 uVar10;
  bool bVar11;
  undefined7 uVar12;
  undefined3 uVar13;
  FNameEntryId FVar14;
  
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->InitialSpace = param_1->InitialSpace;
  this->bUsePreferredRotationOrder = param_1->bUsePreferredRotationOrder;
  this->PreferredRotationOrder = param_1->PreferredRotationOrder;
  FVar3 = (param_1->Limits).LimitTranslationY;
  FVar4 = (param_1->Limits).LimitTranslationZ;
  FVar5 = (param_1->Limits).LimitPitch;
  FVar6 = (param_1->Limits).LimitYaw;
  FVar7 = (param_1->Limits).LimitRoll;
  FVar8 = (param_1->Limits).LimitScaleX;
  FVar9 = (param_1->Limits).LimitScaleY;
  (this->Limits).LimitTranslationX = (param_1->Limits).LimitTranslationX;
  (this->Limits).LimitTranslationY = FVar3;
  (this->Limits).LimitTranslationZ = FVar4;
  (this->Limits).LimitPitch = FVar5;
  (this->Limits).LimitYaw = FVar6;
  (this->Limits).LimitRoll = FVar7;
  (this->Limits).LimitScaleX = FVar8;
  (this->Limits).LimitScaleY = FVar9;
  uVar10 = *(undefined6 *)&(param_1->Limits).field_0x12;
  dVar1 = (param_1->Limits).MinValue.Location.field0_0x0._s_0.X;
  (this->Limits).LimitScaleZ = (param_1->Limits).LimitScaleZ;
  *(undefined6 *)&(this->Limits).field_0x12 = uVar10;
  (this->Limits).MinValue.Location.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Limits).MinValue.Location.field0_0x0._s_0.Z;
  (this->Limits).MinValue.Location.field0_0x0._s_0.Y =
       (param_1->Limits).MinValue.Location.field0_0x0._s_0.Y;
  (this->Limits).MinValue.Location.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_1->Limits).MinValue.Rotation.Yaw;
  (this->Limits).MinValue.Rotation.Pitch = (param_1->Limits).MinValue.Rotation.Pitch;
  (this->Limits).MinValue.Rotation.Yaw = dVar1;
  dVar1 = (param_1->Limits).MinValue.Scale.field0_0x0._s_0.X;
  (this->Limits).MinValue.Rotation.Roll = (param_1->Limits).MinValue.Rotation.Roll;
  (this->Limits).MinValue.Scale.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Limits).MinValue.Scale.field0_0x0._s_0.Z;
  (this->Limits).MinValue.Scale.field0_0x0._s_0.Y =
       (param_1->Limits).MinValue.Scale.field0_0x0._s_0.Y;
  (this->Limits).MinValue.Scale.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_1->Limits).MaxValue.Location.field0_0x0._s_0.Y;
  (this->Limits).MaxValue.Location.field0_0x0._s_0.X =
       (param_1->Limits).MaxValue.Location.field0_0x0._s_0.X;
  (this->Limits).MaxValue.Location.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Limits).MaxValue.Rotation.Pitch;
  (this->Limits).MaxValue.Location.field0_0x0._s_0.Z =
       (param_1->Limits).MaxValue.Location.field0_0x0._s_0.Z;
  (this->Limits).MaxValue.Rotation.Pitch = dVar1;
  dVar1 = (param_1->Limits).MaxValue.Rotation.Roll;
  (this->Limits).MaxValue.Rotation.Yaw = (param_1->Limits).MaxValue.Rotation.Yaw;
  (this->Limits).MaxValue.Rotation.Roll = dVar1;
  dVar1 = (param_1->Limits).MaxValue.Scale.field0_0x0._s_0.Y;
  (this->Limits).MaxValue.Scale.field0_0x0._s_0.X =
       (param_1->Limits).MaxValue.Scale.field0_0x0._s_0.X;
  (this->Limits).MaxValue.Scale.field0_0x0._s_0.Y = dVar1;
  bVar11 = (param_1->Limits).bDrawLimits;
  uVar12 = *(undefined7 *)&(param_1->Limits).field_0xa9;
  (this->Limits).MaxValue.Scale.field0_0x0._s_0.Z =
       (param_1->Limits).MaxValue.Scale.field0_0x0._s_0.Z;
  (this->Limits).bDrawLimits = bVar11;
  *(undefined7 *)&(this->Limits).field_0xa9 = uVar12;
  uVar13 = *(undefined3 *)&(param_1->Shape).field_0x1;
  FVar14.Value = (param_1->Shape).Name.ComparisonIndex.Value;
  uVar2 = *(undefined8 *)&(param_1->Shape).Name.Number;
  (this->Shape).bVisible = (param_1->Shape).bVisible;
  *(undefined3 *)&(this->Shape).field_0x1 = uVar13;
  (this->Shape).Name.ComparisonIndex = (FNameEntryId)FVar14.Value;
  *(undefined8 *)&(this->Shape).Name.Number = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->Shape).Color.field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Shape).Color.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->Shape).Color.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Shape).Color.field0_0x0 + 0xc) = uVar2;
  dVar1 = (param_1->Shape).Transform.Rotation.XY.m128d_f64[1];
  (this->Shape).Transform.Rotation.XY.m128d_f64[0] =
       (param_1->Shape).Transform.Rotation.XY.m128d_f64[0];
  (this->Shape).Transform.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Shape).Transform.Rotation.ZW.m128d_f64[1];
  (this->Shape).Transform.Rotation.ZW.m128d_f64[0] =
       (param_1->Shape).Transform.Rotation.ZW.m128d_f64[0];
  (this->Shape).Transform.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Shape).Transform.Translation.XY.m128d_f64[1];
  (this->Shape).Transform.Translation.XY.m128d_f64[0] =
       (param_1->Shape).Transform.Translation.XY.m128d_f64[0];
  (this->Shape).Transform.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Shape).Transform.Translation.ZW.m128d_f64[1];
  (this->Shape).Transform.Translation.ZW.m128d_f64[0] =
       (param_1->Shape).Transform.Translation.ZW.m128d_f64[0];
  (this->Shape).Transform.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Shape).Transform.Scale3D.XY.m128d_f64[1];
  (this->Shape).Transform.Scale3D.XY.m128d_f64[0] =
       (param_1->Shape).Transform.Scale3D.XY.m128d_f64[0];
  (this->Shape).Transform.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Shape).Transform.Scale3D.ZW.m128d_f64[1];
  (this->Shape).Transform.Scale3D.ZW.m128d_f64[0] =
       (param_1->Shape).Transform.Scale3D.ZW.m128d_f64[0];
  (this->Shape).Transform.Scale3D.ZW.m128d_f64[1] = dVar1;
  (this->Proxy).bIsProxy = (param_1->Proxy).bIsProxy;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Proxy).DrivenControls,&(param_1->Proxy).DrivenControls);
  (this->Proxy).ShapeVisibility = (param_1->Proxy).ShapeVisibility;
  TArray<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>::operator=
            (&this->FilteredChannels,&param_1->FilteredChannels);
  return this;
}

