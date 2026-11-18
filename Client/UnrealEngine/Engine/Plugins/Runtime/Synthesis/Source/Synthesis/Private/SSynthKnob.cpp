// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 23

// SSynthKnob @ 14f0b9560

SSynthKnob * __thiscall SSynthKnob::SSynthKnob(SSynthKnob *this)

{
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7SSynthKnob__6B_;
  (this->LockedAttribute).Value = false;
  (this->LockedAttribute).bIsSet = false;
  *(undefined8 *)&(this->LockedAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LockedAttribute).Getter = 0;
  *(undefined8 *)&(this->LockedAttribute).Getter.field_0x8 = 0;
  (this->ValueAttribute).Value = 0.0;
  (this->ValueAttribute).bIsSet = false;
  *(undefined8 *)&(this->ValueAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ValueAttribute).Getter = 0;
  *(undefined8 *)&(this->ValueAttribute).Getter.field_0x8 = 0;
  (this->StepSize).Value = 0.0;
  (this->StepSize).bIsSet = false;
  *(undefined8 *)&(this->StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->StepSize).Getter = 0;
  *(undefined8 *)&(this->StepSize).Getter.field_0x8 = 0;
  (this->MouseSpeed).Value = 0.0;
  (this->MouseSpeed).bIsSet = false;
  *(undefined8 *)&(this->MouseSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MouseSpeed).Getter = 0;
  *(undefined8 *)&(this->MouseSpeed).Getter.field_0x8 = 0;
  (this->MouseFineTuneSpeed).Value = 0.0;
  (this->MouseFineTuneSpeed).bIsSet = false;
  *(undefined8 *)&(this->MouseFineTuneSpeed).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MouseFineTuneSpeed).Getter = 0;
  *(undefined8 *)&(this->MouseFineTuneSpeed).Getter.field_0x8 = 0;
  FText::FText(&(this->ParameterName).Value);
  (this->ParameterName).bIsSet = false;
  *(undefined8 *)&(this->ParameterName).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ParameterName).Getter = 0;
  *(undefined8 *)&(this->ParameterName).Getter.field_0x8 = 0;
  FText::FText(&(this->ParameterUnits).Value);
  (this->ParameterUnits).bIsSet = false;
  *(undefined8 *)&(this->ParameterUnits).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ParameterUnits).Getter = 0;
  *(undefined8 *)&(this->ParameterUnits).Getter.field_0x8 = 0;
  (this->ParameterRange).Value.field0_0x0._s_0.X = 0.0;
  (this->ParameterRange).Value.field0_0x0._s_0.Y = 0.0;
  (this->ParameterRange).bIsSet = false;
  *(undefined8 *)&(this->ParameterRange).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ParameterRange).Getter = 0;
  *(undefined8 *)&(this->ParameterRange).Getter.field_0x8 = 0;
  (this->ShowTooltip).Value = false;
  (this->ShowTooltip).bIsSet = false;
  *(undefined8 *)&(this->ShowTooltip).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ShowTooltip).Getter = 0;
  *(undefined8 *)&(this->ShowTooltip).Getter.field_0x8 = 0;
  (this->FineTuneKey).KeyName.ComparisonIndex = 0;
  (this->FineTuneKey).KeyName.Number = 0;
  (this->FineTuneKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->FineTuneKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->KnobImages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnobImages).ArrayNum = 0;
  (this->KnobImages).ArrayMax = 0;
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureBegin = 0;
  *(undefined8 *)&(this->OnControllerCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnControllerCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerCaptureEnd = 0;
  *(undefined8 *)&(this->OnControllerCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnControllerCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  return this;
}

// ~SSynthKnob @ 14f0bfc00

void __thiscall SSynthKnob::~SSynthKnob(SSynthKnob *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  pFVar2 = (this->KnobImages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FineTuneKey).KeyDetails.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShowTooltip).Getter);
  pvVar1 = *(void **)&(this->ShowTooltip).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ShowTooltip).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ParameterRange).Getter);
  pvVar1 = *(void **)&(this->ParameterRange).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ParameterRange).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ParameterUnits).Getter);
  pvVar1 = *(void **)&(this->ParameterUnits).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ParameterUnits).Getter);
  pIVar3 = (this->ParameterUnits).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ParameterName).Getter);
  pvVar1 = *(void **)&(this->ParameterName).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ParameterName).Getter);
  pIVar3 = (this->ParameterName).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MouseFineTuneSpeed).Getter);
  pvVar1 = *(void **)&(this->MouseFineTuneSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MouseFineTuneSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MouseSpeed).Getter);
  pvVar1 = *(void **)&(this->MouseSpeed).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MouseSpeed).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StepSize).Getter);
  pvVar1 = *(void **)&(this->StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StepSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  pvVar1 = *(void **)&(this->ValueAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValueAttribute).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LockedAttribute).Getter);
  pvVar1 = *(void **)&(this->LockedAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LockedAttribute).Getter);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// CommitValue @ 14f0cde60

void __thiscall SSynthKnob::CommitValue(SSynthKnob *this,float param_1)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->ValueAttribute).Getter,local_38);
  if ((*(int *)&(this->ValueAttribute).Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ValueAttribute).Getter.field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
      goto LAB_14f0cded6;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  (this->ValueAttribute).Value = param_1;
  (this->ValueAttribute).bIsSet = true;
LAB_14f0cded6:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
             local_38);
  if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

// ComputeDesiredSize @ 14f0cdfa0

TVector2<double> * __thiscall
SSynthKnob::ComputeDesiredSize
          (SSynthKnob *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = 0x170;
  if (this->Style->KnobSize != Medium) {
    lVar2 = 0x10;
  }
  lVar2 = (longlong)&this->Style->_padding_ + lVar2;
  if (lVar2 != 0) {
    fVar1 = *(float *)(lVar2 + 0x24);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)(lVar2 + 0x20);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// Construct @ 14f0ce150

void __thiscall SSynthKnob::Construct(SSynthKnob *this,FArguments *param_1)

{
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  FKeyDetails *pFVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  int local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_88 [8];
  ForAnyElementType FStack_80;
  ulonglong local_78;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FKeyDetails *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  FReadAccessScope local_30;
  
  if (param_1->_Style == (FSynthKnobStyle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDeclaration._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\UI\\SSynthKnob.cpp"
                       ,10,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Style = param_1->_Style;
  TAttribute<bool>::operator=(&this->LockedAttribute,&param_1->_Locked);
  TAttribute<float>::operator=(&this->ValueAttribute,&param_1->_Value);
  this->bIsFocusable = param_1->_IsFocusable;
  TAttribute<float>::operator=(&this->MouseSpeed,&param_1->_MouseSpeed);
  TAttribute<float>::operator=(&this->MouseFineTuneSpeed,&param_1->_MouseFineTuneSpeed);
  TAttribute<float>::operator=(&this->StepSize,&param_1->_StepSize);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnControllerCaptureBegin,&param_1->_OnControllerCaptureBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnControllerCaptureEnd,&param_1->_OnControllerCaptureEnd);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TAttribute<FText>::operator=(&this->ParameterName,&param_1->_ParameterName);
  TAttribute<FText>::operator=(&this->ParameterUnits,&param_1->_ParameterUnits);
  dVar3 = (param_1->_ParameterRange).Value.field0_0x0._s_0.Y;
  this_00 = &(param_1->_ParameterRange).Getter;
  this_01 = &(this->ParameterRange).Getter;
  (this->ParameterRange).Value.field0_0x0._s_0.X =
       (param_1->_ParameterRange).Value.field0_0x0._s_0.X;
  (this->ParameterRange).Value.field0_0x0._s_0.Y = dVar3;
  (this->ParameterRange).bIsSet = (param_1->_ParameterRange).bIsSet;
  if (this_00 != this_01) {
    local_a8 = (undefined1  [8])0x0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_30);
    if ((*(int *)&(param_1->_ParameterRange).Getter.field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_ParameterRange).Getter.field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_a8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_70);
    if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
      local_98 = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a8);
  }
  local_90 = param_1->_ShowParamTooltip;
  local_8f = 1;
  local_88 = (undefined1  [8])0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  (this->ShowTooltip).Value = (bool)local_90;
  (this->ShowTooltip).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShowTooltip).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_58);
  if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = local_78 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  this->MouseDownValue = 0.0;
  this->PixelDelta = 0x32;
  this->bIsFineTune = false;
  this->bIsMouseDown = false;
  (this->FineTuneKey).KeyName = EKeys::LeftShift.KeyName;
  FVar5 = EKeys::LeftShift.KeyDetails.SharedReferenceCount;
  pFVar4 = EKeys::LeftShift.KeyDetails.Object;
  if (EKeys::LeftShift.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftShift.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftShift.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = (this->FineTuneKey).KeyDetails.Object;
  pTStack_38 = (this->FineTuneKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->FineTuneKey).KeyDetails.Object = pFVar4;
  (this->FineTuneKey).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  this->bControllerInputCaptured = false;
  return;
}

// GetMouseDownPosition @ 14f0d9f00

TVector2<double> * __thiscall
SSynthKnob::GetMouseDownPosition(SSynthKnob *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->MouseDownPosition).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->MouseDownPosition).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetValue @ 14f0df1f0

float __thiscall SSynthKnob::GetValue(SSynthKnob *this)

{
  float *pfVar1;
  
  pfVar1 = TAttribute<float>::Get(&this->ValueAttribute);
  return *pfVar1;
}

// IsInteractable @ 14f0e7a70

bool __thiscall SSynthKnob::IsInteractable(SSynthKnob *this)

{
  char cVar1;
  bool *pbVar2;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    pbVar2 = TAttribute<bool>::Get(&this->LockedAttribute);
    if (*pbVar2 == false) {
      cVar1 = (**(code **)(this->_padding_ + 0x198))(this);
      if (cVar1 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsLocked @ 14f0e7b00

bool __thiscall SSynthKnob::IsLocked(SSynthKnob *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->LockedAttribute);
  return *pbVar1;
}

// OnFocusLost @ 14f0e9450

void __thiscall SSynthKnob::OnFocusLost(SSynthKnob *this,FFocusEvent *param_1)

{
  float *pfVar1;
  
  if (this->bControllerInputCaptured != false) {
    pfVar1 = TAttribute<float>::Get(&this->ValueAttribute);
    CommitValue(this,*pfVar1);
    ResetControllerState(this);
    return;
  }
  return;
}

// OnKeyDown @ 14f0eac40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSynthKnob::OnKeyDown
          (SSynthKnob *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  FName FVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  FSlateApplication *pFVar7;
  float *pfVar8;
  FReply *pFVar9;
  float fVar10;
  FReadAccessScope local_f8;
  FReply local_e0;
  
  FReply::FReply(__return_storage_ptr__,false);
  pFVar7 = FSlateApplication::Get();
  cVar5 = (**(code **)(*(longlong *)pFVar7 + 0xa0))(pFVar7,param_2);
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar3 = (this->FineTuneKey).KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (FVar2 == FVar3) {
    this->bIsFineTune = true;
  }
  cVar6 = (**(code **)(this->_padding_ + 0x1b0))(this);
  if (cVar6 != '\0') {
    pFVar7 = FSlateApplication::Get();
    cVar6 = (**(code **)(*(longlong *)pFVar7 + 0xb0))(pFVar7,param_2);
    if (cVar6 == '\0') {
      if (this->bControllerInputCaptured == false) {
        this->bControllerInputCaptured = true;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnControllerCaptureBegin);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnControllerCaptureEnd,&local_f8);
        if ((*(int *)&(this->OnControllerCaptureEnd).field_0x10 != 0) &&
           (plVar4 = *(longlong **)&(this->OnControllerCaptureEnd).field_0x8,
           plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_f8);
        this->bControllerInputCaptured = false;
      }
      FReply::FReply(&local_e0,true);
      FReply::operator=(__return_storage_ptr__,&local_e0);
      FReply::~FReply(&local_e0);
    }
    if (this->bControllerInputCaptured != false) {
      pfVar8 = TAttribute<float>::Get(&this->ValueAttribute);
      fVar10 = *pfVar8;
      if (cVar5 == '\x03') {
        pfVar8 = TAttribute<float>::Get(&this->StepSize);
        fVar10 = fVar10 - *pfVar8;
      }
      else if (cVar5 == '\x02') {
        pfVar8 = TAttribute<float>::Get(&this->StepSize);
        fVar10 = fVar10 + *pfVar8;
      }
      if (__real_3f800000 <= fVar10) {
        fVar10 = __real_3f800000;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      CommitValue(this,fVar10);
      FReply::FReply(&local_e0,true);
      FReply::operator=(__return_storage_ptr__,&local_e0);
      FReply::~FReply(&local_e0);
      return __return_storage_ptr__;
    }
  }
  pFVar9 = SWidget::OnKeyDown((SWidget *)this,&local_e0,param_1,param_2);
  FReply::operator=(__return_storage_ptr__,pFVar9);
  FReply::~FReply(&local_e0);
  return __return_storage_ptr__;
}

// OnKeyUp @ 14f0eaed0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSynthKnob::OnKeyUp(SSynthKnob *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                   FKeyEvent *param_2)

{
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,false);
  this->bIsFineTune = false;
  if (this->bControllerInputCaptured != false) {
    FReply::FReply(&local_c8,true);
    FReply::operator=(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14f0eb0e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSynthKnob::OnMouseButtonDown
          (SSynthKnob *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  float fVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  longlong *plVar4;
  SWidget *pSVar5;
  bool bVar6;
  bool *pbVar7;
  float *pfVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FReply *pFVar10;
  FReadAccessScope local_1a8;
  FReply local_190;
  FReply local_d8;
  
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar3 = (param_2->EffectingButton).KeyName;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar3 == EKeys::LeftMouseButton.KeyName) {
    pbVar7 = TAttribute<bool>::Get(&this->LockedAttribute);
    if (*pbVar7 == false) {
      bVar6 = true;
      goto LAB_14f0eb131;
    }
  }
  bVar6 = false;
LAB_14f0eb131:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
               &local_1a8);
    if ((*(int *)&(this->OnMouseCaptureBegin).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1a8);
    this->bIsMouseDown = true;
    fVar1 = *(float *)&(param_2->ScreenSpacePosition).field_0x4;
    (this->MouseDownPosition).field0_0x0._s_0.X = (double)*(float *)&param_2->ScreenSpacePosition;
    (this->MouseDownPosition).field0_0x0._s_0.Y = (double)fVar1;
    pfVar8 = TAttribute<float>::Get(&this->ValueAttribute);
    this->MouseDownValue = *pfVar8;
    ResetControllerState(this);
    FReply::FReply(&local_190,true);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_1a8);
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar9->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1a8.DestructionSentinel.Accessor);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1a8.DestructionSentinel.Accessor);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a8.DestructionSentinel._0_8_ = pSVar5;
    local_1a8.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)pTVar2;
    pFVar10 = FReply::CaptureMouse(&local_190,(TSharedRef<SWidget,1> *)&local_1a8);
    FReply::FReply(&local_d8,pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FReply::~FReply(&local_190);
    SWidget::HasMouseCapture((SWidget *)this);
    FReply::FReply(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14f0eb3d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSynthKnob::OnMouseButtonUp
          (SSynthKnob *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  FReadAccessScope local_d8;
  FReply local_c0;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) &&
     (bVar7 = SWidget::HasMouseCapture((SWidget *)this), bVar7)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               &local_d8);
    if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    this->bIsMouseDown = false;
    ResetControllerState(this);
    FReply::FReply(&local_c0,true);
    FVar6.ReferenceController = local_c0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c0.MouseCaptor.Object = (SWidget *)0x0;
    local_c0.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
    }
    local_c0.bUseHighPrecisionMouse = 0;
    local_c0.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c0);
    FReply::~FReply(&local_c0);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseMove @ 14f0eb5c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSynthKnob::OnMouseMove
          (SSynthKnob *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  bool bVar1;
  bool *pbVar2;
  float fVar3;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if ((bVar1) && (pbVar2 = TAttribute<bool>::Get(&this->LockedAttribute), *pbVar2 == false)) {
    fVar3 = __real_3e4ccccd;
    if (this->bIsFineTune != false) {
      fVar3 = __real_3d4ccccd;
    }
    fVar3 = ((float)((this->MouseDownPosition).field0_0x0._s_0.Y -
                    (double)(int)*(float *)&(param_2->LastScreenSpacePosition).field_0x4) /
            (float)this->PixelDelta) * fVar3 + this->MouseDownValue;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    CommitValue(this,fVar3);
    ResetControllerState(this);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// OnPaint @ 14f0ebdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSynthKnob::OnPaint(SSynthKnob *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                   FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  ESlateColorStylingMode EVar2;
  FSynthKnobStyle *pFVar3;
  bool bVar4;
  longlong lVar5;
  FSlateBrush *pFVar6;
  float *pfVar7;
  FSlateColor *pFVar8;
  ESlateDrawEffect EVar9;
  FSlateBrush *pFVar10;
  float fVar11;
  undefined1 auStackY_158 [32];
  float local_108;
  float fStack_104;
  uint local_100;
  TVector2<float> *local_f8;
  float *local_f0;
  undefined1 *local_e8;
  float local_e0;
  float fStack_dc;
  FLinearColor_u_0 local_d8;
  TAttribute<float> *local_c8;
  undefined1 local_c0;
  FSlateWindowElementList *local_b8;
  TVector2<float>_u_0 local_b0;
  float local_a8;
  undefined8 local_a4;
  FDeprecateSlateVector2D local_9c;
  float local_94 [2];
  float afStack_8c [2];
  TVector2<float>_u_0 local_84;
  byte local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_b8 = param_4;
  local_c8 = &this->ValueAttribute;
  TAttribute<float>::Get(local_c8);
  if ((!param_7) || (bVar4 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar4 = false;
  }
  EVar9 = DisabledEffect;
  if (bVar4) {
    EVar9 = None;
  }
  pFVar3 = this->Style;
  lVar5 = 0x170;
  if (pFVar3->KnobSize != Medium) {
    lVar5 = 0x10;
  }
  pFVar6 = (FSlateBrush *)((longlong)&pFVar3->_padding_ + lVar5);
  lVar5 = 0x220;
  if (pFVar3->KnobSize != Medium) {
    lVar5 = 0xc0;
  }
  pFVar10 = (FSlateBrush *)((longlong)&pFVar3->_padding_ + lVar5);
  if (pFVar6 == (FSlateBrush *)0x0) {
    local_100 = param_5;
  }
  else {
    EVar2 = (pFVar6->TintColor).ColorUseRule;
    pFVar8 = &pFVar6->TintColor;
    if (EVar2 != UseColor_Specified) {
      if (EVar2 == UseColor_ColorTable) {
        pFVar8 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar8);
      }
      else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
        pFVar8 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar8 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_100 = param_5 + 1;
    local_a4 = 0;
    local_d8._s_0.R =
         (pFVar8->SpecifiedColor).field0_0x0._s_0.R *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_b0 = (param_2->AbsolutePosition).field0_0x0;
    local_9c = param_2->Size;
    local_d8._s_0.B =
         (pFVar8->SpecifiedColor).field0_0x0._s_0.B *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_d8._s_0.G =
         (pFVar8->SpecifiedColor).field0_0x0._s_0.G *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_a8 = param_2->Scale;
    local_d8._s_0.A =
         (pFVar8->SpecifiedColor).field0_0x0._s_0.A *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_7c = param_2->bHasRenderTransform * '\x02' | local_7c & 0xfc;
    local_94 = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_8c = (param_2->AccumulatedRenderTransform).M.M[1];
    local_84 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    FSlateDrawElement::MakeBox
              (local_b8,param_5,(FPaintGeometry *)&local_b0._s_0,pFVar6,EVar9,
               (FLinearColor *)&local_d8._s_0);
  }
  if (pFVar10 != (FSlateBrush *)0x0) {
    fVar11 = this->Style->MinValueAngle;
    fVar1 = this->Style->MaxValueAngle;
    pfVar7 = TAttribute<float>::Get(local_c8);
    pFVar8 = &pFVar10->TintColor;
    local_e0 = SUB84(param_2->Size,0);
    local_108 = local_e0 * __real_3f000000;
    fStack_dc = SUB84(param_2->Size,4);
    fStack_104 = fStack_dc * __real_3f000000;
    fVar11 = ((fVar1 - fVar11) * *pfVar7 + fVar11) * __real_40c90fdb;
    EVar2 = (pFVar10->TintColor).ColorUseRule;
    if (EVar2 != UseColor_Specified) {
      if (EVar2 == UseColor_ColorTable) {
        pFVar8 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar8);
      }
      else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
        pFVar8 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar8 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_e8 = &param_2->field_0x34;
    local_f0 = &param_2->Scale;
    local_f8 = &param_2->AbsolutePosition;
    local_c0 = 1;
    local_d8._s_0.R =
         (pFVar8->SpecifiedColor).field0_0x0._s_0.R *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_d8._s_0.G =
         (pFVar8->SpecifiedColor).field0_0x0._s_0.G *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_a4 = 0;
    local_d8._s_0.B =
         (pFVar8->SpecifiedColor).field0_0x0._s_0.B *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_84 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_c8 = (TAttribute<float> *)_local_108;
    local_d8._s_0.A =
         (pFVar8->SpecifiedColor).field0_0x0._s_0.A *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_b0 = local_f8->field0_0x0;
    local_a8 = *local_f0;
    local_9c = param_2->Size;
    local_94 = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_8c = (param_2->AccumulatedRenderTransform).M.M[1];
    local_7c = (*local_e8 & 1) * '\x02' | local_7c & 0xfc;
    FSlateDrawElement::MakeRotatedBox
              (local_b8,local_100,(FPaintGeometry *)&local_b0._s_0,pFVar10,EVar9,fVar11,
               (FDeprecateOptionalVector2DParameter *)&local_c8,RelativeToElement,
               (FLinearColor *)&local_d8._s_0);
    local_100 = local_100 + 1;
  }
  return local_100;
}

// ResetControllerState @ 14f0f7e60

void __thiscall SSynthKnob::ResetControllerState(SSynthKnob *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (this->bControllerInputCaptured != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnControllerCaptureEnd,&local_28);
    if ((*(int *)&(this->OnControllerCaptureEnd).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnControllerCaptureEnd).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    this->bControllerInputCaptured = false;
  }
  return;
}

// SetLocked @ 14f0fdb30

void __thiscall SSynthKnob::SetLocked(SSynthKnob *this,TAttribute<bool> *param_1)

{
  TAttribute<bool>::operator=(&this->LockedAttribute,param_1);
  return;
}

// SetMouseFineTuneSpeed @ 14f0fe960

void __thiscall SSynthKnob::SetMouseFineTuneSpeed(SSynthKnob *this,float param_1)

{
  FDestructionSentinel local_48;
  float local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->MouseFineTuneSpeed).Value = param_1;
  (this->MouseFineTuneSpeed).bIsSet = true;
  local_18 = 0;
  local_2c = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_30 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MouseFineTuneSpeed).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// SetMouseSpeed @ 14f0fea30

void __thiscall SSynthKnob::SetMouseSpeed(SSynthKnob *this,float param_1)

{
  FDestructionSentinel local_48;
  float local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->MouseSpeed).Value = param_1;
  (this->MouseSpeed).bIsSet = true;
  local_18 = 0;
  local_2c = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_30 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MouseSpeed).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// SetStepSize @ 14f102290

void __thiscall SSynthKnob::SetStepSize(SSynthKnob *this,float param_1)

{
  FDestructionSentinel local_48;
  float local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->StepSize).Value = param_1;
  (this->StepSize).bIsSet = true;
  local_18 = 0;
  local_2c = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_30 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StepSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// SetValue @ 14f102c80

void __thiscall SSynthKnob::SetValue(SSynthKnob *this,TAttribute<float> *param_1)

{
  TAttribute<float>::operator=(&this->ValueAttribute,param_1);
  return;
}

// SupportsKeyboardFocus @ 14f104000

bool __thiscall SSynthKnob::SupportsKeyboardFocus(SSynthKnob *this)

{
  return this->bIsFocusable;
}

