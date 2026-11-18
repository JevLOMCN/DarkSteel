// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FModelNotifier @ 1474367c0

void __thiscall IAnimationDataModel::FModelNotifier::~FModelNotifier(FModelNotifier *this)

{
  return;
}

// Notify @ 14746b8d0

void __thiscall
IAnimationDataModel::FModelNotifier::Notify(FModelNotifier *this,EAnimDataModelNotifyType param_1)

{
  FAnimDataModelModifiedDynamicEvent *this_00;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  IAnimationDataModel *pIVar5;
  IAnimationDataModel *pIVar6;
  schar local_res8 [8];
  EAnimDataModelNotifyType local_res10 [8];
  FAnimDataModelNotifPayload local_48;
  UObject *local_38 [2];
  FReadAccessScope local_28;
  
  local_res10[0] = param_1;
  local_48.Struct = FEmptyPayload::StaticStruct();
  pIVar6 = (IAnimationDataModel *)0x0;
  local_48.Data = local_res8;
  pIVar5 = pIVar6;
  if (*(longlong *)&this->DataModel != 0) {
    pIVar5 = *(IAnimationDataModel **)&(this->DataModel).field_0x8;
  }
  (**(code **)((longlong)*pIVar5 + 0x188))(pIVar5,local_res10,&local_48);
  if (*(longlong *)&this->DataModel != 0) {
    pIVar6 = *(IAnimationDataModel **)&(this->DataModel).field_0x8;
  }
  TMulticastDelegate<void___cdecl(enum_EAnimDataModelNotifyType_const_&,IAnimationDataModel_*,FAnimDataModelNotifPayload_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(this->ModifiedEvent,local_res10,pIVar6,&local_48);
  this_00 = this->ModifiedEventDynamic;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  iVar4 = *(int *)&this_00->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar4) {
    local_38[0] = *(UObject **)&this->DataModel;
    pTVar1 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this->ModifiedEventDynamic;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_38[0]);
    }
    local_38[1] = *(UObject **)&(this->DataModel).field_0x8;
    FAnimDataModelModifiedDynamicEvent_DelegateWrapper
              (pTVar1,local_res10[0],(TScriptInterface<IAnimationDataModel> *)local_38,&local_48);
  }
  iVar4 = this->BracketCounter;
  if (local_res10[0] == BracketOpened) {
    iVar4 = iVar4 + 1;
    this->BracketCounter = iVar4;
  }
  if (local_res10[0] == BracketClosed) {
    iVar4 = iVar4 + -1;
    this->BracketCounter = iVar4;
  }
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BracketCounter >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimData\\IAnimationDataModel.h"
                         ,0x1e2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

