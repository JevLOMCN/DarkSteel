// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 11

// Exec_Runtime @ 14eac6030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FTcpMessagingModule::Exec_Runtime
          (FTcpMessagingModule *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  IMessageBridge *pIVar1;
  bool bVar2;
  char cVar3;
  wchar_t *pwVar4;
  wchar_t *local_res18 [2];
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"TCPMESSAGING",true);
  if (!bVar2) {
    return false;
  }
  bVar2 = FParse::Command(local_res18,L"STATUS",true);
  if (bVar2) {
    FOutputDevice::LogfImpl(param_3,L"Protocol Version: %d");
    pIVar1 = (this->MessageBridge).Object;
    if (pIVar1 == (IMessageBridge *)0x0) {
      pwVar4 = L"Message Bridge: Not initialized.";
    }
    else {
      cVar3 = (**(code **)((longlong)*pIVar1 + 0x10))();
      pwVar4 = L"Message Bridge: Initialized and enabled";
      if (cVar3 == '\0') {
        pwVar4 = L"Message Bridge: Initialized, but disabled";
      }
    }
  }
  else {
    bVar2 = FParse::Command(local_res18,L"RESTART",true);
    if (bVar2) {
      RestartServices(this);
      return true;
    }
    bVar2 = FParse::Command(local_res18,L"SHUTDOWN",true);
    if (bVar2) {
      pIVar1 = (this->MessageBridge).Object;
      if (pIVar1 == (IMessageBridge *)0x0) {
        return true;
      }
      (**(code **)*pIVar1)();
      FWindowsPlatformProcess::Sleep(__real_3dcccccd);
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->MessageBridge != (TSharedPtr<IMessageBridge,1> *)&local_18) {
        (this->MessageBridge).Object = (IMessageBridge *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MessageBridge).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
      return true;
    }
    FOutputDevice::Log(param_3,L"Usage: TCPMESSAGING <Command>");
    FOutputDevice::Log(param_3,L"");
    FOutputDevice::Log(param_3,L"Command");
    FOutputDevice::Log(param_3,L"    RESTART = Restarts the message bridge, if enabled");
    FOutputDevice::Log(param_3,L"    SHUTDOWN = Shut down the message bridge, if running");
    pwVar4 = L"    STATUS = Displays the status of the TCP message transport";
  }
  FOutputDevice::Log(param_3,pwVar4);
  return true;
}

// StartupModule @ 14eac61e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTcpMessagingModule::StartupModule(FTcpMessagingModule *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  FModuleManager *this_00;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  UClass *this_01;
  FWeakReferencer<1> *this_02;
  FName local_res10 [3];
  
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar1) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"Messaging");
    if (bVar1) {
      this_00 = FModuleManager::Get();
      pFVar3 = ::FName::FName(local_res10,L"Networking");
      pIVar4 = FModuleManager::LoadModule(this_00,*pFVar3,None);
      if (pIVar4 == (IModuleInterface *)0x0) {
        if (1 < (byte)LogTcpMessaging._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_virtual_void___cdecl_FTcpMessagingModule::StartupModule(void)___ptr64'
                      ::__l9::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
          return;
        }
      }
      else {
        this_01 = UTcpMessagingSettings::StaticClass();
        if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_01);
        }
        this_02 = &this[-1].MessageTransportPtr.WeakReferenceCount;
        if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x8 != '\0') {
          TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FTcpMessagingModule>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::ApplicationHasReactivatedDelegate,
                     (FTcpMessagingModule *)local_res10,(pmf_37364d81 *)this_02);
          TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FTcpMessagingModule>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::ApplicationWillDeactivateDelegate,
                     (FTcpMessagingModule *)local_res10,(pmf_37364d81 *)this_02);
        }
        RestartServices((FTcpMessagingModule *)this_02);
      }
    }
  }
  return;
}

// ShutdownModule @ 14eac6320

void __thiscall FTcpMessagingModule::ShutdownModule(FTcpMessagingModule *this)

{
  FWeakReferencer<1> *this_00;
  
  this_00 = &this[-1].MessageTransportPtr.WeakReferenceCount;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationHasReactivatedDelegate,this_00);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationWillDeactivateDelegate,this_00);
  ShutdownBridge((FTcpMessagingModule *)this_00);
  return;
}

// SupportsDynamicReloading @ 14eac6360

bool __thiscall FTcpMessagingModule::SupportsDynamicReloading(FTcpMessagingModule *this)

{
  return true;
}

// AddOutgoingConnection @ 14eac6370

void __thiscall
FTcpMessagingModule::AddOutgoingConnection(FTcpMessagingModule *this,FString *param_1)

{
  FTcpMessageTransport *this_00;
  atomic<int> aVar1;
  bool bVar2;
  atomic<int> aVar3;
  FTcpMessageTransport *pFVar4;
  FIPv4Endpoint local_res18 [2];
  
  bVar2 = FIPv4Endpoint::Parse(param_1,local_res18);
  if (bVar2) {
    pFVar4 = (this->MessageTransportPtr).Object;
    if (pFVar4 != (FTcpMessageTransport *)0x0) {
      aVar1 = *(atomic<int> *)&pFVar4->_padding_;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          pFVar4 = (FTcpMessageTransport *)0x0;
          goto LAB_14eac63b2;
        }
        LOCK();
        aVar3 = *(atomic<int> *)&pFVar4->_padding_;
        bVar2 = aVar1 == aVar3;
        if (bVar2) {
          *(atomic<int> *)&pFVar4->_padding_ = (atomic<int>)((int)aVar1 + 1);
          aVar3 = aVar1;
        }
        UNLOCK();
        aVar1 = aVar3;
      } while (!bVar2);
      this_00 = (FTcpMessageTransport *)
                (this->MessageBridge).SharedReferenceCount.ReferenceController;
      if (this_00 != (FTcpMessageTransport *)0x0) {
        FTcpMessageTransport::AddOutgoingConnection(this_00,local_res18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar4);
        return;
      }
    }
LAB_14eac63b2:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
  }
  return;
}

// RemoveOutgoingConnection @ 14eac6400

void __thiscall
FTcpMessagingModule::RemoveOutgoingConnection(FTcpMessagingModule *this,FString *param_1)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FTcpMessageTransport *pFVar7;
  FIPv4Endpoint local_res18;
  
  bVar4 = FIPv4Endpoint::Parse(param_1,&local_res18);
  if (bVar4) {
    pFVar7 = (this->MessageTransportPtr).Object;
    if (pFVar7 != (FTcpMessageTransport *)0x0) {
      iVar3 = (int)pFVar7->_padding_;
      do {
        if (iVar3 == 0) {
          pFVar7 = (FTcpMessageTransport *)0x0;
          goto LAB_14eac6450;
        }
        LOCK();
        iVar5 = (int)pFVar7->_padding_;
        bVar4 = iVar3 == iVar5;
        if (bVar4) {
          *(int *)&pFVar7->_padding_ = iVar3 + 1;
          iVar5 = iVar3;
        }
        UNLOCK();
        iVar3 = iVar5;
      } while (!bVar4);
      pTVar2 = (this->MessageBridge).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        pTVar2 = pTVar2 + 0xd;
        puVar6 = ::operator_new(0x10);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          *(FIPv4Endpoint *)(puVar6 + 1) = local_res18;
          if (((ulonglong)pTVar2 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          puVar1 = (undefined8 *)pTVar2->_padding_;
          pTVar2->_padding_ = (longlong)puVar6;
          UNLOCK();
          if (((ulonglong)puVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          *puVar1 = puVar6;
          UNLOCK();
        }
      }
    }
LAB_14eac6450:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
  }
  return;
}

// HandleApplicationHasReactivated @ 14eacaf40

void __thiscall FTcpMessagingModule::HandleApplicationHasReactivated(FTcpMessagingModule *this)

{
  bool bVar1;
  UClass *this_00;
  wchar_t *pwVar2;
  
  this_00 = UTcpMessagingSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if (*(char *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 1) == '\0') {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"TcpMessagingListen=");
    if (!bVar1) {
      pwVar2 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar2,L"TcpMessagingConnect=");
      if (!bVar1) {
        ShutdownBridge(this);
        return;
      }
    }
  }
  InitializeBridge(this);
  return;
}

// HandleApplicationWillDeactivate @ 14eacaf50

void __thiscall FTcpMessagingModule::HandleApplicationWillDeactivate(FTcpMessagingModule *this)

{
  IMessageBridge *pIVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  pIVar1 = (this->MessageBridge).Object;
  if (pIVar1 != (IMessageBridge *)0x0) {
    (**(code **)*pIVar1)();
    FWindowsPlatformProcess::Sleep(__real_3dcccccd);
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MessageBridge != (TSharedPtr<IMessageBridge,1> *)&uStack_18) {
      (this->MessageBridge).Object = (IMessageBridge *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageBridge).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  return;
}

// InitializeBridge @ 14eacb6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTcpMessagingModule::InitializeBridge(FTcpMessagingModule *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UObject *pUVar3;
  void *_Src;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *this_00;
  wchar_t *pwVar9;
  ulonglong uVar10;
  FString *pFVar11;
  FTcpMessageTransport *this_01;
  FGuid *pFVar12;
  FName *pFVar13;
  FModuleManager *this_02;
  IModuleInterface *pIVar14;
  undefined8 *puVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  atomic<int> *paVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FIPv4Address_u_0 local_res18;
  ushort uStackX_1c;
  TRawPtrProxy<FTcpMessageTransport> local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_168;
  TArray<FIPv4Endpoint,TSizedDefaultAllocator<32>_> local_158;
  FIPv4Endpoint local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  TSharedPtr<IMessageBridge,1> local_110;
  FString local_100;
  undefined8 local_f0;
  FSharedReferencer<1> local_e8;
  FMessageBridgeBuilder local_e0;
  FText local_a8;
  TSharedRef<FTcpMessageTransport,1> local_98;
  FName local_88;
  FString local_80;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  FGuid local_60 [2];
  
  ShutdownBridge(this);
  this_00 = UTcpMessagingSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Data.ArrayNum = *(int *)&pUVar3[1].field_0x10;
  lVar16 = (longlong)local_140.Data.ArrayNum;
  _Src = *(void **)&pUVar3[1].field_0x8;
  if (local_140.Data.ArrayNum == 0) {
    local_140.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_140.Data.ArrayNum,0,(ForAnyElementType *)&local_140,local_140.Data.ArrayNum
               ,&local_140.Data.ArrayMax);
    memcpy(local_140.Data.AllocatorInstance.Data,_Src,lVar16 * 2);
  }
  pwVar9 = FCommandLine::Get();
  FParse::Value(pwVar9,L"TcpMessagingListen=",&local_140,true,(wchar_t **)0x0);
  bVar7 = FIPv4Endpoint::Parse(&local_140,(FIPv4Endpoint *)&local_res18._s_0);
  if (!bVar7) {
    if ((1 < local_140.Data.ArrayNum) && (2 < (byte)LogTcpMessaging._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                (&`protected:_void___cdecl_FTcpMessagingModule::InitializeBridge(void)___ptr64'::
                  __l9::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
    }
    _local_res18 = CONCAT26(FIPv4Endpoint::Any._6_2_,
                            CONCAT24(FIPv4Endpoint::Any.Port,FIPv4Endpoint::Any.Address.field0_0x0))
    ;
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  iVar20 = *(int *)&pUVar3[1].field_0x20;
  pFVar17 = *(FScriptContainerElement **)&pUVar3[1].field_0x18;
  pFVar19 = pFVar17 + (longlong)iVar20 * 0x10;
  while( true ) {
    if (*(int *)&pUVar3[1].field_0x20 != iVar20) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar17 == pFVar19) break;
    if (((local_168.AllocatorInstance.Data <= pFVar17) &&
        (pFVar17 < local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_168.ArrayNum == local_168.ArrayMax) {
      local_168.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_168.AllocatorInstance,&local_168.ArrayMax);
    }
    lVar16 = (longlong)local_168.ArrayNum;
    local_168.ArrayNum = local_168.ArrayNum + 1;
    ::FString::FString((FString *)(local_168.AllocatorInstance.Data + lVar16 * 0x10),
                       (FString *)pFVar17);
    pFVar17 = pFVar17 + 0x10;
  }
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  pwVar9 = FCommandLine::Get();
  bVar7 = FParse::Value(pwVar9,L"TcpMessagingConnect=",&local_120,false,(wchar_t **)0x0);
  if (bVar7) {
    ::FString::ParseIntoArray(&local_120,&local_168,L",",true);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  iVar20 = local_168.ArrayNum;
  uVar10 = (ulonglong)local_168.ArrayNum;
  pFVar17 = local_168.AllocatorInstance.Data + uVar10 * 0x10;
  paVar21 = (atomic<int> *)&DAT_00000008;
  FVar18.Data = local_168.AllocatorInstance.Data;
  do {
    while( true ) {
      if ((uint)uVar10 != iVar20) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar18.Data == pFVar17) {
        ::FString::FString(&local_130,L"Initializing TcpMessaging bridge");
        if (local_158.ArrayNum != 0) {
          ::FString::PrintfImpl(&local_100,L" for %d outgoing connections");
          iVar20 = local_100.Data.ArrayNum + -1;
          if (local_100.Data.ArrayNum == 0) {
            iVar20 = 0;
          }
          ::FString::AppendChars(&local_130,(wchar_t *)local_100.Data.AllocatorInstance.Data,iVar20)
          ;
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
        }
        if (((FIPv4Address_u_0)local_res18.Value != FIPv4Endpoint::Any.Address.field0_0x0) ||
           (uStackX_1c != FIPv4Endpoint::Any.Port)) {
          ::FString::AppendChars(&local_130,L", listening on ",0xf);
          pFVar11 = FIPv4Endpoint::ToString((FIPv4Endpoint *)&local_res18._s_0,&local_80);
          FText::FromString(&local_a8,pFVar11);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          pFVar11 = FText::ToString(&local_a8);
          iVar8 = (pFVar11->Data).ArrayNum;
          iVar20 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar20 = 0;
          }
          ::FString::AppendChars
                    (&local_130,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar20);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
        }
        if (4 < (byte)LogTcpMessaging._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&`protected:_void___cdecl_FTcpMessagingModule::InitializeBridge(void)___ptr64'
                      ::__l60::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
        }
        this_01 = ::operator_new(0xf0);
        local_res20.Object = (FTcpMessageTransport *)0x0;
        if (this_01 != (FTcpMessageTransport *)0x0) {
          local_res20.Object =
               FTcpMessageTransport::FTcpMessageTransport
                         (this_01,(FIPv4Endpoint *)&local_res18._s_0,&local_158,*(int *)(pUVar3 + 2)
                          ,*(int *)&pUVar3[2].field_0x4);
        }
        TSharedRef<FTcpMessageTransport,1>::TSharedRef<FTcpMessageTransport,1><FTcpMessageTransport>
                  (&local_98,&local_res20);
        (this->MessageTransportPtr).Object = local_98.Object;
        if (local_98.SharedReferenceCount.ReferenceController !=
            (this->MessageTransportPtr).WeakReferenceCount.ReferenceController) {
          if (local_98.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_98.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_98.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          pTVar4 = (this->MessageTransportPtr).WeakReferenceCount.ReferenceController;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar4->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
            }
          }
          (this->MessageTransportPtr).WeakReferenceCount.ReferenceController =
               local_98.SharedReferenceCount.ReferenceController;
        }
        local_e0.Address.UniqueId.A = 0;
        local_e0.Address.UniqueId.B = 0;
        local_e0.Address.UniqueId.C = 0;
        local_e0.Address.UniqueId.D = 0;
        pFVar12 = FGuid::NewGuid(local_60);
        local_e0.Address.UniqueId.A = pFVar12->A;
        local_e0.Address.UniqueId.B = pFVar12->B;
        local_e0.Address.UniqueId.C = pFVar12->C;
        local_e0.Address.UniqueId.D = pFVar12->D;
        pFVar13 = ::FName::FName(&local_88,"Messaging");
        FVar5 = *pFVar13;
        this_02 = FModuleManager::Get();
        pIVar14 = FModuleManager::LoadModuleChecked(this_02,FVar5);
        puVar15 = (undefined8 *)(**(code **)((longlong)*pIVar14 + 0x68))(pIVar14,local_70);
        local_e0.BusPtr.Object = (IMessageBus *)*puVar15;
        local_e0.BusPtr.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar15[1];
        if (local_e0.BusPtr.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_e0.BusPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_e0.BusPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount +
               1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68);
        local_e0.Disabled = false;
        local_e0.Transport.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_e0.Transport.Object = (IMessageTransport *)&(local_98.Object)->_padding_;
        if (local_98.Object == (FTcpMessageTransport *)0x0) {
          local_e0.Transport.Object = (IMessageTransport *)(FTcpMessageTransport *)0x0;
        }
        if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          paVar21 = &(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          LOCK();
          *paVar21 = (atomic<int>)((int)*paVar21 + 1);
          UNLOCK();
        }
        local_e8.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
        if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          *paVar21 = (atomic<int>)((int)*paVar21 + 1);
          UNLOCK();
        }
        local_f0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_e0.Transport.SharedReferenceCount,&local_e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.ReferenceController);
        FMessageBridgeBuilder::Build(&local_e0,&local_110);
        if (&this->MessageBridge != &local_110) {
          (this->MessageBridge).Object = local_110.Object;
          local_110.Object = (IMessageBridge *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->MessageBridge).SharedReferenceCount,&local_110.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e0.Transport.SharedReferenceCount.ReferenceController);
        if (local_e0.BusPtr.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar21 = &(local_e0.BusPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar21;
          *paVar21 = (atomic<int>)((int)*paVar21 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_e0.BusPtr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_e0.BusPtr.WeakReferenceCount.ReferenceController,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
        if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if ((FIPv4Endpoint *)local_158.AllocatorInstance.Data != (FIPv4Endpoint *)0x0) {
          FMemory::Free(local_158.AllocatorInstance.Data);
        }
        return;
      }
      bVar7 = FIPv4Endpoint::Parse((FString *)FVar18.Data,&local_148);
      if ((bVar7) ||
         (bVar7 = FIPv4Endpoint::FromHostAndPort((FString *)FVar18.Data,&local_148), bVar7)) break;
      if ((byte)LogTcpMessaging._0_1_ < 3) goto LAB_14eacba71;
      UE::Logging::Private::BasicLog<3>
                (&`protected:_void___cdecl_FTcpMessagingModule::InitializeBridge(void)___ptr64'::
                  __l36::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
      uVar10 = (ulonglong)(uint)local_168.ArrayNum;
      FVar18.Data = FVar18.Data + 0x10;
    }
    if (((local_158.AllocatorInstance.Data <= &local_148) &&
        (&local_148 <
         (FIPv4Endpoint *)(local_158.AllocatorInstance.Data + (longlong)local_158.ArrayMax * 8))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = local_158.ArrayNum;
    if (local_158.ArrayNum == local_158.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_158.AllocatorInstance,&local_158.ArrayMax);
    }
    local_158.ArrayNum = iVar8 + 1;
    *(FIPv4Endpoint *)(local_158.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_148;
LAB_14eacba71:
    uVar10 = (ulonglong)(uint)local_168.ArrayNum;
    FVar18.Data = FVar18.Data + 0x10;
  } while( true );
}

// RestartServices @ 14eacccd0

void __thiscall FTcpMessagingModule::RestartServices(FTcpMessagingModule *this)

{
  bool bVar1;
  UClass *this_00;
  wchar_t *pwVar2;
  
  this_00 = UTcpMessagingSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if (*(char *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 1) == '\0') {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"TcpMessagingListen=");
    if (!bVar1) {
      pwVar2 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar2,L"TcpMessagingConnect=");
      if (!bVar1) {
        ShutdownBridge(this);
        return;
      }
    }
  }
  InitializeBridge(this);
  return;
}

// ShutdownBridge @ 14eace840

void __thiscall FTcpMessagingModule::ShutdownBridge(FTcpMessagingModule *this)

{
  IMessageBridge *pIVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pIVar1 = (this->MessageBridge).Object;
  if (pIVar1 != (IMessageBridge *)0x0) {
    (**(code **)*pIVar1)();
    FWindowsPlatformProcess::Sleep(__real_3dcccccd);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MessageBridge != (TSharedPtr<IMessageBridge,1> *)&local_18) {
      (this->MessageBridge).Object = (IMessageBridge *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageBridge).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  return;
}

