// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 7

// DoRegister @ 14eebc750

void __thiscall
UE::Online::FAccountInfoRegistry::DoRegister
          (FAccountInfoRegistry *this,TSharedRef<UE::Online::FAccountInfo,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPlatformUserId *pFVar3;
  undefined1 local_res10 [24];
  FPlatformUserId *local_28;
  TSharedRef<UE::Online::FAccountInfo,1> *local_20;
  FAccountInfo *local_18;
  TSharedRef<UE::Online::FAccountInfo,1> *local_10;
  
  pFVar3 = &param_1->Object->PlatformUserId;
  if (pFVar3->InternalId == -1) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3947515887841443784>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Private\\Online\\AuthCommon.cpp"
                       ,0x38,"AccountInfo->PlatformUserId != PLATFORMUSERID_NONE");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_28 = pFVar3;
    local_20 = param_1;
    TSet<TTuple<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>_>,TDefaultMapHashableKeyFuncs<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FPlatformUserId_const_&,TSharedRef<UE::Online::FAccountInfo,1>_const_&>_>
              ((TSet<TTuple<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>_>,TDefaultMapHashableKeyFuncs<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>,0>,FDefaultSetAllocator>
                *)&this->AuthDataByPlatformUserId,
               (TPairInitializer<FPlatformUserId_const_&,TSharedRef<UE::Online::FAccountInfo,1>_const_&>
                *)local_res10,(bool *)&local_28);
  }
  local_18 = param_1->Object;
  if (((local_18->AccountId).Value & 0xffffff) == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3947515887841443779>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Private\\Online\\AuthCommon.cpp"
                       ,0x3d,"AccountInfo->AccountId.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_10 = param_1;
    TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TSharedRef<UE::Online::FAccountInfo,1>_const_&>_>
              ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>,FDefaultSetAllocator>
                *)&this->AuthDataByOnlineAccountIdHandle,
               (TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TSharedRef<UE::Online::FAccountInfo,1>_const_&>
                *)(local_res10 + 8),(bool *)&local_18);
  }
  return;
}

// DoUnregister @ 14eebc830

void __thiscall
UE::Online::FAccountInfoRegistry::DoUnregister
          (FAccountInfoRegistry *this,TSharedRef<UE::Online::FAccountInfo,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (param_1->Object->PlatformUserId).InternalId;
  if (uVar3 == 0xffffffff) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3947515887841443772>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Private\\Online\\AuthCommon.cpp"
                       ,0x44,"AccountInfo->PlatformUserId != PLATFORMUSERID_NONE");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (*(int *)&(this->AuthDataByPlatformUserId).field_0x8 !=
           *(int *)&(this->AuthDataByPlatformUserId).field_0x34) {
    TSet<TTuple<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>_>,TDefaultMapHashableKeyFuncs<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FPlatformUserId>
              ((TSet<TTuple<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>_>,TDefaultMapHashableKeyFuncs<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>,0>,FDefaultSetAllocator>
                *)&this->AuthDataByPlatformUserId,uVar3,&param_1->Object->PlatformUserId);
  }
  uVar3 = (param_1->Object->AccountId).Value;
  uVar4 = uVar3 & 0xffffff;
  if (uVar4 == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3947515887841443767>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Private\\Online\\AuthCommon.cpp"
                       ,0x49,"AccountInfo->AccountId.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (*(int *)&(this->AuthDataByOnlineAccountIdHandle).field_0x8 !=
           *(int *)&(this->AuthDataByOnlineAccountIdHandle).field_0x34) {
    uVar3 = (uVar3 >> 0x18) - uVar4 ^ uVar4 >> 0xd;
    uVar5 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xd;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 0xc;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 << 0x10;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 >> 3;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 << 10;
    TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>,FDefaultSetAllocator>
                *)&this->AuthDataByOnlineAccountIdHandle,(uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xf,
               &param_1->Object->AccountId);
  }
  return;
}

// Find @ 14eed49f0

TSharedPtr<UE::Online::FAccountInfo,1> * __thiscall
UE::Online::FAccountInfoRegistry::Find
          (FAccountInfoRegistry *this,TSharedPtr<UE::Online::FAccountInfo,1> *__return_storage_ptr__
          ,FPlatformUserId param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FAccountInfo *pFVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  AcquireSRWLockShared((PSRWLOCK)&this->IndexLock);
  if (*(int *)&(this->AuthDataByPlatformUserId).field_0x8 !=
      *(int *)&(this->AuthDataByPlatformUserId).field_0x34) {
    puVar6 = *(undefined1 **)&(this->AuthDataByPlatformUserId).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AuthDataByPlatformUserId).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->AuthDataByPlatformUserId).field_0x48 - 1U &
                              param_1.InternalId) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&this->AuthDataByPlatformUserId);
        if (*piVar5 == param_1.InternalId) {
          piVar4 = piVar5 + 2;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            pTVar1 = *(TReferenceControllerBase<1> **)(piVar4 + 2);
            pFVar2 = *(FAccountInfo **)piVar4;
            if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
              UNLOCK();
            }
            __return_storage_ptr__->Object = pFVar2;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
            goto LAB_14eed4a6d;
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  __return_storage_ptr__->Object = (FAccountInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14eed4a6d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  ReleaseSRWLockShared((PSRWLOCK)&this->IndexLock);
  return __return_storage_ptr__;
}

// Find @ 14eed4ad0

TSharedPtr<UE::Online::FAccountInfo,1> * __thiscall
UE::Online::FAccountInfoRegistry::Find
          (FAccountInfoRegistry *this,TSharedPtr<UE::Online::FAccountInfo,1> *__return_storage_ptr__
          ,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> param_1)

{
  FAccountInfo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<UE::Online::FAccountInfo,1> *pTVar3;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_res18 [2];
  
  AcquireSRWLockShared((PSRWLOCK)&this->IndexLock);
  local_res18[0].Value = param_1.Value;
  pTVar3 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>_>
           ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>_>
                   *)&this->AuthDataByOnlineAccountIdHandle,local_res18);
  if (pTVar3 == (TSharedRef<UE::Online::FAccountInfo,1> *)0x0) {
    __return_storage_ptr__->Object = (FAccountInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar1 = pTVar3->Object;
    pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  ReleaseSRWLockShared((PSRWLOCK)&this->IndexLock);
  return __return_storage_ptr__;
}

// FindNoLock @ 14eed4d90

TSharedPtr<UE::Online::FAccountInfo,1> * __thiscall
UE::Online::FAccountInfoRegistry::FindNoLock
          (FAccountInfoRegistry *this,TSharedPtr<UE::Online::FAccountInfo,1> *__return_storage_ptr__
          ,FPlatformUserId param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FAccountInfo *pFVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->AuthDataByPlatformUserId).field_0x8 !=
      *(int *)&(this->AuthDataByPlatformUserId).field_0x34) {
    puVar6 = *(undefined1 **)&(this->AuthDataByPlatformUserId).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AuthDataByPlatformUserId).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->AuthDataByPlatformUserId).field_0x48 - 1U &
                              param_1.InternalId) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&this->AuthDataByPlatformUserId);
        if (*piVar5 == param_1.InternalId) {
          piVar4 = piVar5 + 2;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            pTVar1 = *(TReferenceControllerBase<1> **)(piVar4 + 2);
            pFVar2 = *(FAccountInfo **)piVar4;
            if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
              UNLOCK();
            }
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
            __return_storage_ptr__->Object = pFVar2;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            return __return_storage_ptr__;
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  __return_storage_ptr__->Object = (FAccountInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// FindNoLock @ 14eed4e40

TSharedPtr<UE::Online::FAccountInfo,1> * __thiscall
UE::Online::FAccountInfoRegistry::FindNoLock
          (FAccountInfoRegistry *this,TSharedPtr<UE::Online::FAccountInfo,1> *__return_storage_ptr__
          ,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> param_1)

{
  FAccountInfo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<UE::Online::FAccountInfo,1> *pTVar3;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_res18 [4];
  
  local_res18[0].Value = param_1.Value;
  pTVar3 = TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>_>
           ::Find((TMapBase<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedRef<UE::Online::FAccountInfo,1>,0>_>
                   *)&this->AuthDataByOnlineAccountIdHandle,local_res18);
  if (pTVar3 != (TSharedRef<UE::Online::FAccountInfo,1> *)0x0) {
    pFVar1 = pTVar3->Object;
    pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FAccountInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetAllAccountInfo @ 14eed6a60

TArray<TSharedRef<UE::Online::FAccountInfo,1>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::FAccountInfoRegistry::GetAllAccountInfo
          (FAccountInfoRegistry *this,
          TArray<TSharedRef<UE::Online::FAccountInfo,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TFunction<bool___cdecl(TSharedRef<UE::Online::FAccountInfo,1>_const_&)> *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  <lambda_2> local_68;
  <lambda_1> local_58;
  
  AcquireSRWLockShared((PSRWLOCK)&this->IndexLock);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar3 = *(int *)&(this->AuthDataByPlatformUserId).field_0x8 -
          *(int *)&(this->AuthDataByPlatformUserId).field_0x34;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
    local_58.Predicate._0_8_ = *(undefined8 *)param_1;
    local_58.Predicate._40_8_ = 0;
    if (local_58.Predicate._0_8_ != 0) {
      puVar1 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar1)(puVar1,&local_58.Predicate.field_0x10);
    }
    Algo::
    TransformIf<TMap<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlatformUserId,TSharedRef<UE::Online::FAccountInfo,1>,0>_>,TArray<TSharedRef<UE::Online::FAccountInfo,1>,TSizedDefaultAllocator<32>_>_&,_UE::Online::FAccountInfoRegistry::GetAllAccountInfo_::__l2::<lambda_1>,_UE::Online::FAccountInfoRegistry::GetAllAccountInfo_::__l2::<lambda_2>_>
              (&this->AuthDataByPlatformUserId,__return_storage_ptr__,&local_58,local_68);
    ReleaseSRWLockShared((PSRWLOCK)&this->IndexLock);
    if (*(longlong *)param_1 != 0) {
      plVar2 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar2 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

