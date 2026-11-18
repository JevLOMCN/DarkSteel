// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4176f0

UClass * __cdecl UDS_AnimNotify_EquipmentAppearance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_EquipmentAppearance.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_EquipmentAppearance",
               &Z_Registration_Info_UClass_UDS_AnimNotify_EquipmentAppearance.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_EquipmentAppearance,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotify_EquipmentAppearance>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_EquipmentAppearance>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_EquipmentAppearance.InnerSingleton;
}

// UDS_AnimNotify_EquipmentAppearance @ 14b41b340

UDS_AnimNotify_EquipmentAppearance * __thiscall
UDS_AnimNotify_EquipmentAppearance::UDS_AnimNotify_EquipmentAppearance
          (UDS_AnimNotify_EquipmentAppearance *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_EquipmentAppearance__6B_;
  (this->EquipmentAppearance).AppearanceStateTag = None;
  (this->EquipmentAppearance).TransitionTime = 0.66;
  (this->EquipmentAppearance).bIsVisible = false;
  return this;
}

// UDS_AnimNotify_EquipmentAppearance @ 14b41b380

UDS_AnimNotify_EquipmentAppearance * __thiscall
UDS_AnimNotify_EquipmentAppearance::UDS_AnimNotify_EquipmentAppearance
          (UDS_AnimNotify_EquipmentAppearance *this,FObjectInitializer *param_1)

{
  UDS_AnimNotify::UDS_AnimNotify((UDS_AnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_EquipmentAppearance__6B_;
  (this->EquipmentAppearance).AppearanceStateTag = None;
  (this->EquipmentAppearance).TransitionTime = 0.66;
  (this->EquipmentAppearance).bIsVisible = false;
  return this;
}

// ~UDS_AnimNotify_EquipmentAppearance @ 14b41bb90

void __thiscall
UDS_AnimNotify_EquipmentAppearance::~UDS_AnimNotify_EquipmentAppearance
          (UDS_AnimNotify_EquipmentAppearance *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d850

UClass * __cdecl UDS_AnimNotify_EquipmentAppearance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_EquipmentAppearance.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_EquipmentAppearance",
               &Z_Registration_Info_UClass_UDS_AnimNotify_EquipmentAppearance.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_EquipmentAppearance,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotify_EquipmentAppearance>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_EquipmentAppearance>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_EquipmentAppearance.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_EquipmentAppearance @ 14b41e210

void __cdecl
UDS_AnimNotify_EquipmentAppearance::StaticRegisterNativesUDS_AnimNotify_EquipmentAppearance(void)

{
  return;
}

// Notify @ 14b8d2240

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
UDS_AnimNotify_EquipmentAppearance::Notify
          (UDS_AnimNotify_EquipmentAppearance *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  UObject *pUVar1;
  FDS_EntityBase *this_00;
  FWeakObjectPtr local_res10 [3];
  UObject *local_18 [2];
  
  pUVar1 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_18[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)local_18);
  this_00 = FDS_EntityBase::GetEntityBaseFromActor
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10[0]);
  if (this_00 != (FDS_EntityBase *)0x0) {
    FDS_EntityBase::SetDesiredEquipmentAppearanceData(this_00,&this->EquipmentAppearance);
  }
  return;
}

