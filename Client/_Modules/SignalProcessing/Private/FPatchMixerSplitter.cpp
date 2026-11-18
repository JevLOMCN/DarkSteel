// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 6

// AddNewInput @ 1444f5f80

FPatchInput * __thiscall
Audio::FPatchMixerSplitter::AddNewInput
          (FPatchMixerSplitter *this,FPatchInput *__return_storage_ptr__,int param_1,float param_2)

{
  FPatchMixer::AddNewInput(&this->Mixer,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// AddNewInput @ 1444f5fa0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Audio::FPatchMixerSplitter::AddNewInput(FPatchMixerSplitter *this,FPatchInput *param_1)

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
    lpCriticalSection = &(this->Mixer).PendingNewInputsCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (FPatchInput *)(this->Mixer).PendingNewInputs.AllocatorInstance.Data;
    if ((pFVar2 <= param_1) &&
       (param_1 < (FPatchInput *)(&pFVar2->OutputHandle + (this->Mixer).PendingNewInputs.ArrayMax)))
    {
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
    iVar6 = (this->Mixer).PendingNewInputs.ArrayNum;
    piVar1 = &(this->Mixer).PendingNewInputs.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->Mixer).PendingNewInputs.ArrayNum = iVar6 + 1;
    pFVar7 = (this->Mixer).PendingNewInputs.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
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

// AddNewOutput @ 1444f60a0

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
Audio::FPatchMixerSplitter::AddNewOutput
          (FPatchMixerSplitter *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__,
          int param_1,float param_2)

{
  FPatchSplitter::AddNewPatch(&this->Splitter,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// AddNewOutput @ 1444f60d0

void __thiscall
Audio::FPatchMixerSplitter::AddNewOutput
          (FPatchMixerSplitter *this,TSharedPtr<Audio::FPatchOutput,1> *param_1)

{
  FPatchSplitter::AddNewPatch(&this->Splitter,param_1);
  return;
}

// ProcessAudio @ 14450dbe0

void __thiscall Audio::FPatchMixerSplitter::ProcessAudio(FPatchMixerSplitter *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FWindowsRecursiveMutex *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  
  pFVar14 = &(this->Mixer).CurrentPatchesCriticalSection;
  if (pFVar14 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar14);
    FPatchMixer::CleanUpDisconnectedPatches(&this->Mixer);
    FPatchMixer::ConnectNewPatches(&this->Mixer);
    iVar8 = (this->Mixer).CurrentInputs.ArrayNum;
    uVar13 = 0xffffffff;
    if (iVar8 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar14);
      uVar11 = 0xffffffff;
    }
    else {
      pFVar10 = (this->Mixer).CurrentInputs.AllocatorInstance.Data;
      uVar11 = 0xffffffff;
      pFVar12 = pFVar10 + (longlong)iVar8 * 0x10;
      while( true ) {
        if ((this->Mixer).CurrentInputs.ArrayNum != iVar8) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<Audio::FPatchOutput,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar10 == pFVar12) break;
        lVar16 = *(longlong *)pFVar10;
        uVar7 = uVar11;
        if (lVar16 == 0) {
LAB_14450dca1:
          uVar11 = uVar7;
          pFVar10 = pFVar10 + 0x10;
        }
        else {
          iVar6 = *(int *)(lVar16 + 0x1c);
          iVar3 = *(int *)(lVar16 + 0x20);
          if (iVar3 < iVar6) {
            uVar7 = iVar3 + (*(int *)(lVar16 + 0x18) - iVar6);
            if (uVar11 < uVar7) {
              uVar7 = uVar11;
            }
            goto LAB_14450dca1;
          }
          uVar7 = iVar3 - iVar6;
          if (uVar11 < (uint)(iVar3 - iVar6)) {
            uVar7 = uVar11;
          }
          uVar11 = uVar7;
          pFVar10 = pFVar10 + 0x10;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar14);
    }
    pFVar14 = &(this->Splitter).ConnectedOutputsCriticalSection;
    if (pFVar14 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar14);
      FPatchSplitter::AddPendingPatches(&this->Splitter);
      iVar8 = (this->Splitter).ConnectedOutputs.ArrayNum;
      if (iVar8 == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar14);
      }
      else {
        pFVar12 = (this->Splitter).ConnectedOutputs.AllocatorInstance.Data;
        uVar13 = 0xffffffff;
        pFVar10 = pFVar12 + (longlong)iVar8 * 0x18;
        while( true ) {
          if ((this->Splitter).ConnectedOutputs.ArrayNum != iVar8) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<Audio::FPatchInput,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pFVar12 == pFVar10) break;
          if ((*(longlong *)pFVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar16 = *(longlong *)pFVar12;
          iVar6 = *(int *)(lVar16 + 0x1c);
          if (*(int *)(lVar16 + 0x20) < iVar6) {
            iVar6 = *(int *)(lVar16 + 0x18) - iVar6;
          }
          else {
            iVar6 = -iVar6;
          }
          uVar9 = *(int *)(lVar16 + 0x18) + ~(*(int *)(lVar16 + 0x20) + iVar6);
          uVar7 = uVar13;
          if (((uVar9 != 0) ||
              ((*(longlong *)pFVar12 != 0 &&
               ((*(longlong *)(pFVar12 + 8) == 0 || (*(int *)(*(longlong *)(pFVar12 + 8) + 8) != 1))
               )))) && (uVar7 = uVar9, uVar13 < uVar9)) {
            uVar7 = uVar13;
          }
          uVar13 = uVar7;
          pFVar12 = pFVar12 + 0x18;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar14);
      }
      pFVar14 = &(this->Mixer).CurrentPatchesCriticalSection;
      if ((int)uVar13 < (int)uVar11) {
        uVar11 = uVar13;
      }
      if (0 < (int)uVar11) {
        piVar1 = &(this->IntermediateBuffer).ArrayMax;
        piVar2 = &(this->IntermediateBuffer).ArrayNum;
        *piVar2 = 0;
        if (*piVar1 < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,&(this->IntermediateBuffer).AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,uVar11,&(this->IntermediateBuffer).AllocatorInstance,piVar2,piVar1);
        pFVar10 = (this->IntermediateBuffer).AllocatorInstance.Data;
        local_res20 = pFVar10;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar14);
        FPatchMixer::CleanUpDisconnectedPatches(&this->Mixer);
        FPatchMixer::ConnectNewPatches(&this->Mixer);
        memset(pFVar10,0,(longlong)(int)uVar11 << 2);
        pFVar12 = local_res20;
        iVar8 = (this->Mixer).CurrentInputs.ArrayNum;
        uVar13 = 0;
        pFVar10 = (this->Mixer).CurrentInputs.AllocatorInstance.Data;
        pFVar15 = pFVar10 + (longlong)iVar8 * 0x10;
        while( true ) {
          if ((this->Mixer).CurrentInputs.ArrayNum != iVar8) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<Audio::FPatchOutput,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar10 == pFVar15) break;
          if ((*(longlong *)pFVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar7 = FPatchOutput::MixInAudio(*(FPatchOutput **)pFVar10,(float *)pFVar12,uVar11,false);
          if ((int)uVar13 < (int)uVar7) {
            uVar13 = uVar7;
          }
          pFVar10 = pFVar10 + 0x10;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar14);
        if ((uVar13 != uVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("PopResult == NumSamplesToForward",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultithreadedPatching.cpp"
                               ,0x2b7,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_res20 = (this->IntermediateBuffer).AllocatorInstance.Data;
        EnterCriticalSection((LPCRITICAL_SECTION)&(this->Splitter).ConnectedOutputsCriticalSection);
        FPatchSplitter::AddPendingPatches(&this->Splitter);
        pFVar10 = local_res20;
        iVar8 = (this->Splitter).ConnectedOutputs.ArrayNum;
        if ((iVar8 != 0) && (uVar13 = iVar8 - 1, -1 < (int)uVar13)) {
          lVar16 = (longlong)(int)uVar13 * 0x18;
          do {
            uVar7 = 0;
            if ((int)uVar13 < (this->Splitter).ConnectedOutputs.ArrayNum) {
              uVar7 = ~uVar13 >> 0x1f;
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
            iVar8 = FPatchInput::PushAudio
                              ((FPatchInput *)
                               ((this->Splitter).ConnectedOutputs.AllocatorInstance.Data + lVar16),
                               (float *)pFVar10,uVar11);
            if (iVar8 == -1) {
              uVar7 = 0;
              if ((int)uVar13 < (this->Splitter).ConnectedOutputs.ArrayNum) {
                uVar7 = ~uVar13 >> 0x1f;
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
              TArray<Audio::FPatchInput,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                        (&(this->Splitter).ConnectedOutputs,uVar13);
            }
            lVar16 = lVar16 + -0x18;
            uVar13 = uVar13 - 1;
          } while (-1 < (int)uVar13);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&(this->Splitter).ConnectedOutputsCriticalSection);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RemovePatch @ 144516e50

void __thiscall
Audio::FPatchMixerSplitter::RemovePatch(FPatchMixerSplitter *this,FPatchInput *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  
  if ((param_1->OutputHandle).Object != (FPatchOutput *)0x0) {
    lpCriticalSection = &(this->Mixer).InputDeletionCriticalSection;
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
    pFVar2 = (this->Mixer).DisconnectedInputs.AllocatorInstance.Data;
    piVar6 = &((param_1->OutputHandle).Object)->PatchID;
    if ((pFVar2 <= piVar6) &&
       (piVar6 < pFVar2 + (longlong)(this->Mixer).DisconnectedInputs.ArrayMax * 4)) {
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
    iVar5 = (this->Mixer).DisconnectedInputs.ArrayNum;
    piVar1 = &(this->Mixer).DisconnectedInputs.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Mixer).DisconnectedInputs.AllocatorInstance,piVar1);
    }
    (this->Mixer).DisconnectedInputs.ArrayNum = iVar5 + 1;
    *(int *)((this->Mixer).DisconnectedInputs.AllocatorInstance.Data + (longlong)iVar5 * 4) =
         *piVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

