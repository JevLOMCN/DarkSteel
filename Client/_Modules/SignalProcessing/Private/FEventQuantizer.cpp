// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 16

// FEventQuantizer @ 1444a4260

FEventQuantizer * __thiscall Audio::FEventQuantizer::FEventQuantizer(FEventQuantizer *this)

{
  FEventQuantizationState *pFVar1;
  longlong lVar2;
  
  (this->QuantizationSettings).NumChannels = 2;
  (this->QuantizationSettings).BeatsPerBar = 4;
  (this->QuantizationSettings).GlobalQuantization = Bar;
  lVar2 = 0xe;
  (this->QuantizationSettings).BeatDivision = 4;
  this->EventQuantizationForSettingsChange = Bar;
  pFVar1 = this->EventQuantizationStates;
  this->FrameCount = 0;
  this->NumFramesPerBar = 0;
  this->NumFramesPerBeat = 0;
  (this->CopiedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CopiedEvents).ArrayNum = 0;
  (this->CopiedEvents).ArrayMax = 0;
  (this->QuantizationSettings).SampleRate = 0;
  (this->QuantizationSettings).BeatsPerMinute = 90.0;
  do {
    pFVar1->FrameCount = 0;
    pFVar1->EventFrameDuration = 0xffffffff;
    (pFVar1->QueuedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->QueuedEvents).ArrayNum = 0;
    (pFVar1->QueuedEvents).ArrayMax = 0;
    (pFVar1->EventListeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->EventListeners).ArrayNum = 0;
    (pFVar1->EventListeners).ArrayMax = 0;
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (this->BPMQuantizationState).FrameCount = 0;
  (this->BPMQuantizationState).EventFrameDuration = 0xffffffff;
  (this->BPMQuantizationState).QueuedEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BPMQuantizationState).QueuedEvents.ArrayNum = 0;
  (this->BPMQuantizationState).QueuedEvents.ArrayMax = 0;
  (this->BPMQuantizationState).EventListeners.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BPMQuantizationState).EventListeners.ArrayNum = 0;
  (this->BPMQuantizationState).EventListeners.ArrayMax = 0;
  this->bQuantizationSettingsSet = false;
  this->bResetEventState = false;
  return this;
}

// ~FEventQuantizer @ 1444a64e0

void __thiscall Audio::FEventQuantizer::~FEventQuantizer(FEventQuantizer *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  TArray<TFunction<void___cdecl(unsigned_int)>,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  
  pFVar2 = (this->BPMQuantizationState).EventListeners.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<void___cdecl(unsigned_int)>,int>
            ((TFunction<void___cdecl(unsigned_int)> *)
             (this->BPMQuantizationState).QueuedEvents.AllocatorInstance.Data,
             (this->BPMQuantizationState).QueuedEvents.ArrayNum);
  pFVar2 = (this->BPMQuantizationState).QueuedEvents.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  lVar4 = 0xe;
  pTVar3 = &(this->BPMQuantizationState).QueuedEvents;
  do {
    lVar1 = (longlong)(pTVar3 + -3) + 8;
    lVar4 = lVar4 + -1;
    if (*(void **)((longlong)(pTVar3 + -2) + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(pTVar3 + -2) + 8));
    }
    DestructItems<TFunction<void___cdecl(unsigned_int)>,int>
              (*(TFunction<void___cdecl(unsigned_int)> **)lVar1,*(int *)(pTVar3 + -2));
    if (*(void **)lVar1 != (void *)0x0) {
      FMemory::Free(*(void **)lVar1);
    }
    pTVar3 = (TArray<TFunction<void___cdecl(unsigned_int)>,TSizedDefaultAllocator<32>_> *)lVar1;
  } while (lVar4 != 0);
  DestructItems<TFunction<void___cdecl(unsigned_int)>,int>
            ((TFunction<void___cdecl(unsigned_int)> *)(this->CopiedEvents).AllocatorInstance.Data,
             (this->CopiedEvents).ArrayNum);
  pFVar2 = (this->CopiedEvents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// EnqueueEvent @ 1444bd1a0

void __thiscall
Audio::FEventQuantizer::EnqueueEvent
          (FEventQuantizer *this,EEventQuantization param_1,
          TFunction<void___cdecl(unsigned_int)> *param_2)

{
  int *piVar1;
  TFunction<void___cdecl(unsigned_int)> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  
  pTVar2 = (TFunction<void___cdecl(unsigned_int)> *)
           this->EventQuantizationStates[param_1].QueuedEvents.AllocatorInstance.Data;
  if ((pTVar2 <= param_2) &&
     (param_2 < pTVar2 + this->EventQuantizationStates[param_1].QueuedEvents.ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar8 = this->EventQuantizationStates[param_1].QueuedEvents.ArrayNum;
  piVar1 = &this->EventQuantizationStates[param_1].QueuedEvents.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&this->EventQuantizationStates[param_1].QueuedEvents.AllocatorInstance
                       ,piVar1);
  }
  this->EventQuantizationStates[param_1].QueuedEvents.ArrayNum = iVar8 + 1;
  pFVar10 = this->EventQuantizationStates[param_1].QueuedEvents.AllocatorInstance.Data +
            (longlong)iVar8 * 0x30;
  *(longlong *)pFVar10 = *(longlong *)param_2;
  *(longlong *)(pFVar10 + 0x28) = *(longlong *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar4 = *(undefined4 *)&param_2->field_0x14;
  uVar5 = *(undefined4 *)&param_2->field_0x18;
  uVar6 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)(pFVar10 + 0x10) = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)(pFVar10 + 0x14) = uVar4;
  *(undefined4 *)(pFVar10 + 0x18) = uVar5;
  *(undefined4 *)(pFVar10 + 0x1c) = uVar6;
  *(longlong *)(pFVar10 + 0x20) = *(longlong *)&param_2->field_0x20;
  if (*(longlong *)pFVar10 != 0) {
    *(undefined8 *)param_2 = 0;
    return;
  }
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// GetDurationInFrames @ 1444bfc90

uint __thiscall
Audio::FEventQuantizer::GetDurationInFrames(FEventQuantizer *this,int param_1,float param_2)

{
  return (uint)(longlong)
               ((float)(this->NumFramesPerBeat * (this->QuantizationSettings).BeatsPerBar * param_1)
               + (float)this->NumFramesPerBeat * param_2);
}

// GetPlaybacktimeSeconds @ 1444c0900

float __thiscall Audio::FEventQuantizer::GetPlaybacktimeSeconds(FEventQuantizer *this)

{
  return (float)this->FrameCount / (float)(this->QuantizationSettings).SampleRate;
}

// NotifyEventForState @ 1444c7e80

void __thiscall
Audio::FEventQuantizer::NotifyEventForState
          (FEventQuantizer *this,FEventQuantizationState *param_1,EEventQuantization param_2,
          bool param_3,int param_4)

{
  TArray<TFunction<void___cdecl(unsigned_int)>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TFunction<void___cdecl(unsigned_int)>,TSizedDefaultAllocator<32>_> *pTVar3;
  TFunction<void___cdecl(unsigned_int)> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  undefined1 local_68;
  undefined1 local_67 [3];
  int local_64;
  int local_60;
  uint local_58;
  
  if ((param_1->FrameCount == 0xffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.FrameCount != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EventQuantizer.cpp"
                         ,0xca,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->EventFrameDuration == 0xffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.EventFrameDuration != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EventQuantizer.cpp"
                         ,0xcb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar12 = 0;
  bVar6 = false;
  local_64 = 0;
  local_58 = param_1->FrameCount + param_4;
  if (local_58 < param_1->EventFrameDuration) {
    param_1->FrameCount = local_58;
  }
  else {
    iVar15 = (param_1->EventFrameDuration - param_1->FrameCount) + -1;
    param_4 = param_4 - iVar15;
    if ((param_4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PostEventFramesRemaining >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EventQuantizer.cpp"
                           ,0xd8,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    do {
      if (0 < (param_1->QueuedEvents).ArrayNum) {
        pTVar4 = (TFunction<void___cdecl(unsigned_int)> *)
                 (this->CopiedEvents).AllocatorInstance.Data;
        pTVar1 = &this->CopiedEvents;
        piVar2 = &(this->CopiedEvents).ArrayMax;
        iVar12 = (this->CopiedEvents).ArrayNum;
        if ((this->CopiedEvents).ArrayMax < 0) {
          DestructItems<TFunction<void___cdecl(unsigned_int)>,int>(pTVar4,iVar12);
          (this->CopiedEvents).ArrayNum = 0;
          if (*piVar2 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,0,&pTVar1->AllocatorInstance,0,piVar2);
          }
        }
        else {
          DestructItems<TFunction<void___cdecl(unsigned_int)>,int>(pTVar4,iVar12);
          (this->CopiedEvents).ArrayNum = 0;
        }
        pTVar3 = &param_1->QueuedEvents;
        if ((pTVar1 == pTVar3) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = (param_1->QueuedEvents).ArrayNum;
        if (iVar12 != 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x30,0x10,iVar12,&pTVar1->AllocatorInstance,
                             &(this->CopiedEvents).ArrayNum,&(this->CopiedEvents).ArrayMax);
          memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x30,
                  (pTVar3->AllocatorInstance).Data,(longlong)iVar12 * 0x30);
          (param_1->QueuedEvents).ArrayNum = 0;
        }
        piVar2 = &(param_1->QueuedEvents).ArrayMax;
        pTVar4 = (TFunction<void___cdecl(unsigned_int)> *)(pTVar3->AllocatorInstance).Data;
        if ((param_1->QueuedEvents).ArrayMax < 0) {
          DestructItems<TFunction<void___cdecl(unsigned_int)>,int>(pTVar4,0);
          (param_1->QueuedEvents).ArrayNum = 0;
          if (*piVar2 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,0,&pTVar3->AllocatorInstance,0,piVar2);
          }
        }
        else {
          DestructItems<TFunction<void___cdecl(unsigned_int)>,int>(pTVar4,0);
          (param_1->QueuedEvents).ArrayNum = 0;
        }
        iVar8 = (this->CopiedEvents).ArrayNum;
        pFVar13 = (this->CopiedEvents).AllocatorInstance.Data;
        pFVar14 = pFVar13 + (longlong)iVar8 * 0x30;
        while( true ) {
          if ((this->CopiedEvents).ArrayNum != iVar8) {
            local_68 = 0;
            `TCheckedPointerIterator<TFunction<void___cdecl(unsigned_int)>,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_68);
          }
          iVar12 = local_64;
          if (pFVar13 == pFVar14) break;
          local_60 = iVar15;
          UE::Core::Private::Function::CheckCallable(*(void **)pFVar13);
          pFVar10 = *(FScriptContainerElement **)(pFVar13 + 0x28);
          pcVar5 = *(code **)pFVar13;
          if (pFVar10 == (FScriptContainerElement *)0x0) {
            pFVar10 = pFVar13 + 0x10;
          }
          uVar9 = (**(code **)(*(longlong *)pFVar10 + 8))();
          (*pcVar5)(uVar9);
          pFVar13 = pFVar13 + 0x30;
        }
      }
      if ((param_2 == None) || (param_3)) {
        bVar6 = true;
        break;
      }
      pFVar14 = (param_1->EventListeners).AllocatorInstance.Data;
      iVar12 = (param_1->EventListeners).ArrayNum;
      pFVar13 = pFVar14 + (longlong)iVar12 * 8;
      while( true ) {
        if ((param_1->EventListeners).ArrayNum != iVar12) {
          local_67[0] = 0;
          `TCheckedPointerIterator<Audio::IQuantizedEventListener_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_67);
        }
        if (pFVar14 == pFVar13) break;
        if (*(undefined8 **)pFVar14 != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)pFVar14)();
        }
        pFVar14 = pFVar14 + 8;
      }
      param_4 = param_4 - param_1->EventFrameDuration;
      iVar12 = local_64 + 1;
      iVar15 = iVar15 + param_1->EventFrameDuration;
      local_64 = iVar12;
    } while (-1 < param_4);
    uVar11 = local_58 - param_1->EventFrameDuration * iVar12;
    if ((int)uVar11 < 0) {
      uVar11 = 0;
    }
    param_1->FrameCount = uVar11;
    if (bVar6) {
      param_1->FrameCount = 0;
      uVar11 = 0;
    }
    if ((param_1->EventFrameDuration <= uVar11) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.FrameCount >= 0 && State.FrameCount < State.EventFrameDuration",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EventQuantizer.cpp"
                           ,0x119,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// NotifyEvents @ 1444c8260

void __thiscall Audio::FEventQuantizer::NotifyEvents(FEventQuantizer *this,int param_1)

{
  FEventQuantizationState *pFVar1;
  int iVar2;
  
  if (this->bQuantizationSettingsSet != false) {
    NotifyEventForState(this,&this->BPMQuantizationState,Count,true,param_1);
    iVar2 = 0;
    pFVar1 = this->EventQuantizationStates;
    do {
      NotifyEventForState(this,pFVar1,(EEventQuantization)iVar2,false,param_1);
      iVar2 = iVar2 + 1;
      pFVar1 = pFVar1 + 1;
    } while (iVar2 < 0xe);
    if (this->bResetEventState != false) {
      this->bResetEventState = false;
      ResetEventState(this);
    }
    this->FrameCount = this->FrameCount + param_1;
  }
  return;
}

// RegisterListenerForEvent @ 1444e0cb0

void __thiscall
Audio::FEventQuantizer::RegisterListenerForEvent
          (FEventQuantizer *this,IQuantizedEventListener *param_1,EEventQuantization param_2)

{
  IQuantizedEventListener *local_res10 [3];
  
  if (param_2 != None) {
    local_res10[0] = param_1;
    TArray<Audio::IQuantizedEventListener_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<Audio::IQuantizedEventListener_*_const_&>
              (&this->EventQuantizationStates[param_2].EventListeners,local_res10);
  }
  return;
}

// ResetEventState @ 1444e1b90

void __thiscall Audio::FEventQuantizer::ResetEventState(FEventQuantizer *this)

{
  EEventQuantization EVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  
  fVar8 = __real_3f2aaaab;
  fVar7 = __real_3eaaaaab;
  fVar6 = __real_3e800000;
  fVar5 = __real_3e2aaaab;
  fVar4 = __real_3f000000;
  fVar3 = __real_3e000000;
  fVar13 = (this->QuantizationSettings).BeatsPerMinute;
  if (fVar13 <= __real_3f800000) {
    fVar13 = __real_3f800000;
  }
  puVar12 = &this->EventQuantizationStates[0].EventFrameDuration;
  fVar14 = (float)(this->QuantizationSettings).BeatDivision;
  if (fVar14 <= __real_3f800000) {
    fVar14 = __real_3f800000;
  }
  uVar10 = (uint)(longlong)
                 ((__real_43700000 / (fVar14 * fVar13)) *
                 (float)(this->QuantizationSettings).SampleRate);
  this->NumFramesPerBeat = uVar10;
  uVar10 = uVar10 * (this->QuantizationSettings).BeatsPerBar;
  uVar11 = 0x20;
  if (0x20 < uVar10) {
    uVar11 = uVar10;
  }
  uVar10 = 0;
  this->NumFramesPerBar = uVar11;
  do {
    uVar11 = this->NumFramesPerBar;
    *puVar12 = uVar11;
    switch(uVar10 & 0xff) {
    case 0:
      *puVar12 = 1;
      break;
    case 1:
      *puVar12 = uVar11 * 8;
      break;
    case 2:
      *puVar12 = uVar11 * 4;
      break;
    case 3:
      *puVar12 = uVar11 * 2;
      break;
    case 4:
      break;
    case 6:
      uVar11 = (uint)((ulonglong)uVar11 * 0xaaaaaaab >> 0x20);
    case 5:
      *puVar12 = uVar11 >> 1;
      break;
    case 7:
      *puVar12 = this->NumFramesPerBeat;
      break;
    case 8:
      *puVar12 = (uint)(longlong)((float)this->NumFramesPerBeat * fVar8);
      break;
    case 9:
      *puVar12 = (uint)(longlong)((float)this->NumFramesPerBeat * fVar4);
      break;
    case 10:
      *puVar12 = (uint)(longlong)((float)this->NumFramesPerBeat * fVar7);
      break;
    case 0xb:
      *puVar12 = (uint)(longlong)((float)this->NumFramesPerBeat * fVar6);
      break;
    case 0xc:
      *puVar12 = (uint)(longlong)((float)this->NumFramesPerBeat * fVar5);
      break;
    case 0xd:
      *puVar12 = (uint)(longlong)((float)this->NumFramesPerBeat * fVar3);
      break;
    default:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EventQuantizer.cpp"
                         ,0x90,L"Need to update this loop for new quantization enumeration");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar10 = uVar10 + 1;
    ((FEventQuantizationState *)(puVar12 + -1))->FrameCount = *puVar12 - 1;
    puVar12 = puVar12 + 10;
  } while ((int)uVar10 < 0xe);
  EVar1 = this->EventQuantizationForSettingsChange;
  (this->BPMQuantizationState).FrameCount = 0;
  (this->BPMQuantizationState).EventFrameDuration =
       this->EventQuantizationStates[EVar1].EventFrameDuration;
  this->FrameCount = 0;
  return;
}

// SetBPM @ 1444e29a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001444e2b19) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x0001444e2b1d */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall Audio::FEventQuantizer::SetBPM(FEventQuantizer *this,float param_1)

{
  int *piVar1;
  TArray<TFunction<void___cdecl(unsigned_int)>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  code **local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_4c;
  code *local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((this->bQuantizationSettingsSet != false) &&
     (__real_322bcc77 <
      (float)((uint)((this->QuantizationSettings).BeatsPerMinute - param_1) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FEventQuantizer::SetBPM'::`2'::<lambda_1>,0,0>::
                _vftable_;
    pTVar2 = &(this->BPMQuantizationState).QueuedEvents;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    uStack_24 = local_4c;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FEventQuantizer::SetBPM'::__l2::<lambda_1>,void,unsigned_int>
                  ::Call;
    local_28 = param_1;
    local_20 = 0;
    uStack_30 = this;
    if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
       (lVar8 = (longlong)(this->BPMQuantizationState).QueuedEvents.ArrayMax,
       (FScriptContainerElement *)local_48 < pFVar3 + lVar8 * 0x30)) {
      local_70 = (longlong)(this->BPMQuantizationState).QueuedEvents.ArrayNum;
      local_68 = 0x30;
      local_88 = local_48;
      local_80 = pFVar3;
      local_78 = lVar8;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->BPMQuantizationState).QueuedEvents.ArrayNum;
    piVar1 = &(this->BPMQuantizationState).QueuedEvents.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar2->AllocatorInstance,piVar1);
    }
    lVar8 = (longlong)iVar7;
    (this->BPMQuantizationState).QueuedEvents.ArrayNum = iVar7 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    *(code **)(pFVar4 + lVar8 * 0x30) = local_48[0];
    *(undefined8 *)(pFVar4 + lVar8 * 0x30 + 0x28) = local_20;
    local_20 = 0;
    pFVar3 = pFVar4 + lVar8 * 0x30 + 0x10;
    *(undefined4 *)pFVar3 = (undefined4)local_38;
    *(undefined4 *)(pFVar3 + 4) = local_38._4_4_;
    *(undefined4 *)(pFVar3 + 8) = (undefined4)uStack_30;
    *(undefined4 *)(pFVar3 + 0xc) = uStack_30._4_4_;
    *(ulonglong *)(pFVar4 + lVar8 * 0x30 + 0x20) = CONCAT44(uStack_24,local_28);
    if ((*(longlong *)(pFVar4 + lVar8 * 0x30) == 0) && (local_48[0] != (code *)0x0)) {
      (*(code *)local_38[2])();
    }
  }
  return;
}

// SetBPMInternal @ 1444e2b50

void __thiscall Audio::FEventQuantizer::SetBPMInternal(FEventQuantizer *this,float param_1)

{
  (this->QuantizationSettings).BeatsPerMinute = param_1;
  return;
}

// SetBeatDivision @ 1444e2ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001444e303e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x0001444e3042 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall Audio::FEventQuantizer::SetBeatDivision(FEventQuantizer *this,ushort param_1)

{
  int *piVar1;
  TArray<TFunction<void___cdecl(unsigned_int)>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_a8 [32];
  code **local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_4e;
  undefined2 local_4a;
  code *local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  ushort local_28;
  undefined4 uStack_26;
  undefined2 uStack_22;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((this->QuantizationSettings).BeatDivision != param_1) {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FEventQuantizer::SetBeatDivision'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    pTVar2 = &(this->BPMQuantizationState).QueuedEvents;
    uStack_26 = local_4e;
    uStack_22 = local_4a;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FEventQuantizer::SetBeatDivision'::__l2::<lambda_1>,void,unsigned_int>
                  ::Call;
    local_28 = param_1;
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    local_20 = 0;
    uStack_30 = this;
    if ((pFVar7 <= (FScriptContainerElement *)local_48) &&
       (lVar6 = (longlong)(this->BPMQuantizationState).QueuedEvents.ArrayMax,
       (FScriptContainerElement *)local_48 < pFVar7 + lVar6 * 0x30)) {
      local_70 = (longlong)(this->BPMQuantizationState).QueuedEvents.ArrayNum;
      local_68 = 0x30;
      local_88 = local_48;
      local_80 = pFVar7;
      local_78 = lVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->BPMQuantizationState).QueuedEvents.ArrayNum;
    piVar1 = &(this->BPMQuantizationState).QueuedEvents.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->BPMQuantizationState).QueuedEvents.ArrayNum = iVar5 + 1;
    pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x30;
    *(code **)pFVar7 = local_48[0];
    *(longlong *)(pFVar7 + 0x28) = local_20;
    local_20 = 0;
    *(undefined4 *)(pFVar7 + 0x10) = (undefined4)local_38;
    *(undefined4 *)(pFVar7 + 0x14) = local_38._4_4_;
    *(undefined4 *)(pFVar7 + 0x18) = (undefined4)uStack_30;
    *(undefined4 *)(pFVar7 + 0x1c) = uStack_30._4_4_;
    *(longlong *)(pFVar7 + 0x20) = CONCAT26(uStack_22,CONCAT42(uStack_26,local_28));
    if ((*(longlong *)pFVar7 == 0) && (local_48[0] != (code *)0x0)) {
      (*(code *)local_38[2])();
    }
  }
  return;
}

// SetQuantizationSettings @ 1444e5080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001444e523b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x0001444e523f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
Audio::FEventQuantizer::SetQuantizationSettings
          (FEventQuantizer *this,FEventQuantizationSettings *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  TArray<TFunction<void___cdecl(unsigned_int)>,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStack_b8 [32];
  code **local_98;
  FScriptContainerElement *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  FEventQuantizer *local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  code *local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  lVar9._0_4_ = param_1->SampleRate;
  lVar9._4_4_ = param_1->NumChannels;
  lVar3._0_4_ = (this->QuantizationSettings).SampleRate;
  lVar3._4_4_ = (this->QuantizationSettings).NumChannels;
  if (((lVar9 != lVar3) ||
      (lVar4._0_4_ = param_1->BeatsPerMinute, lVar4._4_4_ = param_1->BeatsPerBar,
      lVar5._0_4_ = (this->QuantizationSettings).BeatsPerMinute,
      lVar5._4_4_ = (this->QuantizationSettings).BeatsPerBar, lVar4 != lVar5)) ||
     (iVar2._0_1_ = param_1->GlobalQuantization, iVar2._1_1_ = param_1->field_0x11,
     iVar2._2_2_ = param_1->BeatDivision,
     iVar8._0_1_ = (this->QuantizationSettings).GlobalQuantization,
     iVar8._1_1_ = (this->QuantizationSettings).field_0x11,
     iVar8._2_2_ = (this->QuantizationSettings).BeatDivision, iVar2 != iVar8)) {
    if (this->bQuantizationSettingsSet == false) {
      SetQuantizationSettingsInternal(this,param_1);
    }
    else {
      uStack_60._0_4_ = param_1->SampleRate;
      uStack_60._4_4_ = param_1->NumChannels;
      uStack_58._0_4_ = param_1->BeatsPerMinute;
      uStack_58._4_4_ = param_1->BeatsPerBar;
      uStack_50._0_1_ = param_1->GlobalQuantization;
      uStack_50._1_1_ = param_1->field_0x11;
      uStack_50._2_2_ = param_1->BeatDivision;
      local_48[0] = (code *)0x0;
      local_68 = this;
      local_20 = FMemory::Malloc(0x28,8);
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FEventQuantizer::SetQuantizationSettings'::`10'::<lambda_1>,0,1>
                   ::_vftable_;
      local_20[1] = local_68;
      local_20[2] = uStack_60;
      local_20[3] = uStack_58;
      local_20[4] = CONCAT44(uStack_4c,uStack_50);
      if (local_20 + 1 != (undefined8 *)0x0) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FEventQuantizer::SetQuantizationSettings'::__l10::<lambda_1>,void,unsigned_int>
                      ::Call;
      }
      pTVar11 = &(this->BPMQuantizationState).QueuedEvents;
      pFVar10 = (pTVar11->AllocatorInstance).Data;
      if ((pFVar10 <= (FScriptContainerElement *)local_48) &&
         (lVar9 = (longlong)(this->BPMQuantizationState).QueuedEvents.ArrayMax,
         (FScriptContainerElement *)local_48 < pFVar10 + lVar9 * 0x30)) {
        local_80 = (longlong)(this->BPMQuantizationState).QueuedEvents.ArrayNum;
        local_78 = 0x30;
        local_98 = local_48;
        local_90 = pFVar10;
        local_88 = lVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = (this->BPMQuantizationState).QueuedEvents.ArrayNum;
      piVar1 = &(this->BPMQuantizationState).QueuedEvents.ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,&pTVar11->AllocatorInstance,piVar1);
      }
      (this->BPMQuantizationState).QueuedEvents.ArrayNum = iVar8 + 1;
      pFVar10 = (pTVar11->AllocatorInstance).Data + (longlong)iVar8 * 0x30;
      *(code **)pFVar10 = local_48[0];
      *(undefined8 **)(pFVar10 + 0x28) = local_20;
      local_20 = (undefined8 *)0x0;
      *(undefined4 *)(pFVar10 + 0x10) = local_38;
      *(undefined4 *)(pFVar10 + 0x14) = uStack_34;
      *(undefined4 *)(pFVar10 + 0x18) = uStack_30;
      *(undefined4 *)(pFVar10 + 0x1c) = uStack_2c;
      *(longlong *)(pFVar10 + 0x20) = local_28;
      if ((*(longlong *)pFVar10 == 0) && (local_48[0] != (code *)0x0)) {
        (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
      }
    }
  }
  return;
}

// SetQuantizationSettingsInternal @ 1444e5270

void __thiscall
Audio::FEventQuantizer::SetQuantizationSettingsInternal
          (FEventQuantizer *this,FEventQuantizationSettings *param_1)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = param_1->NumChannels;
  fVar3 = param_1->BeatsPerMinute;
  uVar4 = param_1->BeatsPerBar;
  (this->QuantizationSettings).SampleRate = param_1->SampleRate;
  (this->QuantizationSettings).NumChannels = uVar7;
  (this->QuantizationSettings).BeatsPerMinute = fVar3;
  (this->QuantizationSettings).BeatsPerBar = uVar4;
  uVar5 = param_1->field_0x11;
  uVar6 = param_1->BeatDivision;
  (this->QuantizationSettings).GlobalQuantization = param_1->GlobalQuantization;
  (this->QuantizationSettings).field_0x11 = uVar5;
  (this->QuantizationSettings).BeatDivision = uVar6;
  uVar7 = 1;
  if (1 < (this->QuantizationSettings).BeatsPerBar) {
    uVar7 = (this->QuantizationSettings).BeatsPerBar;
  }
  (this->QuantizationSettings).BeatsPerBar = uVar7;
  uVar8 = (ulonglong)(this->QuantizationSettings).BeatsPerMinute;
  uVar9 = 1;
  if (1 < (uint)uVar8) {
    uVar9 = uVar8 & 0xffffffff;
  }
  uVar7 = 1;
  if (1 < (this->QuantizationSettings).NumChannels) {
    uVar7 = (this->QuantizationSettings).NumChannels;
  }
  (this->QuantizationSettings).NumChannels = uVar7;
  (this->QuantizationSettings).BeatsPerMinute = (float)uVar9;
  (this->QuantizationSettings).SampleRate = param_1->SampleRate;
  uVar7 = 1;
  if (param_1->BeatDivision != 0) {
    uVar7 = (uint)param_1->BeatDivision;
  }
  uVar8 = (ulonglong)(uVar7 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  bVar1 = this->bQuantizationSettingsSet;
  (this->QuantizationSettings).BeatDivision = 1 << ((byte)lVar2 & 0x1f);
  if ((bVar1 == false) && (param_1->SampleRate != 0)) {
    this->bQuantizationSettingsSet = true;
    ResetEventState(this);
    return;
  }
  this->bResetEventState = true;
  return;
}

// UnregisterListenerForEvent @ 1444e72f0

void __thiscall
Audio::FEventQuantizer::UnregisterListenerForEvent
          (FEventQuantizer *this,IQuantizedEventListener *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TArray<Audio::IQuantizedEventListener_*,TSizedDefaultAllocator<32>_> *pTVar9;
  IQuantizedEventListener *local_res10;
  longlong local_res18;
  
  pTVar9 = &this->EventQuantizationStates[0].EventListeners;
  local_res18 = 0xe;
  local_res10 = param_1;
  do {
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)pTVar9->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), param_1 = local_res10, bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = pTVar9->ArrayNum;
    if (iVar1 != 0) {
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      iVar8 = 0;
      lVar5 = 0;
      bVar4 = *(IQuantizedEventListener **)pFVar2 != param_1;
      iVar6 = 0;
      do {
        iVar7 = iVar6;
        do {
          lVar5 = lVar5 + 1;
          iVar7 = iVar7 + 1;
          if (iVar1 <= lVar5) break;
        } while (bVar4 == (*(IQuantizedEventListener **)(pFVar2 + lVar5 * 8) != param_1));
        if (bVar4 != false) {
          if (iVar8 != iVar6) {
            memmove(pFVar2 + (longlong)iVar8 * 8,pFVar2 + (longlong)iVar6 * 8,
                    (longlong)(iVar7 - iVar6) << 3);
            param_1 = local_res10;
          }
          iVar8 = iVar8 + (iVar7 - iVar6);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar6 = iVar7;
      } while (lVar5 < iVar1);
      pTVar9->ArrayNum = iVar8;
    }
    pTVar9 = (TArray<Audio::IQuantizedEventListener_*,TSizedDefaultAllocator<32>_> *)
             ((longlong)(pTVar9 + 2) + 8);
    local_res18 = local_res18 + -1;
    if (local_res18 == 0) {
      return;
    }
  } while( true );
}

// UnregisterListenerForEvent @ 1444e7460

void __thiscall
Audio::FEventQuantizer::UnregisterListenerForEvent
          (FEventQuantizer *this,IQuantizedEventListener *param_1,EEventQuantization param_2)

{
  IQuantizedEventListener *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<Audio::IQuantizedEventListener_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->EventQuantizationStates[param_2].EventListeners,local_res10);
  return;
}

