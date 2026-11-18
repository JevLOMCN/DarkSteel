// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FChaosDDScopeTaskContext @ 1436f5730

FChaosDDScopeTaskContext * __thiscall
ChaosDD::Private::FChaosDDScopeTaskContext::FChaosDDScopeTaskContext
          (FChaosDDScopeTaskContext *this,FChaosDDTaskParentContext *param_1)

{
  FTlsAutoCleanup FVar1;
  FTlsAutoCleanup FVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FChaosDDFrame *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  FTlsAutoCleanup local_18;
  FTlsAutoCleanup FStack_10;
  
  (this->Context).PreviousFrame.Object = (FChaosDDFrame *)0x0;
  (this->Context).PreviousFrame.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Context).bInContext = false;
  if (FChaosDDContext::bDebugDrawEnabled != false) {
    local_30 = local_res8;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,&::TlsSlot);
    FVar1 = pFVar3[2];
    FVar2 = pFVar3[3];
    if (FVar2 != (FTlsAutoCleanup)0x0) {
      LOCK();
      *(int *)((longlong)FVar2 + 8) = *(int *)((longlong)FVar2 + 8) + 1;
      UNLOCK();
    }
    local_28 = (this->Context).PreviousFrame.Object;
    pTStack_20 = (this->Context).PreviousFrame.SharedReferenceCount.ReferenceController;
    (this->Context).PreviousFrame.Object = (FChaosDDFrame *)FVar1;
    (this->Context).PreviousFrame.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)FVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
    FVar1 = (FTlsAutoCleanup)(param_1->Frame).SharedReferenceCount.ReferenceController;
    FVar2 = (FTlsAutoCleanup)(param_1->Frame).Object;
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
    (this->Context).bInContext = true;
  }
  return this;
}

// ~FChaosDDScopeTaskContext @ 1436f7330

void __thiscall
ChaosDD::Private::FChaosDDScopeTaskContext::~FChaosDDScopeTaskContext
          (FChaosDDScopeTaskContext *this)

{
  FTlsAutoCleanup FVar1;
  FTlsAutoCleanup FVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  FTlsAutoCleanup local_18;
  FTlsAutoCleanup FStack_10;
  
  if ((this->Context).bInContext != false) {
    local_28._8_8_ = local_res8;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
         ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_28,&::TlsSlot);
    FVar1 = (FTlsAutoCleanup)(this->Context).PreviousFrame.SharedReferenceCount.ReferenceController;
    FVar2 = (FTlsAutoCleanup)(this->Context).PreviousFrame.Object;
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
    if (this != (FChaosDDScopeTaskContext *)local_38) {
      (this->Context).PreviousFrame.Object = (FChaosDDFrame *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Context).PreviousFrame.SharedReferenceCount,
                 (FSharedReferencer<1> *)(local_38 + 8));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38._8_8_);
    (this->Context).bInContext = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Context).PreviousFrame.SharedReferenceCount.ReferenceController);
  return;
}

