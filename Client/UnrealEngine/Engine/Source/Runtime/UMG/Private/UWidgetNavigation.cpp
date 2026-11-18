// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468d9a00

UClass * __cdecl UWidgetNavigation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetNavigation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetNavigation",
               &Z_Registration_Info_UClass_UWidgetNavigation.InnerSingleton,
               StaticRegisterNativesUWidgetNavigation,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidgetNavigation>,
               InternalVTableHelperCtorCaller<UWidgetNavigation>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetNavigation.InnerSingleton;
}

// UWidgetNavigation @ 146902bd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetNavigation * __thiscall
UWidgetNavigation::UWidgetNavigation(UWidgetNavigation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetNavigation__6B_;
  (this->Up).Rule = Escape;
  (this->Up).WidgetToFocus.ComparisonIndex = 0;
  (this->Up).WidgetToFocus.Number = 0;
  (this->Up).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Up).CustomDelegate = 0;
  *(undefined8 *)&(this->Up).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Up).CustomDelegate.field_0x10 = 0;
  (this->Down).Rule = Escape;
  (this->Down).WidgetToFocus.ComparisonIndex = 0;
  (this->Down).WidgetToFocus.Number = 0;
  (this->Down).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Down).CustomDelegate = 0;
  *(undefined8 *)&(this->Down).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Down).CustomDelegate.field_0x10 = 0;
  (this->Left).Rule = Escape;
  (this->Left).WidgetToFocus.ComparisonIndex = 0;
  (this->Left).WidgetToFocus.Number = 0;
  (this->Left).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Left).CustomDelegate = 0;
  *(undefined8 *)&(this->Left).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Left).CustomDelegate.field_0x10 = 0;
  (this->Right).Rule = Escape;
  (this->Right).WidgetToFocus.ComparisonIndex = 0;
  (this->Right).WidgetToFocus.Number = 0;
  (this->Right).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Right).CustomDelegate = 0;
  *(undefined8 *)&(this->Right).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Right).CustomDelegate.field_0x10 = 0;
  (this->Next).Rule = Escape;
  (this->Next).WidgetToFocus.ComparisonIndex = 0;
  (this->Next).WidgetToFocus.Number = 0;
  (this->Next).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Next).CustomDelegate = 0;
  *(undefined8 *)&(this->Next).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Next).CustomDelegate.field_0x10 = 0;
  (this->Previous).Rule = Escape;
  (this->Previous).WidgetToFocus.ComparisonIndex = 0;
  (this->Previous).WidgetToFocus.Number = 0;
  (this->Previous).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Previous).CustomDelegate = 0;
  *(undefined8 *)&(this->Previous).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Previous).CustomDelegate.field_0x10 = 0;
  this->RoutingPolicy = AcceptFocus;
  FInstancedStruct::FInstancedStruct(&(this->NavigationMethod).InstancedStruct);
  return this;
}

// ~UWidgetNavigation @ 146905180

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UWidgetNavigation::~UWidgetNavigation(UWidgetNavigation *this)

{
  this->_padding_ = (longlong)&___7UWidgetNavigation__6B_;
  FInstancedStruct::Reset(&(this->NavigationMethod).InstancedStruct);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Previous).CustomDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Next).CustomDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Right).CustomDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Left).CustomDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Down).CustomDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Up).CustomDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146923a70

UClass * __cdecl UWidgetNavigation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetNavigation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetNavigation",
               &Z_Registration_Info_UClass_UWidgetNavigation.InnerSingleton,
               StaticRegisterNativesUWidgetNavigation,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidgetNavigation>,
               InternalVTableHelperCtorCaller<UWidgetNavigation>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetNavigation.InnerSingleton;
}

// StaticRegisterNativesUWidgetNavigation @ 146945d20

void __cdecl UWidgetNavigation::StaticRegisterNativesUWidgetNavigation(void)

{
  return;
}

// UWidgetNavigation @ 146a57a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetNavigation * __thiscall
UWidgetNavigation::UWidgetNavigation(UWidgetNavigation *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetNavigation__6B_;
  (this->Up).Rule = Escape;
  (this->Up).WidgetToFocus.ComparisonIndex = 0;
  (this->Up).WidgetToFocus.Number = 0;
  (this->Up).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Up).CustomDelegate = 0;
  *(undefined8 *)&(this->Up).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Up).CustomDelegate.field_0x10 = 0;
  (this->Down).Rule = Escape;
  (this->Down).WidgetToFocus.ComparisonIndex = 0;
  (this->Down).WidgetToFocus.Number = 0;
  (this->Down).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Down).CustomDelegate = 0;
  *(undefined8 *)&(this->Down).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Down).CustomDelegate.field_0x10 = 0;
  (this->Left).Rule = Escape;
  (this->Left).WidgetToFocus.ComparisonIndex = 0;
  (this->Left).WidgetToFocus.Number = 0;
  (this->Left).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Left).CustomDelegate = 0;
  *(undefined8 *)&(this->Left).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Left).CustomDelegate.field_0x10 = 0;
  (this->Right).Rule = Escape;
  (this->Right).WidgetToFocus.ComparisonIndex = 0;
  (this->Right).WidgetToFocus.Number = 0;
  (this->Right).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Right).CustomDelegate = 0;
  *(undefined8 *)&(this->Right).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Right).CustomDelegate.field_0x10 = 0;
  (this->Next).Rule = Escape;
  (this->Next).WidgetToFocus.ComparisonIndex = 0;
  (this->Next).WidgetToFocus.Number = 0;
  (this->Next).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Next).CustomDelegate = 0;
  *(undefined8 *)&(this->Next).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Next).CustomDelegate.field_0x10 = 0;
  (this->Previous).Rule = Escape;
  (this->Previous).WidgetToFocus.ComparisonIndex = 0;
  (this->Previous).WidgetToFocus.Number = 0;
  (this->Previous).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->Previous).CustomDelegate = 0;
  *(undefined8 *)&(this->Previous).CustomDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Previous).CustomDelegate.field_0x10 = 0;
  this->RoutingPolicy = AcceptFocus;
  FInstancedStruct::FInstancedStruct(&(this->NavigationMethod).InstancedStruct);
  return this;
}

// IsDefaultNavigation @ 146a7c100

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UWidgetNavigation::IsDefaultNavigation(UWidgetNavigation *this)

{
  if (((((((this->Up).Rule == Escape) && ((this->Down).Rule == Escape)) &&
        ((this->Left).Rule == Escape)) &&
       (((this->Right).Rule == Escape && ((this->Next).Rule == Escape)))) &&
      (((this->Previous).Rule == Escape && (this->RoutingPolicy == AcceptFocus)))) &&
     (((this->NavigationMethod).InstancedStruct.StructMemory == (uchar *)0x0 ||
      ((this->NavigationMethod).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr ==
       (UScriptStruct *)0x0)))) {
    return true;
  }
  return false;
}

// ResolveRules @ 146a915d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetNavigation::ResolveRules(UWidgetNavigation *this,UUserWidget *param_1,UWidgetTree *param_2)

{
  FWidgetNavigationData::Resolve(&this->Up,param_1,param_2);
  FWidgetNavigationData::Resolve(&this->Down,param_1,param_2);
  FWidgetNavigationData::Resolve(&this->Left,param_1,param_2);
  FWidgetNavigationData::Resolve(&this->Right,param_1,param_2);
  FWidgetNavigationData::Resolve(&this->Next,param_1,param_2);
  FWidgetNavigationData::Resolve(&this->Previous,param_1,param_2);
  return;
}

// UpdateMetaData @ 146a9ab60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetNavigation::UpdateMetaData
          (UWidgetNavigation *this,TSharedRef<FNavigationMetaData,1> *param_1)

{
  TInstancedStruct<FNavigationMethod> *this_00;
  TSharedRef<FNavigationMetaData,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UpdateMetaDataEntry(this,&local_18,&this->Up,Up);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UpdateMetaDataEntry(this,&local_18,&this->Down,Down);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UpdateMetaDataEntry(this,&local_18,&this->Left,Left);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UpdateMetaDataEntry(this,&local_18,&this->Right,Right);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UpdateMetaDataEntry(this,&local_18,&this->Next,Next);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UpdateMetaDataEntry(this,&local_18,&this->Previous,Previous);
  this_00 = &param_1->Object->NavigationMethodStruct;
  if (this_00 != &this->NavigationMethod) {
    FInstancedStruct::InitializeAs
              (&this_00->InstancedStruct,
               (this->NavigationMethod).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr,
               (this->NavigationMethod).InstancedStruct.StructMemory);
  }
  param_1->Object->NavigationRoutingPolicy = this->RoutingPolicy;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateMetaDataEntry @ 146a9ace0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetNavigation::UpdateMetaDataEntry
          (UWidgetNavigation *this,TSharedRef<FNavigationMetaData,1> *param_1,
          FWidgetNavigationData *param_2,EUINavigation param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EUINavigationRule EVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNavigationMetaData *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  UWidget *this_00;
  TSharedPtr<SWidget,1> *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TWeakPtr<SWidget,1> *pTVar12;
  undefined1 local_1d8 [8];
  ForAnyElementType local_1d0;
  int local_1c8;
  undefined1 local_1c0 [8];
  ForAnyElementType local_1b8;
  int local_1b0;
  undefined1 local_1a8 [8];
  ForAnyElementType local_1a0;
  int local_198;
  undefined1 local_190 [8];
  ForAnyElementType local_188;
  int local_180;
  undefined1 local_178 [8];
  FDelegateAllocation local_170;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_160;
  undefined8 local_158;
  undefined8 local_150;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  undefined8 local_140;
  undefined8 local_138;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  undefined8 local_68 [2];
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  TSharedPtr<SWidget,1> local_38;
  undefined8 local_28 [2];
  
  switch(param_2->Rule) {
  case Escape:
    pFVar5 = param_1->Object;
    local_1d8 = (undefined1  [8])0x0;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8 = 0;
    pFVar5->Rules[param_3].BoundaryRule = Escape;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->Rules[param_3].FocusDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d8,
               (FWriteAccessScope *)&local_130);
    if ((local_1c8 != 0) && (local_1d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d0,0,0,0x10);
      local_1c8 = 0;
    }
    if (local_130.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
    }
    if (local_1d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1d8);
    pTVar12 = &pFVar5->Rules[param_3].FocusRecipient;
    if (pTVar12 != (TWeakPtr<SWidget,1> *)local_68) {
      pTVar6 = pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController;
      pTVar12->Object = (SWidget *)0x0;
      pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
    }
    break;
  case Explicit:
    bVar8 = FWeakObjectPtr::IsValid(&(param_2->Widget).WeakPtr);
    if (bVar8) {
      pFVar5 = param_1->Object;
      this_00 = (UWidget *)FWeakObjectPtr::Get(&(param_2->Widget).WeakPtr);
      pTVar9 = UWidget::GetCachedWidget(this_00,&local_38);
      local_190 = (undefined1  [8])0x0;
      local_188.Data = (FScriptContainerElement *)0x0;
      local_180 = 0;
      pFVar5->Rules[param_3].BoundaryRule = Explicit;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->Rules[param_3].FocusDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_190);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_190,
                 (FWriteAccessScope *)&local_e8);
      if ((local_180 != 0) && (local_188.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_188.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,0,0x10);
        local_180 = 0;
      }
      if (local_e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
      }
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_190);
      pFVar5->Rules[param_3].FocusRecipient.Object = pTVar9->Object;
      pTVar6 = (pTVar9->SharedReferenceCount).ReferenceController;
      if (pTVar6 != pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar4 = pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
        pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController = pTVar6;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar9->SharedReferenceCount).ReferenceController);
    }
    break;
  case Wrap:
    pFVar5 = param_1->Object;
    local_1a8 = (undefined1  [8])0x0;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    local_198 = 0;
    pFVar5->Rules[param_3].BoundaryRule = Wrap;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->Rules[param_3].FocusDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
               (FWriteAccessScope *)&local_100);
    if ((local_198 != 0) && (local_1a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1a0,0,0,0x10);
      local_198 = 0;
    }
    if (local_100.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
    }
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a8);
    pTVar12 = &pFVar5->Rules[param_3].FocusRecipient;
    if (pTVar12 != (TWeakPtr<SWidget,1> *)local_48) {
      pTVar6 = pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController;
      pTVar12->Object = (SWidget *)0x0;
      pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
    }
    break;
  case Stop:
    pFVar5 = param_1->Object;
    local_1c0 = (undefined1  [8])0x0;
    local_1b8.Data = (FScriptContainerElement *)0x0;
    local_1b0 = 0;
    pFVar5->Rules[param_3].BoundaryRule = Stop;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->Rules[param_3].FocusDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c0,
               (FWriteAccessScope *)&local_118);
    if ((local_1b0 != 0) && (local_1b8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1b8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b8,0,0,0x10);
      local_1b0 = 0;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    if (local_1b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1c0);
    pTVar12 = &pFVar5->Rules[param_3].FocusRecipient;
    if (pTVar12 != (TWeakPtr<SWidget,1> *)local_58) {
      pTVar6 = pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController;
      pTVar12->Object = (SWidget *)0x0;
      pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
    }
    break;
  case Custom:
  case CustomBoundary:
    bVar8 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&param_2->CustomDelegate);
    if (bVar8) {
      local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->CustomDelegate,
                 &local_b0);
      local_140 = *(undefined8 *)&(param_2->CustomDelegate).field_0x8;
      local_138 = *(undefined8 *)&(param_2->CustomDelegate).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b0);
      pFVar5 = param_1->Object;
      local_160.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_148,&local_98);
      local_158 = local_140;
      local_150 = local_138;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      local_178 = (undefined1  [8])0x0;
      local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_170.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                 (FWriteAccessScope *)&local_d0);
      local_b8 = &local_170;
      puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_170);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__W4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy,`UWidgetNavigation::UpdateMetaDataEntry'::`10'::<lambda_1>_>
                    ::_vftable_;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_160,&local_80);
        puVar10[4] = local_158;
        puVar10[5] = local_150;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
      }
      if (local_d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
      }
      EVar3 = param_2->Rule;
      if (((EVar3 != Custom) && (EVar3 != CustomBoundary)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7026125789661757352>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\NavigationMetaData.h"
                             ,0x58,
                             "InCustomBoundaryRule == EUINavigationRule::Custom || InCustomBoundaryRule == EUINavigationRule::CustomBoundary"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5->Rules[param_3].BoundaryRule = EVar3;
      TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (&pFVar5->Rules[param_3].FocusDelegate,
                 (TDelegate<TSharedPtr<SWidget,1>___cdecl(EUINavigation),FDefaultDelegateUserPolicy>
                  *)local_178);
      pTVar12 = &pFVar5->Rules[param_3].FocusRecipient;
      if (pTVar12 != (TWeakPtr<SWidget,1> *)local_28) {
        pTVar6 = pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController;
        pTVar12->Object = (SWidget *)0x0;
        pFVar5->Rules[param_3].FocusRecipient.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar6->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
          }
        }
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_178);
      if (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_170.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_178);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_160.AccessDetector);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

