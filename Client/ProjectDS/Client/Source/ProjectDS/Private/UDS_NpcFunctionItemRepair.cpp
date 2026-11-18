// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b53d100

UClass * __cdecl UDS_NpcFunctionItemRepair::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionItemRepair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionItemRepair",
               &Z_Registration_Info_UClass_UDS_NpcFunctionItemRepair.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionItemRepair,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionItemRepair>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionItemRepair>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionItemRepair.InnerSingleton;
}

// UDS_NpcFunctionItemRepair @ 14b540aa0

UDS_NpcFunctionItemRepair * __thiscall
UDS_NpcFunctionItemRepair::UDS_NpcFunctionItemRepair
          (UDS_NpcFunctionItemRepair *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_NpcFunctionItemRepair__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->EntityID = 0;
  return this;
}

// UDS_NpcFunctionItemRepair @ 14b540b00

UDS_NpcFunctionItemRepair * __thiscall
UDS_NpcFunctionItemRepair::UDS_NpcFunctionItemRepair
          (UDS_NpcFunctionItemRepair *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_NpcFunctionItemRepair__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->EntityID = 0;
  return this;
}

// ~UDS_NpcFunctionItemRepair @ 14b541a00

void __thiscall
UDS_NpcFunctionItemRepair::~UDS_NpcFunctionItemRepair(UDS_NpcFunctionItemRepair *this)

{
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5432f0

UClass * __cdecl UDS_NpcFunctionItemRepair::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionItemRepair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionItemRepair",
               &Z_Registration_Info_UClass_UDS_NpcFunctionItemRepair.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionItemRepair,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionItemRepair>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionItemRepair>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionItemRepair.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionItemRepair @ 14b543bd0

void __cdecl UDS_NpcFunctionItemRepair::StaticRegisterNativesUDS_NpcFunctionItemRepair(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_NpcFunctionItemRepair_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOpenNpcItemRepairCallback @ 14b545550

void __cdecl
UDS_NpcFunctionItemRepair::execOpenNpcItemRepairCallback
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OpenNpcItemRepairCallback((UDS_NpcFunctionItemRepair *)param_1,local_res10);
  return;
}

// OnCloseFunction @ 14befbb50

void __thiscall UDS_NpcFunctionItemRepair::OnCloseFunction(UDS_NpcFunctionItemRepair *this)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    cVar1 = *(char *)((longlong)&this->_padding_ + 4);
    if ((cVar1 == '\x14') || (cVar1 == '\x15')) {
      UDS_NpcFunctionBase::CloseWindow((UDS_NpcFunctionBase *)this,ItemRepair);
    }
    UDS_NpcFunctionBase::OnCloseFunction((UDS_NpcFunctionBase *)this);
    return;
  }
  return;
}

// OnOpenFunction @ 14beffc80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionItemRepair::OnOpenFunction
          (UDS_NpcFunctionItemRepair *this,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1,
          int param_2,EDS_InteractionFunctionType param_3)

{
  char cVar1;
  bool bVar2;
  UDS_DataSetBase *this_00;
  ulong64 uVar3;
  UDS_WindowManager *this_01;
  undefined8 *puVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_res8 = param_1.WeakPtr;
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this->_padding_ = (longlong)local_res8;
  }
  *(int *)&this->_padding_ = param_2;
  *(EDS_InteractionFunctionType *)((longlong)&this->_padding_ + 4) = param_3;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res10);
    uVar3 = UDS_DataSetBase::GetEntityID(this_00);
    this->EntityID = uVar3;
    this_01 = UDS_WindowManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this_01 == (UDS_WindowManager *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    if (this_01 != (UDS_WindowManager *)0x0) {
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar3;
        *puVar4 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionItemRepair____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar4[3] = 0;
        local_res8 = (FWeakObjectPtr)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
        puVar4[4] = OpenNpcItemRepairCallback;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      cVar1 = *(char *)((longlong)&this->_padding_ + 4);
      if ((cVar1 == '\x14') || (cVar1 == '\x15')) {
        pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            &local_50,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            local_68);
        UDS_WindowManager::OpenWindow(this_01,ItemRepair,pTVar5);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
  }
  return;
}

// OpenNpcItemRepairCallback @ 14bf0c2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionItemRepair::OpenNpcItemRepairCallback
          (UDS_NpcFunctionItemRepair *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_M_ItemRepair *this_00;
  longlong *plVar5;
  undefined1 auStackY_d8 [32];
  FWeakObjectPtr local_a8;
  UDS_UserWidget *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  if (param_1 == (UDS_UserWidget *)0x0) {
    return;
  }
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_M_ItemRepair_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar3;
  this_00 = (UDS_M_ItemRepair *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 != (UDS_M_ItemRepair *)0x0) goto LAB_14bf0c3a7;
  }
  else if (this_00 != (UDS_M_ItemRepair *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14bf0c3a7:
    UDS_M_ItemRepair::InitNpcInfo
              (this_00,*(EDS_InteractionFunctionType *)((longlong)&this->_padding_ + 4),
               this->EntityID);
    pcVar1 = *(code **)(this_00->_padding_ + 0x2e8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_a8.ObjectIndex = 0;
    local_a8.ObjectSerialNumber = 0;
    local_a0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_a0);
    (*pcVar1)(this_00,local_a8);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2865699031403724732>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionItemRepair.cpp"
                     ,0x44,"false");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

