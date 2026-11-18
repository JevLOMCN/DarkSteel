// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6fb780

UClass * __cdecl UDS_VM_WorldBoss_RankingList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_RankingList",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_RankingList,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldBoss_RankingList>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_RankingList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingList.InnerSingleton;
}

// UDS_VM_WorldBoss_RankingList @ 14b700a40

UDS_VM_WorldBoss_RankingList * __thiscall
UDS_VM_WorldBoss_RankingList::UDS_VM_WorldBoss_RankingList
          (UDS_VM_WorldBoss_RankingList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_WorldBoss_RankingList__6B_;
  return this;
}

// UDS_VM_WorldBoss_RankingList @ 14b700a80

UDS_VM_WorldBoss_RankingList * __thiscall
UDS_VM_WorldBoss_RankingList::UDS_VM_WorldBoss_RankingList
          (UDS_VM_WorldBoss_RankingList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_WorldBoss_RankingList__6B_;
  return this;
}

// ~UDS_VM_WorldBoss_RankingList @ 14b702f90

void __thiscall
UDS_VM_WorldBoss_RankingList::~UDS_VM_WorldBoss_RankingList(UDS_VM_WorldBoss_RankingList *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_WorldBoss_RankingList__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b706b90

UClass * __cdecl UDS_VM_WorldBoss_RankingList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_RankingList",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_RankingList,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldBoss_RankingList>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_RankingList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_RankingList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldBoss_RankingList @ 14b7076b0

void __cdecl UDS_VM_WorldBoss_RankingList::StaticRegisterNativesUDS_VM_WorldBoss_RankingList(void)

{
  return;
}

// BindModel @ 14c003cd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_RankingList::BindModel(UDS_VM_WorldBoss_RankingList *this)

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

// OnSetViewModel @ 14c036f40

void __thiscall
UDS_VM_WorldBoss_RankingList::OnSetViewModel
          (UDS_VM_WorldBoss_RankingList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

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

// UnbindModel @ 14c0490e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_RankingList::UnbindModel(UDS_VM_WorldBoss_RankingList *this)

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

