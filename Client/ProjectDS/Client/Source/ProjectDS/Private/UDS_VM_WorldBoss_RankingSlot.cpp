// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6fbb70

UClass * __cdecl UDS_VM_WorldBoss_RankingSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_RankingSlot",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_RankingSlot,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldBoss_RankingSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_RankingSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingSlot.InnerSingleton;
}

// UDS_VM_WorldBoss_RankingSlot @ 14b700ac0

UDS_VM_WorldBoss_RankingSlot * __thiscall
UDS_VM_WorldBoss_RankingSlot::UDS_VM_WorldBoss_RankingSlot
          (UDS_VM_WorldBoss_RankingSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_WorldBoss_RankingSlot__6B_;
  return this;
}

// UDS_VM_WorldBoss_RankingSlot @ 14b700b00

UDS_VM_WorldBoss_RankingSlot * __thiscall
UDS_VM_WorldBoss_RankingSlot::UDS_VM_WorldBoss_RankingSlot
          (UDS_VM_WorldBoss_RankingSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_WorldBoss_RankingSlot__6B_;
  return this;
}

// ~UDS_VM_WorldBoss_RankingSlot @ 14b702fc0

void __thiscall
UDS_VM_WorldBoss_RankingSlot::~UDS_VM_WorldBoss_RankingSlot(UDS_VM_WorldBoss_RankingSlot *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_WorldBoss_RankingSlot__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b706c50

UClass * __cdecl UDS_VM_WorldBoss_RankingSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_RankingSlot",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_RankingSlot,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldBoss_RankingSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_RankingSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldBoss_RankingSlot @ 14b7076c0

void __cdecl UDS_VM_WorldBoss_RankingSlot::StaticRegisterNativesUDS_VM_WorldBoss_RankingSlot(void)

{
  return;
}

// BindModel @ 14c003ce0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_RankingSlot::BindModel(UDS_VM_WorldBoss_RankingSlot *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < *(int *)&this->field_0x98) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// OnSetViewModel @ 14c036f70

void __thiscall
UDS_VM_WorldBoss_RankingSlot::OnSetViewModel
          (UDS_VM_WorldBoss_RankingSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14c0490f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_RankingSlot::UnbindModel(UDS_VM_WorldBoss_RankingSlot *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

