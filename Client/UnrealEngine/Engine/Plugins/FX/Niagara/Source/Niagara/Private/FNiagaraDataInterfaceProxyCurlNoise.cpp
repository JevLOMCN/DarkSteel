// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ConsumePerInstanceDataFromGameThread @ 1490d6660

void __thiscall
FNiagaraDataInterfaceProxyCurlNoise::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyCurlNoise *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceCurlNoise.h"
                     ,0x45,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14911acc0

int __thiscall
FNiagaraDataInterfaceProxyCurlNoise::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyCurlNoise *this)

{
  return 0;
}

