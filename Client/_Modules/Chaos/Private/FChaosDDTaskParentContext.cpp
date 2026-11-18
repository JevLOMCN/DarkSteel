// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FChaosDDTaskParentContext @ 1436f5840

FChaosDDTaskParentContext * __thiscall
ChaosDD::Private::FChaosDDTaskParentContext::FChaosDDTaskParentContext
          (FChaosDDTaskParentContext *this)

{
  FTlsAutoCleanup FVar1;
  FTlsAutoCleanup *pFVar2;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&::TlsSlot);
  (this->Frame).Object = (FChaosDDFrame *)pFVar2[2];
  FVar1 = pFVar2[3];
  (this->Frame).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar1;
  if (FVar1 != (FTlsAutoCleanup)0x0) {
    LOCK();
    *(int *)((longlong)FVar1 + 8) = *(int *)((longlong)FVar1 + 8) + 1;
    UNLOCK();
  }
  return this;
}

