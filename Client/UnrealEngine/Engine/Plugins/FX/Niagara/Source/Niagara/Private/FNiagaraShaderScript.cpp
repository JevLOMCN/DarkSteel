// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNiagaraShaderScript @ 149386fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraShaderScript * __thiscall
FNiagaraShaderScript::FNiagaraShaderScript(FNiagaraShaderScript *this,FNiagaraShaderScript *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FNiagaraCompileHash,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FNiagaraShaderMap *this_00;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  this->_padding_ = (longlong)&___7FNiagaraShaderScript__6B_;
  this->BaseVMScript = param_1->BaseVMScript;
  (this->GameThreadShaderMap).Reference = (FNiagaraShaderMap *)0x0;
  this_00 = (param_1->GameThreadShaderMap).Reference;
  (this->GameThreadShaderMap).Reference = this_00;
  if (this_00 != (FNiagaraShaderMap *)0x0) {
    FNiagaraShaderMap::AddRef(this_00);
  }
  this->RenderingThreadShaderMap = param_1->RenderingThreadShaderMap;
  (this->ScriptParametersMetadata).Object = (param_1->ScriptParametersMetadata).Object;
  pTVar5 = (param_1->ScriptParametersMetadata).SharedReferenceCount.ReferenceController;
  (this->ScriptParametersMetadata).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ScriptParametersMetadata_RT).Object = (param_1->ScriptParametersMetadata_RT).Object;
  pTVar5 = (param_1->ScriptParametersMetadata_RT).SharedReferenceCount.ReferenceController;
  (this->ScriptParametersMetadata_RT).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->AdditionalDefines;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AdditionalDefines).ArrayMax;
  iVar4 = (param_1->AdditionalDefines).ArrayNum;
  pFVar6 = (param_1->AdditionalDefines).AllocatorInstance.Data;
  (this->AdditionalDefines).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar4);
  }
  pTVar1 = &this->AdditionalVariables;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AdditionalVariables).ArrayMax;
  iVar4 = (param_1->AdditionalVariables).ArrayNum;
  pFVar6 = (param_1->AdditionalVariables).AllocatorInstance.Data;
  (this->AdditionalVariables).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar4);
  }
  this->bUsesRapidIterationParams = param_1->bUsesRapidIterationParams;
  FNiagaraCompileHash::FNiagaraCompileHash(&this->BaseCompileHash,&param_1->BaseCompileHash);
  uVar9 = (param_1->CompilerVersionId).B;
  uVar7 = (param_1->CompilerVersionId).C;
  uVar8 = (param_1->CompilerVersionId).D;
  pTVar3 = &this->ReferencedCompileHashes;
  piVar2 = &(this->ReferencedCompileHashes).ArrayMax;
  (this->CompilerVersionId).A = (param_1->CompilerVersionId).A;
  (this->CompilerVersionId).B = uVar9;
  (this->CompilerVersionId).C = uVar7;
  (this->CompilerVersionId).D = uVar8;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ReferencedCompileHashes).ArrayNum;
  pFVar6 = (param_1->ReferencedCompileHashes).AllocatorInstance.Data;
  (this->ReferencedCompileHashes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FNiagaraCompileHash,FNiagaraCompileHash,int>
              ((pTVar3->AllocatorInstance).Data,(FNiagaraCompileHash *)pFVar6,iVar4);
  }
  this->FeatureLevel = param_1->FeatureLevel;
  this->ShaderPlatform = param_1->ShaderPlatform;
  uVar9 = (ZPULL(*(undefined4 *)&this->field_0xa0,0,1) ^ param_1->bLoadedCookedShaderMapId) & 1 ^
          *(undefined4 *)&this->field_0xa0;
  *(uint *)&this->field_0xa0 = uVar9;
  uVar9 = (uVar9 ^ *(uint *)&param_1->field_0xa0) & 2 ^ uVar9;
  *(uint *)&this->field_0xa0 = uVar9;
  *(uint *)&this->field_0xa0 = (uVar9 ^ *(uint *)&param_1->field_0xa0) & 4 ^ uVar9;
  this->NumPermutations = param_1->NumPermutations;
  this->CachedData_RenderThread = param_1->CachedData_RenderThread;
  FNiagaraShaderMapId::FNiagaraShaderMapId(&this->CookedShaderMapId,&param_1->CookedShaderMapId);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnCompilationCompleteDelegate,
             (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &param_1->OnCompilationCompleteDelegate);
  ::FString::FString(&this->FriendlyName,&param_1->FriendlyName);
  return this;
}

