// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b53d8a0

UClass * __cdecl UDS_NpcFunctionQuest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionQuest",
               &Z_Registration_Info_UClass_UDS_NpcFunctionQuest.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionQuest,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionQuest>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionQuest>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionQuest.InnerSingleton;
}

// UDS_NpcFunctionQuest @ 14b540da0

UDS_NpcFunctionQuest * __thiscall
UDS_NpcFunctionQuest::UDS_NpcFunctionQuest(UDS_NpcFunctionQuest *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_NpcFunctionQuest__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->QuestID = 0;
  return this;
}

// UDS_NpcFunctionQuest @ 14b540e00

UDS_NpcFunctionQuest * __thiscall
UDS_NpcFunctionQuest::UDS_NpcFunctionQuest(UDS_NpcFunctionQuest *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_NpcFunctionQuest__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->QuestID = 0;
  return this;
}

// ~UDS_NpcFunctionQuest @ 14b541a80

void __thiscall UDS_NpcFunctionQuest::~UDS_NpcFunctionQuest(UDS_NpcFunctionQuest *this)

{
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5435f0

UClass * __cdecl UDS_NpcFunctionQuest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionQuest",
               &Z_Registration_Info_UClass_UDS_NpcFunctionQuest.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionQuest,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionQuest>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionQuest>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionQuest.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionQuest @ 14b543c40

void __cdecl UDS_NpcFunctionQuest::StaticRegisterNativesUDS_NpcFunctionQuest(void)

{
  return;
}

// OnCloseFunction @ 14befbcc0

void __thiscall UDS_NpcFunctionQuest::OnCloseFunction(UDS_NpcFunctionQuest *this)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->QuestID = 0;
  UDS_NpcFunctionBase::CloseWindow((UDS_NpcFunctionBase *)this,InteractionQuestInfo);
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

// OnOpenQuestInfoUI @ 14bf00ed0

void __thiscall
UDS_NpcFunctionQuest::OnOpenQuestInfoUI(UDS_NpcFunctionQuest *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  UDS_DataSetBase *this_01;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if ((bVar2) && (param_1 != (UDS_UserWidget *)0x0)) {
    pFVar4 = ::operator_new(0x28);
    pFVar6 = (FDS_ViewModelContext *)0x0;
    pFVar7 = pFVar6;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->ViewModelTemplateKey = None;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_NpcFunctionQuest__6B_;
      pFVar7 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_NpcFunctionQuest__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar7;
      pFVar6 = pFVar4;
    }
    if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_NpcFunctionQuest::StaticStruct();
    *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_48.Object = pFVar7;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    pFVar7->ViewModelTemplateKey = NpcFunctionQuest;
    *(int *)&pFVar7[1]._padding_ = this->QuestID;
    this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    iVar3 = UDS_DataSetBase::GetEntityTableID(this_01);
    *(int *)((longlong)&pFVar7[1]._padding_ + 4) = iVar3;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_38.Object = pFVar7;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_38,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  return;
}

// OpenUI @ 14bf0ecb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NpcFunctionQuest::OpenUI(UDS_NpcFunctionQuest *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_NpcFunctionQuest *local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionQuest____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_NpcFunctionQuest *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_NpcFunctionQuest *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OnOpenQuestInfoUI;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_40,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,InteractionQuestInfo,pTVar3);
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

