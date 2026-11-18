// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146fe9840

UClass * __cdecl UAITask_RunEQS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask_RunEQS.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask_RunEQS",
               &Z_Registration_Info_UClass_UAITask_RunEQS.InnerSingleton,
               StaticRegisterNativesUAITask_RunEQS,0x108,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAITask_RunEQS>,
               InternalVTableHelperCtorCaller<UAITask_RunEQS>,local_res8,UAITask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask_RunEQS.InnerSingleton;
}

// UAITask_RunEQS @ 146fec210

UAITask_RunEQS * __thiscall
UAITask_RunEQS::UAITask_RunEQS(UAITask_RunEQS *this,FVTableHelper *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest(&this->EQSRequest);
  *(undefined8 *)&this->EQSFinishedDelegate = 0;
  *(undefined8 *)&(this->EQSFinishedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->EQSFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->NotificationDelegate = 0;
  *(undefined8 *)&(this->NotificationDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NotificationDelegate).field_0x10 = 0;
  (this->QueryResult).Object = (FEnvQueryResult *)0x0;
  (this->QueryResult).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAITask_RunEQS @ 146fec2a0

UAITask_RunEQS * __thiscall
UAITask_RunEQS::UAITask_RunEQS(UAITask_RunEQS *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  void *pvVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UAITask_RunEQS *local_res8;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0x7f;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest(&this->EQSRequest);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffff7;
  local_88 = OnEQSRequestFinished;
  *(undefined8 *)&this->EQSFinishedDelegate = 0;
  *(undefined8 *)&(this->EQSFinishedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->EQSFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->NotificationDelegate = 0;
  *(undefined8 *)&(this->NotificationDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NotificationDelegate).field_0x10 = 0;
  (this->QueryResult).Object = (FEnvQueryResult *)0x0;
  (this->QueryResult).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uStack_80 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAITask_RunEQS____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = local_88;
    puVar5[5] = CONCAT44(uStack_7c,uStack_80);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  iVar4 = local_60.DelegateSize;
  FVar3 = local_60.DelegateAllocator;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->EQSFinishedDelegate,
             (FWriteAccessScope *)&local_88);
  if ((*(int *)&(this->EQSFinishedDelegate).field_0x10 != 0) &&
     (puVar5 = *(undefined8 **)&(this->EQSFinishedDelegate).field_0x8, puVar5 != (undefined8 *)0x0))
  {
    (**(code **)*puVar5)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->EQSFinishedDelegate).field_0x8,0,0,0x10);
    *(undefined4 *)&(this->EQSFinishedDelegate).field_0x10 = 0;
  }
  pvVar2 = *(void **)&(this->EQSFinishedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)&(this->EQSFinishedDelegate).field_0x8 = FVar3;
  *(int *)&(this->EQSFinishedDelegate).field_0x10 = iVar4;
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return this;
}

// ~UAITask_RunEQS @ 146fec920

void __thiscall UAITask_RunEQS::~UAITask_RunEQS(UAITask_RunEQS *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QueryResult).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NotificationDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EQSFinishedDelegate);
  pFVar1 = (this->EQSRequest).EQSQueryBlackboardKey.AllowedTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAIDynamicParam,int>
            ((FAIDynamicParam *)(this->EQSRequest).QueryConfig.AllocatorInstance.Data,
             (this->EQSRequest).QueryConfig.ArrayNum);
  pFVar1 = (this->EQSRequest).QueryConfig.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UAITask::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UAITask::_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  return;
}

// Activate @ 146fed770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAITask_RunEQS::Activate(UAITask_RunEQS *this)

{
  longlong lVar1;
  UBlackboardComponent *pUVar2;
  UObject *pUVar3;
  
  if (((((this->EQSRequest).QueryTemplate.field0_0x0.DebugPtr != (UEnvQuery *)0x0) &&
       (lVar1 = this->_padding_, lVar1 != 0)) && (*(longlong *)(lVar1 + 0x3c8) != 0)) &&
     (*(UObject **)(lVar1 + 0x310) != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(*(UObject **)(lVar1 + 0x310));
    }
    UAITask::Activate((UAITask *)this);
    pUVar2 = *(UBlackboardComponent **)(this->_padding_ + 0x3c8);
    pUVar3 = *(UObject **)(this->_padding_ + 0x310);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FEQSParametrizedQueryExecutionRequest::Execute
              (&this->EQSRequest,pUVar3,pUVar2,&this->EQSFinishedDelegate);
  }
  return;
}

// GetPrivateStaticClass @ 146ff0c30

UClass * __cdecl UAITask_RunEQS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask_RunEQS.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask_RunEQS",
               &Z_Registration_Info_UClass_UAITask_RunEQS.InnerSingleton,
               StaticRegisterNativesUAITask_RunEQS,0x108,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAITask_RunEQS>,
               InternalVTableHelperCtorCaller<UAITask_RunEQS>,local_res8,UAITask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask_RunEQS.InnerSingleton;
}

// OnEQSRequestFinished @ 146ff1960

void __thiscall
UAITask_RunEQS::OnEQSRequestFinished(UAITask_RunEQS *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  FEnvQueryResult *pFVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FEnvQueryResult *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  pFVar1 = &param_1->SharedReferenceCount;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x04') {
    pTVar5 = pFVar1->ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->QueryResult).SharedReferenceCount.ReferenceController;
    (this->QueryResult).Object = pFVar2;
    (this->QueryResult).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar2 = param_1->Object;
    pTVar5 = pFVar1->ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->NotificationDelegate
               ,&local_28);
    if ((*(int *)&(this->NotificationDelegate).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(this->NotificationDelegate).field_0x8, plVar3 == (longlong *)0x0))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
    else {
      local_38 = pFVar2;
      local_30 = pTVar5;
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    UGameplayTask::EndTask((UGameplayTask *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return;
}

// RunEQS @ 146ff3170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAITask_RunEQS * __cdecl UAITask_RunEQS::RunEQS(AAIController *param_1,UEnvQuery *param_2)

{
  UClass *pUVar1;
  UPackage *pUVar2;
  UClass *pUVar3;
  UAITask_RunEQS *this;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_2 == (UEnvQuery *)0x0) || (param_1 == (AAIController *)0x0)) {
    this = (UAITask_RunEQS *)0x0;
  }
  else {
    pUVar1 = StaticClass();
    local_b8 = 0;
    pUVar2 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = StaticClass();
    CheckIsClassChildOf_Internal(pUVar3,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_NoFlags;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = pUVar2;
    this = (UAITask_RunEQS *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar4 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    *(FNameEntryId *)&this->_padding_ = 0;
    *(uint *)((longlong)&this->_padding_ + 4) = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this->_padding_ = (longlong)param_1;
    UGameplayTask::InitTask
              ((UGameplayTask *)this,(IGameplayTaskOwnerInterface *)&param_1->_padding_,0xc0);
    (this->EQSRequest).QueryTemplate.field0_0x0.DebugPtr = param_2;
  }
  return this;
}

// StaticRegisterNativesUAITask_RunEQS @ 146ff3d00

void __cdecl UAITask_RunEQS::StaticRegisterNativesUAITask_RunEQS(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAITask_RunEQS_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execRunEQS @ 146ff5350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UAITask_RunEQS::execRunEQS(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UGameplayTask *this;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  UObject *local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_d8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pUVar3 = local_d0;
  lVar2 = local_d8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_d8 == 0) || (local_d0 == (UObject *)0x0)) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    pUVar4 = StaticClass();
    local_c8 = 0;
    pUVar5 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar5,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = StaticClass();
    CheckIsClassChildOf_Internal(pUVar6,pUVar4);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar4);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = pUVar5;
    this = (UGameplayTask *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar7 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    (this->InstanceName).ComparisonIndex = 0;
    (this->InstanceName).Number = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    this[1]._padding_ = (longlong)pUVar3;
    UGameplayTask::InitTask(this,(IGameplayTaskOwnerInterface *)&pUVar3[0x16].field_0x8,0xc0);
    this[1]._padding_ = lVar2;
    *(UGameplayTask **)param_3 = this;
  }
  return;
}

