// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ConsumePerInstanceDataFromGameThread @ 1492224a0

void __thiscall
FNiagaraDataInterfaceProxySparseVolumeTexture::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxySparseVolumeTexture *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSparseVolumeTexture.cpp"
                     ,0x40,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1492446c0

int __thiscall
FNiagaraDataInterfaceProxySparseVolumeTexture::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxySparseVolumeTexture *this)

{
  return 0;
}

