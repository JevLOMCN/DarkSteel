// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 15

// ComputeDesiredSize @ 14d8e5e10

TVector2<double> * __thiscall
SAudioMeter::ComputeDesiredSize
          (SAudioMeter *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  SAudioMeterWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pSVar1 = (this->AudioMeterWidget).Object;
  (**(code **)(pSVar1->_padding_ + 0x170))(pSVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ComputeVolatility @ 14d8e6160

bool __thiscall SAudioMeter::ComputeVolatility(SAudioMeter *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d8e61a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(((this->AudioMeterWidget).Object)->_padding_ + 0x228))();
  return (bool)uVar3;
}

// Construct @ 14d8eaa00

void __thiscall SAudioMeter::Construct(SAudioMeter *this,FArguments *param_1)

{
  TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  FArguments *pFVar5;
  TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *pTVar6;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SAudioMeterWidget *local_568;
  FSharedReferencer<1> local_560;
  bool local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined4 local_540;
  bool local_53c;
  undefined1 local_538 [8];
  ForAnyElementType FStack_530;
  int local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined4 local_510;
  bool local_50c;
  undefined1 local_508 [8];
  ForAnyElementType FStack_500;
  int local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined4 local_4e0;
  bool local_4dc;
  undefined1 local_4d8 [8];
  ForAnyElementType FStack_4d0;
  int local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined4 local_4b0;
  bool local_4ac;
  undefined1 local_4a8 [8];
  ForAnyElementType FStack_4a0;
  int local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined4 local_480;
  bool local_47c;
  undefined1 local_478 [8];
  ForAnyElementType FStack_470;
  int local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined4 local_450;
  bool local_44c;
  undefined1 local_448 [8];
  ForAnyElementType FStack_440;
  int local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  bool local_41c;
  undefined1 local_418 [8];
  ForAnyElementType FStack_410;
  int local_408;
  TSharedRef<SAudioMeterWidget,1> local_400;
  TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> local_3f0;
  FArguments local_3c0;
  
  pFVar5 = SAudioMeterWidget::FArguments::FArguments(&local_3c0);
  pFVar5->_Orientation = param_1->_Orientation;
  local_550 = *(undefined8 *)&(param_1->_BackgroundColor).Value.SpecifiedColor.field0_0x0;
  uStack_548 = *(undefined8 *)
                ((longlong)&(param_1->_BackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_53c = (param_1->_BackgroundColor).bIsSet;
  local_540._0_1_ = (param_1->_BackgroundColor).Value.ColorUseRule;
  local_540._1_1_ = (param_1->_BackgroundColor).Value.ColorTableId;
  local_540._2_2_ = *(undefined2 *)&(param_1->_BackgroundColor).Value.field_0x12;
  local_538 = (undefined1  [8])0x0;
  FStack_530.Data = (FScriptContainerElement *)0x0;
  local_528 = 0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_538,
             &(param_1->_BackgroundColor).Getter);
  *(undefined8 *)&(pFVar5->_BackgroundColor).Value.SpecifiedColor.field0_0x0 = local_550;
  *(undefined8 *)((longlong)&(pFVar5->_BackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_548;
  (pFVar5->_BackgroundColor).Value.ColorUseRule = (undefined1)local_540;
  (pFVar5->_BackgroundColor).Value.ColorTableId = local_540._1_1_;
  *(undefined2 *)&(pFVar5->_BackgroundColor).Value.field_0x12 = local_540._2_2_;
  (pFVar5->_BackgroundColor).bIsSet = local_53c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_BackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_538);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_538,
             (FWriteAccessScope *)&local_568);
  if ((local_528 != 0) && (FStack_530.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_530.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_530,0,0,0x10);
    local_528 = 0;
  }
  if (local_558 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_560.ReferenceController,
               (FDestructionSentinel *)&local_568);
  }
  if (FStack_530.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_530.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_538);
  local_520 = *(undefined8 *)&(param_1->_MeterBackgroundColor).Value.SpecifiedColor.field0_0x0;
  uStack_518 = *(undefined8 *)
                ((longlong)&(param_1->_MeterBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_510._0_1_ = (param_1->_MeterBackgroundColor).Value.ColorUseRule;
  local_510._1_1_ = (param_1->_MeterBackgroundColor).Value.ColorTableId;
  local_510._2_2_ = *(undefined2 *)&(param_1->_MeterBackgroundColor).Value.field_0x12;
  local_50c = (param_1->_MeterBackgroundColor).bIsSet;
  local_4f8 = 0;
  local_508 = (undefined1  [8])0x0;
  FStack_500.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_508,
             &(param_1->_MeterBackgroundColor).Getter);
  *(undefined8 *)&(pFVar5->_MeterBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_520;
  *(undefined8 *)((longlong)&(pFVar5->_MeterBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_518;
  (pFVar5->_MeterBackgroundColor).Value.ColorUseRule = (undefined1)local_510;
  (pFVar5->_MeterBackgroundColor).Value.ColorTableId = local_510._1_1_;
  *(undefined2 *)&(pFVar5->_MeterBackgroundColor).Value.field_0x12 = local_510._2_2_;
  (pFVar5->_MeterBackgroundColor).bIsSet = local_50c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_508);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_508,
             (FWriteAccessScope *)&local_568);
  if ((local_4f8 != 0) && (FStack_500.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_500.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_500,0,0,0x10);
    local_4f8 = 0;
  }
  if (local_558 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_560.ReferenceController,
               (FDestructionSentinel *)&local_568);
  }
  if (FStack_500.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_500.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_508);
  local_4f0 = *(undefined8 *)&(param_1->_MeterValueColor).Value.SpecifiedColor.field0_0x0;
  uStack_4e8 = *(undefined8 *)
                ((longlong)&(param_1->_MeterValueColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_4e0._0_1_ = (param_1->_MeterValueColor).Value.ColorUseRule;
  local_4e0._1_1_ = (param_1->_MeterValueColor).Value.ColorTableId;
  local_4e0._2_2_ = *(undefined2 *)&(param_1->_MeterValueColor).Value.field_0x12;
  local_4dc = (param_1->_MeterValueColor).bIsSet;
  local_4c8 = 0;
  local_4d8 = (undefined1  [8])0x0;
  FStack_4d0.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_4d8,
             &(param_1->_MeterValueColor).Getter);
  *(undefined8 *)&(pFVar5->_MeterValueColor).Value.SpecifiedColor.field0_0x0 = local_4f0;
  *(undefined8 *)((longlong)&(pFVar5->_MeterValueColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_4e8;
  (pFVar5->_MeterValueColor).Value.ColorUseRule = (undefined1)local_4e0;
  (pFVar5->_MeterValueColor).Value.ColorTableId = local_4e0._1_1_;
  *(undefined2 *)&(pFVar5->_MeterValueColor).Value.field_0x12 = local_4e0._2_2_;
  (pFVar5->_MeterValueColor).bIsSet = local_4dc;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterValueColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d8,
             (FWriteAccessScope *)&local_568);
  if ((local_4c8 != 0) && (FStack_4d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4d0,0,0,0x10);
    local_4c8 = 0;
  }
  if (local_558 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_560.ReferenceController,
               (FDestructionSentinel *)&local_568);
  }
  if (FStack_4d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4d8);
  local_4c0 = *(undefined8 *)&(param_1->_MeterPeakColor).Value.SpecifiedColor.field0_0x0;
  uStack_4b8 = *(undefined8 *)
                ((longlong)&(param_1->_MeterPeakColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_4b0._0_1_ = (param_1->_MeterPeakColor).Value.ColorUseRule;
  local_4b0._1_1_ = (param_1->_MeterPeakColor).Value.ColorTableId;
  local_4b0._2_2_ = *(undefined2 *)&(param_1->_MeterPeakColor).Value.field_0x12;
  local_4ac = (param_1->_MeterPeakColor).bIsSet;
  local_498 = 0;
  local_4a8 = (undefined1  [8])0x0;
  FStack_4a0.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_4a8,
             &(param_1->_MeterPeakColor).Getter);
  *(undefined8 *)&(pFVar5->_MeterPeakColor).Value.SpecifiedColor.field0_0x0 = local_4c0;
  *(undefined8 *)((longlong)&(pFVar5->_MeterPeakColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_4b8;
  (pFVar5->_MeterPeakColor).Value.ColorUseRule = (undefined1)local_4b0;
  (pFVar5->_MeterPeakColor).Value.ColorTableId = local_4b0._1_1_;
  *(undefined2 *)&(pFVar5->_MeterPeakColor).Value.field_0x12 = local_4b0._2_2_;
  (pFVar5->_MeterPeakColor).bIsSet = local_4ac;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterPeakColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a8,
             (FWriteAccessScope *)&local_568);
  if ((local_498 != 0) && (FStack_4a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4a0,0,0,0x10);
    local_498 = 0;
  }
  if (local_558 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_560.ReferenceController,
               (FDestructionSentinel *)&local_568);
  }
  if (FStack_4a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a8);
  local_490 = *(undefined8 *)&(param_1->_MeterScaleColor).Value.SpecifiedColor.field0_0x0;
  uStack_488 = *(undefined8 *)
                ((longlong)&(param_1->_MeterScaleColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_480._0_1_ = (param_1->_MeterScaleColor).Value.ColorUseRule;
  local_480._1_1_ = (param_1->_MeterScaleColor).Value.ColorTableId;
  local_480._2_2_ = *(undefined2 *)&(param_1->_MeterScaleColor).Value.field_0x12;
  local_47c = (param_1->_MeterScaleColor).bIsSet;
  local_468 = 0;
  local_478 = (undefined1  [8])0x0;
  FStack_470.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_478,
             &(param_1->_MeterScaleColor).Getter);
  *(undefined8 *)&(pFVar5->_MeterScaleColor).Value.SpecifiedColor.field0_0x0 = local_490;
  *(undefined8 *)((longlong)&(pFVar5->_MeterScaleColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_488;
  (pFVar5->_MeterScaleColor).Value.ColorUseRule = (undefined1)local_480;
  (pFVar5->_MeterScaleColor).Value.ColorTableId = local_480._1_1_;
  *(undefined2 *)&(pFVar5->_MeterScaleColor).Value.field_0x12 = local_480._2_2_;
  (pFVar5->_MeterScaleColor).bIsSet = local_47c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterScaleColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_478,
             (FWriteAccessScope *)&local_568);
  if ((local_468 != 0) && (FStack_470.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_470.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_470,0,0,0x10);
    local_468 = 0;
  }
  if (local_558 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_560.ReferenceController,
               (FDestructionSentinel *)&local_568);
  }
  if (FStack_470.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_470.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_478);
  local_460 = *(undefined8 *)&(param_1->_MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0;
  uStack_458 = *(undefined8 *)
                ((longlong)&(param_1->_MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_450._0_1_ = (param_1->_MeterScaleLabelColor).Value.ColorUseRule;
  local_450._1_1_ = (param_1->_MeterScaleLabelColor).Value.ColorTableId;
  local_450._2_2_ = *(undefined2 *)&(param_1->_MeterScaleLabelColor).Value.field_0x12;
  local_44c = (param_1->_MeterScaleLabelColor).bIsSet;
  local_438 = 0;
  local_448 = (undefined1  [8])0x0;
  FStack_440.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_448,
             &(param_1->_MeterScaleLabelColor).Getter);
  *(undefined8 *)&(pFVar5->_MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0 = local_460;
  *(undefined8 *)((longlong)&(pFVar5->_MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_458;
  (pFVar5->_MeterScaleLabelColor).Value.ColorUseRule = (undefined1)local_450;
  (pFVar5->_MeterScaleLabelColor).Value.ColorTableId = local_450._1_1_;
  *(undefined2 *)&(pFVar5->_MeterScaleLabelColor).Value.field_0x12 = local_450._2_2_;
  (pFVar5->_MeterScaleLabelColor).bIsSet = local_44c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterScaleLabelColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_448);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_448,
             (FWriteAccessScope *)&local_568);
  if ((local_438 != 0) && (FStack_440.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_440.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_440,0,0,0x10);
    local_438 = 0;
  }
  if (local_558 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_560.ReferenceController,
               (FDestructionSentinel *)&local_568);
  }
  if (FStack_440.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_440.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_448);
  local_430 = *(undefined8 *)&(param_1->_MeterClippingColor).Value.SpecifiedColor.field0_0x0;
  uStack_428 = *(undefined8 *)
                ((longlong)&(param_1->_MeterClippingColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_420._0_1_ = (param_1->_MeterClippingColor).Value.ColorUseRule;
  local_420._1_1_ = (param_1->_MeterClippingColor).Value.ColorTableId;
  local_420._2_2_ = *(undefined2 *)&(param_1->_MeterClippingColor).Value.field_0x12;
  local_41c = (param_1->_MeterClippingColor).bIsSet;
  local_408 = 0;
  local_418 = (undefined1  [8])0x0;
  FStack_410.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_418,
             &(param_1->_MeterClippingColor).Getter);
  *(undefined8 *)&(pFVar5->_MeterClippingColor).Value.SpecifiedColor.field0_0x0 = local_430;
  *(undefined8 *)((longlong)&(pFVar5->_MeterClippingColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_428;
  (pFVar5->_MeterClippingColor).Value.ColorUseRule = (undefined1)local_420;
  (pFVar5->_MeterClippingColor).Value.ColorTableId = local_420._1_1_;
  *(undefined2 *)&(pFVar5->_MeterClippingColor).Value.field_0x12 = local_420._2_2_;
  (pFVar5->_MeterClippingColor).bIsSet = local_41c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterClippingColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_418);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_418,
             (FWriteAccessScope *)&local_568);
  if ((local_408 != 0) && (FStack_410.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_410.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_410,0,0,0x10);
    local_408 = 0;
  }
  if (local_558 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_560.ReferenceController,
               (FDestructionSentinel *)&local_568);
  }
  if (FStack_410.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_410.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_418);
  pFVar5->_Style = (FAudioMeterWidgetStyle *)param_1->_Style;
  pTVar6 = SAudioMeterPrivate::ConvertMeterChannelInfoAttribute
                     (&local_3f0,&param_1->_MeterChannelInfo);
  pTVar1 = &pFVar5->_MeterChannelInfo;
  if (pTVar1 != pTVar6) {
    pFVar2 = (pTVar1->Value).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->Value).AllocatorInstance.Data = (pTVar6->Value).AllocatorInstance.Data;
    (pTVar6->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->_MeterChannelInfo).Value.ArrayNum = (pTVar6->Value).ArrayNum;
    (pFVar5->_MeterChannelInfo).Value.ArrayMax = (pTVar6->Value).ArrayMax;
    (pTVar6->Value).ArrayNum = 0;
    (pTVar6->Value).ArrayMax = 0;
  }
  (pFVar5->_MeterChannelInfo).bIsSet = pTVar6->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_MeterChannelInfo).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar6->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar6->Getter);
  pvVar3 = *(void **)&(pTVar6->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&pTVar6->Getter);
  pFVar2 = (pTVar6->Value).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *)&local_568,
             "SAudioMeterWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioMeter.cpp"
             ,0x1e,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  if (local_560.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_560.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_560.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->AudioMeterWidget).SharedReferenceCount.ReferenceController;
  (this->AudioMeterWidget).Object = local_568;
  (this->AudioMeterWidget).SharedReferenceCount.ReferenceController = local_560.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>::operator<<=
            ((TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *)&local_568,&local_400,
             pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_400.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_560.ReferenceController);
  SAudioMeterWidget::FArguments::~FArguments(&local_3c0);
  return;
}

// GetMeterChannelInfo @ 14d92fb30

TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
SAudioMeter::GetMeterChannelInfo
          (SAudioMeter *this,
          TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  SAudioMeterWidget *pSVar2;
  FAudioMeterChannelInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined8 *puVar7;
  void *local_18 [2];
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pSVar2 = (this->AudioMeterWidget).Object;
  puVar7 = (undefined8 *)(**(code **)(pSVar2->_padding_ + 0x248))(pSVar2,local_18);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar7 + 1);
  pFVar3 = (FAudioMeterChannelInfo *)*puVar7;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FMeterChannelInfo,FAudioMeterChannelInfo,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar1);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetScaleHeight @ 14d934720

float __thiscall SAudioMeter::GetScaleHeight(SAudioMeter *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = SAudioMeterWidget::GetScaleHeight((this->AudioMeterWidget).Object);
  return fVar3;
}

// OnPaint @ 14d954b80

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SAudioMeter::OnPaint
          (SAudioMeter *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  SAudioMeterWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pSVar1 = (this->AudioMeterWidget).Object;
                    /* WARNING: Could not recover jumptable at 0x00014d954c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(pSVar1->_padding_ + 0x238))(pSVar1,param_1,param_2,param_3);
  return iVar4;
}

// SetBackgroundColor @ 14d968260

void __thiscall SAudioMeter::SetBackgroundColor(SAudioMeter *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_18._0_1_ = param_1->ColorUseRule;
  local_18._1_1_ = param_1->ColorTableId;
  local_18._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SAudioMeterWidget::SetBackgroundColor
            ((this->AudioMeterWidget).Object,(FSlateColor *)&local_28._s_0);
  return;
}

// SetMeterBackgroundColor @ 14d969eb0

void __thiscall SAudioMeter::SetMeterBackgroundColor(SAudioMeter *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_18._0_1_ = param_1->ColorUseRule;
  local_18._1_1_ = param_1->ColorTableId;
  local_18._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SAudioMeterWidget::SetMeterBackgroundColor
            ((this->AudioMeterWidget).Object,(FSlateColor *)&local_28._s_0);
  return;
}

// SetMeterChannelInfo @ 14d96a090

void __thiscall
SAudioMeter::SetMeterChannelInfo
          (SAudioMeter *this,
          TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_1)

{
  SAudioMeterWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->AudioMeterWidget).Object;
  pcVar2 = *(code **)(pSVar1->_padding_ + 0x250);
  pTVar4 = SAudioMeterPrivate::ConvertMeterChannelInfoAttribute
                     ((TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)
                      local_38,param_1);
  (*pcVar2)(pSVar1,pTVar4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  if ((void *)local_20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  return;
}

// SetMeterClippingColor @ 14d96a410

void __thiscall SAudioMeter::SetMeterClippingColor(SAudioMeter *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_18._0_1_ = param_1->ColorUseRule;
  local_18._1_1_ = param_1->ColorTableId;
  local_18._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SAudioMeterWidget::SetMeterClippingColor
            ((this->AudioMeterWidget).Object,(FSlateColor *)&local_28._s_0);
  return;
}

// SetMeterPeakColor @ 14d96a540

void __thiscall SAudioMeter::SetMeterPeakColor(SAudioMeter *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_18._0_1_ = param_1->ColorUseRule;
  local_18._1_1_ = param_1->ColorTableId;
  local_18._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SAudioMeterWidget::SetMeterPeakColor
            ((this->AudioMeterWidget).Object,(FSlateColor *)&local_28._s_0);
  return;
}

// SetMeterScaleColor @ 14d96a670

void __thiscall SAudioMeter::SetMeterScaleColor(SAudioMeter *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_18._0_1_ = param_1->ColorUseRule;
  local_18._1_1_ = param_1->ColorTableId;
  local_18._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SAudioMeterWidget::SetMeterScaleColor
            ((this->AudioMeterWidget).Object,(FSlateColor *)&local_28._s_0);
  return;
}

// SetMeterScaleLabelColor @ 14d96a7a0

void __thiscall SAudioMeter::SetMeterScaleLabelColor(SAudioMeter *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_18._0_1_ = param_1->ColorUseRule;
  local_18._1_1_ = param_1->ColorTableId;
  local_18._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SAudioMeterWidget::SetMeterScaleLabelColor
            ((this->AudioMeterWidget).Object,(FSlateColor *)&local_28._s_0);
  return;
}

// SetMeterValueColor @ 14d96a8d0

void __thiscall SAudioMeter::SetMeterValueColor(SAudioMeter *this,FSlateColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  local_18._0_1_ = param_1->ColorUseRule;
  local_18._1_1_ = param_1->ColorTableId;
  local_18._2_2_ = *(undefined2 *)&param_1->field_0x12;
  SAudioMeterWidget::SetMeterValueColor
            ((this->AudioMeterWidget).Object,(FSlateColor *)&local_28._s_0);
  return;
}

// SetOrientation @ 14d96ad10

void __thiscall SAudioMeter::SetOrientation(SAudioMeter *this,EOrientation param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->AudioMeterWidget).Object == (SAudioMeterWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SAudioMeterWidget::SetOrientation((this->AudioMeterWidget).Object,param_1);
  return;
}

