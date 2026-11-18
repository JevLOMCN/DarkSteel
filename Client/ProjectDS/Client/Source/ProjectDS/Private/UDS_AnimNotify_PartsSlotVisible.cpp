// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b415d40

UClass * __cdecl UDS_AnimNotify_PartsSlotVisible::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_PartsSlotVisible.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_PartsSlotVisible",
               &Z_Registration_Info_UClass_UDS_AnimNotify_PartsSlotVisible.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_PartsSlotVisible,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotify_PartsSlotVisible>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_PartsSlotVisible>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_PartsSlotVisible.InnerSingleton;
}

// UDS_AnimNotify_PartsSlotVisible @ 14b41b5a0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

UDS_AnimNotify_PartsSlotVisible * __thiscall
UDS_AnimNotify_PartsSlotVisible::UDS_AnimNotify_PartsSlotVisible
          (UDS_AnimNotify_PartsSlotVisible *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_PartsSlotVisible__6B_;
  return this;
}

// UDS_AnimNotify_PartsSlotVisible @ 14b41b5d0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

UDS_AnimNotify_PartsSlotVisible * __thiscall
UDS_AnimNotify_PartsSlotVisible::UDS_AnimNotify_PartsSlotVisible
          (UDS_AnimNotify_PartsSlotVisible *this,FObjectInitializer *param_1)

{
  UDS_AnimNotify::UDS_AnimNotify((UDS_AnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_PartsSlotVisible__6B_;
  return this;
}

// ~UDS_AnimNotify_PartsSlotVisible @ 14b41bc70

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UDS_AnimNotify_PartsSlotVisible::~UDS_AnimNotify_PartsSlotVisible
          (UDS_AnimNotify_PartsSlotVisible *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41dd90

UClass * __cdecl UDS_AnimNotify_PartsSlotVisible::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_PartsSlotVisible.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_PartsSlotVisible",
               &Z_Registration_Info_UClass_UDS_AnimNotify_PartsSlotVisible.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_PartsSlotVisible,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotify_PartsSlotVisible>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_PartsSlotVisible>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_PartsSlotVisible.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_PartsSlotVisible @ 14b41e2b0

void __cdecl
UDS_AnimNotify_PartsSlotVisible::StaticRegisterNativesUDS_AnimNotify_PartsSlotVisible(void)

{
  return;
}

// Notify @ 14b8d2e70

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
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
UDS_AnimNotify_PartsSlotVisible::Notify
          (UDS_AnimNotify_PartsSlotVisible *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  UObject *pUVar1;
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
  FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10[0]);
  return;
}

