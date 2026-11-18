// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGCompute
// Functions: 1

// Dispatch<FPCGTextureReadbackCS> @ 1494b58d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FComputeShaderUtils::Dispatch<FPCGTextureReadbackCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FPCGTextureReadbackCS,FShaderMapPointerTable> *param_2,
          FShaderParametersMetadata *param_3,FParameters *param_4,TIntVector3<int> *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FRHIComputeShader *pFVar6;
  IRHIComputeContext *pIVar7;
  undefined8 *puVar8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X <
      (param_5->field0_0x0)._s_0.X) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9083860753072521649>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x1b1,"GroupCount.X <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y <
      (param_5->field0_0x0)._s_0.Y) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9083860753072521650>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x1b2,"GroupCount.Y <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z <
      (param_5->field0_0x0)._s_0.Z) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9083860753072521651>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x1b3,"GroupCount.Z <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Z");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = (FRHIComputeShader *)
           TShaderRefBase<FPCGTextureReadbackCS,FShaderMapPointerTable>::GetRHIShaderBase
                     (param_2,SF_Compute,true);
  SetComputePipelineState(param_1,pFVar6);
  local_28.ShaderContent = (FShader *)param_2->ShaderContent;
  local_28.ShaderMap = param_2->ShaderMap;
  ValidateShaderParameters(&local_28,param_3,param_4);
  ::SetShaderParameters
            (param_1,pFVar6,(FShaderParameterBindings *)param_2->ShaderContent,param_3,param_4);
  iVar1 = (param_5->field0_0x0)._s_0.Z;
  iVar2 = (param_5->field0_0x0)._s_0.Y;
  iVar3 = (param_5->field0_0x0)._s_0.X;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar8;
    *(undefined8 **)&param_1->field_0x30 = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &___7FRHICommandDispatchComputeShader__6B_;
    *(int *)(puVar8 + 2) = iVar3;
    *(int *)((longlong)puVar8 + 0x14) = iVar2;
    *(int *)(puVar8 + 3) = iVar1;
  }
  else {
    pIVar7 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar7->_padding_ + 0x18))(pIVar7,iVar3,iVar2,iVar1);
  }
  pFVar6 = (FRHIComputeShader *)
           TShaderRefBase<FPCGTextureReadbackCS,FShaderMapPointerTable>::GetRHIShaderBase
                     (param_2,SF_Compute,true);
  UnsetShaderUAVs<FRHIComputeCommandList,FPCGTextureReadbackCS>(param_1,param_2,pFVar6);
  return;
}

