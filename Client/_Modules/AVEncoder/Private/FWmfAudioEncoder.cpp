// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 14

// FWmfAudioEncoder @ 148d00c40

FWmfAudioEncoder * __thiscall
AVEncoder::FWmfAudioEncoder::FWmfAudioEncoder(FWmfAudioEncoder *this,ECodecType param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FWmfAudioEncoder *pFVar6;
  FString local_28;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FAudioEncoder_AVEncoder__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->CodecType = param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FWmfAudioEncoder_AVEncoder__6B_;
  pFVar1 = &this->Name;
  this->_padding_ = 0;
  pFVar2 = &this->Type;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Type).Data.ArrayNum = 0;
  (this->Type).Data.ArrayMax = 0;
  (this->Config).Codec.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Config).Codec.Data.ArrayNum = 0;
  (this->Config).Codec.Data.ArrayMax = 0;
  (this->Encoder).Reference = (IMFTransform *)0x0;
  (this->OutputType).Reference = (IMFMediaType *)0x0;
  (this->InputStreamInfo).hnsMaxLatency = 0;
  (this->InputStreamInfo).dwFlags = 0;
  (this->InputStreamInfo).cbSize = 0;
  (this->InputStreamInfo).cbMaxLookahead = 0;
  (this->InputStreamInfo).cbAlignment = 0;
  (this->OutputStreamInfo).dwFlags = 0;
  (this->OutputStreamInfo).cbSize = 0;
  (this->OutputStreamInfo).cbAlignment = 0;
  (this->PCM16).RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PCM16).RawPCMData.ArrayNum = 0;
  (this->PCM16).RawPCMData.ArrayMax = 0;
  (this->PCM16).NumSamples = 0;
  (this->PCM16).NumFrames = 0;
  (this->PCM16).NumChannels = 0;
  (this->PCM16).SampleRate = 0;
  (this->PCM16).SampleDuration = 0.0;
  if (param_1 == AAC) {
    ::FString::FString(&local_28,"aac.wmf");
    if (pFVar1 != &local_28) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (this->Name).Data.ArrayNum = local_28.Data.ArrayNum;
      (this->Name).Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_18,"aac");
    if (pFVar2 != &local_18) {
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar2->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (this->Type).Data.ArrayNum = local_18.Data.ArrayNum;
      (this->Type).Data.ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Encoders\\WmfAudioEncoder.cpp"
                       ,0x50,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FWmfAudioEncoder *)(*pcVar4)();
      return pFVar6;
    }
  }
  return this;
}

// ~FWmfAudioEncoder @ 148d01ec0

void __thiscall AVEncoder::FWmfAudioEncoder::~FWmfAudioEncoder(FWmfAudioEncoder *this)

{
  FScriptContainerElement *pFVar1;
  IMFMediaType *pIVar2;
  IMFTransform *pIVar3;
  
  this->_padding_ = (longlong)&___7FWmfAudioEncoder_AVEncoder__6B_;
  pFVar1 = (this->PCM16).RawPCMData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->OutputType).Reference;
  if (pIVar2 != (IMFMediaType *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar3 = (this->Encoder).Reference;
  if (pIVar3 != (IMFTransform *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pFVar1 = (this->Config).Codec.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Type).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAudioEncoder_AVEncoder__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
                    /* WARNING: Could not recover jumptable at 0x000148d01f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  return;
}

// CreateInputSample @ 148d07ad0

/* WARNING: Enum "Type": Some values do not have unique names */

FIMFSampleWrapper * __thiscall
AVEncoder::FWmfAudioEncoder::CreateInputSample
          (FWmfAudioEncoder *this,FIMFSampleWrapper *__return_storage_ptr__,uchar *param_1,
          uint param_2,FTimespan param_3,FTimespan param_4)

{
  DWORD DVar1;
  code *pcVar2;
  bool bVar3;
  HRESULT HVar4;
  int iVar5;
  FIMFSampleWrapper *pFVar6;
  IMFSample IVar7;
  uint uVar8;
  DWORD cbAligment;
  IMFMediaBuffer *local_98;
  EPacketType local_90;
  TRefCountPtr<IMFSample> local_88;
  BYTE *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_90 = Audio;
  local_88.Reference = (IMFSample *)0x0;
  HVar4 = MFCreateSample((IMFSample **)&local_88);
  if (HVar4 < 0) {
    if (1 < (byte)LogAVEncoder._0_1_) {
      GetComErrorDescription(&local_78,HVar4);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->MediaType = Invalid;
    (__return_storage_ptr__->Sample).Reference = (IMFSample *)0x0;
  }
  else {
    DVar1 = (this->InputStreamInfo).cbSize;
    uVar8 = (this->InputStreamInfo).cbAlignment;
    local_98 = (IMFMediaBuffer *)0x0;
    cbAligment = uVar8 - 1;
    if (uVar8 < 2) {
      cbAligment = 0;
    }
    uVar8 = param_2;
    if ((int)param_2 < (int)DVar1) {
      uVar8 = DVar1;
    }
    HVar4 = MFCreateAlignedMemoryBuffer(uVar8,cbAligment,&local_98);
    if (HVar4 < 0) {
      if (1 < (byte)LogAVEncoder._0_1_) {
        GetComErrorDescription(&local_68,HVar4);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
LAB_148d07bfb:
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_80 = (BYTE *)0x0;
      HVar4 = (*local_98->lpVtbl->Lock)(local_98,&local_80,(DWORD *)0x0,(DWORD *)0x0);
      if (HVar4 < 0) {
        if (1 < (byte)LogAVEncoder._0_1_) {
          GetComErrorDescription(&local_58,HVar4);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
          local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          goto LAB_148d07bfb;
        }
      }
      else {
        memcpy(local_80,param_1,(ulonglong)param_2);
        HVar4 = (*local_98->lpVtbl->Unlock)(local_98);
        if (HVar4 < 0) {
          if (1 < (byte)LogAVEncoder._0_1_) {
            GetComErrorDescription(&local_48,HVar4);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
            local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
            goto LAB_148d07bfb;
          }
        }
        else {
          HVar4 = (*local_98->lpVtbl->SetCurrentLength)(local_98,param_2);
          if (HVar4 < 0) {
            if (1 < (byte)LogAVEncoder._0_1_) {
              GetComErrorDescription(&local_38,HVar4);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
              local_68.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
              goto LAB_148d07bfb;
            }
          }
          else {
            iVar5 = (**(code **)((longlong)*local_88.Reference + 0x150))
                              (local_88.Reference,local_98);
            if (-1 < iVar5) {
              iVar5 = (**(code **)((longlong)*local_88.Reference + 0x120))
                                (local_88.Reference,param_3.Ticks);
              if ((iVar5 < 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(((HRESULT)(Sample->SetSampleTime(Time.GetTicks()))) >= 0)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                                     ,0x3a,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
                return pFVar6;
              }
              iVar5 = (**(code **)((longlong)*local_88.Reference + 0x130))
                                (local_88.Reference,param_4.Ticks);
              if ((iVar5 < 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(((HRESULT)(Sample->SetSampleDuration(Duration.GetTicks()))) >= 0)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                                     ,0x47,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                pFVar6 = (FIMFSampleWrapper *)(*pcVar2)();
                return pFVar6;
              }
              __return_storage_ptr__->MediaType = local_90;
              (__return_storage_ptr__->Sample).Reference = local_88.Reference;
              local_88.Reference = (IMFSample *)0x0;
              if (local_98 != (IMFMediaBuffer *)0x0) {
                (*local_98->lpVtbl->Release)(local_98);
              }
              if (local_88.Reference == (IMFSample *)0x0) {
                return __return_storage_ptr__;
              }
              IVar7 = *local_88.Reference;
              goto LAB_148d07e61;
            }
            if (1 < (byte)LogAVEncoder._0_1_) {
              GetComErrorDescription(&local_28,iVar5);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
              local_68.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
              goto LAB_148d07bfb;
            }
          }
        }
      }
    }
    __return_storage_ptr__->MediaType = Invalid;
    (__return_storage_ptr__->Sample).Reference = (IMFSample *)0x0;
    if (local_98 != (IMFMediaBuffer *)0x0) {
      (*local_98->lpVtbl->Release)(local_98);
    }
  }
  if (local_88.Reference == (IMFSample *)0x0) {
    return __return_storage_ptr__;
  }
  IVar7 = *local_88.Reference;
LAB_148d07e61:
  (**(code **)((longlong)IVar7 + 0x10))(local_88.Reference);
  return __return_storage_ptr__;
}

// Encode @ 148d09ad0

/* WARNING: Removing unreachable block (ram,0x000148d0a1fc) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AVEncoder::FWmfAudioEncoder::Encode(FWmfAudioEncoder *this,FAudioFrame *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *lpCriticalSection;
  TSampleBuffer<short> *pTVar3;
  undefined8 *puVar4;
  uint uVar5;
  IMFTransform *pIVar6;
  code *pcVar7;
  TRefCountPtr<IMFSample> TVar8;
  void *_Src;
  TRefCountPtr<IMFSample> TVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  size_t _Size;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  FIMFSampleWrapper local_1a8;
  longlong *local_198;
  undefined4 local_190 [2];
  void *local_188;
  FIMFSampleWrapper local_180;
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  FScriptContainerElement *local_150;
  int iStack_148;
  int iStack_144;
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined8 local_128;
  ForAnyElementType FStack_120;
  undefined8 local_118;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  TArrayView<short,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  if (5 < (byte)LogAVEncoder._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
  }
  uVar5 = (param_1->Data).NumSamples;
  pTVar3 = &this->PCM16;
  (this->PCM16).NumSamples = uVar5;
  (this->PCM16).NumFrames = (param_1->Data).NumFrames;
  (this->PCM16).NumChannels = (param_1->Data).NumChannels;
  (this->PCM16).SampleRate = (param_1->Data).SampleRate;
  (this->PCM16).SampleDuration = (param_1->Data).SampleDuration;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  iVar11 = (this->PCM16).RawPCMData.ArrayMax;
  piVar1 = &(this->PCM16).RawPCMData.ArrayMax;
  piVar2 = &(this->PCM16).RawPCMData.ArrayNum;
  *piVar2 = 0;
  if (iVar11 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar5,(ForAnyElementType *)pTVar3,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,(this->PCM16).NumSamples,(ForAnyElementType *)pTVar3,piVar2,piVar1);
  iStack_148 = *piVar2;
  local_150 = (pTVar3->RawPCMData).AllocatorInstance.Data;
  if ((iStack_148 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iStack_144 = local_e8.Data.ArrayMax;
  local_f8 = (param_1->Data).RawPCMData.AllocatorInstance.Data;
  iVar11 = (param_1->Data).RawPCMData.ArrayNum;
  if ((iVar11 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_d8._12_4_ = iStack_144;
  local_d8.ArrayNum = iStack_148;
  local_c8._12_4_ = uStack_ec;
  local_c8.ArrayNum = iVar11;
  local_d8.DataPtr = (short *)local_150;
  local_c8.DataPtr = (float *)local_f8;
  iStack_f0 = iVar11;
  Audio::ArrayFloatToPcm16(&local_c8,&local_d8);
  CreateInputSample(this,&local_180,(uchar *)(pTVar3->RawPCMData).AllocatorInstance.Data,
                    (this->PCM16).NumSamples * 2,(FTimespan)(param_1->Timestamp).Ticks,
                    (FTimespan)(param_1->Duration).Ticks);
  TVar9.Reference = local_180.Sample.Reference;
  if (local_180.Sample.Reference != (IMFSample *)0x0) {
    pIVar6 = (this->Encoder).Reference;
    iVar11 = (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,0,local_180.Sample.Reference,0);
    if (iVar11 < 0) {
      local_180.Sample.Reference = TVar9.Reference;
      if (1 < (byte)LogAVEncoder._0_1_) {
        GetComErrorDescription(&local_b8,iVar11);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      GetOutputSample(this,&local_1a8);
      TVar8.Reference = local_180.Sample.Reference;
      while (local_180.Sample.Reference = TVar9.Reference,
            local_1a8.Sample.Reference != (IMFSample *)0x0) {
        local_180.Sample.Reference = TVar8.Reference;
        iVar11 = (**(code **)((longlong)*local_1a8.Sample.Reference + 0x168))
                           (local_1a8.Sample.Reference,local_res20);
        if (iVar11 < 0) {
          if (1 < (byte)LogAVEncoder._0_1_) {
            GetComErrorDescription(&local_e8,iVar11);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
          if (local_1a8.Sample.Reference != (IMFSample *)0x0) {
            (**(code **)((longlong)*local_1a8.Sample.Reference + 0x10))();
          }
          break;
        }
        if (5 < (byte)LogAVEncoder._0_1_) {
          iVar11 = (**(code **)((longlong)*local_1a8.Sample.Reference + 0x128))
                             (local_1a8.Sample.Reference,local_170);
          if (iVar11 < 0) {
            GetComErrorDescription(&local_a8,iVar11);
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(((HRESULT)(hr)) >= 0)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                                ,0x41,L"%s");
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar11 = (**(code **)((longlong)*local_1a8.Sample.Reference + 0x118))
                             (local_1a8.Sample.Reference,local_168);
          if (iVar11 < 0) {
            GetComErrorDescription(&local_98,iVar11);
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(((HRESULT)(hr)) >= 0)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                                ,0x34,L"%s");
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
        }
        local_130 = 0;
        local_128 = 0;
        FStack_120.Data = (FScriptContainerElement *)0x0;
        local_118 = 0;
        local_138[0] = 0;
        iVar11 = (**(code **)((longlong)*local_1a8.Sample.Reference + 0x118))
                           (local_1a8.Sample.Reference,&local_160);
        if (iVar11 < 0) {
          GetComErrorDescription(&local_88,iVar11);
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(((HRESULT)(hr)) >= 0)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                              ,0x34,L"%s");
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        local_130 = local_160;
        iVar11 = (**(code **)((longlong)*local_1a8.Sample.Reference + 0x128))
                           (local_1a8.Sample.Reference,&local_158);
        if (iVar11 < 0) {
          GetComErrorDescription(local_78,iVar11);
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(((HRESULT)(hr)) >= 0)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                              ,0x41,L"%s");
          if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
          }
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        local_128 = local_158;
        local_res10[0] = 0;
        iVar11 = (**(code **)((longlong)*local_1a8.Sample.Reference + 0x138))
                           (local_1a8.Sample.Reference,local_res10);
        if ((iVar11 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(((HRESULT)(Sample->GetBufferCount(&BufferCount))) >= 0)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\IMFSampleWrapper.cpp"
                                ,0x54,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (0 < local_res10[0]) {
          local_198 = (longlong *)0x0;
          iVar11 = (**(code **)((longlong)*local_1a8.Sample.Reference + 0x140))
                             (local_1a8.Sample.Reference,0,&local_198);
          if ((iVar11 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(((HRESULT)(Sample->GetBufferByIndex(0, MediaBuffer.GetInitReference()))) >= 0)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Public\\IMFSampleWrapper.h"
                                  ,0x46,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_188 = (void *)0x0;
          local_190[0] = 0;
          local_res18[0] = 0;
          iVar11 = (**(code **)(*local_198 + 0x18))(local_198,&local_188,local_190,local_res18);
          if ((iVar11 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(((HRESULT)(MediaBuffer->Lock(&SrcData, &MaxLength, &CurrentLength))) >= 0)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Public\\IMFSampleWrapper.h"
                                  ,0x4b,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          _Src = local_188;
          iVar11 = local_res18[0];
          _Size = (size_t)local_res18[0];
          if ((local_res18[0] < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (((_Src == (void *)0x0) && (iVar11 != 0)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Ptr != nullptr || Count == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x9c1,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,iVar11,&FStack_120,(int *)&local_118,
                              (int *)((longlong)&local_118 + 4));
          if (iVar11 != 0) {
            memcpy(FStack_120.Data + iVar12,_Src,_Size);
          }
          iVar11 = (**(code **)(*local_198 + 0x20))();
          if ((iVar11 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(((HRESULT)(MediaBuffer->Unlock())) >= 0)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Public\\IMFSampleWrapper.h"
                                  ,0x4d,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_198 != (longlong *)0x0) {
            (**(code **)(*local_198 + 0x10))();
          }
        }
        lpCriticalSection = &this->_padding_;
        if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        puVar13 = (undefined8 *)this->_padding_;
        iVar11 = (int)this->_padding_;
        puVar4 = puVar13 + iVar11;
        while( true ) {
          if ((int)this->_padding_ != iVar11) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<AVEncoder::IAudioEncoderListener_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (puVar13 == puVar4) break;
          (*(code *)**(undefined8 **)*puVar13)((undefined8 *)*puVar13,local_138);
          puVar13 = puVar13 + 1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (FStack_120.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_120.Data);
        }
        if (local_1a8.Sample.Reference != (IMFSample *)0x0) {
          (**(code **)((longlong)*local_1a8.Sample.Reference + 0x10))();
        }
        GetOutputSample(this,&local_1a8);
        TVar9.Reference = local_180.Sample.Reference;
        TVar8.Reference = local_180.Sample.Reference;
      }
    }
    if (local_180.Sample.Reference != (IMFSample *)0x0) {
      (**(code **)((longlong)*local_180.Sample.Reference + 0x10))(local_180.Sample.Reference);
    }
  }
  return;
}

// GetConfig @ 148d0b030

FAudioConfig * __thiscall
AVEncoder::FWmfAudioEncoder::GetConfig(FWmfAudioEncoder *this,FAudioConfig *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(__return_storage_ptr__->Codec).Data.ArrayMax;
  (__return_storage_ptr__->Codec).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (this->Config).Codec.Data.ArrayNum;
  _Src = (this->Config).Codec.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Codec).Data.ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
    memcpy((__return_storage_ptr__->Codec).Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  }
  __return_storage_ptr__->Samplerate = (this->Config).Samplerate;
  __return_storage_ptr__->NumChannels = (this->Config).NumChannels;
  __return_storage_ptr__->Bitrate = (this->Config).Bitrate;
  return __return_storage_ptr__;
}

// GetName @ 148d0b890

wchar_t * __thiscall AVEncoder::FWmfAudioEncoder::GetName(FWmfAudioEncoder *this)

{
  if ((this->Name).Data.ArrayNum != 0) {
    return (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
  }
  return L"";
}

// GetOutputSample @ 148d0b8c0

/* WARNING: Enum "Type": Some values do not have unique names */

FIMFSampleWrapper * __thiscall
AVEncoder::FWmfAudioEncoder::GetOutputSample
          (FWmfAudioEncoder *this,FIMFSampleWrapper *__return_storage_ptr__)

{
  uint uVar1;
  IMFTransform *pIVar2;
  code *pcVar3;
  bool bVar4;
  HRESULT HVar5;
  int iVar6;
  FIMFSampleWrapper *pFVar7;
  IMFMediaBufferVtbl *pIVar8;
  IMFSample IVar9;
  IMFMediaBuffer *This;
  DWORD cbAligment;
  undefined4 local_res8 [2];
  IMFMediaBuffer *local_res18 [2];
  TRefCountPtr<IMFSample> local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined8 local_48;
  IMFSample *local_40;
  undefined8 local_38;
  IMFMediaBuffer *pIStack_30;
  
  if ((((this->OutputStreamInfo).dwFlags & 0x100) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(bFlag1 == false && bFlag2 == false) || (bFlag1 == false && bFlag2 == true)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Encoders\\WmfAudioEncoder.cpp"
                         ,0x169,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FIMFSampleWrapper *)(*pcVar3)();
    return pFVar7;
  }
  local_80.Reference = (IMFSample *)0x0;
  HVar5 = MFCreateSample((IMFSample **)&local_80);
  if (HVar5 < 0) {
    if (1 < (byte)LogAVEncoder._0_1_) {
      GetComErrorDescription(&local_78,HVar5);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->MediaType = Invalid;
    (__return_storage_ptr__->Sample).Reference = (IMFSample *)0x0;
  }
  else {
    uVar1 = (this->OutputStreamInfo).cbAlignment;
    local_res18[0] = (IMFMediaBuffer *)0x0;
    cbAligment = uVar1 - 1;
    if (uVar1 < 2) {
      cbAligment = 0;
    }
    HVar5 = MFCreateAlignedMemoryBuffer((this->OutputStreamInfo).cbSize,cbAligment,local_res18);
    if (HVar5 < 0) {
      if (1 < (byte)LogAVEncoder._0_1_) {
        GetComErrorDescription(&local_68,HVar5);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
LAB_148d0b9e2:
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
LAB_148d0b9ec:
      __return_storage_ptr__->MediaType = Invalid;
      (__return_storage_ptr__->Sample).Reference = (IMFSample *)0x0;
      if (local_res18[0] == (IMFMediaBuffer *)0x0) goto LAB_148d0bb5c;
      pIVar8 = local_res18[0]->lpVtbl;
      This = local_res18[0];
    }
    else {
      iVar6 = (**(code **)((longlong)*local_80.Reference + 0x150))
                        (local_80.Reference,local_res18[0]);
      if (iVar6 < 0) {
        if (1 < (byte)LogAVEncoder._0_1_) {
          GetComErrorDescription(&local_58,iVar6);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
          local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          goto LAB_148d0b9e2;
        }
        goto LAB_148d0b9ec;
      }
      if (local_res18[0] != (IMFMediaBuffer *)0x0) {
        (*local_res18[0]->lpVtbl->Release)(local_res18[0]);
      }
      pIVar2 = (this->Encoder).Reference;
      local_48 = 0;
      local_38 = 0;
      pIStack_30 = (IMFMediaBuffer *)0x0;
      local_40 = local_80.Reference;
      local_res8[0] = 0;
      iVar6 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2,0,1,&local_48,local_res8);
      This = pIStack_30;
      if (pIStack_30 != (IMFMediaBuffer *)0x0) {
        (*pIStack_30->lpVtbl->AddRef)(pIStack_30);
      }
      if ((iVar6 == -0x3ff2928e) || (local_80.Reference == (IMFSample *)0x0)) {
LAB_148d0bb40:
        __return_storage_ptr__->MediaType = Invalid;
        (__return_storage_ptr__->Sample).Reference = (IMFSample *)0x0;
      }
      else {
        if (iVar6 != -0x3ff2929f) {
          if (-1 < iVar6) {
            __return_storage_ptr__->MediaType = Audio;
            (__return_storage_ptr__->Sample).Reference = local_80.Reference;
            local_80.Reference = (IMFSample *)0x0;
            if (This != (IMFMediaBuffer *)0x0) {
              (*This->lpVtbl->Release)(This);
            }
            if (local_80.Reference == (IMFSample *)0x0) {
              return __return_storage_ptr__;
            }
            IVar9 = *local_80.Reference;
            goto LAB_148d0bb64;
          }
          goto LAB_148d0bb40;
        }
        bVar4 = SetOutputType(this);
        if (bVar4) {
          GetOutputSample(this,__return_storage_ptr__);
        }
        else {
          __return_storage_ptr__->MediaType = Invalid;
          (__return_storage_ptr__->Sample).Reference = (IMFSample *)0x0;
        }
      }
      if (This == (IMFMediaBuffer *)0x0) goto LAB_148d0bb5c;
      pIVar8 = This->lpVtbl;
    }
    (*pIVar8->Release)(This);
  }
LAB_148d0bb5c:
  if (local_80.Reference == (IMFSample *)0x0) {
    return __return_storage_ptr__;
  }
  IVar9 = *local_80.Reference;
LAB_148d0bb64:
  (**(code **)((longlong)IVar9 + 0x10))(local_80.Reference);
  return __return_storage_ptr__;
}

// GetType @ 148d0be90

wchar_t * __thiscall AVEncoder::FWmfAudioEncoder::GetType(FWmfAudioEncoder *this)

{
  if ((this->Type).Data.ArrayNum != 0) {
    return (wchar_t *)(this->Type).Data.AllocatorInstance.Data;
  }
  return L"";
}

// Initialize @ 148d0c0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AVEncoder::FWmfAudioEncoder::Initialize(FWmfAudioEncoder *this,FAudioConfig *param_1)

{
  FAudioConfig *pFVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType _Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForAnyElementType this_00;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  HRESULT HVar9;
  int iVar10;
  FString *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  _GUID *rclsid;
  int iVar15;
  IID *pIVar16;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined1 local_1d5;
  undefined1 local_1d4;
  undefined1 local_1d3 [3];
  FString local_1d0;
  uint local_1c0;
  ForAnyElementType local_1b8;
  uint local_1b0;
  int local_1ac;
  ForAnyElementType local_1a8;
  uint local_1a0;
  int local_19c;
  ForAnyElementType local_198;
  uint local_190;
  int local_18c;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  rclsid = (_GUID *)0x0;
  local_1c0 = 0;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  if (this->CodecType != AAC) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Encoders\\WmfAudioEncoder.cpp"
                       ,0x9b,L"");
    if (!bVar8) {
      return false;
    }
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Data.ArrayNum = 0;
  local_1d0.Data.ArrayMax = 0;
  local_58 = 96000;
  uStack_54 = 0x1f400;
  uStack_50 = 160000;
  uStack_4c = 0x2ee00;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_198,4,&local_18c);
  uVar5 = local_190;
  *(ulonglong *)local_198.Data = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(local_198.Data + 8) = CONCAT44(uStack_4c,uStack_50);
  uVar12 = (ulonglong)(int)local_190;
  uVar13 = param_1->Bitrate;
  pFVar2 = local_198.Data + uVar12 * 4;
  FVar14.Data = local_198.Data;
  while( true ) {
    if ((uint)uVar12 != uVar5) {
      local_1d8 = 0;
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1d8);
      uVar12 = (ulonglong)local_190;
    }
    iVar10 = 0;
    pIVar16 = (IID *)rclsid;
    if (FVar14.Data == pFVar2) {
      pFVar11 = ::FString::FString(&local_b8,L"AAC Bitrate");
      ::FString::ConcatFC(&local_158,pFVar11,L" must be (");
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      local_1d0.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
      local_1d0.Data.ArrayNum = local_158.Data.ArrayNum;
      local_1d0.Data.ArrayMax = local_158.Data.ArrayMax;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      uVar13 = local_190;
      uVar12 = (ulonglong)(int)local_190;
      pFVar2 = local_198.Data + uVar12 * 4;
      FVar14.Data = local_198.Data;
      while( true ) {
        if ((uint)uVar12 != uVar13) {
          local_1d3[0] = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1d3);
        }
        if (FVar14.Data == pFVar2) break;
        ::FString::PrintfImpl(&local_f8,L"%s%u");
        iVar15 = local_f8.Data.ArrayNum + -1;
        if (local_f8.Data.ArrayNum == 0) {
          iVar15 = iVar10;
        }
        ::FString::AppendChars(&local_1d0,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar15);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        uVar12 = (ulonglong)local_190;
        FVar14.Data = FVar14.Data + 4;
      }
      ::FString::PrintfImpl(&local_e8,L"). %u was specified.");
      iVar15 = local_e8.Data.ArrayNum + -1;
      if (local_e8.Data.ArrayNum == 0) {
        iVar15 = iVar10;
      }
      ::FString::AppendChars(&local_1d0,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar15);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      bVar8 = false;
      goto LAB_148d0c6c9;
    }
    if (uVar13 == *(uint *)FVar14.Data) break;
    FVar14.Data = FVar14.Data + 4;
  }
  bVar8 = true;
  local_78 = 0xac44;
  uStack_74 = 48000;
  uStack_70 = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_1a8,3,&local_19c);
  uVar5 = local_1a0;
  *(ulonglong *)local_1a8.Data = CONCAT44(uStack_74,local_78);
  *(uint *)(local_1a8.Data + 8) = uStack_70;
  uVar12 = (ulonglong)(int)local_1a0;
  uVar13 = *(uint *)(local_188.Data.AllocatorInstance.Data + 0x10);
  pFVar2 = local_1a8.Data + uVar12 * 4;
  FVar14.Data = local_1a8.Data;
  local_1c0 = uVar13;
  while( true ) {
    if ((uint)uVar12 != uVar5) {
      local_1d7 = 0;
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1d7);
      uVar12 = (ulonglong)local_1a0;
      uVar13 = local_1c0;
    }
    if (FVar14.Data == pFVar2) {
      pFVar11 = ::FString::FString(&local_c8,L"AAC Samplerate");
      ::FString::ConcatFC(&local_168,pFVar11,L" must be (");
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      local_1d0.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
      local_1d0.Data.ArrayNum = local_168.Data.ArrayNum;
      local_1d0.Data.ArrayMax = local_168.Data.ArrayMax;
      local_168.Data.ArrayNum = 0;
      local_168.Data.ArrayMax = 0;
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      uVar13 = local_1a0;
      uVar12 = (ulonglong)(int)local_1a0;
      pFVar2 = local_1a8.Data + uVar12 * 4;
      FVar14.Data = local_1a8.Data;
      while( true ) {
        if ((uint)uVar12 != uVar13) {
          local_1d4 = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1d4);
        }
        if (FVar14.Data == pFVar2) break;
        ::FString::PrintfImpl(&local_118,L"%s%u");
        iVar15 = local_118.Data.ArrayNum + -1;
        if (local_118.Data.ArrayNum == 0) {
          iVar15 = iVar10;
        }
        ::FString::AppendChars(&local_1d0,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar15);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        uVar12 = (ulonglong)local_1a0;
        FVar14.Data = FVar14.Data + 4;
      }
      ::FString::PrintfImpl(&local_108,L"). %u was specified.");
      iVar15 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar15 = iVar10;
      }
      ::FString::AppendChars(&local_1d0,(wchar_t *)local_108.Data.AllocatorInstance.Data,iVar15);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      goto LAB_148d0c6c9;
    }
    if (uVar13 == *(uint *)FVar14.Data) break;
    FVar14.Data = FVar14.Data + 4;
  }
  local_68 = 1;
  uStack_64 = 2;
  local_60 = 6;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_1b8,3,&local_1ac);
  uVar5 = local_1b0;
  *(ulonglong *)local_1b8.Data = CONCAT44(uStack_64,local_68);
  *(uint *)(local_1b8.Data + 8) = local_60;
  uVar12 = (ulonglong)(int)local_1b0;
  uVar13 = *(uint *)(local_188.Data.AllocatorInstance.Data + 0x14);
  pFVar2 = local_1b8.Data + uVar12 * 4;
  FVar14.Data = local_1b8.Data;
  do {
    if ((uint)uVar12 != uVar5) {
      local_1d6 = 0;
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1d6);
      uVar12 = (ulonglong)local_1b0;
    }
    if (FVar14.Data == pFVar2) {
      pFVar11 = ::FString::FString(&local_d8,L"AAC NumChannels");
      ::FString::ConcatFC(&local_178,pFVar11,L" must be (");
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      local_1d0.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
      local_1d0.Data.ArrayNum = local_178.Data.ArrayNum;
      local_1d0.Data.ArrayMax = local_178.Data.ArrayMax;
      local_178.Data.ArrayNum = 0;
      local_178.Data.ArrayMax = 0;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      uVar13 = local_1b0;
      uVar12 = (ulonglong)(int)local_1b0;
      pFVar2 = local_1b8.Data + uVar12 * 4;
      FVar14.Data = local_1b8.Data;
      while( true ) {
        if ((uint)uVar12 != uVar13) {
          local_1d5 = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1d5);
        }
        if (FVar14.Data == pFVar2) break;
        ::FString::PrintfImpl(&local_138,L"%s%u");
        iVar15 = local_138.Data.ArrayNum + -1;
        if (local_138.Data.ArrayNum == 0) {
          iVar15 = 0;
        }
        ::FString::AppendChars(&local_1d0,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar15);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        uVar12 = (ulonglong)local_1b0;
        FVar14.Data = FVar14.Data + 4;
      }
      ::FString::PrintfImpl(&local_128,L"). %u was specified.");
      iVar15 = local_128.Data.ArrayNum + -1;
      if (local_128.Data.ArrayNum == 0) {
        iVar15 = iVar10;
      }
      ::FString::AppendChars(&local_1d0,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar15);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      bVar8 = true;
      pIVar16 = (IID *)&DAT_00000004;
LAB_148d0c6c9:
      bVar4 = true;
      bVar6 = true;
      if ((int)pIVar16 != 0) goto LAB_148d0c6d0;
      goto LAB_148d0c6e3;
    }
    if (uVar13 == *(uint *)FVar14.Data) break;
    FVar14.Data = FVar14.Data + 4;
  } while( true );
  bVar8 = true;
  bVar6 = false;
LAB_148d0c6d0:
  bVar4 = bVar6;
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
LAB_148d0c6e3:
  if ((bVar8) && (local_1a8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1a8.Data);
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  if (bVar4) {
    if (1 < (byte)LogAVEncoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
    }
    if (local_1d0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    return false;
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  FVar14.Data = local_188.Data.AllocatorInstance.Data;
  if (4 < (byte)LogAVEncoder._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
  }
  this_00.Data = local_148.Data.AllocatorInstance.Data;
  pFVar1 = (FAudioConfig *)(local_148.Data.AllocatorInstance.Data + 0x68);
  if (pFVar1 != (FAudioConfig *)FVar14.Data) {
    iVar10 = *(int *)(FVar14.Data + 8);
    pFVar2 = local_148.Data.AllocatorInstance.Data + 0x74;
                    /* WARNING: Load size is inaccurate */
    _Src.Data = *FVar14.Data;
    *(int *)(local_148.Data.AllocatorInstance.Data + 0x70) = iVar10;
    if ((iVar10 == 0) && (*(int *)pFVar2 == 0)) {
      *(int *)pFVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,*(int *)pFVar2,(ForAnyElementType *)pFVar1,iVar10,(int *)pFVar2);
      if (iVar10 != 0) {
        memcpy((pFVar1->Codec).Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar10 * 2);
      }
    }
  }
  *(uint *)(this_00.Data + 0x78) = *(uint *)(FVar14.Data + 0x10);
  *(uint *)(this_00.Data + 0x7c) = *(uint *)(FVar14.Data + 0x14);
  *(uint *)(this_00.Data + 0x80) = *(uint *)(FVar14.Data + 0x18);
  if (*(ECodecType *)(this_00.Data + 0x40) == AAC) {
    rclsid = &CLSID_AACMFTEncoder;
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Encoders\\WmfAudioEncoder.cpp"
                       ,0xac,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  pFVar2 = this_00.Data + 0x88;
  HVar9 = CoCreateInstance((IID *)rclsid,(LPUNKNOWN)0x0,1,(IID *)&IID_IMFTransform,(LPVOID *)pFVar2)
  ;
  if (HVar9 < 0) {
    if ((byte)LogAVEncoder._0_1_ < 2) {
      return false;
    }
    GetComErrorDescription(&local_148,HVar9);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
    if ((FWmfAudioEncoder *)local_148.Data.AllocatorInstance.Data == (FWmfAudioEncoder *)0x0) {
      return false;
    }
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
    return false;
  }
  bVar8 = SetInputType((FWmfAudioEncoder *)this_00.Data);
  if ((bVar8) && (bVar8 = SetOutputType((FWmfAudioEncoder *)this_00.Data), bVar8)) {
    iVar10 = (**(code **)((longlong)**(IMFTransform **)pFVar2 + 0x30))
                       (*(IMFTransform **)pFVar2,0,this_00.Data + 0x98);
    if (iVar10 < 0) {
      if ((byte)LogAVEncoder._0_1_ < 2) goto LAB_148d0c93d;
      GetComErrorDescription(&local_188,iVar10);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
      local_88.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
    }
    else {
      iVar10 = (**(code **)((longlong)**(IMFTransform **)pFVar2 + 0x38))
                         (*(IMFTransform **)pFVar2,0,this_00.Data + 0xb0);
      if (iVar10 < 0) {
        if ((byte)LogAVEncoder._0_1_ < 2) goto LAB_148d0c93d;
        GetComErrorDescription(&local_a8,iVar10);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
        local_88.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      }
      else {
        iVar10 = (**(code **)((longlong)**(IMFTransform **)pFVar2 + 0xb8))
                           (*(IMFTransform **)pFVar2,0x10000000,0);
        if (iVar10 < 0) {
          if ((byte)LogAVEncoder._0_1_ < 2) goto LAB_148d0c93d;
          GetComErrorDescription(&local_98,iVar10);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
          local_88.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        }
        else {
          iVar10 = (**(code **)((longlong)**(IMFTransform **)pFVar2 + 0xb8))
                             (*(IMFTransform **)pFVar2,0x10000003,0);
          if (-1 < iVar10) {
            return true;
          }
          if ((byte)LogAVEncoder._0_1_ < 2) goto LAB_148d0c93d;
          GetComErrorDescription(&local_88,iVar10);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
        }
      }
    }
    if ((FAudioConfig *)local_88.Data.AllocatorInstance.Data != (FAudioConfig *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
LAB_148d0c93d:
  (**(code **)((longlong)**(IMFTransform **)(this_00.Data + 0x88) + 0x10))();
  return false;
}

// RetrieveStreamInfo @ 148d11fa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall AVEncoder::FWmfAudioEncoder::RetrieveStreamInfo(FWmfAudioEncoder *this)

{
  IMFTransform *pIVar1;
  int iVar2;
  FString *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  FString local_18;
  
  pIVar1 = (this->Encoder).Reference;
  iVar2 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,0,&this->InputStreamInfo);
  if (iVar2 < 0) {
    if ((byte)LogAVEncoder._0_1_ < 2) {
      return false;
    }
    pFVar3 = GetComErrorDescription(&local_18,iVar2);
    if ((pFVar3->Data).ArrayNum == 0) {
      pFVar4 = &::LOG_Static;
    }
    else {
      pFVar4 = &::LOG_Static;
    }
  }
  else {
    pIVar1 = (this->Encoder).Reference;
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,0,&this->OutputStreamInfo);
    if (-1 < iVar2) {
      return true;
    }
    if ((byte)LogAVEncoder._0_1_ < 2) {
      return false;
    }
    GetComErrorDescription(&local_18,iVar2);
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogAVEncoder);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// SetInputType @ 148d12160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall AVEncoder::FWmfAudioEncoder::SetInputType(FWmfAudioEncoder *this)

{
  IMFTransform *pIVar1;
  HRESULT HVar2;
  int iVar3;
  FString *pFVar4;
  FStaticBasicLogRecord *pFVar5;
  bool bVar6;
  IMFMediaType *local_res10 [3];
  FString local_18;
  
  local_res10[0] = (IMFMediaType *)0x0;
  HVar2 = MFCreateMediaType(local_res10);
  if (HVar2 < 0) {
    if (1 < (byte)LogAVEncoder._0_1_) {
      pFVar4 = GetComErrorDescription(&local_18,HVar2);
      if ((pFVar4->Data).ArrayNum == 0) {
        pFVar5 = &::LOG_Static;
      }
      else {
        pFVar5 = &::LOG_Static;
      }
LAB_148d123f4:
      UE::Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&LogAVEncoder);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    HVar2 = (*local_res10[0]->lpVtbl->SetGUID)
                      (local_res10[0],(GUID *)&MF_MT_MAJOR_TYPE,(GUID *)&MFMediaType_Audio);
    if (HVar2 < 0) {
      if (1 < (byte)LogAVEncoder._0_1_) {
        pFVar4 = GetComErrorDescription(&local_18,HVar2);
        if ((pFVar4->Data).ArrayNum == 0) {
          pFVar5 = &::LOG_Static;
        }
        else {
          pFVar5 = &::LOG_Static;
        }
        goto LAB_148d123f4;
      }
    }
    else {
      HVar2 = (*local_res10[0]->lpVtbl->SetGUID)
                        (local_res10[0],(GUID *)&MF_MT_SUBTYPE,(GUID *)&MFAudioFormat_PCM);
      if (HVar2 < 0) {
        if (1 < (byte)LogAVEncoder._0_1_) {
          pFVar4 = GetComErrorDescription(&local_18,HVar2);
          if ((pFVar4->Data).ArrayNum == 0) {
            pFVar5 = &::LOG_Static;
          }
          else {
            pFVar5 = &::LOG_Static;
          }
          goto LAB_148d123f4;
        }
      }
      else {
        HVar2 = (*local_res10[0]->lpVtbl->SetUINT32)
                          (local_res10[0],(GUID *)&MF_MT_AUDIO_BITS_PER_SAMPLE,0x10);
        if (HVar2 < 0) {
          if (1 < (byte)LogAVEncoder._0_1_) {
            pFVar4 = GetComErrorDescription(&local_18,HVar2);
            if ((pFVar4->Data).ArrayNum == 0) {
              pFVar5 = &::LOG_Static;
            }
            else {
              pFVar5 = &::LOG_Static;
            }
            goto LAB_148d123f4;
          }
        }
        else {
          HVar2 = (*local_res10[0]->lpVtbl->SetUINT32)
                            (local_res10[0],(GUID *)&MF_MT_AUDIO_SAMPLES_PER_SECOND,
                             (this->Config).Samplerate);
          if (HVar2 < 0) {
            if (1 < (byte)LogAVEncoder._0_1_) {
              pFVar4 = GetComErrorDescription(&local_18,HVar2);
              if ((pFVar4->Data).ArrayNum == 0) {
                pFVar5 = &::LOG_Static;
              }
              else {
                pFVar5 = &::LOG_Static;
              }
              goto LAB_148d123f4;
            }
          }
          else {
            HVar2 = (*local_res10[0]->lpVtbl->SetUINT32)
                              (local_res10[0],(GUID *)&MF_MT_AUDIO_NUM_CHANNELS,
                               (this->Config).NumChannels);
            if (HVar2 < 0) {
              if (1 < (byte)LogAVEncoder._0_1_) {
                pFVar4 = GetComErrorDescription(&local_18,HVar2);
                if ((pFVar4->Data).ArrayNum == 0) {
                  pFVar5 = &::LOG_Static;
                }
                else {
                  pFVar5 = &::LOG_Static;
                }
                goto LAB_148d123f4;
              }
            }
            else {
              pIVar1 = (this->Encoder).Reference;
              iVar3 = (**(code **)((longlong)*pIVar1 + 0x78))(pIVar1,0,local_res10[0],0);
              if (-1 < iVar3) {
                bVar6 = true;
                goto LAB_148d12418;
              }
              if (1 < (byte)LogAVEncoder._0_1_) {
                GetComErrorDescription(&local_18,iVar3);
                pFVar5 = (FStaticBasicLogRecord *)&PTR_u__Encoder_>SetIn_151ccaf80;
                goto LAB_148d123f4;
              }
            }
          }
        }
      }
    }
  }
  bVar6 = false;
LAB_148d12418:
  if (local_res10[0] != (IMFMediaType *)0x0) {
    (*local_res10[0]->lpVtbl->Release)(local_res10[0]);
  }
  return bVar6;
}

// SetOutputType @ 148d124b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall AVEncoder::FWmfAudioEncoder::SetOutputType(FWmfAudioEncoder *this)

{
  TRefCountPtr<IMFMediaType> *ppMFType;
  IMFMediaType *This;
  IMFTransform *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  HRESULT HVar5;
  int iVar6;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ppMFType = &this->OutputType;
  This = ppMFType->Reference;
  if (This != (IMFMediaType *)0x0) {
    ppMFType->Reference = (IMFMediaType *)0x0;
    (*(*(IMFMediaTypeVtbl **)This)->Release)((IMFMediaType *)This);
  }
  HVar5 = MFCreateMediaType((IMFMediaType **)ppMFType);
  if (HVar5 < 0) {
    if (1 < (byte)LogAVEncoder._0_1_) {
      GetComErrorDescription(&local_88,HVar5);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    HVar5 = (*(*(IMFMediaTypeVtbl **)ppMFType->Reference)->SetGUID)
                      ((IMFMediaType *)ppMFType->Reference,(GUID *)&MF_MT_MAJOR_TYPE,
                       (GUID *)&MFMediaType_Audio);
    if (HVar5 < 0) {
      if (1 < (byte)LogAVEncoder._0_1_) {
        GetComErrorDescription(&local_78,HVar5);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (this->CodecType == AAC) {
      HVar5 = (*(*(IMFMediaTypeVtbl **)ppMFType->Reference)->SetGUID)
                        ((IMFMediaType *)ppMFType->Reference,(GUID *)&MF_MT_SUBTYPE,
                         (GUID *)&MFAudioFormat_AAC);
      if (HVar5 < 0) {
        if (1 < (byte)LogAVEncoder._0_1_) {
          GetComErrorDescription(&local_68,HVar5);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        HVar5 = (*(*(IMFMediaTypeVtbl **)ppMFType->Reference)->SetUINT32)
                          ((IMFMediaType *)ppMFType->Reference,(GUID *)&MF_MT_AUDIO_BITS_PER_SAMPLE,
                           0x10);
        if (HVar5 < 0) {
          if (1 < (byte)LogAVEncoder._0_1_) {
            GetComErrorDescription(&local_58,HVar5);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          HVar5 = (*(*(IMFMediaTypeVtbl **)ppMFType->Reference)->SetUINT32)
                            ((IMFMediaType *)ppMFType->Reference,
                             (GUID *)&MF_MT_AUDIO_SAMPLES_PER_SECOND,(this->Config).Samplerate);
          if (HVar5 < 0) {
            if (1 < (byte)LogAVEncoder._0_1_) {
              GetComErrorDescription(&local_48,HVar5);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            HVar5 = (*(*(IMFMediaTypeVtbl **)ppMFType->Reference)->SetUINT32)
                              ((IMFMediaType *)ppMFType->Reference,(GUID *)&MF_MT_AUDIO_NUM_CHANNELS
                               ,(this->Config).NumChannels);
            if (HVar5 < 0) {
              if (1 < (byte)LogAVEncoder._0_1_) {
                GetComErrorDescription(&local_38,HVar5);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder);
                if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_38.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              HVar5 = (*(*(IMFMediaTypeVtbl **)ppMFType->Reference)->SetUINT32)
                                ((IMFMediaType *)ppMFType->Reference,
                                 (GUID *)&MF_MT_AUDIO_AVG_BYTES_PER_SECOND,
                                 (this->Config).Bitrate >> 3);
              if (HVar5 < 0) {
                if (1 < (byte)LogAVEncoder._0_1_) {
                  GetComErrorDescription(&local_28,HVar5);
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)&PTR_u__OutputType_>Se_151ccb4c0,
                             (FLogCategoryBase *)&LogAVEncoder);
                  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_28.Data.AllocatorInstance.Data);
                  }
                }
              }
              else {
                pIVar1 = (this->Encoder).Reference;
                iVar6 = (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,0,ppMFType->Reference,0);
                if (-1 < iVar6) {
                  return true;
                }
                if (1 < (byte)LogAVEncoder._0_1_) {
                  GetComErrorDescription(&local_18,iVar6);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAVEncoder)
                  ;
                  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_18.Data.AllocatorInstance.Data);
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\Encoders\\WmfAudioEncoder.cpp"
                         ,0xe4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  return false;
}

// Shutdown @ 148d14b00

void __thiscall AVEncoder::FWmfAudioEncoder::Shutdown(FWmfAudioEncoder *this)

{
  return;
}

// StartStreaming @ 148d14d40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall AVEncoder::FWmfAudioEncoder::StartStreaming(FWmfAudioEncoder *this)

{
  IMFTransform *pIVar1;
  int iVar2;
  FString *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  FString local_18;
  
  pIVar1 = (this->Encoder).Reference;
  iVar2 = (**(code **)((longlong)*pIVar1 + 0xb8))(pIVar1,0x10000000,0);
  if (iVar2 < 0) {
    if ((byte)LogAVEncoder._0_1_ < 2) {
      return false;
    }
    pFVar3 = GetComErrorDescription(&local_18,iVar2);
    if ((pFVar3->Data).ArrayNum == 0) {
      pFVar4 = &::LOG_Static;
    }
    else {
      pFVar4 = &::LOG_Static;
    }
  }
  else {
    pIVar1 = (this->Encoder).Reference;
    iVar2 = (**(code **)((longlong)*pIVar1 + 0xb8))(pIVar1,0x10000003,0);
    if (-1 < iVar2) {
      return true;
    }
    if ((byte)LogAVEncoder._0_1_ < 2) {
      return false;
    }
    GetComErrorDescription(&local_18,iVar2);
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogAVEncoder);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

