// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// GetDisplayName @ 14378ffc0

FText * __thiscall
Chaos::VisualDebugger::FChaosVDOptionalDataChannel::GetDisplayName
          (FChaosVDOptionalDataChannel *this)

{
  return (this->LocalizableChannelName).Object;
}

// Initialize @ 143796ca0

void __thiscall
Chaos::VisualDebugger::FChaosVDOptionalDataChannel::Initialize(FChaosVDOptionalDataChannel *this)

{
  FChaosVDOptionalDataChannel *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FChaosVDDataChannelsManager *pFVar5;
  FChaosVDOptionalDataChannel *pFVar6;
  FChaosVDOptionalDataChannel *pFVar7;
  bool bVar8;
  TPairInitializer<FName_&&,TSharedPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>_&&>
  local_res8;
  FChaosVDOptionalDataChannel *local_38;
  FChaosVDOptionalDataChannel *local_30;
  TSharedPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1> **local_28;
  FChaosVDOptionalDataChannel **local_20;
  
  pFVar5 = FChaosVDDataChannelsManager::Get();
  pFVar1 = (FChaosVDOptionalDataChannel *)this->_padding_;
  pFVar7 = (FChaosVDOptionalDataChannel *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FChaosVDOptionalDataChannel *)0x0) {
    iVar3 = (int)pFVar1->_padding_;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_143796ce5;
      LOCK();
      iVar4 = (int)pFVar1->_padding_;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&pFVar1->_padding_ = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (FChaosVDOptionalDataChannel *)this->_padding_;
    pFVar6 = pFVar1;
  }
LAB_143796ce5:
  if ((pFVar7 != this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pFVar7 == (FChaosVDOptionalDataChannel *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar6 != (FChaosVDOptionalDataChannel *)0x0) {
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
    UNLOCK();
  }
  local_res8.Value =
       *(TSharedPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1> **)
        (pFVar7->ChannelId).Object;
  local_28 = &local_res8.Value;
  local_20 = &local_38;
  local_38 = pFVar7;
  local_30 = pFVar6;
  TSet<TTuple<FName,TSharedPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_&&,TSharedPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>_&&>_>
            ((TSet<TTuple<FName,TSharedPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>,0>,FDefaultSetAllocator>
              *)&pFVar5->AvailableChannels,&local_res8,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return;
}

// SetChannelEnabled @ 1437ac790

void __thiscall
Chaos::VisualDebugger::FChaosVDOptionalDataChannel::SetChannelEnabled
          (FChaosVDOptionalDataChannel *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FChaosVDOptionalDataChannel *pFVar3;
  FChaosVDOptionalDataChannel *pFVar4;
  code *pcVar5;
  int iVar6;
  FChaosVDDataChannelsManager *this_00;
  FChaosVDOptionalDataChannel *pFVar7;
  FChaosVDOptionalDataChannel *pFVar8;
  bool bVar9;
  TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1> local_18;
  
  LOCK();
  this->bIsEnabled = (atomic<bool>)param_1;
  UNLOCK();
  this_00 = FChaosVDDataChannelsManager::Get();
  pFVar3 = (FChaosVDOptionalDataChannel *)this->_padding_;
  pFVar4 = (FChaosVDOptionalDataChannel *)this->_padding_;
  pFVar7 = pFVar3;
  pFVar8 = (FChaosVDOptionalDataChannel *)0x0;
  if (pFVar3 != (FChaosVDOptionalDataChannel *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar2 = (int)pFVar3->_padding_;
    do {
      pFVar7 = (FChaosVDOptionalDataChannel *)0x0;
      pFVar8 = (FChaosVDOptionalDataChannel *)0x0;
      if (iVar2 == 0) break;
      LOCK();
      iVar6 = (int)pFVar3->_padding_;
      bVar9 = iVar2 == iVar6;
      if (bVar9) {
        *(int *)&pFVar3->_padding_ = iVar2 + 1;
        iVar6 = iVar2;
      }
      UNLOCK();
      pFVar7 = pFVar3;
      pFVar8 = pFVar4;
      iVar2 = iVar6;
    } while (!bVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  if ((pFVar8 != this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Pin().Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x6c3,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_18.Object = pFVar4;
  local_18.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
  if (pFVar3 == (FChaosVDOptionalDataChannel *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>),FDefaultDelegateUserPolicy>,TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,&local_18);
  }
  else {
    LOCK();
    piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>),FDefaultDelegateUserPolicy>,TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,&local_18);
    LOCK();
    piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(pFVar3->_padding_ + 8))(pFVar3,1);
    }
  }
  return;
}

