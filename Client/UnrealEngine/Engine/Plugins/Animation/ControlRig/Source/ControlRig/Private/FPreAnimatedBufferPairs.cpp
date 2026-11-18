// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// ~FPreAnimatedBufferPairs @ 14a3bcc80

void __thiscall
UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs::
~FPreAnimatedBufferPairs(FPreAnimatedBufferPairs *this)

{
  uchar *puVar1;
  longlong lVar2;
  FPreAnimatedBufferPairs *pFVar3;
  longlong lVar4;
  FControlRigParameterValues *pFVar5;
  
  lVar2 = 7;
  pFVar3 = this + 1;
  lVar4 = 7;
  do {
    puVar1 = pFVar3[-1].Persistent.Headers[6].Data;
    pFVar3 = (FPreAnimatedBufferPairs *)(pFVar3[-1].Persistent.Headers + 6);
    lVar4 = lVar4 + -1;
    if (puVar1 != (uchar *)0x0) {
      FMemory::Free(puVar1);
    }
  } while (lVar4 != 0);
  pFVar5 = &this->Persistent;
  do {
    puVar1 = (((FPreAnimatedBufferPairs *)(pFVar5 + -1))->Transient).Headers[6].Data;
    pFVar5 = (FControlRigParameterValues *)
             ((((FPreAnimatedBufferPairs *)(pFVar5 + -1))->Transient).Headers + 6);
    lVar2 = lVar2 + -1;
    if (puVar1 != (uchar *)0x0) {
      FMemory::Free(puVar1);
    }
  } while (lVar2 != 0);
  return;
}

