// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Reset @ 141777360

void __thiscall
UE::Text::Private::TDisplayStringPtr<FString_const_>::Reset(TDisplayStringPtr<FString_const_> *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> TVar3;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> local_res10 [3];
  
  local_res10[0].Reference = (FRefCountedDisplayString *)0x0;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::operator=
            ((TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)this,local_res10);
  TVar3.Reference = local_res10[0].Reference;
  if (local_res10[0].Reference != (FRefCountedDisplayString *)0x0) {
    LOCK();
    lVar2 = (local_res10[0].Reference)->_padding_;
    *(int *)&(local_res10[0].Reference)->_padding_ = (int)(local_res10[0].Reference)->_padding_ + -1
    ;
    UNLOCK();
    if ((int)lVar2 == 1) {
      pFVar1 = ((local_res10[0].Reference)->DisplayString).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::operator_delete(TVar3.Reference,0x18);
      return;
    }
  }
  return;
}

