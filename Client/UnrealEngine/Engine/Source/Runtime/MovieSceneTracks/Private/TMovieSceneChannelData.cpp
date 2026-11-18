// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 35

// operator() @ 146624760

bool __thiscall
`TMovieSceneChannelData<FMovieSceneActorReferenceKey>::RemapTimes'::__l12::<lambda_1>::operator()
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

// operator() @ 146624850

bool __thiscall
`TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::RemapTimes'::__l12::<lambda_1>::
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

// operator() @ 146624940

bool __thiscall
`TMovieSceneChannelData<FMovieSceneEvent>::RemapTimes'::__l12::<lambda_1>::operator()
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

// operator() @ 146624a30

bool __thiscall
`TMovieSceneChannelData<FString>::RemapTimes'::__l12::<lambda_1>::operator()
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

// operator() @ 146624b20

bool __thiscall
`TMovieSceneChannelData<FText>::RemapTimes'::__l12::<lambda_1>::operator()
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

// AddKey @ 1466391f0

int __thiscall
TMovieSceneChannelData<FMovieSceneActorReferenceKey>::AddKey
          (TMovieSceneChannelData<FMovieSceneActorReferenceKey> *this,FFrameNumber param_1,
          FMovieSceneActorReferenceKey *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_18;
  
  iVar2 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,param_1);
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_>::Insert
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

// AddKey @ 1466392c0

int __thiscall
TMovieSceneChannelData<FString>::AddKey
          (TMovieSceneChannelData<FString> *this,FFrameNumber param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_18;
  
  iVar2 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,param_1);
  TArray<FString,TSizedDefaultAllocator<32>_>::Insert(this->Values,param_2,iVar2);
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

// AddKey @ 146639390

int __thiscall
TMovieSceneChannelData<FText>::AddKey
          (TMovieSceneChannelData<FText> *this,FFrameNumber param_1,FText *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_18;
  
  iVar2 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,param_1);
  TArray<FText,TSizedDefaultAllocator<32>_>::Insert(this->Values,param_2,iVar2);
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

// DeleteKeys @ 1466555f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneActorReferenceKey>::DeleteKeys
          (TMovieSceneChannelData<FMovieSceneActorReferenceKey> *this,
          TArrayView<FKeyHandle_const_,int> *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_28;
  
  iVar7 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    do {
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
      uVar5 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar8].Index);
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
          uVar1 = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
          local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.ArrayNum = 0;
          local_28.ArrayMax = 0;
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_28.AllocatorInstance,&local_28.ArrayMax);
          local_28.ArrayNum = iVar7 + 1;
          *(ulonglong *)(local_28.AllocatorInstance.Data + (longlong)iVar7 * 8) =
               CONCAT44(uVar1,uVar5);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_28);
          if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
        TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_>::RemoveAt
                  (this->Values,uVar5,No);
        if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// DeleteKeys @ 1466557e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::DeleteKeys
          (TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> *this,
          TArrayView<FKeyHandle_const_,int> *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_28;
  
  iVar7 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    do {
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
      uVar5 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar8].Index);
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
          uVar1 = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
          local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.ArrayNum = 0;
          local_28.ArrayMax = 0;
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_28.AllocatorInstance,&local_28.ArrayMax);
          local_28.ArrayNum = iVar7 + 1;
          *(ulonglong *)(local_28.AllocatorInstance.Data + (longlong)iVar7 * 8) =
               CONCAT44(uVar1,uVar5);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_28);
          if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
        TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_>::RemoveAt
                  (this->Values,uVar5,No);
        if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// DeleteKeys @ 1466559d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneEvent>::DeleteKeys
          (TMovieSceneChannelData<FMovieSceneEvent> *this,TArrayView<FKeyHandle_const_,int> *param_1
          )

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_28;
  
  iVar7 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    do {
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
      uVar5 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar8].Index);
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
          uVar1 = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
          local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.ArrayNum = 0;
          local_28.ArrayMax = 0;
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_28.AllocatorInstance,&local_28.ArrayMax);
          local_28.ArrayNum = iVar7 + 1;
          *(ulonglong *)(local_28.AllocatorInstance.Data + (longlong)iVar7 * 8) =
               CONCAT44(uVar1,uVar5);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_28);
          if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
        TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,uVar5,No);
        if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// DeleteKeys @ 146655bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FString>::DeleteKeys
          (TMovieSceneChannelData<FString> *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_28;
  
  iVar7 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    do {
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
      uVar5 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar8].Index);
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
          uVar1 = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
          local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.ArrayNum = 0;
          local_28.ArrayMax = 0;
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_28.AllocatorInstance,&local_28.ArrayMax);
          local_28.ArrayNum = iVar7 + 1;
          *(ulonglong *)(local_28.AllocatorInstance.Data + (longlong)iVar7 * 8) =
               CONCAT44(uVar1,uVar5);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_28);
          if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
        TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,uVar5,No);
        if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// DeleteKeys @ 146655db0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FText>::DeleteKeys
          (TMovieSceneChannelData<FText> *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_28;
  
  iVar7 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    do {
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
      uVar5 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar8].Index);
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
          uVar1 = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
          local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.ArrayNum = 0;
          local_28.ArrayMax = 0;
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_28.AllocatorInstance,&local_28.ArrayMax);
          local_28.ArrayNum = iVar7 + 1;
          *(ulonglong *)(local_28.AllocatorInstance.Data + (longlong)iVar7 * 8) =
               CONCAT44(uVar1,uVar5);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_28);
          if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)this->_padding_,uVar5,No);
        TArray<FText,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,uVar5,No);
        if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// DeleteKeysFrom @ 1466560c0

void __thiscall
TMovieSceneChannelData<FMovieSceneActorReferenceKey>::DeleteKeysFrom
          (TMovieSceneChannelData<FMovieSceneActorReferenceKey> *this,FFrameNumber param_1,
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
LAB_14665620f:
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
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_14665620f;
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

// DeleteKeysFrom @ 1466563c0

void __thiscall
TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::DeleteKeysFrom
          (TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> *this,FFrameNumber param_1,
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
LAB_14665650f:
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
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_14665650f;
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

// DeleteKeysFrom @ 1466566c0

void __thiscall
TMovieSceneChannelData<FMovieSceneEvent>::DeleteKeysFrom
          (TMovieSceneChannelData<FMovieSceneEvent> *this,FFrameNumber param_1,bool param_2)

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
LAB_14665680f:
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
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_14665680f;
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

// DeleteKeysFrom @ 1466569c0

void __thiscall
TMovieSceneChannelData<FString>::DeleteKeysFrom
          (TMovieSceneChannelData<FString> *this,FFrameNumber param_1,bool param_2)

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
LAB_146656b0f:
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
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_146656b0f;
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

// DeleteKeysFrom @ 146656cc0

void __thiscall
TMovieSceneChannelData<FText>::DeleteKeysFrom
          (TMovieSceneChannelData<FText> *this,FFrameNumber param_1,bool param_2)

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
LAB_146656e0f:
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
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_146656e0f;
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

// DuplicateKeys @ 146666bd0

void __thiscall
TMovieSceneChannelData<FMovieSceneActorReferenceKey>::DuplicateKeys
          (TMovieSceneChannelData<FMovieSceneActorReferenceKey> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FKeyHandle,int> *param_2)

{
  FFrameNumber FVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FKeyHandle FVar7;
  uint uVar8;
  int iVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 local_88 [4];
  int local_84;
  int iStack_80;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_78;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_70;
  FMovieSceneActorReferenceKey local_60;
  undefined4 *puVar10;
  
  iVar9 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar9) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar12 < iVar9) {
        uVar6 = ~uVar12 >> 0x1f;
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
      uVar6 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar12].Index);
      lVar11 = (longlong)(int)uVar6;
      if (uVar6 == 0xffffffff) {
        FVar7 = FKeyHandle::Invalid();
        puVar10 = (undefined4 *)CONCAT44(extraout_var,FVar7.Index);
      }
      else {
        local_78 = this->Values;
        uVar8 = 0;
        if ((int)uVar6 < local_78->ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (local_78->AllocatorInstance).Data;
        local_60.Object.Guid._0_8_ = *(undefined8 *)(pFVar3 + lVar11 * 0x28);
        local_60.Object.Guid._8_8_ = *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 8);
        local_60.Object._16_8_ = *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 0x10);
        local_60.ComponentName = *(FName *)(pFVar3 + lVar11 * 0x28 + 0x10 + 8);
        local_60.SocketName = *(FName *)(pFVar3 + lVar11 * 0x28 + 0x20);
        local_78 = (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)
                   this->_padding_;
        uVar8 = 0;
        if ((int)uVar6 < (int)*(longlong *)((longlong)local_78 + 8)) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar1.Value = *(int *)(*(longlong *)local_78 + lVar11 * 4);
        iVar9 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar1);
        TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_>::Insert
                  (this->Values,&local_60,iVar9);
        if ((this->_padding_ != 0) &&
           (bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar5)) {
          local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_70.ArrayNum = 0;
          local_70.ArrayMax = 0;
          local_84 = iVar9;
          iStack_80 = FVar1.Value;
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_70.AllocatorInstance,&local_70.ArrayMax);
          local_70.ArrayNum = iVar9 + 1;
          *(ulonglong *)(local_70.AllocatorInstance.Data + (longlong)iVar9 * 8) =
               CONCAT44(iStack_80,local_84);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_70);
          if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.AllocatorInstance.Data);
          }
        }
        FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)this,(int)local_88);
        puVar10 = (undefined4 *)CONCAT44(extraout_var_00,FVar7.Index);
      }
      uVar2 = *puVar10;
      uVar6 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
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
      uVar12 = uVar12 + 1;
      *(undefined4 *)((longlong)&param_2->DataPtr->Index + lVar13) = uVar2;
      lVar13 = lVar13 + 4;
      iVar9 = param_1->ArrayNum;
    } while ((int)uVar12 < iVar9);
  }
  return;
}

// DuplicateKeys @ 146666ea0

void __thiscall
TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::DuplicateKeys
          (TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FKeyHandle,int> *param_2)

{
  undefined4 uVar1;
  FFrameNumber FVar2;
  TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FKeyHandle FVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 local_98 [4];
  int local_94;
  int iStack_90;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_88;
  TObjectPtr<UClass>_u_0 local_78;
  undefined4 local_70;
  FScriptContainerElement local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  iVar11 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar11) {
    lVar15 = 0;
    do {
      uVar13 = ~uVar14 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar14 < iVar11) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar14].Index);
      lVar12 = (longlong)(int)uVar8;
      if (uVar8 == 0xffffffff) {
        FVar9 = FKeyHandle::Invalid();
        uVar1 = *(undefined4 *)CONCAT44(extraout_var,FVar9.Index);
        uVar8 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar8 = uVar13;
        }
      }
      else {
        pTVar3 = this->Values;
        uVar10 = 0;
        if ((int)uVar8 < pTVar3->ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        local_78 = (TObjectPtr<UClass>_u_0)
                   ((TObjectPtr<UClass>_u_0 *)(pFVar4 + lVar12 * 0x28))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_78.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
        }
        local_70 = *(undefined4 *)(pFVar4 + lVar12 * 0x28 + 8);
        local_6c = pFVar4[lVar12 * 0x28 + 0xc];
        local_68 = *(undefined8 *)(pFVar4 + lVar12 * 0x28 + 0x10);
        uStack_60 = *(undefined8 *)(pFVar4 + lVar12 * 0x28 + 0x10 + 8);
        local_58 = *(undefined8 *)(pFVar4 + lVar12 * 0x28 + 0x20);
        plVar5 = (longlong *)this->_padding_;
        uVar10 = 0;
        if ((int)uVar8 < (int)plVar5[1]) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2.Value = *(int *)(*plVar5 + lVar12 * 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar2);
        TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_>::Insert
                  (this->Values,(FMovieSceneCameraShakeSourceTrigger *)&local_78.ObjectPtr,iVar11);
        if ((this->_padding_ != 0) &&
           (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar7)) {
          local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.ArrayNum = 0;
          local_88.ArrayMax = 0;
          local_94 = iVar11;
          iStack_90 = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_88.AllocatorInstance,&local_88.ArrayMax);
          local_88.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_88.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_90,local_94);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_88);
          if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.AllocatorInstance.Data);
          }
        }
        FVar9 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)this,(int)local_98);
        uVar1 = *(undefined4 *)CONCAT44(extraout_var_00,FVar9.Index);
        uVar8 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar8 = uVar13;
        }
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = uVar14 + 1;
      *(undefined4 *)((longlong)&param_2->DataPtr->Index + lVar15) = uVar1;
      lVar15 = lVar15 + 4;
      iVar11 = param_1->ArrayNum;
    } while ((int)uVar14 < iVar11);
  }
  return;
}

// DuplicateKeys @ 1466671c0

void __thiscall
TMovieSceneChannelData<FMovieSceneEvent>::DuplicateKeys
          (TMovieSceneChannelData<FMovieSceneEvent> *this,TArrayView<FKeyHandle_const_,int> *param_1
          ,TArrayView<FKeyHandle,int> *param_2)

{
  undefined4 uVar1;
  FFrameNumber FVar2;
  TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FKeyHandle FVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_var;
  FFieldClass *pFVar12;
  undefined4 extraout_var_00;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 local_88 [4];
  int local_84;
  int iStack_80;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_78;
  TObjectPtr<UFunction>_u_0 local_68;
  FFieldPath local_60;
  
  iVar11 = param_1->ArrayNum;
  uVar15 = 0;
  if (0 < iVar11) {
    lVar16 = 0;
    do {
      uVar14 = ~uVar15 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar15 < iVar11) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar15].Index);
      lVar13 = (longlong)(int)uVar8;
      if (uVar8 == 0xffffffff) {
        FVar9 = FKeyHandle::Invalid();
        uVar1 = *(undefined4 *)CONCAT44(extraout_var,FVar9.Index);
        uVar8 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((longlong)&param_2->DataPtr->Index + lVar16) = uVar1;
      }
      else {
        pTVar3 = this->Values;
        uVar10 = 0;
        if ((int)uVar8 < pTVar3->ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        local_68 = (TObjectPtr<UFunction>_u_0)
                   ((TObjectPtr<UFunction>_u_0 *)(pFVar4 + lVar13 * 0x28))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_68.DebugPtr != (UFunction *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_68.DebugPtr);
        }
        local_60.ResolvedField = (FField *)0x0;
        local_60.ResolvedOwner.WeakPtr.ObjectIndex = 0;
        local_60.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
        local_60.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.Path.ArrayNum = 0;
        local_60.Path.ArrayMax = 0;
        pFVar12 = FProperty::StaticClass();
        FFieldPath::GetTyped((FFieldPath *)(pFVar4 + lVar13 * 0x28 + 8),pFVar12,(UStruct *)0x0);
        FFieldPath::operator=(&local_60,(FFieldPath *)(pFVar4 + lVar13 * 0x28 + 8));
        plVar5 = (longlong *)this->_padding_;
        uVar10 = 0;
        if ((int)uVar8 < (int)plVar5[1]) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2.Value = *(int *)(*plVar5 + lVar13 * 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar2);
        TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_>::Insert
                  (this->Values,(FMovieSceneEvent *)&local_68.ObjectPtr,iVar11);
        if ((this->_padding_ != 0) &&
           (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar7)) {
          local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.ArrayNum = 0;
          local_78.ArrayMax = 0;
          local_84 = iVar11;
          iStack_80 = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_78.AllocatorInstance,&local_78.ArrayMax);
          local_78.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_78.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_80,local_84);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_78);
          if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.AllocatorInstance.Data);
          }
        }
        FVar9 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)this,(int)local_88);
        uVar1 = *(undefined4 *)CONCAT44(extraout_var_00,FVar9.Index);
        uVar8 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((longlong)&param_2->DataPtr->Index + lVar16) = uVar1;
        if (local_60.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Path.AllocatorInstance.Data);
        }
      }
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 4;
      iVar11 = param_1->ArrayNum;
    } while ((int)uVar15 < iVar11);
  }
  return;
}

// DuplicateKeys @ 146667520

void __thiscall
TMovieSceneChannelData<FString>::DuplicateKeys
          (TMovieSceneChannelData<FString> *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  undefined4 uVar1;
  FFrameNumber FVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *_Src;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FKeyHandle FVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_78 [4];
  int local_74;
  int iStack_70;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  
  iVar11 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar11) {
    lVar15 = 0;
    do {
      uVar13 = ~uVar14 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar14 < iVar11) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar14].Index);
      lVar12 = (longlong)(int)uVar8;
      if (uVar8 == 0xffffffff) {
        FVar9 = FKeyHandle::Invalid();
        uVar1 = *(undefined4 *)CONCAT44(extraout_var,FVar9.Index);
        uVar8 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((longlong)&param_2->DataPtr->Index + lVar15) = uVar1;
      }
      else {
        pTVar3 = this->Values;
        uVar10 = 0;
        if ((int)uVar8 < pTVar3->ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = *(int *)(pFVar4 + lVar12 * 0x10 + 8);
        lVar16 = (longlong)local_58.Data.ArrayNum;
        _Src = *(void **)(pFVar4 + lVar12 * 0x10);
        if (local_58.Data.ArrayNum == 0) {
          local_58.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,
                     local_58.Data.ArrayNum,&local_58.Data.ArrayMax);
          memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar16 * 2);
        }
        plVar5 = (longlong *)this->_padding_;
        uVar10 = 0;
        if ((int)uVar8 < (int)plVar5[1]) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2.Value = *(int *)(*plVar5 + lVar12 * 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar2);
        TArray<FString,TSizedDefaultAllocator<32>_>::Insert(this->Values,&local_58,iVar11);
        if ((this->_padding_ != 0) &&
           (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar7)) {
          local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.ArrayNum = 0;
          local_68.ArrayMax = 0;
          local_74 = iVar11;
          iStack_70 = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_68.AllocatorInstance,&local_68.ArrayMax);
          local_68.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_68.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_70,local_74);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_68);
          if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.AllocatorInstance.Data);
          }
        }
        FVar9 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)this,(int)local_78);
        uVar1 = *(undefined4 *)CONCAT44(extraout_var_00,FVar9.Index);
        uVar8 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((longlong)&param_2->DataPtr->Index + lVar15) = uVar1;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 4;
      iVar11 = param_1->ArrayNum;
    } while ((int)uVar14 < iVar11);
  }
  return;
}

// DuplicateKeys @ 1466678a0

void __thiscall
TMovieSceneChannelData<FText>::DuplicateKeys
          (TMovieSceneChannelData<FText> *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  undefined4 uVar1;
  FFrameNumber FVar2;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FKeyHandle FVar8;
  uint uVar9;
  int iVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  int local_60;
  int iStack_5c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_58;
  FText local_48;
  
  iVar10 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar10) {
    lVar13 = 0;
    do {
      uVar11 = ~uVar12 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar12 < iVar10) {
        uVar7 = uVar11;
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
      uVar7 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar12].Index);
      if (uVar7 == 0xffffffff) {
        FVar8 = FKeyHandle::Invalid();
        uVar1 = *(undefined4 *)CONCAT44(extraout_var,FVar8.Index);
        uVar7 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar7 = uVar11;
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
        *(undefined4 *)((longlong)&param_2->DataPtr->Index + lVar13) = uVar1;
      }
      else {
        pTVar3 = this->Values;
        uVar9 = 0;
        if ((int)uVar7 < pTVar3->ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10;
        local_48.TextData.Reference = *(ITextData **)pFVar14;
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 8))
                    (local_48.TextData.Reference,local_68);
        }
        local_48.Flags = *(uint *)(pFVar14 + 8);
        plVar4 = (longlong *)this->_padding_;
        uVar9 = 0;
        if ((int)uVar7 < (int)plVar4[1]) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
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
        iVar10 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar2);
        TArray<FText,TSizedDefaultAllocator<32>_>::Insert(this->Values,&local_48,iVar10);
        if ((this->_padding_ != 0) &&
           (bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar6)) {
          local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.ArrayNum = 0;
          local_58.ArrayMax = 0;
          local_60 = iVar10;
          iStack_5c = FVar2.Value;
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_58.AllocatorInstance,&local_58.ArrayMax);
          local_58.ArrayNum = iVar10 + 1;
          *(ulonglong *)(local_58.AllocatorInstance.Data + (longlong)iVar10 * 8) =
               CONCAT44(iStack_5c,local_60);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_58);
          if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.AllocatorInstance.Data);
          }
        }
        FVar8 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)this,(int)local_64);
        uVar1 = *(undefined4 *)CONCAT44(extraout_var_00,FVar8.Index);
        uVar7 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar7 = uVar11;
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
        *(undefined4 *)((longlong)&param_2->DataPtr->Index + lVar13) = uVar1;
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 4;
      iVar10 = param_1->ArrayNum;
    } while ((int)uVar12 < iVar10);
  }
  return;
}

// RemapTimes @ 1466d0de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FMovieSceneActorReferenceKey>::RemapTimes
          (TMovieSceneChannelData<FMovieSceneActorReferenceKey> *this,IRetimingInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  FKeyHandleLookupTable *this_00;
  longlong *plVar7;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey> *pTVar17;
  bool bVar18;
  FFrameNumber FVar19;
  uint uVar20;
  uint uVar21;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar22;
  longlong lVar23;
  FIdentityFunctor FVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ForElementType<int> FVar28;
  uint uVar29;
  int *piVar30;
  int *piVar31;
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
  TMovieSceneChannelData<FMovieSceneActorReferenceKey> *local_270;
  ForElementType<int> local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  ForElementType<int> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  puVar4 = (undefined8 *)this->_padding_;
  iVar25 = *(int *)(puVar4 + 1);
  FVar28 = (ForElementType<int>)(longlong)iVar25;
  if (iVar25 != 0) {
    local_288 = (FIdentityFunctor)0x1;
    local_278 = param_1;
    local_270 = this;
    if (iVar25 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = FVar28;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    puVar5 = (undefined4 *)*puVar4;
    FVar19 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_260);
    *puVar5 = *(undefined4 *)CONCAT44(extraout_var,FVar19.Value);
    iVar25 = this->Values->ArrayNum;
    if (iVar25 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = (ForElementType<int>)(longlong)iVar25;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    uVar26 = 1;
    if (1 < (longlong)FVar28) {
      piVar30 = (int *)&DAT_00000001;
      local_268 = FVar28;
      do {
        plVar6 = (longlong *)this->_padding_;
        iVar25 = (int)plVar6[1];
        uVar29 = 0;
        if ((int)uVar26 < iVar25) {
          uVar29 = ~uVar26 >> 0x1f;
        }
        if (uVar29 == 0) {
          local_2b8 = (int *)(longlong)(int)uVar26;
          local_2b0 = (ForElementType<int>)(longlong)iVar25;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        lVar23 = *plVar6;
        plVar6 = (longlong *)this->_padding_;
        iVar25 = (int)plVar6[1];
        uVar29 = 0;
        if ((int)(uVar26 - 1) < iVar25) {
          uVar29 = -uVar26 >> 0x1f;
        }
        if (uVar29 == 0) {
          local_2b8 = (int *)(longlong)(int)(uVar26 - 1);
          local_2b0 = (ForElementType<int>)(longlong)iVar25;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar25 = *(int *)(*plVar6 + -4 + (longlong)piVar30 * 4);
        FVar19 = UE::MovieScene::IRetimingInterface::RemapTime(local_278,(int)local_25c);
        FVar24 = (FIdentityFunctor)0x0;
        if (iVar25 <= *(int *)CONCAT44(extraout_var_00,FVar19.Value)) {
          FVar24 = local_288;
        }
        *(int *)(lVar23 + (longlong)piVar30 * 4) = *(int *)CONCAT44(extraout_var_00,FVar19.Value);
        iVar25 = this->Values->ArrayNum;
        uVar29 = 0;
        if ((int)uVar26 < iVar25) {
          uVar29 = ~uVar26 >> 0x1f;
        }
        local_288 = FVar24;
        if ((uVar29 == 0) &&
           (local_2b8 = piVar30, local_2b0 = (ForElementType<int>)(longlong)iVar25,
           bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVar28 = local_268;
        uVar26 = uVar26 + 1;
        piVar30 = (int *)((longlong)piVar30 + 1);
      } while ((longlong)piVar30 < (longlong)local_268);
      if (FVar24 == (FIdentityFunctor)0x0) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        iVar25 = local_268._0_4_;
        if (0 < iVar25) {
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
              if (&local_284 < (int *)((longlong)FVar22 + (longlong)local_4c * 4)) {
                local_298 = 4;
                local_2a0 = (longlong)local_50;
                local_2b0 = (ForElementType<int>)&local_258;
                if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                  local_2b0 = local_258.SecondaryData;
                }
                local_2b8 = &local_284;
                local_2a8 = (longlong)local_4c;
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar18) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_258,&local_4c);
            }
            lVar23 = (longlong)local_50;
            FVar22 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar22 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar22 + lVar23 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar25);
        }
        FVar22 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar22 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneActorReferenceKey>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar22,local_50,local_288,(<lambda_1>)this);
        uVar26 = 0;
        lVar23 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)this->_padding_;
          uVar29 = 0;
          if ((int)uVar26 < local_50) {
            uVar29 = ~uVar26 >> 0x1f;
          }
          if (uVar29 == 0) {
            local_2b8 = (int *)(longlong)(int)uVar26;
            local_2b0 = (ForElementType<int>)(longlong)local_50;
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar22 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar22 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar26,*(int *)((longlong)FVar22 + lVar23 * 4));
          uVar26 = uVar26 + 1;
          lVar23 = lVar23 + 1;
        } while (lVar23 < (longlong)FVar28);
        uVar26 = 0;
        local_280 = (int *)0x0;
        local_278 = (IRetimingInterface *)0x0;
        iVar25 = local_50;
        do {
          uVar29 = ~uVar26 >> 0x1f;
          piVar30 = local_280;
          while( true ) {
            uVar20 = 0;
            if ((int)uVar26 < iVar25) {
              uVar20 = uVar29;
            }
            if (uVar20 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              local_2b8 = (int *)(longlong)(int)uVar26;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar25 = local_50;
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar28 + (longlong)piVar30 * 4) == uVar26) break;
            uVar20 = 0;
            if ((int)uVar26 < iVar25) {
              uVar20 = uVar29;
            }
            if (uVar20 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              local_2b8 = (int *)(longlong)(int)uVar26;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            plVar6 = (longlong *)this->_padding_;
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            iVar25 = (int)plVar6[1];
            uVar20 = *(uint *)((longlong)FVar28 + (longlong)piVar30 * 4);
            piVar31 = (int *)(longlong)(int)uVar20;
            uVar27 = ~uVar20 >> 0x1f;
            uVar21 = 0;
            if ((int)uVar20 < iVar25) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (local_2b8 = piVar31, local_2b0 = (ForElementType<int>)(longlong)iVar25,
               bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            plVar7 = (longlong *)this->_padding_;
            puVar5 = (undefined4 *)(*plVar6 + (longlong)piVar31 * 4);
            iVar25 = (int)plVar7[1];
            uVar21 = 0;
            if ((int)uVar26 < iVar25) {
              uVar21 = uVar29;
            }
            if (uVar21 == 0) {
              local_2b8 = (int *)(longlong)(int)uVar26;
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pTVar17 = local_270;
            lVar23 = *plVar7;
            uVar3 = *(undefined4 *)(lVar23 + (longlong)local_280 * 4);
            *(undefined4 *)(lVar23 + (longlong)local_280 * 4) = *puVar5;
            *puVar5 = uVar3;
            pTVar8 = local_270->Values;
            iVar25 = pTVar8->ArrayNum;
            uVar21 = 0;
            if ((int)uVar20 < iVar25) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (local_2b8 = piVar31, local_2b0 = (ForElementType<int>)(longlong)iVar25,
               bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar9 = pTVar17->Values;
            pFVar1 = (pTVar8->AllocatorInstance).Data + (longlong)piVar31 * 0x28;
            iVar25 = pTVar9->ArrayNum;
            uVar21 = 0;
            if ((int)uVar26 < iVar25) {
              uVar21 = uVar29;
            }
            if (uVar21 == 0) {
              local_2b8 = local_280;
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pFVar10 = (pTVar9->AllocatorInstance).Data;
            uVar12 = *(undefined8 *)(pFVar1 + 8);
            uVar13 = *(undefined8 *)(pFVar10 + (longlong)local_278);
            uVar14 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 8);
            uVar15 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10);
            uVar16 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10 + 8);
            uVar2 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x20);
            *(undefined8 *)(pFVar10 + (longlong)local_278) = *(undefined8 *)pFVar1;
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 8) = uVar12;
            uVar12 = *(undefined8 *)(pFVar1 + 0x18);
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10) = *(undefined8 *)(pFVar1 + 0x10);
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10 + 8) = uVar12;
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x20) = *(undefined8 *)(pFVar1 + 0x20);
            *(undefined8 *)pFVar1 = uVar13;
            *(undefined8 *)(pFVar1 + 8) = uVar14;
            *(undefined8 *)(pFVar1 + 0x10) = uVar15;
            *(undefined8 *)(pFVar1 + 0x18) = uVar16;
            *(undefined8 *)(pFVar1 + 0x20) = uVar2;
            uVar21 = 0;
            if ((int)uVar20 < local_50) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (local_2b8 = piVar31, local_2b0 = (ForElementType<int>)(longlong)local_50,
               bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            piVar30 = local_280;
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            piVar31 = (int *)((longlong)FVar28 + (longlong)piVar31 * 4);
            uVar20 = 0;
            if ((int)uVar26 < local_50) {
              uVar20 = uVar29;
            }
            if (uVar20 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)local_50;
              local_2b8 = local_280;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            iVar25 = *(int *)((longlong)FVar28 + (longlong)piVar30 * 4);
            *(int *)((longlong)FVar28 + (longlong)piVar30 * 4) = *piVar31;
            *piVar31 = iVar25;
            this = local_270;
            iVar25 = local_50;
          }
          local_278 = (IRetimingInterface *)((longlong)local_278 + 0x28);
          local_280 = (int *)((longlong)piVar30 + 1);
          uVar26 = uVar26 + 1;
        } while ((longlong)local_280 < (longlong)local_268);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// RemapTimes @ 1466d15e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::RemapTimes
          (TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> *this,
          IRetimingInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  FKeyHandleLookupTable *this_00;
  longlong *plVar7;
  TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> *pTVar17;
  bool bVar18;
  FFrameNumber FVar19;
  uint uVar20;
  uint uVar21;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar22;
  longlong lVar23;
  FIdentityFunctor FVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ForElementType<int> FVar28;
  uint uVar29;
  int *piVar30;
  int *piVar31;
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
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> *local_270;
  ForElementType<int> local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  ForElementType<int> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  puVar4 = (undefined8 *)this->_padding_;
  iVar25 = *(int *)(puVar4 + 1);
  FVar28 = (ForElementType<int>)(longlong)iVar25;
  if (iVar25 != 0) {
    local_288 = (FIdentityFunctor)0x1;
    local_278 = param_1;
    local_270 = this;
    if (iVar25 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = FVar28;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    puVar5 = (undefined4 *)*puVar4;
    FVar19 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_260);
    *puVar5 = *(undefined4 *)CONCAT44(extraout_var,FVar19.Value);
    iVar25 = this->Values->ArrayNum;
    if (iVar25 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = (ForElementType<int>)(longlong)iVar25;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    uVar26 = 1;
    if (1 < (longlong)FVar28) {
      piVar30 = (int *)&DAT_00000001;
      local_268 = FVar28;
      do {
        plVar6 = (longlong *)this->_padding_;
        iVar25 = (int)plVar6[1];
        uVar29 = 0;
        if ((int)uVar26 < iVar25) {
          uVar29 = ~uVar26 >> 0x1f;
        }
        if (uVar29 == 0) {
          local_2b8 = (int *)(longlong)(int)uVar26;
          local_2b0 = (ForElementType<int>)(longlong)iVar25;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        lVar23 = *plVar6;
        plVar6 = (longlong *)this->_padding_;
        iVar25 = (int)plVar6[1];
        uVar29 = 0;
        if ((int)(uVar26 - 1) < iVar25) {
          uVar29 = -uVar26 >> 0x1f;
        }
        if (uVar29 == 0) {
          local_2b8 = (int *)(longlong)(int)(uVar26 - 1);
          local_2b0 = (ForElementType<int>)(longlong)iVar25;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar25 = *(int *)(*plVar6 + -4 + (longlong)piVar30 * 4);
        FVar19 = UE::MovieScene::IRetimingInterface::RemapTime(local_278,(int)local_25c);
        FVar24 = (FIdentityFunctor)0x0;
        if (iVar25 <= *(int *)CONCAT44(extraout_var_00,FVar19.Value)) {
          FVar24 = local_288;
        }
        *(int *)(lVar23 + (longlong)piVar30 * 4) = *(int *)CONCAT44(extraout_var_00,FVar19.Value);
        iVar25 = this->Values->ArrayNum;
        uVar29 = 0;
        if ((int)uVar26 < iVar25) {
          uVar29 = ~uVar26 >> 0x1f;
        }
        local_288 = FVar24;
        if ((uVar29 == 0) &&
           (local_2b8 = piVar30, local_2b0 = (ForElementType<int>)(longlong)iVar25,
           bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVar28 = local_268;
        uVar26 = uVar26 + 1;
        piVar30 = (int *)((longlong)piVar30 + 1);
      } while ((longlong)piVar30 < (longlong)local_268);
      if (FVar24 == (FIdentityFunctor)0x0) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        iVar25 = local_268._0_4_;
        if (0 < iVar25) {
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
              if (&local_284 < (int *)((longlong)FVar22 + (longlong)local_4c * 4)) {
                local_298 = 4;
                local_2a0 = (longlong)local_50;
                local_2b0 = (ForElementType<int>)&local_258;
                if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                  local_2b0 = local_258.SecondaryData;
                }
                local_2b8 = &local_284;
                local_2a8 = (longlong)local_4c;
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar18) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_258,&local_4c);
            }
            lVar23 = (longlong)local_50;
            FVar22 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar22 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar22 + lVar23 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar25);
        }
        FVar22 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar22 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar22,local_50,local_288,(<lambda_1>)this);
        uVar26 = 0;
        lVar23 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)this->_padding_;
          uVar29 = 0;
          if ((int)uVar26 < local_50) {
            uVar29 = ~uVar26 >> 0x1f;
          }
          if (uVar29 == 0) {
            local_2b8 = (int *)(longlong)(int)uVar26;
            local_2b0 = (ForElementType<int>)(longlong)local_50;
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar22 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar22 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar26,*(int *)((longlong)FVar22 + lVar23 * 4));
          uVar26 = uVar26 + 1;
          lVar23 = lVar23 + 1;
        } while (lVar23 < (longlong)FVar28);
        uVar26 = 0;
        local_280 = (int *)0x0;
        local_278 = (IRetimingInterface *)0x0;
        iVar25 = local_50;
        do {
          uVar29 = ~uVar26 >> 0x1f;
          piVar30 = local_280;
          while( true ) {
            uVar20 = 0;
            if ((int)uVar26 < iVar25) {
              uVar20 = uVar29;
            }
            if (uVar20 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              local_2b8 = (int *)(longlong)(int)uVar26;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar25 = local_50;
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar28 + (longlong)piVar30 * 4) == uVar26) break;
            uVar20 = 0;
            if ((int)uVar26 < iVar25) {
              uVar20 = uVar29;
            }
            if (uVar20 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              local_2b8 = (int *)(longlong)(int)uVar26;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            plVar6 = (longlong *)this->_padding_;
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            iVar25 = (int)plVar6[1];
            uVar20 = *(uint *)((longlong)FVar28 + (longlong)piVar30 * 4);
            piVar31 = (int *)(longlong)(int)uVar20;
            uVar27 = ~uVar20 >> 0x1f;
            uVar21 = 0;
            if ((int)uVar20 < iVar25) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (local_2b8 = piVar31, local_2b0 = (ForElementType<int>)(longlong)iVar25,
               bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            plVar7 = (longlong *)this->_padding_;
            puVar5 = (undefined4 *)(*plVar6 + (longlong)piVar31 * 4);
            iVar25 = (int)plVar7[1];
            uVar21 = 0;
            if ((int)uVar26 < iVar25) {
              uVar21 = uVar29;
            }
            if (uVar21 == 0) {
              local_2b8 = (int *)(longlong)(int)uVar26;
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pTVar17 = local_270;
            lVar23 = *plVar7;
            uVar3 = *(undefined4 *)(lVar23 + (longlong)local_280 * 4);
            *(undefined4 *)(lVar23 + (longlong)local_280 * 4) = *puVar5;
            *puVar5 = uVar3;
            pTVar8 = local_270->Values;
            iVar25 = pTVar8->ArrayNum;
            uVar21 = 0;
            if ((int)uVar20 < iVar25) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (local_2b8 = piVar31, local_2b0 = (ForElementType<int>)(longlong)iVar25,
               bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar9 = pTVar17->Values;
            pFVar1 = (pTVar8->AllocatorInstance).Data + (longlong)piVar31 * 0x28;
            iVar25 = pTVar9->ArrayNum;
            uVar21 = 0;
            if ((int)uVar26 < iVar25) {
              uVar21 = uVar29;
            }
            if (uVar21 == 0) {
              local_2b8 = local_280;
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pFVar10 = (pTVar9->AllocatorInstance).Data;
            uVar12 = *(undefined8 *)(pFVar1 + 8);
            uVar13 = *(undefined8 *)(pFVar10 + (longlong)local_278);
            uVar14 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 8);
            uVar15 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10);
            uVar16 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10 + 8);
            uVar2 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x20);
            *(undefined8 *)(pFVar10 + (longlong)local_278) = *(undefined8 *)pFVar1;
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 8) = uVar12;
            uVar12 = *(undefined8 *)(pFVar1 + 0x18);
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10) = *(undefined8 *)(pFVar1 + 0x10);
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10 + 8) = uVar12;
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x20) = *(undefined8 *)(pFVar1 + 0x20);
            *(undefined8 *)pFVar1 = uVar13;
            *(undefined8 *)(pFVar1 + 8) = uVar14;
            *(undefined8 *)(pFVar1 + 0x10) = uVar15;
            *(undefined8 *)(pFVar1 + 0x18) = uVar16;
            *(undefined8 *)(pFVar1 + 0x20) = uVar2;
            uVar21 = 0;
            if ((int)uVar20 < local_50) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (local_2b8 = piVar31, local_2b0 = (ForElementType<int>)(longlong)local_50,
               bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            piVar30 = local_280;
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            piVar31 = (int *)((longlong)FVar28 + (longlong)piVar31 * 4);
            uVar20 = 0;
            if ((int)uVar26 < local_50) {
              uVar20 = uVar29;
            }
            if (uVar20 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)local_50;
              local_2b8 = local_280;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            iVar25 = *(int *)((longlong)FVar28 + (longlong)piVar30 * 4);
            *(int *)((longlong)FVar28 + (longlong)piVar30 * 4) = *piVar31;
            *piVar31 = iVar25;
            this = local_270;
            iVar25 = local_50;
          }
          local_278 = (IRetimingInterface *)((longlong)local_278 + 0x28);
          local_280 = (int *)((longlong)piVar30 + 1);
          uVar26 = uVar26 + 1;
        } while ((longlong)local_280 < (longlong)local_268);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// RemapTimes @ 1466d1de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FMovieSceneEvent>::RemapTimes
          (TMovieSceneChannelData<FMovieSceneEvent> *this,IRetimingInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  FKeyHandleLookupTable *this_00;
  longlong *plVar7;
  TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  TMovieSceneChannelData<FMovieSceneEvent> *pTVar17;
  bool bVar18;
  FFrameNumber FVar19;
  uint uVar20;
  uint uVar21;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar22;
  longlong lVar23;
  FIdentityFunctor FVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ForElementType<int> FVar28;
  uint uVar29;
  int *piVar30;
  int *piVar31;
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
  TMovieSceneChannelData<FMovieSceneEvent> *local_270;
  ForElementType<int> local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  ForElementType<int> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  puVar4 = (undefined8 *)this->_padding_;
  iVar25 = *(int *)(puVar4 + 1);
  FVar28 = (ForElementType<int>)(longlong)iVar25;
  if (iVar25 != 0) {
    local_288 = (FIdentityFunctor)0x1;
    local_278 = param_1;
    local_270 = this;
    if (iVar25 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = FVar28;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    puVar5 = (undefined4 *)*puVar4;
    FVar19 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_260);
    *puVar5 = *(undefined4 *)CONCAT44(extraout_var,FVar19.Value);
    iVar25 = this->Values->ArrayNum;
    if (iVar25 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = (ForElementType<int>)(longlong)iVar25;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    uVar26 = 1;
    if (1 < (longlong)FVar28) {
      piVar30 = (int *)&DAT_00000001;
      local_268 = FVar28;
      do {
        plVar6 = (longlong *)this->_padding_;
        iVar25 = (int)plVar6[1];
        uVar29 = 0;
        if ((int)uVar26 < iVar25) {
          uVar29 = ~uVar26 >> 0x1f;
        }
        if (uVar29 == 0) {
          local_2b8 = (int *)(longlong)(int)uVar26;
          local_2b0 = (ForElementType<int>)(longlong)iVar25;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        lVar23 = *plVar6;
        plVar6 = (longlong *)this->_padding_;
        iVar25 = (int)plVar6[1];
        uVar29 = 0;
        if ((int)(uVar26 - 1) < iVar25) {
          uVar29 = -uVar26 >> 0x1f;
        }
        if (uVar29 == 0) {
          local_2b8 = (int *)(longlong)(int)(uVar26 - 1);
          local_2b0 = (ForElementType<int>)(longlong)iVar25;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar25 = *(int *)(*plVar6 + -4 + (longlong)piVar30 * 4);
        FVar19 = UE::MovieScene::IRetimingInterface::RemapTime(local_278,(int)local_25c);
        FVar24 = (FIdentityFunctor)0x0;
        if (iVar25 <= *(int *)CONCAT44(extraout_var_00,FVar19.Value)) {
          FVar24 = local_288;
        }
        *(int *)(lVar23 + (longlong)piVar30 * 4) = *(int *)CONCAT44(extraout_var_00,FVar19.Value);
        iVar25 = this->Values->ArrayNum;
        uVar29 = 0;
        if ((int)uVar26 < iVar25) {
          uVar29 = ~uVar26 >> 0x1f;
        }
        local_288 = FVar24;
        if ((uVar29 == 0) &&
           (local_2b8 = piVar30, local_2b0 = (ForElementType<int>)(longlong)iVar25,
           bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar18)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVar28 = local_268;
        uVar26 = uVar26 + 1;
        piVar30 = (int *)((longlong)piVar30 + 1);
      } while ((longlong)piVar30 < (longlong)local_268);
      if (FVar24 == (FIdentityFunctor)0x0) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        iVar25 = local_268._0_4_;
        if (0 < iVar25) {
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
              if (&local_284 < (int *)((longlong)FVar22 + (longlong)local_4c * 4)) {
                local_298 = 4;
                local_2a0 = (longlong)local_50;
                local_2b0 = (ForElementType<int>)&local_258;
                if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                  local_2b0 = local_258.SecondaryData;
                }
                local_2b8 = &local_284;
                local_2a8 = (longlong)local_4c;
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar18) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_258,&local_4c);
            }
            lVar23 = (longlong)local_50;
            FVar22 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar22 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar22 + lVar23 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar25);
        }
        FVar22 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar22 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneEvent>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar22,local_50,local_288,(<lambda_1>)this);
        uVar26 = 0;
        lVar23 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)this->_padding_;
          uVar29 = 0;
          if ((int)uVar26 < local_50) {
            uVar29 = ~uVar26 >> 0x1f;
          }
          if (uVar29 == 0) {
            local_2b8 = (int *)(longlong)(int)uVar26;
            local_2b0 = (ForElementType<int>)(longlong)local_50;
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar22 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar22 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar26,*(int *)((longlong)FVar22 + lVar23 * 4));
          uVar26 = uVar26 + 1;
          lVar23 = lVar23 + 1;
        } while (lVar23 < (longlong)FVar28);
        uVar26 = 0;
        local_280 = (int *)0x0;
        local_278 = (IRetimingInterface *)0x0;
        iVar25 = local_50;
        do {
          uVar29 = ~uVar26 >> 0x1f;
          piVar30 = local_280;
          while( true ) {
            uVar20 = 0;
            if ((int)uVar26 < iVar25) {
              uVar20 = uVar29;
            }
            if (uVar20 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              local_2b8 = (int *)(longlong)(int)uVar26;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar25 = local_50;
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar28 + (longlong)piVar30 * 4) == uVar26) break;
            uVar20 = 0;
            if ((int)uVar26 < iVar25) {
              uVar20 = uVar29;
            }
            if (uVar20 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              local_2b8 = (int *)(longlong)(int)uVar26;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            plVar6 = (longlong *)this->_padding_;
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            iVar25 = (int)plVar6[1];
            uVar20 = *(uint *)((longlong)FVar28 + (longlong)piVar30 * 4);
            piVar31 = (int *)(longlong)(int)uVar20;
            uVar27 = ~uVar20 >> 0x1f;
            uVar21 = 0;
            if ((int)uVar20 < iVar25) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (local_2b8 = piVar31, local_2b0 = (ForElementType<int>)(longlong)iVar25,
               bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            plVar7 = (longlong *)this->_padding_;
            puVar5 = (undefined4 *)(*plVar6 + (longlong)piVar31 * 4);
            iVar25 = (int)plVar7[1];
            uVar21 = 0;
            if ((int)uVar26 < iVar25) {
              uVar21 = uVar29;
            }
            if (uVar21 == 0) {
              local_2b8 = (int *)(longlong)(int)uVar26;
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pTVar17 = local_270;
            lVar23 = *plVar7;
            uVar3 = *(undefined4 *)(lVar23 + (longlong)local_280 * 4);
            *(undefined4 *)(lVar23 + (longlong)local_280 * 4) = *puVar5;
            *puVar5 = uVar3;
            pTVar8 = local_270->Values;
            iVar25 = pTVar8->ArrayNum;
            uVar21 = 0;
            if ((int)uVar20 < iVar25) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (local_2b8 = piVar31, local_2b0 = (ForElementType<int>)(longlong)iVar25,
               bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar9 = pTVar17->Values;
            pFVar1 = (pTVar8->AllocatorInstance).Data + (longlong)piVar31 * 0x28;
            iVar25 = pTVar9->ArrayNum;
            uVar21 = 0;
            if ((int)uVar26 < iVar25) {
              uVar21 = uVar29;
            }
            if (uVar21 == 0) {
              local_2b8 = local_280;
              local_2b0 = (ForElementType<int>)(longlong)iVar25;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pFVar10 = (pTVar9->AllocatorInstance).Data;
            uVar12 = *(undefined8 *)(pFVar1 + 8);
            uVar13 = *(undefined8 *)(pFVar10 + (longlong)local_278);
            uVar14 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 8);
            uVar15 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10);
            uVar16 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10 + 8);
            uVar2 = *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x20);
            *(undefined8 *)(pFVar10 + (longlong)local_278) = *(undefined8 *)pFVar1;
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 8) = uVar12;
            uVar12 = *(undefined8 *)(pFVar1 + 0x18);
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10) = *(undefined8 *)(pFVar1 + 0x10);
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x10 + 8) = uVar12;
            *(undefined8 *)(pFVar10 + (longlong)local_278 + 0x20) = *(undefined8 *)(pFVar1 + 0x20);
            *(undefined8 *)pFVar1 = uVar13;
            *(undefined8 *)(pFVar1 + 8) = uVar14;
            *(undefined8 *)(pFVar1 + 0x10) = uVar15;
            *(undefined8 *)(pFVar1 + 0x18) = uVar16;
            *(undefined8 *)(pFVar1 + 0x20) = uVar2;
            uVar21 = 0;
            if ((int)uVar20 < local_50) {
              uVar21 = uVar27;
            }
            if ((uVar21 == 0) &&
               (local_2b8 = piVar31, local_2b0 = (ForElementType<int>)(longlong)local_50,
               bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            piVar30 = local_280;
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            piVar31 = (int *)((longlong)FVar28 + (longlong)piVar31 * 4);
            uVar20 = 0;
            if ((int)uVar26 < local_50) {
              uVar20 = uVar29;
            }
            if (uVar20 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)local_50;
              local_2b8 = local_280;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            FVar28 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_258.SecondaryData;
            }
            iVar25 = *(int *)((longlong)FVar28 + (longlong)piVar30 * 4);
            *(int *)((longlong)FVar28 + (longlong)piVar30 * 4) = *piVar31;
            *piVar31 = iVar25;
            this = local_270;
            iVar25 = local_50;
          }
          local_278 = (IRetimingInterface *)((longlong)local_278 + 0x28);
          local_280 = (int *)((longlong)piVar30 + 1);
          uVar26 = uVar26 + 1;
        } while ((longlong)local_280 < (longlong)local_268);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// RemapTimes @ 1466d25e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FString>::RemapTimes
          (TMovieSceneChannelData<FString> *this,IRetimingInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  FKeyHandleLookupTable *this_00;
  longlong *plVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  FFrameNumber FVar14;
  uint uVar15;
  uint uVar16;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar17;
  longlong lVar18;
  FIdentityFunctor FVar19;
  uint uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  ForElementType<int> FVar24;
  <lambda_1> <Var25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
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
  iVar23 = *(int *)(puVar3 + 1);
  FVar24 = (ForElementType<int>)(longlong)iVar23;
  if (iVar23 != 0) {
    local_288 = (FIdentityFunctor)0x1;
    local_278.__this = this;
    if (iVar23 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = FVar24;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    puVar4 = (undefined4 *)*puVar3;
    FVar14 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_260);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,FVar14.Value);
    iVar23 = this->Values->ArrayNum;
    if (iVar23 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = (ForElementType<int>)(longlong)iVar23;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    uVar20 = 1;
    if (1 < (longlong)FVar24) {
      piVar28 = (int *)&DAT_00000001;
      local_268 = FVar24;
      do {
        plVar5 = (longlong *)this->_padding_;
        iVar23 = (int)plVar5[1];
        uVar21 = 0;
        if ((int)uVar20 < iVar23) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_2b8 = (int *)(longlong)(int)uVar20;
          local_2b0 = (ForElementType<int>)(longlong)iVar23;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar18 = *plVar5;
        plVar5 = (longlong *)(local_278.__this)->_padding_;
        iVar23 = (int)plVar5[1];
        uVar21 = 0;
        if ((int)(uVar20 - 1) < iVar23) {
          uVar21 = -uVar20 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_2b8 = (int *)(longlong)(int)(uVar20 - 1);
          local_2b0 = (ForElementType<int>)(longlong)iVar23;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar23 = *(int *)(*plVar5 + -4 + (longlong)piVar28 * 4);
        FVar14 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_25c);
        FVar19 = (FIdentityFunctor)0x0;
        if (iVar23 <= *(int *)CONCAT44(extraout_var_00,FVar14.Value)) {
          FVar19 = local_288;
        }
        *(int *)(lVar18 + (longlong)piVar28 * 4) = *(int *)CONCAT44(extraout_var_00,FVar14.Value);
        iVar23 = (local_278.__this)->Values->ArrayNum;
        uVar21 = 0;
        if ((int)uVar20 < iVar23) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        local_288 = FVar19;
        if ((uVar21 == 0) &&
           (local_2b8 = piVar28, local_2b0 = (ForElementType<int>)(longlong)iVar23,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar24 = local_268;
        <Var25.__this = local_278.__this;
        uVar20 = uVar20 + 1;
        piVar28 = (int *)((longlong)piVar28 + 1);
        this = local_278.__this;
      } while ((longlong)piVar28 < (longlong)local_268);
      iVar23 = local_268._0_4_;
      if (FVar19 == (FIdentityFunctor)0x0) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        if (0 < iVar23) {
          do {
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            if ((ulonglong)FVar17 <= &local_284) {
              FVar17 = (ForElementType<int>)&local_258;
              if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                FVar17 = local_258.SecondaryData;
              }
              if (&local_284 < (int *)((longlong)FVar17 + (longlong)local_4c * 4)) {
                local_298 = 4;
                local_2a0 = (longlong)local_50;
                local_2b0 = (ForElementType<int>)&local_258;
                if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                  local_2b0 = local_258.SecondaryData;
                }
                local_2b8 = &local_284;
                local_2a8 = (longlong)local_4c;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar13) {
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
            lVar18 = (longlong)local_50;
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar17 + lVar18 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar23);
        }
        FVar17 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar17 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FString>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar17,local_50,local_288,<Var25);
        uVar20 = 0;
        lVar18 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)(<Var25.__this)->_padding_;
          uVar21 = 0;
          if ((int)uVar20 < local_50) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if (uVar21 == 0) {
            local_2b8 = (int *)(longlong)(int)uVar20;
            local_2b0 = (ForElementType<int>)(longlong)local_50;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FVar17 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar17 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar20,*(int *)((longlong)FVar17 + lVar18 * 4));
          uVar20 = uVar20 + 1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < (longlong)FVar24);
        uVar20 = 0;
        local_280 = (int *)0x0;
        local_270 = 0;
        iVar23 = local_50;
        do {
          uVar21 = ~uVar20 >> 0x1f;
          piVar28 = local_280;
          while( true ) {
            uVar15 = 0;
            if ((int)uVar20 < iVar23) {
              uVar15 = uVar21;
            }
            if (uVar15 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              local_2b8 = (int *)(longlong)(int)uVar20;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar23 = local_50;
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar17 + (longlong)piVar28 * 4) == uVar20) break;
            uVar15 = 0;
            if ((int)uVar20 < iVar23) {
              uVar15 = uVar21;
            }
            if (uVar15 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              local_2b8 = (int *)(longlong)(int)uVar20;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            plVar5 = (longlong *)(<Var25.__this)->_padding_;
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            iVar23 = (int)plVar5[1];
            uVar15 = *(uint *)((longlong)FVar17 + (longlong)piVar28 * 4);
            piVar26 = (int *)(longlong)(int)uVar15;
            uVar27 = ~uVar15 >> 0x1f;
            uVar16 = 0;
            if ((int)uVar15 < iVar23) {
              uVar16 = uVar27;
            }
            if ((uVar16 == 0) &&
               (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)iVar23,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            plVar6 = (longlong *)(<Var25.__this)->_padding_;
            puVar4 = (undefined4 *)(*plVar5 + (longlong)piVar26 * 4);
            iVar23 = (int)plVar6[1];
            uVar16 = 0;
            if ((int)uVar20 < iVar23) {
              uVar16 = uVar21;
            }
            if (uVar16 == 0) {
              local_2b8 = (int *)(longlong)(int)uVar20;
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            lVar18 = *plVar6;
            uVar2 = *(undefined4 *)(lVar18 + (longlong)local_280 * 4);
            *(undefined4 *)(lVar18 + (longlong)local_280 * 4) = *puVar4;
            *puVar4 = uVar2;
            pTVar7 = (local_278.__this)->Values;
            iVar23 = pTVar7->ArrayNum;
            uVar16 = 0;
            if ((int)uVar15 < iVar23) {
              uVar16 = uVar27;
            }
            if ((uVar16 == 0) &&
               (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)iVar23,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar22 = (pTVar7->AllocatorInstance).Data + (longlong)piVar26 * 0x10;
            pTVar7 = (local_278.__this)->Values;
            iVar23 = pTVar7->ArrayNum;
            uVar16 = 0;
            if ((int)uVar20 < iVar23) {
              uVar16 = uVar21;
            }
            if (uVar16 == 0) {
              local_2b8 = local_280;
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            pFVar8 = (pTVar7->AllocatorInstance).Data;
            uVar10 = *(undefined8 *)(pFVar22 + 8);
            pFVar1 = pFVar8 + local_270;
            uVar11 = *(undefined8 *)pFVar1;
            uVar12 = *(undefined8 *)(pFVar1 + 8);
            pFVar8 = pFVar8 + local_270;
            *(undefined8 *)pFVar8 = *(undefined8 *)pFVar22;
            *(undefined8 *)(pFVar8 + 8) = uVar10;
            *(undefined8 *)pFVar22 = uVar11;
            *(undefined8 *)(pFVar22 + 8) = uVar12;
            uVar16 = 0;
            if ((int)uVar15 < local_50) {
              uVar16 = uVar27;
            }
            if ((uVar16 == 0) &&
               (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)local_50,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            piVar28 = local_280;
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            piVar26 = (int *)((longlong)FVar17 + (longlong)piVar26 * 4);
            uVar15 = 0;
            if ((int)uVar20 < local_50) {
              uVar15 = uVar21;
            }
            if (uVar15 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)local_50;
              local_2b8 = local_280;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            iVar23 = *(int *)((longlong)FVar17 + (longlong)piVar28 * 4);
            *(int *)((longlong)FVar17 + (longlong)piVar28 * 4) = *piVar26;
            *piVar26 = iVar23;
            <Var25.__this = local_278.__this;
            iVar23 = local_50;
          }
          local_270 = local_270 + 0x10;
          local_280 = (int *)((longlong)piVar28 + 1);
          uVar20 = uVar20 + 1;
        } while ((longlong)local_280 < (longlong)FVar24);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// RemapTimes @ 1466d2da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FText>::RemapTimes
          (TMovieSceneChannelData<FText> *this,IRetimingInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  FKeyHandleLookupTable *this_00;
  longlong *plVar6;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  FFrameNumber FVar14;
  uint uVar15;
  uint uVar16;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar17;
  longlong lVar18;
  FIdentityFunctor FVar19;
  uint uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  ForElementType<int> FVar24;
  <lambda_1> <Var25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
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
  iVar23 = *(int *)(puVar3 + 1);
  FVar24 = (ForElementType<int>)(longlong)iVar23;
  if (iVar23 != 0) {
    local_288 = (FIdentityFunctor)0x1;
    local_278.__this = this;
    if (iVar23 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = FVar24;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    puVar4 = (undefined4 *)*puVar3;
    FVar14 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_260);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,FVar14.Value);
    iVar23 = this->Values->ArrayNum;
    if (iVar23 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = (ForElementType<int>)(longlong)iVar23;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    uVar20 = 1;
    if (1 < (longlong)FVar24) {
      piVar28 = (int *)&DAT_00000001;
      local_268 = FVar24;
      do {
        plVar5 = (longlong *)this->_padding_;
        iVar23 = (int)plVar5[1];
        uVar21 = 0;
        if ((int)uVar20 < iVar23) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_2b8 = (int *)(longlong)(int)uVar20;
          local_2b0 = (ForElementType<int>)(longlong)iVar23;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar18 = *plVar5;
        plVar5 = (longlong *)(local_278.__this)->_padding_;
        iVar23 = (int)plVar5[1];
        uVar21 = 0;
        if ((int)(uVar20 - 1) < iVar23) {
          uVar21 = -uVar20 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_2b8 = (int *)(longlong)(int)(uVar20 - 1);
          local_2b0 = (ForElementType<int>)(longlong)iVar23;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar23 = *(int *)(*plVar5 + -4 + (longlong)piVar28 * 4);
        FVar14 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_25c);
        FVar19 = (FIdentityFunctor)0x0;
        if (iVar23 <= *(int *)CONCAT44(extraout_var_00,FVar14.Value)) {
          FVar19 = local_288;
        }
        *(int *)(lVar18 + (longlong)piVar28 * 4) = *(int *)CONCAT44(extraout_var_00,FVar14.Value);
        iVar23 = (local_278.__this)->Values->ArrayNum;
        uVar21 = 0;
        if ((int)uVar20 < iVar23) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        local_288 = FVar19;
        if ((uVar21 == 0) &&
           (local_2b8 = piVar28, local_2b0 = (ForElementType<int>)(longlong)iVar23,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar24 = local_268;
        <Var25.__this = local_278.__this;
        uVar20 = uVar20 + 1;
        piVar28 = (int *)((longlong)piVar28 + 1);
        this = local_278.__this;
      } while ((longlong)piVar28 < (longlong)local_268);
      iVar23 = local_268._0_4_;
      if (FVar19 == (FIdentityFunctor)0x0) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        if (0 < iVar23) {
          do {
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            if ((ulonglong)FVar17 <= &local_284) {
              FVar17 = (ForElementType<int>)&local_258;
              if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                FVar17 = local_258.SecondaryData;
              }
              if (&local_284 < (int *)((longlong)FVar17 + (longlong)local_4c * 4)) {
                local_298 = 4;
                local_2a0 = (longlong)local_50;
                local_2b0 = (ForElementType<int>)&local_258;
                if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                  local_2b0 = local_258.SecondaryData;
                }
                local_2b8 = &local_284;
                local_2a8 = (longlong)local_4c;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar13) {
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
            lVar18 = (longlong)local_50;
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar17 + lVar18 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar23);
        }
        FVar17 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar17 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FText>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar17,local_50,local_288,<Var25);
        uVar20 = 0;
        lVar18 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)(<Var25.__this)->_padding_;
          uVar21 = 0;
          if ((int)uVar20 < local_50) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if (uVar21 == 0) {
            local_2b8 = (int *)(longlong)(int)uVar20;
            local_2b0 = (ForElementType<int>)(longlong)local_50;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FVar17 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar17 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar20,*(int *)((longlong)FVar17 + lVar18 * 4));
          uVar20 = uVar20 + 1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < (longlong)FVar24);
        uVar20 = 0;
        local_280 = (int *)0x0;
        local_270 = 0;
        iVar23 = local_50;
        do {
          uVar21 = ~uVar20 >> 0x1f;
          piVar28 = local_280;
          while( true ) {
            uVar15 = 0;
            if ((int)uVar20 < iVar23) {
              uVar15 = uVar21;
            }
            if (uVar15 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              local_2b8 = (int *)(longlong)(int)uVar20;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar23 = local_50;
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar17 + (longlong)piVar28 * 4) == uVar20) break;
            uVar15 = 0;
            if ((int)uVar20 < iVar23) {
              uVar15 = uVar21;
            }
            if (uVar15 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              local_2b8 = (int *)(longlong)(int)uVar20;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            plVar5 = (longlong *)(<Var25.__this)->_padding_;
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            iVar23 = (int)plVar5[1];
            uVar15 = *(uint *)((longlong)FVar17 + (longlong)piVar28 * 4);
            piVar26 = (int *)(longlong)(int)uVar15;
            uVar27 = ~uVar15 >> 0x1f;
            uVar16 = 0;
            if ((int)uVar15 < iVar23) {
              uVar16 = uVar27;
            }
            if ((uVar16 == 0) &&
               (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)iVar23,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            plVar6 = (longlong *)(<Var25.__this)->_padding_;
            puVar4 = (undefined4 *)(*plVar5 + (longlong)piVar26 * 4);
            iVar23 = (int)plVar6[1];
            uVar16 = 0;
            if ((int)uVar20 < iVar23) {
              uVar16 = uVar21;
            }
            if (uVar16 == 0) {
              local_2b8 = (int *)(longlong)(int)uVar20;
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            lVar18 = *plVar6;
            uVar2 = *(undefined4 *)(lVar18 + (longlong)local_280 * 4);
            *(undefined4 *)(lVar18 + (longlong)local_280 * 4) = *puVar4;
            *puVar4 = uVar2;
            pTVar7 = (local_278.__this)->Values;
            iVar23 = pTVar7->ArrayNum;
            uVar16 = 0;
            if ((int)uVar15 < iVar23) {
              uVar16 = uVar27;
            }
            if ((uVar16 == 0) &&
               (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)iVar23,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar22 = (pTVar7->AllocatorInstance).Data + (longlong)piVar26 * 0x10;
            pTVar7 = (local_278.__this)->Values;
            iVar23 = pTVar7->ArrayNum;
            uVar16 = 0;
            if ((int)uVar20 < iVar23) {
              uVar16 = uVar21;
            }
            if (uVar16 == 0) {
              local_2b8 = local_280;
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            pFVar8 = (pTVar7->AllocatorInstance).Data;
            uVar10 = *(undefined8 *)(pFVar22 + 8);
            pFVar1 = pFVar8 + local_270;
            uVar11 = *(undefined8 *)pFVar1;
            uVar12 = *(undefined8 *)(pFVar1 + 8);
            pFVar8 = pFVar8 + local_270;
            *(undefined8 *)pFVar8 = *(undefined8 *)pFVar22;
            *(undefined8 *)(pFVar8 + 8) = uVar10;
            *(undefined8 *)pFVar22 = uVar11;
            *(undefined8 *)(pFVar22 + 8) = uVar12;
            uVar16 = 0;
            if ((int)uVar15 < local_50) {
              uVar16 = uVar27;
            }
            if ((uVar16 == 0) &&
               (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)local_50,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            piVar28 = local_280;
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            piVar26 = (int *)((longlong)FVar17 + (longlong)piVar26 * 4);
            uVar15 = 0;
            if ((int)uVar20 < local_50) {
              uVar15 = uVar21;
            }
            if (uVar15 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)local_50;
              local_2b8 = local_280;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            iVar23 = *(int *)((longlong)FVar17 + (longlong)piVar28 * 4);
            *(int *)((longlong)FVar17 + (longlong)piVar28 * 4) = *piVar26;
            *piVar26 = iVar23;
            <Var25.__this = local_278.__this;
            iVar23 = local_50;
          }
          local_270 = local_270 + 0x10;
          local_280 = (int *)((longlong)piVar28 + 1);
          uVar20 = uVar20 + 1;
        } while ((longlong)local_280 < (longlong)FVar24);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// SetKeyTimes @ 1466f8fa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneActorReferenceKey>::SetKeyTimes
          (TMovieSceneChannelData<FMovieSceneActorReferenceKey> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FFrameNumber_const_,int> *param_2)

{
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  FMovieSceneActorReferenceKey local_58;
  
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
    lVar11 = 0;
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
      uVar5 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar9].Index);
      lVar10 = (longlong)(int)uVar5;
      if (uVar5 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
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
        uVar6 = FMovieSceneChannelData::MoveKeyInternal
                          ((FMovieSceneChannelData *)this,uVar5,
                           (FFrameNumber)*(int *)((longlong)&param_2->DataPtr->Value + lVar11));
        if (uVar6 != uVar5) {
          pTVar1 = this->Values;
          uVar7 = 0;
          if ((int)uVar5 < pTVar1->ArrayNum) {
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
          pFVar2 = (pTVar1->AllocatorInstance).Data;
          local_58.Object.Guid._0_8_ = *(undefined8 *)(pFVar2 + lVar10 * 0x28);
          local_58.Object.Guid._8_8_ = *(undefined8 *)(pFVar2 + lVar10 * 0x28 + 8);
          local_58.Object._16_8_ = *(undefined8 *)(pFVar2 + lVar10 * 0x28 + 0x10);
          local_58.ComponentName = *(FName *)(pFVar2 + lVar10 * 0x28 + 0x10 + 8);
          local_58.SocketName = *(FName *)(pFVar2 + lVar10 * 0x28 + 0x20);
          TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this->Values,uVar5,No);
          TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_>::Insert
                    (this->Values,&local_58,uVar6);
        }
      }
      iVar8 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 4;
    } while ((int)uVar9 < iVar8);
  }
  return;
}

// UpdateOrAddKey @ 146702470

FKeyHandle __thiscall
TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
          (TMovieSceneChannelData<FMovieSceneFloatValue> *this,FFrameNumber param_1,
          FMovieSceneFloatValue *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FFrameNumber FVar12;
  FScriptContainerElement *in_R9;
  uint uVar13;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FVar12.Value = (int)param_2;
  uVar7 = FMovieSceneChannelData::FindKey((FMovieSceneChannelData *)this,FVar12,(FFrameNumber)0x0);
  if (uVar7 == 0xffffffff) {
    iVar8 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar12);
    pTVar3 = this->Values;
    pFVar11 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar11 <= in_R9) && (in_R9 < pFVar11 + (longlong)pTVar3->ArrayMax * 0x1c)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FKeyHandle)uVar7;
    }
    iVar9 = pTVar3->ArrayNum;
    if (iVar9 == pTVar3->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x41c,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
    }
    pFVar11 = (pTVar3->AllocatorInstance).Data;
    pTVar3->ArrayNum = iVar9 + 1;
    lVar10 = (longlong)iVar8 * 0x1c;
    pFVar11 = pFVar11 + lVar10;
    memmove(pFVar11 + 0x1c,pFVar11,(longlong)(iVar9 - iVar8) * 0x1c);
    pFVar11 = (pTVar3->AllocatorInstance).Data;
    uVar1 = *(undefined8 *)(in_R9 + 8);
    *(undefined8 *)(pFVar11 + lVar10) = *(undefined8 *)in_R9;
    *(undefined8 *)(pFVar11 + lVar10 + 8) = uVar1;
    *(undefined8 *)(pFVar11 + lVar10 + 0x10) = *(undefined8 *)(in_R9 + 0x10);
    *(undefined4 *)(pFVar11 + lVar10 + 0x18) = *(undefined4 *)(in_R9 + 0x18);
    if ((this->_padding_ != 0) &&
       (bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           (this->_padding_ + 8)), bVar6)) {
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = 0;
      local_50.ArrayMax = 0;
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_50.AllocatorInstance,&local_50.ArrayMax);
      local_50.ArrayNum = iVar9 + 1;
      *(ulonglong *)(local_50.AllocatorInstance.Data + (longlong)iVar9 * 8) =
           CONCAT44(FVar12.Value,iVar8);
      TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                  (FMovieSceneChannel *)this->_padding_,&local_50);
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
    }
  }
  else {
    pTVar3 = this->Values;
    local_40 = *(undefined4 *)in_R9;
    uStack_3c = *(undefined4 *)(in_R9 + 4);
    uStack_38 = *(undefined4 *)(in_R9 + 8);
    uStack_34 = *(undefined4 *)(in_R9 + 0xc);
    uVar2 = *(undefined4 *)(in_R9 + 0x18);
    uVar1 = *(undefined8 *)(in_R9 + 0x10);
    uVar13 = 0;
    if ((int)uVar7 < pTVar3->ArrayNum) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FKeyHandle)uVar7;
    }
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    lVar10 = (longlong)(int)uVar7 * 0x1c;
    pFVar11 = pFVar4 + lVar10;
    *(undefined4 *)pFVar11 = local_40;
    *(undefined4 *)(pFVar11 + 4) = uStack_3c;
    *(undefined4 *)(pFVar11 + 8) = uStack_38;
    *(undefined4 *)(pFVar11 + 0xc) = uStack_34;
    *(undefined8 *)(pFVar4 + lVar10 + 0x10) = uVar1;
    *(undefined4 *)(pFVar4 + lVar10 + 0x18) = uVar2;
  }
  FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)this,param_1.Value);
  return (FKeyHandle)param_1.Value;
}

// operator() @ 14676e010

bool __thiscall
`TMovieSceneChannelData<FEventPayload>::RemapTimes'::__l12::<lambda_1>::operator()
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

// DeleteKeys @ 146787710

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FEventPayload>::DeleteKeys
          (TMovieSceneChannelData<FEventPayload> *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  void *_Dst;
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_38;
  
  iVar7 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    do {
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
      uVar5 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar8].Index);
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
          uVar1 = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
          local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.ArrayNum = 0;
          local_38.ArrayMax = 0;
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_38.AllocatorInstance,&local_38.ArrayMax);
          local_38.ArrayNum = iVar7 + 1;
          *(ulonglong *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8) =
               CONCAT44(uVar1,uVar5);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_38);
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
        }
        plVar2 = (longlong *)this->_padding_;
        uVar6 = 0;
        if ((int)uVar5 < (int)plVar2[1]) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (void *)(*plVar2 + (longlong)(int)uVar5 * 4);
        iVar7 = (int)plVar2[1] + ~uVar5;
        if (iVar7 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar7 << 2);
        }
        *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
        TArray<FEventPayload,TSizedDefaultAllocator<32>_>::RemoveAt(this->Values,uVar5,No);
        if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// DeleteKeysFrom @ 146787a10

void __thiscall
TMovieSceneChannelData<FEventPayload>::DeleteKeysFrom
          (TMovieSceneChannelData<FEventPayload> *this,FFrameNumber param_1,bool param_2)

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
LAB_146787b5f:
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
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_146787b5f;
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

// DuplicateKeys @ 1467899a0

void __thiscall
TMovieSceneChannelData<FEventPayload>::DuplicateKeys
          (TMovieSceneChannelData<FEventPayload> *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  undefined4 uVar1;
  FFrameNumber FVar2;
  TArray<FEventPayload,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *_Src;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FKeyHandle FVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar12;
  uint uVar13;
  size_t _Size;
  longlong lVar14;
  longlong local_b8;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_b0;
  int local_98;
  int iStack_94;
  undefined1 local_90 [8];
  FEventPayload local_88;
  
  iVar11 = param_1->ArrayNum;
  uVar13 = 0;
  if (0 < iVar11) {
    local_b8 = 0;
    do {
      uVar12 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < iVar11) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar13].Index);
      lVar14 = (longlong)(int)uVar8;
      if (uVar8 == 0xffffffff) {
        FVar9 = FKeyHandle::Invalid();
        uVar1 = *(undefined4 *)CONCAT44(extraout_var,FVar9.Index);
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((longlong)&param_2->DataPtr->Index + local_b8) = uVar1;
      }
      else {
        pTVar3 = this->Values;
        uVar10 = 0;
        if ((int)uVar8 < pTVar3->ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        local_88.EventName = *(FName *)(pFVar4 + lVar14 * 0x48);
        FSoftObjectPath::FSoftObjectPath
                  (&local_88.Parameters.StructType,(FSoftObjectPath *)(pFVar4 + lVar14 * 0x48 + 8));
        local_88.Parameters.PackageFileVersion =
             *(FPackageFileVersion *)(pFVar4 + lVar14 * 0x48 + 0x28);
        local_88.Parameters.LicenseePackageFileVersion = *(int *)(pFVar4 + lVar14 * 0x48 + 0x30);
        local_88.Parameters.StructBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Parameters.StructBytes.ArrayNum = *(int *)(pFVar4 + lVar14 * 0x48 + 0x40);
        _Size = (size_t)local_88.Parameters.StructBytes.ArrayNum;
        _Src = *(void **)(pFVar4 + lVar14 * 0x48 + 0x38);
        if (local_88.Parameters.StructBytes.ArrayNum == 0) {
          local_88.Parameters.StructBytes.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_88.Parameters.StructBytes.ArrayNum,0,
                     &local_88.Parameters.StructBytes.AllocatorInstance,
                     local_88.Parameters.StructBytes.ArrayNum,
                     &local_88.Parameters.StructBytes.ArrayMax);
          memcpy(local_88.Parameters.StructBytes.AllocatorInstance.Data,_Src,_Size);
        }
        plVar5 = (longlong *)this->_padding_;
        uVar10 = 0;
        if ((int)uVar8 < (int)plVar5[1]) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2.Value = *(int *)(*plVar5 + lVar14 * 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar2);
        TArray<FEventPayload,TSizedDefaultAllocator<32>_>::Insert(this->Values,&local_88,iVar11);
        if ((this->_padding_ != 0) &&
           (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar7)) {
          local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b0.ArrayNum = 0;
          local_b0.ArrayMax = 0;
          local_98 = iVar11;
          iStack_94 = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
          local_b0.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_b0.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_94,local_98);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_b0);
          if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.AllocatorInstance.Data);
          }
        }
        FVar9 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)this,(int)local_90);
        uVar1 = *(undefined4 *)CONCAT44(extraout_var_00,FVar9.Index);
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((longlong)&param_2->DataPtr->Index + local_b8) = uVar1;
        if (local_88.Parameters.StructBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_88.Parameters.StructBytes.AllocatorInstance.Data);
        }
        if (local_88.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data);
        }
      }
      local_b8 = local_b8 + 4;
      uVar13 = uVar13 + 1;
      iVar11 = param_1->ArrayNum;
    } while ((int)uVar13 < iVar11);
  }
  return;
}

// RemapTimes @ 1467b7480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FEventPayload>::RemapTimes
          (TMovieSceneChannelData<FEventPayload> *this,IRetimingInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  FKeyHandleLookupTable *this_00;
  longlong *plVar7;
  TArray<FEventPayload,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FEventPayload,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  TMovieSceneChannelData<FEventPayload> *pTVar21;
  bool bVar22;
  FFrameNumber FVar23;
  uint uVar24;
  uint uVar25;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar26;
  longlong lVar27;
  FIdentityFunctor FVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ForElementType<int> FVar32;
  uint uVar33;
  int *piVar34;
  int *piVar35;
  undefined1 auStack_2e8 [32];
  int *local_2c8;
  ForElementType<int> local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  FIdentityFunctor local_298;
  int local_294;
  int *local_290;
  IRetimingInterface *local_288;
  TMovieSceneChannelData<FEventPayload> *local_280;
  ForElementType<int> local_278;
  undefined1 local_270 [4];
  undefined1 local_26c [4];
  ForElementType<int> local_268;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  puVar4 = (undefined8 *)this->_padding_;
  iVar29 = *(int *)(puVar4 + 1);
  FVar32 = (ForElementType<int>)(longlong)iVar29;
  if (iVar29 != 0) {
    local_298 = (FIdentityFunctor)0x1;
    local_288 = param_1;
    local_280 = this;
    if (iVar29 < 1) {
      local_2c8 = (int *)0x0;
      local_2c0 = FVar32;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar22) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    puVar5 = (undefined4 *)*puVar4;
    FVar23 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_270);
    *puVar5 = *(undefined4 *)CONCAT44(extraout_var,FVar23.Value);
    iVar29 = this->Values->ArrayNum;
    if (iVar29 < 1) {
      local_2c8 = (int *)0x0;
      local_2c0 = (ForElementType<int>)(longlong)iVar29;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar22) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    uVar30 = 1;
    if (1 < (longlong)FVar32) {
      piVar34 = (int *)&DAT_00000001;
      local_278 = FVar32;
      do {
        plVar6 = (longlong *)this->_padding_;
        iVar29 = (int)plVar6[1];
        uVar33 = 0;
        if ((int)uVar30 < iVar29) {
          uVar33 = ~uVar30 >> 0x1f;
        }
        if (uVar33 == 0) {
          local_2c8 = (int *)(longlong)(int)uVar30;
          local_2c0 = (ForElementType<int>)(longlong)iVar29;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar22) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        lVar27 = *plVar6;
        plVar6 = (longlong *)this->_padding_;
        iVar29 = (int)plVar6[1];
        uVar33 = 0;
        if ((int)(uVar30 - 1) < iVar29) {
          uVar33 = -uVar30 >> 0x1f;
        }
        if (uVar33 == 0) {
          local_2c8 = (int *)(longlong)(int)(uVar30 - 1);
          local_2c0 = (ForElementType<int>)(longlong)iVar29;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar22) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar29 = *(int *)(*plVar6 + -4 + (longlong)piVar34 * 4);
        FVar23 = UE::MovieScene::IRetimingInterface::RemapTime(local_288,(int)local_26c);
        FVar28 = (FIdentityFunctor)0x0;
        if (iVar29 <= *(int *)CONCAT44(extraout_var_00,FVar23.Value)) {
          FVar28 = local_298;
        }
        *(int *)(lVar27 + (longlong)piVar34 * 4) = *(int *)CONCAT44(extraout_var_00,FVar23.Value);
        iVar29 = this->Values->ArrayNum;
        uVar33 = 0;
        if ((int)uVar30 < iVar29) {
          uVar33 = ~uVar30 >> 0x1f;
        }
        local_298 = FVar28;
        if ((uVar33 == 0) &&
           (local_2c8 = piVar34, local_2c0 = (ForElementType<int>)(longlong)iVar29,
           bVar22 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar22)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVar32 = local_278;
        uVar30 = uVar30 + 1;
        piVar34 = (int *)((longlong)piVar34 + 1);
      } while ((longlong)piVar34 < (longlong)local_278);
      if (FVar28 == (FIdentityFunctor)0x0) {
        local_268.SecondaryData = (ForElementType<int>)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_294 = 0;
        iVar29 = local_278._0_4_;
        if (0 < iVar29) {
          do {
            FVar26 = (ForElementType<int>)&local_268;
            if (local_268.SecondaryData != (ForElementType<int>)0x0) {
              FVar26 = local_268.SecondaryData;
            }
            if ((ulonglong)FVar26 <= &local_294) {
              FVar26 = (ForElementType<int>)&local_268;
              if (local_268.SecondaryData != (ForElementType<int>)0x0) {
                FVar26 = local_268.SecondaryData;
              }
              if (&local_294 < (int *)((longlong)FVar26 + (longlong)local_5c * 4)) {
                local_2a8 = 4;
                local_2b0 = (longlong)local_60;
                local_2c0 = (ForElementType<int>)&local_268;
                if (local_268.SecondaryData != (ForElementType<int>)0x0) {
                  local_2c0 = local_268.SecondaryData;
                }
                local_2c8 = &local_294;
                local_2b8 = (longlong)local_5c;
                bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar22) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
            }
            if (local_60 == local_5c) {
              local_60 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_268,&local_5c);
            }
            lVar27 = (longlong)local_60;
            FVar26 = (ForElementType<int>)&local_268;
            if (local_268.SecondaryData != (ForElementType<int>)0x0) {
              FVar26 = local_268.SecondaryData;
            }
            local_60 = local_60 + 1;
            *(int *)((longlong)FVar26 + lVar27 * 4) = local_294;
            local_294 = local_294 + 1;
          } while (local_294 < iVar29);
        }
        FVar26 = (ForElementType<int>)&local_268;
        if (local_268.SecondaryData != (ForElementType<int>)0x0) {
          FVar26 = local_268.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FEventPayload>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar26,local_60,local_298,(<lambda_1>)this);
        uVar30 = 0;
        lVar27 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)this->_padding_;
          uVar33 = 0;
          if ((int)uVar30 < local_60) {
            uVar33 = ~uVar30 >> 0x1f;
          }
          if (uVar33 == 0) {
            local_2c8 = (int *)(longlong)(int)uVar30;
            local_2c0 = (ForElementType<int>)(longlong)local_60;
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar22) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar26 = (ForElementType<int>)&local_268;
          if (local_268.SecondaryData != (ForElementType<int>)0x0) {
            FVar26 = local_268.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar30,*(int *)((longlong)FVar26 + lVar27 * 4));
          uVar30 = uVar30 + 1;
          lVar27 = lVar27 + 1;
        } while (lVar27 < (longlong)FVar32);
        uVar30 = 0;
        local_290 = (int *)0x0;
        local_288 = (IRetimingInterface *)0x0;
        iVar29 = local_60;
        do {
          uVar33 = ~uVar30 >> 0x1f;
          piVar34 = local_290;
          while( true ) {
            uVar24 = 0;
            if ((int)uVar30 < iVar29) {
              uVar24 = uVar33;
            }
            if (uVar24 == 0) {
              local_2c0 = (ForElementType<int>)(longlong)iVar29;
              local_2c8 = (int *)(longlong)(int)uVar30;
              bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar29 = local_60;
              if (bVar22) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            FVar32 = (ForElementType<int>)&local_268;
            if (local_268.SecondaryData != (ForElementType<int>)0x0) {
              FVar32 = local_268.SecondaryData;
            }
            if (*(uint *)((longlong)FVar32 + (longlong)piVar34 * 4) == uVar30) break;
            uVar24 = 0;
            if ((int)uVar30 < iVar29) {
              uVar24 = uVar33;
            }
            if (uVar24 == 0) {
              local_2c0 = (ForElementType<int>)(longlong)iVar29;
              local_2c8 = (int *)(longlong)(int)uVar30;
              bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar22) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            plVar6 = (longlong *)this->_padding_;
            FVar32 = (ForElementType<int>)&local_268;
            if (local_268.SecondaryData != (ForElementType<int>)0x0) {
              FVar32 = local_268.SecondaryData;
            }
            iVar29 = (int)plVar6[1];
            uVar24 = *(uint *)((longlong)FVar32 + (longlong)piVar34 * 4);
            piVar35 = (int *)(longlong)(int)uVar24;
            uVar31 = ~uVar24 >> 0x1f;
            uVar25 = 0;
            if ((int)uVar24 < iVar29) {
              uVar25 = uVar31;
            }
            if ((uVar25 == 0) &&
               (local_2c8 = piVar35, local_2c0 = (ForElementType<int>)(longlong)iVar29,
               bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            plVar7 = (longlong *)this->_padding_;
            puVar5 = (undefined4 *)(*plVar6 + (longlong)piVar35 * 4);
            iVar29 = (int)plVar7[1];
            uVar25 = 0;
            if ((int)uVar30 < iVar29) {
              uVar25 = uVar33;
            }
            if (uVar25 == 0) {
              local_2c8 = (int *)(longlong)(int)uVar30;
              local_2c0 = (ForElementType<int>)(longlong)iVar29;
              bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar22) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pTVar21 = local_280;
            lVar27 = *plVar7;
            uVar3 = *(undefined4 *)(lVar27 + (longlong)local_290 * 4);
            *(undefined4 *)(lVar27 + (longlong)local_290 * 4) = *puVar5;
            *puVar5 = uVar3;
            pTVar8 = local_280->Values;
            iVar29 = pTVar8->ArrayNum;
            uVar25 = 0;
            if ((int)uVar24 < iVar29) {
              uVar25 = uVar31;
            }
            if ((uVar25 == 0) &&
               (local_2c8 = piVar35, local_2c0 = (ForElementType<int>)(longlong)iVar29,
               bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar9 = pTVar21->Values;
            pFVar1 = (pTVar8->AllocatorInstance).Data + (longlong)piVar35 * 0x48;
            iVar29 = pTVar9->ArrayNum;
            uVar25 = 0;
            if ((int)uVar30 < iVar29) {
              uVar25 = uVar33;
            }
            if (uVar25 == 0) {
              local_2c8 = local_290;
              local_2c0 = (ForElementType<int>)(longlong)iVar29;
              bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar22) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pFVar10 = (pTVar9->AllocatorInstance).Data;
            uVar12 = *(undefined8 *)(pFVar1 + 8);
            uVar13 = *(undefined8 *)(pFVar10 + (longlong)local_288);
            uVar14 = *(undefined8 *)(pFVar10 + (longlong)local_288 + 8);
            uVar15 = *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x10);
            uVar16 = *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x10 + 8);
            uVar17 = *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x20);
            uVar18 = *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x20 + 8);
            uVar19 = *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x30);
            uVar20 = *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x30 + 8);
            uVar2 = *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x40);
            *(undefined8 *)(pFVar10 + (longlong)local_288) = *(undefined8 *)pFVar1;
            *(undefined8 *)(pFVar10 + (longlong)local_288 + 8) = uVar12;
            uVar12 = *(undefined8 *)(pFVar1 + 0x18);
            *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x10) = *(undefined8 *)(pFVar1 + 0x10);
            *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x10 + 8) = uVar12;
            uVar12 = *(undefined8 *)(pFVar1 + 0x28);
            *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x20) = *(undefined8 *)(pFVar1 + 0x20);
            *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x20 + 8) = uVar12;
            uVar12 = *(undefined8 *)(pFVar1 + 0x38);
            *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x30) = *(undefined8 *)(pFVar1 + 0x30);
            *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x30 + 8) = uVar12;
            *(undefined8 *)(pFVar10 + (longlong)local_288 + 0x40) = *(undefined8 *)(pFVar1 + 0x40);
            *(undefined8 *)pFVar1 = uVar13;
            *(undefined8 *)(pFVar1 + 8) = uVar14;
            *(undefined8 *)(pFVar1 + 0x10) = uVar15;
            *(undefined8 *)(pFVar1 + 0x18) = uVar16;
            *(undefined8 *)(pFVar1 + 0x20) = uVar17;
            *(undefined8 *)(pFVar1 + 0x28) = uVar18;
            *(undefined8 *)(pFVar1 + 0x30) = uVar19;
            *(undefined8 *)(pFVar1 + 0x38) = uVar20;
            *(undefined8 *)(pFVar1 + 0x40) = uVar2;
            uVar25 = 0;
            if ((int)uVar24 < local_60) {
              uVar25 = uVar31;
            }
            if ((uVar25 == 0) &&
               (local_2c8 = piVar35, local_2c0 = (ForElementType<int>)(longlong)local_60,
               bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            piVar34 = local_290;
            FVar32 = (ForElementType<int>)&local_268;
            if (local_268.SecondaryData != (ForElementType<int>)0x0) {
              FVar32 = local_268.SecondaryData;
            }
            piVar35 = (int *)((longlong)FVar32 + (longlong)piVar35 * 4);
            uVar24 = 0;
            if ((int)uVar30 < local_60) {
              uVar24 = uVar33;
            }
            if (uVar24 == 0) {
              local_2c0 = (ForElementType<int>)(longlong)local_60;
              local_2c8 = local_290;
              bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar22) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            FVar32 = (ForElementType<int>)&local_268;
            if (local_268.SecondaryData != (ForElementType<int>)0x0) {
              FVar32 = local_268.SecondaryData;
            }
            iVar29 = *(int *)((longlong)FVar32 + (longlong)piVar34 * 4);
            *(int *)((longlong)FVar32 + (longlong)piVar34 * 4) = *piVar35;
            *piVar35 = iVar29;
            this = local_280;
            iVar29 = local_60;
          }
          local_288 = (IRetimingInterface *)((longlong)local_288 + 0x48);
          local_290 = (int *)((longlong)piVar34 + 1);
          uVar30 = uVar30 + 1;
        } while ((longlong)local_290 < (longlong)local_278);
        if (local_268.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_268.SecondaryData);
        }
      }
    }
  }
  return;
}

