// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a47aad0

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlVector2D_Settings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Settings.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Settings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Settings,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlVector2D_Settings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Settings.
         OuterSingleton;
}

// ConfigureFrom @ 14a47ab90

void __thiscall
FRigUnit_HierarchyAddControlVector2D_Settings::ConfigureFrom
          (FRigUnit_HierarchyAddControlVector2D_Settings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  float fStack_24;
  
  this->_padding_ = (longlong)param_2->DisplayName;
  *(bool *)&this->_padding_ = param_2->AnimationType != VisualCue;
  this->PrimaryAxis = param_2->PrimaryAxis;
  TArray<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>::operator=
            (&this->FilteredChannels,&param_2->FilteredChannels);
  (this->Proxy).bIsProxy = param_2->AnimationType == ProxyControl;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Proxy).DrivenControls,&param_2->DrivenControls);
  (this->Proxy).ShapeVisibility = param_2->ShapeVisibility;
  if ((param_2->LimitEnabled).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->Limits).LimitX = *(FRigControlLimitEnabled *)(param_2->LimitEnabled).AllocatorInstance.Data
  ;
  if ((param_2->LimitEnabled).ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->Limits).LimitY =
       *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 2);
  uVar1 = (param_2->MinimumValue).FloatStorage.Float00;
  uVar3 = (param_2->MinimumValue).FloatStorage.Float01;
  (this->Limits).MinValue.field0_0x0._s_0.X = (double)(float)uVar1;
  (this->Limits).MinValue.field0_0x0._s_0.Y = (double)(float)uVar3;
  uVar2 = (param_2->MaximumValue).FloatStorage.Float00;
  uVar4 = (param_2->MaximumValue).FloatStorage.Float01;
  (this->Limits).MaxValue.field0_0x0._s_0.X = (double)(float)uVar2;
  (this->Limits).MaxValue.field0_0x0._s_0.Y = (double)(float)uVar4;
  (this->Limits).bDrawLimits = param_2->bDrawLimits;
  FRigUnit_HierarchyAddControl_ShapeSettings::ConfigureFrom(&this->Shape,param_1,param_2);
  return;
}

// Configure @ 14a47ad10

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FRigUnit_HierarchyAddControlVector2D_Settings::Configure
          (FRigUnit_HierarchyAddControlVector2D_Settings *this,FRigControlSettings *param_1)

{
  double dVar1;
  FRigControlLimitEnabled FVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ERigControlAnimationType EVar7;
  bool bVar8;
  undefined8 local_118;
  
  uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (param_1->DisplayName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (param_1->DisplayName).Number = uVar5;
  lVar6 = this->_padding_;
  param_1->ControlType = Vector2D;
  EVar7 = VisualCue;
  if ((char)lVar6 != '\0') {
    EVar7 = AnimationControl;
  }
  param_1->AnimationType = EVar7;
  param_1->PrimaryAxis = this->PrimaryAxis;
  TArray<enum_ERigControlTransformChannel,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->FilteredChannels,&this->FilteredChannels);
  if ((this->Proxy).bIsProxy != false) {
    param_1->AnimationType = ProxyControl;
  }
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->DrivenControls,&(this->Proxy).DrivenControls);
  param_1->ShapeVisibility = (this->Proxy).ShapeVisibility;
  FRigControlSettings::SetupLimitArrayForType(param_1,false,false,false);
  FVar2 = (this->Limits).LimitX;
  if ((param_1->LimitEnabled).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(FRigControlLimitEnabled *)(param_1->LimitEnabled).AllocatorInstance.Data = FVar2;
  FVar2 = (this->Limits).LimitY;
  if ((param_1->LimitEnabled).ArrayNum < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(FRigControlLimitEnabled *)((param_1->LimitEnabled).AllocatorInstance.Data + 2) = FVar2;
  dVar1 = (this->Limits).MinValue.field0_0x0._s_0.Y;
  (param_1->MinimumValue).FloatStorage.Float00 = (float)(this->Limits).MinValue.field0_0x0._s_0.X;
  (param_1->MinimumValue).FloatStorage.Float01 = (float)dVar1;
  (param_1->MinimumValue).FloatStorage.Float02 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float03 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float10 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float11 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float12 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float13 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float20 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float21 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float22 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float23 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float30 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float31 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float32 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float33 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float00_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float01_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float02_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float03_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float10_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float11_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float12_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float13_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float20_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float21_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float22_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float23_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float30_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float31_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float32_2 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(param_1->MinimumValue).FloatStorage.bValid = 1;
  dVar1 = (this->Limits).MaxValue.field0_0x0._s_0.Y;
  (param_1->MaximumValue).FloatStorage.Float00 = (float)(this->Limits).MaxValue.field0_0x0._s_0.X;
  (param_1->MaximumValue).FloatStorage.Float01 = (float)dVar1;
  (param_1->MaximumValue).FloatStorage.Float02 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float03 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float10 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float11 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float12 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float13 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float20 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float21 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float22 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float23 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float30 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float31 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float32 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float33 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float00_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float01_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float02_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float03_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float10_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float11_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float12_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float13_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float20_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float21_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float22_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float23_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float30_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float31_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float32_2 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(param_1->MaximumValue).FloatStorage.bValid = 1;
  param_1->bDrawLimits = (this->Limits).bDrawLimits;
  param_1->bShapeVisible = (this->Shape).bVisible;
  param_1->ShapeName = (this->Shape).Name;
  uVar4 = *(undefined8 *)((longlong)&(this->Shape).Color.field0_0x0 + 8);
  *(undefined8 *)&(param_1->ShapeColor).field0_0x0 = *(undefined8 *)&(this->Shape).Color.field0_0x0;
  *(undefined8 *)((longlong)&(param_1->ShapeColor).field0_0x0 + 8) = uVar4;
  dVar1 = (this->Shape).Transform.Rotation.XY.m128d_f64[1];
  (param_1->ShapeTransform).Rotation.XY.m128d_f64[0] =
       (this->Shape).Transform.Rotation.XY.m128d_f64[0];
  (param_1->ShapeTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Shape).Transform.Rotation.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Rotation.ZW.m128d_f64[0] =
       (this->Shape).Transform.Rotation.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->Shape).Transform.Translation.XY.m128d_f64[1];
  (param_1->ShapeTransform).Translation.XY.m128d_f64[0] =
       (this->Shape).Transform.Translation.XY.m128d_f64[0];
  (param_1->ShapeTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Shape).Transform.Translation.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Translation.ZW.m128d_f64[0] =
       (this->Shape).Transform.Translation.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->Shape).Transform.Scale3D.XY.m128d_f64[1];
  (param_1->ShapeTransform).Scale3D.XY.m128d_f64[0] =
       (this->Shape).Transform.Scale3D.XY.m128d_f64[0];
  (param_1->ShapeTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Shape).Transform.Scale3D.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[0] =
       (this->Shape).Transform.Scale3D.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  return;
}

// FRigUnit_HierarchyAddControlVector2D_Settings @ 14a510c50

FRigUnit_HierarchyAddControlVector2D_Settings * __thiscall
FRigUnit_HierarchyAddControlVector2D_Settings::FRigUnit_HierarchyAddControlVector2D_Settings
          (FRigUnit_HierarchyAddControlVector2D_Settings *this)

{
  TVector2<double> TVar1;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlVector2D_Settings__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  this->PrimaryAxis = X;
  (this->Limits).LimitX.bMinimum = true;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Limits).LimitX.bMaximum = true;
  (this->Limits).LimitY.bMinimum = true;
  (this->Limits).LimitY.bMaximum = true;
  (this->Limits).bDrawLimits = true;
  (this->Limits).MinValue.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Limits).MaxValue.field0_0x0._s_0.X = 1.0;
  (this->Limits).MaxValue.field0_0x0._s_0.Y = 1.0;
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

// ~FRigUnit_HierarchyAddControlVector2D_Settings @ 14a518830

void __thiscall
FRigUnit_HierarchyAddControlVector2D_Settings::~FRigUnit_HierarchyAddControlVector2D_Settings
          (FRigUnit_HierarchyAddControlVector2D_Settings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlVector2D_Settings__6B_;
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

// operator= @ 14a51a930

/* WARNING: Type propagation algorithm not settling */

FRigUnit_HierarchyAddControlVector2D_Settings * __thiscall
FRigUnit_HierarchyAddControlVector2D_Settings::operator=
          (FRigUnit_HierarchyAddControlVector2D_Settings *this,
          FRigUnit_HierarchyAddControlVector2D_Settings *param_1)

{
  double dVar1;
  undefined8 uVar2;
  FRigControlLimitEnabled FVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined7 uVar6;
  undefined3 uVar7;
  FNameEntryId FVar8;
  
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->PrimaryAxis = param_1->PrimaryAxis;
  FVar3 = (param_1->Limits).LimitY;
  uVar4 = *(undefined4 *)&(param_1->Limits).field_0x4;
  dVar1 = (param_1->Limits).MinValue.field0_0x0._s_0.X;
  (this->Limits).LimitX = (param_1->Limits).LimitX;
  (this->Limits).LimitY = FVar3;
  *(undefined4 *)&(this->Limits).field_0x4 = uVar4;
  (this->Limits).MinValue.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Limits).MaxValue.field0_0x0._s_0.X;
  (this->Limits).MinValue.field0_0x0._s_0.Y = (param_1->Limits).MinValue.field0_0x0._s_0.Y;
  (this->Limits).MaxValue.field0_0x0._s_0.X = dVar1;
  bVar5 = (param_1->Limits).bDrawLimits;
  uVar6 = *(undefined7 *)&(param_1->Limits).field_0x29;
  (this->Limits).MaxValue.field0_0x0._s_0.Y = (param_1->Limits).MaxValue.field0_0x0._s_0.Y;
  (this->Limits).bDrawLimits = bVar5;
  *(undefined7 *)&(this->Limits).field_0x29 = uVar6;
  uVar7 = *(undefined3 *)&(param_1->Shape).field_0x1;
  FVar8.Value = (param_1->Shape).Name.ComparisonIndex.Value;
  uVar2 = *(undefined8 *)&(param_1->Shape).Name.Number;
  (this->Shape).bVisible = (param_1->Shape).bVisible;
  *(undefined3 *)&(this->Shape).field_0x1 = uVar7;
  (this->Shape).Name.ComparisonIndex = (FNameEntryId)FVar8.Value;
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

