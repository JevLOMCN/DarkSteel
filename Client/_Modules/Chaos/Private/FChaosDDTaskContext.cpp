// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// BeginThread @ 1436f9410

void __thiscall
ChaosDD::Private::FChaosDDTaskContext::BeginThread
          (FChaosDDTaskContext *this,FChaosDDTaskParentContext *param_1)

{
  FTlsAutoCleanup FVar1;
  FTlsAutoCleanup FVar2;
  code *pcVar3;
  bool bVar4;
  FTlsAutoCleanup *pFVar5;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FChaosDDFrame *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  FTlsAutoCleanup local_18;
  FTlsAutoCleanup FStack_10;
  
  if (this->bInContext != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosDebugDraw\\ChaosDDContext.cpp"
                       ,0x62,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (FChaosDDContext::bDebugDrawEnabled != false) {
    local_30 = local_res8;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,&::TlsSlot);
    FVar1 = pFVar5[2];
    FVar2 = pFVar5[3];
    if (FVar2 != (FTlsAutoCleanup)0x0) {
      LOCK();
      *(int *)((longlong)FVar2 + 8) = *(int *)((longlong)FVar2 + 8) + 1;
      UNLOCK();
    }
    local_28 = (this->PreviousFrame).Object;
    pTStack_20 = (this->PreviousFrame).SharedReferenceCount.ReferenceController;
    (this->PreviousFrame).Object = (FChaosDDFrame *)FVar1;
    (this->PreviousFrame).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)FVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
    FVar1 = (FTlsAutoCleanup)(param_1->Frame).SharedReferenceCount.ReferenceController;
    FVar2 = (FTlsAutoCleanup)(param_1->Frame).Object;
    if (FVar1 != (FTlsAutoCleanup)0x0) {
      LOCK();
      *(int *)((longlong)FVar1 + 8) = *(int *)((longlong)FVar1 + 8) + 1;
      UNLOCK();
    }
    local_18 = pFVar5[2];
    FStack_10 = pFVar5[3];
    pFVar5[2] = FVar2;
    pFVar5[3] = FVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_10);
    this->bInContext = true;
  }
  return;
}

// EndThread @ 1436fec80

void __thiscall ChaosDD::Private::FChaosDDTaskContext::EndThread(FChaosDDTaskContext *this)

{
  FTlsAutoCleanup FVar1;
  FTlsAutoCleanup FVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  FTlsAutoCleanup local_18;
  FTlsAutoCleanup FStack_10;
  
  if (this->bInContext != false) {
    local_28._8_8_ = local_res8;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
         ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_28,&::TlsSlot);
    FVar1 = (FTlsAutoCleanup)(this->PreviousFrame).SharedReferenceCount.ReferenceController;
    FVar2 = (FTlsAutoCleanup)(this->PreviousFrame).Object;
    if (FVar1 != (FTlsAutoCleanup)0x0) {
      LOCK();
      *(int *)((longlong)FVar1 + 8) = *(int *)((longlong)FVar1 + 8) + 1;
      UNLOCK();
    }
    local_18 = pFVar3[2];
    FStack_10 = pFVar3[3];
    pFVar3[2] = FVar2;
    pFVar3[3] = FVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_10);
    local_38._0_8_ = (FChaosDDFrame *)0x0;
    local_38._8_8_ = (TReferenceControllerBase<1> *)0x0;
    if (this != (FChaosDDTaskContext *)local_38) {
      (this->PreviousFrame).Object = (FChaosDDFrame *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PreviousFrame).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8))
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38._8_8_);
    this->bInContext = false;
  }
  return;
}

