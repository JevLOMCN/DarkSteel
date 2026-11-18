// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// BindInputs @ 14b0ebfd0

void __thiscall
Metasound::FMidSideDecodeOperator::BindInputs
          (FMidSideDecodeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&MidSideDecodeVertexNames::InputAudioMidName);
  local_res18 = &this->AudioInputMid;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MidSideDecodeVertexNames::InputAudioSideName);
  local_res18 = &this->AudioInputSide;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MidSideDecodeVertexNames::InputSpreadAmountName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->SpreadAmount;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&MidSideDecodeVertexNames::InputEqualPowerName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->bEqualPower;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b0ec190

void __thiscall
Metasound::FMidSideDecodeOperator::BindOutputs
          (FMidSideDecodeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&MidSideDecodeVertexNames::OutputAudioLeftName);
  local_res18 = &this->AudioOutputLeft;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&MidSideDecodeVertexNames::OutputAudioRightName);
  local_res18 = &this->AudioOutputRight;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// FMidSideDecodeOperator @ 14b140cf0

FMidSideDecodeOperator * __thiscall
Metasound::FMidSideDecodeOperator::FMidSideDecodeOperator
          (FMidSideDecodeOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TDataReadReference<Metasound::FAudioBuffer> *param_3,TDataReadReference<float> *param_4,
          TDataReadReference<bool> *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  
  this->_padding_ = (longlong)&___7FMidSideDecodeOperator_Metasound__6B_;
  *(undefined ***)&this->AudioInputMid =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioInputMid).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar6 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioInputMid).field_0x10 = lVar6;
  if (lVar6 != 0) {
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  }
  *(undefined ***)&this->AudioInputMid =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->AudioInputSide =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioInputSide).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar6 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->AudioInputSide).field_0x10 = lVar6;
  if (lVar6 != 0) {
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  }
  *(undefined ***)&this->AudioInputSide =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->SpreadAmount = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->SpreadAmount).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar6 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->SpreadAmount).field_0x10 = lVar6;
  if (lVar6 != 0) {
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  }
  *(undefined ***)&this->SpreadAmount = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->bEqualPower = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bEqualPower).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar6 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->bEqualPower).field_0x10 = lVar6;
  if (lVar6 != 0) {
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  }
  *(undefined ***)&this->bEqualPower = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOutputLeft,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->AudioOutputLeft =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOutputRight,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->AudioOutputRight =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar1 = &(this->MidInBuffer).ArrayNum;
  pfVar7 = *(float **)&(this->SpreadAmount).field_0x8;
  piVar2 = &(this->SideInBuffer).ArrayNum;
  piVar3 = &(this->SideInBuffer).ArrayMax;
  this->MidScale = 0.0;
  this->SideScale = 0.0;
  this->PrevMidScale = 0.0;
  this->PrevSideScale = 0.0;
  puVar8 = *(undefined1 **)&(this->bEqualPower).field_0x8;
  this->PrevSpreadAmount = *pfVar7;
  piVar4 = &(this->MidInBuffer).ArrayMax;
  this->bPrevEqualPower = (bool)*puVar8;
  *piVar1 = 0;
  *piVar4 = 0;
  (this->MidInBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SideInBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar3 = 0;
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_1->OperatorSettings->NumFramesPerBlock,&(this->MidInBuffer).AllocatorInstance
             ,piVar1,piVar4);
  memset((this->MidInBuffer).AllocatorInstance.Data,0,(longlong)(this->MidInBuffer).ArrayNum << 2);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_1->OperatorSettings->NumFramesPerBlock,
             &(this->SideInBuffer).AllocatorInstance,piVar2,piVar3);
  memset((this->SideInBuffer).AllocatorInstance.Data,0,(longlong)(this->SideInBuffer).ArrayNum << 2)
  ;
  puVar9 = *(undefined8 **)&(this->AudioOutputLeft).field_0x8;
  iVar5 = *(int *)(puVar9 + 1);
  if (0 < iVar5) {
    memset((void *)*puVar9,0,(longlong)iVar5 << 2);
  }
  puVar9 = *(undefined8 **)&(this->AudioOutputRight).field_0x8;
  iVar5 = *(int *)(puVar9 + 1);
  if (0 < iVar5) {
    memset((void *)*puVar9,0,(longlong)iVar5 << 2);
  }
  fVar10 = **(float **)&(this->SpreadAmount).field_0x8;
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  UpdateScale(this,fVar10);
  this->PrevMidScale = this->MidScale;
  this->PrevSideScale = this->SideScale;
  this->PrevSpreadAmount = fVar10;
  return this;
}

// operator() @ 14b14dd80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FMidSideDecodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FVertexInterface *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FNodeClassName *pFVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  FNodeClassName local_188;
  FString local_168;
  TArray<FText,TSizedDefaultAllocator<32>_> local_158;
  FNodeDisplayStyle local_148;
  TArray<FText,TSizedDefaultAllocator<32>_> local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::FMidSideDecodeOperator::DeclareVertexInterface();
  Metasound::FVertexInterface::FVertexInterface(&local_c8,pFVar1);
  local_188.Namespace.ComparisonIndex.Value = 0;
  local_188.Namespace.Number = 0;
  local_188.Name.ComparisonIndex.Value = 0x1010101;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_128.TextData.Reference = Metasound::NodeCategories::Spatialization.TextData.Reference;
  if (Metasound::NodeCategories::Spatialization.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Spatialization.TextData.Reference + 8))
              (Metasound::NodeCategories::Spatialization.TextData.Reference,local_res10);
  }
  local_128.Flags = Metasound::NodeCategories::Spatialization.Flags;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
  ConstructItems<FText,FText,int>(local_158.AllocatorInstance.Data,&local_128,1);
  pFVar1 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_118.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_118.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_168.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_168,
               Metasound::PluginAuthor.Data.ArrayNum,&local_168.Data.ArrayMax);
    memcpy(local_168.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
  }
  pFVar2 = FText::FText(&local_108);
  pFVar3 = FText::FText(&local_f8);
  ::FName::FName(local_res18,"Mid-Side Encode");
  pFVar4 = Metasound::FNodeClassName::FNodeClassName
                     (&local_e8,&Metasound::StandardNodes::Namespace,local_res18,
                      &Metasound::StandardNodes::AudioVariant);
  local_148.ImageName = local_188.Namespace;
  local_188.Namespace = pFVar4->Namespace;
  local_148.bShowName = (bool)(undefined1)local_188.Name.ComparisonIndex.Value;
  local_148.bShowInputNames = (bool)local_188.Name.ComparisonIndex.Value._1_1_;
  local_148.bShowOutputNames = (bool)local_188.Name.ComparisonIndex.Value._2_1_;
  local_148.bShowLiterals = (bool)local_188.Name.ComparisonIndex.Value._3_1_;
  local_188.Variant = pFVar4->Variant;
  local_188.Name = pFVar4->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_188,1,0,pFVar3,pFVar2,&local_168,&local_118,pFVar1,
             &local_158,&local_138,&local_148);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  return __return_storage_ptr__;
}

// CreateOperator @ 14b177bc0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FMidSideDecodeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FMidSideDecodeOperator *this_00;
  FMidSideDecodeOperator *pFVar2;
  FName local_res8;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidSideDecodeVertexNames::InputAudioMidName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidSideDecodeVertexNames::InputAudioSideName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidSideDecodeVertexNames::InputSpreadAmountName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidSideDecodeVertexNames::InputEqualPowerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_88,&local_res8,pFVar1);
  this_00 = ::operator_new(0x100);
  pFVar2 = (FMidSideDecodeOperator *)0x0;
  if (this_00 != (FMidSideDecodeOperator *)0x0) {
    pFVar2 = FMidSideDecodeOperator
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_28,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_48,
                        (TDataReadReference<float> *)local_68,(TDataReadReference<bool> *)local_88);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b17f420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FMidSideDecodeOperator::DeclareVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  FOutputVertexInterface *pFVar5;
  TInputDataVertex<bool> *pTVar6;
  TInputDataVertex<float> *pTVar7;
  TInputDataVertex<Metasound::FAudioBuffer> *pTVar8;
  TInputDataVertex<Metasound::FAudioBuffer> *pTVar9;
  FInputVertexInterface *pFVar10;
  FVertexInterface *pFVar11;
  undefined1 auStackY_1a8 [32];
  bool local_178 [4];
  float local_174;
  FInputVertexInterface local_170;
  FOutputVertexInterface local_150;
  TOutputDataVertex<Metasound::FAudioBuffer> local_130;
  TOutputDataVertex<Metasound::FAudioBuffer> local_110;
  TInputDataVertex<Metasound::FAudioBuffer> local_f0;
  TInputDataVertex<Metasound::FAudioBuffer> local_b8;
  TInputDataVertex<float> local_80;
  TInputDataVertex<bool> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::DeclareVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::DeclareVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_130,&MidSideDecodeVertexNames::OutputAudioRightName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_110,&MidSideDecodeVertexNames::OutputAudioLeftName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar5 = FOutputVertexInterface::
             FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FAudioBuffer>,Metasound::TOutputDataVertex<Metasound::FAudioBuffer>_>
                       (&local_150,pTVar4,pTVar3);
    local_178[0] = false;
    pTVar6 = TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_48,&MidSideDecodeVertexNames::InputEqualPowerName,
                        &FDataVertexMetadata::EmptyBasic,local_178);
    local_174 = 0.5;
    pTVar7 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_80,&MidSideDecodeVertexNames::InputSpreadAmountName,
                        &FDataVertexMetadata::EmptyBasic,&local_174);
    pTVar8 = TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_b8,&MidSideDecodeVertexNames::InputAudioSideName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar9 = TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_f0,&MidSideDecodeVertexNames::InputAudioMidName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar10 = FInputVertexInterface::
              FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>_>
                        (&local_170,pTVar9,pTVar8,pTVar7,pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::DeclareVertexInterface(void)'
                ::__l2::Interface,pFVar10,pFVar5);
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
    if ((0xc < (byte)local_f0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_f0._48_1_])(&local_f0.field_0x20);
    if ((0xc < (byte)local_b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
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
    atexit(`Metasound::FMidSideDecodeOperator::DeclareVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::DeclareVertexInterface(void)'
          ::__l2::Interface;
}

// Execute @ 14b189f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FMidSideDecodeOperator::Execute(FMidSideDecodeOperator *this)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  FScriptContainerElement *pFVar8;
  float *pfVar9;
  void *pvVar10;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar11;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar12;
  code *pcVar13;
  undefined8 uVar14;
  bool bVar15;
  TArrayView<float,int> *pTVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  TArrayView<float,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float,int> local_48 [3];
  
  fVar2 = __real_322bcc77;
  fVar19 = **(float **)&(this->SpreadAmount).field_0x8;
  if (__real_3f800000 <= fVar19) {
    fVar19 = __real_3f800000;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  fVar17 = __real_3f800000;
  if (((float)((uint)(fVar19 - this->PrevSpreadAmount) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77) &&
     (this->bPrevEqualPower == (bool)**(char **)&(this->bEqualPower).field_0x8)) {
    fVar17 = 0.0;
  }
  uVar18 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (fVar17 != 0.0) {
    UpdateScale(this,fVar19);
    uVar18 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    puVar5 = *(undefined1 **)&(this->bEqualPower).field_0x8;
    this->PrevSpreadAmount = fVar19;
    this->bPrevEqualPower = (bool)*puVar5;
  }
  if (fVar2 < (float)((uint)(this->PrevMidScale - this->MidScale) & uVar18)) {
    puVar6 = *(undefined8 **)&(this->AudioInputMid).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>_const&___ptr64(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pTVar11 = &this->MidInBuffer;
    if (pTVar11 != (TArray<float,TAlignedHeapAllocator<16>_> *)puVar6) {
      iVar3 = *(int *)(puVar6 + 1);
      piVar1 = &(this->MidInBuffer).ArrayMax;
      pvVar10 = (void *)*puVar6;
      (this->MidInBuffer).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,iVar3,*piVar1,&pTVar11->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar11->AllocatorInstance).Data,pvVar10,(longlong)iVar3 << 2);
        }
      }
    }
    fVar19 = this->MidScale;
    fVar2 = this->PrevMidScale;
    pTVar16 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (&local_58,pTVar11);
    local_88.DataPtr = pTVar16->DataPtr;
    local_88.ArrayNum = pTVar16->ArrayNum;
    local_88._12_4_ = *(undefined4 *)&pTVar16->field_0xc;
    Audio::ArrayFade(&local_88,fVar2,fVar19);
    puVar6 = *(undefined8 **)&(this->AudioInputSide).field_0x8;
    this->PrevMidScale = this->MidScale;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>_const&___ptr64(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pTVar11 = &this->SideInBuffer;
    if (pTVar11 != (TArray<float,TAlignedHeapAllocator<16>_> *)puVar6) {
      iVar3 = *(int *)(puVar6 + 1);
      piVar1 = &(this->SideInBuffer).ArrayMax;
      pvVar10 = (void *)*puVar6;
      (this->SideInBuffer).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,iVar3,*piVar1,&pTVar11->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar11->AllocatorInstance).Data,pvVar10,(longlong)iVar3 << 2);
        }
      }
    }
    fVar19 = this->SideScale;
    fVar2 = this->PrevSideScale;
    pTVar16 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (local_48,pTVar11);
    local_78.DataPtr = pTVar16->DataPtr;
    local_78.ArrayNum = pTVar16->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&pTVar16->field_0xc;
    Audio::ArrayFade(&local_78,fVar2,fVar19);
    this->PrevSideScale = this->SideScale;
  }
  else {
    pTVar16 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (&local_68,&this->MidInBuffer);
    fVar19 = this->MidScale;
    puVar6 = *(undefined8 **)&(this->AudioInputMid).field_0x8;
    pfVar9 = pTVar16->DataPtr;
    uVar14._0_4_ = pTVar16->ArrayNum;
    uVar14._4_4_ = *(undefined4 *)&pTVar16->field_0xc;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar7 = (float *)*puVar6;
    iVar3 = *(int *)(puVar6 + 1);
    if (iVar3 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar15) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    local_b8._12_4_ = uStack_dc;
    local_b8.ArrayNum = iVar3;
    local_c8.DataPtr = pfVar9;
    local_c8._8_8_ = uVar14;
    local_b8.DataPtr = pfVar7;
    Audio::ArrayMultiplyByConstant(&local_b8,fVar19,&local_c8);
    pFVar8 = (this->SideInBuffer).AllocatorInstance.Data;
    iVar3 = (this->SideInBuffer).ArrayNum;
    if (iVar3 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar15) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    fVar19 = this->SideScale;
    puVar6 = *(undefined8 **)&(this->AudioInputSide).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar9 = (float *)*puVar6;
    iVar4 = *(int *)(puVar6 + 1);
    if (iVar4 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar15) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    local_a8._12_4_ = uStack_cc;
    local_a8.ArrayNum = iVar3;
    local_98._12_4_ = uStack_dc;
    local_98.ArrayNum = iVar4;
    local_a8.DataPtr = (float *)pFVar8;
    local_98.DataPtr = pfVar9;
    Audio::ArrayMultiplyByConstant(&local_98,fVar19,&local_a8);
  }
  pTVar11 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->AudioOutputRight).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar11[1].AllocatorInstance.Data != pTVar11->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>&___ptr64(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pTVar12 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->AudioOutputLeft).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar12[1].AllocatorInstance.Data != pTVar12->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>&___ptr64(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::DecodeMidSide(&this->MidInBuffer,&this->SideInBuffer,pTVar12,pTVar11);
  return;
}

// GetNodeInfo @ 14b197c60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FMidSideDecodeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FMidSideDecodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FMidSideDecodeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMidSideDecodeOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b1a7a40

void __thiscall
Metasound::FMidSideDecodeOperator::Reset(FMidSideDecodeOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  
  puVar2 = *(undefined8 **)&(this->AudioOutputLeft).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  puVar2 = *(undefined8 **)&(this->AudioOutputRight).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  fVar3 = **(float **)&(this->SpreadAmount).field_0x8;
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  UpdateScale(this,fVar3);
  this->PrevMidScale = this->MidScale;
  this->PrevSpreadAmount = fVar3;
  this->PrevSideScale = this->SideScale;
  return;
}

// UpdateScale @ 14b1aba40

void __thiscall
Metasound::FMidSideDecodeOperator::UpdateScale(FMidSideDecodeOperator *this,float param_1)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  
  FMath::SinCos<float>(&this->SideScale,&this->MidScale,param_1 * __real_3fc90fdb);
  fVar2 = this->MidScale * __real_3fb504f3;
  pcVar1 = *(char **)&(this->bEqualPower).field_0x8;
  fVar3 = this->SideScale * __real_3fb504f3;
  this->MidScale = fVar2;
  this->SideScale = fVar3;
  if (*pcVar1 == '\0') {
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->MidScale = fVar2;
    this->SideScale = fVar3;
  }
  return;
}

