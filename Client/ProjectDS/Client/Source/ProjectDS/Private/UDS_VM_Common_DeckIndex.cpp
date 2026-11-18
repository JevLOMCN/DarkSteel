// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b628b60

UClass * __cdecl UDS_VM_Common_DeckIndex::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_DeckIndex.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_DeckIndex",
               &Z_Registration_Info_UClass_UDS_VM_Common_DeckIndex.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_DeckIndex,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_DeckIndex>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_DeckIndex>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_DeckIndex.InnerSingleton;
}

// UDS_VM_Common_DeckIndex @ 14b62c570

UDS_VM_Common_DeckIndex * __thiscall
UDS_VM_Common_DeckIndex::UDS_VM_Common_DeckIndex
          (UDS_VM_Common_DeckIndex *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_DeckIndex__6B_;
  (this->DeckIndexEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeckIndexEntry).UserObjectList.ArrayNum = 0;
  (this->DeckIndexEntry).UserObjectList.ArrayMax = 0;
  (this->VM_NextDeckInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_PrevDeckInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  return this;
}

// UDS_VM_Common_DeckIndex @ 14b62c5d0

UDS_VM_Common_DeckIndex * __thiscall
UDS_VM_Common_DeckIndex::UDS_VM_Common_DeckIndex
          (UDS_VM_Common_DeckIndex *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_DeckIndex__6B_;
  (this->DeckIndexEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeckIndexEntry).UserObjectList.ArrayNum = 0;
  (this->DeckIndexEntry).UserObjectList.ArrayMax = 0;
  (this->VM_NextDeckInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_PrevDeckInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  return this;
}

// ~UDS_VM_Common_DeckIndex @ 14b62eb80

void __thiscall UDS_VM_Common_DeckIndex::~UDS_VM_Common_DeckIndex(UDS_VM_Common_DeckIndex *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_DeckIndex__6B_;
  pFVar1 = (this->DeckIndexEntry).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631750

IClassDescriptor * __thiscall
UDS_VM_Common_DeckIndex::GetFieldNotificationDescriptor(UDS_VM_Common_DeckIndex *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_DeckIndex::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632120

UClass * __cdecl UDS_VM_Common_DeckIndex::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_DeckIndex.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_DeckIndex",
               &Z_Registration_Info_UClass_UDS_VM_Common_DeckIndex.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_DeckIndex,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_DeckIndex>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_DeckIndex>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_DeckIndex.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_DeckIndex @ 14b632f80

void __cdecl UDS_VM_Common_DeckIndex::StaticRegisterNativesUDS_VM_Common_DeckIndex(void)

{
  return;
}

// OnSetViewModel @ 14bdd7ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Common_DeckIndex::OnSetViewModel
          (UDS_VM_Common_DeckIndex *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  EDS_KeyActionType EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FDS_ViewModelContext_InputKey *pFVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  UDS_VM_InputKey *pUVar9;
  UDS_UserObjectListItem *pUVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar14;
  FDS_ViewModelContext *pFVar15;
  atomic<int> *paVar16;
  FDS_ViewModelContext *pFVar17;
  undefined1 auStackY_258 [32];
  TSharedPtr<FDS_ViewModelContext_CommonDeck,1> local_228;
  uint local_218;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_208;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_1f8;
  UDS_UserObjectListItem *local_1e8;
  FDS_EntryBindingEventField *local_1e0;
  UDS_VM_Common_DeckIndex *local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> *local_1d0;
  FName local_1c8;
  int local_1c0;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1a8.Object = param_1->Object;
  local_1a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d8 = this;
  local_1d0 = param_1;
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_1a8);
  local_198.Object = param_1->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonDeck>(&local_228,&local_198);
  if (local_228.Object == (FDS_ViewModelContext_CommonDeck *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_Common_DeckIndex::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_168.Ptr,0x11,L"commonDeckContext is nullptr.")
      ;
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
    goto LAB_14bdd82e3;
  }
  if ((this->VM_NextDeckInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_NextDeckInputKey).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UDS_VM_InputKey *)0x0) goto LAB_14bdd7e0e;
  }
  else {
LAB_14bdd7e0e:
    MakeContext<FDS_ViewModelContext_InputKey>(&local_208);
    pFVar5 = local_208.Object;
    if ((local_208.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x15d;
    if ((local_228.Object == (FDS_ViewModelContext_CommonDeck *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar2 = (local_228.Object)->NextDeckKeyActionType;
    if ((pFVar5 == (FDS_ViewModelContext_InputKey *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar5->KeyActionType = EVar2;
    pUVar9 = (this->VM_NextDeckInputKey).field0_0x0.DebugPtr;
    local_188.Object = (FDS_ViewModelContext *)local_208.Object;
    local_188.SharedReferenceCount.ReferenceController =
         local_208.SharedReferenceCount.ReferenceController;
    if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_PrevDeckInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_PrevDeckInputKey).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UDS_VM_InputKey *)0x0) goto LAB_14bdd7f3b;
  }
  else {
LAB_14bdd7f3b:
    MakeContext<FDS_ViewModelContext_InputKey>(&local_1f8);
    pFVar5 = local_1f8.Object;
    if ((local_1f8.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x15d;
    if ((local_228.Object == (FDS_ViewModelContext_CommonDeck *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar2 = (local_228.Object)->PrevDeckKeyActionType;
    if ((pFVar5 == (FDS_ViewModelContext_InputKey *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar5->KeyActionType = EVar2;
    pUVar9 = (this->VM_PrevDeckInputKey).field0_0x0.DebugPtr;
    local_178.Object = (FDS_ViewModelContext *)local_1f8.Object;
    local_178.SharedReferenceCount.ReferenceController =
         local_1f8.SharedReferenceCount.ReferenceController;
    if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_178);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
  }
  local_1e0 = &this->DeckIndexEntry;
  FDS_EntryBindingEventField::Reset(local_1e0);
  pFVar15 = (FDS_ViewModelContext *)0x0;
  local_218 = 0;
  pFVar17 = pFVar15;
  while( true ) {
    if ((local_228.Object == (FDS_ViewModelContext_CommonDeck *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((local_228.Object)->DeckSize <= (int)pFVar17) break;
    pUVar10 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pFVar11 = ::operator_new(0x78);
    pFVar14 = pFVar15;
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
      pFVar11[1].ViewModelName.ComparisonIndex = 0;
      pFVar11[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar11[2].DerivedStaticStruct = 0;
      pFVar11[3]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar11[3].ViewModelName.ComparisonIndex.Value + 2) = 0;
      *(undefined2 *)((longlong)&pFVar11[3].ViewModelName.Number + 2) = 0;
      *(undefined8 *)&pFVar11->DerivedStaticStruct = 0;
      (pFVar11->ViewModelName).ComparisonIndex = 0;
      (pFVar11->ViewModelName).Number = 0;
      pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_RingCmd__6B_;
      pFVar11[1]._padding_ = 0;
      *(undefined8 *)&pFVar11[1].DerivedStaticStruct = 0;
      *(undefined8 *)&pFVar11[1].ViewModelTemplateKey = 0;
      pFVar11[2]._padding_ = 0;
      pFVar11[2].ViewModelName.ComparisonIndex = 0;
      pFVar11[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar11[2].ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar11[3].DerivedStaticStruct = 0;
      *(undefined2 *)&pFVar11[3].ViewModelName.ComparisonIndex.Value = 0;
      pFVar14 = pFVar11;
    }
    pFVar12 = ::operator_new(0x20);
    pFVar11 = pFVar15;
    if (pFVar12 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar12->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar12->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar12->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RingCmd__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar12->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar12->ViewModelTemplateKey = pFVar14;
      pFVar11 = pFVar12;
    }
    if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar13 = FDS_ViewModelContext_RingCmd::StaticStruct();
    *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar13;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar11 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar11->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_1b8.Object = pFVar14;
      local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_1b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
    }
    pFVar14->ViewModelTemplateKey = W_RingCmd_DeckNumber;
    if ((local_228.Object == (FDS_ViewModelContext_CommonDeck *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(bool *)&pFVar14[3].ViewModelName.ComparisonIndex.Value =
         (local_228.Object)->CurrentDeckIndex == (int)pFVar17;
    if (pFVar11 == (FDS_ViewModelContext *)0x0) {
      paVar16 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar16 = (atomic<int> *)&pFVar11->DerivedStaticStruct;
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    iVar7 = (pUVar10->ViewModelContextArray).ArrayNum;
    piVar1 = &(pUVar10->ViewModelContextArray).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pUVar10->ViewModelContextArray).AllocatorInstance,piVar1);
    }
    (pUVar10->ViewModelContextArray).ArrayNum = iVar7 + 1;
    pFVar3 = (pUVar10->ViewModelContextArray).AllocatorInstance.Data;
    *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar7 * 0x10) = pFVar14;
    *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = pFVar11;
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    local_1e8 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    FDS_EntryBindingEventField::Add(local_1e0,(TObjectPtr<UDS_UserObjectListItem>)&local_1e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    local_218 = local_218 + 1;
    pFVar17 = (FDS_ViewModelContext *)(ulonglong)local_218;
    this = local_1d8;
  }
  local_1c0 = FFieldNotificationClassDescriptor::DeckIndexEntry.BitNumber;
  local_1c8 = FFieldNotificationClassDescriptor::DeckIndexEntry.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.SharedReferenceCount.ReferenceController);
  param_1 = local_1d0;
LAB_14bdd82e3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

