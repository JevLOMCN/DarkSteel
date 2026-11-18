// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 1

// Create @ 14e6321f0

TSharedRef<TJsonReader<wchar_t>,1> * __cdecl
TJsonReader<wchar_t>::Create
          (TSharedRef<TJsonReader<wchar_t>,1> *__return_storage_ptr__,FArchive *param_1)

{
  TJsonReader<wchar_t> *pTVar1;
  TRawPtrProxy<TJsonReader<wchar_t>_> local_res8;
  
  pTVar1 = ::operator_new(0x70);
  local_res8.Object = (TJsonReader<wchar_t> *)0x0;
  if (pTVar1 != (TJsonReader<wchar_t> *)0x0) {
    (pTVar1->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->ParseState).ArrayNum = 0;
    (pTVar1->ParseState).ArrayMax = 0;
    pTVar1->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
    pTVar1->CurrentToken = None;
    pTVar1->Stream = param_1;
    (pTVar1->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Identifier).Data.ArrayNum = 0;
    (pTVar1->Identifier).Data.ArrayMax = 0;
    (pTVar1->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->ErrorMessage).Data.ArrayNum = 0;
    (pTVar1->ErrorMessage).Data.ArrayMax = 0;
    (pTVar1->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->StringValue).Data.ArrayNum = 0;
    (pTVar1->StringValue).Data.ArrayMax = 0;
    pTVar1->NumberValue = 0.0;
    pTVar1->LineNumber = 1;
    pTVar1->CharacterNumber = 0;
    pTVar1->BoolValue = false;
    pTVar1->FinishedReadingRootObject = false;
    local_res8.Object = pTVar1;
  }
  TSharedRef<TJsonReader<wchar_t>,1>::TSharedRef<TJsonReader<wchar_t>,1><TJsonReader<wchar_t>_>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

