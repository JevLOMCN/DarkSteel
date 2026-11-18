// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 148ee5bb0

UScriptStruct * __cdecl FMovieSceneNiagaraBoolParameterSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate,
                           (UObject *)pUVar1,L"MovieSceneNiagaraBoolParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate.
         OuterSingleton;
}

// FMovieSceneNiagaraBoolParameterSectionTemplate @ 148f7f2e0

FMovieSceneNiagaraBoolParameterSectionTemplate * __thiscall
FMovieSceneNiagaraBoolParameterSectionTemplate::FMovieSceneNiagaraBoolParameterSectionTemplate
          (FMovieSceneNiagaraBoolParameterSectionTemplate *this,FNiagaraVariable *param_1,
          FMovieSceneBoolChannel *param_2)

{
  int *piVar1;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraVariable *pFVar6;
  FNiagaraVariable local_48;
  
  pFVar6 = FNiagaraVariable::FNiagaraVariable(&local_48,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  FNiagaraVariable::FNiagaraVariable((FNiagaraVariable *)&this->_padding_,pFVar6);
  pFVar5 = (pFVar6->VarData).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraBoolParameterSectionTemplate__6B_;
  FMovieSceneChannel::FMovieSceneChannel
            ((FMovieSceneChannel *)&this->BoolChannel,(FMovieSceneChannel *)param_2);
  (this->BoolChannel)._padding_ = (longlong)&___7FMovieSceneBoolChannel__6B_;
  pTVar2 = &(this->BoolChannel).Times;
  (this->BoolChannel).PreInfinityExtrap.Value = (param_2->PreInfinityExtrap).Value;
  (this->BoolChannel).PostInfinityExtrap.Value = (param_2->PostInfinityExtrap).Value;
  piVar1 = &(this->BoolChannel).Times.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_2->Times).ArrayNum;
  pFVar5 = (param_2->Times).AllocatorInstance.Data;
  (this->BoolChannel).Times.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &(this->BoolChannel).Values;
  (this->BoolChannel).DefaultValue = param_2->DefaultValue;
  (this->BoolChannel).bHasDefaultValue = param_2->bHasDefaultValue;
  piVar1 = &(this->BoolChannel).Values.ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_2->Values).ArrayNum;
  pFVar5 = (param_2->Values).AllocatorInstance.Data;
  (this->BoolChannel).Values.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
  }
  *(undefined8 *)&(this->BoolChannel).KeyHandles = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x8 = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x20 = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x28 = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x34 = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x38 = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x40 = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x58 = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x60 = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x6c = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x78 = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x80 = 0;
  pFVar5 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return this;
}

// FMovieSceneNiagaraBoolParameterSectionTemplate @ 148f7f500

FMovieSceneNiagaraBoolParameterSectionTemplate * __thiscall
FMovieSceneNiagaraBoolParameterSectionTemplate::FMovieSceneNiagaraBoolParameterSectionTemplate
          (FMovieSceneNiagaraBoolParameterSectionTemplate *this)

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
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraBoolParameterSectionTemplate__6B_;
  (this->BoolChannel)._padding_ = (longlong)&___7FMovieSceneBoolChannel__6B_;
  (this->BoolChannel)._padding_ = 0;
  (this->BoolChannel)._padding_ = 0;
  (this->BoolChannel)._padding_ = 0;
  (this->BoolChannel)._padding_ = 0;
  (this->BoolChannel)._padding_ = 0;
  (this->BoolChannel)._padding_ = 0;
  (this->BoolChannel)._padding_ = 0;
  (this->BoolChannel)._padding_ = 0;
  (this->BoolChannel)._padding_ = 0;
  (this->BoolChannel).Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolChannel).Times.ArrayNum = 0;
  (this->BoolChannel).Times.ArrayMax = 0;
  (this->BoolChannel).DefaultValue = false;
  (this->BoolChannel).bHasDefaultValue = false;
  (this->BoolChannel).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolChannel).Values.ArrayNum = 0;
  (this->BoolChannel).Values.ArrayMax = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x8 = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x20 = 0;
  (this->BoolChannel)._padding_ = 2;
  (this->BoolChannel)._padding_ = 2;
  (this->BoolChannel)._padding_ = 2;
  (this->BoolChannel).PreInfinityExtrap = '\x04';
  (this->BoolChannel).PostInfinityExtrap = '\x04';
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x28 = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x34 = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x38 = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x40 = 0;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x58 = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x60 = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x6c = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x68 = 0xffffffff;
  *(undefined8 *)&(this->BoolChannel).KeyHandles.field_0x78 = 0;
  *(undefined4 *)&(this->BoolChannel).KeyHandles.field_0x80 = 0;
  return this;
}

// GetAnimatedParameterValue @ 148fb1700

void __thiscall
FMovieSceneNiagaraBoolParameterSectionTemplate::GetAnimatedParameterValue
          (FMovieSceneNiagaraBoolParameterSectionTemplate *this,FFrameTime param_1,
          FNiagaraVariableBase *param_2,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  char cVar1;
  int iVar2;
  char local_res8 [8];
  
  iVar2 = *(int *)(param_3->AllocatorInstance).Data;
  cVar1 = (**(code **)((this->BoolChannel)._padding_ + 0xa0))(&this->BoolChannel,param_1,local_res8)
  ;
  if (cVar1 != '\0') {
    iVar2 = -(uint)(local_res8[0] != '\0');
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
  *(int *)(param_4->AllocatorInstance).Data = iVar2;
  return;
}

// GetScriptStructImpl @ 148fb6fa0

UScriptStruct * __thiscall
FMovieSceneNiagaraBoolParameterSectionTemplate::GetScriptStructImpl
          (FMovieSceneNiagaraBoolParameterSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate,
                           (UObject *)pUVar1,L"MovieSceneNiagaraBoolParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate.
         OuterSingleton;
}

