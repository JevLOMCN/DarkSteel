// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 12

// StaticClass @ 14648e3a0

UClass * __cdecl AConstraintsActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AConstraintsActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintsActor",
               &Z_Registration_Info_UClass_AConstraintsActor.InnerSingleton,
               StaticRegisterNativesAConstraintsActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AConstraintsActor>,
               InternalVTableHelperCtorCaller<AConstraintsActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AConstraintsActor.InnerSingleton;
}

// AConstraintsActor @ 14649dbb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AConstraintsActor * __thiscall
AConstraintsActor::AConstraintsActor(AConstraintsActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AConstraintsActor__6B_;
  (this->ConstraintsManager).field0_0x0.DebugPtr = (UConstraintsManager *)0x0;
  return this;
}

// AConstraintsActor @ 14649dbf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AConstraintsActor * __thiscall
AConstraintsActor::AConstraintsActor(AConstraintsActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->_padding_ = (longlong)&___7AConstraintsActor__6B_;
  (this->ConstraintsManager).field0_0x0.DebugPtr = (UConstraintsManager *)0x0;
  return this;
}

// ~AConstraintsActor @ 14649f630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AConstraintsActor::~AConstraintsActor(AConstraintsActor *this)

{
  this->_padding_ = (longlong)&___7AConstraintsActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 1464a49a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AConstraintsActor::BeginDestroy(AConstraintsActor *this)

{
  UConstraintsManager *pUVar1;
  UWorld *this_00;
  
  pUVar1 = (this->ConstraintsManager).field0_0x0.DebugPtr;
  if ((pUVar1 != (UConstraintsManager *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar1 = (this->ConstraintsManager).field0_0x0.DebugPtr;
    this_00 = AActor::GetWorld((AActor *)this);
    if ((this_00 != (UWorld *)0x0) && ((pUVar1->OnActorDestroyedHandle).ID != 0)) {
      UWorld::RemoveOnActorDestroyedHandler
                (this_00,(FDelegateHandle)(pUVar1->OnActorDestroyedHandle).ID);
    }
    (pUVar1->OnActorDestroyedHandle).ID = 0;
  }
  AActor::BeginDestroy((AActor *)this);
  return;
}

// BeginPlay @ 1464a4a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AConstraintsActor::BeginPlay(AConstraintsActor *this)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UWorld *pUVar4;
  AConstraintsActor *pAVar5;
  UClass *pUVar6;
  AConstraintsActor *pAVar7;
  UAutoDestroySubsystem *this_00;
  UFunction *pUVar8;
  undefined8 *puVar9;
  AConstraintsActor *pAVar10;
  undefined1 auStack_128 [32];
  AConstraintsActor *pAStack_108;
  undefined1 auStack_100 [8];
  AConstraintsActor **ppAStack_f8;
  undefined8 auStack_f0 [24];
  undefined8 *puStack_30;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pAVar7 = (AConstraintsActor *)0x0;
  pAVar10 = (AConstraintsActor *)0x0;
  pAVar5 = this;
  if (this == (AConstraintsActor *)0x0) {
    pAVar5 = pAVar7;
  }
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar5);
  if ((bVar3) && (this != (AConstraintsActor *)0x0)) {
    pUVar4 = AActor::GetWorld((AActor *)this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (bVar3) {
      FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
    }
  }
  if ((this->_padding_ & 0x180000000000) != 0x80000000000) {
    pAStack_108 = this;
    `AActor::BeginPlay'::__l2::<lambda_1>::operator()(&pAStack_108);
  }
  (**(code **)(this->_padding_ + 0x400))(this,*(undefined4 *)((longlong)&this->_padding_ + 4));
  AActor::RegisterAllActorTickFunctions((AActor *)this,true,false);
  puStack_30 = (undefined8 *)0x0;
  uStack_24 = 0x18;
  iStack_28 = 0;
  pAVar5 = (AConstraintsActor *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar5 == (AConstraintsActor *)0x0) goto LAB_147385169;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar5 == (AConstraintsActor *)0x0) goto LAB_147385169;
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar10 = pAVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pAVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pAVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pAVar10 = pAVar5;
    }
  }
LAB_147385169:
  pAVar7 = (AConstraintsActor *)Z_Construct_UClass_UActorComponent_NoRegister();
  pAStack_108 = pAVar5;
  if (pAVar10 == pAVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AConstraintsActor *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AConstraintsActor *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  iVar2 = iStack_28;
  puVar9 = auStack_f0;
  if (puStack_30 != (undefined8 *)0x0) {
    puVar9 = puStack_30;
  }
  puVar1 = puVar9 + iStack_28;
  while( true ) {
    if (iStack_28 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_100);
    }
    if (puVar9 == puVar1) break;
    pAStack_108 = (AConstraintsActor *)*puVar9;
    if (((pAStack_108->_padding_ & 1) != 0) && ((pAStack_108->_padding_ & 0x20000000) == 0)) {
      UActorComponent::RegisterAllComponentTickFunctions((UActorComponent *)pAStack_108,true);
      (**(code **)(pAStack_108->_padding_ + 0x3f8))();
      if ((pAStack_108->_padding_ & 0x20000000) == 0) {
        ppAStack_f8 = &pAStack_108;
        `AActor::BeginPlay'::__l12::<lambda_2>::operator()(&ppAStack_f8);
      }
    }
    puVar9 = puVar9 + 1;
  }
  if ((((this->_padding_ & 0x20000) != 0) &&
      (pUVar4 = AActor::GetWorld((AActor *)this), pUVar4 != (UWorld *)0x0)) &&
     (this_00 = UWorld::GetSubsystem<UAutoDestroySubsystem>(pUVar4),
     this_00 != (UAutoDestroySubsystem *)0x0)) {
    UAutoDestroySubsystem::RegisterActor(this_00,(AActor *)this);
  }
  pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveBeginPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,0);
  *(byte *)((longlong)&this->_padding_ + 5) =
       *(byte *)((longlong)&this->_padding_ + 5) & 0xf7 | 0x10;
  if (puStack_30 != (undefined8 *)0x0) {
    FMemory::Free(puStack_30);
  }
  return;
}

// Destroyed @ 1464ad0e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AConstraintsActor::Destroyed(AConstraintsActor *this)

{
  UConstraintsManager *pUVar1;
  UWorld *this_00;
  
  pUVar1 = (this->ConstraintsManager).field0_0x0.DebugPtr;
  if ((pUVar1 != (UConstraintsManager *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar1 = (this->ConstraintsManager).field0_0x0.DebugPtr;
    this_00 = AActor::GetWorld((AActor *)this);
    if ((this_00 != (UWorld *)0x0) && ((pUVar1->OnActorDestroyedHandle).ID != 0)) {
      UWorld::RemoveOnActorDestroyedHandler
                (this_00,(FDelegateHandle)(pUVar1->OnActorDestroyedHandle).ID);
    }
    (pUVar1->OnActorDestroyedHandle).ID = 0;
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1464b59b0

UClass * __cdecl AConstraintsActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AConstraintsActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintsActor",
               &Z_Registration_Info_UClass_AConstraintsActor.InnerSingleton,
               StaticRegisterNativesAConstraintsActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AConstraintsActor>,
               InternalVTableHelperCtorCaller<AConstraintsActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AConstraintsActor.InnerSingleton;
}

// PostRegisterAllComponents @ 1464bb760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall AConstraintsActor::PostRegisterAllComponents(AConstraintsActor *this)

{
  UClass *pUVar1;
  TObjectPtr<UConstraintsManager>_u_0 TVar2;
  UWorld *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDelegateHandle FVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  TObjectPtr<UConstraintsManager>_u_0 local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  FDelegateAllocation local_e8;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  AActor::PostRegisterAllComponents((AActor *)this);
  TVar2 = (TObjectPtr<UConstraintsManager>_u_0)(this->ConstraintsManager).field0_0x0.DebugPtr;
  if (TVar2.DebugPtr == (UConstraintsManager *)0x0) {
    local_f8.DebugPtr = (UConstraintsManager *)0x0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = UConstraintsManager::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar1);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_Transactional;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    TVar2.DebugPtr =
         (UConstraintsManager *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar6 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (UConstraintsManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    (this->ConstraintsManager).field0_0x0.DebugPtr = (UConstraintsManager *)TVar2;
  }
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    if (((TVar2.DebugPtr)->OnActorDestroyedHandle).ID != 0) {
      UWorld::RemoveOnActorDestroyedHandler
                (this_00,(FDelegateHandle)((TVar2.DebugPtr)->OnActorDestroyedHandle).ID);
    }
    ((TVar2.DebugPtr)->OnActorDestroyedHandle).ID = 0;
    local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f0,(FWriteAccessScope *)&local_d8);
    local_c0 = &local_e8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_e8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUConstraintsManager____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      puVar3[3] = 0;
      local_f8 = TVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_f8);
      puVar3[4] = UConstraintsManager::OnActorDestroyed;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    FVar5 = UWorld::AddOnActorDestroyedHandler
                      (this_00,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                               &local_f8.ObjectPtr);
                    /* WARNING: Load size is inaccurate */
    ((TVar2.DebugPtr)->OnActorDestroyedHandle).ID = *FVar5.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f0,(FWriteAccessScope *)&local_d8);
    if ((local_e8.DelegateSize != 0) &&
       (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e8,0,0,0x10);
      local_e8.DelegateSize = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  }
  RegisterConstraintsTickFunctions(this);
  return;
}

// RegisterConstraintsTickFunctions @ 1464bcd10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AConstraintsActor::RegisterConstraintsTickFunctions(AConstraintsActor *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  UConstraintsManager *pUVar4;
  char cVar5;
  byte bVar6;
  ULevel *pUVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  TObjectPtr<UConstraintsManager>_u_0 local_res10;
  
  pUVar7 = AActor::GetLevel((AActor *)this);
  if ((pUVar7 != (ULevel *)0x0) &&
     (local_res10 = (this->ConstraintsManager).field0_0x0,
     local_res10.DebugPtr != (UConstraintsManager *)0x0)) {
    iVar2 = ((local_res10.DebugPtr)->Constraints).ArrayNum;
    if (iVar2 != 0) {
      iVar12 = 0;
      plVar3 = *(longlong **)((longlong)local_res10 + 0x38);
      if (((*plVar3 == 0) || ((*(uint *)(*plVar3 + 8) >> 0x1e & 1) != 0)) ||
         (cVar5 = (**(code **)(*(longlong *)*plVar3 + 0x2c0))((longlong *)*plVar3,0), cVar5 == '\0')
         ) {
        bVar13 = 0;
      }
      else {
        bVar13 = 1;
      }
      lVar8 = 0;
      iVar10 = 0;
      do {
        iVar11 = iVar10;
        do {
          lVar8 = lVar8 + 1;
          iVar11 = iVar11 + 1;
          if (iVar2 <= lVar8) break;
          if (((plVar3[lVar8] == 0) || ((*(uint *)(plVar3[lVar8] + 8) >> 0x1e & 1) != 0)) ||
             (cVar5 = (**(code **)(*(longlong *)plVar3[lVar8] + 0x2c0))((longlong *)plVar3[lVar8],0)
             , cVar5 == '\0')) {
            bVar6 = 0;
          }
          else {
            bVar6 = 1;
          }
        } while (bVar13 == bVar6);
        if (bVar13 != 0) {
          if (iVar12 != iVar10) {
            memmove(plVar3 + iVar12,plVar3 + iVar10,(longlong)(iVar11 - iVar10) << 3);
          }
          iVar12 = iVar12 + (iVar11 - iVar10);
        }
        bVar13 = bVar13 ^ 1;
        iVar10 = iVar11;
      } while (lVar8 < iVar2);
      ((local_res10.DebugPtr)->Constraints).ArrayNum = iVar12;
    }
    pUVar4 = (this->ConstraintsManager).field0_0x0.DebugPtr;
    pFVar9 = (pUVar4->Constraints).AllocatorInstance.Data;
    iVar2 = (pUVar4->Constraints).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar4->Constraints).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UTickableConstraint>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res10);
      }
      if (pFVar9 == pFVar1) break;
      ::Singleton.World = AActor::GetWorld((AActor *)this);
      FConstraintsManagerController::AddConstraint(&::Singleton,*(UTickableConstraint **)pFVar9);
      pFVar9 = pFVar9 + 8;
    }
  }
  return;
}

// StaticRegisterNativesAConstraintsActor @ 1464c1f70

void __cdecl AConstraintsActor::StaticRegisterNativesAConstraintsActor(void)

{
  return;
}

// Tick @ 1464c22e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AConstraintsActor::Tick(AConstraintsActor *this,float param_1)

{
  uint uVar1;
  UFunction *pUVar2;
  UWorld *this_00;
  FLatentActionManager *this_01;
  float afStackX_8 [2];
  
  uVar1 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    afStackX_8[0] = param_1;
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveTick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,afStackX_8);
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,this_00->DeltaTimeSeconds);
    }
  }
  return;
}

