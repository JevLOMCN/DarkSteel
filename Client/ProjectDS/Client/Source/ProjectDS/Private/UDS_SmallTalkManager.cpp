// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b599ec0

UClass * __cdecl UDS_SmallTalkManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SmallTalkManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SmallTalkManager",
               &Z_Registration_Info_UClass_UDS_SmallTalkManager.InnerSingleton,
               StaticRegisterNativesUDS_SmallTalkManager,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SmallTalkManager>,
               InternalVTableHelperCtorCaller<UDS_SmallTalkManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SmallTalkManager.InnerSingleton;
}

// UDS_SmallTalkManager @ 14b59cb40

UDS_SmallTalkManager * __thiscall
UDS_SmallTalkManager::UDS_SmallTalkManager(UDS_SmallTalkManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SmallTalkManager__6B_;
  (this->TimerHandle_SmallTalk).Handle = 0;
  this->CurSmallTalkID = 0;
  *(undefined8 *)&this->SmallTalkStartDelegate = 0;
  *(undefined8 *)&(this->SmallTalkStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SmallTalkStartDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->SmallTalkStartDelegate).field_0x18 = 2;
  return this;
}

// UDS_SmallTalkManager @ 14b59cb90

UDS_SmallTalkManager * __thiscall
UDS_SmallTalkManager::UDS_SmallTalkManager(UDS_SmallTalkManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SmallTalkManager__6B_;
  (this->TimerHandle_SmallTalk).Handle = 0;
  this->CurSmallTalkID = 0;
  *(undefined8 *)&this->SmallTalkStartDelegate = 0;
  *(undefined8 *)&(this->SmallTalkStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SmallTalkStartDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->SmallTalkStartDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_SmallTalkManager @ 14b59d3b0

void __thiscall UDS_SmallTalkManager::~UDS_SmallTalkManager(UDS_SmallTalkManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_SmallTalkManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SmallTalkStartDelegate).field_0x8,
             *(int *)&(this->SmallTalkStartDelegate).field_0x10);
  pvVar1 = *(void **)&(this->SmallTalkStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SmallTalkStartDelegate);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b59e000

UClass * __cdecl UDS_SmallTalkManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SmallTalkManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SmallTalkManager",
               &Z_Registration_Info_UClass_UDS_SmallTalkManager.InnerSingleton,
               StaticRegisterNativesUDS_SmallTalkManager,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SmallTalkManager>,
               InternalVTableHelperCtorCaller<UDS_SmallTalkManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SmallTalkManager.InnerSingleton;
}

// StaticRegisterNativesUDS_SmallTalkManager @ 14b59e530

void __cdecl UDS_SmallTalkManager::StaticRegisterNativesUDS_SmallTalkManager(void)

{
  return;
}

// Created @ 14bb5c9c0

void __thiscall UDS_SmallTalkManager::Created(UDS_SmallTalkManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb5d8c0

void __thiscall UDS_SmallTalkManager::Destroyed(UDS_SmallTalkManager *this)

{
  return;
}

// GetInst @ 14bb65f60

UDS_SmallTalkManager * __cdecl UDS_SmallTalkManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_SmallTalkManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_SmallTalkManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_SmallTalkManager_NoRegister();
  pUVar3 = (UDS_SmallTalkManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_SmallTalkManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_SmallTalkManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_SmallTalkManager *)0x0;
}

// Init @ 14bb6a810

void __thiscall UDS_SmallTalkManager::Init(UDS_SmallTalkManager *this)

{
  return;
}

// OnFinishedSmallTalk @ 14bb73780

void __thiscall UDS_SmallTalkManager::OnFinishedSmallTalk(UDS_SmallTalkManager *this)

{
  this->CurSmallTalkID = 0;
  return;
}

// OnPlaySmallTalk @ 14bb765e0

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

void __thiscall
UDS_SmallTalkManager::OnPlaySmallTalk(UDS_SmallTalkManager *this,int param_1,bool param_2)

{
  FTimerHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTimerManager *pFVar4;
  FTimerData *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_c0;
  int local_b8;
  FDelegateAllocation local_b0;
  UDS_SmallTalkManager *local_a0;
  undefined1 local_98;
  FDelegateAllocation *local_90;
  FScriptContainerElement *local_88;
  int local_80;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar1 = &this->TimerHandle_SmallTalk;
  this->CurSmallTalkID = param_1;
  if (pFVar1->Handle != 0) {
    pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar5 = FTimerManager::FindTimer(pFVar4,pFVar1);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar4,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  if (param_2) {
    fVar11 = DS_CommonDataHelper::SmallTalkDelayTime();
  }
  else {
    fVar11 = 0.0;
  }
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_98 = 0;
  local_90 = &local_b0;
  local_b0.DelegateSize = 0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar6 + 1) = param_1;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SmallTalkManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__H__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_a0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_a0);
    puVar6[4] = PlaySmallTalk;
  }
  pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
  local_88 = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  local_80 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  FVar8.Data = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_b0.DelegateAllocator + 0x48))
              (local_b0.DelegateAllocator,&local_c0);
    FVar8.Data = local_c0.Data;
    iVar10 = local_b8;
  }
  local_b8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  if (local_80 == 0) {
LAB_14bb76786:
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14bb76786;
  }
  local_88 = FVar8.Data;
  local_80 = iVar10;
  if (local_b8 == 0) {
LAB_14bb767d0:
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  else if (local_c0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
    goto LAB_14bb767d0;
  }
  local_58 = 1;
  FTimerManager::InternalSetTimer
            (pFVar4,pFVar1,(FTimerUnifiedDelegate *)&local_88,fVar11,false,__real_bf800000);
  uVar9 = (ulonglong)local_58;
  if ((3 < local_58) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_80 != 0) {
      if (local_88 == (FScriptContainerElement *)0x0) goto LAB_14bb7688d;
      (*(code *)**(undefined8 **)local_88)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_88);
  }
LAB_14bb7688d:
  if (local_b0.DelegateSize != 0) {
    if (local_b0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  return;
}

// PlaySmallTalk @ 14bb7de80

void __thiscall UDS_SmallTalkManager::PlaySmallTalk(UDS_SmallTalkManager *this,int param_1)

{
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->SmallTalkStartDelegate,param_1);
  return;
}

