// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// FGrainDelayOperator @ 14b0b3d50

FGrainDelayOperator * __thiscall
Metasound::FGrainDelayOperator::FGrainDelayOperator
          (FGrainDelayOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<float> *param_4,
          TDataReadReference<float> *param_5,TDataReadReference<float> *param_6,
          TDataReadReference<float> *param_7,TDataReadReference<float> *param_8,
          TDataReadReference<float> *param_9,
          TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *param_10,
          TDataReadReference<int> *param_11,TDataReadReference<float> *param_12,float param_13)

{
  FGrainDelay *this_00;
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  EEnvelope *pEVar4;
  float fVar5;
  float fVar6;
  
  this->_padding_ = (longlong)&___7FGrainDelayOperator_Metasound__6B_;
  fVar6 = param_1->TargetBlockRate;
  fVar5 = param_1->ActualBlockRate;
  iVar1 = param_1->NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = param_1->SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar6;
  (this->OperatorSettings).ActualBlockRate = fVar5;
  (this->OperatorSettings).NumFramesPerBlock = iVar1;
  *(undefined ***)&this->AudioInput = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->AudioInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->AudioInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->GrainSpawnTrigger =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->GrainSpawnTrigger).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->GrainSpawnTrigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->GrainSpawnTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->GrainDelay = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GrainDelay).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar2 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->GrainDelay).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->GrainDelay = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GrainDelayDelta = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GrainDelayDelta).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar2 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->GrainDelayDelta).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->GrainDelayDelta = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GrainDuration = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GrainDuration).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar2 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->GrainDuration).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->GrainDuration = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GrainDurationDelta = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GrainDurationDelta).field_0x8 = *(undefined8 *)&param_7->field_0x8;
  lVar2 = *(longlong *)&param_7->field_0x10;
  *(longlong *)&(this->GrainDurationDelta).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->GrainDurationDelta = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GrainPitchShift = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GrainPitchShift).field_0x8 = *(undefined8 *)&param_8->field_0x8;
  lVar2 = *(longlong *)&param_8->field_0x10;
  *(longlong *)&(this->GrainPitchShift).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->GrainPitchShift = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GrainPitchShiftDelta = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GrainPitchShiftDelta).field_0x8 = *(undefined8 *)&param_9->field_0x8;
  lVar2 = *(longlong *)&param_9->field_0x10;
  *(longlong *)&(this->GrainPitchShiftDelta).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->GrainPitchShiftDelta = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GrainDelayEnvelope =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&(this->GrainDelayEnvelope).field_0x8 = *(undefined8 *)&param_10->field_0x8;
  lVar2 = *(longlong *)&param_10->field_0x10;
  *(longlong *)&(this->GrainDelayEnvelope).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->GrainDelayEnvelope =
       &___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined ***)&this->GrainMaxCount = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->GrainMaxCount).field_0x8 = *(undefined8 *)&param_11->field_0x8;
  lVar2 = *(longlong *)&param_11->field_0x10;
  *(longlong *)&(this->GrainMaxCount).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->GrainMaxCount = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->GrainDelayFeedbackAmount = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GrainDelayFeedbackAmount).field_0x8 = *(undefined8 *)&param_12->field_0x8;
  lVar2 = *(longlong *)&param_12->field_0x10;
  *(longlong *)&(this->GrainDelayFeedbackAmount).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->GrainDelayFeedbackAmount = &___7__TDataReadReference_M_Metasound__6B_;
  this->GrainMaxDelayTimeSeconds = param_13;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOutput,NewObject,
             &this->OperatorSettings);
  *(undefined ***)&this->AudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  this_00 = &this->GrainDelayProcessor;
  iVar1 = (this->OperatorSettings).SampleRate;
  this->PreviousGrainDelayMsec = 0;
  this->PreviousPitchShift = 0.0;
  this->PreviousGrainEnvelopeType = Gaussian;
  Audio::GrainDelay::FGrainDelay::FGrainDelay(this_00,(float)iVar1,this->GrainMaxDelayTimeSeconds);
  fVar6 = Audio::GrainDelay::FGrainDelay::GetGrainDelayClamped
                    (this_00,**(float **)&(this->GrainDelay).field_0x8);
  this->PreviousGrainDelayMsec = (int)fVar6;
  pfVar3 = *(float **)&(this->GrainPitchShift).field_0x8;
  this->PreviousGrainEnvelopeType = **(EEnvelope **)&param_10->field_0x8;
  fVar6 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftClamped(this_00,*pfVar3);
  pEVar4 = *(EEnvelope **)&(this->GrainDelayEnvelope).field_0x8;
  this->PreviousPitchShift = fVar6;
  Audio::GrainDelay::FGrainDelay::SetGrainEnvelope(this_00,*pEVar4);
  fVar6 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftFrameRatio
                    (this_00,this->PreviousPitchShift);
  Audio::GrainDelay::FGrainDelay::SetGrainBasePitchShiftRatio(this_00,fVar6);
  return this;
}

// operator() @ 14b0bc360

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FGrainDelayOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10 [3];
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res10,L"GrainDelayNode");
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,local_res10,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_28.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_28.Name;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  pFVar5 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar5);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar6 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGrainDelayOperator::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res10,&::DefaultInterface);
      atexit(FGrainDelayOperator::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,&::DefaultInterface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Delays.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Delays.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Delays.Flags;
  return __return_storage_ptr__;
}

// operator() @ 14b0bd300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::FGrainDelayOperator::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  TRefCountPtr<ITextData> TVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  FName *pFVar7;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar8;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar9;
  ulonglong uVar10;
  undefined1 auStack_3a8 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> *local_388;
  TOutputDataVertex<Metasound::FAudioBuffer> *local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_368;
  FInputVertexInterface local_358;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  int local_320 [2];
  float local_318 [2];
  FOutputVertexInterface local_310;
  undefined1 local_2f0 [4];
  undefined1 local_2ec [4];
  longlong local_2e8;
  TOutputDataVertex<Metasound::FAudioBuffer> local_2e0;
  FInputDataVertex local_2c0;
  TInputDataVertex<Metasound::FAudioBuffer> local_288;
  TInputDataVertex<Metasound::FTrigger> local_250;
  TInputDataVertex<float> local_218;
  TInputDataVertex<float> local_1e0;
  TInputDataVertex<float> local_1a8;
  TInputDataVertex<float> local_170;
  TInputDataVertex<float> local_138;
  TInputDataVertex<float> local_100;
  undefined1 local_c8 [32];
  undefined1 local_a8 [16];
  byte local_98;
  TInputDataVertex<int> local_90;
  TInputDataVertex<float> local_58;
  ulonglong local_20;
  
  TVar2.Reference = Metasound::FDataVertexMetadata::EmptyBasic.Description.TextData.Reference;
  local_20 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  if (Metasound::FDataVertexMetadata::EmptyBasic.Description.TextData.Reference != (ITextData *)0x0)
  {
    (**(code **)((longlong)
                 *Metasound::FDataVertexMetadata::EmptyBasic.Description.TextData.Reference + 8))
              (Metasound::FDataVertexMetadata::EmptyBasic.Description.TextData.Reference,local_2f0);
  }
  TVar3.Reference = Metasound::FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference;
  if (Metasound::FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference != (ITextData *)0x0)
  {
    (**(code **)((longlong)
                 *Metasound::FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference + 8))
              (Metasound::FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference,local_2ec);
  }
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_358);
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
           TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_288,&Metasound::GrainDelay::InAudioName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < (byte)local_288._48_1_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_288._48_1_])(&local_288.field_0x20);
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_250,&Metasound::GrainDelay::InGrainSpawnTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < (byte)local_250._48_1_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_250._48_1_])(&local_250.field_0x20);
  local_338 = 128.0;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_218,&Metasound::GrainDelay::InGrainDelayName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,&local_338);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < (byte)local_218._48_1_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_218._48_1_])(&local_218.field_0x20);
  local_334 = 0.0;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_1e0,&Metasound::GrainDelay::InGrainDelayDeltaName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,&local_334);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < (byte)local_1e0._48_1_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_1e0._48_1_])(&local_1e0.field_0x20);
  local_330 = 128.0;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_1a8,&Metasound::GrainDelay::InGrainDurationName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,&local_330);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < (byte)local_1a8._48_1_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_1a8._48_1_])(&local_1a8.field_0x20);
  local_32c = 0.0;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_170,&Metasound::GrainDelay::InGrainDurationDeltaName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,&local_32c);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < (byte)local_170._48_1_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_170._48_1_])(&local_170.field_0x20);
  local_328 = 0.0;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_138,&Metasound::GrainDelay::InGrainPitchShiftName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,&local_328);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < (byte)local_138._48_1_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_138._48_1_])(&local_138.field_0x20);
  local_324 = 0.0;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_100,&Metasound::GrainDelay::InGrainPitchShiftDeltaName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,&local_324);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < (byte)local_100._48_1_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
  local_320[0] = 0;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
           TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><int>
                     (local_c8,&Metasound::GrainDelay::InGrainDelayEnvelopeName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_320);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < local_98) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_98])(local_a8);
  local_320[1] = 0x10;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<int>::TInputDataVertex<int><int>
                     (&local_90,&Metasound::GrainDelay::InGrainMaxCountName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_320 + 1);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < (byte)local_90._48_1_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  local_318[0] = 0.0;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_58,&Metasound::GrainDelay::InGrainDelayFeedbackAmountName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_318);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,pFVar5);
  if (0xc < (byte)local_58._48_1_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  FLazyName::Resolve(&Metasound::GrainDelay::InGrainMaxDelayTimeSecondsName);
  pFVar7 = Metasound::GetMetasoundDataTypeName<Metasound::FTime>();
  local_2c0._padding_ = local_2e8;
  local_2c0._padding_ = *(longlong *)pFVar7;
  local_2c0._padding_ = (longlong)&___7__TInputConstructorVertex_VFTime_Metasound___Metasound__6B_;
  local_2c0._padding_._0_4_ = 1;
  local_2c0.Literal.Value._padding_._0_4_ = 0x40000000;
  local_2c0.Literal.Value.TypeIndex = 3;
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_358,&local_2c0);
  uVar10 = (ulonglong)local_2c0.Literal.Value.TypeIndex;
  if (0xc < local_2c0.Literal.Value.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10] !=
      UE::Core::Private::TDestructorCaller<float>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_2c0.Literal);
  }
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_310);
  pTVar8 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
           TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_2e0,&Metasound::GrainDelay::OutAudioName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_310._padding_ !=
      (TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_310._padding_ + (longlong)(int)local_310._padding_ * 0x20)) {
    pTVar9 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_310._padding_;
    do {
      if (*(longlong *)&pTVar9->field_0x8 == *(longlong *)&pTVar8->field_0x8) {
        *(longlong *)&pTVar9->field_0x8 = *(longlong *)&pTVar8->field_0x8;
        *(undefined8 *)&pTVar9->field_0x10 = *(undefined8 *)&pTVar8->field_0x10;
        *(undefined4 *)&pTVar9->field_0x18 = *(undefined4 *)&pTVar8->field_0x18;
        goto LAB_14b0bd9dc;
      }
      pTVar9 = pTVar9 + 1;
    } while (pTVar9 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                       (local_310._padding_ + (longlong)(int)local_310._padding_ * 0x20));
  }
  if (((ulonglong)local_310._padding_ <= pTVar8) &&
     (pTVar8 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
               (local_310._padding_ + (longlong)local_310._padding_._4_4_ * 0x20))) {
    local_368 = 0x20;
    local_380 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_310._padding_;
    local_388 = pTVar8;
    local_378 = (longlong)local_310._padding_._4_4_;
    local_370 = (longlong)(int)local_310._padding_;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  if ((int)local_310._padding_ == local_310._padding_._4_4_) {
    local_310._padding_._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,(ForAnyElementType *)&local_310,
                    (int *)((longlong)&local_310._padding_ + 4));
  }
  *(undefined ***)(local_310._padding_ + (longlong)(int)local_310._padding_ * 0x20) =
       &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)
   &((TOutputDataVertex<Metasound::FAudioBuffer> *)
    (local_310._padding_ + (longlong)(int)local_310._padding_ * 0x20))->field_0x8 =
       *(undefined8 *)&pTVar8->field_0x8;
  *(undefined8 *)
   &((TOutputDataVertex<Metasound::FAudioBuffer> *)
    (local_310._padding_ + (longlong)(int)local_310._padding_ * 0x20))->field_0x10 =
       *(undefined8 *)&pTVar8->field_0x10;
  *(undefined4 *)
   &((TOutputDataVertex<Metasound::FAudioBuffer> *)
    (local_310._padding_ + (longlong)(int)local_310._padding_ * 0x20))->field_0x18 =
       *(undefined4 *)&pTVar8->field_0x18;
  *(undefined ***)(local_310._padding_ + (longlong)(int)local_310._padding_ * 0x20) =
       &___7FOutputDataVertex_Metasound__6B_;
  local_310._padding_._0_4_ = (int)local_310._padding_ + 1;
LAB_14b0bd9dc:
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_358,&local_310);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_310.SubInterfaces.AllocatorInstance.Data,
             local_310.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_310.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_310.SubInterfaces.AllocatorInstance.Data);
  }
  if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_310._padding_ !=
      (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free((void *)local_310._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_358.SubInterfaces.AllocatorInstance.Data,
             local_358.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_358.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_358.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_358._padding_,(int)local_358._padding_);
  if ((FInputDataVertex *)local_358._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_358._padding_);
  }
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
  }
  if (TVar2.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b0bf000

void __thiscall
Metasound::FGrainDelayOperator::BindInputs
          (FGrainDelayOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  TDataReadReference<Metasound::FAudioBuffer> **local_res20;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FAudioBuffer> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&GrainDelay::InAudioName);
  local_res18 = &this->AudioInput;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_58;
  local_58._0_8_ = local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&GrainDelay::InGrainSpawnTriggerName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->GrainSpawnTrigger;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&GrainDelay::InGrainDelayName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->GrainDelay;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&GrainDelay::InGrainDelayDeltaName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->GrainDelayDelta;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&GrainDelay::InGrainDurationName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->GrainDuration;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&GrainDelay::InGrainDurationDeltaName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->GrainDurationDelta;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&GrainDelay::InGrainPitchShiftName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->GrainPitchShift;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&GrainDelay::InGrainPitchShiftDeltaName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->GrainPitchShiftDelta;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&GrainDelay::InGrainDelayEnvelopeName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->GrainDelayEnvelope;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&GrainDelay::InGrainMaxCountName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->GrainMaxCount;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&GrainDelay::InGrainDelayFeedbackAmountName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->GrainDelayFeedbackAmount;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)
                (double)this->GrainMaxDelayTimeSeconds;
  FLazyName::Resolve(&GrainDelay::InGrainMaxDelayTimeSecondsName);
  local_58._0_8_ = local_res8;
  local_res20 = &local_res18;
  local_38._8_8_ = &local_res20;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::FTime>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (TDataReadReference<Metasound::FAudioBuffer> **)local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::FTime>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  return;
}

// BindOutputs @ 14b0bf8a0

void __thiscall
Metasound::FGrainDelayOperator::BindOutputs
          (FGrainDelayOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&GrainDelay::OutAudioName);
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

// CreateOperator @ 14b0cc7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FGrainDelayOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FGrainDelay *this;
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar1;
  FLiteral *pFVar2;
  INode *pIVar3;
  INode IVar4;
  code *pcVar5;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  INode *pIVar10;
  float fVar11;
  undefined1 auStack_248 [32];
  double local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FBuildOperatorParams *local_1c0;
  undefined1 local_1b8 [16];
  INode local_1a8;
  undefined1 local_198 [16];
  INode local_188;
  undefined1 local_178 [16];
  INode local_168;
  undefined1 local_158 [16];
  INode local_148;
  undefined1 local_138 [16];
  INode local_128;
  undefined1 local_118 [16];
  INode local_108;
  undefined1 local_f8 [16];
  INode local_e8;
  undefined1 local_d8 [16];
  INode local_c8;
  undefined1 local_b8 [16];
  INode local_a8;
  undefined1 local_98 [16];
  INode local_88;
  undefined1 local_78 [16];
  INode local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_248;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_1c0 = param_1;
  FLazyName::Resolve(&GrainDelay::InAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this_00,(TDataReadReference<Metasound::FAudioBuffer> *)local_f8,&local_220,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainSpawnTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this_00,(TDataReadReference<Metasound::FTrigger> *)local_d8,&local_218,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainDelayName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_b8,&local_210,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainDelayDeltaName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_98,&local_208,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainDurationName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_78,&local_200,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainDurationDeltaName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_118,&local_1f8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainPitchShiftName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_138,&local_1f0,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainPitchShiftDeltaName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_158,&local_1e8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainDelayEnvelopeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)local_1b8,
             &local_1e0,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainMaxCountName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this_00,(TDataReadReference<int> *)local_178,&local_1d8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainDelayFeedbackAmountName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this_00,(TDataReadReference<float> *)local_198,&local_1d0,pFVar1);
  pFVar2 = *(FLiteral **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&GrainDelay::InGrainMaxDelayTimeSecondsName);
  pFVar8 = FInputVertexInterfaceData::FindChecked(this_00,&local_1c8);
  if ((pFVar8->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar8->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FTime,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTime>_>
    ::CreateExplicitArgs((FOperatorSettings *)&local_228,pFVar2);
    if ((0xc < local_58.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else {
    if (((pFVar8->Data).bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::FTime>(&(pFVar8->Data).TypedValue);
  }
  pIVar3 = *(INode **)&(param_2->Errors).ArrayNum;
  pIVar10 = ::operator_new(0x370);
  if (pIVar10 != (INode *)0x0) {
    *pIVar10 = (INode)&___7FGrainDelayOperator_Metasound__6B_;
    IVar4 = pIVar3[1];
    pIVar10[1] = *pIVar3;
    pIVar10[2] = IVar4;
    pIVar10[3] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar10[4] = (INode)local_f8._8_8_;
    pIVar10[5] = local_e8;
    if (local_e8 != (INode)0x0) {
      *(int *)((longlong)local_e8 + 8) = *(int *)((longlong)local_e8 + 8) + 1;
    }
    pIVar10[3] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar10[7] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar10[8] = (INode)local_d8._8_8_;
    pIVar10[9] = local_c8;
    if (local_c8 != (INode)0x0) {
      *(int *)((longlong)local_c8 + 8) = *(int *)((longlong)local_c8 + 8) + 1;
    }
    pIVar10[7] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar10[0xb] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0xc] = (INode)local_b8._8_8_;
    pIVar10[0xd] = local_a8;
    if (local_a8 != (INode)0x0) {
      *(int *)((longlong)local_a8 + 8) = *(int *)((longlong)local_a8 + 8) + 1;
    }
    pIVar10[0xb] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar10[0xf] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0x10] = (INode)local_98._8_8_;
    pIVar10[0x11] = local_88;
    if (local_88 != (INode)0x0) {
      *(int *)((longlong)local_88 + 8) = *(int *)((longlong)local_88 + 8) + 1;
    }
    pIVar10[0xf] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar10[0x13] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0x14] = (INode)local_78._8_8_;
    pIVar10[0x15] = local_68;
    if (local_68 != (INode)0x0) {
      *(int *)((longlong)local_68 + 8) = *(int *)((longlong)local_68 + 8) + 1;
    }
    pIVar10[0x13] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar10[0x17] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0x18] = (INode)local_118._8_8_;
    pIVar10[0x19] = local_108;
    if (local_108 != (INode)0x0) {
      *(int *)((longlong)local_108 + 8) = *(int *)((longlong)local_108 + 8) + 1;
    }
    pIVar10[0x17] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar10[0x1b] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0x1c] = (INode)local_138._8_8_;
    pIVar10[0x1d] = local_128;
    if (local_128 != (INode)0x0) {
      *(int *)((longlong)local_128 + 8) = *(int *)((longlong)local_128 + 8) + 1;
    }
    pIVar10[0x1b] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar10[0x1f] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0x20] = (INode)local_158._8_8_;
    pIVar10[0x21] = local_148;
    if (local_148 != (INode)0x0) {
      *(int *)((longlong)local_148 + 8) = *(int *)((longlong)local_148 + 8) + 1;
    }
    pIVar10[0x1f] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar10[0x23] =
         (INode)&
                ___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
    ;
    pIVar10[0x24] = (INode)local_1b8._8_8_;
    pIVar10[0x25] = local_1a8;
    if (local_1a8 != (INode)0x0) {
      *(int *)((longlong)local_1a8 + 8) = *(int *)((longlong)local_1a8 + 8) + 1;
    }
    pIVar10[0x23] =
         (INode)&
                ___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
    ;
    pIVar10[0x27] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar10[0x28] = (INode)local_178._8_8_;
    pIVar10[0x29] = local_168;
    if (local_168 != (INode)0x0) {
      *(int *)((longlong)local_168 + 8) = *(int *)((longlong)local_168 + 8) + 1;
    }
    pIVar10[0x27] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pIVar10[0x2b] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0x2c] = (INode)local_198._8_8_;
    pIVar10[0x2d] = local_188;
    if (local_188 != (INode)0x0) {
      *(int *)((longlong)local_188 + 8) = *(int *)((longlong)local_188 + 8) + 1;
    }
    pIVar10[0x2b] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    *(float *)(pIVar10 + 0x2f) = (float)local_228;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)(pIVar10 + 0x30),NewObject,
               (FOperatorSettings *)(pIVar10 + 1));
    pIVar10[0x30] = (INode)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    this = (FGrainDelay *)(pIVar10 + 0x36);
    pIVar10[0x34] = (INode)0x0;
    *(undefined4 *)(pIVar10 + 0x35) = 0;
    Audio::GrainDelay::FGrainDelay::FGrainDelay
              (this,(float)*(int *)(pIVar10 + 1),*(float *)(pIVar10 + 0x2f));
    fVar11 = Audio::GrainDelay::FGrainDelay::GetGrainDelayClamped(this,*(float *)pIVar10[0xc]);
    *(int *)(pIVar10 + 0x34) = (int)fVar11;
    *(undefined4 *)(pIVar10 + 0x35) = *(undefined4 *)local_1b8._8_8_;
    fVar11 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftClamped(this,*(float *)pIVar10[0x1c])
    ;
    IVar4 = pIVar10[0x24];
    *(float *)&pIVar10[0x34].field_0x4 = fVar11;
    Audio::GrainDelay::FGrainDelay::SetGrainEnvelope(this,*(EEnvelope *)IVar4);
    fVar11 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftFrameRatio
                       (this,*(float *)&pIVar10[0x34].field_0x4);
    Audio::GrainDelay::FGrainDelay::SetGrainBasePitchShiftRatio(this,fVar11);
  }
  pFVar6 = local_1c0;
  local_1c0->Node = pIVar10;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_188);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_168);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_1a8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_148);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_128);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_108);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)(IOperator *)pFVar6
  ;
}

// Execute @ 14b0d2dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FGrainDelayOperator::Execute(FGrainDelayOperator *this)

{
  FGrainDelay *this_00;
  int iVar1;
  EEnvelope EVar2;
  undefined8 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar10 = 0;
  iVar6 = FTrigger::NumTriggeredInBlock(*(FTrigger **)&(this->GrainSpawnTrigger).field_0x8);
  iVar1 = (this->OperatorSettings).NumFramesPerBlock;
  this_00 = &this->GrainDelayProcessor;
  iVar11 = 0;
  iVar5 = iVar1 * 2;
  iVar1 = iVar1 + -1;
  iVar8 = **(int **)&(this->GrainMaxCount).field_0x8;
  iVar9 = 1000;
  if (iVar8 < 1000) {
    iVar9 = iVar8;
  }
  iVar8 = 1;
  if (1 < iVar9) {
    iVar8 = iVar9;
  }
  Audio::GrainDelay::FGrainDelay::SetMaxGrains(this_00,iVar8);
  EVar2 = **(EEnvelope **)&(this->GrainDelayEnvelope).field_0x8;
  if (this->PreviousGrainEnvelopeType != EVar2) {
    this->PreviousGrainEnvelopeType = EVar2;
    Audio::GrainDelay::FGrainDelay::SetGrainEnvelope(this_00,EVar2);
  }
  fVar12 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftClamped
                     (this_00,**(float **)&(this->GrainPitchShift).field_0x8);
  fVar13 = __real_322bcc77;
  if (__real_322bcc77 <
      (float)((uint)(this->PreviousPitchShift - fVar12) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PreviousPitchShift = fVar12;
    fVar12 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftFrameRatio(this_00,fVar12);
    Audio::GrainDelay::FGrainDelay::SetGrainBasePitchShiftRatio(this_00,fVar12);
  }
  fVar12 = Audio::GrainDelay::FGrainDelay::GetGrainDelayClamped
                     (this_00,**(float **)&(this->GrainDelay).field_0x8);
  if (fVar13 < (float)((uint)(fVar12 - (float)this->PreviousGrainDelayMsec) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PreviousGrainDelayMsec = (int)fVar12;
  }
  fVar13 = **(float **)&(this->GrainDelayFeedbackAmount).field_0x8;
  if (__real_3f800000 <= fVar13) {
    fVar13 = __real_3f800000;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  Audio::GrainDelay::FGrainDelay::SetFeedbackAmount(this_00,fVar13);
  fVar13 = **(float **)&(this->GrainDurationDelta).field_0x8;
  fVar14 = fVar13 * __real_bf000000;
  uVar7 = rand();
  fVar14 = Audio::GrainDelay::FGrainDelay::GetGrainDurationClamped
                     (this_00,(float)(uVar7 & 0x7fff) * (fVar13 * __real_3f000000 - fVar14) *
                              __real_38000100 + fVar14 +
                              **(float **)&(this->GrainDuration).field_0x8);
  fVar13 = **(float **)&(this->GrainDelayDelta).field_0x8;
  fVar15 = fVar13 * __real_bf000000;
  uVar7 = rand();
  fVar12 = Audio::GrainDelay::FGrainDelay::GetGrainDelayClamped
                     (this_00,(float)(uVar7 & 0x7fff) * (fVar13 * __real_3f000000 - fVar15) *
                              __real_38000100 + fVar15 + fVar12);
  fVar13 = **(float **)&(this->GrainPitchShiftDelta).field_0x8;
  fVar15 = fVar13 * __real_bf000000;
  uVar7 = rand();
  fVar13 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftClamped
                     (this_00,(float)(uVar7 & 0x7fff) * (fVar13 * __real_3f000000 - fVar15) *
                              __real_38000100 + fVar15 +
                              **(float **)&(this->GrainPitchShift).field_0x8);
  fVar13 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftFrameRatio(this_00,fVar13);
  if (0 < iVar1) {
    do {
      iVar8 = iVar5;
      if (iVar10 < iVar6) {
        iVar8 = FTrigger::operator[](*(FTrigger **)&(this->GrainSpawnTrigger).field_0x8,iVar10);
      }
      iVar9 = iVar1;
      if (iVar8 < iVar1) {
        iVar9 = iVar8;
      }
      if (iVar9 == iVar5) {
        iVar9 = (this->OperatorSettings).NumFramesPerBlock;
      }
      if (iVar11 != iVar9) {
        puVar3 = *(undefined8 **)&(this->AudioOutput).field_0x8;
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        pfVar4 = (float *)*puVar3;
        puVar3 = *(undefined8 **)&(this->AudioInput).field_0x8;
        if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        Audio::GrainDelay::FGrainDelay::SynthesizeAudio
                  (this_00,iVar11,iVar9,(float *)*puVar3,pfVar4);
        iVar11 = iVar9;
      }
      if (iVar11 == iVar8) {
        iVar10 = iVar10 + 1;
        Audio::GrainDelay::FGrainDelay::SpawnGrain(this_00,fVar12,fVar14,fVar13);
      }
    } while (iVar9 < iVar1);
  }
  return;
}

// GetNodeInfo @ 14b0d9760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FGrainDelayOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FGrainDelayOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FGrainDelayOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b0e0b10

FVertexInterface * __cdecl Metasound::FGrainDelayOperator::GetVertexInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FGrainDelayOperator::GetVertexInterface'::__l2::<lambda_1>::operator()
                (local_res8,&::DefaultInterface);
      atexit(`Metasound::FGrainDelayOperator::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&::_TSS0);
      return &::DefaultInterface;
    }
  }
  return &::DefaultInterface;
}

// Reset @ 14b0e52c0

void __thiscall
Metasound::FGrainDelayOperator::Reset(FGrainDelayOperator *this,FResetParams *param_1)

{
  FGrainDelay *this_00;
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  EEnvelope *pEVar4;
  float fVar5;
  
  puVar2 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  this_00 = &this->GrainDelayProcessor;
  Audio::GrainDelay::FGrainDelay::Reset(this_00);
  fVar5 = Audio::GrainDelay::FGrainDelay::GetGrainDelayClamped
                    (this_00,**(float **)&(this->GrainDelay).field_0x8);
  this->PreviousGrainDelayMsec = (int)fVar5;
  pfVar3 = *(float **)&(this->GrainPitchShift).field_0x8;
  this->PreviousGrainEnvelopeType = **(EEnvelope **)&(this->GrainDelayEnvelope).field_0x8;
  fVar5 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftClamped(this_00,*pfVar3);
  pEVar4 = *(EEnvelope **)&(this->GrainDelayEnvelope).field_0x8;
  this->PreviousPitchShift = fVar5;
  Audio::GrainDelay::FGrainDelay::SetGrainEnvelope(this_00,*pEVar4);
  fVar5 = Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftFrameRatio
                    (this_00,this->PreviousPitchShift);
  Audio::GrainDelay::FGrainDelay::SetGrainBasePitchShiftRatio(this_00,fVar5);
  return;
}

