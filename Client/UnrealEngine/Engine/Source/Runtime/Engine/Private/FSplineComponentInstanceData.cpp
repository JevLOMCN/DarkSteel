// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14798fa10

UScriptStruct * __cdecl FSplineComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplineComponentInstanceData,(UObject *)pUVar1,
                         L"SplineComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FSplineComponentInstanceData.OuterSingleton;
}

// ContainsData @ 14798fa90

bool __thiscall FSplineComponentInstanceData::ContainsData(FSplineComponentInstanceData *this)

{
  bool bVar1;
  
  bVar1 = FSceneComponentInstanceData::ContainsData((FSceneComponentInstanceData *)this);
  if ((!bVar1) && (this->bSplineHasBeenEdited == false)) {
    return false;
  }
  return true;
}

// ApplyToComponent @ 14798fb00

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
FSplineComponentInstanceData::ApplyToComponent
          (FSplineComponentInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  USplineComponent *this_00;
  
  FSceneComponentInstanceData::ApplyToComponent((FSceneComponentInstanceData *)this,param_1,param_2)
  ;
  this_00 = CastChecked<USplineComponent,UActorComponent>(param_1);
  USplineComponent::ApplyComponentInstanceData(this_00,this,param_2 == PostUserConstructionScript);
  return;
}

// ~FSplineComponentInstanceData @ 1479a8ea0

void __thiscall
FSplineComponentInstanceData::~FSplineComponentInstanceData(FSplineComponentInstanceData *this)

{
  FSpline::~FSpline(&this->SplinePreUCS);
  FSpline::~FSpline(&this->Spline);
  FSceneComponentInstanceData::~FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  return;
}

