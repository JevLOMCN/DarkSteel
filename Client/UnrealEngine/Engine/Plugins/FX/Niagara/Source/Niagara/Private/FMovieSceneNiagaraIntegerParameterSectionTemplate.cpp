// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 148ee3a00

UScriptStruct * __cdecl FMovieSceneNiagaraIntegerParameterSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate
                         ,(UObject *)pUVar1,L"MovieSceneNiagaraIntegerParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate.
         OuterSingleton;
}

// FMovieSceneNiagaraIntegerParameterSectionTemplate @ 148f7f910

FMovieSceneNiagaraIntegerParameterSectionTemplate * __thiscall
FMovieSceneNiagaraIntegerParameterSectionTemplate::FMovieSceneNiagaraIntegerParameterSectionTemplate
          (FMovieSceneNiagaraIntegerParameterSectionTemplate *this,FNiagaraVariable *param_1,
          FMovieSceneIntegerChannel *param_2)

{
  int *piVar1;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
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
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraIntegerParameterSectionTemplate__6B_;
  FMovieSceneChannel::FMovieSceneChannel
            ((FMovieSceneChannel *)&this->IntegerChannel,(FMovieSceneChannel *)param_2);
  (this->IntegerChannel)._padding_ = (longlong)&___7FMovieSceneIntegerChannel__6B_;
  pTVar2 = &(this->IntegerChannel).Times;
  (this->IntegerChannel).PreInfinityExtrap.Value = (param_2->PreInfinityExtrap).Value;
  (this->IntegerChannel).PostInfinityExtrap.Value = (param_2->PostInfinityExtrap).Value;
  (this->IntegerChannel).bInterpolateLinearKeys = param_2->bInterpolateLinearKeys;
  piVar1 = &(this->IntegerChannel).Times.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_2->Times).ArrayNum;
  pFVar5 = (param_2->Times).AllocatorInstance.Data;
  (this->IntegerChannel).Times.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &(this->IntegerChannel).Values;
  (this->IntegerChannel).DefaultValue = param_2->DefaultValue;
  (this->IntegerChannel).bHasDefaultValue = param_2->bHasDefaultValue;
  piVar1 = &(this->IntegerChannel).Values.ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_2->Values).ArrayNum;
  pFVar5 = (param_2->Values).AllocatorInstance.Data;
  (this->IntegerChannel).Values.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  *(undefined8 *)&(this->IntegerChannel).KeyHandles = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x8 = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x20 = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x28 = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x34 = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x38 = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x40 = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x58 = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x60 = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x6c = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x78 = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x80 = 0;
  pFVar5 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return this;
}

// FMovieSceneNiagaraIntegerParameterSectionTemplate @ 148f7fb30

FMovieSceneNiagaraIntegerParameterSectionTemplate * __thiscall
FMovieSceneNiagaraIntegerParameterSectionTemplate::FMovieSceneNiagaraIntegerParameterSectionTemplate
          (FMovieSceneNiagaraIntegerParameterSectionTemplate *this)

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
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraIntegerParameterSectionTemplate__6B_;
  (this->IntegerChannel)._padding_ = (longlong)&___7FMovieSceneIntegerChannel__6B_;
  (this->IntegerChannel)._padding_ = 0;
  (this->IntegerChannel)._padding_ = 0;
  (this->IntegerChannel)._padding_ = 0;
  (this->IntegerChannel)._padding_ = 0;
  (this->IntegerChannel)._padding_ = 0;
  (this->IntegerChannel)._padding_ = 0;
  (this->IntegerChannel)._padding_ = 0;
  (this->IntegerChannel)._padding_ = 0;
  (this->IntegerChannel)._padding_ = 0;
  (this->IntegerChannel).bInterpolateLinearKeys = false;
  (this->IntegerChannel).Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntegerChannel).Times.ArrayNum = 0;
  (this->IntegerChannel).Times.ArrayMax = 0;
  (this->IntegerChannel).DefaultValue = 0;
  (this->IntegerChannel).bHasDefaultValue = false;
  (this->IntegerChannel).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntegerChannel).Values.ArrayNum = 0;
  (this->IntegerChannel).Values.ArrayMax = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x8 = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x20 = 0;
  (this->IntegerChannel)._padding_ = 2;
  (this->IntegerChannel)._padding_ = 2;
  (this->IntegerChannel)._padding_ = 2;
  (this->IntegerChannel).PreInfinityExtrap = '\x04';
  (this->IntegerChannel).PostInfinityExtrap = '\x04';
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x28 = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x34 = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x38 = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x40 = 0;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x58 = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x60 = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x6c = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x68 = 0xffffffff;
  *(undefined8 *)&(this->IntegerChannel).KeyHandles.field_0x78 = 0;
  *(undefined4 *)&(this->IntegerChannel).KeyHandles.field_0x80 = 0;
  return this;
}

// GetAnimatedParameterValue @ 148fb18a0

void __thiscall
FMovieSceneNiagaraIntegerParameterSectionTemplate::GetAnimatedParameterValue
          (FMovieSceneNiagaraIntegerParameterSectionTemplate *this,FFrameTime param_1,
          FNiagaraVariableBase *param_2,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined4 uVar1;
  bool bVar2;
  long64 local_res8;
  
  local_res8 = 0;
  uVar1 = *(undefined4 *)(param_3->AllocatorInstance).Data;
  bVar2 = FMovieSceneIntegerChannel::Evaluate(&this->IntegerChannel,param_1,&local_res8);
  if (bVar2) {
    uVar1 = (undefined4)local_res8;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
  *(undefined4 *)(param_4->AllocatorInstance).Data = uVar1;
  return;
}

// GetScriptStructImpl @ 148fb7060

UScriptStruct * __thiscall
FMovieSceneNiagaraIntegerParameterSectionTemplate::GetScriptStructImpl
          (FMovieSceneNiagaraIntegerParameterSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate
                         ,(UObject *)pUVar1,L"MovieSceneNiagaraIntegerParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate.
         OuterSingleton;
}

