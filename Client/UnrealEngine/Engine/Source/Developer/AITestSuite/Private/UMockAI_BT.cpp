// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 8

// StaticClass @ 14700d360

UClass * __cdecl UMockAI_BT::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockAI_BT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"MockAI_BT",
               &Z_Registration_Info_UClass_UMockAI_BT.InnerSingleton,StaticRegisterNativesUMockAI_BT
               ,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMockAI_BT>,
               InternalVTableHelperCtorCaller<UMockAI_BT>,local_res8,UMockAI::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockAI_BT.InnerSingleton;
}

// UMockAI_BT @ 14704a190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMockAI_BT * __thiscall UMockAI_BT::UMockAI_BT(UMockAI_BT *this,FVTableHelper *param_1)

{
  UMockAI::UMockAI((UMockAI *)this,param_1);
  this->_padding_ = (longlong)&___7UMockAI_BT__6B_;
  (this->BTComp).field0_0x0.DebugPtr = (UBehaviorTreeComponent *)0x0;
  (this->ExpectedResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpectedResult).ArrayNum = 0;
  (this->ExpectedResult).ArrayMax = 0;
  return this;
}

// UMockAI_BT @ 14704a1d0

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

UMockAI_BT * __thiscall UMockAI_BT::UMockAI_BT(UMockAI_BT *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  UBehaviorTreeComponent *pUVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UMockAI::UMockAI((UMockAI *)this,param_1);
  pUVar6 = (UBehaviorTreeComponent *)0x0;
  this->_padding_ = (longlong)&___7UMockAI_BT__6B_;
  (this->BTComp).field0_0x0.DebugPtr = (UBehaviorTreeComponent *)0x0;
  (this->ExpectedResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpectedResult).ArrayNum = 0;
  (this->ExpectedResult).ArrayMax = 0;
  if ((this->_padding_ & 0x10) != 0) {
    return this;
  }
  pUVar4 = (UObject *)this->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UBlackboardComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar4;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  pUVar4 = (UObject *)this->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar4;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UObject *)0x0)) {
    this->_padding_ = (longlong)pUVar4;
    if (pUVar4 == (UObject *)0x0) goto LAB_14704a32f;
  }
  else {
    UE::GC::MarkAsReachable(pUVar4);
    this->_padding_ = (longlong)pUVar4;
  }
  pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
  bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
  if (bVar2) {
    pUVar6 = (UBehaviorTreeComponent *)this->_padding_;
  }
LAB_14704a32f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UBehaviorTreeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->BTComp).field0_0x0.DebugPtr = pUVar6;
  pbVar1 = (byte *)((longlong)&pUVar6->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  UActorComponent::RegisterComponent((UActorComponent *)(this->BTComp).field0_0x0.DebugPtr);
  pUVar6 = (this->BTComp).field0_0x0.DebugPtr;
  if ((pUVar6->_padding_ & 0x9000000) == 0x1000000) {
    (**(code **)(pUVar6->_padding_ + 1000))();
  }
  return this;
}

// ~UMockAI_BT @ 14704b8a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMockAI_BT::~UMockAI_BT(UMockAI_BT *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMockAI_BT__6B_;
  pFVar1 = (this->ExpectedResult).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMockAI__6B_;
  this->_padding_ = 0;
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    AActor::Destroy((AActor *)this->_padding_,false,true);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147052400

UClass * __cdecl UMockAI_BT::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockAI_BT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"MockAI_BT",
               &Z_Registration_Info_UClass_UMockAI_BT.InnerSingleton,StaticRegisterNativesUMockAI_BT
               ,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMockAI_BT>,
               InternalVTableHelperCtorCaller<UMockAI_BT>,local_res8,UMockAI::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockAI_BT.InnerSingleton;
}

// IsRunning @ 147056e90

bool __thiscall UMockAI_BT::IsRunning(UMockAI_BT *this)

{
  UBehaviorTreeComponent *pUVar1;
  char cVar2;
  UBehaviorTree *pUVar3;
  
  pUVar1 = (this->BTComp).field0_0x0.DebugPtr;
  if (pUVar1 != (UBehaviorTreeComponent *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x530))();
    if (cVar2 != '\0') {
      pUVar3 = UBehaviorTreeComponent::GetRootTree((this->BTComp).field0_0x0.DebugPtr);
      if (pUVar3 != (UBehaviorTree *)0x0) {
        return true;
      }
    }
  }
  return false;
}

// RunBT @ 147058430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UMockAI_BT::RunBT(UMockAI_BT *this,UBehaviorTree *param_1,Type param_2)

{
  UBlackboardData *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UBlackboardData *)0x0) {
    UBlackboardComponent::InitializeBlackboard((UBlackboardComponent *)this->_padding_,pUVar1);
  }
  UBlackboardComponent::CacheBrainComponent
            ((UBlackboardComponent *)this->_padding_,
             (UBrainComponent *)(this->BTComp).field0_0x0.DebugPtr);
  UBrainComponent::CacheBlackboardComponent
            ((UBrainComponent *)(this->BTComp).field0_0x0.DebugPtr,
             (UBlackboardComponent *)this->_padding_);
  pUVar2 = FAITestHelpers::GetWorld();
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)this->_padding_,pUVar2,(FRegisterComponentContext *)0x0);
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)(this->BTComp).field0_0x0.DebugPtr,pUVar2,
             (FRegisterComponentContext *)0x0);
  UBehaviorTreeComponent::StartTree((this->BTComp).field0_0x0.DebugPtr,param_1,param_2);
  return;
}

// StaticRegisterNativesUMockAI_BT @ 147059910

void __cdecl UMockAI_BT::StaticRegisterNativesUMockAI_BT(void)

{
  return;
}

