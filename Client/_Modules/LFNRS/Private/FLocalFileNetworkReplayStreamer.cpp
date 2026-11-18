// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 159

// <lambda_invoker_cdecl> @ 146c8afe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FLocalFileNetworkReplayStreamer::RefreshHeader'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  if (5 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)&PTR_u_FLocalFileNetwo_15144ee10,
               (FLogCategoryBase *)&LogLocalFileReplay);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 146c8b010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l26::<lambda_1>::<lambda_invoker_cdecl>
          (void)

{
  if (5 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)&PTR_u_FLocalFileNetwo_15144d4c8,
               (FLogCategoryBase *)&LogLocalFileReplay);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 146c8b040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FLocalFileNetworkReplayStreamer::StopStreaming'::__l2::<lambda_3>::<lambda_invoker_cdecl>(void)

{
  if (5 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)&PTR_u_FLocalFileNetwo_15144bc80,
               (FLogCategoryBase *)&LogLocalFileReplay);
    return;
  }
  return;
}

// AddCachedFileRequestToQueue<FGotoResult> @ 146c8b150

void __thiscall
FLocalFileNetworkReplayStreamer::AddCachedFileRequestToQueue<FGotoResult>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,int param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)> *param_4)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x180);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericCachedLocalFileRequest_UFGotoResult_____00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)
               (pTVar8 + 1),&local_38,param_1,param_3,param_4);
    *(int *)&pTVar8[0x17]._padding_ = param_2;
    pTVar8[1]._padding_ = (longlong)&___7__TGenericCachedLocalFileRequest_UFGotoResult____6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8b2bb;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8b2bb:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddCachedFileRequestToQueue<FStreamingResultBase> @ 146c8b3e0

void __thiscall
FLocalFileNetworkReplayStreamer::AddCachedFileRequestToQueue<FStreamingResultBase>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,int param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FStreamingResultBase>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FStreamingResultBase>_&)> *param_4)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x170);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericCachedLocalFileRequest_UFStreamingResultBase_____00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *
               )(pTVar8 + 1),&local_38,param_1,param_3,param_4);
    *(int *)&pTVar8[0x16]._padding_ = param_2;
    pTVar8[1]._padding_ =
         (longlong)&___7__TGenericCachedLocalFileRequest_UFStreamingResultBase____6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8b54b;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8b54b:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult> @ 146c8b670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::
AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)> *param_3)

{
  TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_98 [32];
  TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> local_78;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>(&local_78,param_2)
  ;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *)
            (local_30 + 1);
  *local_30 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFRenameReplayResult___ZUFDefaultDelegateUserPolicy____UFRenameReplayResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFRenameReplayResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFRenameReplayResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>(this_00,&local_78)
  ;
  if (this_00 !=
      (TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRenameReplayResult>_&>
                  ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FRenameReplayResult>_>
            (this,param_1,param_3,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)> *)local_58
            );
  if (local_58[0] != (code *)0x0) {
    ppcVar1 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar1 = local_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_78);
  return;
}

// AddGenericRequestToQueue<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_> @ 146c8b760

void __thiscall
FLocalFileNetworkReplayStreamer::
AddGenericRequestToQueue<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&)>
          *param_2,TFunction<void___cdecl(TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&)>
                   *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x160);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult_______00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
                *)(pTVar8 + 1),&local_38,param_1,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8b8ac;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8b8ac:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGenericRequestToQueue<TLocalFileRequestCommonData<FDownloadHeaderResult>_> @ 146c8b9c0

void __thiscall
FLocalFileNetworkReplayStreamer::
AddGenericRequestToQueue<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FDownloadHeaderResult>_&)> *param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FDownloadHeaderResult>_&)> *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x160);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult_______00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
                *)(pTVar8 + 1),&local_38,param_1,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8bb0c;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8bb0c:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGenericRequestToQueue<TLocalFileRequestCommonData<FEnumerateEventsResult>_> @ 146c8bc20

void __thiscall
FLocalFileNetworkReplayStreamer::
AddGenericRequestToQueue<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateEventsResult>_&)> *param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateEventsResult>_&)> *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x170);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult_______00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
                *)(pTVar8 + 1),&local_38,param_1,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8bd6c;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8bd6c:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGenericRequestToQueue<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> @ 146c8be80

void __thiscall
FLocalFileNetworkReplayStreamer::
AddGenericRequestToQueue<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateStreamsResult>_&)> *param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateStreamsResult>_&)> *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x180);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult_______00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
                *)(pTVar8 + 1),&local_38,param_1,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8bfcc;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8bfcc:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGenericRequestToQueue<TLocalFileRequestCommonData<FGotoResult>_> @ 146c8c0e0

void __thiscall
FLocalFileNetworkReplayStreamer::AddGenericRequestToQueue<TLocalFileRequestCommonData<FGotoResult>_>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)> *param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)> *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x170);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult_______00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)
               (pTVar8 + 1),&local_38,param_1,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8c22c;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8c22c:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGenericRequestToQueue<TLocalFileRequestCommonData<FKeepReplayResult>_> @ 146c8c340

void __thiscall
FLocalFileNetworkReplayStreamer::
AddGenericRequestToQueue<TLocalFileRequestCommonData<FKeepReplayResult>_>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FKeepReplayResult>_&)> *param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FKeepReplayResult>_&)> *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x170);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult_______00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *)
               (pTVar8 + 1),&local_38,param_1,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8c48c;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8c48c:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGenericRequestToQueue<TLocalFileRequestCommonData<FRenameReplayResult>_> @ 146c8c5a0

void __thiscall
FLocalFileNetworkReplayStreamer::
AddGenericRequestToQueue<TLocalFileRequestCommonData<FRenameReplayResult>_>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)> *param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)> *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x160);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult_______00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *)
               (pTVar8 + 1),&local_38,param_1,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8c6ec;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8c6ec:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGenericRequestToQueue<TLocalFileRequestCommonData<FRequestEventDataResult>_> @ 146c8c800

void __thiscall
FLocalFileNetworkReplayStreamer::
AddGenericRequestToQueue<TLocalFileRequestCommonData<FRequestEventDataResult>_>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventDataResult>_&)> *param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventDataResult>_&)> *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x170);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult_______00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
                *)(pTVar8 + 1),&local_38,param_1,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8c94c;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8c94c:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGenericRequestToQueue<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_> @ 146c8ca60

void __thiscall
FLocalFileNetworkReplayStreamer::
AddGenericRequestToQueue<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventGroupDataResult>_&)>
          *param_2,TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventGroupDataResult>_&)>
                   *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x180);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult_______00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
                *)(pTVar8 + 1),&local_38,param_1,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8cbac;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8cbac:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGenericRequestToQueue<TLocalFileRequestCommonData<FStartStreamingResult>_> @ 146c8ccc0

void __thiscall
FLocalFileNetworkReplayStreamer::
AddGenericRequestToQueue<TLocalFileRequestCommonData<FStartStreamingResult>_>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)> *param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)> *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FLocalFileNetworkReplayStreamer,1> local_38;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar7 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                     ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                      &local_28);
  pTVar8 = ::operator_new(0x160);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult_______00_SharedPointerInternals__6B_
    ;
    local_38.Object = pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::
    TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
              ((TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
                *)(pTVar8 + 1),&local_38,param_1,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = pTVar8 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_146c8ce0c;
    }
  }
  if (((pTVar9[2]._padding_ == 0) || (*(longlong *)&pTVar9[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9[2]._padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9[2].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_146c8ce0c:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  local_48 = pTVar9;
  local_40 = pTVar8;
  if ((pFVar10 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar10 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddGenericRequestToQueue<enum_ELocalFileReplayResult> @ 146c8cf20

void __thiscall
FLocalFileNetworkReplayStreamer::AddGenericRequestToQueue<enum_ELocalFileReplayResult>
          (FLocalFileNetworkReplayStreamer *this,Type param_1,
          TFunction<void___cdecl(ELocalFileReplayResult_&)> *param_2,
          TFunction<void___cdecl(ELocalFileReplayResult_&)> *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FLocalFileNetworkReplayStreamer *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar10 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                      ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                       &local_28);
  pTVar11 = ::operator_new(0xb0);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult_____00_SharedPointerInternals__6B_
    ;
    pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar10->Object;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11[1]._padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
      *(FLocalFileNetworkReplayStreamer **)&pTVar11[1].SharedReferenceCount = pFVar3;
      pTVar11[2]._padding_ = 0;
    }
    else {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11[1]._padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
      *(FLocalFileNetworkReplayStreamer **)&pTVar11[1].SharedReferenceCount = pFVar3;
      pTVar11[2]._padding_ = (longlong)pTVar12;
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar11[2].SharedReferenceCount = (atomic<int>)param_1;
    pTVar11[1]._padding_ =
         (longlong)&___7__TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____6B_;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[4]._padding_ = 0;
    pTVar11[5]._padding_ = *(longlong *)param_2;
    uVar6 = *(undefined4 *)&param_2->field_0x2c;
    pTVar11[7].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_2->field_0x28;
    pTVar11[7].WeakReferenceCount = (atomic<int>)uVar6;
    *(undefined8 *)&param_2->field_0x28 = 0;
    uVar6 = *(undefined4 *)&param_2->field_0x18;
    uVar7 = *(undefined4 *)&param_2->field_0x1c;
    pTVar11[6]._padding_ = *(longlong *)&param_2->field_0x10;
    pTVar11[6].SharedReferenceCount = (atomic<int>)uVar6;
    pTVar11[6].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar11[7]._padding_ = *(longlong *)&param_2->field_0x20;
    if (pTVar11[5]._padding_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    pTVar11[8]._padding_ = *(longlong *)param_3;
    uVar6 = *(undefined4 *)&param_3->field_0x2c;
    pTVar11[10].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_3->field_0x28;
    pTVar11[10].WeakReferenceCount = (atomic<int>)uVar6;
    *(undefined8 *)&param_3->field_0x28 = 0;
    uVar6 = *(undefined4 *)&param_3->field_0x18;
    uVar7 = *(undefined4 *)&param_3->field_0x1c;
    pTVar11[9]._padding_ = *(longlong *)&param_3->field_0x10;
    pTVar11[9].SharedReferenceCount = (atomic<int>)uVar6;
    pTVar11[9].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar11[10]._padding_ = *(longlong *)&param_3->field_0x20;
    if (pTVar11[8]._padding_ != 0) {
      *(undefined8 *)param_3 = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    pTVar12 = pTVar11 + 1;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_146c8d0f2;
    }
  }
  if (((pTVar12[2]._padding_ == 0) || (*(longlong *)&pTVar12[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar12[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12[2]._padding_ = (longlong)pTVar12;
    if (pTVar11 != *(TReferenceControllerBase<1> **)&pTVar12[2].SharedReferenceCount) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pTVar12[2].SharedReferenceCount;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar12[2].SharedReferenceCount = pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_146c8d0f2:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar13 = (pTVar2->AllocatorInstance).Data;
  local_38 = pTVar12;
  local_30 = pTVar11;
  if ((pFVar13 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar13 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar9 + 1;
  pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar13 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar13 + 8) = local_30;
  local_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// <lambda_1> @ 146c8dfe0

<lambda_1> * __thiscall
`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  *(FLocalFileNetworkReplayStreamer **)this = param_1->__this;
  ::FString::FString((FString *)((longlong)this + 8),&param_1->Name);
  ::FString::FString((FString *)((longlong)this + 0x18),&param_1->Group);
  *(uint *)((longlong)this + 0x28) = param_1->TimeInMS;
  ::FString::FString((FString *)((longlong)this + 0x30),&param_1->Meta);
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x48) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x4c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x4c));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2);
  }
  return this;
}

// <lambda_1> @ 146c8e0a0

<lambda_1> * __thiscall
`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  *(FLocalFileNetworkReplayStreamer **)this = param_1->__this;
  *(uint *)((longlong)this + 8) = param_1->CheckpointTimeInMS;
  *(int *)((longlong)this + 0xc) = param_1->TotalLengthInMS;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->CheckpointData).ArrayNum;
  _Src = (param_1->CheckpointData).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2);
  }
  return this;
}

// <lambda_1> @ 146c8e140

<lambda_1> * __thiscall
`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x18);
  *(FLocalFileNetworkReplayStreamer **)this = param_1->__this;
  *(uint *)((longlong)this + 8) = param_1->StreamChunkStartMS;
  *(uint *)((longlong)this + 0xc) = param_1->StreamChunkEndMS;
  *(int *)((longlong)this + 0x10) = param_1->TotalLengthInMS;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->StreamData).ArrayNum;
  _Src = (param_1->StreamData).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x20) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x24));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2);
  }
  return this;
}

// <lambda_1> @ 146c8e1e0

<lambda_1> * __thiscall
`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 8);
  *(FLocalFileNetworkReplayStreamer **)this = param_1->__this;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->HeaderData).ArrayNum;
  _Src = (param_1->HeaderData).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x10) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x14) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x14));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2);
  }
  return this;
}

// <lambda_3> @ 146c8e270

<lambda_3> * __thiscall
`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_3>::<lambda_3>
          (void *this,<lambda_3> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  *(FLocalFileNetworkReplayStreamer **)this = param_1->__this;
  FStartStreamingParameters::FStartStreamingParameters
            ((FStartStreamingParameters *)((longlong)this + 8),&param_1->Params);
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x68);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->EncryptionKey).ArrayNum;
  _Src = (param_1->EncryptionKey).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x70) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x74) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x74));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2);
  }
  return this;
}

// FLocalFileNetworkReplayStreamer @ 146c90740

FLocalFileNetworkReplayStreamer * __thiscall
FLocalFileNetworkReplayStreamer::FLocalFileNetworkReplayStreamer
          (FLocalFileNetworkReplayStreamer *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  FString *pFVar2;
  longlong lVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  
  INetworkReplayStreamer::INetworkReplayStreamer((INetworkReplayStreamer *)this);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->RequestCache = 0;
  *(undefined8 *)&(this->RequestCache).field_0x8 = 0;
  *(undefined8 *)&(this->RequestCache).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FLocalFileNetworkReplayStreamer__6B_;
  *(undefined4 *)&(this->RequestCache).field_0x28 = 0;
  *(undefined4 *)&(this->RequestCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestCache).field_0x34 = 0;
  *(undefined8 *)&(this->RequestCache).field_0x40 = 0;
  *(undefined4 *)&(this->RequestCache).field_0x48 = 0;
  *(undefined8 *)&this->DeltaCheckpointCache = 0;
  *(undefined8 *)&(this->DeltaCheckpointCache).field_0x8 = 0;
  *(undefined8 *)&(this->DeltaCheckpointCache).field_0x20 = 0;
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x28 = 0;
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x34 = 0;
  *(undefined8 *)&(this->DeltaCheckpointCache).field_0x40 = 0;
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x48 = 0;
  (this->CurrentReplayInfo).LengthInMS = 0;
  (this->CurrentReplayInfo).NetworkVersion = 0;
  (this->CurrentReplayInfo).Changelist = 0;
  (this->CurrentReplayInfo).FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).FriendlyName.Data.ArrayNum = 0;
  (this->CurrentReplayInfo).FriendlyName.Data.ArrayMax = 0;
  (this->CurrentReplayInfo).Timestamp.Ticks = 0;
  (this->CurrentReplayInfo).TotalDataSizeInBytes = 0;
  (this->CurrentReplayInfo).bIsLive = false;
  (this->CurrentReplayInfo).bIsValid = false;
  (this->CurrentReplayInfo).bCompressed = false;
  (this->CurrentReplayInfo).bEncrypted = false;
  (this->CurrentReplayInfo).EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).EncryptionKey.ArrayNum = 0;
  (this->CurrentReplayInfo).EncryptionKey.ArrayMax = 0;
  (this->CurrentReplayInfo).HeaderChunkIndex = -1;
  (this->CurrentReplayInfo).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).Chunks.ArrayNum = 0;
  (this->CurrentReplayInfo).Chunks.ArrayMax = 0;
  (this->CurrentReplayInfo).Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).Checkpoints.ArrayNum = 0;
  (this->CurrentReplayInfo).Checkpoints.ArrayMax = 0;
  (this->CurrentReplayInfo).Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).Events.ArrayNum = 0;
  (this->CurrentReplayInfo).Events.ArrayMax = 0;
  (this->CurrentReplayInfo).DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).DataChunks.ArrayNum = 0;
  (this->CurrentReplayInfo).DataChunks.ArrayMax = 0;
  (this->StreamTimeRange).Min = 0;
  (this->StreamTimeRange).Max = 0;
  this->StreamDataOffset = 0;
  this->StreamChunkIndex = 0;
  this->LastChunkTime = 0.0;
  this->LastRefreshTime = 0.0;
  this->bStopStreamingCalled = false;
  this->HighPriorityEndTime = 0;
  this->LastGotoTimeInMS = -1;
  (this->QueuedRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedRequests).ArrayNum = 0;
  (this->QueuedRequests).ArrayMax = 0;
  (this->ActiveRequest).Object = (FQueuedLocalFileRequest *)0x0;
  (this->ActiveRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)&this->HeaderAr);
  (this->HeaderAr).Pos = 0;
  (this->HeaderAr)._padding_ = (longlong)&___7FLocalFileStreamFArchive__6B_;
  (this->HeaderAr).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeaderAr).Buffer.ArrayNum = 0;
  (this->HeaderAr).Buffer.ArrayMax = 0;
  (this->HeaderAr).bAtEndOfReplay = false;
  (this->HeaderAr).ArchivePos = 0;
  FArchiveState::FArchiveState((FArchiveState *)&this->StreamAr);
  (this->StreamAr)._padding_ = (longlong)&___7FLocalFileStreamFArchive__6B_;
  (this->StreamAr).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamAr).Buffer.ArrayNum = 0;
  (this->StreamAr).Buffer.ArrayMax = 0;
  (this->StreamAr).Pos = 0;
  (this->StreamAr).bAtEndOfReplay = false;
  (this->StreamAr).ArchivePos = 0;
  FArchiveState::FArchiveState((FArchiveState *)&this->CheckpointAr);
  (this->CheckpointAr)._padding_ = (longlong)&___7FLocalFileStreamFArchive__6B_;
  (this->CheckpointAr).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheckpointAr).Buffer.ArrayNum = 0;
  (this->CheckpointAr).Buffer.ArrayMax = 0;
  (this->CheckpointAr).Pos = 0;
  (this->CheckpointAr).bAtEndOfReplay = false;
  (this->CheckpointAr).ArchivePos = 0;
  this->StreamerState = Idle;
  (this->CurrentStreamName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentStreamName).Data.ArrayNum = 0;
  (this->CurrentStreamName).Data.ArrayMax = 0;
  bVar1 = ::FString::EndsWith(param_1,L"/",1,IgnoreCase);
  if (bVar1) {
    local_48.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar3 = (longlong)local_48.Data.ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    ::FString::FString(&this->DemoSavePath,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar2 = ::FString::FString(&local_28,"/");
    ::FString::ConcatFF(&local_38,param_1,pFVar2);
    ::FString::FString(&this->DemoSavePath,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  this->bCacheFileReadsInMemory = false;
  *(undefined8 *)&this->FileContentsCache = 0;
  *(undefined8 *)&(this->FileContentsCache).field_0x8 = 0;
  *(undefined8 *)&(this->FileContentsCache).field_0x20 = 0;
  *(undefined4 *)&(this->FileContentsCache).field_0x28 = 0;
  *(undefined4 *)&(this->FileContentsCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileContentsCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileContentsCache).field_0x34 = 0;
  *(undefined8 *)&(this->FileContentsCache).field_0x40 = 0;
  *(undefined4 *)&(this->FileContentsCache).field_0x48 = 0;
  (this->TaskReplayInfo).LengthInMS = 0;
  (this->TaskReplayInfo).NetworkVersion = 0;
  (this->TaskReplayInfo).Changelist = 0;
  (this->TaskReplayInfo).FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).FriendlyName.Data.ArrayNum = 0;
  (this->TaskReplayInfo).FriendlyName.Data.ArrayMax = 0;
  (this->TaskReplayInfo).Timestamp.Ticks = 0;
  (this->TaskReplayInfo).TotalDataSizeInBytes = 0;
  (this->TaskReplayInfo).bIsLive = false;
  (this->TaskReplayInfo).bIsValid = false;
  (this->TaskReplayInfo).bCompressed = false;
  (this->TaskReplayInfo).bEncrypted = false;
  (this->TaskReplayInfo).EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).EncryptionKey.ArrayNum = 0;
  (this->TaskReplayInfo).EncryptionKey.ArrayMax = 0;
  (this->TaskReplayInfo).HeaderChunkIndex = -1;
  (this->TaskReplayInfo).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).Chunks.ArrayNum = 0;
  (this->TaskReplayInfo).Chunks.ArrayMax = 0;
  (this->TaskReplayInfo).Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).Checkpoints.ArrayNum = 0;
  (this->TaskReplayInfo).Checkpoints.ArrayMax = 0;
  (this->TaskReplayInfo).Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).Events.ArrayNum = 0;
  (this->TaskReplayInfo).Events.ArrayMax = 0;
  (this->TaskReplayInfo).DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).DataChunks.ArrayNum = 0;
  (this->TaskReplayInfo).DataChunks.ArrayMax = 0;
  return this;
}

// FLocalFileNetworkReplayStreamer @ 146c90b70

FLocalFileNetworkReplayStreamer * __thiscall
FLocalFileNetworkReplayStreamer::FLocalFileNetworkReplayStreamer
          (FLocalFileNetworkReplayStreamer *this)

{
  FString *pFVar1;
  
  INetworkReplayStreamer::INetworkReplayStreamer((INetworkReplayStreamer *)this);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->RequestCache = 0;
  *(undefined8 *)&(this->RequestCache).field_0x8 = 0;
  *(undefined8 *)&(this->RequestCache).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FLocalFileNetworkReplayStreamer__6B_;
  *(undefined4 *)&(this->RequestCache).field_0x28 = 0;
  *(undefined4 *)&(this->RequestCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestCache).field_0x34 = 0;
  *(undefined8 *)&(this->RequestCache).field_0x40 = 0;
  *(undefined4 *)&(this->RequestCache).field_0x48 = 0;
  *(undefined8 *)&this->DeltaCheckpointCache = 0;
  *(undefined8 *)&(this->DeltaCheckpointCache).field_0x8 = 0;
  *(undefined8 *)&(this->DeltaCheckpointCache).field_0x20 = 0;
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x28 = 0;
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x34 = 0;
  *(undefined8 *)&(this->DeltaCheckpointCache).field_0x40 = 0;
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x48 = 0;
  (this->CurrentReplayInfo).LengthInMS = 0;
  (this->CurrentReplayInfo).NetworkVersion = 0;
  (this->CurrentReplayInfo).Changelist = 0;
  (this->CurrentReplayInfo).FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).FriendlyName.Data.ArrayNum = 0;
  (this->CurrentReplayInfo).FriendlyName.Data.ArrayMax = 0;
  (this->CurrentReplayInfo).Timestamp.Ticks = 0;
  (this->CurrentReplayInfo).TotalDataSizeInBytes = 0;
  (this->CurrentReplayInfo).bIsLive = false;
  (this->CurrentReplayInfo).bIsValid = false;
  (this->CurrentReplayInfo).bCompressed = false;
  (this->CurrentReplayInfo).bEncrypted = false;
  (this->CurrentReplayInfo).EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).EncryptionKey.ArrayNum = 0;
  (this->CurrentReplayInfo).EncryptionKey.ArrayMax = 0;
  (this->CurrentReplayInfo).HeaderChunkIndex = -1;
  (this->CurrentReplayInfo).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).Chunks.ArrayNum = 0;
  (this->CurrentReplayInfo).Chunks.ArrayMax = 0;
  (this->CurrentReplayInfo).Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).Checkpoints.ArrayNum = 0;
  (this->CurrentReplayInfo).Checkpoints.ArrayMax = 0;
  (this->CurrentReplayInfo).Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).Events.ArrayNum = 0;
  (this->CurrentReplayInfo).Events.ArrayMax = 0;
  (this->CurrentReplayInfo).DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentReplayInfo).DataChunks.ArrayNum = 0;
  (this->CurrentReplayInfo).DataChunks.ArrayMax = 0;
  (this->StreamTimeRange).Min = 0;
  (this->StreamTimeRange).Max = 0;
  this->StreamDataOffset = 0;
  this->StreamChunkIndex = 0;
  this->LastChunkTime = 0.0;
  this->LastRefreshTime = 0.0;
  this->bStopStreamingCalled = false;
  this->HighPriorityEndTime = 0;
  this->LastGotoTimeInMS = -1;
  (this->QueuedRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedRequests).ArrayNum = 0;
  (this->QueuedRequests).ArrayMax = 0;
  (this->ActiveRequest).Object = (FQueuedLocalFileRequest *)0x0;
  (this->ActiveRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)&this->HeaderAr);
  (this->HeaderAr).Pos = 0;
  (this->HeaderAr)._padding_ = (longlong)&___7FLocalFileStreamFArchive__6B_;
  (this->HeaderAr).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeaderAr).Buffer.ArrayNum = 0;
  (this->HeaderAr).Buffer.ArrayMax = 0;
  (this->HeaderAr).bAtEndOfReplay = false;
  (this->HeaderAr).ArchivePos = 0;
  FArchiveState::FArchiveState((FArchiveState *)&this->StreamAr);
  (this->StreamAr)._padding_ = (longlong)&___7FLocalFileStreamFArchive__6B_;
  (this->StreamAr).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamAr).Buffer.ArrayNum = 0;
  (this->StreamAr).Buffer.ArrayMax = 0;
  (this->StreamAr).Pos = 0;
  (this->StreamAr).bAtEndOfReplay = false;
  (this->StreamAr).ArchivePos = 0;
  FArchiveState::FArchiveState((FArchiveState *)&this->CheckpointAr);
  (this->CheckpointAr)._padding_ = (longlong)&___7FLocalFileStreamFArchive__6B_;
  (this->CheckpointAr).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheckpointAr).Buffer.ArrayNum = 0;
  (this->CheckpointAr).Buffer.ArrayMax = 0;
  (this->CheckpointAr).Pos = 0;
  (this->CheckpointAr).bAtEndOfReplay = false;
  (this->CheckpointAr).ArchivePos = 0;
  this->StreamerState = Idle;
  (this->CurrentStreamName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentStreamName).Data.ArrayNum = 0;
  (this->CurrentStreamName).Data.ArrayMax = 0;
  pFVar1 = GetDefaultDemoSavePath();
  ::FString::FString(&this->DemoSavePath,pFVar1);
  this->bCacheFileReadsInMemory = false;
  *(undefined8 *)&this->FileContentsCache = 0;
  *(undefined8 *)&(this->FileContentsCache).field_0x8 = 0;
  *(undefined8 *)&(this->FileContentsCache).field_0x20 = 0;
  *(undefined4 *)&(this->FileContentsCache).field_0x28 = 0;
  *(undefined4 *)&(this->FileContentsCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileContentsCache).field_0x34 = 0;
  *(undefined4 *)&(this->FileContentsCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileContentsCache).field_0x40 = 0;
  *(undefined4 *)&(this->FileContentsCache).field_0x48 = 0;
  (this->TaskReplayInfo).LengthInMS = 0;
  (this->TaskReplayInfo).NetworkVersion = 0;
  (this->TaskReplayInfo).Changelist = 0;
  (this->TaskReplayInfo).FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).FriendlyName.Data.ArrayNum = 0;
  (this->TaskReplayInfo).FriendlyName.Data.ArrayMax = 0;
  (this->TaskReplayInfo).Timestamp.Ticks = 0;
  (this->TaskReplayInfo).TotalDataSizeInBytes = 0;
  (this->TaskReplayInfo).bIsLive = false;
  (this->TaskReplayInfo).bIsValid = false;
  (this->TaskReplayInfo).bCompressed = false;
  (this->TaskReplayInfo).bEncrypted = false;
  (this->TaskReplayInfo).EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).EncryptionKey.ArrayNum = 0;
  (this->TaskReplayInfo).EncryptionKey.ArrayMax = 0;
  (this->TaskReplayInfo).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).Chunks.ArrayNum = 0;
  (this->TaskReplayInfo).Chunks.ArrayMax = 0;
  (this->TaskReplayInfo).Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).Checkpoints.ArrayNum = 0;
  (this->TaskReplayInfo).Checkpoints.ArrayMax = 0;
  (this->TaskReplayInfo).Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).Events.ArrayNum = 0;
  (this->TaskReplayInfo).Events.ArrayMax = 0;
  (this->TaskReplayInfo).DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskReplayInfo).DataChunks.ArrayNum = 0;
  (this->TaskReplayInfo).DataChunks.ArrayMax = 0;
  (this->TaskReplayInfo).HeaderChunkIndex = -1;
  return this;
}

// ~<lambda_3> @ 146c90fe0

void __thiscall
`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_3>::~<lambda_3>(void *this)

{
  if (*(void **)((longlong)this + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x68));
  }
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~FLocalFileNetworkReplayStreamer @ 146c92770

void __thiscall
FLocalFileNetworkReplayStreamer::~FLocalFileNetworkReplayStreamer
          (FLocalFileNetworkReplayStreamer *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FLocalFileNetworkReplayStreamer__6B_;
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&this->TaskReplayInfo);
  *(undefined4 *)&(this->FileContentsCache).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FileContentsCache).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileContentsCache);
  pFVar4 = (this->DemoSavePath).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CurrentStreamName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CheckpointAr).Buffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FArchive::~FArchive((FArchive *)&this->CheckpointAr);
  pFVar4 = (this->StreamAr).Buffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FArchive::~FArchive((FArchive *)&this->StreamAr);
  pFVar4 = (this->HeaderAr).Buffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FArchive::~FArchive((FArchive *)&this->HeaderAr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveRequest).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FQueuedLocalFileRequest,1>,int>
            ((TSharedPtr<FQueuedLocalFileRequest,1> *)(this->QueuedRequests).AllocatorInstance.Data,
             (this->QueuedRequests).ArrayNum);
  pFVar4 = (this->QueuedRequests).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&this->CurrentReplayInfo);
  *(undefined4 *)&(this->DeltaCheckpointCache).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DeltaCheckpointCache).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeltaCheckpointCache);
  *(undefined4 *)&(this->RequestCache).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RequestCache).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RequestCache);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  INetworkReplayStreamer::~INetworkReplayStreamer((INetworkReplayStreamer *)this);
  return;
}

// operator() @ 146c92e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::__l2::<lambda_1>::operator()
          (void *this,ELocalFileReplayResult *param_1)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  FLocalFileNetworkReplayStreamer *this_00;
  code *pcVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FArchive *pFVar10;
  ForAnyElementType FVar11;
  ForAnyElementType *pFVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushEvent> FVar21;
  FGuid *this_01;
  FString *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_EncryptTime> FVar23;
  FThreadStats *pFVar24;
  FThreadStatsPool *pFVar25;
  undefined8 uVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  FName FVar30;
  int *piVar31;
  longlong lVar32;
  longlong lVar33;
  FName FVar34;
  ulonglong uVar35;
  uint uVar36;
  size_t _Size;
  uint local_2f8;
  uint local_2f4;
  FArchive *local_2f0;
  FSharedReferencer<1> local_2e8;
  uint local_2e0 [2];
  FString local_2d8;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  FString local_2b8;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  FString local_298;
  FString local_288;
  longlong local_278;
  FString local_270;
  FArchiveState local_258;
  longlong local_1c8;
  ForAnyElementType *local_1c0;
  FName local_1b8;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  FColor_u_0 local_198;
  FColor_u_0 local_194;
  FString local_190;
  FName local_180;
  FName local_178;
  FName local_170;
  longlong local_168;
  longlong local_160;
  FName local_158;
  FName local_148;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  longlong local_128;
  FStatMessage local_120;
  FStatMessage local_110;
  undefined8 local_100;
  FSharedReferencer<1> local_f8 [2];
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FString local_c8;
  FName local_b8;
  FName local_b0;
  FString local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  FGuid local_48;
  
  uVar29 = 0;
  FVar21 = StatPtr_STAT_LocalReplay_FlushEvent;
  if (StatPtr_STAT_LocalReplay_FlushEvent ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushEvent>)0x0) {
    pFVar20 = ::FName::FName(&local_b8,"STAT_LocalReplay_FlushEvent");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushEvent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_FlushEvent,*pFVar20,
                        L"Local replay flush event","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar21;
  bVar9 = false;
  bVar8 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar34.ComparisonIndex.Value.Value == 0) && (FVar34.Number == 0)) {
LAB_146c92ff2:
    bVar9 = bVar14;
    bVar8 = bVar13;
    bVar13 = false;
    FVar34 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_198.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_180.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_180.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_180,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x4ef);
        bVar9 = true;
        bVar8 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c92ff2;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar13 = true;
  }
  local_2d8.Data.ArrayNum = *(int *)((longlong)this + 0x10);
  lVar28 = (longlong)local_2d8.Data.ArrayNum;
  pvVar3 = *(void **)((longlong)this + 8);
  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_2d8.Data.ArrayNum == 0) {
    local_2d8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2d8.Data.ArrayNum,0,(ForAnyElementType *)&local_2d8,local_2d8.Data.ArrayNum
               ,&local_2d8.Data.ArrayMax);
    memcpy(local_2d8.Data.AllocatorInstance.Data,pvVar3,lVar28 * 2);
  }
  if (local_2d8.Data.ArrayNum < 2) {
    this_01 = FGuid::NewGuid(&local_48);
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    FGuid::AppendString(this_01,&local_270,Digits);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    local_2d8.Data.AllocatorInstance.Data = local_270.Data.AllocatorInstance.Data;
    local_2d8.Data.ArrayNum = local_270.Data.ArrayNum;
    local_2d8.Data.ArrayMax = local_270.Data.ArrayMax;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  ::FString::ConcatFC(&local_c8,(FString *)(*(longlong *)this + 0x3c0),L"_");
  ::FString::ConcatFF(&local_190,&local_c8,&local_2d8);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  local_2d8.Data.AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
  local_2d8.Data.ArrayNum = local_190.Data.ArrayNum;
  local_2d8.Data.ArrayMax = local_190.Data.ArrayMax;
  local_190.Data.ArrayNum = 0;
  local_190.Data.ArrayMax = 0;
  local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  this_00 = *(FLocalFileNetworkReplayStreamer **)this;
  pcVar4 = *(code **)(this_00->_padding_ + 0x200);
  pFVar22 = FLocalFileNetworkReplayStreamer::GetDemoFullFilename
                      (this_00,&local_a8,&this_00->CurrentStreamName);
  (*pcVar4)(this_00,&local_2f0,pFVar22);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_2f0 == (FArchive *)0x0) {
    *param_1 = FileWriter;
    goto LAB_146c94808;
  }
  lVar28 = *(longlong *)this;
  local_2f4 = 0xffffffff;
  uVar35 = uVar29;
  uVar27 = local_2f4;
  if (0 < *(int *)(lVar28 + 0x4b0)) {
    do {
      uVar36 = (uint)uVar29;
      uVar27 = 0;
      if ((int)uVar36 < *(int *)(lVar28 + 0x4b0)) {
        uVar27 = ~uVar36 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar19 = *(int *)(*(longlong *)(lVar28 + 0x4a8) + 0x10 + uVar35);
      uVar27 = uVar36;
      if (iVar19 == local_2d8.Data.ArrayNum) {
        if (iVar19 < 2) break;
        iVar19 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)(*(longlong *)(lVar28 + 0x4a8) + 8 + uVar35),
                            (wchar_t *)local_2d8.Data.AllocatorInstance.Data);
        bVar14 = iVar19 == 0;
      }
      else {
        bVar14 = iVar19 + local_2d8.Data.ArrayNum == 1;
      }
      if (bVar14) break;
      lVar28 = *(longlong *)this;
      uVar29 = (ulonglong)(uVar36 + 1);
      uVar35 = uVar35 + 0x50;
      uVar27 = local_2f4;
    } while ((int)(uVar36 + 1) < *(int *)(lVar28 + 0x4b0));
  }
  local_2f4 = uVar27;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  bVar14 = FLocalFileNetworkReplayStreamer::AllowEncryptedWrite
                     (*(FLocalFileNetworkReplayStreamer **)this);
  if (bVar14) {
    FVar23 = StatPtr_STAT_LocalReplay_EncryptTime;
    if (StatPtr_STAT_LocalReplay_EncryptTime ==
        (FThreadSafeStaticStat<FStat_STAT_LocalReplay_EncryptTime>)0x0) {
      pFVar20 = ::FName::FName(&local_b0,"STAT_LocalReplay_EncryptTime");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_EncryptTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_EncryptTime,
                          *pFVar20,L"Local replay encrypt time","STATGROUP_LocalReplay",
                          "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
    FVar30 = *(FName *)FVar23;
    bVar14 = false;
    bVar17 = false;
    local_148.ComparisonIndex.Value = 0;
    local_148.Number = 0;
    if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_146c93379:
      bVar7 = false;
      FVar30 = local_148;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_194.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_194._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
        bVar14 = false;
        bVar17 = true;
        if (-1 < CpuChannel->Enabled) {
          local_178.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
          local_178.Number = FVar30.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_178,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                     ,0x50f);
          bVar14 = true;
          bVar17 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146c93379;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar7 = true;
    }
    plVar5 = *(longlong **)this;
    iVar19 = (int)plVar5[0x8f];
    pcVar4 = *(code **)(*plVar5 + 0x1e8);
    local_e8 = plVar5[0x8e];
    if ((iVar19 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_d8 = *(undefined8 *)((longlong)this + 0x40);
    iVar2 = *(int *)((longlong)this + 0x48);
    iStack_e0 = iVar19;
    if ((iVar2 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_58 = (undefined4)local_d8;
    uStack_54 = local_d8._4_4_;
    uStack_4c = uStack_cc;
    local_98 = (undefined4)local_e8;
    uStack_94 = local_e8._4_4_;
    iStack_90 = iStack_e0;
    uStack_8c = uStack_dc;
    iStack_d0 = iVar2;
    iStack_50 = iVar2;
    cVar16 = (*pcVar4)(plVar5,&local_58);
    if (cVar16 != '\0') {
      if (bVar17) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar7) && (FVar30 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar24 == (FThreadStats *)0x0) {
          pFVar25 = FThreadStatsPool::Get();
          pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
        }
        if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
          local_110.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
          local_110.NameAndInfo.Index.Value = FVar30.ComparisonIndex.Value.Value;
          QueryPerformanceCounter(&local_130);
          local_110.StatData.Pad[4] = '\0';
          local_110.StatData.Pad[5] = '\0';
          local_110.StatData.Pad[6] = '\0';
          local_110.StatData.Pad[7] = '\0';
          local_110.StatData.Pad[0] = local_130.s.LowPart._0_1_;
          local_110.StatData.Pad[1] = local_130.s.LowPart._1_1_;
          local_110.StatData.Pad[2] = local_130.s.LowPart._2_1_;
          local_110.StatData.Pad[3] = local_130.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar24,&local_110);
          piVar31 = &pFVar24->ScopeCount;
          *piVar31 = *piVar31 + -1;
          if (*piVar31 == 0) {
            FThreadStats::Flush(pFVar24,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar24,false,false);
          }
        }
      }
      goto LAB_146c9363a;
    }
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    *param_1 = EncryptBuffer;
    if (bVar17) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar7) && (FVar30 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar24 == (FThreadStats *)0x0) {
        pFVar25 = FThreadStatsPool::Get();
        pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
      }
      if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
        local_120.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
        local_120.NameAndInfo.Index.Value = FVar30.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_138);
        local_120.StatData.Pad[4] = '\0';
        local_120.StatData.Pad[5] = '\0';
        local_120.StatData.Pad[6] = '\0';
        local_120.StatData.Pad[7] = '\0';
        local_120.StatData.Pad[0] = local_138.s.LowPart._0_1_;
        local_120.StatData.Pad[1] = local_138.s.LowPart._1_1_;
        local_120.StatData.Pad[2] = local_138.s.LowPart._2_1_;
        local_120.StatData.Pad[3] = local_138.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar24,&local_120);
        piVar31 = &pFVar24->ScopeCount;
        *piVar31 = *piVar31 + -1;
        if (*piVar31 == 0) {
          FThreadStats::Flush(pFVar24,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar24,false,false);
        }
      }
    }
  }
  else {
    if (&local_2a8 != (ForAnyElementType *)((longlong)this + 0x40)) {
      iVar19 = *(int *)((longlong)this + 0x48);
      pFVar6 = ((ForAnyElementType *)((longlong)this + 0x40))->Data;
      local_2a0 = CONCAT44(local_2a0._4_4_,iVar19);
      if (((iVar19 != 0) || (local_2a0._4_4_ != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar19,local_2a0._4_4_,&local_2a8,iVar19,(int *)((longlong)&local_2a0 + 4))
         , iVar19 != 0)) {
        memcpy(local_2a8.Data,pFVar6,(longlong)iVar19);
      }
    }
LAB_146c9363a:
    local_170.ComparisonIndex.Value = 0;
    local_170.Number = 0;
    local_258._padding_ = 0;
    local_258.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_258.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_258.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_258.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_258._40_8_ = 0;
    local_258.ArSerializingDefaults = 0;
    local_258.ArPortFlags = 0;
    local_258.ArMaxSerializeSize = 0;
    local_258.ArUEVer.FileVersionUE4 = 0;
    local_258.ArUEVer.FileVersionUE5 = 0;
    local_258.ArLicenseeUEVer = 0;
    local_258.ArEngineVer.Major = 0;
    local_258.ArEngineVer.Minor = 0;
    local_258.ArEngineVer.Patch = 0;
    local_258.ArEngineVer._6_2_ = 0;
    local_258.ArEngineVer.Changelist = 0;
    local_258.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_258.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_258.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_258.SerializedProperty = (FProperty *)0x0;
    local_258.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_258.bCustomVersionsAreReset = false;
    local_258._129_7_ = 0;
    local_258.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_258);
    local_1c8 = 0;
    local_258._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_1c0 = &local_1b0;
    local_1b8 = local_170;
    FArchiveState::SetIsSaving(&local_258,true);
    (**(code **)(local_258._padding_ + 0x108))(&local_258,0);
    local_258._padding_ = (longlong)&___7FBufferArchive__6B_;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    local_2f8 = 3;
    if ((local_258.ActiveFPLB)->EndFastPathLoadBuffer <
        (uint *)((longlong)(local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      if (local_258.ArForceByteSwapping == 0) {
        lVar28 = (local_1c8 - *(int *)&local_1c0[1].Data) + 4;
        if (0 < lVar28) {
          if (0x7ffffffe < lVar28 + *(int *)&local_1c0[1].Data) {
            ::FName::ToString(&local_1b8,&local_88);
            UE::Logging::Private::BasicFatalLog
                      (&`public:_virtual_void___cdecl_TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(void*___ptr64,__int64)___ptr64'
                        ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(int)lVar28,local_1c0,(int *)(local_1c0 + 1),
                     (int *)((longlong)&local_1c0[1].Data + 4));
        }
        if (((longlong)*(int *)&local_1c0[1].Data < local_1c8 + 4) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Offset + Num) <= Bytes.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                                ,0x39,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar12 = local_1c0;
        lVar28 = (longlong)(int)(uint)local_1c8;
        uVar27 = 0;
        if ((int)(uint)local_1c8 < *(int *)&local_1c0[1].Data) {
          uVar27 = ~(uint)local_1c8 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(uint *)(pFVar12->Data + lVar28) = local_2f8;
        local_1c8 = local_1c8 + 4;
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_258,&local_2f8);
      }
    }
    else {
      local_2f8 = *(uint *)(local_258.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_258.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    local_2c8 = 0;
    local_128 = local_1c8;
    if ((local_258.ActiveFPLB)->EndFastPathLoadBuffer <
        (uint *)((longlong)(local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      if (local_258.ArForceByteSwapping == 0) {
        if (*(code **)(local_258._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          lVar28 = (local_1c8 - *(int *)&local_1c0[1].Data) + 4;
          if (0 < lVar28) {
            if (0x7ffffffe < lVar28 + *(int *)&local_1c0[1].Data) {
              ::FName::ToString(&local_1b8,&local_78);
              UE::Logging::Private::BasicFatalLog
                        (&`public:_virtual_void___cdecl_TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(void*___ptr64,__int64)___ptr64'
                          ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
            }
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,(int)lVar28,local_1c0,(int *)(local_1c0 + 1),
                       (int *)((longlong)&local_1c0[1].Data + 4));
          }
          if (((longlong)*(int *)&local_1c0[1].Data < local_1c8 + 4) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Offset + Num) <= Bytes.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                                  ,0x39,L""), bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = local_1c0;
          lVar28 = (longlong)(int)(uint)local_1c8;
          uVar27 = 0;
          if ((int)(uint)local_1c8 < *(int *)&local_1c0[1].Data) {
            uVar27 = ~(uint)local_1c8 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(uint *)(pFVar12->Data + lVar28) = local_2c8;
          local_1c8 = local_1c8 + 4;
        }
        else {
          (**(code **)(local_258._padding_ + 0x188))(&local_258,&local_2c8,4);
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_258,&local_2c8);
      }
    }
    else {
      local_2c8 = *(uint *)(local_258.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_258.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    FVar11.Data = local_2d8.Data.AllocatorInstance.Data;
    lVar28 = (longlong)local_2d8.Data.ArrayNum;
    local_160 = local_1c8;
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = local_2d8.Data.ArrayNum;
    if (local_2d8.Data.ArrayNum == 0) {
      local_2b8.Data.ArrayNum = 0;
      local_2b8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2d8.Data.ArrayNum,0,(ForAnyElementType *)&local_2b8,
                 local_2d8.Data.ArrayNum,&local_2b8.Data.ArrayMax);
      memcpy(local_2b8.Data.AllocatorInstance.Data,FVar11.Data,lVar28 * 2);
    }
    ::operator<<((FArchive *)&local_258,&local_2b8);
    iVar19 = *(int *)((longlong)this + 0x20);
    pvVar3 = *(void **)((longlong)this + 0x18);
    local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.Data.ArrayNum = iVar19;
    if (iVar19 == 0) {
      local_288.Data.ArrayNum = 0;
      local_288.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar19,0,(ForAnyElementType *)&local_288,iVar19,&local_288.Data.ArrayMax);
      memcpy(local_288.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar19 * 2);
    }
    ::operator<<((FArchive *)&local_258,&local_288);
    iVar19 = *(int *)((longlong)this + 0x38);
    pvVar3 = *(void **)((longlong)this + 0x30);
    local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.Data.ArrayNum = iVar19;
    if (iVar19 == 0) {
      local_298.Data.ArrayNum = 0;
      local_298.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar19,0,(ForAnyElementType *)&local_298,iVar19,&local_298.Data.ArrayMax);
      memcpy(local_298.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar19 * 2);
    }
    ::operator<<((FArchive *)&local_258,&local_298);
    local_2c4 = *(uint *)((longlong)this + 0x28);
    if ((local_258.ActiveFPLB)->EndFastPathLoadBuffer <
        (uint *)((longlong)(local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      if (local_258.ArForceByteSwapping == 0) {
        (**(code **)(local_258._padding_ + 0x188))(&local_258,&local_2c4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_258,&local_2c4);
      }
    }
    else {
      local_2c4 = *(uint *)(local_258.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_258.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    local_2c0 = *(uint *)((longlong)this + 0x28);
    if ((local_258.ActiveFPLB)->EndFastPathLoadBuffer <
        (uint *)((longlong)(local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      if (local_258.ArForceByteSwapping == 0) {
        (**(code **)(local_258._padding_ + 0x188))(&local_258,&local_2c0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_258,&local_2c0);
      }
    }
    else {
      local_2c0 = *(uint *)(local_258.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_258.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    local_2bc = (uint)local_2a0;
    if ((local_258.ActiveFPLB)->EndFastPathLoadBuffer <
        (uint *)((longlong)(local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      if (local_258.ArForceByteSwapping == 0) {
        (**(code **)(local_258._padding_ + 0x188))(&local_258,&local_2bc,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_258,&local_2bc);
      }
    }
    else {
      local_2bc = *(uint *)(local_258.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_258.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    lVar28 = local_1c8;
    FVar11.Data = local_2a8.Data;
    iVar19 = (uint)local_2a0;
    _Size = (size_t)(int)(uint)local_2a0;
    local_168 = local_1c8;
    lVar33 = (local_1c8 - *(int *)&local_1c0[1].Data) + _Size;
    if (0 < lVar33) {
      if (0x7ffffffe < lVar33 + *(int *)&local_1c0[1].Data) {
        ::FName::ToString(&local_1b8,&local_68);
        UE::Logging::Private::BasicFatalLog
                  (&`public:_virtual_void___cdecl_TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(void*___ptr64,__int64)___ptr64'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)lVar33,local_1c0,(int *)(local_1c0 + 1),
                 (int *)((longlong)&local_1c0[1].Data + 4));
    }
    if (((longlong)*(int *)&local_1c0[1].Data < (longlong)(local_1c8 + _Size)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Offset + Num) <= Bytes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                            ,0x39,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar12 = local_1c0;
    if (iVar19 != 0) {
      lVar33 = (longlong)(int)(uint)local_1c8;
      uVar27 = 0;
      if ((int)(uint)local_1c8 < *(int *)&local_1c0[1].Data) {
        uVar27 = ~(uint)local_1c8 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy(pFVar12->Data + lVar33,FVar11.Data,_Size);
      local_1c8 = local_1c8 + _Size;
    }
    uVar27 = (uint)(local_1c8 - local_160);
    if ((local_1c8 - local_160 != (longlong)(int)uVar27) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar14
       )) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar14 = true;
    lVar33 = (longlong)(int)local_2f4;
    local_2e0[0] = uVar27;
    if (local_2f4 == 0xffffffff) {
      if ((local_2f0 == (FArchive *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = local_2f0;
      pcVar4 = *(code **)(*(longlong *)local_2f0 + 0x1b8);
      if ((local_2f0 == (FArchive *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar26 = (**(code **)(*(longlong *)local_2f0 + 0x30))();
      (*pcVar4)(pFVar10,uVar26);
    }
    else {
      uVar36 = ~local_2f4 >> 0x1f;
      lVar28 = *(longlong *)this;
      uVar27 = 0;
      if ((int)local_2f4 < *(int *)(lVar28 + 0x4b0)) {
        uVar27 = uVar36;
      }
      if ((uVar27 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_278 = lVar33 * 0x50;
      uVar27 = *(uint *)(local_278 + *(longlong *)(lVar28 + 0x4a8));
      uVar18 = 0;
      if ((int)uVar27 < *(int *)(lVar28 + 0x490)) {
        uVar18 = ~uVar27 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)(*(longlong *)(lVar28 + 0x488) + 4 + (longlong)(int)uVar27 * 0x18) <
          (int)local_2e0[0]) {
        if ((local_2f0 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = local_2f0;
        lVar28 = *(longlong *)this;
        pcVar4 = *(code **)(*(longlong *)local_2f0 + 0x1b8);
        uVar27 = 0;
        if ((int)local_2f4 < *(int *)(lVar28 + 0x4b0)) {
          uVar27 = uVar36;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar27 = *(uint *)(local_278 + *(longlong *)(lVar28 + 0x4a8));
        uVar18 = 0;
        if ((int)uVar27 < *(int *)(lVar28 + 0x490)) {
          uVar18 = ~uVar27 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*pcVar4)(pFVar10,*(undefined8 *)
                           (*(longlong *)(lVar28 + 0x488) + 8 + (longlong)(int)uVar27 * 0x18));
        local_2f8 = 0xffffffff;
        if ((local_2f0 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar1 = (uint *)**(undefined8 **)&local_2f0->field_0x8;
        if ((uint *)(*(undefined8 **)&local_2f0->field_0x8)[1] < puVar1 + 1) {
          if ((local_2f0->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)local_2f0 + 0x188))(local_2f0,&local_2f8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(local_2f0,&local_2f8);
          }
        }
        else {
          local_2f8 = *puVar1;
          **(longlong **)&local_2f0->field_0x8 = **(longlong **)&local_2f0->field_0x8 + 4;
        }
        lVar28 = *(longlong *)this;
        uVar27 = 0;
        if ((int)local_2f4 < *(int *)(lVar28 + 0x4b0)) {
          uVar27 = uVar36;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar27 = *(uint *)(local_278 + *(longlong *)(lVar28 + 0x4a8));
        uVar36 = 0;
        if ((int)uVar27 < *(int *)(lVar28 + 0x490)) {
          uVar36 = ~uVar27 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(*(longlong *)(lVar28 + 0x488) + (longlong)(int)uVar27 * 0x18) = 0xffffffff;
        if ((local_2f0 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = local_2f0;
        pcVar4 = *(code **)(*(longlong *)local_2f0 + 0x1b8);
        if ((local_2f0 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar26 = (**(code **)(*(longlong *)local_2f0 + 0x30))();
        (*pcVar4)(pFVar10,uVar26);
        bVar14 = true;
        lVar28 = local_168;
      }
      else {
        if ((local_2f0 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = local_2f0;
        lVar28 = *(longlong *)this;
        pcVar4 = *(code **)(*(longlong *)local_2f0 + 0x1b8);
        uVar27 = 0;
        if ((int)local_2f4 < *(int *)(lVar28 + 0x4b0)) {
          uVar27 = uVar36;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar27 = *(uint *)(local_278 + *(longlong *)(lVar28 + 0x4a8));
        uVar18 = 0;
        if ((int)uVar27 < *(int *)(lVar28 + 0x490)) {
          uVar18 = ~uVar27 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*pcVar4)(pFVar10,*(undefined8 *)
                           (*(longlong *)(lVar28 + 0x488) + 8 + (longlong)(int)uVar27 * 0x18));
        lVar28 = *(longlong *)this;
        uVar27 = 0;
        if ((int)local_2f4 < *(int *)(lVar28 + 0x4b0)) {
          uVar27 = uVar36;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar27 = *(uint *)(local_278 + *(longlong *)(lVar28 + 0x4a8));
        uVar36 = 0;
        if ((int)uVar27 < *(int *)(lVar28 + 0x490)) {
          uVar36 = ~uVar27 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar14 = false;
        local_2e0[0] = *(uint *)(*(longlong *)(lVar28 + 0x488) + 4 + (longlong)(int)uVar27 * 0x18);
        lVar28 = local_168;
      }
    }
    local_1c8 = local_128;
    if ((local_258.ActiveFPLB)->EndFastPathLoadBuffer <
        (uint *)((longlong)(local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      if (local_258.ArForceByteSwapping == 0) {
        (**(code **)(local_258._padding_ + 0x188))(&local_258,local_2e0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_258,local_2e0);
      }
    }
    else {
      local_2e0[0] = *(uint *)(local_258.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_258.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_258.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    if ((local_2f0 == (FArchive *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar33 = (**(code **)(*(longlong *)local_2f0 + 0x28))();
    uVar27 = local_2f4;
    if (bVar14) {
      lVar32 = *(longlong *)this;
      iVar19 = *(int *)(lVar32 + 0x490);
      if (iVar19 == *(int *)(lVar32 + 0x494)) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar32 + 0x488),(int *)(lVar32 + 0x494));
      }
      *(int *)(lVar32 + 0x490) = iVar19 + 1;
      puVar1 = (uint *)(*(longlong *)(lVar32 + 0x488) + (longlong)iVar19 * 0x18);
      DefaultConstructItems<FLocalFileChunkInfo,int>(puVar1,1);
      *puVar1 = local_2f8;
      *(longlong *)(puVar1 + 2) = lVar33;
      *(longlong *)(puVar1 + 4) = local_160 + lVar33;
      puVar1[1] = local_2e0[0];
      lVar32 = *(longlong *)this;
      iVar19 = *(int *)(lVar32 + 0x4b0);
      if (iVar19 == *(int *)(lVar32 + 0x4b4)) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,(ForAnyElementType *)(lVar32 + 0x4a8),(int *)(lVar32 + 0x4b4));
      }
      *(int *)(lVar32 + 0x4b0) = iVar19 + 1;
      piVar31 = (int *)(*(longlong *)(lVar32 + 0x4a8) + (longlong)iVar19 * 0x50);
      DefaultConstructItems<FLocalFileEventInfo,int>(piVar31,1);
      *piVar31 = *(int *)(*(longlong *)this + 0x490) + -1;
      pFVar22 = (FString *)(piVar31 + 2);
      if (pFVar22 != &local_2b8) {
        pFVar6 = (pFVar22->Data).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (pFVar22->Data).AllocatorInstance.Data = local_2b8.Data.AllocatorInstance.Data;
        local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        piVar31[4] = local_2b8.Data.ArrayNum;
        piVar31[5] = local_2b8.Data.ArrayMax;
        local_2b8.Data.ArrayNum = 0;
        local_2b8.Data.ArrayMax = 0;
      }
      uVar27 = *(int *)(*(longlong *)this + 0x4b0) - 1;
    }
    lVar32 = *(longlong *)this;
    uVar36 = 0;
    if ((int)uVar27 < *(int *)(lVar32 + 0x4b0)) {
      uVar36 = ~uVar27 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar32 = *(longlong *)(lVar32 + 0x4a8) + (longlong)(int)uVar27 * 0x50;
    pFVar22 = (FString *)(lVar32 + 0x18);
    if (pFVar22 != &local_288) {
      pFVar6 = (pFVar22->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar22->Data).AllocatorInstance.Data = local_288.Data.AllocatorInstance.Data;
      local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar32 + 0x20) = local_288.Data.ArrayNum;
      *(int *)(lVar32 + 0x24) = local_288.Data.ArrayMax;
      local_288.Data.ArrayNum = 0;
      local_288.Data.ArrayMax = 0;
    }
    pFVar22 = (FString *)(lVar32 + 0x28);
    if (pFVar22 != &local_298) {
      pFVar6 = (pFVar22->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar22->Data).AllocatorInstance.Data = local_298.Data.AllocatorInstance.Data;
      local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar32 + 0x30) = local_298.Data.ArrayNum;
      *(int *)(lVar32 + 0x34) = local_298.Data.ArrayMax;
      local_298.Data.ArrayNum = 0;
      local_298.Data.ArrayMax = 0;
    }
    *(uint *)(lVar32 + 0x38) = local_2c4;
    *(uint *)(lVar32 + 0x3c) = local_2c0;
    *(uint *)(lVar32 + 0x40) = local_2bc;
    *(longlong *)(lVar32 + 0x48) = lVar33 + lVar28;
    if ((local_2f0 == (FArchive *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*(longlong *)local_2f0 + 0x188))
              (local_2f0,local_1b0.Data,(longlong)*(int *)&local_1c0[1].Data);
    local_f8[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_2f0 = (FArchive *)0x0;
    local_100 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_2e8,local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8[0].ReferenceController);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    FArchive::~FArchive((FArchive *)&local_258);
  }
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
LAB_146c94808:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e8.ReferenceController);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return;
}

// operator() @ 146c94890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::__l2::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FStreamingResultBase> *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadStream> FVar16;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime> FVar17;
  TArrayView<unsigned_char_const_,int> *pTVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  TStatId TVar21;
  uint uVar22;
  FName FVar23;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar24;
  FName FVar25;
  FLLMScope local_res10 [2];
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  FName local_1a8;
  byte local_1a0;
  FName local_198;
  longlong *local_190;
  FSharedReferencer<1> local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_160;
  LARGE_INTEGER local_150;
  LARGE_INTEGER local_148;
  FMemScope local_140;
  LARGE_INTEGER local_138;
  FStatMessage local_130;
  FStatMessage local_120;
  undefined8 local_110;
  FSharedReferencer<1> local_108;
  FStatMessage local_100;
  FSourceLocation local_e8;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  FName local_a8;
  FName local_a0;
  FName local_98 [2];
  uchar *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<unsigned_char_const_,int> local_68 [2];
  
  FVar16 = StatPtr_STAT_LocalReplay_ReadStream;
  if (StatPtr_STAT_LocalReplay_ReadStream ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadStream>)0x0) {
    pFVar15 = ::FName::FName(&local_a8,"STAT_LocalReplay_ReadStream");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadStream>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadStream,*pFVar15,
                        L"Local replay read stream","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar16;
  bVar10 = false;
  bVar9 = false;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_146c94a06:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    FVar25 = local_170;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_180.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_180.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_180,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0xd38);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c94a06;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar11 = true;
  }
  FLLMScope::FLLMScope(local_res10,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_140,Replays,true);
  if (((*(int *)((longlong)this + 8) < 0) ||
      (*(int *)(*(longlong *)this + 0x4c0) <= *(int *)((longlong)this + 8))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskReplayInfo.DataChunks.IsValidIndex(RequestedStreamChunkIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                          ,0xd3b,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar1 = &(param_1->DataBuffer).ArrayMax;
  (param_1->DataBuffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(param_1->DataBuffer).AllocatorInstance,0,piVar1);
  }
  FLocalFileNetworkReplayStreamer::GetDemoFullFilename
            (*(FLocalFileNetworkReplayStreamer **)this,&local_b8,
             &(*(FLocalFileNetworkReplayStreamer **)this)->CurrentStreamName);
  (**(code **)(**(longlong **)this + 0x1f8))(*(longlong **)this,&local_190);
  if (local_190 == (longlong *)0x0) goto LAB_146c952c9;
  if ((local_190 == (longlong *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar4 = local_190;
  uVar2 = *(uint *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  pcVar6 = *(code **)(*local_190 + 0x1b8);
  uVar22 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x4c0)) {
    uVar22 = ~uVar2 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (*pcVar6)(plVar4,*(undefined8 *)
                    (*(longlong *)(lVar3 + 0x4b8) + 0x18 + (longlong)(int)uVar2 * 0x28));
  uVar2 = *(uint *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  uVar22 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x4c0)) {
    uVar22 = ~uVar2 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,*(int *)(*(longlong *)(lVar3 + 0x4b8) + 0xc + (longlong)(int)uVar2 * 0x28),
             &(param_1->DataBuffer).AllocatorInstance,&(param_1->DataBuffer).ArrayNum,
             &(param_1->DataBuffer).ArrayMax);
  if ((local_190 == (longlong *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (**(code **)(*local_190 + 0x188))(local_190,(param_1->DataBuffer).AllocatorInstance.Data);
  if (*(char *)((longlong)*(longlong **)this + 0x46b) != '\0') {
    cVar13 = (**(code **)(**(longlong **)this + 0x1d8))();
    if (cVar13 == '\0') {
      if (1 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      (param_1->DataBuffer).ArrayNum = 0;
      if ((param_1->DataBuffer).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(param_1->DataBuffer).AllocatorInstance,0,&(param_1->DataBuffer).ArrayMax)
        ;
      }
      param_1->AsyncError = EncryptionNotSupported;
      goto LAB_146c952c9;
    }
    FVar17 = StatPtr_STAT_LocalReplay_DecryptTime;
    if (StatPtr_STAT_LocalReplay_DecryptTime ==
        (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime>)0x0) {
      pFVar15 = ::FName::FName(&local_a0,"STAT_LocalReplay_DecryptTime");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_DecryptTime,
                          *pFVar15,L"Local replay decrypt time","STATGROUP_LocalReplay",
                          "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
    FVar23 = *(FName *)FVar17;
    bVar12 = false;
    bVar8 = false;
    local_160.ComparisonIndex.Value = 0;
    local_160.Number = 0;
    if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_146c94d9f:
      bVar7 = false;
      FVar23 = local_160;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar12 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_178.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
          local_178.Number = FVar23.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_178,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                     ,0xd4e);
          bVar12 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146c94d9f;
      local_198 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar7 = true;
    }
    plVar4 = *(longlong **)this;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0 = 0;
    local_198 = *(FName *)(*plVar4 + 0x1f0);
    pTVar18 = TArrayView<unsigned_char_const_,int>::
              TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                        (local_68,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                  (plVar4 + 0x8e));
    iStack_c0 = (param_1->DataBuffer).ArrayNum;
    local_88 = pTVar18->DataPtr;
    uStack_80 = *(undefined8 *)&pTVar18->ArrayNum;
    local_c8 = (param_1->DataBuffer).AllocatorInstance.Data;
    if ((iStack_c0 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_78 = (undefined4)local_c8;
    uStack_74 = local_c8._4_4_;
    uStack_6c = uStack_bc;
    iStack_70 = iStack_c0;
    cVar13 = (*(code *)local_198)(plVar4,&local_78);
    if (cVar13 == '\0') {
      if (1 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      (param_1->DataBuffer).ArrayNum = 0;
      if ((param_1->DataBuffer).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(param_1->DataBuffer).AllocatorInstance,0,&(param_1->DataBuffer).ArrayMax)
        ;
      }
      param_1->AsyncError = DecryptBuffer;
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar7) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar19 == (FThreadStats *)0x0) {
          pFVar20 = FThreadStatsPool::Get();
          pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
        }
        if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
          local_120.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
          local_120.NameAndInfo.Index.Value = FVar23.ComparisonIndex.Value.Value;
          QueryPerformanceCounter(&local_148);
          local_120.StatData.Pad[4] = '\0';
          local_120.StatData.Pad[5] = '\0';
          local_120.StatData.Pad[6] = '\0';
          local_120.StatData.Pad[7] = '\0';
          local_120.StatData.Pad[0] = local_148.s.LowPart._0_1_;
          local_120.StatData.Pad[1] = local_148.s.LowPart._1_1_;
          local_120.StatData.Pad[2] = local_148.s.LowPart._2_1_;
          local_120.StatData.Pad[3] = local_148.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar19,&local_120);
          piVar1 = &pFVar19->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      goto LAB_146c952c9;
    }
    pTVar24 = &param_1->DataBuffer;
    if (pTVar24 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_1c8) {
      pFVar5 = (pTVar24->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar24->AllocatorInstance).Data = local_1c8.Data;
      (param_1->DataBuffer).ArrayNum = (int)local_1c0;
      (param_1->DataBuffer).ArrayMax = local_1c0._4_4_;
      local_1c0 = 0;
      local_1c8.Data = (FScriptContainerElement *)0x0;
    }
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar7) && (FVar23 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
        local_130.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
        local_130.NameAndInfo.Index.Value = FVar23.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_150);
        local_130.StatData.Pad[4] = '\0';
        local_130.StatData.Pad[5] = '\0';
        local_130.StatData.Pad[6] = '\0';
        local_130.StatData.Pad[7] = '\0';
        local_130.StatData.Pad[0] = local_150.s.LowPart._0_1_;
        local_130.StatData.Pad[1] = local_150.s.LowPart._1_1_;
        local_130.StatData.Pad[2] = local_150.s.LowPart._2_1_;
        local_130.StatData.Pad[3] = local_150.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar19,&local_130);
        piVar1 = &pFVar19->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar19,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar19,false,false);
        }
      }
    }
  }
  if (*(char *)((longlong)*(longlong **)this + 0x46a) != '\0') {
    cVar13 = (**(code **)(**(longlong **)this + 0x1c0))();
    if (cVar13 == '\0') {
      if (1 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      (param_1->DataBuffer).ArrayNum = 0;
      if ((param_1->DataBuffer).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(param_1->DataBuffer).AllocatorInstance,0,&(param_1->DataBuffer).ArrayMax)
        ;
      }
      param_1->AsyncError = CompressionNotSupported;
      goto LAB_146c952c9;
    }
    TVar21.StatIdPtr = (TStatIdData *)StatPtr_STAT_LocalReplay_DecompressTime;
    if (StatPtr_STAT_LocalReplay_DecompressTime ==
        (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecompressTime>)0x0) {
      pFVar15 = ::FName::FName(local_98,"STAT_LocalReplay_DecompressTime");
      TVar21.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_DecompressTime,*pFVar15
                      ,L"Local replay decompress time","STATGROUP_LocalReplay","STATCAT_Advanced",
                      L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_e8.Impl._Line = 0xd6a;
    local_e8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
    ;
    local_e8.Impl._Column = 8;
    local_e8.Impl._Function =
         "void __cdecl FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk::<lambda_1>::operator ()(class TLocalFileRequestCommonData<struct FStreamingResultBase> &) const"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_1a8,TVar21,CycleStat|ClearEveryFrame,false,&local_e8);
    local_1b8.Data = (FScriptContainerElement *)0x0;
    local_1b0 = 0;
    cVar13 = (**(code **)(**(longlong **)this + 0x1c8))(*(longlong **)this,&param_1->DataBuffer);
    if (cVar13 == '\0') {
      if (1 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      (param_1->DataBuffer).ArrayNum = 0;
      if ((param_1->DataBuffer).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(param_1->DataBuffer).AllocatorInstance,0,&(param_1->DataBuffer).ArrayMax)
        ;
      }
      param_1->AsyncError = DecompressBuffer;
      if (local_1b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data);
      }
      if ((local_1a0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_1a0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_1a0 & 4) != 0) {
        FThreadStats::AddMessage(local_1a8,CycleScopeEnd);
      }
      goto LAB_146c952c9;
    }
    pTVar24 = &param_1->DataBuffer;
    if (pTVar24 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_1b8) {
      pFVar5 = (pTVar24->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar24->AllocatorInstance).Data = local_1b8.Data;
      (param_1->DataBuffer).ArrayNum = (int)local_1b0;
      (param_1->DataBuffer).ArrayMax = local_1b0._4_4_;
      local_1b0 = 0;
      local_1b8.Data = (FScriptContainerElement *)0x0;
    }
    if (local_1b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data);
    }
    if ((local_1a0 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_1a0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_1a0 & 4) != 0) {
      FThreadStats::AddMessage(local_1a8,CycleScopeEnd);
    }
  }
  local_108.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_190 = (longlong *)0x0;
  local_110 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_188,&local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.ReferenceController);
LAB_146c952c9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.ReferenceController);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_140);
  FLLMScope::~FLLMScope(local_res10);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && (FVar25 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_100.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_138);
      local_100.StatData.Pad[4] = '\0';
      local_100.StatData.Pad[5] = '\0';
      local_100.StatData.Pad[6] = '\0';
      local_100.StatData.Pad[7] = '\0';
      local_100.StatData.Pad[0] = local_138.s.LowPart._0_1_;
      local_100.StatData.Pad[1] = local_138.s.LowPart._1_1_;
      local_100.StatData.Pad[2] = local_138.s.LowPart._2_1_;
      local_100.StatData.Pad[3] = local_138.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar19,&local_100);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  return;
}

// operator() @ 146c95510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal'::__l2::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FDeleteFinishedStreamResult> *param_1)

{
  int *piVar1;
  FLocalFileNetworkReplayStreamer *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_Delete> FVar11;
  longlong lVar12;
  IFileManager *pIVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  ForAnyElementType FVar17;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  char *in_stack_fffffffffffffea8;
  LARGE_INTEGER local_118;
  FName local_110;
  FString local_100;
  FLocalFileReplayInfo local_e8;
  FStatMessage local_58;
  FName local_48 [2];
  
  FVar11 = StatPtr_STAT_LocalReplay_Delete;
  if (StatPtr_STAT_LocalReplay_Delete == (FThreadSafeStaticStat<FStat_STAT_LocalReplay_Delete>)0x0)
  {
    pFVar10 = ::FName::FName(local_48,"STAT_LocalReplay_Delete");
    in_stack_fffffffffffffea8 = "STATCAT_Advanced";
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_Delete>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_Delete,*pFVar10,
                        L"Local replay delete","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar3 = false;
  bVar5 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar15.Value;
        local_res20.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x47a);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_118.s.LowPart = FVar15.Value;
      local_118.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      goto LAB_146c95666;
    }
  }
  bVar4 = false;
  FVar16 = local_110;
LAB_146c95666:
  this_00 = *(FLocalFileNetworkReplayStreamer **)this;
  bVar7 = IsInGameThread();
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                         ,0x465,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_e8.HeaderChunkIndex = -1;
  local_e8.LengthInMS = 0;
  local_e8.NetworkVersion = 0;
  local_e8.Changelist = 0;
  local_e8.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.FriendlyName.Data.ArrayNum = 0;
  local_e8.FriendlyName.Data.ArrayMax = 0;
  local_e8.Timestamp.Ticks = 0;
  local_e8.TotalDataSizeInBytes = 0;
  local_e8.bIsLive = false;
  local_e8.bIsValid = false;
  local_e8.bCompressed = false;
  local_e8.bEncrypted = false;
  local_e8.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.EncryptionKey.ArrayNum = 0;
  local_e8.EncryptionKey.ArrayMax = 0;
  local_e8.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Chunks.ArrayNum = 0;
  local_e8.Chunks.ArrayMax = 0;
  local_e8.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Checkpoints.ArrayNum = 0;
  local_e8.Checkpoints.ArrayMax = 0;
  local_e8.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Events.ArrayNum = 0;
  local_e8.Events.ArrayMax = 0;
  local_e8.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.DataChunks.ArrayNum = 0;
  local_e8.DataChunks.ArrayMax = 0;
  bVar7 = FLocalFileNetworkReplayStreamer::ReadReplayInfo
                    (this_00,(FString *)((longlong)this + 8),&local_e8,None);
  if ((bVar7) && (local_e8.bIsLive != false)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (local_e8.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.DataChunks.AllocatorInstance.Data);
  }
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)local_e8.Events.AllocatorInstance.Data,local_e8.Events.ArrayNum)
  ;
  if ((FLocalFileEventInfo *)local_e8.Events.AllocatorInstance.Data != (FLocalFileEventInfo *)0x0) {
    FMemory::Free(local_e8.Events.AllocatorInstance.Data);
  }
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)local_e8.Checkpoints.AllocatorInstance.Data,
             local_e8.Checkpoints.ArrayNum);
  if ((FLocalFileEventInfo *)local_e8.Checkpoints.AllocatorInstance.Data !=
      (FLocalFileEventInfo *)0x0) {
    FMemory::Free(local_e8.Checkpoints.AllocatorInstance.Data);
  }
  if (local_e8.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Chunks.AllocatorInstance.Data);
  }
  if (local_e8.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.EncryptionKey.AllocatorInstance.Data);
  }
  if (local_e8.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.FriendlyName.Data.AllocatorInstance.Data);
  }
  pTVar6 = UE::Net::LocalFileReplay::CVarAllowLiveStreamDelete.Ref;
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar12 = 0;
  }
  else {
    lVar12 = 4;
  }
  if ((*(int *)((longlong)pTVar6->ShadowedValue + lVar12) == 0) && (bVar7)) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
  }
  else {
    if ((2 < (byte)LogLocalFileReplay._0_1_) && (bVar7)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    FLocalFileNetworkReplayStreamer::GetDemoFullFilename
              (*(FLocalFileNetworkReplayStreamer **)this,&local_100,(FString *)((longlong)this + 8))
    ;
    bVar7 = FPaths::FileExists(&local_100);
    if (bVar7) {
      pIVar13 = IFileManager::Get();
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_100.Data.ArrayNum != 0) {
        FVar17.Data = local_100.Data.AllocatorInstance.Data;
      }
      cVar9 = (**(code **)((longlong)*pIVar13 + 0x38))
                        (pIVar13,FVar17.Data,0,0,
                         (ulonglong)in_stack_fffffffffffffea8 & 0xffffffffffffff00);
      if (cVar9 != '\0') {
        *(undefined4 *)&(param_1->DelegateResult).field_0x8 = 0;
      }
    }
    else {
      *(undefined4 *)&(param_1->DelegateResult).field_0x8 = 2;
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_58.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_118);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_118.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_118.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_118.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_118.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_58);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// operator() @ 146c95970

void __thiscall
`FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal'::__l2::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FEnumerateEventsResult> *param_1)

{
  int *piVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FString *pFVar10;
  size_t sVar11;
  ulonglong uVar12;
  longlong lVar13;
  FLocalFileEventInfo *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  undefined1 local_res8 [8];
  FString local_138;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  FString local_118;
  FLocalFileReplayInfo local_108;
  FString local_78;
  TStringView<wchar_t> local_68;
  FScriptContainerElement *local_58;
  int local_50;
  FString local_48;
  
  local_138.Data.ArrayNum = *(int *)((longlong)this + 0x10);
  lVar13 = (longlong)local_138.Data.ArrayNum;
  pvVar2 = *(void **)((longlong)this + 8);
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_138.Data.ArrayNum == 0) {
    local_138.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_138.Data.ArrayNum,0,(ForAnyElementType *)&local_138,local_138.Data.ArrayNum
               ,&local_138.Data.ArrayMax);
    memcpy(local_138.Data.AllocatorInstance.Data,pvVar2,lVar13 * 2);
  }
  if (local_138.Data.ArrayNum < 2) {
    iVar7 = *(int *)(*(longlong *)this + 0x3c8);
    iVar16 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar16 = 0;
    }
    ::FString::AssignRange(&local_138,*(wchar_t **)(*(longlong *)this + 0x3c0),iVar16);
  }
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = *(int *)(*(longlong *)this + 0x3d8);
  lVar13 = (longlong)local_120;
  pvVar2 = *(void **)(*(longlong *)this + 0x3d0);
  if (local_120 == 0) {
    local_11c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_120,0,&local_128,local_120,&local_11c);
    memcpy(local_128.Data,pvVar2,lVar13 * 2);
  }
  bVar6 = FPaths::IsRelative(&local_138);
  _Src.Data = local_138.Data.AllocatorInstance.Data;
  if (bVar6) {
    pFVar10 = FNetworkReplayStreaming::GetReplayFileExtension(&local_48);
    local_58 = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      local_58 = local_138.Data.AllocatorInstance.Data;
    }
    iVar7 = 0;
    local_68.DataPtr = L"";
    if (local_120 != 0) {
      local_68.DataPtr = (wchar_t *)local_128.Data;
    }
    local_68.Size = iVar7;
    if ((FScriptContainerElement *)local_68.DataPtr != (FScriptContainerElement *)0x0) {
      sVar11 = wcslen(local_68.DataPtr);
      local_68.Size = (int)sVar11;
    }
    if (local_58 != (FScriptContainerElement *)0x0) {
      sVar11 = wcslen((wchar_t *)local_58);
      iVar7 = (int)sVar11;
    }
    local_50 = iVar7;
    FPaths::CombineInternal(&local_78,&local_68,2);
    ::FString::ConcatFF(&local_118,&local_78,pFVar10);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    lVar13 = (longlong)local_138.Data.ArrayNum;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = local_138.Data.ArrayNum;
    if (local_138.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_138.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
                 local_138.Data.ArrayNum,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,lVar13 * 2);
    }
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  bVar6 = FPaths::FileExists(&local_118);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    local_108.LengthInMS = 0;
    local_108.NetworkVersion = 0;
    local_108.Timestamp.Ticks = 0;
    local_108.TotalDataSizeInBytes = 0;
    local_108.Changelist = 0;
    local_108.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.FriendlyName.Data.ArrayNum = 0;
    local_108.FriendlyName.Data.ArrayMax = 0;
    local_108.bIsLive = false;
    local_108.bIsValid = false;
    local_108.bCompressed = false;
    local_108.bEncrypted = false;
    local_108.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.EncryptionKey.ArrayNum = 0;
    local_108.EncryptionKey.ArrayMax = 0;
    local_108.HeaderChunkIndex = -1;
    local_108.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Chunks.ArrayNum = 0;
    local_108.Chunks.ArrayMax = 0;
    local_108.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Checkpoints.ArrayNum = 0;
    local_108.Checkpoints.ArrayMax = 0;
    local_108.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Events.ArrayNum = 0;
    local_108.Events.ArrayMax = 0;
    local_108.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.DataChunks.ArrayNum = 0;
    local_108.DataChunks.ArrayMax = 0;
    bVar6 = FLocalFileNetworkReplayStreamer::ReadReplayInfo
                      (*(FLocalFileNetworkReplayStreamer **)this,&local_138,&local_108,None);
    uVar5 = local_108.Events._8_8_;
    if (bVar6) {
      uVar12 = (ulonglong)local_108.Events.ArrayNum;
      pFVar15 = local_108.Events.AllocatorInstance.Data + 0x18;
      pFVar14 = (FLocalFileEventInfo *)(local_108.Events.AllocatorInstance.Data + uVar12 * 0x50);
      while( true ) {
        if (local_108.Events.ArrayNum != (int)uVar12) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FLocalFileEventInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if ((FLocalFileEventInfo *)(pFVar15 + -0x18) == pFVar14) break;
        iVar7 = *(int *)((longlong)this + 0x20);
        if (iVar7 < 2) {
LAB_146c95cba:
          uVar8 = (param_1->DelegateResult).ReplayEventList.ReplayEvents.ArrayNum;
          piVar1 = &(param_1->DelegateResult).ReplayEventList.ReplayEvents.ArrayMax;
          if (uVar8 == *piVar1) {
            uVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x840,&(param_1->DelegateResult).ReplayEventList.ReplayEvents.
                                      AllocatorInstance,piVar1);
            (param_1->DelegateResult).ReplayEventList.ReplayEvents.ArrayNum = uVar8;
          }
          pFVar3 = (param_1->DelegateResult).ReplayEventList.ReplayEvents.AllocatorInstance.Data;
          (param_1->DelegateResult).ReplayEventList.ReplayEvents.ArrayNum = uVar8 + 1;
          lVar13 = (longlong)(int)uVar8 * 0x40;
          DefaultConstructItems<FReplayEventListItem,int>(pFVar3 + lVar13,1);
          uVar9 = 0;
          if ((int)uVar8 < (param_1->DelegateResult).ReplayEventList.ReplayEvents.ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar3 = (param_1->DelegateResult).ReplayEventList.ReplayEvents.AllocatorInstance.Data;
          ::FString::operator=((FString *)(pFVar3 + lVar13 + 8),(FString *)(pFVar15 + -0x10));
          ::FString::operator=((FString *)(pFVar3 + lVar13 + 0x18),(FString *)pFVar15);
          ::FString::operator=((FString *)(pFVar3 + lVar13 + 0x28),(FString *)(pFVar15 + 0x10));
          *(uint *)(pFVar3 + lVar13 + 0x38) = *(uint *)(pFVar15 + 0x20);
          *(uint *)(pFVar3 + lVar13 + 0x3c) = *(uint *)(pFVar15 + 0x24);
        }
        else {
          iVar16 = *(int *)(pFVar15 + 8);
          if (iVar16 == iVar7) {
            if (iVar16 < 2) goto LAB_146c95cba;
            iVar7 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar15,*(wchar_t **)((longlong)this + 0x18));
            bVar6 = iVar7 == 0;
          }
          else {
            bVar6 = iVar7 + iVar16 == 1;
          }
          if (bVar6) goto LAB_146c95cba;
        }
        uVar12 = uVar5 & 0xffffffff;
        pFVar15 = pFVar15 + 0x50;
      }
      *(undefined4 *)&(param_1->DelegateResult)._padding_ = 0;
    }
    if (local_108.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.DataChunks.AllocatorInstance.Data);
    }
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)local_108.Events.AllocatorInstance.Data,
               local_108.Events.ArrayNum);
    if ((FLocalFileEventInfo *)local_108.Events.AllocatorInstance.Data != (FLocalFileEventInfo *)0x0
       ) {
      FMemory::Free(local_108.Events.AllocatorInstance.Data);
    }
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)local_108.Checkpoints.AllocatorInstance.Data,
               local_108.Checkpoints.ArrayNum);
    if ((FLocalFileEventInfo *)local_108.Checkpoints.AllocatorInstance.Data !=
        (FLocalFileEventInfo *)0x0) {
      FMemory::Free(local_108.Checkpoints.AllocatorInstance.Data);
    }
    if (local_108.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Chunks.AllocatorInstance.Data);
    }
    if (local_108.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.EncryptionKey.AllocatorInstance.Data);
    }
    if (local_108.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.FriendlyName.Data.AllocatorInstance.Data);
    }
  }
  else {
    *(undefined4 *)&(param_1->DelegateResult)._padding_ = 2;
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 146c95e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::EnumerateStreams'::__l2::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FEnumerateStreamsResult> *param_1)

{
  int *piVar1;
  FName FVar2;
  void *pvVar3;
  FLocalFileNetworkReplayStreamer *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_Enumerate> FVar13;
  FString *pFVar14;
  IFileManager *pIVar15;
  ulonglong uVar16;
  FString *pFVar17;
  size_t sVar18;
  longlong *plVar19;
  FString *pFVar20;
  longlong lVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  char *in_stack_fffffffffffffd98;
  FString local_228;
  FString local_218;
  longlong local_208;
  long64 lStack_200;
  undefined8 local_1f8;
  uint local_1f0;
  undefined2 local_1ec;
  FString local_1e8;
  FString *local_1d8;
  undefined8 local_1d0;
  ForAnyElementType local_1c8;
  int local_1c0;
  int local_1bc;
  uint local_1b8;
  FString local_1b0;
  FLocalFileReplayInfo local_198;
  FName local_108;
  FName local_100;
  FName local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  FScriptContainerElement *local_a8;
  undefined4 local_a0;
  FName local_98;
  undefined1 local_90 [8];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  FVar13 = StatPtr_STAT_LocalReplay_Enumerate;
  if (StatPtr_STAT_LocalReplay_Enumerate ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_Enumerate>)0x0) {
    pFVar12 = ::FName::FName(&local_98,"STAT_LocalReplay_Enumerate");
    in_stack_fffffffffffffd98 = "STATCAT_Advanced";
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_Enumerate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_Enumerate,*pFVar12,
                        L"Local replay enumerate","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar13;
  bVar7 = false;
  bVar6 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_108.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x499);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar8 = true;
      goto LAB_146c95fe9;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  local_100 = local_f8;
LAB_146c95fe9:
  pFVar14 = FNetworkReplayStreaming::GetReplayFileExtension(&local_88);
  local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.Data.ArrayNum = *(int *)(*(longlong *)this + 0x3d8);
  lVar21 = (longlong)local_1b0.Data.ArrayNum;
  pvVar3 = *(void **)(*(longlong *)this + 0x3d0);
  if (local_1b0.Data.ArrayNum == 0) {
    local_1b0.Data.ArrayMax = 0;
  }
  else {
    in_stack_fffffffffffffd98 = (char *)&local_1b0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1b0.Data.ArrayNum,0,(ForAnyElementType *)in_stack_fffffffffffffd98,
               local_1b0.Data.ArrayNum,&local_1b0.Data.ArrayMax);
    memcpy(local_1b0.Data.AllocatorInstance.Data,pvVar3,lVar21 * 2);
  }
  ::FString::ConcatFC(&local_d8,&local_1b0,L"*");
  ::FString::ConcatFF(&local_e8,&local_d8,pFVar14);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_1d8 = (FString *)0x0;
  local_1d0 = 0;
  pIVar15 = IFileManager::Get();
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar22.Data = local_e8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar15 + 0x80))
            (pIVar15,&local_1d8,FVar22.Data,1,
             (ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
  uVar16 = (ulonglong)(int)(uint)local_1d0;
  pFVar20 = local_1d8 + uVar16;
  local_1b8 = (uint)local_1d0;
  pFVar14 = local_1d8;
  do {
    if ((uint)local_1d0 != (int)uVar16) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar14 == pFVar20) {
      *(undefined4 *)&(param_1->DelegateResult)._padding_ = 0;
      DestructItems<FString,int>(local_1d8,(uint)local_1d0);
      FVar2 = local_100;
      if (local_1d8 != (FString *)0x0) {
        FMemory::Free(local_1d8);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar8) {
        FThreadStats::AddMessage(FVar2,CycleScopeEnd);
      }
      return;
    }
    this_00 = *(FLocalFileNetworkReplayStreamer **)this;
    local_198.LengthInMS = 0;
    local_198.NetworkVersion = 0;
    local_198.Timestamp.Ticks = 0;
    local_198.TotalDataSizeInBytes = 0;
    local_198.Changelist = 0;
    local_198.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.FriendlyName.Data.ArrayNum = 0;
    local_198.FriendlyName.Data.ArrayMax = 0;
    local_198.bIsLive = false;
    local_198.bIsValid = false;
    local_198.bCompressed = false;
    local_198.bEncrypted = false;
    local_198.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.EncryptionKey.ArrayNum = 0;
    local_198.EncryptionKey.ArrayMax = 0;
    local_198.HeaderChunkIndex = -1;
    local_198.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Chunks.ArrayNum = 0;
    local_198.Chunks.ArrayMax = 0;
    local_198.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Checkpoints.ArrayNum = 0;
    local_198.Checkpoints.ArrayMax = 0;
    local_198.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Events.ArrayNum = 0;
    local_198.Events.ArrayMax = 0;
    local_198.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.DataChunks.ArrayNum = 0;
    local_198.DataChunks.ArrayMax = 0;
    pFVar17 = FPaths::GetBaseFilename(&local_78,pFVar14,true);
    bVar9 = FLocalFileNetworkReplayStreamer::ReadReplayInfo(this_00,pFVar17,&local_198,None);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      if ((*(uint *)((longlong)this + 0x18) == 0) ||
         (*(uint *)((longlong)this + 0x18) == local_198.NetworkVersion)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((*(uint *)((longlong)this + 0x1c) == 0) ||
         (*(uint *)((longlong)this + 0x1c) == local_198.Changelist)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((bVar9) && (bVar5)) {
        local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208 = 0;
        lStack_200 = 0;
        local_228.Data.ArrayNum = 0;
        local_228.Data.ArrayMax = 0;
        local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.Data.ArrayNum = 0;
        local_218.Data.ArrayMax = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 0;
        pFVar17 = FPaths::GetBaseFilename(&local_68,pFVar14,true);
        if (&local_228 != pFVar17) {
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          local_228.Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
          (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_228.Data.ArrayNum = (pFVar17->Data).ArrayNum;
          local_228.Data.ArrayMax = (pFVar17->Data).ArrayMax;
          (pFVar17->Data).ArrayNum = 0;
          (pFVar17->Data).ArrayMax = 0;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_1ec = CONCAT11(local_1ec._1_1_,local_198.bIsLive);
        local_1f0 = local_198.Changelist;
        local_1f8 = CONCAT44(local_1f8._4_4_,local_198.LengthInMS);
        iVar11 = local_198.FriendlyName.Data.ArrayNum + -1;
        if (local_198.FriendlyName.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        ::FString::AssignRange
                  (&local_218,(wchar_t *)local_198.FriendlyName.Data.AllocatorInstance.Data,iVar11);
        lStack_200 = local_198.TotalDataSizeInBytes;
        local_208 = local_198.Timestamp.Ticks;
        if (local_198.Timestamp.Ticks == 0) {
          pIVar15 = IFileManager::Get();
          local_1c8.Data = (FScriptContainerElement *)0x0;
          pcVar4 = *(code **)((longlong)*pIVar15 + 0xd8);
          local_1c0 = *(int *)(*(longlong *)this + 0x3d8);
          lVar21 = (longlong)local_1c0;
          pvVar3 = *(void **)(*(longlong *)this + 0x3d0);
          if (local_1c0 == 0) {
            local_1bc = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_1c0,0,&local_1c8,local_1c0,&local_1bc);
            memcpy(local_1c8.Data,pvVar3,lVar21 * 2);
          }
          bVar9 = FPaths::IsRelative(&local_228);
          FVar22.Data = local_228.Data.AllocatorInstance.Data;
          if (bVar9) {
            pFVar17 = FNetworkReplayStreaming::GetReplayFileExtension(&local_58);
            FVar22.Data = (FScriptContainerElement *)L"";
            if (local_228.Data.ArrayNum != 0) {
              FVar22.Data = local_228.Data.AllocatorInstance.Data;
            }
            local_b8.DataPtr = L"";
            if (local_1c0 != 0) {
              local_b8.DataPtr = (wchar_t *)local_1c8.Data;
            }
            iVar11 = 0;
            if ((FScriptContainerElement *)local_b8.DataPtr != (FScriptContainerElement *)0x0) {
              sVar18 = wcslen(local_b8.DataPtr);
              iVar11 = (int)sVar18;
            }
            uVar10 = 0;
            local_b8.Size = iVar11;
            local_a8 = FVar22.Data;
            if (FVar22.Data != (FScriptContainerElement *)0x0) {
              sVar18 = wcslen((wchar_t *)FVar22.Data);
              uVar10 = (undefined4)sVar18;
            }
            local_a0 = uVar10;
            FPaths::CombineInternal(&local_c8,&local_b8,2);
            ::FString::ConcatFF(&local_1e8,&local_c8,pFVar17);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          else {
            lVar21 = (longlong)local_228.Data.ArrayNum;
            local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1e8.Data.ArrayNum = local_228.Data.ArrayNum;
            if (local_228.Data.ArrayNum == 0) {
              local_1e8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_228.Data.ArrayNum,0,(ForAnyElementType *)&local_1e8,
                         local_228.Data.ArrayNum,&local_1e8.Data.ArrayMax);
              memcpy(local_1e8.Data.AllocatorInstance.Data,FVar22.Data,lVar21 * 2);
            }
          }
          if (local_1c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data);
          }
          FVar22.Data = (FScriptContainerElement *)L"";
          if (local_1e8.Data.ArrayNum != 0) {
            FVar22.Data = local_1e8.Data.AllocatorInstance.Data;
          }
          plVar19 = (longlong *)(*pcVar4)(pIVar15,local_90,FVar22.Data);
          local_208 = *plVar19;
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
        }
        pFVar23 = (param_1->DelegateResult).FoundStreams.AllocatorInstance.Data;
        if (((pFVar23 <= (FScriptContainerElement *)&local_228) &&
            ((FScriptContainerElement *)&local_228 <
             pFVar23 + (longlong)(param_1->DelegateResult).FoundStreams.ArrayMax * 0x40)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (param_1->DelegateResult).FoundStreams.ArrayNum;
        piVar1 = &(param_1->DelegateResult).FoundStreams.ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,&(param_1->DelegateResult).FoundStreams.AllocatorInstance,piVar1
                             );
        }
        (param_1->DelegateResult).FoundStreams.ArrayNum = iVar11 + 1;
        pFVar23 = (param_1->DelegateResult).FoundStreams.AllocatorInstance.Data +
                  (longlong)iVar11 * 0x40;
        ::FString::FString((FString *)pFVar23,&local_228);
        ::FString::FString((FString *)(pFVar23 + 0x10),&local_218);
        *(longlong *)&pFVar23[0x20].field_0x0 = local_208;
        *(long64 *)(pFVar23 + 0x28) = lStack_200;
        *(undefined4 *)&pFVar23[0x30].field_0x0 = (undefined4)local_1f8;
        *(undefined4 *)(pFVar23 + 0x34) = local_1f8._4_4_;
        *(uint *)(pFVar23 + 0x38) = local_1f0;
        pFVar23[0x3c] = local_1ec._0_1_;
        pFVar23[0x3d] = local_1ec._1_1_;
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_198.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.DataChunks.AllocatorInstance.Data);
    }
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)local_198.Events.AllocatorInstance.Data,
               local_198.Events.ArrayNum);
    if ((FLocalFileEventInfo *)local_198.Events.AllocatorInstance.Data != (FLocalFileEventInfo *)0x0
       ) {
      FMemory::Free(local_198.Events.AllocatorInstance.Data);
    }
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)local_198.Checkpoints.AllocatorInstance.Data,
               local_198.Checkpoints.ArrayNum);
    if ((FLocalFileEventInfo *)local_198.Checkpoints.AllocatorInstance.Data !=
        (FLocalFileEventInfo *)0x0) {
      FMemory::Free(local_198.Checkpoints.AllocatorInstance.Data);
    }
    if (local_198.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Chunks.AllocatorInstance.Data);
    }
    if (local_198.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.EncryptionKey.AllocatorInstance.Data);
    }
    if (local_198.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.FriendlyName.Data.AllocatorInstance.Data);
    }
    uVar16 = (ulonglong)local_1b8;
    pFVar14 = pFVar14 + 1;
  } while( true );
}

// operator() @ 146c966d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_1>::operator()
          (void *this,ELocalFileReplayResult *param_1)

{
  int *piVar1;
  void **ppvVar2;
  FString *pFVar3;
  FLocalFileNetworkReplayStreamer *pFVar4;
  code *pcVar5;
  longlong *plVar6;
  ELocalFileChunkType *pEVar7;
  uint *puVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FArchive *pFVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  bool bVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushCheckpoint> FVar20;
  undefined8 uVar21;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_CompressTime> FVar22;
  FThreadStats *pFVar23;
  FThreadStatsPool *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_EncryptTime> FVar25;
  TArrayView<unsigned_char_const_,int> *pTVar26;
  long64 lVar27;
  longlong lVar28;
  long64 lVar29;
  longlong lVar30;
  FLocalFileChunkInfo *pFVar31;
  FLocalFileEventInfo *pFVar32;
  uint uVar33;
  FNameEntryId FVar34;
  FName FVar35;
  FName FVar36;
  ELocalFileChunkType local_res20 [2];
  FArchive *local_228;
  FSharedReferencer<1> local_220;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  void *local_208;
  undefined8 local_200;
  uint local_1f8 [2];
  uint local_1f0;
  uint uStack_1ec;
  void *local_1e8;
  undefined8 local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FColor_u_0 local_1a8;
  FColor_u_0 local_1a4;
  int local_1a0;
  int local_19c;
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_168;
  FName local_158;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  FStatMessage local_120;
  FStatMessage local_110;
  FStatMessage local_100;
  FStatMessage local_f0;
  undefined8 local_e0;
  FSharedReferencer<1> local_d8;
  FStatMessage local_d0;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FString local_90;
  uchar *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<unsigned_char_const_,int> local_58 [2];
  
  FVar20 = StatPtr_STAT_LocalReplay_FlushCheckpoint;
  if (StatPtr_STAT_LocalReplay_FlushCheckpoint ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushCheckpoint>)0x0) {
    pFVar19 = ::FName::FName(&local_a8,"STAT_LocalReplay_FlushCheckpoint");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushCheckpoint>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_FlushCheckpoint,
                        *pFVar19,L"Local replay flush checkpoint","STATGROUP_LocalReplay",
                        "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar36 = *(FName *)FVar20;
  bVar13 = false;
  bVar12 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar16 = false;
  bVar15 = false;
  if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_146c9683d:
    bVar13 = bVar16;
    bVar12 = bVar15;
    bVar15 = false;
    FVar36 = local_168;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar16 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
        local_190.Number = FVar36.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x80f);
        bVar13 = true;
        bVar12 = true;
        bVar16 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c9683d;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar15 = true;
  }
  pFVar4 = *(FLocalFileNetworkReplayStreamer **)this;
  local_19c = (pFVar4->TaskReplayInfo).DataChunks.ArrayNum;
  local_1a0 = (pFVar4->TaskReplayInfo).Checkpoints.ArrayNum;
  pcVar5 = *(code **)(pFVar4->_padding_ + 0x200);
  FLocalFileNetworkReplayStreamer::GetDemoFullFilename(pFVar4,&local_90,&pFVar4->CurrentStreamName);
  (*pcVar5)(pFVar4,&local_228);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_228 == (FArchive *)0x0) {
    *param_1 = FileWriter;
    goto LAB_146c977fb;
  }
  if ((local_228 == (FArchive *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar14 = local_228;
  pcVar5 = *(code **)(*(longlong *)local_228 + 0x1b8);
  if ((local_228 == (FArchive *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar21 = (**(code **)(*(longlong *)local_228 + 0x30))();
  (*pcVar5)(pFVar14,uVar21);
  local_208 = (void *)0x0;
  local_200 = 0;
  cVar17 = (**(code **)(**(longlong **)this + 0x1c0))();
  if (cVar17 == '\0') {
    ppvVar2 = (void **)((longlong)this + 0x10);
    if (&local_208 != ppvVar2) {
      if (local_208 != (void *)0x0) {
        FMemory::Free(local_208);
      }
      local_208 = *ppvVar2;
      *ppvVar2 = (void *)0x0;
      local_200 = *(undefined8 *)((longlong)this + 0x18);
      *(undefined8 *)((longlong)this + 0x18) = 0;
    }
LAB_146c96c84:
    local_1e8 = (void *)0x0;
    local_1e0 = 0;
    bVar16 = FLocalFileNetworkReplayStreamer::AllowEncryptedWrite
                       (*(FLocalFileNetworkReplayStreamer **)this);
    if (bVar16) {
      FVar25 = StatPtr_STAT_LocalReplay_EncryptTime;
      if (StatPtr_STAT_LocalReplay_EncryptTime ==
          (FThreadSafeStaticStat<FStat_STAT_LocalReplay_EncryptTime>)0x0) {
        pFVar19 = ::FName::FName(&local_a0,"STAT_LocalReplay_EncryptTime");
        FVar25 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_EncryptTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_EncryptTime,
                            *pFVar19,L"Local replay encrypt time","STATGROUP_LocalReplay",
                            "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,
                            MCR_Invalid);
      }
      FVar35 = *(FName *)FVar25;
      bVar16 = false;
      bVar11 = false;
      local_158.ComparisonIndex.Value = 0;
      local_158.Number = 0;
      FVar34 = FVar35.ComparisonIndex.Value;
      uVar33 = FVar35.Number;
      if ((FVar34.Value == 0) && (uVar33 == 0)) {
LAB_146c96dbb:
        bVar10 = false;
        FVar35 = local_158;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_1a4.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_1a4._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
          bVar16 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            local_180.ComparisonIndex.Value = FVar34.Value;
            local_180.Number = uVar33;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_180,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                       ,0x82f);
            bVar16 = true;
            bVar11 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_146c96dbb;
        local_1f0 = FVar34.Value;
        uStack_1ec = uVar33;
        FThreadStats::AddMessage(FVar35,CycleScopeStart);
        bVar10 = true;
      }
      plVar6 = *(longlong **)this;
      pcVar5 = *(code **)(*plVar6 + 0x1e8);
      pTVar26 = TArrayView<unsigned_char_const_,int>::
                TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                          (local_58,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                    (plVar6 + 0x8e));
      iStack_b0 = (int)local_200;
      local_78 = pTVar26->DataPtr;
      uStack_70 = *(undefined8 *)&pTVar26->ArrayNum;
      local_b8 = local_208;
      if (((int)local_200 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_68 = (undefined4)local_b8;
      uStack_64 = local_b8._4_4_;
      iStack_60 = iStack_b0;
      uStack_5c = uStack_ac;
      cVar17 = (*pcVar5)(plVar6,&local_68,&local_1e8,&local_78);
      if (cVar17 == '\0') {
        if (2 < (byte)LogLocalFileReplay._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
        }
        *param_1 = EncryptBuffer;
        if (bVar11) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar16) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar10) && (FVar35 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)
            ) && (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar23 == (FThreadStats *)0x0) {
            pFVar24 = FThreadStatsPool::Get();
            pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
          }
          if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
            local_100.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
            local_100.NameAndInfo.Index.Value = FVar35.ComparisonIndex.Value.Value;
            QueryPerformanceCounter(&local_130);
            local_100.StatData.Pad[4] = '\0';
            local_100.StatData.Pad[5] = '\0';
            local_100.StatData.Pad[6] = '\0';
            local_100.StatData.Pad[7] = '\0';
            local_100.StatData.Pad[0] = local_130.s.LowPart._0_1_;
            local_100.StatData.Pad[1] = local_130.s.LowPart._1_1_;
            local_100.StatData.Pad[2] = local_130.s.LowPart._2_1_;
            local_100.StatData.Pad[3] = local_130.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar23,&local_100);
            piVar1 = &pFVar23->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar23,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar23,false,false);
            }
          }
        }
        if (local_1e8 != (void *)0x0) {
          FMemory::Free(local_1e8);
        }
        goto LAB_146c96f68;
      }
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar10) && (FVar35 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar23 == (FThreadStats *)0x0) {
          pFVar24 = FThreadStatsPool::Get();
          pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
        }
        if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
          local_f0.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
          local_f0.NameAndInfo.Index.Value = FVar35.ComparisonIndex.Value.Value;
          QueryPerformanceCounter(&local_140);
          local_f0.StatData.Pad[4] = '\0';
          local_f0.StatData.Pad[5] = '\0';
          local_f0.StatData.Pad[6] = '\0';
          local_f0.StatData.Pad[7] = '\0';
          local_f0.StatData.Pad[0] = local_140.s.LowPart._0_1_;
          local_f0.StatData.Pad[1] = local_140.s.LowPart._1_1_;
          local_f0.StatData.Pad[2] = local_140.s.LowPart._2_1_;
          local_f0.StatData.Pad[3] = local_140.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar23,&local_f0);
          piVar1 = &pFVar23->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar23,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar23,false,false);
          }
        }
      }
    }
    else {
      if (local_1e8 != (void *)0x0) {
        FMemory::Free(local_1e8);
      }
      local_1e8 = local_208;
      local_1e0 = local_200;
      local_200 = 0;
      local_208 = (void *)0x0;
    }
    if (0 < (int)(uint)local_1e0) {
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar27 = (**(code **)(*(longlong *)local_228 + 0x28))();
      local_res20[0] = Checkpoint;
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pEVar7 = (ELocalFileChunkType *)**(undefined8 **)&local_228->field_0x8;
      if ((ELocalFileChunkType *)(*(undefined8 **)&local_228->field_0x8)[1] < pEVar7 + 1) {
        if ((local_228->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)local_228 + 0x188))(local_228,local_res20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(local_228,local_res20);
        }
      }
      else {
        local_res20[0] = *pEVar7;
        **(longlong **)&local_228->field_0x8 = **(longlong **)&local_228->field_0x8 + 4;
      }
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar21 = (**(code **)(*(longlong *)local_228 + 0x28))();
      local_1f8[0] = 0;
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar8 = (uint *)**(undefined8 **)&local_228->field_0x8;
      if ((uint *)(*(undefined8 **)&local_228->field_0x8)[1] < puVar8 + 1) {
        if ((local_228->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)local_228 + 0x188))(local_228,local_1f8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(local_228,local_1f8);
        }
      }
      else {
        local_1f8[0] = *puVar8;
        **(longlong **)&local_228->field_0x8 = **(longlong **)&local_228->field_0x8 + 4;
      }
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar28 = (**(code **)(*(longlong *)local_228 + 0x28))();
      ::FString::PrintfImpl(&local_1b8,L"checkpoint%ld");
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::operator<<(local_228,&local_1b8);
      ::FString::FString(&local_1c8,L"checkpoint");
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::operator<<(local_228,&local_1c8);
      ::FString::PrintfImpl(&local_1d8,L"%ld");
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::operator<<(local_228,&local_1d8);
      local_214 = *(uint *)((longlong)this + 8);
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar8 = (uint *)**(undefined8 **)&local_228->field_0x8;
      if ((uint *)(*(undefined8 **)&local_228->field_0x8)[1] < puVar8 + 1) {
        if ((local_228->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)local_228 + 0x188))(local_228,&local_214,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(local_228,&local_214);
        }
      }
      else {
        local_214 = *puVar8;
        **(longlong **)&local_228->field_0x8 = **(longlong **)&local_228->field_0x8 + 4;
      }
      local_210 = *(uint *)((longlong)this + 8);
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar8 = (uint *)**(undefined8 **)&local_228->field_0x8;
      if ((uint *)(*(undefined8 **)&local_228->field_0x8)[1] < puVar8 + 1) {
        if ((local_228->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)local_228 + 0x188))(local_228,&local_210,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(local_228,&local_210);
        }
      }
      else {
        local_210 = *puVar8;
        **(longlong **)&local_228->field_0x8 = **(longlong **)&local_228->field_0x8 + 4;
      }
      local_20c = (uint)local_1e0;
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar8 = (uint *)**(undefined8 **)&local_228->field_0x8;
      if ((uint *)(*(undefined8 **)&local_228->field_0x8)[1] < puVar8 + 1) {
        if ((local_228->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)local_228 + 0x188))(local_228,&local_20c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(local_228,&local_20c);
        }
      }
      else {
        local_20c = *puVar8;
        **(longlong **)&local_228->field_0x8 = **(longlong **)&local_228->field_0x8 + 4;
      }
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar29 = (**(code **)(*(longlong *)local_228 + 0x28))();
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*(longlong *)local_228 + 0x188))
                (local_228,local_1e8,(longlong)(int)(uint)local_1e0);
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar30 = (**(code **)(*(longlong *)local_228 + 0x28))();
      local_218 = IntCastChecked<int,__int64>(lVar30 - lVar28);
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*(longlong *)local_228 + 0x1b8))(local_228,uVar21);
      if ((local_228 == (FArchive *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar8 = (uint *)**(undefined8 **)&local_228->field_0x8;
      if ((uint *)(*(undefined8 **)&local_228->field_0x8)[1] < puVar8 + 1) {
        if ((local_228->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)local_228 + 0x188))(local_228,&local_218,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(local_228,&local_218);
        }
      }
      else {
        local_218 = *puVar8;
        **(longlong **)&local_228->field_0x8 = **(longlong **)&local_228->field_0x8 + 4;
      }
      pFVar31 = TArray<FLocalFileChunkInfo,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
                          ((TArray<FLocalFileChunkInfo,TSizedDefaultAllocator<32>_> *)
                           (*(longlong *)this + 0x488));
      pFVar31->ChunkType = local_res20[0];
      pFVar31->TypeOffset = lVar27;
      pFVar31->DataOffset = lVar28;
      pFVar31->SizeInBytes = local_218;
      pFVar32 = TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
                          ((TArray<FLocalFileEventInfo,TSizedDefaultAllocator<32>_> *)
                           (*(longlong *)this + 0x498));
      pFVar3 = &pFVar32->Id;
      pFVar32->ChunkIndex = *(int *)(*(longlong *)this + 0x490) + -1;
      if (pFVar3 != &local_1b8) {
        pFVar9 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
        (pFVar3->Data).AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar32->Id).Data.ArrayNum = local_1b8.Data.ArrayNum;
        (pFVar32->Id).Data.ArrayMax = local_1b8.Data.ArrayMax;
        local_1b8.Data.ArrayNum = 0;
        local_1b8.Data.ArrayMax = 0;
      }
      pFVar3 = &pFVar32->Group;
      if (pFVar3 != &local_1c8) {
        pFVar9 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
        (pFVar3->Data).AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
        local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar32->Group).Data.ArrayNum = local_1c8.Data.ArrayNum;
        (pFVar32->Group).Data.ArrayMax = local_1c8.Data.ArrayMax;
        local_1c8.Data.ArrayNum = 0;
        local_1c8.Data.ArrayMax = 0;
      }
      pFVar3 = &pFVar32->Metadata;
      if (pFVar3 != &local_1d8) {
        pFVar9 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
        (pFVar3->Data).AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
        local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar32->Metadata).Data.ArrayNum = local_1d8.Data.ArrayNum;
        (pFVar32->Metadata).Data.ArrayMax = local_1d8.Data.ArrayMax;
        local_1d8.Data.ArrayNum = 0;
        local_1d8.Data.ArrayMax = 0;
      }
      pFVar32->Time1 = local_214;
      pFVar32->Time2 = local_210;
      pFVar32->SizeInBytes = local_20c;
      pFVar32->EventDataOffset = lVar29;
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    local_d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_228 = (FArchive *)0x0;
    local_e0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_220,&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.ReferenceController);
    if (local_1e8 != (void *)0x0) {
      FMemory::Free(local_1e8);
    }
    if (local_208 != (void *)0x0) {
      FMemory::Free(local_208);
    }
    *(undefined4 *)(*(longlong *)this + 0x438) = *(undefined4 *)((longlong)this + 0xc);
    pFVar4 = *(FLocalFileNetworkReplayStreamer **)this;
    FLocalFileNetworkReplayStreamer::WriteReplayInfo
              (pFVar4,&pFVar4->CurrentStreamName,&pFVar4->TaskReplayInfo);
  }
  else {
    FVar22 = StatPtr_STAT_LocalReplay_CompressTime;
    if (StatPtr_STAT_LocalReplay_CompressTime ==
        (FThreadSafeStaticStat<FStat_STAT_LocalReplay_CompressTime>)0x0) {
      pFVar19 = ::FName::FName(&local_98,"STAT_LocalReplay_CompressTime");
      FVar22 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_CompressTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_CompressTime,
                          *pFVar19,L"Local replay compress time","STATGROUP_LocalReplay",
                          "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
    FVar35 = *(FName *)FVar22;
    bVar11 = false;
    bVar16 = false;
    local_178.ComparisonIndex.Value = 0;
    local_178.Number = 0;
    FVar34 = FVar35.ComparisonIndex.Value;
    uVar33 = FVar35.Number;
    if ((FVar34.Value == 0) && (uVar33 == 0)) {
LAB_146c96a5d:
      bVar10 = false;
      FVar35 = local_178;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1a8.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1a8._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
        bVar11 = false;
        bVar16 = true;
        if (-1 < CpuChannel->Enabled) {
          local_188.ComparisonIndex.Value = FVar34.Value;
          local_188.Number = uVar33;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_188,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                     ,0x81d);
          bVar11 = true;
          bVar16 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146c96a5d;
      local_1f0 = FVar34.Value;
      uStack_1ec = uVar33;
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar11 = false;
      bVar10 = true;
    }
    cVar17 = (**(code **)(**(longlong **)this + 0x1d0))(*(longlong **)this,(longlong)this + 0x10);
    if (cVar17 != '\0') {
      if (bVar16) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar10) && (FVar35 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar23 == (FThreadStats *)0x0) {
          pFVar24 = FThreadStatsPool::Get();
          pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
        }
        if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
          local_110.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
          local_110.NameAndInfo.Index.Value = FVar35.ComparisonIndex.Value.Value;
          QueryPerformanceCounter(&local_148);
          local_110.StatData.Pad[4] = '\0';
          local_110.StatData.Pad[5] = '\0';
          local_110.StatData.Pad[6] = '\0';
          local_110.StatData.Pad[7] = '\0';
          local_110.StatData.Pad[0] = local_148.s.LowPart._0_1_;
          local_110.StatData.Pad[1] = local_148.s.LowPart._1_1_;
          local_110.StatData.Pad[2] = local_148.s.LowPart._2_1_;
          local_110.StatData.Pad[3] = local_148.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar23,&local_110);
          piVar1 = &pFVar23->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar23,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar23,false,false);
          }
        }
      }
      goto LAB_146c96c84;
    }
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    *param_1 = CompressBuffer;
    if (bVar16) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar10) && (FVar35 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar23 == (FThreadStats *)0x0) {
        pFVar24 = FThreadStatsPool::Get();
        pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
      }
      if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
        local_120.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
        local_120.NameAndInfo.Index.Value = FVar35.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_128);
        local_120.StatData.Pad[4] = '\0';
        local_120.StatData.Pad[5] = '\0';
        local_120.StatData.Pad[6] = '\0';
        local_120.StatData.Pad[7] = '\0';
        local_120.StatData.Pad[0] = local_128.s.LowPart._0_1_;
        local_120.StatData.Pad[1] = local_128.s.LowPart._1_1_;
        local_120.StatData.Pad[2] = local_128.s.LowPart._2_1_;
        local_120.StatData.Pad[3] = local_128.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar23,&local_120);
        piVar1 = &pFVar23->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar23,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar23,false,false);
        }
      }
    }
LAB_146c96f68:
    if (local_208 != (void *)0x0) {
      FMemory::Free(local_208);
    }
  }
LAB_146c977fb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220.ReferenceController);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar15) && (FVar36 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar23 == (FThreadStats *)0x0) {
      pFVar24 = FThreadStatsPool::Get();
      pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
    }
    if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
      local_d0.NameAndInfo.Index = FVar36.ComparisonIndex.Value;
      local_d0.NameAndInfo.Number = FVar36.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_138);
      local_d0.StatData.Pad[4] = '\0';
      local_d0.StatData.Pad[5] = '\0';
      local_d0.StatData.Pad[6] = '\0';
      local_d0.StatData.Pad[7] = '\0';
      local_d0.StatData.Pad[0] = local_138.s.LowPart._0_1_;
      local_d0.StatData.Pad[1] = local_138.s.LowPart._1_1_;
      local_d0.StatData.Pad[2] = local_138.s.LowPart._2_1_;
      local_d0.StatData.Pad[3] = local_138.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar23,&local_d0);
      piVar1 = &pFVar23->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar23,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar23,false,false);
      }
    }
  }
  return;
}

// operator() @ 146c97920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_1>::operator()
          (void *this,ELocalFileReplayResult *param_1)

{
  int *piVar1;
  void **ppvVar2;
  FLocalFileNetworkReplayStreamer *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  ELocalFileChunkType *pEVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FArchive *pFVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushStream> FVar19;
  undefined8 uVar20;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_CompressTime> FVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_EncryptTime> FVar24;
  TArrayView<unsigned_char_const_,int> *pTVar25;
  long64 lVar26;
  longlong lVar27;
  undefined8 uVar28;
  longlong lVar29;
  FLocalFileChunkInfo *pFVar30;
  uint uVar31;
  FNameEntryId FVar32;
  FName FVar33;
  FName FVar34;
  ELocalFileChunkType local_res20 [2];
  FArchive *local_1f8;
  FSharedReferencer<1> local_1f0;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8 [2];
  void *local_1d0;
  undefined8 local_1c8;
  uint local_1c0 [2];
  uint local_1b8;
  uint uStack_1b4;
  void *local_1b0;
  undefined8 local_1a8;
  FColor_u_0 local_1a0;
  FColor_u_0 local_19c;
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_168;
  FName local_158;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  FStatMessage local_120;
  FStatMessage local_110;
  FStatMessage local_100;
  FStatMessage local_f0;
  undefined8 local_e0;
  FSharedReferencer<1> local_d8;
  FStatMessage local_d0;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FString local_90;
  uchar *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<unsigned_char_const_,int> local_58 [2];
  
  FVar19 = StatPtr_STAT_LocalReplay_FlushStream;
  if (StatPtr_STAT_LocalReplay_FlushStream ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushStream>)0x0) {
    pFVar18 = ::FName::FName(&local_98,"STAT_LocalReplay_FlushStream");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushStream>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_FlushStream,*pFVar18,
                        L"Local replay flush stream","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar19;
  bVar11 = false;
  bVar10 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar34.ComparisonIndex.Value.Value == 0) && (FVar34.Number == 0)) {
LAB_146c97a8d:
    bVar11 = bVar14;
    bVar10 = bVar13;
    bVar13 = false;
    FVar34 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a0._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_190.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x76c);
        bVar11 = true;
        bVar10 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c97a8d;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar13 = true;
  }
  pFVar3 = *(FLocalFileNetworkReplayStreamer **)this;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x200);
  FLocalFileNetworkReplayStreamer::GetDemoFullFilename(pFVar3,&local_90,&pFVar3->CurrentStreamName);
  (*pcVar4)(pFVar3,&local_1f8);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_1f8 == (FArchive *)0x0) {
    *param_1 = FileWriter;
    goto LAB_146c9894f;
  }
  if ((local_1f8 == (FArchive *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar12 = local_1f8;
  pcVar4 = *(code **)(*(longlong *)local_1f8 + 0x1b8);
  if ((local_1f8 == (FArchive *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar20 = (**(code **)(*(longlong *)local_1f8 + 0x30))();
  (*pcVar4)(pFVar12,uVar20);
  local_1d8[0] = *(uint *)((longlong)this + 0x20);
  ppvVar2 = (void **)((longlong)this + 0x18);
  local_1d0 = (void *)0x0;
  local_1c8 = 0;
  cVar15 = (**(code **)(**(longlong **)this + 0x1c0))();
  if (cVar15 == '\0') {
    if (&local_1d0 != ppvVar2) {
      if (local_1d0 != (void *)0x0) {
        FMemory::Free(local_1d0);
      }
      local_1d0 = *ppvVar2;
      *ppvVar2 = (void *)0x0;
      local_1c8 = *(undefined8 *)((longlong)this + 0x20);
      *(undefined8 *)((longlong)this + 0x20) = 0;
    }
LAB_146c97e77:
    local_1b0 = (void *)0x0;
    local_1a8 = 0;
    bVar14 = FLocalFileNetworkReplayStreamer::AllowEncryptedWrite
                       (*(FLocalFileNetworkReplayStreamer **)this);
    if (bVar14) {
      FVar24 = StatPtr_STAT_LocalReplay_EncryptTime;
      if (StatPtr_STAT_LocalReplay_EncryptTime ==
          (FThreadSafeStaticStat<FStat_STAT_LocalReplay_EncryptTime>)0x0) {
        pFVar18 = ::FName::FName(&local_a0,"STAT_LocalReplay_EncryptTime");
        FVar24 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_EncryptTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_EncryptTime,
                            *pFVar18,L"Local replay encrypt time","STATGROUP_LocalReplay",
                            "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,
                            MCR_Invalid);
      }
      FVar33 = *(FName *)FVar24;
      bVar14 = false;
      bVar9 = false;
      local_158.ComparisonIndex.Value = 0;
      local_158.Number = 0;
      FVar32 = FVar33.ComparisonIndex.Value;
      uVar31 = FVar33.Number;
      if ((FVar32.Value == 0) && (uVar31 == 0)) {
LAB_146c98012:
        bVar8 = false;
        FVar33 = local_158;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_198[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_198[0]._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
          bVar14 = false;
          bVar9 = true;
          if (-1 < CpuChannel->Enabled) {
            local_180.ComparisonIndex.Value = FVar32.Value;
            local_180.Number = uVar31;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_180,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                       ,0x78b);
            bVar14 = true;
            bVar9 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_146c98012;
        local_1b8 = FVar32.Value;
        uStack_1b4 = uVar31;
        FThreadStats::AddMessage(FVar33,CycleScopeStart);
        bVar8 = true;
      }
      plVar5 = *(longlong **)this;
      pcVar4 = *(code **)(*plVar5 + 0x1e8);
      pTVar25 = TArrayView<unsigned_char_const_,int>::
                TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                          (local_58,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                    (plVar5 + 0x8e));
      iStack_b0 = (int)local_1c8;
      local_78 = pTVar25->DataPtr;
      uStack_70 = *(undefined8 *)&pTVar25->ArrayNum;
      local_b8 = local_1d0;
      if (((int)local_1c8 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_68 = (undefined4)local_b8;
      uStack_64 = local_b8._4_4_;
      iStack_60 = iStack_b0;
      uStack_5c = uStack_ac;
      cVar15 = (*pcVar4)(plVar5,&local_68,&local_1b0,&local_78);
      if (cVar15 != '\0') {
        if (bVar9) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar14) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar8) && (FVar33 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
           && (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar22 == (FThreadStats *)0x0) {
            pFVar23 = FThreadStatsPool::Get();
            pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
          }
          if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
            local_f0.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
            local_f0.NameAndInfo.Index.Value = FVar33.ComparisonIndex.Value.Value;
            QueryPerformanceCounter(&local_130);
            local_f0.StatData.Pad[4] = '\0';
            local_f0.StatData.Pad[5] = '\0';
            local_f0.StatData.Pad[6] = '\0';
            local_f0.StatData.Pad[7] = '\0';
            local_f0.StatData.Pad[0] = local_130.s.LowPart._0_1_;
            local_f0.StatData.Pad[1] = local_130.s.LowPart._1_1_;
            local_f0.StatData.Pad[2] = local_130.s.LowPart._2_1_;
            local_f0.StatData.Pad[3] = local_130.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar22,&local_f0);
            piVar1 = &pFVar22->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar22,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar22,false,false);
            }
          }
        }
        goto LAB_146c982bd;
      }
      if (2 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      *param_1 = EncryptBuffer;
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar8) && (FVar33 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar22 == (FThreadStats *)0x0) {
          pFVar23 = FThreadStatsPool::Get();
          pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
        }
        if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
          local_100.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
          local_100.NameAndInfo.Index.Value = FVar33.ComparisonIndex.Value.Value;
          QueryPerformanceCounter(&local_138);
          local_100.StatData.Pad[4] = '\0';
          local_100.StatData.Pad[5] = '\0';
          local_100.StatData.Pad[6] = '\0';
          local_100.StatData.Pad[7] = '\0';
          local_100.StatData.Pad[0] = local_138.s.LowPart._0_1_;
          local_100.StatData.Pad[1] = local_138.s.LowPart._1_1_;
          local_100.StatData.Pad[2] = local_138.s.LowPart._2_1_;
          local_100.StatData.Pad[3] = local_138.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar22,&local_100);
          piVar1 = &pFVar22->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar22,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar22,false,false);
          }
        }
      }
    }
    else {
      if (local_1b0 != (void *)0x0) {
        FMemory::Free(local_1b0);
      }
      local_1b0 = local_1d0;
      local_1a8 = local_1c8;
      local_1c8 = 0;
      local_1d0 = (void *)0x0;
LAB_146c982bd:
      if (0 < (int)(uint)local_1a8) {
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar26 = (**(code **)(*(longlong *)local_1f8 + 0x28))();
        local_res20[0] = ReplayData;
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pEVar6 = (ELocalFileChunkType *)**(undefined8 **)&local_1f8->field_0x8;
        if ((ELocalFileChunkType *)(*(undefined8 **)&local_1f8->field_0x8)[1] < pEVar6 + 1) {
          if ((local_1f8->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)local_1f8 + 0x188))(local_1f8,local_res20,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(local_1f8,local_res20);
          }
        }
        else {
          local_res20[0] = *pEVar6;
          **(longlong **)&local_1f8->field_0x8 = **(longlong **)&local_1f8->field_0x8 + 4;
        }
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar20 = (**(code **)(*(longlong *)local_1f8 + 0x28))();
        local_1c0[0] = 0;
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (uint *)**(undefined8 **)&local_1f8->field_0x8;
        if ((uint *)(*(undefined8 **)&local_1f8->field_0x8)[1] < puVar7 + 1) {
          if ((local_1f8->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)local_1f8 + 0x188))(local_1f8,local_1c0,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(local_1f8,local_1c0);
          }
        }
        else {
          local_1c0[0] = *puVar7;
          **(longlong **)&local_1f8->field_0x8 = **(longlong **)&local_1f8->field_0x8 + 4;
        }
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar27 = (**(code **)(*(longlong *)local_1f8 + 0x28))();
        local_1e4 = *(uint *)((longlong)this + 8);
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (uint *)**(undefined8 **)&local_1f8->field_0x8;
        if ((uint *)(*(undefined8 **)&local_1f8->field_0x8)[1] < puVar7 + 1) {
          if ((local_1f8->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)local_1f8 + 0x188))(local_1f8,&local_1e4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(local_1f8,&local_1e4);
          }
        }
        else {
          local_1e4 = *puVar7;
          **(longlong **)&local_1f8->field_0x8 = **(longlong **)&local_1f8->field_0x8 + 4;
        }
        local_1e0 = *(uint *)((longlong)this + 0xc);
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (uint *)**(undefined8 **)&local_1f8->field_0x8;
        if ((uint *)(*(undefined8 **)&local_1f8->field_0x8)[1] < puVar7 + 1) {
          if ((local_1f8->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)local_1f8 + 0x188))(local_1f8,&local_1e0,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(local_1f8,&local_1e0);
          }
        }
        else {
          local_1e0 = *puVar7;
          **(longlong **)&local_1f8->field_0x8 = **(longlong **)&local_1f8->field_0x8 + 4;
        }
        local_1dc = (uint)local_1a8;
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (uint *)**(undefined8 **)&local_1f8->field_0x8;
        if ((uint *)(*(undefined8 **)&local_1f8->field_0x8)[1] < puVar7 + 1) {
          if ((local_1f8->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)local_1f8 + 0x188))(local_1f8,&local_1dc,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(local_1f8,&local_1dc);
          }
        }
        else {
          local_1dc = *puVar7;
          **(longlong **)&local_1f8->field_0x8 = **(longlong **)&local_1f8->field_0x8 + 4;
        }
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (uint *)**(undefined8 **)&local_1f8->field_0x8;
        if ((uint *)(*(undefined8 **)&local_1f8->field_0x8)[1] < puVar7 + 1) {
          if ((local_1f8->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)local_1f8 + 0x188))(local_1f8,local_1d8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(local_1f8,local_1d8);
          }
        }
        else {
          local_1d8[0] = *puVar7;
          **(longlong **)&local_1f8->field_0x8 = **(longlong **)&local_1f8->field_0x8 + 4;
        }
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar28 = (**(code **)(*(longlong *)local_1f8 + 0x28))();
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*(longlong *)local_1f8 + 0x188))
                  (local_1f8,local_1b0,(longlong)(int)(uint)local_1a8);
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar29 = (**(code **)(*(longlong *)local_1f8 + 0x28))();
        local_1e8 = IntCastChecked<int,__int64>(lVar29 - lVar27);
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*(longlong *)local_1f8 + 0x1b8))(local_1f8,uVar20);
        if ((local_1f8 == (FArchive *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (uint *)**(undefined8 **)&local_1f8->field_0x8;
        if ((uint *)(*(undefined8 **)&local_1f8->field_0x8)[1] < puVar7 + 1) {
          if ((local_1f8->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)local_1f8 + 0x188))(local_1f8,&local_1e8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(local_1f8,&local_1e8);
          }
        }
        else {
          local_1e8 = *puVar7;
          **(longlong **)&local_1f8->field_0x8 = **(longlong **)&local_1f8->field_0x8 + 4;
        }
        pFVar30 = TArray<FLocalFileChunkInfo,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
                            ((TArray<FLocalFileChunkInfo,TSizedDefaultAllocator<32>_> *)
                             (*(longlong *)this + 0x488));
        pFVar30->ChunkType = local_res20[0];
        pFVar30->TypeOffset = lVar26;
        pFVar30->DataOffset = lVar27;
        pFVar30->SizeInBytes = local_1e8;
        lVar27 = *(longlong *)this;
        iVar17 = *(int *)(lVar27 + 0x4c0);
        if (iVar17 == *(int *)(lVar27 + 0x4c4)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,(ForAnyElementType *)(lVar27 + 0x4b8),(int *)(lVar27 + 0x4c4));
        }
        *(int *)(lVar27 + 0x4c0) = iVar17 + 1;
        piVar1 = (int *)(*(longlong *)(lVar27 + 0x4b8) + (longlong)iVar17 * 0x28);
        DefaultConstructItems<FLocalFileReplayDataInfo,int>(piVar1,1);
        *piVar1 = *(int *)(*(longlong *)this + 0x490) + -1;
        piVar1[1] = local_1e4;
        piVar1[2] = local_1e0;
        piVar1[3] = local_1dc;
        piVar1[4] = local_1d8[0];
        *(undefined8 *)(piVar1 + 6) = uVar28;
        *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(*(longlong *)this + 0x460);
        *(longlong *)(*(longlong *)this + 0x460) =
             *(longlong *)(*(longlong *)this + 0x460) + (longlong)(int)local_1d8[0];
      }
      local_d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_1f8 = (FArchive *)0x0;
      local_e0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1f0,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.ReferenceController);
      *(undefined4 *)(*(longlong *)this + 0x438) = *(undefined4 *)((longlong)this + 0x10);
      pFVar3 = *(FLocalFileNetworkReplayStreamer **)this;
      FLocalFileNetworkReplayStreamer::WriteReplayInfo
                (pFVar3,&pFVar3->CurrentStreamName,&pFVar3->TaskReplayInfo);
    }
    if (local_1b0 != (void *)0x0) {
      FMemory::Free(local_1b0);
    }
  }
  else {
    FVar21 = StatPtr_STAT_LocalReplay_CompressTime;
    if (StatPtr_STAT_LocalReplay_CompressTime ==
        (FThreadSafeStaticStat<FStat_STAT_LocalReplay_CompressTime>)0x0) {
      pFVar18 = ::FName::FName(&local_a8,"STAT_LocalReplay_CompressTime");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_CompressTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_CompressTime,
                          *pFVar18,L"Local replay compress time","STATGROUP_LocalReplay",
                          "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
    FVar33 = *(FName *)FVar21;
    bVar9 = false;
    bVar14 = false;
    local_168.ComparisonIndex.Value = 0;
    local_168.Number = 0;
    FVar32 = FVar33.ComparisonIndex.Value;
    uVar31 = FVar33.Number;
    if ((FVar32.Value == 0) && (uVar31 == 0)) {
LAB_146c97caa:
      bVar8 = false;
      FVar33 = local_168;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_19c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_19c._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
        bVar9 = false;
        bVar14 = true;
        if (-1 < CpuChannel->Enabled) {
          local_188.ComparisonIndex.Value = FVar32.Value;
          local_188.Number = uVar31;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_188,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                     ,0x779);
          bVar9 = true;
          bVar14 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146c97caa;
      local_1b8 = FVar32.Value;
      uStack_1b4 = uVar31;
      FThreadStats::AddMessage(FVar33,CycleScopeStart);
      bVar9 = false;
      bVar8 = true;
    }
    cVar15 = (**(code **)(**(longlong **)this + 0x1d0))(*(longlong **)this,ppvVar2);
    if (cVar15 != '\0') {
      if (bVar14) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar8) && (FVar33 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar22 == (FThreadStats *)0x0) {
          pFVar23 = FThreadStatsPool::Get();
          pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
        }
        if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
          local_110.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
          local_110.NameAndInfo.Index.Value = FVar33.ComparisonIndex.Value.Value;
          QueryPerformanceCounter(&local_140);
          local_110.StatData.Pad[4] = '\0';
          local_110.StatData.Pad[5] = '\0';
          local_110.StatData.Pad[6] = '\0';
          local_110.StatData.Pad[7] = '\0';
          local_110.StatData.Pad[0] = local_140.s.LowPart._0_1_;
          local_110.StatData.Pad[1] = local_140.s.LowPart._1_1_;
          local_110.StatData.Pad[2] = local_140.s.LowPart._2_1_;
          local_110.StatData.Pad[3] = local_140.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar22,&local_110);
          piVar1 = &pFVar22->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar22,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar22,false,false);
          }
        }
      }
      goto LAB_146c97e77;
    }
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    *param_1 = CompressBuffer;
    if (bVar14) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar8) && (FVar33 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar22 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
        local_120.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
        local_120.NameAndInfo.Index.Value = FVar33.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_148);
        local_120.StatData.Pad[4] = '\0';
        local_120.StatData.Pad[5] = '\0';
        local_120.StatData.Pad[6] = '\0';
        local_120.StatData.Pad[7] = '\0';
        local_120.StatData.Pad[0] = local_148.s.LowPart._0_1_;
        local_120.StatData.Pad[1] = local_148.s.LowPart._1_1_;
        local_120.StatData.Pad[2] = local_148.s.LowPart._2_1_;
        local_120.StatData.Pad[3] = local_148.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar22,&local_120);
        piVar1 = &pFVar22->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar22,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar22,false,false);
        }
      }
    }
  }
  if (local_1d0 != (void *)0x0) {
    FMemory::Free(local_1d0);
  }
LAB_146c9894f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f0.ReferenceController);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar13) && (FVar34 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar22 == (FThreadStats *)0x0) {
      pFVar23 = FThreadStatsPool::Get();
      pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
    }
    if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
      local_d0.NameAndInfo.Index = FVar34.ComparisonIndex.Value;
      local_d0.NameAndInfo.Number = FVar34.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_128);
      local_d0.StatData.Pad[4] = '\0';
      local_d0.StatData.Pad[5] = '\0';
      local_d0.StatData.Pad[6] = '\0';
      local_d0.StatData.Pad[7] = '\0';
      local_d0.StatData.Pad[0] = local_128.s.LowPart._0_1_;
      local_d0.StatData.Pad[1] = local_128.s.LowPart._1_1_;
      local_d0.StatData.Pad[2] = local_128.s.LowPart._2_1_;
      local_d0.StatData.Pad[3] = local_128.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar22,&local_d0);
      piVar1 = &pFVar22->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar22,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  return;
}

// operator() @ 146c98a80

void __thiscall
`FLocalFileNetworkReplayStreamer::KeepReplay_Internal'::__l2::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FKeepReplayResult> *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = FLocalFileNetworkReplayStreamer::GetDemoFullFilename
                     (*(FLocalFileNetworkReplayStreamer **)this,&local_18,
                      (FString *)((longlong)this + 8));
  bVar1 = FPaths::FileExists(pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    *(undefined4 *)&(param_1->DelegateResult)._padding_ = 2;
    return;
  }
  *(undefined4 *)&(param_1->DelegateResult)._padding_ = 0;
  ::FString::operator=(&(param_1->DelegateResult).NewReplayName,(FString *)((longlong)this + 8));
  return;
}

// operator() @ 146c98b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal'::__l2::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FRenameReplayResult> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_RenameFriendly> FVar9;
  longlong lVar10;
  FCustomVersion *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FStaticBasicLogRecord *pFVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FArchive *local_178;
  TReferenceControllerBase<1> *local_170;
  FArchive *local_168;
  TReferenceControllerBase<1> *local_160;
  FLocalFileSerializationInfo local_158;
  FName local_130;
  FString local_120;
  FLocalFileReplayInfo local_108;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FGuid local_58;
  FGuid local_48;
  
  FVar9 = StatPtr_STAT_LocalReplay_RenameFriendly;
  if (StatPtr_STAT_LocalReplay_RenameFriendly ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_RenameFriendly>)0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_LocalReplay_RenameFriendly");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_RenameFriendly>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_RenameFriendly,*pFVar8
                       ,L"Local replay rename friendly","STATGROUP_LocalReplay","STATCAT_Advanced",
                       L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar7 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar7 == 0)) {
LAB_146c98c64:
    bVar4 = false;
    FVar14 = local_130;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar13.Value;
        local_res18.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x6eb);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c98c64;
    local_res20.s.LowPart = FVar13.Value;
    local_res20.s.HighPart = uVar7;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar4 = true;
  }
  FLocalFileNetworkReplayStreamer::GetDemoFullFilename
            (*(FLocalFileNetworkReplayStreamer **)this,&local_120,(FString *)((longlong)this + 8));
  bVar6 = FPaths::FileExists(&local_120);
  if (!bVar6) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    *(undefined4 *)&(param_1->DelegateResult).field_0x8 = 2;
    goto LAB_146c98fc2;
  }
  local_158.FileVersion = 7;
  local_158.FileFriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.FileFriendlyName.Data.ArrayNum = 0;
  local_158.FileFriendlyName.Data.ArrayMax = 0;
  local_158.FileCustomVersions.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.FileCustomVersions.Versions.ArrayNum = 0;
  local_158.FileCustomVersions.Versions.ArrayMax = 0;
  pFVar8 = ::FName::FName(&local_60,L"LocalFileReplay");
  local_58 = FLocalFileReplayCustomVersion::Guid;
  FCustomVersionContainer::SetVersion(&local_158.FileCustomVersions,&local_58,7,*pFVar8);
  local_108.LengthInMS = 0;
  local_108.NetworkVersion = 0;
  local_108.Changelist = 0;
  local_108.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.FriendlyName.Data.ArrayNum = 0;
  local_108.FriendlyName.Data.ArrayMax = 0;
  local_108.Timestamp.Ticks = 0;
  local_108.TotalDataSizeInBytes = 0;
  local_108.bIsLive = false;
  local_108.bIsValid = false;
  local_108.bCompressed = false;
  local_108.bEncrypted = false;
  local_108.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.EncryptionKey.ArrayNum = 0;
  local_108.EncryptionKey.ArrayMax = 0;
  local_108.HeaderChunkIndex = -1;
  local_108.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Chunks.ArrayNum = 0;
  local_108.Chunks.ArrayMax = 0;
  local_108.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Checkpoints.ArrayNum = 0;
  local_108.Checkpoints.ArrayMax = 0;
  local_108.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Events.ArrayNum = 0;
  local_108.Events.ArrayMax = 0;
  local_108.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.DataChunks.ArrayNum = 0;
  local_108.DataChunks.ArrayMax = 0;
  (**(code **)(**(longlong **)this + 0x1f8))(*(longlong **)this,&local_168);
  if (local_168 == (FArchive *)0x0) {
LAB_146c98f07:
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      pFVar12 = &::LOG_Static;
LAB_146c98f21:
      UE::Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&LogLocalFileReplay);
    }
LAB_146c98f35:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
  }
  else {
    if ((local_168 == (FArchive *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar10 = (**(code **)(*(longlong *)local_168 + 0x30))();
    if ((lVar10 < 1) ||
       (bVar6 = FLocalFileNetworkReplayStreamer::ReadReplayInfo
                          (*(FLocalFileNetworkReplayStreamer **)this,local_168,&local_108,&local_158
                           ,None), !bVar6)) goto LAB_146c98f07;
    local_48 = FLocalFileReplayCustomVersion::Guid;
    pFVar11 = FCustomVersionContainer::GetVersion(&local_158.FileCustomVersions,&local_48);
    uVar7 = local_158.FileVersion;
    if (pFVar11 != (FCustomVersion *)0x0) {
      uVar7 = pFVar11->Version;
    }
    if ((int)uVar7 < 1) {
      if ((byte)LogLocalFileReplay._0_1_ < 3) goto LAB_146c98f35;
      pFVar12 = &::LOG_Static;
      goto LAB_146c98f21;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
    ::FString::operator=(&local_108.FriendlyName,(FString *)((longlong)this + 0x18));
    (**(code **)(**(longlong **)this + 0x200))(*(longlong **)this,&local_178);
    if (local_178 == (FArchive *)0x0) {
LAB_146c98ed7:
      local_160 = local_170;
      if (2 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
        local_160 = local_170;
      }
      goto LAB_146c98f35;
    }
    if ((local_178 == (FArchive *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar10 = (**(code **)(*(longlong *)local_178 + 0x30))();
    if ((lVar10 < 1) ||
       (bVar6 = FLocalFileNetworkReplayStreamer::WriteReplayInfo
                          (*(FLocalFileNetworkReplayStreamer **)this,local_178,&local_108,&local_158
                          ), !bVar6)) goto LAB_146c98ed7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170);
    *(undefined4 *)&(param_1->DelegateResult).field_0x8 = 0;
  }
  if (local_108.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.DataChunks.AllocatorInstance.Data);
  }
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)local_108.Events.AllocatorInstance.Data,
             local_108.Events.ArrayNum);
  if ((FLocalFileEventInfo *)local_108.Events.AllocatorInstance.Data != (FLocalFileEventInfo *)0x0)
  {
    FMemory::Free(local_108.Events.AllocatorInstance.Data);
  }
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)local_108.Checkpoints.AllocatorInstance.Data,
             local_108.Checkpoints.ArrayNum);
  if ((FLocalFileEventInfo *)local_108.Checkpoints.AllocatorInstance.Data !=
      (FLocalFileEventInfo *)0x0) {
    FMemory::Free(local_108.Checkpoints.AllocatorInstance.Data);
  }
  if (local_108.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Chunks.AllocatorInstance.Data);
  }
  if (local_108.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.EncryptionKey.AllocatorInstance.Data);
  }
  if (local_108.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.FriendlyName.Data.AllocatorInstance.Data);
  }
  if (local_158.FileCustomVersions.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_158.FileCustomVersions.Versions.AllocatorInstance.Data);
  }
  if (local_158.FileFriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.FileFriendlyName.Data.AllocatorInstance.Data);
  }
LAB_146c98fc2:
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 146c990c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::RenameReplay_Internal'::__l2::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FRenameReplayResult> *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_Rename> FVar11;
  FString *pFVar12;
  IFileManager *pIVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  FNameEntryId FVar17;
  ForAnyElementType FVar18;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  char *in_stack_ffffffffffffff38;
  wchar_t *in_stack_ffffffffffffff40;
  FName local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FStatMessage local_48;
  
  iVar9 = 0;
  FVar11 = StatPtr_STAT_LocalReplay_Rename;
  if (StatPtr_STAT_LocalReplay_Rename == (FThreadSafeStaticStat<FStat_STAT_LocalReplay_Rename>)0x0)
  {
    pFVar10 = ::FName::FName(local_res18,"STAT_LocalReplay_Rename");
    in_stack_ffffffffffffff40 = L"LocalReplay";
    in_stack_ffffffffffffff38 = "STATCAT_Advanced";
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_Rename>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_Rename,*pFVar10,
                        L"Local replay rename","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar17 = FVar3.ComparisonIndex.Value;
  uVar14 = FVar3.Number;
  if ((FVar17.Value == 0) && (uVar14 == 0)) {
LAB_146c991fd:
    bVar5 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar17.Value;
        local_res8.s.HighPart = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x727);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c991fd;
    local_res8.s.LowPart = FVar17.Value;
    local_res8.s.HighPart = uVar14;
    FThreadStats::AddMessage(FVar3,CycleScopeStart);
    bVar5 = true;
    local_88 = FVar3;
  }
  FLocalFileNetworkReplayStreamer::GetDemoFullFilename
            (*(FLocalFileNetworkReplayStreamer **)this,&local_58,(FString *)((longlong)this + 8));
  bVar7 = FPaths::FileExists(&local_58);
  if (!bVar7) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    *(undefined4 *)&(param_1->DelegateResult).field_0x8 = 2;
    goto LAB_146c993d8;
  }
  FLocalFileNetworkReplayStreamer::GetDemoFullFilename
            (*(FLocalFileNetworkReplayStreamer **)this,&local_68,(FString *)((longlong)this + 0x18))
  ;
  FPaths::GetBaseFilename(&local_78,&local_68,true);
  pFVar12 = FNetworkReplayStreaming::GetReplayFileExtension((FString *)&local_48);
  iVar2 = (pFVar12->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    iVar9 = iVar2 + -1;
  }
  ::FString::RemoveFromEnd(&local_78,pwVar15,iVar9,IgnoreCase);
  if (local_48.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_48.StatData.Pad);
  }
  iVar9 = *(int *)((longlong)this + 0x20);
  if (iVar9 == local_78.Data.ArrayNum) {
    if (1 < iVar9) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)((longlong)this + 0x18),
                         (wchar_t *)local_78.Data.AllocatorInstance.Data);
      bVar7 = iVar9 == 0;
      goto LAB_146c992f4;
    }
LAB_146c9933c:
    pIVar13 = IFileManager::Get();
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar18.Data = local_58.Data.AllocatorInstance.Data;
    }
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar16.Data = local_68.Data.AllocatorInstance.Data;
    }
    cVar8 = (**(code **)((longlong)*pIVar13 + 0x48))
                      (pIVar13,FVar16.Data,FVar18.Data,0,
                       (ulonglong)in_stack_ffffffffffffff38 & 0xffffffffffffff00,
                       (ulonglong)in_stack_ffffffffffffff40 & 0xffffffffffffff00,0);
    if (cVar8 == '\0') {
      if (2 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
    }
    else {
      *(undefined4 *)&(param_1->DelegateResult).field_0x8 = 0;
    }
  }
  else {
    bVar7 = iVar9 + local_78.Data.ArrayNum == 1;
LAB_146c992f4:
    if (bVar7) goto LAB_146c9933c;
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_146c993d8:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (local_88 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_88.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = local_88.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 146c994e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::RequestEventData_Internal'::__l2::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FRequestEventDataResult> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  void *pvVar2;
  short *psVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadEvent> FVar15;
  FString *pFVar16;
  size_t sVar17;
  TStatId TVar18;
  int iVar19;
  short *psVar20;
  wchar_t *pwVar21;
  FName FVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  int iVar25;
  FLocalFileEventInfo *pFVar26;
  bool bVar27;
  undefined1 local_res20 [8];
  ForAnyElementType local_228;
  undefined8 local_220;
  FString local_218;
  longlong *local_208;
  FSharedReferencer<1> local_200;
  undefined8 local_1f8;
  FSharedReferencer<1> local_1f0;
  FName local_1e8;
  byte local_1e0;
  FString local_1d8;
  FScriptContainerElement *local_1c8;
  undefined8 local_1c0;
  ForAnyElementType local_1b8;
  int local_1b0;
  int local_1ac;
  FColor_u_0 local_1a8 [2];
  FString local_1a0;
  FName local_190;
  FName local_188;
  FLocalFileReplayInfo local_178;
  FSourceLocation local_e8;
  FString local_c8;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  FScriptContainerElement *local_88;
  int local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  iVar25 = 0;
  FVar15 = StatPtr_STAT_LocalReplay_ReadEvent;
  if (StatPtr_STAT_LocalReplay_ReadEvent ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadEvent>)0x0) {
    pFVar14 = ::FName::FName(&local_78,"STAT_LocalReplay_ReadEvent");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadEvent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadEvent,*pFVar14,
                        L"Local replay read event","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar15;
  bVar8 = false;
  bVar7 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_146c99647:
    bVar8 = bVar10;
    bVar7 = bVar9;
    bVar9 = false;
    FVar22 = local_188;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_190.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x5e1);
        bVar8 = true;
        bVar7 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c99647;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar9 = true;
  }
  local_218.Data.ArrayNum = *(int *)((longlong)this + 0x10);
  lVar23 = (longlong)local_218.Data.ArrayNum;
  pvVar2 = *(void **)((longlong)this + 8);
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_218.Data.ArrayNum == 0) {
    local_218.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_218.Data.ArrayNum,0,(ForAnyElementType *)&local_218,local_218.Data.ArrayNum
               ,&local_218.Data.ArrayMax);
    memcpy(local_218.Data.AllocatorInstance.Data,pvVar2,lVar23 * 2);
  }
  if (local_218.Data.ArrayNum < 2) {
    iVar13 = *(int *)(*(longlong *)this + 0x3c8);
    iVar19 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar19 = iVar25;
    }
    ::FString::AssignRange(&local_218,*(wchar_t **)(*(longlong *)this + 0x3c0),iVar19);
    psVar3 = *(short **)((longlong)this + 0x18);
    iVar13 = *(int *)((longlong)this + 0x20);
    for (psVar20 = psVar3; psVar20 != psVar3 + iVar13; psVar20 = psVar20 + 1) {
      if (*psVar20 == 0x5f) {
        iVar19 = (int)((longlong)psVar20 - (longlong)psVar3 >> 1);
        if (iVar19 != -1) {
          iVar12 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar12 = iVar25;
          }
          if (iVar19 < iVar12) {
            iVar12 = iVar19;
          }
          if (0 < iVar12) {
            iVar25 = iVar12;
          }
          if (iVar13 == 0) {
            pwVar21 = L"";
          }
          else {
            pwVar21 = *(wchar_t **)((longlong)this + 0x18);
          }
          ::FString::ConstructFromPtrSize(&local_1a0,pwVar21,iVar25);
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          local_218.Data.AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
          local_218.Data.ArrayNum = local_1a0.Data.ArrayNum;
          local_218.Data.ArrayMax = local_1a0.Data.ArrayMax;
          local_1a0.Data.ArrayNum = 0;
          local_1a0.Data.ArrayMax = 0;
          local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        break;
      }
    }
  }
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = *(int *)(*(longlong *)this + 0x3d8);
  lVar23 = (longlong)local_1b0;
  pvVar2 = *(void **)(*(longlong *)this + 0x3d0);
  if (local_1b0 == 0) {
    local_1ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1b0,0,&local_1b8,local_1b0,&local_1ac);
    memcpy(local_1b8.Data,pvVar2,lVar23 * 2);
  }
  bVar10 = FPaths::IsRelative(&local_218);
  FVar24.Data = local_218.Data.AllocatorInstance.Data;
  if (bVar10) {
    pFVar16 = FNetworkReplayStreaming::GetReplayFileExtension(&local_68);
    local_88 = (FScriptContainerElement *)L"";
    if (local_218.Data.ArrayNum != 0) {
      local_88 = local_218.Data.AllocatorInstance.Data;
    }
    iVar25 = 0;
    local_98.DataPtr = L"";
    if (local_1b0 != 0) {
      local_98.DataPtr = (wchar_t *)local_1b8.Data;
    }
    local_98.Size = iVar25;
    if ((FScriptContainerElement *)local_98.DataPtr != (FScriptContainerElement *)0x0) {
      sVar17 = wcslen(local_98.DataPtr);
      local_98.Size = (int)sVar17;
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      sVar17 = wcslen((wchar_t *)local_88);
      iVar25 = (int)sVar17;
    }
    local_80 = iVar25;
    FPaths::CombineInternal(&local_c8,&local_98,2);
    ::FString::ConcatFF(&local_1d8,&local_c8,pFVar16);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  else {
    lVar23 = (longlong)local_218.Data.ArrayNum;
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Data.ArrayNum = local_218.Data.ArrayNum;
    if (local_218.Data.ArrayNum == 0) {
      local_1d8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_218.Data.ArrayNum,0,(ForAnyElementType *)&local_1d8,
                 local_218.Data.ArrayNum,&local_1d8.Data.ArrayMax);
      memcpy(local_1d8.Data.AllocatorInstance.Data,FVar24.Data,lVar23 * 2);
    }
  }
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  bVar10 = FPaths::FileExists(&local_1d8);
  if (!bVar10) {
    *(undefined4 *)&(param_1->DelegateResult)._padding_ = 2;
    goto LAB_146c99f19;
  }
  local_178.LengthInMS = 0;
  local_178.NetworkVersion = 0;
  local_178.Timestamp.Ticks = 0;
  local_178.TotalDataSizeInBytes = 0;
  local_178.Changelist = 0;
  local_178.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.FriendlyName.Data.ArrayNum = 0;
  local_178.FriendlyName.Data.ArrayMax = 0;
  local_178.bIsLive = false;
  local_178.bIsValid = false;
  local_178.bCompressed = false;
  local_178.bEncrypted = false;
  local_178.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.EncryptionKey.ArrayNum = 0;
  local_178.EncryptionKey.ArrayMax = 0;
  local_178.HeaderChunkIndex = -1;
  local_178.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Chunks.ArrayNum = 0;
  local_178.Chunks.ArrayMax = 0;
  local_178.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Checkpoints.ArrayNum = 0;
  local_178.Checkpoints.ArrayMax = 0;
  local_178.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Events.ArrayNum = 0;
  local_178.Events.ArrayMax = 0;
  local_178.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.DataChunks.ArrayNum = 0;
  local_178.DataChunks.ArrayMax = 0;
  bVar10 = FLocalFileNetworkReplayStreamer::ReadReplayInfo
                     (*(FLocalFileNetworkReplayStreamer **)this,&local_218,&local_178,None);
  if (bVar10) {
    (**(code **)(**(longlong **)this + 0x1f8))(*(longlong **)this,&local_208,&local_1d8);
    if (local_208 != (longlong *)0x0) {
      bVar10 = false;
      iVar25 = local_178.Events.ArrayNum;
      pFVar26 = (FLocalFileEventInfo *)
                (local_178.Events.AllocatorInstance.Data +
                (longlong)local_178.Events.ArrayNum * 0x50);
      FVar24.Data = local_178.Events.AllocatorInstance.Data;
      do {
        if (local_178.Events.ArrayNum != iVar25) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FLocalFileEventInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if ((FLocalFileEventInfo *)FVar24.Data == pFVar26) goto LAB_146c99df6;
        iVar13 = (((FLocalFileEventInfo *)FVar24.Data)->Id).Data.ArrayNum;
        if (iVar13 == *(int *)((longlong)this + 0x20)) {
          if (iVar13 < 2) goto LAB_146c99a0d;
          iVar13 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)
                              (((FLocalFileEventInfo *)FVar24.Data)->Id).Data.AllocatorInstance.Data
                              ,*(wchar_t **)((longlong)this + 0x18));
          bVar27 = iVar13 == 0;
        }
        else {
          bVar27 = iVar13 + *(int *)((longlong)this + 0x20) == 1;
        }
        if (bVar27) goto LAB_146c99a0d;
        FVar24.Data = FVar24.Data + 0x50;
      } while( true );
    }
    if (1 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    *(undefined4 *)&(param_1->DelegateResult)._padding_ = 6;
    goto LAB_146c99e64;
  }
  if (1 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  *(undefined4 *)&(param_1->DelegateResult)._padding_ = 6;
  goto LAB_146c99ea1;
LAB_146c99a0d:
  bVar10 = true;
  if ((local_208 == (longlong *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar27)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (**(code **)(*local_208 + 0x1b8))(local_208,((FLocalFileEventInfo *)FVar24.Data)->EventDataOffset)
  ;
  local_228.Data = (FScriptContainerElement *)0x0;
  local_220 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,((FLocalFileEventInfo *)FVar24.Data)->SizeInBytes,&local_228,(int *)&local_220,
             (int *)((longlong)&local_220 + 4));
  if ((local_208 == (longlong *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar27)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (**(code **)(*local_208 + 0x188))(local_208,local_228.Data,(longlong)(int)local_220);
  if (local_178.bEncrypted == false) {
LAB_146c99d45:
    pTVar1 = &(param_1->DelegateResult).ReplayEventListItem;
    *(undefined4 *)&(param_1->DelegateResult)._padding_ = 0;
    if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_228) {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar1->AllocatorInstance).Data = local_228.Data;
      (param_1->DelegateResult).ReplayEventListItem.ArrayNum = (int)local_220;
      (param_1->DelegateResult).ReplayEventListItem.ArrayMax = local_220._4_4_;
      local_220 = 0;
      local_228.Data = (FScriptContainerElement *)0x0;
    }
    if (local_228.Data != (FScriptContainerElement *)0x0) goto LAB_146c99d8e;
LAB_146c99df6:
    local_1f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_208 = (longlong *)0x0;
    local_1f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_200,&local_1f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.ReferenceController);
    if (!bVar10) {
      *(undefined4 *)&(param_1->DelegateResult)._padding_ = 8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_200.ReferenceController);
      goto LAB_146c99ea1;
    }
LAB_146c99e64:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_200.ReferenceController);
  }
  else {
    cVar11 = (**(code **)(**(longlong **)this + 0x1d8))();
    if (cVar11 == '\0') {
      if (1 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      *(undefined4 *)&(param_1->DelegateResult)._padding_ = 1;
    }
    else {
      TVar18.StatIdPtr = (TStatIdData *)StatPtr_STAT_LocalReplay_DecryptTime;
      if (StatPtr_STAT_LocalReplay_DecryptTime ==
          (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime>)0x0) {
        pFVar14 = ::FName::FName(&local_70,"STAT_LocalReplay_DecryptTime");
        TVar18.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_DecryptTime,*pFVar14,
                        L"Local replay decrypt time","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
      }
      local_e8.Impl._Line = 0x611;
      local_e8.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
      ;
      local_e8.Impl._Column = 0xb;
      local_e8.Impl._Function =
           "auto __cdecl FLocalFileNetworkReplayStreamer::RequestEventData_Internal::<lambda_1>::operator ()(class TLocalFileRequestCommonData<struct FRequestEventDataResult> &) const"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_1e8,TVar18,CycleStat|ClearEveryFrame,false,&local_e8);
      plVar4 = *(longlong **)this;
      iStack_b0 = local_178.EncryptionKey.ArrayNum;
      local_1c8 = (FScriptContainerElement *)0x0;
      local_1c0 = 0;
      pcVar6 = *(code **)(*plVar4 + 0x1f0);
      local_b8 = local_178.EncryptionKey.AllocatorInstance.Data;
      if ((local_178.EncryptionKey.ArrayNum < 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar27)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar25 = (int)local_220;
      local_a8 = local_228.Data;
      if (((int)local_220 < 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar27)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iStack_a0 = iVar25;
      local_48 = (undefined4)local_a8;
      uStack_44 = local_a8._4_4_;
      iStack_40 = iVar25;
      uStack_3c = uStack_9c;
      local_58 = (undefined4)local_b8;
      uStack_54 = local_b8._4_4_;
      iStack_50 = iStack_b0;
      uStack_4c = uStack_ac;
      cVar11 = (*pcVar6)(plVar4,&local_48,&local_1c8,&local_58);
      if (cVar11 != '\0') {
        if (local_228.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data);
        }
        local_228.Data = local_1c8;
        local_220 = local_1c0;
        local_1c8 = (FScriptContainerElement *)0x0;
        local_1c0 = 0;
        if ((local_1e0 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_1e0 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_1e0 & 4) != 0) {
          FThreadStats::AddMessage(local_1e8,CycleScopeEnd);
        }
        goto LAB_146c99d45;
      }
      if (1 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      *(undefined4 *)&(param_1->DelegateResult)._padding_ = 9;
      if (local_1c8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8);
      }
      if ((local_1e0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_1e0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_1e0 & 4) != 0) {
        FThreadStats::AddMessage(local_1e8,CycleScopeEnd);
      }
      local_1e0 = 0;
    }
    if (local_228.Data != (FScriptContainerElement *)0x0) {
LAB_146c99d8e:
      FMemory::Free(local_228.Data);
    }
    local_1f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_208 = (longlong *)0x0;
    local_1f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_200,&local_1f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_200.ReferenceController);
  }
LAB_146c99ea1:
  if (local_178.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.DataChunks.AllocatorInstance.Data);
  }
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)local_178.Events.AllocatorInstance.Data,
             local_178.Events.ArrayNum);
  if ((FLocalFileEventInfo *)local_178.Events.AllocatorInstance.Data != (FLocalFileEventInfo *)0x0)
  {
    FMemory::Free(local_178.Events.AllocatorInstance.Data);
  }
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)local_178.Checkpoints.AllocatorInstance.Data,
             local_178.Checkpoints.ArrayNum);
  if ((FLocalFileEventInfo *)local_178.Checkpoints.AllocatorInstance.Data !=
      (FLocalFileEventInfo *)0x0) {
    FMemory::Free(local_178.Checkpoints.AllocatorInstance.Data);
  }
  if (local_178.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Chunks.AllocatorInstance.Data);
  }
  if (local_178.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.EncryptionKey.AllocatorInstance.Data);
  }
  if (local_178.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.FriendlyName.Data.AllocatorInstance.Data);
  }
LAB_146c99f19:
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// operator() @ 146c99f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::RequestEventGroupData'::__l2::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FRequestEventGroupDataResult> *param_1)

{
  TArray<FReplayEventListItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ForAnyElementType _Src;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadEvent> FVar17;
  FString *pFVar18;
  size_t sVar19;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime> FVar20;
  FThreadStats *pFVar21;
  FThreadStatsPool *pFVar22;
  uint uVar23;
  ulonglong uVar24;
  FNameEntryId FVar25;
  longlong lVar26;
  FLocalFileEventInfo *pFVar27;
  FScriptContainerElement *pFVar28;
  FName FVar29;
  FScriptContainerElement *pFVar30;
  FName FVar31;
  int iVar32;
  FScriptContainerElement *pFVar33;
  bool bVar34;
  undefined1 local_278 [8];
  ForAnyElementType local_270;
  undefined8 local_268;
  FString local_260;
  FString local_250;
  FScriptContainerElement *local_240;
  undefined8 local_238;
  longlong *local_230;
  FSharedReferencer<1> local_228;
  ForAnyElementType local_220;
  int local_218;
  int local_214;
  FColor_u_0 local_210;
  FColor_u_0 local_20c;
  uint local_208;
  FName local_200;
  FName local_1f8;
  uint local_1f0;
  uint uStack_1ec;
  FLocalFileEventInfo *local_1e8;
  FName local_1e0;
  FName local_1d0;
  FLocalFileReplayInfo local_1b8;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  FStatMessage local_110;
  FStatMessage local_100;
  undefined8 local_f0;
  FSharedReferencer<1> local_e8;
  FString local_e0;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringView<wchar_t> local_a8;
  FScriptContainerElement *local_98;
  int local_90;
  FName local_88;
  FName local_80;
  FString local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  iVar15 = 0;
  FVar17 = StatPtr_STAT_LocalReplay_ReadEvent;
  if (StatPtr_STAT_LocalReplay_ReadEvent ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadEvent>)0x0) {
    pFVar16 = ::FName::FName(&local_88,"STAT_LocalReplay_ReadEvent");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadEvent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadEvent,*pFVar16,
                        L"Local replay read event","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar17;
  bVar9 = false;
  bVar8 = false;
  local_1e0.ComparisonIndex.Value = 0;
  local_1e0.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar31.ComparisonIndex.Value.Value != 0) || (FVar31.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_210.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_210._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_200.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_200.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_200,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x653);
        bVar9 = true;
        bVar8 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      bVar10 = true;
      goto LAB_146c9a0fe;
    }
  }
  bVar9 = bVar11;
  bVar8 = bVar10;
  bVar10 = false;
  FVar31 = local_1e0;
LAB_146c9a0fe:
  local_260.Data.ArrayNum = *(int *)((longlong)this + 0x10);
  lVar26 = (longlong)local_260.Data.ArrayNum;
  pvVar4 = *(void **)((longlong)this + 8);
  local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_260.Data.ArrayNum == 0) {
    local_260.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_260.Data.ArrayNum,0,(ForAnyElementType *)&local_260,local_260.Data.ArrayNum
               ,&local_260.Data.ArrayMax);
    memcpy(local_260.Data.AllocatorInstance.Data,pvVar4,lVar26 * 2);
  }
  if (local_260.Data.ArrayNum < 2) {
    iVar3 = *(int *)(*(longlong *)this + 0x3c8);
    iVar32 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar32 = iVar15;
    }
    ::FString::AssignRange(&local_260,*(wchar_t **)(*(longlong *)this + 0x3c0),iVar32);
  }
  local_220.Data = (FScriptContainerElement *)0x0;
  local_218 = *(int *)(*(longlong *)this + 0x3d8);
  lVar26 = (longlong)local_218;
  pvVar4 = *(void **)(*(longlong *)this + 0x3d0);
  if (local_218 == 0) {
    local_214 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_218,0,&local_220,local_218,&local_214);
    memcpy(local_220.Data,pvVar4,lVar26 * 2);
  }
  bVar11 = FPaths::IsRelative(&local_260);
  _Src.Data = local_260.Data.AllocatorInstance.Data;
  if (bVar11) {
    pFVar18 = FNetworkReplayStreaming::GetReplayFileExtension(&local_78);
    local_98 = (FScriptContainerElement *)L"";
    if (local_260.Data.ArrayNum != 0) {
      local_98 = local_260.Data.AllocatorInstance.Data;
    }
    local_a8.DataPtr = L"";
    if (local_218 != 0) {
      local_a8.DataPtr = (wchar_t *)local_220.Data;
    }
    local_a8.Size = iVar15;
    if ((FScriptContainerElement *)local_a8.DataPtr != (FScriptContainerElement *)0x0) {
      sVar19 = wcslen(local_a8.DataPtr);
      local_a8.Size = (int)sVar19;
    }
    if (local_98 != (FScriptContainerElement *)0x0) {
      sVar19 = wcslen((wchar_t *)local_98);
      iVar15 = (int)sVar19;
    }
    local_90 = iVar15;
    FPaths::CombineInternal(&local_e0,&local_a8,2);
    ::FString::ConcatFF(&local_250,&local_e0,pFVar18);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    lVar26 = (longlong)local_260.Data.ArrayNum;
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.Data.ArrayNum = local_260.Data.ArrayNum;
    if (local_260.Data.ArrayNum == 0) {
      local_250.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_260.Data.ArrayNum,0,(ForAnyElementType *)&local_250,
                 local_260.Data.ArrayNum,&local_250.Data.ArrayMax);
      memcpy(local_250.Data.AllocatorInstance.Data,_Src.Data,lVar26 * 2);
    }
  }
  if (local_220.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data);
  }
  bVar11 = FPaths::FileExists(&local_250);
  if (bVar11) {
    local_1b8.LengthInMS = 0;
    local_1b8.NetworkVersion = 0;
    local_1b8.Timestamp.Ticks = 0;
    local_1b8.TotalDataSizeInBytes = 0;
    local_1b8.Changelist = 0;
    local_1b8.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.FriendlyName.Data.ArrayNum = 0;
    local_1b8.FriendlyName.Data.ArrayMax = 0;
    local_1b8.bIsLive = false;
    local_1b8.bIsValid = false;
    local_1b8.bCompressed = false;
    local_1b8.bEncrypted = false;
    local_1b8.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.EncryptionKey.ArrayNum = 0;
    local_1b8.EncryptionKey.ArrayMax = 0;
    local_1b8.HeaderChunkIndex = -1;
    local_1b8.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Chunks.ArrayNum = 0;
    local_1b8.Chunks.ArrayMax = 0;
    local_1b8.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Checkpoints.ArrayNum = 0;
    local_1b8.Checkpoints.ArrayMax = 0;
    local_1b8.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Events.ArrayNum = 0;
    local_1b8.Events.ArrayMax = 0;
    local_1b8.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.DataChunks.ArrayNum = 0;
    local_1b8.DataChunks.ArrayMax = 0;
    bVar11 = FLocalFileNetworkReplayStreamer::ReadReplayInfo
                       (*(FLocalFileNetworkReplayStreamer **)this,&local_260,&local_1b8,None);
    if (bVar11) {
      (**(code **)(**(longlong **)this + 0x1f8))(*(longlong **)this,&local_230,&local_250);
      if (local_230 == (longlong *)0x0) {
        if (1 < (byte)LogLocalFileReplay._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
        }
        *(undefined4 *)&(param_1->DelegateResult)._padding_ = 6;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_228.ReferenceController);
      }
      else {
        uVar24 = (ulonglong)local_1b8.Events.ArrayNum;
        bVar11 = false;
        local_208 = local_1b8.Events.ArrayNum;
        local_1e8 = (FLocalFileEventInfo *)(local_1b8.Events.AllocatorInstance.Data + uVar24 * 0x50)
        ;
        pFVar33 = local_1b8.Events.AllocatorInstance.Data + 0x48;
        pFVar27 = local_1e8;
        while( true ) {
          if (local_1b8.Events.ArrayNum != (int)uVar24) {
            local_278[0] = 0;
            `TCheckedPointerIterator<FLocalFileEventInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_278);
          }
          if ((FLocalFileEventInfo *)(pFVar33 + -0x48) == pFVar27) break;
          iVar15 = *(int *)(pFVar33 + -0x28);
          if (iVar15 == *(int *)((longlong)this + 0x20)) {
            if (1 < iVar15) {
              iVar15 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(pFVar33 + -0x30),
                                  *(wchar_t **)((longlong)this + 0x18));
              bVar34 = iVar15 == 0;
              goto LAB_146c9a434;
            }
LAB_146c9a43f:
            bVar11 = true;
            if ((local_230 == (longlong *)0x0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar34)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (**(code **)(*local_230 + 0x1b8))(local_230,*(long64 *)pFVar33);
            pTVar1 = &(param_1->DelegateResult).ReplayEventListItems;
            *(undefined4 *)&(param_1->DelegateResult)._padding_ = 0;
            iVar15 = (param_1->DelegateResult).ReplayEventListItems.ArrayNum;
            piVar2 = &(param_1->DelegateResult).ReplayEventListItems.ArrayMax;
            if (iVar15 == *piVar2) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,&pTVar1->AllocatorInstance,piVar2);
            }
            (param_1->DelegateResult).ReplayEventListItems.ArrayNum = iVar15 + 1;
            pFVar28 = (pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 0x40;
            DefaultConstructItems<FReplayEventListItem,int>(pFVar28,1);
            ::FString::operator=((FString *)(pFVar28 + 8),(FString *)(pFVar33 + -0x40));
            ::FString::operator=((FString *)(pFVar28 + 0x18),(FString *)(pFVar33 + -0x30));
            ::FString::operator=((FString *)(pFVar28 + 0x28),(FString *)(pFVar33 + -0x20));
            *(uint *)(pFVar28 + 0x38) = *(uint *)(pFVar33 + -0x10);
            bVar7 = false;
            bVar34 = false;
            *(uint *)(pFVar28 + 0x3c) = *(uint *)(pFVar33 + -0xc);
            local_270.Data = (FScriptContainerElement *)0x0;
            local_268 = 0;
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,*(int *)(pFVar33 + -8),&local_270,(int *)&local_268,
                       (int *)((longlong)&local_268 + 4));
            if ((local_230 == (longlong *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (**(code **)(*local_230 + 0x188))(local_230,local_270.Data,(longlong)(int)local_268);
            if (local_1b8.bEncrypted != false) {
              cVar13 = (**(code **)(**(longlong **)this + 0x1d8))();
              if (cVar13 == '\0') {
                if (1 < (byte)LogLocalFileReplay._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
                }
                *(undefined4 *)&(param_1->DelegateResult)._padding_ = 1;
                if (local_270.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_270.Data);
                }
                goto LAB_146c9aa80;
              }
              FVar20 = StatPtr_STAT_LocalReplay_DecryptTime;
              if (StatPtr_STAT_LocalReplay_DecryptTime ==
                  (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime>)0x0) {
                pFVar16 = ::FName::FName(&local_80,"STAT_LocalReplay_DecryptTime");
                FVar20 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)
                                    &StatPtr_STAT_LocalReplay_DecryptTime,*pFVar16,
                                    L"Local replay decrypt time","STATGROUP_LocalReplay",
                                    "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,
                                    MCR_Invalid);
              }
              FVar29 = *(FName *)FVar20;
              local_1d0.ComparisonIndex.Value = 0;
              local_1d0.Number = 0;
              FVar25 = FVar29.ComparisonIndex.Value;
              uVar23 = FVar29.Number;
              if ((FVar25.Value == 0) && (uVar23 == 0)) {
LAB_146c9a6aa:
                bVar12 = false;
                FVar29 = local_1d0;
              }
              else {
                if (GCycleStatsShouldEmitNamedEvents != 0) {
                  local_20c.Bits = 0;
                  FGenericPlatformMisc::BeginNamedEvent
                            ((FColor *)&local_20c._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
                  bVar7 = false;
                  bVar34 = true;
                  if (-1 < CpuChannel->Enabled) {
                    local_1f8.ComparisonIndex.Value = FVar25.Value;
                    local_1f8.Number = uVar23;
                    FCpuProfilerTrace::OutputBeginDynamicEventWithId
                              (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                               ,0x685);
                    bVar7 = true;
                    bVar34 = true;
                  }
                }
                if (FThreadStats::bPrimaryEnable == false) goto LAB_146c9a6aa;
                local_1f0 = FVar25.Value;
                uStack_1ec = uVar23;
                local_1d0 = FVar29;
                FThreadStats::AddMessage(FVar29,CycleScopeStart);
                bVar12 = true;
              }
              plVar5 = *(longlong **)this;
              iVar15 = local_1b8.EncryptionKey.ArrayNum;
              local_240 = (FScriptContainerElement *)0x0;
              local_238 = 0;
              pcVar6 = *(code **)(*plVar5 + 0x1f0);
              local_c8 = local_1b8.EncryptionKey.AllocatorInstance.Data;
              if ((local_1b8.EncryptionKey.ArrayNum < 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iStack_c0 = iVar15;
              iVar15 = (int)local_268;
              local_b8 = local_270.Data;
              if (((int)local_268 < 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iStack_b0 = iVar15;
              local_58 = (undefined4)local_b8;
              uStack_54 = local_b8._4_4_;
              iStack_50 = iVar15;
              uStack_4c = uStack_ac;
              local_68 = (undefined4)local_c8;
              uStack_64 = local_c8._4_4_;
              iStack_60 = iStack_c0;
              uStack_5c = uStack_bc;
              cVar13 = (*pcVar6)(plVar5,&local_58,&local_240,&local_68);
              if (cVar13 == '\0') {
                if (1 < (byte)LogLocalFileReplay._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
                }
                *(undefined4 *)&(param_1->DelegateResult)._padding_ = 9;
                if (local_240 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_240);
                }
                if (bVar34) {
                  FGenericPlatformMisc::EndNamedEvent();
                }
                if (bVar7) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                if ((((bVar12) && (FVar29 != (FName)0x0)) &&
                    (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar21 == (FThreadStats *)0x0) {
                    pFVar22 = FThreadStatsPool::Get();
                    pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
                  }
                  if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
                    local_100.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
                    local_100.NameAndInfo.Index.Value = FVar29.ComparisonIndex.Value.Value;
                    QueryPerformanceCounter(&local_118);
                    local_100.StatData.Pad[4] = '\0';
                    local_100.StatData.Pad[5] = '\0';
                    local_100.StatData.Pad[6] = '\0';
                    local_100.StatData.Pad[7] = '\0';
                    local_100.StatData.Pad[0] = local_118.s.LowPart._0_1_;
                    local_100.StatData.Pad[1] = local_118.s.LowPart._1_1_;
                    local_100.StatData.Pad[2] = local_118.s.LowPart._2_1_;
                    local_100.StatData.Pad[3] = local_118.s.LowPart._3_1_;
                    FThreadStats::AddStatMessage(pFVar21,&local_100);
                    piVar2 = &pFVar21->ScopeCount;
                    *piVar2 = *piVar2 + -1;
                    if (*piVar2 == 0) {
                      FThreadStats::Flush(pFVar21,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FThreadStats::FlushRawStats(pFVar21,false,false);
                    }
                  }
                }
                if (local_270.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_270.Data);
                }
                goto LAB_146c9aa80;
              }
              if (local_270.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_270.Data);
              }
              local_270.Data = local_240;
              local_268 = local_238;
              local_238 = 0;
              local_240 = (FScriptContainerElement *)0x0;
              if (bVar34) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if (bVar7) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if (((bVar12) && (FVar29 != (FName)0x0)) &&
                 ((FThreadStats::bPrimaryDisableForever == false &&
                  (FThreadStats::TlsSlot != 0xffffffff)))) {
                pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar21 == (FThreadStats *)0x0) {
                  pFVar22 = FThreadStatsPool::Get();
                  pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
                }
                if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
                  local_110.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
                  local_110.NameAndInfo.Index.Value = FVar29.ComparisonIndex.Value.Value;
                  QueryPerformanceCounter(&local_120);
                  local_110.StatData.Pad[4] = '\0';
                  local_110.StatData.Pad[5] = '\0';
                  local_110.StatData.Pad[6] = '\0';
                  local_110.StatData.Pad[7] = '\0';
                  local_110.StatData.Pad[0] = local_120.s.LowPart._0_1_;
                  local_110.StatData.Pad[1] = local_120.s.LowPart._1_1_;
                  local_110.StatData.Pad[2] = local_120.s.LowPart._2_1_;
                  local_110.StatData.Pad[3] = local_120.s.LowPart._3_1_;
                  FThreadStats::AddStatMessage(pFVar21,&local_110);
                  piVar2 = &pFVar21->ScopeCount;
                  *piVar2 = *piVar2 + -1;
                  if (*piVar2 == 0) {
                    FThreadStats::Flush(pFVar21,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(pFVar21,false,false);
                  }
                }
              }
            }
            piVar2 = &(param_1->DelegateResult).ReplayEventListResults.ArrayMax;
            iVar15 = (param_1->DelegateResult).ReplayEventListResults.ArrayNum;
            if (iVar15 == *piVar2) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&(param_1->DelegateResult).ReplayEventListResults.
                                         AllocatorInstance,piVar2);
            }
            pFVar28 = (param_1->DelegateResult).ReplayEventListResults.AllocatorInstance.Data;
            (param_1->DelegateResult).ReplayEventListResults.ArrayNum = iVar15 + 1;
            pFVar28 = pFVar28 + (longlong)iVar15 * 0x20;
            DefaultConstructItems<FRequestEventDataResult,int>(pFVar28,1);
            *(undefined4 *)(pFVar28 + 8) = 0;
            pFVar30 = pFVar28 + 0x10;
            if (pFVar30 != (FScriptContainerElement *)&local_270) {
              if (*(void **)pFVar30 != (void *)0x0) {
                FMemory::Free(*(void **)pFVar30);
              }
              *(FScriptContainerElement **)pFVar30 = local_270.Data;
              local_270.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar28 + 0x18) = (int)local_268;
              *(undefined4 *)(pFVar28 + 0x1c) = local_268._4_4_;
              local_268 = 0;
            }
            if (local_270.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.Data);
            }
            pFVar33 = pFVar33 + 0x50;
            uVar24 = (ulonglong)local_208;
            pFVar27 = local_1e8;
          }
          else {
            bVar34 = iVar15 + *(int *)((longlong)this + 0x20) == 1;
LAB_146c9a434:
            if (bVar34) goto LAB_146c9a43f;
            uVar24 = (ulonglong)local_208;
            pFVar33 = pFVar33 + 0x50;
          }
        }
        if (!bVar11) {
          *(undefined4 *)&(param_1->DelegateResult)._padding_ = 8;
        }
LAB_146c9aa80:
        local_e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_230 = (longlong *)0x0;
        local_f0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_228,&local_e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_228.ReferenceController);
      }
    }
    else {
      if (1 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      *(undefined4 *)&(param_1->DelegateResult)._padding_ = 6;
    }
    if (local_1b8.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.DataChunks.AllocatorInstance.Data);
    }
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)local_1b8.Events.AllocatorInstance.Data,
               local_1b8.Events.ArrayNum);
    if ((FLocalFileEventInfo *)local_1b8.Events.AllocatorInstance.Data != (FLocalFileEventInfo *)0x0
       ) {
      FMemory::Free(local_1b8.Events.AllocatorInstance.Data);
    }
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)local_1b8.Checkpoints.AllocatorInstance.Data,
               local_1b8.Checkpoints.ArrayNum);
    if ((FLocalFileEventInfo *)local_1b8.Checkpoints.AllocatorInstance.Data !=
        (FLocalFileEventInfo *)0x0) {
      FMemory::Free(local_1b8.Checkpoints.AllocatorInstance.Data);
    }
    if (local_1b8.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Chunks.AllocatorInstance.Data);
    }
    if (local_1b8.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.EncryptionKey.AllocatorInstance.Data);
    }
    if (local_1b8.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.FriendlyName.Data.AllocatorInstance.Data);
    }
  }
  else {
    *(undefined4 *)&(param_1->DelegateResult)._padding_ = 2;
  }
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return;
}

// operator() @ 146c9ac70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_1>::operator()
          (void *this,ELocalFileReplayResult *param_1)

{
  int *piVar1;
  FLocalFileNetworkReplayStreamer *pFVar2;
  code *pcVar3;
  uint *puVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FArchive *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushHeader> FVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar18;
  uint uVar19;
  FNameEntryId FVar20;
  FName FVar21;
  uint local_res8;
  uint uStackX_c;
  uint local_res18 [2];
  uint local_res20 [2];
  FArchive *local_148;
  FSharedReferencer<1> local_140;
  FColor_u_0 local_138 [2];
  FName local_130;
  FName local_128;
  FLocalFileReplayInfo local_118;
  code *local_88;
  LARGE_INTEGER local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  FStatMessage local_68;
  FName local_58;
  FString local_50;
  
  FVar14 = StatPtr_STAT_LocalReplay_FlushHeader;
  if (StatPtr_STAT_LocalReplay_FlushHeader ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushHeader>)0x0) {
    pFVar13 = ::FName::FName(&local_58,"STAT_LocalReplay_FlushHeader");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_FlushHeader>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_FlushHeader,*pFVar13,
                        L"Local replay flush header","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar14;
  bVar6 = false;
  bVar8 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar18 = FVar21.Number;
  if ((FVar20.Value == 0) && (uVar18 == 0)) {
LAB_146c9adb7:
    bVar7 = false;
    FVar21 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar20.Value;
        local_130.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0xc61);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c9adb7;
    local_res8 = FVar20.Value;
    uStackX_c = uVar18;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar7 = true;
  }
  pFVar2 = *(FLocalFileNetworkReplayStreamer **)this;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x200);
  FLocalFileNetworkReplayStreamer::GetDemoFullFilename(pFVar2,&local_50,&pFVar2->CurrentStreamName);
  (*pcVar3)(pFVar2,&local_148);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_148 == (FArchive *)0x0) {
    *param_1 = FileWriter;
  }
  else {
    pFVar2 = *(FLocalFileNetworkReplayStreamer **)this;
    uVar18 = (pFVar2->TaskReplayInfo).HeaderChunkIndex;
    if (uVar18 == 0xffffffff) {
      local_118.LengthInMS = 0;
      local_118.NetworkVersion = 0;
      local_118.Timestamp.Ticks = 0;
      local_118.TotalDataSizeInBytes = 0;
      local_118.Changelist = 0;
      local_118.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.FriendlyName.Data.ArrayNum = 0;
      local_118.FriendlyName.Data.ArrayMax = 0;
      local_118.bIsLive = false;
      local_118.bIsValid = false;
      local_118.bCompressed = false;
      local_118.bEncrypted = false;
      local_118.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.EncryptionKey.ArrayNum = 0;
      local_118.EncryptionKey.ArrayMax = 0;
      local_118.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Chunks.ArrayNum = 0;
      local_118.Chunks.ArrayMax = 0;
      local_118.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Checkpoints.ArrayNum = 0;
      local_118.Checkpoints.ArrayMax = 0;
      local_118.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Events.ArrayNum = 0;
      local_118.Events.ArrayMax = 0;
      local_118.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.DataChunks.ArrayNum = 0;
      local_118.DataChunks.ArrayMax = 0;
      local_118.HeaderChunkIndex = uVar18;
      bVar10 = FLocalFileNetworkReplayStreamer::ReadReplayInfo
                         (pFVar2,&pFVar2->CurrentStreamName,&local_118,None);
      if (bVar10) {
        if (1 < (byte)LogLocalFileReplay._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
        }
        *param_1 = InvalidReplayInfo;
        if (local_118.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.DataChunks.AllocatorInstance.Data);
        }
        DestructItems<FLocalFileEventInfo,int>
                  ((FLocalFileEventInfo *)local_118.Events.AllocatorInstance.Data,
                   local_118.Events.ArrayNum);
        if ((FLocalFileEventInfo *)local_118.Events.AllocatorInstance.Data !=
            (FLocalFileEventInfo *)0x0) {
          FMemory::Free(local_118.Events.AllocatorInstance.Data);
        }
        DestructItems<FLocalFileEventInfo,int>
                  ((FLocalFileEventInfo *)local_118.Checkpoints.AllocatorInstance.Data,
                   local_118.Checkpoints.ArrayNum);
        if ((FLocalFileEventInfo *)local_118.Checkpoints.AllocatorInstance.Data !=
            (FLocalFileEventInfo *)0x0) {
          FMemory::Free(local_118.Checkpoints.AllocatorInstance.Data);
        }
        if (local_118.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Chunks.AllocatorInstance.Data);
        }
        if (local_118.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.EncryptionKey.AllocatorInstance.Data);
        }
        if (local_118.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.FriendlyName.Data.AllocatorInstance.Data);
        }
        goto LAB_146c9b57f;
      }
      if ((local_148 == (FArchive *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = local_148;
      pcVar3 = *(code **)(*(longlong *)local_148 + 0x1b8);
      if ((local_148 == (FArchive *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar15 = (**(code **)(*(longlong *)local_148 + 0x30))();
      (*pcVar3)(pFVar9,uVar15);
      if (local_118.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.DataChunks.AllocatorInstance.Data);
      }
      DestructItems<FLocalFileEventInfo,int>
                ((FLocalFileEventInfo *)local_118.Events.AllocatorInstance.Data,
                 local_118.Events.ArrayNum);
      if ((FLocalFileEventInfo *)local_118.Events.AllocatorInstance.Data !=
          (FLocalFileEventInfo *)0x0) {
        FMemory::Free(local_118.Events.AllocatorInstance.Data);
      }
      DestructItems<FLocalFileEventInfo,int>
                ((FLocalFileEventInfo *)local_118.Checkpoints.AllocatorInstance.Data,
                 local_118.Checkpoints.ArrayNum);
      if ((FLocalFileEventInfo *)local_118.Checkpoints.AllocatorInstance.Data !=
          (FLocalFileEventInfo *)0x0) {
        FMemory::Free(local_118.Checkpoints.AllocatorInstance.Data);
      }
      if (local_118.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Chunks.AllocatorInstance.Data);
      }
      if (local_118.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.EncryptionKey.AllocatorInstance.Data);
      }
      if (local_118.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.FriendlyName.Data.AllocatorInstance.Data);
      }
    }
    else {
      uVar19 = 0;
      if ((int)uVar18 < (pFVar2->TaskReplayInfo).Chunks.ArrayNum) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar12 = *(int *)((pFVar2->TaskReplayInfo).Chunks.AllocatorInstance.Data +
                       (longlong)(int)uVar18 * 0x18 + 4);
      if ((local_148 == (FArchive *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = local_148;
      lVar16 = *(longlong *)this;
      uVar18 = *(uint *)(lVar16 + 0x480);
      local_88 = *(code **)(*(longlong *)local_148 + 0x1b8);
      uVar19 = 0;
      if ((int)uVar18 < *(int *)(lVar16 + 0x490)) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*local_88)(pFVar9,*(undefined8 *)
                          (*(longlong *)(lVar16 + 0x488) + 8 + (longlong)(int)uVar18 * 0x18));
      if (*(int *)((longlong)this + 0x10) != iVar12) {
        local_res8 = 0xffffffff;
        if ((local_148 == (FArchive *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar4 = (uint *)**(undefined8 **)&local_148->field_0x8;
        if ((uint *)(*(undefined8 **)&local_148->field_0x8)[1] < puVar4 + 1) {
          if ((local_148->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)local_148 + 0x188))(local_148,&local_res8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(local_148,&local_res8);
          }
        }
        else {
          local_res8 = *puVar4;
          **(longlong **)&local_148->field_0x8 = **(longlong **)&local_148->field_0x8 + 4;
        }
        if ((local_148 == (FArchive *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = local_148;
        pcVar3 = *(code **)(*(longlong *)local_148 + 0x1b8);
        if ((local_148 == (FArchive *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar15 = (**(code **)(*(longlong *)local_148 + 0x30))();
        (*pcVar3)(pFVar9,uVar15);
        uVar19 = local_res8;
        lVar16 = *(longlong *)this;
        uVar18 = *(uint *)(lVar16 + 0x480);
        uVar11 = 0;
        if ((int)uVar18 < *(int *)(lVar16 + 0x490)) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(uint *)(*(longlong *)(lVar16 + 0x488) + (longlong)(int)uVar18 * 0x18) = uVar19;
        *(undefined4 *)(*(longlong *)this + 0x480) = 0xffffffff;
      }
    }
    if ((local_148 == (FArchive *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar16 = (**(code **)(*(longlong *)local_148 + 0x28))();
    if ((lVar16 != (int)lVar16) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar10
       )) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_res18[0] = 0;
    if ((local_148 == (FArchive *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar4 = (uint *)**(undefined8 **)&local_148->field_0x8;
    if ((uint *)(*(undefined8 **)&local_148->field_0x8)[1] < puVar4 + 1) {
      if ((local_148->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)local_148 + 0x188))(local_148,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(local_148,local_res18);
      }
    }
    else {
      local_res18[0] = *puVar4;
      **(longlong **)&local_148->field_0x8 = **(longlong **)&local_148->field_0x8 + 4;
    }
    local_res20[0] = *(uint *)((longlong)this + 0x10);
    if ((local_148 == (FArchive *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar4 = (uint *)**(undefined8 **)&local_148->field_0x8;
    if ((uint *)(*(undefined8 **)&local_148->field_0x8)[1] < puVar4 + 1) {
      if ((local_148->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)local_148 + 0x188))(local_148,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(local_148,local_res20);
      }
    }
    else {
      local_res20[0] = *puVar4;
      **(longlong **)&local_148->field_0x8 = **(longlong **)&local_148->field_0x8 + 4;
    }
    if ((local_148 == (FArchive *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar17 = (**(code **)(*(longlong *)local_148 + 0x28))();
    if ((lVar17 != (int)lVar17) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar10
       )) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((local_148 == (FArchive *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)local_148 + 0x188))(local_148,*(undefined8 *)((longlong)this + 8));
    local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148 = (FArchive *)0x0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_140,&local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    lVar5 = *(longlong *)this;
    if (*(int *)(lVar5 + 0x480) == -1) {
      iVar12 = *(int *)(lVar5 + 0x490);
      if (iVar12 == *(int *)(lVar5 + 0x494)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar5 + 0x488),(int *)(lVar5 + 0x494));
      }
      *(int *)(lVar5 + 0x490) = iVar12 + 1;
      puVar4 = (uint *)(*(longlong *)(lVar5 + 0x488) + (longlong)iVar12 * 0x18);
      DefaultConstructItems<FLocalFileChunkInfo,int>(puVar4,1);
      *puVar4 = local_res18[0];
      *(longlong *)(puVar4 + 2) = (longlong)(int)lVar16;
      *(longlong *)(puVar4 + 4) = (longlong)(int)lVar17;
      puVar4[1] = local_res20[0];
      *(int *)(*(longlong *)this + 0x480) = *(int *)(*(longlong *)this + 0x490) + -1;
    }
  }
LAB_146c9b57f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.ReferenceController);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 146c9b680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::DownloadHeader'::__l5::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FDownloadHeaderResult> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadHeader> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  longlong *local_88;
  FSharedReferencer<1> local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  FStatMessage local_68;
  FString local_58;
  
  FVar8 = StatPtr_STAT_LocalReplay_ReadHeader;
  if (StatPtr_STAT_LocalReplay_ReadHeader ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadHeader>)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_LocalReplay_ReadHeader");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadHeader>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadHeader,*pFVar7,
                       L"Local replay read header","STATGROUP_LocalReplay","STATCAT_Advanced",
                       L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0xc25);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_146c9b7c2;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146c9b7c2:
  FLocalFileNetworkReplayStreamer::GetDemoFullFilename
            (*(FLocalFileNetworkReplayStreamer **)this,&local_58,
             &(*(FLocalFileNetworkReplayStreamer **)this)->CurrentStreamName);
  (**(code **)(**(longlong **)this + 0x1f8))(*(longlong **)this,&local_88);
  if (local_88 != (longlong *)0x0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,*(int *)((longlong)this + 8),&(param_1->DataBuffer).AllocatorInstance,
               &(param_1->DataBuffer).ArrayNum,&(param_1->DataBuffer).ArrayMax);
    if ((local_88 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*local_88 + 0x1b8))(local_88,*(undefined8 *)((longlong)this + 0x10));
    if ((local_88 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*local_88 + 0x188))(local_88,(param_1->DataBuffer).AllocatorInstance.Data);
    *(undefined4 *)&(param_1->DelegateResult).field_0x8 = 0;
    local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,&local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 146c9ba00

void __thiscall
`FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_1>::operator()
          (void *this,TLocalFileRequestCommonData<FStartStreamingResult> *param_1)

{
  FLocalFileNetworkReplayStreamer *this_00;
  bool bVar1;
  FString local_18;
  
  ::FString::operator=((FString *)(*(longlong *)this + 0x3c0),(FString *)((longlong)this + 8));
  FLocalFileNetworkReplayStreamer::GetDemoFullFilename
            (*(FLocalFileNetworkReplayStreamer **)this,&local_18,(FString *)((longlong)this + 8));
  (param_1->DelegateResult).bRecording = false;
  bVar1 = FPaths::FileExists(&local_18);
  if (bVar1) {
    this_00 = *(FLocalFileNetworkReplayStreamer **)this;
    FLocalFileNetworkReplayStreamer::ReadReplayInfo
              (this_00,&this_00->CurrentStreamName,&this_00->TaskReplayInfo,None);
  }
  else {
    *(undefined4 *)&(param_1->DelegateResult)._padding_ = 2;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 146c9baa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::__l2::<lambda_2>::operator()
          (void *this,TLocalFileRequestCommonData<FStreamingResultBase> *param_1)

{
  FLocalFileNetworkReplayStreamer *pFVar1;
  longlong lVar2;
  code *pcVar3;
  UEnum *pUVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TNetResult<ELocalFileReplayResult> *pTVar9;
  UPackage *pUVar10;
  longlong lVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  FLLMScope local_res10 [2];
  UEnum *local_res18;
  longlong local_res20;
  FMemScope local_a8;
  undefined8 local_a0;
  FWeakObjectPtr local_98;
  UEnum *local_90;
  FString local_88;
  longlong local_78;
  undefined1 local_70 [24];
  void *local_58;
  longlong local_48;
  wchar_t *pwVar14;
  
  FLLMScope::FLLMScope(local_res10,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_a8,Replays,true);
  pFVar1 = *(FLocalFileNetworkReplayStreamer **)this;
  if (param_1->AsyncError != Success) {
    pTVar9 = UE::Net::TNetResult<enum_ELocalFileReplayResult>::
             TNetResult<enum_ELocalFileReplayResult>(local_70,param_1->AsyncError);
    (**(code **)(pFVar1->_padding_ + 0x178))(pFVar1,pTVar9);
    FLocalFileNetworkReplayStreamer::CancelStreamingRequests(pFVar1);
    if (local_48 != 0) {
      (**(code **)(local_48 + -0x10))(local_48 + -0x10);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    goto LAB_146c9c0f9;
  }
  if (*(int *)((longlong)this + 8) != pFVar1->StreamChunkIndex) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    (**(code **)(*(longlong *)(*(longlong *)this + 600) + 0xc0))();
    pFVar1 = *(FLocalFileNetworkReplayStreamer **)this;
    if (Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton == (UEnum *)0x0) {
      pUVar10 = Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming();
      Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult,
                         (UObject *)pUVar10,L"ELocalFileReplayResult");
    }
    pUVar4 = Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton;
    local_a0 = 2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton);
    }
    local_98.ObjectIndex = 0;
    local_98.ObjectSerialNumber = 0;
    local_res18 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_res18);
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_78 = 0;
    pwVar13 = L"ELocalFileReplayResult::StreamChunkIndexMismatch";
    do {
      pwVar14 = pwVar13;
      pwVar13 = pwVar14 + 1;
    } while (*pwVar13 != L':');
    local_90 = pUVar4;
    ::FString::operator=(&local_88,pwVar14 + 3);
    (**(code **)(pFVar1->_padding_ + 0x178))(pFVar1,&local_a0);
    FLocalFileNetworkReplayStreamer::CancelStreamingRequests(pFVar1);
    if (local_78 != 0) {
      (**(code **)(local_78 + -0x10))(local_78 + -0x10);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    goto LAB_146c9c0f9;
  }
  if ((param_1->DataBuffer).ArrayNum < 1) {
    if (pFVar1->HighPriorityEndTime != 0) {
      pFVar1->HighPriorityEndTime = 0;
    }
    goto LAB_146c9c0f9;
  }
  lVar11 = (**(code **)((pFVar1->StreamAr)._padding_ + 0x30))();
  uVar15 = 0;
  if (lVar11 == 0) {
    uVar17 = *(uint *)((longlong)this + 8);
    lVar11 = *(longlong *)this;
    uVar16 = uVar15;
    if ((int)uVar17 < *(int *)(lVar11 + 0x148)) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)(*(longlong *)this + 0x150) =
         *(undefined4 *)(*(longlong *)(lVar11 + 0x140) + 4 + (longlong)(int)uVar17 * 0x28);
  }
  uVar17 = *(uint *)((longlong)this + 8);
  lVar11 = *(longlong *)this;
  uVar16 = uVar15;
  if ((int)uVar17 < *(int *)(lVar11 + 0x148)) {
    uVar16 = ~uVar17 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)(*(longlong *)this + 0x154) =
       *(undefined4 *)(*(longlong *)(lVar11 + 0x140) + 8 + (longlong)(int)uVar17 * 0x28);
  if ((*(uint *)(*(longlong *)this + 0x154) < *(uint *)(*(longlong *)this + 0x150)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamTimeRange.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                         ,0xda4,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar5 = UE::Net::LocalFileReplay::CVarMaxBufferedStreamChunks.Ref;
  bVar6 = IsInParallelGameThread();
  if (bVar6) {
LAB_146c9bde4:
    lVar11 = 0;
  }
  else {
    bVar6 = IsInGameThread();
    lVar11 = 4;
    if (bVar6) goto LAB_146c9bde4;
  }
  iVar8 = *(int *)((longlong)pTVar5->ShadowedValue + lVar11);
  uVar17 = 0;
  if (0 < iVar8) {
    uVar16 = (*(int *)((longlong)this + 8) - iVar8) + 1;
    if ((int)uVar16 < 0) {
      uVar16 = uVar15;
    }
    if (0 < (int)uVar16) {
      lVar11 = *(longlong *)this;
      uVar15 = uVar17;
      if ((int)uVar16 < *(int *)(lVar11 + 0x148)) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res20 = (longlong)(int)uVar16 * 0x28;
      lVar11 = *(longlong *)(local_res20 + 0x20 + *(longlong *)(lVar11 + 0x140)) -
               *(longlong *)(*(longlong *)this + 0x158);
      uVar15 = (uint)lVar11;
      lVar18 = (longlong)(int)uVar15;
      if ((lVar11 != lVar18) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6
         )) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((0 < (int)uVar15) &&
         (lVar11 = (**(code **)(*(longlong *)(*(longlong *)this + 600) + 0x28))(), lVar18 <= lVar11)
         ) {
        lVar11 = *(longlong *)this;
        uVar7 = uVar17;
        if ((int)uVar15 <= *(int *)(lVar11 + 0x2f0)) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)(lVar11 + 0x2f0) - uVar15;
        if (iVar8 != 0) {
          memmove(*(void **)(lVar11 + 0x2e8),(void *)(lVar18 + (longlong)*(void **)(lVar11 + 0x2e8))
                  ,(longlong)iVar8);
        }
        *(int *)(lVar11 + 0x2f0) = *(int *)(lVar11 + 0x2f0) - uVar15;
        lVar11 = *(longlong *)this;
        lVar2 = *(longlong *)(lVar11 + 600);
        lVar12 = (**(code **)(lVar2 + 0x28))(lVar11 + 600);
        (**(code **)(lVar2 + 0x1b8))(lVar11 + 600,lVar12 - lVar18);
        lVar11 = *(longlong *)this;
        uVar15 = uVar17;
        if ((int)uVar16 < *(int *)(lVar11 + 0x148)) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(*(longlong *)this + 0x150) =
             *(undefined4 *)(*(longlong *)(lVar11 + 0x140) + 4 + local_res20);
        *(longlong *)(*(longlong *)this + 0x158) = *(longlong *)(*(longlong *)this + 0x158) + lVar18
        ;
        if ((*(uint *)(*(longlong *)this + 0x154) < *(uint *)(*(longlong *)this + 0x150)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StreamTimeRange.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                               ,0xdba,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
  Append<unsigned_char,TSizedDefaultAllocator<32>_>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0x2e8),
             &param_1->DataBuffer);
  uVar15 = *(uint *)((longlong)this + 8);
  pFVar1 = *(FLocalFileNetworkReplayStreamer **)this;
  if ((int)uVar15 < (pFVar1->CurrentReplayInfo).DataChunks.ArrayNum) {
    uVar17 = ~uVar15 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FLocalFileNetworkReplayStreamer::AddRequestToCache
            (pFVar1,*(int *)((pFVar1->CurrentReplayInfo).DataChunks.AllocatorInstance.Data +
                            (longlong)(int)uVar15 * 0x28),&param_1->DataBuffer);
  *(int *)(*(longlong *)this + 0x160) = *(int *)(*(longlong *)this + 0x160) + 1;
LAB_146c9c0f9:
  FMemScope::~FMemScope(&local_a8);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// operator() @ 146c9c130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_2>::operator()
          (void *this,ELocalFileReplayResult *param_1)

{
  FLocalFileNetworkReplayStreamer *this_00;
  undefined1 local_38 [24];
  void *local_20;
  longlong local_10;
  
  if (*param_1 == Success) {
    FLocalFileNetworkReplayStreamer::UpdateCurrentReplayInfo
              (*(FLocalFileNetworkReplayStreamer **)this,
               &(*(FLocalFileNetworkReplayStreamer **)this)->TaskReplayInfo,None);
    return;
  }
  if (1 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  this_00 = *(FLocalFileNetworkReplayStreamer **)this;
  UE::Net::TNetResult<enum_ELocalFileReplayResult>::TNetResult<enum_ELocalFileReplayResult>
            (local_38,*param_1);
  (**(code **)(this_00->_padding_ + 0x178))(this_00,local_38);
  FLocalFileNetworkReplayStreamer::CancelStreamingRequests(this_00);
  if (local_10 != 0) {
    (**(code **)(local_10 + -0x10))(local_10 + -0x10);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// operator() @ 146c9c1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_2>::operator()
          (void *this,ELocalFileReplayResult *param_1)

{
  FLocalFileNetworkReplayStreamer *this_00;
  undefined1 local_38 [24];
  void *local_20;
  longlong local_10;
  
  if (*param_1 == Success) {
    FLocalFileNetworkReplayStreamer::UpdateCurrentReplayInfo
              (*(FLocalFileNetworkReplayStreamer **)this,
               &(*(FLocalFileNetworkReplayStreamer **)this)->TaskReplayInfo,None);
    return;
  }
  if (1 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  this_00 = *(FLocalFileNetworkReplayStreamer **)this;
  UE::Net::TNetResult<enum_ELocalFileReplayResult>::TNetResult<enum_ELocalFileReplayResult>
            (local_38,*param_1);
  (**(code **)(this_00->_padding_ + 0x178))(this_00,local_38);
  FLocalFileNetworkReplayStreamer::CancelStreamingRequests(this_00);
  if (local_10 != 0) {
    (**(code **)(local_10 + -0x10))(local_10 + -0x10);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// operator() @ 146c9cab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_2>::operator()
          (void *this,ELocalFileReplayResult *param_1)

{
  FLocalFileNetworkReplayStreamer *this_00;
  undefined1 local_38 [24];
  void *local_20;
  longlong local_10;
  
  if (*param_1 == Success) {
    FLocalFileNetworkReplayStreamer::UpdateCurrentReplayInfo
              (*(FLocalFileNetworkReplayStreamer **)this,
               &(*(FLocalFileNetworkReplayStreamer **)this)->TaskReplayInfo,None);
    return;
  }
  if (1 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  this_00 = *(FLocalFileNetworkReplayStreamer **)this;
  UE::Net::TNetResult<enum_ELocalFileReplayResult>::TNetResult<enum_ELocalFileReplayResult>
            (local_38,*param_1);
  (**(code **)(this_00->_padding_ + 0x178))(this_00,local_38);
  FLocalFileNetworkReplayStreamer::CancelStreamingRequests(this_00);
  if (local_10 != 0) {
    (**(code **)(local_10 + -0x10))(local_10 + -0x10);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// operator() @ 146c9cb60

void __thiscall
`FLocalFileNetworkReplayStreamer::DownloadHeader'::__l5::<lambda_2>::operator()
          (void *this,TLocalFileRequestCommonData<FDownloadHeaderResult> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  FReadAccessScope local_28;
  
  lVar2 = *(longlong *)this;
  pTVar1 = &param_1->DataBuffer;
  puVar4 = (undefined8 *)(lVar2 + 0x238);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)puVar4 != pTVar1) {
    if ((void *)*puVar4 != (void *)0x0) {
      FMemory::Free((void *)*puVar4);
    }
    *puVar4 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar2 + 0x240) = (param_1->DataBuffer).ArrayNum;
    *(int *)(lVar2 + 0x244) = (param_1->DataBuffer).ArrayMax;
    (param_1->DataBuffer).ArrayNum = 0;
    (param_1->DataBuffer).ArrayMax = 0;
  }
  (**(code **)(*(longlong *)(*(longlong *)this + 0x1a8) + 0x1b8))
            ((longlong *)(*(longlong *)this + 0x1a8),0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (plVar3 = *(longlong **)((longlong)this + 0x10), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// operator() @ 146c9cc20

void __thiscall
`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l26::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  FReadAccessScope local_58;
  undefined **local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  (**(code **)(*(longlong *)(*(longlong *)this + 0x308) + 0xc0))();
  plVar1 = *(longlong **)this;
  uVar2 = plVar1[0x30];
  pcVar3 = *(code **)(*plVar1 + 0x78);
  if ((uVar2 != (uVar2 & 0xffffffff)) || ((longlong)uVar2 < 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar6 = (*pcVar3)(plVar1,0);
  if (cVar6 == '\0') {
    lVar4 = *(longlong *)this;
    *(undefined4 *)(lVar4 + 0x2f0) = 0;
    if (*(int *)(lVar4 + 0x2f4) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)(lVar4 + 0x2e8),0,(int *)(lVar4 + 0x2f4));
    }
    *(undefined8 *)(*(longlong *)this + 0x158) = 0;
    *(undefined8 *)(*(longlong *)this + 0x150) = 0;
    *(undefined4 *)(*(longlong *)this + 0x160) = 0;
    *(undefined8 *)(*(longlong *)this + 0x168) = 0;
    plVar1 = *(longlong **)this;
    uVar2 = plVar1[0x30];
    pcVar3 = *(code **)(*plVar1 + 0x70);
    if ((uVar2 != (uVar2 & 0xffffffff)) || ((longlong)uVar2 < 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*pcVar3)(plVar1,0,uVar2 & 0xffffffff);
  }
  (**(code **)(*(longlong *)(*(longlong *)this + 600) + 0x1b8))
            ((longlong *)(*(longlong *)this + 600),0);
  *(undefined1 *)(*(longlong *)this + 0x2fc) = 0;
  local_40 = &___7FGotoResult__6B_;
  local_30 = *(undefined8 *)(*(longlong *)this + 0x180);
  local_38 = 0;
  local_28 = 0xffffffffffffffff;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_58);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 0x10), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_40);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  *(undefined8 *)(*(longlong *)this + 0x180) = 0xffffffffffffffff;
  return;
}

// operator() @ 146c9ce10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_2>::operator()
          (void *this,TLocalFileRequestCommonData<FStartStreamingResult> *param_1)

{
  TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar1;
  FLocalFileNetworkReplayStreamer *this_01;
  ulonglong *puVar2;
  undefined ***pppuVar3;
  undefined1 auStack_c8 [32];
  FDestructionSentinel local_a8;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  ulonglong local_78 [3];
  ulonglong *local_60;
  code *local_58 [2];
  undefined **local_48;
  FLocalFileNetworkReplayStreamer *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((int)(param_1->DelegateResult)._padding_ != 2) {
    FLocalFileNetworkReplayStreamer::UpdateCurrentReplayInfo
              (*(FLocalFileNetworkReplayStreamer **)this,
               &(*(FLocalFileNetworkReplayStreamer **)this)->TaskReplayInfo,FullUpdate);
    plVar1 = *(longlong **)this;
    if (*(char *)((longlong)plVar1 + 0xf1) != '\0') {
      local_78[0] = 0;
      local_88 = (undefined1  [8])0x0;
      local_80.Data = (FScriptContainerElement *)0x0;
      (**(code **)(*plVar1 + 0xf0))(plVar1,local_88);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
                 (FWriteAccessScope *)&local_a8);
      if (((int)local_78[0] != 0) && (local_80.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_80.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_80,0,0,0x10);
        local_78[0] = local_78[0] & 0xffffffff00000000;
      }
      if (local_a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
      }
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_88);
      this_01 = *(FLocalFileNetworkReplayStreamer **)this;
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<``FLocalFileNetworkReplayStreamer::StartStreaming'::`50'::<lambda_2>::operator()'::`12'::<lambda_1>,0,0>
                  ::_vftable_;
      local_30 = (undefined ***)0x0;
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_2>::operator()'::__l12::<lambda_1>,void,TLocalFileRequestCommonData<FStartStreamingResult>_&>
                    ::Call;
      local_40 = this_01;
      TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                  *)&local_a8,
                 (TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                  *)((longlong)this + 8));
      local_88 = (undefined1  [8])0x0;
      local_60 = FMemory::Malloc(0x20,8);
      this_00 = (TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy> *
                )(local_60 + 1);
      *local_60 = (ulonglong)
                  &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFStartStreamingResult___ZUFDefaultDelegateUserPolicy____UFStartStreamingResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFStartStreamingResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFStartStreamingResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
      ;
      TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                (this_00,(TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                          *)&local_a8);
      if (this_00 !=
          (TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy> *)0x0)
      {
        local_88 = (undefined1  [8])
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>,FStartStreamingResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FStartStreamingResult>_&>
                   ::Call;
      }
      FLocalFileNetworkReplayStreamer::
      AddGenericRequestToQueue<TLocalFileRequestCommonData<FStartStreamingResult>_>
                (this_01,StartPlayback,
                 (TFunction<void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)> *)
                 local_58,(TFunction<void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)>
                           *)local_88);
      if ((atomic<unsigned___int64>)local_88 != (atomic<unsigned___int64>)0x0) {
        puVar2 = local_78;
        if (local_60 != (ulonglong *)0x0) {
          puVar2 = local_60;
        }
        (**(code **)(*puVar2 + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8);
      if (local_58[0] == (code *)0x0) {
        return;
      }
      pppuVar3 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar3 = local_30;
      }
      (*(code *)(*pppuVar3)[2])();
      return;
    }
    *(undefined4 *)&(param_1->DelegateResult)._padding_ = 3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             (FReadAccessScope *)&local_a8);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 0x10), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_a8);
  return;
}

// operator() @ 146c9d020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l50::<lambda_3>::operator()
          (void *this,TLocalFileRequestCommonData<FGotoResult> *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FStatNameAndInfo FVar7;
  uchar _Src [8];
  FStatMessage *pFVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime> FVar15;
  TSharedPtr<FCachedFileRequest,1> *pTVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecompressTime> FVar19;
  FCachedFileRequest *pFVar20;
  undefined7 uVar22;
  ForAnyElementType FVar21;
  FNameEntryId FVar23;
  longlong lVar24;
  FName FVar25;
  size_t sVar26;
  ulonglong uVar27;
  int *piVar28;
  uint local_res8 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  ForAnyElementType local_338;
  FStatNameAndInfo local_330;
  FStatMessage local_328;
  uchar local_318 [8];
  FStatNameAndInfo local_310;
  longlong *local_308;
  FSharedReferencer<1> local_300;
  FColor_u_0 local_2f8;
  FColor_u_0 local_2f4 [3];
  undefined8 local_2e8;
  FName local_2e0;
  uint local_2d8;
  uint uStack_2d4;
  FName local_2d0;
  uint local_2c8;
  uint uStack_2c4;
  FName local_2c0;
  FName local_2b8;
  FName local_2a8;
  TPairInitializer<int_const_&,TSharedPtr<FCachedFileRequest,1>_&&> local_298;
  LARGE_INTEGER local_288;
  TRawPtrProxy<FCachedFileRequest> local_280;
  LARGE_INTEGER local_278;
  LARGE_INTEGER local_270;
  FStatMessage local_268;
  FStatMessage local_258;
  FStatMessage local_248;
  FStatMessage local_238;
  undefined8 local_228;
  FSharedReferencer<1> local_220;
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  uint uStack_200;
  int iStack_1fc;
  uint *local_1f8;
  TSharedPtr<FCachedFileRequest,1> *local_1f0;
  TSharedPtr<FCachedFileRequest,1> local_1e8;
  FString local_1d8;
  FArchiveState local_1c8;
  longlong local_138;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_130;
  undefined8 local_128;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_118;
  FName local_68;
  FName local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  FStatMessage local_48;
  
  if (*(char *)(*(longlong *)this + 0x178) == '\0') {
    this_00 = &param_1->DataBuffer;
    uVar27 = 0;
    piVar28 = &(param_1->DataBuffer).ArrayMax;
    (param_1->DataBuffer).ArrayNum = 0;
    if (*piVar28 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&this_00->AllocatorInstance,0,piVar28);
    }
    FLocalFileNetworkReplayStreamer::GetDemoFullFilename
              (*(FLocalFileNetworkReplayStreamer **)this,&local_1d8,
               &(*(FLocalFileNetworkReplayStreamer **)this)->CurrentStreamName);
    (**(code **)(**(longlong **)this + 0x1f8))(*(longlong **)this,&local_308,&local_1d8);
    if (local_308 != (longlong *)0x0) {
      local_338.Data = (FScriptContainerElement *)0x0;
      local_330.Index.Value = 0;
      local_330.Number = 0;
      local_res8[0] = 0;
      if (-1 < *(int *)((longlong)this + 8)) {
        do {
          piVar28 = &(param_1->DataBuffer).ArrayMax;
          lVar2 = *(longlong *)this;
          if (*(int *)(lVar2 + 0x78) != *(int *)(lVar2 + 0xa4)) {
            lVar24 = lVar2 + 0xa8;
            if (*(longlong *)(lVar2 + 0xb0) != 0) {
              lVar24 = *(longlong *)(lVar2 + 0xb0);
            }
            iVar13 = *(int *)(lVar24 + (*(int *)(lVar2 + 0xb8) - 1 & uVar27) * 4);
            if (iVar13 != -1) {
              do {
                if (*(int *)((longlong)iVar13 * 0x20 + *(longlong *)(lVar2 + 0x70)) == (int)uVar27)
                {
                  if (iVar13 != -1) {
                    local_2e8 = 0;
                    local_1c8._padding_ = 0;
                    local_1c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
                    local_1c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
                    local_1c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
                    local_1c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
                    local_1c8._40_8_ = 0;
                    local_1c8.ArSerializingDefaults = 0;
                    local_1c8.ArPortFlags = 0;
                    local_1c8.ArMaxSerializeSize = 0;
                    local_1c8.ArUEVer.FileVersionUE4 = 0;
                    local_1c8.ArUEVer.FileVersionUE5 = 0;
                    local_1c8.ArLicenseeUEVer = 0;
                    local_1c8.ArEngineVer.Major = 0;
                    local_1c8.ArEngineVer.Minor = 0;
                    local_1c8.ArEngineVer.Patch = 0;
                    local_1c8.ArEngineVer._6_2_ = 0;
                    local_1c8.ArEngineVer.Changelist = 0;
                    local_1c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
                    local_1c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
                    local_1c8.SavePackageData = (FArchiveSavePackageData *)0x0;
                    local_1c8.SerializedProperty = (FProperty *)0x0;
                    local_1c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
                    local_1c8.bCustomVersionsAreReset = false;
                    local_1c8._129_7_ = 0;
                    local_1c8.NextProxy = (FArchiveState *)0x0;
                    FArchiveState::FArchiveState(&local_1c8);
                    uVar22 = (undefined7)((ulonglong)lVar24 >> 8);
                    local_128 = local_2e8;
                    local_138 = 0;
                    local_1c8._padding_ =
                         (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
                    local_130 = this_00;
                    FArchiveState::SetIsSaving(&local_1c8,true);
                    (**(code **)(local_1c8._padding_ + 0x108))(&local_1c8,CONCAT71(uVar22,1));
                    local_138 = (longlong)(param_1->DataBuffer).ArrayNum;
                    local_1c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
                    pTVar16 = TMapBase<int,TSharedPtr<FCachedFileRequest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FCachedFileRequest,1>,0>_>
                              ::FindChecked((TMapBase<int,TSharedPtr<FCachedFileRequest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FCachedFileRequest,1>,0>_>
                                             *)(*(longlong *)this + 0x70),local_res8[0]);
                    if ((pTVar16->Object == (FCachedFileRequest *)0x0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar9)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    local_res18[0] = (pTVar16->Object->RequestData).ArrayNum;
                    if ((local_1c8.ActiveFPLB)->EndFastPathLoadBuffer <
                        (uint *)((longlong)(local_1c8.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
                      if (local_1c8.ArForceByteSwapping == 0) {
                        (**(code **)(local_1c8._padding_ + 0x188))(&local_1c8,local_res18,4);
                      }
                      else {
                        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,local_res18);
                      }
                    }
                    else {
                      local_res18[0] = *(uint *)(local_1c8.ActiveFPLB)->StartFastPathLoadBuffer;
                      (local_1c8.ActiveFPLB)->StartFastPathLoadBuffer =
                           (local_1c8.ActiveFPLB)->StartFastPathLoadBuffer + 4;
                    }
                    pTVar16 = TMapBase<int,TSharedPtr<FCachedFileRequest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FCachedFileRequest,1>,0>_>
                              ::FindChecked((TMapBase<int,TSharedPtr<FCachedFileRequest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FCachedFileRequest,1>,0>_>
                                             *)(*(longlong *)this + 0x70),local_res8[0]);
                    if ((pTVar16->Object == (FCachedFileRequest *)0x0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar9)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
                    Append<unsigned_char,TSizedDefaultAllocator<32>_>
                              (this_00,&pTVar16->Object->RequestData);
                    FArchive::~FArchive((FArchive *)&local_1c8);
                    goto LAB_146c9dcc2;
                  }
                  break;
                }
                iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + *(longlong *)(lVar2 + 0x70));
              } while (iVar13 != -1);
            }
          }
          if ((local_308 == (longlong *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar3 = local_308;
          lVar24 = (longlong)(int)local_res8[0];
          lVar2 = *(longlong *)this;
          pcVar4 = *(code **)(*local_308 + 0x1b8);
          uVar12 = 0;
          if ((int)local_res8[0] < *(int *)(lVar2 + 0x4a0)) {
            uVar12 = ~local_res8[0] >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*pcVar4)(plVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0x498) + 0x48 + lVar24 * 0x50));
          FVar7 = local_330;
          iVar13 = local_330.Number;
          local_330 = (FStatNameAndInfo)((ulonglong)(uint)local_330.Number << 0x20);
          if (((longlong)FVar7 < 0) && (iVar13 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0,&local_338,0,&local_330.Number);
          }
          lVar24 = (longlong)(int)local_res8[0];
          lVar2 = *(longlong *)this;
          uVar12 = 0;
          if ((int)local_res8[0] < *(int *)(lVar2 + 0x4a0)) {
            uVar12 = ~local_res8[0] >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,*(int *)(*(longlong *)(lVar2 + 0x498) + 0x40 + lVar24 * 0x50),&local_338,
                     (int *)&local_330,&local_330.Number);
          if ((local_308 == (longlong *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar21.Data = local_338.Data;
          (**(code **)(*local_308 + 0x188))(local_308,local_338.Data);
          local_328.StatData.Pad[0] = '\0';
          local_328.StatData.Pad[1] = '\0';
          local_328.StatData.Pad[2] = '\0';
          local_328.StatData.Pad[3] = '\0';
          local_328.StatData.Pad[4] = '\0';
          local_328.StatData.Pad[5] = '\0';
          local_328.StatData.Pad[6] = '\0';
          local_328.StatData.Pad[7] = '\0';
          local_328.NameAndInfo.Index.Value = 0;
          local_328.NameAndInfo.Number = 0;
          if (*(char *)((longlong)*(longlong **)this + 0x46b) != '\0') {
            cVar10 = (**(code **)(**(longlong **)this + 0x1d8))();
            if (cVar10 == '\0') {
              if (1 < (byte)LogLocalFileReplay._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
              }
              (param_1->DataBuffer).ArrayNum = 0;
              if (*piVar28 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0,&this_00->AllocatorInstance,0,piVar28);
              }
            }
            else {
              FVar15 = StatPtr_STAT_LocalReplay_DecryptTime;
              if (StatPtr_STAT_LocalReplay_DecryptTime ==
                  (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime>)0x0) {
                pFVar14 = ::FName::FName(&local_60,"STAT_LocalReplay_DecryptTime");
                FVar15 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)
                                    &StatPtr_STAT_LocalReplay_DecryptTime,*pFVar14,
                                    L"Local replay decrypt time","STATGROUP_LocalReplay",
                                    "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,
                                    MCR_Invalid);
              }
              FVar25 = *(FName *)FVar15;
              bVar6 = false;
              bVar9 = false;
              local_2b8.ComparisonIndex.Value = 0;
              local_2b8.Number = 0;
              FVar23 = FVar25.ComparisonIndex.Value;
              uVar12 = FVar25.Number;
              if ((FVar23.Value == 0) && (uVar12 == 0)) {
LAB_146c9d61b:
                bVar5 = false;
                FVar25 = local_2b8;
              }
              else {
                if (GCycleStatsShouldEmitNamedEvents != 0) {
                  local_2f8.Bits = 0;
                  FGenericPlatformMisc::BeginNamedEvent
                            ((FColor *)&local_2f8._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
                  bVar6 = false;
                  bVar9 = true;
                  if (-1 < CpuChannel->Enabled) {
                    local_2e0.ComparisonIndex.Value = FVar23.Value;
                    local_2e0.Number = uVar12;
                    FCpuProfilerTrace::OutputBeginDynamicEventWithId
                              (&local_2e0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                               ,0x906);
                    bVar6 = true;
                    bVar9 = true;
                  }
                }
                if (FThreadStats::bPrimaryEnable == false) goto LAB_146c9d61b;
                local_2d8 = FVar23.Value;
                uStack_2d4 = uVar12;
                local_2b8 = FVar25;
                FThreadStats::AddMessage(FVar25,CycleScopeStart);
                bVar6 = false;
                bVar5 = true;
              }
              plVar3 = *(longlong **)this;
              iVar13 = (int)plVar3[0x8f];
              pcVar4 = *(code **)(*plVar3 + 0x1f0);
              local_218 = plVar3[0x8e];
              if ((iVar13 < 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar23.Value = local_330.Index.Value;
              local_208 = (FStatMessage *)local_338.Data;
              iStack_210 = iVar13;
              if (((int)local_330.Index.Value < 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar8 = local_208;
              uStack_200 = FVar23.Value;
              FVar21.Data = (FScriptContainerElement *)&local_48;
              local_48.StatData.Pad[0] = (uchar)local_208;
              local_48.StatData.Pad[1] = local_208._1_1_;
              local_48.StatData.Pad[2] = local_208._2_1_;
              local_48.StatData.Pad[3] = local_208._3_1_;
              local_48.StatData.Pad[4] = local_208._4_1_;
              local_48.StatData.Pad[5] = local_208._5_1_;
              local_48.StatData.Pad[6] = local_208._6_1_;
              local_48.StatData.Pad[7] = local_208._7_1_;
              local_48.NameAndInfo.Index.Value = FVar23.Value;
              local_48.NameAndInfo.Number = iStack_1fc;
              local_58 = (undefined4)local_218;
              uStack_54 = local_218._4_4_;
              iStack_50 = iStack_210;
              uStack_4c = uStack_20c;
              local_208 = pFVar8;
              cVar10 = (*pcVar4)(plVar3,FVar21.Data);
              if (cVar10 != '\0') {
                if (bVar9) {
                  FGenericPlatformMisc::EndNamedEvent();
                }
                if (bVar6) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                if ((((bVar5) && (FVar25 != (FName)0x0)) &&
                    (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar17 == (FThreadStats *)0x0) {
                    pFVar18 = FThreadStatsPool::Get();
                    pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
                  }
                  if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
                    local_268.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
                    local_268.NameAndInfo.Index.Value = FVar25.ComparisonIndex.Value.Value;
                    QueryPerformanceCounter((LARGE_INTEGER *)&local_298.Value);
                    local_268.StatData.Pad[4] = '\0';
                    local_268.StatData.Pad[5] = '\0';
                    local_268.StatData.Pad[6] = '\0';
                    local_268.StatData.Pad[7] = '\0';
                    local_268.StatData.Pad[0] = local_298.Value._0_1_;
                    local_268.StatData.Pad[1] = local_298.Value._1_1_;
                    local_268.StatData.Pad[2] = local_298.Value._2_1_;
                    local_268.StatData.Pad[3] = local_298.Value._3_1_;
                    FVar21.Data = (FScriptContainerElement *)&local_268;
                    FThreadStats::AddStatMessage(pFVar17,(FStatMessage *)FVar21.Data);
                    piVar28 = &pFVar17->ScopeCount;
                    *piVar28 = *piVar28 + -1;
                    if (*piVar28 == 0) {
                      FVar21.Data = (FScriptContainerElement *)0x0;
                      FThreadStats::Flush(pFVar17,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FVar21.Data = (FScriptContainerElement *)0x0;
                      FThreadStats::FlushRawStats(pFVar17,false,false);
                    }
                  }
                }
                goto LAB_146c9d7f2;
              }
              if (1 < (byte)LogLocalFileReplay._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
              }
              (param_1->DataBuffer).ArrayNum = 0;
              if ((param_1->DataBuffer).ArrayMax != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0,&this_00->AllocatorInstance,0,&(param_1->DataBuffer).ArrayMax);
              }
              if (bVar9) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if (bVar6) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if (((bVar5) && (FVar25 != (FName)0x0)) &&
                 ((FThreadStats::bPrimaryDisableForever == false &&
                  (FThreadStats::TlsSlot != 0xffffffff)))) {
                pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar17 == (FThreadStats *)0x0) {
                  pFVar18 = FThreadStatsPool::Get();
                  pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
                }
                if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
                  local_248.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
                  local_248.NameAndInfo.Index.Value = FVar25.ComparisonIndex.Value.Value;
                  QueryPerformanceCounter(&local_270);
                  local_248.StatData.Pad[4] = '\0';
                  local_248.StatData.Pad[5] = '\0';
                  local_248.StatData.Pad[6] = '\0';
                  local_248.StatData.Pad[7] = '\0';
                  local_248.StatData.Pad[0] = local_270.s.LowPart._0_1_;
                  local_248.StatData.Pad[1] = local_270.s.LowPart._1_1_;
                  local_248.StatData.Pad[2] = local_270.s.LowPart._2_1_;
                  local_248.StatData.Pad[3] = local_270.s.LowPart._3_1_;
                  FThreadStats::AddStatMessage(pFVar17,&local_248);
                  piVar28 = &pFVar17->ScopeCount;
                  *piVar28 = *piVar28 + -1;
                  if (*piVar28 == 0) {
                    FThreadStats::Flush(pFVar17,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(pFVar17,false,false);
                  }
                }
              }
            }
LAB_146c9dfba:
            if (local_328.StatData.Pad != (uchar  [8])0x0) {
              FMemory::Free((void *)local_328.StatData.Pad);
            }
            goto LAB_146c9dfed;
          }
          local_328.StatData.Pad = (uchar  [8])local_338.Data;
          local_328.NameAndInfo = local_330;
          local_330.Index.Value = 0;
          local_330.Number = 0;
          local_338.Data = (FScriptContainerElement *)0x0;
LAB_146c9d7f2:
          piVar28 = &(param_1->DataBuffer).ArrayMax;
          local_318[0] = '\0';
          local_318[1] = '\0';
          local_318[2] = '\0';
          local_318[3] = '\0';
          local_318[4] = '\0';
          local_318[5] = '\0';
          local_318[6] = '\0';
          local_318[7] = '\0';
          local_310.Index.Value = 0;
          local_310.Number = 0;
          if (*(char *)((longlong)*(longlong **)this + 0x46a) != '\0') {
            cVar10 = (**(code **)(**(longlong **)this + 0x1c0))();
            if (cVar10 == '\0') {
              if (1 < (byte)LogLocalFileReplay._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
              }
              (param_1->DataBuffer).ArrayNum = 0;
              if (*piVar28 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0,&this_00->AllocatorInstance,0,piVar28);
              }
            }
            else {
              FVar19 = StatPtr_STAT_LocalReplay_DecompressTime;
              if (StatPtr_STAT_LocalReplay_DecompressTime ==
                  (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecompressTime>)0x0) {
                pFVar14 = ::FName::FName(&local_68,"STAT_LocalReplay_DecompressTime");
                FVar19 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecompressTime>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)
                                    &StatPtr_STAT_LocalReplay_DecompressTime,*pFVar14,
                                    L"Local replay decompress time","STATGROUP_LocalReplay",
                                    "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,
                                    MCR_Invalid);
              }
              FVar25 = *(FName *)FVar19;
              bVar9 = false;
              bVar6 = false;
              local_2a8.ComparisonIndex.Value = 0;
              local_2a8.Number = 0;
              FVar23 = FVar25.ComparisonIndex.Value;
              uVar12 = FVar25.Number;
              if ((FVar23.Value == 0) && (uVar12 == 0)) {
LAB_146c9d93f:
                bVar5 = false;
                FVar25 = local_2a8;
              }
              else {
                if (GCycleStatsShouldEmitNamedEvents != 0) {
                  local_2f4[0].Bits = 0;
                  FGenericPlatformMisc::BeginNamedEvent
                            ((FColor *)&local_2f4[0]._s_0,
                             (char *)*(FName *)((longlong)FVar19 + 0x10));
                  bVar9 = false;
                  bVar6 = true;
                  if (-1 < CpuChannel->Enabled) {
                    local_2d0.ComparisonIndex.Value = FVar23.Value;
                    local_2d0.Number = uVar12;
                    FCpuProfilerTrace::OutputBeginDynamicEventWithId
                              (&local_2d0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                               ,0x921);
                    bVar9 = true;
                    bVar6 = true;
                  }
                }
                if (FThreadStats::bPrimaryEnable == false) goto LAB_146c9d93f;
                local_2c8 = FVar23.Value;
                uStack_2c4 = uVar12;
                local_2a8 = FVar25;
                FThreadStats::AddMessage(FVar25,CycleScopeStart);
                bVar5 = true;
              }
              FVar21.Data = (FScriptContainerElement *)&local_328;
              cVar10 = (**(code **)(**(longlong **)this + 0x1c8))(*(longlong **)this,FVar21.Data);
              if (cVar10 != '\0') {
                if (bVar6) {
                  FGenericPlatformMisc::EndNamedEvent();
                }
                if (bVar9) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                if ((((bVar5) && (FVar25 != (FName)0x0)) &&
                    (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar17 == (FThreadStats *)0x0) {
                    pFVar18 = FThreadStatsPool::Get();
                    pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
                  }
                  if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
                    local_258.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
                    local_258.NameAndInfo.Index.Value = FVar25.ComparisonIndex.Value.Value;
                    QueryPerformanceCounter(&local_288);
                    local_258.StatData.Pad[4] = '\0';
                    local_258.StatData.Pad[5] = '\0';
                    local_258.StatData.Pad[6] = '\0';
                    local_258.StatData.Pad[7] = '\0';
                    local_258.StatData.Pad[0] = local_288.s.LowPart._0_1_;
                    local_258.StatData.Pad[1] = local_288.s.LowPart._1_1_;
                    local_258.StatData.Pad[2] = local_288.s.LowPart._2_1_;
                    local_258.StatData.Pad[3] = local_288.s.LowPart._3_1_;
                    FVar21.Data = (FScriptContainerElement *)&local_258;
                    FThreadStats::AddStatMessage(pFVar17,(FStatMessage *)FVar21.Data);
                    piVar1 = &pFVar17->ScopeCount;
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      FVar21.Data = (FScriptContainerElement *)0x0;
                      FThreadStats::Flush(pFVar17,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FVar21.Data = (FScriptContainerElement *)0x0;
                      FThreadStats::FlushRawStats(pFVar17,false,false);
                    }
                  }
                }
                goto LAB_146c9da55;
              }
              if (1 < (byte)LogLocalFileReplay._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
              }
              (param_1->DataBuffer).ArrayNum = 0;
              if (*piVar28 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0,&this_00->AllocatorInstance,0,piVar28);
              }
              if (bVar6) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if (bVar9) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if (((bVar5) && (FVar25 != (FName)0x0)) &&
                 ((FThreadStats::bPrimaryDisableForever == false &&
                  (FThreadStats::TlsSlot != 0xffffffff)))) {
                pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar17 == (FThreadStats *)0x0) {
                  pFVar18 = FThreadStatsPool::Get();
                  pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
                }
                if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
                  local_238.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
                  local_238.NameAndInfo.Index.Value = FVar25.ComparisonIndex.Value.Value;
                  QueryPerformanceCounter(&local_278);
                  local_238.StatData.Pad[4] = '\0';
                  local_238.StatData.Pad[5] = '\0';
                  local_238.StatData.Pad[6] = '\0';
                  local_238.StatData.Pad[7] = '\0';
                  local_238.StatData.Pad[0] = local_278.s.LowPart._0_1_;
                  local_238.StatData.Pad[1] = local_278.s.LowPart._1_1_;
                  local_238.StatData.Pad[2] = local_278.s.LowPart._2_1_;
                  local_238.StatData.Pad[3] = local_278.s.LowPart._3_1_;
                  FThreadStats::AddStatMessage(pFVar17,&local_238);
                  piVar28 = &pFVar17->ScopeCount;
                  *piVar28 = *piVar28 + -1;
                  if (*piVar28 == 0) {
                    FThreadStats::Flush(pFVar17,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(pFVar17,false,false);
                  }
                }
              }
            }
            if (local_318 != (uchar  [8])0x0) {
              FMemory::Free((void *)local_318);
            }
            goto LAB_146c9dfba;
          }
          local_318[0] = local_328.StatData.Pad[0];
          local_318[1] = local_328.StatData.Pad[1];
          local_318[2] = local_328.StatData.Pad[2];
          local_318[3] = local_328.StatData.Pad[3];
          local_318[4] = local_328.StatData.Pad[4];
          local_318[5] = local_328.StatData.Pad[5];
          local_318[6] = local_328.StatData.Pad[6];
          local_318[7] = local_328.StatData.Pad[7];
          local_310 = local_328.NameAndInfo;
          local_328.NameAndInfo.Index.Value = 0;
          local_328.NameAndInfo.Number = 0;
          local_328.StatData.Pad[0] = '\0';
          local_328.StatData.Pad[1] = '\0';
          local_328.StatData.Pad[2] = '\0';
          local_328.StatData.Pad[3] = '\0';
          local_328.StatData.Pad[4] = '\0';
          local_328.StatData.Pad[5] = '\0';
          local_328.StatData.Pad[6] = '\0';
          local_328.StatData.Pad[7] = '\0';
LAB_146c9da55:
          local_2c0.ComparisonIndex.Value = 0;
          local_2c0.Number = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          local_118._padding_ = 0;
          FArchiveState::FArchiveState((FArchiveState *)&local_118);
          local_118._padding_ = 0;
          local_118._padding_ =
               (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
          uVar22 = (undefined7)((ulonglong)FVar21.Data >> 8);
          local_118.ArchiveName = local_2c0;
          local_118.Bytes = this_00;
          FArchiveState::SetIsSaving((FArchiveState *)&local_118,true);
          (**(code **)(local_118._padding_ + 0x108))(&local_118,CONCAT71(uVar22,1));
          local_118._padding_ = (longlong)(param_1->DataBuffer).ArrayNum;
          local_118._padding_ = (longlong)&___7FMemoryWriter__6B_;
          local_res20[0] = local_310.Index.Value;
          if (*(uint **)(local_118._padding_ + 8) < *(uint **)local_118._padding_ + 1) {
            if ((local_118._padding_ & 0x10000U) == 0) {
              TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_118,local_res20,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)&local_118,local_res20);
            }
          }
          else {
            local_res20[0] = **(uint **)local_118._padding_;
            *(longlong *)local_118._padding_ = *(longlong *)local_118._padding_ + 4;
          }
          if ((this_00 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_318) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          sVar26 = (size_t)(int)local_310.Index.Value;
          if (local_310.Index.Value != 0) {
            iVar13 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (1,1,local_310.Index.Value,&this_00->AllocatorInstance,
                                &(param_1->DataBuffer).ArrayNum,piVar28);
            memcpy((this_00->AllocatorInstance).Data + iVar13,(void *)local_318,sVar26);
          }
          lVar2 = *(longlong *)this;
          pFVar20 = ::operator_new(0x18);
          _Src = local_318;
          if (pFVar20 == (FCachedFileRequest *)0x0) {
            pFVar20 = (FCachedFileRequest *)0x0;
          }
          else {
            (pFVar20->RequestData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            sVar26 = (size_t)(int)local_310.Index.Value;
            (pFVar20->RequestData).ArrayNum = local_310.Index.Value;
            piVar28 = &(pFVar20->RequestData).ArrayMax;
            if (local_310.Index.Value == 0) {
              *piVar28 = 0;
              pFVar20->LastAccessTime = 0.0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_310.Index.Value,0,(ForAnyElementType *)pFVar20,
                         local_310.Index.Value,piVar28);
              memcpy((pFVar20->RequestData).AllocatorInstance.Data,(void *)_Src,sVar26);
              pFVar20->LastAccessTime = 0.0;
            }
          }
          local_280.Object = pFVar20;
          TSharedPtr<FCachedFileRequest,1>::TSharedPtr<FCachedFileRequest,1><FCachedFileRequest>
                    (&local_1e8,&local_280);
          local_1f8 = local_res8;
          local_1f0 = &local_1e8;
          TSet<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FCachedFileRequest,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,TSharedPtr<FCachedFileRequest,1>_&&>_>
                    ((TSet<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FCachedFileRequest,1>,0>,FDefaultSetAllocator>
                      *)(lVar2 + 0x70),&local_298,(bool *)&local_1f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1e8.SharedReferenceCount.ReferenceController);
          FArchive::~FArchive((FArchive *)&local_118);
          if (local_318 != (uchar  [8])0x0) {
            FMemory::Free((void *)local_318);
          }
          if (local_328.StatData.Pad != (uchar  [8])0x0) {
            FMemory::Free((void *)local_328.StatData.Pad);
          }
LAB_146c9dcc2:
          local_res8[0] = local_res8[0] + 1;
          uVar27 = (ulonglong)local_res8[0];
        } while ((int)local_res8[0] <= *(int *)((longlong)this + 8));
      }
      local_220.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_308 = (longlong *)0x0;
      local_228 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_300,&local_220);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_220.ReferenceController);
LAB_146c9dfed:
      if ((FStatMessage *)local_338.Data != (FStatMessage *)0x0) {
        FMemory::Free(local_338.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_300.ReferenceController);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 146c9e060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_3>::operator()
          (void *this,TLocalFileRequestCommonData<FStartStreamingResult> *param_1)

{
  int *piVar1;
  void *pvVar2;
  FLocalFileNetworkReplayStreamer *this_00;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_StartRecording> FVar9;
  FStatMessage *pFVar10;
  size_t sVar11;
  FString *pFVar12;
  IFileManager *pIVar13;
  FDateTime FVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  wchar_t *pwVar15;
  TAlignedBytes<8,8> TVar16;
  LARGE_INTEGER LVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  char *in_stack_fffffffffffffe78;
  FStatMessage local_148;
  FStatMessage local_138;
  FStatMessage local_128;
  LARGE_INTEGER local_118;
  FString local_108;
  FLocalFileReplayInfo local_f8;
  FString local_68;
  TStringView<wchar_t> local_58;
  uchar local_48 [8];
  undefined4 local_40;
  
  bVar7 = false;
  iVar18 = 0;
  local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
  FVar9 = StatPtr_STAT_LocalReplay_StartRecording;
  if (StatPtr_STAT_LocalReplay_StartRecording ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_StartRecording>)0x0) {
    pFVar8 = ::FName::FName(local_res18,"STAT_LocalReplay_StartRecording");
    in_stack_fffffffffffffe78 = "STATCAT_Advanced";
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_StartRecording>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_StartRecording,*pFVar8
                       ,L"Local replay start recording","STATGROUP_LocalReplay","STATCAT_Advanced",
                       L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar17 = *(LARGE_INTEGER *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_118.s.LowPart = 0;
  local_118.s.HighPart = 0;
  if ((LVar17.s.LowPart == 0) && (LVar17.s.HighPart == 0)) {
LAB_146c9e1b9:
    bVar4 = false;
    LVar17 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x38b);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c9e1b9;
    local_res8 = LVar17;
    FThreadStats::AddMessage((FName)LVar17.s,CycleScopeStart);
    bVar4 = true;
  }
  local_148.NameAndInfo.Index.Value = *(uint *)((longlong)this + 0x10);
  lVar19 = (longlong)(int)local_148.NameAndInfo.Index.Value;
  local_148.StatData.Pad[0] = '\0';
  local_148.StatData.Pad[1] = '\0';
  local_148.StatData.Pad[2] = '\0';
  local_148.StatData.Pad[3] = '\0';
  local_148.StatData.Pad[4] = '\0';
  local_148.StatData.Pad[5] = '\0';
  local_148.StatData.Pad[6] = '\0';
  local_148.StatData.Pad[7] = '\0';
  pvVar2 = *(void **)((longlong)this + 8);
  if (local_148.NameAndInfo.Index.Value == 0) {
    local_148.NameAndInfo.Number = 0;
  }
  else {
    in_stack_fffffffffffffe78 = (char *)&local_148;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_148.NameAndInfo.Index.Value,0,
               (ForAnyElementType *)in_stack_fffffffffffffe78,local_148.NameAndInfo.Index.Value,
               &local_148.NameAndInfo.Number);
    memcpy((void *)local_148.StatData.Pad,pvVar2,lVar19 * 2);
  }
  if (*(int *)((longlong)this + 0x10) < 2) {
    pFVar10 = (FStatMessage *)
              FLocalFileNetworkReplayStreamer::GetAutomaticDemoName
                        (*(FLocalFileNetworkReplayStreamer **)this,&local_108);
    if (&local_148 != pFVar10) {
      if (local_148.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_148.StatData.Pad);
      }
      local_148.StatData.Pad =
           (uchar  [8])
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10->StatData)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10->StatData)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      local_148.NameAndInfo.Index.Value =
           ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10->StatData)->ArrayNum;
      local_148.NameAndInfo.Number =
           ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10->StatData)->ArrayMax;
      (pFVar10->NameAndInfo).Index = 0;
      (pFVar10->NameAndInfo).Number = 0;
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  iVar20 = local_148.NameAndInfo.Index.Value - 1;
  if (local_148.NameAndInfo.Index.Value == 0) {
    iVar20 = 0;
  }
  ::FString::AssignRange
            ((FString *)(*(longlong *)this + 0x3c0),(wchar_t *)local_148.StatData.Pad,iVar20);
  local_128.StatData.Pad[0] = '\0';
  local_128.StatData.Pad[1] = '\0';
  local_128.StatData.Pad[2] = '\0';
  local_128.StatData.Pad[3] = '\0';
  local_128.StatData.Pad[4] = '\0';
  local_128.StatData.Pad[5] = '\0';
  local_128.StatData.Pad[6] = '\0';
  local_128.StatData.Pad[7] = '\0';
  local_128.NameAndInfo.Index.Value = *(uint *)(*(longlong *)this + 0x3d8);
  lVar19 = (longlong)(int)local_128.NameAndInfo.Index.Value;
  pvVar2 = *(void **)(*(longlong *)this + 0x3d0);
  if (local_128.NameAndInfo.Index.Value == 0) {
    local_128.NameAndInfo.Number = 0;
  }
  else {
    in_stack_fffffffffffffe78 = (char *)&local_128;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_128.NameAndInfo.Index.Value,0,
               (ForAnyElementType *)in_stack_fffffffffffffe78,local_128.NameAndInfo.Index.Value,
               &local_128.NameAndInfo.Number);
    memcpy((void *)local_128.StatData.Pad,pvVar2,lVar19 * 2);
  }
  bVar6 = FPaths::IsRelative((FString *)&local_148);
  if (bVar6) {
    local_res8 = (LARGE_INTEGER)FNetworkReplayStreaming::GetReplayFileExtension(&local_68);
    local_48 = (uchar  [8])L"";
    if (local_148.NameAndInfo.Index.Value != 0) {
      local_48 = local_148.StatData.Pad;
    }
    local_58.DataPtr = L"";
    if (local_128.NameAndInfo.Index.Value != 0) {
      local_58.DataPtr = (wchar_t *)local_128.StatData.Pad;
    }
    local_58.Size = 0;
    if ((uchar  [8])local_58.DataPtr != (uchar  [8])0x0) {
      sVar11 = wcslen(local_58.DataPtr);
      local_58.Size = (int)sVar11;
    }
    local_40 = 0;
    if (local_48 != (uchar  [8])0x0) {
      sVar11 = wcslen((wchar_t *)local_48);
      local_40 = (undefined4)sVar11;
    }
    FPaths::CombineInternal(&local_108,&local_58,2);
    ::FString::ConcatFF((FString *)&local_138,&local_108,(FString *)local_res8);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  else {
    lVar19 = (longlong)(int)local_148.NameAndInfo.Index.Value;
    local_138.StatData.Pad[0] = '\0';
    local_138.StatData.Pad[1] = '\0';
    local_138.StatData.Pad[2] = '\0';
    local_138.StatData.Pad[3] = '\0';
    local_138.StatData.Pad[4] = '\0';
    local_138.StatData.Pad[5] = '\0';
    local_138.StatData.Pad[6] = '\0';
    local_138.StatData.Pad[7] = '\0';
    local_res8.s.LowPart._0_1_ = local_148.StatData.Pad[0];
    local_res8.s.LowPart._1_1_ = local_148.StatData.Pad[1];
    local_res8.s.LowPart._2_1_ = local_148.StatData.Pad[2];
    local_res8.s.LowPart._3_1_ = local_148.StatData.Pad[3];
    local_res8.s.HighPart._0_1_ = local_148.StatData.Pad[4];
    local_res8.s.HighPart._1_1_ = local_148.StatData.Pad[5];
    local_res8.s.HighPart._2_1_ = local_148.StatData.Pad[6];
    local_res8.s.HighPart._3_1_ = local_148.StatData.Pad[7];
    local_138.NameAndInfo.Index.Value = local_148.NameAndInfo.Index.Value;
    if (local_148.NameAndInfo.Index.Value == 0) {
      local_138.NameAndInfo.Number = 0;
    }
    else {
      in_stack_fffffffffffffe78 = (char *)&local_138;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_148.NameAndInfo.Index.Value,0,
                 (ForAnyElementType *)in_stack_fffffffffffffe78,local_148.NameAndInfo.Index.Value,
                 &local_138.NameAndInfo.Number);
      memcpy((void *)local_138.StatData.Pad,(void *)local_res8,lVar19 * 2);
    }
  }
  if (local_128.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_128.StatData.Pad);
  }
  if (1 < (int)local_148.NameAndInfo.Index.Value) {
    pFVar12 = FNetworkReplayStreaming::GetReplayFileExtension(&local_68);
    iVar20 = (pFVar12->Data).ArrayNum;
    if (iVar20 == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      iVar18 = iVar20 + -1;
    }
    bVar7 = true;
    bVar6 = ::FString::EndsWith((FString *)&local_138,pwVar15,iVar18,IgnoreCase);
    if (bVar6) {
      bVar6 = false;
      goto LAB_146c9e465;
    }
  }
  bVar6 = true;
LAB_146c9e465:
  if ((bVar7) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    param_1->AsyncError = InvalidName;
  }
  else {
    (param_1->DelegateResult).bRecording = true;
    local_f8.LengthInMS = 0;
    local_f8.NetworkVersion = 0;
    local_f8.Changelist = 0;
    local_f8.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.FriendlyName.Data.ArrayNum = 0;
    local_f8.FriendlyName.Data.ArrayMax = 0;
    local_f8.Timestamp.Ticks = 0;
    local_f8.TotalDataSizeInBytes = 0;
    local_f8.bIsLive = false;
    local_f8.bIsValid = false;
    local_f8.bCompressed = false;
    local_f8.bEncrypted = false;
    local_f8.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.EncryptionKey.ArrayNum = 0;
    local_f8.EncryptionKey.ArrayMax = 0;
    local_f8.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Chunks.ArrayNum = 0;
    local_f8.Chunks.ArrayMax = 0;
    local_f8.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Checkpoints.ArrayNum = 0;
    local_f8.Checkpoints.ArrayMax = 0;
    local_f8.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Events.ArrayNum = 0;
    local_f8.Events.ArrayMax = 0;
    local_f8.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.DataChunks.ArrayNum = 0;
    local_f8.DataChunks.ArrayMax = 0;
    local_f8.HeaderChunkIndex = -1;
    bVar7 = FLocalFileNetworkReplayStreamer::ReadReplayInfo
                      (*(FLocalFileNetworkReplayStreamer **)this,(FString *)&local_148,&local_f8,
                       None);
    if (((bVar7) && (local_f8.bIsLive != false)) && (2 < (byte)LogLocalFileReplay._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    pIVar13 = IFileManager::Get();
    TVar16.Pad = (uchar  [8])L"";
    if (local_138.NameAndInfo.Index.Value != 0) {
      TVar16.Pad = local_138.StatData.Pad;
    }
    (**(code **)((longlong)*pIVar13 + 0x38))
              (pIVar13,TVar16.Pad,0,0,(ulonglong)in_stack_fffffffffffffe78 & 0xffffffffffffff00);
    *(undefined4 *)(*(longlong *)this + 0x43c) = *(undefined4 *)((longlong)this + 0x58);
    *(undefined4 *)(*(longlong *)this + 0x440) = *(undefined4 *)((longlong)this + 0x5c);
    ::FString::operator=((FString *)(*(longlong *)this + 0x448),(FString *)((longlong)this + 0x18));
    *(undefined1 *)(*(longlong *)this + 0x468) = 1;
    FVar14 = FDateTime::Now();
    *(undefined8 *)(*(longlong *)this + 0x458) = *(undefined8 *)FVar14.Ticks;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0x470),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x68));
    this_00 = *(FLocalFileNetworkReplayStreamer **)this;
    bVar7 = FLocalFileNetworkReplayStreamer::WriteReplayInfo
                      (this_00,&this_00->CurrentStreamName,&this_00->TaskReplayInfo);
    *(bool *)(*(longlong *)this + 0x469) = bVar7;
    if (*(char *)(*(longlong *)this + 0x469) == '\0') {
      if (2 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      param_1->AsyncError = FileWriter;
    }
    else {
      *(undefined4 *)&(param_1->DelegateResult)._padding_ = 0;
    }
    if (local_f8.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.DataChunks.AllocatorInstance.Data);
    }
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)local_f8.Events.AllocatorInstance.Data,
               local_f8.Events.ArrayNum);
    if ((FLocalFileEventInfo *)local_f8.Events.AllocatorInstance.Data != (FLocalFileEventInfo *)0x0)
    {
      FMemory::Free(local_f8.Events.AllocatorInstance.Data);
    }
    DestructItems<FLocalFileEventInfo,int>
              ((FLocalFileEventInfo *)local_f8.Checkpoints.AllocatorInstance.Data,
               local_f8.Checkpoints.ArrayNum);
    if ((FLocalFileEventInfo *)local_f8.Checkpoints.AllocatorInstance.Data !=
        (FLocalFileEventInfo *)0x0) {
      FMemory::Free(local_f8.Checkpoints.AllocatorInstance.Data);
    }
    if (local_f8.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Chunks.AllocatorInstance.Data);
    }
    if (local_f8.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.EncryptionKey.AllocatorInstance.Data);
    }
    if (local_f8.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.FriendlyName.Data.AllocatorInstance.Data);
    }
  }
  if (local_138.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_138.StatData.Pad);
  }
  if (local_148.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_148.StatData.Pad);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && ((FName)LVar17.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_128.NameAndInfo.Index.Value = LVar17.s.LowPart;
      local_128.NameAndInfo.Number = LVar17.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_128.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_128);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// operator() @ 146c9e7b0

void __thiscall
`FLocalFileNetworkReplayStreamer::StopStreaming'::__l2::<lambda_4>::operator()(void *this)

{
  void *_Src;
  longlong *plVar1;
  code *pcVar2;
  ForAnyElementType _Src_00;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FString *pFVar7;
  size_t sVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  FString local_a8;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FString local_88;
  FString local_78;
  FDestructionSentinel local_68;
  TStringView<wchar_t> local_50;
  FScriptContainerElement *local_40;
  uint local_38;
  FString local_30;
  
  *(undefined1 *)(*(longlong *)this + 0x178) = 0;
  (**(code **)(*(longlong *)(*(longlong *)this + 600) + 200))
            ((longlong *)(*(longlong *)this + 600),0);
  (**(code **)(*(longlong *)(*(longlong *)this + 600) + 0xd8))
            ((longlong *)(*(longlong *)this + 600),0);
  (**(code **)(*(longlong *)(*(longlong *)this + 600) + 0xc0))();
  local_98.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)(*(longlong *)this + 0x158) = 0;
  iVar11 = 0;
  *(undefined4 *)(*(longlong *)this + 0x160) = 0;
  *(undefined1 *)(*(longlong *)this + 0x3b8) = 0;
  lVar10 = *(longlong *)this;
  local_a8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(lVar10 + 0x3c0);
  *(undefined8 *)(lVar10 + 0x3c0) = 0;
  local_a8.Data.ArrayNum = *(int *)(lVar10 + 0x3c8);
  local_a8.Data.ArrayMax = *(int *)(lVar10 + 0x3cc);
  *(undefined8 *)(lVar10 + 0x3c8) = 0;
  local_90 = *(int *)(*(longlong *)this + 0x3d8);
  lVar10 = (longlong)local_90;
  _Src = *(void **)(*(longlong *)this + 0x3d0);
  if (local_90 == 0) {
    local_8c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90,0,&local_98,local_90,&local_8c);
    memcpy(local_98.Data,_Src,lVar10 * 2);
  }
  bVar3 = FPaths::IsRelative(&local_a8);
  _Src_00.Data = local_a8.Data.AllocatorInstance.Data;
  if (bVar3) {
    pFVar7 = FNetworkReplayStreaming::GetReplayFileExtension(&local_30);
    local_40 = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      local_40 = local_a8.Data.AllocatorInstance.Data;
    }
    local_50.DataPtr = L"";
    if (local_90 != 0) {
      local_50.DataPtr = (wchar_t *)local_98.Data;
    }
    if ((FScriptContainerElement *)local_50.DataPtr != (FScriptContainerElement *)0x0) {
      sVar8 = wcslen(local_50.DataPtr);
      iVar11 = (int)sVar8;
    }
    local_38 = 0;
    local_50.Size = iVar11;
    if (local_40 != (FScriptContainerElement *)0x0) {
      sVar8 = wcslen((wchar_t *)local_40);
      local_38 = (uint)sVar8;
    }
    FPaths::CombineInternal(&local_78,&local_50,2);
    ::FString::ConcatFF(&local_88,&local_78,pFVar7);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  else {
    lVar10 = (longlong)local_a8.Data.ArrayNum;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = local_a8.Data.ArrayNum;
    if (local_a8.Data.ArrayNum == 0) {
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_a8.Data.ArrayNum,
                 &local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,_Src_00.Data,lVar10 * 2);
    }
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  ::FString::Empty((FString *)(*(longlong *)this + 0x3c0));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting,
             (FWriteAccessScope *)&local_68);
  bVar3 = false;
  FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._28_4_ =
       FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._28_4_ + 1;
  uVar9 = FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._16_4_ - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (int)FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._16_4_) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar10 + 8 + FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._8_8_) ==
            0) || (plVar1 = *(longlong **)
                             (lVar10 + FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting.
                                       _8_8_), plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,&local_a8,&local_88), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._28_4_ =
       FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLocalFileNetworkReplayStreamer::OnReplayFinishedWriting,false);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 146c9eb20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l50::<lambda_4>::operator()
          (void *this,TLocalFileRequestCommonData<FGotoResult> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  wchar_t *_Str;
  undefined8 *puVar12;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  lVar9 = *(longlong *)this;
  if (*(char *)(lVar9 + 0x178) != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
               &local_68);
    if ((*(int *)((longlong)this + 0x20) != 0) &&
       (plVar3 = *(longlong **)((longlong)this + 0x18), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    goto LAB_146c9f229;
  }
  if ((param_1->DataBuffer).ArrayNum == 0) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
               &local_50);
    if ((*(int *)((longlong)this + 0x20) != 0) &&
       (plVar3 = *(longlong **)((longlong)this + 0x18), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    goto LAB_146c9f229;
  }
  pTVar1 = &param_1->DataBuffer;
  puVar12 = (undefined8 *)(lVar9 + 0x398);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)puVar12 != pTVar1) {
    if ((void *)*puVar12 != (void *)0x0) {
      FMemory::Free((void *)*puVar12);
    }
    *puVar12 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar9 + 0x3a0) = (param_1->DataBuffer).ArrayNum;
    *(int *)(lVar9 + 0x3a4) = (param_1->DataBuffer).ArrayMax;
    (param_1->DataBuffer).ArrayNum = 0;
    (param_1->DataBuffer).ArrayMax = 0;
  }
  (**(code **)(*(longlong *)(*(longlong *)this + 0x308) + 0x1b8))
            ((longlong *)(*(longlong *)this + 0x308),0);
  plVar3 = *(longlong **)this;
  uVar4 = plVar3[0x30];
  pcVar5 = *(code **)(*plVar3 + 0x78);
  if (((uVar4 != (uVar4 & 0xffffffff)) || ((longlong)uVar4 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)((longlong)this + 8);
  lVar9 = *(longlong *)this;
  uVar11 = 0;
  if ((int)uVar8 < *(int *)(lVar9 + 0x128)) {
    uVar11 = ~uVar8 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar7 = (*pcVar5)(plVar3,*(undefined4 *)
                            (*(longlong *)(lVar9 + 0x120) + 0x38 + (longlong)(int)uVar8 * 0x50),
                    uVar4 & 0xffffffff);
  uVar8 = *(uint *)((longlong)this + 8);
  lVar9 = *(longlong *)this;
  uVar11 = 0;
  if ((int)uVar8 < *(int *)(lVar9 + 0x128)) {
    uVar11 = ~uVar8 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar9 = *(longlong *)(lVar9 + 0x120);
  if (*(int *)(lVar9 + 0x30 + (longlong)(int)uVar8 * 0x50) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(lVar9 + 0x28 + (longlong)(int)uVar8 * 0x50);
  }
  uVar8 = _wtoi(_Str);
  if (((int)uVar8 < 0) || (lVar9 = *(longlong *)this, *(int *)(lVar9 + 0x148) <= (int)uVar8)) {
    if (1 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
              ((TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x10),&param_1->DelegateResult);
    goto LAB_146c9f229;
  }
  if (cVar7 == '\0') {
    (**(code **)(*(longlong *)(lVar9 + 600) + 0xc0))(lVar9 + 600);
    *(undefined4 *)(*(longlong *)this + 0x17c) = 0;
    lVar9 = *(longlong *)this;
    uVar11 = 0;
    if ((int)uVar8 < *(int *)(lVar9 + 0x148)) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined8 *)(*(longlong *)this + 0x158) =
         *(undefined8 *)(*(longlong *)(lVar9 + 0x140) + 0x20 + (longlong)(int)uVar8 * 0x28);
    *(undefined8 *)(*(longlong *)this + 0x150) = 0;
    *(uint *)(*(longlong *)this + 0x160) = uVar8;
    *(undefined8 *)(*(longlong *)this + 0x168) = 0;
  }
  else {
    pcVar5 = *(code **)(*(longlong *)(lVar9 + 600) + 0x1b8);
    uVar11 = 0;
    if ((int)uVar8 < *(int *)(lVar9 + 0x148)) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*pcVar5)(lVar9 + 600,
              *(longlong *)(*(longlong *)(lVar9 + 0x140) + 0x20 + (longlong)(int)uVar8 * 0x28) -
              *(longlong *)(*(longlong *)this + 0x158));
    lVar9 = (**(code **)(*(longlong *)(*(longlong *)this + 600) + 0x28))();
    if (lVar9 < 0) {
LAB_146c9eef5:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamAr.Tell() >= 0 && StreamAr.Tell() <= StreamAr.TotalSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                         ,0x973,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      lVar9 = *(longlong *)this;
      lVar10 = (**(code **)(*(longlong *)(lVar9 + 600) + 0x30))(lVar9 + 600);
      lVar9 = (**(code **)(*(longlong *)(lVar9 + 600) + 0x28))(lVar9 + 600);
      if (lVar10 < lVar9) goto LAB_146c9eef5;
    }
    *(undefined1 *)(*(longlong *)this + 0x2fc) = 0;
  }
  lVar9 = *(longlong *)this;
  if (((-1 < *(longlong *)(lVar9 + 0x180)) && (*(int *)(lVar9 + 0x148) <= *(int *)(lVar9 + 0x160)))
     && (cVar7 == '\0')) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    uVar8 = *(uint *)((longlong)this + 8);
    lVar9 = *(longlong *)this;
    uVar11 = 0;
    if ((int)uVar8 < *(int *)(lVar9 + 0x128)) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = *(uint *)((longlong)this + 8);
    lVar10 = *(longlong *)this;
    uVar2 = *(undefined4 *)(*(longlong *)(lVar9 + 0x120) + 0x38 + (longlong)(int)uVar8 * 0x50);
    uVar8 = 0;
    if ((int)uVar11 < *(int *)(lVar10 + 0x128)) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(ulonglong *)(*(longlong *)this + 0x150) =
         CONCAT44(uVar2,*(undefined4 *)
                         (*(longlong *)(lVar10 + 0x120) + 0x38 + (longlong)(int)uVar11 * 0x50));
    *(undefined8 *)(*(longlong *)this + 0x180) = 0xffffffffffffffff;
  }
  plVar3 = *(longlong **)this;
  uVar4 = plVar3[0x30];
  if (-1 < (longlong)uVar4) {
    pcVar5 = *(code **)(*plVar3 + 0x70);
    if (((uVar4 != (uVar4 & 0xffffffff)) || ((longlong)uVar4 < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = *(uint *)((longlong)this + 8);
    lVar9 = *(longlong *)this;
    uVar11 = 0;
    if ((int)uVar8 < *(int *)(lVar9 + 0x128)) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*pcVar5)(plVar3,*(undefined4 *)
                      (*(longlong *)(lVar9 + 0x120) + 0x38 + (longlong)(int)uVar8 * 0x50),
              uVar4 & 0xffffffff);
    uVar8 = *(uint *)((longlong)this + 8);
    lVar9 = *(longlong *)this;
    uVar11 = 0;
    if ((int)uVar8 < *(int *)(lVar9 + 0x128)) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(longlong *)(*(longlong *)this + 0x180) =
         *(longlong *)(*(longlong *)this + 0x180) -
         (ulonglong)*(uint *)(*(longlong *)(lVar9 + 0x120) + 0x38 + (longlong)(int)uVar8 * 0x50);
  }
  *(undefined4 *)&(param_1->DelegateResult)._padding_ = 0;
  (param_1->DelegateResult).ExtraTimeMS = *(long64 *)(*(longlong *)this + 0x180);
  TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
            ((TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *)
             ((longlong)this + 0x10),&param_1->DelegateResult);
  if (5 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
LAB_146c9f229:
  *(undefined8 *)(*(longlong *)this + 0x180) = 0xffffffffffffffff;
  return;
}

// operator() @ 146c9f250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l52::<lambda_5>::operator()
          (void *this,TLocalFileRequestCommonData<FGotoResult> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadCheckpoint> FVar16;
  TStatId TVar17;
  TArrayView<unsigned_char_const_,int> *pTVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar19;
  FName FVar20;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  ForAnyElementType local_198;
  undefined8 local_190;
  FName local_188;
  byte local_180;
  FName local_178;
  byte local_170;
  longlong *local_168;
  FSharedReferencer<1> local_160;
  code *local_158;
  FName local_150;
  longlong local_140;
  LARGE_INTEGER local_138;
  undefined8 local_130;
  FSharedReferencer<1> local_128;
  FStatMessage local_120;
  FSourceLocation local_108;
  FSourceLocation local_e8;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  FName local_a8;
  FName local_a0;
  FName local_98 [2];
  uchar *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<unsigned_char_const_,int> local_68 [2];
  
  if (*(char *)(*(longlong *)this + 0x178) != '\0') {
    return;
  }
  FVar16 = StatPtr_STAT_LocalReplay_ReadCheckpoint;
  if (StatPtr_STAT_LocalReplay_ReadCheckpoint ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadCheckpoint>)0x0) {
    pFVar15 = ::FName::FName(&local_a8,"STAT_LocalReplay_ReadCheckpoint");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadCheckpoint>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadCheckpoint,
                        *pFVar15,L"Local replay read checkpoint","STATGROUP_LocalReplay",
                        "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar20 = *(FName *)FVar16;
  bVar10 = false;
  bVar12 = false;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_146c9f3c5:
    bVar11 = false;
    FVar20 = local_150;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_res20.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x9aa);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c9f3c5;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar11 = true;
  }
  pTVar3 = &param_1->DataBuffer;
  piVar2 = &(param_1->DataBuffer).ArrayMax;
  (param_1->DataBuffer).ArrayNum = 0;
  piVar1 = &(param_1->DataBuffer).ArrayNum;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar3->AllocatorInstance,0,piVar2);
  }
  FLocalFileNetworkReplayStreamer::GetDemoFullFilename
            (*(FLocalFileNetworkReplayStreamer **)this,&local_b8,
             &(*(FLocalFileNetworkReplayStreamer **)this)->CurrentStreamName);
  (**(code **)(**(longlong **)this + 0x1f8))(*(longlong **)this,&local_168);
  if (local_168 == (longlong *)0x0) goto LAB_146c9fb27;
  if ((local_168 == (longlong *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  plVar7 = local_168;
  uVar4 = *(uint *)((longlong)this + 8);
  local_158 = *(code **)(*local_168 + 0x1b8);
  local_140 = *(longlong *)this;
  uVar19 = 0;
  if ((int)uVar4 < *(int *)(local_140 + 0x4a0)) {
    uVar19 = ~uVar4 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (*local_158)(plVar7,*(undefined8 *)
                       (*(longlong *)(local_140 + 0x498) + 0x48 + (longlong)(int)uVar4 * 0x50));
  lVar6 = *(longlong *)this;
  uVar4 = *(uint *)((longlong)this + 8);
  uVar19 = 0;
  if ((int)uVar4 < *(int *)(lVar6 + 0x4a0)) {
    uVar19 = ~uVar4 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,*(int *)(*(longlong *)(lVar6 + 0x498) + 0x40 + (longlong)(int)uVar4 * 0x50),
             &pTVar3->AllocatorInstance,piVar1,piVar2);
  if ((local_168 == (longlong *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (**(code **)(*local_168 + 0x188))(local_168,(pTVar3->AllocatorInstance).Data);
  if (*(char *)((longlong)*(longlong **)this + 0x46b) == '\0') {
LAB_146c9f873:
    if (*(char *)((longlong)*(longlong **)this + 0x46a) != '\0') {
      cVar14 = (**(code **)(**(longlong **)this + 0x1c0))();
      if (cVar14 == '\0') {
        if (1 < (byte)LogLocalFileReplay._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
        }
        *piVar1 = 0;
        iVar5 = *piVar2;
        goto joined_r0x000146c9f933;
      }
      TVar17.StatIdPtr = (TStatIdData *)StatPtr_STAT_LocalReplay_DecompressTime;
      if (StatPtr_STAT_LocalReplay_DecompressTime ==
          (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecompressTime>)0x0) {
        pFVar15 = ::FName::FName(local_98,"STAT_LocalReplay_DecompressTime");
        TVar17.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_DecompressTime,
                        *pFVar15,L"Local replay decompress time","STATGROUP_LocalReplay",
                        "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      local_e8.Impl._Line = 0x9d8;
      local_e8.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
      ;
      local_e8.Impl._Column = 8;
      local_e8.Impl._Function =
           "void __cdecl FLocalFileNetworkReplayStreamer::GotoCheckpointIndex::<lambda_5>::operator ()(class TLocalFileRequestCommonData<struct FGotoResult> &) const"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_178,TVar17,CycleStat|ClearEveryFrame,false,&local_e8);
      local_198.Data = (FScriptContainerElement *)0x0;
      local_190 = 0;
      cVar14 = (**(code **)(**(longlong **)this + 0x1c8))(*(longlong **)this,pTVar3);
      if (cVar14 == '\0') {
        if (1 < (byte)LogLocalFileReplay._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
        }
        *piVar1 = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&pTVar3->AllocatorInstance,0,piVar2);
        }
        if (local_198.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data);
        }
        if ((local_170 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_170 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_170 & 4) != 0) {
          FThreadStats::AddMessage(local_178,CycleScopeEnd);
        }
        goto LAB_146c9fb27;
      }
      if (pTVar3 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_198) {
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pTVar3->AllocatorInstance).Data = local_198.Data;
        *piVar1 = (int)local_190;
        *piVar2 = local_190._4_4_;
        local_190 = 0;
        local_198.Data = (FScriptContainerElement *)0x0;
      }
      if (local_198.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data);
      }
      if ((local_170 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_170 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_170 & 4) != 0) {
        FThreadStats::AddMessage(local_178,CycleScopeEnd);
      }
    }
    local_128.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_168 = (longlong *)0x0;
    local_130 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_160,&local_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.ReferenceController);
  }
  else {
    cVar14 = (**(code **)(**(longlong **)this + 0x1d8))();
    if (cVar14 != '\0') {
      TVar17.StatIdPtr = (TStatIdData *)StatPtr_STAT_LocalReplay_DecryptTime;
      if (StatPtr_STAT_LocalReplay_DecryptTime ==
          (FThreadSafeStaticStat<FStat_STAT_LocalReplay_DecryptTime>)0x0) {
        pFVar15 = ::FName::FName(&local_a0,"STAT_LocalReplay_DecryptTime");
        TVar17.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_DecryptTime,*pFVar15,
                        L"Local replay decrypt time","STATGROUP_LocalReplay","STATCAT_Advanced",
                        L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
      }
      local_108.Impl._Line = 0x9bf;
      local_108.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
      ;
      local_108.Impl._Column = 8;
      local_108.Impl._Function =
           "void __cdecl FLocalFileNetworkReplayStreamer::GotoCheckpointIndex::<lambda_5>::operator ()(class TLocalFileRequestCommonData<struct FGotoResult> &) const"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_188,TVar17,CycleStat|ClearEveryFrame,false,&local_108)
      ;
      plVar7 = *(longlong **)this;
      local_1a8.Data = (FScriptContainerElement *)0x0;
      local_1a0 = 0;
      local_158 = *(code **)(*plVar7 + 0x1f0);
      pTVar18 = TArrayView<unsigned_char_const_,int>::
                TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                          (local_68,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                    (plVar7 + 0x8e));
      local_88 = pTVar18->DataPtr;
      uStack_80 = *(undefined8 *)&pTVar18->ArrayNum;
      local_c8 = (pTVar3->AllocatorInstance).Data;
      iStack_c0 = *piVar1;
      if ((iStack_c0 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_78 = (undefined4)local_c8;
      uStack_74 = local_c8._4_4_;
      uStack_6c = uStack_bc;
      iStack_70 = iStack_c0;
      cVar14 = (*local_158)(plVar7);
      if (cVar14 == '\0') {
        if (1 < (byte)LogLocalFileReplay._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
        }
        *piVar1 = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&pTVar3->AllocatorInstance,0,piVar2);
        }
        if (local_1a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data);
        }
        if ((local_180 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_180 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_180 & 4) != 0) {
          FThreadStats::AddMessage(local_188,CycleScopeEnd);
        }
        goto LAB_146c9fb27;
      }
      if (pTVar3 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_1a8) {
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pTVar3->AllocatorInstance).Data = local_1a8.Data;
        *piVar1 = (int)local_1a0;
        *piVar2 = local_1a0._4_4_;
        local_1a0 = 0;
        local_1a8.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      if ((local_180 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_180 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_180 & 4) != 0) {
        FThreadStats::AddMessage(local_188,CycleScopeEnd);
      }
      goto LAB_146c9f873;
    }
    if (1 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    *piVar1 = 0;
    iVar5 = *piVar2;
joined_r0x000146c9f933:
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar3->AllocatorInstance,0,&(param_1->DataBuffer).ArrayMax);
    }
  }
LAB_146c9fb27:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.ReferenceController);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_120.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_138);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_138.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_138.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_138.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_138.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_120);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// operator() @ 146c9fc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l52::<lambda_6>::operator()
          (void *this,TLocalFileRequestCommonData<FGotoResult> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  undefined4 uVar3;
  FLocalFileNetworkReplayStreamer *this_00;
  longlong *plVar4;
  FScriptContainerElement *_Src;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  wchar_t *_Str;
  longlong lVar14;
  undefined8 *puVar15;
  size_t _Size;
  FLLMScope local_res8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_a8;
  FMemScope local_98;
  code *local_90;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  this_00 = *(FLocalFileNetworkReplayStreamer **)this;
  if (this_00->bStopStreamingCalled != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
               &local_88);
    if ((*(int *)((longlong)this + 0x20) != 0) &&
       (plVar4 = *(longlong **)((longlong)this + 0x18), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    goto LAB_146ca0296;
  }
  if ((param_1->DataBuffer).ArrayNum == 0) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
               &local_70);
    if ((*(int *)((longlong)this + 0x20) != 0) &&
       (plVar4 = *(longlong **)((longlong)this + 0x18), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    goto LAB_146ca0296;
  }
  uVar10 = *(uint *)((longlong)this + 8);
  uVar13 = 0;
  if ((int)uVar10 < (this_00->CurrentReplayInfo).Checkpoints.ArrayNum) {
    uVar13 = ~uVar10 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar1 = &param_1->DataBuffer;
  iVar2 = *(int *)((this_00->CurrentReplayInfo).Checkpoints.AllocatorInstance.Data +
                  (longlong)(int)uVar10 * 0x50);
  FLLMScope::FLLMScope(local_res8,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_98,Replays,true);
  local_a8.ArrayNum = (param_1->DataBuffer).ArrayNum;
  _Size = (size_t)local_a8.ArrayNum;
  _Src = (pTVar1->AllocatorInstance).Data;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a8.ArrayNum == 0) {
    local_a8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
               &local_a8.ArrayMax);
    memcpy(local_a8.AllocatorInstance.Data,_Src,_Size);
  }
  FLocalFileNetworkReplayStreamer::AddRequestToCache(this_00,iVar2,&local_a8);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(local_res8);
  lVar5 = *(longlong *)this;
  puVar15 = (undefined8 *)(lVar5 + 0x398);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)puVar15 != pTVar1) {
    if ((void *)*puVar15 != (void *)0x0) {
      FMemory::Free((void *)*puVar15);
    }
    *puVar15 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar5 + 0x3a0) = (param_1->DataBuffer).ArrayNum;
    *(int *)(lVar5 + 0x3a4) = (param_1->DataBuffer).ArrayMax;
    (param_1->DataBuffer).ArrayNum = 0;
    (param_1->DataBuffer).ArrayMax = 0;
  }
  (**(code **)(*(longlong *)(*(longlong *)this + 0x308) + 0x1b8))
            ((longlong *)(*(longlong *)this + 0x308),0);
  uVar10 = *(uint *)((longlong)this + 8);
  lVar14 = (longlong)(int)uVar10;
  lVar5 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar10 < *(int *)(lVar5 + 0x128)) {
    uVar13 = ~uVar10 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x120);
  if (*(int *)(lVar5 + 0x30 + lVar14 * 0x50) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(lVar5 + 0x28 + lVar14 * 0x50);
  }
  uVar10 = _wtoi(_Str);
  if (((int)uVar10 < 0) || (plVar4 = *(longlong **)this, (int)plVar4[0x29] <= (int)uVar10)) {
    if (-1 < *(longlong *)(*(longlong *)this + 0x180)) {
      if (2 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      uVar3 = *(undefined4 *)(lVar5 + 0x38 + lVar14 * 0x50);
      *(ulonglong *)(*(longlong *)this + 0x150) = CONCAT44(uVar3,uVar3);
      *(undefined8 *)(*(longlong *)this + 0x180) = 0xffffffffffffffff;
    }
  }
  else {
    uVar6 = plVar4[0x30];
    pcVar7 = *(code **)(*plVar4 + 0x78);
    if ((uVar6 != (uVar6 & 0xffffffff)) || ((longlong)uVar6 < 0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    cVar9 = (*pcVar7)(plVar4,*(undefined4 *)(lVar5 + 0x38 + lVar14 * 0x50),uVar6 & 0xffffffff);
    lVar11 = *(longlong *)this;
    if (cVar9 == '\0') {
      (**(code **)(*(longlong *)(lVar11 + 600) + 0xc0))(lVar11 + 600);
      *(undefined4 *)(*(longlong *)this + 0x17c) = 0;
      lVar11 = *(longlong *)this;
      uVar13 = 0;
      if ((int)uVar10 < *(int *)(lVar11 + 0x148)) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      *(undefined8 *)(*(longlong *)this + 0x158) =
           *(undefined8 *)(*(longlong *)(lVar11 + 0x140) + 0x20 + (longlong)(int)uVar10 * 0x28);
      *(undefined8 *)(*(longlong *)this + 0x150) = 0;
      *(uint *)(*(longlong *)this + 0x160) = uVar10;
      *(undefined8 *)(*(longlong *)this + 0x168) = 0;
    }
    else {
      local_90 = *(code **)(*(longlong *)(lVar11 + 600) + 0x1b8);
      uVar13 = 0;
      if ((int)uVar10 < *(int *)(lVar11 + 0x148)) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      (*local_90)(lVar11 + 600,
                  *(longlong *)(*(longlong *)(lVar11 + 0x140) + 0x20 + (longlong)(int)uVar10 * 0x28)
                  - *(longlong *)(*(longlong *)this + 0x158));
      lVar11 = (**(code **)(*(longlong *)(*(longlong *)this + 600) + 0x28))();
      if (lVar11 < 0) {
LAB_146ca00f6:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StreamAr.Tell() >= 0 && StreamAr.Tell() <= StreamAr.TotalSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                           ,0xa23,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        lVar11 = *(longlong *)this;
        lVar12 = (**(code **)(*(longlong *)(lVar11 + 600) + 0x30))(lVar11 + 600);
        lVar11 = (**(code **)(*(longlong *)(lVar11 + 600) + 0x28))(lVar11 + 600);
        if (lVar12 < lVar11) goto LAB_146ca00f6;
      }
      *(undefined1 *)(*(longlong *)this + 0x2fc) = 0;
    }
  }
  plVar4 = *(longlong **)this;
  uVar6 = plVar4[0x30];
  if (-1 < (longlong)uVar6) {
    pcVar7 = *(code **)(*plVar4 + 0x70);
    if ((uVar6 != (uVar6 & 0xffffffff)) || ((longlong)uVar6 < 0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (*pcVar7)(plVar4,*(undefined4 *)(lVar5 + 0x38 + lVar14 * 0x50),uVar6 & 0xffffffff);
    *(longlong *)(*(longlong *)this + 0x180) =
         *(longlong *)(*(longlong *)this + 0x180) -
         (ulonglong)*(uint *)(lVar5 + 0x38 + lVar14 * 0x50);
  }
  *(undefined4 *)&(param_1->DelegateResult)._padding_ = 0;
  (param_1->DelegateResult).ExtraTimeMS = *(long64 *)(*(longlong *)this + 0x180);
  (param_1->DelegateResult).CheckpointInfo.CheckpointIndex = *(uint *)((longlong)this + 8);
  (param_1->DelegateResult).CheckpointInfo.CheckpointStartTime =
       *(uint *)(lVar5 + 0x38 + lVar14 * 0x50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
             &local_58);
  if ((*(int *)((longlong)this + 0x20) != 0) &&
     (plVar4 = *(longlong **)((longlong)this + 0x18), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if (5 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
LAB_146ca0296:
  *(undefined8 *)(*(longlong *)this + 0x180) = 0xffffffffffffffff;
  return;
}

// AddEvent @ 146ca2af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::AddEvent
          (FLocalFileNetworkReplayStreamer *this,uint param_1,FString *param_2,FString *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (this->StreamerState == Recording) {
    pcVar1 = *(code **)(this->_padding_ + 0x90);
    ::FString::FString(&local_18,L"");
    (*pcVar1)(this,&local_18,param_1,param_2,param_3,param_4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else if (2 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  return;
}

// AddOrUpdateEvent @ 146ca2bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::AddOrUpdateEvent
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,uint param_2,FString *param_3,
          FString *param_4,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  code **ppcVar2;
  undefined ***pppuVar3;
  size_t sVar4;
  undefined1 auStackY_138 [32];
  FString local_f0;
  FString local_e0;
  uint local_d0;
  FString local_c8;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  undefined **local_68;
  FLocalFileNetworkReplayStreamer *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (this->StreamerState == Recording) {
    if (5 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    local_50 = (undefined ***)0x0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::`2'::<lambda_2>,0,0>
                ::_vftable_;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::__l2::<lambda_2>,void,enum_ELocalFileReplayResult_&>
                  ::Call;
    local_60 = this;
    ::FString::FString(&local_f0,param_1);
    ::FString::FString(&local_e0,param_3);
    local_d0 = param_2;
    ::FString::FString(&local_c8,param_4);
    local_b0 = param_5->ArrayNum;
    sVar4 = (size_t)local_b0;
    _Src = (param_5->AllocatorInstance).Data;
    local_b8.Data = (FScriptContainerElement *)0x0;
    if (local_b0 == 0) {
      local_ac = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_b0,0,&local_b8,local_b0,&local_ac);
      memcpy(local_b8.Data,_Src,sVar4);
    }
    local_a8[0] = (code *)0x0;
    ppcVar2 = FMemory::Malloc(0x58,8);
    *ppcVar2 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::`2'::<lambda_1>,0,1>
                        ::_vftable_;
    ppcVar2[1] = (code *)this;
    local_80 = ppcVar2;
    ::FString::FString((FString *)(ppcVar2 + 2),&local_f0);
    ::FString::FString((FString *)(ppcVar2 + 4),&local_e0);
    *(uint *)(ppcVar2 + 6) = local_d0;
    ::FString::FString((FString *)(ppcVar2 + 7),&local_c8);
    _Src_00.Data = local_b8.Data;
    pFVar1 = (ForAnyElementType *)(ppcVar2 + 9);
    pFVar1->Data = (FScriptContainerElement *)0x0;
    sVar4 = (size_t)local_b0;
    *(int *)(ppcVar2 + 10) = local_b0;
    if (local_b0 == 0) {
      *(int *)((longlong)ppcVar2 + 0x54) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_b0,0,pFVar1,local_b0,(int *)((longlong)ppcVar2 + 0x54));
      memcpy(pFVar1->Data,_Src_00.Data,sVar4);
    }
    if (ppcVar2 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddOrUpdateEvent'::__l2::<lambda_1>,void,enum_ELocalFileReplayResult_&>
                    ::Call;
    }
    AddGenericRequestToQueue<enum_ELocalFileReplayResult>
              (this,UpdatingEvent,(TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_a8,
               (TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_78);
    if (local_a8[0] != (code *)0x0) {
      ppcVar2 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar2 = local_80;
      }
      (**(code **)(*ppcVar2 + 0x10))();
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar3 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar3 = local_50;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  else if (2 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  return;
}

// AddRequestToCache @ 146ca2e60

void __thiscall
FLocalFileNetworkReplayStreamer::AddRequestToCache
          (FLocalFileNetworkReplayStreamer *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  LARGE_INTEGER LVar1;
  double dVar2;
  FLLMScope local_res8 [2];
  int local_res10 [4];
  LARGE_INTEGER local_res20;
  FMemScope local_48;
  int *local_40;
  TSharedPtr<FCachedFileRequest,1> *local_38;
  TSharedPtr<FCachedFileRequest,1> local_30;
  
  if (((((this->CurrentReplayInfo).bIsValid != false) && (-1 < param_1)) &&
      (param_1 < (this->CurrentReplayInfo).Chunks.ArrayNum)) && (param_2->ArrayNum != 0)) {
    local_res10[0] = param_1;
    FLLMScope::FLLMScope(local_res8,Replays,false,None,Default,true);
    FMemScope::FMemScope(&local_48,Replays,true);
    LVar1 = (LARGE_INTEGER)::operator_new(0x18);
    if ((undefined8 *)LVar1.QuadPart == (undefined8 *)0x0) {
      LVar1.QuadPart = 0;
    }
    else {
      QueryPerformanceCounter(&local_res20);
      dVar2 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      *(undefined8 *)LVar1 = 0;
      *(FScriptContainerElement **)LVar1 = (param_2->AllocatorInstance).Data;
      (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      dVar2 = dVar2 + __real_4170000000000000;
      *(int *)(LVar1.QuadPart + 8) = param_2->ArrayNum;
      *(int *)(LVar1.QuadPart + 0xc) = param_2->ArrayMax;
      param_2->ArrayNum = 0;
      param_2->ArrayMax = 0;
      *(double *)(LVar1.QuadPart + 0x10) = dVar2;
    }
    local_res20 = LVar1;
    TSharedPtr<FCachedFileRequest,1>::TSharedPtr<FCachedFileRequest,1><FCachedFileRequest>
              (&local_30,(TRawPtrProxy<FCachedFileRequest> *)&local_res20.s);
    local_40 = local_res10;
    local_38 = &local_30;
    TSet<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FCachedFileRequest,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TSharedPtr<FCachedFileRequest,1>_&&>_>
              ((TSet<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FCachedFileRequest,1>,0>,FDefaultSetAllocator>
                *)&this->RequestCache,
               (TPairInitializer<int_const_&,TSharedPtr<FCachedFileRequest,1>_&&> *)&local_res20.s,
               (bool *)&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.SharedReferenceCount.ReferenceController);
    CleanupRequestCache(this);
    FMemScope::~FMemScope(&local_48);
    FLLMScope::~FLLMScope(local_res8);
  }
  return;
}

// AddRequestToCache @ 146ca2fc0

void __thiscall
FLocalFileNetworkReplayStreamer::AddRequestToCache
          (FLocalFileNetworkReplayStreamer *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *_Src;
  size_t _Size;
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  FLLMScope::FLLMScope(local_res18,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Replays,true);
  local_28.ArrayNum = param_2->ArrayNum;
  _Size = (size_t)local_28.ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.ArrayNum == 0) {
    local_28.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
               &local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,_Src,_Size);
  }
  AddRequestToCache(this,param_1,&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// AddSimpleRequestToQueue @ 146ca30b0

void __thiscall
FLocalFileNetworkReplayStreamer::AddSimpleRequestToQueue
          (FLocalFileNetworkReplayStreamer *this,Type param_1,TFunction<void___cdecl(void)> *param_2
          ,TFunction<void___cdecl(void)> *param_3)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FLocalFileNetworkReplayStreamer *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<FLocalFileNetworkReplayStreamer,1> local_28;
  
  pTVar2 = &this->QueuedRequests;
  pTVar10 = TSharedFromThis<FLocalFileNetworkReplayStreamer,1>::AsShared
                      ((TSharedFromThis<FLocalFileNetworkReplayStreamer,1> *)&this->_padding_,
                       &local_28);
  pTVar11 = ::operator_new(0xa0);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGenericQueuedLocalFileRequest___00_SharedPointerInternals__6B_
    ;
    pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar10->Object;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11[1]._padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
      *(FLocalFileNetworkReplayStreamer **)&pTVar11[1].SharedReferenceCount = pFVar3;
      pTVar11[2]._padding_ = 0;
    }
    else {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11[1]._padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
      *(FLocalFileNetworkReplayStreamer **)&pTVar11[1].SharedReferenceCount = pFVar3;
      pTVar11[2]._padding_ = (longlong)pTVar12;
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar11[2].SharedReferenceCount = (atomic<int>)param_1;
    pTVar11[1]._padding_ = (longlong)&___7FGenericQueuedLocalFileRequest__6B_;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[4]._padding_ = *(longlong *)param_2;
    uVar6 = *(undefined4 *)&param_2->field_0x2c;
    pTVar11[6].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_2->field_0x28;
    pTVar11[6].WeakReferenceCount = (atomic<int>)uVar6;
    *(undefined8 *)&param_2->field_0x28 = 0;
    uVar6 = *(undefined4 *)&param_2->field_0x18;
    uVar7 = *(undefined4 *)&param_2->field_0x1c;
    pTVar11[5]._padding_ = *(longlong *)&param_2->field_0x10;
    pTVar11[5].SharedReferenceCount = (atomic<int>)uVar6;
    pTVar11[5].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar11[6]._padding_ = *(longlong *)&param_2->field_0x20;
    if (pTVar11[4]._padding_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    pTVar11[7]._padding_ = *(longlong *)param_3;
    uVar6 = *(undefined4 *)&param_3->field_0x2c;
    pTVar11[9].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_3->field_0x28;
    pTVar11[9].WeakReferenceCount = (atomic<int>)uVar6;
    *(undefined8 *)&param_3->field_0x28 = 0;
    uVar6 = *(undefined4 *)&param_3->field_0x18;
    uVar7 = *(undefined4 *)&param_3->field_0x1c;
    pTVar11[8]._padding_ = *(longlong *)&param_3->field_0x10;
    pTVar11[8].SharedReferenceCount = (atomic<int>)uVar6;
    pTVar11[8].WeakReferenceCount = (atomic<int>)uVar7;
    pTVar11[9]._padding_ = *(longlong *)&param_3->field_0x20;
    if (pTVar11[7]._padding_ != 0) {
      *(undefined8 *)param_3 = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    pTVar12 = pTVar11 + 1;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_146ca3279;
    }
  }
  if (((pTVar12[2]._padding_ == 0) || (*(longlong *)&pTVar12[2].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar12[2].SharedReferenceCount + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12[2]._padding_ = (longlong)pTVar12;
    if (pTVar11 != *(TReferenceControllerBase<1> **)&pTVar12[2].SharedReferenceCount) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pTVar12[2].SharedReferenceCount;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar12[2].SharedReferenceCount = pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_146ca3279:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar13 = (pTVar2->AllocatorInstance).Data;
  local_38 = pTVar12;
  local_30 = pTVar11;
  if ((pFVar13 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar13 + (longlong)(this->QueuedRequests).ArrayMax * 0x10)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->QueuedRequests).ArrayNum;
  piVar1 = &(this->QueuedRequests).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedRequests).ArrayNum = iVar9 + 1;
  pFVar13 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar13 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar13 + 8) = local_30;
  local_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AddUserToReplay @ 146ca3380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::AddUserToReplay
          (FLocalFileNetworkReplayStreamer *this,FString *param_1)

{
  if (4 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    return;
  }
  return;
}

// AllowEncryptedWrite @ 146ca33b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLocalFileNetworkReplayStreamer::AllowEncryptedWrite(FLocalFileNetworkReplayStreamer *this)

{
  TConsoleVariableData<int> *pTVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  cVar2 = (**(code **)(this->_padding_ + 0x1d8))();
  pTVar1 = UE::Net::LocalFileReplay::CVarAllowEncryptedRecording.Ref;
  if (cVar2 != '\0') {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar4 = 0;
    }
    else {
      lVar4 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 0) {
      bVar3 = true;
      goto LAB_146ca33f1;
    }
  }
  bVar3 = false;
LAB_146ca33f1:
  if (6 < (byte)LogLocalFileReplay._0_1_) {
    pwVar5 = L"true";
    if (bVar3 == false) {
      pwVar5 = L"false";
    }
    ::FString::FString(&local_18,pwVar5);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// CancelStreamingRequests @ 146ca5020

void __thiscall
FLocalFileNetworkReplayStreamer::CancelStreamingRequests(FLocalFileNetworkReplayStreamer *this)

{
  int *piVar1;
  TSharedPtr<FQueuedLocalFileRequest,1> *pTVar2;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar2 = &this->ActiveRequest;
  if (pTVar2->Object != (FQueuedLocalFileRequest *)0x0) {
    LOCK();
    pTVar2->Object->bCancelled = (FThreadSafeBool)0x1;
    UNLOCK();
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<FQueuedLocalFileRequest,1> *)&local_18) {
      pTVar2->Object = (FQueuedLocalFileRequest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveRequest).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  DestructItems<TSharedPtr<FQueuedLocalFileRequest,1>,int>
            ((TSharedPtr<FQueuedLocalFileRequest,1> *)(this->QueuedRequests).AllocatorInstance.Data,
             (this->QueuedRequests).ArrayNum);
  piVar1 = &(this->QueuedRequests).ArrayMax;
  (this->QueuedRequests).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->QueuedRequests).AllocatorInstance,0,piVar1);
  }
  this->bStopStreamingCalled = false;
  this->StreamerState = Idle;
  return;
}

// CleanUpOldReplays @ 146ca50f0

/* WARNING: Removing unreachable block (ram,0x000146ca5ad2) */
/* WARNING: Removing unreachable block (ram,0x000146ca5416) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FLocalFileNetworkReplayStreamer::CleanUpOldReplays
          (FString *param_1,TArrayView<FString_const_,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  IFileManager *pIVar12;
  FString *pFVar13;
  longlong lVar14;
  FString *pFVar15;
  size_t sVar16;
  IFileManager *pIVar17;
  FStaticBasicLogRecord *pFVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  FDateTime FVar21;
  FString *pFVar22;
  uint uVar23;
  ulonglong uVar24;
  FIdentityFunctor local_res18 [8];
  undefined1 local_res20 [8];
  ulonglong in_stack_fffffffffffffd48;
  FAutoReplayInfo *pFVar25;
  ForAnyElementType local_288;
  undefined8 local_280;
  ForAnyElementType local_278;
  int local_270;
  int local_26c;
  undefined1 local_268;
  undefined1 local_267 [7];
  ulong64 local_260;
  FString *local_258;
  undefined8 local_250;
  FString *local_248;
  undefined8 local_240;
  FAutoReplayInfo local_238;
  IFileManager *local_220;
  ulong64 local_218;
  FAutoReplayInfo local_210;
  FAutoReplayInfo local_1f8;
  FString local_1e0;
  FString local_1d0;
  FString *local_1c0;
  ulong64 local_1b8;
  ulonglong local_1b0;
  ulong64 local_1a8;
  wchar_t *local_1a0;
  int local_198;
  undefined4 local_194;
  undefined8 local_190;
  wchar_t *local_188;
  int local_180;
  undefined4 local_17c;
  undefined8 local_178;
  FString local_170;
  FString local_160;
  long64 local_150;
  wchar_t **local_148;
  long64 local_140;
  wchar_t **local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  TStringView<wchar_t> local_f0;
  FScriptContainerElement *local_e0;
  int local_d8;
  TStringView<wchar_t> local_d0;
  FScriptContainerElement *local_c0;
  int local_b8;
  TStringView<wchar_t> local_b0;
  FScriptContainerElement *local_a0;
  int local_98;
  TStringView<wchar_t> local_90;
  FScriptContainerElement *local_80;
  int local_78;
  FString local_70;
  FString local_60 [2];
  
  iVar9 = FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplays();
  local_1c0 = (FString *)CONCAT44(local_1c0._4_4_,iVar9);
  FNetworkReplayStreaming::UseDateTimeAsAutomaticReplayPostfix();
  FNetworkReplayStreaming::GetAutomaticReplayPrefix(&local_100);
  pIVar12 = IFileManager::Get();
  local_220 = pIVar12;
  if (0 < iVar9) {
    local_260 = 0;
    bVar6 = GetDemoFreeStorageSpace(&local_260,param_1);
    pTVar3 = UE::Net::LocalFileReplay::CVarReplayRecordingMinSpace.Ref;
    if (bVar6) {
      bVar6 = IsInParallelGameThread();
      if (bVar6) {
LAB_146ca5184:
        lVar14 = 0;
      }
      else {
        bVar6 = IsInGameThread();
        lVar14 = 4;
        if (bVar6) goto LAB_146ca5184;
      }
      local_1b0 = (ulonglong)*(int *)((longlong)pTVar3->ShadowedValue + lVar14);
      local_288.Data = (FScriptContainerElement *)0x0;
      local_280 = 0;
      pFVar13 = ::FString::FString(&local_70,L"*");
      ::FString::ConcatFF(&local_120,&local_100,pFVar13);
      GetDemoFullFilename(&local_130,param_1,&local_120);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      local_258 = (FString *)0x0;
      local_250 = 0;
      pFVar25 = (FAutoReplayInfo *)(in_stack_fffffffffffffd48 & 0xffffffffffffff00);
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar20.Data = local_130.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar12 + 0x80))(pIVar12,&local_258,FVar20.Data,1,pFVar25);
      uVar23 = (int)local_250 + (int)local_280;
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
      if (local_280._4_4_ < (int)uVar23) {
        pFVar25 = (FAutoReplayInfo *)CONCAT44((int)((ulonglong)pFVar25 >> 0x20),(int)local_280);
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar23,&local_288,(int)local_280,(int *)((longlong)&local_280 + 4));
      }
      pIVar12 = local_220;
      iVar9 = (int)local_250;
      pFVar15 = local_258 + (int)local_250;
      pFVar13 = local_258;
      while( true ) {
        if ((int)local_250 != iVar9) {
          local_res18[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar13 == pFVar15) break;
        local_f0.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        iVar10 = (param_1->Data).ArrayNum;
        local_e0 = (pFVar13->Data).AllocatorInstance.Data;
        local_f0.Size = iVar10 + -1;
        if (iVar10 == 0) {
          local_f0.Size = 0;
        }
        iVar10 = (pFVar13->Data).ArrayNum;
        local_d8 = iVar10 + -1;
        if (iVar10 == 0) {
          local_d8 = 0;
        }
        FPaths::CombineInternal(&local_1e0,&local_f0,2);
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_1e0.Data.ArrayNum != 0) {
          FVar20.Data = local_1e0.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar12 + 0xd8))(pIVar12,&local_150,FVar20.Data);
        local_210.Path.Data.AllocatorInstance.Data = local_1e0.Data.AllocatorInstance.Data;
        uVar5._0_4_ = local_1e0.Data.ArrayNum;
        uVar5._4_4_ = local_1e0.Data.ArrayMax;
        local_210.Path.Data.ArrayNum = local_1e0.Data.ArrayNum;
        local_210.Path.Data.ArrayMax = local_1e0.Data.ArrayMax;
        local_210.TimeStamp.Ticks = local_150;
        local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e0.Data.ArrayNum = 0;
        local_1e0.Data.ArrayMax = 0;
        uVar4 = uVar5;
        if ((local_288.Data <= &local_210) &&
           (uVar4 = local_210.Path.Data._8_8_,
           &local_210 < (FAutoReplayInfo *)(local_288.Data + (longlong)local_280._4_4_ * 0x18))) {
          pFVar25 = &local_210;
          local_210.Path.Data._8_8_ = uVar5;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          uVar4 = local_210.Path.Data._8_8_;
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
        }
        local_210.Path.Data._8_8_ = uVar4;
        iVar10 = (int)local_280;
        if ((int)local_280 == local_280._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_288,(int *)((longlong)&local_280 + 4));
        }
        lVar14 = (longlong)iVar10;
        local_280 = CONCAT44(local_280._4_4_,iVar10 + 1);
        *(undefined8 *)&local_288.Data[lVar14 * 0x18].field_0x0 = 0;
        *(FScriptContainerElement **)&local_288.Data[lVar14 * 0x18].field_0x0 =
             local_210.Path.Data.AllocatorInstance.Data;
        *(int *)(local_288.Data + lVar14 * 0x18 + 8) = local_210.Path.Data.ArrayNum;
        *(int *)(local_288.Data + lVar14 * 0x18 + 0xc) = local_210.Path.Data.ArrayMax;
        *(long64 *)(local_288.Data + lVar14 * 0x18 + 0x10) = local_210.TimeStamp.Ticks;
        local_210.Path.Data.ArrayNum = 0;
        local_210.Path.Data.ArrayMax = 0;
        local_210.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        pFVar13 = pFVar13 + 1;
      }
      DestructItems<FString,int>(local_258,(int)local_250);
      iVar9 = (int)local_1c0;
      if (local_258 != (FString *)0x0) {
        FMemory::Free(local_258);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      AlgoImpl::
      IntroSortInternal<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,int,FIdentityFunctor,TDereferenceWrapper<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,TLess<void>_>_>
                ((FAutoReplayInfo *)local_288.Data,(int)local_280,local_res18[0],
                 (TLess<void> *)&local_268);
      uVar24 = local_1b0;
      FVar21.Ticks = local_260;
      pIVar12 = local_220;
      while ((local_220 = pIVar12, (int)local_280 != 0 &&
             (((ulonglong)FVar21.Ticks < uVar24 || (iVar9 <= (int)local_280))))) {
        iVar10 = (int)local_280;
        if ((int)local_280 < 1) {
          pFVar25 = (FAutoReplayInfo *)0x0;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          iVar10 = (int)local_280;
        }
        lVar14 = (longlong)iVar10;
        local_1a0 = *(wchar_t **)&local_288.Data[lVar14 * 0x18 + -0x18].field_0x0;
        *(undefined8 *)&local_288.Data[lVar14 * 0x18 + -0x18].field_0x0 = 0;
        local_198 = *(int *)(local_288.Data + lVar14 * 0x18 + -0x10);
        local_194 = *(undefined4 *)(local_288.Data + lVar14 * 0x18 + -0xc);
        *(undefined8 *)(local_288.Data + lVar14 * 0x18 + -0x10) = 0;
        local_190 = *(undefined8 *)&local_288.Data[lVar14 * 0x18 + -8].field_0x0;
        iVar10 = (int)local_280 + -1;
        pFVar1 = local_288.Data + (longlong)iVar10 * 0x18;
        if (*(void **)&local_288.Data[(longlong)iVar10 * 0x18].field_0x0 != (void *)0x0) {
          FMemory::Free(*(void **)&local_288.Data[(longlong)iVar10 * 0x18].field_0x0);
        }
        iVar11 = ((int)local_280 - iVar10) + -1;
        iVar10 = (int)local_280;
        if (iVar11 != 0) {
          memmove(pFVar1,pFVar1 + 0x18,(longlong)iVar11 * 0x18);
          iVar10 = (int)local_280;
        }
        local_280 = CONCAT44(local_280._4_4_,iVar10 + -1);
        pFVar25 = (FAutoReplayInfo *)((ulonglong)pFVar25 & 0xffffffffffffff00);
        pwVar19 = L"";
        if (local_198 != 0) {
          pwVar19 = local_1a0;
        }
        cVar8 = (**(code **)((longlong)*local_220 + 0x38))(local_220,pwVar19,1,1,pFVar25);
        if (cVar8 == '\0') {
          local_148 = &local_1a0;
          bVar6 = `FLocalFileNetworkReplayStreamer::CleanUpOldReplays'::__l16::<lambda_1>::
                  operator()(&local_148);
          if (bVar6) goto LAB_146ca55bd;
          if (2 < (byte)LogLocalFileReplay._0_1_) {
            pFVar18 = &::LOG_Static;
            goto LAB_146ca56d0;
          }
LAB_146ca56df:
          if (local_1a0 != (wchar_t *)0x0) {
            FMemory::Free(local_1a0);
          }
          bVar6 = false;
          goto LAB_146ca5d52;
        }
LAB_146ca55bd:
        local_1b8 = 0;
        local_238.TimeStamp.Ticks = 0;
        bVar6 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace
                          (param_1,&local_1b8,(ulong64 *)&local_238.TimeStamp);
        if (!bVar6) {
          pIVar12 = IFileManager::Get();
          if ((param_1->Data).ArrayNum == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          }
          cVar8 = (**(code **)((longlong)*pIVar12 + 0x58))(pIVar12,pwVar19);
          if (cVar8 == '\0') {
            if ((param_1->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
            }
            cVar8 = (**(code **)((longlong)*pIVar12 + 0x60))(pIVar12,pwVar19,1);
            if (cVar8 != '\0') {
              local_1b8 = 0;
              local_238.TimeStamp.Ticks = 0;
              bVar6 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace
                                (param_1,&local_1b8,(ulong64 *)&local_238.TimeStamp);
              if (bVar6) goto LAB_146ca563d;
            }
          }
          if (4 < (byte)LogLocalFileReplay._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay)
            ;
          }
          if (2 < (byte)LogLocalFileReplay._0_1_) {
            pFVar18 = &::LOG_Static;
LAB_146ca56d0:
            UE::Logging::Private::BasicLog<3>(pFVar18,(FLogCategoryBase *)&LogLocalFileReplay);
          }
          goto LAB_146ca56df;
        }
LAB_146ca563d:
        FVar21.Ticks = local_238.TimeStamp.Ticks;
        local_260 = local_238.TimeStamp.Ticks;
        if (local_1a0 != (wchar_t *)0x0) {
          FMemory::Free(local_1a0);
        }
        pIVar12 = local_220;
      }
      if ((ulonglong)FVar21.Ticks < uVar24) {
        pFVar13 = param_2->DataPtr;
        local_1c0 = pFVar13 + param_2->ArrayNum;
        local_278.Data = (FScriptContainerElement *)0x0;
        local_270 = 0;
        local_26c = 0;
        if (pFVar13 != local_1c0) {
          do {
            local_d0.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
            iVar9 = (param_1->Data).ArrayNum;
            local_c0 = (pFVar13->Data).AllocatorInstance.Data;
            local_d0.Size = iVar9 + -1;
            if (iVar9 == 0) {
              local_d0.Size = 0;
            }
            iVar9 = (pFVar13->Data).ArrayNum;
            local_b8 = iVar9 + -1;
            if (iVar9 == 0) {
              local_b8 = 0;
            }
            FPaths::CombineInternal(&local_160,&local_d0,2);
            ::FString::FString(&local_170,L"*");
            bVar6 = FPaths::IsRelative(&local_170);
            iVar9 = local_170.Data.ArrayNum;
            FVar20.Data = local_170.Data.AllocatorInstance.Data;
            if (bVar6) {
              pFVar15 = FNetworkReplayStreaming::GetReplayFileExtension(local_60);
              FVar20.Data = (FScriptContainerElement *)L"";
              if (local_170.Data.ArrayNum != 0) {
                FVar20.Data = local_170.Data.AllocatorInstance.Data;
              }
              local_b0.DataPtr = L"";
              if (local_160.Data.ArrayNum != 0) {
                local_b0.DataPtr = (wchar_t *)local_160.Data.AllocatorInstance.Data;
              }
              iVar10 = 0;
              iVar9 = iVar10;
              if ((FScriptContainerElement *)local_b0.DataPtr != (FScriptContainerElement *)0x0) {
                sVar16 = wcslen(local_b0.DataPtr);
                iVar9 = (int)sVar16;
              }
              local_b0.Size = iVar9;
              local_a0 = FVar20.Data;
              if (FVar20.Data != (FScriptContainerElement *)0x0) {
                sVar16 = wcslen((wchar_t *)FVar20.Data);
                iVar10 = (int)sVar16;
              }
              local_98 = iVar10;
              FPaths::CombineInternal(&local_110,&local_b0,2);
              ::FString::ConcatFF(&local_238.Path,&local_110,pFVar15);
              if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data.AllocatorInstance.Data);
              }
              if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
            }
            else {
              local_238.Path.Data.ArrayNum = local_170.Data.ArrayNum;
              local_238.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_170.Data.ArrayNum == 0) {
                local_238.Path.Data.ArrayMax = 0;
              }
              else {
                pFVar25 = &local_238;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_170.Data.ArrayNum,0,(ForAnyElementType *)pFVar25,
                           local_170.Data.ArrayNum,&local_238.Path.Data.ArrayMax);
                memcpy(local_238.Path.Data.AllocatorInstance.Data,FVar20.Data,(longlong)iVar9 * 2);
              }
            }
            if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data.AllocatorInstance.Data);
            }
            FVar20.Data = (FScriptContainerElement *)L"";
            if (local_238.Path.Data.ArrayNum != 0) {
              FVar20.Data = local_238.Path.Data.AllocatorInstance.Data;
            }
            local_248 = (FString *)0x0;
            local_240 = 0;
            pFVar25 = (FAutoReplayInfo *)((ulonglong)pFVar25 & 0xffffffffffffff00);
            (**(code **)((longlong)*pIVar12 + 0x80))(pIVar12,&local_248,FVar20.Data,1,pFVar25);
            uVar23 = (int)local_240 + local_270;
            if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
            }
            if (local_26c < (int)uVar23) {
              pFVar25 = (FAutoReplayInfo *)CONCAT44((int)((ulonglong)pFVar25 >> 0x20),local_270);
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,uVar23,&local_278,local_270,&local_26c);
            }
            iVar9 = (int)local_240;
            pFVar22 = local_248 + (int)local_240;
            pFVar15 = local_248;
            while( true ) {
              if ((int)local_240 != iVar9) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res20);
              }
              if (pFVar15 == pFVar22) break;
              local_90.DataPtr = (wchar_t *)local_160.Data.AllocatorInstance.Data;
              local_80 = (pFVar15->Data).AllocatorInstance.Data;
              local_90.Size = local_160.Data.ArrayNum + -1;
              if (local_160.Data.ArrayNum == 0) {
                local_90.Size = 0;
              }
              iVar10 = (pFVar15->Data).ArrayNum;
              local_78 = iVar10 + -1;
              if (iVar10 == 0) {
                local_78 = 0;
              }
              FPaths::CombineInternal(&local_1d0,&local_90,2);
              FVar20.Data = (FScriptContainerElement *)L"";
              if (local_1d0.Data.ArrayNum != 0) {
                FVar20.Data = local_1d0.Data.AllocatorInstance.Data;
              }
              (**(code **)((longlong)*pIVar12 + 0xd8))(pIVar12,&local_140,FVar20.Data);
              local_1f8.Path.Data.AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
              uVar4._0_4_ = local_1d0.Data.ArrayNum;
              uVar4._4_4_ = local_1d0.Data.ArrayMax;
              local_1f8.Path.Data.ArrayNum = local_1d0.Data.ArrayNum;
              local_1f8.Path.Data.ArrayMax = local_1d0.Data.ArrayMax;
              local_1f8.TimeStamp.Ticks = local_140;
              local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1d0.Data.ArrayNum = 0;
              local_1d0.Data.ArrayMax = 0;
              uVar5 = uVar4;
              if ((local_278.Data <= &local_1f8) &&
                 (uVar5 = local_1f8.Path.Data._8_8_,
                 &local_1f8 < (FAutoReplayInfo *)(local_278.Data + (longlong)local_26c * 0x18))) {
                pFVar25 = &local_1f8;
                local_1f8.Path.Data._8_8_ = uVar4;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                uVar5 = local_1f8.Path.Data._8_8_;
                if (bVar6) {
                  pcVar2 = (code *)swi(3);
                  uVar7 = (*pcVar2)();
                  return (bool)uVar7;
                }
              }
              local_1f8.Path.Data._8_8_ = uVar5;
              if (local_270 == local_26c) {
                local_270 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x818,&local_278,&local_26c);
              }
              iVar10 = local_270 + 1;
              lVar14 = (longlong)local_270;
              *(undefined8 *)&local_278.Data[lVar14 * 0x18].field_0x0 = 0;
              *(FScriptContainerElement **)&local_278.Data[lVar14 * 0x18].field_0x0 =
                   local_1f8.Path.Data.AllocatorInstance.Data;
              *(int *)(local_278.Data + lVar14 * 0x18 + 8) = local_1f8.Path.Data.ArrayNum;
              *(int *)(local_278.Data + lVar14 * 0x18 + 0xc) = local_1f8.Path.Data.ArrayMax;
              *(long64 *)(local_278.Data + lVar14 * 0x18 + 0x10) = local_1f8.TimeStamp.Ticks;
              local_1f8.Path.Data.ArrayNum = 0;
              local_1f8.Path.Data.ArrayMax = 0;
              local_1f8.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_270 = iVar10;
              if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
              }
              pFVar15 = pFVar15 + 1;
            }
            DestructItems<FString,int>(local_248,(int)local_240);
            if (local_248 != (FString *)0x0) {
              FMemory::Free(local_248);
            }
            if (local_238.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Path.Data.AllocatorInstance.Data);
            }
            if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_160.Data.AllocatorInstance.Data);
            }
            pFVar13 = pFVar13 + 1;
            FVar21.Ticks = local_260;
            uVar24 = local_1b0;
          } while (pFVar13 != local_1c0);
        }
        AlgoImpl::
        IntroSortInternal<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,int,FIdentityFunctor,TDereferenceWrapper<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,TLess<void>_>_>
                  ((FAutoReplayInfo *)local_278.Data,local_270,local_res18[0],
                   (TLess<void> *)local_267);
        while ((local_270 != 0 && ((ulonglong)FVar21.Ticks < uVar24))) {
          if (local_270 < 1) {
            pFVar25 = (FAutoReplayInfo *)0x0;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              uVar7 = (*pcVar2)();
              return (bool)uVar7;
            }
          }
          lVar14 = (longlong)local_270;
          local_188 = *(wchar_t **)&local_278.Data[lVar14 * 0x18 + -0x18].field_0x0;
          *(undefined8 *)&local_278.Data[lVar14 * 0x18 + -0x18].field_0x0 = 0;
          local_180 = *(int *)(local_278.Data + lVar14 * 0x18 + -0x10);
          local_17c = *(undefined4 *)(local_278.Data + lVar14 * 0x18 + -0xc);
          *(undefined8 *)(local_278.Data + lVar14 * 0x18 + -0x10) = 0;
          local_178 = *(undefined8 *)&local_278.Data[lVar14 * 0x18 + -8].field_0x0;
          iVar9 = local_270 + -1;
          pFVar1 = local_278.Data + (longlong)iVar9 * 0x18;
          if (*(void **)&local_278.Data[(longlong)iVar9 * 0x18].field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&local_278.Data[(longlong)iVar9 * 0x18].field_0x0);
          }
          iVar9 = (local_270 - iVar9) + -1;
          if (iVar9 != 0) {
            memmove(pFVar1,pFVar1 + 0x18,(longlong)iVar9 * 0x18);
          }
          local_270 = local_270 + -1;
          pFVar25 = (FAutoReplayInfo *)((ulonglong)pFVar25 & 0xffffffffffffff00);
          pwVar19 = L"";
          if (local_180 != 0) {
            pwVar19 = local_188;
          }
          cVar8 = (**(code **)((longlong)*pIVar12 + 0x38))(pIVar12,pwVar19,1,1,pFVar25);
          if (cVar8 == '\0') {
            local_138 = &local_188;
            bVar6 = `FLocalFileNetworkReplayStreamer::CleanUpOldReplays'::__l71::<lambda_2>::
                    operator()(&local_138);
            if (bVar6) goto LAB_146ca5c88;
            if (2 < (byte)LogLocalFileReplay._0_1_) {
              pFVar18 = &::LOG_Static;
              goto LAB_146ca5dd8;
            }
LAB_146ca5de7:
            if (local_188 != (wchar_t *)0x0) {
              FMemory::Free(local_188);
            }
            bVar6 = false;
            goto LAB_146ca5d39;
          }
LAB_146ca5c88:
          local_1a8 = 0;
          local_218 = 0;
          bVar6 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(param_1,&local_1a8,&local_218);
          if (!bVar6) {
            pIVar17 = IFileManager::Get();
            if ((param_1->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
            }
            cVar8 = (**(code **)((longlong)*pIVar17 + 0x58))(pIVar17,pwVar19);
            if (cVar8 == '\0') {
              if ((param_1->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
              }
              cVar8 = (**(code **)((longlong)*pIVar17 + 0x60))(pIVar17,pwVar19,1);
              if (cVar8 != '\0') {
                local_1a8 = 0;
                local_218 = 0;
                bVar6 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace
                                  (param_1,&local_1a8,&local_218);
                if (bVar6) goto LAB_146ca5d10;
              }
            }
            if (4 < (byte)LogLocalFileReplay._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
            }
            if (2 < (byte)LogLocalFileReplay._0_1_) {
              pFVar18 = &::LOG_Static;
LAB_146ca5dd8:
              UE::Logging::Private::BasicLog<3>(pFVar18,(FLogCategoryBase *)&LogLocalFileReplay);
            }
            goto LAB_146ca5de7;
          }
LAB_146ca5d10:
          FVar21.Ticks = local_218;
          local_260 = local_218;
          if (local_188 != (wchar_t *)0x0) {
            FMemory::Free(local_188);
          }
        }
        bVar6 = uVar24 <= (ulonglong)FVar21.Ticks;
LAB_146ca5d39:
        DestructItems<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,int>
                  ((FAutoReplayInfo *)local_278.Data,local_270);
        if ((FAutoReplayInfo *)local_278.Data != (FAutoReplayInfo *)0x0) {
          FMemory::Free(local_278.Data);
        }
LAB_146ca5d52:
        iVar9 = (int)local_280;
      }
      else {
        bVar6 = true;
        iVar9 = (int)local_280;
      }
      DestructItems<_FLocalFileNetworkReplayStreamer::CleanUpOldReplays_::__l5::FAutoReplayInfo,int>
                ((FAutoReplayInfo *)local_288.Data,iVar9);
      if ((FAutoReplayInfo *)local_288.Data != (FAutoReplayInfo *)0x0) {
        FMemory::Free(local_288.Data);
      }
      goto LAB_146ca5e02;
    }
  }
  bVar6 = true;
LAB_146ca5e02:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// CleanupRequestCache @ 146ca5e40

void __thiscall
FLocalFileNetworkReplayStreamer::CleanupRequestCache(FLocalFileNetworkReplayStreamer *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  int local_res20;
  undefined4 uStack_c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  
  if (*(int *)&(this->RequestCache).field_0x8 != *(int *)&(this->RequestCache).field_0x34) {
    puVar1 = &(this->RequestCache).field_0x10;
    do {
      iVar3 = *(int *)&(this->RequestCache).field_0x28;
      uVar18 = 0;
      iVar14 = 0;
      iVar16 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar19 = 0xffffffff;
      uVar9 = 1;
      iVar10 = 0;
      if (iVar3 != 0) {
        puVar4 = *(uint **)&(this->RequestCache).field_0x20;
        puVar17 = (uint *)puVar1;
        if (puVar4 != (uint *)0x0) {
          puVar17 = puVar4;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar10 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146ca5f1d;
          uVar13 = puVar17[lVar11 + 1];
        }
        uVar9 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar9 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res20 = (int)lVar11;
        iVar10 = iVar16 + -1 + local_res20;
        if (iVar3 < iVar10) {
          iVar10 = iVar3;
        }
      }
LAB_146ca5f1d:
      uVar13 = *(uint *)&(this->RequestCache).field_0x28;
      uVar12 = uVar13 & 0xffffffe0;
      TStack_b8._padding_ = CONCAT44(uVar9,iVar14);
      TStack_b8.CurrentBitIndex = iVar10;
      TStack_b8.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_b8._28_4_ = local_74;
      TStack_b8.BaseBitIndex = iVar16;
      uStack_98 = CONCAT44(uStack_c4,
                           *(int *)&(this->RequestCache).field_0x8 -
                           *(int *)&(this->RequestCache).field_0x34);
      TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = *(uint *)&(this->RequestCache).field_0x28;
      if (uVar13 != uVar9) {
        puVar5 = *(undefined1 **)&(this->RequestCache).field_0x20;
        puVar15 = puVar1;
        if (puVar5 != (undefined1 *)0x0) {
          puVar15 = puVar5;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar14;
          uVar12 = uVar12 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_146ca6030;
          uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar13 = (int)lVar11 + -1 + uVar12;
        if ((int)uVar9 < (int)uVar13) {
          uVar13 = uVar9;
        }
      }
LAB_146ca6030:
      while( true ) {
        if (*(int *)&(this->RequestCache).field_0x8 - *(int *)&(this->RequestCache).field_0x34 !=
            (int)uStack_98) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((TStack_b8.CurrentBitIndex == uVar13) &&
           (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        lVar11 = *(longlong *)
                  ((longlong)TStack_b8.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->RequestCache
                  );
        if (lVar11 != 0) {
          if ((uVar19 == 0xffffffff) ||
             (*(double *)(lVar11 + 0x10) <= (double)CONCAT44(uVar21,uVar20) &&
              (double)CONCAT44(uVar21,uVar20) != *(double *)(lVar11 + 0x10))) {
            uVar20 = (undefined4)*(undefined8 *)(lVar11 + 0x10);
            uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x10) >> 0x20);
            uVar19 = *(uint *)((longlong)TStack_b8.CurrentBitIndex * 0x20 +
                              *(longlong *)&this->RequestCache);
          }
          uVar18 = uVar18 + *(int *)(lVar11 + 8);
        }
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
      }
      if ((uVar19 == 0xffffffff) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("OldestKey != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                             ,0xe2b,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar7 = UE::Net::LocalFileReplay::CVarMaxCacheSize.Ref;
      bVar8 = IsInParallelGameThread();
      if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
        lVar11 = 0;
      }
      else {
        lVar11 = 4;
      }
      if (uVar18 <= *(uint *)((longlong)pTVar7->ShadowedValue + lVar11)) {
        return;
      }
      local_res18[0] = uVar19;
      if (*(int *)&(this->RequestCache).field_0x8 != *(int *)&(this->RequestCache).field_0x34) {
        TSet<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FCachedFileRequest,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TSharedPtr<FCachedFileRequest,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FCachedFileRequest,1>,0>,FDefaultSetAllocator>
                           *)&this->RequestCache,uVar19,(int *)local_res18);
      }
    } while (*(int *)&(this->RequestCache).field_0x8 != *(int *)&(this->RequestCache).field_0x34);
  }
  return;
}

// CompressBuffer @ 146ca77a0

bool __thiscall
FLocalFileNetworkReplayStreamer::CompressBuffer
          (FLocalFileNetworkReplayStreamer *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ConditionallyFlushStream @ 146ca77b0

void __thiscall
FLocalFileNetworkReplayStreamer::ConditionallyFlushStream(FLocalFileNetworkReplayStreamer *this)

{
  float fVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  LARGE_INTEGER local_res8;
  
  pTVar3 = UE::Net::LocalFileReplay::CVarChunkUploadDelayInSeconds.Ref;
  if (((this->ActiveRequest).Object == (FQueuedLocalFileRequest *)0x0) &&
     ((this->QueuedRequests).ArrayNum < 1)) {
    bVar4 = IsInParallelGameThread();
    if (!bVar4) {
      bVar4 = IsInGameThread();
      if (!bVar4) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    fVar1 = pTVar3->ShadowedValue[0];
    QueryPerformanceCounter(&local_res8);
    if ((double)fVar1 <
        ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->LastChunkTime) {
      FlushStream(this,(this->CurrentReplayInfo).LengthInMS);
      return;
    }
  }
  return;
}

// ConditionallyLoadNextChunk @ 146ca7890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk(FLocalFileNetworkReplayStreamer *this)

{
  FLocalFileStreamFArchive *pFVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TConsoleVariableData<float> *pTVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_128 [32];
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0 [5];
  code *local_c8 [2];
  undefined **local_b8;
  FLocalFileNetworkReplayStreamer *local_b0;
  uint local_a8;
  undefined4 local_a4;
  undefined ***local_a0;
  code *local_98 [2];
  undefined **local_88;
  FLocalFileNetworkReplayStreamer *local_80;
  uint local_78;
  undefined4 local_74;
  undefined ***local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar7 = IsFileRequestPendingOrInProgress(this,ReadingCheckpoint);
  if (bVar7) {
    return;
  }
  bVar7 = IsFileRequestPendingOrInProgress(this,ReadingStream);
  dVar5 = __real_4170000000000000;
  if (bVar7) {
    return;
  }
  if (this->StreamChunkIndex < 0) {
    return;
  }
  if ((this->CurrentReplayInfo).DataChunks.ArrayNum <= this->StreamChunkIndex) {
    return;
  }
  if ((this->HighPriorityEndTime != 0) && ((this->StreamTimeRange).Max < this->HighPriorityEndTime))
  goto LAB_146ca7aad;
  QueryPerformanceCounter(&local_f8);
  pTVar6 = UE::Net::LocalFileReplay::CVarMinLoadNextChunkDelaySeconds.Ref;
  dVar4 = (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  dVar2 = this->LastChunkTime;
  bVar7 = IsInParallelGameThread();
  if (bVar7) {
LAB_146ca7998:
    lVar8 = 0;
  }
  else {
    bVar7 = IsInGameThread();
    lVar8 = 4;
    if (bVar7) goto LAB_146ca7998;
  }
  if ((dVar4 + dVar5) - dVar2 < (double)*(float *)((longlong)pTVar6->ShadowedValue + lVar8)) {
    return;
  }
  if ((this->StreamTimeRange).Min < (this->StreamTimeRange).Max) {
    pFVar1 = &this->StreamAr;
    lVar8 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
    if (0 < lVar8) {
      lVar8 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
      if (lVar8 < 1) {
        fVar12 = 0.0;
      }
      else {
        lVar8 = (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1);
        lVar9 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
        fVar12 = (float)lVar8 / (float)lVar9;
      }
      pTVar6 = UE::Net::LocalFileReplay::CVarChunkUploadDelayInSeconds.Ref;
      fVar13 = (float)((this->StreamTimeRange).Max - (this->StreamTimeRange).Min) * __real_3a83126f;
      bVar7 = IsInParallelGameThread();
      if ((bVar7) || (bVar7 = IsInGameThread(), lVar8 = 4, bVar7)) {
        lVar8 = 0;
      }
      if (*(float *)((longlong)pTVar6->ShadowedValue + lVar8) * __real_3f000000 <
          fVar13 - fVar13 * fVar12) {
        if ((byte)LogLocalFileReplay._0_1_ < 7) {
          return;
        }
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
        return;
      }
    }
  }
LAB_146ca7aad:
  if (4 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  local_a8 = this->StreamChunkIndex;
  lVar8 = (longlong)(int)local_a8;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_74 = local_f0[2]._4_4_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::__l2::<lambda_2>,void,TLocalFileRequestCommonData<FStreamingResultBase>_&>
                ::Call;
  local_b8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_a4 = local_f0[4]._4_4_;
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::ConditionallyLoadNextChunk'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FStreamingResultBase>_&>
                ::Call;
  local_70 = (undefined ***)0x0;
  local_a0 = (undefined ***)0x0;
  uVar11 = 0;
  if ((int)local_a8 < (this->CurrentReplayInfo).DataChunks.ArrayNum) {
    uVar11 = ~local_a8 >> 0x1f;
  }
  local_b0 = this;
  local_80 = this;
  local_78 = local_a8;
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AddCachedFileRequestToQueue<FStreamingResultBase>
            (this,ReadingStream,
             *(int *)((this->CurrentReplayInfo).DataChunks.AllocatorInstance.Data + lVar8 * 0x28),
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FStreamingResultBase>_&)> *)
             local_c8,(TFunction<void___cdecl(TLocalFileRequestCommonData<FStreamingResultBase>_&)>
                       *)local_98);
  if (local_c8[0] != (code *)0x0) {
    pppuVar10 = &local_b8;
    if (local_a0 != (undefined ***)0x0) {
      pppuVar10 = local_a0;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar10 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar10 = local_70;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  QueryPerformanceCounter(local_f0);
  this->LastChunkTime = (double)local_f0[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5
  ;
  return;
}

// ConditionallyRefreshReplayInfo @ 146ca7c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo
          (FLocalFileNetworkReplayStreamer *this)

{
  long64 lVar1;
  undefined ***pppuVar2;
  double dVar3;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  code *local_78 [2];
  undefined **local_68;
  FLocalFileNetworkReplayStreamer *local_60;
  long64 local_58;
  undefined ***local_50;
  code *local_48 [2];
  undefined **local_38;
  FLocalFileNetworkReplayStreamer *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((((this->ActiveRequest).Object == (FQueuedLocalFileRequest *)0x0) &&
      ((this->QueuedRequests).ArrayNum < 1)) && ((this->CurrentReplayInfo).bIsLive != false)) {
    QueryPerformanceCounter(local_88);
    if (__real_4024000000000000 <
        ((double)local_88[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->LastRefreshTime) {
      lVar1 = (this->CurrentReplayInfo).TotalDataSizeInBytes;
      GetDemoFullFilename(this,(FString *)&local_88[0].s,&this->CurrentStreamName);
      local_50 = (undefined ***)0x0;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::`11'::<lambda_2>,0,0>
                  ::_vftable_;
      local_20 = (undefined ***)0x0;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::__l11::<lambda_2>,void,enum_ELocalFileReplayResult_&>
                    ::Call;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::`11'::<lambda_1>,0,0>
                  ::_vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::__l11::<lambda_1>,void,enum_ELocalFileReplayResult_&>
                    ::Call;
      local_60 = this;
      local_58 = lVar1;
      local_30 = this;
      AddGenericRequestToQueue<enum_ELocalFileReplayResult>
                (this,RefreshingLiveStream,
                 (TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_48,
                 (TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_78);
      if (local_48[0] != (code *)0x0) {
        pppuVar2 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar2 = local_20;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      if (local_78[0] != (code *)0x0) {
        pppuVar2 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar2 = local_50;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      dVar3 = FWindowsPlatformTime::Seconds();
      this->LastRefreshTime = dVar3;
      if ((void *)local_88[0].QuadPart != (void *)0x0) {
        FMemory::Free((void *)local_88[0]);
      }
    }
  }
  return;
}

// CreateLocalFileReader @ 146ca8030

TSharedPtr<FArchive,1> * __thiscall
FLocalFileNetworkReplayStreamer::CreateLocalFileReader
          (FLocalFileNetworkReplayStreamer *this,TSharedPtr<FArchive,1> *__return_storage_ptr__,
          FString *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  IFileManager *pIVar7;
  longlong *plVar8;
  longlong lVar9;
  TSharedPtr<FArchive,1> *pTVar10;
  FLargeMemoryReader *this_00;
  FLargeMemoryReader *pFVar11;
  FArchive *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  wchar_t *pwVar15;
  TRawPtrProxy<FLargeMemoryReader> *pTVar16;
  wchar_t *pwVar17;
  FLLMScope local_res8 [2];
  FMemScope local_48;
  TRawPtrProxy<FLargeMemoryReader> local_40;
  TRawPtrProxy<FLargeMemoryReader> local_38 [2];
  
  FLLMScope::FLLMScope(local_res8,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_48,Replays,true);
  if (this->bCacheFileReadsInMemory == false) {
    pIVar7 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar12 = (FArchive *)(**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,pwVar17,4);
    __return_storage_ptr__->Object = pFVar12;
    pTVar13 = ::operator_new(0x18);
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar13->SharedReferenceCount = (atomic<int>)0x1;
      pTVar13->WeakReferenceCount = (atomic<int>)0x1;
      pTVar13->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFArchive__U__DefaultDeleter_VFArchive___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar13[1]._padding_ = (longlong)pFVar12;
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
    FMemScope::~FMemScope(&local_48);
    FLLMScope::~FLLMScope(local_res8);
    return __return_storage_ptr__;
  }
  iVar2 = (param_1->Data).ArrayNum;
  pwVar17 = L"";
  if (iVar2 == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar11 = (FLargeMemoryReader *)0x0;
  iVar14 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar14 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar15);
  pTVar6 = TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->FileContentsCache,uVar5,param_1);
  iVar2 = pTVar6->ArrayNum;
  piVar1 = &pTVar6->ArrayNum;
  bVar4 = false;
  if (iVar2 == 0) {
    pIVar7 = IFileManager::Get();
    if ((param_1->Data).ArrayNum != 0) {
      pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,pwVar17,4);
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x30))(plVar8);
      if (lVar9 != (int)lVar9) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TSharedPtr<FArchive,1> *)(*pcVar3)();
          return pTVar10;
        }
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)lVar9,&pTVar6->AllocatorInstance,piVar1,&pTVar6->ArrayMax);
      (**(code **)(*plVar8 + 0x188))(plVar8,(pTVar6->AllocatorInstance).Data,(longlong)*piVar1);
      (**(code **)*plVar8)(plVar8,1);
    }
    iVar2 = *piVar1;
    bVar4 = iVar2 == 0;
  }
  if (bVar4 || iVar2 < 0) {
    local_38[0].Object = (FLargeMemoryReader *)0x0;
    pTVar16 = local_38;
  }
  else {
    this_00 = ::operator_new(0xb8);
    if (this_00 != (FLargeMemoryReader *)0x0) {
      pFVar11 = FLargeMemoryReader::FLargeMemoryReader
                          (this_00,(uchar *)(pTVar6->AllocatorInstance).Data,(longlong)*piVar1,None,
                           (FName)0x0);
    }
    pTVar16 = &local_40;
    local_40.Object = pFVar11;
  }
  TSharedPtr<FArchive,1>::TSharedPtr<FArchive,1><FLargeMemoryReader>(__return_storage_ptr__,pTVar16)
  ;
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// CreateLocalFileWriter @ 146ca82a0

TSharedPtr<FArchive,1> * __thiscall
FLocalFileNetworkReplayStreamer::CreateLocalFileWriter
          (FLocalFileNetworkReplayStreamer *this,TSharedPtr<FArchive,1> *__return_storage_ptr__,
          FString *param_1)

{
  IFileManager *pIVar1;
  FArchive *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  wchar_t *pwVar4;
  
  pIVar1 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar2 = (FArchive *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,pwVar4,0x18);
  __return_storage_ptr__->Object = pFVar2;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFArchive__U__DefaultDeleter_VFArchive___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = (longlong)pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateLocalFileWriterForOverwrite @ 146ca8340

TSharedPtr<FArchive,1> * __thiscall
FLocalFileNetworkReplayStreamer::CreateLocalFileWriterForOverwrite
          (FLocalFileNetworkReplayStreamer *this,TSharedPtr<FArchive,1> *__return_storage_ptr__,
          FString *param_1)

{
  IFileManager *pIVar1;
  FArchive *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  wchar_t *pwVar4;
  
  pIVar1 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar2 = (FArchive *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,pwVar4,0x10);
  __return_storage_ptr__->Object = pFVar2;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFArchive__U__DefaultDeleter_VFArchive___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = (longlong)pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// DecompressBuffer @ 146ca83e0

bool __thiscall
FLocalFileNetworkReplayStreamer::DecompressBuffer
          (FLocalFileNetworkReplayStreamer *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// DecryptBuffer @ 146ca83f0

bool __thiscall
FLocalFileNetworkReplayStreamer::DecryptBuffer
          (FLocalFileNetworkReplayStreamer *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  return false;
}

// DeleteFinishedStream @ 146ca8400

void __thiscall
FLocalFileNetworkReplayStreamer::DeleteFinishedStream
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  DeleteFinishedStream_Internal(this,param_1,-1,param_2);
  return;
}

// DeleteFinishedStream @ 146ca8420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::DeleteFinishedStream
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,int param_2,
          TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_d8 [32];
  FLocalFileNetworkReplayStreamer *pFStack_b8;
  FString FStack_b0;
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy> TStack_a0;
  code *apcStack_88 [2];
  code *apcStack_78 [3];
  code **ppcStack_60;
  code *apcStack_58 [2];
  code *apcStack_48 [3];
  code **ppcStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFStack_b8 = this;
  ::FString::FString(&FStack_b0,param_1);
  apcStack_58[0] = (code *)0x0;
  ppcStack_30 = FMemory::Malloc(0x20,8);
  ppcVar1 = ppcStack_30 + 1;
  *ppcStack_30 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal'::`2'::<lambda_1>,0,1>
                          ::_vftable_;
  *ppcVar1 = (code *)pFStack_b8;
  ::FString::FString((FString *)(ppcStack_30 + 2),&FStack_b0);
  if (ppcVar1 != (code **)0x0) {
    apcStack_58[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&>
         ::Call;
  }
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
            (&TStack_a0,param_3);
  apcStack_88[0] = (code *)0x0;
  ppcStack_60 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
             *)(ppcStack_60 + 1);
  *ppcStack_60 = (code *)&
                         ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFDeleteFinishedStreamResult___ZUFDefaultDelegateUserPolicy____UFDeleteFinishedStreamResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFDeleteFinishedStreamResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
            (this_00,&TStack_a0);
  if (this_00 !=
      (TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy> *)0x0
     ) {
    apcStack_88[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>,FDeleteFinishedStreamResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&>
         ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
            (this,DeletingFinishedStream,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&)> *)
             apcStack_58,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&)> *)
             apcStack_88);
  if (apcStack_88[0] != (code *)0x0) {
    ppcVar1 = apcStack_88 + 2;
    if (ppcStack_60 != (code **)0x0) {
      ppcVar1 = ppcStack_60;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&TStack_a0);
  if (apcStack_58[0] != (code *)0x0) {
    ppcVar1 = apcStack_58 + 2;
    if (ppcStack_30 != (code **)0x0) {
      ppcVar1 = ppcStack_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
  }
  return;
}

// DeleteFinishedStream_Internal @ 146ca8430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,int param_2,
          TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_d8 [32];
  FLocalFileNetworkReplayStreamer *local_b8;
  FString local_b0;
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy> local_a0;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = this;
  ::FString::FString(&local_b0,param_1);
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  ppcVar1 = local_30 + 1;
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *ppcVar1 = (code *)local_b8;
  ::FString::FString((FString *)(local_30 + 2),&local_b0);
  if (ppcVar1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::DeleteFinishedStream_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&>
                  ::Call;
  }
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
            (&local_a0,param_3);
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
             *)(local_60 + 1);
  *local_60 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFDeleteFinishedStreamResult___ZUFDefaultDelegateUserPolicy____UFDeleteFinishedStreamResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFDeleteFinishedStreamResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
            (this_00,&local_a0);
  if (this_00 !=
      (TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy> *)0x0
     ) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>,FDeleteFinishedStreamResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&>
                  ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
            (this,DeletingFinishedStream,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&)> *)
             local_58,(TFunction<void___cdecl(TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&)>
                       *)local_88);
  if (local_88[0] != (code *)0x0) {
    ppcVar1 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar1 = local_60;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  if (local_58[0] != (code *)0x0) {
    ppcVar1 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar1 = local_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return;
}

// DownloadHeader @ 146ca90a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::DownloadHeader
          (FLocalFileNetworkReplayStreamer *this,
          TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *param_1
          )

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  code **ppcVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  undefined **local_f8;
  undefined8 local_f0;
  FLocalFileNetworkReplayStreamer *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  FLocalFileNetworkReplayStreamer *local_d0;
  TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> local_c8;
  FReadAccessScope local_b0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((this->CurrentReplayInfo).bIsValid != false) {
    uVar1 = (this->CurrentReplayInfo).HeaderChunkIndex;
    lVar10 = (longlong)(int)uVar1;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (this->CurrentReplayInfo).Chunks.ArrayNum)) {
      iVar2 = (this->CurrentReplayInfo).Chunks.ArrayNum;
      uVar8 = 0;
      if ((int)uVar1 < iVar2) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (local_108 = lVar10, local_100 = (longlong)iVar2,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->CurrentReplayInfo).Chunks.AllocatorInstance.Data;
      pcVar6 = *(code **)(pFVar4 + lVar10 * 0x18 + 0x10);
      uVar3 = *(undefined4 *)(pFVar4 + lVar10 * 0x18 + 4);
      local_d0 = this;
      TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
                (&local_c8,param_1);
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x28,8);
      ppcVar9 = local_40 + 1;
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::`5'::<lambda_2>,0,1>
                           ::_vftable_;
      *ppcVar9 = (code *)local_d0;
      TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
                  *)(local_40 + 2),&local_c8);
      if (ppcVar9 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::DownloadHeader'::__l5::<lambda_2>,void,TLocalFileRequestCommonData<FDownloadHeaderResult>_&>
                      ::Call;
      }
      local_98[0] = (code *)0x0;
      local_e8 = this;
      uStack_e0 = uVar3;
      local_d8 = pcVar6;
      local_70 = FMemory::Malloc(0x20,8);
      *local_70 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::DownloadHeader'::`5'::<lambda_1>,0,1>
                           ::_vftable_;
      local_70[1] = (code *)local_e8;
      local_70[2] = (code *)CONCAT44(uStack_dc,uStack_e0);
      local_70[3] = local_d8;
      if (local_70 + 1 != (code **)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::DownloadHeader'::__l5::<lambda_1>,void,TLocalFileRequestCommonData<FDownloadHeaderResult>_&>
                      ::Call;
      }
      AddGenericRequestToQueue<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
                (this,ReadingHeader,
                 (TFunction<void___cdecl(TLocalFileRequestCommonData<FDownloadHeaderResult>_&)> *)
                 local_98,(TFunction<void___cdecl(TLocalFileRequestCommonData<FDownloadHeaderResult>_&)>
                           *)local_68);
      if (local_98[0] != (code *)0x0) {
        ppcVar9 = local_98 + 2;
        if (local_70 != (code **)0x0) {
          ppcVar9 = local_70;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
      if (local_68[0] != (code *)0x0) {
        ppcVar9 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar9 = local_40;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c8);
      return;
    }
  }
  local_f0 = 6;
  local_f8 = &___7FDownloadHeaderResult__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_b0);
  if ((*(int *)&param_1->field_0x10 != 0) &&
     (plVar5 = *(longlong **)&param_1->field_0x8, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x68))(plVar5,&local_f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b0);
  return;
}

// EncryptBuffer @ 146ca9310

bool __thiscall
FLocalFileNetworkReplayStreamer::EncryptBuffer
          (FLocalFileNetworkReplayStreamer *this,TArrayView<unsigned_char_const_,int> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<unsigned_char_const_,int> *param_3)

{
  return false;
}

// EnumerateEvents @ 146ca9320

void __thiscall
FLocalFileNetworkReplayStreamer::EnumerateEvents
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  EnumerateEvents_Internal(this,param_1,param_2,-1,param_3);
  return;
}

// EnumerateEvents @ 146ca9340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::EnumerateEvents
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_e8 [32];
  FLocalFileNetworkReplayStreamer *pFStack_c8;
  FString FStack_c0;
  FString FStack_b0;
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> TStack_a0;
  code *apcStack_88 [2];
  code *apcStack_78 [3];
  code **ppcStack_60;
  code *apcStack_58 [2];
  code *apcStack_48 [3];
  code **ppcStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFStack_c8 = this;
  ::FString::FString(&FStack_c0,param_1);
  ::FString::FString(&FStack_b0,param_2);
  apcStack_58[0] = (code *)0x0;
  ppcVar1 = FMemory::Malloc(0x30,8);
  *ppcVar1 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar1[1] = (code *)pFStack_c8;
  ppcStack_30 = ppcVar1;
  ::FString::FString((FString *)(ppcVar1 + 2),&FStack_c0);
  ::FString::FString((FString *)(ppcVar1 + 4),&FStack_b0);
  if (ppcVar1 + 1 != (code **)0x0) {
    apcStack_58[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FEnumerateEventsResult>_&>
         ::Call;
  }
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
            (&TStack_a0,param_4);
  apcStack_88[0] = (code *)0x0;
  ppcStack_60 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *)
            (ppcStack_60 + 1);
  *ppcStack_60 = (code *)&
                         ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy____UFEnumerateEventsResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFEnumerateEventsResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
            (this_00,&TStack_a0);
  if (this_00 !=
      (TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *)0x0) {
    apcStack_88[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateEventsResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FEnumerateEventsResult>_&>
         ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
            (this,EnumeratingEvents,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateEventsResult>_&)> *)
             apcStack_58,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateEventsResult>_&)> *)
             apcStack_88);
  if (apcStack_88[0] != (code *)0x0) {
    ppcVar1 = apcStack_88 + 2;
    if (ppcStack_60 != (code **)0x0) {
      ppcVar1 = ppcStack_60;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&TStack_a0);
  if (apcStack_58[0] != (code *)0x0) {
    ppcVar1 = apcStack_58 + 2;
    if (ppcStack_30 != (code **)0x0) {
      ppcVar1 = ppcStack_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
  }
  if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// EnumerateEvents @ 146ca9350

void __thiscall
FLocalFileNetworkReplayStreamer::EnumerateEvents
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  EnumerateEvents_Internal(this,&local_18,param_1,-1,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// EnumerateEvents_Internal @ 146ca93a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_e8 [32];
  FLocalFileNetworkReplayStreamer *local_c8;
  FString local_c0;
  FString local_b0;
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> local_a0;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = this;
  ::FString::FString(&local_c0,param_1);
  ::FString::FString(&local_b0,param_2);
  local_58[0] = (code *)0x0;
  ppcVar1 = FMemory::Malloc(0x30,8);
  *ppcVar1 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar1[1] = (code *)local_c8;
  local_30 = ppcVar1;
  ::FString::FString((FString *)(ppcVar1 + 2),&local_c0);
  ::FString::FString((FString *)(ppcVar1 + 4),&local_b0);
  if (ppcVar1 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::EnumerateEvents_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FEnumerateEventsResult>_&>
                  ::Call;
  }
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
            (&local_a0,param_4);
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *)
            (local_60 + 1);
  *local_60 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy____UFEnumerateEventsResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFEnumerateEventsResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
            (this_00,&local_a0);
  if (this_00 !=
      (TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy> *)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateEventsResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FEnumerateEventsResult>_&>
                  ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
            (this,EnumeratingEvents,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateEventsResult>_&)> *)
             local_58,(TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateEventsResult>_&)>
                       *)local_88);
  if (local_88[0] != (code *)0x0) {
    ppcVar1 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar1 = local_60;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  if (local_58[0] != (code *)0x0) {
    ppcVar1 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar1 = local_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// EnumerateRecentStreams @ 146ca9540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::EnumerateRecentStreams
          (FLocalFileNetworkReplayStreamer *this,FNetworkReplayVersion *param_1,int param_2,
          TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  longlong *plVar1;
  FReadAccessScope local_58;
  undefined **local_40;
  undefined4 local_38;
  FNetworkReplayStreamInfo *local_30;
  undefined8 local_28;
  FString *local_20;
  undefined8 local_18;
  
  if (4 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  local_38 = 1;
  local_40 = &___7FEnumerateStreamsResult__6B_;
  local_30 = (FNetworkReplayStreamInfo *)0x0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_58);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_40);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  DestructItems<FNetworkReplayStreamInfo,int>(local_30,(int)local_28);
  if (local_30 != (FNetworkReplayStreamInfo *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// EnumerateStreams @ 146ca9610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::EnumerateStreams
          (FLocalFileNetworkReplayStreamer *this,FNetworkReplayVersion *param_1,int param_2,
          FString *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
          TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
          *param_5)

{
  TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_e8 [32];
  FLocalFileNetworkReplayStreamer *local_c8;
  FString local_c0;
  uint local_b0;
  uint local_ac;
  TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy> local_a8;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = this;
  ::FString::FString(&local_c0,&param_1->AppString);
  local_b0 = param_1->NetworkVersion;
  local_ac = param_1->Changelist;
  local_58[0] = (code *)0x0;
  ppcVar1 = FMemory::Malloc(0x28,8);
  *ppcVar1 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::EnumerateStreams'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar1[1] = (code *)local_c8;
  local_30 = ppcVar1;
  ::FString::FString((FString *)(ppcVar1 + 2),&local_c0);
  *(uint *)(ppcVar1 + 4) = local_b0;
  *(uint *)((longlong)ppcVar1 + 0x24) = local_ac;
  if (ppcVar1 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::EnumerateStreams'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FEnumerateStreamsResult>_&>
                  ::Call;
  }
  TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
            (&local_a8,param_5);
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy> *)
            (local_60 + 1);
  *local_60 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy____UFEnumerateStreamsResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFEnumerateStreamsResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
            (this_00,&local_a8);
  if (this_00 !=
      (TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy> *)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>,FEnumerateStreamsResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FEnumerateStreamsResult>_&>
                  ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
            (this,EnumeratingStreams,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateStreamsResult>_&)> *)
             local_58,(TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateStreamsResult>_&)>
                       *)local_88);
  if (local_88[0] != (code *)0x0) {
    ppcVar1 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar1 = local_60;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8);
  if (local_58[0] != (code *)0x0) {
    ppcVar1 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar1 = local_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// FixupFriendlyNameLength @ 146caab70

void __thiscall
FLocalFileNetworkReplayStreamer::FixupFriendlyNameLength
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 400))();
  iVar1 = (param_1->Data).ArrayNum;
  uVar5 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  if (uVar5 < uVar3) {
    pFVar4 = ::FString::RightPad(param_1,&local_18,uVar3);
    if (param_2 != pFVar4) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
  }
  else {
    if ((int)uVar3 < (int)uVar5) {
      uVar5 = uVar3;
    }
    uVar3 = 0;
    if (0 < (int)uVar5) {
      uVar3 = uVar5;
    }
    if (iVar1 == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_28,pwVar6,uVar3);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    if (param_2 != &local_28) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_28.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// FlushCheckpoint @ 146caac70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::FlushCheckpoint(FLocalFileNetworkReplayStreamer *this,uint param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((this->CheckpointAr)._padding_ + 0x30))();
  if (lVar1 == 0) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      return;
    }
  }
  else {
    FlushStream(this,param_1);
    FlushCheckpointInternal(this,param_1);
  }
  return;
}

// FlushCheckpointInternal @ 146caace0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::FlushCheckpointInternal
          (FLocalFileNetworkReplayStreamer *this,uint param_1)

{
  FLocalFileStreamFArchive *pFVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code **ppcVar9;
  undefined ***pppuVar10;
  undefined1 auStackY_d8 [32];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  undefined **local_58;
  FLocalFileNetworkReplayStreamer *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar1 = &this->CheckpointAr;
  if ((this->StreamerState == Recording) &&
     (lVar8 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1), lVar8 != 0)) {
    piVar2 = &(this->CheckpointAr).Buffer.ArrayMax;
    uVar3 = (this->StreamTimeRange).Max;
    pFVar7 = (this->CheckpointAr).Buffer.AllocatorInstance.Data;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::`2'::<lambda_2>,0,0>
                ::_vftable_;
    iVar4 = (this->CurrentReplayInfo).LengthInMS;
    (this->CheckpointAr).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = *piVar2;
    iVar6 = (this->CheckpointAr).Buffer.ArrayNum;
    *piVar2 = 0;
    local_40 = (undefined ***)0x0;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_2>,void,enum_ELocalFileReplayResult_&>
                  ::Call;
    (this->CheckpointAr).Buffer.ArrayNum = 0;
    local_98[0] = (code *)0x0;
    local_50 = this;
    local_70 = FMemory::Malloc(0x28,8);
    local_70[1] = (code *)this;
    *(uint *)(local_70 + 2) = uVar3;
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::`2'::<lambda_1>,0,1>
                         ::_vftable_;
    *(int *)((longlong)local_70 + 0x14) = iVar4;
    local_70[3] = (code *)pFVar7;
    *(int *)(local_70 + 4) = iVar6;
    *(int *)((longlong)local_70 + 0x24) = iVar5;
    if (local_70 != (code **)&DAT_fffffffffffffff8) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::FlushCheckpointInternal'::__l2::<lambda_1>,void,enum_ELocalFileReplayResult_&>
                    ::Call;
    }
    AddGenericRequestToQueue<enum_ELocalFileReplayResult>
              (this,WritingCheckpoint,(TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_98,
               (TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_68);
    if (local_98[0] != (code *)0x0) {
      ppcVar9 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar9 = local_70;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar10 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar10 = local_40;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    iVar4 = *piVar2;
    (this->CheckpointAr).Buffer.ArrayNum = 0;
    if (-1 < iVar4) goto LAB_146caaedb;
  }
  else {
    (this->CheckpointAr).Buffer.ArrayNum = 0;
    if ((this->CheckpointAr).Buffer.ArrayMax == 0) goto LAB_146caaedb;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0,&(this->CheckpointAr).Buffer.AllocatorInstance,0,
             &(this->CheckpointAr).Buffer.ArrayMax);
LAB_146caaedb:
  (**(code **)(pFVar1->_padding_ + 0x1b8))(pFVar1,0);
  return;
}

// FlushStream @ 146caaf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::FlushStream(FLocalFileNetworkReplayStreamer *this,uint param_1)

{
  FLocalFileStreamFArchive *pFVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  code **ppcVar10;
  undefined ***pppuVar11;
  undefined1 auStack_c8 [32];
  LARGE_INTEGER local_a8 [2];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  undefined **local_58;
  FLocalFileNetworkReplayStreamer *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar1 = &this->StreamAr;
  if (((this->StreamAr)._padding_ & 4) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("StreamAr.IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                       ,0x74e,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  bVar8 = IsFileRequestPendingOrInProgress(this,WriteHeader);
  if (bVar8) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
  }
  else {
    lVar9 = (**(code **)(pFVar1->_padding_ + 0x30))();
    if (lVar9 != 0) {
      uVar2 = (this->StreamTimeRange).Min;
      (this->StreamTimeRange).Min = param_1;
      (this->StreamTimeRange).Max = param_1;
      iVar3 = (this->CurrentReplayInfo).LengthInMS;
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      pFVar6 = (this->StreamAr).Buffer.AllocatorInstance.Data;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::`2'::<lambda_2>,0,0>
                  ::_vftable_;
      (this->StreamAr).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = (this->StreamAr).Buffer.ArrayNum;
      iVar5 = (this->StreamAr).Buffer.ArrayMax;
      (this->StreamAr).Buffer.ArrayNum = 0;
      (this->StreamAr).Buffer.ArrayMax = 0;
      local_40 = (undefined ***)0x0;
      local_98[0] = (code *)0x0;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_2>,void,enum_ELocalFileReplayResult_&>
                    ::Call;
      local_50 = this;
      local_70 = FMemory::Malloc(0x30,8);
      local_70[1] = (code *)this;
      *(uint *)(local_70 + 2) = uVar2;
      *local_70 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::FlushStream'::`2'::<lambda_1>,0,1>
                           ::_vftable_;
      *(uint *)((longlong)local_70 + 0x14) = param_1;
      *(int *)(local_70 + 3) = iVar3;
      local_70[4] = (code *)pFVar6;
      *(int *)(local_70 + 5) = iVar4;
      *(int *)((longlong)local_70 + 0x2c) = iVar5;
      if (local_70 != (code **)&DAT_fffffffffffffff8) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::FlushStream'::__l2::<lambda_1>,void,enum_ELocalFileReplayResult_&>
                      ::Call;
      }
      AddGenericRequestToQueue<enum_ELocalFileReplayResult>
                (this,WritingStream,(TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_98,
                 (TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_68);
      if (local_98[0] != (code *)0x0) {
        ppcVar10 = local_98 + 2;
        if (local_70 != (code **)0x0) {
          ppcVar10 = local_70;
        }
        (**(code **)(*ppcVar10 + 0x10))();
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar11 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar11 = local_40;
        }
        (*(code *)(*pppuVar11)[2])();
      }
      (**(code **)(pFVar1->_padding_ + 0xc0))(pFVar1);
      uVar2 = (this->StreamTimeRange).Max;
      this->StreamChunkIndex = this->StreamChunkIndex + 1;
      (this->StreamTimeRange).Min = uVar2;
      QueryPerformanceCounter(local_a8);
      this->LastChunkTime =
           (double)local_a8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
    }
  }
  return;
}

// GenerateEncryptionKey @ 146cab1c0

void __thiscall
FLocalFileNetworkReplayStreamer::GenerateEncryptionKey
          (FLocalFileNetworkReplayStreamer *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetAdditionalRelativeDemoPaths @ 146cab1d0

TArrayView<FString_const_,int> * __thiscall
FLocalFileNetworkReplayStreamer::GetAdditionalRelativeDemoPaths
          (FLocalFileNetworkReplayStreamer *this,
          TArrayView<FString_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FString *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAutomaticDemoName @ 146cab720

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FLocalFileNetworkReplayStreamer::GetAutomaticDemoName
          (FLocalFileNetworkReplayStreamer *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_AutomaticName> FVar11;
  undefined4 *puVar12;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar13;
  FDateTime this_01;
  FString *pFVar14;
  size_t sVar15;
  FNameEntryId FVar16;
  uint uVar17;
  FName FVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  int iVar22;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_e8;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FString local_c8;
  FString local_b8;
  TArrayView<FString_const_,int> local_a8;
  FString local_98;
  FName local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FScriptContainerElement *local_58;
  undefined4 local_50;
  
  FVar11 = StatPtr_STAT_LocalReplay_AutomaticName;
  if (StatPtr_STAT_LocalReplay_AutomaticName ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_AutomaticName>)0x0) {
    pFVar10 = ::FName::FName(&local_res20,"STAT_LocalReplay_AutomaticName");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_AutomaticName>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_AutomaticName,
                        *pFVar10,L"Local replay automatic name","STATGROUP_LocalReplay",
                        "STATCAT_Advanced",L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar18 = *(FName *)FVar11;
  bVar3 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar16 = FVar18.ComparisonIndex.Value;
  uVar17 = FVar18.Number;
  if ((FVar16.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar16.Value;
        local_res18.s.HighPart = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0xbdd);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar16.Value;
      local_res18.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar4 = true;
      goto LAB_146cab863;
    }
  }
  bVar4 = false;
  FVar18 = local_88;
LAB_146cab863:
  iVar7 = FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplays();
  bVar6 = FNetworkReplayStreaming::UseDateTimeAsAutomaticReplayPostfix();
  FNetworkReplayStreaming::GetAutomaticReplayPrefix(&local_98);
  local_res20 = (FName)IFileManager::Get();
  FVar16 = FVar18.ComparisonIndex.Value;
  uVar17 = FVar18.Number;
  if (bVar6) {
    puVar12 = (undefined4 *)(**(code **)(this->_padding_ + 0x210))(this,&local_78);
    local_e8.NameAndInfo.Index.Value = (this->DemoSavePath).Data.ArrayNum;
    lVar21 = (longlong)(int)local_e8.NameAndInfo.Index.Value;
    pFVar2 = (this->DemoSavePath).Data.AllocatorInstance.Data;
    local_a8.DataPtr._0_4_ = *puVar12;
    local_a8.DataPtr._4_4_ = puVar12[1];
    local_a8.ArrayNum = puVar12[2];
    local_a8._12_4_ = puVar12[3];
    local_e8.StatData.Pad[0] = '\0';
    local_e8.StatData.Pad[1] = '\0';
    local_e8.StatData.Pad[2] = '\0';
    local_e8.StatData.Pad[3] = '\0';
    local_e8.StatData.Pad[4] = '\0';
    local_e8.StatData.Pad[5] = '\0';
    local_e8.StatData.Pad[6] = '\0';
    local_e8.StatData.Pad[7] = '\0';
    if (local_e8.NameAndInfo.Index.Value == 0) {
      local_e8.NameAndInfo.Number = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e8.NameAndInfo.Index.Value,0,(ForAnyElementType *)&local_e8,
                 local_e8.NameAndInfo.Index.Value,&local_e8.NameAndInfo.Number);
      memcpy((void *)local_e8.StatData.Pad,pFVar2,lVar21 * 2);
    }
    bVar6 = CleanUpOldReplays((FString *)&local_e8,&local_a8);
    if (local_e8.StatData.Pad != (uchar  [8])0x0) {
      FMemory::Free((void *)local_e8.StatData.Pad);
    }
    if (bVar6) {
      this_01 = FDateTime::Now();
      pFVar14 = FDateTime::ToString((FDateTime *)this_01.Ticks,(FString *)&local_a8);
      ::FString::ConcatFF(__return_storage_ptr__,&local_98,pFVar14);
      if ((void *)CONCAT44(local_a8.DataPtr._4_4_,local_a8.DataPtr._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_a8.DataPtr._4_4_,local_a8.DataPtr._0_4_));
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar4) {
        return __return_storage_ptr__;
      }
      if (FVar18 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_e8.NameAndInfo.Number = uVar17 & 0xffff6fff | 0x6000;
      local_e8.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res18);
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_e8.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_e8.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_e8.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_e8.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_e8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      iVar7 = *piVar1;
    }
    else {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar4) {
        return __return_storage_ptr__;
      }
      if (FVar18 == (FName)0x0) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return __return_storage_ptr__;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return __return_storage_ptr__;
      }
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
        return __return_storage_ptr__;
      }
      local_e8.NameAndInfo.Number = uVar17 & 0xffff6fff | 0x6000;
      local_e8.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res18);
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_e8.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_e8.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_e8.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_e8.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_e8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      iVar7 = *piVar1;
    }
  }
  else {
    local_d8.Data = (FScriptContainerElement *)0x0;
    lVar21 = 0x2bca2875f4373fff;
    local_d0 = 0;
    iVar22 = 1;
    while( true ) {
      if ((0 < iVar7) && (iVar7 < iVar22)) goto LAB_146cabe0a;
      ::FString::PrintfImpl(&local_c8,L"%s%i");
      local_e8.NameAndInfo.Index.Value = (this->DemoSavePath).Data.ArrayNum;
      lVar19 = (longlong)(int)local_e8.NameAndInfo.Index.Value;
      local_e8.StatData.Pad[0] = '\0';
      local_e8.StatData.Pad[1] = '\0';
      local_e8.StatData.Pad[2] = '\0';
      local_e8.StatData.Pad[3] = '\0';
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      pFVar2 = (this->DemoSavePath).Data.AllocatorInstance.Data;
      if (local_e8.NameAndInfo.Index.Value == 0) {
        local_e8.NameAndInfo.Number = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e8.NameAndInfo.Index.Value,0,(ForAnyElementType *)&local_e8,
                   local_e8.NameAndInfo.Index.Value,&local_e8.NameAndInfo.Number);
        memcpy((void *)local_e8.StatData.Pad,pFVar2,lVar19 * 2);
      }
      bVar6 = FPaths::IsRelative(&local_c8);
      iVar8 = local_c8.Data.ArrayNum;
      FVar20.Data = local_c8.Data.AllocatorInstance.Data;
      if (bVar6) {
        pFVar14 = FNetworkReplayStreaming::GetReplayFileExtension(&local_78);
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_c8.Data.ArrayNum != 0) {
          FVar20.Data = local_c8.Data.AllocatorInstance.Data;
        }
        local_68.DataPtr = L"";
        if (local_e8.NameAndInfo.Index.Value != 0) {
          local_68.DataPtr = (wchar_t *)local_e8.StatData.Pad;
        }
        iVar8 = 0;
        if ((uchar  [8])local_68.DataPtr != (uchar  [8])0x0) {
          sVar15 = wcslen(local_68.DataPtr);
          iVar8 = (int)sVar15;
        }
        uVar9 = 0;
        local_68.Size = iVar8;
        local_58 = FVar20.Data;
        if (FVar20.Data != (FScriptContainerElement *)0x0) {
          sVar15 = wcslen((wchar_t *)FVar20.Data);
          uVar9 = (undefined4)sVar15;
        }
        local_50 = uVar9;
        FPaths::CombineInternal((FString *)&local_a8,&local_68,2);
        ::FString::ConcatFF(&local_b8,(FString *)&local_a8,pFVar14);
        if ((void *)CONCAT44(local_a8.DataPtr._4_4_,local_a8.DataPtr._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_a8.DataPtr._4_4_,local_a8.DataPtr._0_4_));
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_c8.Data.ArrayNum == 0) {
          local_b8.Data.ArrayMax = local_c8.Data.ArrayNum;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                     local_c8.Data.ArrayNum,&local_b8.Data.ArrayMax);
          memcpy(local_b8.Data.AllocatorInstance.Data,FVar20.Data,(longlong)iVar8 * 2);
        }
      }
      if (local_e8.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_e8.StatData.Pad);
      }
      (**(code **)((longlong)*(IFileManager *)local_res20 + 0xd8))(local_res20,&local_res18);
      iVar8 = local_c8.Data.ArrayNum;
      FVar20.Data = local_c8.Data.AllocatorInstance.Data;
      lVar19 = CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart);
      if (lVar19 == 0) break;
      if ((0 < iVar7) && (lVar19 < lVar21)) {
        local_d0 = CONCAT44(local_d0._4_4_,local_c8.Data.ArrayNum);
        if ((local_c8.Data.ArrayNum == 0) && (local_d0._4_4_ == 0)) {
          local_d0 = 0;
          lVar21 = lVar19;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_c8.Data.ArrayNum,local_d0._4_4_,&local_d8,local_c8.Data.ArrayNum,
                     (int *)((longlong)&local_d0 + 4));
          if (iVar8 != 0) {
            memcpy(local_d8.Data,FVar20.Data,(longlong)iVar8 * 2);
          }
          lVar21 = CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart);
        }
      }
      iVar22 = iVar22 + 1;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    local_d0 = CONCAT44(local_d0._4_4_,local_c8.Data.ArrayNum);
    if ((local_c8.Data.ArrayNum == 0) && (local_d0._4_4_ == 0)) {
      local_d0 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_c8.Data.ArrayNum,local_d0._4_4_,&local_d8,local_c8.Data.ArrayNum,
                 (int *)((longlong)&local_d0 + 4));
      if (local_c8.Data.ArrayNum != 0) {
        memcpy(local_d8.Data,FVar20.Data,(longlong)local_c8.Data.ArrayNum * 2);
      }
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
LAB_146cabe0a:
    FVar20.Data = local_d8.Data;
    local_d8.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar20.Data;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_d0;
    iVar7 = local_d0._4_4_;
    local_d0 = 0;
    (__return_storage_ptr__->Data).ArrayMax = iVar7;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar4) {
      return __return_storage_ptr__;
    }
    if (FVar18 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_e8.NameAndInfo.Number = uVar17 & 0xffff6fff | 0x6000;
    local_e8.NameAndInfo.Index.Value = FVar16.Value;
    QueryPerformanceCounter(&local_res18);
    local_e8.StatData.Pad[4] = '\0';
    local_e8.StatData.Pad[5] = '\0';
    local_e8.StatData.Pad[6] = '\0';
    local_e8.StatData.Pad[7] = '\0';
    local_e8.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
    local_e8.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
    local_e8.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
    local_e8.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_e8);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
  }
  if (iVar7 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return __return_storage_ptr__;
}

// GetCachedFileContents @ 146cabf20

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FLocalFileNetworkReplayStreamer::GetCachedFileContents
          (FLocalFileNetworkReplayStreamer *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  IFileManager *pIVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  
  iVar1 = (param_1->Data).ArrayNum;
  pwVar11 = L"";
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar10 = L"";
    iVar9 = 0;
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
  pTVar5 = TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->FileContentsCache,uVar4,param_1);
  if (pTVar5->ArrayNum == 0) {
    pIVar6 = IFileManager::Get();
    if ((param_1->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,pwVar11,4);
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x30))(plVar7);
      if ((lVar8 != (int)lVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)lVar8,&pTVar5->AllocatorInstance,&pTVar5->ArrayNum,&pTVar5->ArrayMax);
      (**(code **)(*plVar7 + 0x188))
                (plVar7,(pTVar5->AllocatorInstance).Data,(longlong)pTVar5->ArrayNum);
      (**(code **)*plVar7)(plVar7,1);
    }
  }
  return pTVar5;
}

// GetCheckpointArchive @ 146cac2b0

FArchive * __thiscall
FLocalFileNetworkReplayStreamer::GetCheckpointArchive(FLocalFileNetworkReplayStreamer *this)

{
  return (FArchive *)&this->CheckpointAr;
}

// GetDecompressedSizeBackCompat @ 146cac2c0

int __thiscall
FLocalFileNetworkReplayStreamer::GetDecompressedSizeBackCompat
          (FLocalFileNetworkReplayStreamer *this,FArchive *param_1)

{
  return 0;
}

// GetDefaultDemoSavePath @ 146cac2d0

FString * __cdecl FLocalFileNetworkReplayStreamer::GetDefaultDemoSavePath(void)

{
  FString *pFVar1;
  size_t sVar2;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FPaths::ProjectSavedDir();
      if ((pFVar1->Data).ArrayNum == 0) {
        local_28.DataPtr = L"";
      }
      else {
        local_28.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
      }
      local_28.Size = 0;
      if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
        sVar2 = wcslen(local_28.DataPtr);
        local_28.Size = (int)sVar2;
      }
      local_10 = 6;
      local_18 = L"Demos/";
      FPaths::CombineInternal(&DefaultDemoSavePath,&local_28,2);
      atexit(`FLocalFileNetworkReplayStreamer::GetDefaultDemoSavePath'::__l2::
             _dynamic_atexit_destructor_for__DefaultDemoSavePath__);
      _Init_thread_footer(&::_TSS0);
      return &DefaultDemoSavePath;
    }
  }
  return &DefaultDemoSavePath;
}

// GetDemoFreeStorageSpace @ 146cac3b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FLocalFileNetworkReplayStreamer::GetDemoFreeStorageSpace(ulong64 *param_1,FString *param_2)

{
  bool bVar1;
  char cVar2;
  IFileManager *pIVar3;
  wchar_t *pwVar4;
  ulong64 local_res18 [2];
  
  local_res18[1] = 0;
  local_res18[0] = 0;
  bVar1 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(param_2,local_res18 + 1,local_res18);
  if (bVar1) {
LAB_146cac482:
    *param_1 = local_res18[0];
    bVar1 = true;
  }
  else {
    pIVar3 = IFileManager::Get();
    if ((param_2->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3,pwVar4);
    if (cVar2 == '\0') {
      if ((param_2->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      cVar2 = (**(code **)((longlong)*pIVar3 + 0x60))(pIVar3,pwVar4,1);
      if (cVar2 != '\0') {
        local_res18[1] = 0;
        local_res18[0] = 0;
        bVar1 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(param_2,local_res18 + 1,local_res18);
        if (bVar1) goto LAB_146cac482;
      }
    }
    if (4 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    bVar1 = false;
  }
  return bVar1;
}

// GetDemoFullFilename @ 146cac4b0

FString * __thiscall
FLocalFileNetworkReplayStreamer::GetDemoFullFilename
          (FLocalFileNetworkReplayStreamer *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_18;
  
  local_18.Data.ArrayNum = (this->DemoSavePath).Data.ArrayNum;
  lVar1 = (longlong)local_18.Data.ArrayNum;
  _Src = (this->DemoSavePath).Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
  }
  GetDemoFullFilename(__return_storage_ptr__,&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDemoFullFilename @ 146cac570

FString * __cdecl
FLocalFileNetworkReplayStreamer::GetDemoFullFilename
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  bool bVar1;
  FString *pFVar2;
  size_t sVar3;
  wchar_t *_Str;
  int iVar4;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  bVar1 = FPaths::IsRelative(param_2);
  if (bVar1) {
    pFVar2 = FNetworkReplayStreaming::GetReplayFileExtension(&local_38);
    local_28.DataPtr = L"";
    if ((param_2->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    if ((param_1->Data).ArrayNum != 0) {
      local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar4 = 0;
    local_28.Size = iVar4;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(local_28.DataPtr);
      local_28.Size = (int)sVar3;
    }
    local_18 = (FScriptContainerElement *)_Str;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(_Str);
      iVar4 = (int)sVar3;
    }
    local_10 = iVar4;
    FPaths::CombineInternal(&local_48,&local_28,2);
    ::FString::ConcatFF(__return_storage_ptr__,&local_48,pFVar2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::FString(__return_storage_ptr__,param_2);
  }
  return __return_storage_ptr__;
}

// GetDemoPath @ 146cac670

FString * __thiscall
FLocalFileNetworkReplayStreamer::GetDemoPath
          (FLocalFileNetworkReplayStreamer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->DemoSavePath);
  return __return_storage_ptr__;
}

// GetDemoPath @ 146cac6a0

EStreamingOperationResult __thiscall
FLocalFileNetworkReplayStreamer::GetDemoPath(FLocalFileNetworkReplayStreamer *this,FString *param_1)

{
  ::FString::operator=(param_1,&this->DemoSavePath);
  return Success;
}

// GetHeaderArchive @ 146cac6d0

FArchive * __thiscall
FLocalFileNetworkReplayStreamer::GetHeaderArchive(FLocalFileNetworkReplayStreamer *this)

{
  return (FArchive *)&this->HeaderAr;
}

// GetMaxFriendlyNameSize @ 146cac720

uint __thiscall
FLocalFileNetworkReplayStreamer::GetMaxFriendlyNameSize(FLocalFileNetworkReplayStreamer *this)

{
  return 0x100;
}

// GetReplayID @ 146cac730

FString * __thiscall
FLocalFileNetworkReplayStreamer::GetReplayID
          (FLocalFileNetworkReplayStreamer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->CurrentStreamName);
  return __return_storage_ptr__;
}

// GetReplayStreamerState @ 146cac760

EReplayStreamerState __thiscall
FLocalFileNetworkReplayStreamer::GetReplayStreamerState(FLocalFileNetworkReplayStreamer *this)

{
  return this->StreamerState;
}

// GetStreamingArchive @ 146cac770

FArchive * __thiscall
FLocalFileNetworkReplayStreamer::GetStreamingArchive(FLocalFileNetworkReplayStreamer *this)

{
  return (FArchive *)&this->StreamAr;
}

// GetTotalDemoTime @ 146cac780

uint __thiscall
FLocalFileNetworkReplayStreamer::GetTotalDemoTime(FLocalFileNetworkReplayStreamer *this)

{
  return (this->CurrentReplayInfo).LengthInMS;
}

// GotoCheckpointIndex @ 146cac790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::GotoCheckpointIndex
          (FLocalFileNetworkReplayStreamer *this,int param_1,
          TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *param_2,
          EReplayCheckpointType param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined ***pppuVar4;
  code **ppcVar5;
  uint uVar6;
  undefined1 auStackY_278 [32];
  undefined **local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  FGotoResult local_228;
  FLocalFileNetworkReplayStreamer *local_208;
  int local_200;
  TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> local_1f8;
  FLocalFileNetworkReplayStreamer *local_1e0;
  int local_1d8;
  TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> local_1d0;
  FLocalFileNetworkReplayStreamer *local_1b8;
  TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> local_1b0;
  FReadAccessScope local_198 [2];
  undefined4 local_164;
  code *local_158 [2];
  undefined **local_148;
  FLocalFileNetworkReplayStreamer *local_140;
  int local_138;
  undefined4 local_134;
  undefined ***local_130;
  code *local_128 [2];
  undefined **local_118;
  FLocalFileNetworkReplayStreamer *local_110;
  int local_108;
  undefined4 local_104;
  undefined ***local_100;
  code *local_f8 [2];
  undefined **local_e8;
  code *local_e0;
  undefined ***local_d0;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  bVar3 = IsFileRequestPendingOrInProgress(this,ReadingCheckpoint);
  if (bVar3) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    local_240 = 6;
    local_248 = &___7FGotoResult__6B_;
    local_238 = 0xffffffffffffffff;
    local_230 = 0xfffffffe;
    local_22c = 0xfffffffe;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,local_198);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_248);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_198);
  }
  else if (param_1 == -1) {
    local_1b8 = this;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>(&local_1b0,param_2);
    local_c8[0] = (code *)0x0;
    local_a0 = FMemory::Malloc(0x28,8);
    ppcVar5 = local_a0 + 1;
    *local_a0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`26'::<lambda_2>,0,1>
                         ::_vftable_;
    *ppcVar5 = (code *)local_1b8;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *)
               (local_a0 + 2),&local_1b0);
    local_d0 = (undefined ***)0x0;
    if (ppcVar5 != (code **)0x0) {
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l26::<lambda_2>,void>
                    ::Call;
    }
    local_e8 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    local_e0 = `FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l26::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_f8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    AddSimpleRequestToQueue
              (this,ReadingCheckpoint,(TFunction<void___cdecl(void)> *)local_f8,
               (TFunction<void___cdecl(void)> *)local_c8);
    if (local_f8[0] != (code *)0x0) {
      pppuVar4 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar4 = local_d0;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    if (local_c8[0] != (code *)0x0) {
      ppcVar5 = local_c8 + 2;
      if (local_a0 != (code **)0x0) {
        ppcVar5 = local_a0;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b0);
  }
  else if ((param_1 < 0) || ((this->CurrentReplayInfo).Checkpoints.ArrayNum <= param_1)) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    local_228._padding_ = 6;
    local_228._padding_ = (longlong)&___7FGotoResult__6B_;
    local_228.ExtraTimeMS = -1;
    local_228.CheckpointInfo.CheckpointStartTime = 0xfffffffe;
    local_228.CheckpointInfo.CheckpointIndex = 0xfffffffe;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (param_2,&local_228);
  }
  else if (param_3 == Delta) {
    local_208 = this;
    local_200 = param_1;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>(&local_1f8,param_2);
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x30,8);
    ppcVar5 = local_70 + 1;
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`50'::<lambda_4>,0,1>
                         ::_vftable_;
    *ppcVar5 = (code *)local_208;
    *(int *)(local_70 + 2) = local_200;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *)
               (local_70 + 3),&local_1f8);
    local_130 = (undefined ***)0x0;
    if (ppcVar5 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l50::<lambda_4>,void,TLocalFileRequestCommonData<FGotoResult>_&>
                    ::Call;
    }
    local_148 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`50'::<lambda_3>,0,0>
                 ::_vftable_;
    local_134 = local_198[1].DestructionSentinel.Accessor._4_4_;
    local_158[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l50::<lambda_3>,void,TLocalFileRequestCommonData<FGotoResult>_&>
                   ::Call;
    local_140 = this;
    local_138 = param_1;
    AddGenericRequestToQueue<TLocalFileRequestCommonData<FGotoResult>_>
              (this,ReadingCheckpoint,
               (TFunction<void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)> *)local_158,
               (TFunction<void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)> *)local_98);
    if (local_158[0] != (code *)0x0) {
      pppuVar4 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar4 = local_130;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar5 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar5 = local_70;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1f8);
  }
  else {
    local_1e0 = this;
    local_1d8 = param_1;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>(&local_1d0,param_2);
    local_68[0] = (code *)0x0;
    local_40 = FMemory::Malloc(0x30,8);
    ppcVar5 = local_40 + 1;
    *local_40 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`52'::<lambda_6>,0,1>
                         ::_vftable_;
    *ppcVar5 = (code *)local_1e0;
    *(int *)(local_40 + 2) = local_1d8;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *)
               (local_40 + 3),&local_1d0);
    local_100 = (undefined ***)0x0;
    if (ppcVar5 != (code **)0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l52::<lambda_6>,void,TLocalFileRequestCommonData<FGotoResult>_&>
                    ::Call;
    }
    local_118 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::`52'::<lambda_5>,0,0>
                 ::_vftable_;
    local_104 = local_164;
    local_128[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::GotoCheckpointIndex'::__l52::<lambda_5>,void,TLocalFileRequestCommonData<FGotoResult>_&>
                   ::Call;
    uVar6 = 0;
    if (param_1 < (this->CurrentReplayInfo).Checkpoints.ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    local_110 = this;
    local_108 = param_1;
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AddCachedFileRequestToQueue<FGotoResult>
              (this,ReadingCheckpoint,
               *(int *)((this->CurrentReplayInfo).Checkpoints.AllocatorInstance.Data +
                       (longlong)param_1 * 0x50),
               (TFunction<void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)> *)local_128,
               (TFunction<void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)> *)local_68);
    if (local_128[0] != (code *)0x0) {
      pppuVar4 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar4 = local_100;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    if (local_68[0] != (code *)0x0) {
      ppcVar5 = local_68 + 2;
      if (local_40 != (code **)0x0) {
        ppcVar5 = local_40;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d0);
  }
  return;
}

// GotoTimeInMS @ 146cacc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::GotoTimeInMS
          (FLocalFileNetworkReplayStreamer *this,uint param_1,
          TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *param_2,
          EReplayCheckpointType param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  FReadAccessScope local_68;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  bVar3 = IsFileRequestPendingOrInProgress(this,ReadingCheckpoint);
  if ((bVar3) || (this->LastGotoTimeInMS != -1)) {
    if (4 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    local_48 = 6;
    local_50 = &___7FGotoResult__6B_;
    local_40 = 0xffffffffffffffff;
    local_38 = 0xfffffffe;
    local_34 = 0xfffffffe;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_68);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    return;
  }
  if (5 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  if ((this->LastGotoTimeInMS != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastGotoTimeInMS == -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                         ,0xa56,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = (this->CurrentReplayInfo).LengthInMS;
  iVar8 = -1;
  iVar4 = (this->CurrentReplayInfo).Checkpoints.ArrayNum;
  if (param_1 < uVar6) {
    uVar6 = param_1;
  }
  this->LastGotoTimeInMS = (ulonglong)uVar6;
  if (0 < iVar4) {
    uVar5 = iVar4 - 1;
    uVar6 = 0;
    if ((int)uVar5 < iVar4) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(uint *)((this->CurrentReplayInfo).Checkpoints.AllocatorInstance.Data +
                 (longlong)(int)uVar5 * 0x50 + 0x38) <= param_1) {
      iVar8 = (this->CurrentReplayInfo).Checkpoints.ArrayNum + -1;
      goto LAB_146cace35;
    }
  }
  iVar4 = (this->CurrentReplayInfo).Checkpoints.ArrayNum;
  uVar6 = 0;
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < iVar4) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (param_1 < *(uint *)((this->CurrentReplayInfo).Checkpoints.AllocatorInstance.Data +
                             lVar7 + 0x38)) {
        iVar8 = uVar6 - 1;
        break;
      }
      iVar4 = (this->CurrentReplayInfo).Checkpoints.ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x50;
    } while ((int)uVar6 < iVar4);
  }
LAB_146cace35:
                    /* WARNING: Could not recover jumptable at 0x000146cace71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))(this,iVar8,param_2,param_3);
  return;
}

// HasPendingFileRequests @ 146cacfa0

bool __thiscall
FLocalFileNetworkReplayStreamer::HasPendingFileRequests(FLocalFileNetworkReplayStreamer *this)

{
  if (((this->ActiveRequest).Object == (FQueuedLocalFileRequest *)0x0) &&
     ((this->QueuedRequests).ArrayNum < 1)) {
    return false;
  }
  return true;
}

// IsCheckpointTypeSupported @ 146cad050

bool __thiscall
FLocalFileNetworkReplayStreamer::IsCheckpointTypeSupported
          (FLocalFileNetworkReplayStreamer *this,EReplayCheckpointType param_1)

{
  if ((param_1 != Full) && (param_1 != Delta)) {
    return false;
  }
  return true;
}

// IsDataAvailable @ 146cad070

bool __thiscall
FLocalFileNetworkReplayStreamer::IsDataAvailable(FLocalFileNetworkReplayStreamer *this)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x168))();
  if (cVar1 == '\0') {
    bVar2 = IsFileRequestPendingOrInProgress(this,ReadingCheckpoint);
    if ((((!bVar2) && (this->HighPriorityEndTime == 0)) && (((this->StreamAr)._padding_ & 1) != 0))
       && ((this->StreamAr).ArchivePos < (longlong)(this->StreamAr).Buffer.ArrayNum)) {
      return 0 < (this->CurrentReplayInfo).DataChunks.ArrayNum;
    }
  }
  return false;
}

// IsDataAvailableForTimeRange @ 146cad0e0

bool __thiscall
FLocalFileNetworkReplayStreamer::IsDataAvailableForTimeRange
          (FLocalFileNetworkReplayStreamer *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  cVar3 = (**(code **)(this->_padding_ + 0x168))();
  if (cVar3 == '\0') {
    uVar1 = (this->StreamTimeRange).Max;
    uVar2 = (this->StreamTimeRange).Min;
    if ((((uVar2 <= uVar1) && (uVar2 <= param_1)) && (param_1 <= uVar1)) &&
       ((uVar2 <= param_2 && (param_2 <= uVar1)))) {
      return true;
    }
  }
  return false;
}

// IsFileRequestInProgress @ 146cad150

bool __thiscall
FLocalFileNetworkReplayStreamer::IsFileRequestInProgress(FLocalFileNetworkReplayStreamer *this)

{
  return (this->ActiveRequest).Object != (FQueuedLocalFileRequest *)0x0;
}

// IsFileRequestPendingOrInProgress @ 146cad170

bool __thiscall
FLocalFileNetworkReplayStreamer::IsFileRequestPendingOrInProgress
          (FLocalFileNetworkReplayStreamer *this,Type param_1)

{
  int iVar1;
  FQueuedLocalFileRequest *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->QueuedRequests).ArrayNum;
  pFVar6 = (this->QueuedRequests).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->QueuedRequests).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FQueuedLocalFileRequest,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (*(Type *)(*(longlong *)pFVar6 + 0x18) == param_1) {
      return true;
    }
    pFVar6 = pFVar6 + 0x10;
  }
  pFVar2 = (this->ActiveRequest).Object;
  if (pFVar2 == (FQueuedLocalFileRequest *)0x0) {
    return false;
  }
  return pFVar2->RequestType == param_1;
}

// IsLive @ 146cad230

bool __thiscall FLocalFileNetworkReplayStreamer::IsLive(FLocalFileNetworkReplayStreamer *this)

{
  return (this->CurrentReplayInfo).bIsLive;
}

// IsLoadingCheckpoint @ 146cad240

bool __thiscall
FLocalFileNetworkReplayStreamer::IsLoadingCheckpoint(FLocalFileNetworkReplayStreamer *this)

{
  bool bVar1;
  
  bVar1 = IsFileRequestPendingOrInProgress(this,ReadingCheckpoint);
  return bVar1;
}

// IsNamedStreamLive @ 146cad250

bool __thiscall
FLocalFileNetworkReplayStreamer::IsNamedStreamLive
          (FLocalFileNetworkReplayStreamer *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FLocalFileReplayInfo local_98;
  
  bVar2 = IsInGameThread();
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                       ,0x465,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_98.HeaderChunkIndex = -1;
  local_98.LengthInMS = 0;
  local_98.NetworkVersion = 0;
  local_98.Changelist = 0;
  local_98.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.FriendlyName.Data.ArrayNum = 0;
  local_98.FriendlyName.Data.ArrayMax = 0;
  local_98.Timestamp.Ticks = 0;
  local_98.TotalDataSizeInBytes = 0;
  local_98.bIsLive = false;
  local_98.bIsValid = false;
  local_98.bCompressed = false;
  local_98.bEncrypted = false;
  local_98.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.EncryptionKey.ArrayNum = 0;
  local_98.EncryptionKey.ArrayMax = 0;
  local_98.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Chunks.ArrayNum = 0;
  local_98.Chunks.ArrayMax = 0;
  local_98.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Checkpoints.ArrayNum = 0;
  local_98.Checkpoints.ArrayMax = 0;
  local_98.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Events.ArrayNum = 0;
  local_98.Events.ArrayMax = 0;
  local_98.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.DataChunks.ArrayNum = 0;
  local_98.DataChunks.ArrayMax = 0;
  bVar2 = ReadReplayInfo(this,param_1,&local_98,None);
  if ((bVar2) && (local_98.bIsLive != false)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (local_98.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.DataChunks.AllocatorInstance.Data);
  }
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)local_98.Events.AllocatorInstance.Data,local_98.Events.ArrayNum)
  ;
  if ((FLocalFileEventInfo *)local_98.Events.AllocatorInstance.Data != (FLocalFileEventInfo *)0x0) {
    FMemory::Free(local_98.Events.AllocatorInstance.Data);
  }
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)local_98.Checkpoints.AllocatorInstance.Data,
             local_98.Checkpoints.ArrayNum);
  if ((FLocalFileEventInfo *)local_98.Checkpoints.AllocatorInstance.Data !=
      (FLocalFileEventInfo *)0x0) {
    FMemory::Free(local_98.Checkpoints.AllocatorInstance.Data);
  }
  if (local_98.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Chunks.AllocatorInstance.Data);
  }
  if (local_98.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.EncryptionKey.AllocatorInstance.Data);
  }
  if (local_98.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.FriendlyName.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// IsStreaming @ 146cad3a0

bool __thiscall FLocalFileNetworkReplayStreamer::IsStreaming(FLocalFileNetworkReplayStreamer *this)

{
  return this->StreamerState != Idle;
}

// KeepReplay @ 146caf6b0

void __thiscall
FLocalFileNetworkReplayStreamer::KeepReplay
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,bool param_2,
          TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  KeepReplay_Internal(this,param_1,param_2,-1,param_3);
  return;
}

// KeepReplay @ 146caf6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::KeepReplay
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,bool param_2,int param_3,
          TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_d8 [32];
  FLocalFileNetworkReplayStreamer *pFStack_b8;
  FString FStack_b0;
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> TStack_a0;
  code *apcStack_88 [2];
  code *apcStack_78 [3];
  code **ppcStack_60;
  code *apcStack_58 [2];
  code *apcStack_48 [3];
  code **ppcStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFStack_b8 = this;
  ::FString::FString(&FStack_b0,param_1);
  apcStack_58[0] = (code *)0x0;
  ppcStack_30 = FMemory::Malloc(0x20,8);
  ppcVar1 = ppcStack_30 + 1;
  *ppcStack_30 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::KeepReplay_Internal'::`2'::<lambda_1>,0,1>
                          ::_vftable_;
  *ppcVar1 = (code *)pFStack_b8;
  ::FString::FString((FString *)(ppcStack_30 + 2),&FStack_b0);
  if (ppcVar1 != (code **)0x0) {
    apcStack_58[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::KeepReplay_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FKeepReplayResult>_&>
         ::Call;
  }
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>(&TStack_a0,param_4);
  apcStack_88[0] = (code *)0x0;
  ppcStack_60 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *)
            (ppcStack_60 + 1);
  *ppcStack_60 = (code *)&
                         ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy____UFKeepReplayResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFKeepReplayResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>(this_00,&TStack_a0);
  if (this_00 !=
      (TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *)0x0) {
    apcStack_88[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FKeepReplayResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FKeepReplayResult>_&>
         ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FKeepReplayResult>_>
            (this,KeepReplay,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FKeepReplayResult>_&)> *)
             apcStack_58,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FKeepReplayResult>_&)> *)
             apcStack_88);
  if (apcStack_88[0] != (code *)0x0) {
    ppcVar1 = apcStack_88 + 2;
    if (ppcStack_60 != (code **)0x0) {
      ppcVar1 = ppcStack_60;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&TStack_a0);
  if (apcStack_58[0] != (code *)0x0) {
    ppcVar1 = apcStack_58 + 2;
    if (ppcStack_30 != (code **)0x0) {
      ppcVar1 = ppcStack_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
  }
  return;
}

// KeepReplay_Internal @ 146caf6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::KeepReplay_Internal
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,bool param_2,int param_3,
          TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_d8 [32];
  FLocalFileNetworkReplayStreamer *local_b8;
  FString local_b0;
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> local_a0;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = this;
  ::FString::FString(&local_b0,param_1);
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  ppcVar1 = local_30 + 1;
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::KeepReplay_Internal'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *ppcVar1 = (code *)local_b8;
  ::FString::FString((FString *)(local_30 + 2),&local_b0);
  if (ppcVar1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::KeepReplay_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FKeepReplayResult>_&>
                  ::Call;
  }
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>(&local_a0,param_4);
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *)
            (local_60 + 1);
  *local_60 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy____UFKeepReplayResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFKeepReplayResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>(this_00,&local_a0);
  if (this_00 !=
      (TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>,FKeepReplayResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FKeepReplayResult>_&>
                  ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FKeepReplayResult>_>
            (this,KeepReplay,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FKeepReplayResult>_&)> *)local_58,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FKeepReplayResult>_&)> *)local_88);
  if (local_88[0] != (code *)0x0) {
    ppcVar1 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar1 = local_60;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  if (local_58[0] != (code *)0x0) {
    ppcVar1 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar1 = local_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return;
}

// OnFileRequestComplete @ 146caf930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::OnFileRequestComplete
          (FLocalFileNetworkReplayStreamer *this,TSharedPtr<FQueuedLocalFileRequest,1> *param_1)

{
  TSharedPtr<FQueuedLocalFileRequest,1> *pTVar1;
  FQueuedLocalFileRequest *pFVar2;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((param_1->Object != (FQueuedLocalFileRequest *)0x0) &&
     (pTVar1 = &this->ActiveRequest, pTVar1->Object != (FQueuedLocalFileRequest *)0x0)) {
    if (5 < (byte)LogLocalFileReplay._0_1_) {
      pFVar2 = TSharedPtr<FQueuedLocalFileRequest,1>::operator->(param_1);
      EQueuedLocalFileRequestType::ToString(pFVar2->RequestType);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FQueuedLocalFileRequest,1> *)&local_18) {
      pTVar1->Object = (FQueuedLocalFileRequest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveRequest).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return;
}

// ProcessNextFileRequest @ 146caf9c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLocalFileNetworkReplayStreamer::ProcessNextFileRequest(FLocalFileNetworkReplayStreamer *this)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedLocalFileRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FQueuedLocalFileRequest *pFVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Replays,true);
  if (((this->ActiveRequest).Object == (FQueuedLocalFileRequest *)0x0) &&
     (0 < (this->QueuedRequests).ArrayNum)) {
    pTVar2 = &this->QueuedRequests;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar3 + 8);
    pFVar5 = *(FQueuedLocalFileRequest **)pFVar3;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this->QueuedRequests).ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar3 + 8));
    iVar11 = (this->QueuedRequests).ArrayNum + -1;
    if (iVar11 != 0) {
      memmove(pFVar3,pFVar3 + 0x10,(longlong)iVar11 << 4);
    }
    piVar1 = &(this->QueuedRequests).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar2->AllocatorInstance,(this->QueuedRequests).ArrayNum,
               &(this->QueuedRequests).ArrayMax);
    if (5 < (byte)LogLocalFileReplay._0_1_) {
      if (pFVar5 == (FQueuedLocalFileRequest *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      EQueuedLocalFileRequestType::ToString(pFVar5->RequestType);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    if ((this->ActiveRequest).Object != (FQueuedLocalFileRequest *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ActiveRequest.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                         ,0xaa4,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (this->ActiveRequest).SharedReferenceCount.ReferenceController;
    (this->ActiveRequest).Object = pFVar5;
    (this->ActiveRequest).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if ((this->ActiveRequest).Object == (FQueuedLocalFileRequest *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    cVar10 = (**(code **)(((this->ActiveRequest).Object)->_padding_ + 8))();
    pFVar5 = (this->ActiveRequest).Object;
    if (cVar10 == '\0') {
      if (pFVar5 == (FQueuedLocalFileRequest *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      (**(code **)(((this->ActiveRequest).Object)->_padding_ + 0x10))();
      bVar8 = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    else {
      if (pFVar5 == (FQueuedLocalFileRequest *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      (**(code **)(((this->ActiveRequest).Object)->_padding_ + 0x18))();
      bVar8 = ProcessNextFileRequest(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  else {
    bVar8 = false;
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return bVar8;
}

// ReadReplayInfo @ 146cafc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLocalFileNetworkReplayStreamer::ReadReplayInfo
          (FLocalFileNetworkReplayStreamer *this,FArchive *param_1,FLocalFileReplayInfo *param_2,
          FLocalFileSerializationInfo *param_3,EReadReplayInfoFlags param_4)

{
  FCustomVersionContainer *this_00;
  FString *pFVar1;
  TArray<FLocalFileReplayDataInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  code *pcVar10;
  TConsoleVariableData<int> *pTVar11;
  FArchiveState *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  TOptional<FCustomVersion> *pTVar21;
  FName this_01;
  FName *pFVar22;
  FCustomVersion *pFVar23;
  FString *pFVar24;
  undefined8 uVar25;
  FLocalFileSerializationInfo *pFVar26;
  FStaticBasicLogRecord *pFVar27;
  ulonglong uVar28;
  wchar_t *pwVar29;
  ForAnyElementType FVar30;
  TArray<FLocalFileChunkInfo,TSizedDefaultAllocator<32>_> *pTVar31;
  FScriptContainerElement *pFVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  FScriptContainerElement *pFVar36;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3b8 [8];
  FLocalFileSerializationInfo *local_3b0;
  uint local_3a8;
  uint local_3a4;
  undefined1 local_3a0;
  undefined1 local_39f;
  undefined1 local_39e [2];
  uint local_39c;
  uint local_398;
  uint local_394;
  uint local_390;
  uint local_38c;
  FScriptContainerElement *local_388;
  TArray<FCustomVersion,TSizedDefaultAllocator<32>_> local_380;
  longlong local_370;
  FString local_368;
  FArchiveState *local_358;
  FString local_350;
  FString local_340;
  FString local_330;
  TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> local_320;
  undefined1 local_310 [16];
  FString local_300;
  FLocalFileReplayInfo local_2f0;
  FName local_258;
  FName local_250;
  FString local_248;
  FGuid local_238;
  FGuid local_228;
  FString local_218;
  FGuid local_208;
  FGuid local_1f8;
  FGuid local_1e8;
  FGuid local_1d8;
  FGuid local_1c8;
  FGuid local_1b8;
  FCustomVersion local_1a8;
  FArchiveState local_178;
  undefined8 local_e8;
  undefined8 local_e0;
  TOptional<FCustomVersion> local_d8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_2f0.LengthInMS = 0;
  local_2f0.NetworkVersion = 0;
  local_2f0.Changelist = 0;
  local_2f0.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.FriendlyName.Data.ArrayNum = 0;
  local_2f0.FriendlyName.Data.ArrayMax = 0;
  local_2f0.Timestamp.Ticks = 0;
  local_2f0.TotalDataSizeInBytes = 0;
  local_2f0.bIsLive = false;
  local_2f0.bIsValid = false;
  local_2f0.bCompressed = false;
  local_2f0.bEncrypted = false;
  local_2f0.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.EncryptionKey.ArrayNum = 0;
  local_2f0.EncryptionKey.ArrayMax = 0;
  local_2f0.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.Chunks.ArrayNum = 0;
  local_2f0.Chunks.ArrayMax = 0;
  local_2f0.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.Checkpoints.ArrayNum = 0;
  local_2f0.Checkpoints.ArrayMax = 0;
  local_2f0.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.Events.ArrayNum = 0;
  local_2f0.Events.ArrayMax = 0;
  local_2f0.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.DataChunks.ArrayNum = 0;
  local_2f0.DataChunks.ArrayMax = 0;
  local_2f0.HeaderChunkIndex = -1;
  local_3b0 = param_3;
  local_358 = (FArchiveState *)param_1;
  local_310._8_8_ = this;
  FLocalFileReplayInfo::operator=(param_2,&local_2f0);
  if (local_2f0.DataChunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.DataChunks.AllocatorInstance.Data);
  }
  FVar30.Data = local_2f0.Events.AllocatorInstance.Data;
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)local_2f0.Events.AllocatorInstance.Data,
             local_2f0.Events.ArrayNum);
  if ((FLocalFileEventInfo *)FVar30.Data != (FLocalFileEventInfo *)0x0) {
    FMemory::Free(FVar30.Data);
  }
  FVar30.Data = local_2f0.Checkpoints.AllocatorInstance.Data;
  DestructItems<FLocalFileEventInfo,int>
            ((FLocalFileEventInfo *)local_2f0.Checkpoints.AllocatorInstance.Data,
             local_2f0.Checkpoints.ArrayNum);
  if ((FLocalFileEventInfo *)FVar30.Data != (FLocalFileEventInfo *)0x0) {
    FMemory::Free(FVar30.Data);
  }
  if (local_2f0.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Chunks.AllocatorInstance.Data);
  }
  if (local_2f0.EncryptionKey.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.EncryptionKey.AllocatorInstance.Data);
  }
  if (local_2f0.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.FriendlyName.Data.AllocatorInstance.Data);
  }
  lVar20 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
  if (lVar20 == 0) {
    return false;
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_39c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_39c);
    }
  }
  else {
    local_39c = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  puVar3 = &param_1->field_0x2a;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_3a8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_3a8);
    }
  }
  else {
    local_3a8 = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  if (local_39c != 0x1ca2e27f) goto LAB_146cb0e8c;
  local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.ArrayNum = 0;
  local_380.ArrayMax = 0;
  if (6 < local_3a8) {
    FCustomVersionContainer::Serialize((FCustomVersionContainer *)&local_380,param_1,Latest);
    FCurrentCustomVersions::Compare(&local_320,&local_380,L"LocalFileReplay");
    iVar18 = local_320.ArrayNum;
    pFVar34 = local_320.AllocatorInstance.Data + (longlong)iVar18 * 0x10;
    uVar25 = local_320._8_8_;
    FVar30.Data = local_320.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar25 != iVar18) {
        local_3b8[0] = 0;
        `TCheckedPointerIterator<FCustomVersionDifference,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_3b8);
        uVar25 = local_320._8_8_;
      }
      if (FVar30.Data == pFVar34) {
        (**(code **)(*(longlong *)param_1 + 0x68))(param_1,&local_380);
        param_3 = local_3b0;
        if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.AllocatorInstance.Data);
          param_3 = local_3b0;
        }
        goto LAB_146cb00e2;
      }
      iVar19 = *(int *)FVar30.Data;
      if (iVar19 == 0) {
        if ((byte)LogLocalFileReplay._0_1_ < 2) goto LAB_146cb00b0;
        local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_330.Data.ArrayNum = 0;
        local_330.Data.ArrayMax = 0;
        FGuid::AppendString(*(FGuid **)(FVar30.Data + 8),&local_330,Digits);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
        local_248.Data.AllocatorInstance.Data = local_330.Data.AllocatorInstance.Data;
        goto LAB_146cb00a6;
      }
      if (iVar19 == 3) {
        if ((byte)LogLocalFileReplay._0_1_ < 2) goto LAB_146cb00b0;
        local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_340.Data.ArrayNum = 0;
        local_340.Data.ArrayMax = 0;
        FGuid::AppendString(*(FGuid **)(FVar30.Data + 8),&local_340,Digits);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
        local_248.Data.AllocatorInstance.Data = local_340.Data.AllocatorInstance.Data;
        goto LAB_146cb00a6;
      }
      if (iVar19 == 1) break;
      FVar30.Data = FVar30.Data + 0x10;
    }
    pTVar21 = FCurrentCustomVersions::Get(&local_d8,*(FGuid **)(FVar30.Data + 8));
    if ((pTVar21->bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      uVar14 = (*pcVar10)();
      return (bool)uVar14;
    }
    local_1a8.Key.A = (pTVar21->TypedValue).Key.A;
    local_1a8.Key.B = (pTVar21->TypedValue).Key.B;
    local_1a8.Key.C = (pTVar21->TypedValue).Key.C;
    local_1a8.Key.D = (pTVar21->TypedValue).Key.D;
    local_1a8.Version = (pTVar21->TypedValue).Version;
    local_1a8.ReferenceCount = (pTVar21->TypedValue).ReferenceCount;
    local_1a8.Validator = (pTVar21->TypedValue).Validator;
    local_1a8.FriendlyName = (pTVar21->TypedValue).FriendlyName;
    if (1 < (byte)LogLocalFileReplay._0_1_) {
      this_01 = FCustomVersion::GetFriendlyName(&local_1a8);
      ::FName::ToString((FName *)this_01,&local_248);
      local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_350.Data.ArrayNum = 0;
      local_350.Data.ArrayMax = 0;
      FGuid::AppendString(*(FGuid **)(FVar30.Data + 8),&local_350,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
LAB_146cb00a6:
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
    }
LAB_146cb00b0:
    FArchiveState::SetError((FArchiveState *)param_1);
    goto LAB_146cb1063;
  }
  pFVar22 = ::FName::FName(&local_258,L"LocalFileReplay");
  FArchiveState::SetCustomVersion
            ((FArchiveState *)param_1,&FLocalFileReplayCustomVersion::Guid,local_3a8,*pFVar22);
  pFVar22 = ::FName::FName(&local_250,L"LocalFileReplay");
  local_238 = FLocalFileReplayCustomVersion::Guid;
  FCustomVersionContainer::SetVersion
            ((FCustomVersionContainer *)&local_380,&local_238,local_3a8,*pFVar22);
LAB_146cb00e2:
  FVar30.Data = local_380.AllocatorInstance.Data;
  this_00 = &param_3->FileCustomVersions;
  param_3->FileVersion = local_3a8;
  if (&this_00->Versions != &local_380) {
    iVar19 = local_380.ArrayNum;
    lVar20 = (longlong)local_380.ArrayNum;
    piVar7 = &(param_3->FileCustomVersions).Versions.ArrayMax;
    iVar18 = *piVar7;
    (param_3->FileCustomVersions).Versions.ArrayNum = local_380.ArrayNum;
    if ((local_380.ArrayNum == 0) && (iVar18 == 0)) {
      *piVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_380.ArrayNum,iVar18,(ForAnyElementType *)this_00,local_380.ArrayNum,
                 piVar7);
      if (iVar19 != 0) {
        memcpy((this_00->Versions).AllocatorInstance.Data,FVar30.Data,lVar20 * 0x28);
      }
    }
  }
  piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->LengthInMS = *piVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar9 = &param_2->NetworkVersion;
  puVar8 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar9,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar9);
    }
  }
  else {
    *puVar9 = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar9 = &param_2->Changelist;
  puVar8 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar9,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar9);
    }
  }
  else {
    *puVar9 = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pTVar11 = UE::Net::LocalFileReplay::CVarMaxFriendlySerializeBytes.Ref;
  local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Data.ArrayNum = 0;
  local_368.Data.ArrayMax = 0;
  bVar13 = IsInParallelGameThread();
  if (bVar13) {
LAB_146cb02b8:
    lVar20 = 0;
  }
  else {
    bVar13 = IsInGameThread();
    lVar20 = 4;
    if (bVar13) goto LAB_146cb02b8;
  }
  uVar25 = *(undefined8 *)&param_1->field_0x38;
  *(longlong *)&param_1->field_0x38 = (longlong)*(int *)((longlong)pTVar11->ShadowedValue + lVar20);
  ::operator<<(param_1,&local_368);
  *(undefined8 *)&param_1->field_0x38 = uVar25;
  if ((param_1->field_0x29 & 2) != 0) {
    local_320.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
    if (1 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      local_320.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
    }
    goto LAB_146cb1063;
  }
  iVar18 = local_368.Data.ArrayNum + -1;
  if (local_368.Data.ArrayNum == 0) {
    iVar18 = 0;
  }
  ::FString::AssignRange
            (&param_3->FileFriendlyName,(wchar_t *)local_368.Data.AllocatorInstance.Data,iVar18);
  local_228 = FLocalFileReplayCustomVersion::Guid;
  pFVar23 = FCustomVersionContainer::GetVersion(this_00,&local_228);
  pFVar26 = param_3;
  if (pFVar23 != (FCustomVersion *)0x0) {
    pFVar26 = (FLocalFileSerializationInfo *)&pFVar23->Version;
  }
  if ((int)pFVar26->FileVersion < 1) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
  }
  else {
    pFVar24 = ::FString::TrimEnd(&local_368,&local_218);
    pFVar1 = &param_2->FriendlyName;
    if (pFVar1 != pFVar24) {
      pFVar34 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar34 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar34);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar24->Data).AllocatorInstance.Data;
      (pFVar24->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->FriendlyName).Data.ArrayNum = (pFVar24->Data).ArrayNum;
      (param_2->FriendlyName).Data.ArrayMax = (pFVar24->Data).ArrayMax;
      (pFVar24->Data).ArrayNum = 0;
      (pFVar24->Data).ArrayMax = 0;
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_398,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_398);
    }
  }
  else {
    local_398 = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  param_2->bIsLive = local_398 != 0;
  local_208 = FLocalFileReplayCustomVersion::Guid;
  pFVar23 = FCustomVersionContainer::GetVersion(this_00,&local_208);
  pFVar26 = param_3;
  if (pFVar23 != (FCustomVersion *)0x0) {
    pFVar26 = (FLocalFileSerializationInfo *)&pFVar23->Version;
  }
  if (2 < (int)pFVar26->FileVersion) {
    ::operator<<(param_1,&param_2->Timestamp);
  }
  local_1f8 = FLocalFileReplayCustomVersion::Guid;
  pFVar23 = FCustomVersionContainer::GetVersion(this_00,&local_1f8);
  pFVar26 = param_3;
  if (pFVar23 != (FCustomVersion *)0x0) {
    pFVar26 = (FLocalFileSerializationInfo *)&pFVar23->Version;
  }
  if (1 < (int)pFVar26->FileVersion) {
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar3 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_394,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_394);
      }
    }
    else {
      local_394 = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    param_2->bCompressed = local_394 != 0;
  }
  local_1e8 = FLocalFileReplayCustomVersion::Guid;
  pFVar23 = FCustomVersionContainer::GetVersion(this_00,&local_1e8);
  pFVar26 = param_3;
  if (pFVar23 != (FCustomVersion *)0x0) {
    pFVar26 = (FLocalFileSerializationInfo *)&pFVar23->Version;
  }
  if ((int)pFVar26->FileVersion < 6) {
LAB_146cb05c5:
    if (((param_2->bIsLive != false) || (param_2->bEncrypted == false)) ||
       ((param_2->EncryptionKey).ArrayNum != 0)) {
      local_370 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      cVar15 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
      while (cVar15 == '\0') {
        pTVar31 = &param_2->Chunks;
        piVar7 = &(param_2->Chunks).ArrayMax;
        uVar25 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        plVar6 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_3a4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_3a4);
          }
        }
        else {
          local_3a4 = *(uint *)*plVar6;
          *plVar6 = *plVar6 + 4;
        }
        uVar16 = (param_2->Chunks).ArrayNum;
        if (uVar16 == *piVar7) {
          uVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar31->AllocatorInstance,piVar7);
        }
        (param_2->Chunks).ArrayNum = uVar16 + 1;
        DefaultConstructItems<FLocalFileChunkInfo,int>
                  ((pTVar31->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x18,1);
        uVar17 = 0;
        if ((int)uVar16 < (param_2->Chunks).ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          uVar14 = (*pcVar10)();
          return (bool)uVar14;
        }
        pFVar34 = (pTVar31->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x18;
        *(uint *)pFVar34 = local_3a4;
        piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
        local_388 = pFVar34;
        if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar34 + 4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)(pFVar34 + 4));
          }
        }
        else {
          *(int *)(pFVar34 + 4) = *piVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        *(undefined8 *)(pFVar34 + 8) = uVar25;
        lVar20 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        *(longlong *)(pFVar34 + 0x10) = lVar20;
        if ((*(int *)(pFVar34 + 4) < 0) || (local_370 < lVar20 + *(int *)(pFVar34 + 4))) {
          if ((byte)LogLocalFileReplay._0_1_ < 2) goto LAB_146cb1057;
          pFVar27 = &::LOG_Static;
          goto LAB_146cb104b;
        }
        param_3 = local_3b0;
        if (local_3a4 == 0) {
          if (param_2->HeaderChunkIndex != -1) {
            if (1 < (byte)LogLocalFileReplay._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
            }
            goto LAB_146cb1057;
          }
          param_2->HeaderChunkIndex = uVar16;
        }
        else if (local_3a4 == 1) {
          pTVar2 = &param_2->DataChunks;
          uVar17 = (param_2->DataChunks).ArrayNum;
          piVar7 = &(param_2->DataChunks).ArrayMax;
          if (uVar17 == *piVar7) {
            uVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&pTVar2->AllocatorInstance,piVar7);
          }
          (param_2->DataChunks).ArrayNum = uVar17 + 1;
          DefaultConstructItems<FLocalFileReplayDataInfo,int>
                    ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28,1);
          uVar33 = 0;
          if ((int)uVar17 < (param_2->DataChunks).ArrayNum) {
            uVar33 = ~uVar17 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar14 = (*pcVar10)();
            return (bool)uVar14;
          }
          param_3 = local_3b0;
          pFVar34 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28;
          *(uint *)pFVar34 = uVar16;
          *(long64 *)(pFVar34 + 0x20) = param_2->TotalDataSizeInBytes;
          local_1d8 = FLocalFileReplayCustomVersion::Guid;
          pFVar23 = FCustomVersionContainer::GetVersion(&local_3b0->FileCustomVersions,&local_1d8);
          pFVar26 = param_3;
          if (pFVar23 != (FCustomVersion *)0x0) {
            pFVar26 = (FLocalFileSerializationInfo *)&pFVar23->Version;
          }
          if ((int)pFVar26->FileVersion < 4) {
            *(uint *)(pFVar34 + 0xc) = *(uint *)(local_388 + 4);
          }
          else {
            pFVar36 = pFVar34 + 4;
            puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
            if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar36,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar36);
              }
            }
            else {
              *(uint *)pFVar36 = *puVar9;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            pFVar36 = pFVar34 + 8;
            puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
            if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar36,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar36);
              }
            }
            else {
              *(uint *)pFVar36 = *puVar9;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            pFVar36 = pFVar34 + 0xc;
            puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
            if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar36,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar36);
              }
            }
            else {
              *(uint *)pFVar36 = *puVar9;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
          }
          local_1c8 = FLocalFileReplayCustomVersion::Guid;
          pFVar23 = FCustomVersionContainer::GetVersion(&param_3->FileCustomVersions,&local_1c8);
          pFVar26 = param_3;
          if (pFVar23 != (FCustomVersion *)0x0) {
            pFVar26 = (FLocalFileSerializationInfo *)&pFVar23->Version;
          }
          if ((int)pFVar26->FileVersion < 6) {
            uVar25 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
            *(undefined8 *)(pFVar34 + 0x18) = uVar25;
            if (param_2->bCompressed == false) {
              *(uint *)(pFVar34 + 0x10) = *(uint *)(pFVar34 + 0xc);
            }
            else {
              uVar16 = (**(code **)(*(longlong *)local_310._8_8_ + 0x218))(local_310._8_8_,param_1);
              *(uint *)(pFVar34 + 0x10) = uVar16;
            }
          }
          else {
            pFVar36 = pFVar34 + 0x10;
            puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
            if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar36,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar36);
              }
            }
            else {
              *(uint *)pFVar36 = *puVar9;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            uVar25 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
            *(undefined8 *)(pFVar34 + 0x18) = uVar25;
          }
          if (((int)*(uint *)(pFVar34 + 0xc) < 0) ||
             (local_370 < (longlong)(int)*(uint *)(pFVar34 + 0xc) + *(longlong *)(pFVar34 + 0x18)))
          {
            if ((byte)LogLocalFileReplay._0_1_ < 2) goto LAB_146cb1057;
            pFVar27 = &::LOG_Static;
            goto LAB_146cb104b;
          }
          if ((int)*(uint *)(pFVar34 + 0x10) < 0) {
            if ((byte)LogLocalFileReplay._0_1_ < 2) goto LAB_146cb1057;
            pFVar27 = &::LOG_Static;
            goto LAB_146cb104b;
          }
          param_2->TotalDataSizeInBytes =
               param_2->TotalDataSizeInBytes + (longlong)(int)*(uint *)(pFVar34 + 0x10);
          pFVar34 = local_388;
        }
        else if (local_3a4 == 2) {
          uVar17 = (param_2->Checkpoints).ArrayNum;
          piVar7 = &(param_2->Checkpoints).ArrayMax;
          if (uVar17 == *piVar7) {
            uVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&(param_2->Checkpoints).AllocatorInstance,piVar7);
          }
          (param_2->Checkpoints).ArrayNum = uVar17 + 1;
          DefaultConstructItems<FLocalFileEventInfo,int>
                    ((param_2->Checkpoints).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x50,1)
          ;
          uVar33 = 0;
          if ((int)uVar17 < (param_2->Checkpoints).ArrayNum) {
            uVar33 = ~uVar17 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar14 = (*pcVar10)();
            return (bool)uVar14;
          }
          pFVar36 = (param_2->Checkpoints).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x50;
          *(uint *)pFVar36 = uVar16;
          ::operator<<(param_1,(FString *)(pFVar36 + 8));
          ::operator<<(param_1,(FString *)(pFVar36 + 0x18));
          ::operator<<(param_1,(FString *)(pFVar36 + 0x28));
          pFVar34 = pFVar36 + 0x38;
          puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
          if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar34,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar34);
            }
          }
          else {
            *(uint *)pFVar34 = *puVar9;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          pFVar34 = pFVar36 + 0x3c;
          puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
          if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar34,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar34);
            }
          }
          else {
            *(uint *)pFVar34 = *puVar9;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
          if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar36 + 0x40,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)(pFVar36 + 0x40));
            }
          }
          else {
            *(uint *)(pFVar36 + 0x40) = *puVar9;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          lVar20 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
          *(longlong *)(pFVar36 + 0x48) = lVar20;
          if (((int)*(uint *)(pFVar36 + 0x40) < 0) ||
             (pFVar34 = local_388, param_3 = local_3b0,
             local_370 < lVar20 + (int)*(uint *)(pFVar36 + 0x40))) {
            if ((byte)LogLocalFileReplay._0_1_ < 2) goto LAB_146cb1057;
            pFVar27 = &::LOG_Static;
            goto LAB_146cb104b;
          }
        }
        else if (local_3a4 == 3) {
          uVar17 = (param_2->Events).ArrayNum;
          piVar7 = &(param_2->Events).ArrayMax;
          if (uVar17 == *piVar7) {
            uVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&(param_2->Events).AllocatorInstance,piVar7);
          }
          (param_2->Events).ArrayNum = uVar17 + 1;
          DefaultConstructItems<FLocalFileEventInfo,int>
                    ((param_2->Events).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x50,1);
          uVar33 = 0;
          if ((int)uVar17 < (param_2->Events).ArrayNum) {
            uVar33 = ~uVar17 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar14 = (*pcVar10)();
            return (bool)uVar14;
          }
          pFVar36 = (param_2->Events).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x50;
          *(uint *)pFVar36 = uVar16;
          ::operator<<(param_1,(FString *)(pFVar36 + 8));
          ::operator<<(param_1,(FString *)(pFVar36 + 0x18));
          ::operator<<(param_1,(FString *)(pFVar36 + 0x28));
          pFVar34 = pFVar36 + 0x38;
          puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
          if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar34,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar34);
            }
          }
          else {
            *(uint *)pFVar34 = *puVar9;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          pFVar34 = pFVar36 + 0x3c;
          puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
          if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar34,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar34);
            }
          }
          else {
            *(uint *)pFVar34 = *puVar9;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
          if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar36 + 0x40,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)(pFVar36 + 0x40));
            }
          }
          else {
            *(uint *)(pFVar36 + 0x40) = *puVar9;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          lVar20 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
          *(longlong *)(pFVar36 + 0x48) = lVar20;
          if (((int)*(uint *)(pFVar36 + 0x40) < 0) ||
             (pFVar34 = local_388, param_3 = local_3b0,
             local_370 < lVar20 + (int)*(uint *)(pFVar36 + 0x40))) {
            if ((byte)LogLocalFileReplay._0_1_ < 2) goto LAB_146cb1057;
            pFVar27 = &::LOG_Static;
            goto LAB_146cb104b;
          }
        }
        else if (local_3a4 == 0xffffffff) {
          if (5 < (byte)LogLocalFileReplay._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay)
            ;
            param_3 = local_3b0;
          }
        }
        else if (2 < (byte)LogLocalFileReplay._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
          param_3 = local_3b0;
        }
        if ((param_1->field_0x29 & 2) != 0) {
          local_320.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
          if (1 < (byte)LogLocalFileReplay._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay)
            ;
            local_320.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
          }
          goto LAB_146cb1063;
        }
        (**(code **)(*(longlong *)param_1 + 0x1b8))
                  (param_1,(longlong)*(int *)(pFVar34 + 4) + *(longlong *)(pFVar34 + 0x10));
        cVar15 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
      }
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.AllocatorInstance.Data);
      }
LAB_146cb0e8c:
      uVar16 = 0;
      local_1b8 = FLocalFileReplayCustomVersion::Guid;
      pFVar23 = FCustomVersionContainer::GetVersion(&param_3->FileCustomVersions,&local_1b8);
      if (pFVar23 != (FCustomVersion *)0x0) {
        param_3 = (FLocalFileSerializationInfo *)&pFVar23->Version;
      }
      if (((int)param_3->FileVersion < 4) && (0 < (param_2->DataChunks).ArrayNum)) {
        iVar18 = -1;
        lVar35 = 0;
        local_3b0 = (FLocalFileSerializationInfo *)CONCAT44(local_3b0._4_4_,0xffffffff);
        lVar20 = 0;
        do {
          if ((iVar18 < 0) || ((param_2->Checkpoints).ArrayNum <= (int)(uVar16 - 1))) {
            uVar33 = ~uVar16 >> 0x1f;
            uVar17 = 0;
            if ((int)uVar16 < (param_2->DataChunks).ArrayNum) {
              uVar17 = uVar33;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              uVar14 = (*pcVar10)();
              return (bool)uVar14;
            }
            *(undefined4 *)((param_2->DataChunks).AllocatorInstance.Data + lVar35 + 4) = 0;
          }
          else {
            uVar17 = 0;
            if ((int)(uVar16 - 1) < (param_2->Checkpoints).ArrayNum) {
              uVar17 = ~(uVar16 - 1) >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              uVar14 = (*pcVar10)();
              return (bool)uVar14;
            }
            uVar33 = ~uVar16 >> 0x1f;
            uVar4 = *(undefined4 *)((param_2->Checkpoints).AllocatorInstance.Data + lVar20 + -0x18);
            uVar17 = 0;
            if ((int)uVar16 < (param_2->DataChunks).ArrayNum) {
              uVar17 = uVar33;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              uVar14 = (*pcVar10)();
              return (bool)uVar14;
            }
            *(undefined4 *)((param_2->DataChunks).AllocatorInstance.Data + lVar35 + 4) = uVar4;
          }
          if (((int)uVar16 < 0) || ((param_2->Checkpoints).ArrayNum <= (int)uVar16)) {
            iVar18 = param_2->LengthInMS;
          }
          else {
            if (((uVar33 & (int)uVar16 < (param_2->Checkpoints).ArrayNum) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              uVar14 = (*pcVar10)();
              return (bool)uVar14;
            }
            iVar18 = *(int *)((param_2->Checkpoints).AllocatorInstance.Data + lVar20 + 0x38);
          }
          if (((uVar33 & (int)uVar16 < (param_2->DataChunks).ArrayNum) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar14 = (*pcVar10)();
            return (bool)uVar14;
          }
          uVar16 = uVar16 + 1;
          lVar20 = lVar20 + 0x50;
          *(int *)((param_2->DataChunks).AllocatorInstance.Data + lVar35 + 8) = iVar18;
          lVar35 = lVar35 + 0x28;
          iVar18 = (int)local_3b0 + 1;
          local_3b0 = (FLocalFileSerializationInfo *)CONCAT44(local_3b0._4_4_,iVar18);
          param_1 = (FArchive *)local_358;
        } while ((int)uVar16 < (param_2->DataChunks).ArrayNum);
      }
      iVar18 = (param_2->DataChunks).ArrayNum;
      uVar28 = (ulonglong)iVar18;
      pFVar34 = (param_2->DataChunks).AllocatorInstance.Data;
      local_3b0 = (FLocalFileSerializationInfo *)CONCAT44(local_3b0._4_4_,iVar18);
      local_358 = (FArchiveState *)(pFVar34 + uVar28 * 0x28);
      while( true ) {
        pFVar12 = local_358;
        if ((param_2->DataChunks).ArrayNum != (int)uVar28) {
          `TCheckedPointerIterator<FLocalFileReplayDataInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_3a0);
        }
        if ((FArchiveState *)pFVar34 == pFVar12) break;
        iVar18 = (param_2->DataChunks).ArrayNum;
        pFVar36 = (param_2->DataChunks).AllocatorInstance.Data;
        uVar16 = *(uint *)(pFVar34 + 4);
        uVar17 = *(uint *)(pFVar34 + 8);
        local_388 = pFVar36 + (longlong)iVar18 * 0x28;
        while( true ) {
          if ((param_2->DataChunks).ArrayNum != iVar18) {
            `TCheckedPointerIterator<FLocalFileReplayDataInfo,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_39f);
          }
          if (pFVar36 == local_388) break;
          if ((*(int *)pFVar34 != *(int *)pFVar36) && (uVar16 <= uVar17)) {
            uVar33 = *(uint *)(pFVar36 + 8);
            uVar5 = *(uint *)(pFVar36 + 4);
            if (uVar5 <= uVar33) {
              if (uVar5 < uVar16) {
                uVar5 = uVar16;
              }
              if (uVar17 < uVar33) {
                uVar33 = uVar17;
              }
              if ((uVar5 <= uVar33) && (uVar5 != uVar33)) {
                if (1 < (byte)LogLocalFileReplay._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
                }
                FArchiveState::SetError((FArchiveState *)param_1);
                return false;
              }
            }
          }
          pFVar36 = pFVar36 + 0x28;
        }
        uVar28 = (ulonglong)local_3b0 & 0xffffffff;
        pFVar34 = pFVar34 + 0x28;
      }
      iVar18 = (param_2->Checkpoints).ArrayNum;
      pFVar36 = (param_2->Checkpoints).AllocatorInstance.Data;
      local_a8.Elements._0_8_ = 0;
      local_a8.Elements._8_8_ = 0;
      local_a8.Elements._32_8_ = 0;
      local_a8.Elements._40_4_ = 0;
      pFVar34 = pFVar36 + 8;
      pFVar32 = pFVar36 + (longlong)iVar18 * 0x50;
      local_a8.Elements._44_4_ = 0x80;
      local_a8.Elements._48_4_ = 0xffffffff;
      local_a8.Elements._52_4_ = 0;
      local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_a8.HashSize = 0;
      while( true ) {
        if ((param_2->Checkpoints).ArrayNum != iVar18) {
          `TCheckedPointerIterator<FLocalFileEventInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_39e);
        }
        iVar19 = 0;
        if (pFVar36 == pFVar32) {
          if (((param_4 & SkipHeaderChunkTest) == None) &&
             ((param_2->HeaderChunkIndex < 0 ||
              ((param_2->Chunks).ArrayNum <= param_2->HeaderChunkIndex)))) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          param_2->bIsValid = bVar13;
          FArchiveState::FArchiveState(&local_178);
          local_178._padding_ = (longlong)&___7FArchiveCountMem__6B_;
          local_e8 = 0;
          local_e0 = 0;
          local_178.ArIsFilterEditorOnly = '\0';
          local_178.ArIsCountingMemory = '\x01';
          FLocalFileReplayInfo::CountBytes(param_2,(FArchive *)&local_178);
          if (5 < (byte)LogLocalFileReplay._0_1_) {
            pwVar29 = L"true";
            if (param_2->bIsValid == false) {
              pwVar29 = L"false";
            }
            ::FString::FString(&local_300,pwVar29);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay)
            ;
            if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_300.Data.AllocatorInstance.Data);
            }
          }
          if ((param_2->bIsValid == false) || (param_1->ArIsError != '\0')) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          FArchive::~FArchive((FArchive *)&local_178);
          goto LAB_146cb14cc;
        }
        if (*(int *)&pFVar34[8].field_0x0 == 0) {
          pwVar29 = L"";
        }
        else {
          pwVar29 = (wchar_t *)
                    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar34->field_0x0)->
                    AllocatorInstance).Data;
          iVar19 = *(int *)&pFVar34[8].field_0x0 + -1;
        }
        uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar29);
        iVar19 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                 FindIndexByHash<FString>(&local_a8,uVar16,(FString *)pFVar34);
        if (iVar19 != -1) break;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&local_a8,(FString *)local_310,(bool *)pFVar34);
        pFVar36 = pFVar36 + 0x50;
        pFVar34 = pFVar34 + 0x50;
      }
      if (1 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      FArchiveState::SetError((FArchiveState *)param_1);
      bVar13 = false;
LAB_146cb14cc:
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      return bVar13;
    }
    if (1 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
  }
  else {
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar3 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_390,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_390);
      }
    }
    else {
      local_390 = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    param_2->bEncrypted = local_390 != 0;
    uVar25 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar3 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_38c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_38c);
      }
    }
    else {
      local_38c = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if (local_38c < 0x1001) {
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar25);
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->EncryptionKey);
      goto LAB_146cb05c5;
    }
    if (1 < (byte)LogLocalFileReplay._0_1_) {
      pFVar27 = (FStaticBasicLogRecord *)&PTR_u_ReadReplayInfo__15144abe0;
LAB_146cb104b:
      UE::Logging::Private::BasicLog<2>(pFVar27,(FLogCategoryBase *)&LogLocalFileReplay);
    }
  }
LAB_146cb1057:
  FArchiveState::SetError((FArchiveState *)param_1);
  local_320.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
LAB_146cb1063:
  if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.AllocatorInstance.Data);
  }
  if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.AllocatorInstance.Data);
  }
  return false;
}

// ReadReplayInfo @ 146cb1500

bool __thiscall
FLocalFileNetworkReplayStreamer::ReadReplayInfo
          (FLocalFileNetworkReplayStreamer *this,FArchive *param_1,FLocalFileReplayInfo *param_2,
          EReadReplayInfoFlags param_3)

{
  bool bVar1;
  FName *pFVar2;
  FName local_58 [2];
  FGuid local_48;
  FLocalFileSerializationInfo local_38;
  
  local_38.FileVersion = 7;
  local_38.FileFriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.FileFriendlyName.Data.ArrayNum = 0;
  local_38.FileFriendlyName.Data.ArrayMax = 0;
  local_38.FileCustomVersions.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.FileCustomVersions.Versions.ArrayNum = 0;
  local_38.FileCustomVersions.Versions.ArrayMax = 0;
  pFVar2 = ::FName::FName(local_58,L"LocalFileReplay");
  local_48 = FLocalFileReplayCustomVersion::Guid;
  FCustomVersionContainer::SetVersion(&local_38.FileCustomVersions,&local_48,7,*pFVar2);
  bVar1 = ReadReplayInfo(this,param_1,param_2,&local_38,param_3);
  if (local_38.FileCustomVersions.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.FileCustomVersions.Versions.AllocatorInstance.Data);
  }
  if (local_38.FileFriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.FileFriendlyName.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ReadReplayInfo @ 146cb15d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLocalFileNetworkReplayStreamer::ReadReplayInfo
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FLocalFileReplayInfo *param_2,
          EReadReplayInfoFlags param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FGuid FVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadReplayInfo> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  FGuid local_98;
  FName local_88;
  FArchive *local_78;
  TReferenceControllerBase<1> *local_70;
  FLocalFileSerializationInfo local_68;
  
  FVar11.Value = 0;
  FVar9 = StatPtr_STAT_LocalReplay_ReadReplayInfo;
  if (StatPtr_STAT_LocalReplay_ReadReplayInfo ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadReplayInfo>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_98,"STAT_LocalReplay_ReadReplayInfo");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_ReadReplayInfo>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_ReadReplayInfo,*pFVar8
                       ,L"Local replay read info","STATGROUP_LocalReplay","STATCAT_Advanced",
                       L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar13 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0xe9);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      local_88 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = local_88.ComparisonIndex.Value;
      goto LAB_146cb171d;
    }
  }
  bVar4 = false;
  FVar13 = local_88;
LAB_146cb171d:
  pcVar2 = *(code **)(this->_padding_ + 0x1f8);
  GetDemoFullFilename(this,(FString *)&local_98,param_1);
  (*pcVar2)(this,&local_78);
  if ((void *)local_98._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  bVar7 = false;
  if (local_78 != (FArchive *)0x0) {
    local_68.FileVersion = 7;
    local_68.FileFriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FileFriendlyName.Data.ArrayNum = 0;
    local_68.FileFriendlyName.Data.ArrayMax = 0;
    local_68.FileCustomVersions.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FileCustomVersions.Versions.ArrayNum = 0;
    local_68.FileCustomVersions.Versions.ArrayMax = 0;
    pFVar8 = ::FName::FName((FName *)&local_res8.s,L"LocalFileReplay");
    local_98 = FLocalFileReplayCustomVersion::Guid;
    FCustomVersionContainer::SetVersion(&local_68.FileCustomVersions,&local_98,7,*pFVar8);
    bVar7 = ReadReplayInfo(this,local_78,param_2,&local_68,param_3);
    if (local_68.FileCustomVersions.Versions.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.FileCustomVersions.Versions.AllocatorInstance.Data);
    }
    if (local_68.FileFriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.FileFriendlyName.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.C = FVar11.Value;
      local_98.D = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      FVar6 = local_98;
      local_98.B = 0;
      local_98.A = local_res8.s.LowPart;
      local_98._8_8_ = FVar6._8_8_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_98);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar7;
}

// RefreshHeader @ 146cb18e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::RefreshHeader(FLocalFileNetworkReplayStreamer *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined **local_38;
  FLocalFileNetworkReplayStreamer *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RefreshHeader'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_50 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::RefreshHeader'::__l2::<lambda_2>,void>
                ::Call;
  local_68 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_60 = `FLocalFileNetworkReplayStreamer::RefreshHeader'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_78[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  local_30 = this;
  AddSimpleRequestToQueue
            (this,WriteHeader,(TFunction<void___cdecl(void)> *)local_78,
             (TFunction<void___cdecl(void)> *)local_48);
  if (local_78[0] != (code *)0x0) {
    pppuVar1 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar1 = local_50;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// RenameReplay @ 146cb1b40

void __thiscall
FLocalFileNetworkReplayStreamer::RenameReplay
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  RenameReplay_Internal(this,param_1,param_2,-1,param_3);
  return;
}

// RenameReplay @ 146cb1b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::RenameReplay
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  code **ppcVar1;
  undefined1 auStack_a8 [32];
  FLocalFileNetworkReplayStreamer *pFStack_88;
  FString FStack_80;
  FString FStack_70;
  code *apcStack_58 [2];
  code *apcStack_48 [3];
  code **ppcStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_88 = this;
  ::FString::FString(&FStack_80,param_1);
  ::FString::FString(&FStack_70,param_2);
  apcStack_58[0] = (code *)0x0;
  ppcVar1 = FMemory::Malloc(0x30,8);
  *ppcVar1 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplay_Internal'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar1[1] = (code *)pFStack_88;
  ppcStack_30 = ppcVar1;
  ::FString::FString((FString *)(ppcVar1 + 2),&FStack_80);
  ::FString::FString((FString *)(ppcVar1 + 4),&FStack_70);
  if (ppcVar1 + 1 != (code **)0x0) {
    apcStack_58[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::RenameReplay_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRenameReplayResult>_&>
         ::Call;
  }
  AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult>
            (this,RenameReplay,param_4,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)> *)
             apcStack_58);
  if (apcStack_58[0] != (code *)0x0) {
    ppcVar1 = apcStack_58 + 2;
    if (ppcStack_30 != (code **)0x0) {
      ppcVar1 = ppcStack_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (FStack_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data.AllocatorInstance.Data);
  }
  if (FStack_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data.AllocatorInstance.Data);
  }
  return;
}

// RenameReplayFriendlyName @ 146cb1b70

void __thiscall
FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  RenameReplayFriendlyName_Internal(this,param_1,param_2,-1,param_3);
  return;
}

// RenameReplayFriendlyName @ 146cb1b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  code **ppcVar1;
  undefined1 auStack_a8 [32];
  FLocalFileNetworkReplayStreamer *pFStack_88;
  FString FStack_80;
  FString FStack_70;
  code *apcStack_58 [2];
  code *apcStack_48 [3];
  code **ppcStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_88 = this;
  ::FString::FString(&FStack_80,param_1);
  ::FString::FString(&FStack_70,param_2);
  apcStack_58[0] = (code *)0x0;
  ppcVar1 = FMemory::Malloc(0x30,8);
  *ppcVar1 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar1[1] = (code *)pFStack_88;
  ppcStack_30 = ppcVar1;
  ::FString::FString((FString *)(ppcVar1 + 2),&FStack_80);
  ::FString::FString((FString *)(ppcVar1 + 4),&FStack_70);
  if (ppcVar1 + 1 != (code **)0x0) {
    apcStack_58[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRenameReplayResult>_&>
         ::Call;
  }
  AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult>
            (this,RenameReplayFriendlyName,param_4,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)> *)
             apcStack_58);
  if (apcStack_58[0] != (code *)0x0) {
    ppcVar1 = apcStack_58 + 2;
    if (ppcStack_30 != (code **)0x0) {
      ppcVar1 = ppcStack_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (FStack_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data.AllocatorInstance.Data);
  }
  if (FStack_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data.AllocatorInstance.Data);
  }
  return;
}

// RenameReplayFriendlyName_Internal @ 146cb1ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  code **ppcVar1;
  undefined1 auStack_a8 [32];
  FLocalFileNetworkReplayStreamer *local_88;
  FString local_80;
  FString local_70;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = this;
  ::FString::FString(&local_80,param_1);
  ::FString::FString(&local_70,param_2);
  local_58[0] = (code *)0x0;
  ppcVar1 = FMemory::Malloc(0x30,8);
  *ppcVar1 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar1[1] = (code *)local_88;
  local_30 = ppcVar1;
  ::FString::FString((FString *)(ppcVar1 + 2),&local_80);
  ::FString::FString((FString *)(ppcVar1 + 4),&local_70);
  if (ppcVar1 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::RenameReplayFriendlyName_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRenameReplayResult>_&>
                  ::Call;
  }
  AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult>
            (this,RenameReplayFriendlyName,param_4,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)> *)local_58
            );
  if (local_58[0] != (code *)0x0) {
    ppcVar1 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar1 = local_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return;
}

// RenameReplay_Internal @ 146cb1cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::RenameReplay_Internal
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  code **ppcVar1;
  undefined1 auStack_a8 [32];
  FLocalFileNetworkReplayStreamer *local_88;
  FString local_80;
  FString local_70;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = this;
  ::FString::FString(&local_80,param_1);
  ::FString::FString(&local_70,param_2);
  local_58[0] = (code *)0x0;
  ppcVar1 = FMemory::Malloc(0x30,8);
  *ppcVar1 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RenameReplay_Internal'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar1[1] = (code *)local_88;
  local_30 = ppcVar1;
  ::FString::FString((FString *)(ppcVar1 + 2),&local_80);
  ::FString::FString((FString *)(ppcVar1 + 4),&local_70);
  if (ppcVar1 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::RenameReplay_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRenameReplayResult>_&>
                  ::Call;
  }
  AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy>,FRenameReplayResult>
            (this,RenameReplay,param_4,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)> *)local_58
            );
  if (local_58[0] != (code *)0x0) {
    ppcVar1 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar1 = local_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return;
}

// RequestEventData @ 146cb1e00

void __thiscall
FLocalFileNetworkReplayStreamer::RequestEventData
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  RequestEventData_Internal(this,param_1,param_2,-1,param_3);
  return;
}

// RequestEventData @ 146cb1e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::RequestEventData
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_e8 [32];
  FLocalFileNetworkReplayStreamer *pFStack_c8;
  FString FStack_c0;
  FString FStack_b0;
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> TStack_a0;
  code *apcStack_88 [2];
  code *apcStack_78 [3];
  code **ppcStack_60;
  code *apcStack_58 [2];
  code *apcStack_48 [3];
  code **ppcStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFStack_c8 = this;
  ::FString::FString(&FStack_c0,param_1);
  ::FString::FString(&FStack_b0,param_2);
  apcStack_58[0] = (code *)0x0;
  ppcVar1 = FMemory::Malloc(0x30,8);
  *ppcVar1 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventData_Internal'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar1[1] = (code *)pFStack_c8;
  ppcStack_30 = ppcVar1;
  ::FString::FString((FString *)(ppcVar1 + 2),&FStack_c0);
  ::FString::FString((FString *)(ppcVar1 + 4),&FStack_b0);
  if (ppcVar1 + 1 != (code **)0x0) {
    apcStack_58[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::RequestEventData_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRequestEventDataResult>_&>
         ::Call;
  }
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
            (&TStack_a0,param_4);
  apcStack_88[0] = (code *)0x0;
  ppcStack_60 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> *)
            (ppcStack_60 + 1);
  *ppcStack_60 = (code *)&
                         ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy____UFRequestEventDataResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFRequestEventDataResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
            (this_00,&TStack_a0);
  if (this_00 !=
      (TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> *)0x0) {
    apcStack_88[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventDataResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRequestEventDataResult>_&>
         ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FRequestEventDataResult>_>
            (this,RequestingEvent,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventDataResult>_&)> *)
             apcStack_58,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventDataResult>_&)> *)
             apcStack_88);
  if (apcStack_88[0] != (code *)0x0) {
    ppcVar1 = apcStack_88 + 2;
    if (ppcStack_60 != (code **)0x0) {
      ppcVar1 = ppcStack_60;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&TStack_a0);
  if (apcStack_58[0] != (code *)0x0) {
    ppcVar1 = apcStack_58 + 2;
    if (ppcStack_30 != (code **)0x0) {
      ppcVar1 = ppcStack_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
  }
  if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// RequestEventData @ 146cb1e30

void __thiscall
FLocalFileNetworkReplayStreamer::RequestEventData
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  RequestEventData_Internal(this,&local_18,param_1,-1,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// RequestEventData_Internal @ 146cb1e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::RequestEventData_Internal
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_e8 [32];
  FLocalFileNetworkReplayStreamer *local_c8;
  FString local_c0;
  FString local_b0;
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> local_a0;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = this;
  ::FString::FString(&local_c0,param_1);
  ::FString::FString(&local_b0,param_2);
  local_58[0] = (code *)0x0;
  ppcVar1 = FMemory::Malloc(0x30,8);
  *ppcVar1 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventData_Internal'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar1[1] = (code *)local_c8;
  local_30 = ppcVar1;
  ::FString::FString((FString *)(ppcVar1 + 2),&local_c0);
  ::FString::FString((FString *)(ppcVar1 + 4),&local_b0);
  if (ppcVar1 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::RequestEventData_Internal'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRequestEventDataResult>_&>
                  ::Call;
  }
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
            (&local_a0,param_4);
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> *)
            (local_60 + 1);
  *local_60 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy____UFRequestEventDataResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFRequestEventDataResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
            (this_00,&local_a0);
  if (this_00 !=
      (TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy> *)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventDataResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRequestEventDataResult>_&>
                  ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FRequestEventDataResult>_>
            (this,RequestingEvent,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventDataResult>_&)> *)
             local_58,(TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventDataResult>_&)>
                       *)local_88);
  if (local_88[0] != (code *)0x0) {
    ppcVar1 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar1 = local_60;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  if (local_58[0] != (code *)0x0) {
    ppcVar1 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar1 = local_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// RequestEventGroupData @ 146cb2020

void __thiscall
FLocalFileNetworkReplayStreamer::RequestEventGroupData
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  (**(code **)(this->_padding_ + 200))();
  return;
}

// RequestEventGroupData @ 146cb2050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::RequestEventGroupData
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  code **ppcVar1;
  undefined1 auStack_e8 [32];
  FLocalFileNetworkReplayStreamer *local_c8;
  FString local_c0;
  FString local_b0;
  TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy> local_a0;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = this;
  ::FString::FString(&local_c0,param_1);
  ::FString::FString(&local_b0,param_2);
  local_58[0] = (code *)0x0;
  ppcVar1 = FMemory::Malloc(0x30,8);
  *ppcVar1 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::RequestEventGroupData'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar1[1] = (code *)local_c8;
  local_30 = ppcVar1;
  ::FString::FString((FString *)(ppcVar1 + 2),&local_c0);
  ::FString::FString((FString *)(ppcVar1 + 4),&local_b0);
  if (ppcVar1 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::RequestEventGroupData'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRequestEventGroupDataResult>_&>
                  ::Call;
  }
  TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
            (&local_a0,param_4);
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  this_00 = (TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
             *)(local_60 + 1);
  *local_60 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1____AddDelegateFileRequestToQueue_V__TDelegate___A6AXAEBUFRequestEventGroupDataResult___ZUFDefaultDelegateUserPolicy____UFRequestEventGroupDataResult___FLocalFileNetworkReplayStreamer__QEAAXW4Type_EQueuedLocalFileRequestType__AEBV__TDelegate___A6AXAEBUFRequestEventGroupDataResult___ZUFDefaultDelegateUserPolicy______QEAV__TFunction___A6AXAEAV__TLocalFileRequestCommonData_UFRequestEventGroupDataResult_____Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
            (this_00,&local_a0);
  if (this_00 !=
      (TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy> *)
      0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::AddDelegateFileRequestToQueue<TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>,FRequestEventGroupDataResult>'::__l2::<lambda_1>,void,TLocalFileRequestCommonData<FRequestEventGroupDataResult>_&>
                  ::Call;
  }
  AddGenericRequestToQueue<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
            (this,RequestingEvent,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventGroupDataResult>_&)> *
             )local_58,
             (TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventGroupDataResult>_&)> *
             )local_88);
  if (local_88[0] != (code *)0x0) {
    ppcVar1 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar1 = local_60;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  if (local_58[0] != (code *)0x0) {
    ppcVar1 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar1 = local_30;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// RequestEventGroupData @ 146cb21f0

void __thiscall
FLocalFileNetworkReplayStreamer::RequestEventGroupData
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0xd0))(this,&local_18,param_1,param_2);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SearchEvents @ 146cb22a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::SearchEvents
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_58;
  undefined **local_40;
  undefined4 local_38;
  FNetworkReplayStreamInfo *local_30;
  undefined8 local_28;
  FString *local_20;
  undefined8 local_18;
  
  if (4 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  local_38 = 1;
  local_40 = &___7FSearchEventsResult__6B_;
  local_30 = (FNetworkReplayStreamInfo *)0x0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_58);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_40);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  DestructItems<FNetworkReplayStreamInfo,int>(local_30,(int)local_28);
  if (local_30 != (FNetworkReplayStreamInfo *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// SetDemoPath @ 146cb2590

EStreamingOperationResult __thiscall
FLocalFileNetworkReplayStreamer::SetDemoPath(FLocalFileNetworkReplayStreamer *this,FString *param_1)

{
  if ((this->CurrentStreamName).Data.ArrayNum < 2) {
    ::FString::operator=(&this->DemoSavePath,param_1);
    return Success;
  }
  return Unspecified;
}

// SetHighPriorityTimeRange @ 146cb25c0

void __thiscall
FLocalFileNetworkReplayStreamer::SetHighPriorityTimeRange
          (FLocalFileNetworkReplayStreamer *this,uint param_1,uint param_2)

{
  this->HighPriorityEndTime = param_2;
  return;
}

// SetLastError @ 146cb25d0

void __thiscall
FLocalFileNetworkReplayStreamer::SetLastError
          (FLocalFileNetworkReplayStreamer *this,TNetResult<ELocalFileReplayResult> *param_1)

{
  (**(code **)(this->_padding_ + 0x178))();
  CancelStreamingRequests(this);
  return;
}

// SetTimeBufferHintSeconds @ 146cb2600

void __thiscall
FLocalFileNetworkReplayStreamer::SetTimeBufferHintSeconds
          (FLocalFileNetworkReplayStreamer *this,float param_1)

{
  return;
}

// StartStreaming @ 146cb2610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::StartStreaming
          (FLocalFileNetworkReplayStreamer *this,FStartStreamingParameters *param_1,
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy> *param_2
          )

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  code **ppcVar6;
  longlong lVar7;
  undefined1 auStackY_308 [32];
  ForAnyElementType local_2c8;
  int local_2c0;
  int local_2bc;
  FString local_2b8;
  undefined8 local_2a8;
  ulong64 local_2a0;
  undefined **local_298;
  undefined4 local_290;
  char local_288;
  FLocalFileNetworkReplayStreamer *local_280;
  FStartStreamingParameters local_278;
  ForAnyElementType local_218;
  undefined8 local_210;
  FLocalFileNetworkReplayStreamer *local_208;
  TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy> local_200;
  FLocalFileNetworkReplayStreamer *local_1e8;
  TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy> local_1e0;
  FReadAccessScope local_1c8;
  FReadAccessScope local_1b0;
  FLocalFileNetworkReplayStreamer *local_198;
  FStartStreamingParameters local_190;
  FReadAccessScope local_130;
  code *local_118 [2];
  code *local_108 [3];
  code **local_f0;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_298 = &___7FStartStreamingResult__6B_;
  local_288 = param_1->bRecord;
  local_290 = 6;
  if (this->StreamerState == Idle) {
    if ((this->ActiveRequest).Object == (FQueuedLocalFileRequest *)0x0) {
      if (((param_1->CustomName).Data.ArrayNum < 2) && ((bool)local_288 == false)) {
        local_290 = 2;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_1b0);
        if ((*(int *)&param_2->field_0x10 != 0) &&
           (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x68))(plVar3,&local_298);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1b0);
      }
      else {
        (**(code **)((this->StreamAr)._padding_ + 200))(&this->StreamAr,(bool)local_288 == false);
        (**(code **)((this->StreamAr)._padding_ + 0xd8))
                  (&this->StreamAr,~(byte)(this->StreamAr)._padding_ & 1);
        lVar7 = (this->HeaderAr)._padding_;
        (this->StreamAr).bAtEndOfReplay = false;
        (**(code **)(lVar7 + 200))(&this->HeaderAr,(byte)(this->StreamAr)._padding_ & 1);
        (**(code **)((this->HeaderAr)._padding_ + 0xd8))
                  (&this->HeaderAr,(byte)(this->StreamAr)._padding_ >> 2 & 1);
        (**(code **)((this->CheckpointAr)._padding_ + 200))
                  (&this->CheckpointAr,(byte)(this->StreamAr)._padding_ & 1);
        (**(code **)((this->CheckpointAr)._padding_ + 0xd8))
                  (&this->CheckpointAr,(byte)(this->StreamAr)._padding_ >> 2 & 1);
        (this->CurrentReplayInfo).LengthInMS = 0;
        (this->StreamTimeRange).Min = 0;
        (this->StreamTimeRange).Max = 0;
        this->StreamDataOffset = 0;
        this->StreamChunkIndex = 0;
        local_2a8 = 0;
        if (param_1->bRecord == false) {
          this->StreamerState = Playback;
          local_208 = this;
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                    (&local_200,param_2);
          local_e8[0] = (code *)0x0;
          local_c0 = FMemory::Malloc(0x28,8);
          ppcVar6 = local_c0 + 1;
          *local_c0 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`50'::<lambda_2>,0,1>
                               ::_vftable_;
          *ppcVar6 = (code *)local_208;
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                      *)(local_c0 + 2),&local_200);
          if (ppcVar6 != (code **)0x0) {
            local_e8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_2>,void,TLocalFileRequestCommonData<FStartStreamingResult>_&>
                          ::Call;
          }
          local_198 = this;
          FStartStreamingParameters::FStartStreamingParameters(&local_190,param_1);
          local_118[0] = (code *)0x0;
          local_f0 = FMemory::Malloc(0x70,8);
          ppcVar6 = local_f0 + 1;
          *local_f0 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`50'::<lambda_1>,0,1>
                               ::_vftable_;
          *ppcVar6 = (code *)local_198;
          FStartStreamingParameters::FStartStreamingParameters
                    ((FStartStreamingParameters *)(local_f0 + 2),&local_190);
          if (ppcVar6 != (code **)0x0) {
            local_118[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l50::<lambda_1>,void,TLocalFileRequestCommonData<FStartStreamingResult>_&>
                           ::Call;
          }
          AddGenericRequestToQueue<TLocalFileRequestCommonData<FStartStreamingResult>_>
                    (this,StartPlayback,
                     (TFunction<void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)>
                      *)local_118,
                     (TFunction<void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)>
                      *)local_e8);
          if (local_118[0] != (code *)0x0) {
            ppcVar6 = local_118 + 2;
            if (local_f0 != (code **)0x0) {
              ppcVar6 = local_f0;
            }
            (**(code **)(*ppcVar6 + 0x10))();
          }
          if (local_190.ReplayVersion.AppString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.ReplayVersion.AppString.Data.AllocatorInstance.Data);
          }
          if (local_190.UserIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.UserIndices.AllocatorInstance.Data);
          }
          if (local_190.DemoURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.DemoURL.Data.AllocatorInstance.Data);
          }
          if (local_190.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_190.FriendlyName.Data.AllocatorInstance.Data);
          }
          if (local_190.CustomName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.CustomName.Data.AllocatorInstance.Data);
          }
          if (local_e8[0] != (code *)0x0) {
            ppcVar6 = local_e8 + 2;
            if (local_c0 != (code **)0x0) {
              ppcVar6 = local_c0;
            }
            (**(code **)(*ppcVar6 + 0x10))();
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_200);
        }
        else {
          this->StreamerState = Recording;
          local_2b8.Data.ArrayNum = (this->DemoSavePath).Data.ArrayNum;
          lVar7 = (longlong)local_2b8.Data.ArrayNum;
          pFVar4 = (this->DemoSavePath).Data.AllocatorInstance.Data;
          local_2a0 = 0;
          local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_2b8.Data.ArrayNum == 0) {
            local_2b8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_2b8.Data.ArrayNum,0,(ForAnyElementType *)&local_2b8,
                       local_2b8.Data.ArrayNum,&local_2b8.Data.ArrayMax);
            memcpy(local_2b8.Data.AllocatorInstance.Data,pFVar4,lVar7 * 2);
          }
          bVar5 = GetDemoFreeStorageSpace(&local_2a0,&local_2b8);
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          if ((bVar5) && (4 < (byte)LogLocalFileReplay._0_1_)) {
            local_2c0 = (this->DemoSavePath).Data.ArrayNum;
            lVar7 = (longlong)local_2c0;
            pFVar4 = (this->DemoSavePath).Data.AllocatorInstance.Data;
            local_2c8.Data = (FScriptContainerElement *)0x0;
            if (local_2c0 == 0) {
              local_2bc = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_2c0,0,&local_2c8,local_2c0,&local_2bc);
              memcpy(local_2c8.Data,pFVar4,lVar7 * 2);
            }
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay)
            ;
            if (local_2c8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data);
            }
          }
          pTVar1 = &(this->CurrentReplayInfo).EncryptionKey;
          iVar2 = (this->CurrentReplayInfo).EncryptionKey.ArrayMax;
          (this->CurrentReplayInfo).EncryptionKey.ArrayNum = 0;
          if (iVar2 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0,&pTVar1->AllocatorInstance,0,
                       &(this->CurrentReplayInfo).EncryptionKey.ArrayMax);
          }
          bVar5 = AllowEncryptedWrite(this);
          if (bVar5) {
            (**(code **)(this->_padding_ + 0x1e0))(this,pTVar1);
          }
          local_1e8 = this;
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                    (&local_1e0,param_2);
          local_88[0] = (code *)0x0;
          local_60 = FMemory::Malloc(0x28,8);
          ppcVar6 = local_60 + 1;
          *local_60 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`52'::<lambda_4>,0,1>
                               ::_vftable_;
          *ppcVar6 = (code *)local_1e8;
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>
                      *)(local_60 + 2),&local_1e0);
          if (ppcVar6 != (code **)0x0) {
            local_88[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_4>,void,TLocalFileRequestCommonData<FStartStreamingResult>_&>
                          ::Call;
          }
          local_280 = this;
          FStartStreamingParameters::FStartStreamingParameters(&local_278,param_1);
          iVar2 = (this->CurrentReplayInfo).EncryptionKey.ArrayNum;
          pFVar4 = (pTVar1->AllocatorInstance).Data;
          local_218.Data = (FScriptContainerElement *)0x0;
          local_210 = CONCAT44(local_210._4_4_,iVar2);
          if (iVar2 == 0) {
            local_210 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar2,0,&local_218,iVar2,(int *)((longlong)&local_210 + 4));
            memcpy(local_218.Data,pFVar4,(longlong)iVar2);
          }
          local_b8[0] = (code *)0x0;
          ppcVar6 = FMemory::Malloc(0x80,8);
          *ppcVar6 = (code *)&UE::Core::Private::Function::
                              TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StartStreaming'::`52'::<lambda_3>,0,1>
                              ::_vftable_;
          ppcVar6[1] = (code *)local_280;
          local_90 = ppcVar6;
          FStartStreamingParameters::FStartStreamingParameters
                    ((FStartStreamingParameters *)(ppcVar6 + 2),&local_278);
          ppcVar6[0xe] = (code *)0x0;
          ppcVar6[0xe] = (code *)local_218.Data;
          local_218.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(ppcVar6 + 0xf) = (undefined4)local_210;
          *(undefined4 *)((longlong)ppcVar6 + 0x7c) = local_210._4_4_;
          if (ppcVar6 + 1 != (code **)0x0) {
            local_b8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::StartStreaming'::__l52::<lambda_3>,void,TLocalFileRequestCommonData<FStartStreamingResult>_&>
                          ::Call;
          }
          local_210 = 0;
          AddGenericRequestToQueue<TLocalFileRequestCommonData<FStartStreamingResult>_>
                    (this,StartRecording,
                     (TFunction<void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)>
                      *)local_b8,
                     (TFunction<void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)>
                      *)local_88);
          if (local_b8[0] != (code *)0x0) {
            ppcVar6 = local_b8 + 2;
            if (local_90 != (code **)0x0) {
              ppcVar6 = local_90;
            }
            (**(code **)(*ppcVar6 + 0x10))();
          }
          if (local_218.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data);
          }
          if (local_278.ReplayVersion.AppString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.ReplayVersion.AppString.Data.AllocatorInstance.Data);
          }
          if (local_278.UserIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.UserIndices.AllocatorInstance.Data);
          }
          if (local_278.DemoURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.DemoURL.Data.AllocatorInstance.Data);
          }
          if (local_278.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_278.FriendlyName.Data.AllocatorInstance.Data);
          }
          if (local_278.CustomName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.CustomName.Data.AllocatorInstance.Data);
          }
          if (local_88[0] != (code *)0x0) {
            ppcVar6 = local_88 + 2;
            if (local_60 != (code **)0x0) {
              ppcVar6 = local_60;
            }
            (**(code **)(*ppcVar6 + 0x10))();
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1e0);
          (**(code **)(this->_padding_ + 0xe8))(this);
        }
      }
    }
    else {
      if (2 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_1c8);
      if ((*(int *)&param_2->field_0x10 != 0) &&
         (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,&local_298);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1c8);
    }
  }
  else {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_130);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_298);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_130);
  }
  return;
}

// StopStreaming @ 146cb2e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileNetworkReplayStreamer::StopStreaming(FLocalFileNetworkReplayStreamer *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined1 auStack_108 [48];
  code *local_d8 [2];
  undefined **local_c8;
  FLocalFileNetworkReplayStreamer *local_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined ***local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FLocalFileNetworkReplayStreamer *local_90;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined **local_38;
  FLocalFileNetworkReplayStreamer *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  bVar3 = IsFileRequestPendingOrInProgress(this,StartPlayback);
  if ((bVar3) || (bVar3 = IsFileRequestPendingOrInProgress(this,StartRecording), bVar3)) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    CancelStreamingRequests(this);
    if ((this->StreamerState != Idle) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsStreaming()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                           ,0x3ed,L""), bVar3)) {
code_r0x000146cb30ab:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (this->StreamerState == Idle) {
    if (4 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    if ((this->bStopStreamingCalled != false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bStopStreamingCalled == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                           ,0x3f4,L""), bVar3)) goto code_r0x000146cb30ab;
  }
  else if (this->bStopStreamingCalled == false) {
    this->bStopStreamingCalled = true;
    if (this->StreamerState == Recording) {
      uVar1 = (this->CurrentReplayInfo).LengthInMS;
      FlushStream(this,uVar1);
      local_80 = (undefined ***)0x0;
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::`82'::<lambda_2>,0,0>
                  ::_vftable_;
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l82::<lambda_2>,void,enum_ELocalFileReplayResult_&>
                    ::Call;
      local_b0 = (undefined ***)0x0;
      local_c8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::`82'::<lambda_1>,0,0>
                  ::_vftable_;
      local_b4 = auStack_108._44_4_;
      local_d8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l82::<lambda_1>,void,enum_ELocalFileReplayResult_&>
                    ::Call;
      local_c0 = this;
      local_b8 = uVar1;
      local_90 = this;
      AddGenericRequestToQueue<enum_ELocalFileReplayResult>
                (this,StopRecording,(TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_d8,
                 (TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_a8);
      if (local_d8[0] != (code *)0x0) {
        pppuVar4 = &local_c8;
        if (local_b0 != (undefined ***)0x0) {
          pppuVar4 = local_b0;
        }
        (*(code *)(*pppuVar4)[2])();
      }
      if (local_a8[0] != (code *)0x0) {
        pppuVar4 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar4 = local_80;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::StopStreaming'::`2'::<lambda_4>,0,0>
                ::_vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::StopStreaming'::__l2::<lambda_4>,void>
                  ::Call;
    local_50 = (undefined ***)0x0;
    local_68 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
    local_60 = `FLocalFileNetworkReplayStreamer::StopStreaming'::__l2::<lambda_3>::
               <lambda_invoker_cdecl>;
    local_78[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    local_30 = this;
    AddSimpleRequestToQueue
              (this,StopStreaming,(TFunction<void___cdecl(void)> *)local_78,
               (TFunction<void___cdecl(void)> *)local_48);
    if (local_78[0] != (code *)0x0) {
      pppuVar4 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar4 = local_50;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    if (local_48[0] != (code *)0x0) {
      pppuVar4 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar4 = local_20;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  else if (4 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  return;
}

// SupportsCompression @ 146cb30d0

bool __thiscall
FLocalFileNetworkReplayStreamer::SupportsCompression(FLocalFileNetworkReplayStreamer *this)

{
  return false;
}

// SupportsEncryption @ 146cb30e0

bool __thiscall
FLocalFileNetworkReplayStreamer::SupportsEncryption(FLocalFileNetworkReplayStreamer *this)

{
  return false;
}

// Tick @ 146cb3110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLocalFileNetworkReplayStreamer::Tick(FLocalFileNetworkReplayStreamer *this,float param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long64 lVar5;
  code *pcVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  undefined ***pppuVar9;
  double dVar10;
  undefined1 auStackY_d8 [32];
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FString local_98;
  code *local_88 [2];
  undefined **local_78;
  FLocalFileNetworkReplayStreamer *local_70;
  long64 local_68;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  FLocalFileNetworkReplayStreamer *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar8 = ProcessNextFileRequest(this);
  if (((bVar8) && ((this->ActiveRequest).Object == (FQueuedLocalFileRequest *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsFileRequestInProgress()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                         ,0xabe,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = UE::Net::LocalFileReplay::CVarChunkUploadDelayInSeconds.Ref;
  if (this->bStopStreamingCalled == false) {
    if (this->StreamerState == Recording) {
      if (((this->ActiveRequest).Object == (FQueuedLocalFileRequest *)0x0) &&
         ((this->QueuedRequests).ArrayNum < 1)) {
        bVar8 = IsInParallelGameThread();
        if ((!bVar8) &&
           ((bVar8 = IsInGameThread(), !bVar8 &&
            (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar8)))) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar1 = pTVar7->ShadowedValue[0];
        QueryPerformanceCounter(&local_a8);
        if ((double)fVar1 <
            ((double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000) - this->LastChunkTime) {
          FlushStream(this,(this->CurrentReplayInfo).LengthInMS);
        }
      }
    }
    else if ((this->StreamerState == Playback) &&
            (bVar8 = IsFileRequestPendingOrInProgress(this,StartPlayback), !bVar8)) {
      uVar2 = this->HighPriorityEndTime;
      if (uVar2 != 0) {
        uVar3 = (this->StreamTimeRange).Max;
        uVar4 = (this->StreamTimeRange).Min;
        if (((uVar4 <= uVar3) && (uVar4 <= uVar2)) && (uVar2 <= uVar3)) {
          this->HighPriorityEndTime = 0;
        }
      }
      if (((this->CurrentReplayInfo).DataChunks.ArrayNum <= this->StreamChunkIndex) &&
         ((this->CurrentReplayInfo).bIsLive == false)) {
        (this->StreamAr).bAtEndOfReplay = true;
      }
      ConditionallyLoadNextChunk(this);
      if (((((this->ActiveRequest).Object == (FQueuedLocalFileRequest *)0x0) &&
           ((this->QueuedRequests).ArrayNum < 1)) && ((this->CurrentReplayInfo).bIsLive != false))
         && (QueryPerformanceCounter(&local_a0),
            __real_4024000000000000 <
            ((double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000) - this->LastRefreshTime)) {
        lVar5 = (this->CurrentReplayInfo).TotalDataSizeInBytes;
        GetDemoFullFilename(this,&local_98,&this->CurrentStreamName);
        local_60 = (undefined ***)0x0;
        local_78 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::`11'::<lambda_2>,0,0>
                    ::_vftable_;
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::__l11::<lambda_2>,void,enum_ELocalFileReplayResult_&>
                      ::Call;
        local_48 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::`11'::<lambda_1>,0,0>
                    ::_vftable_;
        local_30 = (undefined ***)0x0;
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::ConditionallyRefreshReplayInfo'::__l11::<lambda_1>,void,enum_ELocalFileReplayResult_&>
                      ::Call;
        local_70 = this;
        local_68 = lVar5;
        local_40 = this;
        AddGenericRequestToQueue<enum_ELocalFileReplayResult>
                  (this,RefreshingLiveStream,
                   (TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_58,
                   (TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_88);
        if (local_58[0] != (code *)0x0) {
          pppuVar9 = &local_48;
          if (local_30 != (undefined ***)0x0) {
            pppuVar9 = local_30;
          }
          (*(code *)(*pppuVar9)[2])();
        }
        if (local_88[0] != (code *)0x0) {
          pppuVar9 = &local_78;
          if (local_60 != (undefined ***)0x0) {
            pppuVar9 = local_60;
          }
          (*(code *)(*pppuVar9)[2])();
        }
        dVar10 = FWindowsPlatformTime::Seconds();
        this->LastRefreshTime = dVar10;
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// UpdateCurrentReplayInfo @ 146cb3580

void __thiscall
FLocalFileNetworkReplayStreamer::UpdateCurrentReplayInfo
          (FLocalFileNetworkReplayStreamer *this,FLocalFileReplayInfo *param_1,
          EUpdateReplayInfoFlags param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  if (param_1->bIsValid == false) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4562395075362943375>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                       ,0xe71,"ReplayInfo.bIsValid");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar2 = (this->CurrentReplayInfo).EncryptionKey.ArrayNum;
    pFVar3 = (this->CurrentReplayInfo).EncryptionKey.AllocatorInstance.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = CONCAT44(local_20._4_4_,iVar2);
    if (iVar2 == 0) {
      local_20 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar2,0,&local_28,iVar2,(int *)((longlong)&local_20 + 4));
      memcpy(local_28.Data,pFVar3,(longlong)iVar2);
    }
    iVar2 = (this->CurrentReplayInfo).LengthInMS;
    FLocalFileReplayInfo::operator=(&this->CurrentReplayInfo,param_1);
    if ((param_2 & FullUpdate) == None) {
      pTVar1 = &(this->CurrentReplayInfo).EncryptionKey;
      (this->CurrentReplayInfo).LengthInMS = iVar2;
      if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_28) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = local_28.Data;
        (this->CurrentReplayInfo).EncryptionKey.ArrayNum = (int)local_20;
        (this->CurrentReplayInfo).EncryptionKey.ArrayMax = local_20._4_4_;
        local_20 = 0;
        local_28.Data = (FScriptContainerElement *)0x0;
      }
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

// UpdatePlaybackTime @ 146cb36f0

void __thiscall
FLocalFileNetworkReplayStreamer::UpdatePlaybackTime
          (FLocalFileNetworkReplayStreamer *this,uint param_1)

{
  return;
}

// UpdateTotalDemoTime @ 146cb3700

void __thiscall
FLocalFileNetworkReplayStreamer::UpdateTotalDemoTime
          (FLocalFileNetworkReplayStreamer *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->StreamerState == Recording) {
    (this->CurrentReplayInfo).LengthInMS = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StreamerState == EReplayStreamerState::Recording",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                     ,0x43c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->CurrentReplayInfo).LengthInMS = param_1;
  return;
}

// WriteHeader @ 146cb3770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLocalFileNetworkReplayStreamer::WriteHeader(FLocalFileNetworkReplayStreamer *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  code **ppcVar7;
  undefined ***pppuVar8;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98 [2];
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  code *local_58 [2];
  undefined **local_48;
  FLocalFileNetworkReplayStreamer *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((((this->StreamAr)._padding_ & 4) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamAr.IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                         ,0xc48,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->CurrentStreamName).Data.ArrayNum < 2) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
  }
  else {
    lVar6 = (**(code **)((this->HeaderAr)._padding_ + 0x30))();
    if (lVar6 == 0) {
      if (2 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
    }
    else if (this->StreamerState == Idle) {
      if (2 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
    }
    else {
      pFVar3 = (this->HeaderAr).Buffer.AllocatorInstance.Data;
      (this->HeaderAr).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (this->HeaderAr).Buffer.ArrayMax;
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::`2'::<lambda_2>,0,0>
                  ::_vftable_;
      local_30 = (undefined ***)0x0;
      local_88[0] = (code *)0x0;
      iVar2 = (this->HeaderAr).Buffer.ArrayNum;
      (this->HeaderAr).Buffer.ArrayNum = 0;
      (this->HeaderAr).Buffer.ArrayMax = 0;
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_2>,void,enum_ELocalFileReplayResult_&>
                    ::Call;
      local_40 = this;
      local_60 = FMemory::Malloc(0x20,8);
      local_60[1] = (code *)this;
      local_60[2] = (code *)pFVar3;
      *local_60 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FLocalFileNetworkReplayStreamer::WriteHeader'::`2'::<lambda_1>,0,1>
                           ::_vftable_;
      *(int *)(local_60 + 3) = iVar2;
      *(int *)((longlong)local_60 + 0x1c) = iVar1;
      if (local_60 != (code **)&DAT_fffffffffffffff8) {
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FLocalFileNetworkReplayStreamer::WriteHeader'::__l2::<lambda_1>,void,enum_ELocalFileReplayResult_&>
                      ::Call;
      }
      AddGenericRequestToQueue<enum_ELocalFileReplayResult>
                (this,WritingHeader,(TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_88,
                 (TFunction<void___cdecl(ELocalFileReplayResult_&)> *)local_58);
      if (local_88[0] != (code *)0x0) {
        ppcVar7 = local_88 + 2;
        if (local_60 != (code **)0x0) {
          ppcVar7 = local_60;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
      if (local_58[0] != (code *)0x0) {
        pppuVar8 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar8 = local_30;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      (**(code **)((this->HeaderAr)._padding_ + 0xc0))(&this->HeaderAr);
      QueryPerformanceCounter(local_98);
      this->LastChunkTime =
           (double)local_98[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
    }
  }
  return;
}

// WriteReplayInfo @ 146cb39f0

bool __thiscall
FLocalFileNetworkReplayStreamer::WriteReplayInfo
          (FLocalFileNetworkReplayStreamer *this,FArchive *param_1,FLocalFileReplayInfo *param_2)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res20;
  FGuid local_48;
  FLocalFileSerializationInfo local_38;
  
  local_38.FileVersion = 7;
  local_38.FileFriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.FileFriendlyName.Data.ArrayNum = 0;
  local_38.FileFriendlyName.Data.ArrayMax = 0;
  local_38.FileCustomVersions.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.FileCustomVersions.Versions.ArrayNum = 0;
  local_38.FileCustomVersions.Versions.ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res20,L"LocalFileReplay");
  local_48 = FLocalFileReplayCustomVersion::Guid;
  FCustomVersionContainer::SetVersion(&local_38.FileCustomVersions,&local_48,7,*pFVar2);
  bVar1 = WriteReplayInfo(this,param_1,param_2,&local_38);
  if (local_38.FileCustomVersions.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_38.FileCustomVersions.Versions.AllocatorInstance.Data);
  }
  if (local_38.FileFriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.FileFriendlyName.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// WriteReplayInfo @ 146cb3ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

bool __thiscall
FLocalFileNetworkReplayStreamer::WriteReplayInfo
          (FLocalFileNetworkReplayStreamer *this,FArchive *param_1,FLocalFileReplayInfo *param_2,
          FLocalFileSerializationInfo *param_3)

{
  byte bVar1;
  ushort uVar2;
  wchar_t wVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  code *pcVar9;
  FLocalFileNetworkReplayStreamer *this_00;
  undefined1 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FCustomVersion *pFVar15;
  FString *pFVar16;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  size_t sVar19;
  longlong lVar20;
  FLocalFileSerializationInfo *pFVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  wchar_t *pwVar24;
  longlong lVar25;
  byte *pbVar26;
  uint uVar27;
  FCustomVersionContainer *pFVar28;
  undefined1 auStackY_1f8 [32];
  FString local_1c8;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  byte *local_1a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1a0;
  FString local_190;
  FLocalFileNetworkReplayStreamer *local_180;
  FString local_178;
  FGuid local_168;
  FGuid local_158;
  FString local_148;
  FGuid local_138;
  FGuid local_128;
  FGuid local_118;
  FGuid local_108;
  FScriptContainerElement local_f8 [128];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar28 = &param_3->FileCustomVersions;
  local_168 = FLocalFileReplayCustomVersion::Guid;
  local_180 = this;
  pFVar15 = FCustomVersionContainer::GetVersion(pFVar28,&local_168);
  pFVar21 = param_3;
  if (pFVar15 != (FCustomVersion *)0x0) {
    pFVar21 = (FLocalFileSerializationInfo *)&pFVar15->Version;
  }
  if ((int)pFVar21->FileVersion < 1) {
    if (2 < (byte)LogLocalFileReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
    }
    return false;
  }
  (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,0);
  plVar5 = *(longlong **)&param_1->field_0x8;
  local_1b8 = 0x1ca2e27f;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1b8);
    }
  }
  else {
    local_1b8 = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  pbVar26 = &param_1->field_0x2a;
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  local_1a8 = pbVar26;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((*pbVar26 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_3->FileVersion);
    }
  }
  else {
    param_3->FileVersion = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_158 = FLocalFileReplayCustomVersion::Guid;
  pFVar15 = FCustomVersionContainer::GetVersion(pFVar28,&local_158);
  pFVar21 = param_3;
  if (pFVar15 != (FCustomVersion *)0x0) {
    pFVar21 = (FLocalFileSerializationInfo *)&pFVar15->Version;
  }
  if (6 < (int)pFVar21->FileVersion) {
    FCustomVersionContainer::Serialize(pFVar28,param_1,Latest);
    (**(code **)(*(longlong *)param_1 + 0x68))(param_1,pFVar28);
  }
  piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
    if ((*pbVar26 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->LengthInMS = *piVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &param_2->NetworkVersion;
  puVar8 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
    if ((*pbVar26 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar6 = &param_2->Changelist;
  puVar8 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
    if ((*pbVar26 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  uVar13 = (**(code **)(this->_padding_ + 400))(this);
  iVar4 = (param_2->FriendlyName).Data.ArrayNum;
  pwVar24 = L"";
  uVar27 = iVar4 - 1;
  if (iVar4 == 0) {
    uVar27 = 0;
  }
  if (uVar27 < uVar13) {
    pFVar16 = ::FString::RightPad(&param_2->FriendlyName,&local_148,uVar13);
    if (&local_1c8 != pFVar16) {
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      local_1c8.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Data.ArrayNum = (pFVar16->Data).ArrayNum;
      local_1c8.Data.ArrayMax = (pFVar16->Data).ArrayMax;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((int)uVar13 < (int)uVar27) {
      uVar27 = uVar13;
    }
    uVar13 = 0;
    if (0 < (int)uVar27) {
      uVar13 = uVar27;
    }
    if (iVar4 == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(param_2->FriendlyName).Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_190,pwVar18,uVar13);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    local_1c8.Data.AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
    local_1c8.Data.ArrayNum = local_190.Data.ArrayNum;
    local_1c8.Data.ArrayMax = local_190.Data.ArrayMax;
    local_190.Data.ArrayNum = 0;
    local_190.Data.ArrayMax = 0;
    local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  local_138 = FLocalFileReplayCustomVersion::Guid;
  pFVar15 = FCustomVersionContainer::GetVersion(pFVar28,&local_138);
  pFVar21 = param_3;
  if (pFVar15 != (FCustomVersion *)0x0) {
    pFVar21 = (FLocalFileSerializationInfo *)&pFVar15->Version;
  }
  if ((int)pFVar21->FileVersion < 5) {
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_1c8.Data.ArrayNum != 0) {
      FVar17.Data = local_1c8.Data.AllocatorInstance.Data;
    }
    uVar2 = *(ushort *)FVar17.Data;
    while (uVar2 != 0) {
      if (0x7f < uVar2) {
        if ((param_3->FileFriendlyName).Data.ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(param_3->FileFriendlyName).Data.AllocatorInstance.Data;
        }
        wVar3 = *pwVar18;
        goto joined_r0x000146cb3ed4;
      }
      pFVar23 = FVar17.Data + 2;
      FVar17.Data = FVar17.Data + 2;
      uVar2 = *(ushort *)pFVar23;
    }
LAB_146cb3e4a:
    if ((param_3->FileFriendlyName).Data.ArrayNum != 0) {
      pwVar24 = (wchar_t *)(param_3->FileFriendlyName).Data.AllocatorInstance.Data;
    }
    wVar3 = *pwVar24;
    while (wVar3 != L'\0') {
      if (0x7f < (ushort)wVar3) {
        bVar1 = param_1->field_0x28;
        (**(code **)(*(longlong *)param_1 + 0x100))
                  (param_1,CONCAT71((uint7)local_1c8.Data.ArrayNum._1_3_,1));
        ::operator<<(param_1,&local_1c8);
        (**(code **)(*(longlong *)param_1 + 0x100))(param_1,bVar1 >> 7);
        pbVar26 = local_1a8;
        goto LAB_146cb3e89;
      }
      pFVar23 = (FScriptContainerElement *)((longlong)pwVar24 + 2);
      pwVar24 = (wchar_t *)((longlong)pwVar24 + 2);
      wVar3 = *(wchar_t *)pFVar23;
    }
    ::operator<<(param_1,&local_1c8);
    pbVar26 = local_1a8;
  }
  else {
    bVar1 = param_1->field_0x28;
    (**(code **)(*(longlong *)param_1 + 0x100))(param_1,1);
    ::operator<<(param_1,&local_1c8);
    (**(code **)(*(longlong *)param_1 + 0x100))(param_1,bVar1 >> 7);
  }
  goto LAB_146cb3e89;
joined_r0x000146cb3ed4:
  if (wVar3 == L'\0') goto LAB_146cb3eed;
  if (0x7f < (ushort)wVar3) goto LAB_146cb3e4a;
  wVar3 = *(wchar_t *)((longlong)pwVar18 + 2);
  pwVar18 = (wchar_t *)((longlong)pwVar18 + 2);
  goto joined_r0x000146cb3ed4;
LAB_146cb3eed:
  if (2 < (byte)LogLocalFileReplay._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_1c8.Data.ArrayNum == 0) {
    pwVar24 = L"";
LAB_146cb3f41:
    sVar19 = wcslen(pwVar24);
    local_68 = (int)sVar19;
    uVar27 = local_68 + 1;
    FVar17.Data = (FScriptContainerElement *)0x0;
    if (0x80 < uVar27) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar27,1);
      FVar17.Data = local_78.Data;
    }
    lVar25 = (longlong)(int)uVar27;
    pFVar23 = local_f8;
    if (FVar17.Data != (FScriptContainerElement *)0x0) {
      pFVar23 = FVar17.Data;
    }
    bVar12 = false;
    local_70 = pFVar23;
    if (0 < (int)uVar27) {
      lVar20 = 0;
      lVar22 = lVar20;
      do {
        uVar2 = *(ushort *)((longlong)pwVar24 + lVar22 * 2);
        pFVar23[lVar22] = SUB21(uVar2,0);
        lVar22 = lVar22 + 1;
        bVar12 = (bool)(bVar12 | 0x7f < uVar2);
      } while (lVar22 < lVar25);
      if (bVar12) {
        do {
          if (0x7f < *(ushort *)((longlong)pwVar24 + lVar20 * 2)) {
            pFVar23[lVar20] = (FScriptContainerElement)0x3f;
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 < lVar25);
      }
    }
    if ((pFVar23 + lVar25 == (FScriptContainerElement *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                            ,0x25,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar10 = (*pcVar9)();
      return (bool)uVar10;
    }
  }
  else {
    pwVar24 = (wchar_t *)local_1c8.Data.AllocatorInstance.Data;
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_146cb3f41;
    local_70 = (FScriptContainerElement *)0x0;
    local_68 = 0;
  }
  ::FString::FString(&local_178,(char *)local_70);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  ::operator<<(param_1,&local_178);
  pbVar26 = local_1a8;
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
    pbVar26 = local_1a8;
  }
LAB_146cb3e89:
  pFVar28 = &param_3->FileCustomVersions;
  plVar5 = *(longlong **)&param_1->field_0x8;
  local_1b4 = (uint)(param_2->bIsLive != false);
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((*pbVar26 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_1b4);
    }
  }
  else {
    local_1b4 = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  local_128 = FLocalFileReplayCustomVersion::Guid;
  pFVar15 = FCustomVersionContainer::GetVersion(pFVar28,&local_128);
  pFVar21 = param_3;
  if (pFVar15 != (FCustomVersion *)0x0) {
    pFVar21 = (FLocalFileSerializationInfo *)&pFVar15->Version;
  }
  if (2 < (int)pFVar21->FileVersion) {
    ::operator<<(param_1,&param_2->Timestamp);
  }
  local_118 = FLocalFileReplayCustomVersion::Guid;
  pFVar15 = FCustomVersionContainer::GetVersion(pFVar28,&local_118);
  this_00 = local_180;
  pFVar21 = param_3;
  if (pFVar15 != (FCustomVersion *)0x0) {
    pFVar21 = (FLocalFileSerializationInfo *)&pFVar15->Version;
  }
  if (1 < (int)pFVar21->FileVersion) {
    cVar11 = (**(code **)(local_180->_padding_ + 0x1c0))(local_180);
    local_1b0 = (uint)(cVar11 != '\0');
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((*pbVar26 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_1b0);
      }
    }
    else {
      local_1b0 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
  }
  local_108 = FLocalFileReplayCustomVersion::Guid;
  pFVar15 = FCustomVersionContainer::GetVersion(pFVar28,&local_108);
  if (pFVar15 != (FCustomVersion *)0x0) {
    param_3 = (FLocalFileSerializationInfo *)&pFVar15->Version;
  }
  if (5 < (int)param_3->FileVersion) {
    bVar12 = AllowEncryptedWrite(this_00);
    plVar5 = *(longlong **)&param_1->field_0x8;
    local_1ac = (uint)bVar12;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((*pbVar26 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1ac,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_1ac);
      }
    }
    else {
      local_1ac = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    if (param_2->bIsLive == false) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                (&local_1a0,&param_2->EncryptionKey);
    }
    else {
      iVar4 = (param_2->EncryptionKey).ArrayNum;
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar4,&local_1a0.AllocatorInstance,&local_1a0.ArrayNum,
                          &local_1a0.ArrayMax);
      memset(local_1a0.AllocatorInstance.Data + iVar14,0,(longlong)iVar4);
    }
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_1a0);
    if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
  }
  bVar1 = param_1->field_0x29;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  return (bool)(~(bVar1 >> 1) & 1);
}

// WriteReplayInfo @ 146cb42e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLocalFileNetworkReplayStreamer::WriteReplayInfo
          (FLocalFileNetworkReplayStreamer *this,FString *param_1,FLocalFileReplayInfo *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FGuid FVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_LocalReplay_WriteReplayInfo> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FGuid local_88;
  FArchive *local_78;
  TReferenceControllerBase<1> *local_70;
  FLocalFileSerializationInfo local_68;
  
  FVar11.Value = 0;
  FVar9 = StatPtr_STAT_LocalReplay_WriteReplayInfo;
  if (StatPtr_STAT_LocalReplay_WriteReplayInfo ==
      (FThreadSafeStaticStat<FStat_STAT_LocalReplay_WriteReplayInfo>)0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_LocalReplay_WriteReplayInfo");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_LocalReplay_WriteReplayInfo>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LocalReplay_WriteReplayInfo,
                       *pFVar8,L"Local replay write info","STATGROUP_LocalReplay","STATCAT_Advanced"
                       ,L"LocalReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                   ,0x27b);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar12.Value;
      goto LAB_146cb4428;
    }
  }
  bVar4 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_146cb4428:
  pcVar2 = *(code **)(this->_padding_ + 0x200);
  GetDemoFullFilename(this,(FString *)&local_88,param_1);
  (*pcVar2)(this,&local_78);
  if ((void *)local_88._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  bVar7 = false;
  if (local_78 != (FArchive *)0x0) {
    local_68.FileVersion = 7;
    local_68.FileFriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FileFriendlyName.Data.ArrayNum = 0;
    local_68.FileFriendlyName.Data.ArrayMax = 0;
    local_68.FileCustomVersions.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FileCustomVersions.Versions.ArrayNum = 0;
    local_68.FileCustomVersions.Versions.ArrayMax = 0;
    pFVar8 = ::FName::FName((FName *)&local_res8.s,L"LocalFileReplay");
    local_88 = FLocalFileReplayCustomVersion::Guid;
    FCustomVersionContainer::SetVersion(&local_68.FileCustomVersions,&local_88,7,*pFVar8);
    bVar7 = WriteReplayInfo(this,local_78,param_2,&local_68);
    if (local_68.FileCustomVersions.Versions.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.FileCustomVersions.Versions.AllocatorInstance.Data);
    }
    if (local_68.FileFriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.FileFriendlyName.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.C = FVar11.Value;
      local_88.D = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      FVar6 = local_88;
      local_88.B = 0;
      local_88.A = local_res8.s.LowPart;
      local_88._8_8_ = FVar6._8_8_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_88);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar7;
}

// operator() @ 1504fb350

bool __thiscall
`FLocalFileNetworkReplayStreamer::CleanUpOldReplays'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4562395075362944101>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_4562395075362944101>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504fb3b0

bool __thiscall
`FLocalFileNetworkReplayStreamer::CleanUpOldReplays'::__l71::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4562395075362944055>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_4562395075362944055>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

