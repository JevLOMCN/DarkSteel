// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b64d9f0

UClass * __cdecl UDS_VM_GameOptionGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GameOptionGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GameOptionGroup",
               &Z_Registration_Info_UClass_UDS_VM_GameOptionGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_GameOptionGroup,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GameOptionGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_GameOptionGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GameOptionGroup.InnerSingleton;
}

// UDS_VM_GameOptionGroup @ 14b6518a0

UDS_VM_GameOptionGroup * __thiscall
UDS_VM_GameOptionGroup::UDS_VM_GameOptionGroup(UDS_VM_GameOptionGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_GameOptionGroup__6B_;
  return this;
}

// UDS_VM_GameOptionGroup @ 14b6518e0

UDS_VM_GameOptionGroup * __thiscall
UDS_VM_GameOptionGroup::UDS_VM_GameOptionGroup
          (UDS_VM_GameOptionGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_GameOptionGroup__6B_;
  return this;
}

// ~UDS_VM_GameOptionGroup @ 14b654990

void __thiscall UDS_VM_GameOptionGroup::~UDS_VM_GameOptionGroup(UDS_VM_GameOptionGroup *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_GameOptionGroup__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b657790

UClass * __cdecl UDS_VM_GameOptionGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GameOptionGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GameOptionGroup",
               &Z_Registration_Info_UClass_UDS_VM_GameOptionGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_GameOptionGroup,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GameOptionGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_GameOptionGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GameOptionGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GameOptionGroup @ 14b658250

void __cdecl UDS_VM_GameOptionGroup::StaticRegisterNativesUDS_VM_GameOptionGroup(void)

{
  return;
}

// BindModel @ 14be11300

void __thiscall UDS_VM_GameOptionGroup::BindModel(UDS_VM_GameOptionGroup *this)

{
  return;
}

// InitViewModel @ 14be24f70

void __thiscall UDS_VM_GameOptionGroup::InitViewModel(UDS_VM_GameOptionGroup *this)

{
  return;
}

// OnSetViewModel @ 14be36c10

void __thiscall
UDS_VM_GameOptionGroup::OnSetViewModel
          (UDS_VM_GameOptionGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14be552a0

void __thiscall UDS_VM_GameOptionGroup::UnbindModel(UDS_VM_GameOptionGroup *this)

{
  return;
}

