// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FGPUSceneWriteDelegate @ 1448ed230

FGPUSceneWriteDelegate * __thiscall
FGPUSceneWriteDelegate::FGPUSceneWriteDelegate
          (FGPUSceneWriteDelegate *this,
          TDelegate<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  this->_padding_ = (longlong)&___7FGPUSceneWriteDelegate__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// CreateInternal @ 144909cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGPUSceneWriteDelegateRef __cdecl
FGPUSceneWriteDelegate::CreateInternal
          (FMeshElementCollector *param_1,
          TDelegate<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  bool bVar5;
  
  plVar1 = *(longlong **)(param_2 + 0xb);
  (param_1->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data = (void **)0x0;
  puVar2 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x30,8);
  puVar2[1] = 0;
  *puVar2 = &
            ___7__TObject_VFGPUSceneWriteDelegate_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  lVar3 = *plVar1;
  do {
    puVar2[1] = lVar3;
    LOCK();
    lVar4 = *plVar1;
    bVar5 = lVar3 == lVar4;
    if (bVar5) {
      *plVar1 = (longlong)puVar2;
      lVar4 = lVar3;
    }
    UNLOCK();
    lVar3 = lVar4;
  } while (!bVar5);
  puVar2[2] = &___7FGPUSceneWriteDelegate__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar2 + 3),in_R8);
  (param_1->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data = (void **)(puVar2 + 2);
  return (FGPUSceneWriteDelegateRef)(FGPUSceneWriteDelegate *)param_1;
}

// Execute @ 144917fd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUSceneWriteDelegate::Execute
          (FGPUSceneWriteDelegate *this,FRDGBuilder *param_1,FGPUSceneWriteDelegateParams *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Delegate,&local_38);
  puVar1 = &(this->Delegate).field_0x8;
  if ((*(int *)&(this->Delegate).field_0x10 != 0) &&
     (plVar5 = *(longlong **)puVar1, plVar5 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar5 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      goto LAB_14491805f;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Delegate.IsBound()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                     ,0xa9d,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14491805f:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Delegate,&local_20);
  if (*(int *)&(this->Delegate).field_0x10 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)puVar1;
  }
  (**(code **)(*plVar5 + 0x60))(plVar5,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  return;
}

