// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 41

// operator=<TSizedDefaultAllocator<32>_> @ 1464d0a10

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
TArray<float,TAlignedHeapAllocator<16>_>::operator=<TSizedDefaultAllocator<32>_>
          (TArray<float,TAlignedHeapAllocator<16>_> *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = (param_1->AllocatorInstance).Data;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// AddUniqueImpl<USoundSubmix_*_const_&> @ 1464d10f0

int __thiscall
TArray<USoundSubmix_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<USoundSubmix_*_const_&>
          (TArray<USoundSubmix_*,TSizedDefaultAllocator<32>_> *this,USoundSubmix **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(USoundSubmix **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(USoundSubmix **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_const_&> @ 1464d11f0

int __thiscall
TArray<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TSizedDefaultAllocator<32>_>
::
AddUniqueImpl<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_const_&>
          (TArray<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TSizedDefaultAllocator<32>_>
           *this,TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *param_1)

{
  FScriptContainerElement *pFVar1;
  UObjectBase *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UObject **)&pFVar5->field_0x0 == param_1->Object) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(undefined8 *)(pFVar1 + (longlong)iVar4 * 8) = 0;
  this_00 = (UObjectBase *)param_1->Object;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    *(UObjectBase **)(pFVar1 + (longlong)iVar4 * 8) = this_00;
  }
  return iVar4;
}

// TArray<Audio::FAudioBusSend,TSizedDefaultAllocator<32>_> @ 1464d7440

TArray<Audio::FAudioBusSend,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Audio::FAudioBusSend,TSizedDefaultAllocator<32>_>::
TArray<Audio::FAudioBusSend,TSizedDefaultAllocator<32>_>
          (TArray<Audio::FAudioBusSend,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> @ 1464d7460

TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_>::
TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_>
          (TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *this,
          TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FInitAudioBusSend *pFVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FInitAudioBusSend *)(param_1->AllocatorInstance).Data;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<Audio::FInitAudioBusSend,Audio::FInitAudioBusSend,int>
            ((this->AllocatorInstance).Data,pFVar2,iVar1);
  return this;
}

// TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> @ 1464d74f0

TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_>::
TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_>
          (TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<Audio::FAudioBusSend,TSizedDefaultAllocator<32>_> @ 1464da260

void __thiscall
TArray<Audio::FAudioBusSend,TSizedDefaultAllocator<32>_>::
~TArray<Audio::FAudioBusSend,TSizedDefaultAllocator<32>_>
          (TArray<Audio::FAudioBusSend,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> @ 1464da280

void __thiscall
TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_>::
~TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_>
          (TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Audio::FInitAudioBusSend,int>
            ((FInitAudioBusSend *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1464dd180

TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> * __thiscall
TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>::operator=
          (TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *this,
          TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FQuartzGameThreadSubscriber *pFVar3;
  
  if (this != param_1) {
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FQuartzGameThreadSubscriber *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 1464dd220

TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *this,
          TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FSourceEffectChainEntry *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FSourceEffectChainEntry *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// Remove @ 14651c2b0

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::Remove
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(int *)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(int *)(pFVar1 + lVar6 * 4) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 4,pFVar1 + (longlong)iVar7 * 4,
                (longlong)(iVar8 - iVar7) << 2);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// Remove @ 14651c420

int __thiscall
TArray<Audio::FAudioBusKey,TSizedDefaultAllocator<32>_>::Remove
          (TArray<Audio::FAudioBusKey,TSizedDefaultAllocator<32>_> *this,FAudioBusKey *param_1)

{
  FAudioBusKey *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  
  pFVar1 = (FAudioBusKey *)(this->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  lVar7 = (longlong)iVar6;
  if (iVar6 == 0) {
    return 0;
  }
  iVar11 = 0;
  pFVar2 = (this->AllocatorInstance).Data;
  if ((*(uint *)pFVar2 == param_1->ObjectId) && (*(uint *)(pFVar2 + 4) == param_1->InstanceId)) {
    bVar12 = 0;
  }
  else {
    bVar12 = 1;
  }
  lVar8 = 0;
  iVar9 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar10 = iVar9 + 1;
    if (lVar8 < lVar7) {
      do {
        if ((*(uint *)(pFVar2 + lVar8 * 8) == param_1->ObjectId) &&
           (*(uint *)(pFVar2 + (lVar8 * 2 + 1) * 4) == param_1->InstanceId)) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
        if (bVar12 != bVar5) break;
        iVar10 = iVar10 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar7);
    }
    if (bVar12 != 0) {
      if (iVar11 != iVar9) {
        memmove(pFVar2 + (longlong)iVar11 * 8,pFVar2 + (longlong)iVar9 * 8,
                (longlong)(iVar10 - iVar9) << 3);
      }
      iVar11 = iVar11 + (iVar10 - iVar9);
    }
    bVar12 = bVar12 ^ 1;
    iVar9 = iVar10;
    if (lVar7 <= lVar8) {
      this->ArrayNum = iVar11;
      return iVar6 - iVar11;
    }
  } while( true );
}

// Remove @ 14651c5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

int __thiscall
TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<Audio::FMixerSubmix,1> *param_1)

{
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar1 = (TSharedPtr<Audio::FMixerSubmix,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  bVar4 = *(FMixerSubmix **)pFVar2 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      do {
        if (bVar4 != (*(FMixerSubmix **)pFVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar4 == false) {
      DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>
                ((TSharedPtr<Audio::FMixerSubmix,1> *)(pFVar2 + (longlong)iVar10 * 0x10),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0x10,pFVar2 + (longlong)iVar10 * 0x10,
                (longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar10 = iVar11;
    if (lVar6 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar5 - iVar12;
    }
  } while( true );
}

// RemoveAtSwapImpl @ 14651c820

void __thiscall
TArray<Audio::FMixerSourceSubmixSend,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<Audio::FMixerSourceSubmixSend,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  plVar3 = *(longlong **)(pFVar2 + (longlong)param_1 * 0x28 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 0x28,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x28,
            (longlong)iVar4 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14651c8d0

void __thiscall
TArray<TSharedPtr<Audio::FMixerSourceBuffer,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<Audio::FMixerSourceBuffer,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14651c950

void __thiscall
TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSingleSwap @ 14651d370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<USoundSubmix_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
          (TArray<USoundSubmix_*,TSizedDefaultAllocator<32>_> *this,USoundSubmix **param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar7 = pFVar1;
    do {
      if (*(USoundSubmix **)pFVar7 == *param_1) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar5 = 0;
        if ((int)(uVar6 + 1) <= this->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar4 = this->ArrayNum + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar6 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar4) * 8,
                  (longlong)iVar4 << 3);
        }
        iVar4 = this->ArrayNum + -1;
        this->ArrayNum = iVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
        }
        return 1;
      }
      pFVar7 = pFVar7 + 8;
    } while (pFVar7 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return 0;
}

// RemoveSwap @ 14651e090

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

int __thiscall
TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<Audio::FMixerSubmix,1> *param_1,EAllowShrinking param_2)

{
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  pTVar1 = (TSharedPtr<Audio::FMixerSubmix,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    iVar10 = iVar5;
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar10) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar7 = uVar8;
      if (*(FMixerSubmix **)((this->AllocatorInstance).Data + lVar9) == param_1->Object) {
        uVar7 = uVar8 - 1;
        lVar9 = lVar9 + -0x10;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        RemoveAtSwapImpl(this,uVar8);
      }
      iVar10 = this->ArrayNum;
      uVar8 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// SetNum @ 1465207c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TAlignedHeapAllocator<16>_>::SetNum
          (TArray<float,TAlignedHeapAllocator<16>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 4,0,(longlong)(param_1 - iVar5) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FQuartzTickableObject_*_const_&> @ 1465370b0

int __thiscall
TArray<FQuartzTickableObject_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FQuartzTickableObject_*_const_&>
          (TArray<FQuartzTickableObject_*,TSizedDefaultAllocator<32>_> *this,
          FQuartzTickableObject **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FQuartzTickableObject **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FQuartzTickableObject **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>_const_&> @ 1465371b0

int __thiscall
TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
::
AddUniqueImpl<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>_const_&>
          (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
           *this,TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
                 *param_1)

{
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
            *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Object == param_1->Object) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar1 >> 4);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar7 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
    **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// AddUniqueImpl<TWeakPtr<ISubmixBufferListener,1>_> @ 1465372e0

int __thiscall
TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakPtr<ISubmixBufferListener,1>_>
          (TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<ISubmixBufferListener,1> *param_1)

{
  TWeakPtr<ISubmixBufferListener,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pTVar1 = (TWeakPtr<ISubmixBufferListener,1> *)(this->AllocatorInstance).Data;
    if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    pFVar5 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(ISubmixBufferListener **)pFVar5 = param_1->Object;
    *(TReferenceControllerBase<1> **)(pFVar5 + 8) =
         (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (ISubmixBufferListener *)0x0;
  }
  return iVar4;
}

// TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> @ 14653c3b0

TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_>::
TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_>
          (TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_> @ 14653c3d0

TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
::
TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
           *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> @ 14653f610

void __thiscall
TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_>::
~TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_>
          (TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FSoundSourceBusSendInfo,int>
            ((FSoundSourceBusSendInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_> @ 14653f650

void __thiscall
TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
::
~TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,int>
            ((TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
              *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 146541760

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
TArray<float,TAlignedHeapAllocator<16>_>::operator=
          (TArray<float,TAlignedHeapAllocator<16>_> *this,
          TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// operator= @ 1465417c0

TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FSoundSourceBusSendInfo *pFVar3;
  
  if (this != param_1) {
    DestructItems<FSoundSourceBusSendInfo,int>
              ((FSoundSourceBusSendInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FSoundSourceBusSendInfo *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FSoundSourceBusSendInfo,FSoundSourceBusSendInfo,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146541860

TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FSoundSubmixSendInfo *pFVar3;
  
  if (this != param_1) {
    DestructItems<FSoundSubmixSendInfo,int>
              ((FSoundSubmixSendInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FSoundSubmixSendInfo *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FSoundSubmixSendInfo,FSoundSubmixSendInfo,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146541900

TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>::operator=
          (void *this,TArray<Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    *(int *)((longlong)this + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)this + 0xc) == 0)) {
      *(int *)((longlong)this + 0xc) = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,*(int *)((longlong)this + 0xc),this,iVar1,(int *)((longlong)this + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// Find @ 146553ab0

int __thiscall
TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<ISubmixBufferListener,1> *param_1)

{
  int iVar1;
  TWeakPtr<ISubmixBufferListener,1> *pTVar2;
  bool bVar3;
  TWeakPtr<ISubmixBufferListener,1> *this_00;
  
  pTVar2 = (TWeakPtr<ISubmixBufferListener,1> *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pTVar2;
  while( true ) {
    if (this_00 == pTVar2 + iVar1) {
      return -1;
    }
    bVar3 = TWeakPtr<ISubmixBufferListener,1>::UEOpEquals<ISubmixBufferListener>(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pTVar2 >> 4);
}

// Init @ 14655c5d0

void __thiscall
TArray<enum_Audio::ESoundFileChannelMap::Type,TSizedDefaultAllocator<32>_>::Init
          (void *this,Type *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar5);
  }
  piVar1 = (int *)((longlong)this + 0xc);
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_2,this,0,piVar1);
  }
  if (0 < param_2) {
    do {
      if ((*(Type **)this <= param_1) && (param_1 < *(Type **)this + *piVar1)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = *(int *)((longlong)this + 8);
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,this,piVar1);
      }
      *(int *)((longlong)this + 8) = iVar4 + 1;
      *(Type *)(*(longlong *)this + (longlong)iVar4 * 4) = *param_1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// Remove @ 14656c650

int __thiscall
TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<ISubmixBufferListener,1> *param_1)

{
  TWeakPtr<ISubmixBufferListener,1> *pTVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pTVar1 = (TWeakPtr<ISubmixBufferListener,1> *)(this->AllocatorInstance).Data;
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  iVar9 = 0;
  if (iVar6 == 0) {
    return 0;
  }
  pTVar1 = (TWeakPtr<ISubmixBufferListener,1> *)(this->AllocatorInstance).Data;
  bVar4 = TWeakPtr<ISubmixBufferListener,1>::UEOpEquals<ISubmixBufferListener>(pTVar1,param_1);
  bVar4 = !bVar4;
  iVar7 = 0;
  do {
    iVar3 = iVar7;
    do {
      iVar3 = iVar3 + 1;
      if (iVar6 <= iVar3) break;
      bVar5 = TWeakPtr<ISubmixBufferListener,1>::UEOpEquals<ISubmixBufferListener>
                        (pTVar1 + iVar3,param_1);
    } while (bVar4 == !bVar5);
    iVar8 = iVar3 - iVar7;
    if (bVar4 == false) {
      DestructItems<TWeakPtr<ISubmixBufferListener,1>,int>(pTVar1 + iVar7,iVar8);
    }
    else {
      if (iVar9 != iVar7) {
        memmove(pTVar1 + iVar9,pTVar1 + iVar7,(longlong)iVar8 << 4);
      }
      iVar9 = iVar9 + iVar8;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar7 = iVar3;
    if (iVar6 <= iVar3) {
      this->ArrayNum = iVar9;
      return iVar6 - iVar9;
    }
  } while( true );
}

// RemoveAtSwapImpl @ 14656cac0

void __thiscall
TArray<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x60;
  if (*(void **)(_Dst + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x48));
  }
  puVar2 = *(undefined8 **)(_Dst + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*(void **)(_Dst + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x30));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(_Dst + 0x28));
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 0x60,(longlong)iVar3 * 0x60);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14656cb90

void __thiscall
TArray<Audio::FMixerSubmix::FSubmixEffectFadeInfo,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<Audio::FMixerSubmix::FSubmixEffectFadeInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x30;
  DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
            (*(TSharedPtr<FSoundEffectSubmix,1> **)_Dst,*(int *)(_Dst + 8));
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x30,(longlong)iVar2 * 0x30);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14656cc30

void __thiscall
TArray<Audio::FQuartzClock::PendingCommand,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<Audio::FQuartzClock::PendingCommand,TSizedDefaultAllocator<32>_> *this,int param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_1 * 0x18 + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x18,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x18,
            (longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14656ccc0

void __thiscall
TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
                   *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
          *)(pFVar1 + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,int>
            (_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14656cd50

void __thiscall
TArray<TSharedPtr<Audio::FQuartzClock,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<Audio::FQuartzClock,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14656cdd0

void __thiscall
TArray<Audio::FQuartzClockProxy,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<Audio::FQuartzClockProxy,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  plVar3 = *(longlong **)(pFVar2 + (longlong)param_1 * 0x28 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(pFVar2 + (longlong)param_1 * 0x28 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 0x28,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x28,
            (longlong)iVar4 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSingleSwap @ 14656d840

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveSingleSwap
          (TArray<short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          short *param_1,EAllowShrinking param_2)

{
  ForElementType<short> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<short> FVar7;
  ForElementType<short> FVar8;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<short>)this;
  if (FVar1 != (ForElementType<short>)0x0) {
    FVar8 = FVar1;
  }
  FVar1 = (ForElementType<short>)((longlong)FVar8 + (longlong)this->ArrayNum * 2);
  if (FVar8 != FVar1) {
    FVar7 = FVar8;
    do {
      if (*(short *)FVar7 == *param_1) {
        uVar6 = (uint)((longlong)FVar7 - (longlong)FVar8 >> 1);
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar5 = 0;
        if ((int)(uVar6 + 1) <= this->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        FVar1 = (this->AllocatorInstance).SecondaryData;
        FVar8 = (ForElementType<short>)this;
        if (FVar1 != (ForElementType<short>)0x0) {
          FVar8 = FVar1;
        }
        iVar4 = this->ArrayNum + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove((void *)((longlong)FVar8 + (longlong)(int)uVar6 * 2),
                  (void *)((longlong)FVar8 + (longlong)(this->ArrayNum - iVar4) * 2),
                  (longlong)iVar4 * 2);
        }
        iVar4 = this->ArrayNum + -1;
        this->ArrayNum = iVar4;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<short>_>
                    (2,2,&this->AllocatorInstance,iVar4,&this->ArrayMax);
        }
        return 1;
      }
      FVar7 = (ForElementType<short>)((longlong)FVar7 + 2);
    } while (FVar7 != FVar1);
  }
  return 0;
}

// RemoveSingleSwap @ 14656d990

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
::RemoveSingleSwap(TArray<TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>,TSizedDefaultAllocator<32>_>
                   *this,TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
                         *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar7 = pFVar1;
    do {
      if (*(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
            **)pFVar7 == param_1->Object) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 4);
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar4 = 0;
        if ((int)(uVar6 + 1) <= this->ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        RemoveAtSwapImpl(this,uVar6,1);
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,this->ArrayNum,&this->ArrayMax);
        }
        return 1;
      }
      pFVar7 = pFVar7 + 0x10;
    } while (pFVar7 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  return 0;
}

