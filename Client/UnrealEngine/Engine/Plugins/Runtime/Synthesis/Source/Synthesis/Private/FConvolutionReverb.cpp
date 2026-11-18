// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 16

// FConvolutionReverb @ 14f0b64e0

FConvolutionReverb * __thiscall
Audio::FConvolutionReverb::FConvolutionReverb
          (FConvolutionReverb *this,
          TUniquePtr<Audio::IConvolutionAlgorithm,TDefaultDelete<Audio::IConvolutionAlgorithm>_>
          param_1,TUniquePtr<Audio::IChannelFormatConverter,TDefaultDelete<Audio::IChannelFormatConverter>_>
                  param_2,FChannelFormatConverterWrapper *param_3,
          FConvolutionReverbSettings *param_4)

{
  FChannelFormatConverterWrapper *pFVar1;
  IChannelFormatConverter *pIVar2;
  IConvolutionAlgorithm IVar3;
  IChannelFormatConverter IVar4;
  float fVar5;
  undefined3 uVar6;
  bool bVar7;
  
  pFVar1 = &this->OutputChannelFormatConverter;
  fVar5 = param_4->RearChannelBleed;
  (this->Settings).NormalizationVolume = param_4->NormalizationVolume;
  (this->Settings).RearChannelBleed = fVar5;
  uVar6 = *(undefined3 *)&param_4->field_0x9;
  (this->Settings).bRearChannelFlip = param_4->bRearChannelFlip;
  *(undefined3 *)&(this->Settings).field_0x9 = uVar6;
  (this->ConvolutionAlgorithm).Ptr = (IConvolutionAlgorithm *)*param_1.Ptr;
  *param_1.Ptr = (IConvolutionAlgorithm)0x0;
  (this->InputChannelFormatConverter).Ptr = (IChannelFormatConverter *)*param_2.Ptr;
  *param_2.Ptr = (IChannelFormatConverter)0x0;
  (pFVar1->Storage).Ptr = (IChannelFormatConverter *)0x0;
  (this->OutputChannelFormatConverter).BaseConverter = (IChannelFormatConverter *)0x0;
  (this->OutputChannelFormatConverter).SimpleUpmixer = (FSimpleUpmixer *)0x0;
  if (pFVar1 != param_3) {
    (pFVar1->Storage).Ptr = (param_3->Storage).Ptr;
    (param_3->Storage).Ptr = (IChannelFormatConverter *)0x0;
  }
  (this->OutputChannelFormatConverter).BaseConverter = param_3->BaseConverter;
  (this->OutputChannelFormatConverter).SimpleUpmixer = param_3->SimpleUpmixer;
  param_3->BaseConverter = (IChannelFormatConverter *)0x0;
  param_3->SimpleUpmixer = (FSimpleUpmixer *)0x0;
  pIVar2 = (this->InputChannelFormatConverter).Ptr;
  (this->InputDeinterleaveBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputDeinterleaveBuffers).ArrayNum = 0;
  (this->InputDeinterleaveBuffers).ArrayMax = 0;
  (this->InputChannelConverterBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputChannelConverterBuffers).ArrayNum = 0;
  (this->InputChannelConverterBuffers).ArrayMax = 0;
  (this->OutputDeinterleaveBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDeinterleaveBuffers).ArrayNum = 0;
  (this->OutputDeinterleaveBuffers).ArrayMax = 0;
  (this->OutputChannelConverterBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputChannelConverterBuffers).ArrayNum = 0;
  (this->OutputChannelConverterBuffers).ArrayMax = 0;
  (this->InputBufferPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBufferPtrs).ArrayNum = 0;
  (this->InputBufferPtrs).ArrayMax = 0;
  (this->OutputBufferPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBufferPtrs).ArrayNum = 0;
  (this->OutputBufferPtrs).ArrayMax = 0;
  (this->InputBlockBuffer).Ptr = (FAlignedBlockBuffer *)0x0;
  (this->OutputBlockBuffer).Ptr = (FAlignedBlockBuffer *)0x0;
  (this->InterleavedOutputBlock).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedOutputBlock).ArrayNum = 0;
  (this->InterleavedOutputBlock).ArrayMax = 0;
  this->bIsConvertingInputChannelFormat = pIVar2 != (IChannelFormatConverter *)0x0;
  this->ExpectedNumFramesPerCallback = 0x100;
  this->NumInputSamplesPerBlock = 0;
  this->NumOutputSamplesPerBlock = 0;
  this->OutputGain = 1.0;
  this->bIsConvertingOutputChannelFormat = false;
  if (((pFVar1->Storage).Ptr == (IChannelFormatConverter *)0x0) ||
     ((this->OutputChannelFormatConverter).BaseConverter == (IChannelFormatConverter *)0x0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  this->bIsConvertingOutputChannelFormat = bVar7;
  ResizeProcessingBuffers(this);
  ResizeBlockBuffers(this);
  Update(this,false);
  IVar3 = *param_1.Ptr;
  if (IVar3 != (IConvolutionAlgorithm)0x0) {
    (*(code *)**(undefined8 **)IVar3)(IVar3,1);
  }
  IVar4 = *param_2.Ptr;
  if (IVar4 != (IChannelFormatConverter)0x0) {
    (*(code *)**(undefined8 **)IVar4)(IVar4,1);
  }
  return this;
}

// ~FConvolutionReverb @ 14f0be480

void __thiscall Audio::FConvolutionReverb::~FConvolutionReverb(FConvolutionReverb *this)

{
  FScriptContainerElement *pFVar1;
  FAlignedBlockBuffer *pFVar2;
  IChannelFormatConverter *pIVar3;
  IConvolutionAlgorithm *pIVar4;
  
  pFVar1 = (this->InterleavedOutputBlock).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->OutputBlockBuffer).Ptr;
  if (pFVar2 != (FAlignedBlockBuffer *)0x0) {
    FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar2);
    ::operator_delete(pFVar2,0x48);
  }
  pFVar2 = (this->InputBlockBuffer).Ptr;
  if (pFVar2 != (FAlignedBlockBuffer *)0x0) {
    FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar2);
    ::operator_delete(pFVar2,0x48);
  }
  pFVar1 = (this->OutputBufferPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputBufferPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->OutputChannelConverterBuffers).AllocatorInstance.Data,
             (this->OutputChannelConverterBuffers).ArrayNum);
  pFVar1 = (this->OutputChannelConverterBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->OutputDeinterleaveBuffers).AllocatorInstance.Data,
             (this->OutputDeinterleaveBuffers).ArrayNum);
  pFVar1 = (this->OutputDeinterleaveBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->InputChannelConverterBuffers).AllocatorInstance.Data,
             (this->InputChannelConverterBuffers).ArrayNum);
  pFVar1 = (this->InputChannelConverterBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->InputDeinterleaveBuffers).AllocatorInstance.Data,
             (this->InputDeinterleaveBuffers).ArrayNum);
  pFVar1 = (this->InputDeinterleaveBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->OutputChannelFormatConverter).Storage.Ptr;
  if (pIVar3 != (IChannelFormatConverter *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar3 = (this->InputChannelFormatConverter).Ptr;
  if (pIVar3 != (IChannelFormatConverter *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar4 = (this->ConvolutionAlgorithm).Ptr;
  if (pIVar4 != (IConvolutionAlgorithm *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  return;
}

// CreateConvolutionReverb @ 14f0cee30

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> __cdecl
Audio::FConvolutionReverb::CreateConvolutionReverb
          (FConvolutionReverbInitData *param_1,FConvolutionReverbSettings *param_2)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  TUniquePtr<Audio::IChannelFormatConverter,TDefaultDelete<Audio::IChannelFormatConverter>_> TVar7;
  TUniquePtr<Audio::IChannelFormatConverter,TDefaultDelete<Audio::IChannelFormatConverter>_> TVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  TUniquePtr<Audio::FBaseChannelFormatConverter,TDefaultDelete<Audio::FBaseChannelFormatConverter>_>
  TVar12;
  TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> TVar13;
  FSimpleUpmixer *this;
  TUniquePtr<Audio::IChannelFormatConverter,TDefaultDelete<Audio::IChannelFormatConverter>_> TVar14;
  TUniquePtr<Audio::FSimpleRouter,TDefaultDelete<Audio::FSimpleRouter>_> TVar15;
  FConvolutionReverb *pFVar16;
  FConvolutionReverb *pFVar17;
  IChannelFormatConverter IVar18;
  FStaticBasicLogRecord *pFVar19;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined4 *puVar21;
  FConvolutionReverb *pFVar22;
  undefined4 *puVar23;
  FConvolutionReverb *pFVar24;
  undefined8 *in_R8;
  uint uVar25;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  float local_res20 [2];
  IConvolutionAlgorithm *local_108;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> local_100;
  FChannelFormatConverterWrapper local_f0;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> local_d8;
  FOutputFormat local_c8 [2];
  TArray<Audio::FBaseChannelFormatConverter::FChannelMixEntry,TSizedDefaultAllocator<32>_> local_c0;
  FConvolutionReverbSettings local_b0;
  undefined8 *local_a0;
  undefined8 *local_98;
  FScriptContainerElement *local_90;
  undefined1 local_88 [16];
  IConvolutionAlgorithm *local_78 [2];
  FChannelMixEntry *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<Audio::FBaseChannelFormatConverter::FChannelMixEntry_const_,int> local_58;
  
  if (*(float *)&param_2[2].bRearChannelFlip <= 0.0) {
    if (1 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
      param_1->InputAudioFormat = 0;
      param_1->OutputAudioFormat = 0;
      return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>)
             (FConvolutionReverb *)param_1;
    }
    goto LAB_14f0cefac;
  }
  if (param_2[3].NormalizationVolume <= 0.0) {
    if (1 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
      param_1->InputAudioFormat = 0;
      param_1->OutputAudioFormat = 0;
      return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>)
             (FConvolutionReverb *)param_1;
    }
    goto LAB_14f0cefac;
  }
  if ((int)param_2[1].RearChannelBleed < 1) {
    if ((byte)LogSynthesis._0_1_ < 2) goto LAB_14f0cefac;
    pFVar19 = &::LOG_Static;
  }
  else if (*(int *)&param_2[1].bRearChannelFlip < 1) {
    if ((byte)LogSynthesis._0_1_ < 2) goto LAB_14f0cefac;
    pFVar19 = &::LOG_Static;
  }
  else if ((int)param_2[2].NormalizationVolume < 1) {
    if ((byte)LogSynthesis._0_1_ < 2) goto LAB_14f0cefac;
    pFVar19 = &::LOG_Static;
  }
  else {
    if (0 < (int)param_2->NormalizationVolume) {
      if ((*(char *)&param_2[5].NormalizationVolume == '\0') &&
         (param_2->NormalizationVolume != param_2[1].RearChannelBleed)) {
        if (1 < (byte)LogSynthesis._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Mismatched_inpu_15313ee30,
                     (FLogCategoryBase *)&LogSynthesis);
          param_1->InputAudioFormat = 0;
          param_1->OutputAudioFormat = 0;
          return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>)
                 (FConvolutionReverb *)param_1;
        }
        goto LAB_14f0cefac;
      }
      if ((int)param_2->RearChannelBleed < 1) {
        if ((byte)LogSynthesis._0_1_ < 2) goto LAB_14f0cefac;
        pFVar19 = &::LOG_Static;
        goto LAB_14f0cefa0;
      }
      local_res18 = in_R8;
      FConvolutionFactory::NewConvolutionAlgorithm
                ((FConvolutionSettings *)&local_108,(FName *)&param_2->bRearChannelFlip);
      if (local_108 == (IConvolutionAlgorithm *)0x0) {
        if ((byte)LogSynthesis._0_1_ < 3) goto LAB_14f0cf02f;
        pFVar19 = &::LOG_Static;
      }
      else {
        bVar9 = ConvolutionReverbIntrinsics::SetImpulseResponse
                          (local_108,
                           (TArray<float,TSizedDefaultAllocator<32>_> *)&param_2[3].RearChannelBleed
                           ,(int)param_2[2].NormalizationVolume,
                           *(float *)&param_2[2].bRearChannelFlip,param_2[3].NormalizationVolume);
        if (bVar9) {
          puVar21 = *(undefined4 **)&param_2[5].RearChannelBleed;
          fVar2 = param_2[6].NormalizationVolume;
          puVar23 = puVar21 + (longlong)(int)fVar2 * 4;
          while( true ) {
            if (param_2[6].NormalizationVolume != fVar2) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<Audio::FConvolutionReverbGainEntry_const_,int,0>::operator!='
              ::__l2::<lambda_1>::operator()(local_res10);
            }
            if (puVar21 == puVar23) break;
            (**(code **)((longlong)*local_108 + 0x50))
                      (local_108,*puVar21,puVar21[1],puVar21[2],puVar21[3]);
            puVar21 = puVar21 + 4;
          }
          pFVar24 = (FConvolutionReverb *)0x0;
          pFVar22 = pFVar24;
          if ((*(char *)&param_2[5].NormalizationVolume != '\0') &&
             (pFVar22 = (FConvolutionReverb *)0x0,
             param_2->NormalizationVolume != param_2[1].RearChannelBleed)) {
            local_res20[0] = param_2[1].RearChannelBleed;
            TVar12 = FAC3DownmixerFactory::CreateAC3Downmixer
                               ((FInputFormat *)&local_a0,(FOutputFormat *)param_2,(int)local_res20)
            ;
            pFVar22 = (FConvolutionReverb *)(TVar12.Ptr)->_padding_;
            (TVar12.Ptr)->_padding_ = 0;
            if (local_a0 != (undefined8 *)0x0) {
              (**(code **)*local_a0)(local_a0,1);
            }
            if (pFVar22 == (FConvolutionReverb *)0x0) {
              if (2 < (byte)LogSynthesis._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
              }
              param_1->InputAudioFormat = 0;
              param_1->OutputAudioFormat = 0;
              if (local_108 == (IConvolutionAlgorithm *)0x0) {
                return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>
                        )(FConvolutionReverb *)param_1;
              }
              (**(code **)*local_108)(local_108,1);
              return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>
                      )(FConvolutionReverb *)param_1;
            }
          }
          cVar1 = *(char *)((longlong)&param_2[5].NormalizationVolume + 1);
          local_f0.SimpleUpmixer = (FSimpleUpmixer *)0x0;
          local_f0.Storage.Ptr = (IChannelFormatConverter *)0x0;
          local_f0.BaseConverter = (IChannelFormatConverter *)0x0;
          if (cVar1 == '\0') {
LAB_14f0cf2f2:
            bVar9 = false;
LAB_14f0cf2f4:
            bVar6 = false;
            if (bVar9) {
              local_c8[0].NumChannels = *(int *)&param_2[1].bRearChannelFlip;
              TVar12 = FAC3DownmixerFactory::CreateAC3Downmixer
                                 ((FInputFormat *)&local_98,local_c8,(int)param_2 + 4);
              TVar14.Ptr = (IChannelFormatConverter *)(TVar12.Ptr)->_padding_;
              (TVar12.Ptr)->_padding_ = 0;
              local_f0.Storage.Ptr = TVar14.Ptr;
              local_f0.BaseConverter = TVar14.Ptr;
              if (local_98 != (undefined8 *)0x0) {
                (**(code **)*local_98)(local_98,1);
              }
            }
            else {
              if (param_2->RearChannelBleed != *(float *)&param_2[1].bRearChannelFlip) {
                bVar9 = true;
                goto LAB_14f0cf18a;
              }
              TVar14.Ptr = (IChannelFormatConverter *)0x0;
            }
LAB_14f0cf595:
            local_b0._8_4_ = *(undefined4 *)(local_res18 + 1);
            local_b0.RearChannelBleed = (float)((ulonglong)*local_res18 >> 0x20);
            local_b0.NormalizationVolume = *(float *)&param_2[4].bRearChannelFlip;
            pFVar16 = ::operator_new(0xd0);
            pFVar17 = pFVar24;
            if (pFVar16 != (FConvolutionReverb *)0x0) {
              local_78[0] = local_108;
              local_108 = (IConvolutionAlgorithm *)0x0;
              local_88._8_8_ = pFVar22;
              pFVar17 = FConvolutionReverb(pFVar16,(IConvolutionAlgorithm *)local_78,
                                           (IChannelFormatConverter *)(local_88 + 8),&local_f0,
                                           &local_b0);
              pFVar22 = pFVar24;
              TVar14.Ptr = local_f0.Storage.Ptr;
            }
            *(FConvolutionReverb **)param_1 = pFVar17;
            if ((FConvolutionReverb *)TVar14.Ptr == (FConvolutionReverb *)0x0) goto LAB_14f0cf616;
            IVar18 = *(IChannelFormatConverter *)&((FConvolutionReverb *)TVar14.Ptr)->Settings;
          }
          else {
            if ((int)param_2->RearChannelBleed < *(int *)&param_2[1].bRearChannelFlip) {
              bVar9 = true;
              goto LAB_14f0cf2f4;
            }
            if (cVar1 == '\0') goto LAB_14f0cf2f2;
            bVar9 = false;
            if ((int)param_2->RearChannelBleed <= *(int *)&param_2[1].bRearChannelFlip)
            goto LAB_14f0cf2f4;
            bVar6 = true;
            bVar9 = false;
LAB_14f0cf18a:
            uVar3 = *(uint *)&param_2[1].bRearChannelFlip;
            local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_100.ArrayNum = 0;
            local_100.ArrayMax = 0;
            if (((int)uVar3 < 0) ||
               (ConvolutionReverbIntrinsics::ReverbOutputFormats.ArrayNum <= (int)uVar3)) {
              if (2 < (byte)LogSynthesis._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
              }
              param_1->InputAudioFormat = 0;
              param_1->OutputAudioFormat = 0;
              if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.AllocatorInstance.Data);
              }
              goto LAB_14f0cf616;
            }
            uVar11 = 0;
            if ((int)uVar3 < ConvolutionReverbIntrinsics::ReverbOutputFormats.ArrayNum) {
              uVar11 = ~uVar3 >> 0x1f;
            }
            uVar25 = 0;
            if (uVar11 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar5 = (code *)swi(3);
                TVar13.Ptr = (FConvolutionReverb *)(*pcVar5)();
                return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>
                        )TVar13.Ptr;
              }
              uVar25 = local_100.ArrayMax;
            }
            pTVar20 = (TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)
                      (ConvolutionReverbIntrinsics::ReverbOutputFormats.AllocatorInstance.Data +
                      (longlong)(int)uVar3 * 0x10);
            if (&local_100 != pTVar20) {
              iVar4 = pTVar20->ArrayNum;
              local_90 = (pTVar20->AllocatorInstance).Data;
              local_100.ArrayNum = iVar4;
              if (((iVar4 != 0) || (uVar25 != 0)) &&
                 (UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar4,uVar25,&local_100.AllocatorInstance,iVar4,&local_100.ArrayMax
                            ), iVar4 != 0)) {
                memcpy(local_100.AllocatorInstance.Data,local_90,(longlong)iVar4 << 2);
              }
            }
            local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.ArrayNum = 0;
            local_d8.ArrayMax = 0;
            bVar10 = GetSubmixChannelOrderForNumChannels((int)param_2->RearChannelBleed,&local_d8);
            if (bVar10) {
              if (bVar6) {
                fVar2 = param_2[1].NormalizationVolume;
                TVar14.Ptr = (IChannelFormatConverter *)pFVar24;
                if (local_100.ArrayNum < 1) {
                  if (1 < (byte)LogSynthesis._0_1_) {
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
                  }
                }
                else if (local_d8.ArrayNum < 1) {
                  if (1 < (byte)LogSynthesis._0_1_) {
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
                  }
                }
                else if ((int)fVar2 < 1) {
                  if (1 < (byte)LogSynthesis._0_1_) {
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
                    TVar14.Ptr = (IChannelFormatConverter *)(FConvolutionReverb *)0x0;
                  }
                }
                else {
                  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_c0.ArrayNum = 0;
                  local_c0.ArrayMax = 0;
                  bVar9 = FSimpleUpmixer::GetSimpleUpmixerStaticMixEntries
                                    (&local_100,&local_d8,&local_c0);
                  if (bVar9) {
                    this = ::operator_new(0x90);
                    if (this != (FSimpleUpmixer *)0x0) {
                      iVar4 = local_c0.ArrayNum;
                      local_68 = (FChannelMixEntry *)local_c0.AllocatorInstance.Data;
                      if ((local_c0.ArrayNum < 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("InCount >= 0",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                             ,0xeb,L""), bVar9)) {
                        pcVar5 = (code *)swi(3);
                        TVar13.Ptr = (FConvolutionReverb *)(*pcVar5)();
                        return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>
                                )TVar13.Ptr;
                      }
                      iStack_60 = iVar4;
                      local_58._12_4_ = uStack_5c;
                      local_58.ArrayNum = iVar4;
                      local_58.DataPtr = local_68;
                      TVar14.Ptr = (IChannelFormatConverter *)
                                   FSimpleUpmixer::FSimpleUpmixer
                                             (this,&local_100,&local_d8,&local_58,(int)fVar2);
                    }
                    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c0.AllocatorInstance.Data);
                    }
                  }
                  else if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c0.AllocatorInstance.Data);
                    TVar14.Ptr = (IChannelFormatConverter *)(FConvolutionReverb *)0x0;
                  }
                }
                TVar8.Ptr = local_f0.Storage.Ptr;
                TVar7.Ptr = TVar14.Ptr;
                pFVar17 = (FConvolutionReverb *)TVar14.Ptr;
                pFVar16 = (FConvolutionReverb *)TVar14.Ptr;
                if ((FConvolutionReverb *)local_f0.Storage.Ptr != (FConvolutionReverb *)0x0) {
                  IVar18 = *local_f0.Storage.Ptr;
                  local_f0.Storage.Ptr = TVar14.Ptr;
                  (**(code **)IVar18)(TVar8.Ptr,1);
                  TVar7.Ptr = local_f0.Storage.Ptr;
                }
              }
              else {
                TVar14.Ptr = local_f0.Storage.Ptr;
                TVar7.Ptr = local_f0.Storage.Ptr;
                pFVar17 = (FConvolutionReverb *)local_f0.BaseConverter;
                pFVar16 = (FConvolutionReverb *)local_f0.SimpleUpmixer;
                if (bVar9) {
                  TVar15 = FSimpleRouter::CreateSimpleRouter
                                     ((TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>
                                       *)local_88,&local_100,(int)&local_d8);
                  TVar7.Ptr = local_f0.Storage.Ptr;
                  TVar14.Ptr = (IChannelFormatConverter *)(TVar15.Ptr)->_padding_;
                  (TVar15.Ptr)->_padding_ = 0;
                  TVar8.Ptr = TVar14.Ptr;
                  if ((FConvolutionReverb *)local_f0.Storage.Ptr != (FConvolutionReverb *)0x0) {
                    IVar18 = *local_f0.Storage.Ptr;
                    local_f0.Storage.Ptr = TVar14.Ptr;
                    (**(code **)IVar18)(TVar7.Ptr,1);
                    TVar8.Ptr = local_f0.Storage.Ptr;
                  }
                  local_f0.Storage.Ptr = TVar8.Ptr;
                  TVar7.Ptr = local_f0.Storage.Ptr;
                  pFVar17 = (FConvolutionReverb *)TVar14.Ptr;
                  pFVar16 = (FConvolutionReverb *)local_f0.SimpleUpmixer;
                  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
                    local_f0.BaseConverter = TVar14.Ptr;
                    (*(code *)**(undefined8 **)local_88._0_8_)(local_88._0_8_,1);
                    TVar7.Ptr = local_f0.Storage.Ptr;
                    pFVar17 = (FConvolutionReverb *)local_f0.BaseConverter;
                    pFVar16 = (FConvolutionReverb *)local_f0.SimpleUpmixer;
                  }
                }
              }
              local_f0.SimpleUpmixer = (FSimpleUpmixer *)pFVar16;
              local_f0.BaseConverter = (IChannelFormatConverter *)pFVar17;
              local_f0.Storage.Ptr = TVar7.Ptr;
              if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.AllocatorInstance.Data);
              }
              if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.AllocatorInstance.Data);
              }
              goto LAB_14f0cf595;
            }
            if (2 < (byte)LogSynthesis._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
            }
            param_1->InputAudioFormat = 0;
            param_1->OutputAudioFormat = 0;
            if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.AllocatorInstance.Data);
            }
            if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.AllocatorInstance.Data);
            }
            if ((FConvolutionReverb *)local_f0.Storage.Ptr == (FConvolutionReverb *)0x0)
            goto LAB_14f0cf616;
            IVar18 = *local_f0.Storage.Ptr;
            TVar14.Ptr = local_f0.Storage.Ptr;
          }
          (**(code **)IVar18)(TVar14.Ptr,1);
LAB_14f0cf616:
          if (pFVar22 != (FConvolutionReverb *)0x0) {
            (*(code *)**(undefined8 **)&pFVar22->Settings)(pFVar22,1);
          }
          if (local_108 == (IConvolutionAlgorithm *)0x0) {
            return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>
                   )(FConvolutionReverb *)param_1;
          }
          (**(code **)*local_108)(local_108,1);
          return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>)
                 (FConvolutionReverb *)param_1;
        }
        if ((byte)LogSynthesis._0_1_ < 3) goto LAB_14f0cf02f;
        pFVar19 = &::LOG_Static;
      }
      UE::Logging::Private::BasicLog<3>(pFVar19,(FLogCategoryBase *)&LogSynthesis);
LAB_14f0cf02f:
      param_1->InputAudioFormat = 0;
      param_1->OutputAudioFormat = 0;
      if (local_108 == (IConvolutionAlgorithm *)0x0) {
        return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>)
               (FConvolutionReverb *)param_1;
      }
      (**(code **)*local_108)(local_108,1);
      return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>)
             (FConvolutionReverb *)param_1;
    }
    if ((byte)LogSynthesis._0_1_ < 2) goto LAB_14f0cefac;
    pFVar19 = &::LOG_Static;
  }
LAB_14f0cefa0:
  UE::Logging::Private::BasicLog<2>(pFVar19,(FLogCategoryBase *)&LogSynthesis);
LAB_14f0cefac:
  param_1->InputAudioFormat = 0;
  param_1->OutputAudioFormat = 0;
  return (TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>)
         (FConvolutionReverb *)param_1;
}

// DeinterleaveBuffer @ 14f0d4030

void __cdecl
Audio::FConvolutionReverb::DeinterleaveBuffer
          (TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<float_const_,int> *param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
  lVar18 = (longlong)param_3;
  if ((param_1->ArrayNum < param_3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputBuffers.Num() >= NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\ConvolutionReverb.cpp"
                         ,0x31e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (0 < param_3) {
    pfVar2 = param_2->DataPtr;
    uVar13 = 0;
    iVar7 = param_2->ArrayNum / param_3;
    lVar19 = 0;
    lVar17 = 0;
    lVar14 = (longlong)iVar7;
    do {
      uVar8 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      if ((*(int *)(pFVar3 + lVar19 + 8) != iVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutBuffer.Num() == NumFrames",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\ConvolutionReverb.cpp"
                             ,0x32d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)(pFVar3 + lVar19);
      lVar12 = 0;
      lVar11 = lVar17;
      if (3 < lVar14) {
        lVar16 = (lVar14 - 4U >> 2) + 1;
        lVar12 = lVar16 * 4;
        pfVar15 = (float *)(lVar4 + 8);
        do {
          pfVar15[-2] = pfVar2[lVar11];
          lVar9 = lVar11 + lVar18 + lVar18;
          pfVar15[-1] = pfVar2[lVar11 + lVar18];
          lVar10 = lVar9 + lVar18;
          *pfVar15 = pfVar2[lVar9];
          lVar11 = lVar10 + lVar18;
          pfVar15[1] = pfVar2[lVar10];
          lVar16 = lVar16 + -1;
          pfVar15 = pfVar15 + 4;
        } while (lVar16 != 0);
      }
      if (lVar12 < lVar14) {
        pfVar15 = pfVar2 + lVar11;
        do {
          fVar1 = *pfVar15;
          pfVar15 = pfVar15 + lVar18;
          *(float *)(lVar4 + lVar12 * 4) = fVar1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar14);
      }
      uVar13 = uVar13 + 1;
      lVar17 = lVar17 + 1;
      lVar19 = lVar19 + 0x10;
    } while ((int)uVar13 < param_3);
  }
  return;
}

// GetNumInputChannels @ 14f0da190

int __thiscall Audio::FConvolutionReverb::GetNumInputChannels(FConvolutionReverb *this)

{
  IConvolutionAlgorithm *pIVar1;
  IChannelFormatConverter *pIVar2;
  int iVar3;
  int *piVar4;
  
  pIVar1 = (this->ConvolutionAlgorithm).Ptr;
  if (pIVar1 == (IConvolutionAlgorithm *)0x0) {
    return 0;
  }
  pIVar2 = (this->InputChannelFormatConverter).Ptr;
  if (pIVar2 != (IChannelFormatConverter *)0x0) {
    piVar4 = (int *)(**(code **)((longlong)*pIVar2 + 8))();
    return *piVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0da1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  return iVar3;
}

// GetNumOutputChannels @ 14f0da1d0

int __thiscall Audio::FConvolutionReverb::GetNumOutputChannels(FConvolutionReverb *this)

{
  IConvolutionAlgorithm *pIVar1;
  IChannelFormatConverter *pIVar2;
  int iVar3;
  int *piVar4;
  
  pIVar1 = (this->ConvolutionAlgorithm).Ptr;
  if (pIVar1 == (IConvolutionAlgorithm *)0x0) {
    return 0;
  }
  if (this->bIsConvertingOutputChannelFormat != false) {
    pIVar2 = (this->OutputChannelFormatConverter).BaseConverter;
    if (pIVar2 != (IChannelFormatConverter *)0x0) {
      piVar4 = (int *)(**(code **)((longlong)*pIVar2 + 0x10))();
      return *piVar4;
    }
    return FChannelFormatConverterWrapper::DefaultOutputFormat.NumChannels;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0da21b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  return iVar3;
}

// GetSettings @ 14f0dde00

FConvolutionReverbSettings * __thiscall
Audio::FConvolutionReverb::GetSettings(FConvolutionReverb *this)

{
  return &this->Settings;
}

// InterleaveBuffer @ 14f0e7560

void __cdecl
Audio::FConvolutionReverb::InterleaveBuffer
          (TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  
  lVar9 = (longlong)param_3;
  if ((param_2->ArrayNum < param_3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputBuffers.Num() >= NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\ConvolutionReverb.cpp"
                         ,0x2fa,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  if (0 < param_2->ArrayNum) {
    iVar1 = *(int *)((param_2->AllocatorInstance).Data + 8);
    lVar13 = (longlong)iVar1;
    if (0 < iVar1 * param_3) {
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar1 * param_3,&param_1->AllocatorInstance,&param_1->ArrayNum,
                 &param_1->ArrayMax);
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    uVar16 = 0;
    if (0 < param_3) {
      lVar15 = 0;
      lVar14 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar6 = ~uVar16 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(int *)((param_2->AllocatorInstance).Data + lVar15 + 8) != iVar1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InputBuffers[i].Num() == NumFrames",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\ConvolutionReverb.cpp"
                               ,0x30e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar6 = ~uVar16 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar8 = 0;
        lVar3 = *(longlong *)((param_2->AllocatorInstance).Data + lVar15);
        lVar7 = lVar14;
        if (3 < lVar13) {
          lVar12 = (lVar13 - 4U >> 2) + 1;
          lVar8 = lVar12 * 4;
          puVar10 = (undefined4 *)(lVar3 + 8);
          do {
            *(undefined4 *)(pFVar2 + lVar7 * 4) = puVar10[-2];
            *(undefined4 *)(pFVar2 + (lVar7 + lVar9) * 4) = puVar10[-1];
            lVar7 = lVar7 + lVar9 + lVar9;
            *(undefined4 *)(pFVar2 + lVar7 * 4) = *puVar10;
            lVar7 = lVar7 + lVar9;
            *(undefined4 *)(pFVar2 + lVar7 * 4) = puVar10[1];
            lVar7 = lVar7 + lVar9;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 4;
          } while (lVar12 != 0);
        }
        if (lVar8 < lVar13) {
          pFVar11 = pFVar2 + lVar7 * 4;
          do {
            lVar7 = lVar8 * 4;
            lVar8 = lVar8 + 1;
            *(undefined4 *)pFVar11 = *(undefined4 *)(lVar3 + lVar7);
            pFVar11 = pFVar11 + lVar9 * 4;
          } while (lVar8 < lVar13);
        }
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar16 < param_3);
    }
  }
  return;
}

// ProcessAudio @ 14f0f19b0

void __thiscall
Audio::FConvolutionReverb::ProcessAudio
          (FConvolutionReverb *this,int param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          int param_3,TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumInputChannels != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\ConvolutionReverb.cpp"
                       ,0x1cc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum % param_1 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputAudio.Num() % InNumInputChannels == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\ConvolutionReverb.cpp"
                       ,0x1cd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ProcessAudio(this,param_1,(float *)(param_2->AllocatorInstance).Data,param_3,
               (float *)(param_4->AllocatorInstance).Data,param_2->ArrayNum / param_1);
  return;
}

// ProcessAudio @ 14f0f1a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FConvolutionReverb::ProcessAudio
          (FConvolutionReverb *this,int param_1,float *param_2,int param_3,float *param_4,
          int param_5)

{
  IConvolutionAlgorithm *pIVar1;
  IChannelFormatConverter *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  
  if (((this->InputBlockBuffer).Ptr == (FAlignedBlockBuffer *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputBlockBuffer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\ConvolutionReverb.cpp"
                         ,0x1d4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->OutputBlockBuffer).Ptr == (FAlignedBlockBuffer *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputBlockBuffer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\ConvolutionReverb.cpp"
                         ,0x1d5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < param_5) {
    iVar9 = param_3 * param_5;
    if (param_5 != this->ExpectedNumFramesPerCallback) {
      this->ExpectedNumFramesPerCallback = param_5;
      ResizeBlockBuffers(this);
    }
    if (0 < iVar9) {
      memset(param_4,0,(longlong)iVar9 << 2);
    }
    pIVar1 = (this->ConvolutionAlgorithm).Ptr;
    if (pIVar1 != (IConvolutionAlgorithm *)0x0) {
      pIVar2 = (this->InputChannelFormatConverter).Ptr;
      if (pIVar2 == (IChannelFormatConverter *)0x0) {
        iVar5 = (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      else {
        piVar7 = (int *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2);
        iVar5 = *piVar7;
      }
      if (param_1 == iVar5) {
        iVar5 = GetNumOutputChannels(this);
        if (param_3 == iVar5) {
          FAlignedBlockBuffer::AddSamples((this->InputBlockBuffer).Ptr,param_2,param_1 * param_5);
          iVar6 = FAlignedBlockBuffer::GetNumAvailable((this->InputBlockBuffer).Ptr);
          iVar5 = this->NumInputSamplesPerBlock;
          if (iVar5 <= iVar6) {
            do {
              pfVar8 = FAlignedBlockBuffer::InspectSamples((this->InputBlockBuffer).Ptr,iVar5,0);
              if (pfVar8 != (float *)0x0) {
                ProcessAudioBlock(this,pfVar8,param_1,&this->InterleavedOutputBlock,param_3);
                FAlignedBlockBuffer::AddSamples
                          ((this->OutputBlockBuffer).Ptr,
                           (float *)(this->InterleavedOutputBlock).AllocatorInstance.Data,
                           (this->InterleavedOutputBlock).ArrayNum);
              }
              FAlignedBlockBuffer::RemoveSamples
                        ((this->InputBlockBuffer).Ptr,this->NumInputSamplesPerBlock);
              iVar6 = FAlignedBlockBuffer::GetNumAvailable((this->InputBlockBuffer).Ptr);
              iVar5 = this->NumInputSamplesPerBlock;
            } while (iVar5 <= iVar6);
          }
          iVar6 = FAlignedBlockBuffer::GetNumAvailable((this->OutputBlockBuffer).Ptr);
          iVar5 = iVar9;
          if (iVar6 < iVar9) {
            iVar5 = iVar6;
          }
          if (0 < iVar5) {
            pfVar8 = FAlignedBlockBuffer::InspectSamples((this->OutputBlockBuffer).Ptr,iVar5,0);
            if (pfVar8 != (float *)0x0) {
              memcpy(param_4 + (iVar9 - iVar5),pfVar8,(longlong)iVar5 << 2);
            }
            FAlignedBlockBuffer::RemoveSamples((this->OutputBlockBuffer).Ptr,iVar5);
          }
        }
        else if (1 < (byte)LogSynthesis._0_1_) {
          GetNumOutputChannels(this);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
        }
      }
      else if (1 < (byte)LogSynthesis._0_1_) {
        GetNumInputChannels(this);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
      }
    }
  }
  return;
}

// ProcessAudioBlock @ 14f0f3e80

void __thiscall
Audio::FConvolutionReverb::ProcessAudioBlock
          (FConvolutionReverb *this,float *param_1,int param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3,int param_4)

{
  float fVar1;
  IChannelFormatConverter *pIVar2;
  undefined8 uVar3;
  IConvolutionAlgorithm *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  FInputFormat *pFVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48 [2];
  
  if ((param_1 == (float *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != InputAudio",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\ConvolutionReverb.cpp"
                         ,0x220,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->ConvolutionAlgorithm).Ptr == (IConvolutionAlgorithm *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConvolutionAlgorithm.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\ConvolutionReverb.cpp"
                         ,0x221,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (**(code **)((longlong)*(this->ConvolutionAlgorithm).Ptr + 8))();
  if ((iVar7 * param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_58._12_4_ = uStack_6c;
  local_58.ArrayNum = iVar7 * param_2;
  local_58.DataPtr = param_1;
  DeinterleaveBuffer(&this->InputDeinterleaveBuffers,&local_58,param_2);
  if (this->bIsConvertingInputChannelFormat == false) {
    uVar12 = 0;
    if (0 < param_2) {
      lVar11 = 0;
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->InputDeinterleaveBuffers).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(undefined8 *)((this->InputDeinterleaveBuffers).AllocatorInstance.Data + lVar13);
        uVar8 = 0;
        if ((int)uVar12 < (this->InputBufferPtrs).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x10;
        *(undefined8 *)((this->InputBufferPtrs).AllocatorInstance.Data + lVar11) = uVar3;
        lVar11 = lVar11 + 8;
      } while ((int)uVar12 < param_2);
    }
  }
  else {
    piVar9 = (int *)(**(code **)((longlong)*(this->InputChannelFormatConverter).Ptr + 0x10))();
    pIVar2 = (this->InputChannelFormatConverter).Ptr;
    iVar7 = *piVar9;
    (**(code **)((longlong)*pIVar2 + 0x18))
              (pIVar2,&this->InputDeinterleaveBuffers,&this->InputChannelConverterBuffers);
    uVar12 = 0;
    if (0 < iVar7) {
      lVar11 = 0;
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->InputChannelConverterBuffers).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(undefined8 *)
                 ((this->InputChannelConverterBuffers).AllocatorInstance.Data + lVar13);
        uVar8 = 0;
        if ((int)uVar12 < (this->InputBufferPtrs).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x10;
        *(undefined8 *)((this->InputBufferPtrs).AllocatorInstance.Data + lVar11 * 8) = uVar3;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar7);
    }
  }
  if (this->bIsConvertingOutputChannelFormat == false) {
    uVar12 = 0;
    if (0 < param_4) {
      lVar11 = 0;
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->OutputDeinterleaveBuffers).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(undefined8 *)((this->OutputDeinterleaveBuffers).AllocatorInstance.Data + lVar13);
        uVar8 = 0;
        if ((int)uVar12 < (this->OutputBufferPtrs).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x10;
        *(undefined8 *)((this->OutputBufferPtrs).AllocatorInstance.Data + lVar11) = uVar3;
        lVar11 = lVar11 + 8;
      } while ((int)uVar12 < param_4);
    }
  }
  else {
    pIVar2 = (this->OutputChannelFormatConverter).BaseConverter;
    if (pIVar2 == (IChannelFormatConverter *)0x0) {
      pFVar10 = &FChannelFormatConverterWrapper::DefaultInputFormat;
    }
    else {
      pFVar10 = (FInputFormat *)(**(code **)((longlong)*pIVar2 + 8))();
    }
    iVar7 = pFVar10->NumChannels;
    uVar12 = 0;
    if (0 < (longlong)iVar7) {
      lVar11 = 0;
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->OutputChannelConverterBuffers).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(undefined8 *)
                 ((this->OutputChannelConverterBuffers).AllocatorInstance.Data + lVar13);
        uVar8 = 0;
        if ((int)uVar12 < (this->OutputBufferPtrs).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x10;
        *(undefined8 *)((this->OutputBufferPtrs).AllocatorInstance.Data + lVar11 * 8) = uVar3;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar7);
    }
  }
  pIVar4 = (this->ConvolutionAlgorithm).Ptr;
  (**(code **)((longlong)*pIVar4 + 0x20))
            (pIVar4,(this->InputBufferPtrs).AllocatorInstance.Data,
             (this->OutputBufferPtrs).AllocatorInstance.Data);
  if ((this->bIsConvertingOutputChannelFormat != false) &&
     (pIVar2 = (this->OutputChannelFormatConverter).BaseConverter,
     pIVar2 != (IChannelFormatConverter *)0x0)) {
    (**(code **)((longlong)*pIVar2 + 0x18))
              (pIVar2,&this->OutputChannelConverterBuffers,&this->OutputDeinterleaveBuffers);
  }
  InterleaveBuffer(param_3,&this->OutputDeinterleaveBuffers,param_4);
  local_48[0].DataPtr = (float *)(param_3->AllocatorInstance).Data;
  iVar7 = param_3->ArrayNum;
  fVar1 = this->OutputGain;
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_48[0]._12_4_ = uStack_5c;
  local_48[0].ArrayNum = iVar7;
  ArrayMultiplyByConstantInPlace(local_48,fVar1);
  return;
}

// ResizeArrayOfBuffers @ 14f0f8080

void __thiscall
Audio::FConvolutionReverb::ResizeArrayOfBuffers
          (FConvolutionReverb *this,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  iVar3 = param_1->ArrayNum;
  while (iVar3 < param_2) {
    if (iVar3 == param_1->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar3 + 1;
    pFVar6 = (param_1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar6 + (longlong)iVar3 * 0x10) = 0;
    *(undefined8 *)(pFVar6 + (longlong)iVar3 * 0x10 + 8) = 0;
    iVar3 = param_1->ArrayNum;
  }
  uVar8 = uVar5;
  if (0 < param_2) {
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (param_1->AllocatorInstance).Data + uVar5;
      iVar3 = *(int *)(pFVar6 + 0xc);
      *(undefined4 *)&pFVar6[8].field_0x0 = 0;
      if (iVar3 < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar6,0,(int *)(pFVar6 + 0xc));
      }
      if (0 < param_3) {
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,param_3,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 8),(int *)(pFVar6 + 0xc)
                  );
      }
      uVar5 = uVar5 + 0x10;
      uVar8 = (ulonglong)(uVar7 + 1);
    } while ((int)(uVar7 + 1) < param_2);
  }
  return;
}

// ResizeBlockBuffers @ 14f0f81e0

void __thiscall Audio::FConvolutionReverb::ResizeBlockBuffers(FConvolutionReverb *this)

{
  TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *pTVar1;
  IConvolutionAlgorithm *pIVar2;
  IChannelFormatConverter *pIVar3;
  int iVar4;
  int iVar5;
  FOutputFormat FVar6;
  int iVar7;
  int *piVar8;
  FAlignedBlockBuffer *pFVar9;
  FAlignedBlockBuffer *pFVar10;
  FAlignedBlockBuffer *this_00;
  int iVar11;
  int iVar12;
  undefined8 local_38;
  undefined8 local_30;
  
  pIVar2 = (this->ConvolutionAlgorithm).Ptr;
  this_00 = (FAlignedBlockBuffer *)0x0;
  FVar6.NumChannels = 0;
  iVar7 = 0;
  iVar11 = iVar7;
  if (pIVar2 != (IConvolutionAlgorithm *)0x0) {
    pIVar3 = (this->InputChannelFormatConverter).Ptr;
    if (pIVar3 == (IChannelFormatConverter *)0x0) {
      iVar11 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    else {
      piVar8 = (int *)(**(code **)((longlong)*pIVar3 + 8))();
      iVar11 = *piVar8;
    }
  }
  pIVar2 = (this->ConvolutionAlgorithm).Ptr;
  if (pIVar2 != (IConvolutionAlgorithm *)0x0) {
    if (this->bIsConvertingOutputChannelFormat == false) {
      FVar6.NumChannels = (**(code **)((longlong)*pIVar2 + 0x18))();
    }
    else {
      pIVar3 = (this->OutputChannelFormatConverter).BaseConverter;
      FVar6.NumChannels = FChannelFormatConverterWrapper::DefaultOutputFormat.NumChannels;
      if (pIVar3 != (IChannelFormatConverter *)0x0) {
        piVar8 = (int *)(**(code **)((longlong)*pIVar3 + 0x10))();
        FVar6.NumChannels = *piVar8;
      }
    }
  }
  pIVar2 = (this->ConvolutionAlgorithm).Ptr;
  if (pIVar2 != (IConvolutionAlgorithm *)0x0) {
    iVar7 = (**(code **)((longlong)*pIVar2 + 8))();
  }
  iVar12 = iVar7;
  if (iVar7 < this->ExpectedNumFramesPerCallback) {
    iVar12 = this->ExpectedNumFramesPerCallback;
  }
  if (iVar12 < 0x80) {
    iVar12 = 0x80;
  }
  iVar5 = iVar12 * iVar11 * 2;
  pFVar9 = ::operator_new(0x48);
  pFVar10 = this_00;
  if (pFVar9 != (FAlignedBlockBuffer *)0x0) {
    iVar4 = iVar11 * iVar7;
    if (iVar11 * iVar7 < 0x400) {
      iVar4 = 0x400;
    }
    if (iVar5 < 0x2000) {
      iVar5 = 0x2000;
    }
    pFVar10 = FAlignedBlockBuffer::FAlignedBlockBuffer(pFVar9,iVar5,iVar4,0x10,0x10);
  }
  pTVar1 = &this->InputBlockBuffer;
  if (pTVar1 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&local_38) {
    if (pFVar10 == (FAlignedBlockBuffer *)0x0) goto LAB_14f0f8336;
    FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar10);
  }
  else {
    pFVar9 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar10;
    if (pFVar9 == (FAlignedBlockBuffer *)0x0) goto LAB_14f0f8336;
    FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar9);
    pFVar10 = pFVar9;
  }
  ::operator_delete(pFVar10,0x48);
LAB_14f0f8336:
  iVar11 = FVar6.NumChannels * this->ExpectedNumFramesPerCallback;
  iVar7 = FVar6.NumChannels * iVar12 * 2;
  pFVar10 = ::operator_new(0x48);
  if (pFVar10 != (FAlignedBlockBuffer *)0x0) {
    if (iVar11 < 0x400) {
      iVar11 = 0x400;
    }
    if (iVar7 < 0x2000) {
      iVar7 = 0x2000;
    }
    this_00 = FAlignedBlockBuffer::FAlignedBlockBuffer(pFVar10,iVar7,iVar11,0x10,0x10);
  }
  pTVar1 = &this->OutputBlockBuffer;
  if (pTVar1 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&local_30) {
    if (this_00 == (FAlignedBlockBuffer *)0x0) {
      return;
    }
    FAlignedBlockBuffer::~FAlignedBlockBuffer(this_00);
  }
  else {
    pFVar10 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar10 == (FAlignedBlockBuffer *)0x0) {
      return;
    }
    FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar10);
    this_00 = pFVar10;
  }
  ::operator_delete(this_00,0x48);
  return;
}

// ResizeProcessingBuffers @ 14f0f83f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Audio::FConvolutionReverb::ResizeProcessingBuffers(FConvolutionReverb *this)

{
  IConvolutionAlgorithm *pIVar1;
  IChannelFormatConverter *pIVar2;
  FOutputFormat FVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar4 = 0;
  pIVar1 = (this->ConvolutionAlgorithm).Ptr;
  FVar3.NumChannels = iVar4;
  if (pIVar1 != (IConvolutionAlgorithm *)0x0) {
    if (this->bIsConvertingOutputChannelFormat == false) {
      FVar3.NumChannels = (**(code **)((longlong)*pIVar1 + 0x18))();
    }
    else {
      pIVar2 = (this->OutputChannelFormatConverter).BaseConverter;
      FVar3.NumChannels = FChannelFormatConverterWrapper::DefaultOutputFormat.NumChannels;
      if (pIVar2 != (IChannelFormatConverter *)0x0) {
        piVar8 = (int *)(**(code **)((longlong)*pIVar2 + 0x10))();
        FVar3.NumChannels = *piVar8;
      }
    }
  }
  pIVar1 = (this->ConvolutionAlgorithm).Ptr;
  if (pIVar1 != (IConvolutionAlgorithm *)0x0) {
    pIVar2 = (this->InputChannelFormatConverter).Ptr;
    if (pIVar2 == (IChannelFormatConverter *)0x0) {
      iVar4 = (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
    else {
      piVar8 = (int *)(**(code **)((longlong)*pIVar2 + 8))();
      iVar4 = *piVar8;
    }
  }
  this->NumInputSamplesPerBlock = 0;
  this->NumOutputSamplesPerBlock = 0;
  pIVar1 = (this->ConvolutionAlgorithm).Ptr;
  if (pIVar1 != (IConvolutionAlgorithm *)0x0) {
    iVar5 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,this);
    iVar6 = (**(code **)((longlong)*(this->ConvolutionAlgorithm).Ptr + 0x10))();
    iVar7 = (**(code **)((longlong)*(this->ConvolutionAlgorithm).Ptr + 8))();
    this->NumInputSamplesPerBlock = iVar4 * iVar7;
    this->NumOutputSamplesPerBlock = FVar3.NumChannels * iVar7;
    ResizeArrayOfBuffers(this,&this->InputDeinterleaveBuffers,iVar4,iVar7);
    ResizeArrayOfBuffers(this,&this->OutputDeinterleaveBuffers,FVar3.NumChannels,iVar7);
    if ((this->InputChannelFormatConverter).Ptr != (IChannelFormatConverter *)0x0) {
      ResizeArrayOfBuffers(this,&this->InputChannelConverterBuffers,iVar6,iVar7);
    }
    if (this->bIsConvertingOutputChannelFormat != false) {
      ResizeArrayOfBuffers(this,&this->OutputChannelConverterBuffers,iVar5,iVar7);
    }
    TArray<float_*,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->InputBufferPtrs,iVar6,Default);
    TArray<float_*,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->OutputBufferPtrs,iVar5,Default)
    ;
  }
  return;
}

// SetSettings @ 14f100ea0

void __thiscall
Audio::FConvolutionReverb::SetSettings(FConvolutionReverb *this,FConvolutionReverbSettings *param_1)

{
  float fVar1;
  undefined3 uVar2;
  
  fVar1 = param_1->RearChannelBleed;
  (this->Settings).NormalizationVolume = param_1->NormalizationVolume;
  (this->Settings).RearChannelBleed = fVar1;
  uVar2 = *(undefined3 *)&param_1->field_0x9;
  (this->Settings).bRearChannelFlip = param_1->bRearChannelFlip;
  *(undefined3 *)&(this->Settings).field_0x9 = uVar2;
  Update(this,true);
  return;
}

// Update @ 14f106610

void __thiscall Audio::FConvolutionReverb::Update(FConvolutionReverb *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  FSimpleUpmixer *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [8];
  uint local_res20;
  
  this->OutputGain = (this->Settings).NormalizationVolume;
  pFVar6 = (this->OutputChannelFormatConverter).SimpleUpmixer;
  fVar3 = (this->Settings).RearChannelBleed;
  if (pFVar6 != (FSimpleUpmixer *)0x0) {
    local_res20 = (pFVar6->FrontChannelIndices).ArrayNum;
    uVar8 = (ulonglong)(int)local_res20;
    pFVar10 = (pFVar6->FrontChannelIndices).AllocatorInstance.Data;
    pFVar1 = pFVar10 + uVar8 * 4;
    while( true ) {
      if ((pFVar6->FrontChannelIndices).ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar10 == pFVar1) break;
      iVar4 = *(int *)pFVar10;
      pTVar7 = FSimpleUpmixer::GetPairedRearChannelIndices(pFVar6,iVar4);
      pFVar9 = (pTVar7->AllocatorInstance).Data;
      iVar5 = pTVar7->ArrayNum;
      pFVar2 = pFVar9 + (longlong)iVar5 * 4;
      while( true ) {
        if (pTVar7->ArrayNum != iVar5) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar9 == pFVar2) break;
        FBaseChannelFormatConverter::SetMixGain
                  ((FBaseChannelFormatConverter *)pFVar6,iVar4,*(int *)pFVar9,fVar3,param_1);
        pFVar9 = pFVar9 + 4;
      }
      uVar8 = (ulonglong)local_res20;
      pFVar10 = pFVar10 + 4;
    }
    FSimpleUpmixer::UpdateOutputGain(pFVar6,param_1);
  }
  pFVar6 = (this->OutputChannelFormatConverter).SimpleUpmixer;
  if (pFVar6 != (FSimpleUpmixer *)0x0) {
    FSimpleUpmixer::SetRearChannelFlip(pFVar6,(this->Settings).bRearChannelFlip,param_1);
  }
  return;
}

