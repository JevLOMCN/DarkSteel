// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FHairGroupPublicData @ 14499dd80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FHairGroupPublicData * __thiscall
FHairGroupPublicData::FHairGroupPublicData(FHairGroupPublicData *this,uint param_1,FName *param_2)

{
  this->Instance = (FHairStrandsInstance *)0x0;
  this->Culling = (FCulling *)0x0;
  FVertexFactoryInput::FVertexFactoryInput(&this->VFInput);
  this->RestPointCount = 0;
  this->RestCurveCount = 0;
  this->ClusterCount = 0;
  this->ClusterScale = 0.0;
  (this->LODVisibilities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODVisibilities).ArrayNum = 0;
  (this->LODVisibilities).ArrayMax = 0;
  (this->LODScreenSizes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODScreenSizes).ArrayNum = 0;
  (this->LODScreenSizes).ArrayMax = 0;
  (this->LODSimulations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODSimulations).ArrayNum = 0;
  (this->LODSimulations).ArrayMax = 0;
  (this->LODGlobalInterpolations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODGlobalInterpolations).ArrayNum = 0;
  (this->LODGlobalInterpolations).ArrayMax = 0;
  (this->LODGeometryTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODGeometryTypes).ArrayNum = 0;
  (this->LODGeometryTypes).ArrayMax = 0;
  this->bIsDeformationEnable = false;
  this->bIsSimulationCacheEnable = false;
  (this->BindingTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingTypes).ArrayNum = 0;
  (this->BindingTypes).ArrayMax = 0;
  this->LODBias = 0.0;
  this->AutoLODBias = 0.0;
  this->ContinuousLODPointCount = 0;
  this->ContinuousLODCurveCount = 0;
  this->ContinuousLODPreviousPointCount = 0;
  this->ContinuousLODPreviousCurveCount = 0;
  (this->ContinuousLODScreenPos).field0_0x0._s_0.Y = 0.0;
  this->bDebugDrawLODInfo = false;
  this->DebugScreenSize = 0.0;
  this->GroupIndex = param_1;
  this->ClusterDataIndex = 0xffffffff;
  this->bSupportVoxelization = true;
  this->BindingMinMeshLOD = -1;
  this->MeshLODIndex = -1.0;
  this->LODIndex = -1.0;
  this->bLODVisibility = true;
  this->bAutoLOD = false;
  this->ContinuousLODScreenSize = 1.0;
  this->ContinuousLODCoverageScale = 1.0;
  *(undefined8 *)&this->ContinuousLODRadiusScale = 0x3f800000;
  return this;
}

// GetActiveStrandsCoverageScale @ 1449dcd70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

float __thiscall FHairGroupPublicData::GetActiveStrandsCoverageScale(FHairGroupPublicData *this)

{
  return this->ContinuousLODCoverageScale;
}

// GetActiveStrandsCurveCount @ 1449dcd80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall
FHairGroupPublicData::GetActiveStrandsCurveCount(FHairGroupPublicData *this,bool param_1)

{
  if (param_1) {
    return this->ContinuousLODPreviousCurveCount;
  }
  return this->ContinuousLODCurveCount;
}

// GetActiveStrandsPointCount @ 1449dcda0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall
FHairGroupPublicData::GetActiveStrandsPointCount(FHairGroupPublicData *this,bool param_1)

{
  if (param_1) {
    return this->ContinuousLODPreviousPointCount;
  }
  return this->ContinuousLODPointCount;
}

// GetActiveStrandsRadiusScale @ 1449dcdc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

float __thiscall FHairGroupPublicData::GetActiveStrandsRadiusScale(FHairGroupPublicData *this)

{
  return this->ContinuousLODRadiusScale;
}

// IsSimulationEnable @ 1449f8b50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FHairGroupPublicData::IsSimulationEnable(FHairGroupPublicData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LODSimulations).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->LODSimulations).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return (bool)(this->LODSimulations).AllocatorInstance.Data[param_1];
  }
  return false;
}

