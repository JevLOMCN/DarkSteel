// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 21

// AddUniqueImpl<Audio::IQuantizedEventListener_*_const_&> @ 14449a3d0

int __thiscall
TArray<Audio::IQuantizedEventListener_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<Audio::IQuantizedEventListener_*_const_&>
          (TArray<Audio::IQuantizedEventListener_*,TSizedDefaultAllocator<32>_> *this,
          IQuantizedEventListener **param_1)

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
      if (*(IQuantizedEventListener **)pFVar5 == *param_1) {
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
  *(IQuantizedEventListener **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// Append<float,TAlignedHeapAllocator<16>_> @ 14449a650

void __thiscall
TArray<float,TAlignedHeapAllocator<16>_>::Append<float,TAlignedHeapAllocator<16>_>
          (TArray<float,TAlignedHeapAllocator<16>_> *this,
          TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 4,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 2);
  }
  return;
}

// operator= @ 1444a6990

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x10,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// AddZeroed @ 1444a90e0

int __thiscall
TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
          (TArray<float,TAlignedHeapAllocator<16>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 4,0,(longlong)param_1 << 2);
  return iVar1;
}

// Remove @ 1444e1030

int __thiscall
TArray<Audio::IQuantizedEventListener_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<Audio::IQuantizedEventListener_*,TSizedDefaultAllocator<32>_> *this,
          IQuantizedEventListener **param_1)

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
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
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
  bVar3 = *(IQuantizedEventListener **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(IQuantizedEventListener **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
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

// RemoveAtImpl @ 1444e1280

void __thiscall
TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *_Dst;
  
  _Dst = (TArray<float,TAlignedHeapAllocator<16>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1444e1300

void __thiscall
TArray<Audio::FBiquadFilter,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<Audio::FBiquadFilter,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FBiquadFilter *_Dst;
  
  _Dst = (FBiquadFilter *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<Audio::FBiquadFilter,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNumUninitialized @ 1444e4ac0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized
          (TArray<float,TAlignedHeapAllocator<16>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
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
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<float_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_><float_*_const,int> @ 1444e9010

TArray<float_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<float_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
TArray<float_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_><float_*_const,int>
          (TArray<float_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<float_*_const,int> *param_1)

{
  int iVar1;
  float **_Src;
  ForElementType<float_*> FVar2;
  ForElementType<float_*> _Dst;
  
  (this->AllocatorInstance).SecondaryData = (ForElementType<float_*>)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 8;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float_*>_>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  FVar2 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<float_*>)this;
  if (FVar2 != (ForElementType<float_*>)0x0) {
    _Dst = FVar2;
  }
  memcpy((void *)_Dst,_Src,(longlong)iVar1 << 3);
  return this;
}

// TArray<float_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_><float_const_*_const,int> @ 1444e90b0

TArray<float_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<float_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
TArray<float_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_><float_const_*_const,int>
          (TArray<float_const_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<float_const_*_const,int> *param_1)

{
  int iVar1;
  float **_Src;
  ForElementType<float_const_*> FVar2;
  ForElementType<float_const_*> _Dst;
  
  (this->AllocatorInstance).SecondaryData = (ForElementType<float_const_*>)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 8;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float_const_*>_>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  FVar2 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<float_const_*>)this;
  if (FVar2 != (ForElementType<float_const_*>)0x0) {
    _Dst = FVar2;
  }
  memcpy((void *)_Dst,_Src,(longlong)iVar1 << 3);
  return this;
}

// TArray<float,TAlignedHeapAllocator<16>_> @ 1444edc40

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
TArray<float,TAlignedHeapAllocator<16>_>::TArray<float,TAlignedHeapAllocator<16>_>
          (TArray<float,TAlignedHeapAllocator<16>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<float,TSizedDefaultAllocator<32>_> @ 1444edc60

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
          (TArray<float,TSizedDefaultAllocator<32>_> *this,initializer_list<float> *param_1)

{
  float *_Src;
  float *pfVar1;
  int iVar2;
  
  _Src = param_1->_First;
  pfVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)pfVar1 - (longlong)_Src >> 2);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  return this;
}

// ~TArray<float,TAlignedHeapAllocator<16>_> @ 1444f34b0

void __thiscall
TArray<float,TAlignedHeapAllocator<16>_>::~TArray<float,TAlignedHeapAllocator<16>_>
          (TArray<float,TAlignedHeapAllocator<16>_> *this)

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

// AddDefaulted @ 1444f5bb0

int __thiscall
TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// RemoveAtImpl @ 144516780

void __thiscall
TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TCircularAudioBuffer<float,16> *_Dst;
  
  _Dst = (TCircularAudioBuffer<float,16> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<Audio::TCircularAudioBuffer<float,16>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 144516800

void __thiscall
TArray<TSharedPtr<Audio::FPatchOutput,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<Audio::FPatchOutput,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

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

// RemoveAtSwapImpl @ 144516880

void __thiscall
TArray<Audio::FPatchInput,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<Audio::FPatchInput,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FPatchInput *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FPatchInput *)(pFVar1 + (longlong)param_1 * 0x18);
  Audio::FPatchInput::~FPatchInput(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x18,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// Reset @ 144516f70

void __thiscall
TArray<float,TAlignedHeapAllocator<16>_>::Reset
          (TArray<float,TAlignedHeapAllocator<16>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// SetNum @ 14451bd20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<float_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<float_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<float_*> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<float_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<float_*>)0x0) {
      this = (TArray<float_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
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
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<float_*>)this;
        if (FVar2 != (ForElementType<float_*>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<float_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14451be80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float_const_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<float_const_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<float_const_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<float_const_*> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<float_const_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<float_const_*>)0x0) {
      this = (TArray<float_const_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *)
             FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
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
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<float_const_*>)this;
        if (FVar2 != (ForElementType<float_const_*>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<float_const_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14451bfe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TAlignedHeapAllocator<16>_>::SetNumZeroed
          (TArray<float,TAlignedHeapAllocator<16>_> *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = this->ArrayNum;
  if (iVar3 < param_1) {
    AddZeroed(this,param_1 - iVar3);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar3) {
    uVar4 = iVar3 - param_1;
    if (((int)(uVar4 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar4 != 0) {
      _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
      iVar3 = (this->ArrayNum - uVar4) - param_1;
      if (iVar3 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar4 * 4,(longlong)iVar3 << 2);
      }
      iVar3 = this->ArrayNum - uVar4;
      this->ArrayNum = iVar3;
      if (param_2 == Default) {
        UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,&this->AllocatorInstance,iVar3,&this->ArrayMax);
      }
    }
  }
  return;
}

