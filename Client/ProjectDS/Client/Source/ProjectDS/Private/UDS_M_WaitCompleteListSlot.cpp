// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b51c640

UClass * __cdecl UDS_M_WaitCompleteListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_WaitCompleteListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_WaitCompleteListSlot",
               &Z_Registration_Info_UClass_UDS_M_WaitCompleteListSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_WaitCompleteListSlot,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_WaitCompleteListSlot>,
               InternalVTableHelperCtorCaller<UDS_M_WaitCompleteListSlot>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_WaitCompleteListSlot.InnerSingleton;
}

// UDS_M_WaitCompleteListSlot @ 14b522730

UDS_M_WaitCompleteListSlot * __thiscall
UDS_M_WaitCompleteListSlot::UDS_M_WaitCompleteListSlot
          (UDS_M_WaitCompleteListSlot *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_WaitCompleteListSlot__6B_;
  (this->WaitCompletData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->WaitCompletData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_M_WaitCompleteListSlot @ 14b522780

UDS_M_WaitCompleteListSlot * __thiscall
UDS_M_WaitCompleteListSlot::UDS_M_WaitCompleteListSlot
          (UDS_M_WaitCompleteListSlot *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_WaitCompleteListSlot__6B_;
  (this->WaitCompletData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->WaitCompletData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_M_WaitCompleteListSlot @ 14b523710

void __thiscall
UDS_M_WaitCompleteListSlot::~UDS_M_WaitCompleteListSlot(UDS_M_WaitCompleteListSlot *this)

{
  this->_padding_ = (longlong)&___7UDS_M_WaitCompleteListSlot__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5269a0

UClass * __cdecl UDS_M_WaitCompleteListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_WaitCompleteListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_WaitCompleteListSlot",
               &Z_Registration_Info_UClass_UDS_M_WaitCompleteListSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_WaitCompleteListSlot,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_WaitCompleteListSlot>,
               InternalVTableHelperCtorCaller<UDS_M_WaitCompleteListSlot>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_WaitCompleteListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_WaitCompleteListSlot @ 14b527610

void __cdecl UDS_M_WaitCompleteListSlot::StaticRegisterNativesUDS_M_WaitCompleteListSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnDirty_WaitComplteData @ 14b529aa0

void __cdecl
UDS_M_WaitCompleteListSlot::execOnDirty_WaitComplteData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
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
  OnDirty_WaitComplteData((UDS_M_WaitCompleteListSlot *)param_1,local_res10);
  return;
}

// BindViewModel @ 14bd489f0

void __thiscall
UDS_M_WaitCompleteListSlot::BindViewModel
          (UDS_M_WaitCompleteListSlot *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  return;
}

// GetContextList @ 14bd5b460

TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_WaitCompleteListSlot::GetContextList
          (UDS_M_WaitCompleteListSlot *this,
          TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  FScriptContainerElement *pFVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  undefined8 local_58;
  longlong local_50;
  FDS_ViewModelContext *local_48;
  FDS_ViewModelContext *local_40;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pFVar10 = (FDS_ViewModelContext *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  puVar4 = (undefined8 *)(**(code **)(this->_padding_ + 0x310))(this,local_28);
  local_58 = *puVar4;
  local_50 = puVar4[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar8 = local_58;
  *(longlong *)(pFVar8 + 8) = local_50;
  local_50 = 0;
  local_58 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  pFVar6 = ::operator_new(0x30);
  pFVar9 = pFVar10;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar6->field_0x1c = 0;
    ((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
    *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
    (pFVar6->ViewModelName).ComparisonIndex = 0;
    (pFVar6->ViewModelName).Number = 0;
    pFVar6->ViewModelTemplateKey = None;
    pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_WaitComplete__6B_;
    *(undefined8 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
    pFVar9 = pFVar6;
  }
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WaitComplete__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar9;
    pFVar10 = pFVar6;
  }
  if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
  pUVar7 = FDS_ViewModelContext_WaitComplete::StaticStruct();
  *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar7;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_38.Object = pFVar9;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  pFVar9->ViewModelTemplateKey = Data_WaitComplete;
  *(undefined1 *)&pFVar9[1]._padding_ = 1;
  *(FWeakObjectPtr *)((longlong)&pFVar9[1]._padding_ + 4) = (this->WaitCompletData).WeakPtr;
  if (pFVar10 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar10->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
    UNLOCK();
  }
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = pFVar9;
  local_40 = pFVar10;
  if (((pFVar8 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(FDS_ViewModelContext **)pFVar8 = local_48;
  *(FDS_ViewModelContext **)(pFVar8 + 8) = local_40;
  local_40 = (FDS_ViewModelContext *)0x0;
  local_48 = (FDS_ViewModelContext *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return __return_storage_ptr__;
}

// GetCraftingState @ 14bd5b770

int __thiscall UDS_M_WaitCompleteListSlot::GetCraftingState(UDS_M_WaitCompleteListSlot *this)

{
  bool bVar1;
  UDS_WaitCompleteData *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WaitCompletData).WeakPtr);
  if (!bVar1) {
    return 0;
  }
  this_00 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&(this->WaitCompletData).WeakPtr);
  bVar1 = UDS_WaitCompleteData::IsComplete(this_00);
  return (bVar1 ^ 1) + 1;
}

// GetWaitCompleteData @ 14bd64e00

TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> __thiscall
UDS_M_WaitCompleteListSlot::GetWaitCompleteData(UDS_M_WaitCompleteListSlot *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->WaitCompletData).WeakPtr;
  return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)in_RDX;
}

// GetWaitCompleteDataUID @ 14bd64e20

long64 __thiscall
UDS_M_WaitCompleteListSlot::GetWaitCompleteDataUID(UDS_M_WaitCompleteListSlot *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WaitCompletData).WeakPtr);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->WaitCompletData).WeakPtr);
  return *(long64 *)&pUVar2[2].field_0x10;
}

// InitModel @ 14bd694d0

void __thiscall
UDS_M_WaitCompleteListSlot::InitModel
          (UDS_M_WaitCompleteListSlot *this,ulong64 param_1,
          TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_28;
  
  ::FString::PrintfImpl(&local_28,L"%llu");
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_WaitCompleteListSlotData)local_res8)
  ;
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_28) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->WaitCompletData).WeakPtr = param_2.WeakPtr;
  return;
}

// IsCancel @ 14bd6a3e0

bool __thiscall UDS_M_WaitCompleteListSlot::IsCancel(UDS_M_WaitCompleteListSlot *this)

{
  return false;
}

// OnClickedAccel @ 14bd74a20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_WaitCompleteListSlot::OnClickedAccel(UDS_M_WaitCompleteListSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  UDS_M_WaitCompleteListSlot *local_res10;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_58;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bd74bd9;
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
LAB_14bd74bd9:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2589479123273384149>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteListSlot.cpp"
                         ,0xd5,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_80;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_80);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_WaitCompleteListSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_M_WaitCompleteListSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_M_WaitCompleteListSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = OnRecvAccelPopupOpened;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                     (&local_58,
                      (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                      local_88);
  UDS_WindowManager::OpenWindow(this_00,PopupAccelBase,pTVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  return;
}

// OnClickedCancel @ 14bd755e0

void __thiscall UDS_M_WaitCompleteListSlot::OnClickedCancel(UDS_M_WaitCompleteListSlot *this)

{
  TObjectPtr<UDS_ModelEventWaitCompleteListSlot> TVar1;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  TVar1 = UDS_ModelBase::CreateEvent<UDS_ModelEventWaitCompleteListSlot>((UDS_ModelBase *)this);
  local_res18[0] = *(UObject **)TVar1.field0_0x0;
  *(undefined4 *)&local_res18[0][5].field_0x8 = 1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
  return;
}

// OnClickedComplete @ 14bd75890

void __thiscall UDS_M_WaitCompleteListSlot::OnClickedComplete(UDS_M_WaitCompleteListSlot *this)

{
  TObjectPtr<UDS_ModelEventWaitCompleteListSlot> TVar1;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  TVar1 = UDS_ModelBase::CreateEvent<UDS_ModelEventWaitCompleteListSlot>((UDS_ModelBase *)this);
  local_res18[0] = *(UObject **)TVar1.field0_0x0;
  *(undefined4 *)&local_res18[0][5].field_0x8 = 2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
  return;
}

// OnClickedSlot @ 14bd75f70

void __thiscall UDS_M_WaitCompleteListSlot::OnClickedSlot(UDS_M_WaitCompleteListSlot *this)

{
  TObjectPtr<UDS_ModelEventWaitCompleteListSlot> TVar1;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  TVar1 = UDS_ModelBase::CreateEvent<UDS_ModelEventWaitCompleteListSlot>((UDS_ModelBase *)this);
  local_res18[0] = *(UObject **)TVar1.field0_0x0;
  *(undefined4 *)&local_res18[0][5].field_0x8 = 3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
  return;
}

// OnDeInit @ 14bd76b60

void __thiscall UDS_M_WaitCompleteListSlot::OnDeInit(UDS_M_WaitCompleteListSlot *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = (this->WaitCompletData).WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

// OnDirty_WaitComplteData @ 14bd76c50

void __thiscall
UDS_M_WaitCompleteListSlot::OnDirty_WaitComplteData
          (UDS_M_WaitCompleteListSlot *this,UDS_DataBase *param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar1)(this,local_res8,0);
  return;
}

// OnInit @ 14bd79770

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_M_WaitCompleteListSlot::OnInit(UDS_M_WaitCompleteListSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res8 [8];
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  UDS_M_WaitCompleteListSlot *local_a0;
  FName *local_98;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_90;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  local_res10 = (this->WaitCompletData).WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this);
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pcVar4 = strstr("&UDS_M_WaitCompleteListSlot::OnDirty_WaitComplteData","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bd7982b:
    pcVar6 = &DAT_00000002;
LAB_14bd79830:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bd7982b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bd79830;
  }
  ::FName::FName(&local_res20,pcVar6);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res18 = local_res20;
  local_a0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_M_WaitCompleteListSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a0);
  local_a8 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_68);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14bd79919;
  }
  local_98 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_M_WaitCompleteListSlot>'::__l2::<lambda_1>::operator()(&local_98);
LAB_14bd79919:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_50);
  local_90.Object = local_b0;
  local_90.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_80);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_90);
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// OnRecvAccelPopupOpened @ 14bd7c0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_M_WaitCompleteListSlot::OnRecvAccelPopupOpened
          (UDS_M_WaitCompleteListSlot *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_M_Common_AccelBase_Popup *this_00;
  longlong *plVar5;
  long64 lVar6;
  undefined1 auStackY_d8 [32];
  FWeakObjectPtr local_a8;
  UDS_UserWidget *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar3;
  this_00 = (UDS_M_Common_AccelBase_Popup *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_M_Common_AccelBase_Popup *)0x0) goto LAB_14bd7c17c;
  }
  else {
    if (this_00 == (UDS_M_Common_AccelBase_Popup *)0x0) {
LAB_14bd7c17c:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2589479123273384166>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteListSlot.cpp"
                         ,0xe6,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->WaitCompletData).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->WaitCompletData).WeakPtr);
    lVar6 = *(long64 *)&pUVar3[2].field_0x10;
  }
  else {
    lVar6 = 0;
  }
  UDS_M_Common_AccelBase_Popup::InitModel(this_00,lVar6);
  UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)this_00,W_CommonAccelBasePopup);
  pcVar1 = *(code **)(this_00->_padding_ + 0x2e8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_a8.ObjectIndex = 0;
  local_a8.ObjectSerialNumber = 0;
  local_a0 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_a0);
  (*pcVar1)(this_00,local_a8);
  return;
}

// PreInitBindViewModel @ 14bd85350

void __thiscall UDS_M_WaitCompleteListSlot::PreInitBindViewModel(UDS_M_WaitCompleteListSlot *this)

{
  return;
}

