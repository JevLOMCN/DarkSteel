// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b53dc20

UClass * __cdecl UDS_NpcFunctionQuestRepeat::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionQuestRepeat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionQuestRepeat",
               &Z_Registration_Info_UClass_UDS_NpcFunctionQuestRepeat.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionQuestRepeat,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_NpcFunctionQuestRepeat>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionQuestRepeat>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionQuestRepeat.InnerSingleton;
}

// UDS_NpcFunctionQuestRepeat @ 14b540e60

UDS_NpcFunctionQuestRepeat * __thiscall
UDS_NpcFunctionQuestRepeat::UDS_NpcFunctionQuestRepeat
          (UDS_NpcFunctionQuestRepeat *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_NpcFunctionQuestRepeat__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->QuestID = 0;
  return this;
}

// UDS_NpcFunctionQuestRepeat @ 14b540ec0

UDS_NpcFunctionQuestRepeat * __thiscall
UDS_NpcFunctionQuestRepeat::UDS_NpcFunctionQuestRepeat
          (UDS_NpcFunctionQuestRepeat *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_NpcFunctionQuestRepeat__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->QuestID = 0;
  return this;
}

// ~UDS_NpcFunctionQuestRepeat @ 14b541aa0

void __thiscall
UDS_NpcFunctionQuestRepeat::~UDS_NpcFunctionQuestRepeat(UDS_NpcFunctionQuestRepeat *this)

{
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5436b0

UClass * __cdecl UDS_NpcFunctionQuestRepeat::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionQuestRepeat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionQuestRepeat",
               &Z_Registration_Info_UClass_UDS_NpcFunctionQuestRepeat.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionQuestRepeat,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_NpcFunctionQuestRepeat>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionQuestRepeat>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionQuestRepeat.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionQuestRepeat @ 14b543c50

void __cdecl UDS_NpcFunctionQuestRepeat::StaticRegisterNativesUDS_NpcFunctionQuestRepeat(void)

{
  return;
}

// OnCloseFunction @ 14befbd30

void __thiscall UDS_NpcFunctionQuestRepeat::OnCloseFunction(UDS_NpcFunctionQuestRepeat *this)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->QuestID = 0;
  UDS_NpcFunctionBase::CloseWindow((UDS_NpcFunctionBase *)this,QuestRepeatAcceptPopup);
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

// OnOpenFunction @ 14bf00170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionQuestRepeat::OnOpenFunction
          (UDS_NpcFunctionQuestRepeat *this,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1,
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
    this->_padding_ = (longlong)local_res8;
  }
  *(int *)&this->_padding_ = param_2;
  *(EDS_InteractionFunctionType *)((longlong)&this->_padding_ + 4) = param_3;
  this_00 = UDS_WindowManager::GetInst();
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionQuestRepeat____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
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
      puVar2[4] = OnOpenUI;
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
    UDS_WindowManager::OpenWindow(this_00,QuestRepeatAcceptPopup,pTVar4);
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

// OnOpenUI @ 14bf012d0

void __thiscall
UDS_NpcFunctionQuestRepeat::OnOpenUI(UDS_NpcFunctionQuestRepeat *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_NpcFunction *pFVar2;
  bool bVar3;
  UDS_DataSetBase *this_00;
  ulong64 uVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext_NpcFunction,1> local_c8;
  UDS_UserWidget *local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_b0;
  FDS_Text local_a0;
  TSharedPtr<FDS_ViewModelContext,1> local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if ((bVar3) && (param_1 != (UDS_UserWidget *)0x0)) {
    MakeContext<FDS_ViewModelContext_NpcFunction>(&local_c8);
    pFVar2 = local_c8.Object;
    pFVar7 = (FDS_ViewModelContext *)0x0;
    if (local_c8.Object != (FDS_ViewModelContext_NpcFunction *)0x0) {
      if ((local_c8.Object == (FDS_ViewModelContext_NpcFunction *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)&pFVar2->_padding_ = 0x8f;
      this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      uVar4 = UDS_DataSetBase::GetEntityID(this_00);
      local_38.Object = (FDS_ViewModelContext *)local_c8.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_c8.SharedReferenceCount.ReferenceController;
      pFVar2->NpcEntityID = uVar4;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res8[0].ObjectIndex = 0;
      local_res8[0].ObjectSerialNumber = 0;
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res20);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8[0],&local_38,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    pFVar5 = ::operator_new(0x70);
    pFVar8 = pFVar7;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar5->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar5[1]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar5[1]._padding_ + 7) = 0;
      *(undefined2 *)&((atomic<int> *)&pFVar5[2].DerivedStaticStruct)[1].field_0x1 = 0;
      ((atomic<int> *)&pFVar5[2].DerivedStaticStruct)[1].field_0x3 = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_PopupTitle__6B_;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->ViewModelTemplateKey = None;
      *(undefined1 *)&pFVar5[1]._padding_ = 0;
      *(undefined8 *)&pFVar5[1].DerivedStaticStruct = 0;
      pFVar5[1].ViewModelName.ComparisonIndex = 0;
      pFVar5[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar5[1].ViewModelTemplateKey = 0;
      pFVar5[2]._padding_ = 0;
      *(atomic<int> *)&pFVar5[2].DerivedStaticStruct = (atomic<int>)0x0;
      *(undefined1 *)((atomic<int> *)&pFVar5[2].DerivedStaticStruct + 1) = 0;
      pFVar5[2].ViewModelName.ComparisonIndex = 0;
      pFVar5[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar5[2].ViewModelTemplateKey = 0;
      pFVar5[3]._padding_ = 0;
      *(undefined8 *)&pFVar5[3].DerivedStaticStruct = 0;
      pFVar8 = pFVar5;
    }
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PopupTitle__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar8;
      pFVar7 = pFVar5;
    }
    if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar6 = FDS_ViewModelContext_PopupTitle::StaticStruct();
    *(UScriptStruct **)&pFVar8->DerivedStaticStruct = pUVar6;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_b0.Object = pFVar8;
      local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
    }
    pFVar8->ViewModelTemplateKey = W_ContentsPopupTitle;
    local_a0.StringTableType = None;
    local_a0.StringTableID = 0;
    local_a0.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_a0.StringEnumTableNameID.Number = 0;
    local_a0.DateTime.Ticks = 0;
    local_a0.TimeSpan.Ticks = 0;
    local_a0.TimeExpressionType = None;
    local_a0.IsExpression = false;
    local_a0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.UniqueString.Data.ArrayNum = 0;
    local_a0.UniqueString.Data.ArrayMax = 0;
    local_a0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.FormatArgs.ArrayNum = 0;
    local_a0.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_a0,StringUi,0xec6b);
    FDS_Text::operator=((FDS_Text *)(pFVar8 + 1),&local_a0);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_a0.FormatArgs.AllocatorInstance.Data,
               local_a0.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_a0.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_a0.FormatArgs.AllocatorInstance.Data);
    }
    if (local_a0.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.UniqueString.Data.AllocatorInstance.Data);
    }
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar7->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_50.Object = pFVar8;
    local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_b8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_b8);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,&local_50,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
  }
  return;
}

