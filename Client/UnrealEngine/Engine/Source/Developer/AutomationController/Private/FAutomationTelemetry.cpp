// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 6

// GetStorageFilePath @ 148c601e0

FString * __cdecl
FAutomationTelemetry::GetStorageFilePath(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FString *pFVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_38,"csv");
  iVar1 = (param_1->Data).ArrayNum;
  bVar2 = 1 < iVar1;
  if (bVar2) {
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = iVar1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    pFVar3 = &local_48;
  }
  else {
    pFVar3 = ::FString::FString(&local_18,L"general");
  }
  pFVar3 = ::operator/(&local_28,&TelemetryDirectory,pFVar3);
  FPaths::SetExtension(__return_storage_ptr__,pFVar3,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HandleAddTelemetry @ 148c609c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FAutomationTelemetry::HandleAddTelemetry(FAutomationWorkerTelemetryData *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FString *pFVar4;
  IFileManager *pIVar5;
  size_t sVar6;
  ForAnyElementType FVar7;
  int iVar8;
  undefined4 local_res8 [4];
  FString local_98;
  FScriptContainerElement *local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  iVar8 = 0;
  local_res8[0] = 0;
  if (!bIsInitialized) {
    Initialize();
  }
  if (5 < (byte)LogAutomationTelemetry._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTelemetry);
  }
  ::FString::FString(&local_68,"csv");
  iVar1 = (param_1->Storage).Data.ArrayNum;
  bVar3 = 1 < iVar1;
  if (bVar3) {
    pFVar2 = (param_1->Storage).Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = iVar1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_98,iVar1,&local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
    pFVar4 = &local_98;
  }
  else {
    pFVar4 = ::FString::FString((FString *)&local_48,L"general");
  }
  pFVar4 = ::operator/(&local_58,&TelemetryDirectory,pFVar4);
  FPaths::SetExtension(&local_78,pFVar4,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) && ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.DataPtr);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar3 = InitiateStorage(&local_78);
  if (!bVar3) {
    if (1 < (byte)LogAutomationTelemetry._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTelemetry);
    }
    goto LAB_148c60d56;
  }
  pFVar2 = (param_1->Items).AllocatorInstance.Data;
  iVar1 = (param_1->Items).ArrayNum;
  local_88 = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if ((param_1->Items).ArrayNum != iVar1) {
    `TCheckedPointerIterator<FAutomationWorkerTelemetryItem_const_,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_res8);
  }
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x38) {
                    /* WARNING: Could not recover jumptable at 0x000148c60bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + switchD_148c60bae::switchdataD_148c60d98))();
    return;
  }
  pIVar5 = IFileManager::Get();
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar7.Data = local_78.Data.AllocatorInstance.Data;
  }
  if ((int)local_80 == 0) {
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
LAB_148c60ced:
    sVar6 = wcslen((wchar_t *)local_98.Data.AllocatorInstance.Data);
    iVar8 = (int)sVar6;
  }
  else {
    local_98.Data.AllocatorInstance.Data = local_88;
    if (local_88 != (FScriptContainerElement *)0x0) goto LAB_148c60ced;
  }
  local_48._12_4_ = local_98.Data.ArrayMax;
  local_48.Size = iVar8;
  local_48.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_98.Data.ArrayNum = iVar8;
  bVar3 = FFileHelper::SaveStringToFile(&local_48,(wchar_t *)FVar7.Data,AutoDetect,pIVar5,8);
  if ((!bVar3) && (1 < (byte)LogAutomationTelemetry._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTelemetry);
  }
  if (local_88 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88);
  }
LAB_148c60d56:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// Initialize @ 148c644d0

void __cdecl FAutomationTelemetry::Initialize(void)

{
  UObject *pUVar1;
  void *_Src;
  bool bVar2;
  UClass *this;
  wchar_t *pwVar3;
  FString *pFVar4;
  int iVar5;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this = UAutomationControllerSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  bResetTelemetryStorageOnNewSession = (bool)pUVar1[2].field_0x20;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pwVar3 = FCommandLine::Get();
  FParse::Value(pwVar3,L"TelemetryDirectory=",&local_38,false,(wchar_t **)0x0);
  if ((local_38.Data.ArrayNum < 2) && (&local_38 != (FString *)&pUVar1[2].field_0x10)) {
    iVar5 = *(int *)&pUVar1[2].field_0x18;
    _Src = *(void **)&pUVar1[2].field_0x10;
    local_38.Data.ArrayNum = iVar5;
    if ((iVar5 == 0) && (local_38.Data.ArrayMax == 0)) {
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,local_38.Data.ArrayMax,(ForAnyElementType *)&local_38,iVar5,
                 &local_38.Data.ArrayMax);
      if (iVar5 != 0) {
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar5 * 2);
      }
    }
  }
  if (local_38.Data.ArrayNum < 2) {
    pFVar4 = FPaths::AutomationDir(&local_18);
    ::FString::ConcatFC(&local_28,pFVar4,L"Telemetry");
    if (TelemetryDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TelemetryDirectory.Data.AllocatorInstance.Data);
    }
    TelemetryDirectory.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    TelemetryDirectory.Data.ArrayNum = local_28.Data.ArrayNum;
    TelemetryDirectory.Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar2 = FPaths::IsRelative(&local_38);
    if (bVar2) {
      pFVar4 = FPaths::AutomationDir(&local_18);
      ::FString::ConcatFF(&local_28,pFVar4,&local_38);
      if (TelemetryDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TelemetryDirectory.Data.AllocatorInstance.Data);
      }
      TelemetryDirectory.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      TelemetryDirectory.Data.ArrayNum = local_28.Data.ArrayNum;
      TelemetryDirectory.Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar5 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange
                (&TelemetryDirectory,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    }
  }
  bIsInitialized = true;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// InitiateStorage @ 148c64710

bool __cdecl FAutomationTelemetry::InitiateStorage(FString *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (!bResetTelemetryStorageOnNewSession) {
    bVar1 = FPaths::FileExists(param_1);
    if (bVar1) {
      return true;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148c6476d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + DAT_148c648d8))();
  return (bool)uVar2;
}

// IsInitialized @ 148c64940

bool __cdecl FAutomationTelemetry::IsInitialized(void)

{
  return bIsInitialized;
}

// ToColumnValue @ 148c6e700

FString * __cdecl
FAutomationTelemetry::ToColumnValue
          (FString *__return_storage_ptr__,uchar param_1,FAutomationWorkerTelemetryData *param_2,
          FAutomationWorkerTelemetryItem *param_3)

{
  FDateTime this;
  
  switch(param_1) {
  case '\0':
    ::FString::FString(__return_storage_ptr__,&param_2->Configuration);
    return __return_storage_ptr__;
  case '\x01':
    ::FString::FString(__return_storage_ptr__,&param_2->Platform);
    return __return_storage_ptr__;
  case '\x02':
    this = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this.Ticks,__return_storage_ptr__);
    return __return_storage_ptr__;
  case '\x03':
    ::FString::FString(__return_storage_ptr__,&param_2->TestName);
    return __return_storage_ptr__;
  case '\x04':
    ::FString::FString(__return_storage_ptr__,&param_3->Context);
    return __return_storage_ptr__;
  case '\x05':
    ::FString::FString(__return_storage_ptr__,&param_3->DataPoint);
    return __return_storage_ptr__;
  case '\x06':
    ::FString::SanitizeFloat(__return_storage_ptr__,param_3->Measurement,1);
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"NULL");
    return __return_storage_ptr__;
  }
}

