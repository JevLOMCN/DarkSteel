// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a478cb0

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlInteger_Settings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Settings.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Settings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Settings,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlInteger_Settings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Settings.
         OuterSingleton;
}

// ConfigureFrom @ 14a478d00

void __thiscall
FRigUnit_HierarchyAddControlInteger_Settings::ConfigureFrom
          (FRigUnit_HierarchyAddControlInteger_Settings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  UEnum *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)param_2->DisplayName;
  *(bool *)&this->_padding_ = param_2->AnimationType != VisualCue;
  this->PrimaryAxis = param_2->PrimaryAxis;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_2->ControlEnum).field0_0x0.DebugPtr, pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ControlEnum).field0_0x0 = (param_2->ControlEnum).field0_0x0;
  (this->Proxy).bIsProxy = param_2->AnimationType == ProxyControl;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Proxy).DrivenControls,&param_2->DrivenControls);
  (this->Proxy).ShapeVisibility = param_2->ShapeVisibility;
  if ((param_2->LimitEnabled).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->Limits).Limit = *(FRigControlLimitEnabled *)(param_2->LimitEnabled).AllocatorInstance.Data;
  (this->Limits).MinValue = (int)(param_2->MinimumValue).FloatStorage.Float00;
  (this->Limits).MaxValue = (int)(param_2->MaximumValue).FloatStorage.Float00;
  (this->Limits).bDrawLimits = param_2->bDrawLimits;
  FRigUnit_HierarchyAddControl_ShapeSettings::ConfigureFrom(&this->Shape,param_1,param_2);
  return;
}

// Configure @ 14a478e10

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FRigUnit_HierarchyAddControlInteger_Settings::Configure
          (FRigUnit_HierarchyAddControlInteger_Settings *this,FRigControlSettings *param_1)

{
  FRigControlLimitEnabled FVar1;
  UEnum *pUVar2;
  code *pcVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 uVar6;
  longlong lVar7;
  ERigControlAnimationType EVar8;
  bool bVar9;
  ulonglong local_198;
  ulonglong local_114;
  ulonglong local_90;
  
  uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (param_1->DisplayName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (param_1->DisplayName).Number = uVar6;
  lVar7 = this->_padding_;
  param_1->ControlType = Integer;
  EVar8 = VisualCue;
  if ((char)lVar7 != '\0') {
    EVar8 = AnimationControl;
  }
  param_1->AnimationType = EVar8;
  param_1->PrimaryAxis = this->PrimaryAxis;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (this->ControlEnum).field0_0x0.DebugPtr, pUVar2 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (param_1->ControlEnum).field0_0x0 = (this->ControlEnum).field0_0x0;
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
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(FRigControlLimitEnabled *)(param_1->LimitEnabled).AllocatorInstance.Data = FVar1;
  pUVar2 = (param_1->ControlEnum).field0_0x0.DebugPtr;
  local_198 = (ulonglong)(uint)(this->Limits).MinValue;
  (param_1->MinimumValue).FloatStorage.Float00 = (float)(undefined4)local_198;
  (param_1->MinimumValue).FloatStorage.Float01 = (float)local_198._4_4_;
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
  if (pUVar2 == (UEnum *)0x0) {
    local_90 = (ulonglong)(uint)(this->Limits).MaxValue;
    (param_1->MaximumValue).FloatStorage.Float00 = (float)(undefined4)local_90;
    (param_1->MaximumValue).FloatStorage.Float01 = (float)local_90._4_4_;
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
  }
  else {
    local_114 = UEnum::GetMaxEnumValue(pUVar2);
    local_114 = local_114 & 0xffffffff;
    (param_1->MaximumValue).FloatStorage.Float00 = (float)(undefined4)local_114;
    (param_1->MaximumValue).FloatStorage.Float01 = (float)local_114._4_4_;
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
  }
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

// FRigUnit_HierarchyAddControlInteger_Settings @ 14a5108f0

FRigUnit_HierarchyAddControlInteger_Settings * __thiscall
FRigUnit_HierarchyAddControlInteger_Settings::FRigUnit_HierarchyAddControlInteger_Settings
          (FRigUnit_HierarchyAddControlInteger_Settings *this)

{
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlInteger_Settings__6B_;
  this->PrimaryAxis = X;
  (this->ControlEnum).field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->Limits).Limit.bMinimum = true;
  (this->Limits).Limit.bMaximum = true;
  (this->Limits).MinValue = 0;
  (this->Limits).MaxValue = 100;
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

// ~FRigUnit_HierarchyAddControlInteger_Settings @ 14a518750

void __thiscall
FRigUnit_HierarchyAddControlInteger_Settings::~FRigUnit_HierarchyAddControlInteger_Settings
          (FRigUnit_HierarchyAddControlInteger_Settings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControlInteger_Settings__6B_;
  pFVar1 = (this->Proxy).DrivenControls.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyAddControl_Settings__6B_;
  return;
}

// operator= @ 14a51a5b0

/* WARNING: Type propagation algorithm not settling */

FRigUnit_HierarchyAddControlInteger_Settings * __thiscall
FRigUnit_HierarchyAddControlInteger_Settings::operator=
          (FRigUnit_HierarchyAddControlInteger_Settings *this,
          FRigUnit_HierarchyAddControlInteger_Settings *param_1)

{
  UEnum *pUVar1;
  undefined8 uVar2;
  double dVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined3 uVar8;
  FNameEntryId FVar9;
  
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->PrimaryAxis = param_1->PrimaryAxis;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ControlEnum).field0_0x0.DebugPtr, pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ControlEnum).field0_0x0 = (param_1->ControlEnum).field0_0x0;
  uVar4 = *(undefined2 *)&(param_1->Limits).field_0x2;
  iVar5 = (param_1->Limits).MinValue;
  iVar6 = (param_1->Limits).MaxValue;
  bVar7 = (param_1->Limits).bDrawLimits;
  uVar8 = *(undefined3 *)&(param_1->Limits).field_0xd;
  (this->Limits).Limit = (param_1->Limits).Limit;
  *(undefined2 *)&(this->Limits).field_0x2 = uVar4;
  (this->Limits).MinValue = iVar5;
  (this->Limits).MaxValue = iVar6;
  (this->Limits).bDrawLimits = bVar7;
  *(undefined3 *)&(this->Limits).field_0xd = uVar8;
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
  dVar3 = (param_1->Shape).Transform.Rotation.XY.m128d_f64[1];
  (this->Shape).Transform.Rotation.XY.m128d_f64[0] =
       (param_1->Shape).Transform.Rotation.XY.m128d_f64[0];
  (this->Shape).Transform.Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Shape).Transform.Rotation.ZW.m128d_f64[1];
  (this->Shape).Transform.Rotation.ZW.m128d_f64[0] =
       (param_1->Shape).Transform.Rotation.ZW.m128d_f64[0];
  (this->Shape).Transform.Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Shape).Transform.Translation.XY.m128d_f64[1];
  (this->Shape).Transform.Translation.XY.m128d_f64[0] =
       (param_1->Shape).Transform.Translation.XY.m128d_f64[0];
  (this->Shape).Transform.Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Shape).Transform.Translation.ZW.m128d_f64[1];
  (this->Shape).Transform.Translation.ZW.m128d_f64[0] =
       (param_1->Shape).Transform.Translation.ZW.m128d_f64[0];
  (this->Shape).Transform.Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Shape).Transform.Scale3D.XY.m128d_f64[1];
  (this->Shape).Transform.Scale3D.XY.m128d_f64[0] =
       (param_1->Shape).Transform.Scale3D.XY.m128d_f64[0];
  (this->Shape).Transform.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Shape).Transform.Scale3D.ZW.m128d_f64[1];
  (this->Shape).Transform.Scale3D.ZW.m128d_f64[0] =
       (param_1->Shape).Transform.Scale3D.ZW.m128d_f64[0];
  (this->Shape).Transform.Scale3D.ZW.m128d_f64[1] = dVar3;
  (this->Proxy).bIsProxy = (param_1->Proxy).bIsProxy;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Proxy).DrivenControls,&(param_1->Proxy).DrivenControls);
  (this->Proxy).ShapeVisibility = (param_1->Proxy).ShapeVisibility;
  return this;
}

