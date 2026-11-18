// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// GetCurrentContext @ 1436ff5a0

FChaosVDContext * __thiscall
FChaosVDThreadContext::GetCurrentContext(FChaosVDThreadContext *this,EChaosVDContextType param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FChaosVDContext *pFVar5;
  ForElementType<FChaosVDContext> FVar6;
  
  iVar1 = (this->LocalContextStack).ArrayNum;
  if (0 < iVar1) {
    uVar4 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar4 = ~(iVar1 - 1U) >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FChaosVDContext *)(*pcVar2)();
      return pFVar5;
    }
    FVar6 = (this->LocalContextStack).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FChaosVDContext>)0x0) {
      FVar6 = (ForElementType<FChaosVDContext>)&this->LocalContextStack;
    }
    pFVar5 = (FChaosVDContext *)
             ((longlong)(this->LocalContextStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar6);
    if ((pFVar5 != (FChaosVDContext *)0x0) && (pFVar5->Type == param_1)) {
      return pFVar5;
    }
  }
  return (FChaosVDContext *)0x0;
}

// GetCurrentContext @ 1436ff660

FChaosVDContext * __thiscall FChaosVDThreadContext::GetCurrentContext(FChaosVDThreadContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FChaosVDContext *pFVar4;
  ForElementType<FChaosVDContext> FVar5;
  uint uVar6;
  
  iVar1 = (this->LocalContextStack).ArrayNum;
  if (iVar1 < 1) {
    return (FChaosVDContext *)0x0;
  }
  uVar6 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar6 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FChaosVDContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  FVar5 = (this->LocalContextStack).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FChaosVDContext>)0x0) {
    FVar5 = (ForElementType<FChaosVDContext>)&this->LocalContextStack;
  }
  return (FChaosVDContext *)
         ((longlong)FVar5 + (longlong)((this->LocalContextStack).ArrayNum + -1) * 0x20);
}

// GetCurrentContext @ 1436ff710

bool __thiscall
FChaosVDThreadContext::GetCurrentContext(FChaosVDThreadContext *this,FChaosVDContext *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FChaosVDOptionalDataChannel *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  ForElementType<FChaosVDContext> FVar9;
  longlong lVar10;
  
  iVar1 = (this->LocalContextStack).ArrayNum;
  if (iVar1 < 1) {
    return false;
  }
  uVar8 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar8 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  FVar9 = (this->LocalContextStack).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FChaosVDContext>)0x0) {
    FVar9 = (ForElementType<FChaosVDContext>)&this->LocalContextStack;
  }
  lVar10 = (longlong)(this->LocalContextStack).ArrayNum * 0x20 + (longlong)FVar9;
  param_1->OwnerID = *(int *)(lVar10 + -0x20);
  param_1->Id = *(int *)(lVar10 + -0x1c);
  param_1->Type = *(int *)(lVar10 + -0x18);
  param_1->Attributes = *(int *)(lVar10 + -0x14);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar10 + -8);
  pFVar3 = *(FChaosVDOptionalDataChannel **)(lVar10 + -0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (param_1->CurrentDataChannel).SharedReferenceCount.ReferenceController;
  (param_1->CurrentDataChannel).Object = pFVar3;
  (param_1->CurrentDataChannel).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return true;
}

// PopContext @ 143702fb0

void __thiscall FChaosVDThreadContext::PopContext(FChaosVDThreadContext *this)

{
  TArray<FChaosVDContext,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  ForElementType<FChaosVDContext> FVar5;
  void *_Src;
  
  if (0 < (this->LocalContextStack).ArrayNum) {
    pTVar1 = &this->LocalContextStack;
    FVar5 = (this->LocalContextStack).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FChaosVDContext>)0x0) {
      FVar5 = (ForElementType<FChaosVDContext>)pTVar1;
    }
    pTVar3 = (TReferenceControllerBase<1> *)
             ((longlong *)((longlong)FVar5 + -8))[(longlong)(this->LocalContextStack).ArrayNum * 4];
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar5 = (this->LocalContextStack).AllocatorInstance.SecondaryData;
    iVar4 = (this->LocalContextStack).ArrayNum;
    if (FVar5 == (ForElementType<FChaosVDContext>)0x0) {
      FVar5 = (ForElementType<FChaosVDContext>)pTVar1;
    }
    _Src = (void *)((longlong)iVar4 * 0x20 + (longlong)FVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)_Src + -8));
    iVar4 = (this->LocalContextStack).ArrayNum - iVar4;
    if (iVar4 != 0) {
      memmove((void *)((longlong)_Src + -0x20),_Src,(longlong)iVar4 << 5);
    }
    piVar2 = &(this->LocalContextStack).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FChaosVDContext>_>
              (0x20,8,&pTVar1->AllocatorInstance,(this->LocalContextStack).ArrayNum,
               &(this->LocalContextStack).ArrayMax);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// PushContext @ 143703240

void __thiscall
FChaosVDThreadContext::PushContext(FChaosVDThreadContext *this,FChaosVDContext *param_1)

{
  TArray<FChaosVDContext,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FChaosVDContext> FVar6;
  int *piVar7;
  
  bVar4 = FChaosVisualDebuggerTrace::IsTracing();
  if (bVar4) {
    FVar6 = (this->LocalContextStack).AllocatorInstance.SecondaryData;
    pTVar1 = &this->LocalContextStack;
    if (FVar6 == (ForElementType<FChaosVDContext>)0x0) {
      FVar6 = (ForElementType<FChaosVDContext>)pTVar1;
    }
    if (((ulonglong)FVar6 <= param_1) &&
       (param_1 < (FChaosVDContext *)
                  ((longlong)(this->LocalContextStack).ArrayMax * 0x20 + (longlong)FVar6))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->LocalContextStack).ArrayNum;
    piVar7 = &(this->LocalContextStack).ArrayMax;
    if (iVar5 == *piVar7) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FChaosVDContext>_>
                        (0x820,&pTVar1->AllocatorInstance,piVar7);
    }
    (this->LocalContextStack).ArrayNum = iVar5 + 1;
    FVar6 = (this->LocalContextStack).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FChaosVDContext>)0x0) {
      FVar6 = (ForElementType<FChaosVDContext>)pTVar1;
    }
    piVar7 = (int *)((longlong)iVar5 * 0x20 + (longlong)FVar6);
    *piVar7 = param_1->OwnerID;
    piVar7[1] = param_1->Id;
    piVar7[2] = param_1->Type;
    piVar7[3] = param_1->Attributes;
    *(FChaosVDOptionalDataChannel **)(piVar7 + 4) = (param_1->CurrentDataChannel).Object;
    pTVar2 = (param_1->CurrentDataChannel).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(piVar7 + 6) = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return;
}

// ~FChaosVDThreadContext @ 14373f140

void __thiscall FChaosVDThreadContext::~FChaosVDThreadContext(FChaosVDThreadContext *this)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FChaosVDContext> FVar3;
  
  this->_padding_ = (longlong)&___7FChaosVDThreadContext__6B_;
  if ((this->RecordingStoppedHandle).ID != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    FVar1.ID = (this->RecordingStoppedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::RecordingStopDelegate,FVar1);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  }
  pFVar2 = (this->CVDDataBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->LocalContextStack).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<FChaosVDContext>)0x0) {
    FVar3 = (ForElementType<FChaosVDContext>)&this->LocalContextStack;
  }
  DestructItems<FChaosVDContext,int>((FChaosVDContext *)FVar3,(this->LocalContextStack).ArrayNum);
  FVar3 = (this->LocalContextStack).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FChaosVDContext>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TThreadSingleton<FChaosVDThreadContext>::~TThreadSingleton<FChaosVDThreadContext>
            ((TThreadSingleton<FChaosVDThreadContext> *)this);
  return;
}

