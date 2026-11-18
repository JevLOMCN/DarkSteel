// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b7629d0

UClass * __cdecl UDS_MultipleWindowInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MultipleWindowInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MultipleWindowInfo",
               &Z_Registration_Info_UClass_UDS_MultipleWindowInfo.InnerSingleton,
               StaticRegisterNativesUDS_MultipleWindowInfo,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MultipleWindowInfo>,
               InternalVTableHelperCtorCaller<UDS_MultipleWindowInfo>,local_res8,
               UDS_WindowInfoBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MultipleWindowInfo.InnerSingleton;
}

// UDS_MultipleWindowInfo @ 14b7641d0

UDS_MultipleWindowInfo * __thiscall
UDS_MultipleWindowInfo::UDS_MultipleWindowInfo(UDS_MultipleWindowInfo *this,FVTableHelper *param_1)

{
  UDS_WindowInfoBase::UDS_WindowInfoBase((UDS_WindowInfoBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MultipleWindowInfo__6B_;
  return this;
}

// UDS_MultipleWindowInfo @ 14b764200

UDS_MultipleWindowInfo * __thiscall
UDS_MultipleWindowInfo::UDS_MultipleWindowInfo
          (UDS_MultipleWindowInfo *this,FObjectInitializer *param_1)

{
  UDS_WindowInfoBase::UDS_WindowInfoBase((UDS_WindowInfoBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MultipleWindowInfo__6B_;
  return this;
}

// ~UDS_MultipleWindowInfo @ 14b7650b0

void __thiscall UDS_MultipleWindowInfo::~UDS_MultipleWindowInfo(UDS_MultipleWindowInfo *this)

{
  this->_padding_ = (longlong)&___7UDS_MultipleWindowInfo__6B_;
  UDS_WindowInfoBase::~UDS_WindowInfoBase((UDS_WindowInfoBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b766310

UClass * __cdecl UDS_MultipleWindowInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MultipleWindowInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MultipleWindowInfo",
               &Z_Registration_Info_UClass_UDS_MultipleWindowInfo.InnerSingleton,
               StaticRegisterNativesUDS_MultipleWindowInfo,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MultipleWindowInfo>,
               InternalVTableHelperCtorCaller<UDS_MultipleWindowInfo>,local_res8,
               UDS_WindowInfoBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MultipleWindowInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_MultipleWindowInfo @ 14b766cc0

void __cdecl UDS_MultipleWindowInfo::StaticRegisterNativesUDS_MultipleWindowInfo(void)

{
  return;
}

// Clear @ 14bb548b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MultipleWindowInfo::Clear(UDS_MultipleWindowInfo *this)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  FDS_WindowLayerGroupInfo *this_01;
  UDS_UserWidget *this_02;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    this_01 = UDS_WindowManager::GetWindowLayerGroupInfo
                        (this_00,(EDS_WindowLayerGroupType)this->_padding_);
    if (this_01 != (FDS_WindowLayerGroupInfo *)0x0) {
      FDS_WindowLayerGroupInfo::RemoveWindow
                (this_01,(TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>)this->_padding_);
    }
  }
  bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&this->_padding_,(void *)0x0);
  if (!bVar1) {
    this_02 = (UDS_UserWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_UserWidget::UnbindInputAction(this_02,(EDS_WindowWidget *)&this->_padding_);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->_padding_ = (longlong)local_res8;
  bVar1 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  this->_padding_ = (longlong)local_res8;
  return;
}

// Toggle @ 14bb92960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_MultipleWindowInfo::Toggle(UDS_MultipleWindowInfo *this,bool param_1)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  bool bVar3;
  UDS_W_WindowFrame *this_00;
  UObject *pUVar4;
  UDS_WindowManager *this_01;
  FDS_WindowLayerGroupInfo *this_02;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_MultipleWindowInfo *local_38 [2];
  
  bVar2 = UDS_WindowInfoBase::Toggle((UDS_WindowInfoBase *)this,param_1);
  if ((param_1) && (bVar2)) {
    this_00 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_MultipleWindowInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_38[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_MultipleWindowInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_38);
    FVar1 = local_res18;
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_38[0] = (UDS_MultipleWindowInfo *)pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_38);
    bVar3 = UDS_W_WindowFrame::AddContentsWidget
                      (this_00,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,
                       (TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>)FVar1);
    if (((bVar3) && (this_01 = UDS_WindowManager::GetInst(), this_01 != (UDS_WindowManager *)0x0))
       && (this_02 = UDS_WindowManager::GetWindowLayerGroupInfo
                               (this_01,(EDS_WindowLayerGroupType)this->_padding_),
          this_02 != (FDS_WindowLayerGroupInfo *)0x0)) {
      FDS_WindowLayerGroupInfo::AddWindow
                (this_02,(TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>)this->_padding_);
    }
  }
  return bVar2;
}

