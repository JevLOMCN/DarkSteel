// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 5

// FBindUIActionArgs @ 14a7a9a50

FBindUIActionArgs * __thiscall
FBindUIActionArgs::FBindUIActionArgs
          (FBindUIActionArgs *this,FDataTableRowHandle *param_1,bool param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  UDataTable *pUVar1;
  ECommonInputType local_res18 [16];
  initializer_list<ECommonInputType> local_28;
  
  this->ActionTag = (FUIActionTag)0x0;
  pUVar1 = (param_1->DataTable).field0_0x0.DebugPtr;
  (this->LegacyActionTableRow).DataTable.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->LegacyActionTableRow).RowName = param_1->RowName;
  local_28._First = local_res18;
  (this->InputAction).WeakPtr = (FWeakObjectPtr)0x0;
  local_28._Last = local_res18 + 2;
  this->InputMode = Menu;
  this->KeyEvent = IE_Pressed;
  local_res18[0] = MouseAndKeyboard;
  local_res18[1] = Touch;
  TSet<enum_ECommonInputType,DefaultKeyFuncs<enum_ECommonInputType,0>,FDefaultSetAllocator>::
  TSet<enum_ECommonInputType,DefaultKeyFuncs<enum_ECommonInputType,0>,FDefaultSetAllocator>
            (&this->InputTypesExemptFromValidKeyCheck,&local_28);
  this->bIsPersistent = false;
  this->bConsumeInput = true;
  this->bDisplayInActionBar = param_2;
  this->bForceHold = false;
  FText::FText(&this->OverrideDisplayName);
  this->PriorityWithinCollection = 0;
  *(undefined8 *)&this->OnExecuteAction = 0;
  *(undefined8 *)&(this->OnExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->OnExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnExecuteAction,param_3);
  *(undefined8 *)&this->OnHoldActionProgressed = 0;
  *(undefined8 *)&(this->OnHoldActionProgressed).field_0x8 = 0;
  *(undefined4 *)&(this->OnHoldActionProgressed).field_0x10 = 0;
  *(undefined8 *)&this->OnHoldActionPressed = 0;
  *(undefined8 *)&(this->OnHoldActionPressed).field_0x8 = 0;
  *(undefined4 *)&(this->OnHoldActionPressed).field_0x10 = 0;
  *(undefined8 *)&this->OnHoldActionReleased = 0;
  *(undefined8 *)&(this->OnHoldActionReleased).field_0x8 = 0;
  *(undefined4 *)&(this->OnHoldActionReleased).field_0x10 = 0;
  return this;
}

// FBindUIActionArgs @ 14a7a9b70

FBindUIActionArgs * __thiscall
FBindUIActionArgs::FBindUIActionArgs
          (FBindUIActionArgs *this,UInputAction *param_1,bool param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  UInputAction *local_res8;
  ECommonInputType local_res18 [16];
  initializer_list<ECommonInputType> local_38;
  
  this->ActionTag = (FUIActionTag)0x0;
  (this->LegacyActionTableRow).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->LegacyActionTableRow).RowName.ComparisonIndex = 0;
  (this->LegacyActionTableRow).RowName.Number = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->InputAction).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->InputAction).WeakPtr,(FObjectPtr)&local_res8);
  local_38._First = local_res18;
  this->InputMode = Menu;
  local_38._Last = local_res18 + 2;
  this->KeyEvent = IE_Pressed;
  local_res18[0] = MouseAndKeyboard;
  local_res18[1] = Touch;
  TSet<enum_ECommonInputType,DefaultKeyFuncs<enum_ECommonInputType,0>,FDefaultSetAllocator>::
  TSet<enum_ECommonInputType,DefaultKeyFuncs<enum_ECommonInputType,0>,FDefaultSetAllocator>
            (&this->InputTypesExemptFromValidKeyCheck,&local_38);
  this->bIsPersistent = false;
  this->bConsumeInput = true;
  this->bDisplayInActionBar = param_2;
  this->bForceHold = false;
  FText::FText(&this->OverrideDisplayName);
  this->PriorityWithinCollection = 0;
  *(undefined8 *)&this->OnExecuteAction = 0;
  *(undefined8 *)&(this->OnExecuteAction).field_0x8 = 0;
  *(undefined4 *)&(this->OnExecuteAction).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnExecuteAction,param_3);
  *(undefined8 *)&this->OnHoldActionProgressed = 0;
  *(undefined8 *)&(this->OnHoldActionProgressed).field_0x8 = 0;
  *(undefined4 *)&(this->OnHoldActionProgressed).field_0x10 = 0;
  *(undefined8 *)&this->OnHoldActionPressed = 0;
  *(undefined8 *)&(this->OnHoldActionPressed).field_0x8 = 0;
  *(undefined4 *)&(this->OnHoldActionPressed).field_0x10 = 0;
  *(undefined8 *)&this->OnHoldActionReleased = 0;
  *(undefined8 *)&(this->OnHoldActionReleased).field_0x8 = 0;
  *(undefined4 *)&(this->OnHoldActionReleased).field_0x10 = 0;
  return this;
}

// ~FBindUIActionArgs @ 14a7b1490

void __thiscall FBindUIActionArgs::~FBindUIActionArgs(FBindUIActionArgs *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  ForElementType<FSetElementId> FVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHoldActionReleased);
  pvVar1 = *(void **)&(this->OnHoldActionReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoldActionReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHoldActionPressed);
  pvVar1 = *(void **)&(this->OnHoldActionPressed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoldActionPressed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHoldActionProgressed);
  pvVar1 = *(void **)&(this->OnHoldActionProgressed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoldActionProgressed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExecuteAction);
  pvVar1 = *(void **)&(this->OnExecuteAction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExecuteAction);
  pIVar2 = (this->OverrideDisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  (this->InputTypesExemptFromValidKeyCheck).HashSize = 0;
  FVar3 = (this->InputTypesExemptFromValidKeyCheck).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<enum_ECommonInputType>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_ECommonInputType>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->InputTypesExemptFromValidKeyCheck);
  return;
}

// ActionHasHoldMappings @ 14a7bd2b0

bool __thiscall FBindUIActionArgs::ActionHasHoldMappings(FBindUIActionArgs *this)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  FCommonInputActionDataBase *pFVar2;
  
  if (((this->LegacyActionTableRow).DataTable.field0_0x0.DebugPtr != (UDataTable *)0x0) ||
     ((this->LegacyActionTableRow).RowName != (FName)0x0)) {
    pFVar2 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                       (&this->LegacyActionTableRow,L"");
    if (pFVar2 != (FCommonInputActionDataBase *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014a7bd2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
      return (bool)uVar1;
    }
  }
  return false;
}

// GetActionName @ 14a7e01d0

FName __thiscall FBindUIActionArgs::GetActionName(FBindUIActionArgs *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName in_RDX;
  ForAnyElementType FVar3;
  FName local_res8;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InputAction).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->InputAction).WeakPtr);
    *(undefined8 *)in_RDX = *(undefined8 *)&pUVar2->field_0x18;
    return in_RDX;
  }
  if ((this->LegacyActionTableRow).DataTable.field0_0x0.DebugPtr == (UDataTable *)0x0) {
    if ((this->LegacyActionTableRow).RowName == (FName)0x0) {
      *(FUIActionTag *)in_RDX = this->ActionTag;
      return in_RDX;
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
  }
  else {
    ::FName::ToString(&(this->LegacyActionTableRow).RowName,&local_28);
    local_res18[0] = (FName)((this->LegacyActionTableRow).DataTable.field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(local_res18,&local_38);
    ::FString::PrintfImpl(&local_48,L"Legacy_%s_%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar3.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  *(FName *)in_RDX = local_res8;
  return in_RDX;
}

