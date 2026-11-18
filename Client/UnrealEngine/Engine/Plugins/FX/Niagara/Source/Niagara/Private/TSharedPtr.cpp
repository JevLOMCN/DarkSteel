// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 29

// operator-> @ 148e57470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraDataChannelData * __thiscall
TSharedPtr<FNiagaraDataChannelData,1>::operator->(TSharedPtr<FNiagaraDataChannelData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataChannelData *pFVar3;
  
  if (this->Object != (FNiagaraDataChannelData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataChannelData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 148e574c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraDataChannelDataProxy * __thiscall
TSharedPtr<FNiagaraDataChannelDataProxy,1>::operator->
          (TSharedPtr<FNiagaraDataChannelDataProxy,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataChannelDataProxy *pFVar3;
  
  if (this->Object != (FNiagaraDataChannelDataProxy *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataChannelDataProxy *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 148e57510

FNiagaraDataChannelLayoutInfo * __thiscall
TSharedPtr<FNiagaraDataChannelLayoutInfo,1>::operator->
          (TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataChannelLayoutInfo *pFVar3;
  
  if (this->Object != (FNiagaraDataChannelLayoutInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataChannelLayoutInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<NDIDataTableLocal::FBuiltDataTable,1><NDIDataTableLocal::FBuiltDataTable,FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable>_> @ 148e8b350

TSharedPtr<NDIDataTableLocal::FBuiltDataTable,1> * __thiscall
TSharedPtr<NDIDataTableLocal::FBuiltDataTable,1>::
TSharedPtr<NDIDataTableLocal::FBuiltDataTable,1><NDIDataTableLocal::FBuiltDataTable,FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable>_>
          (TSharedPtr<NDIDataTableLocal::FBuiltDataTable,1> *this,
          TRawPtrProxyWithDeleter<NDIDataTableLocal::FBuiltDataTable,FNiagaraRenderThreadDeletor<NDIDataTableLocal::FBuiltDataTable>_>
          *param_1)

{
  FBuiltDataTable *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFBuiltDataTable_NDIDataTableLocal__U__FNiagaraRenderThreadDeletor_VFBuiltDataTable_NDIDataTableLocal_____00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 148ea6f20

FNiagaraSimCacheGpuResource * __thiscall
TSharedPtr<FNiagaraSimCacheGpuResource,1>::operator->
          (TSharedPtr<FNiagaraSimCacheGpuResource,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraSimCacheGpuResource *pFVar3;
  
  if (this->Object != (FNiagaraSimCacheGpuResource *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraSimCacheGpuResource *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 149027230

FNiagaraSimStageExecutionData * __thiscall
TSharedPtr<FNiagaraSimStageExecutionData,1>::operator->
          (TSharedPtr<FNiagaraSimStageExecutionData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraSimStageExecutionData *pFVar3;
  
  if (this->Object != (FNiagaraSimStageExecutionData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraSimStageExecutionData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 149027280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraSystemInstanceController * __thiscall
TSharedPtr<FNiagaraSystemInstanceController,1>::operator->
          (TSharedPtr<FNiagaraSystemInstanceController,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraSystemInstanceController *pFVar3;
  
  if (this->Object != (FNiagaraSystemInstanceController *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraSystemInstanceController *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1490b99e0

FNiagaraDataChannelGameData * __thiscall
TSharedPtr<FNiagaraDataChannelGameData,1>::operator->
          (TSharedPtr<FNiagaraDataChannelGameData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataChannelGameData *pFVar3;
  
  if (this->Object != (FNiagaraDataChannelGameData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataChannelGameData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>_> @ 149265e50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>_>
          *param_1)

{
  TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFNiagaraDebugHUDSettingsData__VFNiagaraDebuggerClient____U__DefaultDeleter_V__TRawMessageHandler_UFNiagaraDebugHUDSettingsData__VFNiagaraDebuggerClient_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>_> @ 149265ec0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>_>
          *param_1)

{
  TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFNiagaraDebuggerConnectionClosed__VFNiagaraDebuggerClient____U__DefaultDeleter_V__TRawMessageHandler_UFNiagaraDebuggerConnectionClosed__VFNiagaraDebuggerClient_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>_> @ 149265f30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>_>
          *param_1)

{
  TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFNiagaraDebuggerExecuteConsoleCommand__VFNiagaraDebuggerClient____U__DefaultDeleter_V__TRawMessageHandler_UFNiagaraDebuggerExecuteConsoleCommand__VFNiagaraDebuggerClient_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>_> @ 149265fa0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>_>
          *param_1)

{
  TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFNiagaraDebuggerRequestConnection__VFNiagaraDebuggerClient____U__DefaultDeleter_V__TRawMessageHandler_UFNiagaraDebuggerRequestConnection__VFNiagaraDebuggerClient_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>_> @ 149266010

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>_>
          *param_1)

{
  TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFNiagaraOutlinerCaptureSettings__VFNiagaraDebuggerClient____U__DefaultDeleter_V__TRawMessageHandler_UFNiagaraOutlinerCaptureSettings__VFNiagaraDebuggerClient_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>_> @ 149266080

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>_>
          *param_1)

{
  TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFNiagaraRequestSimpleClientInfoMessage__VFNiagaraDebuggerClient____U__DefaultDeleter_V__TRawMessageHandler_UFNiagaraRequestSimpleClientInfoMessage__VFNiagaraDebuggerClient_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>_> @ 1492660f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>_>
          *param_1)

{
  TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFNiagaraSystemSimCacheCaptureRequest__VFNiagaraDebuggerClient____U__DefaultDeleter_V__TRawMessageHandler_UFNiagaraSystemSimCacheCaptureRequest__VFNiagaraDebuggerClient_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 14927c790

FNiagaraEmitterCompiledData * __thiscall
TSharedPtr<FNiagaraEmitterCompiledData_const_,1>::operator->
          (TSharedPtr<FNiagaraEmitterCompiledData_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraEmitterCompiledData *pFVar3;
  
  if (this->Object != (FNiagaraEmitterCompiledData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraEmitterCompiledData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14927c7e0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraScriptDebuggerInfo * __thiscall
TSharedPtr<FNiagaraScriptDebuggerInfo,1>::operator->(TSharedPtr<FNiagaraScriptDebuggerInfo,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraScriptDebuggerInfo *pFVar3;
  
  if (this->Object != (FNiagaraScriptDebuggerInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraScriptDebuggerInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14927c830

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReadback * __thiscall
TSharedPtr<FNiagaraDataSetReadback,1>::operator->(TSharedPtr<FNiagaraDataSetReadback,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataSetReadback *pFVar3;
  
  if (this->Object != (FNiagaraDataSetReadback *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataSetReadback *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14927c880

FNiagaraDebugHUDStatsListener * __thiscall
TSharedPtr<FNiagaraDebugHUDStatsListener,1>::operator->
          (TSharedPtr<FNiagaraDebugHUDStatsListener,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDebugHUDStatsListener *pFVar3;
  
  if (this->Object != (FNiagaraDebugHUDStatsListener *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDebugHUDStatsListener *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<FNiagaraRibbonCPUGeneratedVertexData> @ 149317f30

FNiagaraRibbonCPUGeneratedVertexData * __thiscall
TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1>::operator*<FNiagaraRibbonCPUGeneratedVertexData>
          (TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraRibbonCPUGeneratedVertexData *pFVar3;
  
  if (this->Object != (FNiagaraRibbonCPUGeneratedVertexData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraRibbonCPUGeneratedVertexData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 149337180

FNiagaraRibbonCPUGeneratedVertexData * __thiscall
TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1>::operator->
          (TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraRibbonCPUGeneratedVertexData *pFVar3;
  
  if (this->Object != (FNiagaraRibbonCPUGeneratedVertexData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraRibbonCPUGeneratedVertexData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1493371d0

FNiagaraRibbonIndexBuffer * __thiscall
TSharedPtr<FNiagaraRibbonIndexBuffer,1>::operator->(TSharedPtr<FNiagaraRibbonIndexBuffer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraRibbonIndexBuffer *pFVar3;
  
  if (this->Object != (FNiagaraRibbonIndexBuffer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraRibbonIndexBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 149337220

FNiagaraRibbonRenderingFrameResources * __thiscall
TSharedPtr<FNiagaraRibbonRenderingFrameResources,1>::operator->
          (TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraRibbonRenderingFrameResources *pFVar3;
  
  if (this->Object != (FNiagaraRibbonRenderingFrameResources *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraRibbonRenderingFrameResources *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<FNiagaraSimCacheGpuResource,1><FNiagaraSimCacheGpuResource,FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>_> @ 14937b6b0

TSharedPtr<FNiagaraSimCacheGpuResource,1> * __thiscall
TSharedPtr<FNiagaraSimCacheGpuResource,1>::
TSharedPtr<FNiagaraSimCacheGpuResource,1><FNiagaraSimCacheGpuResource,FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>_>
          (TSharedPtr<FNiagaraSimCacheGpuResource,1> *this,
          TRawPtrProxyWithDeleter<FNiagaraSimCacheGpuResource,FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>_>
          *param_1)

{
  FNiagaraSimCacheGpuResource *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFNiagaraSimCacheGpuResource__U__FNiagaraRenderThreadDeletor_UFNiagaraSimCacheGpuResource_____00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 1493d2310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraSystemSimulation * __thiscall
TSharedPtr<FNiagaraSystemSimulation,1>::operator->(TSharedPtr<FNiagaraSystemSimulation,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraSystemSimulation *pFVar3;
  
  if (this->Object != (FNiagaraSystemSimulation *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraSystemSimulation *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator=<FNiagaraStatelessEmitterData,FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>_> @ 149417b90

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TSharedPtr<FNiagaraStatelessEmitterData,1> * __thiscall
TSharedPtr<FNiagaraStatelessEmitterData,1>::
operator=<FNiagaraStatelessEmitterData,FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>_>
          (TSharedPtr<FNiagaraStatelessEmitterData,1> *this,
          TRawPtrProxyWithDeleter<FNiagaraStatelessEmitterData,FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>_>
          *param_1)

{
  FNiagaraStatelessEmitterData *pFVar1;
  TSharedPtr<FNiagaraStatelessEmitterData,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFNiagaraStatelessEmitterData__U__FNiagaraRenderThreadDeletor_UFNiagaraStatelessEmitterData_____00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FNiagaraStatelessEmitterData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 14942d4e0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraStatelessEmitterData * __thiscall
TSharedPtr<FNiagaraStatelessEmitterData_const_,1>::operator->
          (TSharedPtr<FNiagaraStatelessEmitterData_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraStatelessEmitterData *pFVar3;
  
  if (this->Object != (FNiagaraStatelessEmitterData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraStatelessEmitterData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14942d530

FNiagaraDataSetCompiledData * __thiscall
TSharedPtr<FNiagaraDataSetCompiledData,1>::operator->
          (TSharedPtr<FNiagaraDataSetCompiledData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataSetCompiledData *pFVar3;
  
  if (this->Object != (FNiagaraDataSetCompiledData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataSetCompiledData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14942d580

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraStatelessEmitterData * __thiscall
TSharedPtr<FNiagaraStatelessEmitterData,1>::operator->
          (TSharedPtr<FNiagaraStatelessEmitterData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraStatelessEmitterData *pFVar3;
  
  if (this->Object != (FNiagaraStatelessEmitterData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraStatelessEmitterData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

