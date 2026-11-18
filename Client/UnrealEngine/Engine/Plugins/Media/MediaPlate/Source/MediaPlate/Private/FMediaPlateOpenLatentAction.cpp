// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 9

// FMediaPlateOpenLatentAction @ 14ea89180

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMediaPlateOpenLatentAction * __thiscall
FMediaPlateOpenLatentAction::FMediaPlateOpenLatentAction
          (FMediaPlateOpenLatentAction *this,FLatentActionInfo *param_1,
          UMediaPlateComponent *param_2,float param_3,bool param_4,bool *param_5)

{
  UObject *pUVar1;
  UMediaPlayer *this_00;
  FString *pFVar2;
  UMediaTexture *pUVar3;
  UMediaPlateComponent *local_res8;
  
  this->_padding_ = (longlong)&___7FMediaPlateOpenLatentAction__6B_;
  this->ExecutionFunction = param_1->ExecutionFunction;
  this->OutputLink = param_1->Linkage;
  pUVar1 = (param_1->CallbackTarget).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  (this->CallbackTarget).ObjectIndex = 0;
  (this->CallbackTarget).ObjectSerialNumber = 0;
  local_res8 = (UMediaPlateComponent *)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&this->CallbackTarget,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UMediaPlateComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->MediaPlateComponentWeak).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UMediaPlateComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->MediaPlateComponentWeak).WeakPtr,(FObjectPtr)&local_res8);
  (this->MediaPlayerWeak).WeakPtr = (FWeakObjectPtr)0x0;
  this->bWaitForTexture = param_4;
  this->bSawError = false;
  this->bSawMediaOpened = false;
  this->bSawMediaClosed = false;
  this->bSawMediaOpenFailed = false;
  this->OutSuccess = param_5;
  this->TimeRemaining = param_3;
  this->bSawSeekCompleted = false;
  this->bSawIsReady = false;
  this->bSeekForTextureRequested = false;
  (this->URL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->URL).Data.ArrayNum = 0;
  (this->URL).Data.ArrayMax = 0;
  if (param_2 == (UMediaPlateComponent *)0x0) {
    if (2 < (byte)LogMediaPlate._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
    }
  }
  else {
    UMediaPlateComponent::Open(param_2);
    this_00 = (param_2->MediaPlayer).field0_0x0.DebugPtr;
    if (this_00 != (UMediaPlayer *)0x0) {
      param_5 = (bool *)this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&(this->MediaPlayerWeak).WeakPtr,(FObjectPtr)&param_5);
      TMulticastDelegateRegistration<void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>::
      AddRaw<FMediaPlateOpenLatentAction>
                (&this_00->MediaEvent,(FMediaPlateOpenLatentAction *)&param_5,(pmf_4de8827a)this);
      pFVar2 = UMediaPlayer::GetUrl(this_00);
      ::FString::operator=(&this->URL,pFVar2);
      if (this->bWaitForTexture == false) {
        return this;
      }
      pUVar3 = UMediaPlateComponent::GetMediaTexture(param_2,0);
      if (pUVar3 == (UMediaTexture *)0x0) {
        return this;
      }
      pUVar3->CurrentAspectRatio = 0.0;
      return this;
    }
    if (2 < (byte)LogMediaPlate._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
    }
  }
  this->bSawError = true;
  return this;
}

// ~FMediaPlateOpenLatentAction @ 14ea89890

void __thiscall
FMediaPlateOpenLatentAction::~FMediaPlateOpenLatentAction(FMediaPlateOpenLatentAction *this)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  this->_padding_ = (longlong)&___7FMediaPlateOpenLatentAction__6B_;
  pUVar2 = FWeakObjectPtr::Get(&(this->MediaPlayerWeak).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 10),this);
  }
  pFVar1 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  return;
}

// CompleteOperation @ 14ea8a720

void __thiscall
FMediaPlateOpenLatentAction::CompleteOperation
          (FMediaPlateOpenLatentAction *this,FLatentResponse *param_1)

{
  *this->OutSuccess = true;
  FLatentResponse::FinishAndTriggerIf
            (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  return;
}

// FailedOperation @ 14ea8af30

void __thiscall
FMediaPlateOpenLatentAction::FailedOperation
          (FMediaPlateOpenLatentAction *this,FLatentResponse *param_1)

{
  *this->OutSuccess = false;
  FLatentResponse::FinishAndTriggerIf
            (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  return;
}

// GetStatusString @ 14ea8b720

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
FMediaPlateOpenLatentAction::GetStatusString
          (FMediaPlateOpenLatentAction *this,FString *__return_storage_ptr__)

{
  UMediaPlayer *pUVar1;
  bool bVar2;
  UObject *pUVar3;
  UMediaPlayer *this_00;
  wchar_t *pwVar4;
  
  if (this->bSawMediaOpenFailed != false) {
    ::FString::FString(__return_storage_ptr__,L"Media open failed event.");
    return __return_storage_ptr__;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->MediaPlateComponentWeak).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar1 = *(UMediaPlayer **)&pUVar3[0xb].field_0x8;
    this_00 = (UMediaPlayer *)FWeakObjectPtr::Get(&(this->MediaPlayerWeak).WeakPtr);
    if (((this_00 == (UMediaPlayer *)0x0) || (pUVar1 == (UMediaPlayer *)0x0)) || (pUVar1 != this_00)
       ) {
      pwVar4 = L"Media player object was deleted.";
    }
    else if ((this->bSawError != false) || (bVar2 = UMediaPlayer::HasError(this_00), bVar2)) {
      pwVar4 = L"Media player is in Error state.";
    }
    else {
      bVar2 = UMediaPlayer::IsClosed(this_00);
      if (bVar2) {
        pwVar4 = L"Media player is closed.";
      }
      else {
        bVar2 = UMediaPlayer::IsPreparing(this_00);
        if (bVar2) {
          pwVar4 = L"Is preparing ...";
        }
        else {
          bVar2 = UMediaPlayer::IsReady(this_00);
          if (bVar2) {
            if (this->bWaitForTexture == false) {
              ::FString::PrintfImpl(__return_storage_ptr__,L"Is Ready.");
              return __return_storage_ptr__;
            }
            pwVar4 = L"Is Ready - Waiting for Texture Render ...";
          }
          else {
            pwVar4 = L"Waiting for IsReady() ...";
          }
        }
      }
    }
    ::FString::FString(__return_storage_ptr__,pwVar4);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Media Plate Component object was deleted.");
  return __return_storage_ptr__;
}

// OnMediaEvent @ 14ea8c0d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaPlateOpenLatentAction::OnMediaEvent(FMediaPlateOpenLatentAction *this,EMediaEvent param_1)

{
  FString local_18;
  
  if (5 < (byte)LogMediaPlate._0_1_) {
    MediaUtils::EventToString(&local_18,param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_1 == MediaClosed) {
    this->bSawMediaClosed = true;
  }
  else {
    if (param_1 == MediaOpened) {
      this->bSawMediaOpened = true;
      return;
    }
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

// UpdateOperation @ 14ea90a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaPlateOpenLatentAction::UpdateOperation
          (FMediaPlateOpenLatentAction *this,FLatentResponse *param_1)

{
  UMediaPlayer *pUVar1;
  bool bVar2;
  OperationUpdateResult OVar3;
  UObject *pUVar4;
  UMediaPlayer *this_00;
  FStaticBasicLogRecord *pFVar5;
  float fVar6;
  
  if (this->bSawMediaOpenFailed == false) {
    pUVar4 = FWeakObjectPtr::Get(&(this->MediaPlateComponentWeak).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
      pUVar1 = *(UMediaPlayer **)&pUVar4[0xb].field_0x8;
      this_00 = (UMediaPlayer *)FWeakObjectPtr::Get(&(this->MediaPlayerWeak).WeakPtr);
      if (((this_00 == (UMediaPlayer *)0x0) || (pUVar1 == (UMediaPlayer *)0x0)) ||
         (this_00 != pUVar1)) {
        if (2 < (byte)LogMediaPlate._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
        }
        *this->OutSuccess = false;
        FLatentResponse::FinishAndTriggerIf
                  (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
        return;
      }
      if ((this->bSawError != false) || (bVar2 = UMediaPlayer::HasError(this_00), bVar2)) {
        if ((byte)LogMediaPlate._0_1_ < 3) goto LAB_14ea90cad;
        pFVar5 = &::LOG_Static;
      }
      else {
        bVar2 = UMediaPlayer::IsClosed(this_00);
        if ((bVar2) || (this->bSawMediaClosed != false)) {
          if ((byte)LogMediaPlate._0_1_ < 3) goto LAB_14ea90cad;
          if ((this->URL).Data.ArrayNum == 0) {
            pFVar5 = &::LOG_Static;
          }
          else {
            pFVar5 = &::LOG_Static;
          }
        }
        else {
          bVar2 = UMediaPlayer::IsPreparing(this_00);
          if (bVar2) {
            if (5 < (byte)LogMediaPlate._0_1_) {
              if ((this->URL).Data.ArrayNum == 0) {
                pFVar5 = &::LOG_Static;
              }
              else {
                pFVar5 = &::LOG_Static;
              }
LAB_14ea90bfe:
              UE::Logging::Private::BasicLog<6>(pFVar5,(FLogCategoryBase *)&LogMediaPlate);
            }
          }
          else {
            bVar2 = UMediaPlayer::IsReady(this_00);
            if (bVar2) {
              if (this->bSawIsReady == false) {
                if (5 < (byte)LogMediaPlate._0_1_) {
                  UE::Logging::Private::BasicLog<6>
                            ((FStaticBasicLogRecord *)&PTR_u___d__Media_Plat_152ff7a98,
                             (FLogCategoryBase *)&LogMediaPlate);
                }
                this->bSawIsReady = true;
              }
              OVar3 = UpdateOperationPlayerReady(this,this_00,param_1);
              if (OVar3 == Completed) {
                return;
              }
            }
            else if (5 < (byte)LogMediaPlate._0_1_) {
              pFVar5 = &::LOG_Static;
              goto LAB_14ea90bfe;
            }
          }
          fVar6 = this->TimeRemaining - param_1->DeltaTime;
          this->TimeRemaining = fVar6;
          if (0.0 < fVar6) {
            return;
          }
          if ((byte)LogMediaPlate._0_1_ < 3) goto LAB_14ea90cad;
          pFVar5 = &::LOG_Static;
        }
      }
      UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogMediaPlate);
LAB_14ea90cad:
      FailedOperation(this,param_1);
      return;
    }
    if ((byte)LogMediaPlate._0_1_ < 3) goto LAB_14ea90a51;
    if ((this->URL).Data.ArrayNum == 0) {
      pFVar5 = &::LOG_Static;
    }
    else {
      pFVar5 = &::LOG_Static;
    }
  }
  else {
    if ((byte)LogMediaPlate._0_1_ < 3) goto LAB_14ea90a51;
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogMediaPlate);
LAB_14ea90a51:
  *this->OutSuccess = false;
  FLatentResponse::FinishAndTriggerIf
            (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  return;
}

// UpdateOperationConditionalWaitForTexture @ 14ea90d30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

OperationUpdateResult __thiscall
FMediaPlateOpenLatentAction::UpdateOperationConditionalWaitForTexture
          (FMediaPlateOpenLatentAction *this,FLatentResponse *param_1)

{
  UMediaPlateComponent *this_00;
  UMediaTexture *pUVar1;
  FStaticBasicLogRecord *pFVar2;
  
  if (this->bWaitForTexture == false) {
    if ((byte)LogMediaPlate._0_1_ < 6) goto LAB_14ea90e25;
    pFVar2 = &::LOG_Static;
  }
  else {
    this_00 = (UMediaPlateComponent *)FWeakObjectPtr::Get(&(this->MediaPlateComponentWeak).WeakPtr);
    pUVar1 = UMediaPlateComponent::GetMediaTexture(this_00,0);
    if ((pUVar1 == (UMediaTexture *)0x0) || (pUVar1->CurrentAspectRatio == 0.0)) {
      if (5 < (byte)LogMediaPlate._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
      }
      return Continue;
    }
    if ((byte)LogMediaPlate._0_1_ < 6) goto LAB_14ea90e25;
    if ((this->URL).Data.ArrayNum == 0) {
      pFVar2 = &::LOG_Static;
    }
    else {
      pFVar2 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<6>(pFVar2,(FLogCategoryBase *)&LogMediaPlate);
LAB_14ea90e25:
  *this->OutSuccess = true;
  FLatentResponse::FinishAndTriggerIf
            (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  return Completed;
}

// UpdateOperationPlayerReady @ 14ea90e60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

OperationUpdateResult __thiscall
FMediaPlateOpenLatentAction::UpdateOperationPlayerReady
          (FMediaPlateOpenLatentAction *this,UMediaPlayer *param_1,FLatentResponse *param_2)

{
  OperationUpdateResult OVar1;
  UObject *pUVar2;
  FTimespan FVar3;
  FStaticBasicLogRecord *pFVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  FTimespan local_res8;
  FString local_38;
  FString local_28;
  
  if (this->bSawMediaOpened == false) {
    if ((byte)LogMediaPlate._0_1_ < 6) {
      return Continue;
    }
    pFVar4 = &::LOG_Static;
  }
  else {
    pUVar2 = FWeakObjectPtr::Get(&(this->MediaPlateComponentWeak).WeakPtr);
    auVar5._0_8_ = (double)(*(float *)&pUVar2[5].field_0x4 * __real_4b189680 + __real_3f000000);
    auVar5._8_8_ = 0;
    auVar5 = roundpd(auVar5,auVar5,1);
    local_res8.Ticks = (long64)auVar5._0_8_;
    if ((this->bWaitForTexture != false) && (this->bSeekForTextureRequested == false)) {
      this->bSeekForTextureRequested = true;
      UMediaPlayer::Seek(param_1,&local_res8);
    }
    if (((local_res8.Ticks == 0) && (this->bSeekForTextureRequested == false)) ||
       (this->bSawSeekCompleted != false)) {
      OVar1 = UpdateOperationConditionalWaitForTexture(this,param_2);
      return OVar1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = __real_3fe0000000000000;
    auVar5 = roundpd(auVar6,auVar6,1);
    if ((local_res8.Ticks < (longlong)auVar5._0_8_) ||
       (FVar3 = UMediaPlayer::GetDuration(param_1), *(longlong *)FVar3.Ticks < local_res8.Ticks)) {
      if (2 < (byte)LogMediaPlate._0_1_) {
        FVar3 = UMediaPlayer::GetDuration(param_1);
        FTimespan::ToString((FTimespan *)FVar3.Ticks,&local_28);
        FTimespan::ToString(&local_res8,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      *this->OutSuccess = false;
      FLatentResponse::FinishAndTriggerIf
                (param_2,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
      return Completed;
    }
    if ((byte)LogMediaPlate._0_1_ < 6) {
      return Continue;
    }
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<6>(pFVar4,(FLogCategoryBase *)&LogMediaPlate);
  return Continue;
}

