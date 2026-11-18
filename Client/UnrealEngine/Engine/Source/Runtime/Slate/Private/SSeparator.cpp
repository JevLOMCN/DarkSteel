// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ComputeDesiredSize @ 1428e1a30

TVector2<double> * __thiscall
SSeparator::ComputeDesiredSize
          (SSeparator *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  double dVar2;
  
  dVar2 = __real_4030000000000000;
  fVar1 = this->Thickness;
  if (this->Orientation == Orient_Horizontal) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = __real_4030000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  return __return_storage_ptr__;
}

// Construct @ 142906240

void __thiscall SSeparator::Construct(SSeparator *this,FArguments *param_1)

{
  FArguments *pFVar1;
  undefined1 local_448 [8];
  ForAnyElementType FStack_440;
  ulonglong local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  bool local_41c;
  undefined1 local_418 [8];
  ForAnyElementType FStack_410;
  int local_408;
  FDestructionSentinel local_400;
  FArguments local_3e8;
  
  pFVar1 = SBorder::FArguments::FArguments(&local_3e8);
  local_448 = (undefined1  [8])0x0;
  FStack_440.Data = (FScriptContainerElement *)0x0;
  local_438 = 0;
  (pFVar1->_BorderImage).Value = param_1->_SeparatorImage;
  (pFVar1->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_448);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_448,
             (FWriteAccessScope *)&local_400);
  if (((int)local_438 != 0) && (FStack_440.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_440.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_440,0,0,0x10);
    local_438 = local_438 & 0xffffffff00000000;
  }
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  if (FStack_440.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_440.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_448);
  pFVar1 = SBorder::FArguments::Padding(pFVar1,0.0);
  local_420._0_1_ = (param_1->_ColorAndOpacity).Value.ColorUseRule;
  local_420._1_1_ = (param_1->_ColorAndOpacity).Value.ColorTableId;
  local_420._2_2_ = *(undefined2 *)&(param_1->_ColorAndOpacity).Value.field_0x12;
  local_430 = *(undefined8 *)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  uStack_428 = *(undefined8 *)
                ((longlong)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  local_41c = (param_1->_ColorAndOpacity).bIsSet;
  local_408 = 0;
  local_418 = (undefined1  [8])0x0;
  FStack_410.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_418,
             &(param_1->_ColorAndOpacity).Getter);
  *(undefined8 *)&(pFVar1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_430;
  *(undefined8 *)((longlong)&(pFVar1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_428;
  (pFVar1->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_420;
  (pFVar1->_BorderBackgroundColor).Value.ColorTableId = local_420._1_1_;
  *(undefined2 *)&(pFVar1->_BorderBackgroundColor).Value.field_0x12 = local_420._2_2_;
  (pFVar1->_BorderBackgroundColor).bIsSet = local_41c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_418);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_418,
             (FWriteAccessScope *)&local_400);
  if ((local_408 != 0) && (FStack_410.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_410.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_410,0,0,0x10);
    local_408 = 0;
  }
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  if (FStack_410.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_410.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_418);
  SBorder::Construct((SBorder *)this,pFVar1);
  SBorder::FArguments::~FArguments(&local_3e8);
  this->Orientation = param_1->_Orientation;
  this->Thickness = param_1->_Thickness;
  return;
}

