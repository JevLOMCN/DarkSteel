// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 13

// FSessionService @ 148ced240

/* WARNING: Enum "Type": Some values do not have unique names */

FSessionService * __thiscall
FSessionService::FSessionService(FSessionService *this,TSharedRef<IMessageBus,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  FOutputDevice::FOutputDevice((FOutputDevice *)this);
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  (this->LogSubscribers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__ISessionService__;
  (this->LogSubscribers).ArrayNum = 0;
  (this->LogSubscribers).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LogSubscribersLock,4000);
  (this->MessageBusPtr).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->MessageBusPtr).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->IsInSendLog = false;
  return this;
}

// ~FSessionService @ 148cee9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionService::~FSessionService(FSessionService *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FOutputDeviceRedirector *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  this->_padding_ = (longlong)&_vftable__for__ISessionService__;
  bVar5 = IsRunning((FSessionService *)&this->_padding_);
  if (bVar5) {
    this_00 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::RemoveOutputDevice(this_00,(FOutputDevice *)this);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MessageEndpoint != (TSharedPtr<FMessageEndpoint,1> *)&local_18) {
      (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageEndpoint).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->MessageBusPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LogSubscribersLock);
  pFVar4 = (this->LogSubscribers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7ISessionService__6B_;
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  return;
}

// HandleMessageEndpointShutdown @ 148cf3720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionService::HandleMessageEndpointShutdown(FSessionService *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MessageEndpoint != (TSharedPtr<FMessageEndpoint,1> *)&local_18) {
    (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// HandleSessionLogSubscribeMessage @ 148cf3c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionService::HandleSessionLogSubscribeMessage
          (FSessionService *this,FSessionServiceLogSubscribe *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMessageAddress *pFVar1;
  
  lpCriticalSection = &this->LogSubscribersLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
    TArray<FMessageAddress,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FMessageAddress_const_&>
              (&this->LogSubscribers,pFVar1);
                    /* WARNING: Could not recover jumptable at 0x000148cf3c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleSessionLogUnsubscribeMessage @ 148cf3c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionService::HandleSessionLogUnsubscribeMessage
          (FSessionService *this,FSessionServiceLogUnsubscribe *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMessageAddress *pFVar1;
  
  lpCriticalSection = &this->LogSubscribersLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
    TArray<FMessageAddress,TSizedDefaultAllocator<32>_>::Remove(&this->LogSubscribers,pFVar1);
                    /* WARNING: Could not recover jumptable at 0x000148cf3cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleSessionPingMessage @ 148cf3ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionService::HandleSessionPingMessage
          (FSessionService *this,FSessionServicePing *param_1,TSharedRef<IMessageContext,1> *param_2
          )

{
  SendPong(this,param_2,&param_1->UserName);
  return;
}

// IsRunning @ 148cf4700

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSessionService::IsRunning(FSessionService *this)

{
  return (this->MessageBusPtr).Object != (IMessageBus *)0x0;
}

// SendLog @ 148cf7b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionService::SendLog(FSessionService *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName *pFVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  ForAnyElementType _Src;
  FName *pFVar5;
  UScriptStruct *pUVar6;
  LARGE_INTEGER local_res8;
  FString local_78;
  FMessageEndpoint *local_68;
  TSharedPtr<IMessageAttachment,1> local_60;
  FGuid local_50 [2];
  
  if ((this->MessageEndpoint).Object != (FMessageEndpoint *)0x0) {
    lpCriticalSection = &this->LogSubscribersLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->IsInSendLog == false) {
      this->IsInSendLog = true;
      if (0 < (this->LogSubscribers).ArrayNum) {
        local_68 = TSharedPtr<FMessageEndpoint,1>::operator->(&this->MessageEndpoint);
        QueryPerformanceCounter(&local_res8);
        FVar2 = (FName)(((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                        __real_4170000000000000) - GStartTime);
        local_res8 = (LARGE_INTEGER)FApp::GetInstanceId(local_50);
        pFVar5 = FMemory::Malloc(0x38,0);
        ::FString::FString(&local_78,param_1);
        _Src.Data = local_78.Data.AllocatorInstance.Data;
        pFVar1 = pFVar5 + 1;
        *pFVar5 = *param_3;
        pFVar1->ComparisonIndex = 0;
        pFVar1->Number = 0;
        pFVar5[2].ComparisonIndex.Value = local_78.Data.ArrayNum;
        if (local_78.Data.ArrayNum == 0) {
          pFVar5[2].Number = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_78.Data.ArrayNum
                     ,(int *)&pFVar5[2].Number);
          memcpy((void *)*pFVar1,_Src.Data,(longlong)local_78.Data.ArrayNum * 2);
        }
        FVar3 = *(FName *)local_res8;
        FVar4 = *(FName *)(local_res8.QuadPart + 8);
        *(Type *)&pFVar5[6].ComparisonIndex.Value = param_2;
        pFVar5[5] = FVar2;
        pFVar5[3] = FVar3;
        pFVar5[4] = FVar4;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_res8.QuadPart = 0x2bca2875f4373fff;
        local_60.Object = (IMessageAttachment *)0x0;
        local_60.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pUVar6 = FSessionServiceLog::StaticStruct();
        FMessageEndpoint::Send
                  (local_68,pFVar5,pUVar6,None,&local_60,&this->LogSubscribers,
                   (FTimespan *)&local_78,(FDateTime *)&local_res8.s);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
      }
      this->IsInSendLog = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SendNotification @ 148cf7db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionService::SendNotification(FSessionService *this,wchar_t *param_1,FMessageAddress *param_2)

{
  FName *pFVar1;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ForAnyElementType _Src_00;
  FGuid *pFVar7;
  FName *pFVar8;
  FName *pFVar9;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar10;
  UScriptStruct *pUVar11;
  longlong lVar12;
  LARGE_INTEGER local_res8;
  FTimespan local_res20;
  FName local_98;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_90;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_80;
  TSharedPtr<IMessageAttachment,1> local_70;
  FGuid local_60 [2];
  
  this_00 = (this->MessageEndpoint).Object;
  if (this_00 != (FMessageEndpoint *)0x0) {
    QueryPerformanceCounter(&local_res8);
    FVar2 = (FName)(((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                    __real_4170000000000000) - GStartTime);
    pFVar7 = FApp::GetInstanceId(local_60);
    pFVar8 = ::FName::FName(&local_98,"RemoteSession");
    pFVar9 = FMemory::Malloc(0x38,0);
    ::FString::FString((FString *)&local_80,param_1);
    _Src_00.Data = local_80.Array.AllocatorInstance.Data;
    pFVar1 = pFVar9 + 1;
    *pFVar9 = *pFVar8;
    pFVar1->ComparisonIndex = 0;
    pFVar1->Number = 0;
    pFVar9[2].ComparisonIndex.Value = local_80.Array.ArrayNum;
    if (local_80.Array.ArrayNum == 0) {
      pFVar9[2].Number = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_80.Array.ArrayNum,0,(ForAnyElementType *)pFVar1,local_80.Array.ArrayNum,
                 (int *)&pFVar9[2].Number);
      memcpy((void *)*pFVar1,_Src_00.Data,(longlong)local_80.Array.ArrayNum * 2);
    }
    uVar3 = pFVar7->A;
    uVar4 = pFVar7->B;
    uVar5 = pFVar7->C;
    uVar6 = pFVar7->D;
    pFVar9[5] = FVar2;
    *(undefined1 *)&pFVar9[6].ComparisonIndex.Value = 4;
    pFVar9[3].ComparisonIndex = (FNameEntryId)uVar3;
    pFVar9[3].Number = uVar4;
    pFVar9[4].ComparisonIndex = (FNameEntryId)uVar5;
    pFVar9[4].Number = uVar6;
    if (local_80.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Array.AllocatorInstance.Data);
    }
    local_res20.Ticks = 0;
    local_res8.QuadPart = 0x2bca2875f4373fff;
    local_80.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Array.ArrayNum = 0;
    local_80.Array.ArrayMax = 0;
    pTVar10 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_80,param_2);
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = (pTVar10->Array).ArrayNum;
    lVar12 = (longlong)local_90.ArrayNum;
    _Src = (pTVar10->Array).AllocatorInstance.Data;
    if (local_90.ArrayNum == 0) {
      local_90.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_90.ArrayNum,0,&local_90.AllocatorInstance,local_90.ArrayNum,
                 &local_90.ArrayMax);
      memcpy(local_90.AllocatorInstance.Data,_Src,lVar12 << 4);
    }
    local_70.Object = (IMessageAttachment *)0x0;
    local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar11 = FSessionServiceLog::StaticStruct();
    FMessageEndpoint::Send
              (this_00,pFVar9,pUVar11,None,&local_70,&local_90,&local_res20,
               (FDateTime *)&local_res8.s);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
    if (local_80.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Array.AllocatorInstance.Data);
    }
  }
  return;
}

// SendPong @ 148cf8470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionService::SendPong
          (FSessionService *this,TSharedRef<IMessageContext,1> *param_1,FString *param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  FMessageEndpoint *this_00;
  code *pcVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  FDateTime FVar10;
  undefined1 uVar11;
  int iVar12;
  undefined1 *puVar13;
  wchar_t *pwVar14;
  FString *pFVar15;
  FGuid *pFVar16;
  FMessageAddress *pFVar17;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar18;
  UScriptStruct *pUVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  bool bVar22;
  FDateTime local_res8;
  TSharedRef<IMessageContext,1> *local_res10;
  FTimespan local_res20;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FString local_a8;
  FString local_98;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_88;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<IMessageAttachment,1> local_68;
  FString local_58;
  FGuid local_48;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    return;
  }
  local_res8.Ticks = (long64)this;
  local_res10 = param_1;
  puVar13 = FMemory::Malloc(0x90,0);
  pFVar1 = (FString *)(puVar13 + 8);
  pFVar2 = (FString *)(puVar13 + 0x38);
  pFVar3 = (FString *)(puVar13 + 0x48);
  *(undefined4 *)(puVar13 + 1) = 0;
  pFVar4 = (ForAnyElementType *)(puVar13 + 0x68);
  *(undefined2 *)(puVar13 + 5) = 0;
  pFVar5 = (ForAnyElementType *)(puVar13 + 0x78);
  puVar13[7] = 0;
  *(undefined4 *)(puVar13 + 0x89) = 0;
  *(undefined2 *)(puVar13 + 0x8d) = 0;
  puVar13[0x8f] = 0;
  *puVar13 = 1;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined8 *)(puVar13 + 0x18) = 0;
  *(undefined8 *)(puVar13 + 0x20) = 0;
  *(undefined8 *)(puVar13 + 0x28) = 0;
  *(undefined8 *)(puVar13 + 0x30) = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)(puVar13 + 0x40) = 0;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)(puVar13 + 0x50) = 0;
  *(undefined8 *)(puVar13 + 0x58) = 0;
  *(undefined8 *)(puVar13 + 0x60) = 0;
  pFVar4->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)(puVar13 + 0x70) = 0;
  pFVar5->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)(puVar13 + 0x80) = 0;
  puVar13[0x88] = 1;
  pwVar14 = FWindowsPlatformProcess::UserName(false);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar12 = FGenericPlatformStricmp::Stricmp(pwVar20,pwVar14);
  if (iVar12 != 0) {
    iVar12 = (param_2->Data).ArrayNum;
    if (FApp::SessionOwner.Data.ArrayNum == iVar12) {
      if (FApp::SessionOwner.Data.ArrayNum < 2) goto LAB_148cf85a1;
      iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)FApp::SessionOwner.Data.AllocatorInstance.Data,
                          (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar22 = iVar12 == 0;
    }
    else {
      bVar22 = FApp::SessionOwner.Data.ArrayNum + iVar12 == 1;
    }
    if (!bVar22) {
      bVar22 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                         (&FApp::SessionUsers,param_2);
      uVar11 = 0;
      if (!bVar22) goto LAB_148cf85a3;
    }
  }
LAB_148cf85a1:
  uVar11 = 1;
LAB_148cf85a3:
  *puVar13 = uVar11;
  pFVar15 = FApp::GetBuildDate(&local_58);
  if (pFVar1 != pFVar15) {
    pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
    (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar13 + 0x10) = (pFVar15->Data).ArrayNum;
    *(int *)(puVar13 + 0x14) = (pFVar15->Data).ArrayMax;
    (pFVar15->Data).ArrayNum = 0;
    (pFVar15->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pwVar14 = FWindowsPlatformProcess::ComputerName();
  ::FString::operator=((FString *)(puVar13 + 0x18),pwVar14);
  pFVar16 = FApp::GetInstanceId(&local_48);
  uVar8 = *(undefined8 *)&pFVar16->C;
  *(undefined8 *)(puVar13 + 0x28) = *(undefined8 *)pFVar16;
  *(undefined8 *)(puVar13 + 0x30) = uVar8;
  FWindowsPlatformProcess::GetCurrentProcessId();
  FWindowsPlatformProcess::ComputerName();
  ::FString::PrintfImpl(&local_a8,L"%s-%i");
  if (pFVar2 != &local_a8) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    *(int *)(puVar13 + 0x40) = local_a8.Data.ArrayNum;
    *(int *)(puVar13 + 0x44) = local_a8.Data.ArrayMax;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,"Windows");
  if (pFVar3 != &local_98) {
    pFVar6 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar3->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    *(int *)(puVar13 + 0x50) = local_98.Data.ArrayNum;
    *(int *)(puVar13 + 0x54) = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  local_c8.Data = (FScriptContainerElement *)0x0;
  *(FGuid *)(puVar13 + 0x58) = FApp::SessionId;
  FVar9 = FApp::SessionName.Data.AllocatorInstance;
  lVar21 = (longlong)FApp::SessionName.Data.ArrayNum;
  local_c0 = CONCAT44(local_c0._4_4_,FApp::SessionName.Data.ArrayNum);
  if (FApp::SessionName.Data.ArrayNum == 0) {
    local_c0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FApp::SessionName.Data.ArrayNum,0,&local_c8,FApp::SessionName.Data.ArrayNum,
               (int *)((longlong)&local_c0 + 4));
    memcpy(local_c8.Data,FVar9.Data,lVar21 * 2);
  }
  if (pFVar4 != &local_c8) {
    if (pFVar4->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4->Data);
    }
    pFVar4->Data = local_c8.Data;
    *(undefined4 *)(puVar13 + 0x70) = (undefined4)local_c0;
    local_c8.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar13 + 0x74) = local_c0._4_4_;
    local_c0 = 0;
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  FVar9.Data = FApp::SessionOwner.Data.AllocatorInstance.Data;
  lVar21 = (longlong)FApp::SessionOwner.Data.ArrayNum;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = CONCAT44(local_b0._4_4_,FApp::SessionOwner.Data.ArrayNum);
  if (FApp::SessionOwner.Data.ArrayNum == 0) {
    local_b0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FApp::SessionOwner.Data.ArrayNum,0,&local_b8,FApp::SessionOwner.Data.ArrayNum,
               (int *)((longlong)&local_b0 + 4));
    memcpy(local_b8.Data,FVar9.Data,lVar21 * 2);
  }
  if (pFVar5 != &local_b8) {
    if (pFVar5->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5->Data);
    }
    pFVar5->Data = local_b8.Data;
    *(undefined4 *)(puVar13 + 0x80) = (undefined4)local_b0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar13 + 0x84) = local_b0._4_4_;
    local_b0 = 0;
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  FVar10.Ticks = local_res8.Ticks;
  puVar13[0x88] = FApp::Standalone;
  if ((((TSharedPtr<FMessageEndpoint,1> *)(local_res8.Ticks + 0x60))->Object ==
       (FMessageEndpoint *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = ((TSharedPtr<FMessageEndpoint,1> *)(FVar10.Ticks + 0x60))->Object;
  pFVar17 = (FMessageAddress *)(**(code **)((longlong)*local_res10->Object + 0x48))();
  local_res20.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_78.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Array.ArrayNum = 0;
  local_78.Array.ArrayMax = 0;
  pTVar18 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_78,pFVar17);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = (pTVar18->Array).ArrayNum;
  lVar21 = (longlong)local_88.ArrayNum;
  pFVar6 = (pTVar18->Array).AllocatorInstance.Data;
  if (local_88.ArrayNum == 0) {
    local_88.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_88.ArrayNum,0,&local_88.AllocatorInstance,local_88.ArrayNum,
               &local_88.ArrayMax);
    memcpy(local_88.AllocatorInstance.Data,pFVar6,lVar21 << 4);
  }
  local_68.Object = (IMessageAttachment *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar19 = FSessionServicePong::StaticStruct();
  FMessageEndpoint::Send(this_00,puVar13,pUVar19,None,&local_68,&local_88,&local_res20,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Array.AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 148cf8db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionService::Serialize(FSessionService *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName *pFVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  IMessageAttachment *_Src;
  FMessageEndpoint *this_00;
  FName *pFVar5;
  UScriptStruct *pUVar6;
  LARGE_INTEGER local_res8;
  FTimespan local_res10;
  TSharedPtr<IMessageAttachment,1> local_70;
  FGuid local_60 [2];
  
  if ((this->MessageEndpoint).Object != (FMessageEndpoint *)0x0) {
    lpCriticalSection = &this->LogSubscribersLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->IsInSendLog == false) {
      this->IsInSendLog = true;
      if (0 < (this->LogSubscribers).ArrayNum) {
        this_00 = TSharedPtr<FMessageEndpoint,1>::operator->(&this->MessageEndpoint);
        QueryPerformanceCounter(&local_res8);
        FVar2 = (FName)(((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                        __real_4170000000000000) - GStartTime);
        local_res8 = (LARGE_INTEGER)FApp::GetInstanceId(local_60);
        pFVar5 = FMemory::Malloc(0x38,0);
        ::FString::FString((FString *)&local_70,param_1);
        _Src = local_70.Object;
        pFVar1 = pFVar5 + 1;
        *pFVar5 = *param_3;
        pFVar1->ComparisonIndex = 0;
        pFVar1->Number = 0;
        pFVar5[2].ComparisonIndex.Value = (uint)local_70.SharedReferenceCount.ReferenceController;
        if ((uint)local_70.SharedReferenceCount.ReferenceController == 0) {
          pFVar5[2].Number = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(uint)local_70.SharedReferenceCount.ReferenceController,0,
                     (ForAnyElementType *)pFVar1,
                     (uint)local_70.SharedReferenceCount.ReferenceController,
                     (int *)&pFVar5[2].Number);
          memcpy((void *)*pFVar1,_Src,
                 (longlong)(int)(uint)local_70.SharedReferenceCount.ReferenceController * 2);
        }
        FVar3 = *(FName *)local_res8;
        FVar4 = *(FName *)(local_res8.QuadPart + 8);
        *(Type *)&pFVar5[6].ComparisonIndex.Value = param_2;
        pFVar5[5] = FVar2;
        pFVar5[3] = FVar3;
        pFVar5[4] = FVar4;
        if (local_70.Object != (IMessageAttachment *)0x0) {
          FMemory::Free(local_70.Object);
        }
        local_res10.Ticks = 0;
        local_res8.QuadPart = 0x2bca2875f4373fff;
        local_70.Object = (IMessageAttachment *)0x0;
        local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pUVar6 = FSessionServiceLog::StaticStruct();
        FMessageEndpoint::Send
                  (this_00,pFVar5,pUVar6,None,&local_70,&this->LogSubscribers,&local_res10,
                   (FDateTime *)&local_res8.s);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.SharedReferenceCount.ReferenceController);
      }
      this->IsInSendLog = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Start @ 148cf9af0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSessionService::Start(FSessionService *this)

{
  FSharedReferencer<1> *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  IMessageBus *pIVar4;
  IMessageBus IVar5;
  IMessageBus IVar6;
  code *pcVar7;
  undefined1 uVar8;
  atomic<int> aVar9;
  int iVar10;
  int iVar11;
  FTaskGraphInterface *pFVar12;
  TRawMessageHandler<FSessionServicePing,FSessionService> *pTVar13;
  UScriptStruct *this_00;
  FTopLevelAssetPath *pFVar14;
  FOutputDeviceRedirector *this_01;
  TSharedRef<FMessageEndpoint,1> *pTVar15;
  IMessageBus IVar16;
  TReferenceControllerBase<1> *pTVar17;
  bool bVar18;
  undefined4 local_res8 [2];
  FName local_res10;
  TRawPtrProxy<TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>_> local_res18;
  TRawPtrProxy<TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>_> local_res20;
  undefined1 local_158 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  ForAnyElementType FStack_138;
  int local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  bool local_118;
  FName local_114;
  Type local_10c;
  TSharedPtr<IMessageHandler,1> local_108;
  TSharedPtr<IMessageHandler,1> local_f8;
  TSharedPtr<IMessageHandler,1> local_e8;
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TRawPtrProxy<TRawMessageHandler<FSessionServicePing,FSessionService>_> local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TSharedPtr<FMessageEndpoint,1> local_b8;
  TSharedRef<FMessageEndpoint,1> local_a8;
  FMessageEndpoint *local_98;
  TReferenceControllerBase<1> *local_90;
  FDestructionSentinel local_88;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  FTopLevelAssetPath local_60 [2];
  
  pTVar17 = (this->LogSubscribersLock).CriticalSection.Opaque3[2];
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar17->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148cf9b32;
      }
      LOCK();
      aVar9 = pTVar17->SharedReferenceCount;
      bVar18 = aVar3 == aVar9;
      if (bVar18) {
        pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar18);
    pIVar4 = (this->LogSubscribersLock).CriticalSection.Opaque3[1];
    if (pIVar4 != (IMessageBus *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      ::FName::FName(&local_res10,"FSessionService");
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
      local_130 = 0;
      local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_138.Data = (FScriptContainerElement *)0x0;
      local_128.Data = (FScriptContainerElement *)0x0;
      local_120._0_4_ = 0;
      local_120._4_4_ = 0;
      local_118 = false;
      local_114 = local_res10;
      local_158[0x10] = false;
      local_158._0_8_ = pIVar4;
      local_158._8_8_ = pTVar17;
      pFVar12 = FTaskGraphInterface::Get();
      local_10c = (**(code **)((longlong)*pFVar12 + 0x10))(pFVar12,0);
      pFVar1 = &this[-1].MessageEndpoint.SharedReferenceCount;
      uStack_c0 = 0;
      local_c8.Object =
           (TRawMessageHandler<FSessionServicePing,FSessionService> *)
           HandleSessionLogSubscribeMessage;
      uStack_bc = local_a8.SharedReferenceCount.ReferenceController._4_4_;
      local_res18.Object = ::operator_new(0x20);
      if (local_res18.Object ==
          (TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService> *)0x0) {
        local_res18.Object = (TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService> *)0x0;
      }
      else {
        (local_res18.Object)->_padding_ =
             (longlong)
             &___7__TRawMessageHandler_UFSessionServiceLogSubscribe__VFSessionService____6B_;
        (local_res18.Object)->Handler = (FSessionService *)pFVar1;
        *(TRawMessageHandler<FSessionServicePing,FSessionService> **)&(local_res18.Object)->Func =
             local_c8.Object;
        *(ulonglong *)&((local_res18.Object)->Func).field_0x8 = CONCAT44(uStack_bc,uStack_c0);
        if ((pFVar1 == (FSharedReferencer<1> *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InHandler != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                                ,0x58,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          uVar8 = (*pcVar7)();
          return (bool)uVar8;
        }
      }
      TSharedPtr<IMessageHandler,1>::
      TSharedPtr<IMessageHandler,1><TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>_>
                (&local_108,&local_res18);
      if (((local_128.Data <= &local_108) &&
          (&local_108 <
           (TSharedPtr<IMessageHandler,1> *)(local_128.Data + (longlong)local_120._4_4_ * 0x10))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar7 = (code *)swi(3);
        uVar8 = (*pcVar7)();
        return (bool)uVar8;
      }
      iVar10 = (int)local_120;
      if ((int)local_120 == local_120._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_128,(int *)((longlong)&local_120 + 4));
      }
      local_120._0_4_ = iVar10 + 1;
      *(IMessageHandler **)&local_128.Data[(longlong)iVar10 * 0x10].field_0x0 = local_108.Object;
      *(TReferenceControllerBase<1> **)(local_128.Data + (longlong)iVar10 * 0x10 + 8) =
           local_108.SharedReferenceCount.ReferenceController;
      local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_108.Object = (IMessageHandler *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uStack_d0 = 0;
      local_d8 = HandleSessionLogUnsubscribeMessage;
      uStack_cc = local_a8.SharedReferenceCount.ReferenceController._4_4_;
      local_res20.Object = ::operator_new(0x20);
      if (local_res20.Object ==
          (TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService> *)0x0) {
        local_res20.Object =
             (TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService> *)0x0;
      }
      else {
        (local_res20.Object)->_padding_ =
             (longlong)
             &___7__TRawMessageHandler_UFSessionServiceLogUnsubscribe__VFSessionService____6B_;
        (local_res20.Object)->Handler = (FSessionService *)pFVar1;
        *(code **)&(local_res20.Object)->Func = local_d8;
        *(ulonglong *)&((local_res20.Object)->Func).field_0x8 = CONCAT44(uStack_cc,uStack_d0);
        if ((pFVar1 == (FSharedReferencer<1> *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InHandler != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                                ,0x58,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          uVar8 = (*pcVar7)();
          return (bool)uVar8;
        }
      }
      TSharedPtr<IMessageHandler,1>::
      TSharedPtr<IMessageHandler,1><TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>_>
                (&local_f8,&local_res20);
      if (((local_128.Data <= &local_f8) &&
          (&local_f8 <
           (TSharedPtr<IMessageHandler,1> *)(local_128.Data + (longlong)local_120._4_4_ * 0x10))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar7 = (code *)swi(3);
        uVar8 = (*pcVar7)();
        return (bool)uVar8;
      }
      iVar10 = (int)local_120;
      if ((int)local_120 == local_120._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_128,(int *)((longlong)&local_120 + 4));
      }
      local_120._0_4_ = iVar10 + 1;
      *(IMessageHandler **)&local_128.Data[(longlong)iVar10 * 0x10].field_0x0 = local_f8.Object;
      *(TReferenceControllerBase<1> **)(local_128.Data + (longlong)iVar10 * 0x10 + 8) =
           local_f8.SharedReferenceCount.ReferenceController;
      local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_f8.Object = (IMessageHandler *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uStack_d0 = 0;
      local_d8 = HandleSessionPingMessage;
      uStack_cc = local_a8.SharedReferenceCount.ReferenceController._4_4_;
      pTVar13 = ::operator_new(0x20);
      if (pTVar13 == (TRawMessageHandler<FSessionServicePing,FSessionService> *)0x0) {
        pTVar13 = (TRawMessageHandler<FSessionServicePing,FSessionService> *)0x0;
      }
      else {
        pTVar13->_padding_ =
             (longlong)&___7__TRawMessageHandler_UFSessionServicePing__VFSessionService____6B_;
        pTVar13->Handler = (FSessionService *)pFVar1;
        *(code **)&pTVar13->Func = local_d8;
        *(ulonglong *)&(pTVar13->Func).field_0x8 = CONCAT44(uStack_cc,uStack_d0);
        if ((pFVar1 == (FSharedReferencer<1> *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InHandler != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                                ,0x58,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          uVar8 = (*pcVar7)();
          return (bool)uVar8;
        }
      }
      local_c8.Object = pTVar13;
      TSharedPtr<IMessageHandler,1>::
      TSharedPtr<IMessageHandler,1><TRawMessageHandler<FSessionServicePing,FSessionService>_>
                (&local_e8,&local_c8);
      if (((local_128.Data <= &local_e8) &&
          (&local_e8 <
           (TSharedPtr<IMessageHandler,1> *)(local_128.Data + (longlong)local_120._4_4_ * 0x10))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar7 = (code *)swi(3);
        uVar8 = (*pcVar7)();
        return (bool)uVar8;
      }
      iVar10 = (int)local_120;
      if ((int)local_120 == local_120._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_128,(int *)((longlong)&local_120 + 4));
      }
      local_120._0_4_ = iVar10 + 1;
      *(IMessageHandler **)&local_128.Data[(longlong)iVar10 * 0x10].field_0x0 = local_e8.Object;
      *(TReferenceControllerBase<1> **)(local_128.Data + (longlong)iVar10 * 0x10 + 8) =
           local_e8.SharedReferenceCount.ReferenceController;
      local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_e8.Object = (IMessageHandler *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_158,&local_b8);
      if ((TSharedPtr<FMessageEndpoint,1> *)&this->MessageBusPtr != &local_b8) {
        (this->MessageBusPtr).Object = (IMessageBus *)local_b8.Object;
        local_b8.Object = (FMessageEndpoint *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&(this->MessageBusPtr).WeakReferenceCount,
                   &local_b8.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<IMessageHandler,1>,int>
                ((TSharedPtr<IMessageHandler,1> *)local_128.Data,(int)local_120);
      if ((TSharedPtr<IMessageHandler,1> *)local_128.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
        FMemory::Free(local_128.Data);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_140,(FWriteAccessScope *)&local_88);
      if ((local_130 != 0) && (FStack_138.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_138.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_138,0,0,0x10);
        local_130 = 0;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      if (FStack_138.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_138.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
      if ((TReferenceControllerBase<1> *)local_158._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = (atomic<int> *)(local_158._8_8_ + 0xc);
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(*(longlong *)local_158._8_8_ + 8))(local_158._8_8_,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      pIVar4 = (this->MessageBusPtr).Object;
      if (pIVar4 != (IMessageBus *)0x0) {
        local_res8[0] = 0x20001;
        this_00 = FSessionServicePing::StaticStruct();
        pFVar14 = UStruct::GetStructPathName((UStruct *)this_00,local_60);
        IVar16 = (IMessageBus)0x0;
        if ((*(char *)(pIVar4 + 9) != '\0') &&
           (IVar5 = pIVar4[8], IVar16 = IVar5, IVar5 != (IMessageBus)0x0)) {
          iVar10 = *(int *)((longlong)IVar5 + 8);
          do {
            IVar16 = (IMessageBus)0x0;
            if (iVar10 == 0) goto LAB_148cfa0c1;
            LOCK();
            iVar11 = *(int *)((longlong)IVar5 + 8);
            bVar18 = iVar10 == iVar11;
            if (bVar18) {
              *(int *)((longlong)IVar5 + 8) = iVar10 + 1;
              iVar11 = iVar10;
            }
            UNLOCK();
            iVar10 = iVar11;
          } while (!bVar18);
          IVar6 = pIVar4[7];
          IVar16 = IVar5;
          if (IVar6 != (IMessageBus)0x0) {
            pcVar7 = *(code **)(*(longlong *)IVar6 + 0x40);
            pTVar15 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                                ((TSharedFromThis<FMessageEndpoint,1> *)(pIVar4 + 3),&local_a8);
            local_98 = pTVar15->Object;
            local_90 = (pTVar15->SharedReferenceCount).ReferenceController;
            if (local_90 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_90->SharedReferenceCount =
                   (atomic<int>)((int)local_90->SharedReferenceCount + 1);
              UNLOCK();
            }
            (*pcVar7)(IVar6,local_70,&local_98,pFVar14,local_res8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_68);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_90);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)
                       CONCAT44(local_a8.SharedReferenceCount.ReferenceController._4_4_,
                                local_a8.SharedReferenceCount.ReferenceController._0_4_));
          }
        }
LAB_148cfa0c1:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)IVar16);
        this_01 = GetGlobalLogSingleton();
        FOutputDeviceRedirector::AddOutputDevice(this_01,(FOutputDevice *)pFVar1);
        bVar18 = true;
        goto LAB_148cf9b34;
      }
    }
  }
LAB_148cf9b32:
  bVar18 = false;
LAB_148cf9b34:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return bVar18;
}

// Stop @ 148cfa170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionService::Stop(FSessionService *this)

{
  char cVar1;
  FOutputDeviceRedirector *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  cVar1 = (**(code **)this->_padding_)();
  if (cVar1 != '\0') {
    this_00 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::RemoveOutputDevice
              (this_00,(FOutputDevice *)&this[-1].MessageEndpoint.SharedReferenceCount);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MessageBusPtr != (TWeakPtr<IMessageBus,1> *)&local_18) {
      (this->MessageBusPtr).Object = (IMessageBus *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(this->MessageBusPtr).WeakReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return;
}

