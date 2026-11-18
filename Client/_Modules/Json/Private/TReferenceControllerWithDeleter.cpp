// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 13

// DestroyObject @ 141da07f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FSpec,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpec>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationSpecBase::FSpec,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpec>,1>
                *this)

{
  FSpec *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSpec *)0x0) {
    DestructItems<TSharedRef<IAutomationLatentCommand,1>,int>
              ((TSharedRef<IAutomationLatentCommand,1> *)(pFVar1->Commands).AllocatorInstance.Data,
               (pFVar1->Commands).ArrayNum);
    pFVar2 = (pFVar1->Commands).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Filename).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Description).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Id).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x48);
    return;
  }
  return;
}

// DestroyObject @ 141dd2d00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FSpecDefinitionScope,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpecDefinitionScope>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationSpecBase::FSpecDefinitionScope,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpecDefinitionScope>,1>
                *this)

{
  if (this->Object != (FSpecDefinitionScope *)0x0) {
    FAutomationSpecBase::FSpecDefinitionScope::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2d20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FSpecIt,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpecIt>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationSpecBase::FSpecIt,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSpecIt>,1>
                *this)

{
  FSpecIt *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSpecIt *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->Command).SharedReferenceCount.ReferenceController);
    pFVar2 = (pFVar1->Filename).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Id).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Description).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x48);
    return;
  }
  return;
}

// DestroyObject @ 141dd2d80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonStringReader<wchar_t>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonStringReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonStringReader<wchar_t>_>,1>
                *this)

{
  TJsonStringReader<wchar_t> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonStringReader<wchar_t> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141dd2d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2da0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringViewReader<char>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<char>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonStringViewReader<char>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<char>_>,1>
                *this)

{
  TJsonStringViewReader<char> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonStringViewReader<char> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141dd2db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2dc0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringViewReader<char8_t>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<char8_t>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonStringViewReader<char8_t>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<char8_t>_>,1>
                *this)

{
  TJsonStringViewReader<char8_t> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonStringViewReader<char8_t> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141dd2dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2de0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringViewReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<wchar_t>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonStringViewReader<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonStringViewReader<wchar_t>_>,1>
                *this)

{
  TJsonStringViewReader<wchar_t> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonStringViewReader<wchar_t> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141dd2df1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2e00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>_>,1>
                *this)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141dd2e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2e20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>_>,1>
                *this)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141dd2e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2e40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>_>,1>
                *this)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141dd2e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2e60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>_>,1>
                *this)

{
  TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141dd2e71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2e80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,SharedPointerInternals::DefaultDeleter<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>,1>
                *this)

{
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141dd2e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141dd2ea0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FSingleExecuteLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSingleExecuteLatentCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationSpecBase::FSingleExecuteLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FSingleExecuteLatentCommand>,1>
                *this)

{
  FSingleExecuteLatentCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSingleExecuteLatentCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141dd2eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

