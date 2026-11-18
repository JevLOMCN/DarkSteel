// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FNaniteShadingPipeline @ 145036ec0

FNaniteShadingPipeline * __thiscall
FNaniteShadingPipeline::FNaniteShadingPipeline
          (FNaniteShadingPipeline *this,FNaniteShadingPipeline *param_1)

{
  TPimplPtr<FNaniteBasePassData,1> TVar1;
  TPimplPtr<FNaniteLumenCardData,1> TVar2;
  TPimplPtr<FNaniteMaterialCacheData,1> TVar3;
  TPimplPtr<FMeshDrawShaderBindings,1> TVar4;
  ushort uVar5;
  
  this->BasePassData = (TPimplPtr<FNaniteBasePassData,1>)0x0;
  if (param_1->BasePassData != (TPimplPtr<FNaniteBasePassData,1>)0x0) {
    TVar1 = (TPimplPtr<FNaniteBasePassData,1>)(**(code **)((longlong)param_1->BasePassData + -8))();
    this->BasePassData = TVar1;
  }
  this->LumenCardData = (TPimplPtr<FNaniteLumenCardData,1>)0x0;
  if (param_1->LumenCardData != (TPimplPtr<FNaniteLumenCardData,1>)0x0) {
    TVar2 = (TPimplPtr<FNaniteLumenCardData,1>)
            (**(code **)((longlong)param_1->LumenCardData + -8))();
    this->LumenCardData = TVar2;
  }
  this->MaterialCacheData = (TPimplPtr<FNaniteMaterialCacheData,1>)0x0;
  if (param_1->MaterialCacheData != (TPimplPtr<FNaniteMaterialCacheData,1>)0x0) {
    TVar3 = (TPimplPtr<FNaniteMaterialCacheData,1>)
            (**(code **)((longlong)param_1->MaterialCacheData + -8))();
    this->MaterialCacheData = TVar3;
  }
  this->ShaderBindings = (TPimplPtr<FMeshDrawShaderBindings,1>)0x0;
  if (param_1->ShaderBindings != (TPimplPtr<FMeshDrawShaderBindings,1>)0x0) {
    TVar4 = (TPimplPtr<FMeshDrawShaderBindings,1>)
            (**(code **)((longlong)param_1->ShaderBindings + -8))();
    this->ShaderBindings = TVar4;
  }
  this->MaterialProxy = param_1->MaterialProxy;
  this->Material = param_1->Material;
  this->ComputeShader = param_1->ComputeShader;
  this->WorkGraphShader = param_1->WorkGraphShader;
  this->InstructionCount = param_1->InstructionCount;
  this->LWCComplexity = param_1->LWCComplexity;
  this->BoundTargetMask = param_1->BoundTargetMask;
  this->ShaderBindingsHash = param_1->ShaderBindingsHash;
  this->MaterialBitFlags = param_1->MaterialBitFlags;
  uVar5 = ((this->field13_0x54).ShadingFlagsHash ^ (param_1->field13_0x54).ShadingFlagsHash) & 1 ^
          (this->field13_0x54).ShadingFlagsHash;
  (this->field13_0x54).ShadingFlagsHash = uVar5;
  uVar5 = (uVar5 ^ (param_1->field13_0x54).ShadingFlagsHash) & 2 ^ uVar5;
  (this->field13_0x54).ShadingFlagsHash = uVar5;
  uVar5 = (uVar5 ^ (param_1->field13_0x54).ShadingFlagsHash) & 4 ^ uVar5;
  (this->field13_0x54).ShadingFlagsHash = uVar5;
  uVar5 = (uVar5 ^ (param_1->field13_0x54).ShadingFlagsHash) & 8 ^ uVar5;
  (this->field13_0x54).ShadingFlagsHash = uVar5;
  (this->field13_0x54).ShadingFlagsHash =
       (uVar5 ^ (param_1->field13_0x54).ShadingFlagsHash) & 0xf ^
       (param_1->field13_0x54).ShadingFlagsHash;
  this->field13_0x54 = param_1->field13_0x54;
  return this;
}

// ~FNaniteShadingPipeline @ 1450387f0

void __thiscall FNaniteShadingPipeline::~FNaniteShadingPipeline(FNaniteShadingPipeline *this)

{
  TPimplPtr<FMeshDrawShaderBindings,1> TVar1;
  TPimplPtr<FNaniteMaterialCacheData,1> TVar2;
  TPimplPtr<FNaniteLumenCardData,1> TVar3;
  TPimplPtr<FNaniteBasePassData,1> TVar4;
  
  TVar1 = this->ShaderBindings;
  if (TVar1 != (TPimplPtr<FMeshDrawShaderBindings,1>)0x0) {
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
  }
  TVar2 = this->MaterialCacheData;
  if (TVar2 != (TPimplPtr<FNaniteMaterialCacheData,1>)0x0) {
    (**(code **)((longlong)TVar2 + -0x10))((longlong)TVar2 + -0x10);
  }
  TVar3 = this->LumenCardData;
  if (TVar3 != (TPimplPtr<FNaniteLumenCardData,1>)0x0) {
    (**(code **)((longlong)TVar3 + -0x10))((longlong)TVar3 + -0x10);
  }
  TVar4 = this->BasePassData;
  if (TVar4 != (TPimplPtr<FNaniteBasePassData,1>)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145038847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)TVar4 + -0x10))((longlong)TVar4 + -0x10);
    return;
  }
  return;
}

// GetPipelineHash @ 145063f20

uint __thiscall FNaniteShadingPipeline::GetPipelineHash(FNaniteShadingPipeline *this)

{
  ulonglong uVar1;
  
  uVar1 = ((ulonglong)this->MaterialProxy >> 4 ^ (ulonglong)(this->field13_0x54).ShadingFlagsHash) *
          -0x622015f714c7d297;
  uVar1 = (uVar1 >> 0x2f ^ uVar1 ^ (ulonglong)(this->field13_0x54).ShadingFlagsHash) *
          -0x622015f714c7d297;
  uVar1 = ((uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297 ^ (ulonglong)this->BoundTargetMask) *
          -0x622015f714c7d297;
  uVar1 = (uVar1 >> 0x2f ^ uVar1 ^ (ulonglong)this->BoundTargetMask) * -0x622015f714c7d297;
  uVar1 = ((uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297 ^ (ulonglong)this->ShaderBindingsHash) *
          -0x622015f714c7d297;
  uVar1 = (uVar1 >> 0x2f ^ uVar1 ^ (ulonglong)this->ShaderBindingsHash) * -0x622015f714c7d297;
  uVar1 = (uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297;
  return ((uint)(uVar1 >> 2) & 0x3fffffff) + 0x9e3779b9 + (int)(uVar1 >> 0x20) + (uint)uVar1 * 0x40
         ^ (uint)uVar1;
}

