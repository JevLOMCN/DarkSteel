// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b58bdc0

UClass * __cdecl UDS_ShieldAnimInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ShieldAnimInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ShieldAnimInstance",
               &Z_Registration_Info_UClass_UDS_ShieldAnimInstance.InnerSingleton,
               StaticRegisterNativesUDS_ShieldAnimInstance,0x440,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ShieldAnimInstance>,
               InternalVTableHelperCtorCaller<UDS_ShieldAnimInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ShieldAnimInstance.InnerSingleton;
}

// UDS_ShieldAnimInstance @ 14b58de20

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

UDS_ShieldAnimInstance * __thiscall
UDS_ShieldAnimInstance::UDS_ShieldAnimInstance(UDS_ShieldAnimInstance *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->ShieldAnimState = Folded;
  *(undefined ***)this = &___7UDS_ShieldAnimInstance__6B_;
  return this;
}

// UDS_ShieldAnimInstance @ 14b58de50

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

UDS_ShieldAnimInstance * __thiscall
UDS_ShieldAnimInstance::UDS_ShieldAnimInstance
          (UDS_ShieldAnimInstance *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->ShieldAnimState = Folded;
  *(undefined ***)this = &___7UDS_ShieldAnimInstance__6B_;
  return this;
}

// ~UDS_ShieldAnimInstance @ 14b58e480

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

void __thiscall UDS_ShieldAnimInstance::~UDS_ShieldAnimInstance(UDS_ShieldAnimInstance *this)

{
  *(undefined ***)this = &___7UDS_ShieldAnimInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// GetPrivateStaticClass @ 14b58eed0

UClass * __cdecl UDS_ShieldAnimInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ShieldAnimInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ShieldAnimInstance",
               &Z_Registration_Info_UClass_UDS_ShieldAnimInstance.InnerSingleton,
               StaticRegisterNativesUDS_ShieldAnimInstance,0x440,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ShieldAnimInstance>,
               InternalVTableHelperCtorCaller<UDS_ShieldAnimInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ShieldAnimInstance.InnerSingleton;
}

// StaticRegisterNativesUDS_ShieldAnimInstance @ 14b58f360

void __cdecl UDS_ShieldAnimInstance::StaticRegisterNativesUDS_ShieldAnimInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_ShieldAnimInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetShieldAnimState @ 14b58fde0

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

void __cdecl
UDS_ShieldAnimInstance::execSetShieldAnimState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_ShieldState local_res10 [24];
  
  local_res10[0] = DoNothing;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetShieldAnimState((UDS_ShieldAnimInstance *)param_1,local_res10[0]);
  return;
}

// NativeBeginPlay @ 14b880110

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

void __thiscall UDS_ShieldAnimInstance::NativeBeginPlay(UDS_ShieldAnimInstance *this)

{
  FDS_EntityBase *pFVar1;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  UAnimInstance::NativeBeginPlay((UAnimInstance *)this);
  local_res10 = UAnimInstance::GetOwningActor((UAnimInstance *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pFVar1 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8)
  ;
  this->OwnerEntityBase = pFVar1;
  return;
}

// NativeUpdateAnimation @ 14b880810

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
UDS_ShieldAnimInstance::NativeUpdateAnimation(UDS_ShieldAnimInstance *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UAnimInstance::NativeThreadSafeUpdateAnimation((UAnimInstance *)this,param_1);
  if (this->OwnerEntityBase != (FDS_EntityBase *)0x0) {
    UDS_CharStateData::GetData((ulong64)local_res8);
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      this->ShieldAnimState = pUVar2[2].field_0x20;
    }
  }
  return;
}

// SetShieldAnimState @ 14b899410

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
UDS_ShieldAnimInstance::SetShieldAnimState(UDS_ShieldAnimInstance *this,EDS_ShieldState param_1)

{
  this->ShieldAnimState = param_1;
  return;
}

