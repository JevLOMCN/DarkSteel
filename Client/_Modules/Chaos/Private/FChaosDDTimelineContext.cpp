// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// BeginFrame @ 1436f9170

void __thiscall
ChaosDD::Private::FChaosDDTimelineContext::BeginFrame
          (FChaosDDTimelineContext *this,TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *param_1,
          double param_2,double param_3)

{
  FTlsAutoCleanup *pFVar1;
  FTlsAutoCleanup FVar2;
  FTlsAutoCleanup FVar3;
  FChaosDDTimeline *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FTlsAutoCleanup *pFVar8;
  FSharedReferencer<1> FVar9;
  undefined1 local_res8 [8];
  FTlsAutoCleanup local_78;
  FSharedReferencer<1> FStack_70;
  code *local_68;
  undefined1 *local_60;
  FChaosDDFrame *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FChaosDDTimeline *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FTlsAutoCleanup local_38;
  FTlsAutoCleanup FStack_30;
  
  if ((this->bInContext != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bInContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosDebugDraw\\ChaosDDContext.cpp"
                         ,0x23,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (FChaosDDContext::bDebugDrawEnabled != false) {
    local_60 = local_res8;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,&::TlsSlot);
    FVar2 = pFVar8[2];
    pFVar1 = pFVar8 + 2;
    FVar3 = pFVar8[3];
    if (FVar3 != (FTlsAutoCleanup)0x0) {
      LOCK();
      *(int *)((longlong)FVar3 + 8) = *(int *)((longlong)FVar3 + 8) + 1;
      UNLOCK();
    }
    local_58 = (this->PreviousFrame).Object;
    pTStack_50 = (this->PreviousFrame).SharedReferenceCount.ReferenceController;
    (this->PreviousFrame).Object = (FChaosDDFrame *)FVar2;
    (this->PreviousFrame).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)FVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
    pFVar4 = param_1->Object;
    if (pFVar4 == (FChaosDDTimeline *)0x0) {
      local_78 = (FTlsAutoCleanup)0x0;
      FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FVar9.ReferenceController = FStack_70.ReferenceController;
      if (pFVar1 != &local_78) {
        *pFVar1 = (FTlsAutoCleanup)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar8 + 3),&FStack_70);
        FVar9.ReferenceController = FStack_70.ReferenceController;
      }
    }
    else {
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = (this->Timeline).Object;
      pTStack_40 = (this->Timeline).SharedReferenceCount.ReferenceController;
      (this->Timeline).Object = pFVar4;
      (this->Timeline).SharedReferenceCount.ReferenceController = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      if (((this->Timeline).Object == (FChaosDDTimeline *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FChaosDDTimeline::BeginFrame((this->Timeline).Object,param_2,param_3);
      if (((this->Timeline).Object == (FChaosDDTimeline *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->Timeline).Object;
      FVar2 = (FTlsAutoCleanup)(pFVar4->ActiveFrame).SharedReferenceCount.ReferenceController;
      FVar3 = (FTlsAutoCleanup)(pFVar4->ActiveFrame).Object;
      if (FVar2 != (FTlsAutoCleanup)0x0) {
        LOCK();
        *(int *)((longlong)FVar2 + 8) = *(int *)((longlong)FVar2 + 8) + 1;
        UNLOCK();
      }
      local_38 = *pFVar1;
      FStack_30 = pFVar8[3];
      *pFVar1 = FVar3;
      pFVar8[3] = FVar2;
      FVar9.ReferenceController = (TReferenceControllerBase<1> *)FStack_30;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
    this->bInContext = true;
  }
  return;
}

// EndFrame @ 1436feaf0

void __thiscall ChaosDD::Private::FChaosDDTimelineContext::EndFrame(FChaosDDTimelineContext *this)

{
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar1;
  FChaosDDTimeline *this_00;
  FTlsAutoCleanup FVar2;
  FTlsAutoCleanup FVar3;
  FTlsAutoCleanup *pFVar4;
  undefined1 local_res8 [8];
  undefined1 local_48 [32];
  undefined1 local_28 [16];
  FTlsAutoCleanup local_18;
  FTlsAutoCleanup FStack_10;
  
  if (this->bInContext != false) {
    this_00 = (this->Timeline).Object;
    if (this_00 != (FChaosDDTimeline *)0x0) {
      FChaosDDTimeline::EndFrame(this_00);
      local_48._0_8_ = (FChaosDDTimeline *)0x0;
      local_48._8_8_ = (TReferenceControllerBase<1> *)0x0;
      if (this != (FChaosDDTimelineContext *)local_48) {
        (this->Timeline).Object = (FChaosDDTimeline *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Timeline).SharedReferenceCount,(FSharedReferencer<1> *)(local_48 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_48._8_8_);
    }
    local_28._8_8_ = local_res8;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
         ::Call;
    pTVar1 = &this->PreviousFrame;
    pFVar4 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_28,&::TlsSlot);
    FVar2 = (FTlsAutoCleanup)(this->PreviousFrame).SharedReferenceCount.ReferenceController;
    FVar3 = (FTlsAutoCleanup)pTVar1->Object;
    if (FVar2 != (FTlsAutoCleanup)0x0) {
      LOCK();
      *(int *)((longlong)FVar2 + 8) = *(int *)((longlong)FVar2 + 8) + 1;
      UNLOCK();
    }
    local_18 = pFVar4[2];
    FStack_10 = pFVar4[3];
    pFVar4[2] = FVar3;
    pFVar4[3] = FVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_10);
    local_48._16_8_ = (FChaosDDFrame *)0x0;
    local_48._24_8_ = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(local_48 + 0x10)) {
      pTVar1->Object = (FChaosDDFrame *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PreviousFrame).SharedReferenceCount,
                 (FSharedReferencer<1> *)(local_48 + 0x18));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_48._24_8_);
    this->bInContext = false;
  }
  return;
}

