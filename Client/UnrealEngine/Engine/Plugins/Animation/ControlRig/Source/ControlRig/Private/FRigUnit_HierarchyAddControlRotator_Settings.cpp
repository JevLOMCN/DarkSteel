// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a47fce0

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlRotator_Settings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Settings.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Settings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Settings,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlRotator_Settings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Settings.
         OuterSingleton;
}

// ConfigureFrom @ 14a47fdc0

void __thiscall
FRigUnit_HierarchyAddControlRotator_Settings::ConfigureFrom
          (FRigUnit_HierarchyAddControlRotator_Settings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  double dVar6;
  uint uVar7;
  bool bVar8;
  TRotator<double> *pTVar9;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TRotator<double> local_38;
  TRotator<double> local_20;
  
  uVar7 = (param_2->DisplayName).Number;
  *(uint *)&this->field_0x8 = (param_2->DisplayName).ComparisonIndex.Value;
  *(uint *)&this->field_0xc = uVar7;
  this->field_0x10 = param_2->AnimationType != VisualCue;
  TArray<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>::operator=
            (&this->FilteredChannels,&param_2->FilteredChannels);
  (this->Proxy).bIsProxy = param_2->AnimationType == ProxyControl;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Proxy).DrivenControls,&param_2->DrivenControls);
  (this->Proxy).ShapeVisibility = param_2->ShapeVisibility;
  if ((param_2->LimitEnabled).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->Limits).LimitPitch =
       *(FRigControlLimitEnabled *)(param_2->LimitEnabled).AllocatorInstance.Data;
  if ((param_2->LimitEnabled).ArrayNum < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->Limits).LimitYaw =
       *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 2);
  if ((param_2->LimitEnabled).ArrayNum < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->Limits).LimitRoll =
       *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 4);
  uVar1 = (param_2->MinimumValue).FloatStorage.Float00;
  uVar3 = (param_2->MinimumValue).FloatStorage.Float01;
  local_68._s_0.X = (double)(float)uVar1;
  local_68._s_0.Y = (double)(float)uVar3;
  local_68._s_0.Z = (double)(param_2->MinimumValue).FloatStorage.Float02;
  pTVar9 = UE::Math::TRotator<double>::MakeFromEuler(&local_38,(TVector<double> *)&local_68._s_0);
  dVar6 = pTVar9->Yaw;
  (this->Limits).MinValue.Pitch = pTVar9->Pitch;
  (this->Limits).MinValue.Yaw = dVar6;
  (this->Limits).MinValue.Roll = pTVar9->Roll;
  uVar2 = (param_2->MaximumValue).FloatStorage.Float00;
  uVar4 = (param_2->MaximumValue).FloatStorage.Float01;
  local_50._s_0.X = (double)(float)uVar2;
  local_50._s_0.Y = (double)(float)uVar4;
  local_50._s_0.Z = (double)(param_2->MaximumValue).FloatStorage.Float02;
  pTVar9 = UE::Math::TRotator<double>::MakeFromEuler(&local_20,(TVector<double> *)&local_50._s_0);
  dVar6 = pTVar9->Yaw;
  (this->Limits).MaxValue.Pitch = pTVar9->Pitch;
  (this->Limits).MaxValue.Yaw = dVar6;
  (this->Limits).MaxValue.Roll = pTVar9->Roll;
  (this->Limits).bDrawLimits = param_2->bDrawLimits;
  FRigUnit_HierarchyAddControl_ShapeSettings::ConfigureFrom(&this->Shape,param_1,param_2);
  this->bUsePreferredRotationOrder = param_2->bUsePreferredRotationOrder;
  this->PreferredRotationOrder = param_2->PreferredRotationOrder;
  return;
}

// Configure @ 14a480010

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FRigUnit_HierarchyAddControlRotator_Settings::Configure
          (FRigUnit_HierarchyAddControlRotator_Settings *this,FRigControlSettings *param_1)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  ERigControlAnimationType EVar5;
  
  uVar4 = *(undefined4 *)&this->field_0xc;
  (param_1->DisplayName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->field_0x8;
  (param_1->DisplayName).Number = uVar4;
  EVar5 = VisualCue;
  cVar1 = this->field_0x10;
  param_1->ControlType = Rotator;
  if (cVar1 != '\0') {
    EVar5 = AnimationControl;
  }
  param_1->AnimationType = EVar5;
  TArray<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->FilteredChannels,&this->FilteredChannels);
  if ((this->Proxy).bIsProxy != false) {
    param_1->AnimationType = ProxyControl;
  }
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->DrivenControls,&(this->Proxy).DrivenControls);
  param_1->ShapeVisibility = (this->Proxy).ShapeVisibility;
  FRigUnit_HierarchyAddControlRotator_LimitSettings::Configure(&this->Limits,param_1);
  param_1->bShapeVisible = (this->Shape).bVisible;
  param_1->ShapeName = (this->Shape).Name;
  uVar2 = *(undefined8 *)((longlong)&(this->Shape).Color.field0_0x0 + 8);
  *(undefined8 *)&(param_1->ShapeColor).field0_0x0 = *(undefined8 *)&(this->Shape).Color.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->ShapeColor).field0_0x0 + 8) = uVar2;
  dVar3 = (this->Shape).Transform.Rotation.XY.m128d_f64[1];
  (param_1->ShapeTransform).Rotation.XY.m128d_f64[0] =
       (this->Shape).Transform.Rotation.XY.m128d_f64[0];
  (param_1->ShapeTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (this->Shape).Transform.Rotation.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Rotation.ZW.m128d_f64[0] =
       (this->Shape).Transform.Rotation.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (this->Shape).Transform.Translation.XY.m128d_f64[1];
  (param_1->ShapeTransform).Translation.XY.m128d_f64[0] =
       (this->Shape).Transform.Translation.XY.m128d_f64[0];
  (param_1->ShapeTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (this->Shape).Transform.Translation.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Translation.ZW.m128d_f64[0] =
       (this->Shape).Transform.Translation.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (this->Shape).Transform.Scale3D.XY.m128d_f64[1];
  (param_1->ShapeTransform).Scale3D.XY.m128d_f64[0] =
       (this->Shape).Transform.Scale3D.XY.m128d_f64[0];
  (param_1->ShapeTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (this->Shape).Transform.Scale3D.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[0] =
       (this->Shape).Transform.Scale3D.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  param_1->bUsePreferredRotationOrder = this->bUsePreferredRotationOrder;
  param_1->PreferredRotationOrder = this->PreferredRotationOrder;
  return;
}

// FRigUnit_HierarchyAddControlRotator_Settings @ 14a510970

FRigUnit_HierarchyAddControlRotator_Settings * __thiscall
FRigUnit_HierarchyAddControlRotator_Settings::FRigUnit_HierarchyAddControlRotator_Settings
          (FRigUnit_HierarchyAddControlRotator_Settings *this)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FRigUnit_HierarchyAddControlRotator_Settings__6B_;
  (this->Limits).MinValue.Pitch = -180.0;
  (this->Limits).MinValue.Yaw = -180.0;
  (this->Limits).MinValue.Roll = -180.0;
  (this->Limits).MaxValue.Pitch = 180.0;
  (this->Limits).MaxValue.Yaw = 180.0;
  (this->Limits).MaxValue.Roll = 180.0;
  this->field_0x10 = 1;
  this->InitialSpace = LocalSpace;
  (this->Limits).LimitPitch.bMinimum = false;
  (this->Limits).LimitPitch.bMaximum = false;
  (this->Limits).LimitYaw.bMinimum = false;
  (this->Limits).LimitYaw.bMaximum = false;
  (this->Limits).LimitRoll.bMinimum = false;
  (this->Limits).LimitRoll.bMaximum = false;
  (this->Limits).bDrawLimits = true;
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
  this->bUsePreferredRotationOrder = false;
  this->PreferredRotationOrder = YZX;
  return this;
}

// ~FRigUnit_HierarchyAddControlRotator_Settings @ 14a518790

void __thiscall
FRigUnit_HierarchyAddControlRotator_Settings::~FRigUnit_HierarchyAddControlRotator_Settings
          (FRigUnit_HierarchyAddControlRotator_Settings *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FRigUnit_HierarchyAddControlRotator_Settings__6B_;
  pFVar1 = (this->FilteredChannels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Proxy).DrivenControls.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FRigUnit_HierarchyAddControl_Settings__6B_;
  return;
}

// operator= @ 14a51a6a0

/* WARNING: Type propagation algorithm not settling */

FRigUnit_HierarchyAddControlRotator_Settings * __thiscall
FRigUnit_HierarchyAddControlRotator_Settings::operator=
          (FRigUnit_HierarchyAddControlRotator_Settings *this,
          FRigUnit_HierarchyAddControlRotator_Settings *param_1)

{
  double dVar1;
  undefined8 uVar2;
  FRigControlLimitEnabled FVar3;
  FRigControlLimitEnabled FVar4;
  undefined2 uVar5;
  bool bVar6;
  undefined7 uVar7;
  undefined3 uVar8;
  FNameEntryId FVar9;
  
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  this->field_0x10 = param_1->field_0x10;
  this->InitialSpace = param_1->InitialSpace;
  FVar3 = (param_1->Limits).LimitYaw;
  FVar4 = (param_1->Limits).LimitRoll;
  uVar5 = *(undefined2 *)&(param_1->Limits).field_0x6;
  dVar1 = (param_1->Limits).MinValue.Pitch;
  (this->Limits).LimitPitch = (param_1->Limits).LimitPitch;
  (this->Limits).LimitYaw = FVar3;
  (this->Limits).LimitRoll = FVar4;
  *(undefined2 *)&(this->Limits).field_0x6 = uVar5;
  (this->Limits).MinValue.Pitch = dVar1;
  dVar1 = (param_1->Limits).MinValue.Roll;
  (this->Limits).MinValue.Yaw = (param_1->Limits).MinValue.Yaw;
  (this->Limits).MinValue.Roll = dVar1;
  dVar1 = (param_1->Limits).MaxValue.Yaw;
  (this->Limits).MaxValue.Pitch = (param_1->Limits).MaxValue.Pitch;
  (this->Limits).MaxValue.Yaw = dVar1;
  bVar6 = (param_1->Limits).bDrawLimits;
  uVar7 = *(undefined7 *)&(param_1->Limits).field_0x39;
  (this->Limits).MaxValue.Roll = (param_1->Limits).MaxValue.Roll;
  (this->Limits).bDrawLimits = bVar6;
  *(undefined7 *)&(this->Limits).field_0x39 = uVar7;
  uVar8 = *(undefined3 *)&(param_1->Shape).field_0x1;
  FVar9.Value = (param_1->Shape).Name.ComparisonIndex.Value;
  uVar2 = *(undefined8 *)&(param_1->Shape).Name.Number;
  (this->Shape).bVisible = (param_1->Shape).bVisible;
  *(undefined3 *)&(this->Shape).field_0x1 = uVar8;
  (this->Shape).Name.ComparisonIndex = (FNameEntryId)FVar9.Value;
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
  this->bUsePreferredRotationOrder = param_1->bUsePreferredRotationOrder;
  this->PreferredRotationOrder = param_1->PreferredRotationOrder;
  return this;
}

