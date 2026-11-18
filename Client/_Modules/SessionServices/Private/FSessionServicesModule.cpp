// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 6

// Exec_Runtime @ 148ce8690

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
FSessionServicesModule::Exec_Runtime
          (FSessionServicesModule *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  ForAnyElementType FVar1;
  bool bVar2;
  FString *pFVar3;
  FCoreTexts *pFVar4;
  FGuid *this_00;
  FText *this_01;
  FString *this_02;
  longlong lVar5;
  wchar_t *local_res18 [2];
  FString local_48;
  FGuid local_38;
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"SESSION",true);
  if (!bVar2) {
    return false;
  }
  bVar2 = FParse::Command(local_res18,L"AUTH",true);
  if (bVar2) {
    pFVar3 = FParse::Token(&local_48,local_res18,false);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (&FApp::SessionUsers,pFVar3);
  }
  else {
    bVar2 = FParse::Command(local_res18,L"DENY",true);
    if (!bVar2) {
      bVar2 = FParse::Command(local_res18,L"DENYALL",true);
      if (bVar2) {
        DestructItems<FString,int>
                  ((FString *)FApp::SessionUsers.AllocatorInstance.Data,FApp::SessionUsers.ArrayNum)
        ;
        FApp::SessionUsers.ArrayNum = 0;
        if (FApp::SessionUsers.ArrayMax == 0) {
          FApp::SessionUsers.ArrayNum = 0;
          return true;
        }
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&FApp::SessionUsers.AllocatorInstance,0,&FApp::SessionUsers.ArrayMax);
        return true;
      }
      bVar2 = FParse::Command(local_res18,L"STATUS",true);
      if (bVar2) {
        pFVar4 = FCoreTexts::Get();
        this_00 = FApp::GetInstanceId(&local_38);
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        FGuid::AppendString(this_00,&local_48,Digits);
        FOutputDevice::LogfImpl(param_3,L"Instance ID: %s");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        FWindowsPlatformProcess::GetCurrentProcessId();
        FWindowsPlatformProcess::ComputerName();
        ::FString::PrintfImpl(&local_48,L"%s-%i");
        FOutputDevice::LogfImpl(param_3,L"Instance Name: %s");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_38 = FApp::SessionId;
        FGuid::AppendString(&local_38,&local_48,Digits);
        FOutputDevice::LogfImpl(param_3,L"Session ID: %s");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        FVar1.Data = FApp::SessionName.Data.AllocatorInstance.Data;
        lVar5 = (longlong)FApp::SessionName.Data.ArrayNum;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = FApp::SessionName.Data.ArrayNum;
        if (FApp::SessionName.Data.ArrayNum == 0) {
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,FApp::SessionName.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                     FApp::SessionName.Data.ArrayNum,&local_48.Data.ArrayMax);
          memcpy(local_48.Data.AllocatorInstance.Data,FVar1.Data,lVar5 * 2);
        }
        FOutputDevice::LogfImpl(param_3,L"Session Name: %s");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        FVar1.Data = FApp::SessionOwner.Data.AllocatorInstance.Data;
        lVar5 = (longlong)FApp::SessionOwner.Data.ArrayNum;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = FApp::SessionOwner.Data.ArrayNum;
        if (FApp::SessionOwner.Data.ArrayNum == 0) {
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,FApp::SessionOwner.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                     FApp::SessionOwner.Data.ArrayNum,&local_48.Data.ArrayMax);
          memcpy(local_48.Data.AllocatorInstance.Data,FVar1.Data,lVar5 * 2);
        }
        FOutputDevice::LogfImpl(param_3,L"Session Owner: %s");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (FApp::Standalone == false) {
          this_01 = pFVar4->No;
        }
        else {
          this_01 = pFVar4->Yes;
        }
        FText::ToString(this_01);
        FOutputDevice::LogfImpl(param_3,L"Standalone: %s");
        return true;
      }
      bVar2 = FParse::Command(local_res18,L"SETNAME",true);
      if (bVar2) {
        pFVar3 = FParse::Token((FString *)&local_38,local_res18,false);
        this_02 = &FApp::SessionName;
      }
      else {
        bVar2 = FParse::Command(local_res18,L"SETOWNER",true);
        if (!bVar2) {
          FOutputDevice::Log(param_3,L"Usage: SESSION <Command>");
          FOutputDevice::Log(param_3,L"");
          FOutputDevice::Log(param_3,L"Command");
          FOutputDevice::Log(param_3,
                             L"    AUTH <UserName> = Authorize a user to interact with this instance"
                            );
          FOutputDevice::Log(param_3,
                             L"    DENY <UserName> = Unauthorize a user from interacting with this instance"
                            );
          FOutputDevice::Log(param_3,L"    DENYALL = Removes all authorized session users");
          FOutputDevice::Log(param_3,L"    SETNAME <Name> = Sets the name of this instance");
          FOutputDevice::Log(param_3,
                             L"    SETOWNER <Owner> = Sets the name of the owner of this instance");
          FOutputDevice::Log(param_3,L"    STATUS = Displays the status of this application session"
                            );
          return true;
        }
        pFVar3 = FParse::Token((FString *)&local_38,local_res18,false);
        this_02 = &FApp::SessionOwner;
      }
      ::FString::operator=(this_02,pFVar3);
      if ((void *)local_38._0_8_ == (void *)0x0) {
        return true;
      }
      FMemory::Free((void *)local_38._0_8_);
      return true;
    }
    pFVar3 = FParse::Token(&local_48,local_res18,false);
    TArray<FString,TSizedDefaultAllocator<32>_>::Remove(&FApp::SessionUsers,pFVar3);
  }
  if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return true;
  }
  FMemory::Free(local_48.Data.AllocatorInstance.Data);
  return true;
}

// GetSessionManager @ 148ce8b60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ISessionManager,1> * __thiscall
FSessionServicesModule::GetSessionManager
          (FSessionServicesModule *this,TSharedPtr<ISessionManager,1> *__return_storage_ptr__)

{
  FWeakReferencer<1> *this_00;
  IMessageBus *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FSessionManager *pFVar6;
  TSharedPtr<ISessionManager,1> *pTVar7;
  FSessionManager *pFVar8;
  TRawPtrProxy<FSessionManager> TVar9;
  FSessionManager *pFVar10;
  bool bVar11;
  TRawPtrProxy<FSessionManager> local_res8;
  TSharedRef<IMessageBus,1> local_38;
  
  TVar9.Object = (FSessionManager *)0x0;
  this_00 = &(this->MessageBusPtr).WeakReferenceCount;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  if ((((this_00->ReferenceController != (TReferenceControllerBase<1> *)0x0) ||
       (this->_padding_ == 0)) ||
      (pIVar1 = (this->MessageBusPtr).Object, pIVar1 == (IMessageBus *)0x0)) ||
     (*(int *)(pIVar1 + 1) < 1)) goto LAB_148ce8d15;
  pFVar6 = ::operator_new(0x1a0);
  if (pFVar6 == (FSessionManager *)0x0) {
    pFVar8 = (FSessionManager *)0x0;
    pFVar6 = TVar9.Object;
    TVar9.Object = local_res8.Object;
  }
  else {
    local_38.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(this->MessageBusPtr).Object;
    pFVar8 = TVar9.Object;
    pFVar10 = (FSessionManager *)local_38.SharedReferenceCount.ReferenceController;
    if ((FSessionManager *)local_38.SharedReferenceCount.ReferenceController ==
        (FSessionManager *)0x0) {
LAB_148ce8c05:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      if (bVar11) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<ISessionManager,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    else {
      aVar4 = *(atomic<int> *)
               &((FSessionManager *)local_38.SharedReferenceCount.ReferenceController)->_padding_;
      do {
        pFVar8 = (FSessionManager *)0x0;
        pFVar10 = TVar9.Object;
        if (aVar4 == (atomic<int>)0x0) goto LAB_148ce8c05;
        LOCK();
        aVar5 = *(atomic<int> *)
                 &((FSessionManager *)local_38.SharedReferenceCount.ReferenceController)->_padding_;
        bVar11 = aVar4 == aVar5;
        if (bVar11) {
          *(atomic<int> *)
           &((FSessionManager *)local_38.SharedReferenceCount.ReferenceController)->_padding_ =
               (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar11);
      pFVar8 = (FSessionManager *)this->_padding_;
      pFVar10 = (FSessionManager *)local_38.SharedReferenceCount.ReferenceController;
      if (pFVar8 == (FSessionManager *)0x0) goto LAB_148ce8c05;
    }
    pFVar10 = (FSessionManager *)0x0;
    local_38.Object = (IMessageBus *)pFVar8;
    if ((pFVar8 == (FSessionManager *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<ISessionManager,1> *)(*pcVar3)();
      return pTVar7;
    }
    pFVar8 = FSessionManager::FSessionManager(pFVar6,&local_38);
    pFVar6 = (FSessionManager *)&DAT_00000003;
    if (((pFVar8 != (FSessionManager *)0x0) && (pFVar8->_padding_ != 0)) &&
       ((TVar9.Object = pFVar10, pFVar8->_padding_ != 0 &&
        ((0 < *(int *)(pFVar8->_padding_ + 8) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar11)))))) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<ISessionManager,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  local_res8.Object = pFVar8;
  TSharedPtr<ISessionManager,1>::operator=<FSessionManager>
            ((TSharedPtr<ISessionManager,1> *)this_00,&local_res8);
  if (((ulonglong)pFVar6 & 2) != 0) {
    pFVar6 = (FSessionManager *)(ulonglong)((uint)pFVar6 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (((ulonglong)pFVar6 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar9.Object);
  }
LAB_148ce8d15:
  __return_storage_ptr__->Object = (ISessionManager *)this_00->ReferenceController;
  pTVar2 = (TReferenceControllerBase<1> *)(this->SessionManager).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSessionService @ 148ce8d50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ISessionService,1> * __thiscall
FSessionServicesModule::GetSessionService
          (FSessionServicesModule *this,TSharedPtr<ISessionService,1> *__return_storage_ptr__)

{
  FSharedReferencer<1> *this_00;
  IMessageBus *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FSessionService *this_01;
  TSharedPtr<ISessionService,1> *pTVar6;
  FSessionService *pFVar7;
  FSessionService *pFVar8;
  FSessionService *pFVar9;
  TRawPtrProxy<FSessionService> TVar10;
  TRawPtrProxy<FSessionService> TVar11;
  bool bVar12;
  TRawPtrProxy<FSessionService> local_res8;
  
  pFVar7 = (FSessionService *)0x0;
  this_00 = &(this->SessionManager).SharedReferenceCount;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  if ((((this_00->ReferenceController != (TReferenceControllerBase<1> *)0x0) ||
       (this->_padding_ == 0)) ||
      (pIVar1 = (this->MessageBusPtr).Object, pIVar1 == (IMessageBus *)0x0)) ||
     (*(int *)(pIVar1 + 1) < 1)) goto LAB_148ce8f02;
  this_01 = ::operator_new(0x78);
  pFVar8 = pFVar7;
  TVar10.Object = local_res8.Object;
  pFVar9 = pFVar7;
  TVar11.Object = local_res8.Object;
  if (this_01 != (FSessionService *)0x0) {
    TVar10.Object = (FSessionService *)(this->MessageBusPtr).Object;
    pFVar9 = TVar10.Object;
    pFVar8 = (FSessionService *)0x0;
    if (TVar10.Object == (FSessionService *)0x0) {
LAB_148ce8e07:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      TVar10.Object = pFVar9;
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<ISessionService,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    else {
      aVar4 = *(atomic<int> *)&(TVar10.Object)->_padding_;
      do {
        pFVar9 = pFVar7;
        pFVar8 = pFVar7;
        if (aVar4 == (atomic<int>)0x0) goto LAB_148ce8e07;
        LOCK();
        aVar5 = *(atomic<int> *)&(TVar10.Object)->_padding_;
        bVar12 = aVar4 == aVar5;
        if (bVar12) {
          *(atomic<int> *)&(TVar10.Object)->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar12);
      pFVar8 = (FSessionService *)this->_padding_;
      pFVar9 = TVar10.Object;
      if (pFVar8 == (FSessionService *)0x0) goto LAB_148ce8e07;
    }
    if ((pFVar8 == (FSessionService *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<ISessionService,1> *)(*pcVar3)();
      return pTVar6;
    }
    FOutputDevice::FOutputDevice((FOutputDevice *)this_01);
    (this_01->LogSubscribers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01->_padding_ = (longlong)&FSessionService::_vftable__for__FOutputDevice__;
    (this_01->LogSubscribers).ArrayNum = 0;
    (this_01->LogSubscribers).ArrayMax = 0;
    this_01->_padding_ = (longlong)&FSessionService::_vftable__for__ISessionService__;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this_01->LogSubscribersLock,4000);
    (this_01->MessageBusPtr).Object = (IMessageBus *)pFVar8;
    (this_01->MessageBusPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)TVar10.Object;
    if (TVar10.Object != (FSessionService *)0x0) {
      LOCK();
      ((atomic<int> *)&(TVar10.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar10.Object)->_padding_)[1] + 1);
      UNLOCK();
    }
    (this_01->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
    (this_01->MessageEndpoint).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this_01->IsInSendLog = false;
    pFVar8 = (FSessionService *)&DAT_00000003;
    pFVar9 = this_01;
    TVar11.Object = pFVar7;
  }
  local_res8.Object = pFVar9;
  TSharedPtr<ISessionService,1>::operator=<FSessionService>
            ((TSharedPtr<ISessionService,1> *)this_00,&local_res8);
  if (((ulonglong)pFVar8 & 2) != 0) {
    pFVar8 = (FSessionService *)(ulonglong)((uint)pFVar8 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar10.Object);
  }
  if (((ulonglong)pFVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar11.Object);
  }
LAB_148ce8f02:
  __return_storage_ptr__->Object = (ISessionService *)this_00->ReferenceController;
  pTVar2 = (TReferenceControllerBase<1> *)(this->SessionService).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTraceController @ 148ce8f40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ITraceController,1> * __thiscall
FSessionServicesModule::GetTraceController
          (FSessionServicesModule *this,TSharedPtr<ITraceController,1> *__return_storage_ptr__)

{
  IMessageBus *pIVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FTraceController *this_00;
  TSharedPtr<ITraceController,1> *pTVar5;
  FTraceController *pFVar6;
  FTraceController *pFVar7;
  FTraceController *pFVar8;
  TRawPtrProxy<FTraceController> TVar9;
  bool bVar10;
  TRawPtrProxy<FTraceController> local_res8;
  TSharedRef<IMessageBus,1> local_38;
  
  pFVar7 = (FTraceController *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  if (((((this->SessionService).SharedReferenceCount.ReferenceController !=
         (TReferenceControllerBase<1> *)0x0) || (this->_padding_ == 0)) ||
      (pIVar1 = (this->MessageBusPtr).Object, pIVar1 == (IMessageBus *)0x0)) ||
     (*(int *)(pIVar1 + 1) < 1)) goto LAB_148ce909e;
  this_00 = ::operator_new(0x100);
  pFVar6 = pFVar7;
  pFVar8 = pFVar7;
  TVar9.Object = local_res8.Object;
  if (this_00 != (FTraceController *)0x0) {
    local_38.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(this->MessageBusPtr).Object;
    pFVar8 = (FTraceController *)local_38.SharedReferenceCount.ReferenceController;
    if ((FTraceController *)local_38.SharedReferenceCount.ReferenceController ==
        (FTraceController *)0x0) {
LAB_148ce8fd5:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      if (bVar10) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<ITraceController,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    else {
      iVar3 = *(int *)&(((FTraceController *)local_38.SharedReferenceCount.ReferenceController)->
                       MessageBus).Object;
      do {
        pFVar6 = (FTraceController *)0x0;
        pFVar8 = pFVar7;
        if (iVar3 == 0) goto LAB_148ce8fd5;
        LOCK();
        iVar4 = *(int *)&(((FTraceController *)local_38.SharedReferenceCount.ReferenceController)->
                         MessageBus).Object;
        bVar10 = iVar3 == iVar4;
        if (bVar10) {
          *(int *)&(((FTraceController *)local_38.SharedReferenceCount.ReferenceController)->
                   MessageBus).Object = iVar3 + 1;
          iVar4 = iVar3;
        }
        UNLOCK();
        iVar3 = iVar4;
      } while (!bVar10);
      pFVar6 = (FTraceController *)this->_padding_;
      pFVar8 = (FTraceController *)local_38.SharedReferenceCount.ReferenceController;
      if (pFVar6 == (FTraceController *)0x0) goto LAB_148ce8fd5;
    }
    local_38.Object = (IMessageBus *)pFVar6;
    if ((pFVar6 == (FTraceController *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<ITraceController,1> *)(*pcVar2)();
      return pTVar5;
    }
    pFVar6 = FTraceController::FTraceController(this_00,&local_38);
    pFVar8 = (FTraceController *)&DAT_00000003;
    TVar9.Object = pFVar7;
  }
  local_res8.Object = pFVar6;
  TSharedPtr<FTraceController,1>::operator=<FTraceController>
            ((TSharedPtr<FTraceController,1> *)&(this->SessionService).SharedReferenceCount,
             &local_res8);
  if (((ulonglong)pFVar8 & 2) != 0) {
    pFVar8 = (FTraceController *)(ulonglong)((uint)pFVar8 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (((ulonglong)pFVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar9.Object);
  }
LAB_148ce909e:
  __return_storage_ptr__->Object =
       (ITraceController *)(this->SessionService).SharedReferenceCount.ReferenceController;
  pFVar7 = (this->TraceController).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar7;
  if (pFVar7 != (FTraceController *)0x0) {
    LOCK();
    *(int *)&(pFVar7->MessageBus).Object = *(int *)&(pFVar7->MessageBus).Object + 1;
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// StartupModule @ 148ce90e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionServicesModule::StartupModule(FSessionServicesModule *this)

{
  undefined1 *puVar1;
  int iVar2;
  FName FVar3;
  IMessageBus *pIVar4;
  IMessageBus *pIVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  longlong *plVar8;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar6 = ::FName::FName(&local_res8,"Messaging");
  FVar3 = *pFVar6;
  this_00 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(this_00,FVar3);
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x68))(pIVar7,local_18);
  this->_padding_ = *plVar8;
  pIVar4 = (IMessageBus *)plVar8[1];
  if (pIVar4 != (this->MessageBusPtr).Object) {
    if (pIVar4 != (IMessageBus *)0x0) {
      LOCK();
      *(int *)&pIVar4[1].field_0x4 = *(int *)&pIVar4[1].field_0x4 + 1;
      UNLOCK();
    }
    pIVar5 = (this->MessageBusPtr).Object;
    if (pIVar5 != (IMessageBus *)0x0) {
      LOCK();
      puVar1 = &pIVar5[1].field_0x4;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)((longlong)*pIVar5 + 8))(pIVar5,1);
      }
    }
    (this->MessageBusPtr).Object = pIVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// ShutdownModule @ 148ce9180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionServicesModule::ShutdownModule(FSessionServicesModule *this)

{
  FSharedReferencer<1> *pFVar1;
  FWeakReferencer<1> *pFVar2;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = &(this->SessionService).SharedReferenceCount;
  if (pFVar1 != (FSharedReferencer<1> *)&local_38) {
    pFVar1->ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->TraceController,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  pFVar2 = &(this->MessageBusPtr).WeakReferenceCount;
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pFVar2 != (FWeakReferencer<1> *)&local_28) {
    pFVar2->ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->SessionManager,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  pFVar1 = &(this->SessionManager).SharedReferenceCount;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pFVar1 != (FSharedReferencer<1> *)&local_18) {
    pFVar1->ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->SessionService,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

