// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// DestroyObject @ 148eb4190

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<NDIDataTableLocal::FBuiltDataTable,FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable>,1>
::DestroyObject(TReferenceControllerWithDeleter<NDIDataTableLocal::FBuiltDataTable,FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable>,1>
                *this)

{
  FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable>::operator()
            ((FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable> *)&this->Object,
             this->Object);
  return;
}

// DestroyObject @ 14928ca20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>_>,1>
                *this)

{
  TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014928ca31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14928ca40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>_>,1>
                *this)

{
  TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient> *)0x0)
  {
                    /* WARNING: Could not recover jumptable at 0x00014928ca51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14928ca60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>_>,1>
                *this)

{
  TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient> *)
                0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014928ca71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14928ca80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>_>,1>
                *this)

{
  TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *)0x0)
  {
                    /* WARNING: Could not recover jumptable at 0x00014928ca91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14928caa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>_>,1>
                *this)

{
  TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014928cab1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14928cac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>_>,1>
                *this)

{
  TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient> *
                )0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014928cad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14928cae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>_>,1>
                *this)

{
  TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient> *)
                0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014928caf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14928cb00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNiagaraBoundsCalculator,SharedPointerInternals::DefaultDeleter<FNiagaraBoundsCalculator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNiagaraBoundsCalculator,SharedPointerInternals::DefaultDeleter<FNiagaraBoundsCalculator>,1>
                *this)

{
  FNiagaraBoundsCalculator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNiagaraBoundsCalculator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014928cb11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 149345190

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNiagaraRibbonRenderingFrameResources,SharedPointerInternals::DefaultDeleter<FNiagaraRibbonRenderingFrameResources>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNiagaraRibbonRenderingFrameResources,SharedPointerInternals::DefaultDeleter<FNiagaraRibbonRenderingFrameResources>,1>
                *this)

{
  if (this->Object != (FNiagaraRibbonRenderingFrameResources *)0x0) {
    FNiagaraRibbonRenderingFrameResources::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 14939cbe0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNiagaraSimCacheGpuResource,FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNiagaraSimCacheGpuResource,FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>,1>
                *this)

{
  FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>::operator()
            ((FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource> *)&this->Object,this->Object)
  ;
  return;
}

// DestroyObject @ 149440400

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNiagaraStatelessEmitterData,FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNiagaraStatelessEmitterData,FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>,1>
                *this)

{
  FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()
            ((FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData> *)&this->Object,this->Object
            );
  return;
}

