// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 3

// FBindOperation<UE::Online::FCreateLobby><UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)> @ 14efd2ef0

FBindOperation<UE::Online::FCreateLobby> * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FCreateLobby>::
FBindOperation<UE::Online::FCreateLobby><UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FCreateLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FCreateLobby::Params_&&)>
          (FBindOperation<UE::Online::FCreateLobby> *this,FLobbiesCommon *param_1,
          pmf_9da5d30d *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FBindOperation<UE::Online::FCreateLobby> *pFVar7;
  
  pTVar6 = ::operator_new(0x30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    (this->Impl).Object = (FBindImplBase *)0x10;
    (this->Impl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__FBindImpl_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCreateLobby_Online_UE___23___QEAUParams_FCreateLobby_23__Z___FBindOperation_UFCreateLobby_Online_UE___Private_Online_UE___00_SharedPointerInternals__6B_
    ;
    lVar2 = *(longlong *)param_2;
    uVar3 = *(undefined4 *)&param_2->field_0x8;
    uVar4 = *(undefined4 *)&param_2->field_0xc;
    *(FLobbiesCommon **)&pTVar6[1].SharedReferenceCount = param_1;
    pTVar6[1]._padding_ =
         (longlong)
         &
         ___7__FBindImpl_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFCreateLobby_Online_UE___23___QEAUParams_FCreateLobby_23__Z___FBindOperation_UFCreateLobby_Online_UE___Private_Online_UE__6B_
    ;
    pTVar6[2]._padding_ = lVar2;
    pTVar6[2].SharedReferenceCount = (atomic<int>)uVar3;
    pTVar6[2].WeakReferenceCount = (atomic<int>)uVar4;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FBindOperation<UE::Online::FCreateLobby> *)(*pcVar1)();
        return pFVar7;
      }
    }
    (this->Impl).Object = (FBindImplBase *)(pTVar6 + 1);
    (this->Impl).SharedReferenceCount.ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// FBindOperation<UE::Online::FJoinLobby><UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FJoinLobby::Params_&&)> @ 14efd2fc0

FBindOperation<UE::Online::FJoinLobby> * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FJoinLobby>::
FBindOperation<UE::Online::FJoinLobby><UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FJoinLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FJoinLobby::Params_&&)>
          (FBindOperation<UE::Online::FJoinLobby> *this,FLobbiesCommon *param_1,
          pmf_92e95831 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FBindOperation<UE::Online::FJoinLobby> *pFVar7;
  
  pTVar6 = ::operator_new(0x30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    (this->Impl).Object = (FBindImplBase *)0x10;
    (this->Impl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__FBindImpl_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFJoinLobby_Online_UE___23___QEAUParams_FJoinLobby_23__Z___FBindOperation_UFJoinLobby_Online_UE___Private_Online_UE___00_SharedPointerInternals__6B_
    ;
    lVar2 = *(longlong *)param_2;
    uVar3 = *(undefined4 *)&param_2->field_0x8;
    uVar4 = *(undefined4 *)&param_2->field_0xc;
    *(FLobbiesCommon **)&pTVar6[1].SharedReferenceCount = param_1;
    pTVar6[1]._padding_ =
         (longlong)
         &
         ___7__FBindImpl_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFJoinLobby_Online_UE___23___QEAUParams_FJoinLobby_23__Z___FBindOperation_UFJoinLobby_Online_UE___Private_Online_UE__6B_
    ;
    pTVar6[2]._padding_ = lVar2;
    pTVar6[2].SharedReferenceCount = (atomic<int>)uVar3;
    pTVar6[2].WeakReferenceCount = (atomic<int>)uVar4;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FBindOperation<UE::Online::FJoinLobby> *)(*pcVar1)();
        return pFVar7;
      }
    }
    (this->Impl).Object = (FBindImplBase *)(pTVar6 + 1);
    (this->Impl).SharedReferenceCount.ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// FBindOperation<UE::Online::FLeaveLobby><UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FLeaveLobby::Params_&&)> @ 14efd3090

FBindOperation<UE::Online::FLeaveLobby> * __thiscall
UE::Online::Private::FBindOperation<UE::Online::FLeaveLobby>::
FBindOperation<UE::Online::FLeaveLobby><UE::Online::FLobbiesCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FLeaveLobby>_(__cdecl_UE::Online::FLobbiesCommon::*)(UE::Online::FLeaveLobby::Params_&&)>
          (FBindOperation<UE::Online::FLeaveLobby> *this,FLobbiesCommon *param_1,
          pmf_cfbb3271 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FBindOperation<UE::Online::FLeaveLobby> *pFVar7;
  
  pTVar6 = ::operator_new(0x30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    (this->Impl).Object = (FBindImplBase *)0x10;
    (this->Impl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__FBindImpl_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFLeaveLobby_Online_UE___23___QEAUParams_FLeaveLobby_23__Z___FBindOperation_UFLeaveLobby_Online_UE___Private_Online_UE___00_SharedPointerInternals__6B_
    ;
    lVar2 = *(longlong *)param_2;
    uVar3 = *(undefined4 *)&param_2->field_0x8;
    uVar4 = *(undefined4 *)&param_2->field_0xc;
    *(FLobbiesCommon **)&pTVar6[1].SharedReferenceCount = param_1;
    pTVar6[1]._padding_ =
         (longlong)
         &
         ___7__FBindImpl_VFLobbiesCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFLeaveLobby_Online_UE___23___QEAUParams_FLeaveLobby_23__Z___FBindOperation_UFLeaveLobby_Online_UE___Private_Online_UE__6B_
    ;
    pTVar6[2]._padding_ = lVar2;
    pTVar6[2].SharedReferenceCount = (atomic<int>)uVar3;
    pTVar6[2].WeakReferenceCount = (atomic<int>)uVar4;
    if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FBindOperation<UE::Online::FLeaveLobby> *)(*pcVar1)();
        return pFVar7;
      }
    }
    (this->Impl).Object = (FBindImplBase *)(pTVar6 + 1);
    (this->Impl).SharedReferenceCount.ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

