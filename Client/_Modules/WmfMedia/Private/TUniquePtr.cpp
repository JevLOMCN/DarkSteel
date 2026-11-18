// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~TUniquePtr<IWmfMediaCodec,TDefaultDelete<IWmfMediaCodec>_> @ 14ea97210

void __thiscall
TUniquePtr<IWmfMediaCodec,TDefaultDelete<IWmfMediaCodec>_>::
~TUniquePtr<IWmfMediaCodec,TDefaultDelete<IWmfMediaCodec>_>
          (TUniquePtr<IWmfMediaCodec,TDefaultDelete<IWmfMediaCodec>_> *this)

{
  IWmfMediaCodec *pIVar1;
  
  pIVar1 = this->Ptr;
  if (pIVar1 != (IWmfMediaCodec *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ea97220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

