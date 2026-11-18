// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// operator<FString,FString>_TTuple<FString,FString> @ 143149ab0

TTuple<FString,FString> * __thiscall
TPairInitializer<TStringView<wchar_t>_&,TStringView<wchar_t>_&>::
operator<FString,FString>_TTuple<FString,FString>
          (TPairInitializer<TStringView<wchar_t>_&,TStringView<wchar_t>_&> *this,
          TTuple<FString,FString> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TStringView<wchar_t> *pTVar2;
  TStringView<wchar_t> *pTVar3;
  TTuple<FString,FString> *pTVar4;
  FString *pFVar5;
  FString local_18;
  
  pTVar2 = this->Value;
  pTVar3 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pTVar4 = (TTuple<FString,FString> *)
           ::FString::ConstructFromPtrSize
                     (&local_18,pTVar3->DataPtr,(int)*(undefined8 *)&pTVar3->Size);
  if (__return_storage_ptr__ != pTVar4) {
    if (*(void **)__return_storage_ptr__ != (void *)0x0) {
      FMemory::Free(*(void **)__return_storage_ptr__);
    }
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar4;
    *(undefined8 *)pTVar4 = 0;
    *(int *)&__return_storage_ptr__->field_0x8 = *(int *)&pTVar4->field_0x8;
    *(int *)&__return_storage_ptr__->field_0xc = *(int *)&pTVar4->field_0xc;
    *(undefined8 *)&pTVar4->field_0x8 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_18,pTVar2->DataPtr,(int)*(undefined8 *)&pTVar2->Size);
  if ((FString *)puVar1 != pFVar5) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&__return_storage_ptr__->field_0x18 = (pFVar5->Data).ArrayNum;
    *(int *)&__return_storage_ptr__->field_0x1c = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

