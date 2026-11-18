// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// ~FAnimNotifyEvent @ 1473d9d80

void __thiscall FAnimNotifyEvent::~FAnimNotifyEvent(FAnimNotifyEvent *this)

{
  (this->EndLink)._padding_ = (longlong)&___7FAnimLinkableElement__6B_;
  this->_padding_ = (longlong)&___7FAnimLinkableElement__6B_;
  return;
}

// FAnimNotifyEvent @ 147433690

FAnimNotifyEvent * __thiscall
FAnimNotifyEvent::FAnimNotifyEvent(FAnimNotifyEvent *this,FAnimNotifyEvent *param_1)

{
  UAnimNotify *pUVar1;
  UAnimNotifyState *pUVar2;
  
  FAnimLinkableElement::FAnimLinkableElement
            ((FAnimLinkableElement *)this,(FAnimLinkableElement *)param_1);
  this->_padding_ = (longlong)&___7FAnimNotifyEvent__6B_;
  this->TriggerTimeOffset = param_1->TriggerTimeOffset;
  this->EndTriggerTimeOffset = param_1->EndTriggerTimeOffset;
  this->TriggerWeightThreshold = param_1->TriggerWeightThreshold;
  this->NotifyName = param_1->NotifyName;
  pUVar1 = (param_1->Notify).field0_0x0.DebugPtr;
  (this->Notify).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAnimNotify *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->NotifyStateClass).field0_0x0.DebugPtr;
  (this->NotifyStateClass).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UAnimNotifyState *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->Duration = param_1->Duration;
  FAnimLinkableElement::FAnimLinkableElement(&this->EndLink,&param_1->EndLink);
  this->bConvertedFromBranchingPoint = param_1->bConvertedFromBranchingPoint;
  (this->MontageTickType).Value = (param_1->MontageTickType).Value;
  this->NotifyTriggerChance = param_1->NotifyTriggerChance;
  (this->NotifyFilterType).Value = (param_1->NotifyFilterType).Value;
  this->NotifyFilterLOD = param_1->NotifyFilterLOD;
  this->bCanBeFilteredViaRequest = param_1->bCanBeFilteredViaRequest;
  this->bTriggerOnDedicatedServer = param_1->bTriggerOnDedicatedServer;
  this->bTriggerOnFollower = param_1->bTriggerOnFollower;
  this->TrackIndex = param_1->TrackIndex;
  this->CachedNotifyEventName = param_1->CachedNotifyEventName;
  this->CachedNotifyEventBaseName = param_1->CachedNotifyEventBaseName;
  return this;
}

// StaticStruct @ 147513b40

UScriptStruct * __cdecl FAnimNotifyEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNotifyEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyEvent,(UObject *)pUVar1,
                         L"AnimNotifyEvent");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNotifyEvent.OuterSingleton;
}

// SetTime @ 147516330

void __thiscall FAnimNotifyEvent::SetTime(FAnimNotifyEvent *this,float param_1,Type param_2)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  float fVar2;
  
  FAnimLinkableElement::SetTime((FAnimLinkableElement *)this,param_1,param_2);
  fVar1 = this->Duration;
  UNRECOVERED_JUMPTABLE = *(code **)((this->EndLink)._padding_ + 8);
  fVar2 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)this,Absolute);
                    /* WARNING: Could not recover jumptable at 0x000147516388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&this->EndLink,fVar2 + fVar1,0);
  return;
}

// FAnimNotifyEvent @ 14752f0e0

FAnimNotifyEvent * __thiscall FAnimNotifyEvent::FAnimNotifyEvent(FAnimNotifyEvent *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  (this->NotifyName).Number = 0;
  (this->Notify).field0_0x0.DebugPtr = (UAnimNotify *)0x0;
  (this->NotifyStateClass).field0_0x0.DebugPtr = (UAnimNotifyState *)0x0;
  (this->EndLink).LinkedMontage.field0_0x0.DebugPtr = (UAnimMontage *)0x0;
  (this->EndLink).LinkMethod = '\0';
  (this->EndLink).CachedLinkMethod = '\0';
  (this->EndLink).SlotIndex = 0;
  (this->EndLink).SegmentIndex = -1;
  this->_padding_ = (longlong)&___7FAnimNotifyEvent__6B_;
  (this->EndLink)._padding_ = (longlong)&___7FAnimLinkableElement__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->TriggerTimeOffset = 0.0;
  this->EndTriggerTimeOffset = 0.0;
  this->TriggerWeightThreshold = 1e-05;
  (this->NotifyName).ComparisonIndex = 0;
  this->Duration = 0.0;
  (this->EndLink).LinkedSequence.field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
  (this->EndLink).SegmentBeginTime = 0.0;
  (this->EndLink).SegmentLength = 0.0;
  (this->EndLink).LinkValue = 0.0;
  this->bConvertedFromBranchingPoint = false;
  this->MontageTickType = '\0';
  this->NotifyTriggerChance = 1.0;
  (this->NotifyFilterType).Value = '\0';
  this->NotifyFilterLOD = 0;
  this->bCanBeFilteredViaRequest = true;
  this->bTriggerOnDedicatedServer = true;
  this->bTriggerOnFollower = false;
  this->TrackIndex = 0;
  (this->CachedNotifyEventName).ComparisonIndex = 0;
  *(undefined8 *)&(this->CachedNotifyEventName).Number = 0;
  (this->CachedNotifyEventBaseName).Number = 0;
  return this;
}

// operator< @ 147534250

bool __thiscall FAnimNotifyEvent::operator<(FAnimNotifyEvent *this,FAnimNotifyEvent *param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = this->TriggerTimeOffset;
  fVar3 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)this,Absolute);
  fVar3 = fVar3 + fVar1;
  fVar1 = param_1->TriggerTimeOffset;
  fVar4 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)param_1,Absolute);
  fVar4 = fVar4 + fVar1;
  if (__real_322bcc77 < (float)((uint)(fVar3 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    bVar2 = fVar3 < fVar4;
  }
  else {
    bVar2 = this->TrackIndex < param_1->TrackIndex;
  }
  return bVar2;
}

// GetDuration @ 14755b620

float __thiscall FAnimNotifyEvent::GetDuration(FAnimNotifyEvent *this)

{
  float fVar1;
  float fVar2;
  
  if ((this->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
    fVar1 = FAnimLinkableElement::GetTime(&this->EndLink,Absolute);
    fVar2 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)this,Absolute);
    return fVar1 - fVar2;
  }
  return 0.0;
}

// GetEndTriggerTime @ 14755b990

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FAnimNotifyEvent::GetEndTriggerTime(FAnimNotifyEvent *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FString local_48 [4];
  
  fVar4 = 0.0;
  if ((((this->NotifyStateClass).field0_0x0.DebugPtr == (UAnimNotifyState *)0x0) &&
      (this->EndTriggerTimeOffset != 0.0)) && (4 < (byte)LogAnimNotify._0_1_)) {
    ::FName::ToString(&this->NotifyName,local_48);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimNotify);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  fVar1 = this->TriggerTimeOffset;
  if ((this->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
    fVar2 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)this,Absolute);
    if ((this->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
      fVar4 = FAnimLinkableElement::GetTime(&this->EndLink,Absolute);
      fVar3 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)this,Absolute);
      fVar4 = fVar4 - fVar3;
    }
    return fVar4 + fVar2 + fVar1 + this->EndTriggerTimeOffset;
  }
  fVar4 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)this,Absolute);
  return fVar4 + fVar1;
}

// GetNotifyEventName @ 14755da70

FName __thiscall
FAnimNotifyEvent::GetNotifyEventName(FAnimNotifyEvent *this,UMirrorDataTable *param_1)

{
  FName *pFVar1;
  FName FVar2;
  ForAnyElementType FVar3;
  longlong in_R8;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  if (in_R8 == 0) {
LAB_14755db21:
    if (this->NotifyName != (FName)0x0) {
      if (this->NotifyName != this->CachedNotifyEventBaseName) {
        ::FName::ToString(&this->NotifyName,&local_18);
        ::FString::PrintfImpl(&local_28,L"AnimNotify_%s");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar3.Data = local_28.Data.AllocatorInstance.Data;
        }
        this->CachedNotifyEventBaseName = this->NotifyName;
        pFVar1 = ::FName::FName(&local_res18,(wchar_t *)FVar3.Data);
        this->CachedNotifyEventName = *pFVar1;
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      FVar2 = this->CachedNotifyEventName;
      goto LAB_14755dbc1;
    }
  }
  else if (this->NotifyName != (FName)0x0) {
    pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
             ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     *)(in_R8 + 0x158),this->NotifyName);
    if (pFVar1 != (FName *)0x0) {
      ::FName::ToString(pFVar1,&local_18);
      ::FString::PrintfImpl(&local_28,L"AnimNotify_%s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar3.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FName::FName((FName *)param_1,(wchar_t *)FVar3.Data);
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return (FName)param_1;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return (FName)param_1;
    }
    goto LAB_14755db21;
  }
  FVar2.ComparisonIndex.Value = 0;
  FVar2.Number = 0;
LAB_14755dbc1:
  param_1->_padding_ = (longlong)FVar2;
  return (FName)param_1;
}

// GetNotifyEventName @ 14755dbf0

FName __thiscall FAnimNotifyEvent::GetNotifyEventName(FAnimNotifyEvent *this)

{
  FName *pFVar1;
  FName in_RDX;
  ForAnyElementType FVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (this->NotifyName != (FName)0x0) {
    if (this->NotifyName != this->CachedNotifyEventBaseName) {
      ::FName::ToString(&this->NotifyName,&local_18);
      ::FString::PrintfImpl(&local_28,L"AnimNotify_%s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar2.Data = local_28.Data.AllocatorInstance.Data;
      }
      this->CachedNotifyEventBaseName = this->NotifyName;
      pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data);
      this->CachedNotifyEventName = *pFVar1;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    *(FName *)in_RDX = this->CachedNotifyEventName;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetTriggerTime @ 147563450

float __thiscall FAnimNotifyEvent::GetTriggerTime(FAnimNotifyEvent *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->TriggerTimeOffset;
  fVar2 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)this,Absolute);
  return fVar2 + fVar1;
}

// IsBranchingPoint @ 14756a440

bool __thiscall FAnimNotifyEvent::IsBranchingPoint(FAnimNotifyEvent *this)

{
  UAnimNotify *pUVar1;
  UAnimNotifyState *pUVar2;
  
  if ((this->_padding_ != 0) &&
     ((((this->MontageTickType).Value == '\x01' ||
       ((pUVar1 = (this->Notify).field0_0x0.DebugPtr, pUVar1 != (UAnimNotify *)0x0 &&
        (pUVar1->bIsNativeBranchingPoint != false)))) ||
      ((pUVar2 = (this->NotifyStateClass).field0_0x0.DebugPtr, pUVar2 != (UAnimNotifyState *)0x0 &&
       (pUVar2->bIsNativeBranchingPoint != false)))))) {
    return true;
  }
  return false;
}

// RefreshEndTriggerOffset @ 147572c20

void __thiscall FAnimNotifyEvent::RefreshEndTriggerOffset(FAnimNotifyEvent *this,Type param_1)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 0.0;
  pfVar1 = &this->EndTriggerTimeOffset;
  fVar5 = fVar4;
  if (param_1 != NoOffset) {
    if (*pfVar1 != 0.0) {
      return;
    }
    fVar5 = __real_b8d1b717;
    if (param_1 != OffsetBefore) {
      if (param_1 == OffsetAfter) {
        *pfVar1 = __real_38d1b717;
        return;
      }
      fVar5 = fVar4;
      if ((param_1 != NoOffset) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTypes.cpp"
                             ,0x21,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  *pfVar1 = fVar5;
  return;
}

// RefreshTriggerOffset @ 147572cc0

void __thiscall FAnimNotifyEvent::RefreshTriggerOffset(FAnimNotifyEvent *this,Type param_1)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 0.0;
  pfVar1 = &this->TriggerTimeOffset;
  fVar5 = fVar4;
  if (param_1 != NoOffset) {
    if (*pfVar1 != 0.0) {
      return;
    }
    fVar5 = __real_b8d1b717;
    if (param_1 != OffsetBefore) {
      if (param_1 == OffsetAfter) {
        *pfVar1 = __real_38d1b717;
        return;
      }
      fVar5 = fVar4;
      if ((param_1 != NoOffset) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTypes.cpp"
                             ,0x21,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  *pfVar1 = fVar5;
  return;
}

// SetDuration @ 147578e30

void __thiscall FAnimNotifyEvent::SetDuration(FAnimNotifyEvent *this,float param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  float fVar2;
  
  lVar1 = (this->EndLink)._padding_;
  this->Duration = param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 8);
  fVar2 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)this,Absolute);
                    /* WARNING: Could not recover jumptable at 0x000147578e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&this->EndLink,fVar2 + param_1,0);
  return;
}

