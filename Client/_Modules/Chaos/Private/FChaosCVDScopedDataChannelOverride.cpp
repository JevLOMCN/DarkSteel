// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FChaosCVDScopedDataChannelOverride @ 14373ca60

FChaosCVDScopedDataChannelOverride * __thiscall
FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
          (FChaosCVDScopedDataChannelOverride *this,
          TSharedRef<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  uint *puVar2;
  FChaosVDThreadContext *pFVar3;
  FChaosVDContext *pFVar4;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FChaosVDContext local_28;
  
  puVar2 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar2);
  pFVar4 = FChaosVDThreadContext::GetCurrentContext(pFVar3);
  if (pFVar4 != (FChaosVDContext *)0x0) {
    local_28.OwnerID = pFVar4->OwnerID;
    local_28.Id = pFVar4->Id;
    local_28.Type = pFVar4->Type;
    local_28.Attributes = pFVar4->Attributes;
    pTVar1 = (pFVar4->CurrentDataChannel).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.CurrentDataChannel.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    local_28.CurrentDataChannel.Object = param_1->Object;
    if (local_28.CurrentDataChannel.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.CurrentDataChannel.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.CurrentDataChannel.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    puVar2 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_30 = local_res8;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = (FChaosVDThreadContext *)
             FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar2);
    FChaosVDThreadContext::PushContext(pFVar3,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.CurrentDataChannel.SharedReferenceCount.ReferenceController);
  }
  return this;
}

