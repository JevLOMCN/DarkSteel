// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 8

// FSyncPointWatcher @ 14d78ac30

FSyncPointWatcher * __thiscall
UE::MediaCaptureData::FSyncPointWatcher::FSyncPointWatcher
          (FSyncPointWatcher *this,UMediaCapture *param_1)

{
  FRunnableThread *pFVar1;
  atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> aVar2;
  FRunnableThread *pFVar3;
  ForAnyElementType FVar4;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FSyncPointWatcher_MediaCaptureData_UE__6B_;
  (this->WorkingThread).Ptr = (FRunnableThread *)0x0;
  this->bIsEnabled = (atomic<bool>)0x0;
  this->PendingCaptureFramesCount = (atomic<unsigned_int>)0x0;
  FEventRef::FEventRef(&this->PendingTaskSignal,AutoReset);
  this->MediaCapture = param_1;
  (this->PendingCaptureFrames).Tail =
       (atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>)0x0;
  (this->PendingCaptureFrames).NumElems = (atomic<int>)0x0;
  aVar2 = (atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>)
          FMemory::Malloc(0x28,8);
  *(undefined8 *)aVar2 = 0;
  (this->PendingCaptureFrames).Tail = aVar2;
  (this->PendingCaptureFrames).TailCopy = (FNode *)aVar2;
  (this->PendingCaptureFrames).First = (FNode *)aVar2;
  (this->PendingCaptureFrames).Head = (FNode *)aVar2;
  LOCK();
  (this->PendingCaptureFrames).NumElems = (atomic<int>)0x0;
  UNLOCK();
  LOCK();
  this->bIsEnabled = (atomic<bool>)0x1;
  UNLOCK();
  local_res8 = (FName)this->MediaCapture->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  ::FString::PrintfImpl(&local_18,L"%s_SyncThread");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar3 = FRunnableThread::Create
                     ((FRunnable *)this,(wchar_t *)FVar4.Data,0x40000,TPri_Highest,
                      0xffffffffffffffff,None);
  pFVar1 = (this->WorkingThread).Ptr;
  if ((pFVar1 != pFVar3) && ((this->WorkingThread).Ptr = pFVar3, pFVar1 != (FRunnableThread *)0x0))
  {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FSyncPointWatcher @ 14d78cd20

void __thiscall UE::MediaCaptureData::FSyncPointWatcher::~FSyncPointWatcher(FSyncPointWatcher *this)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&___7FSyncPointWatcher_MediaCaptureData_UE__6B_;
  pFVar1 = (this->WorkingThread).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
  pFVar1 = (this->WorkingThread).Ptr;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (this->WorkingThread).Ptr = (FRunnableThread *)0x0;
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::
  ~TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>(&this->PendingCaptureFrames);
  FEventRef::~FEventRef(&this->PendingTaskSignal);
  pFVar1 = (this->WorkingThread).Ptr;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// ProcessPendingCapture @ 14d7b7f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture
          (FSyncPointWatcher *this,FPendingCaptureData *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  UMediaCapture *pUVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  FCaptureFrame *pFVar9;
  undefined8 uVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  code **ppcVar12;
  ulonglong uVar13;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *pTVar14;
  undefined1 auStack_f8 [32];
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_d8;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  bVar6 = false;
  QueryPerformanceCounter(&local_c8);
  fVar5 = __real_3851b717;
  if ((param_1->SyncHandler).Object == (FMediaCaptureSyncData *)0x0) {
    if (((param_1->CapturingFrame).Object == (FCaptureFrame *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((((param_1->CapturingFrame).Object)->bMediaCaptureActive != (atomic<bool>)0x0) &&
       (pUVar3 = this->MediaCapture, pUVar3 != (UMediaCapture *)0x0)) {
      pcVar4 = *(code **)(pUVar3->_padding_ + 0x410);
      pFVar9 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->
                         (&param_1->CapturingFrame);
      uVar10 = (**(code **)(pFVar9->_padding_ + 0x60))(pFVar9);
      (*pcVar4)(pUVar3,uVar10);
      bVar6 = true;
    }
  }
  else {
    while( true ) {
      if (((param_1->SyncHandler).Object == (FMediaCaptureSyncData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar7 = (**(code **)(((((param_1->SyncHandler).Object)->RHIFence).Reference)->_padding_ + 0x20
                          ))();
      if (cVar7 != '\0') break;
      if (((param_1->CapturingFrame).Object == (FCaptureFrame *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar6 = false;
      if (((param_1->CapturingFrame).Object)->bMediaCaptureActive == (atomic<bool>)0x0)
      goto LAB_14d7b8006;
      FWindowsPlatformProcess::SleepNoStats(fVar5);
    }
    bVar6 = true;
LAB_14d7b8006:
    if (((param_1->SyncHandler).Object == (FMediaCaptureSyncData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(((((param_1->SyncHandler).Object)->RHIFence).Reference)->_padding_ + 0x10))();
    if (((param_1->SyncHandler).Object == (FMediaCaptureSyncData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    ((param_1->SyncHandler).Object)->bIsBusy = (atomic<bool>)0x0;
    UNLOCK();
  }
  pTVar14 = &param_1->CapturingFrame;
  QueryPerformanceCounter(&local_c0);
  if ((pTVar14->Object == (FCaptureFrame *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((pTVar14->Object->bMediaCaptureActive != (atomic<bool>)0x0) && (bVar6)) &&
     (this->MediaCapture != (UMediaCapture *)0x0)) {
    bVar6 = UMediaCapture::UseAnyThreadCapture(this->MediaCapture);
    if (bVar6) {
      local_d8.Object = pTVar14->Object;
      local_d8.SharedReferenceCount.ReferenceController =
           (param_1->CapturingFrame).SharedReferenceCount.ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FMediaCaptureHelper::OnReadbackComplete(this->MediaCapture,&local_d8);
    }
    else {
      LOCK();
      paVar1 = &this->MediaCapture->WaitingForRenderCommandExecutionCounter;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      pTVar2 = (param_1->CapturingFrame).SharedReferenceCount.ReferenceController;
      pUVar3 = this->MediaCapture;
      pFVar9 = pTVar14->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8[0] = (code *)0x0;
      local_90 = FMemory::Malloc(0x20,8);
      local_90[1] = (code *)pUVar3;
      local_90[2] = (code *)pFVar9;
      *local_90 = (code *)&Core::Private::Function::
                           TFunction_OwnedObject<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::`31'::<lambda_2>,1,1>
                           ::_vftable_;
      local_90[3] = (code *)pTVar2;
      if (local_90 != (code **)&DAT_fffffffffffffff8) {
        local_b8[0] = Core::Private::Function::
                      TFunctionRefCaller<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::__l31::<lambda_2>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture_::__l31::TSTR_MediaOutputCaptureReadbackComplete112>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_88[0] = local_b8[0];
        local_60 = local_90;
        local_90 = (code **)0x0;
        local_78[0] = local_a8[0];
        local_78[1] = local_a8[1];
        local_78[2] = local_a8[2];
        local_b8[0] = (code *)0x0;
        local_58 = 2;
        pFVar11 = (FRenderCommandTag *)
                  TRenderCommandTag<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::__l31::TSTR_MediaOutputCaptureReadbackComplete112>
                  ::Get();
        RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_88,pFVar11);
        uVar13 = (ulonglong)local_58;
        if ((2 < uVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13] ==
            Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if (local_88[0] != (code *)0x0) {
            ppcVar12 = local_88 + 2;
            if (local_60 != (code **)0x0) {
              ppcVar12 = local_60;
            }
            (**(code **)(*ppcVar12 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])();
        }
      }
      if (local_b8[0] != (code *)0x0) {
        ppcVar12 = local_b8 + 2;
        if (local_90 != (code **)0x0) {
          ppcVar12 = local_90;
        }
        (**(code **)(*ppcVar12 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
  }
  LOCK();
  this->PendingCaptureFramesCount =
       (atomic<unsigned_int>)((int)this->PendingCaptureFramesCount + -1);
  UNLOCK();
  return;
}

// QueuePendingCapture @ 14d7b9140

void __thiscall
UE::MediaCaptureData::FSyncPointWatcher::QueuePendingCapture
          (FSyncPointWatcher *this,FPendingCaptureData *param_1)

{
  TTypeCompatibleBytes<UE::MediaCaptureData::FPendingCaptureData> *pTVar1;
  atomic<int> *paVar2;
  atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> aVar3;
  FCaptureFrame *pFVar4;
  uchar *puVar5;
  atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> aVar6;
  
  LOCK();
  this->PendingCaptureFramesCount = (atomic<unsigned_int>)((int)this->PendingCaptureFramesCount + 1)
  ;
  UNLOCK();
  aVar6 = (atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>)
          (this->PendingCaptureFrames).First;
  if (aVar6 == (atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>)
               (this->PendingCaptureFrames).TailCopy) {
    aVar3 = (this->PendingCaptureFrames).Tail;
    aVar6 = (atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>)
            (this->PendingCaptureFrames).First;
    (this->PendingCaptureFrames).TailCopy = (FNode *)aVar3;
    if (aVar6 == aVar3) {
      aVar6 = (atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>)
              FMemory::Malloc(0x28,8);
      pTVar1 = (TTypeCompatibleBytes<UE::MediaCaptureData::FPendingCaptureData> *)
               ((longlong)aVar6 + 8);
      pTVar1->Pad[0] = '\0';
      pTVar1->Pad[1] = '\0';
      pTVar1->Pad[2] = '\0';
      pTVar1->Pad[3] = '\0';
      pTVar1->Pad[4] = '\0';
      pTVar1->Pad[5] = '\0';
      pTVar1->Pad[6] = '\0';
      pTVar1->Pad[7] = '\0';
      puVar5 = (uchar *)((longlong)aVar6 + 0x10);
      puVar5[0] = '\0';
      puVar5[1] = '\0';
      puVar5[2] = '\0';
      puVar5[3] = '\0';
      puVar5[4] = '\0';
      puVar5[5] = '\0';
      puVar5[6] = '\0';
      puVar5[7] = '\0';
      puVar5 = (uchar *)((longlong)aVar6 + 0x18);
      puVar5[0] = '\0';
      puVar5[1] = '\0';
      puVar5[2] = '\0';
      puVar5[3] = '\0';
      puVar5[4] = '\0';
      puVar5[5] = '\0';
      puVar5[6] = '\0';
      puVar5[7] = '\0';
      puVar5 = (uchar *)((longlong)aVar6 + 0x20);
      puVar5[0] = '\0';
      puVar5[1] = '\0';
      puVar5[2] = '\0';
      puVar5[3] = '\0';
      puVar5[4] = '\0';
      puVar5[5] = '\0';
      puVar5[6] = '\0';
      puVar5[7] = '\0';
      *(undefined8 *)aVar6 = 0;
      goto LAB_14d7b91a6;
    }
  }
  (this->PendingCaptureFrames).First = *(FNode **)aVar6;
  *(undefined8 *)aVar6 = 0;
LAB_14d7b91a6:
  *(FMediaCaptureSyncData **)
   ((TTypeCompatibleBytes<UE::MediaCaptureData::FPendingCaptureData> *)((longlong)aVar6 + 8))->Pad =
       (param_1->SyncHandler).Object;
  *(TReferenceControllerBase<1> **)((longlong)aVar6 + 0x10) =
       (param_1->SyncHandler).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->CapturingFrame).Object;
  (param_1->SyncHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->SyncHandler).Object = (FMediaCaptureSyncData *)0x0;
  *(FCaptureFrame **)((longlong)aVar6 + 0x18) = pFVar4;
  *(TReferenceControllerBase<1> **)((longlong)aVar6 + 0x20) =
       (param_1->CapturingFrame).SharedReferenceCount.ReferenceController;
  (param_1->CapturingFrame).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->CapturingFrame).Object = (FCaptureFrame *)0x0;
  ((this->PendingCaptureFrames).Head)->Next = aVar6;
  (this->PendingCaptureFrames).Head = (FNode *)aVar6;
  LOCK();
  paVar2 = &(this->PendingCaptureFrames).NumElems;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  (**(code **)(((this->PendingTaskSignal).Event)->_padding_ + 0x10))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CapturingFrame).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SyncHandler).SharedReferenceCount.ReferenceController);
  return;
}

// Run @ 14d7bb690

uint __thiscall UE::MediaCaptureData::FSyncPointWatcher::Run(FSyncPointWatcher *this)

{
  atomic<int> *paVar1;
  FEvent *pFVar2;
  atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> aVar3;
  FMediaCaptureSyncData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCaptureFrame *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSharedReferencer<1> FVar8;
  FPendingCaptureData local_68;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  FCaptureFrame *local_38;
  FSharedReferencer<1> local_30;
  char local_28;
  
  if (this->bIsEnabled == (atomic<bool>)0x0) {
    return 0;
  }
  do {
    if (((this->PendingCaptureFrames).NumElems == (atomic<int>)0x0) &&
       (pFVar2 = (this->PendingTaskSignal).Event,
       (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0xffffffff,0),
       this->bIsEnabled == (atomic<bool>)0x0)) {
      return 0;
    }
    local_68.CapturingFrame.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_68.SyncHandler.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_68.CapturingFrame.Object = (FCaptureFrame *)0x0;
    aVar3 = *(atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*> *)
             (this->PendingCaptureFrames).Tail;
    if (aVar3 == (atomic<TSpscQueue<UE::MediaCaptureData::FPendingCaptureData,FMemory>::FNode_*>)0x0
       ) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pFVar4 = *(FMediaCaptureSyncData **)((longlong)aVar3 + 8);
      pTVar5 = *(TReferenceControllerBase<1> **)((longlong)aVar3 + 0x10);
      pFVar6 = *(FCaptureFrame **)((longlong)aVar3 + 0x18);
      pTVar7 = *(TReferenceControllerBase<1> **)((longlong)aVar3 + 0x20);
      *(undefined8 *)((longlong)aVar3 + 0x10) = 0;
      *(undefined8 *)((longlong)aVar3 + 8) = 0;
      *(undefined8 *)((longlong)aVar3 + 0x20) = 0;
      *(undefined8 *)((longlong)aVar3 + 0x18) = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)aVar3 + 0x10));
      local_28 = '\x01';
      (this->PendingCaptureFrames).Tail = aVar3;
      LOCK();
      paVar1 = &(this->PendingCaptureFrames).NumElems;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      local_40.ReferenceController = pTVar5;
      local_38 = pFVar6;
      local_30.ReferenceController = pTVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_48 = 0;
      local_68.SyncHandler.Object = pFVar4;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_68.SyncHandler.SharedReferenceCount,&local_40);
      local_68.CapturingFrame.Object = local_38;
      local_38 = (FCaptureFrame *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_68.CapturingFrame.SharedReferenceCount,&local_30);
      if (local_28 != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40.ReferenceController);
      }
      ProcessPendingCapture(this,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.CapturingFrame.SharedReferenceCount.ReferenceController);
      FVar8.ReferenceController = local_68.SyncHandler.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
  } while (this->bIsEnabled != (atomic<bool>)0x0);
  return 0;
}

// Stop @ 14d7be520

void __thiscall UE::MediaCaptureData::FSyncPointWatcher::Stop(FSyncPointWatcher *this)

{
  LOCK();
  this->bIsEnabled = (atomic<bool>)0x0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00014d7be52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->PendingTaskSignal).Event)->_padding_ + 0x10))();
  return;
}

// WaitForAllPendingTasksToComplete @ 14d7c4150

void __thiscall
UE::MediaCaptureData::FSyncPointWatcher::WaitForAllPendingTasksToComplete(FSyncPointWatcher *this)

{
  atomic<unsigned_int> aVar1;
  float fVar2;
  
  fVar2 = __real_3851b717;
  aVar1 = this->PendingCaptureFramesCount;
  while (aVar1 != (atomic<unsigned_int>)0x0) {
    FWindowsPlatformProcess::SleepNoStats(fVar2);
    aVar1 = this->PendingCaptureFramesCount;
  }
  return;
}

// WaitForSinglePendingTaskToComplete @ 14d7c4330

void __thiscall
UE::MediaCaptureData::FSyncPointWatcher::WaitForSinglePendingTaskToComplete(FSyncPointWatcher *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  float fVar3;
  
  fVar3 = __real_3851b717;
  aVar1 = this->PendingCaptureFramesCount;
  if (aVar1 != (atomic<unsigned_int>)0x0) {
    aVar2 = this->PendingCaptureFramesCount;
    while ((uint)aVar1 <= (uint)aVar2) {
      FWindowsPlatformProcess::SleepNoStats(fVar3);
      aVar2 = this->PendingCaptureFramesCount;
    }
  }
  return;
}

