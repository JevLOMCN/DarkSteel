// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 45

// operator() @ 14609caa0

bool __thiscall
`TMovieSceneChannelData<unsigned_char>::RemapTimes'::__l12::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_2 * 4);
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(*plVar2 + (longlong)param_1 * 4) < iVar1;
}

// operator() @ 14609cb90

bool __thiscall
`TMovieSceneChannelData<int>::RemapTimes'::__l12::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_2 * 4);
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(*plVar2 + (longlong)param_1 * 4) < iVar1;
}

// operator() @ 14609cc80

bool __thiscall
`TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes'::__l12::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_2 * 4);
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(*plVar2 + (longlong)param_1 * 4) < iVar1;
}

// operator() @ 14609cd70

bool __thiscall
`TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes'::__l12::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_2 * 4);
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(*plVar2 + (longlong)param_1 * 4) < iVar1;
}

// operator() @ 14609ce60

bool __thiscall
`TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes'::__l12::<lambda_1>::
operator()(void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_2 * 4);
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(*plVar2 + (longlong)param_1 * 4) < iVar1;
}

// operator() @ 14609cf50

bool __thiscall
`TMovieSceneChannelData<bool>::RemapTimes'::__l12::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_2 * 4);
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(*plVar2 + (longlong)param_1 * 4) < iVar1;
}

// AddKey @ 1460a6aa0

int __thiscall
TMovieSceneChannelData<unsigned_char>::AddKey
          (TMovieSceneChannelData<unsigned_char> *this,FFrameNumber param_1,uchar param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uchar local_res18 [8];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18[0] = param_2;
  iVar2 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,param_1);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Insert(this->Values,local_res18,iVar2);
  if (this->_padding_ != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 8));
    if (bVar1) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_18.AllocatorInstance,&local_18.ArrayMax);
      local_18.ArrayNum = iVar3 + 1;
      *(ulonglong *)(local_18.AllocatorInstance.Data + (longlong)iVar3 * 8) =
           CONCAT44(param_1.Value,iVar2);
      TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                  (FMovieSceneChannel *)this->_padding_,&local_18);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return iVar2;
}

// AddKey @ 1460a6b60

int __thiscall
TMovieSceneChannelData<int>::AddKey
          (TMovieSceneChannelData<int> *this,FFrameNumber param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_res18 [2];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18[0] = param_2;
  iVar2 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,param_1);
  TArray<int,TSizedDefaultAllocator<32>_>::Insert(this->Values,local_res18,iVar2);
  if (this->_padding_ != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 8));
    if (bVar1) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_18.AllocatorInstance,&local_18.ArrayMax);
      local_18.ArrayNum = iVar3 + 1;
      *(ulonglong *)(local_18.AllocatorInstance.Data + (longlong)iVar3 * 8) =
           CONCAT44(param_1.Value,iVar2);
      TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                  (FMovieSceneChannel *)this->_padding_,&local_18);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return iVar2;
}

// AddKey @ 1460a6c20

int __thiscall
TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::AddKey
          (TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> *this,FFrameNumber param_1,
          FMovieSceneObjectPathChannelKeyValue *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_18;
  
  iVar2 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,param_1);
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_>::Insert
            (this->Values,param_2,iVar2);
  if (this->_padding_ != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 8));
    if (bVar1) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_18.AllocatorInstance,&local_18.ArrayMax);
      local_18.ArrayNum = iVar3 + 1;
      *(ulonglong *)(local_18.AllocatorInstance.Data + (longlong)iVar3 * 8) =
           CONCAT44(param_1.Value,iVar2);
      TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                  (FMovieSceneChannel *)this->_padding_,&local_18);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return iVar2;
}

// AddKey @ 1460a6cf0

int __thiscall
TMovieSceneChannelData<bool>::AddKey
          (TMovieSceneChannelData<bool> *this,FFrameNumber param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool local_res18 [8];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18[0] = param_2;
  iVar2 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,param_1);
  TArray<bool,TSizedDefaultAllocator<32>_>::Insert(this->Values,local_res18,iVar2);
  if (this->_padding_ != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 8));
    if (bVar1) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_18.AllocatorInstance,&local_18.ArrayMax);
      local_18.ArrayNum = iVar3 + 1;
      *(ulonglong *)(local_18.AllocatorInstance.Data + (longlong)iVar3 * 8) =
           CONCAT44(param_1.Value,iVar2);
      TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                  (FMovieSceneChannel *)this->_padding_,&local_18);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return iVar2;
}

// DeleteKeys @ 1460ba050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<unsigned_char>::DeleteKeys
          (TMovieSceneChannelData<unsigned_char> *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  FKeyHandle FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_38;
  
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1.Index = *(uint *)((longlong)&param_1->DataPtr->Index + uVar10);
      if (this->_padding_ == 0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
        uVar5 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar1);
        if (uVar5 != 0xffffffff) {
          if ((((int)uVar5 < 0) || (*(int *)(this->_padding_ + 8) <= (int)uVar5)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Times->IsValidIndex(KeyIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                 ,0x1fc,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((this->_padding_ != 0) &&
             (bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 (this->_padding_ + 0x28)), bVar4)) {
            plVar2 = (longlong *)this->_padding_;
            uVar6 = 0;
            if ((int)uVar5 < (int)plVar2[1]) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStackX_1c = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
            local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_38.ArrayNum = 0;
            local_38.ArrayMax = 0;
            local_res18 = uVar5;
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_38.AllocatorInstance,&local_38.ArrayMax);
            local_38.ArrayNum = iVar7 + 1;
            *(ulonglong *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8) =
                 CONCAT44(uStackX_1c,local_res18);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                        (FMovieSceneChannel *)this->_padding_,&local_38);
            if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.AllocatorInstance.Data);
            }
          }
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,uVar5,No);
          if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
            FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
          }
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  return;
}

// DeleteKeys @ 1460ba280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<int>::DeleteKeys
          (TMovieSceneChannelData<int> *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  FKeyHandle FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_38;
  
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1.Index = *(uint *)((longlong)&param_1->DataPtr->Index + uVar10);
      if (this->_padding_ == 0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
        uVar5 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar1);
        if (uVar5 != 0xffffffff) {
          if ((((int)uVar5 < 0) || (*(int *)(this->_padding_ + 8) <= (int)uVar5)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Times->IsValidIndex(KeyIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                 ,0x1fc,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((this->_padding_ != 0) &&
             (bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 (this->_padding_ + 0x28)), bVar4)) {
            plVar2 = (longlong *)this->_padding_;
            uVar6 = 0;
            if ((int)uVar5 < (int)plVar2[1]) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStackX_1c = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
            local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_38.ArrayNum = 0;
            local_38.ArrayMax = 0;
            local_res18 = uVar5;
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_38.AllocatorInstance,&local_38.ArrayMax);
            local_38.ArrayNum = iVar7 + 1;
            *(ulonglong *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8) =
                 CONCAT44(uStackX_1c,local_res18);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                        (FMovieSceneChannel *)this->_padding_,&local_38);
            if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.AllocatorInstance.Data);
            }
          }
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
          TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,uVar5,No);
          if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
            FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
          }
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  return;
}

// DeleteKeys @ 1460ba4b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneDoubleValue>::DeleteKeys
          (TMovieSceneChannelData<FMovieSceneDoubleValue> *this,
          TArrayView<FKeyHandle_const_,int> *param_1)

{
  FKeyHandle FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_38;
  
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1.Index = *(uint *)((longlong)&param_1->DataPtr->Index + uVar10);
      if (this->_padding_ == 0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
        uVar5 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar1);
        if (uVar5 != 0xffffffff) {
          if ((((int)uVar5 < 0) || (*(int *)(this->_padding_ + 8) <= (int)uVar5)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Times->IsValidIndex(KeyIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                 ,0x1fc,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((this->_padding_ != 0) &&
             (bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 (this->_padding_ + 0x28)), bVar4)) {
            plVar2 = (longlong *)this->_padding_;
            uVar6 = 0;
            if ((int)uVar5 < (int)plVar2[1]) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStackX_1c = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
            local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_38.ArrayNum = 0;
            local_38.ArrayMax = 0;
            local_res18 = uVar5;
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_38.AllocatorInstance,&local_38.ArrayMax);
            local_38.ArrayNum = iVar7 + 1;
            *(ulonglong *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8) =
                 CONCAT44(uStackX_1c,local_res18);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                        (FMovieSceneChannel *)this->_padding_,&local_38);
            if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.AllocatorInstance.Data);
            }
          }
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
          TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this->Values,uVar5,No);
          if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
            FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
          }
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  return;
}

// DeleteKeys @ 1460ba6e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneFloatValue>::DeleteKeys
          (TMovieSceneChannelData<FMovieSceneFloatValue> *this,
          TArrayView<FKeyHandle_const_,int> *param_1)

{
  FKeyHandle FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_38;
  
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1.Index = *(uint *)((longlong)&param_1->DataPtr->Index + uVar10);
      if (this->_padding_ == 0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
        uVar5 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar1);
        if (uVar5 != 0xffffffff) {
          if ((((int)uVar5 < 0) || (*(int *)(this->_padding_ + 8) <= (int)uVar5)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Times->IsValidIndex(KeyIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                 ,0x1fc,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((this->_padding_ != 0) &&
             (bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 (this->_padding_ + 0x28)), bVar4)) {
            plVar2 = (longlong *)this->_padding_;
            uVar6 = 0;
            if ((int)uVar5 < (int)plVar2[1]) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStackX_1c = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
            local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_38.ArrayNum = 0;
            local_38.ArrayMax = 0;
            local_res18 = uVar5;
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_38.AllocatorInstance,&local_38.ArrayMax);
            local_38.ArrayNum = iVar7 + 1;
            *(ulonglong *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8) =
                 CONCAT44(uStackX_1c,local_res18);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                        (FMovieSceneChannel *)this->_padding_,&local_38);
            if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.AllocatorInstance.Data);
            }
          }
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
          TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,uVar5,No)
          ;
          if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
            FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
          }
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  return;
}

// DeleteKeys @ 1460ba910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::DeleteKeys
          (TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> *this,
          TArrayView<FKeyHandle_const_,int> *param_1)

{
  FKeyHandle FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_38;
  
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1.Index = *(uint *)((longlong)&param_1->DataPtr->Index + uVar10);
      if (this->_padding_ == 0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
        uVar5 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar1);
        if (uVar5 != 0xffffffff) {
          if ((((int)uVar5 < 0) || (*(int *)(this->_padding_ + 8) <= (int)uVar5)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Times->IsValidIndex(KeyIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                 ,0x1fc,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((this->_padding_ != 0) &&
             (bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 (this->_padding_ + 0x28)), bVar4)) {
            plVar2 = (longlong *)this->_padding_;
            uVar6 = 0;
            if ((int)uVar5 < (int)plVar2[1]) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStackX_1c = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
            local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_38.ArrayNum = 0;
            local_38.ArrayMax = 0;
            local_res18 = uVar5;
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_38.AllocatorInstance,&local_38.ArrayMax);
            local_38.ArrayNum = iVar7 + 1;
            *(ulonglong *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8) =
                 CONCAT44(uStackX_1c,local_res18);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                        (FMovieSceneChannel *)this->_padding_,&local_38);
            if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.AllocatorInstance.Data);
            }
          }
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
          TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this->Values,uVar5,No);
          if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
            FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
          }
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  return;
}

// DeleteKeys @ 1460bab40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<bool>::DeleteKeys
          (TMovieSceneChannelData<bool> *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  FKeyHandle FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_38;
  
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1.Index = *(uint *)((longlong)&param_1->DataPtr->Index + uVar10);
      if (this->_padding_ == 0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
        uVar5 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar1);
        if (uVar5 != 0xffffffff) {
          if ((((int)uVar5 < 0) || (*(int *)(this->_padding_ + 8) <= (int)uVar5)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Times->IsValidIndex(KeyIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                 ,0x1fc,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((this->_padding_ != 0) &&
             (bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 (this->_padding_ + 0x28)), bVar4)) {
            plVar2 = (longlong *)this->_padding_;
            uVar6 = 0;
            if ((int)uVar5 < (int)plVar2[1]) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStackX_1c = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
            local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_38.ArrayNum = 0;
            local_38.ArrayMax = 0;
            local_res18 = uVar5;
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_38.AllocatorInstance,&local_38.ArrayMax);
            local_38.ArrayNum = iVar7 + 1;
            *(ulonglong *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8) =
                 CONCAT44(uStackX_1c,local_res18);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                        (FMovieSceneChannel *)this->_padding_,&local_38);
            if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.AllocatorInstance.Data);
            }
          }
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
          TArray<bool,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,uVar5,No);
          if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
            FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
          }
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  return;
}

// DeleteKeysFrom @ 1460bae20

void __thiscall
TMovieSceneChannelData<unsigned_char>::DeleteKeysFrom
          (TMovieSceneChannelData<unsigned_char> *this,FFrameNumber param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint local_res20;
  uint local_98;
  ForAnyElementType local_90;
  int local_88;
  int iStack_84;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_80;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_70;
  TRange<FFrameNumber> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FKeyHandle_const_,int> local_38;
  
  uVar7 = 0;
  local_res20 = CONCAT31(local_res20._1_3_,2);
  local_60.LowerBound.Value.Value = 0;
  local_60.LowerBound._0_4_ = local_res20;
  local_98 = CONCAT31(local_98._1_3_,2);
  local_60.UpperBound.Value.Value = 0;
  local_60.UpperBound._0_4_ = local_98;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  FMovieSceneChannelData::GetKeys((FMovieSceneChannelData *)this,&local_60,&local_80,&local_70);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  iStack_84 = 0;
  uVar10 = uVar7;
  if (0 < local_80.ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar8 = ~uVar6 >> 0x1f;
      if (param_2) {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_80.AllocatorInstance.Data + uVar10) < param_1.Value) {
LAB_1460baf6f:
          uVar4 = 0;
          if ((int)uVar6 < local_70.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar9 = local_70.AllocatorInstance.Data + uVar10;
          if (((local_90.Data <= pFVar9) && (pFVar9 < local_90.Data + (longlong)iStack_84 * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_88 == iStack_84) {
            local_88 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_90,&iStack_84);
          }
          lVar5 = (longlong)local_88;
          local_88 = local_88 + 1;
          *(undefined4 *)(local_90.Data + lVar5 * 4) = *(undefined4 *)pFVar9;
        }
      }
      else {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_1460baf6f;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar6 + 1) < local_80.ArrayNum);
  }
  iVar2 = local_88;
  local_48 = local_90.Data;
  if ((local_88 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_40 = iVar2;
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar2;
  local_38.DataPtr = (FKeyHandle *)local_48;
  DeleteKeys(this,&local_38);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// DeleteKeysFrom @ 1460bb120

void __thiscall
TMovieSceneChannelData<int>::DeleteKeysFrom
          (TMovieSceneChannelData<int> *this,FFrameNumber param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint local_res20;
  uint local_98;
  ForAnyElementType local_90;
  int local_88;
  int iStack_84;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_80;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_70;
  TRange<FFrameNumber> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FKeyHandle_const_,int> local_38;
  
  uVar7 = 0;
  local_res20 = CONCAT31(local_res20._1_3_,2);
  local_60.LowerBound.Value.Value = 0;
  local_60.LowerBound._0_4_ = local_res20;
  local_98 = CONCAT31(local_98._1_3_,2);
  local_60.UpperBound.Value.Value = 0;
  local_60.UpperBound._0_4_ = local_98;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  FMovieSceneChannelData::GetKeys((FMovieSceneChannelData *)this,&local_60,&local_80,&local_70);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  iStack_84 = 0;
  uVar10 = uVar7;
  if (0 < local_80.ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar8 = ~uVar6 >> 0x1f;
      if (param_2) {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_80.AllocatorInstance.Data + uVar10) < param_1.Value) {
LAB_1460bb26f:
          uVar4 = 0;
          if ((int)uVar6 < local_70.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar9 = local_70.AllocatorInstance.Data + uVar10;
          if (((local_90.Data <= pFVar9) && (pFVar9 < local_90.Data + (longlong)iStack_84 * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_88 == iStack_84) {
            local_88 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_90,&iStack_84);
          }
          lVar5 = (longlong)local_88;
          local_88 = local_88 + 1;
          *(undefined4 *)(local_90.Data + lVar5 * 4) = *(undefined4 *)pFVar9;
        }
      }
      else {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_1460bb26f;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar6 + 1) < local_80.ArrayNum);
  }
  iVar2 = local_88;
  local_48 = local_90.Data;
  if ((local_88 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_40 = iVar2;
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar2;
  local_38.DataPtr = (FKeyHandle *)local_48;
  DeleteKeys(this,&local_38);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// DeleteKeysFrom @ 1460bb420

void __thiscall
TMovieSceneChannelData<FMovieSceneDoubleValue>::DeleteKeysFrom
          (TMovieSceneChannelData<FMovieSceneDoubleValue> *this,FFrameNumber param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint local_res20;
  uint local_98;
  ForAnyElementType local_90;
  int local_88;
  int iStack_84;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_80;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_70;
  TRange<FFrameNumber> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FKeyHandle_const_,int> local_38;
  
  uVar7 = 0;
  local_res20 = CONCAT31(local_res20._1_3_,2);
  local_60.LowerBound.Value.Value = 0;
  local_60.LowerBound._0_4_ = local_res20;
  local_98 = CONCAT31(local_98._1_3_,2);
  local_60.UpperBound.Value.Value = 0;
  local_60.UpperBound._0_4_ = local_98;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  FMovieSceneChannelData::GetKeys((FMovieSceneChannelData *)this,&local_60,&local_80,&local_70);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  iStack_84 = 0;
  uVar10 = uVar7;
  if (0 < local_80.ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar8 = ~uVar6 >> 0x1f;
      if (param_2) {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_80.AllocatorInstance.Data + uVar10) < param_1.Value) {
LAB_1460bb56f:
          uVar4 = 0;
          if ((int)uVar6 < local_70.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar9 = local_70.AllocatorInstance.Data + uVar10;
          if (((local_90.Data <= pFVar9) && (pFVar9 < local_90.Data + (longlong)iStack_84 * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_88 == iStack_84) {
            local_88 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_90,&iStack_84);
          }
          lVar5 = (longlong)local_88;
          local_88 = local_88 + 1;
          *(undefined4 *)(local_90.Data + lVar5 * 4) = *(undefined4 *)pFVar9;
        }
      }
      else {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_1460bb56f;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar6 + 1) < local_80.ArrayNum);
  }
  iVar2 = local_88;
  local_48 = local_90.Data;
  if ((local_88 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_40 = iVar2;
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar2;
  local_38.DataPtr = (FKeyHandle *)local_48;
  DeleteKeys(this,&local_38);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// DeleteKeysFrom @ 1460bb720

void __thiscall
TMovieSceneChannelData<FMovieSceneFloatValue>::DeleteKeysFrom
          (TMovieSceneChannelData<FMovieSceneFloatValue> *this,FFrameNumber param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint local_res20;
  uint local_98;
  ForAnyElementType local_90;
  int local_88;
  int iStack_84;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_80;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_70;
  TRange<FFrameNumber> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FKeyHandle_const_,int> local_38;
  
  uVar7 = 0;
  local_res20 = CONCAT31(local_res20._1_3_,2);
  local_60.LowerBound.Value.Value = 0;
  local_60.LowerBound._0_4_ = local_res20;
  local_98 = CONCAT31(local_98._1_3_,2);
  local_60.UpperBound.Value.Value = 0;
  local_60.UpperBound._0_4_ = local_98;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  FMovieSceneChannelData::GetKeys((FMovieSceneChannelData *)this,&local_60,&local_80,&local_70);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  iStack_84 = 0;
  uVar10 = uVar7;
  if (0 < local_80.ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar8 = ~uVar6 >> 0x1f;
      if (param_2) {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_80.AllocatorInstance.Data + uVar10) < param_1.Value) {
LAB_1460bb86f:
          uVar4 = 0;
          if ((int)uVar6 < local_70.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar9 = local_70.AllocatorInstance.Data + uVar10;
          if (((local_90.Data <= pFVar9) && (pFVar9 < local_90.Data + (longlong)iStack_84 * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_88 == iStack_84) {
            local_88 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_90,&iStack_84);
          }
          lVar5 = (longlong)local_88;
          local_88 = local_88 + 1;
          *(undefined4 *)(local_90.Data + lVar5 * 4) = *(undefined4 *)pFVar9;
        }
      }
      else {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_1460bb86f;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar6 + 1) < local_80.ArrayNum);
  }
  iVar2 = local_88;
  local_48 = local_90.Data;
  if ((local_88 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_40 = iVar2;
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar2;
  local_38.DataPtr = (FKeyHandle *)local_48;
  DeleteKeys(this,&local_38);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// DeleteKeysFrom @ 1460bba20

void __thiscall
TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::DeleteKeysFrom
          (TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> *this,FFrameNumber param_1,
          bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint local_res20;
  uint local_98;
  ForAnyElementType local_90;
  int local_88;
  int iStack_84;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_80;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_70;
  TRange<FFrameNumber> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FKeyHandle_const_,int> local_38;
  
  uVar7 = 0;
  local_res20 = CONCAT31(local_res20._1_3_,2);
  local_60.LowerBound.Value.Value = 0;
  local_60.LowerBound._0_4_ = local_res20;
  local_98 = CONCAT31(local_98._1_3_,2);
  local_60.UpperBound.Value.Value = 0;
  local_60.UpperBound._0_4_ = local_98;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  FMovieSceneChannelData::GetKeys((FMovieSceneChannelData *)this,&local_60,&local_80,&local_70);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  iStack_84 = 0;
  uVar10 = uVar7;
  if (0 < local_80.ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar8 = ~uVar6 >> 0x1f;
      if (param_2) {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_80.AllocatorInstance.Data + uVar10) < param_1.Value) {
LAB_1460bbb6f:
          uVar4 = 0;
          if ((int)uVar6 < local_70.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar9 = local_70.AllocatorInstance.Data + uVar10;
          if (((local_90.Data <= pFVar9) && (pFVar9 < local_90.Data + (longlong)iStack_84 * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_88 == iStack_84) {
            local_88 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_90,&iStack_84);
          }
          lVar5 = (longlong)local_88;
          local_88 = local_88 + 1;
          *(undefined4 *)(local_90.Data + lVar5 * 4) = *(undefined4 *)pFVar9;
        }
      }
      else {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_1460bbb6f;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar6 + 1) < local_80.ArrayNum);
  }
  iVar2 = local_88;
  local_48 = local_90.Data;
  if ((local_88 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_40 = iVar2;
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar2;
  local_38.DataPtr = (FKeyHandle *)local_48;
  DeleteKeys(this,&local_38);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// DeleteKeysFrom @ 1460bbd20

void __thiscall
TMovieSceneChannelData<bool>::DeleteKeysFrom
          (TMovieSceneChannelData<bool> *this,FFrameNumber param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint local_res20;
  uint local_98;
  ForAnyElementType local_90;
  int local_88;
  int iStack_84;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_80;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_70;
  TRange<FFrameNumber> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FKeyHandle_const_,int> local_38;
  
  uVar7 = 0;
  local_res20 = CONCAT31(local_res20._1_3_,2);
  local_60.LowerBound.Value.Value = 0;
  local_60.LowerBound._0_4_ = local_res20;
  local_98 = CONCAT31(local_98._1_3_,2);
  local_60.UpperBound.Value.Value = 0;
  local_60.UpperBound._0_4_ = local_98;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  FMovieSceneChannelData::GetKeys((FMovieSceneChannelData *)this,&local_60,&local_80,&local_70);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  iStack_84 = 0;
  uVar10 = uVar7;
  if (0 < local_80.ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar8 = ~uVar6 >> 0x1f;
      if (param_2) {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_80.AllocatorInstance.Data + uVar10) < param_1.Value) {
LAB_1460bbe6f:
          uVar4 = 0;
          if ((int)uVar6 < local_70.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar9 = local_70.AllocatorInstance.Data + uVar10;
          if (((local_90.Data <= pFVar9) && (pFVar9 < local_90.Data + (longlong)iStack_84 * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_88 == iStack_84) {
            local_88 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_90,&iStack_84);
          }
          lVar5 = (longlong)local_88;
          local_88 = local_88 + 1;
          *(undefined4 *)(local_90.Data + lVar5 * 4) = *(undefined4 *)pFVar9;
        }
      }
      else {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_1460bbe6f;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar6 + 1) < local_80.ArrayNum);
  }
  iVar2 = local_88;
  local_48 = local_90.Data;
  if ((local_88 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_40 = iVar2;
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar2;
  local_38.DataPtr = (FKeyHandle *)local_48;
  DeleteKeys(this,&local_38);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// DuplicateKeys @ 1460c01b0

void __thiscall
TMovieSceneChannelData<unsigned_char>::DuplicateKeys
          (TMovieSceneChannelData<unsigned_char> *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  FScriptContainerElement FVar1;
  FFrameNumber FVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FKeyHandle FVar11;
  undefined4 extraout_var;
  FKeyHandle *pFVar12;
  undefined4 extraout_var_00;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 local_res20 [8];
  FScriptContainerElement local_78 [8];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  FKeyHandle local_68 [2];
  int local_60;
  int iStack_5c;
  longlong local_58;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_50;
  
  iVar9 = param_1->ArrayNum;
  uVar15 = 0;
  if (0 < iVar9) {
    local_58 = 0;
    do {
      lVar14 = local_58;
      uVar13 = ~uVar15 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar15 < iVar9) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar11.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar14);
      if (this->_padding_ == 0) {
        local_res20[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
LAB_1460c048c:
        FVar11 = FKeyHandle::Invalid();
        uVar7 = *(uint *)CONCAT44(extraout_var_00,FVar11.Index);
        uVar8 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar7 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar11);
        if (uVar7 == 0xffffffff) goto LAB_1460c048c;
        pTVar3 = this->Values;
        uVar8 = 0;
        if ((int)uVar7 < pTVar3->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar4 = (longlong *)this->_padding_;
        FVar1 = (pTVar3->AllocatorInstance).Data[(int)uVar7];
        uVar8 = 0;
        if ((int)uVar7 < (int)plVar4[1]) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2.Value = *(int *)(*plVar4 + (longlong)(int)uVar7 * 4);
        local_78[0] = FVar1;
        iVar9 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar2);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Insert
                  (this->Values,(uchar *)local_78,iVar9);
        if ((this->_padding_ != 0) &&
           (bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar6)) {
          local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_50.ArrayNum = 0;
          local_50.ArrayMax = 0;
          local_60 = iVar9;
          iStack_5c = FVar2.Value;
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_50.AllocatorInstance,&local_50.ArrayMax);
          local_50.ArrayNum = iVar10 + 1;
          *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)iVar10 * 8) =
               CONCAT44(iStack_5c,local_60);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_50);
          if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.AllocatorInstance.Data);
          }
        }
        if (((iVar9 < 0) || (*(int *)(this->_padding_ + 8) <= iVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                               ,0x69,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (this->_padding_ == 0) {
          local_70[0] = 0;
          `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_70);
        }
        if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
          pFVar12 = FKeyHandle::FKeyHandle(local_68);
        }
        else {
          FVar11 = FKeyHandleLookupTable::FindOrAddKeyHandle
                             ((FKeyHandleLookupTable *)this->_padding_,(int)local_6c);
          pFVar12 = (FKeyHandle *)CONCAT44(extraout_var,FVar11.Index);
        }
        uVar7 = pFVar12->Index;
        uVar8 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar8 = uVar13;
        }
        lVar14 = local_58;
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar14 = local_58, bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar15 = uVar15 + 1;
      *(uint *)((longlong)&param_2->DataPtr->Index + lVar14) = uVar7;
      local_58 = lVar14 + 4;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar15 < iVar9);
  }
  return;
}

// DuplicateKeys @ 1460c0540

void __thiscall
TMovieSceneChannelData<int>::DuplicateKeys
          (TMovieSceneChannelData<int> *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  FFrameNumber FVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FKeyHandle FVar10;
  undefined4 extraout_var;
  FKeyHandle *pFVar11;
  undefined4 extraout_var_00;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  int local_70 [2];
  undefined1 local_68 [4];
  FKeyHandle local_64 [2];
  int local_5c;
  int iStack_58;
  longlong local_50;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_48;
  
  iVar8 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar8) {
    local_50 = 0;
    do {
      lVar13 = local_50;
      uVar12 = ~uVar14 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar14 < iVar8) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar10.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar13);
      if (this->_padding_ == 0) {
        local_res20[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
LAB_1460c081c:
        FVar10 = FKeyHandle::Invalid();
        uVar6 = *(uint *)CONCAT44(extraout_var_00,FVar10.Index);
        uVar7 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        uVar6 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar10);
        if (uVar6 == 0xffffffff) goto LAB_1460c081c;
        pTVar2 = this->Values;
        uVar7 = 0;
        if ((int)uVar6 < pTVar2->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = (longlong *)this->_padding_;
        iVar8 = *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 4);
        uVar7 = 0;
        if ((int)uVar6 < (int)plVar3[1]) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar1.Value = *(int *)((longlong)(int)uVar6 * 4 + *plVar3);
        local_70[0] = iVar8;
        iVar8 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar1);
        TArray<int,TSizedDefaultAllocator<32>_>::Insert(this->Values,local_70,iVar8);
        if ((this->_padding_ != 0) &&
           (bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar5)) {
          local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.ArrayNum = 0;
          local_48.ArrayMax = 0;
          local_5c = iVar8;
          iStack_58 = FVar1.Value;
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_48.AllocatorInstance,&local_48.ArrayMax);
          local_48.ArrayNum = iVar9 + 1;
          *(ulonglong *)(local_48.AllocatorInstance.Data + (longlong)iVar9 * 8) =
               CONCAT44(iStack_58,local_5c);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_48);
          if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.AllocatorInstance.Data);
          }
        }
        if (((iVar8 < 0) || (*(int *)(this->_padding_ + 8) <= iVar8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                               ,0x69,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (this->_padding_ == 0) {
          local_78[0] = 0;
          `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_78);
        }
        if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
          pFVar11 = FKeyHandle::FKeyHandle(local_64);
        }
        else {
          FVar10 = FKeyHandleLookupTable::FindOrAddKeyHandle
                             ((FKeyHandleLookupTable *)this->_padding_,(int)local_68);
          pFVar11 = (FKeyHandle *)CONCAT44(extraout_var,FVar10.Index);
        }
        uVar6 = pFVar11->Index;
        uVar7 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar7 = uVar12;
        }
        lVar13 = local_50;
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar13 = local_50, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar14 = uVar14 + 1;
      *(uint *)((longlong)&param_2->DataPtr->Index + lVar13) = uVar6;
      local_50 = lVar13 + 4;
      iVar8 = param_1->ArrayNum;
    } while ((int)uVar14 < iVar8);
  }
  return;
}

// DuplicateKeys @ 1460c08d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FMovieSceneDoubleValue>::DuplicateKeys
          (TMovieSceneChannelData<FMovieSceneDoubleValue> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FKeyHandle,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  FFrameNumber FVar2;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  TArrayView<FKeyHandle_const_,int> *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FKeyHandle FVar13;
  undefined4 extraout_var;
  FKeyHandle *pFVar14;
  undefined4 extraout_var_00;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined1 local_a7 [7];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_a0;
  int local_90;
  int iStack_8c;
  undefined1 local_88 [4];
  FKeyHandle local_84 [3];
  TArrayView<FKeyHandle,int> *local_78;
  TArrayView<FKeyHandle_const_,int> *local_70;
  FMovieSceneDoubleValue local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar11 = param_1->ArrayNum;
  uVar16 = 0;
  if (0 < iVar11) {
    lVar17 = 0;
    local_78 = param_2;
    local_70 = param_1;
    do {
      pTVar7 = local_70;
      uVar9 = 0;
      if ((int)uVar16 < iVar11) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_b0 = (longlong)iVar11;
        local_b8 = (longlong)(int)uVar16;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FVar13.Index = *(uint *)((longlong)&pTVar7->DataPtr->Index + lVar17);
      if (this->_padding_ == 0) {
        local_a8 = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(&local_a8);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
LAB_1460c0b80:
        FVar13 = FKeyHandle::Invalid();
        pFVar14 = (FKeyHandle *)CONCAT44(extraout_var_00,FVar13.Index);
      }
      else {
        uVar9 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar13);
        lVar15 = (longlong)(int)uVar9;
        if (uVar9 == 0xffffffff) goto LAB_1460c0b80;
        pTVar3 = this->Values;
        iVar11 = pTVar3->ArrayNum;
        uVar10 = 0;
        if ((int)uVar9 < iVar11) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (local_b8 = lVar15, local_b0 = (longlong)iVar11,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        plVar5 = (longlong *)this->_padding_;
        pFVar1 = pFVar4 + lVar15 * 0x20;
        local_68.Value = *(double *)pFVar1;
        local_68.Tangent._0_8_ = *(undefined8 *)(pFVar1 + 8);
        pFVar4 = pFVar4 + lVar15 * 0x20 + 0x10;
        local_68.Tangent._8_8_ = *(undefined8 *)pFVar4;
        local_68._24_8_ = *(undefined8 *)(pFVar4 + 8);
        iVar11 = (int)plVar5[1];
        uVar10 = 0;
        if ((int)uVar9 < iVar11) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (local_b8 = lVar15, local_b0 = (longlong)iVar11,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2.Value = *(int *)(*plVar5 + lVar15 * 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar2);
        TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>::Insert
                  (this->Values,&local_68,iVar11);
        if ((this->_padding_ != 0) &&
           (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar8)) {
          local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.ArrayNum = 0;
          local_a0.ArrayMax = 0;
          local_90 = iVar11;
          iStack_8c = FVar2.Value;
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
          local_a0.ArrayNum = iVar12 + 1;
          *(ulonglong *)(local_a0.AllocatorInstance.Data + (longlong)iVar12 * 8) =
               CONCAT44(iStack_8c,local_90);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_a0);
          if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
          }
        }
        if (((iVar11 < 0) || (*(int *)(this->_padding_ + 8) <= iVar11)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                               ,0x69,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (this->_padding_ == 0) {
          local_a7[0] = 0;
          `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_a7);
        }
        if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
          pFVar14 = FKeyHandle::FKeyHandle(local_84);
          param_2 = local_78;
        }
        else {
          FVar13 = FKeyHandleLookupTable::FindOrAddKeyHandle
                             ((FKeyHandleLookupTable *)this->_padding_,(int)local_88);
          pFVar14 = (FKeyHandle *)CONCAT44(extraout_var,FVar13.Index);
          param_2 = local_78;
        }
      }
      uVar9 = pFVar14->Index;
      uVar10 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_b8 = (longlong)(int)uVar16;
        local_b0 = (longlong)param_2->ArrayNum;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar16 = uVar16 + 1;
      *(uint *)((longlong)&param_2->DataPtr->Index + lVar17) = uVar9;
      lVar17 = lVar17 + 4;
      iVar11 = local_70->ArrayNum;
    } while ((int)uVar16 < iVar11);
  }
  return;
}

// DuplicateKeys @ 1460c0c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FMovieSceneFloatValue>::DuplicateKeys
          (TMovieSceneChannelData<FMovieSceneFloatValue> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FKeyHandle,int> *param_2)

{
  FFrameNumber FVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  TArrayView<FKeyHandle_const_,int> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FKeyHandle FVar12;
  undefined4 extraout_var;
  FKeyHandle *pFVar13;
  undefined4 extraout_var_00;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined1 local_a7 [7];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_a0;
  int local_90;
  int iStack_8c;
  undefined1 local_88 [4];
  FKeyHandle local_84 [3];
  TArrayView<FKeyHandle,int> *local_78;
  TArrayView<FKeyHandle_const_,int> *local_70;
  FMovieSceneFloatValue local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar10 = param_1->ArrayNum;
  uVar16 = 0;
  if (0 < iVar10) {
    lVar17 = 0;
    local_78 = param_2;
    local_70 = param_1;
    do {
      pTVar6 = local_70;
      uVar8 = 0;
      if ((int)uVar16 < iVar10) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_b0 = (longlong)iVar10;
        local_b8 = (longlong)(int)uVar16;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar12.Index = *(uint *)((longlong)&pTVar6->DataPtr->Index + lVar17);
      if (this->_padding_ == 0) {
        local_a8 = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(&local_a8);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
LAB_1460c0efa:
        FVar12 = FKeyHandle::Invalid();
        pFVar13 = (FKeyHandle *)CONCAT44(extraout_var_00,FVar12.Index);
      }
      else {
        uVar8 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar12);
        lVar15 = (longlong)(int)uVar8;
        if (uVar8 == 0xffffffff) goto LAB_1460c0efa;
        pTVar2 = this->Values;
        iVar10 = pTVar2->ArrayNum;
        uVar9 = 0;
        if ((int)uVar8 < iVar10) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_b8 = lVar15, local_b0 = (longlong)iVar10,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        plVar4 = (longlong *)this->_padding_;
        lVar14 = lVar15 * 0x1c;
        local_68._0_8_ = *(undefined8 *)(pFVar3 + lVar14);
        local_68.Tangent._4_8_ = *(undefined8 *)(pFVar3 + lVar14 + 8);
        local_68.Tangent._12_8_ = *(undefined8 *)(pFVar3 + lVar14 + 0x10);
        local_68._24_4_ = *(undefined4 *)(pFVar3 + lVar14 + 0x18);
        iVar10 = (int)plVar4[1];
        uVar9 = 0;
        if ((int)uVar8 < iVar10) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (local_b8 = lVar15, local_b0 = (longlong)iVar10,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar1.Value = *(int *)(*plVar4 + lVar15 * 4);
        iVar10 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar1);
        TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>::Insert
                  (this->Values,&local_68,iVar10);
        if ((this->_padding_ != 0) &&
           (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar7)) {
          local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.ArrayNum = 0;
          local_a0.ArrayMax = 0;
          local_90 = iVar10;
          iStack_8c = FVar1.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
          local_a0.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_a0.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_8c,local_90);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_a0);
          if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
          }
        }
        if (((iVar10 < 0) || (*(int *)(this->_padding_ + 8) <= iVar10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                               ,0x69,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (this->_padding_ == 0) {
          local_a7[0] = 0;
          `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_a7);
        }
        if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
          pFVar13 = FKeyHandle::FKeyHandle(local_84);
          param_2 = local_78;
        }
        else {
          FVar12 = FKeyHandleLookupTable::FindOrAddKeyHandle
                             ((FKeyHandleLookupTable *)this->_padding_,(int)local_88);
          pFVar13 = (FKeyHandle *)CONCAT44(extraout_var,FVar12.Index);
          param_2 = local_78;
        }
      }
      uVar8 = pFVar13->Index;
      uVar9 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_b8 = (longlong)(int)uVar16;
        local_b0 = (longlong)param_2->ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar16 = uVar16 + 1;
      *(uint *)((longlong)&param_2->DataPtr->Index + lVar17) = uVar8;
      lVar17 = lVar17 + 4;
      iVar10 = local_70->ArrayNum;
    } while ((int)uVar16 < iVar10);
  }
  return;
}

// DuplicateKeys @ 1460c0fb0

void __thiscall
TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::DuplicateKeys
          (TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FKeyHandle,int> *param_2)

{
  FFrameNumber FVar1;
  undefined4 uVar2;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FKeyHandle FVar11;
  undefined4 extraout_var;
  FKeyHandle *pFVar12;
  undefined4 extraout_var_00;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_90;
  int local_80;
  int iStack_7c;
  undefined1 local_78 [4];
  FKeyHandle local_74 [3];
  undefined1 local_68 [24];
  void *local_50;
  TObjectPtr<UObject>_u_0 local_40;
  
  iVar9 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar9) {
    lVar15 = 0;
    do {
      uVar16 = ~uVar14 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar14 < iVar9) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar11.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar15);
      if (this->_padding_ == 0) {
        local_res20[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
LAB_1460c12d2:
        FVar11 = FKeyHandle::Invalid();
        uVar2 = *(undefined4 *)CONCAT44(extraout_var_00,FVar11.Index);
        uVar7 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)((longlong)&param_2->DataPtr->Index + lVar15) = uVar2;
      }
      else {
        uVar7 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar11);
        if (uVar7 == 0xffffffff) goto LAB_1460c12d2;
        pTVar3 = this->Values;
        uVar8 = 0;
        if ((int)uVar7 < pTVar3->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x30;
        local_68._0_8_ = *(undefined8 *)pFVar13;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_68 + 8),(FSoftObjectPath *)(pFVar13 + 8));
        local_40 = (TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)(pFVar13 + 0x28))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_40.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_40.DebugPtr);
        }
        plVar4 = (longlong *)this->_padding_;
        uVar8 = 0;
        if ((int)uVar7 < (int)plVar4[1]) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar1.Value = *(int *)(*plVar4 + (longlong)(int)uVar7 * 4);
        iVar9 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar1);
        TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_>::Insert
                  (this->Values,(FMovieSceneObjectPathChannelKeyValue *)local_68,iVar9);
        if ((this->_padding_ != 0) &&
           (bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar6)) {
          local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.ArrayNum = 0;
          local_90.ArrayMax = 0;
          local_80 = iVar9;
          iStack_7c = FVar1.Value;
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_90.AllocatorInstance,&local_90.ArrayMax);
          local_90.ArrayNum = iVar10 + 1;
          *(ulonglong *)(local_90.AllocatorInstance.Data + (longlong)iVar10 * 8) =
               CONCAT44(iStack_7c,local_80);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_90);
          if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.AllocatorInstance.Data);
          }
        }
        if (((iVar9 < 0) || (*(int *)(this->_padding_ + 8) <= iVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                               ,0x69,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (this->_padding_ == 0) {
          local_98[0] = 0;
          `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_98);
        }
        if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
          pFVar12 = FKeyHandle::FKeyHandle(local_74);
        }
        else {
          FVar11 = FKeyHandleLookupTable::FindOrAddKeyHandle
                             ((FKeyHandleLookupTable *)this->_padding_,(int)local_78);
          pFVar12 = (FKeyHandle *)CONCAT44(extraout_var,FVar11.Index);
        }
        uVar7 = pFVar12->Index;
        uVar8 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)((longlong)&param_2->DataPtr->Index + lVar15) = uVar7;
        if (local_50 != (void *)0x0) {
          FMemory::Free(local_50);
        }
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 4;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar14 < iVar9);
  }
  return;
}

// DuplicateKeys @ 1460c1380

void __thiscall
TMovieSceneChannelData<bool>::DuplicateKeys
          (TMovieSceneChannelData<bool> *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  FScriptContainerElement FVar1;
  FFrameNumber FVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FKeyHandle FVar11;
  undefined4 extraout_var;
  FKeyHandle *pFVar12;
  undefined4 extraout_var_00;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 local_res20 [8];
  FScriptContainerElement local_78 [8];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  FKeyHandle local_68 [2];
  int local_60;
  int iStack_5c;
  longlong local_58;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_50;
  
  iVar9 = param_1->ArrayNum;
  uVar15 = 0;
  if (0 < iVar9) {
    local_58 = 0;
    do {
      lVar14 = local_58;
      uVar13 = ~uVar15 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar15 < iVar9) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar11.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar14);
      if (this->_padding_ == 0) {
        local_res20[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
LAB_1460c165c:
        FVar11 = FKeyHandle::Invalid();
        uVar7 = *(uint *)CONCAT44(extraout_var_00,FVar11.Index);
        uVar8 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar7 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar11);
        if (uVar7 == 0xffffffff) goto LAB_1460c165c;
        pTVar3 = this->Values;
        uVar8 = 0;
        if ((int)uVar7 < pTVar3->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar4 = (longlong *)this->_padding_;
        FVar1 = (pTVar3->AllocatorInstance).Data[(int)uVar7];
        uVar8 = 0;
        if ((int)uVar7 < (int)plVar4[1]) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2.Value = *(int *)(*plVar4 + (longlong)(int)uVar7 * 4);
        local_78[0] = FVar1;
        iVar9 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar2);
        TArray<bool,TSizedDefaultAllocator<32>_>::Insert(this->Values,(bool *)local_78,iVar9);
        if ((this->_padding_ != 0) &&
           (bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar6)) {
          local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_50.ArrayNum = 0;
          local_50.ArrayMax = 0;
          local_60 = iVar9;
          iStack_5c = FVar2.Value;
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_50.AllocatorInstance,&local_50.ArrayMax);
          local_50.ArrayNum = iVar10 + 1;
          *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)iVar10 * 8) =
               CONCAT44(iStack_5c,local_60);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_50);
          if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.AllocatorInstance.Data);
          }
        }
        if (((iVar9 < 0) || (*(int *)(this->_padding_ + 8) <= iVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                               ,0x69,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (this->_padding_ == 0) {
          local_70[0] = 0;
          `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_70);
        }
        if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
          pFVar12 = FKeyHandle::FKeyHandle(local_68);
        }
        else {
          FVar11 = FKeyHandleLookupTable::FindOrAddKeyHandle
                             ((FKeyHandleLookupTable *)this->_padding_,(int)local_6c);
          pFVar12 = (FKeyHandle *)CONCAT44(extraout_var,FVar11.Index);
        }
        uVar7 = pFVar12->Index;
        uVar8 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar8 = uVar13;
        }
        lVar14 = local_58;
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar14 = local_58, bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar15 = uVar15 + 1;
      *(uint *)((longlong)&param_2->DataPtr->Index + lVar14) = uVar7;
      local_58 = lVar14 + 4;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar15 < iVar9);
  }
  return;
}

// GetTotalRange @ 1460d0cc0

TRange<FFrameNumber> * __thiscall
TMovieSceneChannelData<bool_const_>::GetTotalRange
          (TMovieSceneChannelData<bool_const_> *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  TRangeBound<FFrameNumber> TVar7;
  bool bVar8;
  TRange<FFrameNumber> *pTVar9;
  TRangeBound<FFrameNumber> *pTVar10;
  uint uVar11;
  uint uVar12;
  undefined4 local_res8;
  undefined1 local_resc;
  undefined2 uStackX_d;
  undefined1 uStackX_f;
  uint local_res10;
  uint local_res18;
  undefined3 uStackX_21;
  undefined1 local_res24;
  undefined2 uStackX_25;
  undefined1 uStackX_27;
  TRangeBound<FFrameNumber> local_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined2 uStack_3b;
  undefined1 uStack_39;
  TRangeBound<FFrameNumber> local_38;
  uint local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  
  pTVar4 = this->Times;
  iVar1 = pTVar4->ArrayNum;
  if (iVar1 == 0) {
    local_res10 = local_res10 & 0xffffff00;
    local_38._0_4_ = local_res10;
    local_38.Value.Value._1_2_ = 0;
    local_38.Value.Value._3_1_ = 0;
    local_res18 = local_res18 & 0xffffff00;
    local_30 = local_res18;
    local_2b = 0;
    local_29 = 0;
    pTVar10 = &local_38;
    local_38.Value.Value._0_1_ = 0;
    local_2c = 0;
  }
  else {
    uVar12 = iVar1 - 1;
    uVar11 = 0;
    if ((int)uVar12 < iVar1) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TRange<FFrameNumber> *)(*pcVar6)();
        return pTVar9;
      }
    }
    pTVar5 = this->Times;
    local_res8 = CONCAT31(local_res8._1_3_,1);
    uVar2 = *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar12 * 4);
    if (pTVar5->ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TRange<FFrameNumber> *)(*pcVar6)();
        return pTVar9;
      }
    }
    local_48.Type.Value = '\x01';
    uVar3 = *(undefined4 *)(pTVar5->AllocatorInstance).Data;
    local_res24 = (undefined1)uVar3;
    uStackX_25 = (undefined2)((uint)uVar3 >> 8);
    uStackX_27 = (undefined1)((uint)uVar3 >> 0x18);
    local_48._1_4_ = _uStackX_21;
    local_48.Value.Value._1_2_ = uStackX_25;
    local_48.Value.Value._3_1_ = uStackX_27;
    uStack_40 = local_res8;
    local_resc = (undefined1)uVar2;
    uStack_3c = local_resc;
    uStackX_d = (undefined2)((uint)uVar2 >> 8);
    uStack_3b = uStackX_d;
    uStackX_f = (undefined1)((uint)uVar2 >> 0x18);
    uStack_39 = uStackX_f;
    pTVar10 = &local_48;
  }
  TVar7 = pTVar10[1];
  __return_storage_ptr__->LowerBound = *pTVar10;
  __return_storage_ptr__->UpperBound = TVar7;
  return __return_storage_ptr__;
}

// RemapTimes @ 1460e43f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<unsigned_char>::RemapTimes
          (TMovieSceneChannelData<unsigned_char> *this,IRetimingInterface *param_1)

{
  FScriptContainerElement FVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  FKeyHandleLookupTable *this_00;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  <lambda_1> <Var11;
  bool bVar12;
  FFrameNumber FVar13;
  uint uVar14;
  uint uVar15;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar16;
  longlong lVar17;
  undefined4 *puVar18;
  FIdentityFunctor FVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  ForElementType<int> FVar23;
  int iVar24;
  uint uVar25;
  int *piVar26;
  undefined1 auStack_2d8 [32];
  int *local_2b8;
  ForElementType<int> local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  FIdentityFunctor local_288;
  int local_284;
  int *local_280;
  <lambda_1> local_278;
  longlong local_270;
  ForElementType<int> local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  ForElementType<int> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  puVar3 = (undefined8 *)this->_padding_;
  iVar24 = *(int *)(puVar3 + 1);
  FVar23 = (ForElementType<int>)(longlong)iVar24;
  if (iVar24 != 0) {
    local_288 = (FIdentityFunctor)0x1;
    local_278.__this = this;
    if (iVar24 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = FVar23;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    puVar4 = (undefined4 *)*puVar3;
    FVar13 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_260);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,FVar13.Value);
    iVar24 = this->Values->ArrayNum;
    if (iVar24 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = (ForElementType<int>)(longlong)iVar24;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    uVar20 = 1;
    if (1 < (longlong)FVar23) {
      piVar26 = (int *)&DAT_00000001;
      local_268 = FVar23;
      do {
        plVar5 = (longlong *)this->_padding_;
        iVar24 = (int)plVar5[1];
        uVar25 = 0;
        if ((int)uVar20 < iVar24) {
          uVar25 = ~uVar20 >> 0x1f;
        }
        if (uVar25 == 0) {
          local_2b8 = (int *)(longlong)(int)uVar20;
          local_2b0 = (ForElementType<int>)(longlong)iVar24;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        lVar17 = *plVar5;
        plVar5 = (longlong *)(local_278.__this)->_padding_;
        iVar24 = (int)plVar5[1];
        uVar25 = 0;
        if ((int)(uVar20 - 1) < iVar24) {
          uVar25 = -uVar20 >> 0x1f;
        }
        if (uVar25 == 0) {
          local_2b8 = (int *)(longlong)(int)(uVar20 - 1);
          local_2b0 = (ForElementType<int>)(longlong)iVar24;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        iVar24 = *(int *)(*plVar5 + -4 + (longlong)piVar26 * 4);
        FVar13 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_25c);
        this = local_278.__this;
        FVar19 = (FIdentityFunctor)0x0;
        if (iVar24 <= *(int *)CONCAT44(extraout_var_00,FVar13.Value)) {
          FVar19 = local_288;
        }
        *(int *)(lVar17 + (longlong)piVar26 * 4) = *(int *)CONCAT44(extraout_var_00,FVar13.Value);
        iVar24 = (local_278.__this)->Values->ArrayNum;
        uVar25 = 0;
        if ((int)uVar20 < iVar24) {
          uVar25 = ~uVar20 >> 0x1f;
        }
        local_288 = FVar19;
        if ((uVar25 == 0) &&
           (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)iVar24,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar23 = local_268;
        uVar20 = uVar20 + 1;
        piVar26 = (int *)((longlong)piVar26 + 1);
      } while ((longlong)piVar26 < (longlong)local_268);
      iVar24 = local_268._0_4_;
      if (FVar19 == (FIdentityFunctor)0x0) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        if (0 < iVar24) {
          do {
            FVar16 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar16 = local_258.SecondaryData;
            }
            if ((ulonglong)FVar16 <= &local_284) {
              FVar16 = (ForElementType<int>)&local_258;
              if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                FVar16 = local_258.SecondaryData;
              }
              if (&local_284 < (int *)((longlong)FVar16 + (longlong)local_4c * 4)) {
                local_298 = 4;
                local_2a0 = (longlong)local_50;
                local_2b0 = (ForElementType<int>)&local_258;
                if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                  local_2b0 = local_258.SecondaryData;
                }
                local_2b8 = &local_284;
                local_2a8 = (longlong)local_4c;
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar12) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_258,&local_4c);
            }
            lVar17 = (longlong)local_50;
            FVar16 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar16 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar16 + lVar17 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar24);
        }
        FVar16 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar16 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<unsigned_char>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar16,local_50,local_288,(<lambda_1>)this);
        uVar20 = 0;
        lVar17 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)this->_padding_;
          uVar25 = 0;
          if ((int)uVar20 < local_50) {
            uVar25 = ~uVar20 >> 0x1f;
          }
          if (uVar25 == 0) {
            local_2b8 = (int *)(longlong)(int)uVar20;
            local_2b0 = (ForElementType<int>)(longlong)local_50;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          FVar16 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar16 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar20,*(int *)((longlong)FVar16 + lVar17 * 4));
          uVar20 = uVar20 + 1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (longlong)FVar23);
        uVar20 = 0;
        local_280 = (int *)0x0;
        iVar24 = local_50;
        do {
          lVar17 = (longlong)local_280 * 4;
          uVar25 = ~uVar20 >> 0x1f;
          piVar26 = local_280;
          local_270 = lVar17;
          while( true ) {
            uVar14 = 0;
            if ((int)uVar20 < iVar24) {
              uVar14 = uVar25;
            }
            if (uVar14 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar24;
              local_2b8 = (int *)(longlong)(int)uVar20;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar24 = local_50;
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            FVar23 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar23 + lVar17) == uVar20) break;
            uVar14 = 0;
            if ((int)uVar20 < iVar24) {
              uVar14 = uVar25;
            }
            if (uVar14 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar24;
              local_2b8 = (int *)(longlong)(int)uVar20;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            plVar5 = (longlong *)this->_padding_;
            FVar23 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_258.SecondaryData;
            }
            iVar24 = (int)plVar5[1];
            uVar14 = *(uint *)((longlong)FVar23 + lVar17);
            piVar21 = (int *)(longlong)(int)uVar14;
            uVar22 = ~uVar14 >> 0x1f;
            uVar15 = 0;
            if ((int)uVar14 < iVar24) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (local_2b8 = piVar21, local_2b0 = (ForElementType<int>)(longlong)iVar24,
               bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            puVar4 = (undefined4 *)(*plVar5 + (longlong)piVar21 * 4);
            plVar5 = (longlong *)(local_278.__this)->_padding_;
            iVar24 = (int)plVar5[1];
            uVar15 = 0;
            if ((int)uVar20 < iVar24) {
              uVar15 = uVar25;
            }
            if (uVar15 == 0) {
              local_2b8 = (int *)(longlong)(int)uVar20;
              local_2b0 = (ForElementType<int>)(longlong)iVar24;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            <Var11.__this = local_278.__this;
            puVar18 = (undefined4 *)(local_270 + *plVar5);
            uVar2 = *puVar18;
            *puVar18 = *puVar4;
            *puVar4 = uVar2;
            pTVar6 = (local_278.__this)->Values;
            iVar24 = pTVar6->ArrayNum;
            uVar15 = 0;
            if ((int)uVar14 < iVar24) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (local_2b8 = piVar21, local_2b0 = (ForElementType<int>)(longlong)iVar24,
               bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar7 = (<Var11.__this)->Values;
            pFVar8 = (pTVar6->AllocatorInstance).Data;
            iVar24 = pTVar7->ArrayNum;
            uVar15 = 0;
            if ((int)uVar20 < iVar24) {
              uVar15 = uVar25;
            }
            if (uVar15 == 0) {
              local_2b8 = local_280;
              local_2b0 = (ForElementType<int>)(longlong)iVar24;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            piVar26 = local_280;
            pFVar9 = (pTVar7->AllocatorInstance).Data;
            FVar1 = pFVar9[(longlong)local_280];
            pFVar9[(longlong)local_280] = pFVar8[(longlong)piVar21];
            pFVar8[(longlong)piVar21] = FVar1;
            uVar15 = 0;
            if ((int)uVar14 < local_50) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (local_2b8 = piVar21, local_2b0 = (ForElementType<int>)(longlong)local_50,
               bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar23 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_258.SecondaryData;
            }
            piVar21 = (int *)((longlong)FVar23 + (longlong)piVar21 * 4);
            uVar14 = 0;
            if ((int)uVar20 < local_50) {
              uVar14 = uVar25;
            }
            if (uVar14 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)local_50;
              local_2b8 = piVar26;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            lVar17 = (longlong)piVar26 * 4;
            FVar23 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_258.SecondaryData;
            }
            iVar24 = *(int *)((longlong)FVar23 + lVar17);
            *(int *)((longlong)FVar23 + lVar17) = *piVar21;
            *piVar21 = iVar24;
            this = local_278.__this;
            iVar24 = local_50;
          }
          local_280 = (int *)((longlong)piVar26 + 1);
          uVar20 = uVar20 + 1;
        } while ((longlong)local_280 < (longlong)local_268);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// RemapTimes @ 1460e4bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<int>::RemapTimes
          (TMovieSceneChannelData<int> *this,IRetimingInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  FKeyHandleLookupTable *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  FFrameNumber FVar11;
  uint uVar12;
  uint uVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar14;
  longlong lVar15;
  FIdentityFunctor FVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  ForElementType<int> FVar21;
  uint uVar22;
  int *piVar23;
  <lambda_1> <Var24;
  undefined1 auStack_2d8 [32];
  int *local_2b8;
  ForElementType<int> local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  FIdentityFunctor local_288;
  int local_284;
  int *local_280;
  <lambda_1> local_278;
  ForElementType<int> local_270;
  undefined1 local_268 [4];
  undefined1 local_264 [12];
  ForElementType<int> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  puVar3 = (undefined8 *)this->_padding_;
  iVar20 = *(int *)(puVar3 + 1);
  FVar21 = (ForElementType<int>)(longlong)iVar20;
  if (iVar20 != 0) {
    local_288 = (FIdentityFunctor)0x1;
    local_278.__this = this;
    if (iVar20 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = FVar21;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    puVar4 = (undefined4 *)*puVar3;
    FVar11 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_268);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,FVar11.Value);
    iVar20 = this->Values->ArrayNum;
    if (iVar20 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = (ForElementType<int>)(longlong)iVar20;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    uVar17 = 1;
    if (1 < (longlong)FVar21) {
      piVar23 = (int *)&DAT_00000001;
      local_270 = FVar21;
      do {
        plVar5 = (longlong *)this->_padding_;
        iVar20 = (int)plVar5[1];
        uVar22 = 0;
        if ((int)uVar17 < iVar20) {
          uVar22 = ~uVar17 >> 0x1f;
        }
        if (uVar22 == 0) {
          local_2b8 = (int *)(longlong)(int)uVar17;
          local_2b0 = (ForElementType<int>)(longlong)iVar20;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar15 = *plVar5;
        plVar5 = (longlong *)(local_278.__this)->_padding_;
        iVar20 = (int)plVar5[1];
        uVar22 = 0;
        if ((int)(uVar17 - 1) < iVar20) {
          uVar22 = -uVar17 >> 0x1f;
        }
        if (uVar22 == 0) {
          local_2b8 = (int *)(longlong)(int)(uVar17 - 1);
          local_2b0 = (ForElementType<int>)(longlong)iVar20;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar20 = *(int *)(*plVar5 + -4 + (longlong)piVar23 * 4);
        FVar11 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_264);
        FVar16 = (FIdentityFunctor)0x0;
        if (iVar20 <= *(int *)CONCAT44(extraout_var_00,FVar11.Value)) {
          FVar16 = local_288;
        }
        *(int *)(lVar15 + (longlong)piVar23 * 4) = *(int *)CONCAT44(extraout_var_00,FVar11.Value);
        iVar20 = (local_278.__this)->Values->ArrayNum;
        uVar22 = 0;
        if ((int)uVar17 < iVar20) {
          uVar22 = ~uVar17 >> 0x1f;
        }
        local_288 = FVar16;
        if ((uVar22 == 0) &&
           (local_2b8 = piVar23, local_2b0 = (ForElementType<int>)(longlong)iVar20,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar21 = local_270;
        <Var24.__this = local_278.__this;
        uVar17 = uVar17 + 1;
        piVar23 = (int *)((longlong)piVar23 + 1);
        this = local_278.__this;
      } while ((longlong)piVar23 < (longlong)local_270);
      if (FVar16 == (FIdentityFunctor)0x0) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        iVar20 = local_270._0_4_;
        if (0 < iVar20) {
          do {
            FVar14 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar14 = local_258.SecondaryData;
            }
            if ((ulonglong)FVar14 <= &local_284) {
              FVar14 = (ForElementType<int>)&local_258;
              if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                FVar14 = local_258.SecondaryData;
              }
              if (&local_284 < (int *)((longlong)FVar14 + (longlong)local_4c * 4)) {
                local_298 = 4;
                local_2a0 = (longlong)local_50;
                local_2b0 = (ForElementType<int>)&local_258;
                if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                  local_2b0 = local_258.SecondaryData;
                }
                local_2b8 = &local_284;
                local_2a8 = (longlong)local_4c;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar10) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_258,&local_4c);
            }
            lVar15 = (longlong)local_50;
            FVar14 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar14 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar14 + lVar15 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar20);
        }
        FVar14 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar14 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<int>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar14,local_50,local_288,<Var24);
        uVar17 = 0;
        lVar15 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)(<Var24.__this)->_padding_;
          uVar22 = 0;
          if ((int)uVar17 < local_50) {
            uVar22 = ~uVar17 >> 0x1f;
          }
          if (uVar22 == 0) {
            local_2b8 = (int *)(longlong)(int)uVar17;
            local_2b0 = (ForElementType<int>)(longlong)local_50;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FVar14 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar14 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar17,*(int *)((longlong)FVar14 + lVar15 * 4));
          uVar17 = uVar17 + 1;
          lVar15 = lVar15 + 1;
        } while (lVar15 < (longlong)FVar21);
        uVar17 = 0;
        local_280 = (int *)0x0;
        iVar20 = local_50;
        do {
          uVar22 = ~uVar17 >> 0x1f;
          piVar23 = local_280;
          while( true ) {
            uVar12 = 0;
            if ((int)uVar17 < iVar20) {
              uVar12 = uVar22;
            }
            if (uVar12 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar20;
              local_2b8 = (int *)(longlong)(int)uVar17;
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar20 = local_50;
              if (bVar10) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            FVar21 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar21 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar21 + (longlong)piVar23 * 4) == uVar17) break;
            uVar12 = 0;
            if ((int)uVar17 < iVar20) {
              uVar12 = uVar22;
            }
            if (uVar12 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar20;
              local_2b8 = (int *)(longlong)(int)uVar17;
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            plVar5 = (longlong *)(<Var24.__this)->_padding_;
            FVar21 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar21 = local_258.SecondaryData;
            }
            iVar20 = (int)plVar5[1];
            uVar12 = *(uint *)((longlong)FVar21 + (longlong)piVar23 * 4);
            piVar18 = (int *)(longlong)(int)uVar12;
            uVar19 = ~uVar12 >> 0x1f;
            uVar13 = 0;
            if ((int)uVar12 < iVar20) {
              uVar13 = uVar19;
            }
            if ((uVar13 == 0) &&
               (local_2b8 = piVar18, local_2b0 = (ForElementType<int>)(longlong)iVar20,
               bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            puVar4 = (undefined4 *)(*plVar5 + (longlong)piVar18 * 4);
            plVar5 = (longlong *)(local_278.__this)->_padding_;
            iVar20 = (int)plVar5[1];
            uVar13 = 0;
            if ((int)uVar17 < iVar20) {
              uVar13 = uVar22;
            }
            if (uVar13 == 0) {
              local_2b8 = (int *)(longlong)(int)uVar17;
              local_2b0 = (ForElementType<int>)(longlong)iVar20;
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            <Var24.__this = local_278.__this;
            lVar15 = *plVar5;
            uVar2 = *(undefined4 *)(lVar15 + (longlong)local_280 * 4);
            *(undefined4 *)(lVar15 + (longlong)local_280 * 4) = *puVar4;
            *puVar4 = uVar2;
            pTVar6 = (local_278.__this)->Values;
            iVar20 = pTVar6->ArrayNum;
            uVar13 = 0;
            if ((int)uVar12 < iVar20) {
              uVar13 = uVar19;
            }
            if ((uVar13 == 0) &&
               (local_2b8 = piVar18, local_2b0 = (ForElementType<int>)(longlong)iVar20,
               bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar7 = (<Var24.__this)->Values;
            pFVar1 = (pTVar6->AllocatorInstance).Data + (longlong)piVar18 * 4;
            iVar20 = pTVar7->ArrayNum;
            uVar13 = 0;
            if ((int)uVar17 < iVar20) {
              uVar13 = uVar22;
            }
            if (uVar13 == 0) {
              local_2b8 = local_280;
              local_2b0 = (ForElementType<int>)(longlong)iVar20;
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            piVar23 = local_280;
            pFVar8 = (pTVar7->AllocatorInstance).Data;
            uVar2 = *(undefined4 *)(pFVar8 + (longlong)local_280 * 4);
            *(undefined4 *)(pFVar8 + (longlong)local_280 * 4) = *(undefined4 *)pFVar1;
            *(undefined4 *)pFVar1 = uVar2;
            uVar13 = 0;
            if ((int)uVar12 < local_50) {
              uVar13 = uVar19;
            }
            if ((uVar13 == 0) &&
               (local_2b8 = piVar18, local_2b0 = (ForElementType<int>)(longlong)local_50,
               bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar21 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar21 = local_258.SecondaryData;
            }
            piVar18 = (int *)((longlong)FVar21 + (longlong)piVar18 * 4);
            uVar12 = 0;
            if ((int)uVar17 < local_50) {
              uVar12 = uVar22;
            }
            if (uVar12 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)local_50;
              local_2b8 = piVar23;
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            FVar21 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar21 = local_258.SecondaryData;
            }
            iVar20 = *(int *)((longlong)FVar21 + (longlong)piVar23 * 4);
            *(int *)((longlong)FVar21 + (longlong)piVar23 * 4) = *piVar18;
            *piVar18 = iVar20;
            <Var24.__this = local_278.__this;
            iVar20 = local_50;
          }
          local_280 = (int *)((longlong)piVar23 + 1);
          uVar17 = uVar17 + 1;
        } while ((longlong)local_280 < (longlong)local_270);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// RemapTimes @ 1460e5370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes
          (TMovieSceneChannelData<FMovieSceneDoubleValue> *this,IRetimingInterface *param_1)

{
  undefined4 *puVar1;
  FFrameNumber FVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  FKeyHandleLookupTable *this_00;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  FFrameNumber FVar19;
  uint uVar20;
  uint uVar21;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 auStackY_2d8 [32];
  int local_284;
  longlong local_280;
  <lambda_1> local_278;
  IRetimingInterface *local_270;
  longlong local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  ForElementType<int> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  puVar4 = (undefined8 *)this->_padding_;
  iVar23 = *(int *)(puVar4 + 1);
  if (iVar23 != 0) {
    local_278.__this = this;
    local_270 = param_1;
    if ((iVar23 < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    piVar5 = (int *)*puVar4;
    FVar2.Value = *piVar5;
    FVar19 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_260);
    *piVar5 = *(int *)CONCAT44(extraout_var,FVar19.Value);
    pTVar6 = this->Values;
    if ((pTVar6->ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    UE::MovieScene::OnRemapChannelKeyTime
              ((FMovieSceneChannel *)this->_padding_,param_1,FVar2,(FFrameNumber)*piVar5,
               (FMovieSceneDoubleValue *)(pTVar6->AllocatorInstance).Data);
    uVar24 = 1;
    if (1 < (longlong)iVar23) {
      lVar29 = 1;
      lVar27 = 0x20;
      local_268 = (longlong)iVar23;
      bVar17 = true;
      do {
        plVar7 = (longlong *)this->_padding_;
        uVar28 = 0;
        if ((int)uVar24 < (int)plVar7[1]) {
          uVar28 = ~uVar24 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar8 = *plVar7;
        FVar2.Value = *(int *)(lVar8 + lVar29 * 4);
        piVar5 = (int *)(lVar8 + lVar29 * 4);
        plVar7 = (longlong *)(local_278.__this)->_padding_;
        uVar28 = 0;
        if ((int)(uVar24 - 1) < (int)plVar7[1]) {
          uVar28 = -uVar24 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar23 = *(int *)(*plVar7 + -4 + lVar29 * 4);
        FVar19 = UE::MovieScene::IRetimingInterface::RemapTime(local_270,(int)local_25c);
        bVar18 = false;
        if (iVar23 <= *(int *)CONCAT44(extraout_var_00,FVar19.Value)) {
          bVar18 = bVar17;
        }
        *piVar5 = *(int *)CONCAT44(extraout_var_00,FVar19.Value);
        pTVar6 = (local_278.__this)->Values;
        uVar28 = 0;
        if ((int)uVar24 < pTVar6->ArrayNum) {
          uVar28 = ~uVar24 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this = local_278.__this;
        UE::MovieScene::OnRemapChannelKeyTime
                  ((FMovieSceneChannel *)(local_278.__this)->_padding_,local_270,FVar2,
                   (FFrameNumber)*piVar5,
                   (FMovieSceneDoubleValue *)((pTVar6->AllocatorInstance).Data + lVar27));
        lVar8 = local_268;
        uVar24 = uVar24 + 1;
        lVar29 = lVar29 + 1;
        lVar27 = lVar27 + 0x20;
        bVar17 = bVar18;
      } while (lVar29 < local_268);
      if (!bVar18) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        iVar23 = (int)local_268;
        if (0 < iVar23) {
          do {
            FVar22 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar22 = local_258.SecondaryData;
            }
            if ((ulonglong)FVar22 <= &local_284) {
              FVar22 = (ForElementType<int>)&local_258;
              if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                FVar22 = local_258.SecondaryData;
              }
              if ((&local_284 < (int *)((longlong)FVar22 + (longlong)local_4c * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_258,&local_4c);
            }
            lVar27 = (longlong)local_50;
            FVar22 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar22 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar22 + lVar27 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar23);
        }
        FVar22 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar22 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar22,local_50,(FIdentityFunctor)0x0,(<lambda_1>)this);
        uVar24 = 0;
        lVar27 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)this->_padding_;
          uVar28 = 0;
          if ((int)uVar24 < local_50) {
            uVar28 = ~uVar24 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FVar22 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar22 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar24,*(int *)((longlong)FVar22 + lVar27 * 4));
          uVar24 = uVar24 + 1;
          lVar27 = lVar27 + 1;
        } while (lVar27 < lVar8);
        uVar24 = 0;
        local_280 = 0;
        local_270 = (IRetimingInterface *)0x0;
        iVar23 = local_50;
        do {
          uVar28 = ~uVar24 >> 0x1f;
          lVar27 = local_280;
          while( true ) {
            uVar20 = 0;
            if ((int)uVar24 < iVar23) {
              uVar20 = uVar28;
            }
            if ((uVar20 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar23 = local_50, bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVar22 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar22 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar22 + lVar27 * 4) == uVar24) break;
            uVar20 = 0;
            if ((int)uVar24 < iVar23) {
              uVar20 = uVar28;
            }
            if ((uVar20 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            plVar7 = (longlong *)this->_padding_;
            FVar22 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar22 = local_258.SecondaryData;
            }
            uVar20 = *(uint *)((longlong)FVar22 + lVar27 * 4);
            lVar29 = (longlong)(int)uVar20;
            uVar25 = ~uVar20 >> 0x1f;
            uVar21 = 0;
            if ((int)uVar20 < (int)plVar7[1]) {
              uVar21 = uVar25;
            }
            if ((uVar21 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            plVar9 = (longlong *)this->_padding_;
            puVar1 = (undefined4 *)(*plVar7 + lVar29 * 4);
            uVar21 = 0;
            if ((int)uVar24 < (int)plVar9[1]) {
              uVar21 = uVar28;
            }
            if ((uVar21 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar27 = *plVar9;
            uVar3 = *(undefined4 *)(lVar27 + local_280 * 4);
            *(undefined4 *)(lVar27 + local_280 * 4) = *puVar1;
            *puVar1 = uVar3;
            pTVar6 = (local_278.__this)->Values;
            uVar21 = 0;
            if ((int)uVar20 < pTVar6->ArrayNum) {
              uVar21 = uVar25;
            }
            if ((uVar21 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar26 = (pTVar6->AllocatorInstance).Data + lVar29 * 0x20;
            pTVar6 = (local_278.__this)->Values;
            uVar21 = 0;
            if ((int)uVar24 < pTVar6->ArrayNum) {
              uVar21 = uVar28;
            }
            if ((uVar21 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar10 = (pTVar6->AllocatorInstance).Data;
            uVar12 = *(undefined8 *)(pFVar26 + 8);
            uVar13 = *(undefined8 *)(pFVar10 + (longlong)local_270);
            uVar14 = *(undefined8 *)(pFVar10 + (longlong)local_270 + 8);
            uVar15 = *(undefined8 *)(pFVar10 + (longlong)local_270 + 0x10);
            uVar16 = *(undefined8 *)(pFVar10 + (longlong)local_270 + 0x10 + 8);
            *(undefined8 *)(pFVar10 + (longlong)local_270) = *(undefined8 *)pFVar26;
            *(undefined8 *)(pFVar10 + (longlong)local_270 + 8) = uVar12;
            uVar12 = *(undefined8 *)(pFVar26 + 0x18);
            *(undefined8 *)(pFVar10 + (longlong)local_270 + 0x10) = *(undefined8 *)(pFVar26 + 0x10);
            *(undefined8 *)(pFVar10 + (longlong)local_270 + 0x10 + 8) = uVar12;
            *(undefined8 *)pFVar26 = uVar13;
            *(undefined8 *)(pFVar26 + 8) = uVar14;
            *(undefined8 *)(pFVar26 + 0x10) = uVar15;
            *(undefined8 *)(pFVar26 + 0x18) = uVar16;
            uVar21 = 0;
            if ((int)uVar20 < local_50) {
              uVar21 = uVar25;
            }
            if ((uVar21 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar27 = local_280;
            FVar22 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar22 = local_258.SecondaryData;
            }
            piVar5 = (int *)((longlong)FVar22 + lVar29 * 4);
            uVar20 = 0;
            if ((int)uVar24 < local_50) {
              uVar20 = uVar28;
            }
            if ((uVar20 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVar22 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar22 = local_258.SecondaryData;
            }
            iVar23 = *(int *)((longlong)FVar22 + lVar27 * 4);
            *(int *)((longlong)FVar22 + lVar27 * 4) = *piVar5;
            *piVar5 = iVar23;
            this = local_278.__this;
            iVar23 = local_50;
          }
          local_270 = (IRetimingInterface *)((longlong)local_270 + 0x20);
          local_280 = lVar27 + 1;
          uVar24 = uVar24 + 1;
        } while (local_280 < local_268);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// RemapTimes @ 1460e5b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes
          (TMovieSceneChannelData<FMovieSceneFloatValue> *this,IRetimingInterface *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  FFrameNumber FVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  FKeyHandleLookupTable *this_00;
  longlong *plVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  FFrameNumber FVar17;
  uint uVar18;
  uint uVar19;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_2e8 [32];
  int local_294;
  longlong local_290;
  IRetimingInterface *local_288;
  TMovieSceneChannelData<FMovieSceneFloatValue> *local_280;
  longlong local_278;
  longlong local_270;
  undefined1 local_268 [4];
  undefined1 local_264 [12];
  ForElementType<int> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  puVar5 = (undefined8 *)this->_padding_;
  iVar22 = *(int *)(puVar5 + 1);
  if (iVar22 != 0) {
    local_288 = param_1;
    local_280 = this;
    if ((iVar22 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    piVar6 = (int *)*puVar5;
    FVar3.Value = *piVar6;
    FVar17 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_268);
    *piVar6 = *(int *)CONCAT44(extraout_var,FVar17.Value);
    pTVar7 = this->Values;
    if ((pTVar7->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    UE::MovieScene::OnRemapChannelKeyTime
              ((FMovieSceneChannel *)this->_padding_,param_1,FVar3,(FFrameNumber)*piVar6,
               (FMovieSceneFloatValue *)(pTVar7->AllocatorInstance).Data);
    uVar23 = 1;
    if (1 < (longlong)iVar22) {
      lVar27 = 1;
      local_278 = 0x1c;
      local_270 = (longlong)iVar22;
      bVar15 = true;
      do {
        plVar8 = (longlong *)this->_padding_;
        uVar24 = 0;
        if ((int)uVar23 < (int)plVar8[1]) {
          uVar24 = ~uVar23 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar26 = *plVar8;
        plVar8 = (longlong *)this->_padding_;
        FVar3.Value = *(int *)(lVar26 + lVar27 * 4);
        piVar6 = (int *)(lVar26 + lVar27 * 4);
        uVar24 = 0;
        if ((int)(uVar23 - 1) < (int)plVar8[1]) {
          uVar24 = -uVar23 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar22 = *(int *)(*plVar8 + -4 + lVar27 * 4);
        FVar17 = UE::MovieScene::IRetimingInterface::RemapTime(local_288,(int)local_264);
        bVar16 = false;
        if (iVar22 <= *(int *)CONCAT44(extraout_var_00,FVar17.Value)) {
          bVar16 = bVar15;
        }
        *piVar6 = *(int *)CONCAT44(extraout_var_00,FVar17.Value);
        pTVar7 = this->Values;
        uVar24 = 0;
        if ((int)uVar23 < pTVar7->ArrayNum) {
          uVar24 = ~uVar23 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar26 = local_278;
        UE::MovieScene::OnRemapChannelKeyTime
                  ((FMovieSceneChannel *)this->_padding_,local_288,FVar3,(FFrameNumber)*piVar6,
                   (FMovieSceneFloatValue *)((pTVar7->AllocatorInstance).Data + local_278));
        lVar14 = local_270;
        local_278 = lVar26 + 0x1c;
        uVar23 = uVar23 + 1;
        lVar27 = lVar27 + 1;
        bVar15 = bVar16;
      } while (lVar27 < local_270);
      if (!bVar16) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_294 = 0;
        iVar22 = (int)local_270;
        if (0 < iVar22) {
          do {
            FVar20 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar20 = local_258.SecondaryData;
            }
            if ((ulonglong)FVar20 <= &local_294) {
              FVar20 = (ForElementType<int>)&local_258;
              if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                FVar20 = local_258.SecondaryData;
              }
              if ((&local_294 < (int *)((longlong)FVar20 + (longlong)local_4c * 4)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_258,&local_4c);
            }
            lVar27 = (longlong)local_50;
            FVar20 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar20 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar20 + lVar27 * 4) = local_294;
            local_294 = local_294 + 1;
          } while (local_294 < iVar22);
        }
        FVar20 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar20 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneFloatValue>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar20,local_50,(FIdentityFunctor)0x0,(<lambda_1>)this);
        uVar23 = 0;
        lVar27 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)this->_padding_;
          uVar24 = 0;
          if ((int)uVar23 < local_50) {
            uVar24 = ~uVar23 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar20 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar20 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar23,*(int *)((longlong)FVar20 + lVar27 * 4));
          uVar23 = uVar23 + 1;
          lVar27 = lVar27 + 1;
        } while (lVar27 < lVar14);
        uVar23 = 0;
        local_288 = (IRetimingInterface *)0x0;
        local_290 = 0;
        iVar22 = local_50;
        do {
          uVar24 = ~uVar23 >> 0x1f;
          lVar27 = local_290;
          while( true ) {
            uVar18 = 0;
            if ((int)uVar23 < iVar22) {
              uVar18 = uVar24;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar22 = local_50, bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar20 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar20 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar20 + lVar27 * 4) == uVar23) break;
            uVar18 = 0;
            if ((int)uVar23 < iVar22) {
              uVar18 = uVar24;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            plVar8 = (longlong *)this->_padding_;
            FVar20 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar20 = local_258.SecondaryData;
            }
            uVar18 = *(uint *)((longlong)FVar20 + lVar27 * 4);
            lVar26 = (longlong)(int)uVar18;
            uVar25 = ~uVar18 >> 0x1f;
            uVar19 = 0;
            if ((int)uVar18 < (int)plVar8[1]) {
              uVar19 = uVar25;
            }
            if ((uVar19 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            plVar9 = (longlong *)this->_padding_;
            puVar1 = (undefined4 *)(*plVar8 + lVar26 * 4);
            uVar19 = 0;
            if ((int)uVar23 < (int)plVar9[1]) {
              uVar19 = uVar24;
            }
            if ((uVar19 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar27 = *plVar9;
            uVar4 = *(undefined4 *)(lVar27 + local_290 * 4);
            *(undefined4 *)(lVar27 + local_290 * 4) = *puVar1;
            *puVar1 = uVar4;
            pTVar7 = local_280->Values;
            uVar19 = 0;
            if ((int)uVar18 < pTVar7->ArrayNum) {
              uVar19 = uVar25;
            }
            if ((uVar19 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar28 = (pTVar7->AllocatorInstance).Data + lVar26 * 0x1c;
            pTVar7 = local_280->Values;
            uVar19 = 0;
            if ((int)uVar23 < pTVar7->ArrayNum) {
              uVar19 = uVar24;
            }
            if ((uVar19 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar11 = *(undefined8 *)(pFVar28 + 8);
            pFVar21 = (pTVar7->AllocatorInstance).Data + (longlong)local_288;
            uVar4 = *(undefined4 *)(pFVar21 + 0x18);
            uVar12 = *(undefined8 *)pFVar21;
            uVar13 = *(undefined8 *)(pFVar21 + 8);
            uVar2 = *(undefined8 *)(pFVar21 + 0x10);
            *(undefined8 *)pFVar21 = *(undefined8 *)pFVar28;
            *(undefined8 *)(pFVar21 + 8) = uVar11;
            *(undefined8 *)(pFVar21 + 0x10) = *(undefined8 *)(pFVar28 + 0x10);
            *(undefined4 *)(pFVar21 + 0x18) = *(undefined4 *)(pFVar28 + 0x18);
            *(undefined8 *)pFVar28 = uVar12;
            *(undefined8 *)(pFVar28 + 8) = uVar13;
            *(undefined8 *)(pFVar28 + 0x10) = uVar2;
            *(undefined4 *)(pFVar28 + 0x18) = uVar4;
            uVar19 = 0;
            if ((int)uVar18 < local_50) {
              uVar19 = uVar25;
            }
            if ((uVar19 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar27 = local_290;
            FVar20 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar20 = local_258.SecondaryData;
            }
            piVar6 = (int *)((longlong)FVar20 + lVar26 * 4);
            uVar18 = 0;
            if ((int)uVar23 < local_50) {
              uVar18 = uVar24;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar20 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar20 = local_258.SecondaryData;
            }
            iVar22 = *(int *)((longlong)FVar20 + lVar27 * 4);
            *(int *)((longlong)FVar20 + lVar27 * 4) = *piVar6;
            *piVar6 = iVar22;
            this = local_280;
            iVar22 = local_50;
          }
          local_288 = (IRetimingInterface *)((longlong)local_288 + 0x1c);
          local_290 = lVar27 + 1;
          uVar23 = uVar23 + 1;
        } while (local_290 < local_270);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// RemapTimes @ 1460e63b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes
          (TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> *this,
          IRetimingInterface *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  FKeyHandleLookupTable *this_00;
  longlong *plVar5;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  FFrameNumber FVar17;
  uint uVar18;
  uint uVar19;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar20;
  longlong lVar21;
  FIdentityFunctor FVar22;
  int iVar23;
  uint uVar24;
  ForElementType<int> FVar25;
  FScriptContainerElement *pFVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  undefined1 auStack_2d8 [32];
  int *local_2b8;
  ForElementType<int> local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  FIdentityFunctor local_288;
  int local_284;
  int *local_280;
  IRetimingInterface *local_278;
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> *local_270;
  ForElementType<int> local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  ForElementType<int> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  puVar2 = (undefined8 *)this->_padding_;
  iVar23 = *(int *)(puVar2 + 1);
  FVar25 = (ForElementType<int>)(longlong)iVar23;
  if (iVar23 != 0) {
    local_288 = (FIdentityFunctor)0x1;
    local_278 = param_1;
    local_270 = this;
    if (iVar23 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = FVar25;
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    puVar3 = (undefined4 *)*puVar2;
    FVar17 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_260);
    *puVar3 = *(undefined4 *)CONCAT44(extraout_var,FVar17.Value);
    iVar23 = this->Values->ArrayNum;
    if (iVar23 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = (ForElementType<int>)(longlong)iVar23;
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    uVar24 = 1;
    if (1 < (longlong)FVar25) {
      piVar30 = (int *)&DAT_00000001;
      local_268 = FVar25;
      do {
        plVar4 = (longlong *)this->_padding_;
        iVar23 = (int)plVar4[1];
        uVar29 = 0;
        if ((int)uVar24 < iVar23) {
          uVar29 = ~uVar24 >> 0x1f;
        }
        if (uVar29 == 0) {
          local_2b8 = (int *)(longlong)(int)uVar24;
          local_2b0 = (ForElementType<int>)(longlong)iVar23;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        lVar21 = *plVar4;
        plVar4 = (longlong *)this->_padding_;
        iVar23 = (int)plVar4[1];
        uVar29 = 0;
        if ((int)(uVar24 - 1) < iVar23) {
          uVar29 = -uVar24 >> 0x1f;
        }
        if (uVar29 == 0) {
          local_2b8 = (int *)(longlong)(int)(uVar24 - 1);
          local_2b0 = (ForElementType<int>)(longlong)iVar23;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar23 = *(int *)(*plVar4 + -4 + (longlong)piVar30 * 4);
        FVar17 = UE::MovieScene::IRetimingInterface::RemapTime(local_278,(int)local_25c);
        FVar22 = (FIdentityFunctor)0x0;
        if (iVar23 <= *(int *)CONCAT44(extraout_var_00,FVar17.Value)) {
          FVar22 = local_288;
        }
        *(int *)(lVar21 + (longlong)piVar30 * 4) = *(int *)CONCAT44(extraout_var_00,FVar17.Value);
        iVar23 = this->Values->ArrayNum;
        uVar29 = 0;
        if ((int)uVar24 < iVar23) {
          uVar29 = ~uVar24 >> 0x1f;
        }
        local_288 = FVar22;
        if ((uVar29 == 0) &&
           (local_2b8 = piVar30, local_2b0 = (ForElementType<int>)(longlong)iVar23,
           bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar25 = local_268;
        uVar24 = uVar24 + 1;
        piVar30 = (int *)((longlong)piVar30 + 1);
      } while ((longlong)piVar30 < (longlong)local_268);
      if (FVar22 == (FIdentityFunctor)0x0) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        iVar23 = local_268._0_4_;
        if (0 < iVar23) {
          do {
            FVar20 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar20 = local_258.SecondaryData;
            }
            if ((ulonglong)FVar20 <= &local_284) {
              FVar20 = (ForElementType<int>)&local_258;
              if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                FVar20 = local_258.SecondaryData;
              }
              if (&local_284 < (int *)((longlong)FVar20 + (longlong)local_4c * 4)) {
                local_298 = 4;
                local_2a0 = (longlong)local_50;
                local_2b0 = (ForElementType<int>)&local_258;
                if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                  local_2b0 = local_258.SecondaryData;
                }
                local_2b8 = &local_284;
                local_2a8 = (longlong)local_4c;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_258,&local_4c);
            }
            lVar21 = (longlong)local_50;
            FVar20 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar20 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar20 + lVar21 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar23);
        }
        FVar20 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar20 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar20,local_50,local_288,(<lambda_1>)this);
        uVar24 = 0;
        lVar21 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)this->_padding_;
          uVar29 = 0;
          if ((int)uVar24 < local_50) {
            uVar29 = ~uVar24 >> 0x1f;
          }
          if (uVar29 == 0) {
            local_2b8 = (int *)(longlong)(int)uVar24;
            local_2b0 = (ForElementType<int>)(longlong)local_50;
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          FVar20 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar20 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar24,*(int *)((longlong)FVar20 + lVar21 * 4));
          uVar24 = uVar24 + 1;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (longlong)FVar25);
        uVar24 = 0;
        local_280 = (int *)0x0;
        local_278 = (IRetimingInterface *)0x0;
        iVar23 = local_50;
        do {
          uVar29 = ~uVar24 >> 0x1f;
          piVar30 = local_280;
          while( true ) {
            uVar18 = 0;
            if ((int)uVar24 < iVar23) {
              uVar18 = uVar29;
            }
            if (uVar18 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              local_2b8 = (int *)(longlong)(int)uVar24;
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar23 = local_50;
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            FVar25 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar25 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar25 + (longlong)piVar30 * 4) == uVar24) break;
            uVar18 = 0;
            if ((int)uVar24 < iVar23) {
              uVar18 = uVar29;
            }
            if (uVar18 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              local_2b8 = (int *)(longlong)(int)uVar24;
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            plVar4 = (longlong *)this->_padding_;
            FVar25 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar25 = local_258.SecondaryData;
            }
            iVar23 = (int)plVar4[1];
            uVar18 = *(uint *)((longlong)FVar25 + (longlong)piVar30 * 4);
            piVar27 = (int *)(longlong)(int)uVar18;
            uVar28 = ~uVar18 >> 0x1f;
            uVar19 = 0;
            if ((int)uVar18 < iVar23) {
              uVar19 = uVar28;
            }
            if ((uVar19 == 0) &&
               (local_2b8 = piVar27, local_2b0 = (ForElementType<int>)(longlong)iVar23,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            plVar5 = (longlong *)this->_padding_;
            puVar3 = (undefined4 *)(*plVar4 + (longlong)piVar27 * 4);
            iVar23 = (int)plVar5[1];
            uVar19 = 0;
            if ((int)uVar24 < iVar23) {
              uVar19 = uVar29;
            }
            if (uVar19 == 0) {
              local_2b8 = (int *)(longlong)(int)uVar24;
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            lVar21 = *plVar5;
            uVar1 = *(undefined4 *)(lVar21 + (longlong)local_280 * 4);
            *(undefined4 *)(lVar21 + (longlong)local_280 * 4) = *puVar3;
            *puVar3 = uVar1;
            pTVar6 = local_270->Values;
            iVar23 = pTVar6->ArrayNum;
            uVar19 = 0;
            if ((int)uVar18 < iVar23) {
              uVar19 = uVar28;
            }
            if ((uVar19 == 0) &&
               (local_2b8 = piVar27, local_2b0 = (ForElementType<int>)(longlong)iVar23,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar26 = (pTVar6->AllocatorInstance).Data + (longlong)piVar27 * 0x30;
            pTVar6 = local_270->Values;
            iVar23 = pTVar6->ArrayNum;
            uVar19 = 0;
            if ((int)uVar24 < iVar23) {
              uVar19 = uVar29;
            }
            if (uVar19 == 0) {
              local_2b8 = local_280;
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            pFVar7 = (pTVar6->AllocatorInstance).Data;
            uVar9 = *(undefined8 *)(pFVar26 + 8);
            uVar10 = *(undefined8 *)(pFVar7 + (longlong)local_278);
            uVar11 = *(undefined8 *)(pFVar7 + (longlong)local_278 + 8);
            uVar12 = *(undefined8 *)(pFVar7 + (longlong)local_278 + 0x10);
            uVar13 = *(undefined8 *)(pFVar7 + (longlong)local_278 + 0x10 + 8);
            uVar14 = *(undefined8 *)(pFVar7 + (longlong)local_278 + 0x20);
            uVar15 = *(undefined8 *)(pFVar7 + (longlong)local_278 + 0x20 + 8);
            *(undefined8 *)(pFVar7 + (longlong)local_278) = *(undefined8 *)pFVar26;
            *(undefined8 *)(pFVar7 + (longlong)local_278 + 8) = uVar9;
            uVar9 = *(undefined8 *)(pFVar26 + 0x18);
            *(undefined8 *)(pFVar7 + (longlong)local_278 + 0x10) = *(undefined8 *)(pFVar26 + 0x10);
            *(undefined8 *)(pFVar7 + (longlong)local_278 + 0x10 + 8) = uVar9;
            uVar9 = *(undefined8 *)(pFVar26 + 0x28);
            *(undefined8 *)(pFVar7 + (longlong)local_278 + 0x20) = *(undefined8 *)(pFVar26 + 0x20);
            *(undefined8 *)(pFVar7 + (longlong)local_278 + 0x20 + 8) = uVar9;
            *(undefined8 *)pFVar26 = uVar10;
            *(undefined8 *)(pFVar26 + 8) = uVar11;
            *(undefined8 *)(pFVar26 + 0x10) = uVar12;
            *(undefined8 *)(pFVar26 + 0x18) = uVar13;
            *(undefined8 *)(pFVar26 + 0x20) = uVar14;
            *(undefined8 *)(pFVar26 + 0x28) = uVar15;
            uVar19 = 0;
            if ((int)uVar18 < local_50) {
              uVar19 = uVar28;
            }
            if ((uVar19 == 0) &&
               (local_2b8 = piVar27, local_2b0 = (ForElementType<int>)(longlong)local_50,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            piVar30 = local_280;
            FVar25 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar25 = local_258.SecondaryData;
            }
            piVar27 = (int *)((longlong)FVar25 + (longlong)piVar27 * 4);
            uVar18 = 0;
            if ((int)uVar24 < local_50) {
              uVar18 = uVar29;
            }
            if (uVar18 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)local_50;
              local_2b8 = local_280;
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            FVar25 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar25 = local_258.SecondaryData;
            }
            iVar23 = *(int *)((longlong)FVar25 + (longlong)piVar30 * 4);
            *(int *)((longlong)FVar25 + (longlong)piVar30 * 4) = *piVar27;
            *piVar27 = iVar23;
            this = local_270;
            iVar23 = local_50;
          }
          local_278 = (IRetimingInterface *)((longlong)local_278 + 0x30);
          local_280 = (int *)((longlong)piVar30 + 1);
          uVar24 = uVar24 + 1;
        } while ((longlong)local_280 < (longlong)local_268);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// RemapTimes @ 1460e6ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<bool>::RemapTimes
          (TMovieSceneChannelData<bool> *this,IRetimingInterface *param_1)

{
  FScriptContainerElement FVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  FKeyHandleLookupTable *this_00;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  <lambda_1> <Var11;
  bool bVar12;
  FFrameNumber FVar13;
  uint uVar14;
  uint uVar15;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar16;
  longlong lVar17;
  undefined4 *puVar18;
  FIdentityFunctor FVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  ForElementType<int> FVar23;
  int iVar24;
  uint uVar25;
  int *piVar26;
  undefined1 auStack_2d8 [32];
  int *local_2b8;
  ForElementType<int> local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  FIdentityFunctor local_288;
  int local_284;
  int *local_280;
  <lambda_1> local_278;
  longlong local_270;
  ForElementType<int> local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  ForElementType<int> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  puVar3 = (undefined8 *)this->_padding_;
  iVar24 = *(int *)(puVar3 + 1);
  FVar23 = (ForElementType<int>)(longlong)iVar24;
  if (iVar24 != 0) {
    local_288 = (FIdentityFunctor)0x1;
    local_278.__this = this;
    if (iVar24 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = FVar23;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    puVar4 = (undefined4 *)*puVar3;
    FVar13 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_260);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,FVar13.Value);
    iVar24 = this->Values->ArrayNum;
    if (iVar24 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = (ForElementType<int>)(longlong)iVar24;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    uVar20 = 1;
    if (1 < (longlong)FVar23) {
      piVar26 = (int *)&DAT_00000001;
      local_268 = FVar23;
      do {
        plVar5 = (longlong *)this->_padding_;
        iVar24 = (int)plVar5[1];
        uVar25 = 0;
        if ((int)uVar20 < iVar24) {
          uVar25 = ~uVar20 >> 0x1f;
        }
        if (uVar25 == 0) {
          local_2b8 = (int *)(longlong)(int)uVar20;
          local_2b0 = (ForElementType<int>)(longlong)iVar24;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        lVar17 = *plVar5;
        plVar5 = (longlong *)(local_278.__this)->_padding_;
        iVar24 = (int)plVar5[1];
        uVar25 = 0;
        if ((int)(uVar20 - 1) < iVar24) {
          uVar25 = -uVar20 >> 0x1f;
        }
        if (uVar25 == 0) {
          local_2b8 = (int *)(longlong)(int)(uVar20 - 1);
          local_2b0 = (ForElementType<int>)(longlong)iVar24;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        iVar24 = *(int *)(*plVar5 + -4 + (longlong)piVar26 * 4);
        FVar13 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_25c);
        this = local_278.__this;
        FVar19 = (FIdentityFunctor)0x0;
        if (iVar24 <= *(int *)CONCAT44(extraout_var_00,FVar13.Value)) {
          FVar19 = local_288;
        }
        *(int *)(lVar17 + (longlong)piVar26 * 4) = *(int *)CONCAT44(extraout_var_00,FVar13.Value);
        iVar24 = (local_278.__this)->Values->ArrayNum;
        uVar25 = 0;
        if ((int)uVar20 < iVar24) {
          uVar25 = ~uVar20 >> 0x1f;
        }
        local_288 = FVar19;
        if ((uVar25 == 0) &&
           (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)iVar24,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar23 = local_268;
        uVar20 = uVar20 + 1;
        piVar26 = (int *)((longlong)piVar26 + 1);
      } while ((longlong)piVar26 < (longlong)local_268);
      iVar24 = local_268._0_4_;
      if (FVar19 == (FIdentityFunctor)0x0) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        if (0 < iVar24) {
          do {
            FVar16 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar16 = local_258.SecondaryData;
            }
            if ((ulonglong)FVar16 <= &local_284) {
              FVar16 = (ForElementType<int>)&local_258;
              if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                FVar16 = local_258.SecondaryData;
              }
              if (&local_284 < (int *)((longlong)FVar16 + (longlong)local_4c * 4)) {
                local_298 = 4;
                local_2a0 = (longlong)local_50;
                local_2b0 = (ForElementType<int>)&local_258;
                if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                  local_2b0 = local_258.SecondaryData;
                }
                local_2b8 = &local_284;
                local_2a8 = (longlong)local_4c;
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar12) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_258,&local_4c);
            }
            lVar17 = (longlong)local_50;
            FVar16 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar16 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar16 + lVar17 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar24);
        }
        FVar16 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar16 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<bool>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar16,local_50,local_288,(<lambda_1>)this);
        uVar20 = 0;
        lVar17 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)this->_padding_;
          uVar25 = 0;
          if ((int)uVar20 < local_50) {
            uVar25 = ~uVar20 >> 0x1f;
          }
          if (uVar25 == 0) {
            local_2b8 = (int *)(longlong)(int)uVar20;
            local_2b0 = (ForElementType<int>)(longlong)local_50;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          FVar16 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar16 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar20,*(int *)((longlong)FVar16 + lVar17 * 4));
          uVar20 = uVar20 + 1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (longlong)FVar23);
        uVar20 = 0;
        local_280 = (int *)0x0;
        iVar24 = local_50;
        do {
          lVar17 = (longlong)local_280 * 4;
          uVar25 = ~uVar20 >> 0x1f;
          piVar26 = local_280;
          local_270 = lVar17;
          while( true ) {
            uVar14 = 0;
            if ((int)uVar20 < iVar24) {
              uVar14 = uVar25;
            }
            if (uVar14 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar24;
              local_2b8 = (int *)(longlong)(int)uVar20;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar24 = local_50;
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            FVar23 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar23 + lVar17) == uVar20) break;
            uVar14 = 0;
            if ((int)uVar20 < iVar24) {
              uVar14 = uVar25;
            }
            if (uVar14 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar24;
              local_2b8 = (int *)(longlong)(int)uVar20;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            plVar5 = (longlong *)this->_padding_;
            FVar23 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_258.SecondaryData;
            }
            iVar24 = (int)plVar5[1];
            uVar14 = *(uint *)((longlong)FVar23 + lVar17);
            piVar21 = (int *)(longlong)(int)uVar14;
            uVar22 = ~uVar14 >> 0x1f;
            uVar15 = 0;
            if ((int)uVar14 < iVar24) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (local_2b8 = piVar21, local_2b0 = (ForElementType<int>)(longlong)iVar24,
               bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            puVar4 = (undefined4 *)(*plVar5 + (longlong)piVar21 * 4);
            plVar5 = (longlong *)(local_278.__this)->_padding_;
            iVar24 = (int)plVar5[1];
            uVar15 = 0;
            if ((int)uVar20 < iVar24) {
              uVar15 = uVar25;
            }
            if (uVar15 == 0) {
              local_2b8 = (int *)(longlong)(int)uVar20;
              local_2b0 = (ForElementType<int>)(longlong)iVar24;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            <Var11.__this = local_278.__this;
            puVar18 = (undefined4 *)(local_270 + *plVar5);
            uVar2 = *puVar18;
            *puVar18 = *puVar4;
            *puVar4 = uVar2;
            pTVar6 = (local_278.__this)->Values;
            iVar24 = pTVar6->ArrayNum;
            uVar15 = 0;
            if ((int)uVar14 < iVar24) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (local_2b8 = piVar21, local_2b0 = (ForElementType<int>)(longlong)iVar24,
               bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar7 = (<Var11.__this)->Values;
            pFVar8 = (pTVar6->AllocatorInstance).Data;
            iVar24 = pTVar7->ArrayNum;
            uVar15 = 0;
            if ((int)uVar20 < iVar24) {
              uVar15 = uVar25;
            }
            if (uVar15 == 0) {
              local_2b8 = local_280;
              local_2b0 = (ForElementType<int>)(longlong)iVar24;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            piVar26 = local_280;
            pFVar9 = (pTVar7->AllocatorInstance).Data;
            FVar1 = pFVar9[(longlong)local_280];
            pFVar9[(longlong)local_280] = pFVar8[(longlong)piVar21];
            pFVar8[(longlong)piVar21] = FVar1;
            uVar15 = 0;
            if ((int)uVar14 < local_50) {
              uVar15 = uVar22;
            }
            if ((uVar15 == 0) &&
               (local_2b8 = piVar21, local_2b0 = (ForElementType<int>)(longlong)local_50,
               bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar23 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_258.SecondaryData;
            }
            piVar21 = (int *)((longlong)FVar23 + (longlong)piVar21 * 4);
            uVar14 = 0;
            if ((int)uVar20 < local_50) {
              uVar14 = uVar25;
            }
            if (uVar14 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)local_50;
              local_2b8 = piVar26;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            lVar17 = (longlong)piVar26 * 4;
            FVar23 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar23 = local_258.SecondaryData;
            }
            iVar24 = *(int *)((longlong)FVar23 + lVar17);
            *(int *)((longlong)FVar23 + lVar17) = *piVar21;
            *piVar21 = iVar24;
            this = local_278.__this;
            iVar24 = local_50;
          }
          local_280 = (int *)((longlong)piVar26 + 1);
          uVar20 = uVar20 + 1;
        } while ((longlong)local_280 < (longlong)local_268);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// Reset @ 1460e8f90

void __thiscall
TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::Reset
          (TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *pTVar3;
  FMovieSceneObjectPathChannelKeyValue *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint local_28;
  undefined4 uStack_24;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_20;
  
  uVar11 = 0;
  if ((this->_padding_ != 0) &&
     (bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         (this->_padding_ + 0x28)), bVar6)) {
    plVar12 = (longlong *)this->_padding_;
    local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20.ArrayNum = 0;
    local_20.ArrayMax = 0;
    uVar13 = uVar11;
    if (0 < (int)plVar12[1]) {
      do {
        uVar10 = (uint)uVar11;
        uVar7 = 0;
        if ((int)uVar10 < (int)plVar12[1]) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_24 = *(undefined4 *)(uVar13 + *plVar12);
        local_28 = uVar10;
        if (((local_20.AllocatorInstance.Data <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 <
             local_20.AllocatorInstance.Data + (longlong)local_20.ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_20.ArrayNum == local_20.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_20.AllocatorInstance,&local_20.ArrayMax);
          local_20.ArrayNum = iVar8;
        }
        lVar9 = (longlong)local_20.ArrayNum;
        uVar11 = (ulonglong)(uVar10 + 1);
        local_20.ArrayNum = local_20.ArrayNum + 1;
        *(ulonglong *)(local_20.AllocatorInstance.Data + lVar9 * 8) = CONCAT44(uStack_24,local_28);
        plVar12 = (longlong *)this->_padding_;
        uVar13 = uVar13 + 4;
      } while ((int)(uVar10 + 1) < (int)plVar12[1]);
    }
    TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                (FMovieSceneChannel *)this->_padding_,&local_20);
    if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
  }
  pFVar2 = (ForAnyElementType *)this->_padding_;
  iVar8 = *(int *)((longlong)&pFVar2[1].Data + 4);
  *(undefined4 *)&pFVar2[1].Data = 0;
  if (iVar8 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar2,0,(int *)((longlong)&pFVar2[1].Data + 4));
  }
  pTVar3 = this->Values;
  piVar1 = &pTVar3->ArrayMax;
  pFVar4 = (FMovieSceneObjectPathChannelKeyValue *)(pTVar3->AllocatorInstance).Data;
  if (*piVar1 < 0) {
    DestructItems<FMovieSceneObjectPathChannelKeyValue,int>(pFVar4,pTVar3->ArrayNum);
    pTVar3->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FMovieSceneObjectPathChannelKeyValue,int>(pFVar4,pTVar3->ArrayNum);
    pTVar3->ArrayNum = 0;
  }
  if ((FKeyHandleLookupTable *)this->_padding_ == (FKeyHandleLookupTable *)0x0) {
    return;
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)this->_padding_);
  return;
}

// SetKeyTimes @ 1460f7160

void __thiscall
TMovieSceneChannelData<unsigned_char>::SetKeyTimes
          (TMovieSceneChannelData<unsigned_char> *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  int iVar1;
  FKeyHandle FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  TArrayView<FFrameNumber_const_,int> *local_res18;
  <lambda_1> local_res20 [8];
  
  local_res18 = param_2;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandles.Num() == InKeyTimes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x267,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar8);
      if (this->_padding_ == 0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) &&
         (iVar5 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar2),
         iVar5 != -1)) {
        uVar6 = 0;
        if ((int)uVar7 < local_res18->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        MoveKey<_TMovieSceneChannelData<unsigned_char>::MoveKey_::__l2::<lambda_1>_>
                  (this,iVar5,(FFrameNumber)*(int *)((longlong)&local_res18->DataPtr->Value + lVar8)
                   ,false,local_res20);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < iVar1);
  }
  return;
}

// SetKeyTimes @ 1460f7310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<int>::SetKeyTimes
          (TMovieSceneChannelData<int> *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  FKeyHandle FVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  int local_res18 [4];
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandles.Num() == InKeyTimes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x267,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar1.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar10);
      if (this->_padding_ == 0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
        uVar5 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar1);
        if (uVar5 != 0xffffffff) {
          uVar6 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar6 = FMovieSceneChannelData::MoveKeyInternal
                            ((FMovieSceneChannelData *)this,uVar5,
                             (FFrameNumber)*(int *)((longlong)&param_2->DataPtr->Value + lVar10));
          if (uVar6 != uVar5) {
            pTVar2 = this->Values;
            uVar7 = 0;
            if ((int)uVar5 < pTVar2->ArrayNum) {
              uVar7 = ~uVar5 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_res18[0] = *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
            TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,uVar5,No);
            TArray<int,TSizedDefaultAllocator<32>_>::Insert(this->Values,local_res18,uVar6);
          }
        }
      }
      iVar8 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 4;
    } while ((int)uVar9 < iVar8);
  }
  return;
}

// SetKeyTimes @ 1460f7520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneDoubleValue>::SetKeyTimes
          (TMovieSceneChannelData<FMovieSceneDoubleValue> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FFrameNumber_const_,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  FKeyHandle FVar2;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  FMovieSceneDoubleValue local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandles.Num() == InKeyTimes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x267,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar10) {
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < iVar10) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_70 = (longlong)iVar10;
        local_78 = (longlong)(int)uVar12;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar2.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar13);
      if (this->_padding_ == 0) {
        local_68[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_68);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
        uVar7 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar2);
        if (uVar7 != 0xffffffff) {
          uVar8 = 0;
          if ((int)uVar12 < param_2->ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_78 = (longlong)(int)uVar12;
            local_70 = (longlong)param_2->ArrayNum;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          uVar8 = FMovieSceneChannelData::MoveKeyInternal
                            ((FMovieSceneChannelData *)this,uVar7,
                             (FFrameNumber)*(int *)((longlong)&param_2->DataPtr->Value + lVar13));
          if (uVar8 != uVar7) {
            pTVar3 = this->Values;
            iVar10 = pTVar3->ArrayNum;
            uVar9 = 0;
            if ((int)uVar7 < iVar10) {
              uVar9 = ~uVar7 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (local_78 = (longlong)(int)uVar7, local_70 = (longlong)iVar10,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pTVar3->AllocatorInstance).Data;
            lVar11 = (longlong)(int)uVar7 * 0x20;
            pFVar1 = pFVar4 + lVar11;
            local_60.Value = *(double *)pFVar1;
            local_60.Tangent._0_8_ = *(undefined8 *)(pFVar1 + 8);
            pFVar4 = pFVar4 + lVar11 + 0x10;
            local_60.Tangent._8_8_ = *(undefined8 *)pFVar4;
            local_60._24_8_ = *(undefined8 *)(pFVar4 + 8);
            TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>::RemoveAt
                      (this->Values,uVar7,No);
            TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>::Insert
                      (this->Values,&local_60,uVar8);
          }
        }
      }
      iVar10 = param_1->ArrayNum;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 4;
    } while ((int)uVar12 < iVar10);
  }
  return;
}

// SetKeyTimes @ 1460f7760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneFloatValue>::SetKeyTimes
          (TMovieSceneChannelData<FMovieSceneFloatValue> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FFrameNumber_const_,int> *param_2)

{
  FKeyHandle FVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  FMovieSceneFloatValue local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandles.Num() == InKeyTimes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x267,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = param_1->ArrayNum;
  uVar11 = 0;
  if (0 < iVar9) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar11 < iVar9) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_70 = (longlong)iVar9;
        local_78 = (longlong)(int)uVar11;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar1.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar12);
      if (this->_padding_ == 0) {
        local_68[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_68);
      }
      if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
        uVar6 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar1);
        if (uVar6 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar11 < param_2->ArrayNum) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_78 = (longlong)(int)uVar11;
            local_70 = (longlong)param_2->ArrayNum;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar7 = FMovieSceneChannelData::MoveKeyInternal
                            ((FMovieSceneChannelData *)this,uVar6,
                             (FFrameNumber)*(int *)((longlong)&param_2->DataPtr->Value + lVar12));
          if (uVar7 != uVar6) {
            pTVar2 = this->Values;
            iVar9 = pTVar2->ArrayNum;
            uVar8 = 0;
            if ((int)uVar6 < iVar9) {
              uVar8 = ~uVar6 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (local_78 = (longlong)(int)uVar6, local_70 = (longlong)iVar9,
               bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (pTVar2->AllocatorInstance).Data;
            lVar10 = (longlong)(int)uVar6 * 0x1c;
            local_60._0_8_ = *(undefined8 *)(pFVar3 + lVar10);
            local_60.Tangent._4_8_ = *(undefined8 *)(pFVar3 + lVar10 + 8);
            local_60.Tangent._12_8_ = *(undefined8 *)(pFVar3 + lVar10 + 0x10);
            local_60._24_4_ = *(undefined4 *)(pFVar3 + lVar10 + 0x18);
            TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>::RemoveAt
                      (this->Values,uVar6,No);
            TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_>::Insert
                      (this->Values,&local_60,uVar7);
          }
        }
      }
      iVar9 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 4;
    } while ((int)uVar11 < iVar9);
  }
  return;
}

// SetKeyTimes @ 1460f79a0

void __thiscall
TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::SetKeyTimes
          (TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FFrameNumber_const_,int> *param_2)

{
  int iVar1;
  FKeyHandle FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  TArrayView<FFrameNumber_const_,int> *local_res18;
  <lambda_1> local_res20 [8];
  
  local_res18 = param_2;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandles.Num() == InKeyTimes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x267,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar8);
      if (this->_padding_ == 0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) &&
         (iVar5 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar2),
         iVar5 != -1)) {
        uVar6 = 0;
        if ((int)uVar7 < local_res18->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        MoveKey<_TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::MoveKey_::__l2::<lambda_1>_>
                  (this,iVar5,(FFrameNumber)*(int *)((longlong)&local_res18->DataPtr->Value + lVar8)
                   ,false,local_res20);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < iVar1);
  }
  return;
}

// SetKeyTimes @ 1460f7b50

void __thiscall
TMovieSceneChannelData<bool>::SetKeyTimes
          (TMovieSceneChannelData<bool> *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  int iVar1;
  FKeyHandle FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  TArrayView<FFrameNumber_const_,int> *local_res18;
  <lambda_1> local_res20 [8];
  
  local_res18 = param_2;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandles.Num() == InKeyTimes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x267,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2.Index = *(uint *)((longlong)&param_1->DataPtr->Index + lVar8);
      if (this->_padding_ == 0) {
        local_res10[0] = 0;
        `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) &&
         (iVar5 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)this->_padding_,FVar2),
         iVar5 != -1)) {
        uVar6 = 0;
        if ((int)uVar7 < local_res18->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        MoveKey<_TMovieSceneChannelData<bool>::MoveKey_::__l2::<lambda_1>_>
                  (this,iVar5,(FFrameNumber)*(int *)((longlong)&local_res18->DataPtr->Value + lVar8)
                   ,false,local_res20);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < iVar1);
  }
  return;
}

// UpdateOrAddKeys @ 1460fdb80

void __thiscall
TMovieSceneChannelData<FMovieSceneDoubleValue>::UpdateOrAddKeys
          (TMovieSceneChannelData<FMovieSceneDoubleValue> *this,
          TArrayView<FFrameNumber_const_,int> *param_1,
          TArrayView<FMovieSceneDoubleValue,int> *param_2)

{
  int *piVar1;
  uchar *puVar2;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar3;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  FMovieSceneDoubleValue *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  TArrayView<FFrameNumber_const_,int> *pTVar14;
  TArrayView<FMovieSceneDoubleValue,int> *pTVar15;
  longlong lVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  uint uVar29;
  undefined1 local_res8 [8];
  TArrayView<FFrameNumber_const_,int> *local_res10;
  TArrayView<FMovieSceneDoubleValue,int> *local_res18;
  longlong local_res20;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  TArrayView<FFrameNumber_const_,int> local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTimes.Num() == InValues.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x22c,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar22 = param_1->ArrayNum;
  uVar24 = 0;
  if ((longlong)iVar22 != 0) {
    local_res20 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uVar28 = uVar24;
    uVar25 = uVar24;
    do {
      lVar16 = local_res20;
      this_00 = (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_;
      uVar18 = param_1->ArrayNum;
      uVar21 = 0;
      uVar19 = 0;
      if (uVar28 == this_00->ArrayNum) {
        uVar28 = uVar18;
        if ((int)(uVar18 - uVar25) < (int)uVar18) {
          uVar28 = uVar18 - uVar25;
        }
        local_70.ArrayNum = uVar21;
        if (0 < (int)uVar28) {
          local_70.ArrayNum = uVar28;
        }
        local_70.DataPtr = param_1->DataPtr + ((longlong)(int)uVar18 - (longlong)local_70.ArrayNum);
        if ((local_70.ArrayNum < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::
        Append<TArrayView<FFrameNumber_const_,int>_>(this_00,&local_70);
        pTVar4 = this->Values;
        uVar28 = local_res18->ArrayNum;
        uVar18 = uVar28;
        if ((int)(uVar28 - uVar25) < (int)uVar28) {
          uVar18 = uVar28 - uVar25;
        }
        if (0 < (int)uVar18) {
          uVar19 = uVar18;
        }
        pFVar7 = local_res18->DataPtr;
        if ((int)uVar19 < 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar17) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9a9,L"Invalid range size: %lld");
          if (bVar17) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else if (uVar19 == 0) break;
        iVar22 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,uVar19,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,
                            &pTVar4->ArrayMax);
        memcpy((pTVar4->AllocatorInstance).Data + (longlong)iVar22 * 0x20,
               pFVar7 + ((longlong)(int)uVar28 - (longlong)(int)uVar19),(longlong)(int)uVar19 << 5);
        break;
      }
      uVar26 = ~uVar25 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar25 < (int)uVar18) {
        uVar29 = uVar26;
      }
      if ((uVar29 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar3 = (longlong *)this->_padding_;
      uVar29 = ~uVar28 >> 0x1f;
      iVar20 = param_1->DataPtr[lVar16].Value;
      uVar18 = uVar19;
      if ((int)uVar28 < (int)plVar3[1]) {
        uVar18 = uVar29;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar15 = local_res18;
      pTVar14 = local_res10;
      if (*(int *)(local_98 + *plVar3) == iVar20) {
        uVar18 = uVar19;
        if ((int)uVar25 < local_res18->ArrayNum) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar4 = this->Values;
        puVar2 = (pTVar15->DataPtr->Tangent).UnserializedPaddingBytes + local_88 + -0x19;
        uVar9 = *(undefined4 *)puVar2;
        uVar10 = *(undefined4 *)(puVar2 + 4);
        uVar11 = *(undefined4 *)(puVar2 + 8);
        uVar12 = *(undefined4 *)(puVar2 + 0xc);
        puVar2 = (pTVar15->DataPtr->Tangent).UnserializedPaddingBytes + local_88 + -9;
        local_60 = *(undefined8 *)puVar2;
        uStack_58 = *(undefined8 *)(puVar2 + 8);
        if ((int)uVar28 < pTVar4->ArrayNum) {
          uVar19 = uVar29;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar28 = uVar28 + 1;
        pFVar27 = (pTVar4->AllocatorInstance).Data;
        uVar25 = uVar25 + 1;
        local_98 = local_98 + 4;
        local_res20 = local_res20 + 1;
        pFVar23 = pFVar27 + local_90;
        *(undefined4 *)pFVar23 = uVar9;
        *(undefined4 *)(pFVar23 + 4) = uVar10;
        *(undefined4 *)(pFVar23 + 8) = uVar11;
        *(undefined4 *)(pFVar23 + 0xc) = uVar12;
        pFVar27 = pFVar27 + local_90 + 0x10;
        *(undefined8 *)pFVar27 = local_60;
        *(undefined8 *)(pFVar27 + 8) = uStack_58;
        local_90 = local_90 + 0x20;
        local_88 = local_88 + 0x20;
      }
      else {
        uVar18 = uVar19;
        if ((int)uVar25 < local_res10->ArrayNum) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar3 = (longlong *)this->_padding_;
        iVar20 = pTVar14->DataPtr[local_res20].Value;
        uVar18 = uVar19;
        if ((int)uVar28 < (int)plVar3[1]) {
          uVar18 = uVar29;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (iVar20 < *(int *)(local_98 + *plVar3)) {
          pFVar5 = (ForAnyElementType *)this->_padding_;
          if ((int)uVar25 < local_res10->ArrayNum) {
            uVar19 = uVar26;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar23 = (FScriptContainerElement *)(local_res10->DataPtr + local_res20);
          if (((pFVar5->Data <= pFVar23) &&
              (pFVar23 < pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar20 = *(int *)&pFVar5[1].Data;
          piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
          if (iVar20 == *piVar1) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar5,piVar1);
          }
          *(int *)&pFVar5[1].Data = iVar20 + 1;
          memmove(pFVar5->Data + local_98 + 4,pFVar5->Data + local_98,
                  (longlong)(int)(iVar20 - uVar28) << 2);
          pTVar15 = local_res18;
          *(undefined4 *)(pFVar5->Data + local_98) = *(undefined4 *)pFVar23;
          pTVar4 = this->Values;
          if ((int)uVar25 < local_res18->ArrayNum) {
            uVar21 = uVar26;
          }
          if ((uVar21 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar23 = (pTVar4->AllocatorInstance).Data;
          pFVar27 = (FScriptContainerElement *)
                    ((pTVar15->DataPtr->Tangent).UnserializedPaddingBytes + local_88 + -0x19);
          if (((pFVar23 <= pFVar27) && (pFVar27 < pFVar23 + (longlong)pTVar4->ArrayMax * 0x20)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar20 = pTVar4->ArrayNum;
          if (iVar20 == pTVar4->ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
          }
          pFVar23 = (pTVar4->AllocatorInstance).Data + local_90;
          pTVar4->ArrayNum = iVar20 + 1;
          memmove(pFVar23 + 0x20,pFVar23,(longlong)(int)(iVar20 - uVar28) << 5);
          local_98 = local_98 + 4;
          pFVar6 = (pTVar4->AllocatorInstance).Data;
          uVar28 = uVar28 + 1;
          uVar13 = *(undefined8 *)(pFVar27 + 8);
          uVar25 = uVar25 + 1;
          pFVar23 = pFVar6 + local_90;
          *(undefined8 *)pFVar23 = *(undefined8 *)pFVar27;
          *(undefined8 *)(pFVar23 + 8) = uVar13;
          local_res20 = local_res20 + 1;
          uVar13 = *(undefined8 *)(pFVar27 + 0x18);
          pFVar6 = pFVar6 + local_90 + 0x10;
          *(undefined8 *)pFVar6 = *(undefined8 *)(pFVar27 + 0x10);
          *(undefined8 *)(pFVar6 + 8) = uVar13;
          local_90 = local_90 + 0x20;
          local_88 = local_88 + 0x20;
        }
        else {
          uVar18 = uVar21;
          if ((int)uVar25 < local_res10->ArrayNum) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar3 = (longlong *)this->_padding_;
          iVar20 = local_res10->DataPtr[local_res20].Value;
          if ((int)uVar28 < (int)plVar3[1]) {
            uVar21 = uVar29;
          }
          if ((uVar21 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)(*plVar3 + local_98) < iVar20) {
            local_90 = local_90 + 0x20;
            uVar28 = uVar28 + 1;
            local_98 = local_98 + 4;
          }
        }
      }
      param_1 = local_res10;
    } while (local_res20 != iVar22);
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)this->_padding_);
  if (0 < *(int *)(this->_padding_ + 8)) {
    do {
      FKeyHandleLookupTable::AllocateHandle
                ((FKeyHandleLookupTable *)this->_padding_,(int)local_res8);
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < *(int *)(this->_padding_ + 8));
  }
  return;
}

// UpdateOrAddKeys @ 1460fe3a0

void __thiscall
TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKeys
          (TMovieSceneChannelData<FMovieSceneFloatValue> *this,
          TArrayView<FFrameNumber_const_,int> *param_1,
          TArrayView<FMovieSceneFloatValue,int> *param_2)

{
  int *piVar1;
  uchar *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar5;
  FMovieSceneFloatValue *pFVar6;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType *pFVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  TArrayView<FFrameNumber_const_,int> *pTVar14;
  TArrayView<FMovieSceneFloatValue,int> *pTVar15;
  longlong lVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  uint uVar29;
  undefined1 local_res8 [8];
  TArrayView<FFrameNumber_const_,int> *local_res10;
  TArrayView<FMovieSceneFloatValue,int> *local_res18;
  longlong local_res20;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  TArrayView<FFrameNumber_const_,int> local_60 [2];
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTimes.Num() == InValues.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x22c,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar22 = param_1->ArrayNum;
  uVar24 = 0;
  if ((longlong)iVar22 != 0) {
    local_res20 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uVar28 = uVar24;
    uVar25 = uVar24;
    do {
      lVar16 = local_res20;
      this_00 = (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_;
      uVar18 = param_1->ArrayNum;
      uVar21 = 0;
      uVar19 = 0;
      if (uVar28 == this_00->ArrayNum) {
        uVar28 = uVar18;
        if ((int)(uVar18 - uVar25) < (int)uVar18) {
          uVar28 = uVar18 - uVar25;
        }
        local_60[0].ArrayNum = uVar21;
        if (0 < (int)uVar28) {
          local_60[0].ArrayNum = uVar28;
        }
        local_60[0].DataPtr =
             param_1->DataPtr + ((longlong)(int)uVar18 - (longlong)local_60[0].ArrayNum);
        if ((local_60[0].ArrayNum < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::
        Append<TArrayView<FFrameNumber_const_,int>_>(this_00,local_60);
        pTVar7 = this->Values;
        uVar28 = local_res18->ArrayNum;
        uVar18 = uVar28;
        if ((int)(uVar28 - uVar25) < (int)uVar28) {
          uVar18 = uVar28 - uVar25;
        }
        if (0 < (int)uVar18) {
          uVar19 = uVar18;
        }
        pFVar6 = local_res18->DataPtr;
        if ((int)uVar19 < 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar17) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9a9,L"Invalid range size: %lld");
          if (bVar17) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        else if (uVar19 == 0) break;
        iVar22 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1c,4,uVar19,&pTVar7->AllocatorInstance,&pTVar7->ArrayNum,
                            &pTVar7->ArrayMax);
        memcpy((pTVar7->AllocatorInstance).Data + (longlong)iVar22 * 0x1c,
               pFVar6 + ((longlong)(int)uVar28 - (longlong)(int)uVar19),(longlong)(int)uVar19 * 0x1c
              );
        break;
      }
      uVar26 = ~uVar25 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar25 < (int)uVar18) {
        uVar29 = uVar26;
      }
      if ((uVar29 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      plVar5 = (longlong *)this->_padding_;
      uVar29 = ~uVar28 >> 0x1f;
      iVar20 = param_1->DataPtr[lVar16].Value;
      uVar18 = uVar19;
      if ((int)uVar28 < (int)plVar5[1]) {
        uVar18 = uVar29;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar15 = local_res18;
      pTVar14 = local_res10;
      if (*(int *)(local_98 + *plVar5) == iVar20) {
        uVar18 = uVar19;
        if ((int)uVar25 < local_res18->ArrayNum) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = pTVar15->DataPtr;
        pTVar7 = this->Values;
        puVar2 = (pFVar6->Tangent).UnserializedPaddingBytes + local_88 + -0x15;
        uVar10 = *(undefined4 *)puVar2;
        uVar11 = *(undefined4 *)(puVar2 + 4);
        uVar12 = *(undefined4 *)(puVar2 + 8);
        uVar13 = *(undefined4 *)(puVar2 + 0xc);
        uVar4 = *(undefined4 *)(pFVar6->UnserializedPaddingBytes + local_88 + -3);
        uVar3 = *(undefined8 *)((pFVar6->Tangent).UnserializedPaddingBytes + local_88 + -5);
        if ((int)uVar28 < pTVar7->ArrayNum) {
          uVar19 = uVar29;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar28 = uVar28 + 1;
        pFVar27 = (pTVar7->AllocatorInstance).Data;
        uVar25 = uVar25 + 1;
        local_98 = local_98 + 4;
        local_res20 = local_res20 + 1;
        pFVar23 = pFVar27 + local_90;
        *(undefined4 *)pFVar23 = uVar10;
        *(undefined4 *)(pFVar23 + 4) = uVar11;
        *(undefined4 *)(pFVar23 + 8) = uVar12;
        *(undefined4 *)(pFVar23 + 0xc) = uVar13;
        *(undefined8 *)(pFVar27 + local_90 + 0x10) = uVar3;
        *(undefined4 *)(pFVar27 + local_90 + 0x18) = uVar4;
        local_90 = local_90 + 0x1c;
        local_88 = local_88 + 0x1c;
      }
      else {
        uVar18 = uVar19;
        if ((int)uVar25 < local_res10->ArrayNum) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar5 = (longlong *)this->_padding_;
        iVar20 = pTVar14->DataPtr[local_res20].Value;
        uVar18 = uVar19;
        if ((int)uVar28 < (int)plVar5[1]) {
          uVar18 = uVar29;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (iVar20 < *(int *)(local_98 + *plVar5)) {
          pFVar8 = (ForAnyElementType *)this->_padding_;
          if ((int)uVar25 < local_res10->ArrayNum) {
            uVar19 = uVar26;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar23 = (FScriptContainerElement *)(local_res10->DataPtr + local_res20);
          if (((pFVar8->Data <= pFVar23) &&
              (pFVar23 < pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar20 = *(int *)&pFVar8[1].Data;
          piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
          if (iVar20 == *piVar1) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar8,piVar1);
          }
          *(int *)&pFVar8[1].Data = iVar20 + 1;
          memmove(pFVar8->Data + local_98 + 4,pFVar8->Data + local_98,
                  (longlong)(int)(iVar20 - uVar28) << 2);
          pTVar15 = local_res18;
          *(undefined4 *)(pFVar8->Data + local_98) = *(undefined4 *)pFVar23;
          pTVar7 = this->Values;
          if ((int)uVar25 < local_res18->ArrayNum) {
            uVar21 = uVar26;
          }
          if ((uVar21 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar23 = (pTVar7->AllocatorInstance).Data;
          pFVar27 = (FScriptContainerElement *)
                    ((pTVar15->DataPtr->Tangent).UnserializedPaddingBytes + local_88 + -0x15);
          if (((pFVar23 <= pFVar27) && (pFVar27 < pFVar23 + (longlong)pTVar7->ArrayMax * 0x1c)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar20 = pTVar7->ArrayNum;
          if (iVar20 == pTVar7->ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x41c,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
          }
          pFVar23 = (pTVar7->AllocatorInstance).Data + local_90;
          pTVar7->ArrayNum = iVar20 + 1;
          memmove(pFVar23 + 0x1c,pFVar23,(longlong)(int)(iVar20 - uVar28) * 0x1c);
          local_98 = local_98 + 4;
          pFVar23 = (pTVar7->AllocatorInstance).Data;
          uVar28 = uVar28 + 1;
          uVar3 = *(undefined8 *)(pFVar27 + 8);
          uVar25 = uVar25 + 1;
          *(undefined8 *)(pFVar23 + local_90) = *(undefined8 *)pFVar27;
          *(undefined8 *)(pFVar23 + local_90 + 8) = uVar3;
          local_res20 = local_res20 + 1;
          *(undefined8 *)(pFVar23 + local_90 + 0x10) = *(undefined8 *)(pFVar27 + 0x10);
          *(undefined4 *)(pFVar23 + local_90 + 0x18) = *(undefined4 *)(pFVar27 + 0x18);
          local_90 = local_90 + 0x1c;
          local_88 = local_88 + 0x1c;
        }
        else {
          uVar18 = uVar21;
          if ((int)uVar25 < local_res10->ArrayNum) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          plVar5 = (longlong *)this->_padding_;
          iVar20 = local_res10->DataPtr[local_res20].Value;
          if ((int)uVar28 < (int)plVar5[1]) {
            uVar21 = uVar29;
          }
          if ((uVar21 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (*(int *)(*plVar5 + local_98) < iVar20) {
            local_90 = local_90 + 0x1c;
            uVar28 = uVar28 + 1;
            local_98 = local_98 + 4;
          }
        }
      }
      param_1 = local_res10;
    } while (local_res20 != iVar22);
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)this->_padding_);
  if (0 < *(int *)(this->_padding_ + 8)) {
    do {
      FKeyHandleLookupTable::AllocateHandle
                ((FKeyHandleLookupTable *)this->_padding_,(int)local_res8);
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < *(int *)(this->_padding_ + 8));
  }
  return;
}

// AddKey @ 1462a26f0

int __thiscall
TMovieSceneChannelData<FMovieSceneDoubleValue>::AddKey
          (TMovieSceneChannelData<FMovieSceneDoubleValue> *this,FFrameNumber param_1,
          FMovieSceneDoubleValue *param_2)

{
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar1;
  FMovieSceneDoubleValue *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_28;
  
  iVar7 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,param_1);
  pTVar1 = this->Values;
  pFVar2 = (FMovieSceneDoubleValue *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= param_2) && (param_2 < pFVar2 + pTVar1->ArrayMax)) {
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
  iVar8 = pTVar1->ArrayNum;
  if (iVar8 == pTVar1->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pFVar9 = (pTVar1->AllocatorInstance).Data;
  pTVar1->ArrayNum = iVar8 + 1;
  lVar10 = (longlong)iVar7 * 0x20;
  pFVar9 = pFVar9 + lVar10;
  memmove(pFVar9 + 0x20,pFVar9,(longlong)(iVar8 - iVar7) << 5);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  uVar5 = *(undefined8 *)&param_2->Tangent;
  pFVar9 = pFVar3 + lVar10;
  *(double *)pFVar9 = param_2->Value;
  *(undefined8 *)(pFVar9 + 8) = uVar5;
  uVar5 = *(undefined8 *)&(param_2->Tangent).TangentWeightMode;
  pFVar3 = pFVar3 + lVar10 + 0x10;
  *(undefined8 *)pFVar3 = *(undefined8 *)&(param_2->Tangent).ArriveTangentWeight;
  *(undefined8 *)(pFVar3 + 8) = uVar5;
  if (this->_padding_ != 0) {
    bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 8));
    if (bVar6) {
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_28.AllocatorInstance,&local_28.ArrayMax);
      local_28.ArrayNum = iVar8 + 1;
      *(ulonglong *)(local_28.AllocatorInstance.Data + (longlong)iVar8 * 8) =
           CONCAT44(param_1.Value,iVar7);
      TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                  (FMovieSceneChannel *)this->_padding_,&local_28);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
  }
  return iVar7;
}

