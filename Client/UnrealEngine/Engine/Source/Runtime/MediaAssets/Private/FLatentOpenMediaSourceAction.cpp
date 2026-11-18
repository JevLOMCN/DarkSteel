// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 5

// FLatentOpenMediaSourceAction @ 146c1c200

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FLatentOpenMediaSourceAction * __thiscall
FLatentOpenMediaSourceAction::FLatentOpenMediaSourceAction
          (FLatentOpenMediaSourceAction *this,FLatentActionInfo *param_1,UMediaPlayer *param_2,
          UMediaSource *param_3,FMediaPlayerOptions *param_4,bool *param_5)

{
  TMap<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_> *this_00;
  FString *pFVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 *puVar8;
  UMediaPlayer *local_res8;
  void *local_38 [2];
  
  this->_padding_ = (longlong)&___7FLatentOpenMediaSourceAction__6B_;
  this->ExecutionFunction = param_1->ExecutionFunction;
  this->OutputLink = param_1->Linkage;
  pUVar2 = (param_1->CallbackTarget).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  (this->CallbackTarget).ObjectIndex = 0;
  (this->CallbackTarget).ObjectSerialNumber = 0;
  local_res8 = (UMediaPlayer *)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&this->CallbackTarget,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->MediaPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMediaPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->MediaPlayer).WeakPtr,(FObjectPtr)&local_res8);
  this->TimeRemaining = 10.0;
  this->OutSuccess = param_5;
  this->bSawError = false;
  this->bSawMediaOpened = false;
  this->bSawMediaOpenFailed = false;
  this->bSawSeekCompleted = false;
  iVar4 = (param_4->Tracks).Caption;
  iVar5 = (param_4->Tracks).Metadata;
  iVar6 = (param_4->Tracks).Script;
  (this->Options).Tracks.Audio = (param_4->Tracks).Audio;
  (this->Options).Tracks.Caption = iVar4;
  (this->Options).Tracks.Metadata = iVar5;
  (this->Options).Tracks.Script = iVar6;
  iVar4 = (param_4->Tracks).Text;
  (this->Options).Tracks.Subtitle = (param_4->Tracks).Subtitle;
  (this->Options).Tracks.Text = iVar4;
  (this->Options).Tracks.Video = (param_4->Tracks).Video;
  ::FString::FString(&(this->Options).TracksByLanguage.Video,&(param_4->TracksByLanguage).Video);
  ::FString::FString(&(this->Options).TracksByLanguage.Audio,&(param_4->TracksByLanguage).Audio);
  ::FString::FString(&(this->Options).TracksByLanguage.Subtitle,
                     &(param_4->TracksByLanguage).Subtitle);
  ::FString::FString(&(this->Options).TracksByLanguage.Caption,&(param_4->TracksByLanguage).Caption)
  ;
  this_00 = &(this->Options).InternalCustomOptions;
  (this->Options).TrackSelection = param_4->TrackSelection;
  (this->Options).SeekTime.Ticks = (param_4->SeekTime).Ticks;
  (this->Options).SeekTimeType = param_4->SeekTimeType;
  (this->Options).PlayOnOpen = param_4->PlayOnOpen;
  (this->Options).Loop = param_4->Loop;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->Options).InternalCustomOptions.field_0x8 = 0;
  *(undefined8 *)&(this->Options).InternalCustomOptions.field_0x20 = 0;
  *(undefined4 *)&(this->Options).InternalCustomOptions.field_0x28 = 0;
  *(undefined4 *)&(this->Options).InternalCustomOptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->Options).InternalCustomOptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Options).InternalCustomOptions.field_0x34 = 0;
  *(undefined8 *)&(this->Options).InternalCustomOptions.field_0x40 = 0;
  *(undefined4 *)&(this->Options).InternalCustomOptions.field_0x48 = 0;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
             *)this_00,
            (TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
             *)&param_4->InternalCustomOptions);
  pFVar1 = &this->URL;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->URL).Data.ArrayNum = 0;
  (this->URL).Data.ArrayMax = 0;
  if (param_3 == (UMediaSource *)0x0) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FLatentOpenMediaSourceAction::FLatentOpenMediaSourceAction(FLatentActionInfo_const&___ptr64,UMediaPlayer*___ptr64,UMediaSource*___ptr64,FMediaPlayerOptions_const&___ptr64,bool&___ptr64)___ptr64'
                  ::__l29::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    }
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,local_38);
    if (pFVar1 != (FString *)puVar8) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar8;
      *puVar8 = 0;
      (this->URL).Data.ArrayNum = *(int *)(puVar8 + 1);
      (this->URL).Data.ArrayMax = *(int *)((longlong)puVar8 + 0xc);
      puVar8[1] = 0;
    }
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    TMulticastDelegateRegistration<void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>::
    AddRaw<FLatentOpenMediaSourceAction>
              (&param_2->MediaEvent,(FLatentOpenMediaSourceAction *)&param_5,(pmf_8ff5b17d)this);
    bVar7 = UMediaPlayer::OpenSourceInternal(param_2,param_3,param_4);
    if (bVar7) {
      return this;
    }
    if (2 < (byte)LogMediaAssets._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_FLatentOpenMediaSourceAction::FLatentOpenMediaSourceAction(FLatentActionInfo_const&___ptr64,UMediaPlayer*___ptr64,UMediaSource*___ptr64,FMediaPlayerOptions_const&___ptr64,bool&___ptr64)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    }
  }
  this->bSawError = true;
  return this;
}

// ~FLatentOpenMediaSourceAction @ 146c1e360

void __thiscall
FLatentOpenMediaSourceAction::~FLatentOpenMediaSourceAction(FLatentOpenMediaSourceAction *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  
  this->_padding_ = (longlong)&___7FLatentOpenMediaSourceAction__6B_;
  bVar2 = FWeakObjectPtr::IsValid(&(this->MediaPlayer).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->MediaPlayer).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 10),this);
  }
  pFVar1 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMediaPlayerOptions::~FMediaPlayerOptions(&this->Options);
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  return;
}

// FailedOperation @ 146c27740

void __thiscall
FLatentOpenMediaSourceAction::FailedOperation
          (FLatentOpenMediaSourceAction *this,FLatentResponse *param_1)

{
  *this->OutSuccess = false;
  FLatentResponse::FinishAndTriggerIf
            (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  return;
}

// HandleMediaPlayerEvent @ 146c2e7e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLatentOpenMediaSourceAction::HandleMediaPlayerEvent
          (FLatentOpenMediaSourceAction *this,EMediaEvent param_1)

{
  FString local_18;
  
  if (5 < (byte)LogMediaAssets._0_1_) {
    MediaUtils::EventToString(&local_18,param_1);
    UE::Logging::Private::BasicLog<6>
              (&`public:_void___cdecl_FLatentOpenMediaSourceAction::HandleMediaPlayerEvent(EMediaEvent)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_1 == MediaOpened) {
    this->bSawMediaOpened = true;
  }
  else {
    if (param_1 == MediaOpenFailed) {
      this->bSawMediaOpenFailed = true;
      return;
    }
    if (param_1 == SeekCompleted) {
      this->bSawSeekCompleted = true;
      return;
    }
  }
  return;
}

// UpdateOperation @ 146c39600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FLatentOpenMediaSourceAction::UpdateOperation
          (FLatentOpenMediaSourceAction *this,FLatentResponse *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UMediaPlayer *pUVar4;
  UObject *pUVar5;
  FStaticBasicLogRecord *pFVar6;
  float fVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  longlong local_res8;
  FTimespan local_res18;
  FString local_38;
  FString local_28;
  
  if (this->bSawMediaOpenFailed != false) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    }
    *this->OutSuccess = false;
    FLatentResponse::FinishAndTriggerIf
              (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
    return;
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->MediaPlayer).WeakPtr);
  if ((!bVar3) || (bVar3 = FWeakObjectPtr::IsStale(&(this->MediaPlayer).WeakPtr,true,false), bVar3))
  {
    if (2 < (byte)LogMediaAssets._0_1_) {
      pFVar6 = &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                ::__l27::LOG_Static;
      goto LAB_146c39ac0;
    }
  }
  else {
    if (this->bSawError == false) {
      pUVar4 = (UMediaPlayer *)FWeakObjectPtr::Get(&(this->MediaPlayer).WeakPtr);
      bVar3 = UMediaPlayer::HasError(pUVar4);
      if (!bVar3) {
        pUVar4 = (UMediaPlayer *)FWeakObjectPtr::Get(&(this->MediaPlayer).WeakPtr);
        bVar3 = UMediaPlayer::IsClosed(pUVar4);
        if (bVar3) {
          if ((byte)LogMediaAssets._0_1_ < 3) goto LAB_146c39a4e;
          if ((this->URL).Data.ArrayNum == 0) {
            pFVar6 = &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                      ::__l69::LOG_Static;
          }
          else {
            pFVar6 = &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                      ::__l69::LOG_Static;
          }
        }
        else {
          pUVar4 = (UMediaPlayer *)FWeakObjectPtr::Get(&(this->MediaPlayer).WeakPtr);
          bVar3 = UMediaPlayer::IsPreparing(pUVar4);
          if (bVar3) {
            if (5 < (byte)LogMediaAssets._0_1_) {
              pFVar6 = &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                        ::__l90::LOG_Static;
LAB_146c399f8:
              UE::Logging::Private::BasicLog<6>(pFVar6,(FLogCategoryBase *)&LogMediaAssets);
            }
          }
          else {
            pUVar4 = (UMediaPlayer *)FWeakObjectPtr::Get(&(this->MediaPlayer).WeakPtr);
            bVar3 = UMediaPlayer::IsReady(pUVar4);
            if (bVar3) {
              if (5 < (byte)LogMediaAssets._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          (&`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                            ::__l112::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
              }
              if (this->bSawMediaOpened != false) {
                lVar1 = (this->Options).SeekTime.Ticks;
                if (lVar1 == 0) {
                  if (5 < (byte)LogMediaAssets._0_1_) {
                    UE::Logging::Private::BasicLog<6>
                              (&`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                                ::__l200::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
                    *this->OutSuccess = true;
                    goto LAB_146c39ad6;
                  }
                }
                else {
                  if (this->bSawSeekCompleted == false) {
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = __real_3fe0000000000000;
                    auVar8 = roundpd(in_XMM1,auVar8,1);
                    if ((longlong)auVar8._0_8_ <= lVar1) {
                      pUVar5 = FWeakObjectPtr::Get(&(this->MediaPlayer).WeakPtr);
                      if ((*(longlong *)&pUVar5[10].field_0x20 == 0) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      FMediaPlayerFacade::GetDuration
                                (*(FMediaPlayerFacade **)&pUVar5[10].field_0x20);
                      if ((this->Options).SeekTime.Ticks <= local_res8) {
                        if (5 < (byte)LogMediaAssets._0_1_) {
                          pFVar6 = &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                                    ::__l180::LOG_Static;
                          goto LAB_146c399f8;
                        }
                        goto LAB_146c39a04;
                      }
                    }
                    if (2 < (byte)LogMediaAssets._0_1_) {
                      pUVar5 = FWeakObjectPtr::Get(&(this->MediaPlayer).WeakPtr);
                      if ((*(longlong *)&pUVar5[10].field_0x20 == 0) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      FMediaPlayerFacade::GetDuration
                                (*(FMediaPlayerFacade **)&pUVar5[10].field_0x20);
                      FTimespan::ToString(&local_res18,&local_28);
                      FTimespan::ToString(&(this->Options).SeekTime,&local_38);
                      UE::Logging::Private::BasicLog<3>
                                (&`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                                  ::__l162::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
                      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_38.Data.AllocatorInstance.Data);
                      }
                      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_28.Data.AllocatorInstance.Data);
                        FailedOperation(this,param_1);
                        return;
                      }
                    }
                    goto LAB_146c39a4e;
                  }
                  if (5 < (byte)LogMediaAssets._0_1_) {
                    UE::Logging::Private::BasicLog<6>
                              ((FStaticBasicLogRecord *)
                               &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                                ::L::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
                  }
                }
                *this->OutSuccess = true;
                goto LAB_146c39ad6;
              }
              if (5 < (byte)LogMediaAssets._0_1_) {
                pFVar6 = &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                          ::__l220::LOG_Static;
                goto LAB_146c399f8;
              }
            }
            else if (5 < (byte)LogMediaAssets._0_1_) {
              pFVar6 = &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                        ::__l240::LOG_Static;
              goto LAB_146c399f8;
            }
          }
LAB_146c39a04:
          fVar7 = this->TimeRemaining - param_1->DeltaTime;
          this->TimeRemaining = fVar7;
          if (0.0 < fVar7) {
            return;
          }
          if ((byte)LogMediaAssets._0_1_ < 3) goto LAB_146c39a4e;
          pFVar6 = &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                    ::__l261::LOG_Static;
        }
        UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogMediaAssets);
LAB_146c39a4e:
        FailedOperation(this,param_1);
        return;
      }
    }
    if (2 < (byte)LogMediaAssets._0_1_) {
      if ((this->URL).Data.ArrayNum == 0) {
        pFVar6 = &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                  ::__l48::LOG_Static;
      }
      else {
        pFVar6 = &`public:_virtual_void___cdecl_FLatentOpenMediaSourceAction::UpdateOperation(FLatentResponse&___ptr64)___ptr64'
                  ::__l48::LOG_Static;
      }
LAB_146c39ac0:
      UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogMediaAssets);
    }
  }
  *this->OutSuccess = false;
LAB_146c39ad6:
  FLatentResponse::FinishAndTriggerIf
            (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  return;
}

