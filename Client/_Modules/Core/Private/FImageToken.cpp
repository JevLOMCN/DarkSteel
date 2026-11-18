// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Create @ 1417be5e0

TSharedRef<FImageToken,1> * __cdecl
FImageToken::Create(TSharedRef<FImageToken,1> *__return_storage_ptr__,FName *param_1)

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
         &___7__TIntrusiveReferenceController_VFImageToken___00_SharedPointerInternals__6B_;
    pTVar1[1]._padding_ = (longlong)&___7IMessageToken__6B_;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    pTVar1[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[3]._padding_ = 0;
    pTVar1[3].SharedReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar1 + 4));
    pTVar1[1]._padding_ = (longlong)&___7FImageToken__6B_;
    pTVar1[5]._padding_ = (longlong)*param_1;
    pFVar2 = FText::FromName(&local_18,param_1);
    FText::operator=((FText *)(pTVar1 + 4),pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  TSharedRef<FImageToken,1>::TSharedRef<FImageToken,1>
            (__return_storage_ptr__,(FImageToken *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// GetType @ 1417d8760

Type __thiscall FImageToken::GetType(FImageToken *this)

{
  return Image;
}

