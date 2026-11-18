// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b417c50

UClass * __cdecl ADS_AI_GYM_DefaultPawn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AI_GYM_DefaultPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_DefaultPawn",
               &Z_Registration_Info_UClass_ADS_AI_GYM_DefaultPawn.InnerSingleton,
               StaticRegisterNativesADS_AI_GYM_DefaultPawn,0x370,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ADS_AI_GYM_DefaultPawn>,
               InternalVTableHelperCtorCaller<ADS_AI_GYM_DefaultPawn>,local_res8,
               ASpectatorPawn::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AI_GYM_DefaultPawn.InnerSingleton;
}

// ADS_AI_GYM_DefaultPawn @ 14b41a690

ADS_AI_GYM_DefaultPawn * __thiscall
ADS_AI_GYM_DefaultPawn::ADS_AI_GYM_DefaultPawn(ADS_AI_GYM_DefaultPawn *this,FVTableHelper *param_1)

{
  ASpectatorPawn::ASpectatorPawn((ASpectatorPawn *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->ImmortalBuffTimerHandle).Handle = 0;
  return this;
}

// ADS_AI_GYM_DefaultPawn @ 14b41a6d0

ADS_AI_GYM_DefaultPawn * __thiscall
ADS_AI_GYM_DefaultPawn::ADS_AI_GYM_DefaultPawn
          (ADS_AI_GYM_DefaultPawn *this,FObjectInitializer *param_1)

{
  ASpectatorPawn::ASpectatorPawn((ASpectatorPawn *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->ImmortalBuffTimerHandle).Handle = 0;
  return this;
}

// ~ADS_AI_GYM_DefaultPawn @ 14b41b880

void __thiscall ADS_AI_GYM_DefaultPawn::~ADS_AI_GYM_DefaultPawn(ADS_AI_GYM_DefaultPawn *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  ASpectatorPawn::~ASpectatorPawn((ASpectatorPawn *)this);
  return;
}

// GetPrivateStaticClass @ 14b41cb90

UClass * __cdecl ADS_AI_GYM_DefaultPawn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AI_GYM_DefaultPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_DefaultPawn",
               &Z_Registration_Info_UClass_ADS_AI_GYM_DefaultPawn.InnerSingleton,
               StaticRegisterNativesADS_AI_GYM_DefaultPawn,0x370,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ADS_AI_GYM_DefaultPawn>,
               InternalVTableHelperCtorCaller<ADS_AI_GYM_DefaultPawn>,local_res8,
               ASpectatorPawn::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AI_GYM_DefaultPawn.InnerSingleton;
}

// StaticRegisterNativesADS_AI_GYM_DefaultPawn @ 14b41e0d0

void __cdecl ADS_AI_GYM_DefaultPawn::StaticRegisterNativesADS_AI_GYM_DefaultPawn(void)

{
  return;
}

// BeginPlay @ 14b869920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADS_AI_GYM_DefaultPawn::BeginPlay(ADS_AI_GYM_DefaultPawn *this)

{
  TObjectPtr<AGameModeBase> *this_00;
  bool bVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  TObjectPtr<AGameModeBase>_u_0 TVar5;
  FWeakObjectPtr local_res10;
  TObjectPtr<AGameModeBase>_u_0 local_res18;
  ADS_AI_GYM_DefaultPawn *local_res20;
  
  APawn::BeginPlay((APawn *)this);
  pUVar2 = UDS_GameInstance::GetGameInstanceWorld();
  TVar5.DebugPtr = (AGameModeBase *)0x0;
  if (pUVar2 == (UWorld *)0x0) {
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18.DebugPtr = (AGameModeBase *)0x0;
  }
  else {
    this_00 = &pUVar2->AuthorityGameMode;
    if ((this_00->field0_0x0).DebugPtr != (AGameModeBase *)0x0) {
      pUVar3 = Z_Construct_UClass_ADS_AI_GYM_GameMode_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
      if (bVar1) {
        TVar5.ObjectPtr.field0_0x0 = (FObjectPtr)(this_00->field0_0x0).DebugPtr;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar5.DebugPtr != (AGameModeBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = TVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar5.DebugPtr != (AGameModeBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar1 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> *)&local_res10,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ADS_AI_GYM_DefaultPawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res18.DebugPtr = (AGameModeBase *)0x0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ADS_AI_GYM_DefaultPawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res18.ObjectPtr,(FObjectPtr)&local_res20);
    *(TObjectPtr<AGameModeBase>_u_0 *)&pUVar4[0x16].field_0x4 = local_res18;
  }
  return;
}

// EndPlay @ 14b86f110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_AI_GYM_DefaultPawn::EndPlay(ADS_AI_GYM_DefaultPawn *this,Type param_1)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  if ((this->ImmortalBuffTimerHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,&this->ImmortalBuffTimerHandle);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->ImmortalBuffTimerHandle).Handle);
    }
    (this->ImmortalBuffTimerHandle).Handle = 0;
  }
  APawn::EndPlay((APawn *)this,param_1);
  return;
}

// OnCompleteJoinMap @ 14b887bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_AI_GYM_DefaultPawn::OnCompleteJoinMap(ADS_AI_GYM_DefaultPawn *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTimerManager *this_00;
  ForElementType<TAlignedBytes<16,16>_> FVar6;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5;
  FDelegateAllocation local_1b0;
  ADS_AI_GYM_DefaultPawn *local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  FTimerUnifiedDelegate local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((this->ImmortalBuffTimerHandle).Handle != 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_AI_GYM_DefaultPawn::OnCompleteJoinMap",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_148.Ptr,0x25,L"ImmortalBuffTimerHandle is valid.");
    FVar6 = (ForElementType<TAlignedBytes<16,16>_>)local_148._padding_;
    goto LAB_14b887f5e;
  }
  local_1c8.Data = (FScriptContainerElement *)OnImmortalBuffTimer;
  uStack_1bc = local_190._4_4_;
  local_198 = 0;
  local_190 = &local_1b0;
  iStack_1c0 = 0;
  local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1b0.DelegateSize = 0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_AI_GYM_DefaultPawn____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ADS_AI_GYM_DefaultPawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_1a0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ADS_AI_GYM_DefaultPawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_1a0);
    puVar4[4] = local_1c8.Data;
    puVar4[5] = CONCAT44(uStack_1bc,iStack_1c0);
  }
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  local_188.VariantDelegate._0_8_ = (undefined8 *)0x0;
  iStack_1c0 = 0;
  local_188.VariantDelegate._8_4_ = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  FVar7.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  if ((local_1b0.DelegateSize != 0) &&
     (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_1b0.DelegateAllocator + 0x48))
              (local_1b0.DelegateAllocator,&local_1c8);
    FVar7.Data = local_1c8.Data;
    iVar9 = iStack_1c0;
  }
  iStack_1c0 = 0;
  local_1b7 = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1b6 = 0;
  if (local_188.VariantDelegate._8_4_ == 0) {
LAB_14b887e06:
    if ((undefined8 *)local_188.VariantDelegate._0_8_ != (undefined8 *)0x0) {
      FMemory::Free((void *)local_188.VariantDelegate._0_8_);
    }
  }
  else if ((undefined8 *)local_188.VariantDelegate._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_188.VariantDelegate._0_8_)(local_188.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_188,0,0,0x10);
    local_188.VariantDelegate._8_4_ = 0;
    goto LAB_14b887e06;
  }
  local_1b5 = 0;
  local_188.VariantDelegate._0_8_ = FVar7.Data;
  local_188.VariantDelegate._8_4_ = iVar9;
  if (iStack_1c0 == 0) {
LAB_14b887e5f:
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
  }
  else if (local_1c8.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_1c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1c8,0,0,0x10);
    iStack_1c0 = 0;
    goto LAB_14b887e5f;
  }
  local_188.VariantDelegate.TypeIndex = 1;
  FTimerManager::InternalSetTimer
            (this_00,&this->ImmortalBuffTimerHandle,&local_188,__real_45610000,true,0.0);
  uVar8 = (ulonglong)local_188.VariantDelegate.TypeIndex;
  if ((3 < local_188.VariantDelegate.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_188.VariantDelegate._8_4_ != 0) {
      if ((FScriptContainerElement *)local_188.VariantDelegate._0_8_ ==
          (FScriptContainerElement *)0x0) goto LAB_14b887f29;
      (*(code *)**(undefined8 **)local_188.VariantDelegate._0_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_188,0,0,0x10);
      local_188.VariantDelegate._8_4_ = 0;
    }
    if ((FScriptContainerElement *)local_188.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free((void *)local_188.VariantDelegate._0_8_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_188);
  }
LAB_14b887f29:
  FVar6 = local_1b0.DelegateAllocator;
  if (local_1b0.DelegateSize != 0) {
    if (local_1b0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1b0,0,0,0x10);
    local_1b0.DelegateSize = 0;
    FVar6 = local_1b0.DelegateAllocator;
  }
LAB_14b887f5e:
  if (FVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  return;
}

// OnImmortalBuffTimer @ 14b8893b0

void __thiscall ADS_AI_GYM_DefaultPawn::OnImmortalBuffTimer(ADS_AI_GYM_DefaultPawn *this)

{
  FString local_18;
  
  ::FString::FString(&local_18,"ds.chat Buff 1801");
  UDS_GameInstance::ConsoleCommand(&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

