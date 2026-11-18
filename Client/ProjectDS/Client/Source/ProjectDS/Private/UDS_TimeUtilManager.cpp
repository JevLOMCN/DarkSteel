// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// StaticClass @ 14b5c2350

UClass * __cdecl UDS_TimeUtilManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TimeUtilManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TimeUtilManager",
               &Z_Registration_Info_UClass_UDS_TimeUtilManager.InnerSingleton,
               StaticRegisterNativesUDS_TimeUtilManager,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TimeUtilManager>,
               InternalVTableHelperCtorCaller<UDS_TimeUtilManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TimeUtilManager.InnerSingleton;
}

// UDS_TimeUtilManager @ 14b5c70a0

UDS_TimeUtilManager * __thiscall
UDS_TimeUtilManager::UDS_TimeUtilManager(UDS_TimeUtilManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TimeUtilManager__6B_;
  (this->NTPClient).field0_0x0.DebugPtr = (UDS_NTPClient *)0x0;
  return this;
}

// UDS_TimeUtilManager @ 14b5c70d0

UDS_TimeUtilManager * __thiscall
UDS_TimeUtilManager::UDS_TimeUtilManager(UDS_TimeUtilManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TimeUtilManager__6B_;
  (this->NTPClient).field0_0x0.DebugPtr = (UDS_NTPClient *)0x0;
  return this;
}

// ~UDS_TimeUtilManager @ 14b5c8b30

void __thiscall UDS_TimeUtilManager::~UDS_TimeUtilManager(UDS_TimeUtilManager *this)

{
  this->_padding_ = (longlong)&___7UDS_TimeUtilManager__6B_;
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cbba0

UClass * __cdecl UDS_TimeUtilManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TimeUtilManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TimeUtilManager",
               &Z_Registration_Info_UClass_UDS_TimeUtilManager.InnerSingleton,
               StaticRegisterNativesUDS_TimeUtilManager,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TimeUtilManager>,
               InternalVTableHelperCtorCaller<UDS_TimeUtilManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TimeUtilManager.InnerSingleton;
}

// StaticRegisterNativesUDS_TimeUtilManager @ 14b5cdf70

void __cdecl UDS_TimeUtilManager::StaticRegisterNativesUDS_TimeUtilManager(void)

{
  return;
}

// ConvertStringFromDateTime @ 14bb57720

FString * __cdecl
UDS_TimeUtilManager::ConvertStringFromDateTime
          (FString *__return_storage_ptr__,FDateTime *param_1,EDS_TimeExpression param_2,
          bool param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  FDS_TimeFormatArgs local_38;
  
  local_38.TotalHours = 0;
  local_38.TotalSeconds = 0;
  local_38.Year = FDateTime::GetYear(param_1);
  local_38.Month = FDateTime::GetMonth(param_1);
  local_38.Day = FDateTime::GetDay(param_1);
  lVar1 = param_1->Ticks;
  local_38.Hour = (int)(lVar1 / 36000000000) + (int)((lVar1 / 36000000000) / 0x18) * -0x18;
  lVar3 = lVar1 / 600000000;
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
  local_38.Minute = (int)lVar3 + ((int)(lVar2 >> 5) - (int)(lVar2 >> 0x3f)) * -0x3c;
  lVar3 = lVar1 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar1),8);
  lVar2 = (lVar3 >> 0x17) - (lVar3 >> 0x3f);
  lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
  local_38.Second = (int)lVar2 + ((int)(lVar3 >> 5) - (int)(lVar3 >> 0x3f)) * -0x3c;
  local_38.Millisecond = (int)(lVar1 / 10000) + (int)((lVar1 / 10000) / 1000) * -1000;
  FormatTimeExpression(__return_storage_ptr__,&local_38,param_2);
  if (param_3) {
    ExpressionRemainTime(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// ConvertStringFromDateToDate @ 14bb578c0

FString * __cdecl
UDS_TimeUtilManager::ConvertStringFromDateToDate
          (FString *__return_storage_ptr__,FDateTime *param_1,FDateTime *param_2,
          EDS_TimeExpression param_3,bool param_4)

{
  FTimespan local_res8 [4];
  
  local_res8[0].Ticks = param_2->Ticks - param_1->Ticks;
  ConvertStringFromTimespan(__return_storage_ptr__,local_res8,param_3,param_4);
  return __return_storage_ptr__;
}

// ConvertStringFromSec @ 14bb57900

FString * __cdecl
UDS_TimeUtilManager::ConvertStringFromSec
          (FString *__return_storage_ptr__,float param_1,EDS_TimeExpression param_2,bool param_3)

{
  FTimespan local_res8 [4];
  
  local_res8[0].Ticks = (long64)(param_1 * __real_4b189680);
  ConvertStringFromTimespan(__return_storage_ptr__,local_res8,param_2,param_3);
  return __return_storage_ptr__;
}

// ConvertStringFromTimespan @ 14bb57940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl
UDS_TimeUtilManager::ConvertStringFromTimespan
          (FString *__return_storage_ptr__,FTimespan *param_1,EDS_TimeExpression param_2,
          bool param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  FDS_TimeFormatArgs local_38;
  
  lVar1 = param_1->Ticks;
  local_38.Year = 0;
  local_38.Month = 0;
  dVar4 = (double)lVar1;
  local_38.Day = (int)(dVar4 * __real_3d745c7fe3bc40b0);
  local_38.TotalHours = (int)(dVar4 * ___real_3dbe8abfd59a6108);
  local_38.Hour = (int)(lVar1 / 36000000000) + (int)((lVar1 / 36000000000) / 0x18) * -0x18;
  lVar3 = lVar1 / 600000000;
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
  local_38.Minute = (int)lVar3 + ((int)(lVar2 >> 5) - (int)(lVar2 >> 0x3f)) * -0x3c;
  lVar3 = lVar1 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar1),8);
  lVar2 = (lVar3 >> 0x17) - (lVar3 >> 0x3f);
  lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
  local_38.Second = (int)lVar2 + ((int)(lVar3 >> 5) - (int)(lVar3 >> 0x3f)) * -0x3c;
  local_38.TotalSeconds = (int)(dVar4 * __real_3e7ad7f29abcaf48);
  local_38.Millisecond = (int)((lVar1 + lVar2 * -10000000) / 10000);
  FormatTimeExpression(__return_storage_ptr__,&local_38,param_2);
  if (param_3) {
    ExpressionRemainTime(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// ConvertStringFromUnixTime @ 14bb57ad0

FString * __cdecl
UDS_TimeUtilManager::ConvertStringFromUnixTime
          (FString *__return_storage_ptr__,double param_1,EDS_TimeExpression param_2,bool param_3)

{
  FDateTime *pFVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  FDateTime local_res8;
  FDateTime local_res10;
  FDS_TimeFormatArgs local_48;
  
  dVar4 = param_1 * __real_416312d000000000;
  pFVar1 = FDateTime::FDateTime(&local_res10,0x7b2,1,1,0,0,0,0);
  local_48.TotalHours = 0;
  local_48.TotalSeconds = 0;
  local_res8.Ticks = pFVar1->Ticks + (longlong)dVar4;
  local_48.Year = FDateTime::GetYear(&local_res8);
  local_48.Month = FDateTime::GetMonth(&local_res8);
  local_48.Day = FDateTime::GetDay(&local_res8);
  local_48.Hour =
       (int)(local_res8.Ticks / 36000000000) +
       (int)((local_res8.Ticks / 36000000000) / 0x18) * -0x18;
  lVar3 = local_res8.Ticks / 600000000;
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
  local_48.Minute = (int)lVar3 + ((int)(lVar2 >> 5) - (int)(lVar2 >> 0x3f)) * -0x3c;
  lVar3 = local_res8.Ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res8.Ticks),8);
  lVar2 = (lVar3 >> 0x17) - (lVar3 >> 0x3f);
  lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
  local_48.Second = (int)lVar2 + ((int)(lVar3 >> 5) - (int)(lVar3 >> 0x3f)) * -0x3c;
  local_48.Millisecond =
       (int)(local_res8.Ticks / 10000) + (int)((local_res8.Ticks / 10000) / 1000) * -1000;
  FormatTimeExpression(__return_storage_ptr__,&local_48,param_2);
  if (param_3) {
    ExpressionRemainTime(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// CreateNTPClient @ 14bb5bf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDS_NTPClient> __thiscall UDS_TimeUtilManager::CreateNTPClient(UDS_TimeUtilManager *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_NTPClient *pUVar3;
  FUObjectItem *this_00;
  longlong *plVar4;
  TObjectPtr<UDS_NTPClient>_u_0 in_RDX;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->NTPClient).field0_0x0.DebugPtr == (UDS_NTPClient *)0x0) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_NTPClient_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    pUVar3 = (UDS_NTPClient *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_NTPClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->NTPClient).field0_0x0.DebugPtr = pUVar3;
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
  }
  pUVar3 = (this->NTPClient).field0_0x0.DebugPtr;
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_NTPClient *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return (TObjectPtr<UDS_NTPClient>)in_RDX;
}

// Created @ 14bb5c9e0

void __thiscall UDS_TimeUtilManager::Created(UDS_TimeUtilManager *this)

{
  bool bVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  bVar1 = UDS_GameInstance::GetIsCCSAIMode();
  if (!bVar1) {
    bVar1 = UDS_GameInstance::GetIsDungeonPlayBuild();
    if (!bVar1) {
      UpdateNPTClient();
      return;
    }
  }
  return;
}

// ExpressionRemainTime @ 14bb61b70

void __cdecl UDS_TimeUtilManager::ExpressionRemainTime(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FDS_StringUiTableRow *pFVar2;
  FString local_18;
  
  pFVar2 = FDS_StringUiTableRow::Get(0x3f9,true);
  if (pFVar2 != (FDS_StringUiTableRow *)0x0) {
    ::FString::ConcatFF(&local_18,param_1,&pFVar2->Text);
    if (param_1 != &local_18) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_18.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FormatTimeExpression @ 14bb62de0

FString * __cdecl
UDS_TimeUtilManager::FormatTimeExpression
          (FString *__return_storage_ptr__,FDS_TimeFormatArgs *param_1,EDS_TimeExpression param_2)

{
  FScriptContainerElement *pFVar1;
  FDS_StringUiTableRow *pFVar2;
  long64 lVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar4 = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  switch(param_2) {
  case DateHourMin:
    ::FString::PrintfImpl(&local_a8,L"%04d:%02d:%02d %02d:%02d");
    FVar5.Data = local_a8.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_a8) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_a8.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = pFVar4;
    }
    break;
  case UTCDateHourMin:
    ::FString::PrintfImpl(&local_98,L"%04d:%02d:%02d %02d:%02d");
    if (__return_storage_ptr__ != &local_98) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_98.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pFVar2 = FDS_StringUiTableRow::Get(0x3fc,true);
    if (pFVar2 == (FDS_StringUiTableRow *)0x0) {
      return __return_storage_ptr__;
    }
    ::FString::ConcatFF(&local_88,&pFVar2->Text,__return_storage_ptr__);
    FVar5.Data = local_88.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_88) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_88.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = pFVar4;
    }
    break;
  case DayHourSec:
    if ((0 < param_1->Day) &&
       (pFVar2 = FDS_StringUiTableRow::Get(0x3f9,true), pFVar2 != (FDS_StringUiTableRow *)0x0)) {
      ::FString::PrintfImpl(&local_78,L"%d%s ");
      if (__return_storage_ptr__ != &local_78) {
        pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(&local_18,L"%02d:%02d:%02d");
    iVar6 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar6);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  case HourSec:
    ::FString::PrintfImpl(&local_68,L"%02d:%02d:%02d");
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_68) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = pFVar4;
    }
    break;
  case HourMin:
    ::FString::PrintfImpl(&local_58,L"%02d:%02d");
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_58) {
      pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
    break;
  case Seconds:
    ::FString::PrintfImpl(&local_38,L"%d");
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_38) {
      pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
    break;
  case SecondsText:
    ::FString::PrintfImpl(&local_48,L"%d");
    if (__return_storage_ptr__ != &local_48) {
      pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    lVar3 = 0x3fa;
    goto LAB_14bb63292;
  case SecondsDec1:
    ::FString::PrintfImpl(&local_28,L"%d");
    if (__return_storage_ptr__ != &local_28) {
      pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (param_1->Millisecond != 0) {
      ::FString::PrintfImpl(&local_18,L".%d");
      iVar6 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar6);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    lVar3 = 0x3fd;
LAB_14bb63292:
    pFVar2 = FDS_StringUiTableRow::Get(lVar3,true);
    if (pFVar2 != (FDS_StringUiTableRow *)0x0) {
      iVar6 = (pFVar2->Text).Data.ArrayNum;
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar2->Text).Data.AllocatorInstance.Data,iVar7)
      ;
    }
  default:
    goto switchD_14bb62e2c_default;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
switchD_14bb62e2c_default:
  return __return_storage_ptr__;
}

// GetCronExpressionTime @ 14bb64090

FDateTime __cdecl UDS_TimeUtilManager::GetCronExpressionTime(int param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  bool bVar3;
  FDS_TimeSchedulerTableRow *this;
  undefined4 in_register_0000000c;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  int in_EDX;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)CONCAT44(in_register_0000000c,param_1);
  this = FDS_TimeSchedulerTableRow::GetRef((longlong)in_EDX,true);
  bVar3 = FDS_TimeSchedulerTableRow::IsValid(this);
  if (bVar3) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    ::FString::ParseIntoArray(&this->RepeatTime,&local_28,L" ",true);
    FVar1.Data = local_28.AllocatorInstance.Data;
    iVar2 = local_28.ArrayNum;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = local_28.ArrayNum;
    if (local_28.ArrayNum == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_28.ArrayNum,0,&local_18,local_28.ArrayNum,&local_c);
      ConstructItems<FString,FString,int>(local_18.Data,(FString *)FVar1.Data,iVar2);
    }
    GetCronExpressionTime(pTVar4,(EDS_TimeZoneType)&local_18);
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  else {
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  }
  return (FDateTime)(long64)pTVar4;
}

// GetCronExpressionTime @ 14bb641b0

FDateTime __cdecl
UDS_TimeUtilManager::GetCronExpressionTime
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,EDS_TimeZoneType param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  EDayOfWeek EVar5;
  FDateTime FVar6;
  FDateTime *pFVar7;
  FDateTime FVar8;
  wchar_t *pwVar9;
  undefined7 in_register_00000011;
  longlong *plVar10;
  wchar_t *_Str;
  longlong lVar11;
  longlong lVar12;
  char in_R8B;
  int iVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  EDayOfWeek local_res10;
  FDateTime local_res20;
  FDS_CronField local_b8;
  FDS_CronField local_a8;
  FDS_CronField local_98;
  FDS_CronField local_88;
  FDS_CronField local_78;
  FDateTime local_68;
  FTimespan local_60;
  FTimespan local_58 [4];
  
  plVar10 = (longlong *)CONCAT71(in_register_00000011,param_2);
  lVar11 = 0;
  lVar12 = plVar10[1];
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if ((int)lVar12 == 6) {
    local_b8.bIsWildcard = true;
    local_b8.Value = 0;
    local_b8.Step = 0;
    local_a8.bIsWildcard = true;
    local_a8.Value = 0;
    local_a8.Step = 0;
    local_78.bIsWildcard = true;
    local_78.Value = 0;
    local_78.Step = 0;
    local_98.bIsWildcard = true;
    local_98.Value = 0;
    local_98.Step = 0;
    local_88.bIsWildcard = true;
    local_88.Value = 0;
    local_88.Step = 0;
    bVar2 = true;
    local_res10 = Monday;
    ParseCronField((FString *)*plVar10,&local_b8);
    if (((int)plVar10[1] < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      FVar6.Ticks = (*pcVar1)();
      return (FDateTime)FVar6.Ticks;
    }
    ParseCronField((FString *)(*plVar10 + 0x10),&local_a8);
    if (((int)plVar10[1] < 3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      FVar6.Ticks = (*pcVar1)();
      return (FDateTime)FVar6.Ticks;
    }
    ParseCronField((FString *)(*plVar10 + 0x20),&local_78);
    if (((int)plVar10[1] < 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      FVar6.Ticks = (*pcVar1)();
      return (FDateTime)FVar6.Ticks;
    }
    ParseCronField((FString *)(*plVar10 + 0x30),&local_98);
    if (((int)plVar10[1] < 5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      FVar6.Ticks = (*pcVar1)();
      return (FDateTime)FVar6.Ticks;
    }
    ParseCronField((FString *)(*plVar10 + 0x40),&local_88);
    if (((int)plVar10[1] < 6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      FVar6.Ticks = (*pcVar1)();
      return (FDateTime)FVar6.Ticks;
    }
    _Str = L"";
    if (*(int *)(*plVar10 + 0x58) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)(*plVar10 + 0x50);
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar9,L"*");
    if (iVar4 != 0) {
      bVar2 = false;
      if (((int)plVar10[1] < 6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        FVar6.Ticks = (*pcVar1)();
        return (FDateTime)FVar6.Ticks;
      }
      if (*(int *)(*plVar10 + 0x58) != 0) {
        _Str = *(wchar_t **)(*plVar10 + 0x50);
      }
      local_res10 = _wtoi(_Str);
    }
    dVar15 = GetCurrentServerTime();
    dVar15 = dVar15 * __real_416312d000000000;
    pFVar7 = FDateTime::FDateTime(&local_68,0x7b2,1,1,0,0,0,0);
    local_res20.Ticks = pFVar7->Ticks + (longlong)dVar15;
    if (in_R8B == '\x01') {
      FVar6 = FDateTime::Now();
      FVar8 = FDateTime::UtcNow();
      lVar11 = *(longlong *)FVar6.Ticks - *(longlong *)FVar8.Ticks;
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = __real_42f1ed178c6c0008;
    local_res20.Ticks = local_res20.Ticks + lVar11;
    auVar16 = roundpd(auVar16,auVar16,1);
    lVar12 = (longlong)auVar16._0_8_ + local_res20.Ticks;
    local_68.Ticks = lVar12;
    FTimespan::Assign(&local_60,0,0,0,1,0);
    local_res20.Ticks = local_res20.Ticks + local_60.Ticks;
    if (local_res20.Ticks < lVar12) {
      iVar4 = local_78.Step;
      do {
        lVar12 = local_res20.Ticks +
                 SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res20.Ticks),8);
        lVar14 = (lVar12 >> 0x17) - (lVar12 >> 0x3f);
        lVar12 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar14),8) + lVar14;
        iVar13 = (int)lVar14 + ((int)(lVar12 >> 5) - (int)(lVar12 >> 0x3f)) * -0x3c;
        if ((local_b8.bIsWildcard == false) || (local_b8.Step != 0)) {
          if (local_b8.Step < 1) {
            bVar3 = iVar13 == local_b8.Value;
          }
          else {
            bVar3 = (iVar13 - local_b8.Value) % local_b8.Step == 0;
          }
          if (bVar3) goto LAB_14bb64597;
        }
        else {
LAB_14bb64597:
          lVar12 = local_res20.Ticks / 600000000;
          lVar14 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar12),8) + lVar12;
          iVar13 = (int)lVar12 + ((int)(lVar14 >> 5) - (int)(lVar14 >> 0x3f)) * -0x3c;
          if ((local_a8.bIsWildcard == false) || (local_a8.Step != 0)) {
            if (local_a8.Step < 1) {
              bVar3 = iVar13 == local_a8.Value;
            }
            else {
              bVar3 = (iVar13 - local_a8.Value) % local_a8.Step == 0;
            }
            if (!bVar3) goto LAB_14bb646e1;
          }
          iVar13 = (int)(local_res20.Ticks / 36000000000) +
                   (int)((local_res20.Ticks / 36000000000) / 0x18) * -0x18;
          if ((local_78.bIsWildcard == false) || (iVar4 != 0)) {
            if (iVar4 < 1) {
              bVar3 = iVar13 == local_78.Value;
            }
            else {
              bVar3 = (iVar13 - local_78.Value) % iVar4 == 0;
            }
            if (!bVar3) goto LAB_14bb646e1;
          }
          iVar13 = FDateTime::GetDay(&local_res20);
          if ((local_98.bIsWildcard == false) || (local_98.Step != 0)) {
            if (local_98.Step < 1) {
              bVar3 = iVar13 == local_98.Value;
            }
            else {
              bVar3 = (iVar13 - local_98.Value) % local_98.Step == 0;
            }
            if (!bVar3) goto LAB_14bb646e1;
          }
          iVar13 = FDateTime::GetMonth(&local_res20);
          if ((local_88.bIsWildcard == false) || (local_88.Step != 0)) {
            if (local_88.Step < 1) {
              bVar3 = iVar13 == local_88.Value;
            }
            else {
              bVar3 = (iVar13 - local_88.Value) % local_88.Step == 0;
            }
            if (!bVar3) goto LAB_14bb646e1;
          }
          EVar5 = FDateTime::GetDayOfWeek(&local_res20);
          if ((bVar2) || (EVar5 == local_res10)) {
            (param_1->AllocatorInstance).Data =
                 (FScriptContainerElement *)(local_res20.Ticks - lVar11);
            break;
          }
        }
LAB_14bb646e1:
        FTimespan::Assign(local_58,0,0,0,1,0);
        local_res20.Ticks = local_res20.Ticks + local_58[0].Ticks;
      } while (local_res20.Ticks < local_68.Ticks);
    }
    DestructItems<FString,int>((FString *)*plVar10,(int)plVar10[1]);
    if ((void *)*plVar10 != (void *)0x0) {
      FMemory::Free((void *)*plVar10);
    }
  }
  else {
    DestructItems<FString,int>((FString *)*plVar10,(int)lVar12);
    if ((void *)*plVar10 != (void *)0x0) {
      FMemory::Free((void *)*plVar10);
    }
  }
  return (FDateTime)(long64)param_1;
}

// GetCurrentGMTDateTime @ 14bb64b60

FDateTime __cdecl UDS_TimeUtilManager::GetCurrentGMTDateTime(void)

{
  FDateTime *pFVar1;
  longlong *in_RCX;
  double dVar2;
  FDateTime local_res8;
  
  *in_RCX = 0;
  dVar2 = GetCurrentServerTime();
  dVar2 = (dVar2 + GMTOffset) * __real_416312d000000000;
  pFVar1 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
  *in_RCX = pFVar1->Ticks + (longlong)dVar2;
  return (FDateTime)(long64)in_RCX;
}

// GetCurrentServerDateTime @ 14bb64cf0

FDateTime __cdecl UDS_TimeUtilManager::GetCurrentServerDateTime(void)

{
  FDateTime *pFVar1;
  longlong *in_RCX;
  double dVar2;
  FDateTime local_res8;
  
  *in_RCX = 0;
  dVar2 = GetCurrentServerTime();
  dVar2 = dVar2 * __real_416312d000000000;
  pFVar1 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
  *in_RCX = pFVar1->Ticks + (longlong)dVar2;
  return (FDateTime)(long64)in_RCX;
}

// GetCurrentServerDateTimeString @ 14bb64d70

FString * __cdecl
UDS_TimeUtilManager::GetCurrentServerDateTimeString(FString *__return_storage_ptr__)

{
  FDateTime *pFVar1;
  double dVar2;
  FDateTime local_res8;
  FDateTime local_res10;
  
  dVar2 = GetCurrentServerTime();
  dVar2 = dVar2 * __real_416312d000000000;
  pFVar1 = FDateTime::FDateTime(&local_res10,0x7b2,1,1,0,0,0,0);
  local_res8.Ticks = pFVar1->Ticks + (longlong)dVar2;
  FDateTime::ToIso8601(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCurrentServerTime @ 14bb64df0

double __cdecl UDS_TimeUtilManager::GetCurrentServerTime(void)

{
  double dVar1;
  longlong lVar2;
  bool bVar3;
  FDS_TimeInfo *pFVar4;
  longlong local_res8;
  FDateTime local_res10 [3];
  FDS_TimeInfo local_38;
  
  bVar3 = UDS_GameInstance::GetIsCCSAIMode();
  if (!bVar3) {
    bVar3 = UDS_GameInstance::GetIsDungeonPlayBuild();
    if (!bVar3) {
      pFVar4 = UDS_TimeData::GetTime(&local_38,NTPTime);
      lVar2 = (pFVar4->ChronoTime)._MyDur._MyRep;
      dVar1 = pFVar4->Time;
      std::chrono::steady_clock::now();
      return ((double)(local_res8 - lVar2) * __real_3e112e0be826d695 + dVar1) - DiffServerTime;
    }
  }
  FDateTime::UtcNow();
  FDateTime::FDateTime(local_res10,0x7b2,1,1,0,0,0,0);
  return (double)(local_res8 - local_res10[0].Ticks) * __real_3e7ad7f29abcaf48 - DiffServerTime;
}

// GetDiffServerTime @ 14bb65020

double __cdecl UDS_TimeUtilManager::GetDiffServerTime(void)

{
  return DiffServerTime;
}

// GetGMTOffset @ 14bb65720

double __cdecl UDS_TimeUtilManager::GetGMTOffset(void)

{
  return GMTOffset;
}

// GetInst @ 14bb662d0

UDS_TimeUtilManager * __cdecl UDS_TimeUtilManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_TimeUtilManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_TimeUtilManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_TimeUtilManager_NoRegister();
  pUVar3 = (UDS_TimeUtilManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_TimeUtilManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_TimeUtilManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_TimeUtilManager *)0x0;
}

// GetNTPClient @ 14bb66be0

TObjectPtr<UDS_NTPClient> __thiscall UDS_TimeUtilManager::GetNTPClient(UDS_TimeUtilManager *this)

{
  UDS_NTPClient *pUVar1;
  TObjectPtr<UDS_NTPClient>_u_0 in_RDX;
  
  pUVar1 = (this->NTPClient).field0_0x0.DebugPtr;
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_NTPClient *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TObjectPtr<UDS_NTPClient>)in_RDX;
}

// GetNowGMTServerTime @ 14bb66da0

double __cdecl UDS_TimeUtilManager::GetNowGMTServerTime(void)

{
  double dVar1;
  
  dVar1 = GetCurrentServerTime();
  return dVar1 + GMTOffset;
}

// GetNowUTCTime @ 14bb66e70

double __cdecl UDS_TimeUtilManager::GetNowUTCTime(EDS_TimeType param_1)

{
  double dVar1;
  longlong lVar2;
  FDS_TimeInfo *pFVar3;
  longlong local_res10;
  FDateTime local_res18 [2];
  FDS_TimeInfo local_38;
  
  if (param_1 == LocalTime) {
    FDateTime::UtcNow();
    FDateTime::FDateTime(local_res18,0x7b2,1,1,0,0,0,0);
    return (double)(local_res10 - local_res18[0].Ticks) * __real_3e7ad7f29abcaf48;
  }
  pFVar3 = UDS_TimeData::GetTime(&local_38,param_1);
  lVar2 = (pFVar3->ChronoTime)._MyDur._MyRep;
  dVar1 = pFVar3->Time;
  std::chrono::steady_clock::now();
  return (double)(local_res10 - lVar2) * __real_3e112e0be826d695 + dVar1;
}

// GetNowUnixTimeStampDecimal @ 14bb66f50

double __cdecl UDS_TimeUtilManager::GetNowUnixTimeStampDecimal(void)

{
  longlong lVar1;
  FDateTime *pFVar2;
  double dVar3;
  FDateTime local_res8;
  
  dVar3 = GetCurrentServerTime();
  dVar3 = dVar3 * __real_416312d000000000;
  pFVar2 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
  lVar1 = pFVar2->Ticks;
  pFVar2 = FDateTime::FDateTime(&local_res8,0x7b2,1,1,0,0,0,0);
  return (double)(((longlong)dVar3 + lVar1) - pFVar2->Ticks) * __real_3e7ad7f29abcaf48;
}

// IsNTPUpdating @ 14bb6eee0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_TimeUtilManager::IsNTPUpdating(void)

{
  UDS_NTPClient *pUVar1;
  bool bVar2;
  UDS_TimeUtilManager *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UDS_NTPClient *local_res10 [3];
  
  pUVar3 = GetInst();
  if (pUVar3 == (UDS_TimeUtilManager *)0x0) {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      return true;
    }
  }
  else {
    pUVar1 = (pUVar3->NTPClient).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_NTPClient *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_NTPClient *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_NTPClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
    bVar2 = TWeakObjectPtr<UDS_NTPClient,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NTPClient,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      return (bool)pUVar4[2].field_0x20;
    }
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  return true;
}

// ParseCronField @ 14bb7c6b0

void __cdecl UDS_TimeUtilManager::ParseCronField(FString *param_1,FDS_CronField *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  _Str = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(pwVar6,L"*");
  iVar5 = 0;
  iVar4 = 0;
  if (iVar3 == 0) {
    param_2->bIsWildcard = true;
    param_2->Step = 0;
  }
  else {
    param_2->bIsWildcard = false;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    iVar3 = ::FString::ParseIntoArray(param_1,&local_18,L"/",true);
    if (iVar3 < 2) {
      if ((param_1->Data).ArrayNum != 0) {
        _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      iVar3 = _wtoi(_Str);
      param_2->Value = iVar3;
    }
    else {
      if (local_18.ArrayNum < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)(local_18.AllocatorInstance.Data + 8) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)local_18.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar6,L"*");
      if (iVar3 == 0) {
        param_2->bIsWildcard = true;
      }
      else {
        if (local_18.ArrayNum < 1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (*(int *)(local_18.AllocatorInstance.Data + 8) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)local_18.AllocatorInstance.Data;
        }
        iVar4 = _wtoi(pwVar6);
      }
      param_2->Value = iVar4;
      if (local_18.ArrayNum < 2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)(local_18.AllocatorInstance.Data + 0x18) != 0) {
        _Str = *(wchar_t **)(local_18.AllocatorInstance.Data + 0x10);
      }
      iVar5 = _wtoi(_Str);
    }
    param_2->Step = iVar5;
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// SetDiffServerTime @ 14bb8a460

void __cdecl UDS_TimeUtilManager::SetDiffServerTime(double param_1)

{
  DiffServerTime = param_1;
  return;
}

// SetGMTOffset @ 14bb8ac90

void __cdecl UDS_TimeUtilManager::SetGMTOffset(double param_1)

{
  GMTOffset = param_1;
  return;
}

// UpdateNPTClient @ 14bb96b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UDS_TimeUtilManager::UpdateNPTClient(void)

{
  TObjectPtr<UDS_NTPClient>_u_0 TVar1;
  bool bVar2;
  UDS_TimeUtilManager *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_NTPClient *pUVar6;
  FUObjectItem *this;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  TObjectPtr<UDS_NTPClient>_u_0 local_e8;
  TObjectPtr<UDS_NTPClient>_u_0 local_e0;
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  UDS_NTPClient *local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar3 = GetInst();
  if (pUVar3 == (UDS_TimeUtilManager *)0x0) {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    TVar1 = (TObjectPtr<UDS_NTPClient>_u_0)(pUVar3->NTPClient).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_NTPClient *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_NTPClient *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    local_e8.DebugPtr = (UDS_NTPClient *)0x0;
    local_e0 = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_NTPClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_e8.ObjectPtr,(FObjectPtr)&local_e0);
    bVar2 = TWeakObjectPtr<UDS_NTPClient,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NTPClient,FWeakObjectPtr> *)&local_e8.ObjectPtr,
                       (void *)0x0);
    if (bVar2) {
      if ((pUVar3->NTPClient).field0_0x0.DebugPtr == (UDS_NTPClient *)0x0) {
        pUVar4 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar4,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar5 = Z_Construct_UClass_UDS_NTPClient_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_98,pUVar5);
        local_98._8_8_ = pUVar4;
        pUVar6 = (UDS_NTPClient *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
        if (local_98._64_8_ != 0) {
          plVar9 = (longlong *)(local_98 + 0x50);
          if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
            plVar9 = (longlong *)local_98._104_8_;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_NTPClient *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        (pUVar3->NTPClient).field0_0x0.DebugPtr = pUVar6;
        this = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4));
        FUObjectItem::SetRootFlags(this,RootSet);
      }
      pUVar6 = (pUVar3->NTPClient).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar6 != (UDS_NTPClient *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_NTPClient *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
      }
      local_e0.DebugPtr = (UDS_NTPClient *)0x0;
      local_c0 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_NTPClient *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_e0.ObjectPtr,(FObjectPtr)&local_c0);
      local_e8.DebugPtr = local_e0.DebugPtr;
      bVar2 = TWeakObjectPtr<UDS_NTPClient,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NTPClient,FWeakObjectPtr> *)&local_e8.ObjectPtr,
                         (void *)0x0);
      if (bVar2) {
        if ((byte)LogTemp._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        return;
      }
    }
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_e8.ObjectPtr);
    if (pUVar4[2].field_0x20 == '\x01') {
      if (2 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
    }
    else {
      pUVar6 = (UDS_NTPClient *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_e8.ObjectPtr);
      local_d8 = (undefined1  [8])0x0;
      local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                 (FWriteAccessScope *)&local_b8);
      local_a0 = &local_d0;
      puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_d0);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UDS_TimeUtilManager::UpdateNPTClient'::`2'::<lambda_1>_>
                   ::_vftable_;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      UDS_NTPClient::UpdateNTPDataAsync
                (pUVar6,(TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_d8,false);
    }
  }
  return;
}

