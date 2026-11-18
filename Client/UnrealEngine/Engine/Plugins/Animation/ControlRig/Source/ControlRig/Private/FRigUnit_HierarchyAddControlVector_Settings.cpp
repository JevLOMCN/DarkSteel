// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a47d1b0

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlVector_Settings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector_Settings.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector_Settings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_Settings,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlVector_Settings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector_Settings.
         OuterSingleton;
}

// ConfigureFrom @ 14a47d480

void __thiscall
FRigUnit_HierarchyAddControlVector_Settings::ConfigureFrom
          (FRigUnit_HierarchyAddControlVector_Settings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  code *pcVar6;
  bool bVar7;
  float fStack_14;
  
  this->_padding_ = (longlong)param_2->DisplayName;
  *(bool *)&this->_padding_ = param_2->AnimationType != VisualCue;
  this->bIsPosition = param_2->ControlType == Position;
  TArray<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>::operator=
            (&this->FilteredChannels,&param_2->FilteredChannels);
  (this->Proxy).bIsProxy = param_2->AnimationType == ProxyControl;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Proxy).DrivenControls,&param_2->DrivenControls);
  (this->Proxy).ShapeVisibility = param_2->ShapeVisibility;
  if ((param_2->LimitEnabled).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (this->Limits).LimitX = *(FRigControlLimitEnabled *)(param_2->LimitEnabled).AllocatorInstance.Data
  ;
  if ((param_2->LimitEnabled).ArrayNum < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (this->Limits).LimitY =
       *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 2);
  if ((param_2->LimitEnabled).ArrayNum < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (this->Limits).LimitZ =
       *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 4);
  uVar1 = (param_2->MinimumValue).FloatStorage.Float00;
  uVar3 = (param_2->MinimumValue).FloatStorage.Float01;
  fVar5 = (param_2->MinimumValue).FloatStorage.Float02;
  (this->Limits).MinValue.field0_0x0._s_0.X = (double)(float)uVar1;
  (this->Limits).MinValue.field0_0x0._s_0.Y = (double)(float)uVar3;
  (this->Limits).MinValue.field0_0x0._s_0.Z = (double)fVar5;
  uVar2 = (param_2->MaximumValue).FloatStorage.Float00;
  uVar4 = (param_2->MaximumValue).FloatStorage.Float01;
  fVar5 = (param_2->MaximumValue).FloatStorage.Float02;
  (this->Limits).MaxValue.field0_0x0._s_0.X = (double)(float)uVar2;
  (this->Limits).MaxValue.field0_0x0._s_0.Y = (double)(float)uVar4;
  (this->Limits).MaxValue.field0_0x0._s_0.Z = (double)fVar5;
  (this->Limits).bDrawLimits = param_2->bDrawLimits;
  FRigUnit_HierarchyAddControl_ShapeSettings::ConfigureFrom(&this->Shape,param_1,param_2);
  return;
}

// Configure @ 14a47d6b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FRigUnit_HierarchyAddControlVector_Settings::Configure
          (FRigUnit_HierarchyAddControlVector_Settings *this,FRigControlSettings *param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  ERigControlAnimationType EVar4;
  
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (param_1->DisplayName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (param_1->DisplayName).Number = uVar3;
  EVar4 = VisualCue;
  if ((char)this->_padding_ != '\0') {
    EVar4 = AnimationControl;
  }
  param_1->AnimationType = EVar4;
  param_1->ControlType = (this->bIsPosition == false) + Position;
  TArray<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->FilteredChannels,&this->FilteredChannels);
  if ((this->Proxy).bIsProxy != false) {
    param_1->AnimationType = ProxyControl;
  }
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->DrivenControls,&(this->Proxy).DrivenControls);
  param_1->ShapeVisibility = (this->Proxy).ShapeVisibility;
  FRigUnit_HierarchyAddControlVector_LimitSettings::Configure(&this->Limits,param_1);
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

// FRigUnit_HierarchyAddControlVector_Settings @ 14a510cf0

FRigUnit_HierarchyAddControlVector_Settings * __thiscall
FRigUnit_HierarchyAddControlVector_Settings::FRigUnit_HierarchyAddControlVector_Settings
          (FRigUnit_HierarchyAddControlVector_Settings *this)

{
  undefined8 uVar1;
  
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlVector_Settings__6B_;
  this->InitialSpace = LocalSpace;
  this->bIsPosition = true;
  (this->Limits).LimitX.bMinimum = false;
  (this->Limits).LimitX.bMaximum = false;
  (this->Limits).LimitY.bMinimum = false;
  (this->Limits).LimitY.bMaximum = false;
  (this->Limits).LimitZ.bMinimum = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Limits).LimitZ.bMaximum = false;
  (this->Limits).MinValue.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Limits).MinValue.field0_0x0._s_0.Y = (double)uVar1;
  (this->Limits).MinValue.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Limits).MaxValue.field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
  ;
  (this->Limits).MaxValue.field0_0x0._s_0.Y = (double)uVar1;
  (this->Limits).MaxValue.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
  ;
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
  return this;
}

// ~FRigUnit_HierarchyAddControlVector_Settings @ 14a518880

void __thiscall
FRigUnit_HierarchyAddControlVector_Settings::~FRigUnit_HierarchyAddControlVector_Settings
          (FRigUnit_HierarchyAddControlVector_Settings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlVector_Settings__6B_;
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

// operator= @ 14a51aa20

/* WARNING: Type propagation algorithm not settling */

FRigUnit_HierarchyAddControlVector_Settings * __thiscall
FRigUnit_HierarchyAddControlVector_Settings::operator=
          (FRigUnit_HierarchyAddControlVector_Settings *this,
          FRigUnit_HierarchyAddControlVector_Settings *param_1)

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
  
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->InitialSpace = param_1->InitialSpace;
  this->bIsPosition = param_1->bIsPosition;
  FVar3 = (param_1->Limits).LimitY;
  FVar4 = (param_1->Limits).LimitZ;
  uVar5 = *(undefined2 *)&(param_1->Limits).field_0x6;
  dVar1 = (param_1->Limits).MinValue.field0_0x0._s_0.X;
  (this->Limits).LimitX = (param_1->Limits).LimitX;
  (this->Limits).LimitY = FVar3;
  (this->Limits).LimitZ = FVar4;
  *(undefined2 *)&(this->Limits).field_0x6 = uVar5;
  (this->Limits).MinValue.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Limits).MinValue.field0_0x0._s_0.Z;
  (this->Limits).MinValue.field0_0x0._s_0.Y = (param_1->Limits).MinValue.field0_0x0._s_0.Y;
  (this->Limits).MinValue.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_1->Limits).MaxValue.field0_0x0._s_0.Y;
  (this->Limits).MaxValue.field0_0x0._s_0.X = (param_1->Limits).MaxValue.field0_0x0._s_0.X;
  (this->Limits).MaxValue.field0_0x0._s_0.Y = dVar1;
  bVar6 = (param_1->Limits).bDrawLimits;
  uVar7 = *(undefined7 *)&(param_1->Limits).field_0x39;
  (this->Limits).MaxValue.field0_0x0._s_0.Z = (param_1->Limits).MaxValue.field0_0x0._s_0.Z;
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
  return this;
}

