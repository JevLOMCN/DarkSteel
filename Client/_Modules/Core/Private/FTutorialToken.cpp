// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Create @ 1417bec60

TSharedRef<FTutorialToken,1> * __cdecl
FTutorialToken::Create(TSharedRef<FTutorialToken,1> *__return_storage_ptr__,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = ::operator_new(0x60);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTutorialToken___00_SharedPointerInternals__6B_;
    pTVar1[1]._padding_ = (longlong)&___7IMessageToken__6B_;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    pTVar1[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[3]._padding_ = 0;
    pTVar1[3].SharedReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar1 + 4));
    pTVar1[1]._padding_ = (longlong)&___7FTutorialToken__6B_;
    ::FString::FString((FString *)(pTVar1 + 5),param_1);
    pTVar1[1]._padding_ = (longlong)&___7FTutorialToken__6B_;
  }
  TSharedRef<FTutorialToken,1>::TSharedRef<FTutorialToken,1>
            (__return_storage_ptr__,(FTutorialToken *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// GetType @ 1417d8790

Type __thiscall FTutorialToken::GetType(FTutorialToken *this)

{
  return Tutorial;
}

