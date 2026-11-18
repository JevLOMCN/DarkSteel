// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Execute @ 148fab810

void __thiscall
FSetParameterValueExecutionToken::Execute
          (FSetParameterValueExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  UObject *pUVar1;
  FNiagaraTypeDefinition *pFVar2;
  undefined1 *this_00;
  FName local_res8;
  undefined1 local_38 [24];
  void *local_20;
  undefined8 local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FSetParameterValueExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FSetParameterValueExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FSetParameterValueExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FSetParameterValueExecutionToken::Execute'::__l2::
           _dynamic_atexit_destructor_for__ParameterToTypeID__);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FSetParameterValueExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TMovieSceneAnimTypeIDContainer<FNiagaraVariableBase>::GetAnimTypeID
            (&`public:_virtual_void___cdecl_FSetParameterValueExecutionToken::Execute(FMovieSceneContext_const&___ptr64,FMovieSceneEvaluationOperand_const&___ptr64,FPersistentEvaluationData&___ptr64,IMovieScenePlayer&___ptr64)___ptr64'
              ::__l2::ParameterToTypeID,(FNiagaraVariableBase *)&local_res8);
  pUVar1 = FWeakObjectPtr::Get(&(this->ComponentPtr).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    local_38._8_8_ = (this->Parameter).Name;
    local_38._16_4_ = (this->Parameter).TypeDefHandle.RegisteredTypeIndex;
    local_38._0_8_ = &___7FPreAnimatedParameterValueTokenProducer__6B_;
    local_20 = (void *)0x0;
    local_18 = 0;
    FMovieScenePreAnimatedState::SavePreAnimatedState
              (&param_4->PreAnimatedState,pUVar1,(FMovieSceneAnimTypeID)local_res8,
               (IMovieScenePreAnimatedTokenProducer *)local_38);
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
    local_38._0_8_ = (this->Parameter).Name;
    this_00 = &pUVar1[0x22].field_0x10;
    local_38._8_4_ = (this->Parameter).TypeDefHandle.RegisteredTypeIndex;
    local_38._16_8_ = (FScriptContainerElement *)0x0;
    local_20 = (void *)0x0;
    (**(code **)(*(longlong *)this_00 + 0x10))(this_00,local_38,0,1,0);
    if ((FScriptContainerElement *)local_38._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._16_8_);
    }
    pFVar2 = FNiagaraTypeDefinitionHandle::Resolve(&(this->Parameter).TypeDefHandle);
    if ((((TObjectPtr<UObject>_u_0)(pFVar2->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
        (pFVar2->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
       (pFVar2->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
      (**(code **)(*(longlong *)this_00 + 0x60))
                (this_00,(this->Data).AllocatorInstance.Data,&this->Parameter,0);
    }
    else {
      local_38._0_8_ = (this->Parameter).Name;
      local_38._8_4_ = (this->Parameter).TypeDefHandle.RegisteredTypeIndex;
      local_38._16_8_ = (FScriptContainerElement *)0x0;
      local_20 = (void *)0x0;
      FNiagaraParameterStore::SetParameterData
                ((FNiagaraParameterStore *)this_00,(uchar *)(this->Data).AllocatorInstance.Data,
                 (FNiagaraVariable *)local_38,false);
    }
  }
  return;
}

