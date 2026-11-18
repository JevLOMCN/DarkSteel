// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 4

// FOnlineNotification @ 14eb30d40

FOnlineNotification * __thiscall
FOnlineNotification::FOnlineNotification
          (FOnlineNotification *this,FString *param_1,TSharedPtr<FJsonValue,1> *param_2,
          TSharedPtr<FUniqueNetId_const_,1> *param_3,TSharedPtr<FUniqueNetId_const_,1> *param_4,
          FString *param_5)

{
  FJsonObject *pFVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  ::FString::FString(&this->TypeStr,param_1);
  if (param_2->Object == (FJsonValue *)0x0) {
    (this->Payload).Object = (FJsonObject *)0x0;
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->Payload).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)param_2->Object->_padding_)();
    pTVar3 = (TReferenceControllerBase<1> *)puVar2[1];
    pFVar1 = (FJsonObject *)*puVar2;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    (this->Payload).Object = pFVar1;
    (this->Payload).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  (this->ToUserId).Object = param_3->Object;
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  (this->ToUserId).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->FromUserId).Object = param_4->Object;
  pTVar3 = (param_4->SharedReferenceCount).ReferenceController;
  (this->FromUserId).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&this->ClientRequestIdStr,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// ParsePayload @ 14ec0e030

bool __thiscall
FOnlineNotification::ParsePayload(FOnlineNotification *this,UStruct *param_1,void *param_2)

{
  FJsonObject *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TSharedRef<FJsonObject,1> local_18;
  
  bVar5 = false;
  if ((param_1 == (UStruct *)0x0) || (param_2 == (void *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructType && StructPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Private\\OnlineNotification.cpp"
                       ,0x18,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Payload).Object;
  if (pFVar1 != (FJsonObject *)0x0) {
    local_18.SharedReferenceCount.ReferenceController =
         (this->Payload).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    if (pFVar1 == (FJsonObject *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar5 = true;
    bVar3 = FJsonObjectConverter::JsonObjectToUStruct
                      (&local_18,param_1,param_2,0,0,false,(FText *)0x0,
                       (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                        *)0x0);
    if (bVar3) {
      bVar3 = true;
      goto LAB_14ec0e11b;
    }
  }
  bVar3 = false;
LAB_14ec0e11b:
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return bVar3;
}

// SetClientRequestIdFromPayload @ 14ec11a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineNotification::SetClientRequestIdFromPayload(FOnlineNotification *this)

{
  FJsonObject *this_00;
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  this_00 = (this->Payload).Object;
  if ((this_00 != (FJsonObject *)0x0) && ((this->ClientRequestIdStr).Data.ArrayNum < 2)) {
    local_18.Size = 0x11;
    local_18.DataPtr = L"client_request_id";
    bVar1 = FJsonObject::TryGetStringField(this_00,&local_18,&this->ClientRequestIdStr);
    if (!bVar1) {
      if (1 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl
                  ((FString *)&local_18,L"No client_request_id in notification JSON object");
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_18.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_18.DataPtr);
        }
      }
      ::FString::operator=(&this->ClientRequestIdStr,L"");
    }
  }
  return;
}

// SetTypeFromPayload @ 14ec12710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlineNotification::SetTypeFromPayload(FOnlineNotification *this)

{
  FJsonObject *this_00;
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  this_00 = (this->Payload).Object;
  if ((this_00 != (FJsonObject *)0x0) && ((this->TypeStr).Data.ArrayNum < 2)) {
    local_18.Size = 4;
    local_18.DataPtr = L"Type";
    bVar1 = FJsonObject::TryGetStringField(this_00,&local_18,&this->TypeStr);
    if (!bVar1) {
      if (1 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl((FString *)&local_18,L"No type in notification JSON object");
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_18.DataPtr != (wchar_t *)0x0) {
          FMemory::Free(local_18.DataPtr);
        }
      }
      ::FString::operator=(&this->TypeStr,L"<no type>");
      return;
    }
  }
  return;
}

