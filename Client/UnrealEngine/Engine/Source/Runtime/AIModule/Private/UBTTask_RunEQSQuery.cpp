// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 16

// StaticClass @ 146ea78f0

UClass * __cdecl UBTTask_RunEQSQuery::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_RunEQSQuery.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_RunEQSQuery",
               &Z_Registration_Info_UClass_UBTTask_RunEQSQuery.InnerSingleton,
               StaticRegisterNativesUBTTask_RunEQSQuery,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_RunEQSQuery>,
               InternalVTableHelperCtorCaller<UBTTask_RunEQSQuery>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_RunEQSQuery.InnerSingleton;
}

// UBTTask_RunEQSQuery @ 146eca040

UBTTask_RunEQSQuery * __thiscall
UBTTask_RunEQSQuery::UBTTask_RunEQSQuery(UBTTask_RunEQSQuery *this,FVTableHelper *param_1)

{
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest(&this->EQSRequest);
  this->bUpdateBBOnFail = false;
  *(undefined8 *)&this->QueryFinishedDelegate = 0;
  *(undefined8 *)&(this->QueryFinishedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->QueryFinishedDelegate).field_0x10 = 0;
  return this;
}

// UBTTask_RunEQSQuery @ 146eca0a0

UBTTask_RunEQSQuery * __thiscall
UBTTask_RunEQSQuery::UBTTask_RunEQSQuery(UBTTask_RunEQSQuery *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UClass *this_00;
  UBTTask_RunEQSQuery *local_res8;
  FString local_98;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest(&this->EQSRequest);
  this->bUpdateBBOnFail = false;
  *(undefined8 *)&this->QueryFinishedDelegate = 0;
  *(undefined8 *)&(this->QueryFinishedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->QueryFinishedDelegate).field_0x10 = 0;
  ::FString::FString(&local_98,"Run EQS Query");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &local_98) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_98.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_98.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  uStack_80 = 0;
  local_88 = OnQueryFinished;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTTask_RunEQSQuery____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->QueryFinishedDelegate,
             (FWriteAccessScope *)&local_88);
  if ((*(int *)&(this->QueryFinishedDelegate).field_0x10 != 0) &&
     (puVar5 = *(undefined8 **)&(this->QueryFinishedDelegate).field_0x8, puVar5 != (undefined8 *)0x0
     )) {
    (**(code **)*puVar5)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->QueryFinishedDelegate).field_0x8,0,0,0x10);
    *(undefined4 *)&(this->QueryFinishedDelegate).field_0x10 = 0;
  }
  pvVar2 = *(void **)&(this->QueryFinishedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)&(this->QueryFinishedDelegate).field_0x8 = FVar3;
  *(int *)&(this->QueryFinishedDelegate).field_0x10 = iVar4;
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
  this_00 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this->bUpdateBBOnFail = (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0xb;
  return this;
}

// ~UBTTask_RunEQSQuery @ 146ecd720

void __thiscall UBTTask_RunEQSQuery::~UBTTask_RunEQSQuery(UBTTask_RunEQSQuery *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->QueryFinishedDelegate);
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
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// AbortTask @ 146ed19f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __thiscall
UBTTask_RunEQSQuery::AbortTask
          (UBTTask_RunEQSQuery *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  UWorld *pUVar1;
  UEnvQueryManager *this_00;
  
  pUVar1 = (UWorld *)param_1->_padding_;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  this_00 = UEnvQueryManager::GetCurrent(pUVar1);
  if (this_00 != (UEnvQueryManager *)0x0) {
    UEnvQueryManager::AbortQuery(this_00,*(int *)param_2);
  }
  return Aborted;
}

// CleanupMemory @ 146ed5f90

void __thiscall
UBTTask_RunEQSQuery::CleanupMemory
          (UBTTask_RunEQSQuery *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// CollectKeyFilters @ 146ed6f10

void __thiscall UBTTask_RunEQSQuery::CollectKeyFilters(UBTTask_RunEQSQuery *this)

{
  return;
}

// DescribeRuntimeValues @ 146edd130

/* WARNING: Removing unreachable block (ram,0x000146edd22d) */

void __thiscall
UBTTask_RunEQSQuery::DescribeRuntimeValues
          (UBTTask_RunEQSQuery *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  if (param_3 == Detailed) {
    ::FString::PrintfImpl(&local_18,L"request: %d");
    pFVar4 = (param_4->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = param_4->ArrayNum;
    if (iVar3 == param_4->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar3 + 1;
    pFVar4 = (param_4->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar4 = 0;
    *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
    *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  }
  return;
}

// ExecuteTask @ 146ee23f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_RunEQSQuery::ExecuteTask
          (UBTTask_RunEQSQuery *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  UBlackboardComponent *pUVar2;
  FAIRequestID FVar3;
  UClass *pUVar4;
  FBTEnvQueryTaskMemory *pFVar5;
  UObject *pUVar6;
  
  pUVar6 = (UObject *)param_1->_padding_;
  if (pUVar6 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pUVar6 = *(UObject **)&pUVar6[0x13].field_0x18;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar6 == (UObject *)0x0) {
          return Failed;
        }
        UE::GC::MarkAsReachable(pUVar6);
      }
      if (pUVar6 == (UObject *)0x0) {
        return Failed;
      }
    }
    if ((this->EQSRequest).bInitialized != 0) {
      pUVar2 = (UBlackboardComponent *)param_1->_padding_;
      pFVar5 = UBTNode::CastInstanceNodeMemory<FBTEnvQueryTaskMemory>((UBTNode *)this,param_2);
      FVar3.RequestID =
           FEQSParametrizedQueryExecutionRequest::Execute
                     (&this->EQSRequest,pUVar6,pUVar2,&this->QueryFinishedDelegate);
      pFVar5->RequestID = FVar3.RequestID;
      if (-1 < (int)FVar3.RequestID) {
        UBehaviorTreeComponent::RegisterMessageObserver
                  (param_1,(UBTTaskNode *)this,UBrainComponent::AIMessage_QueryFinished,FVar3);
        return InProgress;
      }
    }
  }
  return Failed;
}

// GetInstanceMemorySize @ 146ee5af0

ushort __thiscall UBTTask_RunEQSQuery::GetInstanceMemorySize(UBTTask_RunEQSQuery *this)

{
  return 4;
}

// GetPrivateStaticClass @ 146ee8ee0

UClass * __cdecl UBTTask_RunEQSQuery::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_RunEQSQuery.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_RunEQSQuery",
               &Z_Registration_Info_UClass_UBTTask_RunEQSQuery.InnerSingleton,
               StaticRegisterNativesUBTTask_RunEQSQuery,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_RunEQSQuery>,
               InternalVTableHelperCtorCaller<UBTTask_RunEQSQuery>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_RunEQSQuery.InnerSingleton;
}

// GetStaticDescription @ 146eed1e0

/* WARNING: Removing unreachable block (ram,0x000146eed33d) */
/* WARNING: Removing unreachable block (ram,0x000146eed34a) */

FString * __thiscall
UBTTask_RunEQSQuery::GetStaticDescription(UBTTask_RunEQSQuery *this,FString *__return_storage_ptr__)

{
  UEnvQuery *pUVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  wchar_t *pwVar9;
  FString *__return_storage_ptr___00;
  FName local_res8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((this->EQSRequest).bUseBBKeyForQueryTemplate == 0) {
    ::FName::ToString((FName *)&this->_padding_,&local_68);
    pUVar1 = (this->EQSRequest).QueryTemplate.field0_0x0.DebugPtr;
    if (pUVar1 == (UEnvQuery *)0x0) {
      ::FString::FString(&local_a8,L"None");
    }
    else {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_a8);
    }
    UBehaviorTreeTypes::GetShortTypeName(&local_98,(UObject *)this);
    __return_storage_ptr___00 = &local_78;
    pwVar9 = L"%s: %s\nResult Blackboard key: %s";
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
  }
  else {
    ::FName::ToString((FName *)&this->_padding_,&local_38);
    ::FName::ToString(&(this->EQSRequest).EQSQueryBlackboardKey.SelectedKeyName,&local_48);
    UBehaviorTreeTypes::GetShortTypeName(&local_88,(UObject *)this);
    __return_storage_ptr___00 = &local_58;
    pwVar9 = L"%s: EQS query indicated by %s blackboard key\nResult Blackboard key: %s";
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  ::FString::PrintfImpl(__return_storage_ptr___00,pwVar9);
  (__return_storage_ptr__->Data).AllocatorInstance.Data =
       (__return_storage_ptr___00->Data).AllocatorInstance.Data;
  (__return_storage_ptr___00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (__return_storage_ptr___00->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (__return_storage_ptr___00->Data).ArrayMax;
  (__return_storage_ptr___00->Data).ArrayNum = 0;
  (__return_storage_ptr___00->Data).ArrayMax = 0;
  if ((bVar3) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar7) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((bVar8) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeFromAsset @ 146ef2440

void __thiscall
UBTTask_RunEQSQuery::InitializeFromAsset(UBTTask_RunEQSQuery *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
LAB_146ef2475:
    pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if (pUVar1 != (UBlackboardData *)0x0) {
      FBlackboardKeySelector::ResolveSelectedKey((FBlackboardKeySelector *)&this->_padding_,pUVar1);
      goto LAB_146ef24b0;
    }
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 != (UBehaviorTree *)0x0) goto LAB_146ef2475;
  }
  *(undefined4 *)&this->_padding_ = 0xffff;
LAB_146ef24b0:
  pUVar1 = (UBlackboardData *)0x0;
  if (((this->_padding_ != 0) &&
      (pUVar1 = *(UBlackboardData **)(this->_padding_ + 0x38),
      UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FEQSParametrizedQueryExecutionRequest::InitForOwnerAndBlackboard
            (&this->EQSRequest,(UObject *)this,pUVar1);
  return;
}

// InitializeMemory @ 146ef3050

void __thiscall
UBTTask_RunEQSQuery::InitializeMemory
          (UBTTask_RunEQSQuery *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  if (param_3 == Initialize) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
  }
  UBTNode::CastInstanceNodeMemory<FBTEnvQueryTaskMemory>((UBTNode *)this,param_2);
  return;
}

// OnQueryFinished @ 146ef9720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBTTask_RunEQSQuery::OnQueryFinished
          (UBTTask_RunEQSQuery *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  UBlackboardComponent *this_00;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  AActor *this_01;
  UClass *pUVar8;
  UBehaviorTreeComponent *pUVar9;
  FEnvQueryResult *pFVar10;
  UClass *pUVar11;
  UEnvQueryItemType *pUVar12;
  FText *this_02;
  UObject *pUVar13;
  UBTTask_RunEQSQuery *local_res20;
  FName local_88;
  FString local_80;
  FText local_70;
  FString local_60;
  FAIMessage local_50;
  
  if ((param_1->Object == (FEnvQueryResult *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_1->Object->Status == Aborted) goto LAB_146ef9c6f;
  if ((param_1->Object == (FEnvQueryResult *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_01 = (AActor *)FWeakObjectPtr::Get(&(param_1->Object->Owner).WeakPtr);
  if (this_01 == (AActor *)0x0) {
LAB_146ef9bf4:
    this_01 = (AActor *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) goto LAB_146ef9bf4;
    pUVar8 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) ||
        (this_01 = (AActor *)this_01[1].PrimaryActorTick._padding_, this_01 != (AActor *)0x0)) &&
       (pUVar9 = AActor::FindComponentByClass<UBehaviorTreeComponent>(this_01),
       pUVar9 != (UBehaviorTreeComponent *)0x0)) {
      if ((param_1->Object == (FEnvQueryResult *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((param_1->Object->Status == Success) &&
         (pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1),
         0 < (pFVar10->Items).ArrayNum)) {
        lVar3 = pUVar9->_padding_;
        pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1);
        pUVar8 = (pFVar10->ItemType).Class.field0_0x0.DebugPtr;
        if ((pUVar8 == (UClass *)0x0) ||
           (pUVar11 = Z_Construct_UClass_UEnvQueryItemType_NoRegister(), pUVar11 == (UClass *)0x0))
        {
LAB_146ef98e5:
          pUVar8 = (UClass *)0x0;
        }
        else {
          iVar1 = (int)pUVar11->_padding_;
          if (((int)pUVar8->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar11->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_146ef98e5;
          pUVar8 = (pFVar10->ItemType).Class.field0_0x0.DebugPtr;
        }
        pUVar12 = UClass::GetDefaultObject<UEnvQueryItemType>(pUVar8);
        pcVar5 = *(code **)(pUVar12->_padding_ + 0x2b8);
        pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1);
        if (((pFVar10->Items).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pFVar10->Items).AllocatorInstance.Data;
        pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1);
        cVar7 = (*pcVar5)(pUVar12,&this->_padding_,lVar3,
                          (pFVar10->RawData).AllocatorInstance.Data +
                          ((longlong)(*(int *)(pFVar4 + 4) * 2) >> 1));
        if ((cVar7 == '\0') && (FVisualLogger::bIsRecording != 0)) {
          lVar3 = this->_padding_;
          if ((lVar3 == 0) || (pUVar8 = UBlackboardKeyType::StaticClass(), pUVar8 == (UClass *)0x0))
          {
LAB_146ef99cf:
            pUVar13 = (UObject *)0x0;
          }
          else {
            iVar1 = (int)pUVar8->_padding_;
            if ((*(int *)(lVar3 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar8->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_146ef99cf;
            pUVar13 = (UObject *)this->_padding_;
          }
          UBehaviorTreeTypes::GetShortTypeName(&local_60,pUVar13);
          pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1);
          pUVar8 = (pFVar10->ItemType).Class.field0_0x0.DebugPtr;
          if ((pUVar8 == (UClass *)0x0) ||
             (pUVar11 = Z_Construct_UClass_UEnvQueryItemType_NoRegister(), pUVar11 == (UClass *)0x0)
             ) {
LAB_146ef9a31:
            pUVar8 = (UClass *)0x0;
          }
          else {
            iVar1 = (int)pUVar11->_padding_;
            if (((int)pUVar8->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar11->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_146ef9a31;
            pUVar8 = (pFVar10->ItemType).Class.field0_0x0.DebugPtr;
          }
          this_02 = UEnvQueryTypes::GetShortTypeName(&local_70,(UObject *)pUVar8);
          FText::ToString(this_02);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this_01,(FName *)&LogBehaviorTree.field_0x4,Warning,
                     L"Failed to store query result! item:%s key:%s");
          if (local_70.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        cVar7 = '\0';
        if (this->bUpdateBBOnFail != false) {
          this_00 = (UBlackboardComponent *)pUVar9->_padding_;
          if ((this_00 == (UBlackboardComponent *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("MyBlackboard",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Tasks\\BTTask_RunEQSQuery.cpp"
                                 ,0x97,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar2 = (uint)this->_padding_;
          if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UBlackboardComponent::ClearValue(this_00,(FKey)(ushort)uVar2);
        }
      }
      if ((param_1->Object == (FEnvQueryResult *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar2 = param_1->Object->QueryID;
      local_50.MessageName = UBrainComponent::AIMessage_QueryFinished;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UBTTask_RunEQSQuery *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_50.Sender.ObjectIndex = 0;
      local_50.Sender.ObjectSerialNumber = 0;
      local_res20 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UBTTask_RunEQSQuery *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_50.Sender,(FObjectPtr)&local_res20);
      local_50.Status.Value = cVar7 != '\0';
      local_50.MessageFlags = '\0';
      local_50.RequestID.RequestID = uVar2;
      FAIMessage::Send((UBrainComponent *)pUVar9,&local_50);
      goto LAB_146ef9c6f;
    }
  }
  if (2 < (byte)LogBehaviorTree._0_1_) {
    if (this_01 == (AActor *)0x0) {
      ::FString::FString(&local_80,L"None");
    }
    else {
      local_88 = (FName)this_01->_padding_;
      ::FName::ToString(&local_88,&local_80);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
LAB_146ef9c6f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUBTTask_RunEQSQuery @ 146f00e50

void __cdecl UBTTask_RunEQSQuery::StaticRegisterNativesUBTTask_RunEQSQuery(void)

{
  return;
}

