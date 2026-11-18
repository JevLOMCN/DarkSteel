// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ConsumePerInstanceDataFromGameThread @ 149222570

void __thiscall
FNiagaraDataInterfaceProxyVirtualTextureSample::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyVirtualTextureSample *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVirtualTextureSample.cpp"
                     ,0x31,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 149244700

int __thiscall
FNiagaraDataInterfaceProxyVirtualTextureSample::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyVirtualTextureSample *this)

{
  return 0;
}

