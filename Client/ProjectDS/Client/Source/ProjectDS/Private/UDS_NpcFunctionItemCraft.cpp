// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b53cd40

UClass * __cdecl UDS_NpcFunctionItemCraft::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionItemCraft.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionItemCraft",
               &Z_Registration_Info_UClass_UDS_NpcFunctionItemCraft.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionItemCraft,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionItemCraft>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionItemCraft>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionItemCraft.InnerSingleton;
}

// UDS_NpcFunctionItemCraft @ 14b540920

UDS_NpcFunctionItemCraft * __thiscall
UDS_NpcFunctionItemCraft::UDS_NpcFunctionItemCraft
          (UDS_NpcFunctionItemCraft *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionItemCraft__6B_;
  this->field_0x34 = 0;
  return this;
}

// UDS_NpcFunctionItemCraft @ 14b540980

UDS_NpcFunctionItemCraft * __thiscall
UDS_NpcFunctionItemCraft::UDS_NpcFunctionItemCraft
          (UDS_NpcFunctionItemCraft *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDS_NpcFunctionItemCraft__6B_;
  this->field_0x34 = 0;
  return this;
}

// ~UDS_NpcFunctionItemCraft @ 14b5419c0

void __thiscall UDS_NpcFunctionItemCraft::~UDS_NpcFunctionItemCraft(UDS_NpcFunctionItemCraft *this)

{
  *(undefined ***)this = &___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b543170

UClass * __cdecl UDS_NpcFunctionItemCraft::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionItemCraft.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionItemCraft",
               &Z_Registration_Info_UClass_UDS_NpcFunctionItemCraft.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionItemCraft,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionItemCraft>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionItemCraft>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionItemCraft.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionItemCraft @ 14b543b50

void __cdecl UDS_NpcFunctionItemCraft::StaticRegisterNativesUDS_NpcFunctionItemCraft(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_NpcFunctionItemCraft_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOpenNpcItemCraftCallback @ 14b545430

void __cdecl
UDS_NpcFunctionItemCraft::execOpenNpcItemCraftCallback
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
  OpenNpcItemCraftCallback((UDS_NpcFunctionItemCraft *)param_1,local_res10);
  return;
}

// OnCloseFunction @ 14befba80

void __thiscall UDS_NpcFunctionItemCraft::OnCloseFunction(UDS_NpcFunctionItemCraft *this)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  UDS_NpcFunctionBase::CloseWindow((UDS_NpcFunctionBase *)this,ItemCraft);
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

// OnOpenFunction @ 14beff890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionItemCraft::OnOpenFunction
          (UDS_NpcFunctionItemCraft *this,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1,
          int param_2,EDS_InteractionFunctionType param_3)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  FWeakObjectPtr local_res8;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_res8 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    *(int *)&this->field_0x28 = local_res8.ObjectIndex;
    *(int *)&this->field_0x2c = local_res8.ObjectSerialNumber;
  }
  *(int *)&this->field_0x30 = param_2;
  this->field_0x34 = param_3;
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 != (UDS_WindowManager *)0x0) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionItemCraft____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar2[4] = OpenNpcItemCraftCallback;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_40,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,ItemCraft,pTVar4);
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
  }
  return;
}

// OpenNpcItemCraftCallback @ 14bf0bcb0

void __thiscall
UDS_NpcFunctionItemCraft::OpenNpcItemCraftCallback
          (UDS_NpcFunctionItemCraft *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  UDS_NPCDataSet *this_01;
  UDS_DataSetBase *pUVar7;
  ulong64 uVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28);
  if (bVar2) {
    pFVar5 = ::operator_new(0x38);
    pFVar10 = (FDS_ViewModelContext *)0x0;
    pFVar9 = pFVar10;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->field_0x1c = 0;
      *(undefined8 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
      *(undefined8 *)((atomic<int> *)&pFVar5[1].DerivedStaticStruct + 1) = 0;
      pFVar5[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->ViewModelTemplateKey = None;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_ItemCraft__6B_;
      pFVar9 = pFVar5;
    }
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ItemCraft__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar9;
      pFVar10 = pFVar5;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar6 = FDS_ViewModelContext_ItemCraft::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_48.Object = pFVar9;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = ItemCraft;
    this_01 = (UDS_NPCDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    iVar3 = UDS_NPCDataSet::GetInteractionFunctionValue(this_01,*(int *)&this->field_0x30,ItemCraft)
    ;
    *(int *)&pFVar9[1]._padding_ = iVar3;
    pUVar7 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    uVar8 = UDS_DataSetBase::GetEntityID(pUVar7);
    *(ulong64 *)&pFVar9[1].DerivedStaticStruct = uVar8;
    pUVar7 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    uVar4 = UDS_DataSetBase::GetEntityTableID(pUVar7);
    pFVar9[1].ViewModelName.ComparisonIndex.Value = uVar4;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_38.Object = pFVar9;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_38,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  return;
}

