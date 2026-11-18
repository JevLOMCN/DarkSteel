// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// GetIndexedPointer @ 148dff510

UNiagaraDataInterfaceBase * __thiscall
TPtrTableBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>::GetIndexedPointer
          (TPtrTableBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UNiagaraDataInterfaceBase *pUVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->Pointers).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UNiagaraDataInterfaceBase *)(*pcVar1)();
      return pUVar4;
    }
  }
  return *(UNiagaraDataInterfaceBase **)
          ((this->Pointers).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

