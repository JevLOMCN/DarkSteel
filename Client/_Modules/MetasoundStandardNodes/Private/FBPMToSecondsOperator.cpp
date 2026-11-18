// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// FBPMToSecondsOperator @ 14b051b50

FBPMToSecondsOperator * __thiscall
Metasound::FBPMToSecondsOperator::FBPMToSecondsOperator
          (FBPMToSecondsOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<float> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<float> *param_4)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FBPMToSecondsOperator_Metasound__6B_;
  *(undefined ***)&this->BPM = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->BPM).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->BPM).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BPM = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->BeatMultiplier = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->BeatMultiplier).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->BeatMultiplier).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BeatMultiplier = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->DivOfWholeNote = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DivOfWholeNote).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->DivOfWholeNote).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DivOfWholeNote = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
            ((TDataReference<Metasound::FTime> *)&this->TimeSeconds,NewObject);
  *(undefined ***)&this->TimeSeconds = &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
  this->PrevBPM = -1.0;
  this->PrevBeatMultiplier = -1.0;
  this->PrevDivOfWholeNote = -1.0;
  UpdateTime(this);
  return this;
}

// operator() @ 14b059c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FBPMToSecondsOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  longlong *plVar1;
  ITextData *pIVar2;
  FName FVar3;
  TRefCountPtr<ITextData> TVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 *puVar7;
  longlong lVar8;
  FName local_res10;
  FName local_res18;
  undefined1 local_28 [32];
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,"BPMToSeconds");
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            ((FNodeClassName *)local_28,&Metasound::StandardNodes::Namespace,&local_res18,
             &local_res10);
  FVar3.Number = local_28._12_4_;
  FVar3.ComparisonIndex.Value = local_28._8_4_;
  __return_storage_ptr__->MajorVersion = 1;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = (FNameEntryId)local_28._0_4_;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_28._4_4_;
  (__return_storage_ptr__->ClassName).Name = FVar3;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = (FNameEntryId)local_28._16_4_;
  (__return_storage_ptr__->ClassName).Variant.Number = local_28._20_4_;
  pFVar5 = FText::FText((FText *)local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar5);
  if ((FName)local_28._0_8_ != (FName)0x0) {
    (**(code **)(*(longlong *)local_28._0_8_ + 0x10))();
  }
  pFVar5 = FText::FText((FText *)local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if ((FName)local_28._0_8_ != (FName)0x0) {
    (**(code **)(*(longlong *)local_28._0_8_ + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  local_28._0_8_ = Metasound::NodeCategories::Conversions.TextData.Reference;
  if (Metasound::NodeCategories::Conversions.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Conversions.TextData.Reference + 8))
              (Metasound::NodeCategories::Conversions.TextData.Reference,&local_res10);
  }
  local_28._8_4_ = Metasound::NodeCategories::Conversions.Flags;
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)local_28,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if ((FName)local_28._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
  }
  TVar4.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::FBPMToSecondsOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  FText::FText((FText *)local_28);
  FText::FText((FText *)(local_28 + 0x10));
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  lVar8 = 2;
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)local_28,2,
             (__return_storage_ptr__->Keywords).ArrayMax);
  puVar7 = &stack0xfffffffffffffff8;
  do {
    plVar1 = (longlong *)(puVar7 + -0x10);
    puVar7 = puVar7 + -0x10;
    lVar8 = lVar8 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar8 != 0);
  return __return_storage_ptr__;
}

// BindInputs @ 14b05d4c0

void __thiscall
Metasound::FBPMToSecondsOperator::BindInputs
          (FBPMToSecondsOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<float> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&BPMToSecondsVertexNames::InputBPMName);
  local_res18 = &this->BPM;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&BPMToSecondsVertexNames::InputBeatMultiplierName);
  local_res18 = &this->BeatMultiplier;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&BPMToSecondsVertexNames::InputDivOfWholeNoteName);
  local_res18 = &this->DivOfWholeNote;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b05dae0

void __thiscall
Metasound::FBPMToSecondsOperator::BindOutputs
          (FBPMToSecondsOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&BPMToSecondsVertexNames::OutputTimeSecondsName);
  local_res18[0] = &this->TimeSeconds;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// CreateOperator @ 14b0666a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FBPMToSecondsOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FBPMToSecondsOperator *this_00;
  FName local_res8;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BPMToSecondsVertexNames::InputBPMName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_78,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BPMToSecondsVertexNames::InputBeatMultiplierName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_58,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BPMToSecondsVertexNames::InputDivOfWholeNoteName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_38,&local_res8,pFVar1);
  this_00 = ::operator_new(0x98);
  if (this_00 == (FBPMToSecondsOperator *)0x0) {
    this_00 = (FBPMToSecondsOperator *)0x0;
  }
  else {
    this_00->_padding_ = (longlong)&___7FBPMToSecondsOperator_Metasound__6B_;
    *(undefined ***)&this_00->BPM = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->BPM).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->BPM).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->BPM = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->BeatMultiplier = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->BeatMultiplier).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->BeatMultiplier).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->BeatMultiplier = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->DivOfWholeNote = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->DivOfWholeNote).field_0x8 = local_38._8_8_;
    *(undefined8 *)&(this_00->DivOfWholeNote).field_0x10 = local_38._16_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->DivOfWholeNote = &___7__TDataReadReference_M_Metasound__6B_;
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
              ((TDataReference<Metasound::FTime> *)&this_00->TimeSeconds,NewObject);
    *(undefined ***)&this_00->TimeSeconds =
         &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
    this_00->PrevBPM = -1.0;
    this_00->PrevBeatMultiplier = -1.0;
    this_00->PrevDivOfWholeNote = -1.0;
    UpdateTime(this_00);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b06a0b0

void __thiscall Metasound::FBPMToSecondsOperator::Execute(FBPMToSecondsOperator *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = **(float **)&(this->BPM).field_0x8;
  if (__real_7e7fffff <= fVar4) {
    fVar4 = __real_7e7fffff;
  }
  fVar5 = **(float **)&(this->BeatMultiplier).field_0x8;
  if (fVar4 <= __real_3f800000) {
    fVar4 = __real_3f800000;
  }
  if (__real_7e7fffff <= fVar5) {
    fVar5 = __real_7e7fffff;
  }
  fVar3 = **(float **)&(this->DivOfWholeNote).field_0x8;
  if (fVar5 <= __real_38d1b717) {
    fVar5 = __real_38d1b717;
  }
  if (__real_7e7fffff <= fVar3) {
    fVar3 = __real_7e7fffff;
  }
  if (fVar3 <= __real_3f800000) {
    fVar3 = __real_3f800000;
  }
  if (((__real_322bcc77 <
        (float)((uint)(this->PrevBPM - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_322bcc77 <
       (float)((uint)(this->PrevBeatMultiplier - fVar5) & __xmm_7fffffff7fffffff7fffffff7fffffff)))
     || (__real_322bcc77 <
         (float)((uint)(this->PrevDivOfWholeNote - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff))
     ) {
    this->PrevBPM = fVar4;
    this->PrevBeatMultiplier = fVar5;
    this->PrevDivOfWholeNote = fVar3;
    if (fVar4 <= 0.0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrBPM > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBPMToSecondsNode.cpp"
                         ,0x68,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (fVar3 <= 0.0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrDivOfWholeNote > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBPMToSecondsNode.cpp"
                         ,0x69,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    **(double **)&(this->TimeSeconds).field_0x8 =
         (double)(((__real_43700000 / fVar4) * fVar5) / fVar3);
  }
  return;
}

// GetNodeInfo @ 14b075980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FBPMToSecondsOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FBPMToSecondsOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FBPMToSecondsOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b076750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FBPMToSecondsOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTime> *pTVar3;
  TInputDataVertex<float> *pTVar4;
  TInputDataVertex<float> *pTVar5;
  TInputDataVertex<float> *pTVar6;
  FInputVertexInterface *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_188 [32];
  float local_158;
  float local_154;
  float local_150 [2];
  FOutputVertexInterface local_148;
  FInputVertexInterface local_128;
  FOutputVertexInterfaceDeclarationBuilder local_108;
  TOutputDataVertex<Metasound::FTime> local_e0;
  TInputDataVertex<float> local_c0;
  TInputDataVertex<float> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                       (&local_e0,&BPMToSecondsVertexNames::OutputTimeSecondsName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_148);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_108,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_148,
               &local_148.SubInterfaces);
    if ((local_108.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
                 &(local_108.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_108,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_108);
    local_158 = 4.0;
    pTVar4 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&BPMToSecondsVertexNames::InputDivOfWholeNoteName,
                        &FDataVertexMetadata::EmptyBasic,&local_158);
    local_154 = 1.0;
    pTVar5 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_88,&BPMToSecondsVertexNames::InputBeatMultiplierName,
                        &FDataVertexMetadata::EmptyBasic,&local_154);
    local_150[0] = 90.0;
    pTVar6 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_c0,&BPMToSecondsVertexNames::InputBPMName,
                        &FDataVertexMetadata::EmptyBasic,local_150);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_>
                       (&local_128,pTVar6,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface(&::Interface,pFVar7,&local_148);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
               local_128.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
    if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((0xc < (byte)local_c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c0._48_1_])(&local_c0.field_0x20);
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
               local_148.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    atexit(`Metasound::FBPMToSecondsOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b07a8c0

void __thiscall
Metasound::FBPMToSecondsOperator::Reset(FBPMToSecondsOperator *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = **(float **)&(this->BPM).field_0x8;
  if (__real_7e7fffff <= fVar4) {
    fVar4 = __real_7e7fffff;
  }
  fVar5 = **(float **)&(this->BeatMultiplier).field_0x8;
  if (fVar4 <= __real_3f800000) {
    fVar4 = __real_3f800000;
  }
  if (__real_7e7fffff <= fVar5) {
    fVar5 = __real_7e7fffff;
  }
  fVar3 = **(float **)&(this->DivOfWholeNote).field_0x8;
  if (fVar5 <= __real_38d1b717) {
    fVar5 = __real_38d1b717;
  }
  if (__real_7e7fffff <= fVar3) {
    fVar3 = __real_7e7fffff;
  }
  if (fVar3 <= __real_3f800000) {
    fVar3 = __real_3f800000;
  }
  if (((__real_322bcc77 <
        (float)((uint)(this->PrevBPM - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_322bcc77 <
       (float)((uint)(this->PrevBeatMultiplier - fVar5) & __xmm_7fffffff7fffffff7fffffff7fffffff)))
     || (__real_322bcc77 <
         (float)((uint)(this->PrevDivOfWholeNote - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff))
     ) {
    this->PrevBPM = fVar4;
    this->PrevBeatMultiplier = fVar5;
    this->PrevDivOfWholeNote = fVar3;
    if (fVar4 <= 0.0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrBPM > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBPMToSecondsNode.cpp"
                         ,0x68,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (fVar3 <= 0.0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrDivOfWholeNote > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBPMToSecondsNode.cpp"
                         ,0x69,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    **(double **)&(this->TimeSeconds).field_0x8 =
         (double)(((__real_43700000 / fVar4) * fVar5) / fVar3);
  }
  return;
}

// UpdateTime @ 14b07c3d0

void __thiscall Metasound::FBPMToSecondsOperator::UpdateTime(FBPMToSecondsOperator *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = **(float **)&(this->BPM).field_0x8;
  if (__real_7e7fffff <= fVar4) {
    fVar4 = __real_7e7fffff;
  }
  fVar5 = **(float **)&(this->BeatMultiplier).field_0x8;
  if (fVar4 <= __real_3f800000) {
    fVar4 = __real_3f800000;
  }
  if (__real_7e7fffff <= fVar5) {
    fVar5 = __real_7e7fffff;
  }
  fVar3 = **(float **)&(this->DivOfWholeNote).field_0x8;
  if (fVar5 <= __real_38d1b717) {
    fVar5 = __real_38d1b717;
  }
  if (__real_7e7fffff <= fVar3) {
    fVar3 = __real_7e7fffff;
  }
  if (fVar3 <= __real_3f800000) {
    fVar3 = __real_3f800000;
  }
  if (((__real_322bcc77 <
        (float)((uint)(this->PrevBPM - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_322bcc77 <
       (float)((uint)(this->PrevBeatMultiplier - fVar5) & __xmm_7fffffff7fffffff7fffffff7fffffff)))
     || (__real_322bcc77 <
         (float)((uint)(this->PrevDivOfWholeNote - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff))
     ) {
    this->PrevBPM = fVar4;
    this->PrevBeatMultiplier = fVar5;
    this->PrevDivOfWholeNote = fVar3;
    if (fVar4 <= 0.0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrBPM > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBPMToSecondsNode.cpp"
                         ,0x68,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (fVar3 <= 0.0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrDivOfWholeNote > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBPMToSecondsNode.cpp"
                         ,0x69,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    **(double **)&(this->TimeSeconds).field_0x8 =
         (double)(((__real_43700000 / fVar4) * fVar5) / fVar3);
  }
  return;
}

