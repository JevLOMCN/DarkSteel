// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraVertexFactories
// Functions: 1

// Add<FNiagaraRibbonUniformParameters> @ 148dcc890

void __thiscall
FMeshDrawSingleShaderBindings::Add<FNiagaraRibbonUniformParameters>
          (FMeshDrawSingleShaderBindings *this,
          TShaderUniformBufferParameter<FNiagaraRibbonUniformParameters> *param_1,
          TUniformBufferRef<FNiagaraRibbonUniformParameters> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*param_1 != (TShaderUniformBufferParameter<FNiagaraRibbonUniformParameters>)0xffff) {
    if (*param_2 == (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
      FNiagaraRibbonUniformParameters::GetStructMetadata();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x78,L"Attempted to set null uniform buffer for type %s");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*param_1 == (TShaderUniformBufferParameter<FNiagaraRibbonUniformParameters>)0xffff) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    WriteBindingUniformBuffer(this,(FRHIUniformBuffer *)*param_2,(uint)(ushort)*param_1);
  }
  return;
}

