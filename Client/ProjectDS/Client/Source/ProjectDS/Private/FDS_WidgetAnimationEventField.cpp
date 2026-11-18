// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b644950

UScriptStruct * __cdecl FDS_WidgetAnimationEventField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_WidgetAnimationEventField.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_WidgetAnimationEventField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_WidgetAnimationEventField,(UObject *)pUVar1,
                         L"DS_WidgetAnimationEventField");
  }
  return Z_Registration_Info_UScriptStruct_FDS_WidgetAnimationEventField.OuterSingleton;
}

// operator= @ 14bc84cc0

FDS_WidgetAnimationEventField * __thiscall
FDS_WidgetAnimationEventField::operator=
          (FDS_WidgetAnimationEventField *this,FDS_WidgetAnimationEventField *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  this->AnimationName = param_1->AnimationName;
  this->AnimationPlayTime = param_1->AnimationPlayTime;
  this->AnimationEventType = param_1->AnimationEventType;
  this->AnimationStateType = param_1->AnimationStateType;
  this->NumberOfLoops = param_1->NumberOfLoops;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Delegate_AnimationFinish,&param_1->Delegate_AnimationFinish);
  if (&param_1->Delegate_ValidAnimation != &this->Delegate_ValidAnimation) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->Delegate_ValidAnimation,(FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Delegate_ValidAnimation).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Delegate_ValidAnimation).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate_ValidAnimation,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

