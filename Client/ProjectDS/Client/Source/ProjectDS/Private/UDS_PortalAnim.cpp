// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b56bfb0

UClass * __cdecl UDS_PortalAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PortalAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PortalAnim",
               &Z_Registration_Info_UClass_UDS_PortalAnim.InnerSingleton,
               StaticRegisterNativesUDS_PortalAnim,0x460,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PortalAnim>,
               InternalVTableHelperCtorCaller<UDS_PortalAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PortalAnim.InnerSingleton;
}

// UDS_PortalAnim @ 14b56d580

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

UDS_PortalAnim * __thiscall
UDS_PortalAnim::UDS_PortalAnim(UDS_PortalAnim *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_AnimInstanceBase::UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PortalAnim__6B_;
  (this->StuffPortal).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->StuffPortal).WeakPtr,(FObjectPtr)local_res8);
  this->bIsLocked = false;
  return this;
}

// UDS_PortalAnim @ 14b56d5d0

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

UDS_PortalAnim * __thiscall
UDS_PortalAnim::UDS_PortalAnim(UDS_PortalAnim *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_AnimInstanceBase::UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PortalAnim__6B_;
  (this->StuffPortal).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->StuffPortal).WeakPtr,(FObjectPtr)local_res8);
  this->bIsLocked = false;
  return this;
}

// ~UDS_PortalAnim @ 14b56e230

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

void __thiscall UDS_PortalAnim::~UDS_PortalAnim(UDS_PortalAnim *this)

{
  *(undefined ***)this = &___7UDS_PortalAnim__6B_;
  UDS_AnimInstanceBase::~UDS_AnimInstanceBase((UDS_AnimInstanceBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f280

UClass * __cdecl UDS_PortalAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PortalAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PortalAnim",
               &Z_Registration_Info_UClass_UDS_PortalAnim.InnerSingleton,
               StaticRegisterNativesUDS_PortalAnim,0x460,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PortalAnim>,
               InternalVTableHelperCtorCaller<UDS_PortalAnim>,local_res8,
               UDS_AnimInstanceBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PortalAnim.InnerSingleton;
}

// StaticRegisterNativesUDS_PortalAnim @ 14b56fcb0

void __cdecl UDS_PortalAnim::StaticRegisterNativesUDS_PortalAnim(void)

{
  return;
}

// OnInitVariables @ 14b889f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_PortalAnim::OnInitVariables(UDS_PortalAnim *this)

{
  int iVar1;
  UClass *pUVar2;
  AActor *local_res8;
  
  local_res8 = UAnimInstance::GetOwningActor((UAnimInstance *)this);
  if (local_res8 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_ADS_StuffPortal_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(local_res8->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_res8->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14b889f9f;
  }
  local_res8 = (AActor *)0x0;
LAB_14b889f9f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->StuffPortal).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88ba50

void __thiscall
UDS_PortalAnim::OnNativeThreadSafeUpdateAnimation(UDS_PortalAnim *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<ADS_StuffPortal,FWeakObjectPtr>::UEOpEquals(&this->StuffPortal,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->StuffPortal).WeakPtr);
    this->bIsLocked = (bool)pUVar2[0x2e].field_0x8;
  }
  return;
}

