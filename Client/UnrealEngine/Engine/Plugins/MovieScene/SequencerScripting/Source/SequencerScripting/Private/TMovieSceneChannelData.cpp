// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 1

// AddKey @ 14c685020

int __thiscall
TMovieSceneChannelData<FMovieSceneEvent>::AddKey
          (TMovieSceneChannelData<FMovieSceneEvent> *this,FFrameNumber param_1,
          FMovieSceneEvent *param_2)

{
  TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_28;
  
  iVar4 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,param_1);
  pTVar1 = this->Values;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar6 <= param_2) && (param_2 < pFVar6 + (longlong)pTVar1->ArrayMax * 0x28)) {
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
  iVar5 = pTVar1->ArrayNum;
  if (iVar5 == pTVar1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar5 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x28;
  memmove(pFVar6 + 0x28,pFVar6,(longlong)(iVar5 - iVar4) * 0x28);
  FMovieSceneEvent::FMovieSceneEvent
            ((FMovieSceneEvent *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x28),param_2
            );
  if (this->_padding_ != 0) {
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 8));
    if (bVar3) {
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_28.AllocatorInstance,&local_28.ArrayMax);
      local_28.ArrayNum = iVar5 + 1;
      *(ulonglong *)(local_28.AllocatorInstance.Data + (longlong)iVar5 * 8) =
           CONCAT44(param_1.Value,iVar4);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                 (FMovieSceneChannel *)this->_padding_,&local_28);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
  }
  return iVar4;
}

