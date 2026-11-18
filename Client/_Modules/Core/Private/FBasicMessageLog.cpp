// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// AddMessage @ 1417b2f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBasicMessageLog::AddMessage
          (FBasicMessageLog *this,TSharedRef<FTokenizedMessage,1> *param_1,bool param_2)

{
  Type TVar1;
  Type TVar2;
  FText *this_00;
  FText FStack_18;
  
  if (param_2) {
    TVar1 = param_1->Object->Severity;
    if (((TVar1 == Error) || (TVar1 == PerformanceWarning)) || (TVar1 == Warning)) {
      UE::Logging::Private::BasicLog<64>
                (&`private:_void___cdecl_FBasicMessageLog::AddMessageInternal(TSharedRef<FTokenizedMessage,1>_const&___ptr64,bool)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogHAL);
    }
    this_00 = FTokenizedMessage::ToText(param_1->Object,&FStack_18);
    FText::ToString(this_00);
    TVar1 = param_1->Object->Severity;
    if (TVar1 == Error) {
      TVar2 = Error;
    }
    else if ((TVar1 == PerformanceWarning) || (TVar1 == Warning)) {
      TVar2 = Warning;
    }
    else if (TVar1 == Info) {
      TVar2 = (UE::MessageLog::Private::LogInfoMessagesAtDisplayVerbosity == false) + Display;
    }
    else {
      TVar2 = Log;
    }
    FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                   ,0x78,&this->LogName,TVar2,L"%s");
    if (FStack_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
    }
    UE::Logging::Private::BasicLog<64>
              (&`private:_void___cdecl_FBasicMessageLog::AddMessageInternal(TSharedRef<FTokenizedMessage,1>_const&___ptr64,bool)___ptr64'
                ::__l27::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  return;
}

// AddMessageInternal @ 1417b3080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBasicMessageLog::AddMessageInternal
          (FBasicMessageLog *this,TSharedRef<FTokenizedMessage,1> *param_1,bool param_2)

{
  Type TVar1;
  Type TVar2;
  FText *this_00;
  FText local_18;
  
  if (param_2) {
    TVar1 = param_1->Object->Severity;
    if (((TVar1 == Error) || (TVar1 == PerformanceWarning)) || (TVar1 == Warning)) {
      UE::Logging::Private::BasicLog<64>
                (&`private:_void___cdecl_FBasicMessageLog::AddMessageInternal(TSharedRef<FTokenizedMessage,1>_const&___ptr64,bool)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogHAL);
    }
    this_00 = FTokenizedMessage::ToText(param_1->Object,&local_18);
    FText::ToString(this_00);
    TVar1 = param_1->Object->Severity;
    if (TVar1 == Error) {
      TVar2 = Error;
    }
    else if ((TVar1 == PerformanceWarning) || (TVar1 == Warning)) {
      TVar2 = Warning;
    }
    else if (TVar1 == Info) {
      TVar2 = (UE::MessageLog::Private::LogInfoMessagesAtDisplayVerbosity == false) + Display;
    }
    else {
      TVar2 = Log;
    }
    FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                   ,0x78,&this->LogName,TVar2,L"%s");
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    UE::Logging::Private::BasicLog<64>
              (&`private:_void___cdecl_FBasicMessageLog::AddMessageInternal(TSharedRef<FTokenizedMessage,1>_const&___ptr64,bool)___ptr64'
                ::__l27::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  return;
}

// AddMessages @ 1417b31a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBasicMessageLog::AddMessages
          (FBasicMessageLog *this,
          TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FText *this_00;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FText local_28;
  
  iVar6 = 0;
  while( true ) {
    if ((iVar6 < 0) || (param_1->ArrayNum <= iVar6)) {
      return;
    }
    if ((iVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    if (param_2) {
      iVar1 = *(int *)(*(longlong *)pFVar5 + 0x30);
      if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
        UE::Logging::Private::BasicLog<64>
                  (&`private:_void___cdecl_FBasicMessageLog::AddMessageInternal(TSharedRef<FTokenizedMessage,1>_const&___ptr64,bool)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogHAL);
      }
      this_00 = FTokenizedMessage::ToText(*(FTokenizedMessage **)pFVar5,&local_28);
      FText::ToString(this_00);
      iVar1 = *(int *)(*(longlong *)pFVar5 + 0x30);
      if (iVar1 == 1) {
        TVar4 = Error;
      }
      else if ((iVar1 == 2) || (iVar1 == 3)) {
        TVar4 = Warning;
      }
      else if (iVar1 == 4) {
        TVar4 = (UE::MessageLog::Private::LogInfoMessagesAtDisplayVerbosity == false) + Display;
      }
      else {
        TVar4 = Log;
      }
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                     ,0x78,&this->LogName,TVar4,L"%s");
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      UE::Logging::Private::BasicLog<64>
                (&`private:_void___cdecl_FBasicMessageLog::AddMessageInternal(TSharedRef<FTokenizedMessage,1>_const&___ptr64,bool)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogHAL);
    }
    iVar6 = iVar6 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// NewPage @ 1417e6d30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBasicMessageLog::NewPage(FBasicMessageLog *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *pTVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  undefined1 local_res8 [8];
  FString local_78;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  FText local_18;
  
  local_28 = 4;
  local_68.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.TextData.Reference = (param_1->TextData).Reference;
  local_68.Pairs.ArrayNum = 0;
  local_68.Pairs.ArrayMax = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = param_1->Flags;
  if ((local_18.TextData.Reference == (ITextData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_78,L"PageTitle");
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_68,&local_78);
  *(undefined8 *)pTVar3 = 0;
  *(FScriptContainerElement **)pTVar3 = local_78.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar3->field_0x8 = local_78.Data.ArrayNum;
  *(int *)&pTVar3->field_0xc = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  *(undefined4 *)&pTVar3->field_0x10 = local_28;
  *(ulonglong *)&pTVar3->field_0x18 = CONCAT44(uStack_1c,local_20);
  *(ulonglong *)&pTVar3->field_0x18 = CONCAT44(uStack_1c,local_20);
  *(undefined4 *)&pTVar3->field_0x18 = local_20;
  *(ulonglong *)&pTVar3->field_0x18 = CONCAT44(uStack_1c,local_20);
  *(undefined8 *)&pTVar3->field_0x20 = 0;
  *(undefined4 *)&pTVar3->field_0x28 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar3->field_0x20,&local_18);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"MessageLog",L"BasicMessageLog_NewPage",L"New Page: {PageTitle}");
  pFVar5 = FTextFormat::FTextFormat(&local_38,pFVar4,Default);
  pFVar4 = FText::Format(&local_58,pFVar5,&local_68);
  FText::ToString(pFVar4);
  FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                 ,0x4b,&this->LogName,Log,L"%s");
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_68.Pairs.AllocatorInstance.Data,
             local_68.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_68.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_68.Pairs.AllocatorInstance.Data);
  }
  return;
}

// NotifyIfAnyMessages @ 1417e7970

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBasicMessageLog::NotifyIfAnyMessages
          (FBasicMessageLog *this,FText *param_1,Type param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *pTVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  undefined4 in_register_00000084;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  FString local_78;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  FText local_18;
  
  local_28 = 4;
  local_68.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.TextData.Reference = (param_1->TextData).Reference;
  local_68.Pairs.ArrayNum = 0;
  local_68.Pairs.ArrayMax = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8,CONCAT44(in_register_00000084,param_2),
               CONCAT71(in_register_00000089,param_3));
  }
  local_18.Flags = param_1->Flags;
  if ((local_18.TextData.Reference == (ITextData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_78,L"Message");
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_68,&local_78);
  *(undefined8 *)pTVar3 = 0;
  *(FScriptContainerElement **)pTVar3 = local_78.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar3->field_0x8 = local_78.Data.ArrayNum;
  *(int *)&pTVar3->field_0xc = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  *(undefined4 *)&pTVar3->field_0x10 = local_28;
  *(ulonglong *)&pTVar3->field_0x18 = CONCAT44(uStack_1c,local_20);
  *(ulonglong *)&pTVar3->field_0x18 = CONCAT44(uStack_1c,local_20);
  *(undefined4 *)&pTVar3->field_0x18 = local_20;
  *(ulonglong *)&pTVar3->field_0x18 = CONCAT44(uStack_1c,local_20);
  *(undefined8 *)&pTVar3->field_0x20 = 0;
  *(undefined4 *)&pTVar3->field_0x28 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar3->field_0x20,&local_18);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"MessageLog",L"BasicMessageLog_Notify",L"Notify: {Message}");
  pFVar5 = FTextFormat::FTextFormat(&local_38,pFVar4,Default);
  pFVar4 = FText::Format(&local_58,pFVar5,&local_68);
  FText::ToString(pFVar4);
  FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                 ,0x60,&this->LogName,Log,L"%s");
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_68.Pairs.AllocatorInstance.Data,
             local_68.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_68.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_68.Pairs.AllocatorInstance.Data);
  }
  return;
}

// NumMessages @ 1417e7bb0

int __thiscall FBasicMessageLog::NumMessages(FBasicMessageLog *this,Type param_1)

{
  return 0;
}

// Open @ 1417e8180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBasicMessageLog::Open(FBasicMessageLog *this)

{
  FText *this_00;
  FText local_18;
  
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_18,L"MessageLog",L"BasicMessageLog_Open",L"Open Log");
  FText::ToString(this_00);
  FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                 ,0x65,&this->LogName,Log,L"%s");
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetCurrentPage @ 1417fc650

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBasicMessageLog::SetCurrentPage(FBasicMessageLog *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,FFormatArgumentValue> *pTVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  undefined1 local_res8 [8];
  FString local_78;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  FText local_18;
  
  local_28 = 4;
  local_68.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.TextData.Reference = (param_1->TextData).Reference;
  local_68.Pairs.ArrayNum = 0;
  local_68.Pairs.ArrayMax = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = param_1->Flags;
  if ((local_18.TextData.Reference == (ITextData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::FString(&local_78,L"PageTitle");
  pTVar3 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_68,&local_78);
  *(undefined8 *)pTVar3 = 0;
  *(FScriptContainerElement **)pTVar3 = local_78.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar3->field_0x8 = local_78.Data.ArrayNum;
  *(int *)&pTVar3->field_0xc = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  *(undefined4 *)&pTVar3->field_0x10 = local_28;
  *(ulonglong *)&pTVar3->field_0x18 = CONCAT44(uStack_1c,local_20);
  *(ulonglong *)&pTVar3->field_0x18 = CONCAT44(uStack_1c,local_20);
  *(undefined4 *)&pTVar3->field_0x18 = local_20;
  *(ulonglong *)&pTVar3->field_0x18 = CONCAT44(uStack_1c,local_20);
  *(undefined8 *)&pTVar3->field_0x20 = 0;
  *(undefined4 *)&pTVar3->field_0x28 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar3->field_0x20,&local_18);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"MessageLog",L"BasicMessageLog_SetCurrentPageTitle",
                      L"Set Current Page: {PageTitle}");
  pFVar5 = FTextFormat::FTextFormat(&local_38,pFVar4,Default);
  pFVar4 = FText::Format(&local_58,pFVar5,&local_68);
  FText::ToString(pFVar4);
  FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                 ,0x52,&this->LogName,Log,L"%s");
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_68.Pairs.AllocatorInstance.Data,
             local_68.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_68.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_68.Pairs.AllocatorInstance.Data);
  }
  return;
}

// SetCurrentPage @ 1417fc860

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBasicMessageLog::SetCurrentPage(FBasicMessageLog *this,uint param_1)

{
  TTuple<FString,FFormatArgumentValue> *pTVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FText local_58;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_48;
  FText local_38;
  FTextFormat local_28;
  FText local_18;
  
  local_28.TextFormatData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(ulonglong)param_1;
  local_48.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Pairs.ArrayNum = 0;
  local_48.Pairs.ArrayMax = 0;
  local_18.TextData.Reference = (ITextData *)0x0;
  local_18.Flags = 0;
  local_28.TextFormatData.Object._0_4_ = 1;
  ::FString::FString((FString *)&local_58,L"PageIndex");
  pTVar1 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_48,(FString *)&local_58);
  *(undefined8 *)pTVar1 = 0;
  *(ITextData **)pTVar1 = local_58.TextData.Reference;
  local_58.TextData.Reference = (ITextData *)0x0;
  *(uint *)&pTVar1->field_0x8 = local_58.Flags;
  *(undefined4 *)&pTVar1->field_0xc = local_58._12_4_;
  local_58.Flags = 0;
  local_58._12_4_ = 0;
  *(undefined4 *)&pTVar1->field_0x10 = local_28.TextFormatData.Object._0_4_;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(undefined4 *)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController._0_4_;
  *(TReferenceControllerBase<1> **)&pTVar1->field_0x18 =
       local_28.TextFormatData.SharedReferenceCount.ReferenceController;
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  *(undefined4 *)&pTVar1->field_0x28 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&pTVar1->field_0x20,&local_18);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_58.TextData.Reference);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"MessageLog",L"BasicMessageLog_SetCurrentPageIndex",
                      L"Set Current Page: {PageIndex}");
  pFVar3 = FTextFormat::FTextFormat(&local_28,pFVar2,Default);
  pFVar2 = FText::Format(&local_58,pFVar3,&local_48);
  FText::ToString(pFVar2);
  FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\MessageLog.cpp"
                 ,0x59,&this->LogName,Log,L"%s");
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data,
             local_48.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_48.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_48.Pairs.AllocatorInstance.Data);
  }
  return;
}

