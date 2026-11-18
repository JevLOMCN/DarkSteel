// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// UpdateProcessor_RenderThread @ 146a2b470

void __thiscall
FPostBufferBlurUpdaterProxy::UpdateProcessor_RenderThread
          (FPostBufferBlurUpdaterProxy *this,
          TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *param_1)

{
  float fVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateRHIPostBufferProcessorProxy *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  float fVar7;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = CVarUmgMaxPostBufferBlurStrength.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar1 = this->GaussianBlurStrength_RenderThread;
  fVar7 = fVar1;
  if ((-1 < pTVar5->ShadowedValue[1]) && (fVar7 = (float)pTVar5->ShadowedValue[1], fVar1 <= fVar7))
  {
    fVar7 = fVar1;
  }
  if ((pFVar3 == (FSlateRHIPostBufferProcessorProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(float *)&pFVar3[1]._padding_ = fVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

