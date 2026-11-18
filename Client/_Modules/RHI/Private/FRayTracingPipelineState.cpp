// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// FRayTracingPipelineState @ 145c88730

FRayTracingPipelineState * __thiscall
FRayTracingPipelineState::FRayTracingPipelineState
          (FRayTracingPipelineState *this,FRayTracingPipelineStateInitializer *param_1)

{
  FRHIRayTracingShader **ppFVar1;
  int iVar2;
  int iVar3;
  FRHIRayTracingShader **ppFVar4;
  TPairInitializer<FSHAHash_const_&,int_&&> local_res8;
  longlong *local_48;
  TPairInitializer<FSHAHash_const_&,int_&&> *local_40;
  
  iVar2 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRayTracingPipelineState__6B_;
  (this->RHIPipeline).Reference = (FRHIRayTracingPipelineState *)0x0;
  this->MaxLocalBindingSize = 0;
  this->HitsAcrossFrames = 0;
  this->LastFrameHit = 0;
  *(undefined8 *)&this->HitGroupShaderMap = 0;
  *(undefined8 *)&(this->HitGroupShaderMap).field_0x8 = 0;
  *(undefined8 *)&(this->HitGroupShaderMap).field_0x20 = 0;
  *(undefined4 *)&(this->HitGroupShaderMap).field_0x28 = 0;
  *(undefined4 *)&(this->HitGroupShaderMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HitGroupShaderMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HitGroupShaderMap).field_0x34 = 0;
  *(undefined8 *)&(this->HitGroupShaderMap).field_0x40 = 0;
  *(undefined4 *)&(this->HitGroupShaderMap).field_0x48 = 0;
  *(undefined8 *)&(this->CallableShaderMap).field_0x0 = 0;
  *(undefined8 *)&(this->CallableShaderMap).field_0x8 = 0;
  *(undefined8 *)&(this->CallableShaderMap).field_0x20 = 0;
  *(undefined4 *)&(this->CallableShaderMap).field_0x28 = 0;
  *(undefined4 *)&(this->CallableShaderMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CallableShaderMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CallableShaderMap).field_0x34 = 0;
  *(undefined8 *)&(this->CallableShaderMap).field_0x40 = 0;
  *(undefined4 *)&(this->CallableShaderMap).field_0x48 = 0;
  *(undefined8 *)&(this->MissShaderMap).field_0x0 = 0;
  *(undefined8 *)&(this->MissShaderMap).field_0x8 = 0;
  *(undefined8 *)&(this->MissShaderMap).field_0x20 = 0;
  *(undefined4 *)&(this->MissShaderMap).field_0x28 = 0;
  *(undefined4 *)&(this->MissShaderMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MissShaderMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MissShaderMap).field_0x34 = 0;
  *(undefined8 *)&(this->MissShaderMap).field_0x40 = 0;
  *(undefined4 *)&(this->MissShaderMap).field_0x48 = 0;
  (this->InUseCount).Counter = 0;
  ppFVar4 = (param_1->HitGroupTable).DataPtr;
  ppFVar1 = ppFVar4 + (param_1->HitGroupTable).ArrayNum;
  local_res8.Value = (int *)param_1;
  if (ppFVar4 != ppFVar1) {
    local_40 = &local_res8;
    iVar3 = iVar2;
    do {
      local_48 = &(*ppFVar4)->_padding_;
      local_res8.Key._0_4_ = iVar3;
      TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FSHAHash_const_&,int_&&>_>
                ((TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
                  *)&this->HitGroupShaderMap,
                 (TPairInitializer<FSHAHash_const_&,int_&&> *)&stack0x00000018,(bool *)&local_48);
      ppFVar4 = ppFVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (ppFVar4 != ppFVar1);
  }
  ppFVar4 = ((TArrayView<FRHIRayTracingShader_*,int> *)((longlong)local_res8.Value + 0x70))->DataPtr
  ;
  ppFVar1 = ppFVar4 + ((TArrayView<FRHIRayTracingShader_*,int> *)((longlong)local_res8.Value + 0x70)
                      )->ArrayNum;
  if (ppFVar4 != ppFVar1) {
    local_40 = &local_res8;
    iVar3 = iVar2;
    do {
      local_48 = &(*ppFVar4)->_padding_;
      local_res8.Key._0_4_ = iVar3;
      TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FSHAHash_const_&,int_&&>_>
                ((TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
                  *)&this->CallableShaderMap,
                 (TPairInitializer<FSHAHash_const_&,int_&&> *)&stack0x00000018,(bool *)&local_48);
      ppFVar4 = ppFVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (ppFVar4 != ppFVar1);
  }
  ppFVar4 = ((TArrayView<FRHIRayTracingShader_*,int> *)((longlong)local_res8.Value + 0x50))->DataPtr
  ;
  ppFVar1 = ppFVar4 + ((TArrayView<FRHIRayTracingShader_*,int> *)((longlong)local_res8.Value + 0x50)
                      )->ArrayNum;
  if (ppFVar4 != ppFVar1) {
    local_40 = (TPairInitializer<FSHAHash_const_&,int_&&> *)&local_res8.Value;
    do {
      local_48 = &(*ppFVar4)->_padding_;
      local_res8.Value = (int *)CONCAT44(local_res8.Value._4_4_,iVar2);
      iVar2 = iVar2 + 1;
      TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FSHAHash_const_&,int_&&>_>
                ((TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
                  *)&this->MissShaderMap,&local_res8,(bool *)&local_48);
      ppFVar4 = ppFVar4 + 1;
    } while (ppFVar4 != ppFVar1);
  }
  return this;
}

// IsCompute @ 145cb18e0

bool __thiscall FRayTracingPipelineState::IsCompute(FRayTracingPipelineState *this)

{
  return false;
}

// FRayTracingPipelineState @ 145cd1710

FRayTracingPipelineState * __thiscall
RHIValidation::FRayTracingPipelineState::FRayTracingPipelineState
          (FRayTracingPipelineState *this,FRayTracingPipelineStateInitializer *param_1)

{
  (this->MissShaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MissShaders).ArrayNum = 0;
  (this->MissShaders).ArrayMax = 0;
  (this->CallableShaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CallableShaders).ArrayNum = 0;
  (this->CallableShaders).ArrayMax = 0;
  (this->HitGroupShaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitGroupShaders).ArrayNum = 0;
  (this->HitGroupShaders).ArrayMax = 0;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_>::operator=<FRHIRayTracingShader_*,int>
            (&this->HitGroupShaders,&param_1->HitGroupTable);
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_>::operator=<FRHIRayTracingShader_*,int>
            (&this->MissShaders,&param_1->MissTable);
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_>::operator=<FRHIRayTracingShader_*,int>
            (&this->CallableShaders,&param_1->CallableTable);
  return this;
}

// GetShader @ 145cddfc0

FRHIRayTracingShader * __thiscall
RHIValidation::FRayTracingPipelineState::GetShader
          (FRayTracingPipelineState *this,ERayTracingBindingType param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FRHIRayTracingShader *pFVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(int)param_2;
  if (param_1 == HitGroup) {
    uVar4 = 0;
    if ((int)param_2 < (this->HitGroupShaders).ArrayNum) {
      uVar4 = ~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRHIRayTracingShader *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FRHIRayTracingShader **)((this->HitGroupShaders).AllocatorInstance.Data + lVar5 * 8);
  }
  if (param_1 != CallableShader) {
    if (param_1 != MissShader) {
      return (FRHIRayTracingShader *)0x0;
    }
    uVar4 = 0;
    if ((int)param_2 < (this->MissShaders).ArrayNum) {
      uVar4 = ~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRHIRayTracingShader *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FRHIRayTracingShader **)((this->MissShaders).AllocatorInstance.Data + lVar5 * 8);
  }
  uVar4 = 0;
  if ((int)param_2 < (this->CallableShaders).ArrayNum) {
    uVar4 = ~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHIRayTracingShader *)(*pcVar1)();
      return pFVar3;
    }
  }
  return *(FRHIRayTracingShader **)((this->CallableShaders).AllocatorInstance.Data + lVar5 * 8);
}

