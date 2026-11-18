// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 13

// TSharedRef<FAutomationSpecBase::FSpec,1><FAutomationSpecBase::FSpec> @ 141da1070

TSharedRef<FAutomationSpecBase::FSpec,1> * __thiscall
TSharedRef<FAutomationSpecBase::FSpec,1>::
TSharedRef<FAutomationSpecBase::FSpec,1><FAutomationSpecBase::FSpec>
          (TSharedRef<FAutomationSpecBase::FSpec,1> *this,
          TRawPtrProxy<FAutomationSpecBase::FSpec> *param_1)

{
  FSpec *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FAutomationSpecBase::FSpec,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFSpec_FAutomationSpecBase__U__DefaultDeleter_UFSpec_FAutomationSpecBase___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSpec *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FAutomationSpecBase::FSpec,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1><FAutomationSpecBase::FSpecDefinitionScope> @ 141da1180

TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> * __thiscall
TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1>::
TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1><FAutomationSpecBase::FSpecDefinitionScope>
          (TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *this,
          TRawPtrProxy<FAutomationSpecBase::FSpecDefinitionScope> *param_1)

{
  FSpecDefinitionScope *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFSpecDefinitionScope_FAutomationSpecBase__U__DefaultDeleter_UFSpecDefinitionScope_FAutomationSpecBase___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSpecDefinitionScope *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FAutomationSpecBase::FSpecDefinitionScope,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FAutomationSpecBase::FSpecIt,1><FAutomationSpecBase::FSpecIt> @ 141da1220

TSharedRef<FAutomationSpecBase::FSpecIt,1> * __thiscall
TSharedRef<FAutomationSpecBase::FSpecIt,1>::
TSharedRef<FAutomationSpecBase::FSpecIt,1><FAutomationSpecBase::FSpecIt>
          (TSharedRef<FAutomationSpecBase::FSpecIt,1> *this,
          TRawPtrProxy<FAutomationSpecBase::FSpecIt> *param_1)

{
  FSpecIt *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FAutomationSpecBase::FSpecIt,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFSpecIt_FAutomationSpecBase__U__DefaultDeleter_UFSpecIt_FAutomationSpecBase___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSpecIt *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FAutomationSpecBase::FSpecIt,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_> @ 141da12c0

TSharedRef<TJsonStringReader<wchar_t>,1> * __thiscall
TSharedRef<TJsonStringReader<wchar_t>,1>::
TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>
          (TSharedRef<TJsonStringReader<wchar_t>,1> *this,
          TRawPtrProxy<TJsonStringReader<wchar_t>_> *param_1)

{
  TJsonStringReader<wchar_t> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonStringReader__W__U__DefaultDeleter_V__TJsonStringReader__W___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonStringReader<wchar_t> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonStringReader<wchar_t>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonStringViewReader<char>,1><TJsonStringViewReader<char>_> @ 141da1360

TSharedRef<TJsonStringViewReader<char>,1> * __thiscall
TSharedRef<TJsonStringViewReader<char>,1>::
TSharedRef<TJsonStringViewReader<char>,1><TJsonStringViewReader<char>_>
          (TSharedRef<TJsonStringViewReader<char>,1> *this,
          TRawPtrProxy<TJsonStringViewReader<char>_> *param_1)

{
  TJsonStringViewReader<char> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonStringViewReader<char>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonStringViewReader_D__U__DefaultDeleter_V__TJsonStringViewReader_D___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonStringViewReader<char> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonStringViewReader<char>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonStringViewReader<char8_t>,1><TJsonStringViewReader<char8_t>_> @ 141da1400

TSharedRef<TJsonStringViewReader<char8_t>,1> * __thiscall
TSharedRef<TJsonStringViewReader<char8_t>,1>::
TSharedRef<TJsonStringViewReader<char8_t>,1><TJsonStringViewReader<char8_t>_>
          (TSharedRef<TJsonStringViewReader<char8_t>,1> *this,
          TRawPtrProxy<TJsonStringViewReader<char8_t>_> *param_1)

{
  TJsonStringViewReader<char8_t> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonStringViewReader<char8_t>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonStringViewReader__Q__U__DefaultDeleter_V__TJsonStringViewReader__Q___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonStringViewReader<char8_t> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonStringViewReader<char8_t>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonStringViewReader<wchar_t>,1><TJsonStringViewReader<wchar_t>_> @ 141da14a0

TSharedRef<TJsonStringViewReader<wchar_t>,1> * __thiscall
TSharedRef<TJsonStringViewReader<wchar_t>,1>::
TSharedRef<TJsonStringViewReader<wchar_t>,1><TJsonStringViewReader<wchar_t>_>
          (TSharedRef<TJsonStringViewReader<wchar_t>,1> *this,
          TRawPtrProxy<TJsonStringViewReader<wchar_t>_> *param_1)

{
  TJsonStringViewReader<wchar_t> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonStringViewReader<wchar_t>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonStringViewReader__W__U__DefaultDeleter_V__TJsonStringViewReader__W___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonStringViewReader<wchar_t> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonStringViewReader<wchar_t>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>_> @ 141da1540

TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,1> * __thiscall
TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,1>::
TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>_>
          (TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,1> *this,
          TRawPtrProxy<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>_> *param_1)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonStringWriter_U__TCondensedJsonPrintPolicy_D____U__DefaultDeleter_V__TJsonStringWriter_U__TCondensedJsonPrintPolicy_D_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>_> @ 141da15e0

TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,1> * __thiscall
TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,1>::
TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>_>
          (TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,1> *this,
          TRawPtrProxy<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>_> *param_1)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonStringWriter_U__TCondensedJsonPrintPolicy__Q____U__DefaultDeleter_V__TJsonStringWriter_U__TCondensedJsonPrintPolicy__Q_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_> @ 141da1680

TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1> * __thiscall
TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1>::
TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_>
          (TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1> *this,
          TRawPtrProxy<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_> *param_1)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____U__DefaultDeleter_V__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>_> @ 141da1720

TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,1> * __thiscall
TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,1>::
TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>_>
          (TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,1> *this,
          TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>_> *param_1)

{
  TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____U__DefaultDeleter_V__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> @ 141da17c0

TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> * __thiscall
TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
          (TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> *this,
          TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> *param_1)

{
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____U__DefaultDeleter_V__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FSingleExecuteLatentCommand> @ 141da1890

TSharedRef<IAutomationLatentCommand,1> * __thiscall
TSharedRef<IAutomationLatentCommand,1>::
TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FSingleExecuteLatentCommand>
          (TSharedRef<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<FAutomationSpecBase::FSingleExecuteLatentCommand> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FSingleExecuteLatentCommand *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<IAutomationLatentCommand,1> *pTVar9;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSingleExecuteLatentCommand_FAutomationSpecBase__U__DefaultDeleter_VFSingleExecuteLatentCommand_FAutomationSpecBase___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FSingleExecuteLatentCommand *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<IAutomationLatentCommand,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FSingleExecuteLatentCommand *)0x0) &&
     (((puVar1 = &pFVar4->field_0x10, *(longlong *)&pFVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FSingleExecuteLatentCommand **)&pFVar4->field_0x8 = pFVar4;
    if (pTVar8 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

