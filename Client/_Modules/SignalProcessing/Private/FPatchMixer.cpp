// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 10

// AddNewInput @ 1444f5c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPatchInput * __thiscall
Audio::FPatchMixer::AddNewInput
          (FPatchMixer *this,FPatchInput *__return_storage_ptr__,int param_1,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  atomic<int> *paVar2;
  FScriptContainerElement *pFVar3;
  FPatchOutput *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  FPatchInput *pFVar10;
  longlong lVar11;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  lpCriticalSection = &this->PendingNewInputsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar9 = ::operator_new(0x60);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFPatchOutput_Audio___00_SharedPointerInternals__6B_;
    FPatchOutput::FPatchOutput((FPatchOutput *)(pTVar9 + 1),param_1,param_2);
    local_38 = pTVar9 + 1;
    if (local_38 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FPatchInput *)(*pcVar5)();
        return pFVar10;
      }
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    pTStack_30 = pTVar9;
  }
  pFVar3 = (this->PendingNewInputs).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar3 + (longlong)(this->PendingNewInputs).ArrayMax * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FPatchInput *)(*pcVar5)();
      return pFVar10;
    }
  }
  uVar7 = (this->PendingNewInputs).ArrayNum;
  piVar1 = &(this->PendingNewInputs).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  pFVar3 = (this->PendingNewInputs).AllocatorInstance.Data;
  (this->PendingNewInputs).ArrayNum = uVar7 + 1;
  lVar11 = (longlong)(int)uVar7;
  *(TReferenceControllerBase<1> **)(pFVar3 + lVar11 * 0x10) = local_38;
  *(TReferenceControllerBase<1> **)(pFVar3 + lVar11 * 0x10 + 8) = pTStack_30;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  uVar8 = 0;
  if ((int)uVar7 < (this->PendingNewInputs).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FPatchInput *)(*pcVar5)();
      return pFVar10;
    }
  }
  pFVar3 = (this->PendingNewInputs).AllocatorInstance.Data;
  (__return_storage_ptr__->OutputHandle).Object = *(FPatchOutput **)(pFVar3 + lVar11 * 0x10);
  pTVar9 = *(TReferenceControllerBase<1> **)(pFVar3 + lVar11 * 0x10 + 8);
  (__return_storage_ptr__->OutputHandle).SharedReferenceCount.ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = (__return_storage_ptr__->OutputHandle).Object;
  __return_storage_ptr__->PushCallsCounter = 0;
  if (pFVar4 != (FPatchOutput *)0x0) {
    LOCK();
    paVar2 = &pFVar4->NumAliveInputs;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// AddNewInput @ 1444f5e80

void __thiscall Audio::FPatchMixer::AddNewInput(FPatchMixer *this,FPatchInput *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FPatchInput *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if ((param_1->OutputHandle).Object != (FPatchOutput *)0x0) {
    lpCriticalSection = &this->PendingNewInputsCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (FPatchInput *)(this->PendingNewInputs).AllocatorInstance.Data;
    if ((pFVar2 <= param_1) &&
       (param_1 < (FPatchInput *)(&pFVar2->OutputHandle + (this->PendingNewInputs).ArrayMax))) {
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
    iVar6 = (this->PendingNewInputs).ArrayNum;
    piVar1 = &(this->PendingNewInputs).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->PendingNewInputs).ArrayNum = iVar6 + 1;
    pFVar7 = (this->PendingNewInputs).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    *(FPatchOutput **)pFVar7 = (param_1->OutputHandle).Object;
    pTVar3 = (param_1->OutputHandle).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// CleanUpDisconnectedPatches @ 1444f7830

void __thiscall Audio::FPatchMixer::CleanUpDisconnectedPatches(FPatchMixer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  TArray<TSharedPtr<Audio::FPatchOutput,1>,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  lpCriticalSection = &this->InputDeletionCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar9 = (this->CurrentInputs).ArrayNum;
    pFVar10 = (this->CurrentInputs).AllocatorInstance.Data;
    pFVar11 = pFVar10 + (longlong)iVar9 * 0x10;
    while( true ) {
      if ((this->CurrentInputs).ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<Audio::FPatchOutput,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar11) break;
      if (*(longlong *)pFVar10 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Patch.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultithreadedPatching.cpp"
                           ,0x203,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(longlong *)pFVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar2 = &this->DisconnectedInputs;
      if (*(int *)(*(longlong *)pFVar10 + 0x44) == 0) {
        if ((*(longlong *)pFVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        pFVar13 = (FScriptContainerElement *)(*(longlong *)pFVar10 + 0x40);
        if (((pFVar3 <= pFVar13) &&
            (pFVar13 < pFVar3 + (longlong)(this->DisconnectedInputs).ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (this->DisconnectedInputs).ArrayNum;
        piVar1 = &(this->DisconnectedInputs).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->DisconnectedInputs).ArrayNum = iVar6 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             *(undefined4 *)pFVar13;
      }
      pFVar10 = pFVar10 + 0x10;
    }
    local_res18 = (this->DisconnectedInputs).ArrayNum;
    uVar8 = (ulonglong)(int)local_res18;
    pFVar10 = (this->DisconnectedInputs).AllocatorInstance.Data;
    local_res20 = pFVar10 + uVar8 * 4;
    while( true ) {
      pFVar11 = local_res20;
      if ((this->DisconnectedInputs).ArrayNum != (int)uVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar11) {
        (this->DisconnectedInputs).ArrayNum = 0;
        if ((this->DisconnectedInputs).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(this->DisconnectedInputs).AllocatorInstance,0,
                     &(this->DisconnectedInputs).ArrayMax);
        }
                    /* WARNING: Could not recover jumptable at 0x0001444f7cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
      lpCriticalSection_00 = &this->PendingNewInputsCriticalSection;
      if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) break;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      iVar9 = (this->PendingNewInputs).ArrayNum;
      uVar12 = 0;
      if (iVar9 < 1) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      }
      else {
        lVar14 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar12 < iVar9) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar11 = (this->PendingNewInputs).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar11 + lVar14) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (this->PendingNewInputs).ArrayNum;
          if (*(int *)pFVar10 == *(int *)(*(longlong *)(pFVar11 + lVar14) + 0x40)) {
            uVar7 = 0;
            if ((int)uVar12 < iVar9) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            TArray<TSharedPtr<Audio::FPatchOutput,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (&this->PendingNewInputs,uVar12);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)this,(this->PendingNewInputs).ArrayNum,
                       &(this->PendingNewInputs).ArrayMax);
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
            goto LAB_1444f7c8b;
          }
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 0x10;
        } while ((int)uVar12 < iVar9);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      }
      this_00 = &this->CurrentInputs;
      uVar12 = 0;
      if (0 < (this->CurrentInputs).ArrayNum) {
        lVar14 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar12 < (this->CurrentInputs).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar11 = (this_00->AllocatorInstance).Data;
          if ((*(longlong *)(pFVar11 + lVar14) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)pFVar10 == *(int *)(*(longlong *)(pFVar11 + lVar14) + 0x40)) {
            uVar7 = 0;
            if ((int)uVar12 < (this->CurrentInputs).ArrayNum) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            TArray<TSharedPtr<Audio::FPatchOutput,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (this_00,uVar12);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&this_00->AllocatorInstance,(this->CurrentInputs).ArrayNum,
                       &(this->CurrentInputs).ArrayMax);
            break;
          }
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 0x10;
        } while ((int)uVar12 < (this->CurrentInputs).ArrayNum);
      }
LAB_1444f7c8b:
      uVar8 = (ulonglong)local_res18;
      pFVar10 = pFVar10 + 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConnectNewPatches @ 1444f9500

void __thiscall Audio::FPatchMixer::ConnectNewPatches(FPatchMixer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->PendingNewInputsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = (this->PendingNewInputs).ArrayNum;
  pFVar10 = (this->PendingNewInputs).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->PendingNewInputs).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FPatchOutput,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    pFVar8 = (this->CurrentInputs).AllocatorInstance.Data;
    if ((pFVar8 <= pFVar10) && (pFVar10 < pFVar8 + (longlong)(this->CurrentInputs).ArrayMax * 0x10))
    {
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
    iVar7 = (this->CurrentInputs).ArrayNum;
    piVar1 = &(this->CurrentInputs).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->CurrentInputs).AllocatorInstance,piVar1);
    }
    (this->CurrentInputs).ArrayNum = iVar7 + 1;
    pFVar8 = (this->CurrentInputs).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar8 = *(undefined8 *)pFVar10;
    lVar3 = *(longlong *)(pFVar10 + 8);
    *(longlong *)(pFVar8 + 8) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    pFVar10 = pFVar10 + 0x10;
  }
  piVar1 = &(this->PendingNewInputs).ArrayMax;
  pTVar4 = (TSharedPtr<Audio::FPatchOutput,1> *)(this->PendingNewInputs).AllocatorInstance.Data;
  iVar2 = (this->PendingNewInputs).ArrayNum;
  if ((this->PendingNewInputs).ArrayMax < 0) {
    DestructItems<TSharedPtr<Audio::FPatchOutput,1>,int>(pTVar4,iVar2);
    (this->PendingNewInputs).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<Audio::FPatchOutput,1>,int>(pTVar4,iVar2);
    (this->PendingNewInputs).ArrayNum = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001444f968e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// DisconnectAllInputs @ 1444fa000

void __thiscall Audio::FPatchMixer::DisconnectAllInputs(FPatchMixer *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar3;
  
  lpCriticalSection = &this->CurrentPatchesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &(this->CurrentInputs).ArrayMax;
    pTVar3 = (TSharedPtr<Audio::FPatchOutput,1> *)(this->CurrentInputs).AllocatorInstance.Data;
    iVar2 = (this->CurrentInputs).ArrayNum;
    if ((this->CurrentInputs).ArrayMax < 0) {
      DestructItems<TSharedPtr<Audio::FPatchOutput,1>,int>(pTVar3,iVar2);
      (this->CurrentInputs).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->CurrentInputs).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<Audio::FPatchOutput,1>,int>(pTVar3,iVar2);
      (this->CurrentInputs).ArrayNum = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001444fa083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// MaxNumberOfSamplesThatCanBePopped @ 144509a50

int __thiscall Audio::FPatchMixer::MaxNumberOfSamplesThatCanBePopped(FPatchMixer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->CurrentPatchesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  CleanUpDisconnectedPatches(this);
  ConnectNewPatches(this);
  iVar1 = (this->CurrentInputs).ArrayNum;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = 0xffffffff;
    pFVar7 = (this->CurrentInputs).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->CurrentInputs).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<Audio::FPatchOutput,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar8) break;
      lVar4 = *(longlong *)pFVar7;
      uVar5 = uVar6;
      if (lVar4 == 0) {
LAB_144509b06:
        uVar6 = uVar5;
        pFVar7 = pFVar7 + 0x10;
      }
      else {
        iVar2 = *(int *)(lVar4 + 0x1c);
        iVar3 = *(int *)(lVar4 + 0x20);
        if (iVar3 < iVar2) {
          uVar5 = iVar3 + (*(int *)(lVar4 + 0x18) - iVar2);
          if (uVar6 < uVar5) {
            uVar5 = uVar6;
          }
          goto LAB_144509b06;
        }
        uVar5 = iVar3 - iVar2;
        if (uVar6 < (uint)(iVar3 - iVar2)) {
          uVar5 = uVar6;
        }
        uVar6 = uVar5;
        pFVar7 = pFVar7 + 0x10;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar6;
}

// Num @ 14450b250

int __thiscall Audio::FPatchMixer::Num(FPatchMixer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->CurrentPatchesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    CleanUpDisconnectedPatches(this);
    ConnectNewPatches(this);
    iVar1 = (this->CurrentInputs).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopAudio @ 14450c720

int __thiscall
Audio::FPatchMixer::PopAudio(FPatchMixer *this,float *param_1,int param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->CurrentPatchesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  CleanUpDisconnectedPatches(this);
  ConnectNewPatches(this);
  memset(param_1,0,(longlong)param_2 << 2);
  iVar3 = (this->CurrentInputs).ArrayNum;
  iVar5 = 0;
  pFVar6 = (this->CurrentInputs).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->CurrentInputs).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FPatchOutput,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if (*(longlong *)pFVar6 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    iVar4 = FPatchOutput::MixInAudio(*(FPatchOutput **)pFVar6,param_1,param_2,param_3);
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    pFVar6 = pFVar6 + 0x10;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar5;
}

// RemovePatch @ 144516d30

void __thiscall Audio::FPatchMixer::RemovePatch(FPatchMixer *this,FPatchInput *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  
  if ((param_1->OutputHandle).Object != (FPatchOutput *)0x0) {
    lpCriticalSection = &this->InputDeletionCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((param_1->OutputHandle).Object == (FPatchOutput *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->DisconnectedInputs).AllocatorInstance.Data;
    piVar6 = &((param_1->OutputHandle).Object)->PatchID;
    if ((pFVar2 <= piVar6) && (piVar6 < pFVar2 + (longlong)(this->DisconnectedInputs).ArrayMax * 4))
    {
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
    iVar5 = (this->DisconnectedInputs).ArrayNum;
    piVar1 = &(this->DisconnectedInputs).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->DisconnectedInputs).AllocatorInstance,piVar1);
    }
    (this->DisconnectedInputs).ArrayNum = iVar5 + 1;
    *(int *)((this->DisconnectedInputs).AllocatorInstance.Data + (longlong)iVar5 * 4) = *piVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// WaitUntilNumSamplesAvailable @ 144520890

bool __thiscall
Audio::FPatchMixer::WaitUntilNumSamplesAvailable(FPatchMixer *this,int param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  double dVar12;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_88 [10];
  
  lpCriticalSection = &this->CurrentPatchesCriticalSection;
  uVar8 = (ulonglong)param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  CleanUpDisconnectedPatches(this);
  ConnectNewPatches(this);
  if ((this->CurrentInputs).ArrayNum != 0) {
    QueryPerformanceCounter(&local_res20);
    dVar5 = __real_4170000000000000;
    dVar4 = __real_408f400000000000;
    iVar1 = (this->CurrentInputs).ArrayNum;
    pFVar10 = (this->CurrentInputs).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
    dVar3 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    dVar11 = (double)uVar8 * __real_3f50624dd2f1a9fc;
LAB_144520960:
    do {
      if ((this->CurrentInputs).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<Audio::FPatchOutput,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar9) break;
      do {
        if (*(longlong *)pFVar10 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
        }
        bVar6 = FPatchOutput::WaitUntilNumSamplesAvailable
                          (*(FPatchOutput **)pFVar10,param_1,(uint)uVar8);
        if ((uint)uVar8 != 0xffffffff) {
          QueryPerformanceCounter(local_88);
          dVar12 = ((dVar3 + dVar11) -
                   ((double)local_88[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5)) *
                   dVar4;
          if (bVar6) {
            if (dVar12 <= 0.0) {
              uVar8 = 0;
              pFVar10 = pFVar10 + 0x10;
              goto LAB_144520960;
            }
          }
          else if (dVar12 <= 0.0) {
            bVar6 = false;
            goto LAB_144520a2e;
          }
          uVar8 = (ulonglong)dVar12;
        }
      } while (!bVar6);
      pFVar10 = pFVar10 + 0x10;
    } while( true );
  }
  bVar6 = true;
LAB_144520a2e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

