// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 1

// operator() @ 146bd9f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDefaultDelete<FFrameGrabber>::operator()
          (TDefaultDelete<FFrameGrabber> *this,FFrameGrabber *param_1)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  FSlateApplication *pFVar3;
  
  if (param_1 != (FFrameGrabber *)0x0) {
    if (((param_1->OnBackBufferReadyToPresent).ID != 0) &&
       (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
      pFVar3 = FSlateApplication::Get();
      FVar1.ID = (param_1->OnBackBufferReadyToPresent).ID;
      if (FVar1.ID != 0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                   (*(longlong *)&pFVar3->field_0x60 + 0x98),FVar1);
      }
    }
    if (0 < (param_1->OutstandingFrameCount).Counter) {
      FlushRenderingCommands();
    }
    DestructItems<TSharedPtr<IFramePayload,1>,int>
              ((TSharedPtr<IFramePayload,1> *)
               (param_1->RenderThread_PendingFramePayloads).AllocatorInstance.Data,
               (param_1->RenderThread_PendingFramePayloads).ArrayNum);
    pFVar2 = (param_1->RenderThread_PendingFramePayloads).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FFrameGrabber::FResolveSurface,int>
              ((FResolveSurface *)(param_1->Surfaces).AllocatorInstance.Data,
               (param_1->Surfaces).ArrayNum);
    pFVar2 = (param_1->Surfaces).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->CapturedFramesMutex);
    DestructItems<FCapturedFrameData,int>
              ((FCapturedFrameData *)(param_1->CapturedFrames).AllocatorInstance.Data,
               (param_1->CapturedFrames).ArrayNum);
    pFVar2 = (param_1->CapturedFrames).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0x88);
  }
  return;
}

