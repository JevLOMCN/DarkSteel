// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// SetValue @ 14e6a7c20

void __thiscall
TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>::SetValue
          (TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> *this,
          TOptional<UE::Interchange::FAnimationPayloadData> *param_1)

{
  TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->State).Object ==
      (TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->State).Object ==
        (TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> *)0x0) {
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
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->_padding_ != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this_00->Result).Pad[0x98] = '\0';
  bVar2 = param_1->bIsSet;
  (this_00->Result).Pad[0x98] = bVar2;
  if (bVar2 != false) {
    UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
              ((FAnimationPayloadData *)&this_00->Result,&param_1->TypedValue);
  }
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

// SetValue @ 14e6a7d00

void __thiscall
TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>::SetValue
          (TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> *this,
          TOptional<UE::Interchange::FAnimationPayloadData> *param_1)

{
  TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->State).Object ==
      (TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->State).Object ==
        (TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> *)0x0) {
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
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->_padding_ != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this_00->Result).Pad[0x98] = '\0';
  bVar2 = param_1->bIsSet;
  (this_00->Result).Pad[0x98] = bVar2;
  if (bVar2 != false) {
    UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
              ((FAnimationPayloadData *)&this_00->Result,&param_1->TypedValue);
  }
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

// SetValue @ 14e6a7de0

void __thiscall
TPromise<TOptional<UE::Interchange::FMeshPayloadData>_>::SetValue
          (TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *this,
          TOptional<UE::Interchange::FMeshPayloadData> *param_1)

{
  TFutureState<TOptional<UE::Interchange::FMeshPayloadData>_> *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->State).Object == (TFutureState<TOptional<UE::Interchange::FMeshPayloadData>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->State).Object == (TFutureState<TOptional<UE::Interchange::FMeshPayloadData>_> *)0x0)
    {
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
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this_00->Result).Pad[0x340] = '\0';
  bVar2 = param_1->bIsSet;
  (this_00->Result).Pad[0x340] = bVar2;
  if (bVar2 != false) {
    UE::Interchange::FMeshPayloadData::FMeshPayloadData
              ((FMeshPayloadData *)&this_00->Result,&param_1->TypedValue);
  }
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

