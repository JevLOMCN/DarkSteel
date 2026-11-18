// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 14

// StaticClass @ 14a043c70

UClass * __cdecl UWN_TODReactComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_TODReactComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_TODReactComponent",
               &Z_Registration_Info_UClass_UWN_TODReactComponent.InnerSingleton,
               StaticRegisterNativesUWN_TODReactComponent,0x100,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_TODReactComponent>,
               InternalVTableHelperCtorCaller<UWN_TODReactComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_TODReactComponent.InnerSingleton;
}

// UWN_TODReactComponent @ 14a047370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_TODReactComponent * __thiscall
UWN_TODReactComponent::UWN_TODReactComponent(UWN_TODReactComponent *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->NightTimeStartDelegate = 0;
  *(undefined8 *)&(this->NightTimeStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->NightTimeStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DayTimeStartDelegate = 0;
  *(undefined8 *)&(this->DayTimeStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->DayTimeStartDelegate).field_0x10 = 0;
  (this->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->UDS_Subsystem).WeakPtr,(FObjectPtr)local_res8);
  this->IndexInSubsystem = -1;
  return this;
}

// ~UWN_TODReactComponent @ 14a048390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_TODReactComponent::~UWN_TODReactComponent(UWN_TODReactComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->DayTimeStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DayTimeStartDelegate);
  pvVar1 = *(void **)&(this->NightTimeStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NightTimeStartDelegate);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14a04b5a0

UClass * __cdecl UWN_TODReactComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_TODReactComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_TODReactComponent",
               &Z_Registration_Info_UClass_UWN_TODReactComponent.InnerSingleton,
               StaticRegisterNativesUWN_TODReactComponent,0x100,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_TODReactComponent>,
               InternalVTableHelperCtorCaller<UWN_TODReactComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_TODReactComponent.InnerSingleton;
}

// StaticRegisterNativesUWN_TODReactComponent @ 14a04baa0

void __cdecl UWN_TODReactComponent::StaticRegisterNativesUWN_TODReactComponent(void)

{
  return;
}

// UWN_TODReactComponent @ 14a04f9c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_TODReactComponent * __thiscall
UWN_TODReactComponent::UWN_TODReactComponent(UWN_TODReactComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  undefined8 local_res8 [4];
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->NightTimeStartDelegate = 0;
  *(undefined8 *)&(this->NightTimeStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->NightTimeStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DayTimeStartDelegate = 0;
  *(undefined8 *)&(this->DayTimeStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->DayTimeStartDelegate).field_0x10 = 0;
  (this->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->UDS_Subsystem).WeakPtr,(FObjectPtr)local_res8);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this->IndexInSubsystem = -1;
  return this;
}

// OnDayTimeStarted @ 14a062040

void __thiscall UWN_TODReactComponent::OnDayTimeStarted(UWN_TODReactComponent *this)

{
  return;
}

// OnNightTimeStarted @ 14a0621d0

void __thiscall UWN_TODReactComponent::OnNightTimeStarted(UWN_TODReactComponent *this)

{
  return;
}

// OnRegister @ 14a062360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_TODReactComponent::OnRegister(UWN_TODReactComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UWN_UDS_Subsystem *this_01;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  this_00 = (UWorld *)this->_padding_;
  if (((this_00 == (UWorld *)0x0) &&
      (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      this_00 == (UWorld *)0x0)) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<106827999998902287>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_TODReactComponent.cpp"
                         ,0xf,"world != nullptr"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_01 = UWorld::GetSubsystem<UWN_UDS_Subsystem>(this_00);
  if (this_01 == (UWN_UDS_Subsystem *)0x0) {
    return;
  }
  UWN_UDS_Subsystem::RegisterReactComponent(this_01,this);
  return;
}

// OnUnregister @ 14a062580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_TODReactComponent::OnUnregister(UWN_TODReactComponent *this)

{
  bool bVar1;
  UWN_UDS_Subsystem *this_00;
  
  UActorComponent::OnUnregister((UActorComponent *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->UDS_Subsystem).WeakPtr);
  if (bVar1) {
    this_00 = (UWN_UDS_Subsystem *)FWeakObjectPtr::Get(&(this->UDS_Subsystem).WeakPtr);
    UWN_UDS_Subsystem::UnRegisterReactComponent(this_00,this);
    (this->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// SetUpdatable @ 14a065270

void __thiscall UWN_TODReactComponent::SetUpdatable(UWN_TODReactComponent *this,bool param_1)

{
  bool bVar1;
  UObject *pUVar2;
  uint uVar3;
  TObjectPtr<UWN_TODReactComponent>_u_0 local_res8;
  UWN_TODReactComponent *local_res18;
  
  bVar1 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                    (&this->UDS_Subsystem,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->UDS_Subsystem).WeakPtr);
    if (param_1) {
      if (this != (UWN_TODReactComponent *)0x0) {
        local_res18 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
        ::Emplace<TObjectPtr<UWN_TODReactComponent>_>
                  ((TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
                    *)&pUVar2[0xf3].field_0x8,
                   (TObjectPtr<UWN_TODReactComponent> *)&local_res8.ObjectPtr,(bool *)&local_res18);
        return;
      }
    }
    else if (this != (UWN_TODReactComponent *)0x0) {
      local_res8.DebugPtr = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      if (*(int *)&pUVar2[0xf3].field_0x10 != *(int *)&pUVar2[0xf4].field_0x14) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        uVar3 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TObjectPtr<UWN_TODReactComponent_const_>_>
                  ((TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
                    *)&pUVar2[0xf3].field_0x8,uVar3 >> 0x10 ^ uVar3,
                   (TObjectPtr<UWN_TODReactComponent_const_> *)&local_res8.ObjectPtr);
      }
    }
  }
  return;
}

// StartDayTime @ 14a0653a0

void __thiscall UWN_TODReactComponent::StartDayTime(UWN_TODReactComponent *this)

{
  (**(code **)(this->_padding_ + 0x508))();
  FWN_DayTimeStartDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->DayTimeStartDelegate);
  return;
}

// StartNightTime @ 14a0653d0

void __thiscall UWN_TODReactComponent::StartNightTime(UWN_TODReactComponent *this)

{
  (**(code **)(this->_padding_ + 0x500))();
  FWN_NightTimeStartDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->NightTimeStartDelegate);
  return;
}

// UpdateComponent @ 14a066820

void __thiscall UWN_TODReactComponent::UpdateComponent(UWN_TODReactComponent *this,float param_1)

{
  return;
}

