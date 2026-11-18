// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b53d6a0

UClass * __cdecl UDS_NpcFunctionMountManagement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionMountManagement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionMountManagement",
               &Z_Registration_Info_UClass_UDS_NpcFunctionMountManagement.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionMountManagement,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NpcFunctionMountManagement>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionMountManagement>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionMountManagement.InnerSingleton;
}

// UDS_NpcFunctionMountManagement @ 14b540c20

UDS_NpcFunctionMountManagement * __thiscall
UDS_NpcFunctionMountManagement::UDS_NpcFunctionMountManagement
          (UDS_NpcFunctionMountManagement *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_NpcFunctionMountManagement__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// UDS_NpcFunctionMountManagement @ 14b540c80

UDS_NpcFunctionMountManagement * __thiscall
UDS_NpcFunctionMountManagement::UDS_NpcFunctionMountManagement
          (UDS_NpcFunctionMountManagement *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_NpcFunctionMountManagement__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~UDS_NpcFunctionMountManagement @ 14b541a40

void __thiscall
UDS_NpcFunctionMountManagement::~UDS_NpcFunctionMountManagement
          (UDS_NpcFunctionMountManagement *this)

{
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b543470

UClass * __cdecl UDS_NpcFunctionMountManagement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionMountManagement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionMountManagement",
               &Z_Registration_Info_UClass_UDS_NpcFunctionMountManagement.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionMountManagement,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NpcFunctionMountManagement>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionMountManagement>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionMountManagement.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionMountManagement @ 14b543c20

void __cdecl
UDS_NpcFunctionMountManagement::StaticRegisterNativesUDS_NpcFunctionMountManagement(void)

{
  return;
}

// OnCloseFunction @ 14befbc30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionMountManagement::OnCloseFunction(UDS_NpcFunctionMountManagement *this)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  FWeakObjectPtr local_res8;
  ulonglong local_res10;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8 = (FWeakObjectPtr)((ulonglong)local_res8 & 0xffffffff00000000);
    local_res10 = local_res10 & 0xffffffff00000000;
    UDS_WindowManager::CloseWindow
              (this_00,MountManagement,(uint *)&local_res10,(float *)&local_res8);
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    this->_padding_ = (longlong)local_res8;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// OnOpenFunction @ 14befffe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionMountManagement::OnOpenFunction
          (UDS_NpcFunctionMountManagement *this,
          TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1,int param_2,
          EDS_InteractionFunctionType param_3)

{
  bool bVar1;
  UDS_DataSetBase *this_00;
  ulong64 uVar2;
  UDS_WindowManager *this_01;
  undefined8 *puVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_res8 = param_1.WeakPtr;
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this->_padding_ = (longlong)local_res8;
  }
  *(int *)&this->_padding_ = param_2;
  *(EDS_InteractionFunctionType *)((longlong)&this->_padding_ + 4) = param_3;
  bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if ((!bVar1) && (param_3 == MountManagement)) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res10);
    uVar2 = UDS_DataSetBase::GetEntityID(this_00);
    this->EntityID = uVar2;
    this_01 = UDS_WindowManager::GetInst();
    if (this_01 != (UDS_WindowManager *)0x0) {
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar2;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionMountManagement____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_res8 = (FWeakObjectPtr)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
        puVar3[4] = OnOpenWindow;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      UDS_WindowManager::OpenWindow
                (this_01,MountManagement,
                 (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_58);
    }
  }
  return;
}

// OnOpenWindow @ 14bf01740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionMountManagement::OnOpenWindow
          (UDS_NpcFunctionMountManagement *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  FDS_VMContext_MountManagement *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  UDS_UserWidget *local_160;
  TSharedPtr<FDS_VMContext_MountManagement,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionMountManagement::OnOpenWindow",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x2d,L"InWidget is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    MakeContext<FDS_VMContext_MountManagement>(&local_158);
    pFVar2 = local_158.Object;
    if (local_158.Object == (FDS_VMContext_MountManagement *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x165;
    local_148.Object = (FDS_ViewModelContext *)local_158.Object;
    local_148.SharedReferenceCount.ReferenceController =
         local_158.SharedReferenceCount.ReferenceController;
    pFVar2->TargetEntityID = this->EntityID;
    if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_168.ObjectIndex = 0;
    local_168.ObjectSerialNumber = 0;
    local_160 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_168,&local_148,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  return;
}

