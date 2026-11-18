// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Create @ 1417be6c0

TSharedRef<FSeverityToken,1> * __cdecl
FSeverityToken::Create(TSharedRef<FSeverityToken,1> *__return_storage_ptr__,Type param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FText *pFVar2;
  FText local_18;
  
  pTVar1 = ::operator_new(0x58);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFSeverityToken___00_SharedPointerInternals__6B_;
    pTVar1[1]._padding_ = (longlong)&___7IMessageToken__6B_;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    pTVar1[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[3]._padding_ = 0;
    pTVar1[3].SharedReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar1 + 4));
    *(Type *)&pTVar1[5]._padding_ = param_1;
    pTVar1[1]._padding_ = (longlong)&___7FSeverityToken__6B_;
    pFVar2 = FTokenizedMessage::GetSeverityText(&local_18,param_1);
    FText::operator=((FText *)(pTVar1 + 4),pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  TSharedRef<FSeverityToken,1>::TSharedRef<FSeverityToken,1>
            (__return_storage_ptr__,(FSeverityToken *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// GetType @ 1417d8770

Type __thiscall FSeverityToken::GetType(FSeverityToken *this)

{
  return Severity;
}

