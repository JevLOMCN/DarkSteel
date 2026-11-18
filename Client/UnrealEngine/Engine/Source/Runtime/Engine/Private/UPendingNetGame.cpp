// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// GetNetDriver @ 14726ed20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetDriver * __thiscall UPendingNetGame::GetNetDriver(UPendingNetGame *this)

{
  return (this->NetDriver).field0_0x0.DebugPtr;
}

// StaticClass @ 147270900

UClass * __cdecl UPendingNetGame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPendingNetGame.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PendingNetGame",
               &Z_Registration_Info_UClass_UPendingNetGame.InnerSingleton,
               StaticRegisterNativesUPendingNetGame,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPendingNetGame>,
               InternalVTableHelperCtorCaller<UPendingNetGame>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPendingNetGame.InnerSingleton;
}

// UPendingNetGame @ 1481c86f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPendingNetGame * __thiscall
UPendingNetGame::UPendingNetGame(UPendingNetGame *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  (this->DemoNetDriver).field0_0x0.DebugPtr = (UDemoNetDriver *)0x0;
  FURL::FURL(&this->URL,(wchar_t *)0x0);
  (this->ConnectionError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectionError).Data.ArrayNum = 0;
  (this->ConnectionError).Data.ArrayMax = 0;
  return this;
}

// UPendingNetGame @ 1481c8750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPendingNetGame * __thiscall
UPendingNetGame::UPendingNetGame(UPendingNetGame *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  (this->DemoNetDriver).field0_0x0.DebugPtr = (UDemoNetDriver *)0x0;
  FURL::FURL(&this->URL,(wchar_t *)0x0);
  (this->ConnectionError).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectionError).Data.ArrayNum = 0;
  (this->ConnectionError).Data.ArrayMax = 0;
  return this;
}

// ~UPendingNetGame @ 1481c9670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPendingNetGame::~UPendingNetGame(UPendingNetGame *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  pFVar1 = (this->ConnectionError).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FURL::~FURL(&this->URL);
  UObject::~UObject((UObject *)this);
  return;
}

// AddReferencedObjects @ 1481d35c0

void __cdecl UPendingNetGame::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPendingNetGame>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UPendingNetGame>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// BeginHandshake @ 1481d5440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPendingNetGame::BeginHandshake(UPendingNetGame *this)

{
  PacketHandler *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UPendingNetGame *local_res8;
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = (((((this->NetDriver).field0_0x0.DebugPtr)->ServerConnection).field0_0x0.DebugPtr)->
            Handler).Ptr;
  if (this_00 != (PacketHandler *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUPendingNetGame____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = SendInitialJoin;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    PacketHandler::BeginHandshaking
              (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
    return;
  }
  SendInitialJoin(this);
  return;
}

// FinalizeEncryptedConnection @ 1481f0160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPendingNetGame::FinalizeEncryptedConnection
          (UPendingNetGame *this,FEncryptionKeyResponse *param_1,
          TWeakObjectPtr<UNetConnection,FWeakObjectPtr> param_2)

{
  EConnectionState EVar1;
  UNetConnection *this_00;
  wchar_t *pwVar2;
  FWeakObjectPtr local_res18 [2];
  FString local_18;
  
  local_res18[0] = param_2.WeakPtr;
  this_00 = (UNetConnection *)FWeakObjectPtr::Get(local_res18);
  if (this_00 == (UNetConnection *)0x0) {
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    ::FString::operator=(&this->ConnectionError,L"Connection missing during encryption ack");
  }
  else {
    EVar1 = UNetConnection::GetConnectionState(this_00);
    if (((EVar1 == USOCK_Invalid) ||
        (EVar1 = UNetConnection::GetConnectionState(this_00), EVar1 == USOCK_Closed)) ||
       ((this_00->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0)) {
      if (2 < (byte)LogNet._0_1_) {
        (**(code **)(this_00->_padding_ + 0x2e0))(this_00,&local_18);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      ::FString::operator=(&this->ConnectionError,L"Connection encryption state failure");
      UNetConnection::Close(this_00);
      return;
    }
    if (param_1->Response == Success) {
      UNetConnection::EnableEncryption(this_00,&param_1->EncryptionData);
      return;
    }
    pwVar2 = ::LexToString(param_1->Response);
    ::FString::FString(&local_18,pwVar2);
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    ::FString::operator=(&this->ConnectionError,L"Encryption ack failure");
    UNetConnection::Close(this_00);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// FinishDestroy @ 1481f2b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPendingNetGame::FinishDestroy(UPendingNetGame *this)

{
  undefined1 local_res8 [32];
  
  if ((this->NetDriver).field0_0x0.DebugPtr != (UNetDriver *)0x0) {
    `UPendingNetGame::FinishDestroy'::__l2::<lambda_1>::operator()(local_res8);
  }
  (this->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetFirstGamePlayer @ 1481faaf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULocalPlayer * __thiscall UPendingNetGame::GetFirstGamePlayer(UPendingNetGame *this)

{
  ULocalPlayer *pUVar1;
  
  pUVar1 = UEngine::GetFirstGamePlayer(GEngine,this);
  return pUVar1;
}

// GetPrivateStaticClass @ 1481fdfd0

UClass * __cdecl UPendingNetGame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPendingNetGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PendingNetGame",
               &Z_Registration_Info_UClass_UPendingNetGame.InnerSingleton,
               StaticRegisterNativesUPendingNetGame,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPendingNetGame>,
               InternalVTableHelperCtorCaller<UPendingNetGame>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPendingNetGame.InnerSingleton;
}

// InitNetDriver @ 148202f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall UPendingNetGame::InitNetDriver(UPendingNetGame *this,UNetDriver *param_1)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  FNameEntryId FVar9;
  uint uVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FText *pFVar11;
  FString *pFVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FLLMScope local_108 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  FDelegateAllocation local_f8;
  FNameEntryId local_e8;
  uint uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [8];
  UPendingNetGame *local_c0;
  FMemScope local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FText local_60;
  FText local_50;
  FText local_40;
  
  FLLMScope::FLLMScope(local_108,Networking,false,None,Default,true);
  FMemScope::FMemScope(&local_b8,Networking,true);
  if (GDisallowNetworkTravel == false) {
    if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
       (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
      if (__CsvProfilerStat40 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat40 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      FNetworkProfiler::TrackSessionChange(&GNetworkProfiler,true,&this->URL);
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    }
    if (param_1 == (UNetDriver *)0x0) {
      FVar9 = FNameEntryId::FromValidEName((EName)local_d0);
      uStack_e4 = 0;
      local_e8.Value = *(uint *)CONCAT44(extraout_var,FVar9.Value);
      FVar9 = FNameEntryId::FromValidEName((EName)local_cc);
      FVar3.Number = uStack_e4;
      FVar3.ComparisonIndex.Value = local_e8.Value;
      uStack_dc = 0;
      local_e0 = *(uint *)CONCAT44(extraout_var_00,FVar9.Value);
      FVar4.Number = 0;
      FVar4.ComparisonIndex.Value = local_e0;
      bVar6 = UEngine::CreateNamedNetDriver(GEngine,this,FVar4,FVar3);
      if (bVar6) {
        FVar9 = FNameEntryId::FromValidEName((EName)local_c8);
        uStack_d4 = 0;
        local_d8 = *(uint *)CONCAT44(extraout_var_01,FVar9.Value);
        FVar5.Number = 0;
        FVar5.ComparisonIndex.Value = local_d8;
        param_1 = UEngine::FindNamedNetDriver(GEngine,this,FVar5);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNetDriver *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        (this->NetDriver).field0_0x0.DebugPtr = param_1;
      }
      else {
        param_1 = (this->NetDriver).field0_0x0.DebugPtr;
      }
      if (param_1 == (UNetDriver *)0x0) {
        if (2 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_60,L"Engine",L"NetworkDriverInit",
                             L"Error creating network driver.");
        pFVar12 = FText::ToString(pFVar11);
        ::FString::operator=(&this->ConnectionError,pFVar12);
        goto LAB_1482034bc;
      }
    }
    else {
      if ((param_1->ServerConnection).field0_0x0.DebugPtr != (UNetConnection *)0x0) {
        local_res18[0] = 0;
        `UPendingNetGame::InitNetDriver'::__l19::<lambda_1>::operator()(local_res18);
      }
      if ((param_1->ConnectionlessHandler).Ptr != (PacketHandler *)0x0) {
        local_res20[0] = 0;
        `UPendingNetGame::InitNetDriver'::__l19::<lambda_2>::operator()(local_res20);
      }
      (this->NetDriver).field0_0x0.DebugPtr = param_1;
    }
    plVar13 = &this->_padding_;
    if (this == (UPendingNetGame *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    cVar7 = (**(code **)(param_1->_padding_ + 0x2e0))
                      (param_1,plVar13,&this->URL,&this->ConnectionError);
    if (cVar7 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetDelegates::OnPendingNetGameConnectionCreated,(FWriteAccessScope *)&local_b0);
      bVar6 = false;
      FNetDelegates::OnPendingNetGameConnectionCreated._28_4_ =
           FNetDelegates::OnPendingNetGameConnectionCreated._28_4_ + 1;
      uVar17 = FNetDelegates::OnPendingNetGameConnectionCreated._16_4_ - 1;
      if (-1 < (int)uVar17) {
        lVar16 = (longlong)(int)uVar17 << 4;
        bVar6 = false;
        do {
          uVar10 = 0;
          if ((int)uVar17 < (int)FNetDelegates::OnPendingNetGameConnectionCreated._16_4_) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((*(int *)(lVar16 + 8 + FNetDelegates::OnPendingNetGameConnectionCreated._8_8_) == 0)
              || (*(longlong **)(lVar16 + FNetDelegates::OnPendingNetGameConnectionCreated._8_8_) ==
                  (longlong *)0x0)) ||
             (cVar7 = (**(code **)(**(longlong **)
                                     (lVar16 + FNetDelegates::OnPendingNetGameConnectionCreated.
                                               _8_8_) + 0x68))(), cVar7 == '\0')) {
            bVar6 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      FNetDelegates::OnPendingNetGameConnectionCreated._28_4_ =
           FNetDelegates::OnPendingNetGameConnectionCreated._28_4_ + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FNetDelegates::OnPendingNetGameConnectionCreated,false);
      }
      if (local_b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
      }
      plVar13 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))(this);
      if (plVar13 == (longlong *)0x0) {
        BeginHandshake(this);
      }
      else {
        local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_f8.DelegateSize = 0;
        pcVar2 = *(code **)(*plVar13 + 0x310);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_100,(FWriteAccessScope *)&local_80);
        local_68 = &local_f8;
        puVar14 = UE::Core::Private::DelegateAllocate(0x28,&local_f8);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar15 = FDelegateHandle::GenerateNewID();
          puVar14[2] = uVar15;
          *puVar14 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UPendingNetGame::InitNetDriver'::`46'::<lambda_3>_>
                      ::_vftable_;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar14[3] = 0;
          local_c0 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_c0);
          puVar14[4] = this;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        (*pcVar2)(plVar13,&local_100);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_100,(FWriteAccessScope *)&local_98);
        if ((local_f8.DelegateSize != 0) &&
           (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_f8,0,0,0x10);
          local_f8.DelegateSize = 0;
        }
        if (local_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
        }
        if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_f8.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
      }
      goto LAB_1482034c7;
    }
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    UEngine::DestroyNamedNetDriver
              (GEngine,this,((this->NetDriver).field0_0x0.DebugPtr)->NetDriverName);
    (this->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
    iVar1 = (this->ConnectionError).Data.ArrayNum;
    uVar17 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar17 = 0;
    }
    if (uVar17 != 0) goto LAB_1482034c7;
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_50,L"Engine",L"NetworkInit",L"Error initializing network layer.");
    pFVar12 = FText::ToString(pFVar11);
    ::FString::operator=(&this->ConnectionError,pFVar12);
    local_60.TextData.Reference = local_50.TextData.Reference;
  }
  else {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_40,L"Engine",L"UsedCheatCommands",
                         L"Console commands were used which are disallowed in netplay.  You must restart the game to create a match."
                        );
    pFVar12 = FText::ToString(pFVar11);
    ::FString::operator=(&this->ConnectionError,pFVar12);
    local_60.TextData.Reference = local_40.TextData.Reference;
  }
LAB_1482034bc:
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
LAB_1482034c7:
  FMemScope::~FMemScope(&local_b8);
  FLLMScope::~FLLMScope(local_108);
  return;
}

// Initialize @ 148205060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPendingNetGame::Initialize(UPendingNetGame *this,FURL *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  (this->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  ::FString::operator=(&(this->URL).Protocol,&param_1->Protocol);
  ::FString::operator=(&(this->URL).Host,&param_1->Host);
  (this->URL).Port = param_1->Port;
  (this->URL).Valid = param_1->Valid;
  ::FString::operator=(&(this->URL).Map,&param_1->Map);
  ::FString::operator=(&(this->URL).RedirectURL,&param_1->RedirectURL);
  pTVar2 = &(this->URL).Op;
  if (pTVar2 != &param_1->Op) {
    DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,(this->URL).Op.ArrayNum);
    iVar3 = (param_1->Op).ArrayNum;
    piVar1 = &(this->URL).Op.ArrayMax;
    pFVar5 = (param_1->Op).AllocatorInstance.Data;
    iVar4 = *piVar1;
    (this->URL).Op.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,iVar4,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar5,iVar3);
    }
  }
  ::FString::operator=(&(this->URL).Portal,&param_1->Portal);
  this->bSuccessfullyConnected = false;
  this->bSentJoinRequest = false;
  this->bLoadedMapSuccessfully = false;
  this->bFailedTravel = false;
  return;
}

// LoadMapCompleted @ 148206e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPendingNetGame::LoadMapCompleted
          (UPendingNetGame *this,UEngine *param_1,FWorldContext *param_2,bool param_3,
          FString *param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  
  this->bLoadedMapSuccessfully = param_3;
  if (param_3) {
    if ((param_4->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"");
    return iVar1 == 0;
  }
  return false;
}

// NotifyAcceptedConnection @ 1482071f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPendingNetGame::NotifyAcceptedConnection(UPendingNetGame *this,UNetConnection *param_1)

{
  return;
}

// NotifyAcceptingChannel @ 148207230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPendingNetGame::NotifyAcceptingChannel(UPendingNetGame *this,UChannel *param_1)

{
  return false;
}

// NotifyAcceptingConnection @ 148207280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __thiscall UPendingNetGame::NotifyAcceptingConnection(UPendingNetGame *this)

{
  return Reject;
}

// NotifyControlMessage @ 1482072c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPendingNetGame::NotifyControlMessage
          (UPendingNetGame *this,UNetConnection *param_1,uchar param_2,FInBunch *param_3)

{
  int *piVar1;
  longlong *plVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  UNetConnection *pUVar7;
  AActor *pAVar8;
  UNetDriver *pUVar9;
  longlong lVar10;
  void *_Src;
  UGameInstance *pUVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  wchar_t **ppwVar15;
  FText *pFVar16;
  FString *pFVar17;
  FWorldContext *pFVar18;
  FName *pFVar19;
  undefined8 *puVar20;
  ulong64 uVar21;
  int iVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  wchar_t *pwVar26;
  longlong *plVar27;
  uint uVar28;
  wchar_t *pwVar29;
  uint uVar30;
  bool bVar31;
  undefined1 auStackY_448 [32];
  EEngineNetworkRuntimeFeatures local_408 [2];
  uint local_404;
  uint local_400;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3f8;
  FDelegateAllocation local_3f0;
  FString local_3e0;
  FString local_3d0;
  int local_3c0;
  FName local_3b8;
  FWeakObjectPtr local_3b0;
  FString local_3a8;
  UNetConnection *local_398;
  FString local_390;
  undefined8 local_380;
  FString local_378;
  FURL local_368;
  UNetConnection *local_2f8;
  FString *local_2f0;
  FName local_2e8;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  void *local_290;
  int local_288;
  void *local_280;
  int local_278;
  FString local_270;
  FName local_260;
  FName local_258;
  FString local_250;
  FString local_240;
  FString local_230;
  FDestructionSentinel local_220;
  FDestructionSentinel local_208;
  FDelegateAllocation *local_1f0;
  FText local_1e8;
  FText local_1d8;
  undefined1 local_1c8 [8];
  FReadAccessScope local_1c0;
  FNetResult local_1a8;
  FURL local_178;
  FURL local_108;
  longlong local_98;
  longlong lStack_90;
  ulonglong local_88;
  FUniqueNetIdRepl local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_448;
  pFVar17 = &this[-1].URL.Portal;
  plVar27 = (longlong *)0x0;
  local_400 = 0;
  pUVar7 = *(UNetConnection **)(this->_padding_ + 0x100);
  if (pUVar7 == (UNetConnection *)0x0) {
    bVar31 = param_1 == (UNetConnection *)0x0;
  }
  else {
    bVar31 = pUVar7 == param_1;
  }
  pwVar26 = L"";
  local_398 = param_1;
  if ((!bVar31) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection == NetDriver->ServerConnection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PendingNetGame.cpp"
                          ,0xf5,L""), bVar31)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (5 < (byte)LogNet._0_1_) {
    if (FNetControlMessageInfo::bInitialized == false) {
      lVar23 = 0x20;
      ppwVar15 = FNetControlMessageInfo::Names;
      do {
        *ppwVar15 = L"";
        ppwVar15[1] = L"";
        ppwVar15[2] = L"";
        ppwVar15[3] = L"";
        ppwVar15[4] = L"";
        ppwVar15[5] = L"";
        ppwVar15[6] = L"";
        ppwVar15[7] = L"";
        lVar23 = lVar23 + -1;
        ppwVar15 = ppwVar15 + 8;
      } while (lVar23 != 0);
      FNetControlMessageInfo::bInitialized = true;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  uVar13 = 0;
  switch(param_2) {
  case '\x01':
    local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d0.Data.ArrayNum = 0;
    local_3d0.Data.ArrayMax = 0;
    local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_390.Data.ArrayNum = 0;
    local_390.Data.ArrayMax = 0;
    ::operator<<((FArchive *)param_3,&(this->URL).Protocol);
    ::operator<<((FArchive *)param_3,&local_3d0);
    ::operator<<((FArchive *)param_3,&local_390);
    if ((param_3->_padding_ & 0x200) == 0) {
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      FURL::FURL(&local_108,(wchar_t *)0x0);
      if ((this->URL).Protocol.Data.ArrayNum == 0) {
        pwVar29 = L"";
      }
      else {
        pwVar29 = (wchar_t *)(this->URL).Protocol.Data.AllocatorInstance.Data;
      }
      FURL::FURL(&local_178,&local_108,pwVar29,TRAVEL_Partial);
      uVar25 = local_178.Map.Data.ArrayNum - 1;
      if (local_178.Map.Data.ArrayNum == 0) {
        uVar25 = uVar13;
      }
      ::FString::AssignRange
                (&(this->URL).Protocol,(wchar_t *)local_178.Map.Data.AllocatorInstance.Data,uVar25);
      uVar25 = local_390.Data.ArrayNum - 1;
      if (local_390.Data.ArrayNum == 0) {
        uVar25 = uVar13;
      }
      ::FString::AssignRange
                (&(this->URL).Host,(wchar_t *)local_390.Data.AllocatorInstance.Data,uVar25);
      piVar1 = &(this->URL).Port;
      if (((TArray<FString,TSizedDefaultAllocator<32>_> *)piVar1 == &local_178.Op) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar31)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (local_178.Op.ArrayNum != 0) {
        iVar22 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,local_178.Op.ArrayNum,(ForAnyElementType *)piVar1,
                            (int *)&(this->URL).Map,
                            (int *)((longlong)&(this->URL).Map.Data.AllocatorInstance.Data + 4));
        ConstructItems<FString,FString,int>
                  ((void *)(*(longlong *)piVar1 + (longlong)iVar22 * 0x10),
                   (FString *)local_178.Op.AllocatorInstance.Data,local_178.Op.ArrayNum);
      }
      FURL::~FURL(&local_178);
      FURL::~FURL(&local_108);
      uVar25 = local_3d0.Data.ArrayNum - 1;
      if (local_3d0.Data.ArrayNum == 0) {
        uVar25 = uVar13;
      }
      if (0 < (int)uVar25) {
        ::FString::PrintfImpl(&local_3a8,L"game=%s");
        if (local_3a8.Data.ArrayNum != 0) {
          pwVar26 = (wchar_t *)local_3a8.Data.AllocatorInstance.Data;
        }
        FURL::AddOption((FURL *)&this->_padding_,pwVar26);
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
      }
      UE::Net::TNetControlMessageImpl<4,int>::Send(param_1,(int *)&param_1->_padding_);
      *(undefined1 *)&(this->URL).RedirectURL.Data.ArrayNum = 1;
    }
    else {
      ::FString::Empty(&(this->URL).Protocol);
    }
    if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
    break;
  case '\x02':
    plVar27 = (longlong *)param_3->_padding_;
    local_404 = 0;
    local_408[0] = None;
    if ((uint *)plVar27[1] < (uint *)*plVar27 + 1) {
      if ((param_3->_padding_ & 0x10000) == 0) {
        (**(code **)(param_3->_padding_ + 0x188))(param_3,&local_404,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_3,&local_404);
      }
    }
    else {
      local_404 = *(uint *)*plVar27;
      *plVar27 = *plVar27 + 4;
    }
    plVar27 = (longlong *)param_3->_padding_;
    if ((EEngineNetworkRuntimeFeatures *)plVar27[1] < (EEngineNetworkRuntimeFeatures *)*plVar27 + 1)
    {
      if ((param_3->_padding_ & 0x10000) == 0) {
        (**(code **)(param_3->_padding_ + 0x188))(param_3,local_408,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_3,local_408);
      }
    }
    else {
      local_408[0] = *(EEngineNetworkRuntimeFeatures *)*plVar27;
      *plVar27 = *plVar27 + 2;
    }
    if ((param_3->_padding_ & 0x200) == 0) {
      bVar31 = UNetConnection::HandleReceiveNetUpgrade
                         (param_1,local_404,local_408[0],ControlChannel);
      if (bVar31) {
        SendInitialJoin((UPendingNetGame *)pFVar17);
      }
      else {
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_1e8,L"Engine",L"ClientOutdated",
                             L"The match you are trying to join is running an incompatible version of the game.  Please try upgrading your game version."
                            );
        pFVar17 = FText::ToString(pFVar16);
        ::FString::operator=((FString *)&(this->URL).Op,pFVar17);
        if (local_1e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
        }
      }
    }
    break;
  case '\x03':
    ::operator<<((FArchive *)param_3,&param_1->Challenge);
    if ((param_3->_padding_ & 0x200) == 0) {
      ::FString::FString(&local_368.Protocol,(FString *)&this->_padding_);
      ::FString::FString(&local_368.Host,(FString *)&this->_padding_);
      local_368.Port = *(int *)&(this->DemoNetDriver).field0_0x0;
      local_368.Valid = *(int *)((longlong)&(this->DemoNetDriver).field0_0x0 + 4);
      ::FString::FString(&local_368.Map,&(this->URL).Protocol);
      ::FString::FString(&local_368.RedirectURL,&(this->URL).Host);
      iVar22 = *(int *)&(this->URL).Map.Data.AllocatorInstance.Data;
      pFVar17 = *(FString **)&(this->URL).Port;
      local_368.Op.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.Op.ArrayNum = iVar22;
      if (iVar22 == 0) {
        local_368.Op.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar22,0,&local_368.Op.AllocatorInstance,iVar22,&local_368.Op.ArrayMax);
        ConstructItems<FString,FString,int>(local_368.Op.AllocatorInstance.Data,pFVar17,iVar22);
      }
      ::FString::FString(&local_368.Portal,(FString *)&(this->URL).Map.Data.ArrayNum);
      ::FString::operator=(&local_368.Host,L"");
      local_368.Port = FURL::UrlConfig.DefaultPort;
      ::FString::operator=(&local_368.Map,L"");
      uVar25 = *(int *)&(this->URL).Map.Data.AllocatorInstance.Data - 1;
      if (-1 < (int)uVar25) {
        lVar23 = (longlong)(int)uVar25 << 4;
        do {
          local_400 = ~uVar25;
          uVar30 = local_400 >> 0x1f;
          uVar14 = uVar13;
          if ((int)uVar25 < *(int *)&(this->URL).Map.Data.AllocatorInstance.Data) {
            uVar14 = uVar30;
          }
          if ((uVar14 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar10 = *(longlong *)&(this->URL).Port;
          iVar22 = *(int *)(lVar10 + 8 + lVar23);
          uVar14 = iVar22 - 1;
          if (iVar22 == 0) {
            uVar14 = uVar13;
          }
          if (5 < (int)uVar14) {
            uVar14 = 5;
          }
          uVar28 = 0;
          if (0 < (int)uVar14) {
            uVar28 = uVar14;
          }
          if (iVar22 == 0) {
            pwVar26 = L"";
          }
          else {
            pwVar26 = *(wchar_t **)(lVar10 + lVar23);
          }
          ::FString::ConstructFromPtrSize(&local_2c0,pwVar26,uVar28);
          FVar24.Data = (FScriptContainerElement *)L"";
          if (local_2c0.Data.ArrayNum != 0) {
            FVar24.Data = local_2c0.Data.AllocatorInstance.Data;
          }
          local_3c0 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar24.Data,L"game=");
          if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
          }
          if (local_3c0 == 0) {
            uVar14 = uVar13;
            if ((int)uVar25 < *(int *)&(this->URL).Map.Data.AllocatorInstance.Data) {
              uVar14 = uVar30;
            }
            if ((uVar14 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            puVar20 = (undefined8 *)(*(longlong *)&(this->URL).Port + lVar23);
            if ((void *)*puVar20 != (void *)0x0) {
              FMemory::Free((void *)*puVar20);
            }
            iVar22 = local_400 + *(int *)&(this->URL).Map.Data.AllocatorInstance.Data;
            if (iVar22 != 0) {
              memmove(puVar20,puVar20 + 2,(longlong)iVar22 << 4);
            }
            pFVar17 = &(this->URL).Map;
            *(int *)&(pFVar17->Data).AllocatorInstance.Data =
                 *(int *)&(pFVar17->Data).AllocatorInstance.Data + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)&(this->URL).Port,
                       *(int *)&(this->URL).Map.Data.AllocatorInstance.Data,
                       (int *)((longlong)&(this->URL).Map.Data.AllocatorInstance.Data + 4));
          }
          lVar23 = lVar23 + -0x10;
          uVar25 = uVar25 - 1;
          param_1 = local_398;
        } while (-1 < (int)uVar25);
      }
      plVar27 = (longlong *)
                (**(code **)(this[-1].URL.Portal.Data.AllocatorInstance.Data + 0x2e0))
                          (&this[-1].URL.Portal);
      if (plVar27 != (longlong *)0x0) {
        (**(code **)(*plVar27 + 0x348))(plVar27,&local_280);
        uVar25 = local_278 - 1;
        if (local_278 == 0) {
          uVar25 = uVar13;
        }
        if (0 < (int)uVar25) {
          ::FString::PrintfImpl(&local_2b0,L"Name=%s");
          FVar24.Data = (FScriptContainerElement *)L"";
          if (local_2b0.Data.ArrayNum != 0) {
            FVar24.Data = local_2b0.Data.AllocatorInstance.Data;
          }
          FURL::AddOption(&local_368,(wchar_t *)FVar24.Data);
          if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
          }
        }
        (**(code **)(*plVar27 + 0x350))(plVar27,&local_290);
        uVar25 = local_288 - 1;
        if (local_288 == 0) {
          uVar25 = uVar13;
        }
        if (0 < (int)uVar25) {
          ::FString::PrintfImpl(&local_2a0,L"%s");
          FVar24.Data = (FScriptContainerElement *)L"";
          if (local_2a0.Data.ArrayNum != 0) {
            FVar24.Data = local_2a0.Data.AllocatorInstance.Data;
          }
          FURL::AddOption(&local_368,(wchar_t *)FVar24.Data);
          if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
          }
        }
        local_398 = (UNetConnection *)(**(code **)(*plVar27 + 0x360))(plVar27,&local_80);
        plVar2 = &(param_1->PlayerId)._padding_;
        plVar27 = &local_398->_padding_;
        if (plVar27 != plVar2) {
          bVar5 = (byte)local_398->_padding_;
          local_88 = CONCAT71(local_88._1_7_,bVar5);
          if ((1 < (ulonglong)bVar5) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xec,L""), bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                      ::__l2::CopyConstructors)[bVar5])(&local_98,plVar27);
          lVar23 = *plVar2;
          lVar10 = (param_1->PlayerId)._padding_;
          uVar4 = (param_1->PlayerId)._padding_;
          *plVar2 = local_98;
          (param_1->PlayerId)._padding_ = lStack_90;
          (param_1->PlayerId)._padding_ = local_88;
          local_98 = lVar23;
          lStack_90 = lVar10;
          local_88 = uVar4;
          if ((1 < (uVar4 & 0xff)) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar31)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar4 & 0xff])(&local_98);
        }
        pTVar3 = &(param_1->PlayerId).ReplicationBytes;
        if (pTVar3 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_398->_padding_) {
          iVar22 = (int)local_398->_padding_;
          piVar1 = &(param_1->PlayerId).ReplicationBytes.ArrayMax;
          _Src = (void *)local_398->_padding_;
          iVar6 = *piVar1;
          (param_1->PlayerId).ReplicationBytes.ArrayNum = iVar22;
          if ((iVar22 == 0) && (iVar6 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar22,iVar6,&pTVar3->AllocatorInstance,iVar22,piVar1);
            if (iVar22 != 0) {
              memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar22);
            }
          }
        }
        FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_80);
        if (local_290 != (void *)0x0) {
          FMemory::Free(local_290);
        }
        if (local_280 != (void *)0x0) {
          FMemory::Free(local_280);
        }
      }
      local_3b8.ComparisonIndex.Value = 0;
      local_3b8.Number = 0;
      pFVar18 = UEngine::GetWorldContextFromPendingNetGame
                          (GEngine,(UPendingNetGame *)&this[-1].URL.Portal);
      if ((pFVar18 != (FWorldContext *)0x0) &&
         (pUVar11 = (pFVar18->OwningGameInstance).field0_0x0.DebugPtr,
         pUVar11 != (UGameInstance *)0x0)) {
        pFVar19 = (FName *)(**(code **)(pUVar11->_padding_ + 0x3f0))(pUVar11,local_1c8);
        local_3b8 = *pFVar19;
      }
      ::FString::operator=(&param_1->ClientResponse,L"0");
      FURL::ToString(&local_368,&local_250,false);
      ::FName::ToString(&local_3b8,&local_230);
      UE::Net::TNetControlMessageImpl<5,FString,FString,FUniqueNetIdRepl,FString>::Send
                (param_1,&param_1->ClientResponse,&local_250,&param_1->PlayerId,&local_230);
      plVar27 = *(longlong **)(this->_padding_ + 0x100);
      (**(code **)(*plVar27 + 0x308))(plVar27,0);
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      if (local_368.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Portal.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_368.Op.AllocatorInstance.Data,local_368.Op.ArrayNum);
      if (local_368.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Op.AllocatorInstance.Data);
      }
      if (local_368.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.RedirectURL.Data.AllocatorInstance.Data);
      }
      if (local_368.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Map.Data.AllocatorInstance.Data);
      }
      if (local_368.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Host.Data.AllocatorInstance.Data);
      }
      if (local_368.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Protocol.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::FString::Empty(&param_1->Challenge);
    }
    break;
  default:
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    break;
  case '\x06':
    local_3e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e0.Data.ArrayNum = 0;
    local_3e0.Data.ArrayMax = 0;
    ::operator<<((FArchive *)param_3,&local_3e0);
    if ((param_3->_padding_ & 0x200) == 0) {
      if (local_3e0.Data.ArrayNum < 2) {
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_1d8,L"NetworkErrors",L"GenericPendingConnectionFailed",
                             L"Pending Connection Failed.");
        pFVar17 = FText::ToString(pFVar16);
        ::FString::operator=(&local_3e0,pFVar17);
        if (local_1d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
        }
      }
      iVar22 = local_3e0.Data.ArrayNum + -1;
      if (local_3e0.Data.ArrayNum == 0) {
        iVar22 = 0;
      }
      ::FString::AssignRange
                ((FString *)&(this->URL).Op,(wchar_t *)local_3e0.Data.AllocatorInstance.Data,iVar22)
      ;
      if (4 < (byte)LogNet._0_1_) {
        pAVar8 = (param_1->OwningActor).field0_0x0.DebugPtr;
        if (pAVar8 != (AActor *)0x0) {
          local_260 = (FName)pAVar8->_padding_;
          ::FName::ToString(&local_260,&local_2d0);
          plVar27 = (longlong *)&DAT_00000001;
        }
        if (param_1->_padding_ != 0) {
          local_258 = *(FName *)(param_1->_padding_ + 0x18);
          plVar27 = (longlong *)(ulonglong)((uint)plVar27 | 2);
          ::FName::ToString(&local_258,&local_2e0);
        }
        pUVar9 = (param_1->Driver).field0_0x0.DebugPtr;
        if (pUVar9 != (UNetDriver *)0x0) {
          plVar27 = (longlong *)(ulonglong)((uint)plVar27 | 4);
          ::FName::ToString(&pUVar9->NetDriverName,&local_240);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if ((((ulonglong)plVar27 & 4) != 0) &&
           (plVar27 = (longlong *)(ulonglong)((uint)plVar27 & 0xfffffffb),
           local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)plVar27 & 2) != 0) &&
           (plVar27 = (longlong *)(ulonglong)((uint)plVar27 & 0xfffffffd),
           local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)plVar27 & 1) != 0) &&
           (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
      }
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_1a8,FailureReceived);
      UNetConnection::Close(param_1,&local_1a8);
      if (local_1a8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_1a8.NextResult + -0x10))
                  ((longlong)local_1a8.NextResult + -0x10);
      }
      if (local_1a8.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.ErrorContext.Data.AllocatorInstance.Data);
      }
    }
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    break;
  case '\x12':
    local_380 = 0;
    local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_378.Data.ArrayNum = 0;
    local_378.Data.ArrayMax = 0;
    (**(code **)(param_3->_padding_ + 0x1a8))(param_3,&local_380);
    ::operator<<((FArchive *)param_3,&local_378);
    if ((param_3->_padding_ & 0x200) == 0) {
      plVar27 = *(longlong **)(*(longlong *)(this->_padding_ + 0x100) + 0x68);
      (**(code **)(*plVar27 + 0x2c8))(plVar27,&local_380,&local_378);
    }
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    break;
  case '\x15':
    bVar31 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                        &FNetDelegates::OnReceivedNetworkEncryptionAck);
    if (bVar31) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_3b0.ObjectIndex = 0;
      local_3b0.ObjectSerialNumber = 0;
      local_2f8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_3b0,(FObjectPtr)&local_2f8);
      local_3a8.Data.ArrayNum = 0;
      local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FinalizeEncryptedConnection
      ;
      local_3a8.Data.ArrayMax = local_240.Data.ArrayMax;
      local_3f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_3f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_3f0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_3f8,(FWriteAccessScope *)&local_208);
      local_1f0 = &local_3f0;
      puVar20 = UE::Core::Private::DelegateAllocate(0x30,&local_3f0);
      if (puVar20 != (undefined8 *)0x0) {
        *puVar20 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
        ;
        *(FWeakObjectPtr *)(puVar20 + 1) = local_3b0;
        uVar21 = FDelegateHandle::GenerateNewID();
        puVar20[2] = uVar21;
        *puVar20 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUPendingNetGame____A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pFVar17 != (FString *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pFVar17);
        }
        puVar20[3] = 0;
        local_2f0 = pFVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pFVar17 != (FString *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pFVar17);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar20 + 3),(FObjectPtr)&local_2f0);
        puVar20[4] = local_3a8.Data.AllocatorInstance.Data;
        puVar20[5] = CONCAT44(local_3a8.Data.ArrayMax,local_3a8.Data.ArrayNum);
      }
      if (local_208.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetDelegates::OnReceivedNetworkEncryptionAck,&local_1c0);
      if (FNetDelegates::OnReceivedNetworkEncryptionAck._16_4_ != 0) {
        plVar27 = (longlong *)FNetDelegates::OnReceivedNetworkEncryptionAck._8_8_;
      }
      (**(code **)(*plVar27 + 0x60))(plVar27,&local_3f8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_3f8,(FWriteAccessScope *)&local_220);
      if ((local_3f0.DelegateSize != 0) &&
         (local_3f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_3f0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_3f0,0,0,0x10);
        local_3f0.DelegateSize = 0;
      }
      if (local_220.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
      }
      if (local_3f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_3f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3f8.AccessDetector);
    }
    else {
      ::FString::operator=((FString *)&(this->URL).Op,L"No encryption ack handler");
      if (2 < (byte)LogNet._0_1_) {
        local_2e8 = (FName)param_1->_padding_;
        ::FName::ToString(&local_2e8,&local_270);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u__s__No_delegate_151a3f8b8,
                   (FLogCategoryBase *)&LogNet);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
      }
      UNetConnection::Close(param_1);
    }
  }
  return;
}

// SendInitialJoin @ 148215350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPendingNetGame::SendInitialJoin(UPendingNetGame *this)

{
  TObjectPtr<UNetDriver>_u_0 TVar1;
  UNetConnection *pUVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  uchar local_res8 [8];
  EEngineNetworkRuntimeFeatures local_res10 [4];
  uint local_res18 [2];
  FString local_78;
  void *local_68 [2];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  pTVar4 = CVarNetAllowEncryption.Ref;
  TVar1 = (this->NetDriver).field0_0x0;
  if (TVar1.DebugPtr == (UNetDriver *)0x0) {
    return;
  }
  pUVar2 = ((TVar1.DebugPtr)->ServerConnection).field0_0x0.DebugPtr;
  if (pUVar2 == (UNetConnection *)0x0) {
    return;
  }
  local_res8[0] = '\x01';
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (pTVar4->ShadowedValue[0] != 0) {
    pwVar8 = FURL::GetOption(&this->URL,L"EncryptionToken=",L"");
    ::FString::operator=(&local_78,pwVar8);
  }
  if (local_78.Data.ArrayNum < 2) {
    cVar7 = '\0';
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FNetDelegates::OnReceivedNetworkEncryptionFailure,&local_58);
    if (((FNetDelegates::OnReceivedNetworkEncryptionFailure._16_4_ == 0) ||
        (FNetDelegates::OnReceivedNetworkEncryptionFailure._8_8_ == 0)) ||
       (cVar6 = (**(code **)(*(longlong *)FNetDelegates::OnReceivedNetworkEncryptionFailure._8_8_ +
                            0x38))(), cVar6 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetDelegates::OnReceivedNetworkEncryptionFailure,&local_40);
      plVar9 = (longlong *)0x0;
      if (FNetDelegates::OnReceivedNetworkEncryptionFailure._16_4_ != 0) {
        plVar9 = (longlong *)FNetDelegates::OnReceivedNetworkEncryptionFailure._8_8_;
      }
      cVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,pUVar2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
    }
    cVar6 = (**(code **)(((this->NetDriver).field0_0x0.DebugPtr)->_padding_ + 0x4e8))();
    if ((cVar6 != '\0') && (cVar7 != '\x02')) {
      if (1 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      ::FString::operator=(&this->ConnectionError,L"EncryptionToken not set.");
      goto LAB_14821559d;
    }
  }
  local_res18[0] = FNetworkVersion::GetLocalNetworkVersion(true);
  if (4 < (byte)LogNet._0_1_) {
    (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,local_68);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
  }
  local_res10[0] = UNetDriver::GetNetworkRuntimeFeatures((this->NetDriver).field0_0x0.DebugPtr);
  UE::Net::
  TNetControlMessageImpl<0,unsigned_char,unsigned_int,FString,enum_EEngineNetworkRuntimeFeatures>::
  Send(pUVar2,local_res8,local_res18,&local_78,local_res10);
  (**(code **)(pUVar2->_padding_ + 0x308))(pUVar2,0);
LAB_14821559d:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// SendJoin @ 1482155e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPendingNetGame::SendJoin(UPendingNetGame *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001482155e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this,0);
  return;
}

// SendJoinWithFlags @ 148215600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPendingNetGame::SendJoinWithFlags(UPendingNetGame *this,EJoinFlags param_1)

{
  UNetConnection *pUVar1;
  
  this->bSentJoinRequest = true;
  pUVar1 = (((this->NetDriver).field0_0x0.DebugPtr)->ServerConnection).field0_0x0.DebugPtr;
  if ((param_1 & NoPawn) == None) {
    UE::Net::TNetControlMessageImpl<9>::Send(pUVar1);
  }
  else {
    UE::Net::TNetControlMessageImpl<31>::Send(pUVar1);
  }
  pUVar1 = (((this->NetDriver).field0_0x0.DebugPtr)->ServerConnection).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x000148215641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x308))(pUVar1,1);
  return;
}

// Serialize @ 148215730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPendingNetGame::Serialize(UPendingNetGame *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 5) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->NetDriver);
  }
  return;
}

// Serialize @ 148215770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPendingNetGame::Serialize(UPendingNetGame *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  if ((pFVar1->field_0x28 & 5) == 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x150))(pFVar1,&this->NetDriver);
  }
  return;
}

// SetEncryptionKey @ 148217140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPendingNetGame::SetEncryptionKey(UPendingNetGame *this,FEncryptionKeyResponse *param_1)

{
  TObjectPtr<UNetDriver>_u_0 TVar1;
  UNetConnection *this_00;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  EConnectionState EVar5;
  wchar_t *pwVar6;
  FString local_28;
  void *local_18 [2];
  
  pTVar3 = CVarNetAllowEncryption.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar3->ShadowedValue[0] == 0) {
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      return;
    }
  }
  else {
    TVar1 = (this->NetDriver).field0_0x0;
    if (TVar1.DebugPtr == (UNetDriver *)0x0) {
      if (2 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      pwVar6 = L"NetDriver missing during encryption ack";
    }
    else {
      this_00 = *(UNetConnection **)((longlong)TVar1 + 0x100);
      if (this_00 != (UNetConnection *)0x0) {
        EVar5 = UNetConnection::GetConnectionState(this_00);
        if (((EVar5 == USOCK_Invalid) ||
            (EVar5 = UNetConnection::GetConnectionState(this_00), EVar5 == USOCK_Closed)) ||
           ((this_00->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0)) {
          if (2 < (byte)LogNet._0_1_) {
            (**(code **)(this_00->_padding_ + 0x2e0))(this_00,local_18);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_18[0] != (void *)0x0) {
              FMemory::Free(local_18[0]);
            }
          }
          ::FString::operator=(&this->ConnectionError,L"Connection encryption state failure");
          UNetConnection::Close(this_00);
          return;
        }
        if (param_1->Response == Success) {
          UNetConnection::SetEncryptionData(this_00,&param_1->EncryptionData);
          return;
        }
        pwVar6 = ::LexToString(param_1->Response);
        ::FString::FString(&local_28,pwVar6);
        if (2 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        ::FString::operator=(&this->ConnectionError,L"Encryption failure");
        UNetConnection::Close(this_00);
        if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return;
      }
      if (2 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      pwVar6 = L"Connection missing during encryption ack";
    }
    ::FString::operator=(&this->ConnectionError,pwVar6);
  }
  return;
}

// StaticRegisterNativesUPendingNetGame @ 1482205b0

void __cdecl UPendingNetGame::StaticRegisterNativesUPendingNetGame(void)

{
  return;
}

// Tick @ 148221b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPendingNetGame::Tick(UPendingNetGame *this,float param_1)

{
  UNetDriver *pUVar1;
  code *pcVar2;
  bool bVar3;
  EConnectionState EVar4;
  int iVar5;
  FText *this_00;
  FString *pFVar6;
  wchar_t *pwVar7;
  FText local_28 [2];
  
  pUVar1 = (this->NetDriver).field0_0x0.DebugPtr;
  if (((pUVar1 == (UNetDriver *)0x0) ||
      ((pUVar1->ServerConnection).field0_0x0.DebugPtr == (UNetConnection *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetDriver && NetDriver->ServerConnection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PendingNetGame.cpp"
                         ,0x216,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar4 = UNetConnection::GetConnectionState
                    ((((this->NetDriver).field0_0x0.DebugPtr)->ServerConnection).field0_0x0.DebugPtr
                    );
  if (EVar4 == USOCK_Closed) {
    if ((this->ConnectionError).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->ConnectionError).Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar7,L"");
    if (iVar5 == 0) {
      this_00 = FText::AsLocalizable_Advanced_LocText
                          (local_28,L"Engine",L"ConnectionFailed",
                           L"Your connection to the host has been lost.");
      pFVar6 = FText::ToString(this_00);
      ::FString::operator=(&this->ConnectionError,pFVar6);
      if (local_28[0].TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_28[0].TextData.Reference + 0x10))();
      return;
    }
  }
  pUVar1 = (this->NetDriver).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x358))(pUVar1,param_1);
  pUVar1 = (this->NetDriver).field0_0x0.DebugPtr;
  if (pUVar1 != (UNetDriver *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x360))();
  }
  pUVar1 = (this->NetDriver).field0_0x0.DebugPtr;
  if (pUVar1 != (UNetDriver *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x368))(pUVar1,param_1);
  }
  pUVar1 = (this->NetDriver).field0_0x0.DebugPtr;
  if (pUVar1 != (UNetDriver *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x370))();
  }
  return;
}

// TravelCompleted @ 1482223f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPendingNetGame::TravelCompleted(UPendingNetGame *this,UEngine *param_1,FWorldContext *param_2)

{
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  param_1->TransitionType = Connecting;
  (**(code **)(param_1->_padding_ + 0x4e8))(param_1,0);
  (**(code **)(((param_2->PendingNetGame).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
  (((param_2->PendingNetGame).field0_0x0.DebugPtr)->NetDriver).field0_0x0.DebugPtr =
       (UNetDriver *)0x0;
  if (4 < (byte)LogGlobalStatus._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UPendingNetGame::TravelCompleted",0x20,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGlobalStatus);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// operator() @ 150527b00

bool __thiscall `UPendingNetGame::FinishDestroy'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1594456241558519913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1594456241558519913>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150527ef0

bool __thiscall `UPendingNetGame::InitNetDriver'::__l19::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1594456241558519860>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1594456241558519860>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505281b0

bool __thiscall `UPendingNetGame::InitNetDriver'::__l19::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1594456241558519861>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1594456241558519861>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

