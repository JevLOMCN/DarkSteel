// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 15

// FTestVoice @ 14ecd8c60

FTestVoice * __thiscall FTestVoice::FTestVoice(FTestVoice *this)

{
  EAudioEncodeHint EVar1;
  int iVar2;
  FTSTicker *pFVar3;
  
  pFVar3 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,pFVar3);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FTSTickerObjectBase__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->VoiceComp = (UAudioComponent *)0x0;
  this->SoundStreaming = (USoundWaveProcedural *)0x0;
  (this->VoiceCapture).Object = (IVoiceCapture *)0x0;
  (this->VoiceCapture).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->VoiceEncoder).Object = (IVoiceEncoder *)0x0;
  (this->VoiceEncoder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->VoiceDecoder).Object = (IVoiceDecoder *)0x0;
  (this->VoiceDecoder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->DeviceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceName).Data.ArrayNum = 0;
  (this->DeviceName).Data.ArrayMax = 0;
  EVar1 = UVOIPStatics::GetAudioEncodingHint();
  this->EncodeHint = EVar1;
  iVar2 = UVOIPStatics::GetVoiceSampleRate();
  this->InputSampleRate = iVar2;
  iVar2 = UVOIPStatics::GetVoiceSampleRate();
  this->OutputSampleRate = iVar2;
  iVar2 = UVOIPStatics::GetVoiceNumChannels();
  this->NumInChannels = iVar2;
  iVar2 = UVOIPStatics::GetVoiceNumChannels();
  this->NumOutChannels = iVar2;
  this->bLastWasPlaying = false;
  this->StarvedDataCount = 0;
  (this->RawCaptureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawCaptureData).ArrayNum = 0;
  (this->RawCaptureData).ArrayMax = 0;
  this->MaxRawCaptureDataSize = 0;
  (this->CompressedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedData).ArrayNum = 0;
  (this->CompressedData).ArrayMax = 0;
  this->MaxCompressedDataSize = 0;
  (this->UncompressedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UncompressedData).ArrayNum = 0;
  (this->UncompressedData).ArrayMax = 0;
  this->MaxUncompressedDataSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->QueueLock,4000);
  (this->UncompressedDataQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UncompressedDataQueue).ArrayNum = 0;
  (this->UncompressedDataQueue).ArrayMax = 0;
  this->CurrentUncompressedDataQueueSize = 0;
  this->MaxUncompressedDataQueueSize = 0;
  (this->Remainder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Remainder).ArrayNum = 0;
  (this->Remainder).ArrayMax = 0;
  this->MaxRemainderSize = 0;
  this->LastRemainderSize = 0;
  this->CachedSampleCount = 0;
  this->bUseTestSample = false;
  this->bZeroInput = false;
  this->bUseDecompressed = true;
  this->bZeroOutput = false;
  return this;
}

// ~FTestVoice @ 14ecdb8b0

void __thiscall FTestVoice::~FTestVoice(FTestVoice *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FTSTickerObjectBase__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  Shutdown(this);
  pFVar1 = (this->Remainder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UncompressedDataQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueueLock);
  pFVar1 = (this->UncompressedData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompressedData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RawCaptureData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceDecoder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceEncoder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceCapture).SharedReferenceCount.ReferenceController);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// CleanupAudioComponent @ 14ecddf40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FTestVoice::CleanupAudioComponent(FTestVoice *this)

{
  FUObjectItem *this_00;
  
  if (this->VoiceComp != (UAudioComponent *)0x0) {
    (**(code **)(*(longlong *)this->VoiceComp + 0x668))();
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &this->SoundStreaming->OnSoundWaveProceduralUnderflow);
    this->SoundStreaming = (USoundWaveProcedural *)0x0;
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->VoiceComp->field_0xc);
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    this->VoiceComp = (UAudioComponent *)0x0;
    this->bLastWasPlaying = false;
  }
  return;
}

// CleanupQueue @ 14ecddfb0

void __thiscall FTestVoice::CleanupQueue(FTestVoice *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->QueueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->UncompressedDataQueue).ArrayNum = 0;
    if ((this->UncompressedDataQueue).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->UncompressedDataQueue).AllocatorInstance,0,
                 &(this->UncompressedDataQueue).ArrayMax);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ecde010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CleanupVoice @ 14ecde1f0

void __thiscall FTestVoice::CleanupVoice(FTestVoice *this)

{
  TSharedPtr<IVoiceCapture,1> *pTVar1;
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->VoiceCapture;
  if (pTVar1->Object != (IVoiceCapture *)0x0) {
    (**(code **)(pTVar1->Object->_padding_ + 0x10))();
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<IVoiceCapture,1> *)&local_38) {
      pTVar1->Object = (IVoiceCapture *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VoiceCapture).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->VoiceEncoder != (TSharedPtr<IVoiceEncoder,1> *)&local_28) {
    (this->VoiceEncoder).Object = (IVoiceEncoder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceEncoder).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->VoiceDecoder != (TSharedPtr<IVoiceDecoder,1> *)&local_18) {
    (this->VoiceDecoder).Object = (IVoiceDecoder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceDecoder).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Exec_Runtime @ 14ece4100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FTestVoice::Exec_Runtime(FTestVoice *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  byte extraout_AL;
  int iVar7;
  IVoiceCapture *pIVar8;
  IVoiceDecoder *pIVar9;
  FString *pFVar10;
  IVoiceEncoder *pIVar11;
  int *piVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  wchar_t *local_res18 [2];
  bool local_d8 [8];
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  int iVar6;
  
  bVar14 = false;
  local_res18[0] = param_2;
  bVar3 = FParse::Command(local_res18,L"killtestvoice",true);
  if (bVar3) {
    piVar12 = &this[-1].MaxRemainderSize;
    if (piVar12 != (int *)0x0) {
      (*(code *)**(undefined8 **)piVar12)(piVar12,1);
      return true;
    }
  }
  else {
    bVar3 = FParse::Command(local_res18,L"vcstart",true);
    if (bVar3) {
      if (((longlong *)this->_padding_ != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x30))(), cVar4 == '\0')) {
        if ((this->_padding_ == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        (**(code **)(*(longlong *)this->_padding_ + 0x18))();
        return true;
      }
    }
    else {
      bVar3 = FParse::Command(local_res18,L"vcstop",true);
      if (!bVar3) {
        bVar3 = FParse::Command(local_res18,L"vchint",true);
        if (bVar3) {
          FParse::Token(&local_c0,local_res18,false);
          if (1 < local_c0.Data.ArrayNum) {
            iVar6 = _wtoi((wchar_t *)local_c0.Data.AllocatorInstance.Data);
            extraout_AL = (byte)iVar6;
            if ((extraout_AL < 2) &&
               (*(byte *)&(this->VoiceDecoder).SharedReferenceCount.ReferenceController !=
                extraout_AL)) {
              *(byte *)&(this->VoiceDecoder).SharedReferenceCount.ReferenceController = extraout_AL;
              CleanupAudioComponent((FTestVoice *)&this[-1].MaxRemainderSize);
              CleanupQueue((FTestVoice *)&this[-1].MaxRemainderSize);
              TSharedPtr<IVoiceEncoder,1>::operator=
                        ((TSharedPtr<IVoiceEncoder,1> *)&this->SoundStreaming,(FNullTag *)0x0);
              InitVoiceEncoder((FTestVoice *)&this[-1].MaxRemainderSize);
              pIVar9 = TSharedPtr<IVoiceDecoder,1>::operator->
                                 ((TSharedPtr<IVoiceDecoder,1> *)
                                  &(this->VoiceCapture).SharedReferenceCount);
              (**(code **)(*(longlong *)pIVar9 + 0x18))(pIVar9);
            }
          }
          bVar14 = true;
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            return true;
          }
        }
        else {
          bVar3 = FParse::Command(local_res18,L"vcdevice",true);
          if (bVar3) {
            FParse::Token(&local_d0,local_res18,false);
            if (1 < local_d0.Data.ArrayNum) {
              local_d8[0] = false;
              pFVar10 = ::FString::TrimQuotes(&local_d0,&local_30,local_d8);
              if (&local_d0 != pFVar10) {
                if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                }
                local_d0.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
                (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_d0.Data.ArrayNum = (pFVar10->Data).ArrayNum;
                local_d0.Data.ArrayMax = (pFVar10->Data).ArrayMax;
                (pFVar10->Data).ArrayNum = 0;
                (pFVar10->Data).ArrayMax = 0;
              }
              if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_30.Data.AllocatorInstance.Data);
              }
              if (this->_padding_ != 0) {
                pIVar8 = TSharedPtr<IVoiceCapture,1>::operator->
                                   ((TSharedPtr<IVoiceCapture,1> *)&this->_padding_);
                cVar4 = (**(code **)(pIVar8->_padding_ + 0x28))
                                  (pIVar8,&local_d0,
                                   *(undefined4 *)
                                    ((longlong)
                                     &(this->VoiceDecoder).SharedReferenceCount.ReferenceController
                                    + 4),*(undefined4 *)
                                          ((longlong)&(this->DeviceName).Data.AllocatorInstance.Data
                                          + 4));
                if (cVar4 == '\0') {
                  if (2 < (byte)LogVoice._0_1_) {
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
                  }
                }
                else {
                  iVar6 = local_d0.Data.ArrayNum + -1;
                  if (local_d0.Data.ArrayNum == 0) {
                    iVar6 = 0;
                  }
                  ::FString::AssignRange
                            ((FString *)&(this->VoiceEncoder).SharedReferenceCount,
                             (wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar6);
                  CleanupAudioComponent((FTestVoice *)&this[-1].MaxRemainderSize);
                  CleanupQueue((FTestVoice *)&this[-1].MaxRemainderSize);
                  pIVar11 = TSharedPtr<IVoiceEncoder,1>::operator->
                                      ((TSharedPtr<IVoiceEncoder,1> *)&this->SoundStreaming);
                  (**(code **)(*(longlong *)pIVar11 + 0x30))(pIVar11);
                  pIVar9 = TSharedPtr<IVoiceDecoder,1>::operator->
                                     ((TSharedPtr<IVoiceDecoder,1> *)
                                      &(this->VoiceCapture).SharedReferenceCount);
                  (**(code **)(*(longlong *)pIVar9 + 0x18))(pIVar9);
                  pIVar8 = TSharedPtr<IVoiceCapture,1>::operator->
                                     ((TSharedPtr<IVoiceCapture,1> *)&this->_padding_);
                  (**(code **)(pIVar8->_padding_ + 0x18))(pIVar8);
                }
              }
            }
            bVar14 = true;
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
          }
          else {
            bVar3 = FParse::Command(local_res18,L"vcin",true);
            if (bVar3) {
              FParse::Token(&local_a0,local_res18,false);
              if (local_a0.Data.ArrayNum < 2) {
                iVar6 = *(int *)((longlong)
                                 &(this->VoiceDecoder).SharedReferenceCount.ReferenceController + 4)
                ;
              }
              else {
                iVar6 = _wtoi((wchar_t *)local_a0.Data.AllocatorInstance.Data);
              }
              FParse::Token(&local_b0,local_res18,false);
              if (local_b0.Data.ArrayNum < 2) {
                iVar7 = *(int *)((longlong)&(this->DeviceName).Data.AllocatorInstance.Data + 4);
              }
              else {
                iVar7 = _wtoi((wchar_t *)local_b0.Data.AllocatorInstance.Data);
              }
              piVar12 = (int *)((longlong)&(this->DeviceName).Data.AllocatorInstance.Data + 4);
              if ((iVar6 != *(int *)((longlong)
                                     &(this->VoiceDecoder).SharedReferenceCount.ReferenceController
                                    + 4)) || (iVar7 != *piVar12)) {
                lVar1 = this->_padding_;
                *(int *)((longlong)&(this->VoiceDecoder).SharedReferenceCount.ReferenceController +
                        4) = iVar6;
                *piVar12 = iVar7;
                if (lVar1 != 0) {
                  pIVar8 = TSharedPtr<IVoiceCapture,1>::operator->
                                     ((TSharedPtr<IVoiceCapture,1> *)&this->_padding_);
                  (**(code **)(pIVar8->_padding_ + 0x10))(pIVar8);
                  TSharedPtr<IVoiceCapture,1>::operator=
                            ((TSharedPtr<IVoiceCapture,1> *)&this->_padding_,(FNullTag *)0x0);
                }
                InitVoiceCapture((FTestVoice *)&this[-1].MaxRemainderSize);
                TSharedPtr<IVoiceEncoder,1>::operator=
                          ((TSharedPtr<IVoiceEncoder,1> *)&this->SoundStreaming,(FNullTag *)0x0);
                InitVoiceEncoder((FTestVoice *)&this[-1].MaxRemainderSize);
              }
              bVar14 = true;
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
            }
            else {
              bVar3 = FParse::Command(local_res18,L"vcout",true);
              if (bVar3) {
                FParse::Token(&local_80,local_res18,false);
                if (local_80.Data.ArrayNum < 2) {
                  iVar6 = *(int *)&(this->DeviceName).Data.AllocatorInstance.Data;
                }
                else {
                  iVar6 = _wtoi((wchar_t *)local_80.Data.AllocatorInstance.Data);
                }
                FParse::Token(&local_90,local_res18,false);
                if (local_90.Data.ArrayNum < 2) {
                  iVar7 = (this->DeviceName).Data.ArrayNum;
                }
                else {
                  iVar7 = _wtoi((wchar_t *)local_90.Data.AllocatorInstance.Data);
                }
                piVar12 = &(this->DeviceName).Data.ArrayNum;
                if ((iVar6 != *(int *)&(this->DeviceName).Data.AllocatorInstance.Data) ||
                   (iVar7 != *piVar12)) {
                  *piVar12 = iVar7;
                  *(int *)&(this->DeviceName).Data.AllocatorInstance.Data = iVar6;
                  TSharedPtr<IVoiceDecoder,1>::operator=
                            ((TSharedPtr<IVoiceDecoder,1> *)
                             &(this->VoiceCapture).SharedReferenceCount,(FNullTag *)0x0);
                  InitVoiceDecoder((FTestVoice *)&this[-1].MaxRemainderSize);
                  CleanupAudioComponent((FTestVoice *)&this[-1].MaxRemainderSize);
                }
                bVar14 = true;
                if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_90.Data.AllocatorInstance.Data);
                }
                if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_80.Data.AllocatorInstance.Data);
                }
              }
              else {
                bVar3 = FParse::Command(local_res18,L"vcvbr",true);
                if (bVar3) {
                  FParse::Token(&local_70,local_res18,false);
                  FVar13.Data = (FScriptContainerElement *)L"";
                  if (local_70.Data.ArrayNum != 0) {
                    FVar13.Data = local_70.Data.AllocatorInstance.Data;
                  }
                  iVar6 = _wtoi((wchar_t *)FVar13.Data);
                  if (this->SoundStreaming != (USoundWaveProcedural *)0x0) {
                    pIVar11 = TSharedPtr<IVoiceEncoder,1>::operator->
                                        ((TSharedPtr<IVoiceEncoder,1> *)&this->SoundStreaming);
                    cVar4 = (**(code **)(*(longlong *)pIVar11 + 0x20))(pIVar11,iVar6 != 0);
                    if ((cVar4 == '\0') && (2 < (byte)LogVoice._0_1_)) {
                      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoice)
                      ;
                    }
                  }
                  bVar14 = true;
                  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_70.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  bVar3 = FParse::Command(local_res18,L"vcbitrate",true);
                  if (bVar3) {
                    FParse::Token(&local_60,local_res18,false);
                    if (local_60.Data.ArrayNum < 2) {
                      iVar6 = 0;
                    }
                    else {
                      iVar6 = _wtoi((wchar_t *)local_60.Data.AllocatorInstance.Data);
                    }
                    if ((this->SoundStreaming != (USoundWaveProcedural *)0x0) && (0 < iVar6)) {
                      pIVar11 = TSharedPtr<IVoiceEncoder,1>::operator->
                                          ((TSharedPtr<IVoiceEncoder,1> *)&this->SoundStreaming);
                      cVar4 = (**(code **)(*(longlong *)pIVar11 + 0x18))(pIVar11,iVar6);
                      if ((cVar4 == '\0') && (2 < (byte)LogVoice._0_1_)) {
                        UE::Logging::Private::BasicLog<3>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogVoice);
                      }
                    }
                    bVar14 = true;
                    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_60.Data.AllocatorInstance.Data);
                    }
                  }
                  else {
                    bVar3 = FParse::Command(local_res18,L"vccomplexity",true);
                    if (bVar3) {
                      FParse::Token(&local_50,local_res18,false);
                      if (local_50.Data.ArrayNum < 2) {
                        iVar6 = -1;
                      }
                      else {
                        iVar6 = _wtoi((wchar_t *)local_50.Data.AllocatorInstance.Data);
                      }
                      if ((this->SoundStreaming != (USoundWaveProcedural *)0x0) && (-1 < iVar6)) {
                        pIVar11 = TSharedPtr<IVoiceEncoder,1>::operator->
                                            ((TSharedPtr<IVoiceEncoder,1> *)&this->SoundStreaming);
                        cVar4 = (**(code **)(*(longlong *)pIVar11 + 0x28))(pIVar11,iVar6);
                        if ((cVar4 == '\0') && (2 < (byte)LogVoice._0_1_)) {
                          UE::Logging::Private::BasicLog<3>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogVoice);
                        }
                      }
                      bVar14 = true;
                      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_50.Data.AllocatorInstance.Data);
                      }
                    }
                    else {
                      bVar3 = FParse::Command(local_res18,L"vcdecompress",true);
                      if (bVar3) {
                        FParse::Token(&local_40,local_res18,false);
                        FVar13.Data = (FScriptContainerElement *)L"";
                        if (local_40.Data.ArrayNum != 0) {
                          FVar13.Data = local_40.Data.AllocatorInstance.Data;
                        }
                        iVar6 = _wtoi((wchar_t *)FVar13.Data);
                        bVar14 = true;
                        *(bool *)((longlong)&(this->Remainder).ArrayNum + 2) = iVar6 != 0;
                        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_40.Data.AllocatorInstance.Data);
                        }
                      }
                      else {
                        bVar3 = FParse::Command(local_res18,L"vcdump",true);
                        if (bVar3) {
                          if (this->_padding_ != 0) {
                            pIVar8 = TSharedPtr<IVoiceCapture,1>::operator->
                                               ((TSharedPtr<IVoiceCapture,1> *)&this->_padding_);
                            (**(code **)(pIVar8->_padding_ + 0x58))(pIVar8);
                          }
                          if (this->SoundStreaming != (USoundWaveProcedural *)0x0) {
                            pIVar11 = TSharedPtr<IVoiceEncoder,1>::operator->
                                                ((TSharedPtr<IVoiceEncoder,1> *)
                                                 &this->SoundStreaming);
                            (**(code **)(*(longlong *)pIVar11 + 0x40))(pIVar11);
                          }
                          if ((this->VoiceCapture).SharedReferenceCount.ReferenceController !=
                              (TReferenceControllerBase<1> *)0x0) {
                            pIVar9 = TSharedPtr<IVoiceDecoder,1>::operator->
                                               ((TSharedPtr<IVoiceDecoder,1> *)
                                                &(this->VoiceCapture).SharedReferenceCount);
                            (**(code **)(*(longlong *)pIVar9 + 0x28))(pIVar9);
                          }
                          bVar14 = true;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return bVar14;
      }
      if (((longlong *)this->_padding_ != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x30))(), cVar4 != '\0')) {
        pIVar8 = TSharedPtr<IVoiceCapture,1>::operator->
                           ((TSharedPtr<IVoiceCapture,1> *)&this->_padding_);
        (**(code **)(pIVar8->_padding_ + 0x20))(pIVar8);
      }
    }
  }
  return true;
}

// GenerateData @ 14ece7190

void __thiscall FTestVoice::GenerateData(FTestVoice *this,USoundWaveProcedural *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  lpCriticalSection = &this->QueueLock;
  iVar6 = this->NumOutChannels * 2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar4 = (this->UncompressedDataQueue).ArrayNum;
  this->CurrentUncompressedDataQueueSize = iVar4;
  iVar4 = iVar4 / iVar6;
  if (param_2 <= iVar4) {
    uVar7 = iVar4 * iVar6;
    USoundWaveProcedural::QueueAudio
              (param_1,(uchar *)(this->UncompressedDataQueue).AllocatorInstance.Data,uVar7);
    uVar5 = 0;
    if ((int)uVar7 <= (this->UncompressedDataQueue).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (uVar7 != 0) {
      _Dst = (this->UncompressedDataQueue).AllocatorInstance.Data;
      iVar6 = (this->UncompressedDataQueue).ArrayNum - uVar7;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (int)uVar7,(longlong)iVar6);
      }
      piVar1 = &(this->UncompressedDataQueue).ArrayNum;
      *piVar1 = *piVar1 - uVar7;
    }
    this->CurrentUncompressedDataQueueSize = this->CurrentUncompressedDataQueueSize - uVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00014ece72a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Init @ 14ece9ba0

bool __thiscall FTestVoice::Init(FTestVoice *this)

{
  ::FString::operator=(&this->DeviceName,L"Line 1 (Virtual Audio Cable)");
  this->EncodeHint = VoiceEncode_Audio;
  this->InputSampleRate = 48000;
  this->OutputSampleRate = 48000;
  this->NumInChannels = 2;
  this->NumOutChannels = 2;
  InitVoiceCapture(this);
  InitVoiceEncoder(this);
  InitVoiceDecoder(this);
  return true;
}

// InitVoiceCapture @ 14ece9e60

void __thiscall FTestVoice::InitVoiceCapture(FTestVoice *this)

{
  TSharedPtr<IVoiceCapture,1> *pTVar1;
  int *piVar2;
  int *piVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  IModuleInterface *pIVar9;
  undefined8 *puVar10;
  FName local_res8;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pTVar1 = &this->VoiceCapture;
  if ((this->VoiceCapture).Object != (IVoiceCapture *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4308860651914133582>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                       ,0x4e,"!VoiceCapture.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = ::FName::FName(&local_res8,"Voice");
  FVar4 = *pFVar8;
  this_00 = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModuleChecked(this_00,FVar4);
  puVar10 = (undefined8 *)
            (**(code **)((longlong)*pIVar9 + 0x40))
                      (pIVar9,local_28,&this->DeviceName,this->InputSampleRate,this->NumInChannels);
  if (pTVar1 != (TSharedPtr<IVoiceCapture,1> *)puVar10) {
    pTVar1->Object = (IVoiceCapture *)*puVar10;
    *puVar10 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceCapture).SharedReferenceCount,(FSharedReferencer<1> *)(puVar10 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if (pTVar1->Object != (IVoiceCapture *)0x0) {
    uVar7 = (**(code **)(pTVar1->Object->_padding_ + 0x50))();
    this->MaxRawCaptureDataSize = uVar7;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    piVar2 = &(this->RawCaptureData).ArrayMax;
    piVar3 = &(this->RawCaptureData).ArrayNum;
    *piVar3 = 0;
    if (*piVar2 != uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar7,&(this->RawCaptureData).AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,this->MaxRawCaptureDataSize,&(this->RawCaptureData).AllocatorInstance,piVar3,
               piVar2);
    if (pTVar1->Object == (IVoiceCapture *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(pTVar1->Object->_padding_ + 0x18))();
  }
  return;
}

// InitVoiceDecoder @ 14ecea000

void __thiscall FTestVoice::InitVoiceDecoder(FTestVoice *this)

{
  TSharedPtr<IVoiceDecoder,1> *pTVar1;
  int *piVar2;
  int *piVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  IModuleInterface *pIVar9;
  undefined8 *puVar10;
  FName local_res8;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pTVar1 = &this->VoiceDecoder;
  if (((this->VoiceDecoder).Object != (IVoiceDecoder *)0x0) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4308860651914133615>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                         ,0x6f,"!VoiceDecoder.IsValid()"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->VoiceCapture).Object != (IVoiceCapture *)0x0) {
    pFVar8 = ::FName::FName(&local_res8,"Voice");
    FVar5 = *pFVar8;
    this_00 = FModuleManager::Get();
    pIVar9 = FModuleManager::LoadModuleChecked(this_00,FVar5);
    puVar10 = (undefined8 *)
              (**(code **)((longlong)*pIVar9 + 0x50))
                        (pIVar9,local_28,this->OutputSampleRate,this->NumOutChannels);
    if (pTVar1 != (TSharedPtr<IVoiceDecoder,1> *)puVar10) {
      pTVar1->Object = (IVoiceDecoder *)*puVar10;
      *puVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VoiceDecoder).SharedReferenceCount,(FSharedReferencer<1> *)(puVar10 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if (pTVar1->Object != (IVoiceDecoder *)0x0) {
      uVar4 = this->NumOutChannels * this->OutputSampleRate * 2;
      this->MaxUncompressedDataSize = uVar4;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      piVar2 = &(this->UncompressedData).ArrayMax;
      piVar3 = &(this->UncompressedData).ArrayNum;
      *piVar3 = 0;
      if (*piVar2 != uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar4,&(this->UncompressedData).AllocatorInstance,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,this->MaxUncompressedDataSize,&(this->UncompressedData).AllocatorInstance,
                 piVar3,piVar2);
      lpCriticalSection = &this->QueueLock;
      this->MaxUncompressedDataQueueSize = this->MaxUncompressedDataSize * 5;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar4 = this->MaxUncompressedDataQueueSize;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      piVar2 = &(this->UncompressedDataQueue).ArrayMax;
      (this->UncompressedDataQueue).ArrayNum = 0;
      if (*piVar2 != uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar4,&(this->UncompressedDataQueue).AllocatorInstance,0,piVar2);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// InitVoiceEncoder @ 14ecea1e0

void __thiscall FTestVoice::InitVoiceEncoder(FTestVoice *this)

{
  TSharedPtr<IVoiceEncoder,1> *pTVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  IModuleInterface *pIVar9;
  undefined8 *puVar10;
  FName local_res8;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pTVar1 = &this->VoiceEncoder;
  if ((this->VoiceEncoder).Object != (IVoiceEncoder *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4308860651914133597>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                       ,0x5d,"!VoiceEncoder.IsValid()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar8 = ::FName::FName(&local_res8,"Voice");
  FVar5 = *pFVar8;
  this_00 = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModuleChecked(this_00,FVar5);
  puVar10 = (undefined8 *)
            (**(code **)((longlong)*pIVar9 + 0x48))
                      (pIVar9,local_28,this->InputSampleRate,this->NumInChannels,this->EncodeHint);
  if (pTVar1 != (TSharedPtr<IVoiceEncoder,1> *)puVar10) {
    pTVar1->Object = (IVoiceEncoder *)*puVar10;
    *puVar10 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VoiceEncoder).SharedReferenceCount,(FSharedReferencer<1> *)(puVar10 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if (pTVar1->Object != (IVoiceEncoder *)0x0) {
    this->MaxRemainderSize = 0x400;
    this->LastRemainderSize = 0;
    piVar2 = &(this->CompressedData).ArrayMax;
    this->MaxCompressedDataSize = 0x5000;
    piVar3 = &(this->CompressedData).ArrayNum;
    *piVar3 = 0;
    if (*piVar2 != 0x5000) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0x5000,&(this->CompressedData).AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,this->MaxCompressedDataSize,&(this->CompressedData).AllocatorInstance,piVar3,
               piVar2);
    uVar4 = this->MaxRemainderSize;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar2 = &(this->Remainder).ArrayMax;
    piVar3 = &(this->Remainder).ArrayNum;
    *piVar3 = 0;
    if (*piVar2 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar4,&(this->Remainder).AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,this->MaxRemainderSize,&(this->Remainder).AllocatorInstance,piVar3,piVar2);
  }
  return;
}

// SetStaticVoiceData @ 14ecf9d00

void __thiscall
FTestVoice::SetStaticVoiceData
          (FTestVoice *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,uint *param_2
          )

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  dVar3 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if ((LastQueueTime <= 0.0) || (dVar3 - LastQueueTime <= __real_4000000000000000)) {
    if (bTimeToQueue == false) {
      return;
    }
  }
  else {
    bTimeToQueue = true;
  }
  *param_2 = 64000;
  piVar1 = &param_1->ArrayNum;
  *piVar1 = 0;
  if (param_1->ArrayMax != 64000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,64000,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,*param_2,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  if ((*piVar1 < 64000) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceData.Num() >= (int32)((sizeof(UEArrayCountHelper(RawVoiceTestData)) - 1))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                         ,200,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  memcpy((param_1->AllocatorInstance).Data,RawVoiceTestData,64000);
  LastQueueTime = dVar3;
  bTimeToQueue = false;
  return;
}

// Shutdown @ 14ecfa1a0

void __thiscall FTestVoice::Shutdown(FTestVoice *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  IVoiceCapture *pIVar2;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  piVar1 = &(this->RawCaptureData).ArrayMax;
  (this->RawCaptureData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->RawCaptureData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->CompressedData).ArrayMax;
  (this->CompressedData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->CompressedData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UncompressedData).ArrayMax;
  (this->UncompressedData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->UncompressedData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Remainder).ArrayMax;
  (this->Remainder).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Remainder).AllocatorInstance,0,piVar1);
  }
  lpCriticalSection = &this->QueueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &(this->UncompressedDataQueue).ArrayMax;
    (this->UncompressedDataQueue).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->UncompressedDataQueue).AllocatorInstance,0,piVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar2 = (this->VoiceCapture).Object;
    if (pIVar2 != (IVoiceCapture *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x10))();
      local_38 = 0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->VoiceCapture != (TSharedPtr<IVoiceCapture,1> *)&local_38) {
        (this->VoiceCapture).Object = (IVoiceCapture *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->VoiceCapture).SharedReferenceCount,&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
    }
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->VoiceEncoder != (TSharedPtr<IVoiceEncoder,1> *)&local_28) {
      (this->VoiceEncoder).Object = (IVoiceEncoder *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VoiceEncoder).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->VoiceDecoder != (TSharedPtr<IVoiceDecoder,1> *)&local_18) {
      (this->VoiceDecoder).Object = (IVoiceDecoder *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VoiceDecoder).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    CleanupAudioComponent(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Test @ 14ed018e0

void __thiscall FTestVoice::Test(FTestVoice *this)

{
  ::FString::operator=(&this->DeviceName,L"Line 1 (Virtual Audio Cable)");
  this->EncodeHint = VoiceEncode_Audio;
  this->InputSampleRate = 48000;
  this->OutputSampleRate = 48000;
  this->NumInChannels = 2;
  this->NumOutChannels = 2;
  InitVoiceCapture(this);
  InitVoiceEncoder(this);
  InitVoiceDecoder(this);
  return;
}

// Tick @ 14ed066b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall FTestVoice::Tick(FTestVoice *this,float param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  USoundWaveProcedural *pUVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestVoice::Tick(float)_::_2_::FStat_STAT_FTestVoice_Tick>
  FVar14;
  UAudioComponent *pUVar15;
  FUObjectItem *this_00;
  UClass *pUVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  IVoiceCapture *pIVar19;
  IVoiceEncoder *pIVar20;
  IVoiceDecoder *pIVar21;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FString *pFVar22;
  FName FVar23;
  wchar_t *pwVar24;
  uint uVar25;
  size_t sVar26;
  FScriptContainerElement *_Src;
  size_t _Size;
  wchar_t *pwVar27;
  uint local_res20 [2];
  int local_138;
  int local_134;
  int local_130;
  undefined1 local_128 [8];
  FDelegateAllocation local_120;
  FColor_u_0 local_110;
  int local_10c;
  FName local_108;
  ulonglong local_100;
  LARGE_INTEGER local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  FName local_e8;
  FStatMessage local_d8;
  LARGE_INTEGER local_c8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FName local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  _Size = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FTestVoice_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestVoice::Tick(float)_::_2_::FStat_STAT_FTestVoice_Tick>
         )0x0) {
      pFVar13 = ::FName::FName(&local_88,"STAT_FTestVoice_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestVoice_Tick,*pFVar13,
                 L"STAT_FTestVoice_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_FTestVoice_Tick;
  if (StatPtr_STAT_FTestVoice_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestVoice::Tick(float)_::_2_::FStat_STAT_FTestVoice_Tick>
       )0x0) {
    pFVar13 = ::FName::FName(&local_80,"STAT_FTestVoice_Tick");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestVoice::Tick(float)_::_2_::FStat_STAT_FTestVoice_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestVoice_Tick,*pFVar13,
                          L"STAT_FTestVoice_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                          ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar14;
  bVar7 = false;
  bVar6 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_14ed0682b:
    bVar7 = bVar9;
    bVar6 = bVar8;
    bVar8 = false;
    FVar23 = local_e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_108.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                   ,0xe3);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ed0682b;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar8 = true;
  }
  if ((this->VoiceCapture).Object == (IVoiceCapture *)0x0) goto LAB_14ed070e8;
  pwVar27 = L"";
  if (this->VoiceComp == (UAudioComponent *)0x0) {
    pUVar15 = CreateVoiceAudioComponent(this->OutputSampleRate,this->NumOutChannels);
    this->VoiceComp = pUVar15;
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar15->field_0xc);
    FUObjectItem::SetRootFlags(this_00,RootSet);
    pUVar15 = this->VoiceComp;
    if ((pUVar15->Sound).field0_0x0.DebugPtr == (USoundBase *)0x0) {
      pFVar22 = GetTypeName<USoundWaveProcedural>(local_58);
      if ((pFVar22->Data).ArrayNum != 0) {
        pwVar27 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar27);
    }
    pUVar16 = Z_Construct_UClass_USoundWaveProcedural_NoRegister();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&pUVar15->Sound,pUVar16);
    if ((!bVar9) ||
       (pUVar3 = (USoundWaveProcedural *)(pUVar15->Sound).field0_0x0.DebugPtr,
       pUVar3 == (USoundWaveProcedural *)0x0)) {
      pFVar22 = GetTypeName<USoundWaveProcedural>(&local_78);
      pwVar27 = L"";
      if ((pFVar22->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
      }
      pFVar22 = GetFullNameForCastLogError<USoundBase>
                          (&local_68,(pUVar15->Sound).field0_0x0.DebugPtr);
      if ((pFVar22->Data).ArrayNum != 0) {
        pwVar27 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar27,pwVar24);
    }
    this->SoundStreaming = pUVar3;
    uStack_f0 = 0;
    local_f8.QuadPart = (LONGLONG)GenerateData;
    iStack_ec = local_d8.NameAndInfo.Number;
    local_128 = (undefined1  [8])0x0;
    local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_120.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
               (FWriteAccessScope *)&local_a8);
    local_90 = &local_120;
    puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_120);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = &
                 ___7__TCommonDelegateInstanceState___A6AXPEAVUSoundWaveProcedural__H_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar17[2] = uVar18;
      ((LARGE_INTEGER *)(puVar17 + 4))->QuadPart = (LONGLONG)local_f8;
      puVar17[5] = CONCAT44(iStack_ec,uStack_f0);
      *puVar17 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_VFTestVoice____A6AXPEAVUSoundWaveProcedural__H_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar17[3] = this;
      if ((puVar17[4] == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &this->SoundStreaming->OnSoundWaveProceduralUnderflow,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_128);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_128,
               (FWriteAccessScope *)&local_c0);
    if ((local_120.DelegateSize != 0) &&
       (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_120.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_120,0,0,0x10);
      local_120.DelegateSize = 0;
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_120.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_128);
    if (this->VoiceComp == (UAudioComponent *)0x0) goto LAB_14ed070e8;
  }
  if ((this->SoundStreaming == (USoundWaveProcedural *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundStreaming",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                         ,0xf5,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  bVar9 = (bool)(**(code **)(*(longlong *)&this->VoiceComp->field_0x250 + 0xa8))();
  if (bVar9 != this->bLastWasPlaying) {
    if (4 < (byte)LogVoice._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
    }
    this->bLastWasPlaying = bVar9;
  }
  if ((bVar9 == false) ||
     (iVar12 = USoundWaveProcedural::GetAvailableAudioByteCount(this->SoundStreaming), iVar12 != 0))
  {
    this->StarvedDataCount = 0;
  }
  else {
    iVar12 = this->StarvedDataCount + 1;
    this->StarvedDataCount = iVar12;
    if ((1 < iVar12) && (4 < (byte)LogVoice._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
    }
  }
  if (this->bUseTestSample == false) {
    local_138 = 0;
    pIVar19 = TSharedPtr<IVoiceCapture,1>::operator->(&this->VoiceCapture);
    iVar12 = (**(code **)(pIVar19->_padding_ + 0x38))(pIVar19,&local_138);
    if ((iVar12 != 2) || (local_138 == 0)) goto LAB_14ed070e8;
    piVar2 = &(this->RawCaptureData).ArrayNum;
    if (0 < this->LastRemainderSize) {
      if ((*piVar2 < this->LastRemainderSize) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("RawCaptureData.Num() >= (int32)(LastRemainderSize)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                              ,0x116,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      memcpy((this->RawCaptureData).AllocatorInstance.Data,(this->Remainder).AllocatorInstance.Data,
             (longlong)this->LastRemainderSize);
    }
    pIVar19 = TSharedPtr<IVoiceCapture,1>::operator->(&this->VoiceCapture);
    local_130 = (**(code **)(pIVar19->_padding_ + 0x40))
                          (pIVar19,(this->RawCaptureData).AllocatorInstance.Data +
                                   this->LastRemainderSize,local_138,&local_138,&local_100);
    uVar25 = local_138 + this->LastRemainderSize;
    if ((local_100 <= this->CachedSampleCount) && (4 < (byte)LogVoice._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
    }
    this->CachedSampleCount = local_100;
    if ((*piVar2 < (int)uVar25) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawCaptureData.Num() >= (int32)(TotalVoiceBytes)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                            ,0x127,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    if (local_130 != 2) goto LAB_14ed070e8;
  }
  else {
    pTVar1 = &this->RawCaptureData;
    QueryPerformanceCounter(&local_c8);
    dVar5 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((LastQueueTime <= 0.0) || (dVar5 - LastQueueTime <= __real_4000000000000000)) {
      sVar26 = _Size;
      if (bTimeToQueue != false) goto LAB_14ed06b59;
    }
    else {
      bTimeToQueue = true;
LAB_14ed06b59:
      (this->RawCaptureData).ArrayNum = 0;
      piVar2 = &(this->RawCaptureData).ArrayMax;
      if (*piVar2 != 64000) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,64000,&pTVar1->AllocatorInstance,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,64000,&pTVar1->AllocatorInstance,&(this->RawCaptureData).ArrayNum,piVar2);
      if (((this->RawCaptureData).ArrayNum < 64000) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("VoiceData.Num() >= (int32)((sizeof(UEArrayCountHelper(RawVoiceTestData)) - 1))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                              ,200,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      memcpy((pTVar1->AllocatorInstance).Data,RawVoiceTestData,64000);
      bTimeToQueue = false;
      sVar26 = 64000;
      LastQueueTime = dVar5;
    }
    uVar25 = (uint)sVar26;
  }
  if (uVar25 == 0) goto LAB_14ed070e8;
  if (this->bZeroInput != false) {
    memset((this->RawCaptureData).AllocatorInstance.Data,0,(ulonglong)uVar25);
  }
  local_134 = 0;
  if ((this->VoiceEncoder).Object != (IVoiceEncoder *)0x0) {
    local_134 = this->MaxCompressedDataSize;
    pIVar20 = TSharedPtr<IVoiceEncoder,1>::operator->(&this->VoiceEncoder);
    piVar2 = &this->LastRemainderSize;
    iVar12 = (**(code **)(*(longlong *)pIVar20 + 0x10))
                       (pIVar20,(this->RawCaptureData).AllocatorInstance.Data,uVar25,
                        (this->CompressedData).AllocatorInstance.Data,&local_134);
    *piVar2 = iVar12;
    if (((this->RawCaptureData).ArrayNum < local_134) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("RawCaptureData.Num() >= (int32)(CompressedDataSize)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                            ,0x13b,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    if (0 < *piVar2) {
      if (this->MaxRemainderSize < *piVar2) {
        if (5 < (byte)LogVoice._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_Overflow__1530905d8,
                     (FLogCategoryBase *)&LogVoice);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,*piVar2 - this->MaxRemainderSize,&(this->Remainder).AllocatorInstance,
                   &(this->Remainder).ArrayNum,&(this->Remainder).ArrayMax);
        this->MaxRemainderSize = (this->Remainder).ArrayNum;
      }
      if (((this->Remainder).ArrayNum < *piVar2) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Remainder.Num() >= (int32)(LastRemainderSize)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                              ,0x146,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      memcpy((this->Remainder).AllocatorInstance.Data,
             (this->RawCaptureData).AllocatorInstance.Data + (uVar25 - *piVar2),(longlong)*piVar2);
    }
  }
  local_res20[0] = 0;
  if (((this->VoiceDecoder).Object != (IVoiceDecoder *)0x0) && (local_134 != 0)) {
    local_res20[0] = this->MaxUncompressedDataSize;
    pIVar21 = TSharedPtr<IVoiceDecoder,1>::operator->(&this->VoiceDecoder);
    (**(code **)(*(longlong *)pIVar21 + 0x10))
              (pIVar21,(this->CompressedData).AllocatorInstance.Data,local_134,
               (this->UncompressedData).AllocatorInstance.Data,local_res20);
    _Size = (size_t)local_res20[0];
    if ((this->UncompressedData).ArrayNum < (int)local_res20[0]) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("UncompressedData.Num() >= (int32)(UncompressedDataSize)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                          ,0x153,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      _Size = (size_t)local_res20[0];
    }
  }
  if (this->bUseDecompressed == false) {
    uVar25 = uVar25 - this->LastRemainderSize;
    _Src = (this->RawCaptureData).AllocatorInstance.Data;
LAB_14ed06fc0:
    if ((_Src != (FScriptContainerElement *)0x0) && (uVar25 != 0)) {
      lpCriticalSection = &this->QueueLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      piVar2 = &(this->UncompressedDataQueue).ArrayNum;
      local_10c = *piVar2;
      local_130 = local_10c + uVar25;
      if (this->MaxUncompressedDataQueueSize < local_130) {
        if (2 < (byte)LogVoice._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
        }
      }
      else {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar25,&(this->UncompressedDataQueue).AllocatorInstance,piVar2,
                   &(this->UncompressedDataQueue).ArrayMax);
        if (((this->UncompressedDataQueue).ArrayNum < local_130) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("UncompressedDataQueue.Num() >= (int32)(AmountToBuffer)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestVoice.cpp"
                                ,0x179,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        memcpy((this->UncompressedDataQueue).AllocatorInstance.Data + local_10c,_Src,
               (ulonglong)uVar25);
        this->CurrentUncompressedDataQueueSize = this->CurrentUncompressedDataQueueSize + uVar25;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else if ((uint)_Size != 0) {
    uVar25 = (uint)_Size;
    if (this->bZeroOutput != false) {
      memset((this->UncompressedData).AllocatorInstance.Data,0,_Size);
      uVar25 = local_res20[0];
    }
    _Src = (this->UncompressedData).AllocatorInstance.Data;
    goto LAB_14ed06fc0;
  }
  if ((bVar9 == false) &&
     (this->MaxUncompressedDataSize / 2 < this->CurrentUncompressedDataQueueSize)) {
    if (4 < (byte)LogVoice._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVoice);
    }
    (**(code **)(*(longlong *)this->VoiceComp + 0x650))(this->VoiceComp,0);
  }
LAB_14ed070e8:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_d8.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f8);
      local_d8.StatData.Pad = (uchar  [8])(local_f8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_d8);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return true;
}

