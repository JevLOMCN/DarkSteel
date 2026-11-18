// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 11

// StaticStruct @ 14a2ca870

UScriptStruct * __cdecl FRigControl::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigControl.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigControl.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigControl,(UObject *)pUVar1,L"RigControl");
  }
  return Z_Registration_Info_UScriptStruct_FRigControl.OuterSingleton;
}

// FRigControl @ 14a2d9590

FRigControl * __thiscall FRigControl::FRigControl(FRigControl *this,FRigControl *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  UEnum *pUVar4;
  double dVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined3 uVar10;
  
  this->_padding_ = (longlong)&___7FRigElement__6B_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = (longlong)&___7FRigControl__6B_;
  this->ControlType = param_1->ControlType;
  this->DisplayName = param_1->DisplayName;
  this->ParentName = param_1->ParentName;
  this->ParentIndex = param_1->ParentIndex;
  this->SpaceName = param_1->SpaceName;
  this->SpaceIndex = param_1->SpaceIndex;
  dVar5 = (param_1->OffsetTransform).Rotation.XY.m128d_f64[1];
  (this->OffsetTransform).Rotation.XY.m128d_f64[0] =
       (param_1->OffsetTransform).Rotation.XY.m128d_f64[0];
  (this->OffsetTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->OffsetTransform).Rotation.ZW.m128d_f64[1];
  (this->OffsetTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->OffsetTransform).Rotation.ZW.m128d_f64[0];
  (this->OffsetTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->OffsetTransform).Translation.XY.m128d_f64[1];
  (this->OffsetTransform).Translation.XY.m128d_f64[0] =
       (param_1->OffsetTransform).Translation.XY.m128d_f64[0];
  (this->OffsetTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->OffsetTransform).Translation.ZW.m128d_f64[1];
  (this->OffsetTransform).Translation.ZW.m128d_f64[0] =
       (param_1->OffsetTransform).Translation.ZW.m128d_f64[0];
  (this->OffsetTransform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->OffsetTransform).Scale3D.XY.m128d_f64[1];
  (this->OffsetTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->OffsetTransform).Scale3D.XY.m128d_f64[0];
  (this->OffsetTransform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->OffsetTransform).Scale3D.ZW.m128d_f64[1];
  (this->OffsetTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->OffsetTransform).Scale3D.ZW.m128d_f64[0];
  (this->OffsetTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  fVar7 = (param_1->InitialValue).FloatStorage.Float01;
  fVar8 = (param_1->InitialValue).FloatStorage.Float02;
  fVar9 = (param_1->InitialValue).FloatStorage.Float03;
  (this->InitialValue).FloatStorage.Float00 = (param_1->InitialValue).FloatStorage.Float00;
  (this->InitialValue).FloatStorage.Float01 = fVar7;
  (this->InitialValue).FloatStorage.Float02 = fVar8;
  (this->InitialValue).FloatStorage.Float03 = fVar9;
  fVar7 = (param_1->InitialValue).FloatStorage.Float11;
  fVar8 = (param_1->InitialValue).FloatStorage.Float12;
  fVar9 = (param_1->InitialValue).FloatStorage.Float13;
  (this->InitialValue).FloatStorage.Float10 = (param_1->InitialValue).FloatStorage.Float10;
  (this->InitialValue).FloatStorage.Float11 = fVar7;
  (this->InitialValue).FloatStorage.Float12 = fVar8;
  (this->InitialValue).FloatStorage.Float13 = fVar9;
  fVar7 = (param_1->InitialValue).FloatStorage.Float21;
  fVar8 = (param_1->InitialValue).FloatStorage.Float22;
  fVar9 = (param_1->InitialValue).FloatStorage.Float23;
  (this->InitialValue).FloatStorage.Float20 = (param_1->InitialValue).FloatStorage.Float20;
  (this->InitialValue).FloatStorage.Float21 = fVar7;
  (this->InitialValue).FloatStorage.Float22 = fVar8;
  (this->InitialValue).FloatStorage.Float23 = fVar9;
  fVar7 = (param_1->InitialValue).FloatStorage.Float31;
  fVar8 = (param_1->InitialValue).FloatStorage.Float32;
  fVar9 = (param_1->InitialValue).FloatStorage.Float33;
  (this->InitialValue).FloatStorage.Float30 = (param_1->InitialValue).FloatStorage.Float30;
  (this->InitialValue).FloatStorage.Float31 = fVar7;
  (this->InitialValue).FloatStorage.Float32 = fVar8;
  (this->InitialValue).FloatStorage.Float33 = fVar9;
  fVar7 = (param_1->InitialValue).FloatStorage.Float01_2;
  fVar8 = (param_1->InitialValue).FloatStorage.Float02_2;
  fVar9 = (param_1->InitialValue).FloatStorage.Float03_2;
  (this->InitialValue).FloatStorage.Float00_2 = (param_1->InitialValue).FloatStorage.Float00_2;
  (this->InitialValue).FloatStorage.Float01_2 = fVar7;
  (this->InitialValue).FloatStorage.Float02_2 = fVar8;
  (this->InitialValue).FloatStorage.Float03_2 = fVar9;
  fVar7 = (param_1->InitialValue).FloatStorage.Float11_2;
  fVar8 = (param_1->InitialValue).FloatStorage.Float12_2;
  fVar9 = (param_1->InitialValue).FloatStorage.Float13_2;
  (this->InitialValue).FloatStorage.Float10_2 = (param_1->InitialValue).FloatStorage.Float10_2;
  (this->InitialValue).FloatStorage.Float11_2 = fVar7;
  (this->InitialValue).FloatStorage.Float12_2 = fVar8;
  (this->InitialValue).FloatStorage.Float13_2 = fVar9;
  fVar7 = (param_1->InitialValue).FloatStorage.Float21_2;
  fVar8 = (param_1->InitialValue).FloatStorage.Float22_2;
  fVar9 = (param_1->InitialValue).FloatStorage.Float23_2;
  (this->InitialValue).FloatStorage.Float20_2 = (param_1->InitialValue).FloatStorage.Float20_2;
  (this->InitialValue).FloatStorage.Float21_2 = fVar7;
  (this->InitialValue).FloatStorage.Float22_2 = fVar8;
  (this->InitialValue).FloatStorage.Float23_2 = fVar9;
  fVar7 = (param_1->InitialValue).FloatStorage.Float31_2;
  fVar8 = (param_1->InitialValue).FloatStorage.Float32_2;
  fVar9 = (param_1->InitialValue).FloatStorage.Float33_2;
  (this->InitialValue).FloatStorage.Float30_2 = (param_1->InitialValue).FloatStorage.Float30_2;
  (this->InitialValue).FloatStorage.Float31_2 = fVar7;
  (this->InitialValue).FloatStorage.Float32_2 = fVar8;
  (this->InitialValue).FloatStorage.Float33_2 = fVar9;
  uVar10 = *(undefined3 *)&(param_1->InitialValue).FloatStorage.field_0x81;
  (this->InitialValue).FloatStorage.bValid = (param_1->InitialValue).FloatStorage.bValid;
  *(undefined3 *)&(this->InitialValue).FloatStorage.field_0x81 = uVar10;
  fVar7 = (param_1->Value).FloatStorage.Float01;
  fVar8 = (param_1->Value).FloatStorage.Float02;
  fVar9 = (param_1->Value).FloatStorage.Float03;
  (this->Value).FloatStorage.Float00 = (param_1->Value).FloatStorage.Float00;
  (this->Value).FloatStorage.Float01 = fVar7;
  (this->Value).FloatStorage.Float02 = fVar8;
  (this->Value).FloatStorage.Float03 = fVar9;
  fVar7 = (param_1->Value).FloatStorage.Float11;
  fVar8 = (param_1->Value).FloatStorage.Float12;
  fVar9 = (param_1->Value).FloatStorage.Float13;
  (this->Value).FloatStorage.Float10 = (param_1->Value).FloatStorage.Float10;
  (this->Value).FloatStorage.Float11 = fVar7;
  (this->Value).FloatStorage.Float12 = fVar8;
  (this->Value).FloatStorage.Float13 = fVar9;
  fVar7 = (param_1->Value).FloatStorage.Float21;
  fVar8 = (param_1->Value).FloatStorage.Float22;
  fVar9 = (param_1->Value).FloatStorage.Float23;
  (this->Value).FloatStorage.Float20 = (param_1->Value).FloatStorage.Float20;
  (this->Value).FloatStorage.Float21 = fVar7;
  (this->Value).FloatStorage.Float22 = fVar8;
  (this->Value).FloatStorage.Float23 = fVar9;
  fVar7 = (param_1->Value).FloatStorage.Float31;
  fVar8 = (param_1->Value).FloatStorage.Float32;
  fVar9 = (param_1->Value).FloatStorage.Float33;
  (this->Value).FloatStorage.Float30 = (param_1->Value).FloatStorage.Float30;
  (this->Value).FloatStorage.Float31 = fVar7;
  (this->Value).FloatStorage.Float32 = fVar8;
  (this->Value).FloatStorage.Float33 = fVar9;
  fVar7 = (param_1->Value).FloatStorage.Float01_2;
  fVar8 = (param_1->Value).FloatStorage.Float02_2;
  fVar9 = (param_1->Value).FloatStorage.Float03_2;
  (this->Value).FloatStorage.Float00_2 = (param_1->Value).FloatStorage.Float00_2;
  (this->Value).FloatStorage.Float01_2 = fVar7;
  (this->Value).FloatStorage.Float02_2 = fVar8;
  (this->Value).FloatStorage.Float03_2 = fVar9;
  fVar7 = (param_1->Value).FloatStorage.Float11_2;
  fVar8 = (param_1->Value).FloatStorage.Float12_2;
  fVar9 = (param_1->Value).FloatStorage.Float13_2;
  (this->Value).FloatStorage.Float10_2 = (param_1->Value).FloatStorage.Float10_2;
  (this->Value).FloatStorage.Float11_2 = fVar7;
  (this->Value).FloatStorage.Float12_2 = fVar8;
  (this->Value).FloatStorage.Float13_2 = fVar9;
  fVar7 = (param_1->Value).FloatStorage.Float21_2;
  fVar8 = (param_1->Value).FloatStorage.Float22_2;
  fVar9 = (param_1->Value).FloatStorage.Float23_2;
  (this->Value).FloatStorage.Float20_2 = (param_1->Value).FloatStorage.Float20_2;
  (this->Value).FloatStorage.Float21_2 = fVar7;
  (this->Value).FloatStorage.Float22_2 = fVar8;
  (this->Value).FloatStorage.Float23_2 = fVar9;
  fVar7 = (param_1->Value).FloatStorage.Float31_2;
  fVar8 = (param_1->Value).FloatStorage.Float32_2;
  fVar9 = (param_1->Value).FloatStorage.Float33_2;
  (this->Value).FloatStorage.Float30_2 = (param_1->Value).FloatStorage.Float30_2;
  (this->Value).FloatStorage.Float31_2 = fVar7;
  (this->Value).FloatStorage.Float32_2 = fVar8;
  (this->Value).FloatStorage.Float33_2 = fVar9;
  uVar10 = *(undefined3 *)&(param_1->Value).FloatStorage.field_0x81;
  (this->Value).FloatStorage.bValid = (param_1->Value).FloatStorage.bValid;
  *(undefined3 *)&(this->Value).FloatStorage.field_0x81 = uVar10;
  this->PrimaryAxis = param_1->PrimaryAxis;
  this->bIsCurve = param_1->bIsCurve;
  this->bAnimatable = param_1->bAnimatable;
  this->bLimitTranslation = param_1->bLimitTranslation;
  this->bLimitRotation = param_1->bLimitRotation;
  this->bLimitScale = param_1->bLimitScale;
  pTVar2 = &this->Dependents;
  this->bDrawLimits = param_1->bDrawLimits;
  fVar7 = (param_1->MinimumValue).FloatStorage.Float01;
  fVar8 = (param_1->MinimumValue).FloatStorage.Float02;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float03;
  (this->MinimumValue).FloatStorage.Float00 = (param_1->MinimumValue).FloatStorage.Float00;
  (this->MinimumValue).FloatStorage.Float01 = fVar7;
  (this->MinimumValue).FloatStorage.Float02 = fVar8;
  (this->MinimumValue).FloatStorage.Float03 = fVar9;
  fVar7 = (param_1->MinimumValue).FloatStorage.Float11;
  fVar8 = (param_1->MinimumValue).FloatStorage.Float12;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float13;
  (this->MinimumValue).FloatStorage.Float10 = (param_1->MinimumValue).FloatStorage.Float10;
  (this->MinimumValue).FloatStorage.Float11 = fVar7;
  (this->MinimumValue).FloatStorage.Float12 = fVar8;
  (this->MinimumValue).FloatStorage.Float13 = fVar9;
  fVar7 = (param_1->MinimumValue).FloatStorage.Float21;
  fVar8 = (param_1->MinimumValue).FloatStorage.Float22;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float23;
  (this->MinimumValue).FloatStorage.Float20 = (param_1->MinimumValue).FloatStorage.Float20;
  (this->MinimumValue).FloatStorage.Float21 = fVar7;
  (this->MinimumValue).FloatStorage.Float22 = fVar8;
  (this->MinimumValue).FloatStorage.Float23 = fVar9;
  fVar7 = (param_1->MinimumValue).FloatStorage.Float31;
  fVar8 = (param_1->MinimumValue).FloatStorage.Float32;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float33;
  (this->MinimumValue).FloatStorage.Float30 = (param_1->MinimumValue).FloatStorage.Float30;
  (this->MinimumValue).FloatStorage.Float31 = fVar7;
  (this->MinimumValue).FloatStorage.Float32 = fVar8;
  (this->MinimumValue).FloatStorage.Float33 = fVar9;
  fVar7 = (param_1->MinimumValue).FloatStorage.Float01_2;
  fVar8 = (param_1->MinimumValue).FloatStorage.Float02_2;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float03_2;
  (this->MinimumValue).FloatStorage.Float00_2 = (param_1->MinimumValue).FloatStorage.Float00_2;
  (this->MinimumValue).FloatStorage.Float01_2 = fVar7;
  (this->MinimumValue).FloatStorage.Float02_2 = fVar8;
  (this->MinimumValue).FloatStorage.Float03_2 = fVar9;
  fVar7 = (param_1->MinimumValue).FloatStorage.Float11_2;
  fVar8 = (param_1->MinimumValue).FloatStorage.Float12_2;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float13_2;
  (this->MinimumValue).FloatStorage.Float10_2 = (param_1->MinimumValue).FloatStorage.Float10_2;
  (this->MinimumValue).FloatStorage.Float11_2 = fVar7;
  (this->MinimumValue).FloatStorage.Float12_2 = fVar8;
  (this->MinimumValue).FloatStorage.Float13_2 = fVar9;
  fVar7 = (param_1->MinimumValue).FloatStorage.Float21_2;
  fVar8 = (param_1->MinimumValue).FloatStorage.Float22_2;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float23_2;
  (this->MinimumValue).FloatStorage.Float20_2 = (param_1->MinimumValue).FloatStorage.Float20_2;
  (this->MinimumValue).FloatStorage.Float21_2 = fVar7;
  (this->MinimumValue).FloatStorage.Float22_2 = fVar8;
  (this->MinimumValue).FloatStorage.Float23_2 = fVar9;
  fVar7 = (param_1->MinimumValue).FloatStorage.Float31_2;
  fVar8 = (param_1->MinimumValue).FloatStorage.Float32_2;
  fVar9 = (param_1->MinimumValue).FloatStorage.Float33_2;
  (this->MinimumValue).FloatStorage.Float30_2 = (param_1->MinimumValue).FloatStorage.Float30_2;
  (this->MinimumValue).FloatStorage.Float31_2 = fVar7;
  (this->MinimumValue).FloatStorage.Float32_2 = fVar8;
  (this->MinimumValue).FloatStorage.Float33_2 = fVar9;
  uVar10 = *(undefined3 *)&(param_1->MinimumValue).FloatStorage.field_0x81;
  (this->MinimumValue).FloatStorage.bValid = (param_1->MinimumValue).FloatStorage.bValid;
  *(undefined3 *)&(this->MinimumValue).FloatStorage.field_0x81 = uVar10;
  fVar7 = (param_1->MaximumValue).FloatStorage.Float01;
  fVar8 = (param_1->MaximumValue).FloatStorage.Float02;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float03;
  (this->MaximumValue).FloatStorage.Float00 = (param_1->MaximumValue).FloatStorage.Float00;
  (this->MaximumValue).FloatStorage.Float01 = fVar7;
  (this->MaximumValue).FloatStorage.Float02 = fVar8;
  (this->MaximumValue).FloatStorage.Float03 = fVar9;
  fVar7 = (param_1->MaximumValue).FloatStorage.Float11;
  fVar8 = (param_1->MaximumValue).FloatStorage.Float12;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float13;
  (this->MaximumValue).FloatStorage.Float10 = (param_1->MaximumValue).FloatStorage.Float10;
  (this->MaximumValue).FloatStorage.Float11 = fVar7;
  (this->MaximumValue).FloatStorage.Float12 = fVar8;
  (this->MaximumValue).FloatStorage.Float13 = fVar9;
  fVar7 = (param_1->MaximumValue).FloatStorage.Float21;
  fVar8 = (param_1->MaximumValue).FloatStorage.Float22;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float23;
  (this->MaximumValue).FloatStorage.Float20 = (param_1->MaximumValue).FloatStorage.Float20;
  (this->MaximumValue).FloatStorage.Float21 = fVar7;
  (this->MaximumValue).FloatStorage.Float22 = fVar8;
  (this->MaximumValue).FloatStorage.Float23 = fVar9;
  fVar7 = (param_1->MaximumValue).FloatStorage.Float31;
  fVar8 = (param_1->MaximumValue).FloatStorage.Float32;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float33;
  (this->MaximumValue).FloatStorage.Float30 = (param_1->MaximumValue).FloatStorage.Float30;
  (this->MaximumValue).FloatStorage.Float31 = fVar7;
  (this->MaximumValue).FloatStorage.Float32 = fVar8;
  (this->MaximumValue).FloatStorage.Float33 = fVar9;
  fVar7 = (param_1->MaximumValue).FloatStorage.Float01_2;
  fVar8 = (param_1->MaximumValue).FloatStorage.Float02_2;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float03_2;
  (this->MaximumValue).FloatStorage.Float00_2 = (param_1->MaximumValue).FloatStorage.Float00_2;
  (this->MaximumValue).FloatStorage.Float01_2 = fVar7;
  (this->MaximumValue).FloatStorage.Float02_2 = fVar8;
  (this->MaximumValue).FloatStorage.Float03_2 = fVar9;
  fVar7 = (param_1->MaximumValue).FloatStorage.Float11_2;
  fVar8 = (param_1->MaximumValue).FloatStorage.Float12_2;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float13_2;
  (this->MaximumValue).FloatStorage.Float10_2 = (param_1->MaximumValue).FloatStorage.Float10_2;
  (this->MaximumValue).FloatStorage.Float11_2 = fVar7;
  (this->MaximumValue).FloatStorage.Float12_2 = fVar8;
  (this->MaximumValue).FloatStorage.Float13_2 = fVar9;
  fVar7 = (param_1->MaximumValue).FloatStorage.Float21_2;
  fVar8 = (param_1->MaximumValue).FloatStorage.Float22_2;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float23_2;
  (this->MaximumValue).FloatStorage.Float20_2 = (param_1->MaximumValue).FloatStorage.Float20_2;
  (this->MaximumValue).FloatStorage.Float21_2 = fVar7;
  (this->MaximumValue).FloatStorage.Float22_2 = fVar8;
  (this->MaximumValue).FloatStorage.Float23_2 = fVar9;
  fVar7 = (param_1->MaximumValue).FloatStorage.Float31_2;
  fVar8 = (param_1->MaximumValue).FloatStorage.Float32_2;
  fVar9 = (param_1->MaximumValue).FloatStorage.Float33_2;
  (this->MaximumValue).FloatStorage.Float30_2 = (param_1->MaximumValue).FloatStorage.Float30_2;
  (this->MaximumValue).FloatStorage.Float31_2 = fVar7;
  (this->MaximumValue).FloatStorage.Float32_2 = fVar8;
  (this->MaximumValue).FloatStorage.Float33_2 = fVar9;
  uVar10 = *(undefined3 *)&(param_1->MaximumValue).FloatStorage.field_0x81;
  (this->MaximumValue).FloatStorage.bValid = (param_1->MaximumValue).FloatStorage.bValid;
  *(undefined3 *)&(this->MaximumValue).FloatStorage.field_0x81 = uVar10;
  this->bGizmoEnabled = param_1->bGizmoEnabled;
  this->bGizmoVisible = param_1->bGizmoVisible;
  this->GizmoName = param_1->GizmoName;
  piVar1 = &(this->Dependents).ArrayMax;
  dVar5 = (param_1->GizmoTransform).Rotation.XY.m128d_f64[1];
  (this->GizmoTransform).Rotation.XY.m128d_f64[0] =
       (param_1->GizmoTransform).Rotation.XY.m128d_f64[0];
  (this->GizmoTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->GizmoTransform).Rotation.ZW.m128d_f64[1];
  (this->GizmoTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->GizmoTransform).Rotation.ZW.m128d_f64[0];
  (this->GizmoTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->GizmoTransform).Translation.XY.m128d_f64[1];
  (this->GizmoTransform).Translation.XY.m128d_f64[0] =
       (param_1->GizmoTransform).Translation.XY.m128d_f64[0];
  (this->GizmoTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->GizmoTransform).Translation.ZW.m128d_f64[1];
  (this->GizmoTransform).Translation.ZW.m128d_f64[0] =
       (param_1->GizmoTransform).Translation.ZW.m128d_f64[0];
  (this->GizmoTransform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->GizmoTransform).Scale3D.XY.m128d_f64[1];
  (this->GizmoTransform).Scale3D.XY.m128d_f64[0] = (param_1->GizmoTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->GizmoTransform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->GizmoTransform).Scale3D.ZW.m128d_f64[1];
  (this->GizmoTransform).Scale3D.ZW.m128d_f64[0] = (param_1->GizmoTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->GizmoTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  uVar6 = *(undefined8 *)((longlong)&(param_1->GizmoColor).field0_0x0 + 8);
  *(undefined8 *)&(this->GizmoColor).field0_0x0 = *(undefined8 *)&(param_1->GizmoColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->GizmoColor).field0_0x0 + 8) = uVar6;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Dependents).ArrayNum;
  _Src = (param_1->Dependents).AllocatorInstance.Data;
  (this->Dependents).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  this->bIsTransientControl = param_1->bIsTransientControl;
  pUVar4 = (param_1->ControlEnum).field0_0x0.DebugPtr;
  (this->ControlEnum).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return this;
}

// FRigControl @ 14a2d99c0

FRigControl * __thiscall FRigControl::FRigControl(FRigControl *this)

{
  FLinearColor FVar1;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRigControl__6B_;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->ControlType = Transform;
  (this->DisplayName).ComparisonIndex = 0;
  (this->DisplayName).Number = 0;
  (this->ParentName).ComparisonIndex = 0;
  (this->ParentName).Number = 0;
  this->ParentIndex = -1;
  (this->SpaceName).ComparisonIndex = 0;
  (this->SpaceName).Number = 0;
  this->SpaceIndex = -1;
  *&(this->OffsetTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OffsetTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OffsetTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OffsetTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OffsetTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OffsetTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->InitialValue).FloatStorage.Float00 = 0.0;
  (this->InitialValue).FloatStorage.Float01 = 0.0;
  (this->InitialValue).FloatStorage.Float02 = 0.0;
  (this->InitialValue).FloatStorage.Float03 = 0.0;
  (this->InitialValue).FloatStorage.Float10 = 0.0;
  (this->InitialValue).FloatStorage.Float11 = 0.0;
  (this->InitialValue).FloatStorage.Float12 = 0.0;
  (this->InitialValue).FloatStorage.Float13 = 0.0;
  (this->InitialValue).FloatStorage.Float20 = 0.0;
  (this->InitialValue).FloatStorage.Float21 = 0.0;
  (this->InitialValue).FloatStorage.Float22 = 0.0;
  (this->InitialValue).FloatStorage.Float23 = 0.0;
  (this->InitialValue).FloatStorage.Float30 = 0.0;
  (this->InitialValue).FloatStorage.Float31 = 0.0;
  (this->InitialValue).FloatStorage.Float32 = 0.0;
  (this->InitialValue).FloatStorage.Float33 = 0.0;
  (this->InitialValue).FloatStorage.Float00_2 = 0.0;
  (this->InitialValue).FloatStorage.Float01_2 = 0.0;
  (this->InitialValue).FloatStorage.Float02_2 = 0.0;
  (this->InitialValue).FloatStorage.Float03_2 = 0.0;
  (this->InitialValue).FloatStorage.Float10_2 = 0.0;
  (this->InitialValue).FloatStorage.Float11_2 = 0.0;
  (this->InitialValue).FloatStorage.Float12_2 = 0.0;
  (this->InitialValue).FloatStorage.Float13_2 = 0.0;
  (this->InitialValue).FloatStorage.Float20_2 = 0.0;
  (this->InitialValue).FloatStorage.Float21_2 = 0.0;
  (this->InitialValue).FloatStorage.Float22_2 = 0.0;
  (this->InitialValue).FloatStorage.Float23_2 = 0.0;
  (this->InitialValue).FloatStorage.Float30_2 = 0.0;
  (this->InitialValue).FloatStorage.Float31_2 = 0.0;
  (this->InitialValue).FloatStorage.Float32_2 = 0.0;
  (this->InitialValue).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(this->InitialValue).FloatStorage.bValid = 0;
  (this->Value).FloatStorage.Float00 = 0.0;
  (this->Value).FloatStorage.Float01 = 0.0;
  (this->Value).FloatStorage.Float02 = 0.0;
  (this->Value).FloatStorage.Float03 = 0.0;
  (this->Value).FloatStorage.Float10 = 0.0;
  (this->Value).FloatStorage.Float11 = 0.0;
  (this->Value).FloatStorage.Float12 = 0.0;
  (this->Value).FloatStorage.Float13 = 0.0;
  (this->Value).FloatStorage.Float20 = 0.0;
  (this->Value).FloatStorage.Float21 = 0.0;
  (this->Value).FloatStorage.Float22 = 0.0;
  (this->Value).FloatStorage.Float23 = 0.0;
  (this->Value).FloatStorage.Float30 = 0.0;
  (this->Value).FloatStorage.Float31 = 0.0;
  (this->Value).FloatStorage.Float32 = 0.0;
  (this->Value).FloatStorage.Float33 = 0.0;
  (this->Value).FloatStorage.Float00_2 = 0.0;
  (this->Value).FloatStorage.Float01_2 = 0.0;
  (this->Value).FloatStorage.Float02_2 = 0.0;
  (this->Value).FloatStorage.Float03_2 = 0.0;
  (this->Value).FloatStorage.Float10_2 = 0.0;
  (this->Value).FloatStorage.Float11_2 = 0.0;
  (this->Value).FloatStorage.Float12_2 = 0.0;
  (this->Value).FloatStorage.Float13_2 = 0.0;
  (this->Value).FloatStorage.Float20_2 = 0.0;
  (this->Value).FloatStorage.Float21_2 = 0.0;
  (this->Value).FloatStorage.Float22_2 = 0.0;
  (this->Value).FloatStorage.Float23_2 = 0.0;
  (this->Value).FloatStorage.Float30_2 = 0.0;
  (this->Value).FloatStorage.Float31_2 = 0.0;
  (this->Value).FloatStorage.Float32_2 = 0.0;
  (this->Value).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(this->Value).FloatStorage.bValid = 0;
  this->PrimaryAxis = X;
  this->bIsCurve = false;
  this->bAnimatable = true;
  this->bLimitTranslation = false;
  this->bLimitRotation = false;
  this->bLimitScale = false;
  this->bDrawLimits = true;
  (this->MinimumValue).FloatStorage.Float00 = 0.0;
  (this->MinimumValue).FloatStorage.Float01 = 0.0;
  (this->MinimumValue).FloatStorage.Float02 = 0.0;
  (this->MinimumValue).FloatStorage.Float03 = 0.0;
  (this->MinimumValue).FloatStorage.Float10 = 0.0;
  (this->MinimumValue).FloatStorage.Float11 = 0.0;
  (this->MinimumValue).FloatStorage.Float12 = 0.0;
  (this->MinimumValue).FloatStorage.Float13 = 0.0;
  (this->MinimumValue).FloatStorage.Float20 = 0.0;
  (this->MinimumValue).FloatStorage.Float21 = 0.0;
  (this->MinimumValue).FloatStorage.Float22 = 0.0;
  (this->MinimumValue).FloatStorage.Float23 = 0.0;
  (this->MinimumValue).FloatStorage.Float30 = 0.0;
  (this->MinimumValue).FloatStorage.Float31 = 0.0;
  (this->MinimumValue).FloatStorage.Float32 = 0.0;
  (this->MinimumValue).FloatStorage.Float33 = 0.0;
  (this->MinimumValue).FloatStorage.Float00_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float01_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float02_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float03_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float10_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float11_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float12_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float13_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float20_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float21_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float22_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float23_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float30_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float31_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float32_2 = 0.0;
  (this->MinimumValue).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(this->MinimumValue).FloatStorage.bValid = 0;
  (this->MaximumValue).FloatStorage.Float00 = 0.0;
  (this->MaximumValue).FloatStorage.Float01 = 0.0;
  (this->MaximumValue).FloatStorage.Float02 = 0.0;
  (this->MaximumValue).FloatStorage.Float03 = 0.0;
  (this->MaximumValue).FloatStorage.Float10 = 0.0;
  (this->MaximumValue).FloatStorage.Float11 = 0.0;
  (this->MaximumValue).FloatStorage.Float12 = 0.0;
  (this->MaximumValue).FloatStorage.Float13 = 0.0;
  (this->MaximumValue).FloatStorage.Float20 = 0.0;
  (this->MaximumValue).FloatStorage.Float21 = 0.0;
  (this->MaximumValue).FloatStorage.Float22 = 0.0;
  (this->MaximumValue).FloatStorage.Float23 = 0.0;
  (this->MaximumValue).FloatStorage.Float30 = 0.0;
  (this->MaximumValue).FloatStorage.Float31 = 0.0;
  (this->MaximumValue).FloatStorage.Float32 = 0.0;
  (this->MaximumValue).FloatStorage.Float33 = 0.0;
  (this->MaximumValue).FloatStorage.Float00_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float01_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float02_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float03_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float10_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float11_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float12_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float13_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float20_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float21_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float22_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float23_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float30_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float31_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float32_2 = 0.0;
  (this->MaximumValue).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(this->MaximumValue).FloatStorage.bValid = 0;
  this->bGizmoEnabled = true;
  this->bGizmoVisible = true;
  ::FName::FName(&this->GizmoName,L"Gizmo");
  *&(this->GizmoTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->GizmoTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->GizmoTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->GizmoTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->GizmoTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->GizmoTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  FVar1 = FLinearColor::Red;
  this->bIsTransientControl = false;
  (this->GizmoColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->Dependents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dependents).ArrayNum = 0;
  (this->Dependents).ArrayMax = 0;
  (this->ControlEnum).field0_0x0.DebugPtr = (UEnum *)0x0;
  return this;
}

// ~FRigControl @ 14a2dea10

void __thiscall FRigControl::~FRigControl(FRigControl *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigControl__6B_;
  pFVar1 = (this->Dependents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigElement__6B_;
  return;
}

// operator= @ 14a2dfd90

FRigControl * __thiscall FRigControl::operator=(FRigControl *this,FRigControl *param_1)

{
  UEnum *pUVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined3 uVar7;
  
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->ControlType = param_1->ControlType;
  this->DisplayName = param_1->DisplayName;
  this->ParentName = param_1->ParentName;
  this->ParentIndex = param_1->ParentIndex;
  this->SpaceName = param_1->SpaceName;
  this->SpaceIndex = param_1->SpaceIndex;
  dVar2 = (param_1->OffsetTransform).Rotation.XY.m128d_f64[1];
  (this->OffsetTransform).Rotation.XY.m128d_f64[0] =
       (param_1->OffsetTransform).Rotation.XY.m128d_f64[0];
  (this->OffsetTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->OffsetTransform).Rotation.ZW.m128d_f64[1];
  (this->OffsetTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->OffsetTransform).Rotation.ZW.m128d_f64[0];
  (this->OffsetTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->OffsetTransform).Translation.XY.m128d_f64[1];
  (this->OffsetTransform).Translation.XY.m128d_f64[0] =
       (param_1->OffsetTransform).Translation.XY.m128d_f64[0];
  (this->OffsetTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->OffsetTransform).Translation.ZW.m128d_f64[1];
  (this->OffsetTransform).Translation.ZW.m128d_f64[0] =
       (param_1->OffsetTransform).Translation.ZW.m128d_f64[0];
  (this->OffsetTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->OffsetTransform).Scale3D.XY.m128d_f64[1];
  (this->OffsetTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->OffsetTransform).Scale3D.XY.m128d_f64[0];
  (this->OffsetTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->OffsetTransform).Scale3D.ZW.m128d_f64[1];
  (this->OffsetTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->OffsetTransform).Scale3D.ZW.m128d_f64[0];
  (this->OffsetTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  fVar4 = (param_1->InitialValue).FloatStorage.Float01;
  fVar5 = (param_1->InitialValue).FloatStorage.Float02;
  fVar6 = (param_1->InitialValue).FloatStorage.Float03;
  (this->InitialValue).FloatStorage.Float00 = (param_1->InitialValue).FloatStorage.Float00;
  (this->InitialValue).FloatStorage.Float01 = fVar4;
  (this->InitialValue).FloatStorage.Float02 = fVar5;
  (this->InitialValue).FloatStorage.Float03 = fVar6;
  fVar4 = (param_1->InitialValue).FloatStorage.Float11;
  fVar5 = (param_1->InitialValue).FloatStorage.Float12;
  fVar6 = (param_1->InitialValue).FloatStorage.Float13;
  (this->InitialValue).FloatStorage.Float10 = (param_1->InitialValue).FloatStorage.Float10;
  (this->InitialValue).FloatStorage.Float11 = fVar4;
  (this->InitialValue).FloatStorage.Float12 = fVar5;
  (this->InitialValue).FloatStorage.Float13 = fVar6;
  fVar4 = (param_1->InitialValue).FloatStorage.Float21;
  fVar5 = (param_1->InitialValue).FloatStorage.Float22;
  fVar6 = (param_1->InitialValue).FloatStorage.Float23;
  (this->InitialValue).FloatStorage.Float20 = (param_1->InitialValue).FloatStorage.Float20;
  (this->InitialValue).FloatStorage.Float21 = fVar4;
  (this->InitialValue).FloatStorage.Float22 = fVar5;
  (this->InitialValue).FloatStorage.Float23 = fVar6;
  fVar4 = (param_1->InitialValue).FloatStorage.Float31;
  fVar5 = (param_1->InitialValue).FloatStorage.Float32;
  fVar6 = (param_1->InitialValue).FloatStorage.Float33;
  (this->InitialValue).FloatStorage.Float30 = (param_1->InitialValue).FloatStorage.Float30;
  (this->InitialValue).FloatStorage.Float31 = fVar4;
  (this->InitialValue).FloatStorage.Float32 = fVar5;
  (this->InitialValue).FloatStorage.Float33 = fVar6;
  fVar4 = (param_1->InitialValue).FloatStorage.Float01_2;
  fVar5 = (param_1->InitialValue).FloatStorage.Float02_2;
  fVar6 = (param_1->InitialValue).FloatStorage.Float03_2;
  (this->InitialValue).FloatStorage.Float00_2 = (param_1->InitialValue).FloatStorage.Float00_2;
  (this->InitialValue).FloatStorage.Float01_2 = fVar4;
  (this->InitialValue).FloatStorage.Float02_2 = fVar5;
  (this->InitialValue).FloatStorage.Float03_2 = fVar6;
  fVar4 = (param_1->InitialValue).FloatStorage.Float11_2;
  fVar5 = (param_1->InitialValue).FloatStorage.Float12_2;
  fVar6 = (param_1->InitialValue).FloatStorage.Float13_2;
  (this->InitialValue).FloatStorage.Float10_2 = (param_1->InitialValue).FloatStorage.Float10_2;
  (this->InitialValue).FloatStorage.Float11_2 = fVar4;
  (this->InitialValue).FloatStorage.Float12_2 = fVar5;
  (this->InitialValue).FloatStorage.Float13_2 = fVar6;
  fVar4 = (param_1->InitialValue).FloatStorage.Float21_2;
  fVar5 = (param_1->InitialValue).FloatStorage.Float22_2;
  fVar6 = (param_1->InitialValue).FloatStorage.Float23_2;
  (this->InitialValue).FloatStorage.Float20_2 = (param_1->InitialValue).FloatStorage.Float20_2;
  (this->InitialValue).FloatStorage.Float21_2 = fVar4;
  (this->InitialValue).FloatStorage.Float22_2 = fVar5;
  (this->InitialValue).FloatStorage.Float23_2 = fVar6;
  fVar4 = (param_1->InitialValue).FloatStorage.Float31_2;
  fVar5 = (param_1->InitialValue).FloatStorage.Float32_2;
  fVar6 = (param_1->InitialValue).FloatStorage.Float33_2;
  (this->InitialValue).FloatStorage.Float30_2 = (param_1->InitialValue).FloatStorage.Float30_2;
  (this->InitialValue).FloatStorage.Float31_2 = fVar4;
  (this->InitialValue).FloatStorage.Float32_2 = fVar5;
  (this->InitialValue).FloatStorage.Float33_2 = fVar6;
  uVar7 = *(undefined3 *)&(param_1->InitialValue).FloatStorage.field_0x81;
  (this->InitialValue).FloatStorage.bValid = (param_1->InitialValue).FloatStorage.bValid;
  *(undefined3 *)&(this->InitialValue).FloatStorage.field_0x81 = uVar7;
  fVar4 = (param_1->Value).FloatStorage.Float01;
  fVar5 = (param_1->Value).FloatStorage.Float02;
  fVar6 = (param_1->Value).FloatStorage.Float03;
  (this->Value).FloatStorage.Float00 = (param_1->Value).FloatStorage.Float00;
  (this->Value).FloatStorage.Float01 = fVar4;
  (this->Value).FloatStorage.Float02 = fVar5;
  (this->Value).FloatStorage.Float03 = fVar6;
  fVar4 = (param_1->Value).FloatStorage.Float11;
  fVar5 = (param_1->Value).FloatStorage.Float12;
  fVar6 = (param_1->Value).FloatStorage.Float13;
  (this->Value).FloatStorage.Float10 = (param_1->Value).FloatStorage.Float10;
  (this->Value).FloatStorage.Float11 = fVar4;
  (this->Value).FloatStorage.Float12 = fVar5;
  (this->Value).FloatStorage.Float13 = fVar6;
  fVar4 = (param_1->Value).FloatStorage.Float21;
  fVar5 = (param_1->Value).FloatStorage.Float22;
  fVar6 = (param_1->Value).FloatStorage.Float23;
  (this->Value).FloatStorage.Float20 = (param_1->Value).FloatStorage.Float20;
  (this->Value).FloatStorage.Float21 = fVar4;
  (this->Value).FloatStorage.Float22 = fVar5;
  (this->Value).FloatStorage.Float23 = fVar6;
  fVar4 = (param_1->Value).FloatStorage.Float31;
  fVar5 = (param_1->Value).FloatStorage.Float32;
  fVar6 = (param_1->Value).FloatStorage.Float33;
  (this->Value).FloatStorage.Float30 = (param_1->Value).FloatStorage.Float30;
  (this->Value).FloatStorage.Float31 = fVar4;
  (this->Value).FloatStorage.Float32 = fVar5;
  (this->Value).FloatStorage.Float33 = fVar6;
  fVar4 = (param_1->Value).FloatStorage.Float01_2;
  fVar5 = (param_1->Value).FloatStorage.Float02_2;
  fVar6 = (param_1->Value).FloatStorage.Float03_2;
  (this->Value).FloatStorage.Float00_2 = (param_1->Value).FloatStorage.Float00_2;
  (this->Value).FloatStorage.Float01_2 = fVar4;
  (this->Value).FloatStorage.Float02_2 = fVar5;
  (this->Value).FloatStorage.Float03_2 = fVar6;
  fVar4 = (param_1->Value).FloatStorage.Float11_2;
  fVar5 = (param_1->Value).FloatStorage.Float12_2;
  fVar6 = (param_1->Value).FloatStorage.Float13_2;
  (this->Value).FloatStorage.Float10_2 = (param_1->Value).FloatStorage.Float10_2;
  (this->Value).FloatStorage.Float11_2 = fVar4;
  (this->Value).FloatStorage.Float12_2 = fVar5;
  (this->Value).FloatStorage.Float13_2 = fVar6;
  fVar4 = (param_1->Value).FloatStorage.Float21_2;
  fVar5 = (param_1->Value).FloatStorage.Float22_2;
  fVar6 = (param_1->Value).FloatStorage.Float23_2;
  (this->Value).FloatStorage.Float20_2 = (param_1->Value).FloatStorage.Float20_2;
  (this->Value).FloatStorage.Float21_2 = fVar4;
  (this->Value).FloatStorage.Float22_2 = fVar5;
  (this->Value).FloatStorage.Float23_2 = fVar6;
  fVar4 = (param_1->Value).FloatStorage.Float31_2;
  fVar5 = (param_1->Value).FloatStorage.Float32_2;
  fVar6 = (param_1->Value).FloatStorage.Float33_2;
  (this->Value).FloatStorage.Float30_2 = (param_1->Value).FloatStorage.Float30_2;
  (this->Value).FloatStorage.Float31_2 = fVar4;
  (this->Value).FloatStorage.Float32_2 = fVar5;
  (this->Value).FloatStorage.Float33_2 = fVar6;
  uVar7 = *(undefined3 *)&(param_1->Value).FloatStorage.field_0x81;
  (this->Value).FloatStorage.bValid = (param_1->Value).FloatStorage.bValid;
  *(undefined3 *)&(this->Value).FloatStorage.field_0x81 = uVar7;
  this->PrimaryAxis = param_1->PrimaryAxis;
  this->bIsCurve = param_1->bIsCurve;
  this->bAnimatable = param_1->bAnimatable;
  this->bLimitTranslation = param_1->bLimitTranslation;
  this->bLimitRotation = param_1->bLimitRotation;
  this->bLimitScale = param_1->bLimitScale;
  this->bDrawLimits = param_1->bDrawLimits;
  fVar4 = (param_1->MinimumValue).FloatStorage.Float01;
  fVar5 = (param_1->MinimumValue).FloatStorage.Float02;
  fVar6 = (param_1->MinimumValue).FloatStorage.Float03;
  (this->MinimumValue).FloatStorage.Float00 = (param_1->MinimumValue).FloatStorage.Float00;
  (this->MinimumValue).FloatStorage.Float01 = fVar4;
  (this->MinimumValue).FloatStorage.Float02 = fVar5;
  (this->MinimumValue).FloatStorage.Float03 = fVar6;
  fVar4 = (param_1->MinimumValue).FloatStorage.Float11;
  fVar5 = (param_1->MinimumValue).FloatStorage.Float12;
  fVar6 = (param_1->MinimumValue).FloatStorage.Float13;
  (this->MinimumValue).FloatStorage.Float10 = (param_1->MinimumValue).FloatStorage.Float10;
  (this->MinimumValue).FloatStorage.Float11 = fVar4;
  (this->MinimumValue).FloatStorage.Float12 = fVar5;
  (this->MinimumValue).FloatStorage.Float13 = fVar6;
  fVar4 = (param_1->MinimumValue).FloatStorage.Float21;
  fVar5 = (param_1->MinimumValue).FloatStorage.Float22;
  fVar6 = (param_1->MinimumValue).FloatStorage.Float23;
  (this->MinimumValue).FloatStorage.Float20 = (param_1->MinimumValue).FloatStorage.Float20;
  (this->MinimumValue).FloatStorage.Float21 = fVar4;
  (this->MinimumValue).FloatStorage.Float22 = fVar5;
  (this->MinimumValue).FloatStorage.Float23 = fVar6;
  fVar4 = (param_1->MinimumValue).FloatStorage.Float31;
  fVar5 = (param_1->MinimumValue).FloatStorage.Float32;
  fVar6 = (param_1->MinimumValue).FloatStorage.Float33;
  (this->MinimumValue).FloatStorage.Float30 = (param_1->MinimumValue).FloatStorage.Float30;
  (this->MinimumValue).FloatStorage.Float31 = fVar4;
  (this->MinimumValue).FloatStorage.Float32 = fVar5;
  (this->MinimumValue).FloatStorage.Float33 = fVar6;
  fVar4 = (param_1->MinimumValue).FloatStorage.Float01_2;
  fVar5 = (param_1->MinimumValue).FloatStorage.Float02_2;
  fVar6 = (param_1->MinimumValue).FloatStorage.Float03_2;
  (this->MinimumValue).FloatStorage.Float00_2 = (param_1->MinimumValue).FloatStorage.Float00_2;
  (this->MinimumValue).FloatStorage.Float01_2 = fVar4;
  (this->MinimumValue).FloatStorage.Float02_2 = fVar5;
  (this->MinimumValue).FloatStorage.Float03_2 = fVar6;
  fVar4 = (param_1->MinimumValue).FloatStorage.Float11_2;
  fVar5 = (param_1->MinimumValue).FloatStorage.Float12_2;
  fVar6 = (param_1->MinimumValue).FloatStorage.Float13_2;
  (this->MinimumValue).FloatStorage.Float10_2 = (param_1->MinimumValue).FloatStorage.Float10_2;
  (this->MinimumValue).FloatStorage.Float11_2 = fVar4;
  (this->MinimumValue).FloatStorage.Float12_2 = fVar5;
  (this->MinimumValue).FloatStorage.Float13_2 = fVar6;
  fVar4 = (param_1->MinimumValue).FloatStorage.Float21_2;
  fVar5 = (param_1->MinimumValue).FloatStorage.Float22_2;
  fVar6 = (param_1->MinimumValue).FloatStorage.Float23_2;
  (this->MinimumValue).FloatStorage.Float20_2 = (param_1->MinimumValue).FloatStorage.Float20_2;
  (this->MinimumValue).FloatStorage.Float21_2 = fVar4;
  (this->MinimumValue).FloatStorage.Float22_2 = fVar5;
  (this->MinimumValue).FloatStorage.Float23_2 = fVar6;
  fVar4 = (param_1->MinimumValue).FloatStorage.Float31_2;
  fVar5 = (param_1->MinimumValue).FloatStorage.Float32_2;
  fVar6 = (param_1->MinimumValue).FloatStorage.Float33_2;
  (this->MinimumValue).FloatStorage.Float30_2 = (param_1->MinimumValue).FloatStorage.Float30_2;
  (this->MinimumValue).FloatStorage.Float31_2 = fVar4;
  (this->MinimumValue).FloatStorage.Float32_2 = fVar5;
  (this->MinimumValue).FloatStorage.Float33_2 = fVar6;
  uVar7 = *(undefined3 *)&(param_1->MinimumValue).FloatStorage.field_0x81;
  (this->MinimumValue).FloatStorage.bValid = (param_1->MinimumValue).FloatStorage.bValid;
  *(undefined3 *)&(this->MinimumValue).FloatStorage.field_0x81 = uVar7;
  fVar4 = (param_1->MaximumValue).FloatStorage.Float01;
  fVar5 = (param_1->MaximumValue).FloatStorage.Float02;
  fVar6 = (param_1->MaximumValue).FloatStorage.Float03;
  (this->MaximumValue).FloatStorage.Float00 = (param_1->MaximumValue).FloatStorage.Float00;
  (this->MaximumValue).FloatStorage.Float01 = fVar4;
  (this->MaximumValue).FloatStorage.Float02 = fVar5;
  (this->MaximumValue).FloatStorage.Float03 = fVar6;
  fVar4 = (param_1->MaximumValue).FloatStorage.Float11;
  fVar5 = (param_1->MaximumValue).FloatStorage.Float12;
  fVar6 = (param_1->MaximumValue).FloatStorage.Float13;
  (this->MaximumValue).FloatStorage.Float10 = (param_1->MaximumValue).FloatStorage.Float10;
  (this->MaximumValue).FloatStorage.Float11 = fVar4;
  (this->MaximumValue).FloatStorage.Float12 = fVar5;
  (this->MaximumValue).FloatStorage.Float13 = fVar6;
  fVar4 = (param_1->MaximumValue).FloatStorage.Float21;
  fVar5 = (param_1->MaximumValue).FloatStorage.Float22;
  fVar6 = (param_1->MaximumValue).FloatStorage.Float23;
  (this->MaximumValue).FloatStorage.Float20 = (param_1->MaximumValue).FloatStorage.Float20;
  (this->MaximumValue).FloatStorage.Float21 = fVar4;
  (this->MaximumValue).FloatStorage.Float22 = fVar5;
  (this->MaximumValue).FloatStorage.Float23 = fVar6;
  fVar4 = (param_1->MaximumValue).FloatStorage.Float31;
  fVar5 = (param_1->MaximumValue).FloatStorage.Float32;
  fVar6 = (param_1->MaximumValue).FloatStorage.Float33;
  (this->MaximumValue).FloatStorage.Float30 = (param_1->MaximumValue).FloatStorage.Float30;
  (this->MaximumValue).FloatStorage.Float31 = fVar4;
  (this->MaximumValue).FloatStorage.Float32 = fVar5;
  (this->MaximumValue).FloatStorage.Float33 = fVar6;
  fVar4 = (param_1->MaximumValue).FloatStorage.Float01_2;
  fVar5 = (param_1->MaximumValue).FloatStorage.Float02_2;
  fVar6 = (param_1->MaximumValue).FloatStorage.Float03_2;
  (this->MaximumValue).FloatStorage.Float00_2 = (param_1->MaximumValue).FloatStorage.Float00_2;
  (this->MaximumValue).FloatStorage.Float01_2 = fVar4;
  (this->MaximumValue).FloatStorage.Float02_2 = fVar5;
  (this->MaximumValue).FloatStorage.Float03_2 = fVar6;
  fVar4 = (param_1->MaximumValue).FloatStorage.Float11_2;
  fVar5 = (param_1->MaximumValue).FloatStorage.Float12_2;
  fVar6 = (param_1->MaximumValue).FloatStorage.Float13_2;
  (this->MaximumValue).FloatStorage.Float10_2 = (param_1->MaximumValue).FloatStorage.Float10_2;
  (this->MaximumValue).FloatStorage.Float11_2 = fVar4;
  (this->MaximumValue).FloatStorage.Float12_2 = fVar5;
  (this->MaximumValue).FloatStorage.Float13_2 = fVar6;
  fVar4 = (param_1->MaximumValue).FloatStorage.Float21_2;
  fVar5 = (param_1->MaximumValue).FloatStorage.Float22_2;
  fVar6 = (param_1->MaximumValue).FloatStorage.Float23_2;
  (this->MaximumValue).FloatStorage.Float20_2 = (param_1->MaximumValue).FloatStorage.Float20_2;
  (this->MaximumValue).FloatStorage.Float21_2 = fVar4;
  (this->MaximumValue).FloatStorage.Float22_2 = fVar5;
  (this->MaximumValue).FloatStorage.Float23_2 = fVar6;
  fVar4 = (param_1->MaximumValue).FloatStorage.Float31_2;
  fVar5 = (param_1->MaximumValue).FloatStorage.Float32_2;
  fVar6 = (param_1->MaximumValue).FloatStorage.Float33_2;
  (this->MaximumValue).FloatStorage.Float30_2 = (param_1->MaximumValue).FloatStorage.Float30_2;
  (this->MaximumValue).FloatStorage.Float31_2 = fVar4;
  (this->MaximumValue).FloatStorage.Float32_2 = fVar5;
  (this->MaximumValue).FloatStorage.Float33_2 = fVar6;
  uVar7 = *(undefined3 *)&(param_1->MaximumValue).FloatStorage.field_0x81;
  (this->MaximumValue).FloatStorage.bValid = (param_1->MaximumValue).FloatStorage.bValid;
  *(undefined3 *)&(this->MaximumValue).FloatStorage.field_0x81 = uVar7;
  this->bGizmoEnabled = param_1->bGizmoEnabled;
  this->bGizmoVisible = param_1->bGizmoVisible;
  this->GizmoName = param_1->GizmoName;
  dVar2 = (param_1->GizmoTransform).Rotation.XY.m128d_f64[1];
  (this->GizmoTransform).Rotation.XY.m128d_f64[0] =
       (param_1->GizmoTransform).Rotation.XY.m128d_f64[0];
  (this->GizmoTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->GizmoTransform).Rotation.ZW.m128d_f64[1];
  (this->GizmoTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->GizmoTransform).Rotation.ZW.m128d_f64[0];
  (this->GizmoTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->GizmoTransform).Translation.XY.m128d_f64[1];
  (this->GizmoTransform).Translation.XY.m128d_f64[0] =
       (param_1->GizmoTransform).Translation.XY.m128d_f64[0];
  (this->GizmoTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->GizmoTransform).Translation.ZW.m128d_f64[1];
  (this->GizmoTransform).Translation.ZW.m128d_f64[0] =
       (param_1->GizmoTransform).Translation.ZW.m128d_f64[0];
  (this->GizmoTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->GizmoTransform).Scale3D.XY.m128d_f64[1];
  (this->GizmoTransform).Scale3D.XY.m128d_f64[0] = (param_1->GizmoTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->GizmoTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->GizmoTransform).Scale3D.ZW.m128d_f64[1];
  (this->GizmoTransform).Scale3D.ZW.m128d_f64[0] = (param_1->GizmoTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->GizmoTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  uVar3 = *(undefined8 *)((longlong)&(param_1->GizmoColor).field0_0x0 + 8);
  *(undefined8 *)&(this->GizmoColor).field0_0x0 = *(undefined8 *)&(param_1->GizmoColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->GizmoColor).field0_0x0 + 8) = uVar3;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->Dependents,&param_1->Dependents);
  this->bIsTransientControl = param_1->bIsTransientControl;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ControlEnum).field0_0x0.DebugPtr, pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ControlEnum).field0_0x0 = (param_1->ControlEnum).field0_0x0;
  return this;
}

// ApplyLimits @ 14a2f37b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRigControl::ApplyLimits(FRigControl *this,FRigControlValue *param_1)

{
  undefined1 auStackY_268 [32];
  FRigControlSettings local_238;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  FRigControlSettings::FRigControlSettings(&local_238);
  local_238.ControlType = this->ControlType;
  FRigControlSettings::SetupLimitArrayForType
            (&local_238,this->bLimitTranslation,this->bLimitRotation,this->bLimitScale);
  FRigControlValue::ApplyLimits
            (param_1,&local_238.LimitEnabled,this->ControlType,&this->MinimumValue,
             &this->MaximumValue);
  if (local_238.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.FilteredChannels.AllocatorInstance.Data);
  }
  if (local_238.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.PreviouslyDrivenControls.AllocatorInstance.Data);
  }
  if (local_238.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.DrivenControls.AllocatorInstance.Data);
  }
  if (local_238.Customization.RemovedSpaces.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_238.Customization.RemovedSpaces.AllocatorInstance.Data);
  }
  if (local_238.Customization.AvailableSpaces.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Customization.AvailableSpaces.AllocatorInstance.Data);
  }
  if (local_238.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.LimitEnabled.AllocatorInstance.Data);
  }
  return;
}

// GetElementType @ 14a30ecf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

ERigElementType __thiscall FRigControl::GetElementType(FRigControl *this)

{
  return Control;
}

// GetParentElementKey @ 14a3122f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
FRigControl::GetParentElementKey(FRigControl *this,FRigElementKey *__return_storage_ptr__)

{
  ERigElementType EVar1;
  
  EVar1 = (**(code **)(this->_padding_ + 8))();
  __return_storage_ptr__->Type = EVar1;
  __return_storage_ptr__->Name = this->ParentName;
  return __return_storage_ptr__;
}

// GetSpaceElementKey @ 14a3195a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
FRigControl::GetSpaceElementKey(FRigControl *this,FRigElementKey *__return_storage_ptr__)

{
  __return_storage_ptr__->Name = this->SpaceName;
  __return_storage_ptr__->Type = Null;
  return __return_storage_ptr__;
}

// GetTransformFromValue @ 14a31ad70

TTransform<double> * __thiscall
FRigControl::GetTransformFromValue
          (FRigControl *this,TTransform<double> *__return_storage_ptr__,ERigControlValueType param_1
          )

{
  longlong lVar1;
  
  if (param_1 == Initial) {
    lVar1 = 0xa0;
  }
  else if (param_1 == Minimum) {
    lVar1 = 0x1b0;
  }
  else if (param_1 == Maximum) {
    lVar1 = 0x234;
  }
  else {
    lVar1 = 0x124;
  }
  FRigControlValue::GetAsTransform
            ((FRigControlValue *)((longlong)(&(this->OffsetTransform).Rotation + -2) + lVar1),
             __return_storage_ptr__,this->ControlType,this->PrimaryAxis);
  return __return_storage_ptr__;
}

// SetValueFromTransform @ 14a352310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a3523a2) */
/* WARNING: Removing unreachable block (ram,0x00014a35239b) */
/* WARNING: Removing unreachable block (ram,0x00014a3523a9) */

void __thiscall
FRigControl::SetValueFromTransform
          (FRigControl *this,TTransform<double> *param_1,ERigControlValueType param_2)

{
  longlong lVar1;
  undefined1 auStackY_278 [32];
  FRigControlSettings local_248;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (param_2 == Initial) {
    lVar1 = 0xa0;
  }
  else if (param_2 == Minimum) {
    lVar1 = 0x1b0;
  }
  else if (param_2 == Maximum) {
    lVar1 = 0x234;
  }
  else {
    lVar1 = 0x124;
  }
  FRigControlValue::SetFromTransform
            ((FRigControlValue *)((longlong)(&(this->OffsetTransform).Rotation + -2) + lVar1),
             param_1,this->ControlType,this->PrimaryAxis);
  if (param_2 == Current) {
    FRigControlSettings::FRigControlSettings(&local_248);
    local_248.ControlType = this->ControlType;
    FRigControlSettings::SetupLimitArrayForType
              (&local_248,this->bLimitTranslation,this->bLimitRotation,this->bLimitScale);
    FRigControlValue::ApplyLimits
              (&this->Value,&local_248.LimitEnabled,this->ControlType,&this->MinimumValue,
               &this->MaximumValue);
    if (local_248.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.FilteredChannels.AllocatorInstance.Data);
    }
    if (local_248.PreviouslyDrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_248.PreviouslyDrivenControls.AllocatorInstance.Data);
    }
    if (local_248.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.DrivenControls.AllocatorInstance.Data);
    }
    if (local_248.Customization.RemovedSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Customization.RemovedSpaces.AllocatorInstance.Data);
    }
    if (local_248.Customization.AvailableSpaces.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Customization.AvailableSpaces.AllocatorInstance.Data);
    }
    if (local_248.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.LimitEnabled.AllocatorInstance.Data);
    }
  }
  return;
}

