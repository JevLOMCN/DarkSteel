// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b6e01b0

UClass * __cdecl UDS_VM_SkillInfo_Panel_DefaultInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel_DefaultInfo.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillInfo_Panel_DefaultInfo",
               &Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel_DefaultInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillInfo_Panel_DefaultInfo,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_SkillInfo_Panel_DefaultInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillInfo_Panel_DefaultInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel_DefaultInfo.InnerSingleton;
}

// UDS_VM_SkillInfo_Panel_DefaultInfo @ 14b6e5a10

UDS_VM_SkillInfo_Panel_DefaultInfo * __thiscall
UDS_VM_SkillInfo_Panel_DefaultInfo::UDS_VM_SkillInfo_Panel_DefaultInfo
          (UDS_VM_SkillInfo_Panel_DefaultInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillInfo_Panel_DefaultInfo__6B_;
  return this;
}

// UDS_VM_SkillInfo_Panel_DefaultInfo @ 14b6e5a50

UDS_VM_SkillInfo_Panel_DefaultInfo * __thiscall
UDS_VM_SkillInfo_Panel_DefaultInfo::UDS_VM_SkillInfo_Panel_DefaultInfo
          (UDS_VM_SkillInfo_Panel_DefaultInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillInfo_Panel_DefaultInfo__6B_;
  return this;
}

// ~UDS_VM_SkillInfo_Panel_DefaultInfo @ 14b6e7160

void __thiscall
UDS_VM_SkillInfo_Panel_DefaultInfo::~UDS_VM_SkillInfo_Panel_DefaultInfo
          (UDS_VM_SkillInfo_Panel_DefaultInfo *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillInfo_Panel_DefaultInfo__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9750

IClassDescriptor * __thiscall
UDS_VM_SkillInfo_Panel_DefaultInfo::GetFieldNotificationDescriptor
          (UDS_VM_SkillInfo_Panel_DefaultInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_SkillInfo_Panel_DefaultInfo::FFieldNotificationClassDescriptor::GetDescriptor'
             ::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ea180

UClass * __cdecl UDS_VM_SkillInfo_Panel_DefaultInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel_DefaultInfo.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillInfo_Panel_DefaultInfo",
               &Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel_DefaultInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillInfo_Panel_DefaultInfo,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_SkillInfo_Panel_DefaultInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillInfo_Panel_DefaultInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillInfo_Panel_DefaultInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_SkillInfo_Panel_DefaultInfo @ 14b6eabf0

void __cdecl
UDS_VM_SkillInfo_Panel_DefaultInfo::StaticRegisterNativesUDS_VM_SkillInfo_Panel_DefaultInfo(void)

{
  return;
}

// OnSetViewModel @ 14bf6dd80

void __thiscall
UDS_VM_SkillInfo_Panel_DefaultInfo::OnSetViewModel
          (UDS_VM_SkillInfo_Panel_DefaultInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_SkillDetailInfo,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_SkillDetailInfo>(&local_28,&local_18);
  iVar4 = FFieldNotificationClassDescriptor::SkillIndex.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::SkillIndex.FieldName;
  if (local_28.Object == (FDS_ViewModelContext_SkillDetailInfo *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6792062394290929680>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Skill\\DS_VM_SkillInfo_Panel_DetailInfo.cpp"
                       ,0x10,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (this->SkillIndex != (local_28.Object)->Index) {
    this->SkillIndex = (local_28.Object)->Index;
    local_30 = iVar4;
    local_38 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

