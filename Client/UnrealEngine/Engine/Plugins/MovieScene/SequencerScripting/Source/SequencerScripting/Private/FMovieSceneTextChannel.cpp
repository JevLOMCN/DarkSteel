// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 1

// GetDefault @ 14c69e4e0

TOptional<FText> * __thiscall
FMovieSceneTextChannel::GetDefault
          (FMovieSceneTextChannel *this,TOptional<FText> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  TOptional<FText> *pTVar4;
  FText *pFVar5;
  undefined4 local_res8 [2];
  FText local_28;
  FText local_18;
  
  local_res8[0] = 0;
  if (this->bHasDefaultValue == false) {
    local_18.TextData.Reference = (ITextData *)0x0;
    pFVar5 = &local_18;
    local_18.Flags = 0;
    bVar2 = false;
    bVar3 = true;
  }
  else {
    local_28.TextData.Reference = (this->DefaultValue).TextData.Reference;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 8))
                (local_28.TextData.Reference,local_res8);
    }
    local_28.Flags = (this->DefaultValue).Flags;
    if (local_28.TextData.Reference == (ITextData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FText> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pFVar5 = &local_28;
    bVar2 = true;
    bVar3 = false;
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  if ((pFVar5->TextData).Reference != (ITextData *)0x0) {
    FText::FText((FText *)__return_storage_ptr__,pFVar5);
  }
  if (bVar3) {
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  if ((bVar2) && (local_28.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

