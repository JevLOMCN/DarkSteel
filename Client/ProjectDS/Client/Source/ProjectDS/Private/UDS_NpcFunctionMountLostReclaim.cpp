// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b53d3d0

UClass * __cdecl UDS_NpcFunctionMountLostReclaim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionMountLostReclaim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionMountLostReclaim",
               &Z_Registration_Info_UClass_UDS_NpcFunctionMountLostReclaim.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionMountLostReclaim,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NpcFunctionMountLostReclaim>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionMountLostReclaim>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionMountLostReclaim.InnerSingleton;
}

// UDS_NpcFunctionMountLostReclaim @ 14b540b60

UDS_NpcFunctionMountLostReclaim * __thiscall
UDS_NpcFunctionMountLostReclaim::UDS_NpcFunctionMountLostReclaim
          (UDS_NpcFunctionMountLostReclaim *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionMountLostReclaim__6B_;
  this->field_0x34 = 0;
  return this;
}

// UDS_NpcFunctionMountLostReclaim @ 14b540bc0

UDS_NpcFunctionMountLostReclaim * __thiscall
UDS_NpcFunctionMountLostReclaim::UDS_NpcFunctionMountLostReclaim
          (UDS_NpcFunctionMountLostReclaim *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionMountLostReclaim__6B_;
  this->field_0x34 = 0;
  return this;
}

// ~UDS_NpcFunctionMountLostReclaim @ 14b541a20

void __thiscall
UDS_NpcFunctionMountLostReclaim::~UDS_NpcFunctionMountLostReclaim
          (UDS_NpcFunctionMountLostReclaim *this)

{
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5433b0

UClass * __cdecl UDS_NpcFunctionMountLostReclaim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionMountLostReclaim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionMountLostReclaim",
               &Z_Registration_Info_UClass_UDS_NpcFunctionMountLostReclaim.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionMountLostReclaim,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NpcFunctionMountLostReclaim>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionMountLostReclaim>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionMountLostReclaim.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionMountLostReclaim @ 14b543c10

void __cdecl
UDS_NpcFunctionMountLostReclaim::StaticRegisterNativesUDS_NpcFunctionMountLostReclaim(void)

{
  return;
}

// OnCloseFunction @ 14befbba0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionMountLostReclaim::OnCloseFunction(UDS_NpcFunctionMountLostReclaim *this)

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
              (this_00,MountLostReclaim,(uint *)&local_res10,(float *)&local_res8);
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28);
  if (bVar1) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    *(int *)&this->field_0x28 = local_res8.ObjectIndex;
    *(int *)&this->field_0x2c = local_res8.ObjectSerialNumber;
  }
  this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0;
  return;
}

// OnOpenFunction @ 14beffe70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionMountLostReclaim::OnOpenFunction
          (UDS_NpcFunctionMountLostReclaim *this,
          TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1,int param_2,
          EDS_InteractionFunctionType param_3)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
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
    *(int *)&this->field_0x28 = local_res8.ObjectIndex;
    *(int *)&this->field_0x2c = local_res8.ObjectSerialNumber;
  }
  *(int *)&this->field_0x30 = param_2;
  this->field_0x34 = param_3;
  bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (((!bVar1) && (param_3 == MountLostReclaim)) &&
     (this_00 = UDS_WindowManager::GetInst(), this_00 != (UDS_WindowManager *)0x0)) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionMountLostReclaim____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = (FWeakObjectPtr)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = OnOpenWindow;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UDS_WindowManager::OpenWindow
              (this_00,MountLostReclaim,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_58);
  }
  return;
}

// OnOpenWindow @ 14bf01600

void __thiscall
UDS_NpcFunctionMountLostReclaim::OnOpenWindow
          (UDS_NpcFunctionMountLostReclaim *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_UserWidget *local_38 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (((bVar2) && (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28), bVar2)) &&
     (param_1 != (UDS_UserWidget *)0x0)) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_28.Object)->ViewModelTemplateKey = W_MountLostReclaim;
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_38[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_38);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,&local_18,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    FDS_MountService::RequestMountLostView(*(int *)&pUVar3[9].field_0x10);
  }
  return;
}

