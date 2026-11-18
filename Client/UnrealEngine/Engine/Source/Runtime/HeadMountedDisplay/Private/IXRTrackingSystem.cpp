// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 6

// GetHMDData @ 145952e90

void __thiscall
IXRTrackingSystem::GetHMDData(IXRTrackingSystem *this,UObject *param_1,FXRHMDData *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  FName *pFVar8;
  FGuid *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FGuid local_18;
  
  lVar6 = (**(code **)((longlong)*this + 0x118))();
  if (lVar6 == 0) {
    pFVar8 = (FName *)(**(code **)*this)(this,local_res18);
  }
  else {
    plVar7 = (longlong *)(**(code **)((longlong)*this + 0x118))();
    pFVar8 = (FName *)(**(code **)(*plVar7 + 0x60))(plVar7,local_res8);
  }
  param_2->DeviceName = *pFVar8;
  pFVar9 = FApp::GetInstanceId(&local_18);
  uVar1 = pFVar9->B;
  uVar2 = pFVar9->C;
  uVar3 = pFVar9->D;
  (param_2->ApplicationInstanceID).A = pFVar9->A;
  (param_2->ApplicationInstanceID).B = uVar1;
  (param_2->ApplicationInstanceID).C = uVar2;
  (param_2->ApplicationInstanceID).D = uVar3;
  cVar4 = (**(code **)((longlong)*this + 0x48))(this,0);
  param_2->TrackingStatus = -(cVar4 != '\0') & Tracked;
  bVar5 = (bool)(**(code **)((longlong)*this + 0x58))(this,0,&param_2->Rotation,&param_2->Position);
  param_2->bValid = bVar5;
  return;
}

// IsHeadTrackingAllowedForWorld @ 1459541b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
IXRTrackingSystem::IsHeadTrackingAllowedForWorld(IXRTrackingSystem *this,UWorld *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001459541b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x148))();
  return (bool)uVar1;
}

// OnBeginRendering_RenderThread @ 145954230

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IXRTrackingSystem::OnBeginRendering_RenderThread
          (IXRTrackingSystem *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  return;
}

// OnBeginRendering_RenderThread @ 145954240

void __thiscall
IXRTrackingSystem::OnBeginRendering_RenderThread
          (IXRTrackingSystem *this,FRHICommandListImmediate *param_1,FSceneViewFamily *param_2)

{
  return;
}

// OnLateUpdateApplied_RenderThread @ 145954250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IXRTrackingSystem::OnLateUpdateApplied_RenderThread
          (IXRTrackingSystem *this,FRDGBuilder *param_1,TTransform<double> *param_2)

{
  return;
}

// OnLateUpdateApplied_RenderThread @ 145954260

void __thiscall
IXRTrackingSystem::OnLateUpdateApplied_RenderThread
          (IXRTrackingSystem *this,FRHICommandListImmediate *param_1,TTransform<double> *param_2)

{
  return;
}

