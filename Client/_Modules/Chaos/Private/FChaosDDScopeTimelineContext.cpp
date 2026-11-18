// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FChaosDDScopeTimelineContext @ 1436f5800

FChaosDDScopeTimelineContext * __thiscall
ChaosDD::Private::FChaosDDScopeTimelineContext::FChaosDDScopeTimelineContext
          (FChaosDDScopeTimelineContext *this,
          TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *param_1,double param_2,double param_3)

{
  (this->Context).Timeline.Object = (FChaosDDTimeline *)0x0;
  (this->Context).Timeline.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Context).PreviousFrame.Object = (FChaosDDFrame *)0x0;
  (this->Context).PreviousFrame.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Context).bInContext = false;
  FChaosDDTimelineContext::BeginFrame(&this->Context,param_1,param_2,param_3);
  return this;
}

// ~FChaosDDScopeTimelineContext @ 1436f73f0

void __thiscall
ChaosDD::Private::FChaosDDScopeTimelineContext::~FChaosDDScopeTimelineContext
          (FChaosDDScopeTimelineContext *this)

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
  
  if ((this->Context).bInContext != false) {
    this_00 = (this->Context).Timeline.Object;
    if (this_00 != (FChaosDDTimeline *)0x0) {
      FChaosDDTimeline::EndFrame(this_00);
      local_48._0_8_ = (FChaosDDTimeline *)0x0;
      local_48._8_8_ = (TReferenceControllerBase<1> *)0x0;
      if (this != (FChaosDDScopeTimelineContext *)local_48) {
        (this->Context).Timeline.Object = (FChaosDDTimeline *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Context).Timeline.SharedReferenceCount,
                   (FSharedReferencer<1> *)(local_48 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_48._8_8_);
    }
    local_28._8_8_ = local_res8;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
         ::Call;
    pTVar1 = &(this->Context).PreviousFrame;
    pFVar4 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_28,&::TlsSlot);
    FVar2 = (FTlsAutoCleanup)(this->Context).PreviousFrame.SharedReferenceCount.ReferenceController;
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
                (&(this->Context).PreviousFrame.SharedReferenceCount,
                 (FSharedReferencer<1> *)(local_48 + 0x18));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_48._24_8_);
    (this->Context).bInContext = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Context).PreviousFrame.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Context).Timeline.SharedReferenceCount.ReferenceController);
  return;
}

