// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 8

// BindInputs @ 14b08b240

void __thiscall
Metasound::FLinearToLogFrequencyOperator::BindInputs
          (FLinearToLogFrequencyOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<float> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::InputValueName);
  local_res18 = &this->Value;
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
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::InputDomainMinName);
  local_res18 = &this->DomainMin;
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
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::InputDomainMaxName);
  local_res18 = &this->DomainMax;
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
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::InputRangeMinName);
  local_res18 = &this->RangeMin;
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
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::InputRangeMaxName);
  local_res18 = &this->RangeMax;
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

// BindOutputs @ 14b08b420

void __thiscall
Metasound::FLinearToLogFrequencyOperator::BindOutputs
          (FLinearToLogFrequencyOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::OutputFreqName);
  local_res18[0] = &this->FreqOutput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// operator() @ 14b0bce00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FLinearToLogFrequencyOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  ITextData *pIVar3;
  FText *pFVar4;
  code *pcVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  int iVar8;
  FVertexInterface *pFVar9;
  FText *pFVar10;
  FNodeClassMetadata *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  FName local_74;
  FName local_68;
  FText local_60;
  FText local_50;
  FText local_40;
  FNodeClassName local_30;
  
  ::FName::FName(&local_68,L"Linear To Log Frequency");
  FText::FText(&local_50);
  FText::FText(&local_60);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_74,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_30,&Metasound::StandardNodes::Namespace,&local_68,&local_74);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_30.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_30.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_30.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_30.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_30.Variant;
  pIVar3 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar3 != local_50.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_50.TextData.Reference;
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 8))
                (local_50.TextData.Reference,local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_50.Flags;
  pIVar3 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar3 != local_60.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_60.TextData.Reference;
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 8))
                (local_60.TextData.Reference,local_res18);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_60.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_res20);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar9 = Metasound::FLinearToLogFrequencyOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
  iVar8 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar12 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar8 + 1;
  pFVar12 = pFVar12 + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  TVar6 = Metasound::NodeCategories::Math.TextData;
  *(ITextData **)pFVar12 = Metasound::NodeCategories::Math.TextData.Reference;
  if (TVar6.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_78);
  }
  *(uint *)(pFVar12 + 8) = Metasound::NodeCategories::Math.Flags;
  pFVar10 = FText::FText(&local_40);
  pTVar2 = &__return_storage_ptr__->Keywords;
  pFVar4 = (FText *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= pFVar10) && (pFVar10 < pFVar4 + (__return_storage_ptr__->Keywords).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FNodeClassMetadata *)(*pcVar5)();
      return pFVar11;
    }
  }
  iVar8 = (__return_storage_ptr__->Keywords).ArrayNum;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar8 + 1;
  FText::FText((FText *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10),pFVar10);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b0cd2c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FLinearToLogFrequencyOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  FLinearToLogFrequencyOperator *this_00;
  undefined8 *puVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  float fVar6;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  FName local_f8;
  FName local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [48];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_e8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::InputDomainMinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_c8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::InputDomainMaxName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_a8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::InputRangeMinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_88,&local_f8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LinearToLogFrequencyVertexNames::InputRangeMaxName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_f0,pFVar1);
  this_00 = ::operator_new(0xd0);
  if (this_00 == (FLinearToLogFrequencyOperator *)0x0) {
    this_00 = (FLinearToLogFrequencyOperator *)0x0;
  }
  else {
    this_00->_padding_ = (longlong)&___7FLinearToLogFrequencyOperator_Metasound__6B_;
    *(undefined ***)&this_00->Value = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->Value).field_0x8 = local_e8._8_8_;
    *(undefined8 *)&(this_00->Value).field_0x10 = local_e8._16_8_;
    if ((TReferenceControllerBase<0> *)local_e8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_e8._16_8_ + 8) = *(int *)(local_e8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->Value = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->DomainMin = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->DomainMin).field_0x8 = local_c8._8_8_;
    *(undefined8 *)&(this_00->DomainMin).field_0x10 = local_c8._16_8_;
    if ((TReferenceControllerBase<0> *)local_c8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_c8._16_8_ + 8) = *(int *)(local_c8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->DomainMin = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->DomainMax = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->DomainMax).field_0x8 = local_a8._8_8_;
    *(undefined8 *)&(this_00->DomainMax).field_0x10 = local_a8._16_8_;
    if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->DomainMax = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->RangeMin = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->RangeMin).field_0x8 = local_88._8_8_;
    *(undefined8 *)&(this_00->RangeMin).field_0x10 = local_88._16_8_;
    if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->RangeMin = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->RangeMax = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->RangeMax).field_0x8 = local_68._8_8_;
    *(undefined8 *)&(this_00->RangeMax).field_0x10 = local_68._16_8_;
    if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->RangeMax = &___7__TDataReadReference_M_Metasound__6B_;
    fVar6 = GetOutputValue(this_00);
    *(undefined ***)&this_00->FreqOutput = &___7__TDataReference_M_Metasound__6B_;
    puVar4 = ::operator_new(0x18);
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined8 *)&(this_00->FreqOutput).field_0x8 = 0x10;
      *(undefined8 *)&(this_00->FreqOutput).field_0x10 = 0;
    }
    else {
      *(undefined4 *)(puVar4 + 1) = 1;
      *puVar4 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
      *(float *)(puVar4 + 2) = fVar6;
      *(undefined8 **)&(this_00->FreqOutput).field_0x8 = puVar4 + 2;
      *(undefined8 **)&(this_00->FreqOutput).field_0x10 = puVar4;
      if (puVar4 + 2 == (undefined8 *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar5.Ptr = (IOperator *)(*pcVar2)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
        }
      }
    }
    *(undefined ***)&this_00->FreqOutput = &___7__TDataWriteReference_M_Metasound__6B_;
    this_00->PrevInputValue = **(float **)&(this_00->Value).field_0x8;
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b0d9a30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FLinearToLogFrequencyOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FLinearToLogFrequencyOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FLinearToLogFrequencyOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetOutputValue @ 14b0d9ed0

float __thiscall
Metasound::FLinearToLogFrequencyOperator::GetOutputValue(FLinearToLogFrequencyOperator *this)

{
  float fVar1;
  float fVar2;
  double _X;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  
  fVar1 = **(float **)&(this->RangeMin).field_0x8;
  if (fVar1 <= __real_322bcc77) {
    fVar1 = __real_322bcc77;
  }
  fVar2 = **(float **)&(this->RangeMax).field_0x8;
  if (fVar2 <= __real_322bcc77) {
    fVar2 = __real_322bcc77;
  }
  dVar4 = (double)**(float **)&(this->DomainMin).field_0x8;
  _X = (double)**(float **)&(this->Value).field_0x8;
  dVar3 = (double)**(float **)&(this->DomainMax).field_0x8;
  fVar7 = fVar1;
  if (((dVar4 < _X) && (fVar7 = fVar2, _X < dVar3)) &&
     (iVar5 = _isnan(_X), fVar7 = fVar1, iVar5 == 0)) {
    dVar8 = log((double)fVar2);
    uVar6 = SUB84(dVar8,0);
    uVar9 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if (__real_47eff933c0000000 <= dVar8) {
      uVar6 = SUB84(__real_47eff933c0000000,0);
      uVar9 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
    }
    dVar8 = log((double)fVar1);
    if (dVar8 <= __real_3e45798ee0000000) {
      dVar8 = __real_3e45798ee0000000;
    }
    dVar3 = dVar3 - dVar4;
    uVar10 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar11 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar11,uVar10) &&
        (double)CONCAT44(uVar11,uVar10) != __real_3e45798ee2308c3a) {
      dVar3 = (_X - dVar4) / dVar3;
    }
    else {
      dVar3 = 0.0;
    }
    fVar7 = expf((float)(((double)CONCAT44(uVar9,uVar6) - dVar8) * dVar3 + dVar8));
  }
  return fVar7;
}

// GetVertexInterface @ 14b0e1a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FLinearToLogFrequencyOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FVertexInterface *pFVar9;
  undefined1 auStackY_238 [32];
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8 [2];
  FInputVertexInterface local_1f0;
  FOutputVertexInterface local_1d0;
  FInputVertexInterfaceDeclarationBuilder local_1b0;
  FOutputVertexInterfaceDeclarationBuilder local_188;
  TOutputDataVertex<float> local_160;
  TInputDataVertex<float> local_140;
  TInputDataVertex<float> local_108;
  TInputDataVertex<float> local_d0;
  TInputDataVertex<float> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_160,&LinearToLogFrequencyVertexNames::OutputFreqName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_1d0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_188,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1d0,
               &local_1d0.SubInterfaces);
    if ((local_188.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_188.Vertices)->AllocatorInstance,(local_188.Vertices)->ArrayNum,
                 &(local_188.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_188,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_188);
    local_208 = 20000.0;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_60,&LinearToLogFrequencyVertexNames::InputRangeMaxName,
                        &FDataVertexMetadata::EmptyBasic,&local_208);
    local_204 = 20.0;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_98,&LinearToLogFrequencyVertexNames::InputRangeMinName,
                        &FDataVertexMetadata::EmptyBasic,&local_204);
    local_200 = 1.0;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_d0,&LinearToLogFrequencyVertexNames::InputDomainMaxName,
                        &FDataVertexMetadata::EmptyBasic,&local_200);
    local_1fc = 0.0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_108,&LinearToLogFrequencyVertexNames::InputDomainMinName,
                        &FDataVertexMetadata::EmptyBasic,&local_1fc);
    local_1f8[0] = 0.0;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_140,&LinearToLogFrequencyVertexNames::InputValueName,
                        &FDataVertexMetadata::EmptyBasic,local_1f8);
    local_1f0._padding_ = 0;
    local_1f0._padding_ = 0;
    local_1f0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.SubInterfaces.ArrayNum = 0;
    local_1f0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1b0,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1f0,
               &local_1f0.SubInterfaces);
    if ((local_1b0.Vertices)->ArrayMax < 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,5,&(local_1b0.Vertices)->AllocatorInstance,(local_1b0.Vertices)->ArrayNum,
                 &(local_1b0.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1b0);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetVertexInterface(void)'
                ::__l2::Interface,&local_1f0,&local_1d0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1f0.SubInterfaces.AllocatorInstance.Data,
               local_1f0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1f0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1f0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1f0._padding_,(int)local_1f0._padding_);
    if ((FInputDataVertex *)local_1f0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1f0._padding_);
    }
    if ((0xc < (byte)local_140._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_140._48_1_])(&local_140.field_0x20);
    if ((0xc < (byte)local_108._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_108._48_1_])(&local_108.field_0x20);
    if ((0xc < (byte)local_d0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_d0._48_1_])(&local_d0.field_0x20);
    if ((0xc < (byte)local_98._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
    if ((0xc < (byte)local_60._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data,
               local_1d0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1d0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1d0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1d0._padding_);
    }
    atexit(`Metasound::FLinearToLogFrequencyOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLinearToLogFrequencyOperator::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b0e5680

void __thiscall
Metasound::FLinearToLogFrequencyOperator::Reset
          (FLinearToLogFrequencyOperator *this,FResetParams *param_1)

{
  float fVar1;
  
  this->PrevInputValue = **(float **)&(this->Value).field_0x8;
  fVar1 = GetOutputValue(this);
  **(float **)&(this->FreqOutput).field_0x8 = fVar1;
  return;
}

