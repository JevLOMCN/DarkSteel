// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticStruct @ 148ee4ea0

UScriptStruct * __cdecl FMovieSceneNiagaraVectorParameterSectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneNiagaraVectorParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate.
         OuterSingleton;
}

// FMovieSceneNiagaraVectorParameterSectionTemplate @ 148f7fe00

FMovieSceneNiagaraVectorParameterSectionTemplate * __thiscall
FMovieSceneNiagaraVectorParameterSectionTemplate::FMovieSceneNiagaraVectorParameterSectionTemplate
          (FMovieSceneNiagaraVectorParameterSectionTemplate *this,
          FMovieSceneNiagaraVectorParameterSectionTemplate *param_1)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *_Src_00;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  FMovieSceneChannel *this_00;
  
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  this_00 = (FMovieSceneChannel *)this->VectorChannels;
  piVar3 = &param_1->VectorChannels[0].Values.ArrayNum;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplate__6B_;
  lVar4 = 4;
  lVar5 = (longlong)this - (longlong)param_1;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraVectorParameterSectionTemplate__6B_;
  do {
    lVar4 = lVar4 + -1;
    FMovieSceneChannel::FMovieSceneChannel(this_00,(FMovieSceneChannel *)(piVar3 + -0x22));
    this_00->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
    pFVar6 = (ForAnyElementType *)(lVar5 + -0x18 + (longlong)piVar3);
    *(char *)(lVar5 + -0x20 + (longlong)piVar3) = (char)piVar3[-8];
    *(undefined1 *)(lVar5 + -0x1f + (longlong)piVar3) = *(undefined1 *)((longlong)piVar3 + -0x1f);
    pFVar6->Data = (FScriptContainerElement *)0x0;
    piVar2 = (int *)(lVar5 + -0xc + (longlong)piVar3);
    iVar1 = piVar3[-4];
    _Src = *(void **)(piVar3 + -6);
    *(int *)(lVar5 + -0x10 + (longlong)piVar3) = iVar1;
    if (iVar1 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,pFVar6,iVar1,piVar2);
      memcpy(pFVar6->Data,_Src,(longlong)iVar1 << 2);
    }
    pFVar6 = (ForAnyElementType *)(lVar5 + -8 + (longlong)piVar3);
    piVar2 = (int *)(lVar5 + 4 + (longlong)piVar3);
    pFVar6->Data = (FScriptContainerElement *)0x0;
    iVar1 = *piVar3;
    _Src_00 = (((TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(piVar3 + -2))->
              AllocatorInstance).Data;
    *(int *)(lVar5 + (longlong)piVar3) = iVar1;
    if (iVar1 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar1,0,pFVar6,iVar1,piVar2);
      memcpy(pFVar6->Data,_Src_00,(longlong)iVar1 * 0x1c);
    }
    this_00 = (FMovieSceneChannel *)&this_00[2].KeyMovedEvent.field_0x10;
    *(int *)(lVar5 + 8 + (longlong)piVar3) = piVar3[2];
    iVar1 = piVar3[3];
    *(undefined8 *)(lVar5 + 0x10 + (longlong)piVar3) = 0;
    *(undefined8 *)(lVar5 + 0x18 + (longlong)piVar3) = 0;
    *(undefined8 *)(lVar5 + 0x30 + (longlong)piVar3) = 0;
    *(char *)(lVar5 + 0xc + (longlong)piVar3) = (char)iVar1;
    *(undefined4 *)(lVar5 + 0x38 + (longlong)piVar3) = 0;
    *(undefined4 *)(lVar5 + 0x3c + (longlong)piVar3) = 0x80;
    *(undefined4 *)(lVar5 + 0x40 + (longlong)piVar3) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x44 + (longlong)piVar3) = 0;
    *(undefined8 *)(lVar5 + 0x48 + (longlong)piVar3) = 0;
    *(undefined8 *)(lVar5 + 0x50 + (longlong)piVar3) = 0;
    *(undefined8 *)(lVar5 + 0x68 + (longlong)piVar3) = 0;
    *(undefined4 *)(lVar5 + 0x70 + (longlong)piVar3) = 0;
    *(undefined4 *)(lVar5 + 0x74 + (longlong)piVar3) = 0x80;
    *(undefined4 *)(lVar5 + 0x78 + (longlong)piVar3) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x7c + (longlong)piVar3) = 0;
    *(undefined8 *)(lVar5 + 0x88 + (longlong)piVar3) = 0;
    *(undefined4 *)(lVar5 + 0x90 + (longlong)piVar3) = 0;
    *(undefined8 *)(lVar5 + 0x98 + (longlong)piVar3) = *(undefined8 *)(piVar3 + 0x26);
    piVar3 = piVar3 + 0x4a;
  } while (lVar4 != 0);
  this->ChannelsUsed = param_1->ChannelsUsed;
  return this;
}

// FMovieSceneNiagaraVectorParameterSectionTemplate @ 148f80070

FMovieSceneNiagaraVectorParameterSectionTemplate * __thiscall
FMovieSceneNiagaraVectorParameterSectionTemplate::FMovieSceneNiagaraVectorParameterSectionTemplate
          (FMovieSceneNiagaraVectorParameterSectionTemplate *this,FNiagaraVariable *param_1,
          TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  void *_Src;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  FNiagaraVariable *pFVar11;
  FMovieSceneNiagaraVectorParameterSectionTemplate *pFVar12;
  FScriptContainerElement *pFVar13;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  uint uVar14;
  FNiagaraVariable local_58;
  
  pFVar11 = FNiagaraVariable::FNiagaraVariable(&local_58,param_1);
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraParameterSectionTemplate__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  FNiagaraVariable::FNiagaraVariable((FNiagaraVariable *)&this->_padding_,pFVar11);
  pFVar5 = (pFVar11->VarData).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraVectorParameterSectionTemplate__6B_;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->VectorChannels);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->VectorChannels + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->VectorChannels + 2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->VectorChannels + 3);
  uVar14 = 0;
  this->ChannelsUsed = param_3;
  if (0 < param_3) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              &this->VectorChannels[0]._padding_;
    lVar8 = -(longlong)this;
    do {
      uVar10 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FMovieSceneNiagaraVectorParameterSectionTemplate *)(*pcVar7)();
        return pFVar12;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      if ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
          (pFVar5 + lVar8 + -0x60 + (longlong)&this_00->_padding_) != this_00 + -1) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  (this_00 + -1,
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   (pFVar5 + lVar8 + -0x60 + (longlong)&this_00->_padding_));
      }
      if ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
          (pFVar5 + lVar8 + -0x40 + (longlong)&this_00->_padding_) != this_00) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  (this_00,(TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           (pFVar5 + lVar8 + -0x40 + (longlong)&this_00->_padding_));
      }
      if ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
          (pFVar5 + lVar8 + -0x20 + (longlong)&this_00->_padding_) != this_00 + 1) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  (this_00 + 1,
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   (pFVar5 + lVar8 + -0x20 + (longlong)&this_00->_padding_));
      }
      *(FScriptContainerElement *)&this_00[2]._padding_ =
           (pFVar5 + lVar8)[(longlong)&this_00->_padding_];
      *(FScriptContainerElement *)((longlong)&this_00[2]._padding_ + 1) =
           (pFVar5 + lVar8 + 1)[(longlong)&this_00->_padding_];
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&this_00[2].InvocationList,
                 (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)
                 (pFVar5 + lVar8 + 8 + (longlong)&this_00->_padding_));
      pFVar13 = pFVar5 + lVar8 + 0x18 + (longlong)&this_00->_padding_;
      piVar1 = &this_00[2].CompactionThreshold;
      if ((FScriptContainerElement *)piVar1 != pFVar13) {
        iVar3 = *(int *)&pFVar13[8].field_0x0;
        piVar2 = (int *)((longlong)&this_00[3]._padding_ + 4);
        _Src = *(void **)&pFVar13->field_0x0;
        iVar4 = *piVar2;
        *(int *)&this_00[3]._padding_ = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar3,iVar4,(ForAnyElementType *)piVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(*(void **)piVar1,_Src,(longlong)iVar3 * 0x1c);
          }
        }
      }
      *(undefined4 *)&this_00[3].InvocationList.AllocatorInstance.Data =
           *(undefined4 *)(pFVar5 + lVar8 + 0x28 + (longlong)&this_00->_padding_);
      *(FScriptContainerElement *)((longlong)&this_00[3].InvocationList.AllocatorInstance.Data + 4)
           = (pFVar5 + lVar8 + 0x2c)[(longlong)&this_00->_padding_];
      FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this_00[3].InvocationList.ArrayNum);
      uVar6 = *(undefined8 *)(pFVar5 + lVar8 + 0xb8 + (longlong)&this_00->_padding_);
      uVar14 = uVar14 + 1;
      this_00[7].CompactionThreshold = (int)uVar6;
      this_00[7].InvocationListLockCount = (int)((ulonglong)uVar6 >> 0x20);
      this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this_00[9].InvocationList;
    } while ((int)uVar14 < this->ChannelsUsed);
  }
  pFVar5 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return this;
}

// FMovieSceneNiagaraVectorParameterSectionTemplate @ 148f80310

FMovieSceneNiagaraVectorParameterSectionTemplate * __thiscall
FMovieSceneNiagaraVectorParameterSectionTemplate::FMovieSceneNiagaraVectorParameterSectionTemplate
          (FMovieSceneNiagaraVectorParameterSectionTemplate *this)

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
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraVectorParameterSectionTemplate__6B_;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->VectorChannels);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->VectorChannels + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->VectorChannels + 2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->VectorChannels + 3);
  this->ChannelsUsed = 0;
  return this;
}

// GetAlternateParameterTypes @ 148fb12a0

TArrayView<FNiagaraTypeDefinition,int> * __thiscall
FMovieSceneNiagaraVectorParameterSectionTemplate::GetAlternateParameterTypes
          (FMovieSceneNiagaraVectorParameterSectionTemplate *this,
          TArrayView<FNiagaraTypeDefinition,int> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TArrayView<FNiagaraTypeDefinition,int> *pTVar4;
  TObjectPtr<UObject>_u_0 local_28;
  ushort local_20;
  uchar local_1e;
  short local_1c;
  short local_1a;
  int local_18;
  uint local_14;
  
  if (this->ChannelsUsed != 3) {
    __return_storage_ptr__->DataPtr = (FNiagaraTypeDefinition *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28 = FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0);
      }
      local_20 = FNiagaraTypeDefinition::PositionDef.UnderlyingType;
      local_1e = FNiagaraTypeDefinition::PositionDef.Flags;
      local_1c = FNiagaraTypeDefinition::PositionDef.Size;
      local_1a = FNiagaraTypeDefinition::PositionDef.Alignment;
      local_18 = FNiagaraTypeDefinition::PositionDef.RegisteredTypeDefIndex;
      local_14 = FNiagaraTypeDefinition::PositionDef.UnderlyingTypePathNameHash;
      AlternateParameterTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      AlternateParameterTypes.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,1,0,&AlternateParameterTypes.AllocatorInstance,1,
                 &AlternateParameterTypes.ArrayMax);
      ConstructItems<FNiagaraTypeDefinition,FNiagaraTypeDefinition,int>
                (AlternateParameterTypes.AllocatorInstance.Data,
                 (FNiagaraTypeDefinition *)&local_28.ObjectPtr,1);
      atexit(`FMovieSceneNiagaraVectorParameterSectionTemplate::GetAlternateParameterTypes'::__l5::
             _dynamic_atexit_destructor_for__AlternateParameterTypes__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = AlternateParameterTypes.ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FNiagaraTypeDefinition *)AlternateParameterTypes.AllocatorInstance.Data;
  if (iVar2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<FNiagaraTypeDefinition,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar2;
  return __return_storage_ptr__;
}

// GetAnimatedParameterValue @ 148fb1920

void __thiscall
FMovieSceneNiagaraVectorParameterSectionTemplate::GetAnimatedParameterValue
          (FMovieSceneNiagaraVectorParameterSectionTemplate *this,FFrameTime param_1,
          FNiagaraVariableBase *param_2,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FNiagaraTypeDefinition *pFVar3;
  undefined8 local_res8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar1 = this->ChannelsUsed;
  if (iVar1 == 2) {
    local_res8 = *(undefined8 *)(param_3->AllocatorInstance).Data;
    FMovieSceneFloatChannel::Evaluate(this->VectorChannels,param_1,(float *)&local_res8);
    FMovieSceneFloatChannel::Evaluate
              (this->VectorChannels + 1,param_1,(float *)((longlong)&local_res8 + 4));
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,8,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
    *(undefined8 *)(param_4->AllocatorInstance).Data = local_res8;
  }
  else if (iVar1 == 3) {
    pFVar2 = (param_3->AllocatorInstance).Data;
    local_18 = *(undefined8 *)pFVar2;
    uStack_10 = CONCAT44(uStack_10._4_4_,*(undefined4 *)(pFVar2 + 8));
    FMovieSceneFloatChannel::Evaluate(this->VectorChannels,param_1,(float *)&local_18);
    FMovieSceneFloatChannel::Evaluate
              (this->VectorChannels + 1,param_1,(float *)((longlong)&local_18 + 4));
    FMovieSceneFloatChannel::Evaluate(this->VectorChannels + 2,param_1,(float *)&uStack_10);
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve(&param_2->TypeDefHandle);
    if ((((TObjectPtr<UObject>_u_0)(pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
        (pFVar3->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
       (pFVar3->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x18,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
      pFVar2 = (param_4->AllocatorInstance).Data;
      *(double *)pFVar2 = (double)(float)local_18;
      *(double *)(pFVar2 + 8) = (double)local_18._4_4_;
      *(double *)(pFVar2 + 0x10) = (double)(float)uStack_10;
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0xc,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
      pFVar2 = (param_4->AllocatorInstance).Data;
      *(undefined8 *)pFVar2 = local_18;
      *(float *)(pFVar2 + 8) = (float)uStack_10;
    }
  }
  else if (iVar1 == 4) {
    pFVar2 = (param_3->AllocatorInstance).Data;
    local_18 = *(undefined8 *)pFVar2;
    uStack_10 = *(undefined8 *)(pFVar2 + 8);
    FMovieSceneFloatChannel::Evaluate(this->VectorChannels,param_1,(float *)&local_18);
    FMovieSceneFloatChannel::Evaluate
              (this->VectorChannels + 1,param_1,(float *)((longlong)&local_18 + 4));
    FMovieSceneFloatChannel::Evaluate(this->VectorChannels + 2,param_1,(float *)&uStack_10);
    FMovieSceneFloatChannel::Evaluate
              (this->VectorChannels + 3,param_1,(float *)((longlong)&uStack_10 + 4));
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x10,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
    pFVar2 = (param_4->AllocatorInstance).Data;
    *(undefined8 *)pFVar2 = local_18;
    *(undefined8 *)(pFVar2 + 8) = uStack_10;
  }
  return;
}

// GetScriptStructImpl @ 148fb7120

UScriptStruct * __thiscall
FMovieSceneNiagaraVectorParameterSectionTemplate::GetScriptStructImpl
          (FMovieSceneNiagaraVectorParameterSectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate,
                         (UObject *)pUVar1,L"MovieSceneNiagaraVectorParameterSectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate.
         OuterSingleton;
}

