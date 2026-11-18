// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// DumpServiceParametersFile @ 145d1f4e0

bool __thiscall
IDumpGPUUploadServiceProvider::FDumpParameters::DumpServiceParametersFile(FDumpParameters *this)

{
  bool bVar1;
  IFileManager *pIVar2;
  ForAnyElementType FVar3;
  FString local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  ::operator/(&local_28,&this->LocalPath,L"Base/DumpService.json");
  DumpServiceParametersFileContent(this,&local_38);
  pIVar2 = IFileManager::Get();
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  local_18.Size = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  bVar1 = FFileHelper::SaveStringToFile(&local_18,(wchar_t *)FVar3.Data,AutoDetect,pIVar2,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// DumpServiceParametersFileContent @ 145d1f5a0

FString * __thiscall
IDumpGPUUploadServiceProvider::FDumpParameters::DumpServiceParametersFileContent
          (FDumpParameters *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FJsonObject *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  TRawPtrProxy<FJsonObject> local_res8;
  TSharedPtr<FJsonObject,1> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TSharedPtr<FJsonObject,1> local_88;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar3 = ::operator_new(0x50);
  local_res8.Object = (FJsonObject *)0x0;
  if (pFVar3 != (FJsonObject *)0x0) {
    *(undefined8 *)&pFVar3->Values = 0;
    *(undefined8 *)&(pFVar3->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar3->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar3->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar3->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar3->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar3->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar3->Values).field_0x40 = 0;
    *(undefined4 *)&(pFVar3->Values).field_0x48 = 0;
    local_res8.Object = pFVar3;
  }
  TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_d8,&local_res8);
  if ((local_d8.Object == (FJsonObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  if ((this->Type).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->Type).Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_c8,L"Type");
  pFVar4 = ::FString::FString(&local_68,pwVar5);
  FJsonObject::SetStringField(local_d8.Object,&local_c8,pFVar4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((local_d8.Object == (FJsonObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  if ((this->Time).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->Time).Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_b8,L"Time");
  pFVar4 = ::FString::FString(&local_58,pwVar5);
  FJsonObject::SetStringField(local_d8.Object,&local_b8,pFVar4);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((local_d8.Object == (FJsonObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  pFVar4 = ::FName::ToString(&this->CompressionName,&local_38);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_a8,L"CompressionName");
  pFVar4 = ::FString::FString(&local_48,pwVar5);
  FJsonObject::SetStringField(local_d8.Object,&local_a8,pFVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((local_d8.Object == (FJsonObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  if (*(int *)&(this->CompressionFiles).field_0x8 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)&this->CompressionFiles;
  }
  ::FString::FString(&local_98,L"CompressionFiles");
  pFVar4 = ::FString::FString(&local_28,pwVar5);
  FJsonObject::SetStringField(local_d8.Object,&local_98,pFVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
            (&local_78,__return_storage_ptr__,0);
  if ((local_d8.Object == (FJsonObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_d8.Object == (FJsonObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  local_88.Object = local_d8.Object;
  local_88.SharedReferenceCount.ReferenceController =
       local_d8.SharedReferenceCount.ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_88,&local_78,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

