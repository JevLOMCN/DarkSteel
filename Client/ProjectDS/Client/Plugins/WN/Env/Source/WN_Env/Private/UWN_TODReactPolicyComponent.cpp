// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 15

// StaticClass @ 14a043d70

UClass * __cdecl UWN_TODReactPolicyComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_TODReactPolicyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_TODReactPolicyComponent",
               &Z_Registration_Info_UClass_UWN_TODReactPolicyComponent.InnerSingleton,
               StaticRegisterNativesUWN_TODReactPolicyComponent,0x128,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_TODReactPolicyComponent>,
               InternalVTableHelperCtorCaller<UWN_TODReactPolicyComponent>,local_res8,
               UWN_TODReactComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_TODReactPolicyComponent.InnerSingleton;
}

// UWN_TODReactPolicyComponent @ 14a0474e0

UWN_TODReactPolicyComponent * __thiscall
UWN_TODReactPolicyComponent::UWN_TODReactPolicyComponent
          (UWN_TODReactPolicyComponent *this,FVTableHelper *param_1)

{
  UWN_TODReactComponent::UWN_TODReactComponent((UWN_TODReactComponent *)this,param_1);
  this->CurrentDelayTime = -1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->CurrentTransitionTime = -1.0;
  this->TotalTransitionTime = -1.0;
  this->NormalizedInterpTime = -1.0;
  return this;
}

// ~UWN_TODReactPolicyComponent @ 14a0484e0

void __thiscall
UWN_TODReactPolicyComponent::~UWN_TODReactPolicyComponent(UWN_TODReactPolicyComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UWN_TODReactComponent::~UWN_TODReactComponent((UWN_TODReactComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14a04b720

UClass * __cdecl UWN_TODReactPolicyComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_TODReactPolicyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_TODReactPolicyComponent",
               &Z_Registration_Info_UClass_UWN_TODReactPolicyComponent.InnerSingleton,
               StaticRegisterNativesUWN_TODReactPolicyComponent,0x128,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_TODReactPolicyComponent>,
               InternalVTableHelperCtorCaller<UWN_TODReactPolicyComponent>,local_res8,
               UWN_TODReactComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_TODReactPolicyComponent.InnerSingleton;
}

// StaticRegisterNativesUWN_TODReactPolicyComponent @ 14a04bac0

void __cdecl UWN_TODReactPolicyComponent::StaticRegisterNativesUWN_TODReactPolicyComponent(void)

{
  return;
}

// UWN_TODReactPolicyComponent @ 14a04fd20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_TODReactPolicyComponent * __thiscall
UWN_TODReactPolicyComponent::UWN_TODReactPolicyComponent(UWN_TODReactPolicyComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  undefined8 local_res8 [4];
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  this->_padding_ = (longlong)&UWN_TODReactComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UWN_TODReactComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UWN_TODReactComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)local_res8);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->TotalTransitionTime = -1.0;
  this->NormalizedInterpTime = -1.0;
  this->CurrentTransitionTime = -1.0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->CurrentDelayTime = -1.0;
  return this;
}

// LogicallyEnter @ 14a061b30

void __thiscall UWN_TODReactPolicyComponent::LogicallyEnter(UWN_TODReactPolicyComponent *this)

{
  this->CurrentDelayTime = -1.0;
  return;
}

// OnDayTimeStarted @ 14a062110

void __thiscall UWN_TODReactPolicyComponent::OnDayTimeStarted(UWN_TODReactPolicyComponent *this)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  TObjectPtr<UWN_TODReactComponent> local_res8;
  UWN_TODReactPolicyComponent *local_res10;
  
  bVar2 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (this != (UWN_TODReactPolicyComponent *)0x0) {
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UWN_TODReactComponent>_>
                ((TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
                  *)&pUVar4[0xf3].field_0x8,&local_res8,(bool *)&local_res10);
    }
  }
  fVar1 = this->ActiveDelayTimeRandOffset;
  uVar3 = rand();
  this->CurrentDelayTime = (float)(uVar3 & 0x7fff) * __real_38000100 * fVar1 + this->ActiveDelayTime
  ;
  return;
}

// OnNightTimeStarted @ 14a0622a0

void __thiscall UWN_TODReactPolicyComponent::OnNightTimeStarted(UWN_TODReactPolicyComponent *this)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  TObjectPtr<UWN_TODReactComponent> local_res8;
  UWN_TODReactPolicyComponent *local_res10;
  
  bVar2 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (this != (UWN_TODReactPolicyComponent *)0x0) {
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UWN_TODReactComponent>_>
                ((TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
                  *)&pUVar4[0xf3].field_0x8,&local_res8,(bool *)&local_res10);
    }
  }
  fVar1 = this->ActiveDelayTimeRandOffset;
  uVar3 = rand();
  this->CurrentDelayTime = (float)(uVar3 & 0x7fff) * __real_38000100 * fVar1 + this->ActiveDelayTime
  ;
  return;
}

// OnRegister @ 14a0624a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_TODReactPolicyComponent::OnRegister(UWN_TODReactPolicyComponent *this)

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
  UWN_UDS_Subsystem::RegisterReactComponent(this_01,(UWN_TODReactComponent *)this);
  return;
}

// OnUnregister @ 14a062640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_TODReactPolicyComponent::OnUnregister(UWN_TODReactPolicyComponent *this)

{
  bool bVar1;
  UWN_UDS_Subsystem *this_00;
  
  UActorComponent::OnUnregister((UActorComponent *)this);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (UWN_UDS_Subsystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UWN_UDS_Subsystem::UnRegisterReactComponent(this_00,(UWN_TODReactComponent *)this);
    this->_padding_ = 0;
  }
  return;
}

// UpdateComponent @ 14a066830

void __thiscall
UWN_TODReactPolicyComponent::UpdateComponent(UWN_TODReactPolicyComponent *this,float param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined4 in_XMM1_Db;
  
  fVar1 = this->CurrentDelayTime;
  if (fVar1 != __real_bf800000) {
    if (0.0 <= fVar1) {
      this->CurrentDelayTime = fVar1 - param_1;
      if (0.0 <= fVar1 - param_1) goto LAB_14a066874;
    }
    (**(code **)(this->_padding_ + 0x510))();
  }
LAB_14a066874:
  dVar3 = __real_bff0000000000000;
  dVar2 = this->CurrentTransitionTime;
  if (dVar2 != __real_bff0000000000000) {
    if (0.0 <= dVar2) {
      this->CurrentTransitionTime = dVar2 - (double)param_1;
      if (0.0 <= dVar2 - (double)param_1) goto LAB_14a0668b7;
    }
    this->CurrentTransitionTime = 0.0;
  }
LAB_14a0668b7:
  if (dVar3 != this->NormalizedInterpTime) {
    (**(code **)(this->_padding_ + 0x518))(this,CONCAT44(in_XMM1_Db,param_1));
  }
  return;
}

// UpdateDelayTime @ 14a0668f0

void __thiscall
UWN_TODReactPolicyComponent::UpdateDelayTime(UWN_TODReactPolicyComponent *this,float param_1)

{
  float fVar1;
  
  if (0.0 <= this->CurrentDelayTime) {
    fVar1 = this->CurrentDelayTime - param_1;
    this->CurrentDelayTime = fVar1;
    if (0.0 <= fVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a066914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x510))();
  return;
}

// UpdateIntensity @ 14a066cc0

void __thiscall
UWN_TODReactPolicyComponent::UpdateIntensity(UWN_TODReactPolicyComponent *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  uint uVar3;
  TObjectPtr<UWN_TODReactComponent_const_>_u_0 local_res8;
  
  if (this->CurrentTransitionTime == 0.0) {
    this->CurrentTransitionTime = -1.0;
    bVar1 = TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UWN_UDS_Subsystem,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res8 = (TObjectPtr<UWN_TODReactComponent_const_>_u_0)this;
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

// UpdateTransitionTime @ 14a066ed0

void __thiscall
UWN_TODReactPolicyComponent::UpdateTransitionTime(UWN_TODReactPolicyComponent *this,float param_1)

{
  double dVar1;
  
  if ((this->CurrentTransitionTime < 0.0) ||
     (dVar1 = this->CurrentTransitionTime - (double)param_1, this->CurrentTransitionTime = dVar1,
     dVar1 < 0.0)) {
    this->CurrentTransitionTime = 0.0;
  }
  return;
}

