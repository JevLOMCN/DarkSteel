// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 148ee5500

UScriptStruct * __cdecl FMovieSceneNiagaraColorParameterSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate
                           ,(UObject *)pUVar1,L"MovieSceneNiagaraColorParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate.
         OuterSingleton;
}

// FMovieSceneNiagaraColorParameterSectionTemplate @ 148f7f670

FMovieSceneNiagaraColorParameterSectionTemplate * __thiscall
FMovieSceneNiagaraColorParameterSectionTemplate::FMovieSceneNiagaraColorParameterSectionTemplate
          (FMovieSceneNiagaraColorParameterSectionTemplate *this,FNiagaraVariable *param_1,
          FMovieSceneFloatChannel *param_2,FMovieSceneFloatChannel *param_3,
          FMovieSceneFloatChannel *param_4,FMovieSceneFloatChannel *param_5)

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
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraColorParameterSectionTemplate__6B_;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RedChannel,param_2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->GreenChannel,param_3);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->BlueChannel,param_4);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->AlphaChannel,param_5);
  pFVar1 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FMovieSceneNiagaraColorParameterSectionTemplate @ 148f7f750

FMovieSceneNiagaraColorParameterSectionTemplate * __thiscall
FMovieSceneNiagaraColorParameterSectionTemplate::FMovieSceneNiagaraColorParameterSectionTemplate
          (FMovieSceneNiagaraColorParameterSectionTemplate *this)

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
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraColorParameterSectionTemplate__6B_;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RedChannel);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->GreenChannel);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->BlueChannel);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->AlphaChannel);
  return this;
}

// GetAnimatedParameterValue @ 148fb1780

void __thiscall
FMovieSceneNiagaraColorParameterSectionTemplate::GetAnimatedParameterValue
          (FMovieSceneNiagaraColorParameterSectionTemplate *this,FFrameTime param_1,
          FNiagaraVariableBase *param_2,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_3->AllocatorInstance).Data;
  local_18 = *(undefined8 *)pFVar1;
  uStack_10 = *(undefined8 *)(pFVar1 + 8);
  FMovieSceneFloatChannel::Evaluate(&this->RedChannel,param_1,(float *)&local_18);
  FMovieSceneFloatChannel::Evaluate(&this->GreenChannel,param_1,(float *)((longlong)&local_18 + 4));
  FMovieSceneFloatChannel::Evaluate(&this->BlueChannel,param_1,(float *)&uStack_10);
  FMovieSceneFloatChannel::Evaluate(&this->AlphaChannel,param_1,(float *)((longlong)&uStack_10 + 4))
  ;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x10,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
  pFVar1 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)pFVar1 = local_18;
  *(undefined8 *)(pFVar1 + 8) = uStack_10;
  return;
}

// GetScriptStructImpl @ 148fb6fe0

UScriptStruct * __thiscall
FMovieSceneNiagaraColorParameterSectionTemplate::GetScriptStructImpl
          (FMovieSceneNiagaraColorParameterSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate
                           ,(UObject *)pUVar1,L"MovieSceneNiagaraColorParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate.
         OuterSingleton;
}

