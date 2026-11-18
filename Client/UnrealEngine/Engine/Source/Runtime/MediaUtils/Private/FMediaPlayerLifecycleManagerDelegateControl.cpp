// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 4

// ~FMediaPlayerLifecycleManagerDelegateControl @ 146bf3890

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlayerLifecycleManagerDelegateControl::~FMediaPlayerLifecycleManagerDelegateControl
          (FMediaPlayerLifecycleManagerDelegateControl *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  longlong *plVar5;
  FMediaPlayerFacade *pFVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  this->_padding_ = (longlong)&___7FMediaPlayerLifecycleManagerDelegateControl__6B_;
  if (this->SubmittedRequest == false) {
    pTVar8 = (this->Facade).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar8->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146bf38d0;
        }
        LOCK();
        aVar7 = pTVar8->SharedReferenceCount;
        bVar9 = aVar3 == aVar7;
        if (bVar9) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar7 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar7;
      } while (!bVar9);
      pFVar6 = (this->Facade).Object;
      if (pFVar6 != (FMediaPlayerFacade *)0x0) {
        (**(code **)pFVar6->_padding_)(&pFVar6->_padding_,5);
      }
    }
LAB_146bf38d0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  pTVar8 = (this->Facade).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7IControl_IMediaPlayerLifecycleManagerDelegate__6B_;
  return;
}

// GetFacade @ 146bfea20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TSharedPtr<FMediaPlayerFacade,1> * __thiscall
FMediaPlayerLifecycleManagerDelegateControl::GetFacade
          (FMediaPlayerLifecycleManagerDelegateControl *this,
          TSharedPtr<FMediaPlayerFacade,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FMediaPlayerFacade *)0x0;
  pTVar1 = (this->Facade).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->Facade).Object;
  }
  return __return_storage_ptr__;
}

// GetMediaPlayerInstanceID @ 146bfef00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

ulong64 __thiscall
FMediaPlayerLifecycleManagerDelegateControl::GetMediaPlayerInstanceID
          (FMediaPlayerLifecycleManagerDelegateControl *this)

{
  return this->InstanceID;
}

// SubmitOpenRequest @ 146c0de20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaPlayerLifecycleManagerDelegateControl::SubmitOpenRequest
          (FMediaPlayerLifecycleManagerDelegateControl *this,
          TSharedPtr<IMediaPlayerLifecycleManagerDelegate::IOpenRequest,1> *param_1)

{
  FMediaPlayerFacade *this_00;
  IOpenRequest *pIVar1;
  ulong64 uVar2;
  code *pcVar3;
  atomic<int> aVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  IMediaPlayerFactory *pIVar7;
  FMediaPlayerOptions *pFVar8;
  IMediaOptions *pIVar9;
  FString *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  bool bVar17;
  TSharedPtr<IMediaPlayer,1> local_58;
  TSharedPtr<IMediaPlayerLifecycleManagerDelegate::IControl,1> local_48;
  
  pTVar15 = (this->Facade).WeakReferenceCount.ReferenceController;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar15->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146c0de52;
      }
      LOCK();
      aVar6 = pTVar15->SharedReferenceCount;
      bVar16 = aVar4 == aVar6;
      if (bVar16) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar16);
    this_00 = (this->Facade).Object;
    if (this_00 != (FMediaPlayerFacade *)0x0) {
      pIVar1 = param_1->Object;
      uVar2 = this->InstanceID;
      bVar16 = (bool)(**(code **)((longlong)*pIVar1 + 0x28))(pIVar1);
      local_58.Object = *(IMediaPlayer **)(pIVar1 + 0x20);
      local_58.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pIVar1 + 0x21);
      if ((IOpenRequest)local_58.SharedReferenceCount.ReferenceController != (IOpenRequest)0x0) {
        LOCK();
        *(int *)((longlong)local_58.SharedReferenceCount.ReferenceController + 8) =
             *(int *)((longlong)local_58.SharedReferenceCount.ReferenceController + 8) + 1;
        UNLOCK();
      }
      pIVar7 = (IMediaPlayerFactory *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      pFVar8 = (FMediaPlayerOptions *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
      pIVar9 = (IMediaOptions *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      pFVar10 = (FString *)(**(code **)((longlong)*pIVar1 + 8))();
      pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      pTVar13 = pTVar12;
      pTVar14 = pTVar11;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar11->SharedReferenceCount;
        do {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          pTVar14 = pTVar12;
          if (aVar4 == (atomic<int>)0x0) goto LAB_146c0df37;
          LOCK();
          aVar6 = pTVar11->SharedReferenceCount;
          bVar17 = aVar4 == aVar6;
          if (bVar17) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar17);
        pTVar13 = (TReferenceControllerBase<1> *)this->_padding_;
        pTVar14 = pTVar11;
      }
LAB_146c0df37:
      pTVar11 = (TReferenceControllerBase<1> *)&pTVar13->SharedReferenceCount;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar11 = pTVar12;
      }
      if ((pTVar11 != (TReferenceControllerBase<1> *)&this->_padding_) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar17) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar17) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = (IControl *)pTVar13;
      local_48.SharedReferenceCount.ReferenceController = pTVar14;
      bVar16 = FMediaPlayerFacade::ContinueOpen
                         (this_00,&local_48,pFVar10,pIVar9,pFVar8,pIVar7,&local_58,bVar16,uVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      if (bVar16) {
        this->SubmittedRequest = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      return true;
    }
  }
LAB_146c0de52:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return false;
}

