// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationDataCore
// Functions: 14

// DereferenceIfNecessary<FGlobalConfigurationConfigRouter,FGlobalConfigurationConfigRouter_*_&> @ 14e9b6080

FGlobalConfigurationConfigRouter * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGlobalConfigurationConfigRouter,FGlobalConfigurationConfigRouter_*_&>
          (FGlobalConfigurationConfigRouter **param_1)

{
  return *param_1;
}

// TryGetData @ 14e9b9560

bool __cdecl UE::GlobalConfigurationData::TryGetData(FString *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FJsonValue,1> local_18;
  
  IGlobalConfigurationRouter::TryGetData(&local_18,param_1);
  if (local_18.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((local_18.Object)->_padding_ + 0x30))(local_18.Object,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// TryGetData @ 14e9b9600

bool __cdecl UE::GlobalConfigurationData::TryGetData(FString *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FJsonValue,1> local_18;
  
  IGlobalConfigurationRouter::TryGetData(&local_18,param_1);
  if (local_18.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((local_18.Object)->_padding_ + 0x48))(local_18.Object,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// TryGetData @ 14e9b96a0

bool __cdecl UE::GlobalConfigurationData::TryGetData(FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FJsonValue,1> local_18;
  
  IGlobalConfigurationRouter::TryGetData(&local_18,param_1);
  if (local_18.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((local_18.Object)->_padding_ + 0x58))(local_18.Object,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// TryGetData @ 14e9b9740

bool __cdecl UE::GlobalConfigurationData::TryGetData(FString *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FText *pFVar5;
  FString local_38;
  TSharedPtr<FJsonValue,1> local_28;
  FText local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  IGlobalConfigurationRouter::TryGetData(&local_28,param_1);
  if (local_28.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    if (local_28.Object == (FJsonValue *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    cVar4 = (**(code **)((local_28.Object)->_padding_ + 0x58))(local_28.Object,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (cVar4 != '\0') {
      pFVar5 = FText::FromString(&local_18,&local_38);
      FText::operator=(param_2,pFVar5);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      bVar2 = true;
      goto LAB_14e9b97fe;
    }
  }
  bVar2 = false;
LAB_14e9b97fe:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// TryGetData @ 14e9b9830

bool __cdecl UE::GlobalConfigurationData::TryGetData(FString *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FJsonValue,1> local_18;
  
  IGlobalConfigurationRouter::TryGetData(&local_18,param_1);
  if (local_18.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((local_18.Object)->_padding_ + 0x68))(local_18.Object,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// TryGetDataOfType @ 14e9b9f60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::GlobalConfigurationData::TryGetDataOfType(FString *param_1,UStruct *param_2,void *param_3)

{
  code *pcVar1;
  FJsonValue *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  longlong *local_res20;
  FScriptContainerElement *local_68 [2];
  TSharedPtr<FJsonValue,1> local_58;
  TSharedRef<FJsonObject,1> local_48;
  TSharedPtr<FJsonValue,1> local_38;
  FString local_28;
  
  IGlobalConfigurationRouter::TryGetData(&local_58,param_1);
  pFVar2 = local_58.Object;
  if (local_58.Object != (FJsonValue *)0x0) {
    pwVar7 = L"";
    if ((local_58.Object == (FJsonValue *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    cVar5 = (**(code **)(pFVar2->_padding_ + 0x80))(pFVar2,&local_res20);
    if (cVar5 != '\0') {
      if ((*local_res20 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      local_48.Object = (FJsonObject *)*local_res20;
      local_48.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)local_res20[1];
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_48.Object == (FJsonObject *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      bVar3 = FJsonObjectConverter::JsonObjectToUStruct
                        (&local_48,param_2,param_3,0,0,false,(FText *)0x0,
                         (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                          *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      return bVar3;
    }
    if (1 < (byte)LogGlobalConfigurationData._0_1_) {
      local_38.Object = local_58.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar6 = IGlobalConfigurationRouter::TryPrintString(&local_28,&local_38);
      if ((param_1->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      local_68[0] = (FScriptContainerElement *)pwVar7;
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,FString>
                ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static,(wchar_t **)local_68,
                 pFVar6);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return false;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_&> @ 15059b650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FString *param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<FString>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<wchar_t>_const_&,FString_const_&> @ 15059b690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<wchar_t>_const_&,FString_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,TStringView<wchar_t> *param_3,
          FString *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  FString *local_18;
  code *local_10;
  
  local_38.WriteValue = FLogField::Write<TStringView<wchar_t>_>;
  local_38.Name = (char *)0x0;
  local_10 = FLogField::Write<FString>;
  local_20 = 0;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_&> @ 15059b6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FString *param_3,FString *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  FString *local_18;
  code *local_10;
  
  local_38.Name = (char *)0x0;
  local_38.WriteValue = FLogField::Write<FString>;
  local_20 = 0;
  local_10 = FLogField::Write<FString>;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_&,FString_const_&,FString> @ 15059b730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_&,FString_const_&,FString>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FString *param_3,FString *param_4,
          FString *param_5,FString *param_6)

{
  undefined1 auStack_98 [32];
  FLogField local_78;
  undefined8 local_60;
  FString *local_58;
  code *local_50;
  undefined8 local_48;
  FString *local_40;
  code *local_38;
  undefined8 local_30;
  FString *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_40 = param_5;
  local_78.WriteValue = FLogField::Write<FString>;
  local_50 = FLogField::Write<FString>;
  local_38 = FLogField::Write<FString>;
  local_20 = FLogField::Write<FString>;
  local_28 = param_6;
  local_78.Name = (char *)0x0;
  local_60 = 0;
  local_48 = 0;
  local_30 = 0;
  local_78.Value = param_3;
  local_58 = param_4;
  LogWithFieldArray(param_1,param_2,&local_78,4);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_const_&> @ 15059b7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FString *param_3,FString *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  FString *local_18;
  code *local_10;
  
  local_38.Name = (char *)0x0;
  local_38.WriteValue = FLogField::Write<FString>;
  local_20 = 0;
  local_10 = FLogField::Write<FString>;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_const_&,FString> @ 15059b820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_const_&,FString>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FString *param_3,FString *param_4,
          FString *param_5)

{
  undefined1 auStack_88 [32];
  FLogField local_68;
  undefined8 local_50;
  FString *local_48;
  code *local_40;
  undefined8 local_38;
  FString *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.Name = (char *)0x0;
  local_50 = 0;
  local_38 = 0;
  local_68.WriteValue = FLogField::Write<FString>;
  local_40 = FLogField::Write<FString>;
  local_28 = FLogField::Write<FString>;
  local_30 = param_5;
  local_68.Value = param_3;
  local_48 = param_4;
  LogWithFieldArray(param_1,param_2,&local_68,3);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,FString> @ 15059b8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,FString>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,wchar_t **param_3,FString *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  FString *local_18;
  code *local_10;
  
  local_38.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_38.Name = (char *)0x0;
  local_10 = FLogField::Write<FString>;
  local_20 = 0;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

