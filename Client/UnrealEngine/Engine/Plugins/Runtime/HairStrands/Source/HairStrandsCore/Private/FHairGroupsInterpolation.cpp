// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// StaticStruct @ 14df93ee0

UScriptStruct * __cdecl FHairGroupsInterpolation::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairGroupsInterpolation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairGroupsInterpolation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsInterpolation,(UObject *)pUVar1,
                         L"HairGroupsInterpolation");
  }
  return Z_Registration_Info_UScriptStruct_FHairGroupsInterpolation.OuterSingleton;
}

// FHairGroupsInterpolation @ 14dfaca80

FHairGroupsInterpolation * __thiscall
FHairGroupsInterpolation::FHairGroupsInterpolation(FHairGroupsInterpolation *this)

{
  int iVar1;
  ushort uStack_26;
  
  (this->RiggingSettings).bEnableRigging_DEPRECATED = false;
  (this->RiggingSettings).NumCurves_DEPRECATED = 10;
  (this->RiggingSettings).NumPoints_DEPRECATED = 4;
  (this->DecimationSettings).CurveDecimation = 1.0;
  (this->DecimationSettings).VertexDecimation = 1.0;
  iVar1 = (uint)uStack_26 << 0x10;
  (this->InterpolationSettings).GuideType = (char)iVar1;
  (this->InterpolationSettings).bOverrideGuides_DEPRECATED = (bool)(char)((uint)iVar1 >> 8);
  *(short *)&(this->InterpolationSettings).field_0x2 = (short)((uint)iVar1 >> 0x10);
  (this->InterpolationSettings).HairToGuideDensity = 0.1;
  (this->InterpolationSettings).RiggedGuideNumCurves = 10;
  (this->InterpolationSettings).RiggedGuideNumPoints = 4;
  (this->InterpolationSettings).InterpolationQuality = High;
  (this->InterpolationSettings).InterpolationDistance = Parametric;
  (this->InterpolationSettings).bRandomizeGuide = false;
  (this->InterpolationSettings).bUseUniqueGuide = false;
  return this;
}

// operator== @ 14dfb1d40

bool __thiscall
FHairGroupsInterpolation::operator==
          (FHairGroupsInterpolation *this,FHairGroupsInterpolation *param_1)

{
  if (((((((param_1->DecimationSettings).CurveDecimation ==
           (this->DecimationSettings).CurveDecimation) &&
         ((param_1->DecimationSettings).VertexDecimation ==
          (this->DecimationSettings).VertexDecimation)) &&
        ((this->InterpolationSettings).GuideType == (param_1->InterpolationSettings).GuideType)) &&
       (((param_1->InterpolationSettings).HairToGuideDensity ==
         (this->InterpolationSettings).HairToGuideDensity &&
        ((this->InterpolationSettings).InterpolationQuality ==
         (param_1->InterpolationSettings).InterpolationQuality)))) &&
      (((this->InterpolationSettings).InterpolationDistance ==
        (param_1->InterpolationSettings).InterpolationDistance &&
       (((this->InterpolationSettings).bRandomizeGuide ==
         (param_1->InterpolationSettings).bRandomizeGuide &&
        ((this->InterpolationSettings).bUseUniqueGuide ==
         (param_1->InterpolationSettings).bUseUniqueGuide)))))) &&
     (((this->InterpolationSettings).RiggedGuideNumCurves ==
       (param_1->InterpolationSettings).RiggedGuideNumCurves &&
      ((this->InterpolationSettings).RiggedGuideNumPoints ==
       (param_1->InterpolationSettings).RiggedGuideNumPoints)))) {
    return true;
  }
  return false;
}

// BuildDDCKey @ 14dfb84f0

void __thiscall
FHairGroupsInterpolation::BuildDDCKey(FHairGroupsInterpolation *this,FArchive *param_1)

{
  EHairInterpolationQuality *pEVar1;
  EHairInterpolationWeight *pEVar2;
  int *piVar3;
  undefined1 *puVar4;
  float *pfVar5;
  float *pfVar6;
  EGroomGuideType *pEVar7;
  EHairInterpolationQuality *pEVar8;
  EHairInterpolationWeight *pEVar9;
  int *piVar10;
  
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    (this->DecimationSettings).CurveDecimation = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar5 = &(this->DecimationSettings).VertexDecimation;
  puVar4 = &param_1->field_0x2a;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar5);
    }
  }
  else {
    *pfVar5 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar7 = (EGroomGuideType *)**(undefined8 **)&param_1->field_0x8;
  if ((EGroomGuideType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar7 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->InterpolationSettings,1);
  }
  else {
    (this->InterpolationSettings).GuideType = *pEVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pfVar5 = &(this->InterpolationSettings).HairToGuideDensity;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar5);
    }
  }
  else {
    *pfVar5 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar1 = &(this->InterpolationSettings).InterpolationQuality;
  pEVar8 = (EHairInterpolationQuality *)**(undefined8 **)&param_1->field_0x8;
  if ((EHairInterpolationQuality *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar8 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar1,1);
  }
  else {
    *pEVar1 = *pEVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar2 = &(this->InterpolationSettings).InterpolationDistance;
  pEVar9 = (EHairInterpolationWeight *)**(undefined8 **)&param_1->field_0x8;
  if ((EHairInterpolationWeight *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar9 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,1);
  }
  else {
    *pEVar2 = *pEVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  ::operator<<(param_1,&(this->InterpolationSettings).bRandomizeGuide);
  ::operator<<(param_1,&(this->InterpolationSettings).bUseUniqueGuide);
  piVar3 = &(this->InterpolationSettings).RiggedGuideNumCurves;
  piVar10 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar10 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar10;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = &(this->InterpolationSettings).RiggedGuideNumPoints;
  piVar10 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar10 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar3 = *piVar10;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((*puVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014dfb8727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
  return;
}

