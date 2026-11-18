// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// LegacyAttachmentString<char> @ 14d3c9df0

FString * __cdecl
TraceServices::FTraceAnalyzerUtils::LegacyAttachmentString<char>
          (FString *__return_storage_ptr__,char *param_1,FOnEventContext *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  FString *pFVar5;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar2 = UE::Trace::IAnalyzer::FEventData::GetString
                    (param_2->EventData,param_1,__return_storage_ptr__);
  if (!bVar2) {
    uVar3 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_2->EventData);
    puVar4 = UE::Trace::IAnalyzer::FEventData::GetAttachment(param_2->EventData);
    pFVar5 = ::FString::ConstructFromPtrSize(&local_18,(char *)puVar4,uVar3);
    if (__return_storage_ptr__ != pFVar5) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// LegacyAttachmentString<wchar_t> @ 14d3c9eb0

FString * __cdecl
TraceServices::FTraceAnalyzerUtils::LegacyAttachmentString<wchar_t>
          (FString *__return_storage_ptr__,char *param_1,FOnEventContext *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar2 = UE::Trace::IAnalyzer::FEventData::GetString
                    (param_2->EventData,param_1,__return_storage_ptr__);
  if (!bVar2) {
    uVar3 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_2->EventData);
    pwVar4 = (wchar_t *)UE::Trace::IAnalyzer::FEventData::GetAttachment(param_2->EventData);
    pFVar5 = ::FString::ConstructFromPtrSize(&local_18,pwVar4,uVar3 >> 1);
    if (__return_storage_ptr__ != pFVar5) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

