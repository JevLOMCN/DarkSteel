// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// operator() @ 1487834c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_2>::operator()
          (void *this,FOnDemandInstallResult *param_1)

{
  char cVar1;
  FStreamableHandle *this_00;
  FDownloadContext *pFVar2;
  FDownloadContext *this_01;
  FStreamableManager *this_02;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedRef<FStreamableHandle,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TSharedRef<FStreamableHandle,1> local_18;
  
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1487834f0;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar4 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar8);
    this_00 = *(FStreamableHandle **)this;
    if ((this_00 != (FStreamableHandle *)0x0) &&
       (pFVar2 = (this_00->DownloadContext).Ptr, pFVar2 != (FDownloadContext *)0x0)) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      this_01 = (this_00->DownloadContext).Ptr;
      (this_00->DownloadContext).Ptr = (FDownloadContext *)0x0;
      if ((param_1->Error).bIsSet == false) {
        if (pFVar2->bDownloadOnly == false) {
          this_02 = this_00->OwningManager;
          if (this_02 != (FStreamableManager *)0x0) {
            pTVar6 = TSharedFromThis<FStreamableHandle,1>::AsShared
                               ((TSharedFromThis<FStreamableHandle,1> *)this_00,&local_18);
            FStreamableManager::StartHandleRequests(this_02,pTVar6);
          }
        }
        else {
          FStreamableHandle::CompleteLoad(this_00);
          if (this_00->bReleaseWhenLoaded != false) {
            FStreamableHandle::ReleaseHandle(this_00);
          }
        }
      }
      else {
        if ((this_00->bCanceled == false) ||
           (bVar8 = UE::UnifiedError::IsCancellationError(&(param_1->Error).TypedValue), !bVar8)) {
          if (((param_1->Error).bIsSet == false) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FStreamableHandle::SetError(this_00,&(param_1->Error).TypedValue);
          FStreamableHandle::CompleteLoad(this_00);
          cVar1 = this_00->bReleaseWhenLoaded;
        }
        else {
          FStreamableHandle::CompleteLoad(this_00);
          cVar1 = this_00->bReleaseWhenLoaded;
        }
        if (cVar1 != '\0') {
          FStreamableHandle::ReleaseHandle(this_00);
        }
      }
      if (this_01 != (FDownloadContext *)0x0) {
        UE::IoStore::FOnDemandInstallRequest::Cancel(&this_01->InstallRequest);
        UE::IoStore::FOnDemandInstallRequest::~FOnDemandInstallRequest(&this_01->InstallRequest);
        ::operator_delete(this_01,0x48);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return;
    }
  }
LAB_1487834f0:
  if (2 < (byte)LogStreamableManager._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_`public:_void___cdecl_UE::StreamableManager::Private::FDownloadContext::Start(TSharedRef<FStreamableHandle,1>_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(UE::IoStore::FOnDemandInstallResult&&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogStreamableManager);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// operator() @ 1487837d0

void __thiscall
`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_3>::operator()
          (void *this,FOnDemandInstallProgress *param_1)

{
  FStreamableHandle *this_00;
  FDownloadContext *pFVar1;
  ulong64 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148783800;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    this_00 = *(FStreamableHandle **)this;
    if ((this_00 != (FStreamableHandle *)0x0) &&
       (pFVar1 = (this_00->DownloadContext).Ptr, pFVar1 != (FDownloadContext *)0x0)) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      uVar2 = param_1->TotalInstallSize;
      (pFVar1->InstallProgress).TotalContentSize = param_1->TotalContentSize;
      (pFVar1->InstallProgress).TotalInstallSize = uVar2;
      (pFVar1->InstallProgress).CurrentInstallSize = param_1->CurrentInstallSize;
      if (this_00->OwningManager != (FStreamableManager *)0x0) {
        FStreamableHandle::CallUpdateDelegate(this_00);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return;
    }
  }
LAB_148783800:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Start @ 1487c42c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::StreamableManager::Private::FDownloadContext::Start
          (FDownloadContext *this,TSharedRef<FStreamableHandle,1> *param_1)

{
  int iVar1;
  IErrorDetails *pIVar2;
  FDownloadContext *this_00;
  FStreamableHandle *pFVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  IOnDemandIoStore *pIVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar11;
  FOnDemandInstallRequest *pFVar12;
  longlong *plVar13;
  undefined ***pppuVar14;
  int *piVar15;
  IErrorDetails *pIVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198 [8];
  FName local_190;
  void *local_188;
  undefined8 local_180;
  FString *local_178;
  undefined8 local_170;
  ForAnyElementType local_168;
  undefined8 local_160;
  FOnDemandContentHandle local_158;
  undefined8 local_148;
  longlong local_140;
  FStreamableHandle *local_138;
  TReferenceControllerBase<1> *local_130;
  FString local_128;
  FError local_118;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined8 local_100;
  IOnDemandIoStore *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  FOnDemandInstallRequest local_d8;
  code *local_a8;
  undefined **local_98;
  FStreamableHandle *local_90;
  TReferenceControllerBase<1> *local_88;
  undefined ***local_80;
  code *local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  cVar7 = (**(code **)((this->InstallRequest)._padding_ + 8))();
  if (cVar7 == '\0') {
    local_f8 = IoStore::TryGetOnDemandIoStore();
    if (local_f8 == (IOnDemandIoStore *)0x0) {
      TVar11 = UnifiedError::StreamableManager::IoStoreNotFound::GetStaticErrorDetails();
      pIVar16 = (IErrorDetails *)0x0;
      pIVar2 = (IErrorDetails *)(TVar11.Reference)->_padding_;
      if (pIVar2 == (IErrorDetails *)0x0) {
        local_118.ErrorDetails.Reference = (IErrorDetails *)0x0;
        local_118.ErrorCode = UnifiedError::StreamableManager::IoStoreNotFound::GetErrorCodeId();
        local_118.ModuleId = UnifiedError::StreamableManager::GetStaticModuleId();
      }
      else {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_108);
        local_118.ErrorCode = UnifiedError::StreamableManager::IoStoreNotFound::GetErrorCodeId();
        local_118.ModuleId = UnifiedError::StreamableManager::GetStaticModuleId();
        local_118.ErrorDetails.Reference = pIVar2;
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_104);
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        pIVar16 = pIVar2;
      }
      FStreamableHandle::SetError(param_1->Object,&local_118);
      FStreamableHandle::CompleteLoad(param_1->Object);
      if (param_1->Object->bReleaseWhenLoaded != false) {
        FStreamableHandle::ReleaseHandle(param_1->Object);
      }
      if (pIVar16 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar16 + 0x10))(pIVar16);
      }
      this_00 = (param_1->Object->DownloadContext).Ptr;
      (param_1->Object->DownloadContext).Ptr = (FDownloadContext *)0x0;
      if (this_00 != (FDownloadContext *)0x0) {
        IoStore::FOnDemandInstallRequest::Cancel(&this_00->InstallRequest);
        IoStore::FOnDemandInstallRequest::~FOnDemandInstallRequest(&this_00->InstallRequest);
        ::operator_delete(this_00,0x48);
      }
    }
    else {
      local_188 = (void *)0x0;
      local_180 = 0;
      local_178 = (FString *)0x0;
      local_170 = 0;
      local_168.Data = (FScriptContainerElement *)0x0;
      local_160 = 0;
      IoStore::FOnDemandContentHandle::FOnDemandContentHandle(&local_158);
      local_148 = 0;
      local_140 = 0;
      uVar10 = (param_1->Object->RequestedAssets).ArrayNum;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if (local_160._4_4_ < (int)uVar10) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar10,&local_168,(int)local_160,(int *)((longlong)&local_160 + 4));
      }
      pFVar3 = param_1->Object;
      iVar1 = (pFVar3->RequestedAssets).ArrayNum;
      pFVar17 = (pFVar3->RequestedAssets).AllocatorInstance.Data;
      pFVar18 = pFVar17 + (longlong)iVar1 * 0x20;
      while( true ) {
        if ((pFVar3->RequestedAssets).ArrayNum != iVar1) {
          local_198[0] = 0;
          `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_198);
        }
        if (pFVar17 == pFVar18) break;
        local_100 = *(undefined8 *)pFVar17;
        uStack_e0 = *(undefined8 *)(pFVar17 + 8);
        local_e8 = local_100;
        FPackageId::FromName(&local_190);
        if (((local_168.Data <= &local_190) &&
            (&local_190 < (FName *)(local_168.Data + (longlong)local_160._4_4_ * 8))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (int)local_160;
        if ((int)local_160 == local_160._4_4_) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_168,(int *)((longlong)&local_160 + 4));
        }
        pFVar17 = pFVar17 + 0x20;
        local_160 = CONCAT44(local_160._4_4_,iVar9 + 1);
        *(FName *)(local_168.Data + (longlong)iVar9 * 8) = local_190;
      }
      if (((param_1->Object->DownloadCachePin).ContentHandle.Handle.Object ==
           (FOnDemandInternalContentHandle *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("OwningHandle->DownloadCachePin",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                             ,0x1d7,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar5.ReferenceController = local_158.Handle.SharedReferenceCount.ReferenceController;
      local_158.Handle.SharedReferenceCount.ReferenceController =
           (param_1->Object->DownloadCachePin).ContentHandle.Handle.SharedReferenceCount.
           ReferenceController;
      local_158.Handle.Object = (param_1->Object->DownloadCachePin).ContentHandle.Handle.Object;
      if (local_158.Handle.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_158.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      pIVar6 = local_f8;
      uVar10 = (uint)local_148 | 1;
      if (this->bInstallSoftReferences != false) {
        uVar10 = (uint)local_148 | 3;
      }
      local_90 = param_1->Object;
      local_148 = CONCAT44((int)this->Priority,uVar10);
      pcVar4 = *(code **)((longlong)*local_f8 + 0x28);
      local_88 = (param_1->SharedReferenceCount).ReferenceController;
      local_130 = (TReferenceControllerBase<1> *)0x0;
      local_138 = local_90;
      if (local_88 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_88->WeakReferenceCount = (atomic<int>)((int)local_88->WeakReferenceCount + 1);
        UNLOCK();
        local_138 = param_1->Object;
        local_130 = (param_1->SharedReferenceCount).ReferenceController;
      }
      local_a8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_3>,void,UE::IoStore::FOnDemandInstallProgress>
                 ::Call;
      local_80 = (undefined ***)0x0;
      local_98 = &
                 ___7__TFunction_OwnedObject_V<lambda_3>__1__Start_FDownloadContext_Private_StreamableManager_UE__QEAAXAEBV__TSharedRef_UFStreamableHandle___00___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      if (local_130 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_130->WeakReferenceCount = (atomic<int>)((int)local_130->WeakReferenceCount + 1);
        UNLOCK();
      }
      ::FString::FString(&local_128,&param_1->Object->DebugName);
      local_78[0] = (code *)0x0;
      local_50 = FMemory::Malloc(0x28,8);
      *local_50 = (longlong)
                  &
                  ___7__TFunction_OwnedObject_V<lambda_2>__1__Start_FDownloadContext_Private_StreamableManager_UE__QEAAXAEBV__TSharedRef_UFStreamableHandle___00___Z__00_00_Function_Private_Core_UE__6B_
      ;
      local_50[1] = (longlong)local_138;
      local_50[2] = (longlong)local_130;
      local_130 = (TReferenceControllerBase<1> *)0x0;
      local_138 = (FStreamableHandle *)0x0;
      local_50[3] = 0;
      local_50[3] = (longlong)local_128.Data.AllocatorInstance.Data;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_50 + 4) = local_128.Data.ArrayNum;
      *(int *)((longlong)local_50 + 0x24) = local_128.Data.ArrayMax;
      if (local_50 + 1 != (longlong *)0x0) {
        local_78[0] = Core::Private::Function::
                      TFunctionRefCaller<`UE::StreamableManager::Private::FDownloadContext::Start'::__l2::<lambda_2>,void,UE::IoStore::FOnDemandInstallResult>
                      ::Call;
      }
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      pFVar12 = (FOnDemandInstallRequest *)(*pcVar4)(pIVar6,&local_d8,&local_188,local_78);
      IoStore::FOnDemandInstallRequest::operator=(&this->InstallRequest,pFVar12);
      IoStore::FOnDemandInstallRequest::~FOnDemandInstallRequest(&local_d8);
      if (local_78[0] != (code *)0x0) {
        plVar13 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar13 = local_50;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_130 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        piVar15 = (int *)((longlong)local_130 + 0xc);
        iVar1 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(local_130->_padding_ + 8))(local_130,1);
        }
      }
      if (local_a8 != (code *)0x0) {
        pppuVar14 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar14 = local_80;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      if (local_140 != 0) {
        piVar15 = (int *)(local_140 + -8);
        LOCK();
        iVar1 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FMemory::Free(piVar15);
        }
      }
      IoStore::FOnDemandContentHandle::~FOnDemandContentHandle(&local_158);
      if ((FName *)local_168.Data != (FName *)0x0) {
        FMemory::Free(local_168.Data);
      }
      DestructItems<FString,int>(local_178,(int)local_170);
      if (local_178 != (FString *)0x0) {
        FMemory::Free(local_178);
      }
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
    }
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                       ,0x1c4,L"IAD install already started");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

