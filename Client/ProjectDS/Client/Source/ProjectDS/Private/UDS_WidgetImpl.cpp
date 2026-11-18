// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b760340

UClass * __cdecl UDS_WidgetImpl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WidgetImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WidgetImpl",
               &Z_Registration_Info_UClass_UDS_WidgetImpl.InnerSingleton,
               StaticRegisterNativesUDS_WidgetImpl,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_WidgetImpl>,InternalVTableHelperCtorCaller<UDS_WidgetImpl>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WidgetImpl.InnerSingleton;
}

// UDS_WidgetImpl @ 14b764600

UDS_WidgetImpl * __thiscall
UDS_WidgetImpl::UDS_WidgetImpl(UDS_WidgetImpl *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WidgetImpl__6B_;
  (this->OwnerWidget).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_WidgetImpl @ 14b764630

UDS_WidgetImpl * __thiscall
UDS_WidgetImpl::UDS_WidgetImpl(UDS_WidgetImpl *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WidgetImpl__6B_;
  (this->OwnerWidget).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_WidgetImpl @ 14b765290

void __thiscall UDS_WidgetImpl::~UDS_WidgetImpl(UDS_WidgetImpl *this)

{
  this->_padding_ = (longlong)&___7UDS_WidgetImpl__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b766850

UClass * __cdecl UDS_WidgetImpl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WidgetImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WidgetImpl",
               &Z_Registration_Info_UClass_UDS_WidgetImpl.InnerSingleton,
               StaticRegisterNativesUDS_WidgetImpl,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_WidgetImpl>,InternalVTableHelperCtorCaller<UDS_WidgetImpl>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WidgetImpl.InnerSingleton;
}

// StaticRegisterNativesUDS_WidgetImpl @ 14b766d30

void __cdecl UDS_WidgetImpl::StaticRegisterNativesUDS_WidgetImpl(void)

{
  return;
}

// CloseMyself @ 14c006910

void __thiscall UDS_WidgetImpl::CloseMyself(UDS_WidgetImpl *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->OwnerWidget,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerWidget).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014c006942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x4f8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x4f8));
    return;
  }
  return;
}

// FindWidget @ 14c019fa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UDS_WidgetImpl::FindWidget(UDS_WidgetImpl *this,FName *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UWidget *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->OwnerWidget,(void *)0x0);
  if (bVar1) {
    return (UWidget *)0x0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->OwnerWidget).WeakPtr);
  pUVar3 = UWidgetTree::FindWidget(*(UWidgetTree **)&pUVar2[0x14].field_0x20,param_1);
  return pUVar3;
}

// Init @ 14c01d5b0

bool __thiscall UDS_WidgetImpl::Init(UDS_WidgetImpl *this,UDS_UserWidget *param_1)

{
  UDS_UserWidget *local_res10 [3];
  
  if (param_1 == (UDS_UserWidget *)0x0) {
    return false;
  }
  local_res10[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->OwnerWidget).WeakPtr,(FObjectPtr)local_res10);
  return true;
}

// SetViewModel @ 14c0458c0

void __thiscall UDS_WidgetImpl::SetViewModel(UDS_WidgetImpl *this,UDS_ViewModelBase *param_1)

{
  bool bVar1;
  UDS_UserWidget *this_00;
  
  bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->OwnerWidget,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_UserWidget *)FWeakObjectPtr::Get(&(this->OwnerWidget).WeakPtr);
    UDS_UserWidget::SetViewModel(this_00,param_1,false);
  }
  return;
}

