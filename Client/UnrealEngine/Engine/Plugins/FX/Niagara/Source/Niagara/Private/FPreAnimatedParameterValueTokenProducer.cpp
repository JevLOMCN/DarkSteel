// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// CacheExistingState @ 148f90460

/* WARNING: Type propagation algorithm not settling */

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
FPreAnimatedParameterValueTokenProducer::CacheExistingState
          (FPreAnimatedParameterValueTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  int *piVar6;
  FNiagaraTypeDefinition *pFVar7;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar8;
  FNiagaraVariable *pFVar9;
  ForAnyElementType _Src;
  int iVar10;
  void *_Src_00;
  ForAnyElementType local_98;
  int local_90 [2];
  FNiagaraVariable local_88;
  FPreAnimatedParameterValueToken local_68;
  
  if (param_1 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar5->_padding_)) goto LAB_148f904b7;
  }
  param_1 = (UObject *)0x0;
LAB_148f904b7:
  piVar6 = (int *)(**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x58))
                            (&param_1[0x22].field_0x10,&this->Parameter,0);
  if (((piVar6 == (int *)0x0) || (*piVar6 == -1)) ||
     (_Src_00 = (void *)((longlong)*piVar6 + *(longlong *)&param_1[0x23].field_0x8),
     _Src_00 == (void *)0x0)) {
    _Src.Data = (FScriptContainerElement *)0x0;
    iVar4 = 0;
    iVar10 = -1;
  }
  else {
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90[0] = 0;
    local_90[1] = 0;
    pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&(this->Parameter)._padding_);
    iVar4 = FNiagaraTypeDefinition::GetSize(pFVar7);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,&local_98,local_90,local_90 + 1);
    pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&(this->Parameter)._padding_);
    iVar4 = FNiagaraTypeDefinition::GetSize(pFVar7);
    memcpy(local_98.Data,_Src_00,(longlong)iVar4);
    _Src.Data = local_98.Data;
    iVar10 = local_90[1];
    iVar4 = local_90[0];
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90[0] = 0;
    local_90[1] = 0;
    if ((iVar10 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar2)();
      return pTVar8;
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
  }
  pFVar9 = FNiagaraVariable::FNiagaraVariable(&local_88,&this->Parameter);
  local_68._padding_ = (longlong)&___7FPreAnimatedParameterValueToken__6B_;
  FNiagaraVariable::FNiagaraVariable(&local_68.Parameter,pFVar9);
  local_68.PreviousValueData.field0_0x0.TypedValue.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_68.PreviousValueData.field0_0x0.TypedValue.ArrayNum = 0;
  local_68.PreviousValueData.field0_0x0.TypedValue.ArrayMax = -1;
  if (iVar10 != -1) {
    local_68.PreviousValueData.field0_0x0.TypedValue.ArrayNum = iVar4;
    if (iVar4 == 0) {
      local_68.PreviousValueData.field0_0x0.TypedValue.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,0,(ForAnyElementType *)&local_68.PreviousValueData,iVar4,
                 &local_68.PreviousValueData.field0_0x0.TypedValue.ArrayMax);
      memcpy((void *)local_68.PreviousValueData.field0_0x0.TypedValue.AllocatorInstance.Data,
             _Src.Data,(longlong)iVar4);
    }
  }
  pFVar1 = (pFVar9->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  __return_storage_ptr__->bIsValid = false;
  TInlineValue<IMovieScenePreAnimatedToken,32,8>::
  InitializeFrom<FPreAnimatedParameterValueToken,FPreAnimatedParameterValueToken>
            (__return_storage_ptr__,&local_68);
  if ((local_68.PreviousValueData.field0_0x0.TypedValue.ArrayMax != -1) &&
     (local_68.PreviousValueData.field0_0x0.TypedValue.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.PreviousValueData.field0_0x0.TypedValue.AllocatorInstance.Data);
  }
  if (local_68.Parameter.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Parameter.VarData.AllocatorInstance.Data);
  }
  local_68._padding_ = (longlong)&___7IMovieScenePreAnimatedToken__6B_;
  if ((iVar10 != -1) && (_Src.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(_Src.Data);
  }
  return __return_storage_ptr__;
}

