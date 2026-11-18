// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// Add<FLandscapeUniformShaderParameters> @ 145f68530

void __thiscall
FMeshDrawSingleShaderBindings::Add<FLandscapeUniformShaderParameters>
          (FMeshDrawSingleShaderBindings *this,
          TShaderUniformBufferParameter<FLandscapeUniformShaderParameters> *param_1,
          TUniformBuffer<FLandscapeUniformShaderParameters> *param_2)

{
  TShaderUniformBufferParameter<FLandscapeUniformShaderParameters> TVar1;
  code *pcVar2;
  bool bVar3;
  FRHIUniformBuffer *pFVar4;
  
  if (*param_1 != (TShaderUniformBufferParameter<FLandscapeUniformShaderParameters>)0xffff) {
    pFVar4 = TUniformBuffer<FLandscapeUniformShaderParameters>::GetUniformBufferRHI(param_2);
    if (pFVar4 == (FRHIUniformBuffer *)0x0) {
      FLandscapeUniformShaderParameters::GetStructMetadata();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetUniformBufferRHI()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x84,L"Attempted to set null uniform buffer for type %s");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*param_1 == (TShaderUniformBufferParameter<FLandscapeUniformShaderParameters>)0xffff) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TVar1 = *param_1;
    pFVar4 = TUniformBuffer<FLandscapeUniformShaderParameters>::GetUniformBufferRHI(param_2);
    WriteBindingUniformBuffer(this,pFVar4,(uint)(ushort)TVar1);
  }
  return;
}

