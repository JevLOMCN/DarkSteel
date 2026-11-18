// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 11

// ~TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> @ 14f0bc520

void __thiscall
TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>::
~TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// operator= @ 14f0c0ca0

TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x18);
    }
  }
  return this;
}

// AddDefaulted_GetRef @ 14f0c96d0

FChannelMixEntry * __thiscall
TArray<Audio::FBaseChannelFormatConverter::FChannelMixEntry,TSizedDefaultAllocator<32>_>::
AddDefaulted_GetRef(TArray<Audio::FBaseChannelFormatConverter::FChannelMixEntry,TSizedDefaultAllocator<32>_>
                    *this)

{
  FChannelMixEntry *pFVar1;
  int iVar2;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  pFVar1 = (FChannelMixEntry *)((this->AllocatorInstance).Data + (longlong)iVar2 * 0xc);
  DefaultConstructItems<Audio::FBaseChannelFormatConverter::FChannelMixEntry,int>(pFVar1,1);
  return pFVar1;
}

// Init @ 14f0df730

void __thiscall
TArray<Audio::FDelayAPF,TSizedDefaultAllocator<32>_>::Init
          (TArray<Audio::FDelayAPF,TSizedDefaultAllocator<32>_> *this,FDelayAPF *param_1,int param_2
          )

{
  int *piVar1;
  FDelayAPF *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  DestructItems<Audio::FDelayAPF,int>((FDelayAPF *)(this->AllocatorInstance).Data,this->ArrayNum);
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FDelayAPF *)(this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) {
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
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x860,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      Audio::FDelayAPF::FDelayAPF
                ((FDelayAPF *)((this->AllocatorInstance).Data + (longlong)iVar5 * 0x60),param_1);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// InsertUninitializedImpl @ 14f0e74e0

void __thiscall
TArray<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// RemoveAtImpl @ 14f0f7690

void __thiscall
TArray<TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<Audio::FLinearEase,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14f0f7710

void __thiscall
TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<bool,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14f0f7790

void __thiscall
TArray<Audio::FDelay,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<Audio::FDelay,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FDelay *_Dst;
  
  _Dst = (FDelay *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x58);
  DestructItems<Audio::FDelay,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x58);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 14f0f7c20

void __thiscall
TArray<Audio::FDynamicsProcessor,TSizedDefaultAllocator<32>_>::Reset
          (TArray<Audio::FDynamicsProcessor,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FDynamicsProcessor *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FDynamicsProcessor *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<Audio::FDynamicsProcessor,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<Audio::FDynamicsProcessor,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf8,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNumZeroed @ 14f0feb00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<float_*,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

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
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14f0fec40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

