// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FInputModeDataBase @ 14834d3d0

void __thiscall FInputModeDataBase::~FInputModeDataBase(FInputModeDataBase *this)

{
  *this = (FInputModeDataBase)&___7FInputModeDataBase__6B_;
  return;
}

// GetDebugDisplayName @ 1483807a0

FString * __thiscall FInputModeDataBase::GetDebugDisplayName(FInputModeDataBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&::DisplayName,L"Base");
      atexit(`FInputModeDataBase::GetDebugDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// SetFocusAndLocking @ 1483a8c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FInputModeDataBase::SetFocusAndLocking
          (FInputModeDataBase *this,FReply *param_1,TSharedPtr<SWidget,1> *param_2,bool param_3,
          TSharedRef<SViewport,1> *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  undefined8 local_18 [2];
  
  pSVar3 = param_2->Object;
  if (pSVar3 != (SWidget *)0x0) {
    local_38.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pSVar3;
    if ((pSVar3 == (SWidget *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FReply::SetUserFocus(param_1,&local_38,SetDirectly,false);
  }
  if (param_3) {
    local_28.Object = (SWidget *)param_4->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FReply::LockMouseToWidget(param_1,&local_28);
  }
  else {
    param_1->bShouldReleaseMouseLock = 1;
    if (&param_1->MouseLockWidget != (TWeakPtr<SWidget,1> *)local_18) {
      pTVar4 = (param_1->MouseLockWidget).WeakReferenceCount.ReferenceController;
      (param_1->MouseLockWidget).Object = (SWidget *)0x0;
      (param_1->MouseLockWidget).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// ShouldFlushInputOnViewportFocus @ 1483ac420

bool __thiscall FInputModeDataBase::ShouldFlushInputOnViewportFocus(FInputModeDataBase *this)

{
  return true;
}

