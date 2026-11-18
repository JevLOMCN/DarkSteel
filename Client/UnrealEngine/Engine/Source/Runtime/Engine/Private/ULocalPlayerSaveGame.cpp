// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 55

// StaticClass @ 147ba67c0

UClass * __cdecl ULocalPlayerSaveGame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalPlayerSaveGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalPlayerSaveGame",
               &Z_Registration_Info_UClass_ULocalPlayerSaveGame.InnerSingleton,
               StaticRegisterNativesULocalPlayerSaveGame,0x58,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocalPlayerSaveGame>,
               InternalVTableHelperCtorCaller<ULocalPlayerSaveGame>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalPlayerSaveGame.InnerSingleton;
}

// ULocalPlayerSaveGame @ 147bbd890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayerSaveGame * __thiscall
ULocalPlayerSaveGame::ULocalPlayerSaveGame(ULocalPlayerSaveGame *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->LoadedDataVersion = -1;
  this->_padding_ = (longlong)&___7ULocalPlayerSaveGame__6B_;
  (this->OwningPlayer).field0_0x0.DebugPtr = (ULocalPlayer *)0x0;
  (this->SaveSlotName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SaveSlotName).Data.ArrayNum = 0;
  (this->SaveSlotName).Data.ArrayMax = 0;
  this->SavedDataVersion = 0;
  this->CurrentSaveRequest = 0;
  this->LastSuccessfulSaveRequest = 0;
  this->LastErrorSaveRequest = 0;
  return this;
}

// ULocalPlayerSaveGame @ 147bbd8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayerSaveGame * __thiscall
ULocalPlayerSaveGame::ULocalPlayerSaveGame(ULocalPlayerSaveGame *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->LoadedDataVersion = -1;
  this->_padding_ = (longlong)&___7ULocalPlayerSaveGame__6B_;
  (this->OwningPlayer).field0_0x0.DebugPtr = (ULocalPlayer *)0x0;
  (this->SaveSlotName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SaveSlotName).Data.ArrayNum = 0;
  (this->SaveSlotName).Data.ArrayMax = 0;
  this->SavedDataVersion = 0;
  this->CurrentSaveRequest = 0;
  this->LastSuccessfulSaveRequest = 0;
  this->LastErrorSaveRequest = 0;
  return this;
}

// ~ULocalPlayerSaveGame @ 147bbf9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayerSaveGame::~ULocalPlayerSaveGame(ULocalPlayerSaveGame *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULocalPlayerSaveGame__6B_;
  pFVar1 = (this->SaveSlotName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USaveGame__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 147bc3330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,int param_2,USaveGame *param_3)

{
  ULocalPlayer *pUVar1;
  longlong *plVar2;
  ULocalPlayerSaveGame *pUVar3;
  UObject *local_res8;
  FReadAccessScope local_38;
  
  pUVar1 = *(ULocalPlayer **)this;
  local_res8 = *(UObject **)((longlong)this + 0x20);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pUVar3 = ULocalPlayerSaveGame::ProcessLoadedSave
                     (param_3,param_1,param_2,(TSubclassOf<ULocalPlayerSaveGame>)&local_res8,pUVar1)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_38);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (plVar2 = *(longlong **)((longlong)this + 0x10), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,pUVar3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  return;
}

// AsyncLoadOrCreateSaveGameForLocalPlayer @ 147bca310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer
          (TSubclassOf<ULocalPlayerSaveGame> param_1,APlayerController *param_2,FString *param_3,
          FOnLocalPlayerSaveGameLoaded *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ULocalPlayer *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy> *pTVar7;
  UObject *local_res10;
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy> local_40;
  
  if (param_2 != (APlayerController *)0x0) {
    pUVar4 = APlayerController::GetLocalPlayer(param_2);
    if (pUVar4 != (ULocalPlayer *)0x0) {
      local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_70);
      local_b8 = *(undefined8 *)&param_4->field_0x8;
      local_b0 = *(undefined8 *)&param_4->field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
      local_d8 = (undefined1  [8])0x0;
      local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                 (FWriteAccessScope *)&local_90);
      local_78 = &local_d0;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVULocalPlayerSaveGame___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::`2'::<lambda_1>_>
                   ::_vftable_;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_c0,&local_58);
        puVar5[4] = local_b8;
        puVar5[5] = local_b0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
      pTVar7 = TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy>
                         (&local_40,
                          (TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy>
                           *)local_d8);
      local_res10 = *(UObject **)param_1.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      bVar2 = AsyncLoadOrCreateSaveGameForLocalPlayer
                        ((TSubclassOf<ULocalPlayerSaveGame>)&local_res10,pUVar4,param_3,pTVar7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
                 (FWriteAccessScope *)&local_a8);
      if ((local_d0.DelegateSize != 0) &&
         (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_d0,0,0,0x10);
        local_d0.DelegateSize = 0;
      }
      if (local_a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
      }
      if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_d8);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)param_4);
      return bVar2;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<304501670774046782>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                     ,0x3e,"LocalPlayer");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (1 < (byte)LogPlayerManagement._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return false;
}

// AsyncLoadOrCreateSaveGameForLocalPlayer @ 147bca570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer
          (TSubclassOf<ULocalPlayerSaveGame> param_1,ULocalPlayer *param_2,FString *param_3,
          TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy> *pTVar9;
  int iVar10;
  FStaticBasicLogRecord *pFVar11;
  ULocalPlayer *local_res10;
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  ULocalPlayer *local_a0;
  undefined1 local_98 [24];
  UObject *local_80;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy> local_40;
  
  if (param_2 == (ULocalPlayer *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<304501670774046800>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                       ,0x50,"LocalPlayer");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((byte)LogPlayerManagement._0_1_ < 2) goto LAB_147bca8a5;
    pFVar11 = &::LOG_Static;
  }
  else {
    lVar1 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar1 != 0) && (pUVar6 = StaticClass(), pUVar6 != (UClass *)0x0)) {
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar1 + 0x38) < iVar5) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
        iVar5 = (param_3->Data).ArrayNum;
        iVar10 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar10 = 0;
        }
        if (0 < iVar10) {
          local_a0 = param_2;
          TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy> *)
                     local_98,param_4);
          local_80 = *(UObject **)param_1.Class.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_80);
          }
          local_b8 = (undefined1  [8])0x0;
          local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_b0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
                     (FWriteAccessScope *)&local_60);
          local_48 = &local_b0;
          puVar7 = UE::Core::Private::DelegateAllocate(0x48,&local_b0);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &
                      ___7__TCommonDelegateInstanceState___A6AXAEBVFString__HPEAVUSaveGame___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar8 = FDelegateHandle::GenerateNewID();
            puVar7[2] = uVar8;
            *puVar7 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::`2'::<lambda_1>_>
                       ::_vftable_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_2);
            }
            puVar7[3] = 0;
            local_res10 = param_2;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_2);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res10);
            puVar7[4] = local_a0;
            TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar7 + 5),
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
            puVar7[8] = local_80;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_80);
            }
          }
          if (local_60.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
          if ((void *)local_98._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_98._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_98);
          pTVar9 = TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy>
                   ::
                   TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy>
                             (&local_40,
                              (TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy>
                               *)local_b8);
          iVar5 = (**(code **)(param_2->_padding_ + 0x338))(param_2);
          UGameplayStatics::AsyncLoadGameFromSlot(param_3,iVar5,pTVar9);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
                     (FWriteAccessScope *)&local_78);
          if ((local_b0.DelegateSize != 0) &&
             (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_b0,0,0,0x10);
            local_b0.DelegateSize = 0;
          }
          if (local_78.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
          }
          if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_b0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_b8);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
          if (*(void **)&param_4->field_0x8 != (void *)0x0) {
            FMemory::Free(*(void **)&param_4->field_0x8);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)param_4);
          return true;
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<304501670774046812>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                           ,0x5c,"SlotName.Len() > 0");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if ((byte)LogPlayerManagement._0_1_ < 2) goto LAB_147bca8a5;
        pFVar11 = &::LOG_Static;
        goto LAB_147bca899;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<304501670774046806>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                       ,0x56,"SaveGameClass");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((byte)LogPlayerManagement._0_1_ < 2) goto LAB_147bca8a5;
    pFVar11 = &::LOG_Static;
  }
LAB_147bca899:
  UE::Logging::Private::BasicLog<2>(pFVar11,(FLogCategoryBase *)&LogPlayerManagement);
LAB_147bca8a5:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return false;
}

// AsyncSaveGameToSlotForLocalPlayer @ 147bca990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULocalPlayerSaveGame::AsyncSaveGameToSlotForLocalPlayer(ULocalPlayerSaveGame *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy> *pTVar8;
  int iVar9;
  ULocalPlayerSaveGame *local_res8;
  undefined1 local_98 [8];
  FDelegateAllocation local_90;
  FString local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy> local_38;
  
  lVar5 = (**(code **)(this->_padding_ + 0x2c8))();
  if (lVar5 != 0) {
    iVar4 = (**(code **)(this->_padding_ + 0x2e0))(this);
    (**(code **)(this->_padding_ + 0x2e8))(this,&local_80);
    iVar9 = local_80.Data.ArrayNum + -1;
    if (local_80.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if (iVar9 < 1) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<304501670774046899>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                         ,0xb3,"RequestSlotName.Len() > 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (1 < (byte)LogPlayerManagement._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
      }
      bVar2 = false;
    }
    else {
      (**(code **)(this->_padding_ + 0x348))(this);
      local_98 = (undefined1  [8])0x0;
      local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_90.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
                 (FWriteAccessScope *)&local_58);
      local_40 = &local_90;
      puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_90);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVFString__H_N_ZUFDefaultDelegateUserPolicy__H__6B_
        ;
        *(int *)(puVar6 + 1) = this->CurrentSaveRequest;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VULocalPlayerSaveGame____A6AXAEBVFString__H_N_ZUFDefaultDelegateUserPolicy__H__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
        puVar6[4] = _vcall__856__flat______;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      pTVar8 = TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy>
                         (&local_38,
                          (TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy>
                           *)local_98);
      UGameplayStatics::AsyncSaveGameToSlot((USaveGame *)this,&local_80,iVar4,pTVar8);
      bVar2 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
                 (FWriteAccessScope *)&local_70);
      if ((local_90.DelegateSize != 0) &&
         (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_90,0,0,0x10);
        local_90.DelegateSize = 0;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_90.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_98);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    return bVar2;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<304501670774046891>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                     ,0xab,"GetLocalPlayer()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (1 < (byte)LogPlayerManagement._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  return false;
}

// CreateNewSaveGameForLocalPlayer @ 147bd4560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayerSaveGame * __cdecl
ULocalPlayerSaveGame::CreateNewSaveGameForLocalPlayer
          (TSubclassOf<ULocalPlayerSaveGame> param_1,ULocalPlayer *param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ULocalPlayerSaveGame *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  UObject *local_res8;
  FString local_18;
  
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pUVar4 = (ULocalPlayerSaveGame *)
           UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_res8);
  if (pUVar4 != (ULocalPlayerSaveGame *)0x0) {
    pUVar5 = StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pcVar2 = *(code **)(pUVar4->_padding_ + 0x330);
      pFVar6 = ::FString::FString(&local_18,param_3);
      (*pcVar2)(pUVar4,param_2,pFVar6,0);
      return pUVar4;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<304501670774046855>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                     ,0x87,"LoadedSave");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (ULocalPlayerSaveGame *)(*pcVar2)();
    return pUVar4;
  }
  return (ULocalPlayerSaveGame *)0x0;
}

// GetInvalidDataVersion @ 147be0af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall ULocalPlayerSaveGame::GetInvalidDataVersion(ULocalPlayerSaveGame *this)

{
  return -1;
}

// GetLatestDataVersion @ 147be0b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall ULocalPlayerSaveGame::GetLatestDataVersion(ULocalPlayerSaveGame *this)

{
  return 0;
}

// GetLocalPlayer @ 147be29a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall ULocalPlayerSaveGame::GetLocalPlayer(ULocalPlayerSaveGame *this)

{
  return (this->OwningPlayer).field0_0x0.DebugPtr;
}

// GetLocalPlayerController @ 147be2a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
ULocalPlayerSaveGame::GetLocalPlayerController(ULocalPlayerSaveGame *this)

{
  ULocalPlayer *this_00;
  APlayerController *pAVar1;
  
  this_00 = (this->OwningPlayer).field0_0x0.DebugPtr;
  if (this_00 != (ULocalPlayer *)0x0) {
    pAVar1 = UPlayer::GetPlayerController((UPlayer *)this_00,(UWorld *)0x0);
    return pAVar1;
  }
  return (APlayerController *)0x0;
}

// GetPlatformUserId @ 147be43e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPlatformUserId __thiscall ULocalPlayerSaveGame::GetPlatformUserId(ULocalPlayerSaveGame *this)

{
  ULocalPlayer *pUVar1;
  int *in_RDX;
  
  pUVar1 = (this->OwningPlayer).field0_0x0.DebugPtr;
  if (pUVar1 != (ULocalPlayer *)0x0) {
    *in_RDX = (pUVar1->PlatformUserId).InternalId;
    return (FPlatformUserId)(int)in_RDX;
  }
  *in_RDX = -1;
  return (FPlatformUserId)(int)in_RDX;
}

// GetPlatformUserIndex @ 147be4410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall ULocalPlayerSaveGame::GetPlatformUserIndex(ULocalPlayerSaveGame *this)

{
  ULocalPlayer *pUVar1;
  int iVar2;
  
  pUVar1 = (this->OwningPlayer).field0_0x0.DebugPtr;
  if (pUVar1 != (ULocalPlayer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147be441c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(pUVar1->_padding_ + 0x338))();
    return iVar2;
  }
  return -1;
}

// GetPrivateStaticClass @ 147be5970

UClass * __cdecl ULocalPlayerSaveGame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalPlayerSaveGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalPlayerSaveGame",
               &Z_Registration_Info_UClass_ULocalPlayerSaveGame.InnerSingleton,
               StaticRegisterNativesULocalPlayerSaveGame,0x58,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocalPlayerSaveGame>,
               InternalVTableHelperCtorCaller<ULocalPlayerSaveGame>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalPlayerSaveGame.InnerSingleton;
}

// GetSaveSlotName @ 147be7200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
ULocalPlayerSaveGame::GetSaveSlotName(ULocalPlayerSaveGame *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->SaveSlotName);
  return __return_storage_ptr__;
}

// GetSavedDataVersion @ 147be7230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall ULocalPlayerSaveGame::GetSavedDataVersion(ULocalPlayerSaveGame *this)

{
  return this->SavedDataVersion;
}

// HandlePostLoad @ 147beda20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayerSaveGame::HandlePostLoad(ULocalPlayerSaveGame *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ULocalPlayerSaveGame_OnPostLoad);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147beda4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// HandlePostSave @ 147beda60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayerSaveGame::HandlePostSave(ULocalPlayerSaveGame *this,bool param_1)

{
  UFunction *pUVar1;
  FName local_res8;
  undefined1 local_res10 [8];
  FString local_48;
  void *local_38 [2];
  
  if (param_1) {
    if ((byte)LogPlayerManagement._0_1_ < 6) goto LAB_147bedbc3;
    (**(code **)(this->_padding_ + 0x2e0))();
    (**(code **)(this->_padding_ + 0x2e8))(this,local_38);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_48);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  else {
    if ((byte)LogPlayerManagement._0_1_ < 2) goto LAB_147bedbc3;
    (**(code **)(this->_padding_ + 0x2e0))();
    (**(code **)(this->_padding_ + 0x2e8))(this,local_38);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_48);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
LAB_147bedbc3:
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ULocalPlayerSaveGame_OnPostSave);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// HandlePreSave @ 147bedc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayerSaveGame::HandlePreSave(ULocalPlayerSaveGame *this)

{
  int iVar1;
  UFunction *pUVar2;
  FName local_res8;
  FString local_38;
  void *local_28 [2];
  
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_ULocalPlayerSaveGame_OnPreSave);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,0);
  iVar1 = (**(code **)(this->_padding_ + 0x308))(this);
  this->CurrentSaveRequest = this->CurrentSaveRequest + 1;
  this->SavedDataVersion = iVar1;
  if (5 < (byte)LogPlayerManagement._0_1_) {
    (**(code **)(this->_padding_ + 0x2e0))(this);
    (**(code **)(this->_padding_ + 0x2e8))(this,local_28);
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  return;
}

// InitializeSaveGame @ 147bf00b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULocalPlayerSaveGame::InitializeSaveGame
          (ULocalPlayerSaveGame *this,ULocalPlayer *param_1,FString *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)(this->_padding_ + 0x2d0))();
  (**(code **)(this->_padding_ + 0x2f0))(this,param_2);
  if (param_3) {
    this->LoadedDataVersion = this->SavedDataVersion;
    (**(code **)(this->_padding_ + 0x340))();
  }
  else {
    (**(code **)(this->_padding_ + 0x338))(this);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// IsSaveInProgress @ 147bf1400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULocalPlayerSaveGame::IsSaveInProgress(ULocalPlayerSaveGame *this)

{
  if ((this->LastErrorSaveRequest < this->CurrentSaveRequest) &&
     (this->LastSuccessfulSaveRequest < this->CurrentSaveRequest)) {
    return true;
  }
  return false;
}

// LoadOrCreateSaveGameForLocalPlayer @ 147bf1990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayerSaveGame * __cdecl
ULocalPlayerSaveGame::LoadOrCreateSaveGameForLocalPlayer
          (TSubclassOf<ULocalPlayerSaveGame> param_1,APlayerController *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  ULocalPlayer *pUVar3;
  ULocalPlayerSaveGame *pUVar4;
  UObject *local_res10;
  
  if (param_2 != (APlayerController *)0x0) {
    pUVar3 = APlayerController::GetLocalPlayer(param_2);
    if (pUVar3 != (ULocalPlayer *)0x0) {
      local_res10 = *(UObject **)param_1.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      pUVar4 = LoadOrCreateSaveGameForLocalPlayer
                         ((TSubclassOf<ULocalPlayerSaveGame>)&local_res10,pUVar3,param_3);
      return pUVar4;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<304501670774046734>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                     ,0xe,"LocalPlayer");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (ULocalPlayerSaveGame *)(*pcVar1)();
    return pUVar4;
  }
  if (1 < (byte)LogPlayerManagement._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  return (ULocalPlayerSaveGame *)0x0;
}

// LoadOrCreateSaveGameForLocalPlayer @ 147bf1a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayerSaveGame * __cdecl
ULocalPlayerSaveGame::LoadOrCreateSaveGameForLocalPlayer
          (TSubclassOf<ULocalPlayerSaveGame> param_1,ULocalPlayer *param_2,FString *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ULocalPlayerSaveGame *pUVar6;
  UClass *pUVar7;
  USaveGame *pUVar8;
  FStaticBasicLogRecord *pFVar9;
  UObject *local_res10;
  
  if (param_2 == (ULocalPlayer *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<304501670774046745>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                       ,0x19,"LocalPlayer");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (ULocalPlayerSaveGame *)(*pcVar3)();
      return pUVar6;
    }
    if ((byte)LogPlayerManagement._0_1_ < 2) {
      return (ULocalPlayerSaveGame *)0x0;
    }
    pFVar9 = &::LOG_Static;
  }
  else {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar2 != 0) && (pUVar7 = StaticClass(), pUVar7 != (UClass *)0x0)) {
      iVar5 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar5) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
        iVar1 = (param_3->Data).ArrayNum;
        pUVar8 = (USaveGame *)0x0;
        iVar5 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar5 = 0;
        }
        if (0 < iVar5) {
          iVar5 = (**(code **)(param_2->_padding_ + 0x338))(param_2);
          bVar4 = UGameplayStatics::DoesSaveGameExist(param_3,iVar5);
          if (bVar4) {
            pUVar8 = UGameplayStatics::LoadGameFromSlot(param_3,iVar5);
          }
          local_res10 = *(UObject **)param_1.Class.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res10 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_res10);
          }
          pUVar6 = ProcessLoadedSave(pUVar8,param_3,iVar5,
                                     (TSubclassOf<ULocalPlayerSaveGame>)&local_res10,param_2);
          return pUVar6;
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<304501670774046757>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                           ,0x25,"SlotName.Len() > 0");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar6 = (ULocalPlayerSaveGame *)(*pcVar3)();
          return pUVar6;
        }
        if ((byte)LogPlayerManagement._0_1_ < 2) {
          return (ULocalPlayerSaveGame *)0x0;
        }
        pFVar9 = &::LOG_Static;
        goto LAB_147bf1c13;
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<304501670774046751>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                       ,0x1f,"SaveGameClass");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (ULocalPlayerSaveGame *)(*pcVar3)();
      return pUVar6;
    }
    if ((byte)LogPlayerManagement._0_1_ < 2) {
      return (ULocalPlayerSaveGame *)0x0;
    }
    pFVar9 = &::LOG_Static;
  }
LAB_147bf1c13:
  UE::Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogPlayerManagement);
  return (ULocalPlayerSaveGame *)0x0;
}

// OnPostLoad @ 147bf5f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayerSaveGame::OnPostLoad(ULocalPlayerSaveGame *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ULocalPlayerSaveGame_OnPostLoad);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147bf5f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnPostSave @ 147bf5f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayerSaveGame::OnPostSave(ULocalPlayerSaveGame *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ULocalPlayerSaveGame_OnPostSave);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// OnPreSave @ 147bf6060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayerSaveGame::OnPreSave(ULocalPlayerSaveGame *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ULocalPlayerSaveGame_OnPreSave);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147bf608d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// OnResetToDefault @ 147bf6110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayerSaveGame::OnResetToDefault(ULocalPlayerSaveGame *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ULocalPlayerSaveGame_OnResetToDefault);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147bf613d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ProcessLoadedSave @ 147bf8900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayerSaveGame * __cdecl
ULocalPlayerSaveGame::ProcessLoadedSave
          (USaveGame *param_1,FString *param_2,int param_3,TSubclassOf<ULocalPlayerSaveGame> param_4
          ,ULocalPlayer *param_5)

{
  int iVar1;
  code *pcVar2;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  FString *pFVar7;
  ULocalPlayerSaveGame *pUVar8;
  FName local_res8;
  UObject *local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  
  if (param_1 == (USaveGame *)0x0) {
LAB_147bf89de:
    if (param_1 == (USaveGame *)0x0) goto LAB_147bf8a89;
    param_1 = (USaveGame *)0x0;
  }
  else {
    pUVar5 = StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_147bf89de;
    lVar6 = *(longlong *)param_4.Class.field0_0x0;
    if ((lVar6 == 0) || (pUVar5 = StaticClass(), pUVar5 == (UClass *)0x0)) {
LAB_147bf898f:
      lVar6 = 0;
    }
    else {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_147bf898f;
      lVar6 = *(longlong *)param_4.Class.field0_0x0;
    }
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) +
         (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x330);
      pFVar7 = ::FString::FString(&local_40,param_2);
      (*pcVar2)(param_1,param_5,pFVar7,1);
      return (ULocalPlayerSaveGame *)param_1;
    }
  }
  if (2 < (byte)LogPlayerManagement._0_1_) {
    if (param_1 == (USaveGame *)0x0) {
      ::FString::FString(&local_50,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res8,&local_50);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
LAB_147bf8a89:
  pUVar3 = *(UObject **)param_4.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_58 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pUVar8 = (ULocalPlayerSaveGame *)
           UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_58);
  if (pUVar8 != (ULocalPlayerSaveGame *)0x0) {
    pUVar5 = StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pcVar2 = *(code **)(pUVar8->_padding_ + 0x330);
      pFVar7 = ::FString::FString(&local_30,param_2);
      (*pcVar2)(pUVar8,param_5,pFVar7,0);
      return pUVar8;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<304501670774046855>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                     ,0x87,"LoadedSave");
  if (!bVar4) {
    return (ULocalPlayerSaveGame *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pUVar8 = (ULocalPlayerSaveGame *)(*pcVar2)();
  return pUVar8;
}

// ProcessSaveComplete @ 147bf8b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULocalPlayerSaveGame::ProcessSaveComplete
          (ULocalPlayerSaveGame *this,FString *param_1,int param_2,bool param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3) {
    if (this->CurrentSaveRequest <= this->LastSuccessfulSaveRequest) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<304501670774046921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                         ,0xc9,"CurrentSaveRequest > LastSuccessfulSaveRequest");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->LastSuccessfulSaveRequest = this->CurrentSaveRequest;
  }
  else {
    if (this->CurrentSaveRequest <= this->LastErrorSaveRequest) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<304501670774046926>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                         ,0xce,"CurrentSaveRequest > LastErrorSaveRequest");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->LastErrorSaveRequest = this->CurrentSaveRequest;
  }
                    /* WARNING: Could not recover jumptable at 0x000147bf8c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x350))(this,param_3);
  return;
}

// ResetToDefault @ 147bfdd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayerSaveGame::ResetToDefault(ULocalPlayerSaveGame *this)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  UFunction *pUVar2;
  
  iVar1 = (**(code **)(this->_padding_ + 0x300))();
  this->SavedDataVersion = iVar1;
  this->LoadedDataVersion = iVar1;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_ULocalPlayerSaveGame_OnResetToDefault);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147bfdd6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar2,0,UNRECOVERED_JUMPTABLE);
  return;
}

// SaveGameToSlotForLocalPlayer @ 147bfe780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULocalPlayerSaveGame::SaveGameToSlotForLocalPlayer(ULocalPlayerSaveGame *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar7;
  FString local_18;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar6 = (**(code **)(this->_padding_ + 0x2c8))();
  if (lVar6 != 0) {
    iVar5 = (**(code **)(this->_padding_ + 0x2e0))(this);
    (**(code **)(this->_padding_ + 0x2e8))(this,&local_18);
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    if (iVar2 < 1) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<304501670774046873>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                         ,0x99,"RequestSlotName.Len() > 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (1 < (byte)LogPlayerManagement._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
      }
      bVar3 = false;
    }
    else {
      (**(code **)(this->_padding_ + 0x348))(this);
      bVar3 = UGameplayStatics::SaveGameToSlot((USaveGame *)this,&local_18,iVar5);
      (**(code **)(this->_padding_ + 0x358))
                (this,&local_18,iVar5,bVar3,CONCAT44(uVar7,this->CurrentSaveRequest));
      bVar3 = true;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return bVar3;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<304501670774046865>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                     ,0x91,"GetLocalPlayer()");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (1 < (byte)LogPlayerManagement._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  return false;
}

// SetLocalPlayer @ 147c01150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULocalPlayerSaveGame::SetLocalPlayer(ULocalPlayerSaveGame *this,ULocalPlayer *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULocalPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->OwningPlayer).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->OwningPlayer).field0_0x0.DebugPtr = param_1;
  return;
}

// SetSaveSlotName @ 147c01c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULocalPlayerSaveGame::SetSaveSlotName(ULocalPlayerSaveGame *this,FString *param_1)

{
  ::FString::operator=(&this->SaveSlotName,param_1);
  return;
}

// StaticRegisterNativesULocalPlayerSaveGame @ 147c03720

void __cdecl ULocalPlayerSaveGame::StaticRegisterNativesULocalPlayerSaveGame(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_ULocalPlayerSaveGame_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WasLastSaveSuccessful @ 147c0e340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULocalPlayerSaveGame::WasLastSaveSuccessful(ULocalPlayerSaveGame *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x328))();
  if ((cVar1 != '\0') && (this->LastErrorSaveRequest < this->LastSuccessfulSaveRequest)) {
    return true;
  }
  return false;
}

// WasLoaded @ 147c0e380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULocalPlayerSaveGame::WasLoaded(ULocalPlayerSaveGame *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x300))();
  return this->LoadedDataVersion != iVar1;
}

// WasSaveRequested @ 147c0e3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULocalPlayerSaveGame::WasSaveRequested(ULocalPlayerSaveGame *this)

{
  return 0 < this->CurrentSaveRequest;
}

// execAsyncLoadOrCreateSaveGameForLocalPlayer @ 147c12bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ULocalPlayerSaveGame::execAsyncLoadOrCreateSaveGameForLocalPlayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  APlayerController *this;
  UObject *pUVar4;
  bool bVar5;
  int iVar6;
  ULocalPlayer *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy> *this_00;
  UClass *pUVar10;
  TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy> *pTVar11;
  FStaticBasicLogRecord *pFVar12;
  undefined1 uVar13;
  APlayerController *local_res10;
  UObject *local_res18;
  ULocalPlayer *local_res20;
  undefined1 local_1d8 [8];
  FDelegateAllocation local_1d0;
  undefined1 local_1c0 [8];
  FDelegateAllocation local_1b8;
  FString local_1a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_198;
  undefined8 local_190;
  undefined8 local_188;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  undefined8 local_178;
  undefined8 local_170;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  undefined8 local_160;
  undefined8 local_158;
  ULocalPlayer *local_150;
  undefined1 local_148 [24];
  UObject *local_130;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy> local_70;
  TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy> local_58;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Data.ArrayNum = 0;
  local_1a8.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_198.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_190 = 0;
  local_188 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_198,&local_b8);
  local_178 = local_190;
  local_170 = local_188;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b8);
  pUVar4 = local_res18;
  this = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  if (this != (APlayerController *)0x0) {
    pUVar7 = APlayerController::GetLocalPlayer(this);
    if (pUVar7 != (ULocalPlayer *)0x0) {
      local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_180,&local_a0);
      local_160 = local_178;
      local_158 = local_170;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a0);
      local_1c0 = (undefined1  [8])0x0;
      local_1b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1b8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c0,
                 (FWriteAccessScope *)&local_f8);
      local_e0 = &local_1b8;
      puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_1b8);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVULocalPlayerSaveGame___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::`2'::<lambda_1>_>
                   ::_vftable_;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_168,&local_88);
        puVar8[4] = local_160;
        puVar8[5] = local_158;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_88);
      }
      if (local_f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
      this_00 = TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy>::
                TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy>
                          (&local_70,
                           (TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy>
                            *)local_1c0);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_147c12ea3:
        if (pUVar4 == (UObject *)0x0) goto LAB_147c13129;
        pUVar10 = StaticClass();
        if (pUVar10 == (UClass *)0x0) goto LAB_147c13129;
        iVar6 = (int)pUVar10->_padding_;
        if ((*(int *)&pUVar4[1].field_0x10 < iVar6) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar6 * 8) !=
            &pUVar10->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_147c13129;
        iVar6 = local_1a8.Data.ArrayNum + -1;
        if (local_1a8.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        if (iVar6 < 1) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<304501670774046812>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                             ,0x5c,"SlotName.Len() > 0");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (1 < (byte)LogPlayerManagement._0_1_) {
            pFVar12 = &::LOG_Static;
            goto LAB_147c13166;
          }
          goto LAB_147c13172;
        }
        local_150 = pUVar7;
        TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(ULocalPlayerSaveGame_*),FDefaultDelegateUserPolicy> *)
                   local_148,this_00);
        local_130 = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_1d8 = (undefined1  [8])0x0;
        local_1d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_1d0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d8,
                   (FWriteAccessScope *)&local_d8);
        local_c0 = &local_1d0;
        puVar8 = UE::Core::Private::DelegateAllocate(0x48,&local_1d0);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVFString__HPEAVUSaveGame___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy,`ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer'::`2'::<lambda_1>_>
                     ::_vftable_;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          puVar8[3] = 0;
          local_res20 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res20);
          puVar8[4] = local_150;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar8 + 5),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
          puVar8[8] = local_130;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_130);
          }
        }
        if (local_d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
        if ((void *)local_148._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_148._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_148);
        pTVar11 = TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy>
                  ::
                  TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy>
                            (&local_58,
                             (TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy>
                              *)local_1d8);
        iVar6 = (**(code **)(pUVar7->_padding_ + 0x338))(pUVar7);
        UGameplayStatics::AsyncLoadGameFromSlot(&local_1a8,iVar6,pTVar11);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d8,
                   (FWriteAccessScope *)&local_128);
        if ((local_1d0.DelegateSize != 0) &&
           (local_1d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_1d0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_1d0,0,0,0x10);
          local_1d0.DelegateSize = 0;
        }
        if (local_128.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
        }
        if (local_1d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_1d0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1d8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
        if (*(void **)&this_00->field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&this_00->field_0x8);
        }
        uVar13 = 1;
      }
      else {
        if (pUVar4 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar4);
          goto LAB_147c12ea3;
        }
LAB_147c13129:
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<304501670774046806>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                           ,0x56,"SaveGameClass");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (1 < (byte)LogPlayerManagement._0_1_) {
          pFVar12 = &::LOG_Static;
LAB_147c13166:
          UE::Logging::Private::BasicLog<2>(pFVar12,(FLogCategoryBase *)&LogPlayerManagement);
        }
LAB_147c13172:
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
        if (*(void **)&this_00->field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&this_00->field_0x8);
        }
        uVar13 = 0;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this_00);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c0,
                 (FWriteAccessScope *)&local_110);
      if ((local_1b8.DelegateSize != 0) &&
         (local_1b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1b8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1b8,0,0,0x10);
        local_1b8.DelegateSize = 0;
      }
      if (local_110.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
      }
      if (local_1b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1b8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1c0);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
      goto LAB_147c13262;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<304501670774046782>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                     ,0x3e,"LocalPlayer");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (1 < (byte)LogPlayerManagement._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
  uVar13 = 0;
LAB_147c13262:
  *(undefined1 *)param_3 = uVar13;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_198.AccessDetector);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  return;
}

// execAsyncSaveGameToSlotForLocalPlayer @ 147c13530

void __cdecl
ULocalPlayerSaveGame::execAsyncSaveGameToSlotForLocalPlayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetInvalidDataVersion @ 147c14140

void __cdecl
ULocalPlayerSaveGame::execGetInvalidDataVersion(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x300))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetLatestDataVersion @ 147c14180

void __cdecl
ULocalPlayerSaveGame::execGetLatestDataVersion(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x308))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetLocalPlayerController @ 147c141c0

void __cdecl
ULocalPlayerSaveGame::execGetLocalPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetPlatformUserId @ 147c144b0

void __cdecl
ULocalPlayerSaveGame::execGetPlatformUserId(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined4 *)(**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_res8);
  *(undefined4 *)param_3 = *puVar1;
  return;
}

// execGetPlatformUserIndex @ 147c144f0

void __cdecl
ULocalPlayerSaveGame::execGetPlatformUserIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetSaveSlotName @ 147c14570

void __cdecl
ULocalPlayerSaveGame::execGetSaveSlotName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetSavedDataVersion @ 147c14600

void __cdecl
ULocalPlayerSaveGame::execGetSavedDataVersion(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2f8))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execIsSaveInProgress @ 147c149a0

void __cdecl
ULocalPlayerSaveGame::execIsSaveInProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x318))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execLoadOrCreateSaveGameForLocalPlayer @ 147c149e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ULocalPlayerSaveGame::execLoadOrCreateSaveGameForLocalPlayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  APlayerController *this;
  UObject *pUVar4;
  bool bVar5;
  int iVar6;
  ULocalPlayer *pUVar7;
  UClass *pUVar8;
  ULocalPlayerSaveGame *pUVar9;
  FStaticBasicLogRecord *pFVar10;
  ULocalPlayerSaveGame *pUVar11;
  APlayerController *local_res10;
  UObject *local_res18;
  UObject *local_res20;
  FString local_38;
  
  pUVar9 = (ULocalPlayerSaveGame *)0x0;
  pUVar11 = (ULocalPlayerSaveGame *)0x0;
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pUVar4 = local_res18;
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  if (this == (APlayerController *)0x0) {
LAB_147c14c77:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<304501670774046734>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                       ,0xe,"LocalPlayer");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((byte)LogPlayerManagement._0_1_ < 2) goto LAB_147c14cc0;
    pFVar10 = &::LOG_Static;
  }
  else {
    pUVar7 = APlayerController::GetLocalPlayer(this);
    if (pUVar7 == (ULocalPlayer *)0x0) goto LAB_147c14c77;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UObject *)0x0) goto LAB_147c14b37;
LAB_147c14c38:
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<304501670774046751>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                         ,0x1f,"SaveGameClass");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((byte)LogPlayerManagement._0_1_ < 2) goto LAB_147c14cc0;
      pFVar10 = &::LOG_Static;
    }
    else {
      if (pUVar4 == (UObject *)0x0) goto LAB_147c14c38;
      UE::GC::MarkAsReachable(pUVar4);
LAB_147c14b37:
      pUVar8 = StaticClass();
      if (pUVar8 == (UClass *)0x0) goto LAB_147c14c38;
      iVar6 = (int)pUVar8->_padding_;
      if ((*(int *)&pUVar4[1].field_0x10 < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar6 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_147c14c38;
      iVar6 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar6 = (**(code **)(pUVar7->_padding_ + 0x338))(pUVar7);
        bVar5 = UGameplayStatics::DoesSaveGameExist(&local_38,iVar6);
        if (bVar5) {
          pUVar9 = (ULocalPlayerSaveGame *)UGameplayStatics::LoadGameFromSlot(&local_38,iVar6);
        }
        local_res20 = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pUVar11 = ProcessLoadedSave((USaveGame *)pUVar9,&local_38,iVar6,
                                    (TSubclassOf<ULocalPlayerSaveGame>)&local_res20,pUVar7);
        goto LAB_147c14cc0;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<304501670774046757>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\SaveGame.cpp"
                         ,0x25,"SlotName.Len() > 0");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar11 = pUVar9;
      if ((byte)LogPlayerManagement._0_1_ < 2) goto LAB_147c14cc0;
      pFVar10 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar10,(FLogCategoryBase *)&LogPlayerManagement);
  pUVar11 = pUVar9;
LAB_147c14cc0:
  *(ULocalPlayerSaveGame **)param_3 = pUVar11;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execResetToDefault @ 147c15520

void __cdecl
ULocalPlayerSaveGame::execResetToDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c15538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x338))();
  return;
}

// execSaveGameToSlotForLocalPlayer @ 147c15580

void __cdecl
ULocalPlayerSaveGame::execSaveGameToSlotForLocalPlayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execWasLastSaveSuccessful @ 147c16680

void __cdecl
ULocalPlayerSaveGame::execWasLastSaveSuccessful(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 800))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execWasLoaded @ 147c166c0

void __cdecl ULocalPlayerSaveGame::execWasLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x310))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execWasSaveRequested @ 147c16700

void __cdecl
ULocalPlayerSaveGame::execWasSaveRequested(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x328))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

