// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 19

// FBackChannelConnection @ 14e7f2cf0

FBackChannelConnection * __thiscall
FBackChannelConnection::FBackChannelConnection(FBackChannelConnection *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBackChannelConnection__6B_;
  this->IsAttemptingConnection = (FThreadSafeBool)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SocketMutex,4000);
  IBackChannelSocketConnection::FConnectionStats::FConnectionStats(&this->ConnectionStats);
  IBackChannelSocketConnection::FConnectionStats::FConnectionStats(&this->LastStats);
  this->Socket = (FSocket *)0x0;
  this->IsListener = false;
  this->TimeSinceStatsSet = 0.0;
  FConfigCacheIni::GetInt(GConfig,L"BackChannel",L"SendBufferSize",&SendBufferSize,&GEngineIni);
  FConfigCacheIni::GetInt(GConfig,L"BackChannel",L"RecvBufferSize",&ReceiveBufferSize,&GEngineIni);
  return this;
}

// ~FBackChannelConnection @ 14e7f3330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBackChannelConnection::~FBackChannelConnection(FBackChannelConnection *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FSocket *pFVar3;
  FScriptContainerElement *_Src;
  longlong *plVar4;
  FName *pFVar5;
  ISocketSubsystem *pIVar6;
  longlong lVar7;
  FName local_res8;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  this->_padding_ = (longlong)&___7FBackChannelConnection__6B_;
  lpCriticalSection = &this->SocketMutex;
  if (this->Socket != (FSocket *)0x0) {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = this->Socket;
    if (pFVar3 != (FSocket *)0x0) {
      if (4 < (byte)LogBackChannel._0_1_) {
        local_18.Data = (FScriptContainerElement *)0x0;
        _Src = (pFVar3->SocketDescription).Data.AllocatorInstance.Data;
        local_10 = (pFVar3->SocketDescription).Data.ArrayNum;
        lVar7 = (longlong)local_10;
        if (local_10 == 0) {
          local_c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_10,0,&local_18,local_10,&local_c);
          memcpy(local_18.Data,_Src,lVar7 * 2);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
        if (local_18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data);
        }
      }
      (**(code **)(this->Socket->_padding_ + 0x10))();
      pFVar5 = ::FName::FName(&local_res8,L"WINDOWS");
      pIVar6 = ISocketSubsystem::Get(pFVar5);
      (**(code **)(pIVar6->_padding_ + 0x38))(pIVar6,this->Socket);
      this->Socket = (FSocket *)0x0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7IBackChannelSocketConnection__6B_;
  return;
}

// Attach @ 14e7f47f0

bool __thiscall FBackChannelConnection::Attach(FBackChannelConnection *this,FSocket *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->SocketMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->Socket != (FSocket *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Socket == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Transport\\BackChannelConnection.cpp"
                       ,0x195,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  this->Socket = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// Close @ 14e7f48d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBackChannelConnection::Close(FBackChannelConnection *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FSocket *pFVar1;
  FScriptContainerElement *_Src;
  FName *pFVar2;
  ISocketSubsystem *pIVar3;
  longlong lVar4;
  FName local_res8;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  lpCriticalSection = &this->SocketMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = this->Socket;
    if (pFVar1 != (FSocket *)0x0) {
      if (4 < (byte)LogBackChannel._0_1_) {
        local_18.Data = (FScriptContainerElement *)0x0;
        _Src = (pFVar1->SocketDescription).Data.AllocatorInstance.Data;
        local_10 = (pFVar1->SocketDescription).Data.ArrayNum;
        lVar4 = (longlong)local_10;
        if (local_10 == 0) {
          local_c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_10,0,&local_18,local_10,&local_c);
          memcpy(local_18.Data,_Src,lVar4 * 2);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
        if (local_18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data);
        }
      }
      (**(code **)(this->Socket->_padding_ + 0x10))();
      pFVar2 = ::FName::FName(&local_res8,L"WINDOWS");
      pIVar3 = ISocketSubsystem::Get(pFVar2);
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3,this->Socket);
      this->Socket = (FSocket *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014e7f49fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CloseWithError @ 14e7f4a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBackChannelConnection::CloseWithError
          (FBackChannelConnection *this,wchar_t *param_1,FSocket *param_2)

{
  FScriptContainerElement *_Src;
  FName *pFVar1;
  ISocketSubsystem *this_00;
  FString *pFVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  FName local_res8;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  
  pFVar1 = ::FName::FName(&local_res8,L"WINDOWS");
  this_00 = ISocketSubsystem::Get(pFVar1);
  ISocketSubsystem::GetSocketError(this_00,SE_GET_LAST_ERROR_CODE);
  if ((param_2 == (FSocket *)0x0) && (param_2 = this->Socket, param_2 == (FSocket *)0x0)) {
    pFVar2 = ::FString::FString(&local_38,L"(No Socket)");
    FVar3.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_40 = (param_2->SocketDescription).Data.ArrayNum;
    lVar4 = (longlong)local_40;
    _Src = (param_2->SocketDescription).Data.AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    FVar3.Data = (FScriptContainerElement *)0x0;
    if (local_40 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar4 * 2);
      FVar3.Data = local_48.Data;
    }
  }
  if (1 < (byte)LogBackChannel._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
  }
  (**(code **)(this->_padding_ + 0x10))(this);
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

// Connect @ 14e7f4b80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FBackChannelConnection::Connect(FBackChannelConnection *this,wchar_t *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  FNameEntryId FVar5;
  ESocketErrors EVar6;
  FName *pFVar7;
  ISocketSubsystem *pIVar8;
  undefined4 extraout_var;
  FSocket *pFVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *local_res8;
  undefined4 local_res18;
  undefined4 local_res1c;
  FIPv4Address_u_0 local_res20;
  undefined2 local_res24;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  lpCriticalSection = &this->SocketMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  cVar2 = (**(code **)(this->_padding_ + 0x28))(this);
  if (cVar2 != '\0') {
    (**(code **)(this->_padding_ + 0x10))(this);
  }
  LOCK();
  this->IsAttemptingConnection = (FThreadSafeBool)0x1;
  UNLOCK();
  ::FString::FString(&local_68,param_1);
  pFVar7 = ::FName::FName(&local_58,L"WINDOWS");
  pIVar8 = ISocketSubsystem::Get(pFVar7);
  pcVar1 = *(code **)(pIVar8->_padding_ + 0x28);
  ::FString::FString(&local_78,L"FBackChannelConnection Client Socket");
  FVar5 = FNameEntryId::FromValidEName((EName)&local_res8);
  local_res18 = *(undefined4 *)CONCAT44(extraout_var,FVar5.Value);
  local_res1c = 0;
  pFVar9 = (FSocket *)(*pcVar1)(pIVar8,&local_res18,&local_78,0);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (pFVar9 == (FSocket *)0x0) goto LAB_14e7f4ec8;
  (**(code **)(pFVar9->_padding_ + 0xa0))(pFVar9,1);
  SetSocketBufferSizes(this,pFVar9,SendBufferSize,ReceiveBufferSize);
  bVar3 = FIPv4Endpoint::Parse(&local_68,(FIPv4Endpoint *)&local_res20._s_0);
  if (bVar3) {
    pcVar1 = *(code **)(pFVar9->_padding_ + 0x28);
    if ((FIPv4Endpoint::CachedSocketSubsystem == (ISocketSubsystem *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedSocketSubsystem != nullptr && \"Networking module not loaded and initialized\""
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                           ,0x72,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (**(code **)(FIPv4Endpoint::CachedSocketSubsystem->_padding_ + 0x90))
              (FIPv4Endpoint::CachedSocketSubsystem,&local_98);
    (**(code **)(*local_98 + 0x18))(local_98,local_res20.Value);
    (**(code **)(*local_98 + 0x28))(local_98,local_res24);
    cVar2 = (*pcVar1)(pFVar9,local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if (cVar2 == '\0') goto LAB_14e7f4d2f;
  }
  else {
LAB_14e7f4d2f:
    pFVar7 = ::FName::FName(&local_50,L"WINDOWS");
    pIVar8 = ISocketSubsystem::Get(pFVar7);
    EVar6 = (**(code **)(pIVar8->_padding_ + 0xb8))(pIVar8);
    if (1 < EVar6 - SE_EWOULDBLOCK) {
      if (4 < (byte)LogBackChannel._0_1_) {
        pFVar7 = ::FName::FName(&local_48,L"WINDOWS");
        pIVar8 = ISocketSubsystem::Get(pFVar7);
        ISocketSubsystem::GetSocketError(pIVar8,EVar6);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
      }
      ::FString::PrintfImpl(&local_88,L"Failed to open connection to %s.");
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar11.Data = local_88.Data.AllocatorInstance.Data;
      }
      CloseWithError(this,(wchar_t *)FVar11.Data,pFVar9);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pFVar7 = ::FName::FName(&local_40,L"WINDOWS");
      pIVar8 = ISocketSubsystem::Get(pFVar7);
      (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8,pFVar9);
      goto LAB_14e7f4ec8;
    }
  }
  if (4 < (byte)LogBackChannel._0_1_) {
    (**(code **)(pFVar9->_padding_ + 0x120))(pFVar9);
    local_a0 = (pFVar9->SocketDescription).Data.ArrayNum;
    lVar10 = (longlong)local_a0;
    local_res8 = (pFVar9->SocketDescription).Data.AllocatorInstance.Data;
    local_a8.Data = (FScriptContainerElement *)0x0;
    if (local_a0 == 0) {
      local_9c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
      memcpy(local_a8.Data,local_res8,lVar10 * 2);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  Attach(this,pFVar9);
LAB_14e7f4ec8:
  pFVar9 = this->Socket;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar9 != (FSocket *)0x0;
}

// GetConnectionStats @ 14e7f6070

FConnectionStats * __thiscall
FBackChannelConnection::GetConnectionStats(FBackChannelConnection *this)

{
  return &this->ConnectionStats;
}

// GetDescription @ 14e7f6080

FString * __thiscall
FBackChannelConnection::GetDescription(FBackChannelConnection *this,FString *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FSocket *pFVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  
  lpCriticalSection = &this->SocketMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = this->Socket;
    if (pFVar2 == (FSocket *)0x0) {
      pFVar5 = ::FString::FString(&local_28,L"No Socket");
      bVar4 = false;
      bVar3 = true;
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar2->SocketDescription).Data.ArrayNum;
      _Src = (pFVar2->SocketDescription).Data.AllocatorInstance.Data;
      local_38.Data.ArrayNum = iVar1;
      if (iVar1 == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_38,iVar1,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
      pFVar5 = &local_38;
      bVar4 = true;
      bVar3 = false;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if (bVar3) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetPacketsReceived @ 14e7f6870

uint __thiscall FBackChannelConnection::GetPacketsReceived(FBackChannelConnection *this)

{
  return (this->ConnectionStats).PacketsReceived;
}

// GetSocket @ 14e7f6a60

FSocket * __thiscall FBackChannelConnection::GetSocket(FBackChannelConnection *this)

{
  return this->Socket;
}

// IsConnected @ 14e7f6b30

bool __thiscall FBackChannelConnection::IsConnected(FBackChannelConnection *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  bool bVar2;
  
  lpCriticalSection = &this->SocketMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->Socket != (FSocket *)0x0) {
    iVar1 = (**(code **)(this->Socket->_padding_ + 0x88))();
    if (iVar1 == 1) {
      bVar2 = true;
      goto LAB_14e7f6b6e;
    }
  }
  bVar2 = false;
LAB_14e7f6b6e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// IsListening @ 14e7f6c10

bool __thiscall FBackChannelConnection::IsListening(FBackChannelConnection *this)

{
  return this->IsListener;
}

// Listen @ 14e7f6c70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FBackChannelConnection::Listen(FBackChannelConnection *this,short param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  FIPv4Address FVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  FNameEntryId FVar7;
  FName *pFVar8;
  ISocketSubsystem *pIVar9;
  undefined4 extraout_var;
  FSocket *pFVar10;
  ISocketSubsystem *this_00;
  FOutputDeviceRedirector *this_01;
  longlong lVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *local_res8;
  undefined4 local_res18;
  undefined4 local_res1c;
  code *local_res20;
  FName local_90;
  FName local_88;
  FName local_80;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  FString local_48;
  
  lpCriticalSection = &this->SocketMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar8 = ::FName::FName(&local_90,L"WINDOWS");
  pIVar9 = ISocketSubsystem::Get(pFVar8);
  pcVar1 = *(code **)(pIVar9->_padding_ + 0x28);
  ::FString::FString(&local_48,L"FBackChannelConnection Client Socket");
  FVar7 = FNameEntryId::FromValidEName((EName)&local_res8);
  local_res18 = *(undefined4 *)CONCAT44(extraout_var,FVar7.Value);
  local_res1c = 0;
  pFVar10 = (FSocket *)(*pcVar1)(pIVar9,&local_res18,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FVar2.field0_0x0 = FIPv4Address::Any.field0_0x0;
  if (pFVar10 != (FSocket *)0x0) {
    cVar3 = (**(code **)(pFVar10->_padding_ + 0xf0))(pFVar10,1);
    cVar4 = '\0';
    if (cVar3 != '\0') {
      cVar4 = (**(code **)(pFVar10->_padding_ + 0x100))(pFVar10,1);
    }
    if ((cVar4 != '\0') &&
       (cVar4 = (**(code **)(pFVar10->_padding_ + 0xa0))(pFVar10,1), cVar4 != '\0')) {
      local_res20 = *(code **)(pFVar10->_padding_ + 0x20);
      if ((FIPv4Endpoint::CachedSocketSubsystem == (ISocketSubsystem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedSocketSubsystem != nullptr && \"Networking module not loaded and initialized\""
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                             ,0x72,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
      (**(code **)(FIPv4Endpoint::CachedSocketSubsystem->_padding_ + 0x90))
                (FIPv4Endpoint::CachedSocketSubsystem,&local_68);
      (**(code **)(*local_68 + 0x18))(local_68,FVar2.field0_0x0);
      (**(code **)(*local_68 + 0x28))(local_68,param_1);
      cVar4 = (*local_res20)(pFVar10,local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      if ((cVar4 != '\0') &&
         (cVar4 = (**(code **)(pFVar10->_padding_ + 0x30))(pFVar10,8), cVar4 != '\0')) {
        if (4 < (byte)LogBackChannel._0_1_) {
          (**(code **)(pFVar10->_padding_ + 0x120))(pFVar10);
          local_70 = (pFVar10->SocketDescription).Data.ArrayNum;
          lVar11 = (longlong)local_70;
          local_res8 = (pFVar10->SocketDescription).Data.AllocatorInstance.Data;
          local_78.Data = (FScriptContainerElement *)0x0;
          if (local_70 == 0) {
            local_6c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_70,0,&local_78,local_70,&local_6c);
            memcpy(local_78.Data,local_res8,lVar11 * 2);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data);
          }
        }
        Attach(this,pFVar10);
        this->IsListener = true;
        goto LAB_14e7f6faa;
      }
    }
    pFVar8 = ::FName::FName(&local_88,L"WINDOWS");
    this_00 = ISocketSubsystem::Get(pFVar8);
    ISocketSubsystem::GetSocketError(this_00,SE_GET_LAST_ERROR_CODE);
    this_01 = GetGlobalLogSingleton();
    FOutputDevice::LogfImpl
              ((FOutputDevice *)this_01,L"Failed to create the listen socket as configured. %s");
    (**(code **)(pIVar9->_padding_ + 0x38))(pIVar9,pFVar10);
    pFVar10 = (FSocket *)0x0;
  }
  pFVar8 = ::FName::FName(&local_80,L"WINDOWS");
  pIVar9 = ISocketSubsystem::Get(pFVar8);
  ISocketSubsystem::GetSocketError(pIVar9,SE_GET_LAST_ERROR_CODE);
  if (1 < (byte)LogBackChannel._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
  }
  ::FString::PrintfImpl(&local_58,L"Failed to start listening on port %d");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar12.Data = local_58.Data.AllocatorInstance.Data;
  }
  CloseWithError(this,(wchar_t *)FVar12.Data,(FSocket *)0x0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14e7f6faa:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar10 != (FSocket *)0x0;
}

// ReceiveData @ 14e7f7830

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FBackChannelConnection::ReceiveData(FBackChannelConnection *this,void *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FSocket *pFVar2;
  int iVar3;
  double dVar4;
  int local_res8 [2];
  LARGE_INTEGER local_res20;
  
  lpCriticalSection = &this->SocketMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = this->Socket;
  iVar3 = 0;
  if (pFVar2 != (FSocket *)0x0) {
    local_res8[0] = 0;
    (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,param_1,param_2,local_res8,0);
    ResetStatsIfTime(this);
    iVar3 = local_res8[0];
    if (0 < local_res8[0]) {
      piVar1 = &(this->ConnectionStats).PacketsReceived;
      *piVar1 = *piVar1 + 1;
      piVar1 = &(this->ConnectionStats).BytesReceived;
      *piVar1 = *piVar1 + local_res8[0];
      QueryPerformanceCounter(&local_res20);
      dVar4 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      (this->ConnectionStats).LastSuccessTime = dVar4;
      (this->ConnectionStats).LastReceiveTime = dVar4;
      iVar3 = local_res8[0];
      if ((4 < (byte)LogBackChannel._0_1_) && (GBackChannelLogPackets != 0)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
        iVar3 = local_res8[0];
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar3;
}

// ResetStatsIfTime @ 14e7f8a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBackChannelConnection::ResetStatsIfTime(FBackChannelConnection *this)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FName FVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_BackChannelPacketsRecv> FVar17;
  FThreadSafeStaticStat<FStat_STAT_BackChannelBytesRecv> FVar18;
  FThreadSafeStaticStat<FStat_STAT_BackChannelPacketsSent> FVar19;
  FThreadSafeStaticStat<FStat_STAT_BackChannelBytesSent> FVar20;
  FThreadSafeStaticStat<FStat_STAT_BackChannelErrors> FVar21;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  if (__real_3ff0000000000000 <=
      ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) - this->TimeSinceStatsSet) {
    iVar2 = (this->ConnectionStats).PacketsSent;
    iVar3 = (this->LastStats).PacketsSent;
    iVar4 = (this->ConnectionStats).BytesReceived;
    iVar5 = (this->LastStats).BytesReceived;
    iVar6 = (this->ConnectionStats).PacketsReceived;
    iVar7 = (this->LastStats).PacketsReceived;
    iVar8 = (this->ConnectionStats).BytesSent;
    iVar9 = (this->LastStats).BytesSent;
    iVar10 = (this->ConnectionStats).Errors;
    iVar11 = (this->LastStats).Errors;
    FVar17 = StatPtr_STAT_BackChannelPacketsRecv;
    if (StatPtr_STAT_BackChannelPacketsRecv ==
        (FThreadSafeStaticStat<FStat_STAT_BackChannelPacketsRecv>)0x0) {
      pFVar16 = ::FName::FName((FName *)&local_res8.s,"STAT_BackChannelPacketsRecv");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_BackChannelPacketsRecv>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BackChannelPacketsRecv,*pFVar16
                          ,L"BC.PacketsRecv/s","STATGROUP_BackChannel","STATCAT_Advanced",
                          L"BackChannel",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar12 = *(FName *)FVar17;
    local_res8.s.LowPart = (DWORD)FVar12.ComparisonIndex.Value;
    local_res8.s.HighPart = FVar12.Number;
    FThreadStats::AddMessage<__int64>(FVar12,Set,(longlong)(iVar6 - iVar7),false);
    FVar18 = StatPtr_STAT_BackChannelBytesRecv;
    if (StatPtr_STAT_BackChannelBytesRecv ==
        (FThreadSafeStaticStat<FStat_STAT_BackChannelBytesRecv>)0x0) {
      pFVar16 = ::FName::FName((FName *)&local_res8.s,"STAT_BackChannelBytesRecv");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_BackChannelBytesRecv>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BackChannelBytesRecv,*pFVar16,
                          L"BC.BytesRecv/s","STATGROUP_BackChannel","STATCAT_Advanced",
                          L"BackChannel",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar12 = *(FName *)FVar18;
    local_res8.s.LowPart = (DWORD)FVar12.ComparisonIndex.Value;
    local_res8.s.HighPart = FVar12.Number;
    FThreadStats::AddMessage<__int64>(FVar12,Set,(longlong)(iVar4 - iVar5),false);
    FVar19 = StatPtr_STAT_BackChannelPacketsSent;
    if (StatPtr_STAT_BackChannelPacketsSent ==
        (FThreadSafeStaticStat<FStat_STAT_BackChannelPacketsSent>)0x0) {
      pFVar16 = ::FName::FName((FName *)&local_res8.s,"STAT_BackChannelPacketsSent");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_BackChannelPacketsSent>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BackChannelPacketsSent,*pFVar16
                          ,L"BC.PacketsSent/s","STATGROUP_BackChannel","STATCAT_Advanced",
                          L"BackChannel",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar12 = *(FName *)FVar19;
    local_res8.s.LowPart = (DWORD)FVar12.ComparisonIndex.Value;
    local_res8.s.HighPart = FVar12.Number;
    FThreadStats::AddMessage<__int64>(FVar12,Set,(longlong)(iVar2 - iVar3),false);
    FVar20 = StatPtr_STAT_BackChannelBytesSent;
    if (StatPtr_STAT_BackChannelBytesSent ==
        (FThreadSafeStaticStat<FStat_STAT_BackChannelBytesSent>)0x0) {
      pFVar16 = ::FName::FName((FName *)&local_res8.s,"STAT_BackChannelBytesSent");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_BackChannelBytesSent>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BackChannelBytesSent,*pFVar16,
                          L"BC.BytesSent/s","STATGROUP_BackChannel","STATCAT_Advanced",
                          L"BackChannel",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar12 = *(FName *)FVar20;
    local_res8.s.LowPart = (DWORD)FVar12.ComparisonIndex.Value;
    local_res8.s.HighPart = FVar12.Number;
    FThreadStats::AddMessage<__int64>(FVar12,Set,(longlong)(iVar8 - iVar9),false);
    FVar21 = StatPtr_STAT_BackChannelErrors;
    if (StatPtr_STAT_BackChannelErrors == (FThreadSafeStaticStat<FStat_STAT_BackChannelErrors>)0x0)
    {
      pFVar16 = ::FName::FName((FName *)&local_res8.s,"STAT_BackChannelErrors");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_BackChannelErrors>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BackChannelErrors,*pFVar16,
                          L"BC.Errors/s","STATGROUP_BackChannel","STATCAT_Advanced",L"BackChannel",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar12 = *(FName *)FVar21;
    local_res8.s.LowPart = (DWORD)FVar12.ComparisonIndex.Value;
    local_res8.s.HighPart = FVar12.Number;
    FThreadStats::AddMessage<__int64>(FVar12,Set,(longlong)(iVar10 - iVar11),false);
    iVar2 = (this->ConnectionStats).PacketsReceived;
    iVar3 = (this->ConnectionStats).BytesSent;
    iVar4 = (this->ConnectionStats).BytesReceived;
    iVar5 = (this->ConnectionStats).Errors;
    uVar15 = *(undefined4 *)&(this->ConnectionStats).field_0x14;
    dVar1 = (this->ConnectionStats).LastSendTime;
    (this->LastStats).PacketsSent = (this->ConnectionStats).PacketsSent;
    (this->LastStats).PacketsReceived = iVar2;
    (this->LastStats).BytesSent = iVar3;
    (this->LastStats).BytesReceived = iVar4;
    dVar13 = (this->ConnectionStats).LastReceiveTime;
    dVar14 = (this->ConnectionStats).LastErrorTime;
    (this->LastStats).Errors = iVar5;
    *(undefined4 *)&(this->LastStats).field_0x14 = uVar15;
    (this->LastStats).LastSendTime = dVar1;
    dVar1 = (this->ConnectionStats).LastSuccessTime;
    (this->LastStats).LastReceiveTime = dVar13;
    (this->LastStats).LastErrorTime = dVar14;
    (this->LastStats).LastSuccessTime = dVar1;
  }
  return;
}

// SendData @ 14e7f90f0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FBackChannelConnection::SendData(FBackChannelConnection *this,void *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FSocket *pFVar2;
  ESocketErrors EVar3;
  FName *pFVar4;
  ISocketSubsystem *pIVar5;
  int iVar6;
  double dVar7;
  int local_res8 [2];
  LARGE_INTEGER local_res20;
  void *local_28 [2];
  
  lpCriticalSection = &this->SocketMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = this->Socket;
    if (pFVar2 == (FSocket *)0x0) {
      iVar6 = -1;
    }
    else {
      local_res8[0] = 0;
      (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,param_1,param_2,local_res8);
      ResetStatsIfTime(this);
      if (local_res8[0] == -1) {
        if (GBackChannelLogErrors != 0) {
          pFVar4 = ::FName::FName((FName *)&local_res20.s,L"WINDOWS");
          pIVar5 = ISocketSubsystem::Get(pFVar4);
          EVar3 = (**(code **)(pIVar5->_padding_ + 0xb8))(pIVar5);
          pFVar4 = ::FName::FName((FName *)&local_res20.s,L"WINDOWS");
          pIVar5 = ISocketSubsystem::Get(pFVar4);
          ISocketSubsystem::GetSocketError(pIVar5,EVar3);
          if ((1 < (byte)LogBackChannel._0_1_) && (GBackChannelLogErrors != 0)) {
            (**(code **)(this->_padding_ + 0x40))(this,local_28);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
            if (local_28[0] != (void *)0x0) {
              FMemory::Free(local_28[0]);
            }
          }
        }
        piVar1 = &(this->ConnectionStats).Errors;
        *piVar1 = *piVar1 + 1;
        QueryPerformanceCounter(&local_res20);
        (this->ConnectionStats).LastErrorTime =
             (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
        iVar6 = local_res8[0];
      }
      else {
        (this->ConnectionStats).PacketsSent = (this->ConnectionStats).PacketsSent + 1;
        piVar1 = &(this->ConnectionStats).BytesSent;
        *piVar1 = *piVar1 + local_res8[0];
        QueryPerformanceCounter(&local_res20);
        dVar7 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000;
        (this->ConnectionStats).LastSuccessTime = dVar7;
        (this->ConnectionStats).LastSendTime = dVar7;
        iVar6 = local_res8[0];
        if ((4 < (byte)LogBackChannel._0_1_) && (GBackChannelLogPackets != 0)) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
          iVar6 = local_res8[0];
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetBufferSizes @ 14e7f96c0

void __thiscall
FBackChannelConnection::SetBufferSizes(FBackChannelConnection *this,int param_1,int param_2)

{
  if (SendBufferSize < param_1) {
    SendBufferSize = param_1;
  }
  if (ReceiveBufferSize < param_2) {
    ReceiveBufferSize = param_2;
  }
  if (this->Socket != (FSocket *)0x0) {
    SetSocketBufferSizes(this,this->Socket,SendBufferSize,SendBufferSize);
    return;
  }
  return;
}

// SetSocketBufferSizes @ 14e7f9850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBackChannelConnection::SetSocketBufferSizes
          (FBackChannelConnection *this,FSocket *param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int local_58;
  int local_54;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  cVar2 = '\0';
  local_54 = 0;
  local_58 = 0;
  iVar3 = param_2;
  if (0 < param_2) {
    do {
      if (cVar2 != '\0') break;
      cVar2 = (**(code **)(param_1->_padding_ + 0x108))(param_1,iVar3,&local_58);
      if (cVar2 == '\0') {
        if (iVar3 <= local_58) break;
        iVar3 = iVar3 / 2;
      }
    } while (local_58 < iVar3);
  }
  if (local_58 == param_2) {
    if ((byte)LogBackChannel._0_1_ < 5) goto LAB_14e7f9a13;
    local_48 = (param_1->SocketDescription).Data.ArrayNum;
    lVar4 = (longlong)local_48;
    pFVar1 = (param_1->SocketDescription).Data.AllocatorInstance.Data;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,pFVar1,lVar4 * 2);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
  }
  else {
    if ((byte)LogBackChannel._0_1_ < 3) goto LAB_14e7f9a13;
    local_48 = (param_1->SocketDescription).Data.ArrayNum;
    lVar4 = (longlong)local_48;
    pFVar1 = (param_1->SocketDescription).Data.AllocatorInstance.Data;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,pFVar1,lVar4 * 2);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
LAB_14e7f9a13:
  cVar2 = '\0';
  iVar3 = param_3;
  if (local_54 < param_3) {
    do {
      if (cVar2 != '\0') break;
      cVar2 = (**(code **)(param_1->_padding_ + 0x110))(param_1,iVar3,&local_54);
      if (cVar2 == '\0') {
        if (iVar3 <= local_54) break;
        iVar3 = iVar3 / 2;
      }
    } while (local_54 < iVar3);
  }
  if (local_54 == param_3) {
    if ((byte)LogBackChannel._0_1_ < 5) {
      return;
    }
    local_48 = (param_1->SocketDescription).Data.ArrayNum;
    lVar4 = (longlong)local_48;
    pFVar1 = (param_1->SocketDescription).Data.AllocatorInstance.Data;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,pFVar1,lVar4 * 2);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
  }
  else {
    if ((byte)LogBackChannel._0_1_ < 3) {
      return;
    }
    local_48 = (param_1->SocketDescription).Data.ArrayNum;
    lVar4 = (longlong)local_48;
    pFVar1 = (param_1->SocketDescription).Data.AllocatorInstance.Data;
    local_50.Data = (FScriptContainerElement *)0x0;
    if (local_48 == 0) {
      local_44[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48,0,&local_50,local_48,local_44);
      memcpy(local_50.Data,pFVar1,lVar4 * 2);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// WaitForConnection @ 14e7fa1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBackChannelConnection::WaitForConnection
          (FBackChannelConnection *this,double param_1,
          TFunction<bool___cdecl(TSharedRef<IBackChannelSocketConnection,1>)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  int iVar5;
  ESocketErrors EVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  FName *pFVar9;
  ISocketSubsystem *pIVar10;
  FSocket *pFVar11;
  FBackChannelConnection *this_00;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  undefined1 auStackY_168 [32];
  char local_128;
  char local_127 [7];
  ForAnyElementType local_120;
  int local_118;
  int local_114;
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  ForAnyElementType local_100;
  int local_f8;
  int local_f4;
  FTimespan local_f0;
  TRawPtrProxy<FBackChannelConnection> local_e8 [2];
  TSharedRef<FBackChannelConnection,1> local_d8;
  longlong *local_c8;
  TReferenceControllerBase<1> *local_c0;
  TSharedRef<IBackChannelSocketConnection,1> local_b8;
  FString local_a8;
  FName local_98;
  FName local_90;
  FName local_88 [2];
  TSharedRef<IBackChannelSocketConnection,1> local_78;
  void *local_68 [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  lpCriticalSection = &this->SocketMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->Socket == (FSocket *)0x0) {
    if (1 < (byte)LogBackChannel._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(longlong *)param_2 != 0) {
      plVar12 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar12 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    return false;
  }
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  FTimespan::Assign(&local_f0,0,0,0,(int)param_1,0);
  local_128 = '\0';
  local_127[0] = '\0';
  lVar14 = this->Socket->_padding_;
  if (this->IsListener == false) {
    iVar5 = (**(code **)(lVar14 + 0x88))();
    if (iVar5 == 2) {
      pFVar9 = ::FName::FName(&local_98,L"WINDOWS");
      pIVar10 = ISocketSubsystem::Get(pFVar9);
      EVar6 = (**(code **)(pIVar10->_padding_ + 0xb8))();
      if (EVar6 != SE_NO_ERROR) {
        pFVar9 = ::FName::FName(&local_90,L"WINDOWS");
        pIVar10 = ISocketSubsystem::Get(pFVar9);
        ISocketSubsystem::GetSocketError(pIVar10,EVar6);
        if (2 < (byte)LogBackChannel._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
        }
        goto LAB_14e7fa2ba;
      }
      local_128 = '\x01';
    }
    else {
      local_128 = '\x01';
      local_127[0] = (**(code **)(this->Socket->_padding_ + 0x80))(this->Socket,1,local_f0.Ticks);
    }
  }
  else {
    local_128 = (**(code **)(lVar14 + 0x38))(this->Socket,local_127);
    if (local_128 == '\0') {
LAB_14e7fa2ba:
      CloseWithError(this,L"Connection Check Failed",(FSocket *)0x0);
      goto LAB_14e7fa7ec;
    }
  }
  if (local_127[0] != '\0') {
    if (4 < (byte)LogBackChannel._0_1_) {
      local_120.Data = (FScriptContainerElement *)0x0;
      local_118 = (this->Socket->SocketDescription).Data.ArrayNum;
      lVar14 = (longlong)local_118;
      pFVar1 = (this->Socket->SocketDescription).Data.AllocatorInstance.Data;
      if (local_118 == 0) {
        local_114 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_118,0,&local_120,local_118,&local_114);
        memcpy(local_120.Data,pFVar1,lVar14 * 2);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
    }
    if (this->IsListener == false) {
      pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
      pTVar13 = pTVar16;
      pTVar15 = pTVar8;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar8->SharedReferenceCount;
        do {
          pTVar15 = pTVar16;
          if (aVar3 == (atomic<int>)0x0) goto LAB_14e7fa465;
          LOCK();
          aVar7 = pTVar8->SharedReferenceCount;
          bVar17 = aVar3 == aVar7;
          if (bVar17) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar7 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar7;
        } while (!bVar17);
        pTVar13 = (TReferenceControllerBase<1> *)this->_padding_;
        pTVar15 = pTVar8;
      }
LAB_14e7fa465:
      pTVar8 = (TReferenceControllerBase<1> *)&pTVar13->SharedReferenceCount;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar8 = pTVar16;
      }
      if ((pTVar8 != (TReferenceControllerBase<1> *)&this->_padding_) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar17)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar17) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar17) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8.Object = (IBackChannelSocketConnection *)pTVar13;
      local_b8.SharedReferenceCount.ReferenceController = pTVar15;
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(TSharedRef<IBackChannelSocketConnection,1>)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(TSharedRef<IBackChannelSocketConnection,1>)>
                    *)param_2,&local_b8);
      local_c0 = pTVar15;
    }
    else {
      pFVar9 = ::FName::FName(local_88,L"WINDOWS");
      pIVar10 = ISocketSubsystem::Get(pFVar9);
      (**(code **)(pIVar10->_padding_ + 0x90))(pIVar10,&local_c8);
      pFVar11 = this->Socket;
      pcVar2 = *(code **)(pFVar11->_padding_ + 0x48);
      ::FString::FString(&local_a8,L"RemoteConnection");
      pFVar11 = (FSocket *)(*pcVar2)(pFVar11,local_c8,&local_a8);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (pFVar11 != (FSocket *)0x0) {
        (**(code **)(pFVar11->_padding_ + 0xa0))(pFVar11,1);
        SetSocketBufferSizes(this,pFVar11,SendBufferSize,ReceiveBufferSize);
        this_00 = ::operator_new(0xd0);
        if (this_00 == (FBackChannelConnection *)0x0) {
          local_e8[0].Object = (FBackChannelConnection *)0x0;
        }
        else {
          local_e8[0].Object = FBackChannelConnection(this_00);
          if ((((local_e8[0].Object != (FBackChannelConnection *)0x0) &&
               ((local_e8[0].Object)->_padding_ != 0)) && ((local_e8[0].Object)->_padding_ != 0)) &&
             ((0 < *(int *)((local_e8[0].Object)->_padding_ + 8) &&
              (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!InObject || !InObject->DoesSharedInstanceExist()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x7a5,L"Trying to share an already-shared object"), bVar17)))) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        TSharedRef<FBackChannelConnection,1>::
        TSharedRef<FBackChannelConnection,1><FBackChannelConnection>(&local_d8,local_e8);
        Attach(local_d8.Object,pFVar11);
        local_78.Object = (IBackChannelSocketConnection *)local_d8.Object;
        local_78.SharedReferenceCount.ReferenceController =
             local_d8.SharedReferenceCount.ReferenceController;
        if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar17 = UE::Core::Private::Function::
                 TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(TSharedRef<IBackChannelSocketConnection,1>)>
                 ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(TSharedRef<IBackChannelSocketConnection,1>)>
                               *)param_2,&local_78);
        if (bVar17) {
          if (4 < (byte)LogBackChannel._0_1_) {
            local_100.Data = (FScriptContainerElement *)0x0;
            local_f8 = (this->Socket->SocketDescription).Data.ArrayNum;
            lVar14 = (longlong)local_f8;
            pFVar1 = (this->Socket->SocketDescription).Data.AllocatorInstance.Data;
            if (local_f8 == 0) {
              local_f4 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_f8,0,&local_100,local_f8,&local_f4);
              memcpy(local_100.Data,pFVar1,lVar14 * 2);
            }
            (**(code **)(*local_c8 + 0x80))(local_c8,local_68,1);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
            if (local_68[0] != (void *)0x0) {
              FMemory::Free(local_68[0]);
            }
            if (local_100.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data);
            }
          }
        }
        else {
          if (2 < (byte)LogBackChannel._0_1_) {
            local_110.Data = (FScriptContainerElement *)0x0;
            local_108 = (this->Socket->SocketDescription).Data.ArrayNum;
            lVar14 = (longlong)local_108;
            pFVar1 = (this->Socket->SocketDescription).Data.AllocatorInstance.Data;
            if (local_108 == 0) {
              local_104 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_108,0,&local_110,local_108,&local_104);
              memcpy(local_110.Data,pFVar1,lVar14 * 2);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
            if (local_110.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data);
            }
          }
          (**(code **)((local_d8.Object)->_padding_ + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  }
LAB_14e7fa7ec:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)param_2 != 0) {
    plVar12 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return (bool)local_128;
}

