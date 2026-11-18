// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 85

// operator=<FFrameNumber,int> @ 1460697f0

TArray<FFrameNumber,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=<FFrameNumber,int>
          (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FFrameNumber,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FFrameNumber *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<FMovieSceneDoubleValue,int> @ 146069880

TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>::operator=<FMovieSceneDoubleValue,int>
          (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FMovieSceneDoubleValue,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FMovieSceneDoubleValue *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 5);
  }
  return this;
}

// operator=<FMovieSceneFloatValue,int> @ 146069910

TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>::operator=<FMovieSceneFloatValue,int>
          (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FMovieSceneFloatValue,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FMovieSceneFloatValue *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x1c,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x1c);
  }
  return this;
}

// AddUniqueImpl<TScriptInterface<IMovieSceneScalingDriver>_const_&> @ 14606aad0

int __thiscall
TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TScriptInterface<IMovieSceneScalingDriver>_const_&>
          (TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_> *this,
          TScriptInterface<IMovieSceneScalingDriver> *param_1)

{
  TScriptInterface<IMovieSceneScalingDriver> *pTVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pTVar1 = (TScriptInterface<IMovieSceneScalingDriver> *)(this->AllocatorInstance).Data;
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
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    pUVar2 = *(UObject **)param_1;
    pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(UObject **)pFVar6 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(undefined8 *)(pFVar6 + 8) = *(undefined8 *)&param_1->field_0x8;
  }
  return iVar5;
}

// AddUniqueImpl<TScriptInterface<IMovieSceneTimeWarpSource>_const_&> @ 14606abc0

int __thiscall
TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TScriptInterface<IMovieSceneTimeWarpSource>_const_&>
          (TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_> *this,
          TScriptInterface<IMovieSceneTimeWarpSource> *param_1)

{
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pTVar1 = (TScriptInterface<IMovieSceneTimeWarpSource> *)(this->AllocatorInstance).Data;
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
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    pUVar2 = *(UObject **)param_1;
    pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(UObject **)pFVar6 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    *(undefined8 *)(pFVar6 + 8) = *(undefined8 *)&param_1->field_0x8;
  }
  return iVar5;
}

// Append<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_> @ 14606b240

void __thiscall
TArray<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_>::
Append<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_>
          (TArray<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_> *this,
          TArray<FMovieSceneFieldEntry_ChildTemplate,TSizedDefaultAllocator<32>_> *param_1)

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
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// Append<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_> @ 14606b2e0

void __thiscall
TArray<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_>::
Append<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_>
          (TArray<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_> *this,
          TArray<FMovieSceneFieldEntry_EvaluationTrack,TSizedDefaultAllocator<32>_> *param_1)

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
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 0xc,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 * 0xc);
  }
  return;
}

// Append<TArrayView<FFrameNumber_const_,int>_> @ 14606b390

void __thiscall
TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Append<TArrayView<FFrameNumber_const_,int>_>
          (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FFrameNumber_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 4,param_1->DataPtr,(longlong)iVar1 << 2)
  ;
  return;
}

// operator= @ 146098870

TArray<FFrameNumber,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1)

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
              (4,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator= @ 146098910

TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *this,
          TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *param_1)

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
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// Empty @ 1460c17c0

void __thiscall
TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1810

void __thiscall
TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1460c1860

void __thiscall
TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 1460c4a00

int __thiscall
TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_> *this,
          TScriptInterface<IMovieSceneScalingDriver> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar2 = pFVar1;
    do {
      if (*(longlong *)pFVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(pFVar2 + 8);
      }
      if (*(longlong *)param_1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)&param_1->field_0x8;
      }
      if ((lVar4 == lVar3) && (*(longlong *)pFVar2 == *(longlong *)param_1)) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
      }
      pFVar2 = pFVar2 + 0x10;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  return -1;
}

// Find @ 1460c4a70

int __thiscall
TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_> *this,
          TScriptInterface<IMovieSceneTimeWarpSource> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar2 = pFVar1;
    do {
      if (*(longlong *)pFVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(pFVar2 + 8);
      }
      if (*(longlong *)param_1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)&param_1->field_0x8;
      }
      if ((lVar4 == lVar3) && (*(longlong *)pFVar2 == *(longlong *)param_1)) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
      }
      pFVar2 = pFVar2 + 0x10;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  return -1;
}

// Insert @ 1460d6010

int __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Insert
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,uchar *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + this->ArrayMax)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data + param_2;
  this->ArrayNum = iVar3 + 1;
  memmove(pFVar4 + 1,pFVar4,(longlong)(iVar3 - param_2));
  (this->AllocatorInstance).Data[param_2] = (FScriptContainerElement)*param_1;
  return param_2;
}

// Insert @ 1460d60e0

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::Insert
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar3 + 1;
  pFVar4 = pFVar4 + (longlong)param_2 * 4;
  memmove(pFVar4 + 4,pFVar4,(longlong)(iVar3 - param_2) << 2);
  *(int *)((this->AllocatorInstance).Data + (longlong)param_2 * 4) = *param_1;
  return param_2;
}

// Insert @ 1460d61c0

int __thiscall
TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this,FFrameNumber *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar3 + 1;
  pFVar4 = pFVar4 + (longlong)param_2 * 4;
  memmove(pFVar4 + 4,pFVar4,(longlong)(iVar3 - param_2) << 2);
  *(int *)((this->AllocatorInstance).Data + (longlong)param_2 * 4) = param_1->Value;
  return param_2;
}

// Insert @ 1460d62a0

int __thiscall
TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneDoubleValue *param_1,int param_2)

{
  FMovieSceneDoubleValue *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  
  pFVar1 = (FMovieSceneDoubleValue *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar7 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar6 + 1;
  lVar8 = (longlong)param_2 * 0x20;
  pFVar7 = pFVar7 + lVar8;
  memmove(pFVar7 + 0x20,pFVar7,(longlong)(iVar6 - param_2) << 5);
  pFVar2 = (this->AllocatorInstance).Data;
  uVar4 = *(undefined8 *)&param_1->Tangent;
  pFVar7 = pFVar2 + lVar8;
  *(double *)pFVar7 = param_1->Value;
  *(undefined8 *)(pFVar7 + 8) = uVar4;
  uVar4 = *(undefined8 *)&(param_1->Tangent).TangentWeightMode;
  pFVar2 = pFVar2 + lVar8 + 0x10;
  *(undefined8 *)pFVar2 = *(undefined8 *)&(param_1->Tangent).ArriveTangentWeight;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return param_2;
}

// Insert @ 1460d6390

int __thiscall
TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneFloatValue *param_1,int param_2)

{
  FMovieSceneFloatValue *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  pFVar1 = (FMovieSceneFloatValue *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  lVar7 = (longlong)param_2 * 0x1c;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + lVar7;
  memmove(pFVar6 + 0x1c,pFVar6,(longlong)(iVar5 - param_2) * 0x1c);
  uVar3 = *(undefined8 *)&(param_1->Tangent).LeaveTangent;
  pFVar6 = (this->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar7) = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar6 + lVar7 + 8) = uVar3;
  *(undefined8 *)(pFVar6 + lVar7 + 0x10) = *(undefined8 *)&(param_1->Tangent).LeaveTangentWeight;
  *(undefined4 *)(pFVar6 + lVar7 + 0x18) = *(undefined4 *)&param_1->InterpMode;
  return param_2;
}

// Insert @ 1460d6480

int __thiscall
TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneObjectPathChannelKeyValue *param_1,int param_2)

{
  FMovieSceneObjectPathChannelKeyValue *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (FMovieSceneObjectPathChannelKeyValue *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
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
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)param_2 * 0x30;
  memmove(pFVar6 + 0x30,pFVar6,(longlong)(iVar5 - param_2) * 0x30);
  pFVar6 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x30;
  *(undefined8 *)pFVar6 = *(undefined8 *)&(param_1->SoftPtr).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(pFVar6 + 8),
             (FSoftObjectPath *)&(param_1->SoftPtr).SoftObjectPtr.field_0x8);
  pUVar2 = (param_1->HardPtr).field0_0x0.DebugPtr;
  *(UObject **)(pFVar6 + 0x28) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  return param_2;
}

// Insert @ 1460d6590

int __thiscall
TArray<bool,TSizedDefaultAllocator<32>_>::Insert
          (TArray<bool,TSizedDefaultAllocator<32>_> *this,bool *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + this->ArrayMax)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data + param_2;
  this->ArrayNum = iVar3 + 1;
  memmove(pFVar4 + 1,pFVar4,(longlong)(iVar3 - param_2));
  (this->AllocatorInstance).Data[param_2] = (FScriptContainerElement)*param_1;
  return param_2;
}

// InsertUninitializedImpl @ 1460d69c0

void __thiscall
TArray<TTuple<FMovieSceneSequenceID,FGuid>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TTuple<FMovieSceneSequenceID,FGuid>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>_>
                    (0x14,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
    this = (TArray<TTuple<FMovieSceneSequenceID,FGuid>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x14);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x14),_Src,
          (longlong)(iVar2 - param_1) * 0x14);
  return;
}

// Remove @ 1460e7690

int __thiscall
TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_> *this,
          TScriptInterface<IMovieSceneScalingDriver> *param_1)

{
  TScriptInterface<IMovieSceneScalingDriver> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  <lambda_1> local_res8;
  
  pTVar1 = (TScriptInterface<IMovieSceneScalingDriver> *)(this->AllocatorInstance).Data;
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
  local_res8.Item = param_1;
  iVar4 = RemoveAll<_TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                    (this,&local_res8);
  return iVar4;
}

// Remove @ 1460e7730

int __thiscall
TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_> *this,
          TScriptInterface<IMovieSceneTimeWarpSource> *param_1)

{
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  <lambda_1> local_res8;
  
  pTVar1 = (TScriptInterface<IMovieSceneTimeWarpSource> *)(this->AllocatorInstance).Data;
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
  local_res8.Item = param_1;
  iVar4 = RemoveAll<_TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                    (this,&local_res8);
  return iVar4;
}

// RemoveAt @ 1460e7a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + param_1;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)iVar4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1460e7b00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar4 << 2);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1460e7bd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x20,(longlong)iVar4 << 5);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1460e7cb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x1c;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x1c,(longlong)iVar4 * 0x1c);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1460e7d80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  if (*(void **)(_Dst + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x18));
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x30,(longlong)iVar4 * 0x30);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1460e7e70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<bool,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<bool,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + param_1;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)iVar4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// SetNum @ 1460f80f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FCompileOnTheFlyData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FCompileOnTheFlyData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

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
                      (0x24,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FCompileOnTheFlyData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x24,param_1 - iVar5);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x24;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x24,(longlong)iVar5 * 0x24);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x24,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1460f8240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneTrackEvaluationData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FMovieSceneTrackEvaluationData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

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
                      (0x18,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FMovieSceneTrackEvaluationData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x18,param_1 - iVar5);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x18,(longlong)iVar5 * 0x18);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// InsertUninitializedImpl @ 14613fca0

void __thiscall
TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>_>
                    (0x18,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )0x0) {
    this = (TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// RemoveAt @ 14614e290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar4 << 2);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14614eb10

void __thiscall
TArray<FMovieSceneEntitySystemRunner::FDissectedUpdate,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneEntitySystemRunner::FDissectedUpdate,TSizedDefaultAllocator<32>_> *this
          ,int param_1,int param_2)

{
  int iVar1;
  FDissectedUpdate *_Dst;
  
  _Dst = (FDissectedUpdate *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xa8);
  DestructItems<FMovieSceneEntitySystemRunner::FDissectedUpdate,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xa8);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 146154160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<unsigned_short> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_short> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                      (2,2,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_short>)0x0) {
      this = (TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 2),0,(longlong)(param_1 - iVar6) * 2);
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
        FVar7 = (ForElementType<unsigned_short>)this;
        if (FVar2 != (ForElementType<unsigned_short>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 2);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 2),(longlong)iVar6 * 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                    (2,2,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FGuid_const_&> @ 1461696c0

int __thiscall
TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<FGuid_const_&>
          (TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          FGuid *param_1)

{
  undefined8 *puVar1;
  ForElementType<FGuid> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FGuid> FVar7;
  
  iVar6 = Find(this,param_1);
  if (iVar6 == -1) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<FGuid>)this;
    if (FVar2 != (ForElementType<FGuid>)0x0) {
      FVar7 = FVar2;
    }
    if ((ulonglong)FVar7 <= param_1) {
      FVar7 = (ForElementType<FGuid>)this;
      if (FVar2 != (ForElementType<FGuid>)0x0) {
        FVar7 = FVar2;
      }
      if ((param_1 < (FGuid *)((longlong)this->ArrayMax * 0x10 + (longlong)FVar7)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = this->ArrayNum;
    if (iVar6 == this->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FGuid>_>
                        (0x410,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar6 + 1;
    FVar2 = (this->AllocatorInstance).SecondaryData;
    uVar4 = *(undefined8 *)&param_1->C;
    if (FVar2 != (ForElementType<FGuid>)0x0) {
      this = (TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    puVar1 = (undefined8 *)((longlong)this + (longlong)iVar6 * 0x10);
    *puVar1 = *(undefined8 *)param_1;
    puVar1[1] = uVar4;
  }
  return iVar6;
}

// AddUniqueImpl<FMovieSceneObjectBindingID_const_&> @ 1461697b0

int __thiscall
TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FMovieSceneObjectBindingID_const_&>
          (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneObjectBindingID *param_1)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneObjectBindingID *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  
  iVar7 = Find(this,param_1);
  if (iVar7 == -1) {
    pFVar2 = (FMovieSceneObjectBindingID *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    iVar7 = this->ArrayNum;
    if (iVar7 == this->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar7 + 1;
    uVar5 = *(undefined8 *)&(param_1->Guid).C;
    pFVar3 = (this->AllocatorInstance).Data;
    pFVar1 = pFVar3 + (longlong)iVar7 * 0x18;
    *(undefined8 *)pFVar1 = *(undefined8 *)&param_1->Guid;
    *(undefined8 *)(pFVar1 + 8) = uVar5;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = *(undefined8 *)&param_1->SequenceID;
  }
  return iVar7;
}

// Append<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> @ 146169a60

void __thiscall
TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>::
Append<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>
          (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_1)

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
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// Append<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> @ 146169b00

void __thiscall
TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>::
Append<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>
          (TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *this,
          TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *param_1)

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
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x20,
               (FMovieSceneNestedSequenceTransform *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// operator= @ 146185f20

TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *this,
          TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FMovieSceneNestedSequenceTransform *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FMovieSceneNestedSequenceTransform *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// operator= @ 146185fb0

TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *this,
          TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *param_1)

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
              (4,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// Empty @ 1461a0da0

void __thiscall
TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>::
Empty(TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1461a0df0

void __thiscall
TArray<TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::FEntry,TSizedDefaultAllocator<32>_>
::Empty(TArray<TEvaluationTreeEntryContainer<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex>::FEntry,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1461a0e40

void __thiscall
TArray<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::FEntry,TSizedDefaultAllocator<32>_>
::Empty(TArray<TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::FEntry,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1461a0e90

void __thiscall
TArray<TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::FEntry,TSizedDefaultAllocator<32>_>
::Empty(TArray<TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry>::FEntry,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1461a0ee0

void __thiscall
TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1461a0f30

void __thiscall
TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FMovieSceneSubSequenceTreeEntry,int>
              ((FMovieSceneSubSequenceTreeEntry *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 1461a6c70

int __thiscall
TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Find
          (TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          FGuid *param_1)

{
  ForElementType<FGuid> FVar1;
  ForElementType<FGuid> FVar2;
  ForElementType<FGuid> FVar3;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FGuid>)this;
  if (FVar2 != (ForElementType<FGuid>)0x0) {
    FVar3 = FVar2;
  }
  FVar2 = (ForElementType<FGuid>)((longlong)this->ArrayNum * 0x10 + (longlong)FVar3);
  if (FVar3 != FVar2) {
    FVar1 = FVar3;
    do {
      if (((param_1->D == *(uint *)((longlong)FVar1 + 0xc) &&
           param_1->C == *(uint *)((longlong)FVar1 + 8)) &&
          param_1->B == *(uint *)((longlong)FVar1 + 4)) && param_1->A == *(uint *)FVar1) {
        return (int)((longlong)FVar1 - (longlong)FVar3 >> 4);
      }
      FVar1 = (ForElementType<FGuid>)((longlong)FVar1 + 0x10);
    } while (FVar1 != FVar2);
  }
  return -1;
}

// Find @ 1461a6d00

int __thiscall
TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_>::Find
          (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneObjectBindingID *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x18) {
    pFVar2 = pFVar1;
    do {
      if ((((((param_1->Guid).D == *(uint *)(pFVar2 + 0xc) &&
             (param_1->Guid).C == *(uint *)(pFVar2 + 8)) &&
            (param_1->Guid).B == *(uint *)(pFVar2 + 4)) && (param_1->Guid).A == *(uint *)pFVar2) &&
          (*(int *)(pFVar2 + 0x10) == param_1->SequenceID)) &&
         (*(int *)(pFVar2 + 0x14) == param_1->ResolveParentIndex)) {
        return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x18);
      }
      pFVar2 = pFVar2 + 0x18;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x18);
  }
  return -1;
}

// Insert @ 1461b64b0

int __thiscall
TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FMovieSceneSpawnable,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneSpawnable *param_1,int param_2)

{
  FMovieSceneSpawnable *pFVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  
  pFVar1 = (FMovieSceneSpawnable *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
  }
  iVar8 = this->ArrayNum;
  if (iVar8 == this->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10f0,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar9 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar8 + 1;
  pFVar9 = pFVar9 + (longlong)param_2 * 0xf0;
  memmove(pFVar9 + 0xf0,pFVar9,(longlong)(iVar8 - param_2) * 0xf0);
  pFVar10 = (this->AllocatorInstance).Data + (longlong)param_2 * 0xf0;
  dVar5 = (param_1->SpawnTransform).Rotation.XY.m128d_f64[1];
  *(double *)pFVar10 = (param_1->SpawnTransform).Rotation.XY.m128d_f64[0];
  *(double *)(pFVar10 + 8) = dVar5;
  pFVar9 = pFVar10 + 0x60;
  dVar5 = (param_1->SpawnTransform).Rotation.ZW.m128d_f64[1];
  *(double *)(pFVar10 + 0x10) = (param_1->SpawnTransform).Rotation.ZW.m128d_f64[0];
  *(double *)(pFVar10 + 0x18) = dVar5;
  dVar5 = (param_1->SpawnTransform).Translation.XY.m128d_f64[1];
  *(double *)(pFVar10 + 0x20) = (param_1->SpawnTransform).Translation.XY.m128d_f64[0];
  *(double *)(pFVar10 + 0x28) = dVar5;
  dVar5 = (param_1->SpawnTransform).Translation.ZW.m128d_f64[1];
  *(double *)(pFVar10 + 0x30) = (param_1->SpawnTransform).Translation.ZW.m128d_f64[0];
  *(double *)(pFVar10 + 0x38) = dVar5;
  dVar5 = (param_1->SpawnTransform).Scale3D.XY.m128d_f64[1];
  *(double *)(pFVar10 + 0x40) = (param_1->SpawnTransform).Scale3D.XY.m128d_f64[0];
  *(double *)(pFVar10 + 0x48) = dVar5;
  dVar5 = (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[1];
  *(double *)(pFVar10 + 0x50) = (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[0];
  *(double *)(pFVar10 + 0x58) = dVar5;
  *(FScriptContainerElement **)&pFVar9->field_0x0 = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->Tags).ArrayNum;
  pFVar2 = (param_1->Tags).AllocatorInstance.Data;
  *(int *)(pFVar10 + 0x68) = iVar8;
  if (iVar8 == 0) {
    *(int *)(pFVar10 + 0x6c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar8,0,(ForAnyElementType *)pFVar9,iVar8,(int *)(pFVar10 + 0x6c));
    memcpy(*(FScriptContainerElement **)&pFVar9->field_0x0,pFVar2,(longlong)iVar8 << 3);
  }
  pFVar10[0x70] = (FScriptContainerElement)param_1->bContinuouslyRespawn;
  pFVar10[0x71] = (FScriptContainerElement)param_1->bNetAddressableName;
  FMovieSceneDynamicBinding::FMovieSceneDynamicBinding
            ((FMovieSceneDynamicBinding *)(pFVar10 + 0x78),&param_1->DynamicBinding_DEPRECATED);
  uVar6 = *(undefined8 *)&(param_1->Guid).C;
  *(undefined8 *)(pFVar10 + 0xa0) = *(undefined8 *)&param_1->Guid;
  *(undefined8 *)(pFVar10 + 0xa8) = uVar6;
  ::FString::FString((FString *)(pFVar10 + 0xb0),&param_1->Name);
  pUVar3 = (param_1->ObjectTemplate).field0_0x0.DebugPtr;
  *(UObject **)(pFVar10 + 0xc0) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pFVar9 = pFVar10 + 200;
  *(FScriptContainerElement **)&pFVar9->field_0x0 = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->ChildPossessables).ArrayNum;
  pFVar2 = (param_1->ChildPossessables).AllocatorInstance.Data;
  *(int *)(pFVar10 + 0xd0) = iVar8;
  if (iVar8 == 0) {
    *(int *)(pFVar10 + 0xd4) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar8,0,(ForAnyElementType *)pFVar9,iVar8,(int *)(pFVar10 + 0xd4));
    memcpy(*(FScriptContainerElement **)&pFVar9->field_0x0,pFVar2,(longlong)iVar8 << 4);
  }
  pFVar10[0xd8] = (FScriptContainerElement)param_1->Ownership;
  *(FName *)(pFVar10 + 0xdc) = param_1->LevelName;
  return param_2;
}

// InsertUninitializedImpl @ 1461b71f0

void __thiscall
TArray<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
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

// InsertUninitializedImpl @ 1461b7270

void __thiscall
TArray<TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// InsertUninitializedImpl @ 1461b72f0

void __thiscall
TArray<TTuple<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
  memmove(_Src + (longlong)param_2 * 0xc,_Src,(longlong)(iVar1 - param_1) * 0xc);
  return;
}

// InsertUninitializedImpl @ 1461b7370

void __thiscall
TArray<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>_>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                )0x0) {
    this = (TArray<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x20 + (longlong)this);
  memmove((void *)((longlong)param_2 * 0x20 + (longlong)_Src),_Src,(longlong)(iVar2 - param_1) << 5)
  ;
  return;
}

// InsertUninitializedImpl @ 1461b7400

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,TSizedDefaultAllocator<32>_>
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

// InsertUninitializedImpl @ 1461b7480

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,TSizedDefaultAllocator<32>_>
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

// InsertUninitializedImpl @ 1461b7500

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  memmove(_Src + (longlong)param_2 * 0x30,_Src,(longlong)(iVar1 - param_1) * 0x30);
  return;
}

// InsertUninitializedImpl @ 1461b7580

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  memmove(_Src + (longlong)param_2 * 0x30,_Src,(longlong)(iVar1 - param_1) * 0x30);
  return;
}

// Remove @ 1461c8120

int __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,FGuid *param_1)

{
  FGuid *pFVar1;
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
  
  pFVar1 = (FGuid *)(this->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
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
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar11 = 0;
  bVar4 = ((*(uint *)(pFVar2 + 0xc) != param_1->D || *(uint *)(pFVar2 + 8) != param_1->C) ||
          *(uint *)(pFVar2 + 4) != param_1->B) || *(uint *)pFVar2 != param_1->A;
  lVar8 = 0;
  iVar9 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar10 = iVar9 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + (lVar8 * 4 + 2) * 4;
      do {
        if (bVar4 != (((param_1->A != *(uint *)(pFVar7 + -8) || param_1->B != *(uint *)(pFVar7 + -4)
                       ) || param_1->D != *(uint *)(pFVar7 + 4)) || param_1->C != *(uint *)pFVar7))
        break;
        iVar10 = iVar10 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    if (bVar4 != false) {
      if (iVar11 != iVar9) {
        memmove(pFVar2 + (longlong)iVar11 * 0x10,pFVar2 + (longlong)iVar9 * 0x10,
                (longlong)(iVar10 - iVar9) << 4);
      }
      iVar11 = iVar11 + (iVar10 - iVar9);
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar9 = iVar10;
    if (lVar6 <= lVar8) {
      this->ArrayNum = iVar11;
      return iVar5 - iVar11;
    }
  } while( true );
}

// Remove @ 1461c8320

int __thiscall
TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneSequenceID *param_1)

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
  bVar3 = *(uint *)pFVar1 != param_1->Value;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(uint *)(pFVar1 + lVar6 * 4) != param_1->Value)) break;
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

// RemoveAt @ 1461c9420

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::RemoveAt(TArray<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  void *_Dst;
  ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
  FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
  FVar6;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
           )this;
  if (FVar1 != (ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>
                )0x0) {
    FVar6 = FVar1;
  }
  _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 0x14);
  iVar5 = this->ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x14),(longlong)iVar5 * 0x14);
  }
  iVar5 = this->ArrayNum + -1;
  this->ArrayNum = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData>_>
              (0x14,4,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1461c9510

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMovieScenePossessable,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x80;
  if (*(void **)(_Dst + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x48));
  }
  if (*(void **)(_Dst + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x28));
  }
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x80,(longlong)iVar4 << 7);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 1461c9c50

void __thiscall
TArray<FMovieSceneEvaluationGroup,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneEvaluationGroup,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FMovieSceneEvaluationGroup *_Dst;
  
  _Dst = (FMovieSceneEvaluationGroup *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FMovieSceneEvaluationGroup,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1461c9cd0

void __thiscall
TArray<FMovieSceneEvaluationMetaData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneEvaluationMetaData,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FMovieSceneEvaluationMetaData *_Dst;
  
  _Dst = (FMovieSceneEvaluationMetaData *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<FMovieSceneEvaluationMetaData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1461c9d50

void __thiscall
TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FMovieSceneSubSequenceTreeEntry *_Dst;
  
  _Dst = (FMovieSceneSubSequenceTreeEntry *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FMovieSceneSubSequenceTreeEntry,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1461c9dd0

void __thiscall
TArray<TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>
  *_Dst;
  
  _Dst = (TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>
          *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 1461c9e50

void __thiscall
TArray<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,TSizedDefaultAllocator<32>_>
                 *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1> *)
         (pFVar1 + (longlong)param_1 * 0x10);
  DestructItems<TWeakPtr<UE::MovieScene::IPreAnimatedCaptureSource,1>,int>(_Dst,param_2);
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

// SetNum @ 1461d2540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::SetNum(TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                      (8,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      this = (TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)FVar2;
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
        FVar7 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)this;
        if (FVar2 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
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
          ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                    (8,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1461d26a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>::
SetNum(TArray<FMovieSceneEvaluationFieldEntityTree::FEntityAndMetaDataIndex,TSizedDefaultAllocator<32>_>
       *this,int param_1,EAllowShrinking param_2)

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
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1461d27d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FMovieSceneEvaluationTreeNode,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FMovieSceneEvaluationTreeNode,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x20,param_1 - iVar5);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x20,(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1461d2920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

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
                      (0x30,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FMovieSceneSubSequenceTreeEntry,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x30,param_1 - iVar2);
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
                  (0x30,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// AddUniqueImpl<UE::MovieScene::FComponentTypeID_const_&> @ 1461f0dd0

int __thiscall
TArray<UE::MovieScene::FComponentTypeID,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<UE::MovieScene::FComponentTypeID_const_&>
          (TArray<UE::MovieScene::FComponentTypeID,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,FComponentTypeID *param_1)

{
  ForElementType<UE::MovieScene::FComponentTypeID> FVar1;
  ForElementType<UE::MovieScene::FComponentTypeID> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::MovieScene::FComponentTypeID> FVar6;
  ForElementType<UE::MovieScene::FComponentTypeID> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<UE::MovieScene::FComponentTypeID>)this;
  if (FVar2 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<UE::MovieScene::FComponentTypeID>)
          ((longlong)FVar7 + (longlong)this->ArrayNum * 2);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(ushort *)FVar6 == param_1->Value) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 1);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<UE::MovieScene::FComponentTypeID>)((longlong)FVar6 + 2);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<UE::MovieScene::FComponentTypeID>)this;
  if (FVar2 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<UE::MovieScene::FComponentTypeID>)this;
    if (FVar2 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FComponentTypeID *)((longlong)FVar7 + (longlong)this->ArrayMax * 2)) &&
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
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FComponentTypeID>_>
                      (0x202,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    this = (TArray<UE::MovieScene::FComponentTypeID,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  *(ushort *)((longlong)this + (longlong)iVar5 * 2) = param_1->Value;
  return iVar5;
}

// Insert @ 146221440

int __thiscall
TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
          (TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_> *this,
          FPlaybackCapabilityHelpers *param_1,int param_2)

{
  FPlaybackCapabilityHelpers *pFVar1;
  code *pcVar2;
  _func___cdecl_void_void_ptr *p_Var3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (FPlaybackCapabilityHelpers *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)param_2 * 0x10;
  memmove(pFVar6 + 0x10,pFVar6,(longlong)(iVar5 - param_2) << 4);
  p_Var3 = param_1->Destructor;
  pFVar6 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x10;
  *(_func___cdecl_IPlaybackCapability_ptr_void_ptr **)pFVar6 = param_1->InterfaceCast;
  *(_func___cdecl_void_void_ptr **)(pFVar6 + 8) = p_Var3;
  return param_2;
}

// Insert_GetRef @ 1462217b0

FMovieSceneBindingReference * __thiscall
TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_>::Insert_GetRef
          (TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneBindingReference *param_1,int param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FMovieSceneBindingReference *pFVar8;
  FScriptContainerElement *pFVar9;
  
  pFVar8 = (FMovieSceneBindingReference *)(this->AllocatorInstance).Data;
  if ((pFVar8 <= param_1) && (param_1 < pFVar8 + this->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FMovieSceneBindingReference *)(*pcVar2)();
      return pFVar8;
    }
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar9 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar7 + 1;
  pFVar9 = pFVar9 + (longlong)param_2 * 0x30;
  memmove(pFVar9 + 0x30,pFVar9,(longlong)(iVar7 - param_2) * 0x30);
  pFVar8 = (FMovieSceneBindingReference *)
           ((this->AllocatorInstance).Data + (longlong)param_2 * 0x30);
  uVar3 = (param_1->ID).B;
  uVar4 = (param_1->ID).C;
  uVar5 = (param_1->ID).D;
  (pFVar8->ID).A = (param_1->ID).A;
  (pFVar8->ID).B = uVar3;
  (pFVar8->ID).C = uVar4;
  (pFVar8->ID).D = uVar5;
  (pFVar8->Locator).Fragments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar8->Locator).Fragments.AllocatorInstance.Data =
       (param_1->Locator).Fragments.AllocatorInstance.Data;
  (param_1->Locator).Fragments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar8->Locator).Fragments.ArrayNum = (param_1->Locator).Fragments.ArrayNum;
  (pFVar8->Locator).Fragments.ArrayMax = (param_1->Locator).Fragments.ArrayMax;
  (param_1->Locator).Fragments.ArrayNum = 0;
  (param_1->Locator).Fragments.ArrayMax = 0;
  pFVar8->ResolveFlags = param_1->ResolveFlags;
  pUVar1 = (UObject *)(param_1->CustomBinding).field0_0x0.DebugPtr;
  (pFVar8->CustomBinding).field0_0x0.DebugPtr = (UMovieSceneCustomBinding *)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return pFVar8;
}

// RemoveAtImpl @ 14622f010

void __thiscall
TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FMovieSceneBindingReference *_Dst;
  
  _Dst = (FMovieSceneBindingReference *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FMovieSceneBindingReference,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14622f090

void __thiscall
TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneTrackEvaluationFieldEntry,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x20,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14622f0e0

void __thiscall
TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x30;
  DestructItems<FUniversalObjectLocatorFragment,int>
            (*(FUniversalObjectLocatorFragment **)(_Dst + 0x10),*(int *)(_Dst + 0x18));
  if (*(void **)(_Dst + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x10));
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

// AddUniqueImpl<TObjectPtr<UMovieSceneSection>_> @ 14627d6b0

int __thiscall
TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UMovieSceneSection>_>
          (TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMovieSceneSection> *param_1)

{
  FScriptContainerElement *pFVar1;
  UMovieSceneSection *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UMovieSceneSection **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
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
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UMovieSceneSection **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieSceneSection *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// ~TArray<short,TSizedDefaultAllocator<32>_> @ 14629b600

void __thiscall
TArray<short,TSizedDefaultAllocator<32>_>::~TArray<short,TSizedDefaultAllocator<32>_>
          (TArray<short,TSizedDefaultAllocator<32>_> *this)

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

// Insert @ 1462b2e90

int __thiscall
TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Insert
          (TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,FMovieSceneChannelEntry *param_1,int param_2)

{
  longlong lVar1;
  uchar *puVar2;
  ForElementType<FMovieSceneChannelEntry> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FMovieSceneChannelEntry> FVar7;
  
  FVar3 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar3 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar7 = FVar3;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar3 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar7 = FVar3;
    }
    if ((param_1 < (FMovieSceneChannelEntry *)((longlong)FVar7 + (longlong)this->ArrayMax * 0x18))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar6 + 1;
  FVar3 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar3 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar7 = FVar3;
  }
  lVar1 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar1 + (longlong)FVar7 + 0x18),(void *)(lVar1 + (longlong)FVar7),
          (longlong)(iVar6 - param_2) * 0x18);
  FVar3 = (this->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar3;
  }
  *(FName *)((longlong)this + lVar1) = param_1->ChannelTypeName;
  puVar2 = (uchar *)((longlong)this + 8) + lVar1;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(FScriptContainerElement **)((uchar *)((longlong)this + 8) + lVar1) =
       (param_1->Channels).AllocatorInstance.Data;
  (param_1->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((uchar *)((longlong)this + 0x10) + lVar1) = (param_1->Channels).ArrayNum;
  *(int *)((uchar *)((longlong)this + 0x14) + lVar1) = (param_1->Channels).ArrayMax;
  (param_1->Channels).ArrayNum = 0;
  (param_1->Channels).ArrayMax = 0;
  return param_2;
}

// Remove @ 1462b8860

int __thiscall
TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMovieSceneSection> *param_1)

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
  bVar3 = *(UMovieSceneSection **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UMovieSceneSection **)(pFVar1 + lVar6 * 8) != (param_1->field0_0x0).DebugPtr
                     )) break;
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

// RemoveAt @ 1462b8ad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// Reset @ 1462b90e0

void __thiscall
TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Reset
          (TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this
          ,int param_1)

{
  int *piVar1;
  int *piVar2;
  ForElementType<FMovieSceneContext> FVar3;
  ForElementType<FMovieSceneContext> FVar4;
  
  if (-1 < param_1) {
    FVar3 = (this->AllocatorInstance).SecondaryData;
    piVar1 = &this->ArrayMax;
    piVar2 = &this->ArrayNum;
    if (*piVar1 < param_1) {
      FVar4 = (ForElementType<FMovieSceneContext>)this;
      if (FVar3 != (ForElementType<FMovieSceneContext>)0x0) {
        FVar4 = FVar3;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar4,*piVar2);
      *piVar2 = 0;
      if (*piVar1 != param_1) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                  (0x80,8,param_1,&this->AllocatorInstance,0,piVar1);
      }
    }
    else {
      if (FVar3 != (ForElementType<FMovieSceneContext>)0x0) {
        this = (TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                *)FVar3;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)this,*piVar2);
      *piVar2 = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

