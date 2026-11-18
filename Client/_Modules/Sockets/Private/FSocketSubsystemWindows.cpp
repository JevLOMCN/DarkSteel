// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 12

// ~FSocketSubsystemWindows @ 14310ba50

void __thiscall FSocketSubsystemWindows::~FSocketSubsystemWindows(FSocketSubsystemWindows *this)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7ISocketSubsystem__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x00014310ba93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  return;
}

// Create @ 14310d850

FSocketSubsystemWindows * __cdecl FSocketSubsystemWindows::Create(void)

{
  FSocketSubsystemWindows *pFVar1;
  
  if (SocketSingleton == (FSocketSubsystemWindows *)0x0) {
    pFVar1 = ::operator_new(0x88);
    if (pFVar1 != (FSocketSubsystemWindows *)0x0) {
      pFVar1->_padding_ = (longlong)&___7ISocketSubsystem__6B_;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar1->_padding_,4000);
      pFVar1->_padding_ = 0;
      pFVar1->_padding_ = 0;
      pFVar1->_padding_ = 0;
      *(undefined4 *)&pFVar1->_padding_ = 0;
      *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
      *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
      *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
      pFVar1->_padding_ = 0;
      *(undefined4 *)&pFVar1->_padding_ = 0;
      pFVar1->_padding_ = (longlong)&___7FSocketSubsystemWindows__6B_;
      pFVar1->bTriedToInit = false;
      SocketSingleton = pFVar1;
      return pFVar1;
    }
    SocketSingleton = (FSocketSubsystemWindows *)0x0;
  }
  return SocketSingleton;
}

// CreateSocket @ 14310de30

/* WARNING: Enum "Type": Some values do not have unique names */

FSocket * __thiscall
FSocketSubsystemWindows::CreateSocket
          (FSocketSubsystemWindows *this,FName *param_1,FString *param_2,FName *param_3)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FNameEntryId FVar6;
  int af;
  FName *pFVar7;
  undefined4 extraout_var;
  SOCKET SVar8;
  FSocketBSD *this_00;
  int protocol;
  bool bVar9;
  FNameEntryId local_res20;
  uint uStackX_24;
  FName local_48;
  FString local_40;
  
  local_48 = *param_3;
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
  FVar2.Number = uStackX_24;
  FVar2.ComparisonIndex.Value = local_res20.Value;
  if ((*param_3 != FVar2) &&
     (FLazyName::Resolve(&FNetworkProtocolTypes::IPv6), FVar3.Number = uStackX_24,
     FVar3.ComparisonIndex.Value = local_res20.Value, *param_3 != FVar3)) {
    pFVar7 = (FName *)(**(code **)(this->_padding_ + 0x120))(this,&local_res20);
    local_48 = *pFVar7;
    FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
    FVar4.Number = uStackX_24;
    FVar4.ComparisonIndex.Value = local_res20.Value;
    if ((local_48 != FVar4) &&
       (FLazyName::Resolve(&FNetworkProtocolTypes::IPv6), FVar5.Number = uStackX_24,
       FVar5.ComparisonIndex.Value = local_res20.Value, local_48 != FVar5)) {
      if (2 < (byte)LogSockets._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
      }
      goto LAB_14310df26;
    }
  }
  uVar1 = (param_1->ComparisonIndex).Value;
  FVar6 = FNameEntryId::FromValidENamePostInit((EName)&local_res20);
  local_res20.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  protocol = 6;
  if (uVar1 == local_res20.Value) {
    protocol = 0x11;
  }
  this_00 = (FSocketBSD *)0x0;
  bVar9 = uVar1 == local_res20.Value;
  af = (**(code **)(this->_padding_ + 0x128))(this,&local_48);
  SVar8 = socket(af,bVar9 + 1,protocol);
  if (((SVar8 == 0xffffffffffffffff) ||
      (this_00 = (FSocketBSD *)
                 (**(code **)(this->_padding_ + 0x160))
                           (this,SVar8,(uVar1 != local_res20.Value) + '\x01',param_2,&local_48),
      this_00 == (FSocketBSD *)0x0)) && (2 < (byte)LogSockets._0_1_)) {
    ::FName::ToString(param_1,&local_40);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if (this_00 != (FSocketBSD *)0x0) {
    SetHandleInformation((HANDLE)this_00->Socket,1,0);
    FSocketBSD::SetIPv6Only(this_00,false);
    return (FSocket *)this_00;
  }
LAB_14310df26:
  if (2 < (byte)LogSockets._0_1_) {
    ::FName::ToString(param_1,&local_40);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return (FSocket *)0x0;
}

// Destroy @ 14310e570

void __cdecl FSocketSubsystemWindows::Destroy(void)

{
  if (SocketSingleton != (FSocketSubsystemWindows *)0x0) {
    (**(code **)(SocketSingleton->_padding_ + 0x10))();
    if (SocketSingleton != (FSocketSubsystemWindows *)0x0) {
      (**(code **)SocketSingleton->_padding_)(SocketSingleton,1);
    }
    SocketSingleton = (FSocketSubsystemWindows *)0x0;
  }
  return;
}

// GetLastErrorCode @ 143111020

ESocketErrors __thiscall FSocketSubsystemWindows::GetLastErrorCode(FSocketSubsystemWindows *this)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ESocketErrors EVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0xc0);
  iVar1 = WSAGetLastError();
                    /* WARNING: Could not recover jumptable at 0x00014311104f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar2 = (*UNRECOVERED_JUMPTABLE)(this,iVar1);
  return EVar2;
}

// GetLocalAdapterAddresses @ 143111060

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSocketSubsystemWindows::GetLocalAdapterAddresses
          (FSocketSubsystemWindows *this,
          TArray<TSharedPtr<FInternetAddr,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  sockaddr_storage *psVar1;
  code *pcVar2;
  void *pvVar3;
  TConsoleVariableData<int> *pTVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  u_long uVar9;
  longlong lVar10;
  void *pvVar11;
  FInternetAddrBSD *this_00;
  FInternetAddrBSD *pFVar12;
  byte bVar13;
  FScriptContainerElement *pFVar14;
  uint local_res18 [2];
  undefined8 local_res20;
  TRawPtrProxy<FInternetAddrBSD> local_78 [2];
  FInternetAddrBSD *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TSharedRef<FInternetAddrBSD,1> local_58;
  void *local_48 [2];
  
  pTVar4 = CVarDisableIPv6.Ref;
  local_res18[0] = 0;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar10 = 4;
    if (!bVar6) goto LAB_14311109e;
  }
  lVar10 = 0;
LAB_14311109e:
  bVar13 = -(*(int *)((longlong)pTVar4->ShadowedValue + lVar10) != 0) & 2;
  iVar8 = GetAdaptersAddresses(bVar13,0x3e,0,0,local_res18);
  if (iVar8 != 0x6f) {
    return false;
  }
  pvVar11 = FMemory::Malloc((ulonglong)local_res18[0],0);
  iVar8 = GetAdaptersAddresses(bVar13,0x3e,0,pvVar11,local_res18);
  pvVar3 = pvVar11;
  if (iVar8 == 0) {
    for (; pvVar3 != (void *)0x0; pvVar3 = *(void **)((longlong)pvVar3 + 8)) {
      if (((*(int *)((longlong)pvVar3 + 100) == 6) || (*(int *)((longlong)pvVar3 + 100) == 0x47)) &&
         (*(int *)((longlong)pvVar3 + 0x68) == 1)) {
        for (lVar10 = *(longlong *)((longlong)pvVar3 + 0x18); lVar10 != 0;
            lVar10 = *(longlong *)(lVar10 + 8)) {
          pFVar12 = (FInternetAddrBSD *)0x0;
          if ((*(byte *)(lVar10 + 4) & 1) != 0) {
            psVar1 = *(sockaddr_storage **)(lVar10 + 0x10);
            this_00 = ::operator_new(0x90);
            if (this_00 != (FInternetAddrBSD *)0x0) {
              local_res20 = 0;
              pFVar12 = FInternetAddrBSD::FInternetAddrBSD
                                  (this_00,(FSocketSubsystemBSD *)this,(FName)0x0);
            }
            local_78[0].Object = pFVar12;
            TSharedRef<FInternetAddrBSD,1>::TSharedRef<FInternetAddrBSD,1><FInternetAddrBSD>
                      (&local_58,local_78);
            pFVar12 = local_58.Object;
            FInternetAddrBSD::SetIp(local_58.Object,psVar1);
            pcVar2 = *(code **)(pFVar12->_padding_ + 0x110);
            if (psVar1->ss_family == 2) {
              uVar9 = *(u_long *)((longlong)pvVar3 + 4);
            }
            else {
              uVar9 = *(u_long *)((longlong)pvVar3 + 0x6c);
            }
            uVar9 = ntohl(uVar9);
            (*pcVar2)(pFVar12,uVar9);
            if (5 < (byte)LogSockets._0_1_) {
              (**(code **)(pFVar12->_padding_ + 0x80))(pFVar12,local_48,0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
              if (local_48[0] != (void *)0x0) {
                FMemory::Free(local_48[0]);
              }
            }
            FVar5.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
            local_68 = local_58.Object;
            pTStack_60 = local_58.SharedReferenceCount.ReferenceController;
            if (local_58.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            pFVar14 = (param_1->AllocatorInstance).Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 < pFVar14 + (longlong)param_1->ArrayMax * 0x10
                )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar6)) {
              pcVar2 = (code *)swi(3);
              uVar7 = (*pcVar2)();
              return (bool)uVar7;
            }
            iVar8 = param_1->ArrayNum;
            if (iVar8 == param_1->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar8 + 1;
            pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
            *(FInternetAddrBSD **)pFVar14 = local_68;
            *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTStack_60;
            pTStack_60 = (TReferenceControllerBase<1> *)0x0;
            local_68 = (FInternetAddrBSD *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar5.ReferenceController);
          }
        }
      }
    }
    FMemory::Free(pvVar11);
    bVar6 = true;
  }
  else {
    FMemory::Free(pvVar11);
    bVar6 = false;
  }
  return bVar6;
}

// GetSocketAPIName @ 143113330

wchar_t * __thiscall FSocketSubsystemWindows::GetSocketAPIName(FSocketSubsystemWindows *this)

{
  return L"WinSock";
}

// HasNetworkDevice @ 1431139e0

bool __thiscall FSocketSubsystemWindows::HasNetworkDevice(FSocketSubsystemWindows *this)

{
  return true;
}

// Init @ 143113c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSocketSubsystemWindows::Init(FSocketSubsystemWindows *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ESocketErrors EVar3;
  undefined1 auStack_238 [32];
  uint local_218;
  uint local_210;
  uint local_208;
  uint local_200;
  uint local_1f8;
  FString local_1e8;
  WSADATA local_1d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  if (this->bTriedToInit == false) {
    this->bTriedToInit = true;
    iVar2 = WSAStartup(0x101,&local_1d8);
    if (iVar2 == 0) {
      if (4 < (byte)LogInit._0_1_) {
        (**(code **)(this->_padding_ + 0xb0))(this);
        local_1f8 = (uint)local_1d8.iMaxUdpDg;
        local_200 = (uint)local_1d8.iMaxSockets;
        local_218 = (uint)(byte)local_1d8.wVersion;
        local_210 = (uint)(local_1d8.wHighVersion >> 8);
        local_208 = local_1d8.wHighVersion & 0xff;
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        return true;
      }
      return true;
    }
    EVar3 = (**(code **)(this->_padding_ + 0xc0))(this,iVar2);
    ISocketSubsystem::GetSocketError((ISocketSubsystem *)this,EVar3);
    ::FString::PrintfImpl(&local_1e8,L"WSAStartup failed (%s)");
    if (param_1 != &local_1e8) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_1e8.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_1e8.Data.ArrayMax;
      local_1e8.Data.ArrayNum = 0;
      local_1e8.Data.ArrayMax = 0;
      local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// InternalBSDSocketFactory @ 143113f70

FSocketBSD * __thiscall
FSocketSubsystemWindows::InternalBSDSocketFactory
          (FSocketSubsystemWindows *this,ulong64 param_1,ESocketType param_2,FString *param_3,
          FName *param_4)

{
  FSocketBSD *pFVar1;
  FSocketBSD *pFVar2;
  
  pFVar1 = ::operator_new(0x60);
  pFVar2 = (FSocketBSD *)0x0;
  if (pFVar1 != (FSocketBSD *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(ESocketType *)&pFVar1->_padding_ = param_2;
    pFVar1->_padding_ = (longlong)&___7FSocket__6B_;
    ::FString::FString((FString *)&pFVar1->_padding_,param_3);
    pFVar1->_padding_ = (longlong)*param_4;
    pFVar1->_padding_ = (longlong)&___7FSocketWindows__6B_;
    pFVar1->LastActivityTime = (atomic<double>)0x0;
    pFVar1->Socket = param_1;
    pFVar1->SendFlags = 0;
    pFVar1->SocketSubsystem = (ISocketSubsystem *)this;
    pFVar1[1]._padding_ = 0;
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// Shutdown @ 143117c00

int __stdcall FSocketSubsystemWindows::Shutdown(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143117c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSACleanup();
  return iVar1;
}

// TranslateErrorCode @ 143118550

/* WARNING: Enum "Type": Some values do not have unique names */

ESocketErrors __thiscall
FSocketSubsystemWindows::TranslateErrorCode(FSocketSubsystemWindows *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ESocketErrors EVar3;
  
  if (param_1 == -1) {
                    /* WARNING: Could not recover jumptable at 0x000143118560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar3 = (**(code **)(this->_padding_ + 0xb8))();
    return EVar3;
  }
  if (param_1 < 0x2715) {
    if (param_1 == 0x2714) {
      return SE_EINTR;
    }
    if (param_1 == 0) {
      return SE_NO_ERROR;
    }
    if (param_1 == 6) {
switchD_1431185d4_caseD_2746:
      return SE_ECONNRESET;
    }
  }
  else if (param_1 < 0x2afa) {
    if (param_1 == 0x2af9) {
      return SE_HOST_NOT_FOUND;
    }
    switch(param_1) {
    case 0x2719:
      return SE_EBADF;
    case 0x271d:
      return SE_EACCES;
    case 0x271e:
      return SE_EFAULT;
    case 0x2726:
      return SE_EINVAL;
    case 0x2728:
      return SE_EMFILE;
    case 0x2733:
      return SE_EWOULDBLOCK;
    case 0x2734:
      return SE_EINPROGRESS;
    case 0x2735:
      return SE_EALREADY;
    case 0x2736:
      return SE_ENOTSOCK;
    case 0x2737:
      return SE_EDESTADDRREQ;
    case 0x2738:
      return SE_EMSGSIZE;
    case 0x2739:
      return SE_EPROTOTYPE;
    case 0x273a:
      return SE_ENOPROTOOPT;
    case 0x273b:
      return SE_EPROTONOSUPPORT;
    case 0x273c:
      return SE_ESOCKTNOSUPPORT;
    case 0x273d:
      return SE_EOPNOTSUPP;
    case 0x273e:
      return SE_EPFNOSUPPORT;
    case 0x273f:
      return SE_EAFNOSUPPORT;
    case 0x2740:
      return SE_EADDRINUSE;
    case 0x2741:
      return SE_EADDRNOTAVAIL;
    case 0x2742:
      return SE_ENETDOWN;
    case 0x2743:
      return SE_ENETUNREACH;
    case 0x2744:
      return SE_ENETRESET;
    case 0x2745:
      return SE_ECONNABORTED;
    case 0x2746:
      goto switchD_1431185d4_caseD_2746;
    case 0x2747:
      return SE_ENOBUFS;
    case 0x2748:
      return SE_EISCONN;
    case 0x2749:
      return SE_ENOTCONN;
    case 0x274a:
      return SE_ESHUTDOWN;
    case 0x274b:
      return SE_ETOOMANYREFS;
    case 0x274c:
      return SE_ETIMEDOUT;
    case 0x274d:
      return SE_ECONNREFUSED;
    case 0x274e:
      return SE_ELOOP;
    case 0x274f:
      return SE_ENAMETOOLONG;
    case 0x2750:
      return SE_EHOSTDOWN;
    case 0x2751:
      return SE_EHOSTUNREACH;
    case 0x2752:
      return SE_ENOTEMPTY;
    case 0x2753:
      return SE_EPROCLIM;
    case 0x2754:
      return SE_EUSERS;
    case 0x2755:
      return SE_EDQUOT;
    case 0x2756:
      return SE_ESTALE;
    case 0x2757:
      return SE_EREMOTE;
    case 0x276b:
      return SE_SYSNOTREADY;
    case 0x276c:
      return SE_VERNOTSUPPORTED;
    case 0x276d:
      return SE_NOTINITIALISED;
    case 0x2775:
      return SE_EDISCON;
    }
  }
  else {
    if (param_1 == 0x2afa) {
      return SE_TRY_AGAIN;
    }
    if (param_1 == 0x2afb) {
      return SE_NO_RECOVERY;
    }
    if (param_1 == 0x2afc) {
      return SE_NO_DATA;
    }
  }
  if (2 < (byte)LogSockets._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\Windows\\SocketSubsystemWindows.cpp"
                     ,0xff,L"");
  if (!bVar2) {
    return SE_NO_ERROR;
  }
  pcVar1 = (code *)swi(3);
  EVar3 = (*pcVar1)();
  return EVar3;
}

