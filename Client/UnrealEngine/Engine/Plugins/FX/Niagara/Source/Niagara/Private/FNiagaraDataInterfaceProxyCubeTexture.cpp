// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ConsumePerInstanceDataFromGameThread @ 1490d6620

void __thiscall
FNiagaraDataInterfaceProxyCubeTexture::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyCubeTexture *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCubeTexture.cpp"
                     ,0x2b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14911acb0

int __thiscall
FNiagaraDataInterfaceProxyCubeTexture::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyCubeTexture *this)

{
  return 0;
}

// PostSimulate @ 149124580

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyCubeTexture::PostSimulate
          (FNiagaraDataInterfaceProxyCubeTexture *this,FNDIGpuComputePostSimulateContext *param_1)

{
  FNDICubeTextureInstanceData_RenderThread *pFVar1;
  
  if (param_1->bFinalPostSimulate != false) {
    pFVar1 = TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
             ::Find((TMapBase<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDICubeTextureInstanceData_RenderThread,0>_>
                     *)&this->InstanceData_RT,param_1->SystemInstanceID);
    if (pFVar1 != (FNDICubeTextureInstanceData_RenderThread *)0x0) {
      pFVar1->TransientRDGTexture = (FRDGTexture *)0x0;
    }
  }
  return;
}

