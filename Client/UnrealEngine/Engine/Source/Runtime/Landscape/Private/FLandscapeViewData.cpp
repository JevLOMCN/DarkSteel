// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// FLandscapeViewData @ 145f7b300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLandscapeViewData * __thiscall
FLandscapeSceneViewExtension::FLandscapeViewData::FLandscapeViewData
          (FLandscapeViewData *this,FSceneView *param_1)

{
  FSceneViewFamily *pFVar1;
  ISceneRenderer *pIVar2;
  code *pcVar3;
  bool bVar4;
  FLandscapeViewData *pFVar5;
  IShadowInvalidatingInstances *pIVar6;
  
  this->View = param_1;
  this->ShadowInvalidatingInstances = (IShadowInvalidatingInstances *)0x0;
  (this->LandscapeIndirection)._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
  (this->LandscapeLODData)._padding_ = (longlong)&___7__TResourceArray_M_0A___6B_;
  (this->LandscapeIndirection)._padding_ = 0;
  (this->LandscapeIndirection)._padding_ = 0;
  (this->LandscapeIndirection).bNeedsCPUAccess = false;
  (this->LandscapeLODData)._padding_ = 0;
  (this->LandscapeLODData)._padding_ = 0;
  (this->LandscapeLODData).bNeedsCPUAccess = false;
  pFVar1 = param_1->Family;
  if (pFVar1->SceneRenderer == (ISceneRenderer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneRenderer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                       ,0xa7b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FLandscapeViewData *)(*pcVar3)();
      return pFVar5;
    }
  }
  pIVar2 = pFVar1->SceneRenderer;
  if (pIVar2 != (ISceneRenderer *)0x0) {
    pIVar6 = (IShadowInvalidatingInstances *)(**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,param_1)
    ;
    this->ShadowInvalidatingInstances = pIVar6;
  }
  return this;
}

