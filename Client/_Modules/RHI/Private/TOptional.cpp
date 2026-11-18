// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 11

// ~TOptional<FDriverDenyListEntry> @ 145c47090

void __thiscall
TOptional<FDriverDenyListEntry>::~TOptional<FDriverDenyListEntry>
          (TOptional<FDriverDenyListEntry> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if (this->bIsSet != false) {
    pFVar1 = (this->TypedValue).DenylistReason.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (((this->TypedValue).DriverVersion.bIsSet != false) &&
       (pFVar1 = (this->TypedValue).DriverVersion.TypedValue.Version.Values.AllocatorInstance.Data,
       pFVar1 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar1);
    }
    if ((char)(this->TypedValue)._padding_ != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)(this->TypedValue)._padding_);
    }
    if ((*(int *)((longlong)&(this->TypedValue)._padding_ + 4) != -1) &&
       (pvVar2 = (void *)(this->TypedValue)._padding_, pvVar2 != (void *)0x0)) {
      FMemory::Free(pvVar2);
      return;
    }
  }
  return;
}

// operator-> @ 145c4b660

FCsvDeclaredStat * __thiscall
TOptional<FCsvDeclaredStat>::operator->(TOptional<FCsvDeclaredStat> *this)

{
  code *pcVar1;
  bool bVar2;
  FCsvDeclaredStat *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCsvDeclaredStat *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 145c4b6b0

FSuggestedDriverEntry * __thiscall
TOptional<FSuggestedDriverEntry>::operator->(TOptional<FSuggestedDriverEntry> *this)

{
  code *pcVar1;
  bool bVar2;
  FSuggestedDriverEntry *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSuggestedDriverEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator* @ 145c4b750

FString * __thiscall TOptional<FString>::operator*(TOptional<FString> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FString *)this;
}

// TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_> @ 145c84b60

TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
* __thiscall
TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
::
TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
          (TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
           *this)

{
  *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)&this->field0_0x0 = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
  return this;
}

// TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_> @ 145c84ba0

TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
* __thiscall
TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
::
TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
          (TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
           *this)

{
  *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)&this->field0_0x0 = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
  return this;
}

// TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_> @ 145c84be0

TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
* __thiscall
TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
::
TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
          (TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
           *this)

{
  *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)&this->field0_0x0 = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
  return this;
}

// ~TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_> @ 145c89890

void __thiscall
TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
::
~TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
          (TOptional<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_>
           *this)

{
  void *pvVar1;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this);
    return;
  }
  return;
}

// ~TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_> @ 145c898d0

void __thiscall
TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
::
~TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
          (TOptional<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_>
           *this)

{
  void *pvVar1;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this);
    return;
  }
  return;
}

// ~TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_> @ 145c89910

void __thiscall
TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
::
~TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
          (TOptional<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_>
           *this)

{
  void *pvVar1;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this);
    return;
  }
  return;
}

// GetValue @ 145cdee00

Type * __thiscall TOptional<enum_ERHIFeatureLevel::Type>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  Type *pTVar3;
  
  if (*(char *)((longlong)this + 4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (Type *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

