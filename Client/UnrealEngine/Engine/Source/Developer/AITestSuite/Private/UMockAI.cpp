// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 11

// StaticClass @ 14700af70

UClass * __cdecl UMockAI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockAI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"MockAI",&Z_Registration_Info_UClass_UMockAI.InnerSingleton,
               StaticRegisterNativesUMockAI,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockAI>,InternalVTableHelperCtorCaller<UMockAI>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockAI.InnerSingleton;
}

// UMockAI @ 147049fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMockAI * __thiscall UMockAI::UMockAI(UMockAI *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<UMockAI,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMockAI__6B_;
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->TickHelper,NewObject);
  this_00 = &(this->TickHelper).Owner;
  (this->TickHelper)._padding_ = (longlong)&___7FTestTickHelper__6B_;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->Actor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->BBComp).field0_0x0.DebugPtr = (UBlackboardComponent *)0x0;
  (this->BrainComp).field0_0x0.DebugPtr = (UBrainComponent *)0x0;
  (this->PerceptionComp).field0_0x0.DebugPtr = (UAIPerceptionComponent *)0x0;
  return this;
}

// UMockAI @ 14704a030

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

UMockAI * __thiscall UMockAI::UMockAI(UMockAI *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<UMockAI,FWeakObjectPtr> *this_00;
  bool bVar1;
  UWorld *this_01;
  UClass *pUVar2;
  AActor *pAVar3;
  longlong *plVar4;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  FName local_90;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMockAI__6B_;
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->TickHelper,NewObject);
  this_00 = &(this->TickHelper).Owner;
  (this->TickHelper)._padding_ = (longlong)&___7FTestTickHelper__6B_;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_90);
  (this->Actor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->BBComp).field0_0x0.DebugPtr = (UBlackboardComponent *)0x0;
  (this->BrainComp).field0_0x0.DebugPtr = (UBrainComponent *)0x0;
  (this->PerceptionComp).field0_0x0.DebugPtr = (UAIPerceptionComponent *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    this_01 = FAITestHelpers::GetWorld();
    if ((this_01 == (UWorld *)0x0) &&
       (bVar1 = `UMockAI::UMockAI'::__l6::<lambda_1>::operator()(local_98), !bVar1)) {
      return this;
    }
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
    ::FName::FName(&local_90,L"MockAIActor");
    local_88._0_4_ = local_90.ComparisonIndex.Value;
    local_88._4_4_ = local_90.Number;
    local_88[0x33] = Requested;
    local_88._52_4_ = RF_Transient;
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    pAVar3 = UWorld::SpawnActor(this_01,pUVar2,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                (FActorSpawnParameters *)local_88);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    (this->Actor).field0_0x0.DebugPtr = pAVar3;
    if (local_88._64_8_ != 0) {
      plVar4 = (longlong *)(local_88 + 0x50);
      if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_88._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return this;
}

// ~UMockAI @ 14704b840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMockAI::~UMockAI(UMockAI *this)

{
  AActor *this_00;
  
  this->_padding_ = (longlong)&___7UMockAI__6B_;
  (this->TickHelper).Owner.WeakPtr = (FWeakObjectPtr)0x0;
  this_00 = (this->Actor).field0_0x0.DebugPtr;
  if (this_00 != (AActor *)0x0) {
    AActor::Destroy(this_00,false,true);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->TickHelper);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147052350

UClass * __cdecl UMockAI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockAI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AITestSuite",L"MockAI",&Z_Registration_Info_UClass_UMockAI.InnerSingleton,
               StaticRegisterNativesUMockAI,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockAI>,InternalVTableHelperCtorCaller<UMockAI>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockAI.InnerSingleton;
}

// SetEnableTicking @ 1470584e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMockAI::SetEnableTicking(UMockAI *this,bool param_1)

{
  TWeakObjectPtr<UMockAI,FWeakObjectPtr> *this_00;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  this_00 = &(this->TickHelper).Owner;
  if (param_1) {
    local_res18 = (FWeakObjectPtr)this;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UMockAI *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res18);
    return;
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  this_00->WeakPtr = local_res18;
  return;
}

// StaticRegisterNativesUMockAI @ 147059900

void __cdecl UMockAI::StaticRegisterNativesUMockAI(void)

{
  return;
}

// TickMe @ 147059ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMockAI::TickMe(UMockAI *this,float param_1)

{
  UBlackboardComponent *pUVar1;
  UAIPerceptionComponent *pUVar2;
  UBrainComponent *pUVar3;
  
  pUVar1 = (this->BBComp).field0_0x0.DebugPtr;
  if (pUVar1 != (UBlackboardComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x410))(pUVar1,param_1,2,0);
  }
  pUVar2 = (this->PerceptionComp).field0_0x0.DebugPtr;
  if (pUVar2 != (UAIPerceptionComponent *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x410))(pUVar2,param_1,2,0);
  }
  pUVar3 = (this->BrainComp).field0_0x0.DebugPtr;
  if (pUVar3 != (UBrainComponent *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x410))(pUVar3,param_1,2,0);
  }
  return;
}

// UseBlackboardComponent @ 14705a6e0

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

void __thiscall UMockAI::UseBlackboardComponent(UMockAI *this)

{
  AActor *pAVar1;
  UClass *pUVar2;
  UBlackboardComponent *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pAVar1 = (this->Actor).field0_0x0.DebugPtr;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pAVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UBlackboardComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pAVar1;
  pUVar3 = (UBlackboardComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UBlackboardComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->BBComp).field0_0x0.DebugPtr = pUVar3;
  return;
}

// UsePerceptionComponent @ 14705a7a0

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

void __thiscall UMockAI::UsePerceptionComponent(UMockAI *this)

{
  AActor *pAVar1;
  UClass *pUVar2;
  UAIPerceptionComponent *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pAVar1 = (this->Actor).field0_0x0.DebugPtr;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pAVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pAVar1;
  pUVar3 = (UAIPerceptionComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UAIPerceptionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->PerceptionComp).field0_0x0.DebugPtr = pUVar3;
  return;
}

// operator() @ 1504fffd0

bool __thiscall `UMockAI::UMockAI'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2988065368381063203>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2988065368381063203>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

