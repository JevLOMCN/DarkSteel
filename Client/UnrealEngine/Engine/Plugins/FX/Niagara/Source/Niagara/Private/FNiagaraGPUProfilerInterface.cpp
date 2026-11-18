// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// PostResults @ 1492fbe40

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraGPUProfilerInterface::PostResults
          (FNiagaraGPUProfilerInterface *this,TSharedPtr<FNiagaraGpuFrameResults,1> *param_1)

{
  ulong64 *puVar1;
  int iVar2;
  int iVar3;
  FNiagaraGpuFrameResults *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  UNiagaraComponent *this_00;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  FParticlePerfStatsContext local_68;
  code *local_48 [2];
  undefined **local_38;
  FNiagaraGpuFrameResults *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined8 local_20;
  
  if (param_1->Object == (FNiagaraGpuFrameResults *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = param_1->Object;
  iVar2 = (pFVar4->DispatchResults).ArrayNum;
  pFVar9 = (pFVar4->DispatchResults).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar2 * 0x38;
  while( true ) {
    if ((pFVar4->DispatchResults).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraGpuFrameResults::FDispatchResults,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar10) break;
    this_00 = (UNiagaraComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar9 + 4));
    if (this_00 == (UNiagaraComponent *)0x0) break;
    pUVar8 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    iVar3 = (int)pUVar8->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar8->_padding_)) break;
    UNiagaraComponent::GetPerfStatsContext(this_00,&local_68);
    lVar5 = *(longlong *)(pFVar9 + 0x30);
    if (local_68.WorldStats != (FParticlePerfStats *)0x0) {
      ((local_68.WorldStats)->GPUStats).NumInstances =
           ((local_68.WorldStats)->GPUStats).NumInstances + (ulonglong)((byte)*pFVar9 & 1);
      puVar1 = &((local_68.WorldStats)->GPUStats).TotalMicroseconds;
      *puVar1 = *puVar1 + lVar5;
    }
    lVar5 = *(longlong *)(pFVar9 + 0x30);
    if (local_68.SystemStats != (FParticlePerfStats *)0x0) {
      ((local_68.SystemStats)->GPUStats).NumInstances =
           ((local_68.SystemStats)->GPUStats).NumInstances + (ulonglong)((byte)*pFVar9 & 1);
      puVar1 = &((local_68.SystemStats)->GPUStats).TotalMicroseconds;
      *puVar1 = *puVar1 + lVar5;
    }
    lVar5 = *(longlong *)(pFVar9 + 0x30);
    if (local_68.ComponentStats != (FParticlePerfStats *)0x0) {
      ((local_68.ComponentStats)->GPUStats).NumInstances =
           ((local_68.ComponentStats)->GPUStats).NumInstances + (ulonglong)((byte)*pFVar9 & 1);
      puVar1 = &((local_68.ComponentStats)->GPUStats).TotalMicroseconds;
      *puVar1 = *puVar1 + lVar5;
    }
    pFVar9 = pFVar9 + 0x38;
  }
  TMulticastDelegate<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&OnFrameResults_RenderThread,param_1);
  local_28 = (param_1->SharedReferenceCount).ReferenceController;
  local_30 = param_1->Object;
  if (local_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraGPUProfilerInterface::PostResults'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraGPUProfilerInterface::PostResults'::__l2::<lambda_1>,void>
                ::Call;
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

