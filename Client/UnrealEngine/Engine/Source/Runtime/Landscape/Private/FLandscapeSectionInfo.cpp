// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// FLandscapeSectionInfo @ 145f7ad50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLandscapeSectionInfo * __thiscall
FLandscapeSectionInfo::FLandscapeSectionInfo
          (FLandscapeSectionInfo *this,UWorld *param_1,FGuid *param_2,TIntPoint<int> *param_3,
          uint param_4,uint param_5)

{
  (this->RenderCoord).field0_0x0._s_0.X = -0x80000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FLandscapeSectionInfo__6B_;
  (this->RenderCoord).field0_0x0._s_0.Y = -0x80000000;
  this->LandscapeKey = param_5;
  this->LODGroupKey = param_4;
  (this->ComponentBase).field0_0x0 = param_3->field0_0x0;
  this->Scene = param_1->Scene;
  this->bResourcesCreated = false;
  this->bRegistered = false;
  return this;
}

// ~FLandscapeSectionInfo @ 145f7de40

void __thiscall FLandscapeSectionInfo::~FLandscapeSectionInfo(FLandscapeSectionInfo *this)

{
  return;
}

// ComputeSectionResolution @ 145f86490

double __thiscall FLandscapeSectionInfo::ComputeSectionResolution(FLandscapeSectionInfo *this)

{
  return __real_bff0000000000000;
}

// GetComponentResolution @ 145f8e940

int __thiscall FLandscapeSectionInfo::GetComponentResolution(FLandscapeSectionInfo *this)

{
  return -1;
}

// GetSectionPriority @ 145f94450

int __thiscall FLandscapeSectionInfo::GetSectionPriority(FLandscapeSectionInfo *this)

{
  return -1;
}

// ShouldInvalidateShadows @ 145fa34b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FLandscapeSectionInfo::ShouldInvalidateShadows
          (FLandscapeSectionInfo *this,FSceneView *param_1,float param_2,float param_3)

{
  return false;
}

