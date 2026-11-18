// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b420b00

UClass * __cdecl UDS_AnimNotify_Taming::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_Taming.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_Taming",
               &Z_Registration_Info_UClass_UDS_AnimNotify_Taming.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_Taming,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotify_Taming>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_Taming>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_Taming.InnerSingleton;
}

// UDS_AnimNotify_Taming @ 14b4239c0

UDS_AnimNotify_Taming * __thiscall
UDS_AnimNotify_Taming::UDS_AnimNotify_Taming(UDS_AnimNotify_Taming *this,FVTableHelper *param_1)

{
  UDS_AnimNotify::UDS_AnimNotify((UDS_AnimNotify *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotify_Taming__6B_;
  return this;
}

// UDS_AnimNotify_Taming @ 14b4239f0

UDS_AnimNotify_Taming * __thiscall
UDS_AnimNotify_Taming::UDS_AnimNotify_Taming
          (UDS_AnimNotify_Taming *this,FObjectInitializer *param_1)

{
  UDS_AnimNotify::UDS_AnimNotify((UDS_AnimNotify *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotify_Taming__6B_;
  return this;
}

// ~UDS_AnimNotify_Taming @ 14b423f50

void __thiscall UDS_AnimNotify_Taming::~UDS_AnimNotify_Taming(UDS_AnimNotify_Taming *this)

{
  *(undefined ***)this = &___7UDS_AnimNotify_Taming__6B_;
  UDS_AnimNotify::~UDS_AnimNotify((UDS_AnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b424cf0

UClass * __cdecl UDS_AnimNotify_Taming::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_Taming.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_Taming",
               &Z_Registration_Info_UClass_UDS_AnimNotify_Taming.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_Taming,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotify_Taming>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_Taming>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_Taming.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_Taming @ 14b425500

void __cdecl UDS_AnimNotify_Taming::StaticRegisterNativesUDS_AnimNotify_Taming(void)

{
  return;
}

// Notify @ 14b8d34f0

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
UDS_AnimNotify_Taming::Notify
          (UDS_AnimNotify_Taming *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          FAnimNotifyEventReference *param_3)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  UObject *local_res10 [3];
  FWeakObjectPtr local_28;
  FWeakObjectPtr local_20;
  FWeakObjectPtr local_18 [2];
  
  UAnimNotify::Notify((UAnimNotify *)this,param_1,param_2,param_3);
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pUVar3 = (UObject *)param_1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_28.ObjectIndex = 0;
    local_28.ObjectSerialNumber = 0;
    local_res10[0] = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_28,(FObjectPtr)local_res10);
    pFVar2 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_28)
    ;
    if (pFVar2 != (FDS_EntityBase *)0x0) {
      local_res10[0]._0_1_ = 0x69;
      UDS_AbilityDataSet::GetAbilityData<UDS_TamingNPCAbilityData>
                ((ulong64 *)&local_20,(EDS_AbilityTagType *)&pFVar2->EntityID);
      bVar1 = TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_TamingNPCAbilityData,FWeakObjectPtr> *)&local_20,
                         (void *)0x0);
      if (!bVar1) {
        pUVar3 = FWeakObjectPtr::Get(&local_20);
        pFVar2 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar3[2].field_0x8);
        if (pFVar2 != (FDS_EntityBase *)0x0) {
          local_res10[0] = (UObject *)CONCAT71(local_res10[0]._1_7_,0x3e);
          UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCTaming>
                    ((ulong64 *)local_18,(EDS_AbilityTagType *)&pFVar2->EntityID);
          bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCTaming,FWeakObjectPtr> *)
                             local_18,(void *)0x0);
          if (!bVar1) {
            pUVar3 = FWeakObjectPtr::Get(local_18);
            bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &pUVar3[2].field_0x18);
            if (bVar1) {
              TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                        ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &pUVar3[2].field_0x18);
            }
          }
        }
      }
    }
  }
  return;
}

