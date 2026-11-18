// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// TSharedRef<TJsonReader<char8_t>,1><TJsonReader<char8_t>_> @ 148cac6f0

TSharedRef<TJsonReader<char8_t>,1> * __thiscall
TSharedRef<TJsonReader<char8_t>,1>::TSharedRef<TJsonReader<char8_t>,1><TJsonReader<char8_t>_>
          (TSharedRef<TJsonReader<char8_t>,1> *this,TRawPtrProxy<TJsonReader<char8_t>_> *param_1)

{
  TJsonReader<char8_t> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonReader<char8_t>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonReader__Q__U__DefaultDeleter_V__TJsonReader__Q___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonReader<char8_t> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonReader<char8_t>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

