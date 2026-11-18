// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// StaticClass @ 146eaef50

UClass * __cdecl UBTService_RunEQS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTService_RunEQS.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTService_RunEQS",
               &Z_Registration_Info_UClass_UBTService_RunEQS.InnerSingleton,
               StaticRegisterNativesUBTService_RunEQS,0x100,8,CLASS_Intrinsic,CASTCLASS_None,L"Game"
               ,InternalConstructor<UBTService_RunEQS>,
               InternalVTableHelperCtorCaller<UBTService_RunEQS>,local_res8,
               UBTService_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTService_RunEQS.InnerSingleton;
}

// UBTService_RunEQS @ 146ec8310

UBTService_RunEQS * __thiscall
UBTService_RunEQS::UBTService_RunEQS(UBTService_RunEQS *this,FVTableHelper *param_1)

{
  uint *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffff;
  FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest(&this->EQSRequest);
  this->bUpdateBBOnFail = false;
  *(undefined8 *)&this->QueryFinishedDelegate = 0;
  *(undefined8 *)&(this->QueryFinishedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->QueryFinishedDelegate).field_0x10 = 0;
  return this;
}

// UBTService_RunEQS @ 146ec83b0

UBTService_RunEQS * __thiscall
UBTService_RunEQS::UBTService_RunEQS(UBTService_RunEQS *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  FName *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UClass *this_00;
  FName local_res8;
  FName local_res18;
  FString local_98;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  UBTService_BlackboardBase::UBTService_BlackboardBase((UBTService_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest(&this->EQSRequest);
  this->bUpdateBBOnFail = false;
  *(undefined8 *)&this->QueryFinishedDelegate = 0;
  *(undefined8 *)&(this->QueryFinishedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->QueryFinishedDelegate).field_0x10 = 0;
  ::FString::FString(&local_98,"Run EQS query on a regular basis");
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
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar5 = ::FName::FName(&local_res18,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar5,
             (TSubclassOf<UObject>)&local_res8);
  pFVar5 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar5);
  uStack_80 = 0;
  local_88 = OnQueryFinished;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTService_RunEQS____A6AXV__TSharedPtr_UFEnvQueryResult___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
    puVar6[4] = local_88;
    puVar6[5] = CONCAT44(uStack_7c,uStack_80);
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
     (puVar6 = *(undefined8 **)&(this->QueryFinishedDelegate).field_0x8, puVar6 != (undefined8 *)0x0
     )) {
    (**(code **)*puVar6)();
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

// ~UBTService_RunEQS @ 146ecd360

void __thiscall UBTService_RunEQS::~UBTService_RunEQS(UBTService_RunEQS *this)

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
  UBTService_BlackboardBase::~UBTService_BlackboardBase((UBTService_BlackboardBase *)this);
  return;
}

// CleanupMemory @ 146ed5f50

void __thiscall
UBTService_RunEQS::CleanupMemory
          (UBTService_RunEQS *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// GetInstanceMemorySize @ 146ee5ab0

ushort __thiscall UBTService_RunEQS::GetInstanceMemorySize(UBTService_RunEQS *this)

{
  return 4;
}

// GetPrivateStaticClass @ 146ee8460

UClass * __cdecl UBTService_RunEQS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTService_RunEQS.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTService_RunEQS",
               &Z_Registration_Info_UClass_UBTService_RunEQS.InnerSingleton,
               StaticRegisterNativesUBTService_RunEQS,0x100,8,CLASS_Intrinsic,CASTCLASS_None,L"Game"
               ,InternalConstructor<UBTService_RunEQS>,
               InternalVTableHelperCtorCaller<UBTService_RunEQS>,local_res8,
               UBTService_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTService_RunEQS.InnerSingleton;
}

// GetStaticDescription @ 146eec680

/* WARNING: Removing unreachable block (ram,0x000146eec892) */
/* WARNING: Removing unreachable block (ram,0x000146eec89f) */

FString * __thiscall
UBTService_RunEQS::GetStaticDescription(UBTService_RunEQS *this,FString *__return_storage_ptr__)

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
  FString local_c8;
  FString local_b8;
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
      ::FString::FString(&local_c8,L"None");
    }
    else {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_c8);
    }
    (**(code **)(this->_padding_ + 0x318))(this,&local_98);
    UBehaviorTreeTypes::GetShortTypeName(&local_88,(UObject *)this);
    ::FString::PrintfImpl(&local_b8,L"%s: %s");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
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
    (**(code **)(this->_padding_ + 0x318))(this,&local_88);
    UBehaviorTreeTypes::GetShortTypeName(&local_98,(UObject *)this);
    ::FString::PrintfImpl(&local_a8,L"%s: %s");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
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
  if ((bVar3) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar7) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((bVar8) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeFromAsset @ 146ef2290

void __thiscall
UBTService_RunEQS::InitializeFromAsset(UBTService_RunEQS *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
LAB_146ef22c5:
    pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if (pUVar1 != (UBlackboardData *)0x0) {
      FBlackboardKeySelector::ResolveSelectedKey((FBlackboardKeySelector *)&this->_padding_,pUVar1);
      goto LAB_146ef2300;
    }
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 != (UBehaviorTree *)0x0) goto LAB_146ef22c5;
  }
  *(undefined4 *)&this->_padding_ = 0xffff;
LAB_146ef2300:
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

// InitializeMemory @ 146ef2f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UBTService_RunEQS::InitializeMemory
          (UBTService_RunEQS *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  code *pcVar1;
  bool bVar2;
  FBTEQSServiceMemory *pFVar3;
  
  if (param_3 == Initialize) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
  }
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTEQSServiceMemory>((UBTNode *)this,param_2);
  if (pFVar3 == (FBTEQSServiceMemory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyMemory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Services\\BTService_RunEQS.cpp"
                       ,0x99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _DAT_00000000 = 0xffffffff;
    return;
  }
  pFVar3->RequestID = -1;
  return;
}

// OnCeaseRelevant @ 146ef7390

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
UBTService_RunEQS::OnCeaseRelevant
          (UBTService_RunEQS *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  FBTEQSServiceMemory *pFVar3;
  UWorld *pUVar4;
  UEnvQueryManager *this_00;
  
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTEQSServiceMemory>((UBTNode *)this,param_2);
  if ((pFVar3 == (FBTEQSServiceMemory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MyMemory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Services\\BTService_RunEQS.cpp"
                         ,0x83,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (pFVar3->RequestID == -1) {
    return;
  }
  pUVar4 = (UWorld *)param_1->_padding_;
  if ((pUVar4 != (UWorld *)0x0) ||
     (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
     pUVar4 != (UWorld *)0x0)) {
    this_00 = UEnvQueryManager::GetCurrent(pUVar4);
    if ((this_00 == (UEnvQueryManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EQSManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Services\\BTService_RunEQS.cpp"
                           ,0x8c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UEnvQueryManager::AbortQuery(this_00,pFVar3->RequestID);
  }
  pFVar3->RequestID = -1;
  return;
}

// OnQueryFinished @ 146ef9230

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
UBTService_RunEQS::OnQueryFinished(UBTService_RunEQS *this,TSharedPtr<FEnvQueryResult,1> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  UBlackboardComponent *this_00;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  AActor *this_01;
  UClass *pUVar8;
  UBehaviorTreeComponent *this_02;
  uchar *puVar9;
  FEnvQueryResult *pFVar10;
  UClass *pUVar11;
  UEnvQueryItemType *pUVar12;
  UClass *pUVar13;
  FText *this_03;
  UClass *pUVar14;
  undefined1 local_res10 [8];
  longlong local_res18;
  FBTEQSServiceMemory *local_res20;
  FName local_78;
  FString local_70;
  FText local_60;
  FString local_50;
  
  if ((param_1->Object == (FEnvQueryResult *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1->Object->Status == Aborted) goto LAB_146ef96ff;
  if ((param_1->Object == (FEnvQueryResult *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_01 = (AActor *)FWeakObjectPtr::Get(&(param_1->Object->Owner).WeakPtr);
  if (this_01 == (AActor *)0x0) {
LAB_146ef967b:
    this_01 = (AActor *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar8->_padding_)) goto LAB_146ef967b;
    pUVar8 = Z_Construct_UClass_APawn_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((((*(int *)(this_01->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar8->_padding_)) ||
        (this_01 = (AActor *)this_01[1].PrimaryActorTick._padding_, this_01 != (AActor *)0x0)) &&
       (this_02 = AActor::FindComponentByClass<UBehaviorTreeComponent>(this_01),
       this_02 != (UBehaviorTreeComponent *)0x0)) {
      iVar7 = UBehaviorTreeComponent::FindInstanceContainingNode(this_02,(UBTNode *)this);
      puVar9 = UBehaviorTreeComponent::GetNodeMemory(this_02,(UBTNode *)this,iVar7);
      local_res20 = UBTNode::CastInstanceNodeMemory<FBTEQSServiceMemory>((UBTNode *)this,puVar9);
      if ((local_res20 == (FBTEQSServiceMemory *)0x0) || (local_res20->RequestID == -1)) {
        local_res10[0] = 0;
        bVar5 = `UBTService_RunEQS::OnQueryFinished'::__l30::<lambda_1>::operator()(local_res10);
        if (!bVar5) goto LAB_146ef96ff;
      }
      pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1);
      if ((pFVar10->Status == Success) &&
         (pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1),
         0 < (pFVar10->Items).ArrayNum)) {
        local_res18 = this_02->_padding_;
        pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1);
        pUVar14 = (UClass *)0x0;
        pUVar8 = (pFVar10->ItemType).Class.field0_0x0.DebugPtr;
        pUVar13 = pUVar14;
        if ((pUVar8 != (UClass *)0x0) &&
           (pUVar11 = Z_Construct_UClass_UEnvQueryItemType_NoRegister(), pUVar11 != (UClass *)0x0))
        {
          iVar7 = (int)pUVar11->_padding_;
          if (((int)pUVar8->_padding_ < iVar7) ||
             ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar7 * 8) !=
              &pUVar11->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            pUVar13 = (pFVar10->ItemType).Class.field0_0x0.DebugPtr;
          }
        }
        pUVar12 = UClass::GetDefaultObject<UEnvQueryItemType>(pUVar13);
        pcVar4 = *(code **)(pUVar12->_padding_ + 0x2b8);
        pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1);
        if (((pFVar10->Items).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pFVar10->Items).AllocatorInstance.Data;
        pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1);
        cVar6 = (*pcVar4)(pUVar12,&this->_padding_,local_res18,
                          (pFVar10->RawData).AllocatorInstance.Data +
                          ((longlong)(*(int *)(pFVar2 + 4) * 2) >> 1));
        if ((cVar6 == '\0') && (FVisualLogger::bIsRecording != 0)) {
          lVar3 = this->_padding_;
          pUVar8 = pUVar14;
          if ((lVar3 != 0) &&
             (pUVar13 = UBlackboardKeyType::StaticClass(), pUVar13 != (UClass *)0x0)) {
            iVar7 = (int)pUVar13->_padding_;
            if ((*(int *)(lVar3 + 0x38) < iVar7) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar13->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              pUVar8 = (UClass *)this->_padding_;
            }
          }
          UBehaviorTreeTypes::GetShortTypeName(&local_50,(UObject *)pUVar8);
          pFVar10 = TSharedPtr<FEnvQueryResult,1>::operator->(param_1);
          pUVar8 = (pFVar10->ItemType).Class.field0_0x0.DebugPtr;
          if ((pUVar8 != (UClass *)0x0) &&
             (pUVar13 = Z_Construct_UClass_UEnvQueryItemType_NoRegister(), pUVar13 != (UClass *)0x0)
             ) {
            iVar7 = (int)pUVar13->_padding_;
            if (((int)pUVar8->_padding_ < iVar7) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar7 * 8) !=
                &pUVar13->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              pUVar14 = (pFVar10->ItemType).Class.field0_0x0.DebugPtr;
            }
          }
          this_03 = UEnvQueryTypes::GetShortTypeName(&local_60,(UObject *)pUVar14);
          FText::ToString(this_03);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this_01,(FName *)&LogBehaviorTree.field_0x4,Warning,
                     L"Failed to store query result! item:%s key:%s");
          if (local_60.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
          }
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
            local_res20->RequestID = -1;
            goto LAB_146ef96ff;
          }
        }
      }
      else if (this->bUpdateBBOnFail != false) {
        this_00 = (UBlackboardComponent *)this_02->_padding_;
        if ((this_00 == (UBlackboardComponent *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("MyBlackboard",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Services\\BTService_RunEQS.cpp"
                               ,0x79,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar1 = (uint)this->_padding_;
        if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UBlackboardComponent::ClearValue(this_00,(FKey)(ushort)uVar1);
      }
      local_res20->RequestID = -1;
      goto LAB_146ef96ff;
    }
  }
  if (2 < (byte)LogBehaviorTree._0_1_) {
    if (this_01 == (AActor *)0x0) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      local_78 = (FName)this_01->_padding_;
      ::FName::ToString(&local_78,&local_70);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
LAB_146ef96ff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUBTService_RunEQS @ 146f00d40

void __cdecl UBTService_RunEQS::StaticRegisterNativesUBTService_RunEQS(void)

{
  return;
}

// TickNode @ 146f02050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTService_RunEQS::TickNode
          (UBTService_RunEQS *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3)

{
  UBlackboardComponent *pUVar1;
  int iVar2;
  UClass *pUVar3;
  FBTEQSServiceMemory *pFVar4;
  UObject *pUVar5;
  
  pUVar5 = (UObject *)param_1->_padding_;
  if (pUVar5 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AController_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar3->_padding_)) {
      pUVar5 = *(UObject **)&pUVar5[0x13].field_0x18;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar5 == (UObject *)0x0) goto LAB_146f02110;
        UE::GC::MarkAsReachable(pUVar5);
      }
      if (pUVar5 == (UObject *)0x0) goto LAB_146f02110;
    }
    if ((this->EQSRequest).bInitialized != 0) {
      pUVar1 = (UBlackboardComponent *)param_1->_padding_;
      pFVar4 = UBTNode::CastInstanceNodeMemory<FBTEQSServiceMemory>((UBTNode *)this,param_2);
      if (pFVar4->RequestID == -1) {
        iVar2 = FEQSParametrizedQueryExecutionRequest::Execute
                          (&this->EQSRequest,pUVar5,pUVar1,&this->QueryFinishedDelegate);
        pFVar4->RequestID = iVar2;
      }
    }
  }
LAB_146f02110:
                    /* WARNING: Could not recover jumptable at 0x000146f02128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this,param_1,param_2);
  return;
}

// operator() @ 1504fece0

bool __thiscall `UBTService_RunEQS::OnQueryFinished'::__l30::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6500511939699933085>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6500511939699933085>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

