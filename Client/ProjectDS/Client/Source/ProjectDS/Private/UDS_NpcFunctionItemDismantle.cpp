// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b53cec0

UClass * __cdecl UDS_NpcFunctionItemDismantle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionItemDismantle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionItemDismantle",
               &Z_Registration_Info_UClass_UDS_NpcFunctionItemDismantle.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionItemDismantle,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NpcFunctionItemDismantle>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionItemDismantle>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionItemDismantle.InnerSingleton;
}

// UDS_NpcFunctionItemDismantle @ 14b5409e0

UDS_NpcFunctionItemDismantle * __thiscall
UDS_NpcFunctionItemDismantle::UDS_NpcFunctionItemDismantle
          (UDS_NpcFunctionItemDismantle *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionItemDismantle__6B_;
  this->field_0x34 = 0;
  return this;
}

// UDS_NpcFunctionItemDismantle @ 14b540a40

UDS_NpcFunctionItemDismantle * __thiscall
UDS_NpcFunctionItemDismantle::UDS_NpcFunctionItemDismantle
          (UDS_NpcFunctionItemDismantle *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionItemDismantle__6B_;
  this->field_0x34 = 0;
  return this;
}

// ~UDS_NpcFunctionItemDismantle @ 14b5419e0

void __thiscall
UDS_NpcFunctionItemDismantle::~UDS_NpcFunctionItemDismantle(UDS_NpcFunctionItemDismantle *this)

{
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b543230

UClass * __cdecl UDS_NpcFunctionItemDismantle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionItemDismantle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionItemDismantle",
               &Z_Registration_Info_UClass_UDS_NpcFunctionItemDismantle.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionItemDismantle,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NpcFunctionItemDismantle>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionItemDismantle>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionItemDismantle.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionItemDismantle @ 14b543b90

void __cdecl UDS_NpcFunctionItemDismantle::StaticRegisterNativesUDS_NpcFunctionItemDismantle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_NpcFunctionItemDismantle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOpenNpcItemDismantleCallback @ 14b5454c0

void __cdecl
UDS_NpcFunctionItemDismantle::execOpenNpcItemDismantleCallback
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
  OpenNpcItemDismantleCallback((UDS_NpcFunctionItemDismantle *)param_1,local_res10);
  return;
}

// OnCloseFunction @ 14befbaf0

void __thiscall UDS_NpcFunctionItemDismantle::OnCloseFunction(UDS_NpcFunctionItemDismantle *this)

{
  char cVar1;
  bool bVar2;
  EDS_WindowWidget EVar3;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28);
  if (!bVar2) {
    return;
  }
  cVar1 = this->field_0x34;
  if (cVar1 == '\x10') {
    EVar3 = NpcWarehouse;
  }
  else if (cVar1 == '\x13') {
    EVar3 = ItemDismantle;
  }
  else {
    if (cVar1 != '\x16') goto LAB_14befbb31;
    EVar3 = ItemEnchant;
  }
  UDS_NpcFunctionBase::CloseWindow((UDS_NpcFunctionBase *)this,EVar3);
LAB_14befbb31:
  UDS_NpcFunctionBase::OnCloseFunction((UDS_NpcFunctionBase *)this);
  return;
}

// OnOpenFunction @ 14beffa60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionItemDismantle::OnOpenFunction
          (UDS_NpcFunctionItemDismantle *this,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1,
          int param_2,EDS_InteractionFunctionType param_3)

{
  char cVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  EDS_WindowWidget EVar6;
  FWeakObjectPtr local_res8;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_res8 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    *(int *)&this->field_0x28 = local_res8.ObjectIndex;
    *(int *)&this->field_0x2c = local_res8.ObjectSerialNumber;
  }
  *(int *)&this->field_0x30 = param_2;
  this->field_0x34 = param_3;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28);
  if (!bVar2) {
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 == (UDS_WindowManager *)0x0) {
    return;
  }
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
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionItemDismantle____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
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
    puVar3[4] = OpenNpcItemDismantleCallback;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  cVar1 = this->field_0x34;
  if (cVar1 == '\x10') {
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_40,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    EVar6 = NpcWarehouse;
  }
  else if (cVar1 == '\x13') {
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_40,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    EVar6 = ItemDismantle;
  }
  else {
    if (cVar1 != '\x16') goto LAB_14beffbe5;
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_40,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    EVar6 = ItemEnchant;
  }
  UDS_WindowManager::OpenWindow(this_00,EVar6,pTVar5);
LAB_14beffbe5:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// OpenNpcItemDismantleCallback @ 14bf0beb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionItemDismantle::OpenNpcItemDismantleCallback
          (UDS_NpcFunctionItemDismantle *this,UDS_UserWidget *param_1)

{
  undefined1 *this_00;
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_M_ItemDismantle *this_01;
  UDS_DataSetBase *pUVar5;
  ulong64 uVar6;
  longlong *plVar7;
  FWeakObjectPtr FVar8;
  code *pcVar9;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr local_1c8;
  UDS_UserWidget *local_1c0;
  UDS_UserWidget *local_1b8;
  UDS_UserWidget *local_1b0;
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = &this->field_0x28;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3025486323214450775>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionItemDismantle.cpp"
                       ,0x57,"false");
    if (!bVar2) {
      return;
    }
    goto code_r0x00014bf0c2e1;
  }
  cVar1 = this->field_0x34;
  if (cVar1 != '\x10') {
    if (cVar1 == '\x13') {
      pUVar3 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UDS_M_ItemDismantle_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_128,pUVar4);
      local_128._8_8_ = pUVar3;
      this_01 = (UDS_M_ItemDismantle *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
      if (local_128._64_8_ != 0) {
        plVar7 = (longlong *)(local_128 + 0x50);
        if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_128._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_M_ItemDismantle *)0x0) goto LAB_14bf0c15e;
      }
      else {
        if (this_01 == (UDS_M_ItemDismantle *)0x0) {
LAB_14bf0c15e:
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3025486323214450782>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionItemDismantle.cpp"
                             ,0x5e,"false");
          if (!bVar2) {
            return;
          }
          goto code_r0x00014bf0c2e1;
        }
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pUVar5 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      uVar6 = UDS_DataSetBase::GetEntityID(pUVar5);
      UDS_M_ItemDismantle::SetNpcEntityID(this_01,uVar6);
      pcVar9 = *(code **)(this_01->_padding_ + 0x2e8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_1d0.ObjectIndex = 0;
      local_1d0.ObjectSerialNumber = 0;
      local_1b8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_1d0,(FObjectPtr)&local_1b8);
      FVar8 = local_1d0;
      goto LAB_14bf0c285;
    }
    if (cVar1 != '\x16') {
      return;
    }
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_M_ItemEnchant_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1a8,pUVar4);
    local_1a8._8_8_ = pUVar3;
    this_01 = (UDS_M_ItemDismantle *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
    if (local_1a8._64_8_ != 0) {
      plVar7 = (longlong *)(local_1a8 + 0x50);
      if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_1a8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_01 == (UDS_M_ItemDismantle *)0x0) goto LAB_14bf0c039;
    }
    else {
      if (this_01 == (UDS_M_ItemDismantle *)0x0) {
LAB_14bf0c039:
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3025486323214450802>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionItemDismantle.cpp"
                           ,0x72,"false");
        if (!bVar2) {
          return;
        }
        goto code_r0x00014bf0c2e1;
      }
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pUVar5 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    uVar6 = UDS_DataSetBase::GetEntityID(pUVar5);
    FDS_DataContainer::SetData<unsigned___int64,enum_EDS_ItemEnchantData>
              ((FDS_DataContainer *)&this_01->_padding_,NpcEntityID,uVar6);
    pcVar9 = *(code **)(this_01->_padding_ + 0x2e8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1d8.ObjectIndex = 0;
    local_1d8.ObjectSerialNumber = 0;
    local_1c0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_1c0);
    FVar8 = local_1d8;
    goto LAB_14bf0c285;
  }
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_M_Warehouse_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  this_01 = (UDS_M_ItemDismantle *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UDS_M_ItemDismantle *)0x0) goto LAB_14bf0c2b5;
  }
  else {
    if (this_01 == (UDS_M_ItemDismantle *)0x0) {
LAB_14bf0c2b5:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3025486323214450792>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionItemDismantle.cpp"
                         ,0x68,"false");
      if (!bVar2) {
        return;
      }
code_r0x00014bf0c2e1:
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  pUVar5 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  uVar6 = UDS_DataSetBase::GetEntityID(pUVar5);
  FDS_DataContainer::SetData<unsigned___int64,enum_EDS_WarehouseData>
            ((FDS_DataContainer *)&this_01->_padding_,NpcEntityID,uVar6);
  pcVar9 = *(code **)(this_01->_padding_ + 0x2e8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_1c8.ObjectIndex = 0;
  local_1c8.ObjectSerialNumber = 0;
  local_1b0 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_1b0);
  FVar8 = local_1c8;
LAB_14bf0c285:
  (*pcVar9)(this_01,FVar8);
  return;
}

