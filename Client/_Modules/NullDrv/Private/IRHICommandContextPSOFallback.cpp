// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 2

// RHISetComputePipelineState @ 1446c8c00

void __thiscall
IRHICommandContextPSOFallback::RHISetComputePipelineState
          (IRHICommandContextPSOFallback *this,FRHIComputePipelineState *param_1)

{
  if (param_1 != (FRHIComputePipelineState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446c8c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x2b0))(this,(param_1->ComputeShader).Reference);
    return;
  }
  return;
}

// RHISetGraphicsPipelineState @ 1446c8ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
IRHICommandContextPSOFallback::RHISetGraphicsPipelineState
          (IRHICommandContextPSOFallback *this,FRHIGraphicsPipelineState *param_1,uint param_2,
          bool param_3)

{
  SetGraphicsPipelineStateFromInitializer
            (this,(FGraphicsPipelineStateInitializer *)(param_1 + 1),param_2,param_3);
  return;
}

