// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// OnNativeInitializeAnimation @ 14b414070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AnimInstanceBase::OnNativeInitializeAnimation(UDS_AnimInstanceBase *this)

{
  return;
}

// OnNativeUpdateAnimation @ 14b414080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_AnimInstanceBase::OnNativeUpdateAnimation(UDS_AnimInstanceBase *this,float param_1)

{
  return;
}

// StaticClass @ 14b417930

UClass * __cdecl UDS_AnimInstanceBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimInstanceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimInstanceBase",
               &Z_Registration_Info_UClass_UDS_AnimInstanceBase.InnerSingleton,
               StaticRegisterNativesUDS_AnimInstanceBase,0x450,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimInstanceBase>,
               InternalVTableHelperCtorCaller<UDS_AnimInstanceBase>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimInstanceBase.InnerSingleton;
}

// UDS_AnimInstanceBase @ 14b41ae80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_AnimInstanceBase * __thiscall
UDS_AnimInstanceBase::UDS_AnimInstanceBase(UDS_AnimInstanceBase *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimInstanceBase__6B_;
  (this->OwningActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_AnimInstanceBase @ 14b41b980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AnimInstanceBase::~UDS_AnimInstanceBase(UDS_AnimInstanceBase *this)

{
  *(undefined ***)this = &___7UDS_AnimInstanceBase__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// GetPrivateStaticClass @ 14b41ce90

UClass * __cdecl UDS_AnimInstanceBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimInstanceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimInstanceBase",
               &Z_Registration_Info_UClass_UDS_AnimInstanceBase.InnerSingleton,
               StaticRegisterNativesUDS_AnimInstanceBase,0x450,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimInstanceBase>,
               InternalVTableHelperCtorCaller<UDS_AnimInstanceBase>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimInstanceBase.InnerSingleton;
}

// OnChangedCharState @ 14b41e090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_AnimInstanceBase::OnChangedCharState
          (UDS_AnimInstanceBase *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b41e0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_AnimInstanceBase::OnNativeThreadSafeUpdateAnimation(UDS_AnimInstanceBase *this,float param_1)

{
  return;
}

// ShouldChangeCharStateEvent @ 14b41e0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_AnimInstanceBase::ShouldChangeCharStateEvent(UDS_AnimInstanceBase *this)

{
  return false;
}

// StaticRegisterNativesUDS_AnimInstanceBase @ 14b41e140

void __cdecl UDS_AnimInstanceBase::StaticRegisterNativesUDS_AnimInstanceBase(void)

{
  return;
}

// UDS_AnimInstanceBase @ 14b864650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_AnimInstanceBase * __thiscall
UDS_AnimInstanceBase::UDS_AnimInstanceBase(UDS_AnimInstanceBase *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimInstanceBase__6B_;
  (this->OwningActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->OwnerEntityBase = (FDS_EntityBase *)0x0;
  return this;
}

// BeginDestroy @ 14b869820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AnimInstanceBase::BeginDestroy(UDS_AnimInstanceBase *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3c8))();
  if (cVar1 == '\x01') {
    (**(code **)(*(longlong *)this + 0x3c0))(this);
  }
  (**(code **)(*(longlong *)this + 0x3b0))(this);
  UAnimInstance::BeginDestroy((UAnimInstance *)this);
  return;
}

// GetAnimBP @ 14b876250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> __cdecl
UDS_AnimInstanceBase::GetAnimBP(AActor *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  USkeletalMeshComponent *this;
  FWeakObjectPtr FVar3;
  UObject *in_RDX;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined1 local_res20 [8];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (in_RDX != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(in_RDX);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (in_RDX != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(in_RDX);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res20);
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x80))(pFVar2);
    bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res18,
                       (void *)0x0);
    if (!bVar1) {
      this = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res18);
      FVar3 = (FWeakObjectPtr)USkeletalMeshComponent::GetAnimInstance(this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      param_1->_padding_ = 0;
      local_res10 = FVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      goto LAB_14b87632c;
    }
  }
  param_1->_padding_ = 0;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
LAB_14b87632c:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res10);
  return (TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetOwnerEntityID @ 14b8790e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ulong64 __thiscall UDS_AnimInstanceBase::GetOwnerEntityID(UDS_AnimInstanceBase *this)

{
  if (this->OwnerEntityBase == (FDS_EntityBase *)0x0) {
    return 0;
  }
  return this->OwnerEntityBase->EntityID;
}

// IsValidReferencedPtr @ 14b87e560

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_AnimInstanceBase::IsValidReferencedPtr(UDS_AnimInstanceBase *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  undefined1 auStackY_198 [32];
  FName local_158;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwningActor).WeakPtr);
  if ((bVar2) && (this->OwnerEntityBase != (FDS_EntityBase *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)this + 0x3d0))(this);
    if ((cVar3 != '\x01') ||
       (bVar2 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr), bVar2)) {
      return true;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1855686580681834639>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_AnimInstanceBase.cpp"
                       ,0x8f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      pUVar6 = FWeakObjectPtr::Get(&(this->OwningActor).WeakPtr);
      local_158.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_158.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_158,&local_150);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AnimInstanceBase::IsValidReferencedPtr",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x90,L"Invalid CharStateData : %s");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// NativeBeginPlay @ 14b87fbb0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AnimInstanceBase::NativeBeginPlay(UDS_AnimInstanceBase *this)

{
  bool bVar1;
  char cVar2;
  UDS_LogManager *pUVar3;
  FDS_EntityBase *pFVar4;
  undefined1 auStackY_178 [32];
  AActor *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UAnimInstance::NativeBeginPlay((UAnimInstance *)this);
  local_148[0] = UAnimInstance::GetOwningActor((UAnimInstance *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148[0] != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148[0]);
  }
  FWeakObjectPtr::operator=(&(this->OwningActor).WeakPtr,(FObjectPtr)local_148);
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwningActor).WeakPtr);
  if (bVar1) {
    pFVar4 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwningActor).WeakPtr);
    this->OwnerEntityBase = pFVar4;
    if (pFVar4 != (FDS_EntityBase *)0x0) {
      this->EntityType = pFVar4->EntityType;
      (**(code **)(*(longlong *)this + 0x3a8))(this);
      cVar2 = (**(code **)(*(longlong *)this + 0x3c8))(this);
      if (cVar2 == '\x01') {
        (**(code **)(*(longlong *)this + 0x3b8))(this);
      }
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AnimInstanceBase::NativeBeginPlay",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x34,L"owner is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// NativeInitializeAnimation @ 14b8801a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AnimInstanceBase::NativeInitializeAnimation(UDS_AnimInstanceBase *this)

{
  UAnimInstance::NativeInitializeAnimation((UAnimInstance *)this);
                    /* WARNING: Could not recover jumptable at 0x00014b8801b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x390))(this);
  return;
}

// NativeThreadSafeUpdateAnimation @ 14b8801d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_AnimInstanceBase::NativeThreadSafeUpdateAnimation(UDS_AnimInstanceBase *this,float param_1)

{
  char cVar1;
  
  UAnimInstance::NativeThreadSafeUpdateAnimation((UAnimInstance *)this,param_1);
  cVar1 = (**(code **)(*(longlong *)this + 0x3c8))(this);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)this + 0x3a0))(this,param_1);
  }
  return;
}

// NativeUpdateAnimation @ 14b880510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_AnimInstanceBase::NativeUpdateAnimation(UDS_AnimInstanceBase *this,float param_1)

{
  char cVar1;
  
  UAnimInstance::NativeUpdateAnimation((UAnimInstance *)this,param_1);
  cVar1 = (**(code **)(*(longlong *)this + 0x3c8))(this);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)this + 0x398))(this,param_1);
  }
  return;
}

// OnBindAnimationEvents @ 14b880ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AnimInstanceBase::OnBindAnimationEvents(UDS_AnimInstanceBase *this)

{
  FGameplayTag *pFVar1;
  int iVar2;
  char cVar3;
  UObject *pUVar4;
  FDS_ChangedCharStateInfo *pFVar5;
  FGameplayTag *pFVar6;
  bool local_res8 [8];
  FName local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  FDS_ChangedCharStateInfo local_48;
  
  cVar3 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar3 == '\x01') {
    pUVar4 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_AnimInstanceBase>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar4[7].field_0x20,(UDS_AnimInstanceBase *)local_res8,(pmf_2d1e6189)this);
    pUVar4 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    pFVar6 = *(FGameplayTag **)&pUVar4[2].field_0x8;
    iVar2 = *(int *)&pUVar4[2].field_0x10;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if (*(int *)&pUVar4[2].field_0x10 != iVar2) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      local_res8[0] = true;
      pFVar5 = UDS_CharStateData::GetChangedCharStateInfo(&local_48,pFVar6,local_res8);
      local_78 = (pFVar5->StateTag).TagName;
      uStack_70 = *(undefined8 *)&pFVar5->bIsStateTagOn;
      local_68 = (undefined4)pFVar5->AddedCharState;
      uStack_64 = *(undefined4 *)((longlong)&pFVar5->AddedCharState + 4);
      uStack_60 = (undefined4)pFVar5->RemovedCharState;
      uStack_5c = *(undefined4 *)((longlong)&pFVar5->RemovedCharState + 4);
      local_58._0_4_ = pFVar5->AddedCharDetailState;
      local_58._4_4_ = pFVar5->RemovedCharDetailState;
      (**(code **)(*(longlong *)this + 0x3d8))(this,(this->CharStateData).WeakPtr,&local_78);
      pFVar6 = pFVar6 + 1;
    }
  }
  return;
}

// OnClearVariables @ 14b887700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AnimInstanceBase::OnClearVariables(UDS_AnimInstanceBase *this)

{
  (this->OwningActor).WeakPtr = (FWeakObjectPtr)0x0;
  this->OwnerEntityBase = (FDS_EntityBase *)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// OnInitVariables @ 14b889410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AnimInstanceBase::OnInitVariables(UDS_AnimInstanceBase *this)

{
  char cVar1;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    TVar2 = FDS_EntityBase::GetCharStateData(this->OwnerEntityBase);
                    /* WARNING: Load size is inaccurate */
    (this->CharStateData).WeakPtr = *TVar2.WeakPtr;
  }
  return;
}

// OnUnBindAnimationEvents @ 14b893f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_AnimInstanceBase::OnUnBindAnimationEvents(UDS_AnimInstanceBase *this)

{
  char cVar1;
  UObject *pUVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    return;
  }
  return;
}

