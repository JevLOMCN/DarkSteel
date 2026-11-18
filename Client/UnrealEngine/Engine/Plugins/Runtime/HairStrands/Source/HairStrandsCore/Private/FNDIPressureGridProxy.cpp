// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// PreStage @ 14e0f49c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIPressureGridProxy::PreStage(FNDIPressureGridProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  ulong64 uVar1;
  FNDIVelocityGridData *pFVar2;
  
  uVar1 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar2 = TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
                   *)&this->field_0x10,uVar1);
  if ((pFVar2 != (FNDIVelocityGridData *)0x0) && ((**(byte **)&param_1->field_0x20 & 1) != 0)) {
    ClearBuffer(*(FRDGBuilder **)param_1,*(Type *)(*(longlong *)&param_1->field_0x8 + 0x34),
                pFVar2->CurrentGridBuffer,pFVar2->DestinationGridBuffer,&pFVar2->GridSize,true);
  }
  return;
}

