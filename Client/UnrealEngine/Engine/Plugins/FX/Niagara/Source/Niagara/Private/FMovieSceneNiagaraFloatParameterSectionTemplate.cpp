// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 148ee3000

UScriptStruct * __cdecl FMovieSceneNiagaraFloatParameterSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraFloatParameterSectionTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraFloatParameterSectionTemplate.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraFloatParameterSectionTemplate
                           ,(UObject *)pUVar1,L"MovieSceneNiagaraFloatParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraFloatParameterSectionTemplate.
         OuterSingleton;
}

// FMovieSceneNiagaraFloatParameterSectionTemplate @ 148f7f7f0

FMovieSceneNiagaraFloatParameterSectionTemplate * __thiscall
FMovieSceneNiagaraFloatParameterSectionTemplate::FMovieSceneNiagaraFloatParameterSectionTemplate
          (FMovieSceneNiagaraFloatParameterSectionTemplate *this,FNiagaraVariable *param_1,
          FMovieSceneFloatChannel *param_2)

{
  FScriptContainerElement *pFVar1;
  FNiagaraVariable *pFVar2;
  FNiagaraVariable local_28;
  
  pFVar2 = FNiagaraVariable::FNiagaraVariable(&local_28,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
  FNiagaraVariable::FNiagaraVariable((FNiagaraVariable *)&this->_padding_,pFVar2);
  pFVar1 = (pFVar2->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraFloatParameterSectionTemplate__6B_;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->FloatChannel,param_2);
  pFVar1 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FMovieSceneNiagaraFloatParameterSectionTemplate @ 148f7f890

FMovieSceneNiagaraFloatParameterSectionTemplate * __thiscall
FMovieSceneNiagaraFloatParameterSectionTemplate::FMovieSceneNiagaraFloatParameterSectionTemplate
          (FMovieSceneNiagaraFloatParameterSectionTemplate *this)

{
  int iVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this->_padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this->_padding_ = iVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraFloatParameterSectionTemplate__6B_;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->FloatChannel);
  return this;
}

// GetAnimatedParameterValue @ 148fb1830

void __thiscall
FMovieSceneNiagaraFloatParameterSectionTemplate::GetAnimatedParameterValue
          (FMovieSceneNiagaraFloatParameterSectionTemplate *this,FFrameTime param_1,
          FNiagaraVariableBase *param_2,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  float local_res8 [8];
  
  local_res8[0] = *(float *)(param_3->AllocatorInstance).Data;
  FMovieSceneFloatChannel::Evaluate(&this->FloatChannel,param_1,local_res8);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
  *(float *)(param_4->AllocatorInstance).Data = local_res8[0];
  return;
}

// GetScriptStructImpl @ 148fb7020

UScriptStruct * __thiscall
FMovieSceneNiagaraFloatParameterSectionTemplate::GetScriptStructImpl
          (FMovieSceneNiagaraFloatParameterSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraFloatParameterSectionTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraFloatParameterSectionTemplate.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraFloatParameterSectionTemplate
                           ,(UObject *)pUVar1,L"MovieSceneNiagaraFloatParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraFloatParameterSectionTemplate.
         OuterSingleton;
}

