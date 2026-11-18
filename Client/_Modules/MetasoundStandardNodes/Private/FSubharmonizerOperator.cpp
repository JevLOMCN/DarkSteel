// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 13

// FSubharmonizerOperator @ 14b1ced00

FSubharmonizerOperator * __thiscall
Metasound::FSubharmonizerOperator::FSubharmonizerOperator
          (FSubharmonizerOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<float> *param_4,TDataReadReference<int> *param_5,
          TDataReadReference<bool> *param_6)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FSubharmonizerOperator_Metasound__6B_;
  *(undefined ***)&this->AudioIn = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioIn).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioIn =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->FrequencyIn = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->FrequencyIn).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->FrequencyIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FrequencyIn = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->LinearGainIn = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->LinearGainIn).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->LinearGainIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->LinearGainIn = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->SubharmonicIn = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->SubharmonicIn).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->SubharmonicIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->SubharmonicIn = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->OctaverModeIn = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->OctaverModeIn).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->OctaverModeIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->OctaverModeIn = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOut,NewObject,param_1);
  *(undefined ***)&this->AudioOut =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  this->SampleRate = 48000.0;
  this->NumFramesPerBlock = 0;
  this->MaxFilterFrequency = 24000.0;
  this->MinFilterFrequency = 20.0;
  this->PreviouisFilterFrequency = 120.0;
  this->LPFFilterFrequency = 120.0;
  this->HPFFilterFrequency = 60.0;
  this->InputHighPassFilterFrequency = 30.0;
  this->LinearGain = 2.0;
  this->PreviousLinearGain = 2.0;
  this->InputSubharmonic = 1;
  this->PreviousInputSubharmonic = 1;
  this->MinInputSubharmonic = 1;
  this->MaxInputSubharmonic = 6;
  this->bOctaverMode = false;
  (this->Subharmonizer).SubharmonicBitmask = '\x02';
  (this->Subharmonizer).SubharmonicBase = '\x04';
  (this->Subharmonizer).Subharmonic = '\x01';
  (this->Subharmonizer).CurrentSignState = '\0';
  (this->Subharmonizer).bLastSign = false;
  (this->Subharmonizer).bOctaverMode = false;
  (this->Subharmonizer).bPolarity = false;
  Audio::FBiquadFilter::FBiquadFilter(&this->InputLowPassFilter);
  Audio::FBiquadFilter::FBiquadFilter(&this->OutputLowPassFilter);
  Audio::FBiquadFilter::FBiquadFilter(&this->OutputHighPassFilter);
  Audio::FEnvelopeFollower::FEnvelopeFollower(&this->EnvelopeFollower);
  (this->ScratchBufferA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchBufferA).ArrayNum = 0;
  (this->ScratchBufferA).ArrayMax = 0;
  (this->ScratchBufferB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchBufferB).ArrayNum = 0;
  (this->ScratchBufferB).ArrayMax = 0;
  (this->EnvelopeBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnvelopeBuffer).ArrayNum = 0;
  (this->EnvelopeBuffer).ArrayMax = 0;
  (this->GainInterpolationBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GainInterpolationBuffer).ArrayNum = 0;
  (this->GainInterpolationBuffer).ArrayMax = 0;
  this->NumFramesPerBlock = param_1->NumFramesPerBlock;
  this->SampleRate = (float)param_1->SampleRate;
  InternalReset(this);
  return this;
}

// ~FSubharmonizerOperator @ 14b1cff70

void __thiscall
Metasound::FSubharmonizerOperator::~FSubharmonizerOperator(FSubharmonizerOperator *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GainInterpolationBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchBufferB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchBufferA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).Smoother.PriorEnvelopeValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).MeanSquaredProcessor.ChannelValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).WorkBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FBiquadFilter::~FBiquadFilter(&this->OutputHighPassFilter);
  Audio::FBiquadFilter::~FBiquadFilter(&this->OutputLowPassFilter);
  Audio::FBiquadFilter::~FBiquadFilter(&this->InputLowPassFilter);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOut).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OctaverModeIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SubharmonicIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LinearGainIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FrequencyIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioIn).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b1d0d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::FSubharmonizerOperator::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  undefined1 auStack_1e8 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> *local_1c8;
  TOutputDataVertex<Metasound::FAudioBuffer> *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  bool local_198 [4];
  float local_194;
  float local_190;
  int local_18c;
  FOutputVertexInterface local_188;
  FInputVertexInterface local_168;
  TOutputDataVertex<Metasound::FAudioBuffer> local_148;
  TInputDataVertex<Metasound::FAudioBuffer> local_128;
  TInputDataVertex<float> local_f0;
  TInputDataVertex<float> local_b8;
  TInputDataVertex<int> local_80;
  TInputDataVertex<bool> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_168);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
           TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_128,&Metasound::SubharmonizerVertexNames::InputAudioName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_168,pFVar3);
  if (0xc < (byte)local_128._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_128._48_1_])(&local_128.field_0x20);
  local_194 = 80.0;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_f0,&Metasound::SubharmonizerVertexNames::InputFrequencyName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,&local_194);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_168,pFVar3);
  if (0xc < (byte)local_f0._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_f0._48_1_])(&local_f0.field_0x20);
  local_190 = 1.0;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_b8,&Metasound::SubharmonizerVertexNames::InputLinearGainName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,&local_190);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_168,pFVar3);
  if (0xc < (byte)local_b8._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
  local_18c = 1;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<int>::TInputDataVertex<int><int>
                     (&local_80,&Metasound::SubharmonizerVertexNames::InputSubharmonicName,
                      &Metasound::FDataVertexMetadata::EmptyAdvanced,&local_18c);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_168,pFVar3);
  if (0xc < (byte)local_80._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
  local_198[0] = false;
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_48,&Metasound::SubharmonizerVertexNames::InputOctaverModeName,
                      &Metasound::FDataVertexMetadata::EmptyAdvanced,local_198);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_168,pFVar3);
  if (0xc < (byte)local_48._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_188);
  pTVar5 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
           TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_148,&Metasound::SubharmonizerVertexNames::OutputAudioName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_188._padding_ !=
      (TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_188._padding_ + (longlong)(int)local_188._padding_ * 0x20)) {
    pTVar6 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_188._padding_;
    do {
      if (*(longlong *)&pTVar6->field_0x8 == *(longlong *)&pTVar5->field_0x8) {
        *(longlong *)&pTVar6->field_0x8 = *(longlong *)&pTVar5->field_0x8;
        *(undefined8 *)&pTVar6->field_0x10 = *(undefined8 *)&pTVar5->field_0x10;
        *(undefined4 *)&pTVar6->field_0x18 = *(undefined4 *)&pTVar5->field_0x18;
        goto LAB_14b1d1084;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                       (local_188._padding_ + (longlong)(int)local_188._padding_ * 0x20));
  }
  if (((ulonglong)local_188._padding_ <= pTVar5) &&
     (pTVar5 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
               (local_188._padding_ + (longlong)local_188._padding_._4_4_ * 0x20))) {
    local_1a8 = 0x20;
    local_1c0 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_188._padding_;
    local_1c8 = pTVar5;
    local_1b8 = (longlong)local_188._padding_._4_4_;
    local_1b0 = (longlong)(int)local_188._padding_;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((int)local_188._padding_ == local_188._padding_._4_4_) {
    local_188._padding_._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,(ForAnyElementType *)&local_188,
                    (int *)((longlong)&local_188._padding_ + 4));
  }
  *(undefined ***)(local_188._padding_ + (longlong)(int)local_188._padding_ * 0x20) =
       &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)
   &((TOutputDataVertex<Metasound::FAudioBuffer> *)
    (local_188._padding_ + (longlong)(int)local_188._padding_ * 0x20))->field_0x8 =
       *(undefined8 *)&pTVar5->field_0x8;
  *(undefined8 *)
   &((TOutputDataVertex<Metasound::FAudioBuffer> *)
    (local_188._padding_ + (longlong)(int)local_188._padding_ * 0x20))->field_0x10 =
       *(undefined8 *)&pTVar5->field_0x10;
  *(undefined4 *)
   &((TOutputDataVertex<Metasound::FAudioBuffer> *)
    (local_188._padding_ + (longlong)(int)local_188._padding_ * 0x20))->field_0x18 =
       *(undefined4 *)&pTVar5->field_0x18;
  *(undefined ***)(local_188._padding_ + (longlong)(int)local_188._padding_ * 0x20) =
       &___7FOutputDataVertex_Metasound__6B_;
  local_188._padding_._0_4_ = (int)local_188._padding_ + 1;
LAB_14b1d1084:
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_168,&local_188);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_188.SubInterfaces.AllocatorInstance.Data,
             local_188.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_188.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_188.SubInterfaces.AllocatorInstance.Data);
  }
  if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_188._padding_ !=
      (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free((void *)local_188._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_168.SubInterfaces.AllocatorInstance.Data,
             local_168.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_168.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_168.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_168._padding_,(int)local_168._padding_);
  if ((FInputDataVertex *)local_168._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b1d2c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FSubharmonizerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ulonglong *puVar1;
  int *piVar2;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar3;
  ITextData *pIVar4;
  code *pcVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FNodeClassMetadata *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  ulonglong *puVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  FName local_a0;
  FName local_98;
  FString local_90;
  FText local_80;
  FText local_70;
  FNodeClassName local_60;
  FText local_48;
  FText local_38;
  FText local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_108;
  ::FString::PrintfImpl(&local_90,L"Subharmonizer");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_90.Data.ArrayNum != 0) {
    FVar12.Data = local_90.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_98,(wchar_t *)FVar12.Data);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  FText::FText(&local_70);
  FText::FText(&local_80);
  FText::FText(&local_48);
  FText::FText(&local_38);
  FText::FText(&local_28);
  lVar14 = 3;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_c0,3,&local_b4);
  ConstructItems<FText_const_,FText,int>(local_c0.Data,&local_48,3);
  puVar13 = local_18;
  do {
    puVar1 = puVar13 + -2;
    puVar13 = puVar13 + -2;
    lVar14 = lVar14 + -1;
    if ((longlong *)*puVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*puVar1 + 0x10))();
    }
  } while (lVar14 != 0);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_a0,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_60,&Metasound::StandardNodes::Namespace,&local_98,&local_a0);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_60.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_60.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_60.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_60.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_60.Variant;
  pIVar4 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar4 != local_70.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_70.TextData.Reference;
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 8))
                (local_70.TextData.Reference,local_b0);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_70.Flags;
  pIVar4 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar4 != local_80.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_80.TextData.Reference;
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 8))
                (local_80.TextData.Reference,local_ac);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_80.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar4 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar4 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_a8);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  uVar11 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSubharmonizerOperator::GetDefaultInterface'::__l2::<lambda_1>::operator()
                (local_c8,&::Interface);
      atexit(FSubharmonizerOperator::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,&::Interface);
  iVar8 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar2 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar2);
  }
  pFVar15 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar8 + 1;
  pFVar15 = pFVar15 + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar15 = 0;
  TVar6 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar15 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar6.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_a4);
  }
  pTVar3 = &__return_storage_ptr__->Keywords;
  *(uint *)(pFVar15 + 8) = Metasound::NodeCategories::Generators.Flags;
  if (pTVar3 == (TArray<FText,TSizedDefaultAllocator<32>_> *)&local_c0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FNodeClassMetadata *)(*pcVar5)();
      return pFVar10;
    }
  }
  iVar8 = local_b8;
  if (local_b8 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_b8,&pTVar3->AllocatorInstance,
                       &(__return_storage_ptr__->Keywords).ArrayNum,
                       &(__return_storage_ptr__->Keywords).ArrayMax);
    ConstructItems<FText,FText,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x10,(FText *)local_c0.Data,
               iVar8);
  }
  DestructItems<FText_const_,int>((FText *)local_c0.Data,local_b8);
  if ((FText *)local_c0.Data != (FText *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b1d48a0

void __thiscall
Metasound::FSubharmonizerOperator::BindInputs
          (FSubharmonizerOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&SubharmonizerVertexNames::InputAudioName);
  local_res18 = &this->AudioIn;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
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
  FLazyName::Resolve(&SubharmonizerVertexNames::InputFrequencyName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->FrequencyIn;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&SubharmonizerVertexNames::InputLinearGainName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->LinearGainIn;
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
  FLazyName::Resolve(&SubharmonizerVertexNames::InputSubharmonicName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->SubharmonicIn;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&SubharmonizerVertexNames::InputOctaverModeName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->OctaverModeIn;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
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

// BindOutputs @ 14b1d4d20

void __thiscall
Metasound::FSubharmonizerOperator::BindOutputs
          (FSubharmonizerOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&SubharmonizerVertexNames::OutputAudioName);
  local_res18[0] = &this->AudioOut;
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

// CreateOperator @ 14b1da3e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FSubharmonizerOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FSubharmonizerOperator *this_00;
  FSubharmonizerOperator *pFVar2;
  FName local_res8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SubharmonizerVertexNames::InputAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SubharmonizerVertexNames::InputFrequencyName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_58,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SubharmonizerVertexNames::InputLinearGainName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_78,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SubharmonizerVertexNames::InputSubharmonicName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_98,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&SubharmonizerVertexNames::InputOctaverModeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_b8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x240);
  pFVar2 = (FSubharmonizerOperator *)0x0;
  if (this_00 != (FSubharmonizerOperator *)0x0) {
    pFVar2 = FSubharmonizerOperator
                       (this_00,pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_38,
                        (TDataReadReference<float> *)local_58,(TDataReadReference<float> *)local_78,
                        (TDataReadReference<int> *)local_98,(TDataReadReference<bool> *)local_b8);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b1df5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FSubharmonizerOperator::Execute(FSubharmonizerOperator *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  float *pfVar11;
  code *pcVar12;
  bool bVar13;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  TArrayView<float_const_,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float,int> local_38 [3];
  
  UpdateParams(this);
  lVar6 = *(longlong *)&(this->AudioIn).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar3 = *(int *)(lVar6 + 8);
  puVar7 = *(undefined8 **)&(this->AudioIn).field_0x8;
  pFVar8 = (this->EnvelopeBuffer).AllocatorInstance.Data;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar7 + 2) != *(int *)(puVar7 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FEnvelopeFollower::ProcessAudio
            (&this->EnvelopeFollower,(float *)*puVar7,iVar3,(float *)pFVar8);
  pFVar8 = (this->ScratchBufferA).AllocatorInstance.Data;
  puVar7 = *(undefined8 **)&(this->AudioIn).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar7 + 2) != *(int *)(puVar7 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FBiquadFilter::ProcessAudio
            (&this->InputLowPassFilter,(float *)*puVar7,iVar3,(float *)pFVar8);
  SubharmonizerNodePrivate::FSubharmonizer::Process
            (&this->Subharmonizer,(float *)(this->ScratchBufferA).AllocatorInstance.Data,iVar3,
             (float *)(this->ScratchBufferB).AllocatorInstance.Data);
  Audio::FBiquadFilter::ProcessAudio
            (&this->OutputLowPassFilter,(float *)(this->ScratchBufferB).AllocatorInstance.Data,iVar3
             ,(float *)(this->ScratchBufferA).AllocatorInstance.Data);
  Audio::FBiquadFilter::ProcessAudio
            (&this->OutputHighPassFilter,(float *)(this->ScratchBufferA).AllocatorInstance.Data,
             iVar3,(float *)(this->ScratchBufferB).AllocatorInstance.Data);
  pFVar8 = (this->ScratchBufferA).AllocatorInstance.Data;
  iVar3 = (this->ScratchBufferA).ArrayNum;
  if (iVar3 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar9 = (this->EnvelopeBuffer).AllocatorInstance.Data;
  iVar4 = (this->EnvelopeBuffer).ArrayNum;
  if (iVar4 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar10 = (this->ScratchBufferB).AllocatorInstance.Data;
  iVar5 = (this->ScratchBufferB).ArrayNum;
  if (iVar5 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  local_68._12_4_ = uStack_ac;
  local_68.ArrayNum = iVar3;
  local_58._12_4_ = uStack_9c;
  local_58.ArrayNum = iVar4;
  local_48._12_4_ = uStack_8c;
  local_48.ArrayNum = iVar5;
  local_68.DataPtr = (float *)pFVar8;
  local_58.DataPtr = (float *)pFVar9;
  local_48.DataPtr = (float *)pFVar10;
  Audio::ArrayMultiply(&local_48,&local_58,&local_68);
  puVar7 = *(undefined8 **)&(this->AudioOut).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar7 + 2) != *(int *)(puVar7 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar11 = (float *)*puVar7;
  iVar3 = *(int *)(puVar7 + 1);
  if (iVar3 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  fVar1 = this->LinearGain;
  fVar2 = this->PreviousLinearGain;
  pFVar8 = (this->ScratchBufferA).AllocatorInstance.Data;
  iVar4 = (this->ScratchBufferA).ArrayNum;
  if (iVar4 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  local_38[0]._12_4_ = local_78._12_4_;
  local_38[0].ArrayNum = iVar3;
  local_78._12_4_ = uStack_7c;
  local_78.ArrayNum = iVar4;
  local_78.DataPtr = (float *)pFVar8;
  local_38[0].DataPtr = pfVar11;
  Audio::ArrayFade(&local_78,fVar2,fVar1,local_38);
  this->PreviousLinearGain = this->LinearGain;
  return;
}

// GetDefaultInterface @ 14b1e23d0

FVertexInterface * __cdecl Metasound::FSubharmonizerOperator::GetDefaultInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FSubharmonizerOperator::GetDefaultInterface'::__l2::<lambda_1>::operator()
                (local_res8,&::Interface);
      atexit(`Metasound::FSubharmonizerOperator::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
      return &::Interface;
    }
  }
  return &::Interface;
}

// GetNodeInfo @ 14b1e3dd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FSubharmonizerOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FSubharmonizerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FSubharmonizerOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// InternalReset @ 14b1e8610

void __thiscall Metasound::FSubharmonizerOperator::InternalReset(FSubharmonizerOperator *this)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float _X;
  uchar uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float local_res8 [8];
  FEnvelopeFollowerInitParams local_58 [2];
  
  fVar7 = __real_3f000000;
  local_res8[0] = 0.0;
  this->MaxFilterFrequency = this->SampleRate * __real_3f000000;
  TArray<float,TAlignedHeapAllocator<16>_>::Init
            (&this->ScratchBufferA,local_res8,this->NumFramesPerBlock);
  local_res8[0] = 0.0;
  TArray<float,TAlignedHeapAllocator<16>_>::Init
            (&this->ScratchBufferB,local_res8,this->NumFramesPerBlock);
  local_res8[0] = 0.0;
  TArray<float,TAlignedHeapAllocator<16>_>::Init
            (&this->EnvelopeBuffer,local_res8,this->NumFramesPerBlock);
  local_res8[0] = 0.0;
  TArray<float,TAlignedHeapAllocator<16>_>::Init
            (&this->GainInterpolationBuffer,local_res8,this->NumFramesPerBlock);
  uVar10 = this->MaxInputSubharmonic;
  uVar9 = this->MinInputSubharmonic;
  fVar11 = **(float **)&(this->LinearGainIn).field_0x8;
  (this->Subharmonizer).Subharmonic = '\x02';
  (this->Subharmonizer).CurrentSignState = '\0';
  (this->Subharmonizer).bLastSign = false;
  (this->Subharmonizer).bOctaverMode = false;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  puVar3 = *(uint **)&(this->SubharmonicIn).field_0x8;
  this->LinearGain = fVar11;
  this->PreviousLinearGain = fVar11;
  if ((int)*puVar3 < (int)uVar10) {
    uVar10 = *puVar3;
  }
  pcVar4 = *(char **)&(this->OctaverModeIn).field_0x8;
  if ((int)uVar9 < (int)uVar10) {
    uVar9 = uVar10;
  }
  this->InputSubharmonic = uVar9;
  this->PreviousInputSubharmonic = uVar9;
  bVar1 = (bool)*pcVar4;
  uVar10 = (uVar9 & 0xff) + 1;
  (this->Subharmonizer).Subharmonic = (byte)uVar9;
  this->bOctaverMode = bVar1;
  (this->Subharmonizer).bOctaverMode = bVar1;
  (this->Subharmonizer).SubharmonicBitmask = '\x01' << ((byte)uVar9 & 0x1f);
  if (bVar1 == false) {
    uVar8 = '\a';
    if (uVar10 < 7) {
      uVar8 = (uchar)uVar10;
    }
  }
  else {
    uVar9 = 7;
    if (uVar10 < 7) {
      uVar9 = uVar10;
    }
    uVar8 = '\x01' << ((byte)uVar9 & 0x1f);
  }
  (this->Subharmonizer).SubharmonicBase = uVar8;
  _X = __real_40000000;
  fVar11 = this->MinFilterFrequency;
  fVar12 = **(float **)&(this->FrequencyIn).field_0x8;
  if (this->MaxFilterFrequency <= fVar12) {
    fVar12 = this->MaxFilterFrequency;
  }
  if (fVar12 <= fVar11) {
    fVar12 = fVar11;
  }
  this->LPFFilterFrequency = fVar12;
  this->PreviouisFilterFrequency = fVar12;
  fVar6 = fVar12 * fVar7;
  if (fVar12 * fVar7 <= fVar11) {
    fVar6 = fVar11;
  }
  this->HPFFilterFrequency = fVar6;
  Audio::FBiquadFilter::Init
            (&this->InputLowPassFilter,this->SampleRate,1,ButterworthLowPass,fVar12,_X,0.0);
  fVar11 = powf(_X,(float)((uint)(float)**(int **)&(this->SubharmonicIn).field_0x8 ^
                          __xmm_80000000800000008000000080000000));
  Audio::FBiquadFilter::Init
            (&this->OutputLowPassFilter,this->SampleRate,1,ButterworthLowPass,
             fVar11 * this->LPFFilterFrequency,_X,0.0);
  fVar11 = powf(_X,(float)((uint)(float)**(int **)&(this->SubharmonicIn).field_0x8 ^
                          __xmm_80000000800000008000000080000000));
  Audio::FBiquadFilter::Init
            (&this->OutputHighPassFilter,this->SampleRate,1,ButterworthHighPass,
             fVar11 * this->HPFFilterFrequency,_X,0.0);
  puVar5 = *(undefined8 **)&(this->AudioOut).field_0x8;
  iVar2 = *(int *)(puVar5 + 1);
  if (0 < iVar2) {
    memset((void *)*puVar5,0,(longlong)iVar2 << 2);
  }
  local_58[0].SampleRate = this->SampleRate;
  local_58[0].NumChannels = 1;
  local_58[0].AttackTimeMsec = 10.0;
  local_58[0].ReleaseTimeMsec = 100.0;
  local_58[0].Mode = Peak;
  local_58[0].bIsAnalog = true;
  local_58[0].AnalysisWindowMsec = 300.0;
  Audio::FEnvelopeFollower::Init(&this->EnvelopeFollower,local_58);
  UpdateParams(this);
  return;
}

// Reset @ 14b1ea120

void __thiscall
Metasound::FSubharmonizerOperator::Reset(FSubharmonizerOperator *this,FResetParams *param_1)

{
  this->NumFramesPerBlock = param_1->OperatorSettings->NumFramesPerBlock;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  InternalReset(this);
  return;
}

// UpdateParams @ 14b1eb9f0

void __thiscall Metasound::FSubharmonizerOperator::UpdateParams(FSubharmonizerOperator *this)

{
  undefined1 *puVar1;
  bool bVar2;
  uint *puVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  float _X;
  uchar uVar7;
  int iVar8;
  uint uVar9;
  FBiquadFilter *this_00;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  
  _X = __real_40000000;
  uVar6 = __xmm_80000000800000008000000080000000;
  fVar12 = this->MinFilterFrequency;
  fVar13 = **(float **)&(this->FrequencyIn).field_0x8;
  if (this->MaxFilterFrequency <= fVar13) {
    fVar13 = this->MaxFilterFrequency;
  }
  puVar3 = *(uint **)&(this->SubharmonicIn).field_0x8;
  if (fVar13 <= fVar12) {
    fVar13 = fVar12;
  }
  this->LPFFilterFrequency = fVar13;
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = fVar13 * __real_3f000000;
  if (fVar13 * __real_3f000000 <= fVar12) {
    fVar5 = fVar12;
  }
  this->HPFFilterFrequency = fVar5;
  uVar9 = this->MaxInputSubharmonic;
  if ((int)*puVar3 < this->MaxInputSubharmonic) {
    uVar9 = *puVar3;
  }
  pfVar4 = *(float **)&(this->LinearGainIn).field_0x8;
  uVar11 = this->MinInputSubharmonic;
  if (this->MinInputSubharmonic < (int)uVar9) {
    uVar11 = uVar9;
  }
  this->InputSubharmonic = uVar11;
  fVar12 = *pfVar4;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  this->LinearGain = fVar12;
  if (__real_322bcc77 < (float)((uint)(this->PreviouisFilterFrequency - fVar13) & uVar14)) {
    Audio::FBiquadFilter::SetFrequency(&this->InputLowPassFilter,fVar13);
    fVar12 = powf(_X,(float)((uint)(float)**(int **)&(this->SubharmonicIn).field_0x8 ^ uVar6));
    Audio::FBiquadFilter::SetFrequency(&this->OutputLowPassFilter,fVar12 * this->LPFFilterFrequency)
    ;
    fVar12 = powf(_X,(float)((uint)(float)**(int **)&(this->SubharmonicIn).field_0x8 ^ uVar6));
    Audio::FBiquadFilter::SetFrequency
              (&this->OutputHighPassFilter,fVar12 * this->HPFFilterFrequency);
    uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar11 = this->InputSubharmonic;
    this->PreviouisFilterFrequency = this->LPFFilterFrequency;
  }
  fVar12 = **(float **)&(this->LinearGainIn).field_0x8;
  if (__real_322bcc77 < (float)((uint)(this->LinearGain - fVar12) & uVar14)) {
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    this->LinearGain = fVar12;
  }
  puVar1 = &(this->OctaverModeIn).field_0x8;
  if ((this->PreviousInputSubharmonic != uVar11) || (this->bOctaverMode != (bool)**(char **)puVar1))
  {
    bVar2 = (bool)**(char **)puVar1;
    uVar14 = (uVar11 & 0xff) + 1;
    this->bOctaverMode = bVar2;
    (this->Subharmonizer).Subharmonic = (byte)uVar11;
    (this->Subharmonizer).bOctaverMode = bVar2;
    (this->Subharmonizer).SubharmonicBitmask = '\x01' << ((byte)uVar11 & 0x1f);
    if (bVar2 == false) {
      uVar7 = '\a';
      if (uVar14 < 7) {
        uVar7 = (uchar)uVar14;
      }
    }
    else {
      uVar9 = 7;
      if (uVar14 < 7) {
        uVar9 = uVar14;
      }
      uVar7 = '\x01' << ((byte)uVar9 & 0x1f);
    }
    (this->Subharmonizer).SubharmonicBase = uVar7;
    this_00 = &this->OutputLowPassFilter;
    iVar10 = this->InputSubharmonic;
    fVar12 = this->LPFFilterFrequency;
    if (bVar2 == false) {
      iVar8 = 1;
      if (1 < iVar10) {
        iVar8 = iVar10;
      }
      Audio::FBiquadFilter::SetFrequency(this_00,fVar12 / (float)iVar8);
      iVar8 = this->InputSubharmonic + 1;
      iVar10 = 1;
      if (1 < iVar8) {
        iVar10 = iVar8;
      }
      fVar12 = this->LPFFilterFrequency / (float)iVar10;
    }
    else {
      fVar13 = powf(_X,(float)((uint)(float)iVar10 ^ uVar6));
      Audio::FBiquadFilter::SetFrequency(this_00,fVar13 * fVar12);
      this_00 = &this->OutputHighPassFilter;
      fVar12 = powf(_X,(float)((uint)(float)this->InputSubharmonic ^ uVar6));
      fVar12 = fVar12 * this->HPFFilterFrequency;
    }
    Audio::FBiquadFilter::SetFrequency(this_00,fVar12);
    this->PreviousInputSubharmonic = this->InputSubharmonic;
  }
  return;
}

