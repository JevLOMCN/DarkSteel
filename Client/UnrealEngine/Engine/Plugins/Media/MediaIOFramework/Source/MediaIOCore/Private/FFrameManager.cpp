// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 10

// GetNextAvailable<UE::MediaCaptureData::FCaptureFrame> @ 14d7869a0

TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> * __thiscall
UE::MediaCaptureData::FFrameManager::GetNextAvailable<UE::MediaCaptureData::FCaptureFrame>
          (FFrameManager *this,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  uint uVar2;
  atomic<TSpscQueue<int,FMemory>::FNode_*> aVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined1 local_res8 [8];
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_28;
  
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Object = (FCaptureFrame *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  aVar3 = *(atomic<TSpscQueue<int,FMemory>::FNode_*> *)(this->AvailableFrames).Tail;
  if (aVar3 != (atomic<TSpscQueue<int,FMemory>::FNode_*>)0x0) {
    uVar2 = *(uint *)((longlong)aVar3 + 8);
    (this->AvailableFrames).Tail = aVar3;
    LOCK();
    paVar1 = &(this->AvailableFrames).NumElems;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    uVar9 = 0;
    if ((int)uVar2 < (this->Frames).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *)(*pcVar7)();
        return pTVar12;
      }
    }
    pFVar4 = (this->Frames).AllocatorInstance.Data;
    local_28.Object = *(FCaptureFrame **)(pFVar4 + (longlong)(int)uVar2 * 0x10);
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)(int)uVar2 * 0x10 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_28) {
      __return_storage_ptr__->Object = local_28.Object;
      local_28.Object = (FCaptureFrame *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  lVar5 = *(longlong *)(this->PendingFrames).Tail;
  pTVar13 = pTVar14;
  if (lVar5 != 0) {
    pTVar13 = (TReferenceControllerBase<1> *)(lVar5 + 8);
  }
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    uVar2 = (uint)pTVar13->_padding_;
    uVar9 = 0;
    if ((int)uVar2 < (this->Frames).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *)(*pcVar7)();
        return pTVar12;
      }
    }
    pFVar4 = (this->Frames).AllocatorInstance.Data;
    pTVar14 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)(int)uVar2 * 0x10 + 8);
    plVar6 = *(longlong **)(pFVar4 + (longlong)(int)uVar2 * 0x10);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar6 != (longlong *)0x0) && (__return_storage_ptr__->Object != (FCaptureFrame *)0x0)) {
      iVar10 = (**(code **)(__return_storage_ptr__->Object->_padding_ + 8))();
      iVar11 = (**(code **)(*plVar6 + 8))(plVar6);
      if (iVar11 == iVar10) {
        `UE::MediaCaptureData::FFrameManager::GetNextAvailable<UE::MediaCaptureData::FCaptureFrame>'
        ::__l8::<lambda_1>::operator()(local_res8);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return __return_storage_ptr__;
}

// PeekNextPending<UE::MediaCaptureData::FCaptureFrame> @ 14d788270

TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> * __thiscall
UE::MediaCaptureData::FFrameManager::PeekNextPending<UE::MediaCaptureData::FCaptureFrame>
          (FFrameManager *this,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *__return_storage_ptr__)

{
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint *puVar9;
  
  lVar2 = *(longlong *)(this->PendingFrames).Tail;
  puVar9 = (uint *)0x0;
  if (lVar2 != 0) {
    puVar9 = (uint *)(lVar2 + 8);
  }
  if (puVar9 == (uint *)0x0) {
    __return_storage_ptr__->Object = (FCaptureFrame *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar1 = *puVar9;
    uVar7 = 0;
    if ((int)uVar1 < (this->Frames).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *)(*pcVar4)();
        return pTVar6;
      }
    }
    pFVar8 = (this->Frames).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    __return_storage_ptr__->Object = *(FCaptureFrame **)pFVar8;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// ~FFrameManager @ 14d78c590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::MediaCaptureData::FFrameManager::~FFrameManager(FFrameManager *this)

{
  atomic<TSpscQueue<int,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<int,FMemory>::FNode_*> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  atomic<TSpscQueue<int,FMemory>::FNode_*> aVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined **local_88;
  FScriptContainerElement *pFStack_80;
  int local_78;
  int iStack_74;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  FScriptContainerElement *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFStack_80 = (this->Frames).AllocatorInstance.Data;
  local_88 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1___1FFrameManager_MediaCaptureData_UE__QEAA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78 = (this->Frames).ArrayNum;
  iStack_74 = (this->Frames).ArrayMax;
  local_98[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::MediaCaptureData::FFrameManager::~FFrameManager'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  local_70 = (undefined ***)0x0;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UE::MediaCaptureData::FFrameManager::~FFrameManager_::__l2::TSTR_MediaCaptureFrameManagerCleaning82>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_48._4_4_ = iStack_74;
    local_48._0_4_ = local_78;
    local_68[0] = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pFStack_50 = pFStack_80;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`UE::MediaCaptureData::FFrameManager::~FFrameManager'::__l2::TSTR_MediaCaptureFrameManagerCleaning82>
             ::Get();
    RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar6);
    uVar9 = (ulonglong)local_38;
    if ((2 < uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
        ::Destruct) {
      if (local_68[0] != (code *)0x0) {
        pppuVar7 = (undefined ***)(local_68 + 2);
        if (local_40 != (undefined ***)0x0) {
          pppuVar7 = local_40;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  DestructItems<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int>
            ((TSharedPtr<UE::MediaCaptureData::FFrame,1> *)0x0,0);
  aVar1 = (this->PendingFrames).Tail;
  aVar8 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)(this->PendingFrames).First;
  do {
    aVar2 = *(atomic<TSpscQueue<int,FMemory>::FNode_*> *)aVar8;
    FMemory::Free((void *)aVar8);
    bVar5 = aVar8 != aVar1;
    aVar8 = aVar2;
  } while (bVar5);
  while (aVar2 != (atomic<TSpscQueue<int,FMemory>::FNode_*>)0x0) {
    aVar1 = *(atomic<TSpscQueue<int,FMemory>::FNode_*> *)aVar2;
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  aVar1 = (this->AvailableFrames).Tail;
  aVar8 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)(this->AvailableFrames).First;
  do {
    aVar2 = *(atomic<TSpscQueue<int,FMemory>::FNode_*> *)aVar8;
    FMemory::Free((void *)aVar8);
    bVar5 = aVar8 != aVar1;
    aVar8 = aVar2;
  } while (bVar5);
  while (aVar2 != (atomic<TSpscQueue<int,FMemory>::FNode_*>)0x0) {
    aVar1 = *(atomic<TSpscQueue<int,FMemory>::FNode_*> *)aVar2;
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  DestructItems<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int>
            ((TSharedPtr<UE::MediaCaptureData::FFrame,1> *)(this->Frames).AllocatorInstance.Data,
             (this->Frames).ArrayNum);
  pFVar3 = (this->Frames).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 14d78e1a0

void __thiscall
`UE::MediaCaptureData::FFrameManager::~FFrameManager'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  if (-1 < *(int *)((longlong)this + 0xc)) {
    DestructItems<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int>
              (*(TSharedPtr<UE::MediaCaptureData::FFrame,1> **)this,*(int *)((longlong)this + 8));
    *(undefined4 *)((longlong)this + 8) = 0;
    return;
  }
  DestructItems<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int>
            (*(TSharedPtr<UE::MediaCaptureData::FFrame,1> **)this,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  return;
}

// AddFrame @ 14d795fa0

void __thiscall
UE::MediaCaptureData::FFrameManager::AddFrame
          (FFrameManager *this,TSharedPtr<UE::MediaCaptureData::FFrame,1> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<TSpscQueue<int,FMemory>::FNode_*> aVar3;
  TSharedPtr<UE::MediaCaptureData::FFrame,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  atomic<TSpscQueue<int,FMemory>::FNode_*> aVar9;
  FScriptContainerElement *pFVar10;
  
  if (param_1->Object == (FFrame *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = (**(code **)((longlong)*param_1->Object + 8))();
  aVar9 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)(this->AvailableFrames).First;
  if (aVar9 == (atomic<TSpscQueue<int,FMemory>::FNode_*>)(this->AvailableFrames).TailCopy) {
    aVar3 = (this->AvailableFrames).Tail;
    aVar9 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)(this->AvailableFrames).First;
    (this->AvailableFrames).TailCopy = (FNode *)aVar3;
    if (aVar9 == aVar3) {
      aVar9 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
      *(undefined4 *)((longlong)aVar9 + 0xc) = 0;
      *(undefined8 *)aVar9 = 0;
    }
    else {
      (this->AvailableFrames).First = *(FNode **)aVar9;
      *(undefined8 *)aVar9 = 0;
    }
  }
  else {
    (this->AvailableFrames).First = *(FNode **)aVar9;
    *(undefined8 *)aVar9 = 0;
  }
  *(undefined4 *)((TTypeCompatibleBytes<int> *)((longlong)aVar9 + 8))->Pad = uVar7;
  ((this->AvailableFrames).Head)->Next = aVar9;
  (this->AvailableFrames).Head = (FNode *)aVar9;
  LOCK();
  paVar1 = &(this->AvailableFrames).NumElems;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  pTVar4 = (TSharedPtr<UE::MediaCaptureData::FFrame,1> *)(this->Frames).AllocatorInstance.Data;
  if ((pTVar4 <= param_1) && (param_1 < pTVar4 + (this->Frames).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->Frames).ArrayNum;
  piVar2 = &(this->Frames).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar2);
  }
  (this->Frames).ArrayNum = iVar8 + 1;
  pFVar10 = (this->Frames).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(FFrame **)pFVar10 = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FFrame *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// CompleteNextPending @ 14d79d3f0

void __thiscall
UE::MediaCaptureData::FFrameManager::CompleteNextPending(FFrameManager *this,FFrame *param_1)

{
  atomic<int> *paVar1;
  int iVar2;
  atomic<TSpscQueue<int,FMemory>::FNode_*> aVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  aVar3 = *(atomic<TSpscQueue<int,FMemory>::FNode_*> *)(this->PendingFrames).Tail;
  if (aVar3 != (atomic<TSpscQueue<int,FMemory>::FNode_*>)0x0) {
    iVar2 = *(int *)((longlong)aVar3 + 8);
    (this->PendingFrames).Tail = aVar3;
    LOCK();
    paVar1 = &(this->PendingFrames).NumElems;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    iVar6 = (**(code **)((longlong)*param_1 + 8))(param_1);
    if (iVar6 == iVar2) {
      MarkAvailable(this,param_1);
      return;
    }
  }
  bVar5 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6148925066445848722>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOFrameManager.h"
                     ,0x92,"NextPending.IsSet() && InFrame.GetId() == NextPending.GetValue()");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// ForEachFrame @ 14d7a7d40

void __thiscall
UE::MediaCaptureData::FFrameManager::ForEachFrame
          (FFrameManager *this,
          TFunctionRef<void___cdecl(TSharedPtr<UE::MediaCaptureData::FFrame,1>_const_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Frames).ArrayNum;
  pFVar2 = (this->Frames).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Frames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// GetFramesState @ 14d7aa9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::MediaCaptureData::FFrameManager::GetFramesState
          (FFrameManager *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FString *pFVar7;
  void *pvVar8;
  wchar_t *pwVar9;
  ulong64 uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStackY_318 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_2d8;
  FString local_2c8;
  FString *local_2b8;
  FStringFormatArg local_2a8;
  FStringFormatArg local_288;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_2b8 = __return_storage_ptr__;
  local_268.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_248,1,"\n",1);
  uVar11 = 0;
  if (0 < (this->Frames).ArrayNum) {
    lVar12 = 0;
    do {
      FStringFormatArg::FStringFormatArg(&local_2a8,uVar11);
      uVar6 = 0;
      if ((int)uVar11 < (this->Frames).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      pFVar1 = (this->Frames).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar12) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      cVar5 = (**(code **)(**(longlong **)(pFVar1 + lVar12) + 0x10))();
      pwVar9 = L"Idle";
      if (cVar5 != '\0') {
        pwVar9 = L"Pending";
      }
      FStringFormatArg::FStringFormatArg(&local_288,pwVar9);
      local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2d8.ArrayNum = 2;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_2d8.AllocatorInstance,2,&local_2d8.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_2d8.AllocatorInstance.Data,&local_2a8,2);
      ::FString::FormatImpl(&local_2c8,L"Frame {0} State:  {1}\n",&local_2d8);
      FVar3.Data = local_2c8.Data.AllocatorInstance.Data;
      uVar6 = local_2c8.Data.ArrayNum - 1;
      if (local_2c8.Data.ArrayNum == 0) {
        uVar6 = 0;
      }
      uVar10 = (ulong64)(int)uVar6;
      if (local_268.End < local_268.CurPos + uVar10) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar10);
      }
      if (uVar6 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar3.Data,uVar10 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar10 * 2);
      }
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_2d8.AllocatorInstance.Data,local_2d8.ArrayNum);
      if ((FStringFormatArg *)local_2d8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_2d8.AllocatorInstance.Data);
      }
      if (local_288.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_2a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.StringValue.Data.AllocatorInstance.Data);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
      __return_storage_ptr__ = local_2b8;
    } while ((int)uVar11 < (this->Frames).ArrayNum);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_268.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// MarkAvailable @ 14d7b2310

void __thiscall
UE::MediaCaptureData::FFrameManager::MarkAvailable(FFrameManager *this,FFrame *param_1)

{
  atomic<int> *paVar1;
  atomic<TSpscQueue<int,FMemory>::FNode_*> aVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  atomic<TSpscQueue<int,FMemory>::FNode_*> aVar7;
  
  cVar4 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  if (cVar4 == '\0') {
    uVar6 = (**(code **)((longlong)*param_1 + 8))();
    aVar7 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)(this->AvailableFrames).First;
    if (aVar7 == (atomic<TSpscQueue<int,FMemory>::FNode_*>)(this->AvailableFrames).TailCopy) {
      aVar2 = (this->AvailableFrames).Tail;
      aVar7 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)(this->AvailableFrames).First;
      (this->AvailableFrames).TailCopy = (FNode *)aVar2;
      if (aVar7 == aVar2) {
        aVar7 = (atomic<TSpscQueue<int,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
        *(undefined4 *)((longlong)aVar7 + 0xc) = 0;
        *(undefined8 *)aVar7 = 0;
      }
      else {
        (this->AvailableFrames).First = *(FNode **)aVar7;
        *(undefined8 *)aVar7 = 0;
      }
    }
    else {
      (this->AvailableFrames).First = *(FNode **)aVar7;
      *(undefined8 *)aVar7 = 0;
    }
    *(undefined4 *)((TTypeCompatibleBytes<int> *)((longlong)aVar7 + 8))->Pad = uVar6;
    ((this->AvailableFrames).Head)->Next = aVar7;
    (this->AvailableFrames).Head = (FNode *)aVar7;
    LOCK();
    paVar1 = &(this->AvailableFrames).NumElems;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  else {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6148925066445848703>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOFrameManager.h"
                       ,0x7f,"!InFrame.IsPending()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// operator() @ 150586c90

bool __thiscall
`UE::MediaCaptureData::FFrameManager::GetNextAvailable<UE::MediaCaptureData::FCaptureFrame>'::__l8::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6148925066445848746>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6148925066445848746>,
                       &`public:___cdecl_`public:_class_TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>___cdecl_UE::MediaCaptureData::FFrameManager::GetNextAvailable<UE::MediaCaptureData::FCaptureFrame>(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

