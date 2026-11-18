// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// ~TOptional<FOptimusRoutedConstNodePin> @ 14e15ed50

void __thiscall
TOptional<FOptimusRoutedConstNodePin>::~TOptional<FOptimusRoutedConstNodePin>
          (TOptional<FOptimusRoutedConstNodePin> *this)

{
  ForElementType<IOptimusNodePinRouter_const_*> FVar1;
  FLowLevelMemTracker *this_00;
  
  if ((this->bIsSet != false) &&
     (FVar1 = (this->TypedValue).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData,
     FVar1 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0)) {
    if (FVar1 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
    }
    return;
  }
  return;
}

// ~TOptional<FText> @ 14e15ed70

void __thiscall TOptional<FText>::~TOptional<FText>(TOptional<FText> *this)

{
  if (*(longlong **)&this->field0_0x0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e15ed7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field0_0x0 + 0x10))();
    return;
  }
  return;
}

// operator= @ 14e164780

TOptional<FOptimusRoutedConstNodePin> * __thiscall
TOptional<FOptimusRoutedConstNodePin>::operator=
          (TOptional<FOptimusRoutedConstNodePin> *this,FOptimusRoutedConstNodePin *param_1)

{
  ForElementType<IOptimusNodePinRouter_const_*> FVar1;
  
  if ((TOptional<FOptimusRoutedConstNodePin> *)param_1 != this) {
    if ((this->bIsSet != false) &&
       (FVar1 = (this->TypedValue).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData
       , FVar1 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0)) {
      FMemory::Free((void *)FVar1);
    }
    (this->TypedValue).NodePin = param_1->NodePin;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&(this->TypedValue).TraversalContext,&param_1->TraversalContext);
    this->bIsSet = true;
  }
  return this;
}

// operator* @ 14e1663c0

FOptimusRoutedConstNodePin * __thiscall
TOptional<FOptimusRoutedConstNodePin>::operator*(TOptional<FOptimusRoutedConstNodePin> *this)

{
  code *pcVar1;
  bool bVar2;
  FOptimusRoutedConstNodePin *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FOptimusRoutedConstNodePin *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator* @ 14e166410

FText * __thiscall TOptional<FText>::operator*(TOptional<FText> *this)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if ((this->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FText *)this;
}

