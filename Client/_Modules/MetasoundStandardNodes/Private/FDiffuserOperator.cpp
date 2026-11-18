// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 7

// BindInputs @ 14b042e30

void __thiscall
Metasound::FDiffuserOperator::BindInputs(FDiffuserOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FAudioBuffer> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&DiffuserNode::InputAudioName);
  local_res18 = &this->AudioInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&DiffuserNode::InputDiffusionDepthName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Depth;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&DiffuserNode::InputFeedbackGainName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Feedback;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b042f80

void __thiscall
Metasound::FDiffuserOperator::BindOutputs
          (FDiffuserOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&DiffuserNode::OutputAudioName);
  local_res18[0] = &this->AudioOutput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FDiffuserOperator @ 14b052760

FDiffuserOperator * __thiscall
Metasound::FDiffuserOperator::FDiffuserOperator
          (FDiffuserOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,TDataReadReference<int> *param_3,
          TDataReadReference<float> *param_4)

{
  TArray<Audio::FLongDelayAPF_*,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  int *piVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FDiffuserOperator *pFVar10;
  longlong lVar11;
  FLongDelayAPF *pFVar12;
  FLongDelayAPF *this_00;
  int iVar13;
  uint uVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  undefined8 local_68;
  undefined8 local_60 [7];
  
  this->_padding_ = (longlong)&___7FDiffuserOperator_Metasound__6B_;
  *(undefined ***)&this->AudioInput = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->AudioInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar11 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioInput).field_0x10 = lVar11;
  if (lVar11 != 0) {
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
  }
  *(undefined ***)&this->AudioInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->Depth = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Depth).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar11 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Depth).field_0x10 = lVar11;
  if (lVar11 != 0) {
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
  }
  *(undefined ***)&this->Depth = &___7__TDataReadReference_H_Metasound__6B_;
  this->ClampedDepth = 1;
  *(undefined ***)&this->Feedback = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Feedback).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar11 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->Feedback).field_0x10 = lVar11;
  if (lVar11 != 0) {
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
  }
  *(undefined ***)&this->Feedback = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOutput,NewObject,param_1);
  iVar13 = 0;
  pTVar1 = &this->Delays;
  *(undefined ***)&this->AudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar3 = &(this->Delays).ArrayMax;
  (this->Delays).ArrayNum = 0;
  *piVar3 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Delay_0).Ptr = (FLongDelayAPF *)0x0;
  (this->Delay_1).Ptr = (FLongDelayAPF *)0x0;
  (this->Delay_2).Ptr = (FLongDelayAPF *)0x0;
  (this->Delay_3).Ptr = (FLongDelayAPF *)0x0;
  (this->Delay_4).Ptr = (FLongDelayAPF *)0x0;
  (this->Delay_5).Ptr = (FLongDelayAPF *)0x0;
  uVar8 = 6;
  if ((int)**(uint **)&param_3->field_0x8 < 6) {
    uVar8 = **(uint **)&param_3->field_0x8;
  }
  uVar14 = 1;
  if (1 < (int)uVar8) {
    uVar14 = uVar8;
  }
  this->ClampedDepth = uVar14;
  fVar17 = (float)param_1->SampleRate * __real_3a83126f;
  fVar16 = **(float **)&param_4->field_0x8;
  if (__real_3f7ff972 <= **(float **)&param_4->field_0x8) {
    fVar16 = __real_3f7ff972;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  (this->Delays).ArrayNum = 0;
  if (*piVar3 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar14,&pTVar1->AllocatorInstance,0,piVar3);
  }
  if (0 < this->ClampedDepth) {
    pfVar15 = DiffuserNode::APFLengthsMs;
    do {
      this_00 = (FLongDelayAPF *)0x0;
      switch(iVar13) {
      case 1:
        lVar11 = 0xa8;
        break;
      case 2:
        lVar11 = 0xb0;
        break;
      case 3:
        lVar11 = 0xb8;
        break;
      case 4:
        lVar11 = 0xc0;
        break;
      case 5:
        lVar11 = 200;
        break;
      default:
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3667352413754360009>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundDiffuserNode.cpp"
                           ,0xc9,"false");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FDiffuserOperator *)(*pcVar6)();
          return pFVar10;
        }
      case 0:
        lVar11 = 0xa0;
      }
      puVar2 = (undefined8 *)((longlong)&this->_padding_ + lVar11);
      fVar4 = *pfVar15;
      pFVar12 = ::operator_new(0x28);
      if (pFVar12 != (FLongDelayAPF *)0x0) {
        this_00 = Audio::FLongDelayAPF::FLongDelayAPF(pFVar12,fVar16,(int)(fVar17 * fVar4),0xf0);
      }
      if (puVar2 == local_60) {
        if (this_00 != (FLongDelayAPF *)0x0) {
          Audio::FLongDelayAPF::~FLongDelayAPF(this_00);
          goto LAB_14b0529f9;
        }
      }
      else {
        pFVar12 = (FLongDelayAPF *)*puVar2;
        *puVar2 = this_00;
        if (pFVar12 != (FLongDelayAPF *)0x0) {
          Audio::FLongDelayAPF::~FLongDelayAPF(pFVar12);
          this_00 = pFVar12;
LAB_14b0529f9:
          ::operator_delete(this_00,0x28);
        }
      }
      local_68 = *puVar2;
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)*piVar3 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FDiffuserOperator *)(*pcVar6)();
        return pFVar10;
      }
      iVar9 = (this->Delays).ArrayNum;
      if (iVar9 == *piVar3) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,piVar3);
      }
      (this->Delays).ArrayNum = iVar9 + 1;
      iVar13 = iVar13 + 1;
      pfVar15 = pfVar15 + 1;
      *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_68;
    } while (iVar13 < this->ClampedDepth);
  }
  return this;
}

// CreateOperator @ 14b066f70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FDiffuserOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FDiffuserOperator *this_00;
  FDiffuserOperator *pFVar2;
  FName local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DiffuserNode::InputAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DiffuserNode::InputDiffusionDepthName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DiffuserNode::InputFeedbackGainName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0xd0);
  pFVar2 = (FDiffuserOperator *)0x0;
  if (this_00 != (FDiffuserOperator *)0x0) {
    pFVar2 = FDiffuserOperator(this_00,pFVar1,
                               (TDataReadReference<Metasound::FAudioBuffer> *)local_28,
                               (TDataReadReference<int> *)local_48,
                               (TDataReadReference<float> *)local_68);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b075bc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FDiffuserOperator::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FText *pFVar2;
  FVertexInterface *pFVar3;
  FName local_res8;
  FNodeClassName local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                  ::__l2::Info);
      ::FName::FName(&local_res8,L"Diffuser");
      FNodeClassName::FNodeClassName
                (&local_28,&StandardNodes::Namespace,&local_res8,&StandardNodes::AudioVariant);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name.Number = local_28.Name.Number;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name.ComparisonIndex.Value = local_28.Name.ComparisonIndex.Value;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = 1;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = 0;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = local_28.Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = local_28.Variant;
      pFVar2 = FText::FText((FText *)&local_28);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar2);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
      }
      pFVar2 = FText::FText((FText *)&local_28);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar2);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
              ::__l2::Info.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,&local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar3 = GetVertexInterface();
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar3);
      local_28.Namespace = (FName)NodeCategories::Delays.TextData.Reference;
      if (NodeCategories::Delays.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*NodeCategories::Delays.TextData.Reference + 8))
                  (NodeCategories::Delays.TextData.Reference,&local_res8);
      }
      local_28.Name.ComparisonIndex.Value = NodeCategories::Delays.Flags;
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_28,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)((longlong)*(ITextData *)local_28.Namespace + 0x10))();
      }
      atexit(`Metasound::FDiffuserOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b076ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FDiffuserOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_1a8 [32];
  float local_178;
  int local_174;
  FInputVertexInterface local_170;
  FOutputVertexInterface local_150;
  FInputVertexInterfaceDeclarationBuilder local_130;
  FOutputVertexInterfaceDeclarationBuilder local_108;
  TOutputDataVertex<Metasound::FAudioBuffer> local_e0;
  TInputDataVertex<Metasound::FAudioBuffer> local_c0;
  TInputDataVertex<int> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_e0,&DiffuserNode::OutputAudioName,&FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_150);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_108,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_150,
               &local_150.SubInterfaces);
    if ((local_108.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
                 &(local_108.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_108,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_108);
    local_178 = 0.707;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&DiffuserNode::InputFeedbackGainName,
                        &FDataVertexMetadata::EmptyBasic,&local_178);
    local_174 = 4;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_88,&DiffuserNode::InputDiffusionDepthName,
                        &FDataVertexMetadata::EmptyBasic,&local_174);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_c0,&DiffuserNode::InputAudioName,&FDataVertexMetadata::EmptyBasic);
    local_170._padding_ = 0;
    local_170._padding_ = 0;
    local_170.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.SubInterfaces.ArrayNum = 0;
    local_170.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_130,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_170,
               &local_170.SubInterfaces);
    if ((local_130.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,3,&(local_130.Vertices)->AllocatorInstance,(local_130.Vertices)->ArrayNum,
                 &(local_130.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_130,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_130,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_130,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_130);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetVertexInterface(void)'
                ::__l2::Interface,&local_170,&local_150);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
               local_170.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
    if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_170._padding_);
    }
    if ((0xc < (byte)local_c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c0._48_1_])(&local_c0.field_0x20);
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
               local_150.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_150._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_150._padding_);
    }
    atexit(`Metasound::FDiffuserOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b07acb0

void __thiscall Metasound::FDiffuserOperator::Reset(FDiffuserOperator *this,FResetParams *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Delays).AllocatorInstance.Data;
  iVar2 = (this->Delays).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Delays).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Audio::FLongDelayAPF_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    Audio::FLongDelayAPF::Reset(*(FLongDelayAPF **)pFVar4);
    pFVar4 = pFVar4 + 8;
  }
  puVar3 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar2 = *(int *)(puVar3 + 1);
  if (0 < iVar2) {
    memset((void *)*puVar3,0,(longlong)iVar2 << 2);
  }
  return;
}

