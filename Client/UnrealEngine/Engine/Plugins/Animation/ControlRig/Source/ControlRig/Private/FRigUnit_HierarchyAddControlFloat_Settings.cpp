// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4760d0

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlFloat_Settings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Settings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Settings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Settings,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlFloat_Settings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Settings.OuterSingleton
  ;
}

// ConfigureFrom @ 14a476310

void __thiscall
FRigUnit_HierarchyAddControlFloat_Settings::ConfigureFrom
          (FRigUnit_HierarchyAddControlFloat_Settings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)param_2->DisplayName;
  *(bool *)&this->_padding_ = param_2->AnimationType != VisualCue;
  this->bIsScale = param_2->ControlType == ScaleFloat;
  this->PrimaryAxis = param_2->PrimaryAxis;
  (this->Proxy).bIsProxy = param_2->AnimationType == ProxyControl;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Proxy).DrivenControls,&param_2->DrivenControls);
  (this->Proxy).ShapeVisibility = param_2->ShapeVisibility;
  if ((param_2->LimitEnabled).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Limits).Limit = *(FRigControlLimitEnabled *)(param_2->LimitEnabled).AllocatorInstance.Data;
  (this->Limits).MinValue = (param_2->MinimumValue).FloatStorage.Float00;
  (this->Limits).MaxValue = (param_2->MaximumValue).FloatStorage.Float00;
  (this->Limits).bDrawLimits = param_2->bDrawLimits;
  FRigUnit_HierarchyAddControl_ShapeSettings::ConfigureFrom(&this->Shape,param_1,param_2);
  return;
}

// Configure @ 14a4764c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FRigUnit_HierarchyAddControlFloat_Settings::Configure
          (FRigUnit_HierarchyAddControlFloat_Settings *this,FRigControlSettings *param_1)

{
  FRigControlLimitEnabled FVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  double dVar5;
  undefined4 uVar6;
  ERigControlAnimationType EVar7;
  ERigControlType EVar8;
  bool bVar9;
  ulonglong local_118;
  
  uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (param_1->DisplayName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (param_1->DisplayName).Number = uVar6;
  EVar7 = VisualCue;
  if ((char)this->_padding_ != '\0') {
    EVar7 = AnimationControl;
  }
  param_1->AnimationType = EVar7;
  EVar8 = Float;
  if (this->bIsScale != false) {
    EVar8 = ScaleFloat;
  }
  param_1->ControlType = EVar8;
  param_1->PrimaryAxis = this->PrimaryAxis;
  if ((this->Proxy).bIsProxy != false) {
    param_1->AnimationType = ProxyControl;
  }
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->DrivenControls,&(this->Proxy).DrivenControls);
  param_1->ShapeVisibility = (this->Proxy).ShapeVisibility;
  FRigControlSettings::SetupLimitArrayForType(param_1,false,false,false);
  FVar1 = (this->Limits).Limit;
  if ((param_1->LimitEnabled).ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FRigControlLimitEnabled *)(param_1->LimitEnabled).AllocatorInstance.Data = FVar1;
  local_118 = (ulonglong)(uint)(this->Limits).MinValue;
  (param_1->MinimumValue).FloatStorage.Float00 = (float)(undefined4)local_118;
  (param_1->MinimumValue).FloatStorage.Float01 = (float)local_118._4_4_;
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
  auVar3 = ZEXT416((uint)(this->Limits).MaxValue);
  (param_1->MaximumValue).FloatStorage.Float00 = (float)auVar3._0_4_;
  (param_1->MaximumValue).FloatStorage.Float01 = (float)auVar3._4_4_;
  (param_1->MaximumValue).FloatStorage.Float02 = (float)auVar3._8_4_;
  (param_1->MaximumValue).FloatStorage.Float03 = (float)auVar3._12_4_;
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
  dVar5 = (this->Shape).Transform.Rotation.XY.m128d_f64[1];
  (param_1->ShapeTransform).Rotation.XY.m128d_f64[0] =
       (this->Shape).Transform.Rotation.XY.m128d_f64[0];
  (param_1->ShapeTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->Shape).Transform.Rotation.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Rotation.ZW.m128d_f64[0] =
       (this->Shape).Transform.Rotation.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (this->Shape).Transform.Translation.XY.m128d_f64[1];
  (param_1->ShapeTransform).Translation.XY.m128d_f64[0] =
       (this->Shape).Transform.Translation.XY.m128d_f64[0];
  (param_1->ShapeTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->Shape).Transform.Translation.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Translation.ZW.m128d_f64[0] =
       (this->Shape).Transform.Translation.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (this->Shape).Transform.Scale3D.XY.m128d_f64[1];
  (param_1->ShapeTransform).Scale3D.XY.m128d_f64[0] =
       (this->Shape).Transform.Scale3D.XY.m128d_f64[0];
  (param_1->ShapeTransform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (this->Shape).Transform.Scale3D.ZW.m128d_f64[1];
  (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[0] =
       (this->Shape).Transform.Scale3D.ZW.m128d_f64[0];
  (param_1->ShapeTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  return;
}

// FRigUnit_HierarchyAddControlFloat_Settings @ 14a510870

FRigUnit_HierarchyAddControlFloat_Settings * __thiscall
FRigUnit_HierarchyAddControlFloat_Settings::FRigUnit_HierarchyAddControlFloat_Settings
          (FRigUnit_HierarchyAddControlFloat_Settings *this)

{
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlFloat_Settings__6B_;
  this->PrimaryAxis = X;
  this->bIsScale = false;
  (this->Limits).Limit.bMinimum = true;
  (this->Limits).Limit.bMaximum = true;
  (this->Limits).MinValue = 0.0;
  (this->Limits).MaxValue = 100.0;
  (this->Limits).bDrawLimits = true;
  FRigUnit_HierarchyAddControl_ShapeSettings::FRigUnit_HierarchyAddControl_ShapeSettings
            (&this->Shape);
  (this->Proxy).bIsProxy = false;
  (this->Proxy).DrivenControls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Proxy).DrivenControls.ArrayNum = 0;
  (this->Proxy).DrivenControls.ArrayMax = 0;
  (this->Proxy).ShapeVisibility = BasedOnSelection;
  return this;
}

// ~FRigUnit_HierarchyAddControlFloat_Settings @ 14a518710

void __thiscall
FRigUnit_HierarchyAddControlFloat_Settings::~FRigUnit_HierarchyAddControlFloat_Settings
          (FRigUnit_HierarchyAddControlFloat_Settings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlFloat_Settings__6B_;
  pFVar1 = (this->Proxy).DrivenControls.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControl_Settings__6B_;
  return;
}

// operator= @ 14a51a4e0

/* WARNING: Type propagation algorithm not settling */

FRigUnit_HierarchyAddControlFloat_Settings * __thiscall
FRigUnit_HierarchyAddControlFloat_Settings::operator=
          (FRigUnit_HierarchyAddControlFloat_Settings *this,
          FRigUnit_HierarchyAddControlFloat_Settings *param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined3 uVar7;
  FNameEntryId FVar8;
  
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->PrimaryAxis = param_1->PrimaryAxis;
  this->bIsScale = param_1->bIsScale;
  uVar3 = *(undefined2 *)&(param_1->Limits).field_0x2;
  fVar4 = (param_1->Limits).MinValue;
  fVar5 = (param_1->Limits).MaxValue;
  bVar6 = (param_1->Limits).bDrawLimits;
  uVar7 = *(undefined3 *)&(param_1->Limits).field_0xd;
  (this->Limits).Limit = (param_1->Limits).Limit;
  *(undefined2 *)&(this->Limits).field_0x2 = uVar3;
  (this->Limits).MinValue = fVar4;
  (this->Limits).MaxValue = fVar5;
  (this->Limits).bDrawLimits = bVar6;
  *(undefined3 *)&(this->Limits).field_0xd = uVar7;
  uVar7 = *(undefined3 *)&(param_1->Shape).field_0x1;
  FVar8.Value = (param_1->Shape).Name.ComparisonIndex.Value;
  uVar1 = *(undefined8 *)&(param_1->Shape).Name.Number;
  (this->Shape).bVisible = (param_1->Shape).bVisible;
  *(undefined3 *)&(this->Shape).field_0x1 = uVar7;
  (this->Shape).Name.ComparisonIndex = (FNameEntryId)FVar8.Value;
  *(undefined8 *)&(this->Shape).Name.Number = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->Shape).Color.field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Shape).Color.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->Shape).Color.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Shape).Color.field0_0x0 + 0xc) = uVar1;
  dVar2 = (param_1->Shape).Transform.Rotation.XY.m128d_f64[1];
  (this->Shape).Transform.Rotation.XY.m128d_f64[0] =
       (param_1->Shape).Transform.Rotation.XY.m128d_f64[0];
  (this->Shape).Transform.Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Shape).Transform.Rotation.ZW.m128d_f64[1];
  (this->Shape).Transform.Rotation.ZW.m128d_f64[0] =
       (param_1->Shape).Transform.Rotation.ZW.m128d_f64[0];
  (this->Shape).Transform.Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Shape).Transform.Translation.XY.m128d_f64[1];
  (this->Shape).Transform.Translation.XY.m128d_f64[0] =
       (param_1->Shape).Transform.Translation.XY.m128d_f64[0];
  (this->Shape).Transform.Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Shape).Transform.Translation.ZW.m128d_f64[1];
  (this->Shape).Transform.Translation.ZW.m128d_f64[0] =
       (param_1->Shape).Transform.Translation.ZW.m128d_f64[0];
  (this->Shape).Transform.Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Shape).Transform.Scale3D.XY.m128d_f64[1];
  (this->Shape).Transform.Scale3D.XY.m128d_f64[0] =
       (param_1->Shape).Transform.Scale3D.XY.m128d_f64[0];
  (this->Shape).Transform.Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Shape).Transform.Scale3D.ZW.m128d_f64[1];
  (this->Shape).Transform.Scale3D.ZW.m128d_f64[0] =
       (param_1->Shape).Transform.Scale3D.ZW.m128d_f64[0];
  (this->Shape).Transform.Scale3D.ZW.m128d_f64[1] = dVar2;
  (this->Proxy).bIsProxy = (param_1->Proxy).bIsProxy;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Proxy).DrivenControls,&(param_1->Proxy).DrivenControls);
  (this->Proxy).ShapeVisibility = (param_1->Proxy).ShapeVisibility;
  return this;
}

