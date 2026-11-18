// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 14798f800

UScriptStruct * __cdecl FSplineInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineInstanceData,(UObject *)pUVar1,
                         L"SplineInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FSplineInstanceData.OuterSingleton;
}

// ContainsData @ 14798f840

bool __thiscall FSplineInstanceData::ContainsData(FSplineInstanceData *this)

{
  bool bVar1;
  
  bVar1 = FSceneComponentInstanceData::ContainsData((FSceneComponentInstanceData *)this);
  if ((!bVar1) && (this->bSplineHasBeenEdited == false)) {
    return false;
  }
  return true;
}

// ApplyToComponent @ 14798f870

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
FSplineInstanceData::ApplyToComponent
          (FSplineInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  USplineComponent *this_00;
  
  FSceneComponentInstanceData::ApplyToComponent((FSceneComponentInstanceData *)this,param_1,param_2)
  ;
  this_00 = CastChecked<USplineComponent,UActorComponent>(param_1);
  USplineComponent::ApplyComponentInstanceData(this_00,this,param_2 == PostUserConstructionScript);
  return;
}

// FSplineInstanceData @ 1479a4570

FSplineInstanceData * __thiscall FSplineInstanceData::FSplineInstanceData(FSplineInstanceData *this)

{
  FSceneComponentInstanceData::FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  this->bSplineHasBeenEdited = false;
  this->_padding_ = (longlong)&___7FSplineInstanceData__6B_;
  *(undefined8 *)&(this->SplineCurves).Position = 0;
  *(undefined8 *)&(this->SplineCurves).Position.field_0x8 = 0;
  (this->SplineCurves).Position.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Position.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation.field_0x8 = 0;
  (this->SplineCurves).Rotation.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Rotation.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Scale = 0;
  *(undefined8 *)&(this->SplineCurves).Scale.field_0x8 = 0;
  (this->SplineCurves).Scale.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Scale.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable.field_0x8 = 0;
  (this->SplineCurves).ReparamTable.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).ReparamTable.field_0x14 = 0;
  this->bClosedLoop = false;
  *(undefined8 *)&(this->SplineCurvesPreUCS).Position = 0;
  *(undefined8 *)&(this->SplineCurvesPreUCS).Position.field_0x8 = 0;
  (this->SplineCurvesPreUCS).Position.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurvesPreUCS).Position.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurvesPreUCS).Rotation = 0;
  *(undefined8 *)&(this->SplineCurvesPreUCS).Rotation.field_0x8 = 0;
  (this->SplineCurvesPreUCS).Rotation.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurvesPreUCS).Rotation.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurvesPreUCS).Scale = 0;
  *(undefined8 *)&(this->SplineCurvesPreUCS).Scale.field_0x8 = 0;
  (this->SplineCurvesPreUCS).Scale.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurvesPreUCS).Scale.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurvesPreUCS).ReparamTable = 0;
  *(undefined8 *)&(this->SplineCurvesPreUCS).ReparamTable.field_0x8 = 0;
  (this->SplineCurvesPreUCS).ReparamTable.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurvesPreUCS).ReparamTable.field_0x14 = 0;
  (this->SplineCurves).Version = 0xffffffff;
  (this->SplineCurvesPreUCS).Version = 0xffffffff;
  return this;
}

// ~FSplineInstanceData @ 1479a8ee0

void __thiscall FSplineInstanceData::~FSplineInstanceData(FSplineInstanceData *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->SplineCurvesPreUCS).ReparamTable;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurvesPreUCS).Scale;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurvesPreUCS).Rotation;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurvesPreUCS).Position;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurves).ReparamTable;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurves).Scale;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurves).Rotation;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SplineCurves).Position;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FSceneComponentInstanceData::~FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  return;
}

