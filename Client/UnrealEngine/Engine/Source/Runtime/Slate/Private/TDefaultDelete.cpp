// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// operator() @ 142703ec0

void __thiscall
TDefaultDelete<FSlateTextBlockLayout>::operator()
          (TDefaultDelete<FSlateTextBlockLayout> *this,FSlateTextBlockLayout *param_1)

{
  int iVar1;
  TDisplayStringPtr<FString_const_> TVar2;
  ITextData *pIVar3;
  
  if (param_1 != (FSlateTextBlockLayout *)0x0) {
    TVar2 = (param_1->HighlightTextLastUpdate).LocalizedStringPtr;
    if (TVar2 != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar1 = *(int *)TVar2;
      *(int *)TVar2 = *(int *)TVar2 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (*(void **)((longlong)TVar2 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)TVar2 + 8));
        }
        ::operator_delete((void *)TVar2,0x18);
      }
    }
    pIVar3 = (param_1->HighlightTextLastUpdate).TextDataPtr.Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    TVar2 = (param_1->TextLastUpdate).LocalizedStringPtr;
    if (TVar2 != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar1 = *(int *)TVar2;
      *(int *)TVar2 = *(int *)TVar2 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (*(void **)((longlong)TVar2 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)TVar2 + 8));
        }
        ::operator_delete((void *)TVar2,0x18);
      }
    }
    pIVar3 = (param_1->TextLastUpdate).TextDataPtr.Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->TextHighlighter).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Marshaller).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->TextLayout).SharedReferenceCount.ReferenceController);
    ::operator_delete(param_1,0x70);
  }
  return;
}

