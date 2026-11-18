// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 2

// LogAndToastWarning @ 14dad6e00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Dataflow::FDataflowTools::LogAndToastWarning
          (FDataflowNode *param_1,FText *param_2,FText *param_3)

{
  atomic<int> *paVar1;
  FName local_res8;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  TSharedRef<FTextFormatData,1> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString((FString *)&local_58,L"{0}: {1}\n{2}");
    FTextFormat::FromString(&TextFormat,(FString *)&local_58,Default);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
    }
    atexit(`UE::Dataflow::FDataflowTools::LogAndToastWarning'::__l2::
           _dynamic_atexit_destructor_for__TextFormat__);
    _Init_thread_footer(&::_TSS0);
  }
  local_res8 = param_1->Name;
  FText::FromName(&local_68,&local_res8);
  local_58.TextData.Reference = (param_3->TextData).Reference;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,&local_res8);
  }
  local_48.TextData.Reference = (param_2->TextData).Reference;
  local_58.Flags = param_3->Flags;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,&local_res8);
  }
  local_48.Flags = param_2->Flags;
  local_38.TextData.Reference = local_68.TextData.Reference;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 8))
              (local_68.TextData.Reference,&local_res8);
  }
  local_38.Flags = local_68.Flags;
  local_18 = TextFormat.TextFormatData;
  if (TextFormat.TextFormatData.SharedReferenceCount.ReferenceController.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(TextFormat.TextFormatData.SharedReferenceCount.ReferenceController.
              ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  FText::Format<FText,FText,FText>(&local_28,(FTextFormat *)&local_18,&local_38,&local_48,&local_58)
  ;
  if (3 < (byte)LogDataflowNodes._0_1_) {
    FText::ToString(&local_28);
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogDataflowNodes);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return;
}

// MakeCollectionName @ 14dad6fe0

void __cdecl UE::Dataflow::FDataflowTools::MakeCollectionName(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  bool local_res8 [8];
  FString local_28;
  FString local_18;
  
  pFVar2 = SlugStringForValidName(&local_18,param_1,L"_");
  pFVar2 = ::FString::Replace(pFVar2,&local_28,L"\\",L"_",IgnoreCase);
  if (param_1 != pFVar2) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  do {
    ::FString::TrimCharInline(param_1,L'_',local_res8);
  } while (local_res8[0] != false);
  return;
}

