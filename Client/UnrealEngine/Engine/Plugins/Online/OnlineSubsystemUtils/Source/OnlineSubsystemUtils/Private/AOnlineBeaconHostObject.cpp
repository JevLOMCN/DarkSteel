// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 13

// StaticClass @ 14ec43b00

UClass * __cdecl AOnlineBeaconHostObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconHostObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconHostObject",
               &Z_Registration_Info_UClass_AOnlineBeaconHostObject.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconHostObject,0x2e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconHostObject>,
               InternalVTableHelperCtorCaller<AOnlineBeaconHostObject>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconHostObject.InnerSingleton;
}

// AOnlineBeaconHostObject @ 14ec51ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconHostObject * __thiscall
AOnlineBeaconHostObject::AOnlineBeaconHostObject
          (AOnlineBeaconHostObject *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AOnlineBeaconHostObject__6B_;
  (this->BeaconTypeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BeaconTypeName).Data.ArrayNum = 0;
  (this->BeaconTypeName).Data.ArrayMax = 0;
  (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ClientActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClientActors).ArrayNum = 0;
  (this->ClientActors).ArrayMax = 0;
  return this;
}

// AOnlineBeaconHostObject @ 14ec51d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconHostObject * __thiscall
AOnlineBeaconHostObject::AOnlineBeaconHostObject
          (AOnlineBeaconHostObject *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AOnlineBeaconHostObject__6B_;
  ::FString::FString(&this->BeaconTypeName,L"UNDEFINED");
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ClientActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClientActors).ArrayNum = 0;
  (this->ClientActors).ArrayMax = 0;
  return this;
}

// ~AOnlineBeaconHostObject @ 14ec55b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconHostObject::~AOnlineBeaconHostObject(AOnlineBeaconHostObject *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AOnlineBeaconHostObject__6B_;
  pFVar1 = (this->ClientActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BeaconTypeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// DisconnectClient @ 14ec6cb60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AOnlineBeaconHostObject::DisconnectClient
          (AOnlineBeaconHostObject *this,AOnlineBeaconClient *param_1)

{
  int iVar1;
  AOnlineBeaconHost *this_00;
  UClass *pUVar2;
  
  this_00 = (AOnlineBeaconHost *)this->_padding_;
  if (this_00 != (AOnlineBeaconHost *)0x0) {
    pUVar2 = AOnlineBeaconHost::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      AOnlineBeaconHost::DisconnectClient(this_00,param_1);
    }
  }
  return;
}

// GetBeaconState @ 14ec73970

Type __thiscall AOnlineBeaconHostObject::GetBeaconState(AOnlineBeaconHostObject *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = AOnlineBeaconHost::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return *(Type *)(lVar2 + 0x2d8);
    }
  }
  return DenyRequests;
}

// GetNetDriverName @ 14ec75f30

FName __thiscall AOnlineBeaconHostObject::GetNetDriverName(AOnlineBeaconHostObject *this)

{
  FName in_RDX;
  
  if (this->_padding_ != 0) {
    *(undefined8 *)in_RDX = *(undefined8 *)(this->_padding_ + 0x160);
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPrivateStaticClass @ 14ec774c0

UClass * __cdecl AOnlineBeaconHostObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconHostObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconHostObject",
               &Z_Registration_Info_UClass_AOnlineBeaconHostObject.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconHostObject,0x2e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconHostObject>,
               InternalVTableHelperCtorCaller<AOnlineBeaconHostObject>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconHostObject.InnerSingleton;
}

// NotifyClientDisconnected @ 14ec83670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
AOnlineBeaconHostObject::NotifyClientDisconnected
          (AOnlineBeaconHostObject *this,AOnlineBeaconClient *param_1)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  FName local_res8;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (5 < (byte)LogBeacon._0_1_) {
    if (param_1 != (AOnlineBeaconClient *)0x0) {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_18);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if ((param_1 != (AOnlineBeaconClient *)0x0) &&
       (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_1 != (AOnlineBeaconClient *)0x0) {
    local_res8 = (FName)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<AOnlineBeaconClient>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (&this->ClientActors,(TObjectPtr<AOnlineBeaconClient> *)&local_res8,Default);
  }
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = AOnlineBeaconHost::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      (**(code **)(*plVar2 + 0x7a8))(plVar2,param_1);
    }
  }
  return;
}

// OnClientConnected @ 14ec856f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AOnlineBeaconHostObject::OnClientConnected
          (AOnlineBeaconHostObject *this,AOnlineBeaconClient *param_1,UNetConnection *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<AOnlineBeaconClient>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  FName local_res10;
  AOnlineBeaconClient *local_48;
  FString local_40;
  void *local_30 [3];
  
  if (param_1 != (AOnlineBeaconClient *)0x0) {
    bVar5 = false;
    local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
    plVar7 = (longlong *)(**(code **)(param_1->_padding_ + 0x570))(param_1);
    if (5 < (byte)LogBeacon._0_1_) {
      if (plVar7 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x2d8))(plVar7,local_30);
        if (*(int *)(lVar8 + 8) == 0) {
          bVar5 = true;
        }
        else {
          bVar5 = true;
        }
      }
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_40);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if ((bVar5) && (local_30[0] != (void *)0x0)) {
        FMemory::Free(local_30[0]);
      }
    }
    pTVar2 = &this->ClientActors;
    local_48 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)(this->ClientActors).ArrayMax * 8
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->ClientActors).ArrayNum;
    piVar1 = &(this->ClientActors).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ClientActors).ArrayNum = iVar6 + 1;
    *(AOnlineBeaconClient **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48 != (AOnlineBeaconClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
  }
  return;
}

// SpawnBeaconActor @ 14ec98b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconClient * __thiscall
AOnlineBeaconHostObject::SpawnBeaconActor(AOnlineBeaconHostObject *this,UNetConnection *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UWorld *this_00;
  AOnlineBeaconClient *pAVar4;
  UClass *pUVar5;
  FString *pFVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_d8 [32];
  FString local_a8;
  FString local_98;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar5 = (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr;
  if ((pUVar5 == (UClass *)0x0) ||
     (pUVar3 = AOnlineBeaconClient::StaticClass(), pUVar3 == (UClass *)0x0)) {
LAB_14ec98d10:
    if (2 < (byte)LogBeacon._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    }
    return (AOnlineBeaconClient *)0x0;
  }
  iVar1 = (int)pUVar3->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || ((this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr == (UClass *)0x0))
  goto LAB_14ec98d10;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
  this_00 = AActor::GetWorld((AActor *)this);
  pUVar5 = (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar3 = AOnlineBeaconClient::StaticClass(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar5 = (this->ClientBeaconActorClass).Class.field0_0x0.DebugPtr;
      goto LAB_14ec98c48;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14ec98c48:
  pAVar4 = (AOnlineBeaconClient *)
           UWorld::SpawnActor(this_00,pUVar5,&UE::Math::TVector<double>::ZeroVector,
                              &UE::Math::TRotator<double>::ZeroRotator,
                              (FActorSpawnParameters *)local_88);
  if (pAVar4 == (AOnlineBeaconClient *)0x0) {
    pAVar4 = (AOnlineBeaconClient *)0x0;
  }
  else {
    pUVar5 = AOnlineBeaconClient::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pAVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
      pFVar6 = GetTypeName<AOnlineBeaconClient>(&local_a8);
      pwVar8 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<AActor>(&local_98,(AActor *)pAVar4);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar9);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (AOnlineBeaconHostObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (pAVar4->BeaconOwner).field0_0x0.DebugPtr = this;
  }
  if (local_88._64_8_ == 0) {
    return pAVar4;
  }
  plVar7 = (longlong *)(local_88 + 0x50);
  if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
    plVar7 = (longlong *)local_88._104_8_;
  }
  (**(code **)(*plVar7 + 0x10))();
  return pAVar4;
}

// StaticRegisterNativesAOnlineBeaconHostObject @ 14ec99500

void __cdecl AOnlineBeaconHostObject::StaticRegisterNativesAOnlineBeaconHostObject(void)

{
  return;
}

// Unregister @ 14ec9f3d0

void __thiscall AOnlineBeaconHostObject::Unregister(AOnlineBeaconHostObject *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ClientActors).AllocatorInstance.Data;
  iVar2 = (this->ClientActors).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ClientActors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<AOnlineBeaconClient>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(this->_padding_ + 0x770))();
    pFVar3 = pFVar3 + 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00014ec9f442. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x500))(this,0);
  return;
}

