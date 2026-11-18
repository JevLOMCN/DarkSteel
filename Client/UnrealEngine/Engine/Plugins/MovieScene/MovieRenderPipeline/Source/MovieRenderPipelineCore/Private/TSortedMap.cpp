// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 5

// Emplace<int_const_&> @ 14dca1830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphOutputMergerFrame * __thiscall
TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int_const_&>
          (TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FMovieGraphOutputMergerFrame *pFVar6;
  int iVar7;
  TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame> *pTVar8;
  uint uVar9;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  FMovieGraphOutputMergerFrame local_218;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_248;
  uVar1 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  if (0 < (int)uVar1) {
    uVar9 = uVar1;
    do {
      iVar2 = (uVar9 >> 1) + iVar7;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar2 * 0x1f8) < *param_1) {
        iVar7 = iVar2 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar7 < 0) || ((int)uVar1 < iVar7)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMovieGraphOutputMergerFrame *)(*pcVar3)();
      return pFVar6;
    }
    if (-1 < iVar7) goto LAB_14dca18d3;
  }
  else {
LAB_14dca18d3:
    iVar2 = (this->Pairs).ArrayNum;
    if (iVar7 < iVar2) {
      if (iVar7 < 0) {
        local_228 = (longlong)iVar7;
        local_220 = (longlong)iVar2;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FMovieGraphOutputMergerFrame *)(*pcVar3)();
          return pFVar6;
        }
      }
      pTVar8 = (TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame> *)
               ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x1f8);
      if (*(int *)pTVar8 <= *param_1) {
        DestructItems<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,int>(pTVar8,1);
        goto LAB_14dca1959;
      }
    }
  }
  TArray<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pTVar8 = (TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x1f8);
LAB_14dca1959:
  memset(&local_218,0,0x1f0);
  pFVar6 = UE::MovieGraph::FMovieGraphOutputMergerFrame::FMovieGraphOutputMergerFrame(&local_218);
  *(int *)pTVar8 = *param_1;
  UE::MovieGraph::FMovieGraphOutputMergerFrame::FMovieGraphOutputMergerFrame
            ((FMovieGraphOutputMergerFrame *)&pTVar8->field_0x8,pFVar6);
  UE::MovieGraph::FMovieGraphOutputMergerFrame::~FMovieGraphOutputMergerFrame(&local_218);
  return (FMovieGraphOutputMergerFrame *)&pTVar8->field_0x8;
}

// Find @ 14dcc8660

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphOutputMergerFrame * __thiscall
TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Find(TSortedMap<int,UE::MovieGraph::FMovieGraphOutputMergerFrame,TSizedDefaultAllocator<32>,TLess<int_const_>_>
       *this,int param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FMovieGraphOutputMergerFrame *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x1f8) < param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(int *)(pFVar3 + (longlong)iVar7 * 0x1f8) <= param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMovieGraphOutputMergerFrame *)(*pcVar4)();
      return pFVar8;
    }
    pFVar8 = (FMovieGraphOutputMergerFrame *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x1f8 + 8);
  }
  else {
    pFVar8 = (FMovieGraphOutputMergerFrame *)0x0;
  }
  return pFVar8;
}

// AllocateMemoryForEmplace<wchar_t_const_(&)[13]> @ 14dd61db0

TTuple<FString,FFormatArgumentValue> * __thiscall
TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
AllocateMemoryForEmplace<wchar_t_const_(&)[13]>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *this,wchar_t (*param_1) [13])

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTuple<FString,FFormatArgumentValue> *pTVar6;
  wchar_t *_Str2;
  ForAnyElementType _Str1;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_28;
  
  bVar3 = false;
  iVar4 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[13],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(this->Pairs).AllocatorInstance.Data,
                     (this->Pairs).ArrayNum,param_1,(FKeyForward)0x0,(FLocKeySortedMapLess)0x0);
  if ((iVar4 < 0) || ((this->Pairs).ArrayNum < iVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
      return pTVar6;
    }
    if (-1 < iVar4) goto LAB_14dd61e30;
  }
  else {
LAB_14dd61e30:
    if (iVar4 < (this->Pairs).ArrayNum) {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<FString,FFormatArgumentValue> *)(*pcVar1)();
        return pTVar6;
      }
      pFVar7 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
      ::FString::FString(&local_28,*param_1);
      if (*(int *)(pFVar7 + 8) == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)pFVar7;
      }
      _Str1.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        _Str1.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp((wchar_t *)_Str1.Data,_Str2);
      bVar3 = true;
      if (-1 < iVar5) {
        bVar2 = true;
        goto LAB_14dd61ecb;
      }
    }
  }
  bVar2 = false;
LAB_14dd61ecb:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar8 = (longlong)iVar4 * 0x30;
  if (bVar2) {
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar6,1);
  }
  else {
    TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
    InsertUninitializedImpl(&this->Pairs,iVar4,1);
    pTVar6 = (TTuple<FString,FFormatArgumentValue> *)((this->Pairs).AllocatorInstance.Data + lVar8);
  }
  return pTVar6;
}

// Emplace<FMoviePipelineFrameOutputState_const_&> @ 14dd62df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMoviePipelineMergerOutputFrame * __thiscall
TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>
::Emplace<FMoviePipelineFrameOutputState_const_&>
          (TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>
           *this,FMoviePipelineFrameOutputState *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FMoviePipelineMergerOutputFrame *pFVar4;
  TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame> *this_00;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [312];
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  iVar7 = 0;
  uVar1 = (this->Pairs).ArrayNum;
  if (0 < (int)uVar1) {
    uVar5 = uVar1;
    iVar7 = 0;
    do {
      uVar6 = uVar5 >> 1;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)(int)(uVar6 + iVar7) * 0x2a8) <
          param_1->OutputFrameNumber) {
        iVar7 = uVar6 + iVar7 + (uVar5 & 1);
      }
      uVar5 = uVar6;
    } while (uVar6 != 0);
  }
  if ((iVar7 < 0) || ((int)uVar1 < iVar7)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMoviePipelineMergerOutputFrame *)(*pcVar2)();
      return pFVar4;
    }
    if (-1 < iVar7) goto LAB_14dd62ea5;
  }
  else {
LAB_14dd62ea5:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if ((iVar7 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FMoviePipelineMergerOutputFrame *)(*pcVar2)();
        return pFVar4;
      }
      this_00 = (TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame> *)
                ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x2a8);
      if (*(int *)this_00 <= param_1->OutputFrameNumber) {
        DestructItems<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,int>
                  (this_00,1);
        goto LAB_14dd62f2b;
      }
    }
  }
  TArray<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar7,1);
  this_00 = (TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame> *)
            ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x2a8);
LAB_14dd62f2b:
  local_1c8._0_8_ = &___7FMoviePipelineMergerOutputFrame__6B_;
  FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
            ((FMoviePipelineFrameOutputState *)(local_1c8 + 8));
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_1c8._296_8_ = (FMoviePipelinePassIdentifier *)0x0;
  local_1c8._304_4_ = 0;
  local_1c8._308_4_ = 0;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_50 = (void *)0x0;
  local_48 = 0;
  FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
            ((FMoviePipelineFrameOutputState *)this_00,param_1);
  FMoviePipelineMergerOutputFrame::FMoviePipelineMergerOutputFrame
            ((FMoviePipelineMergerOutputFrame *)&this_00->field_0x120,
             (FMoviePipelineMergerOutputFrame *)local_1c8);
  local_1c8._0_8_ = &___7FMoviePipelineMergerOutputFrame__6B_;
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90,0,local_90._8_4_);
  iVar7 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar1 = local_68._4_4_;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  uStack_60 = 0xffffffff;
  if (0x80 < uVar1) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  DestructItems<FMoviePipelinePassIdentifier,int>
            ((FMoviePipelinePassIdentifier *)local_1c8._296_8_,local_1c8._304_4_);
  if ((FMoviePipelinePassIdentifier *)local_1c8._296_8_ != (FMoviePipelinePassIdentifier *)0x0) {
    FMemory::Free((void *)local_1c8._296_8_);
  }
  FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState
            ((FMoviePipelineFrameOutputState *)(local_1c8 + 8));
  return (FMoviePipelineMergerOutputFrame *)&this_00->field_0x120;
}

// Find @ 14dd826a0

FMoviePipelineMergerOutputFrame * __thiscall
TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>
::Find(TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>
       *this,FMoviePipelineFrameOutputState *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMoviePipelineMergerOutputFrame *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,TSizedDefaultAllocator<32>_>,FMoviePipelineFrameOutputState,TSortedMap<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame,TSizedDefaultAllocator<32>,TLess<FMoviePipelineFrameOutputState_const_&>_>::FKeyForward,TLess<FMoviePipelineFrameOutputState_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<FMoviePipelineFrameOutputState_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FMoviePipelineMergerOutputFrame *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMoviePipelineMergerOutputFrame *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMoviePipelineMergerOutputFrame *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x2a8 + 0x120);
}

