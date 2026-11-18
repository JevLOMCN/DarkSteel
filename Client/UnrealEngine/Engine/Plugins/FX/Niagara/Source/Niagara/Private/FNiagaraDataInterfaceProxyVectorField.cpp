// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ConsumePerInstanceDataFromGameThread @ 149222530

void __thiscall
FNiagaraDataInterfaceProxyVectorField::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyVectorField *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceVectorField.h"
                     ,0x6a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1492446f0

int __thiscall
FNiagaraDataInterfaceProxyVectorField::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyVectorField *this)

{
  return 0;
}

