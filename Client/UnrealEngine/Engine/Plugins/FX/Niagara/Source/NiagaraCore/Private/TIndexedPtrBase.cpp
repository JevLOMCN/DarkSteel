// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraCore
// Functions: 1

// Get @ 148dcb2c0

UNiagaraDataInterfaceBase * __thiscall
TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>::Get
          (TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*> *this,
          FPointerTableBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraDataInterfaceBase *pUVar3;
  
  if ((*(byte *)&this->field0_0x0 & 1) == 0) {
    return (this->field0_0x0).Ptr;
  }
  if (param_1 == (FPointerTableBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PtrTable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x465,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UNiagaraDataInterfaceBase *)(*pcVar1)();
      return pUVar3;
    }
  }
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 3;
    ::TypeBuffer[0x58] = '\b';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TIndexedPtr<UNi;
    ::TypeBuffer._32_8_ =
         TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
         ::CallWriteMemoryImage;
    ::TypeBuffer._40_8_ =
         TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
         ::CallUnfrozenCopy;
    ::TypeBuffer._48_8_ =
         TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
         ::CallAppendHash;
    ::TypeBuffer._56_8_ =
         TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
         ::CallGetTargetAlignment;
    ::TypeBuffer._64_8_ =
         TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
         ::CallToString;
    ::TypeBuffer._24_8_ =
         TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
         ::CallDestroy;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = '\b';
    ::TypeBuffer[0x5d] = '\0';
    ::TypeBuffer[0x5e] = '\0';
    ::TypeBuffer[0x5f] = '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000148dcb3bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar3 = (UNiagaraDataInterfaceBase *)
           (**(code **)((longlong)*param_1 + 0x10))
                     (param_1,::TypeBuffer,(this->field0_0x0).PackedIndex >> 1);
  return pUVar3;
}

