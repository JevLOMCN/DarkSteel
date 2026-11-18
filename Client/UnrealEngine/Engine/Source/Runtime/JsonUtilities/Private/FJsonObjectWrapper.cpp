// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 9

// StaticStruct @ 14461c2b0

UScriptStruct * __cdecl FJsonObjectWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_JsonUtilities();
    Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FJsonObjectWrapper,(UObject *)pUVar1,
                         L"JsonObjectWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FJsonObjectWrapper.OuterSingleton;
}

// FJsonObjectWrapper @ 144625670

FJsonObjectWrapper * __thiscall FJsonObjectWrapper::FJsonObjectWrapper(FJsonObjectWrapper *this)

{
  TSharedPtr<FJsonObject,1> *pTVar1;
  TSharedRef<FJsonObject,1> *pTVar2;
  FJsonObject *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FJsonObject,1> local_18;
  
  pTVar1 = &this->JsonObject;
  (this->JsonString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JsonString).Data.ArrayNum = 0;
  (this->JsonString).Data.ArrayMax = 0;
  pTVar1->Object = (FJsonObject *)0x0;
  (this->JsonObject).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = MakeShared<FJsonObject,1>(&local_18);
  local_20.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_28 = pTVar2->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<FJsonObject,1> *)&local_28) {
    pTVar1->Object = local_28;
    local_28 = (FJsonObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->JsonObject).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator_bool @ 144625b80

bool __thiscall FJsonObjectWrapper::operator_bool(FJsonObjectWrapper *this)

{
  FJsonObject *pFVar1;
  
  pFVar1 = (this->JsonObject).Object;
  if ((pFVar1 != (FJsonObject *)0x0) &&
     (*(int *)&(pFVar1->Values).field_0x8 != *(int *)&(pFVar1->Values).field_0x34)) {
    return true;
  }
  return false;
}

// ExportTextItem @ 14462cf70

bool __thiscall
FJsonObjectWrapper::ExportTextItem
          (FJsonObjectWrapper *this,FString *param_1,FJsonObjectWrapper *param_2,UObject *param_3,
          int param_4,UObject *param_5)

{
  FJsonObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TSharedPtr<FJsonObject,1> local_38;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_28;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_18;
  
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    ::FString::Empty(param_1);
    return true;
  }
  TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create(&local_18,param_1,0);
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->JsonObject).Object;
  pTVar2 = (this->JsonObject).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar1;
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
            (&local_28,&local_38);
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_28,local_18.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar4;
}

// GetAllocatedSize @ 14462d400

ulong64 __thiscall FJsonObjectWrapper::GetAllocatedSize(FJsonObjectWrapper *this)

{
  FJsonObject *this_00;
  ulong64 uVar1;
  ulong64 uVar2;
  
  this_00 = (this->JsonObject).Object;
  uVar1 = (longlong)(this->JsonString).Data.ArrayMax * 2;
  if (this_00 != (FJsonObject *)0x0) {
    uVar2 = FJsonObject::GetAllocatedSize(this_00);
    return uVar2 + 0x50 + uVar1;
  }
  return uVar1;
}

// ImportTextItem @ 14462de30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FJsonObjectWrapper::ImportTextItem
          (FJsonObjectWrapper *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  wchar_t *pwVar1;
  bool bVar2;
  TSharedRef<FJsonObject,1> *pTVar3;
  int iVar4;
  int local_res10 [2];
  FString local_38;
  FJsonObject *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FJsonObject,1> local_18;
  
  pwVar1 = *param_1;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (*pwVar1 == L'\"') {
    local_res10[0] = 0;
    bVar2 = FParse::QuotedString(pwVar1,&local_38,local_res10);
    if (bVar2) {
      iVar4 = local_res10[0];
      goto LAB_14462dec1;
    }
    if (param_4 != (FOutputDevice *)0x0) {
      FOutputDevice::LogfImpl
                (param_4,Warning,L"FJsonObjectWrapper::ImportTextItem: Bad quoted string: %s\n");
      bVar2 = false;
      goto LAB_14462df7f;
    }
LAB_14462df60:
    bVar2 = false;
  }
  else {
    ::FString::operator=(&local_38,pwVar1);
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
LAB_14462dec1:
    *param_1 = *param_1 + iVar4;
    if (local_38.Data.ArrayNum < 2) {
      ::FString::Empty(&this->JsonString);
      pTVar3 = MakeShared<FJsonObject,1>(&local_18);
      local_20.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
      local_28 = pTVar3->Object;
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->JsonObject != (TSharedPtr<FJsonObject,1> *)&local_28) {
        (this->JsonObject).Object = local_28;
        local_28 = (FJsonObject *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->JsonObject).SharedReferenceCount,&local_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      bVar2 = JsonObjectFromString(this,&local_38);
      if (!bVar2) {
        if (param_4 != (FOutputDevice *)0x0) {
          FOutputDevice::LogfImpl
                    (param_4,Warning,
                     L"FJsonObjectWrapper::ImportTextItem - Unable to parse json: %s\n");
        }
        goto LAB_14462df60;
      }
      iVar4 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AssignRange
                (&this->JsonString,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
    }
    bVar2 = true;
  }
LAB_14462df7f:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// JsonObjectFromString @ 14462e540

bool __thiscall FJsonObjectWrapper::JsonObjectFromString(FJsonObjectWrapper *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  bool bVar3;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar4;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_58;
  StackState local_48;
  
  pTVar4 = TJsonStringReader<wchar_t>::Create(&local_58,param_1);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  local_48.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Identifier.Data.ArrayNum = 0;
  local_48.Identifier.Data.ArrayMax = 0;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  local_48.Object.Object = (FJsonObject *)0x0;
  local_48.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_48,None);
  if (bVar3) {
    bVar3 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_48,&this->JsonObject);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// JsonObjectToString @ 14462e650

bool __thiscall FJsonObjectWrapper::JsonObjectToString(FJsonObjectWrapper *this,FString *param_1)

{
  FJsonObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TSharedPtr<FJsonObject,1> local_38;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_28;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_18;
  
  TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create(&local_18,param_1,0);
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->JsonObject).Object;
  pTVar2 = (this->JsonObject).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar1;
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
            (&local_28,&local_38);
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_28,local_18.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar4;
}

// PostSerialize @ 14462f230

void __thiscall FJsonObjectWrapper::PostSerialize(FJsonObjectWrapper *this,FArchive *param_1)

{
  bool bVar1;
  
  if (1 < (this->JsonString).Data.ArrayNum) {
    bVar1 = JsonObjectFromString(this,&this->JsonString);
    if (!bVar1) {
      ::FString::Empty(&this->JsonString);
      return;
    }
  }
  return;
}

