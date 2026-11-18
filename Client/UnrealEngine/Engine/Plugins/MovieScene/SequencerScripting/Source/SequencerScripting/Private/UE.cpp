// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 61

// AddKeyToChannel<FMovieSceneActorReferenceData,FMovieSceneActorReferenceKey_&> @ 14c673930

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneActorReferenceData,FMovieSceneActorReferenceKey_&>
          (FMovieSceneActorReferenceData *param_1,FFrameNumber param_2,
          FMovieSceneActorReferenceKey *param_3,EMovieSceneKeyInterpolation param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FKeyHandle FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneActorReferenceData *pFVar6;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TMovieSceneChannelData<FMovieSceneActorReferenceKey> local_38;
  
  pFVar6 = (FMovieSceneActorReferenceData *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_38,(FMovieSceneChannel *)pFVar6,&pFVar6->KeyTimes,
             (FKeyHandleLookupTable *)&pFVar6->KeyHandles);
  local_38.Values = &pFVar6->KeyValues;
  if ((local_38._padding_ == 0) ||
     (local_38.Values == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  iVar4 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_38,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar4 == -1) {
    TMovieSceneChannelData<FMovieSceneActorReferenceKey>::AddKey
              (&local_38,(FFrameNumber)(int)param_3,
               (FMovieSceneActorReferenceKey *)CONCAT71(in_register_00000089,param_4));
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
  }
  else {
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res8);
    FVar5.Index = *(uint *)CONCAT44(extraout_var,FVar5.Index);
    *(uint *)&param_1->_padding_ = FVar5.Index;
    AssignValue<FMovieSceneActorReferenceData,FMovieSceneActorReferenceKey_&>
              (pFVar6,FVar5,(FMovieSceneActorReferenceKey *)CONCAT71(in_register_00000089,param_4));
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneBoolChannel,bool_&> @ 14c673a20

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneBoolChannel,bool_&>
          (FMovieSceneBoolChannel *param_1,FFrameNumber param_2,bool *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FKeyHandle FVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneBoolChannel *pFVar8;
  FFrameNumber FVar9;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement local_68 [8];
  int local_60;
  int iStack_5c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_58;
  FMovieSceneChannelData local_48;
  ForAnyElementType *local_30;
  
  pFVar8 = (FMovieSceneBoolChannel *)CONCAT44(in_register_00000014,param_2.Value);
  (**(code **)(pFVar8->_padding_ + 0x98))(pFVar8,&local_48);
  FVar9.Value = (int)param_3;
  iVar4 = FMovieSceneChannelData::FindKey(&local_48,FVar9,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar4 == -1) {
    local_68[0] = *(FScriptContainerElement *)CONCAT71(in_register_00000089,param_4);
    iVar4 = FMovieSceneChannelData::AddKeyInternal(&local_48,FVar9);
    if ((local_30->Data <= local_68) &&
       (local_68 < local_30->Data + *(int *)((longlong)&local_30[1].Data + 4))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (FKeyHandle)uVar6;
      }
    }
    iVar7 = *(int *)&local_30[1].Data;
    piVar1 = (int *)((longlong)&local_30[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,local_30,piVar1);
    }
    *(int *)&local_30[1].Data = iVar7 + 1;
    memmove(local_30->Data + iVar4 + 1,local_30->Data + iVar4,(longlong)(iVar7 - iVar4));
    local_30->Data[iVar4] = local_68[0];
    if (local_48.OwningChannel != (FMovieSceneChannel *)0x0) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &(local_48.OwningChannel)->KeyAddedEvent);
      if (bVar3) {
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
        local_60 = iVar4;
        iStack_5c = FVar9.Value;
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_58.AllocatorInstance,&local_58.ArrayMax);
        local_58.ArrayNum = iVar4 + 1;
        *(ulonglong *)(local_58.AllocatorInstance.Data + (longlong)iVar4 * 8) =
             CONCAT44(iStack_5c,local_60);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        Broadcast<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &(local_48.OwningChannel)->KeyAddedEvent,local_48.OwningChannel,&local_58);
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
    }
    FVar5 = FMovieSceneChannelData::GetHandle(&local_48,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
  }
  else {
    FVar5 = FMovieSceneChannelData::GetHandle(&local_48,(int)local_res8);
    FVar5.Index = *(uint *)CONCAT44(extraout_var,FVar5.Index);
    *(uint *)&param_1->_padding_ = FVar5.Index;
    AssignValue<FMovieSceneBoolChannel,bool_&>
              (pFVar8,FVar5,(bool *)CONCAT71(in_register_00000089,param_4));
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneByteChannel,unsigned_char_&> @ 14c673c00

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneByteChannel,unsigned_char_&>
          (FMovieSceneByteChannel *param_1,FFrameNumber param_2,uchar *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  code *pcVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FKeyHandle FVar6;
  int iVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneByteChannel *pFVar8;
  FScriptContainerElement *pFVar9;
  FFrameNumber FVar10;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement local_68 [8];
  int local_60;
  int iStack_5c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_58;
  FMovieSceneChannelData local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_30;
  
  pFVar8 = (FMovieSceneByteChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_48,(FMovieSceneChannel *)pFVar8,&pFVar8->Times,
             (FKeyHandleLookupTable *)&pFVar8->KeyHandles);
  local_30 = &pFVar8->Values;
  if ((local_48.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_30 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (FKeyHandle)uVar4;
    }
  }
  FVar10.Value = (int)param_3;
  iVar5 = FMovieSceneChannelData::FindKey(&local_48,FVar10,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar5 == -1) {
    local_68[0] = *(FScriptContainerElement *)CONCAT71(in_register_00000089,param_4);
    iVar5 = FMovieSceneChannelData::AddKeyInternal(&local_48,FVar10);
    pTVar2 = local_30;
    pFVar9 = (local_30->AllocatorInstance).Data;
    if ((pFVar9 <= local_68) && (local_68 < pFVar9 + local_30->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (FKeyHandle)uVar4;
      }
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar9 = (pTVar2->AllocatorInstance).Data + iVar5;
    pTVar2->ArrayNum = iVar7 + 1;
    memmove(pFVar9 + 1,pFVar9,(longlong)(iVar7 - iVar5));
    (pTVar2->AllocatorInstance).Data[iVar5] = local_68[0];
    if (local_48.OwningChannel != (FMovieSceneChannel *)0x0) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &(local_48.OwningChannel)->KeyAddedEvent);
      if (bVar3) {
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
        local_60 = iVar5;
        iStack_5c = FVar10.Value;
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_58.AllocatorInstance,&local_58.ArrayMax);
        local_58.ArrayNum = iVar5 + 1;
        *(ulonglong *)(local_58.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             CONCAT44(iStack_5c,local_60);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        Broadcast<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &(local_48.OwningChannel)->KeyAddedEvent,local_48.OwningChannel,&local_58);
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
    }
    FVar6 = FMovieSceneChannelData::GetHandle(&local_48,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar6.Index);
  }
  else {
    FVar6 = FMovieSceneChannelData::GetHandle(&local_48,(int)local_res8);
    FVar6.Index = *(uint *)CONCAT44(extraout_var,FVar6.Index);
    *(uint *)&param_1->_padding_ = FVar6.Index;
    AssignValue<FMovieSceneByteChannel,unsigned_char_&>
              (pFVar8,FVar6,(uchar *)CONCAT71(in_register_00000089,param_4));
  }
  return (FKeyHandle)(uint)param_1;
}

// AssignValue<FMovieSceneActorReferenceData,FMovieSceneActorReferenceKey_&> @ 14c673e20

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneActorReferenceData,FMovieSceneActorReferenceKey_&>
          (FMovieSceneActorReferenceData *param_1,FKeyHandle param_2,
          FMovieSceneActorReferenceKey *param_3)

{
  FName FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FMovieSceneActorReferenceKey *pFVar7;
  TArrayView<FMovieSceneActorReferenceKey,int> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  FName FStack_30;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->KeyTimes,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 != -1) {
    local_48._0_4_ = (param_3->Object).Guid.A;
    local_48._4_4_ = (param_3->Object).Guid.B;
    uStack_40._0_4_ = (param_3->Object).Guid.C;
    uStack_40._4_4_ = (param_3->Object).Guid.D;
    local_38._0_4_ = (param_3->Object).SequenceID;
    local_38._4_4_ = (param_3->Object).ResolveParentIndex;
    FStack_30 = param_3->ComponentName;
    local_58.DataPtr = (FMovieSceneActorReferenceKey *)(local_10->AllocatorInstance).Data;
    iVar2 = local_10->ArrayNum;
    FVar1 = param_3->SocketName;
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_58.ArrayNum = iVar2;
    pFVar7 = TArrayView<FMovieSceneActorReferenceKey,int>::operator[](&local_58,iVar6);
    (pFVar7->Object).Guid.A = (undefined4)local_48;
    (pFVar7->Object).Guid.B = local_48._4_4_;
    (pFVar7->Object).Guid.C = (undefined4)uStack_40;
    (pFVar7->Object).Guid.D = uStack_40._4_4_;
    (pFVar7->Object).SequenceID = (undefined4)local_38;
    (pFVar7->Object).ResolveParentIndex = local_38._4_4_;
    pFVar7->ComponentName = FStack_30;
    pFVar7->SocketName = FVar1;
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneBoolChannel,bool_&> @ 14c673f60

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneBoolChannel,bool_&>
          (FMovieSceneBoolChannel *param_1,FKeyHandle param_2,bool *param_3)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  bool *pbVar7;
  TArrayView<bool,int> local_38;
  FMovieSceneChannelData local_28;
  undefined8 *local_10;
  
  (**(code **)(param_1->_padding_ + 0x98))(param_1,&local_28);
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 == -1) {
    return false;
  }
  bVar1 = *param_3;
  local_38.DataPtr = (bool *)*local_10;
  iVar2 = *(int *)(local_10 + 1);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_38.ArrayNum = iVar2;
  pbVar7 = TArrayView<bool,int>::operator[](&local_38,iVar6);
  *pbVar7 = bVar1;
  return true;
}

// AssignValue<FMovieSceneByteChannel,unsigned_char_&> @ 14c674010

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneByteChannel,unsigned_char_&>
          (FMovieSceneByteChannel *param_1,FKeyHandle param_2,uchar *param_3)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uchar *puVar7;
  TArrayView<unsigned_char,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 != -1) {
    uVar1 = *param_3;
    local_38.DataPtr = (uchar *)(local_10->AllocatorInstance).Data;
    iVar2 = local_10->ArrayNum;
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_38.ArrayNum = iVar2;
    puVar7 = TArrayView<unsigned_char,int>::operator[](&local_38,iVar6);
    *puVar7 = uVar1;
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneDoubleChannel,FMovieSceneDoubleValue_&> @ 14c674110

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneDoubleChannel,FMovieSceneDoubleValue_&>
          (FMovieSceneDoubleChannel *param_1,FKeyHandle param_2,FMovieSceneDoubleValue *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FMovieSceneDoubleValue *pFVar6;
  TArrayView<FMovieSceneDoubleValue,int> local_58;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar5 != -1) {
    local_48 = param_3->Value;
    uStack_40._0_4_ = (param_3->Tangent).ArriveTangent;
    uStack_40._4_4_ = (param_3->Tangent).LeaveTangent;
    local_38._0_4_ = (param_3->Tangent).ArriveTangentWeight;
    local_38._4_4_ = (param_3->Tangent).LeaveTangentWeight;
    uStack_30 = *(undefined8 *)&(param_3->Tangent).TangentWeightMode;
    local_58.DataPtr = (FMovieSceneDoubleValue *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_58.ArrayNum = iVar1;
    pFVar6 = TArrayView<FMovieSceneDoubleValue,int>::operator[](&local_58,iVar5);
    pFVar6->Value = local_48;
    (pFVar6->Tangent).ArriveTangent = (float)(undefined4)uStack_40;
    (pFVar6->Tangent).LeaveTangent = (float)uStack_40._4_4_;
    (pFVar6->Tangent).ArriveTangentWeight = (float)(undefined4)local_38;
    (pFVar6->Tangent).LeaveTangentWeight = (float)local_38._4_4_;
    *(undefined8 *)&(pFVar6->Tangent).TangentWeightMode = uStack_30;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneBoolChannel,bool> @ 14c674460

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneBoolChannel,bool>
          (FMovieSceneBoolChannel *param_1,bool *param_2)

{
  if (param_1->bHasDefaultValue != false) {
    *param_2 = param_1->DefaultValue;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneByteChannel,unsigned_char> @ 14c674480

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneByteChannel,unsigned_char>
          (FMovieSceneByteChannel *param_1,uchar *param_2)

{
  if (param_1->bHasDefaultValue != false) {
    *param_2 = param_1->DefaultValue;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneDoubleChannel,double> @ 14c6744a0

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneDoubleChannel,double>
          (FMovieSceneDoubleChannel *param_1,double *param_2)

{
  if (param_1->bHasDefaultValue != false) {
    *param_2 = param_1->DefaultValue;
    return true;
  }
  return false;
}

// GetKeyValue<FMovieSceneActorReferenceData,FMovieSceneActorReferenceKey> @ 14c6744c0

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneActorReferenceData,FMovieSceneActorReferenceKey>
          (FMovieSceneActorReferenceData *param_1,FKeyHandle param_2,
          FMovieSceneActorReferenceKey *param_3)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FMovieSceneActorReferenceKey *pFVar10;
  TArrayView<FMovieSceneActorReferenceKey,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->KeyTimes,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
  }
  iVar9 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar9 != -1) {
    local_38.DataPtr = (FMovieSceneActorReferenceKey *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    local_38.ArrayNum = iVar1;
    pFVar10 = TArrayView<FMovieSceneActorReferenceKey,int>::operator[](&local_38,iVar9);
    uVar4 = (pFVar10->Object).Guid.B;
    uVar5 = (pFVar10->Object).Guid.C;
    uVar6 = (pFVar10->Object).Guid.D;
    (param_3->Object).Guid.A = (pFVar10->Object).Guid.A;
    (param_3->Object).Guid.B = uVar4;
    (param_3->Object).Guid.C = uVar5;
    (param_3->Object).Guid.D = uVar6;
    iVar9 = (pFVar10->Object).ResolveParentIndex;
    FVar3 = pFVar10->ComponentName;
    (param_3->Object).SequenceID = (pFVar10->Object).SequenceID;
    (param_3->Object).ResolveParentIndex = iVar9;
    param_3->ComponentName = FVar3;
    param_3->SocketName = pFVar10->SocketName;
    return true;
  }
  return false;
}

// GetKeyValue<FMovieSceneBoolChannel,bool> @ 14c6745d0

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneBoolChannel,bool>
          (FMovieSceneBoolChannel *param_1,FKeyHandle param_2,bool *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  bool *pbVar6;
  TArrayView<bool,int> local_38;
  FMovieSceneChannelData local_28;
  undefined8 *local_10;
  
  (**(code **)(param_1->_padding_ + 0x98))(param_1,&local_28);
  iVar5 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar5 == -1) {
    return false;
  }
  local_38.DataPtr = (bool *)*local_10;
  iVar1 = *(int *)(local_10 + 1);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_38.ArrayNum = iVar1;
  pbVar6 = TArrayView<bool,int>::operator[](&local_38,iVar5);
  *param_3 = *pbVar6;
  return true;
}

// GetKeyValue<FMovieSceneByteChannel,unsigned_char> @ 14c674680

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneByteChannel,unsigned_char>
          (FMovieSceneByteChannel *param_1,FKeyHandle param_2,uchar *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uchar *puVar6;
  TArrayView<unsigned_char,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar5 != -1) {
    local_38.DataPtr = (uchar *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_38.ArrayNum = iVar1;
    puVar6 = TArrayView<unsigned_char,int>::operator[](&local_38,iVar5);
    *param_3 = *puVar6;
    return true;
  }
  return false;
}

// GetKeyValue<FMovieSceneDoubleChannel,FMovieSceneDoubleValue> @ 14c674780

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneDoubleChannel,FMovieSceneDoubleValue>
          (FMovieSceneDoubleChannel *param_1,FKeyHandle param_2,FMovieSceneDoubleValue *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FMovieSceneDoubleValue *pFVar9;
  TArrayView<FMovieSceneDoubleValue,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  iVar8 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar8 != -1) {
    local_38.DataPtr = (FMovieSceneDoubleValue *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    local_38.ArrayNum = iVar1;
    pFVar9 = TArrayView<FMovieSceneDoubleValue,int>::operator[](&local_38,iVar8);
    fVar4 = (pFVar9->Tangent).ArriveTangent;
    fVar5 = (pFVar9->Tangent).LeaveTangent;
    param_3->Value = pFVar9->Value;
    (param_3->Tangent).ArriveTangent = fVar4;
    (param_3->Tangent).LeaveTangent = fVar5;
    fVar4 = (pFVar9->Tangent).LeaveTangentWeight;
    uVar3 = *(undefined8 *)&(pFVar9->Tangent).TangentWeightMode;
    (param_3->Tangent).ArriveTangentWeight = (pFVar9->Tangent).ArriveTangentWeight;
    (param_3->Tangent).LeaveTangentWeight = fVar4;
    *(undefined8 *)&(param_3->Tangent).TangentWeightMode = uVar3;
    return true;
  }
  return false;
}

// RemoveChannelDefault<FMovieSceneBoolChannel> @ 14c675600

void __cdecl
UE::MovieScene::RemoveChannelDefault<FMovieSceneBoolChannel>(FMovieSceneBoolChannel *param_1)

{
  param_1->bHasDefaultValue = false;
  return;
}

// RemoveChannelDefault<FMovieSceneByteChannel> @ 14c675610

void __cdecl
UE::MovieScene::RemoveChannelDefault<FMovieSceneByteChannel>(FMovieSceneByteChannel *param_1)

{
  param_1->bHasDefaultValue = false;
  return;
}

// RemoveChannelDefault<FMovieSceneDoubleChannel> @ 14c675620

void __cdecl
UE::MovieScene::RemoveChannelDefault<FMovieSceneDoubleChannel>(FMovieSceneDoubleChannel *param_1)

{
  param_1->bHasDefaultValue = false;
  return;
}

// SetChannelDefault<FMovieSceneActorReferenceData,FMovieSceneActorReferenceKey_&> @ 14c675630

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneActorReferenceData,FMovieSceneActorReferenceKey_&>
          (FMovieSceneActorReferenceData *param_1,FMovieSceneActorReferenceKey *param_2)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = (param_2->Object).Guid.B;
  uVar3 = (param_2->Object).Guid.C;
  uVar4 = (param_2->Object).Guid.D;
  (param_1->DefaultValue).Object.Guid.A = (param_2->Object).Guid.A;
  (param_1->DefaultValue).Object.Guid.B = uVar2;
  (param_1->DefaultValue).Object.Guid.C = uVar3;
  (param_1->DefaultValue).Object.Guid.D = uVar4;
  iVar5 = (param_2->Object).ResolveParentIndex;
  FVar1 = param_2->ComponentName;
  (param_1->DefaultValue).Object.SequenceID = (param_2->Object).SequenceID;
  (param_1->DefaultValue).Object.ResolveParentIndex = iVar5;
  (param_1->DefaultValue).ComponentName = FVar1;
  (param_1->DefaultValue).SocketName = param_2->SocketName;
  return;
}

// SetChannelDefault<FMovieSceneBoolChannel,bool_&> @ 14c675660

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneBoolChannel,bool_&>
          (FMovieSceneBoolChannel *param_1,bool *param_2)

{
  param_1->DefaultValue = *param_2;
  param_1->bHasDefaultValue = true;
  return;
}

// SetChannelDefault<FMovieSceneByteChannel,unsigned_char_&> @ 14c675680

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneByteChannel,unsigned_char_&>
          (FMovieSceneByteChannel *param_1,uchar *param_2)

{
  param_1->DefaultValue = *param_2;
  param_1->bHasDefaultValue = true;
  return;
}

// SetChannelDefault<FMovieSceneDoubleChannel,double_&> @ 14c6756a0

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneDoubleChannel,double_&>
          (FMovieSceneDoubleChannel *param_1,double *param_2)

{
  param_1->DefaultValue = *param_2;
  param_1->bHasDefaultValue = true;
  return;
}

// DiscreteExclusiveUpper @ 14c676ec0

FFrameNumber __cdecl UE::MovieScene::DiscreteExclusiveUpper(TRange<FFrameNumber> *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong in_RDX;
  longlong lVar5;
  char cVar6;
  int iStackX_c;
  
  uVar1 = *(undefined8 *)(in_RDX + 8);
  cVar6 = (char)uVar1;
  if (cVar6 == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InUpperBound.IsOpen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FFrameNumber)iVar4;
    }
  }
  lVar5 = 0;
  if (cVar6 == '\x01') {
    lVar5 = 4;
  }
  iVar4 = *(int *)((longlong)
                   &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                    ::__l2::Offsets + lVar5);
  if (cVar6 == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FFrameNumber)iVar4;
    }
  }
  iStackX_c = (int)((ulonglong)uVar1 >> 0x20);
  *(int *)&param_1->LowerBound = iStackX_c + iVar4;
  return (FFrameNumber)(int)param_1;
}

// AddKeyToChannel<FMovieSceneEventChannel,FMovieSceneEvent_&> @ 14c682590

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneEventChannel,FMovieSceneEvent_&>
          (FMovieSceneEventChannel *param_1,FFrameNumber param_2,FMovieSceneEvent *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FKeyHandle FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneEventChannel *pFVar6;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TMovieSceneChannelData<FMovieSceneEvent> local_38;
  
  pFVar6 = (FMovieSceneEventChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_38,(FMovieSceneChannel *)pFVar6,&pFVar6->KeyTimes,
             (FKeyHandleLookupTable *)&pFVar6->KeyHandles);
  local_38.Values = &pFVar6->KeyValues;
  if ((local_38._padding_ == 0) ||
     (local_38.Values == (TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  iVar4 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_38,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar4 == -1) {
    TMovieSceneChannelData<FMovieSceneEvent>::AddKey
              (&local_38,(FFrameNumber)(int)param_3,
               (FMovieSceneEvent *)CONCAT71(in_register_00000089,param_4));
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
  }
  else {
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res8);
    FVar5.Index = *(uint *)CONCAT44(extraout_var,FVar5.Index);
    *(uint *)&param_1->_padding_ = FVar5.Index;
    AssignValue<FMovieSceneEventChannel,FMovieSceneEvent_&>
              (pFVar6,FVar5,(FMovieSceneEvent *)CONCAT71(in_register_00000089,param_4));
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneIntegerChannel,int_&> @ 14c682680

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneIntegerChannel,int_&>
          (FMovieSceneIntegerChannel *param_1,FFrameNumber param_2,int *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FKeyHandle FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneIntegerChannel *pFVar6;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TMovieSceneChannelData<int> local_38;
  
  pFVar6 = (FMovieSceneIntegerChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_38,(FMovieSceneChannel *)pFVar6,&pFVar6->Times,
             (FKeyHandleLookupTable *)&pFVar6->KeyHandles);
  local_38.Values = &pFVar6->Values;
  if ((local_38._padding_ == 0) ||
     (local_38.Values == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  iVar4 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_38,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar4 == -1) {
    TMovieSceneChannelData<int>::AddKey
              (&local_38,(FFrameNumber)(int)param_3,*(int *)CONCAT71(in_register_00000089,param_4));
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
  }
  else {
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res8);
    FVar5.Index = *(uint *)CONCAT44(extraout_var,FVar5.Index);
    *(uint *)&param_1->_padding_ = FVar5.Index;
    AssignValue<FMovieSceneIntegerChannel,int_&>
              (pFVar6,FVar5,(int *)CONCAT71(in_register_00000089,param_4));
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_&> @ 14c682770

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_&>
          (FMovieSceneObjectPathChannel *param_1,FFrameNumber param_2,
          FMovieSceneObjectPathChannelKeyValue *param_3,EMovieSceneKeyInterpolation param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FKeyHandle FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneObjectPathChannel *pFVar6;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> local_38;
  
  pFVar6 = (FMovieSceneObjectPathChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_38,(FMovieSceneChannel *)pFVar6,&pFVar6->Times,
             (FKeyHandleLookupTable *)&pFVar6->KeyHandles);
  local_38.Values = &pFVar6->Values;
  if ((local_38._padding_ == 0) ||
     (local_38.Values ==
      (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  iVar4 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_38,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar4 == -1) {
    TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::AddKey
              (&local_38,(FFrameNumber)(int)param_3,
               (FMovieSceneObjectPathChannelKeyValue *)CONCAT71(in_register_00000089,param_4));
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
  }
  else {
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res8);
    FVar5.Index = *(uint *)CONCAT44(extraout_var,FVar5.Index);
    *(uint *)&param_1->_padding_ = FVar5.Index;
    AssignValue<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_&>
              (pFVar6,FVar5,
               (FMovieSceneObjectPathChannelKeyValue *)CONCAT71(in_register_00000089,param_4));
  }
  return (FKeyHandle)(uint)param_1;
}

// AssignValue<FMovieSceneEventChannel,FMovieSceneEvent_&> @ 14c682860

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneEventChannel,FMovieSceneEvent_&>
          (FMovieSceneEventChannel *param_1,FKeyHandle param_2,FMovieSceneEvent *param_3)

{
  int iVar1;
  UFunction *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FMovieSceneEvent *pFVar7;
  FFieldClass *pFVar8;
  TArrayView<FMovieSceneEvent,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->KeyTimes,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 != -1) {
    local_38.DataPtr = (FMovieSceneEvent *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_38.ArrayNum = iVar1;
    pFVar7 = TArrayView<FMovieSceneEvent,int>::operator[](&local_38,iVar6);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_3->Ptrs).Function.field0_0x0.DebugPtr, pUVar2 != (UFunction *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    (pFVar7->Ptrs).Function.field0_0x0 = (param_3->Ptrs).Function.field0_0x0;
    pFVar8 = FProperty::StaticClass();
    FFieldPath::GetTyped((FFieldPath *)&(param_3->Ptrs).BoundObjectProperty,pFVar8,(UStruct *)0x0);
    FFieldPath::operator=
              ((FFieldPath *)&(pFVar7->Ptrs).BoundObjectProperty,
               (FFieldPath *)&(param_3->Ptrs).BoundObjectProperty);
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneFloatChannel,FMovieSceneFloatValue_&> @ 14c6829a0

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneFloatChannel,FMovieSceneFloatValue_&>
          (FMovieSceneFloatChannel *param_1,FKeyHandle param_2,FMovieSceneFloatValue *param_3)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  TEnumAsByte<ERichCurveTangentWeightMode> TVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  TEnumAsByte<ERichCurveInterpMode> TVar8;
  TEnumAsByte<ERichCurveTangentMode> TVar9;
  uchar uVar10;
  uchar uVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  FMovieSceneFloatValue *pFVar15;
  TArrayView<FMovieSceneFloatValue,int> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Times && Values",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                        ,0x122,L"");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      uVar13 = (*pcVar2)();
      return (bool)uVar13;
    }
  }
  iVar14 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar14 != -1) {
    local_38._0_4_ = param_3->Value;
    local_38._4_4_ = (param_3->Tangent).ArriveTangent;
    uStack_30._0_4_ = (param_3->Tangent).LeaveTangent;
    uStack_30._4_4_ = (param_3->Tangent).ArriveTangentWeight;
    fVar3 = (param_3->Tangent).LeaveTangentWeight;
    TVar4.Value = (param_3->Tangent).TangentWeightMode.Value;
    uVar5 = (param_3->Tangent).UnserializedPaddingBytes[0];
    uVar6 = (param_3->Tangent).UnserializedPaddingBytes[1];
    uVar7 = (param_3->Tangent).UnserializedPaddingBytes[2];
    local_48.DataPtr = (FMovieSceneFloatValue *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    TVar8.Value = (param_3->InterpMode).Value;
    TVar9.Value = (param_3->TangentMode).Value;
    uVar10 = param_3->PaddingByte;
    uVar11 = param_3->UnserializedPaddingBytes[0];
    if (iVar1 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar2 = (code *)swi(3);
        uVar13 = (*pcVar2)();
        return (bool)uVar13;
      }
    }
    local_48.ArrayNum = iVar1;
    pFVar15 = TArrayView<FMovieSceneFloatValue,int>::operator[](&local_48,iVar14);
    pFVar15->Value = (float)(undefined4)local_38;
    (pFVar15->Tangent).ArriveTangent = (float)local_38._4_4_;
    (pFVar15->Tangent).LeaveTangent = (float)(undefined4)uStack_30;
    (pFVar15->Tangent).ArriveTangentWeight = (float)uStack_30._4_4_;
    (pFVar15->Tangent).LeaveTangentWeight = fVar3;
    (pFVar15->Tangent).TangentWeightMode = (TEnumAsByte<ERichCurveTangentWeightMode>)TVar4.Value;
    (pFVar15->Tangent).UnserializedPaddingBytes[0] = uVar5;
    (pFVar15->Tangent).UnserializedPaddingBytes[1] = uVar6;
    (pFVar15->Tangent).UnserializedPaddingBytes[2] = uVar7;
    pFVar15->InterpMode = (TEnumAsByte<ERichCurveInterpMode>)TVar8.Value;
    pFVar15->TangentMode = (TEnumAsByte<ERichCurveTangentMode>)TVar9.Value;
    pFVar15->PaddingByte = uVar10;
    pFVar15->UnserializedPaddingBytes[0] = uVar11;
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneIntegerChannel,int_&> @ 14c682ad0

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneIntegerChannel,int_&>
          (FMovieSceneIntegerChannel *param_1,FKeyHandle param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  TArrayView<int,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 != -1) {
    iVar1 = *param_3;
    local_38.DataPtr = (int *)(local_10->AllocatorInstance).Data;
    iVar2 = local_10->ArrayNum;
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_38.ArrayNum = iVar2;
    piVar7 = TArrayView<int,int>::operator[](&local_38,iVar6);
    *piVar7 = iVar1;
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_&> @ 14c682bd0

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_&>
          (FMovieSceneObjectPathChannel *param_1,FKeyHandle param_2,
          FMovieSceneObjectPathChannelKeyValue *param_3)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FMovieSceneObjectPathChannelKeyValue *this;
  TArrayView<FMovieSceneObjectPathChannelKeyValue,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 != -1) {
    local_38.DataPtr = (FMovieSceneObjectPathChannelKeyValue *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_38.ArrayNum = iVar1;
    this = TArrayView<FMovieSceneObjectPathChannelKeyValue,int>::operator[](&local_38,iVar6);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)this,
               (TPersistentObjectPtr<FSoftObjectPath> *)param_3);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_3->HardPtr).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    (this->HardPtr).field0_0x0 = (param_3->HardPtr).field0_0x0;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneFloatChannel,float> @ 14c682d00

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneFloatChannel,float>
          (FMovieSceneFloatChannel *param_1,float *param_2)

{
  if (param_1->bHasDefaultValue != false) {
    *param_2 = param_1->DefaultValue;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneIntegerChannel,int> @ 14c682d20

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneIntegerChannel,int>
          (FMovieSceneIntegerChannel *param_1,int *param_2)

{
  if (param_1->bHasDefaultValue != false) {
    *param_2 = param_1->DefaultValue;
    return true;
  }
  return false;
}

// GetKeyValue<FMovieSceneEventChannel,FMovieSceneEvent> @ 14c682d40

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneEventChannel,FMovieSceneEvent>
          (FMovieSceneEventChannel *param_1,FKeyHandle param_2,FMovieSceneEvent *param_3)

{
  int iVar1;
  UFunction *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FMovieSceneEvent *pFVar7;
  FFieldClass *pFVar8;
  TArrayView<FMovieSceneEvent,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->KeyTimes,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 != -1) {
    local_38.DataPtr = (FMovieSceneEvent *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_38.ArrayNum = iVar1;
    pFVar7 = TArrayView<FMovieSceneEvent,int>::operator[](&local_38,iVar6);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (pFVar7->Ptrs).Function.field0_0x0.DebugPtr, pUVar2 != (UFunction *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    (param_3->Ptrs).Function.field0_0x0 = (pFVar7->Ptrs).Function.field0_0x0;
    pFVar8 = FProperty::StaticClass();
    FFieldPath::GetTyped((FFieldPath *)&(pFVar7->Ptrs).BoundObjectProperty,pFVar8,(UStruct *)0x0);
    FFieldPath::operator=
              ((FFieldPath *)&(param_3->Ptrs).BoundObjectProperty,
               (FFieldPath *)&(pFVar7->Ptrs).BoundObjectProperty);
    return true;
  }
  return false;
}

// GetKeyValue<FMovieSceneFloatChannel,FMovieSceneFloatValue> @ 14c682e80

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneFloatChannel,FMovieSceneFloatValue>
          (FMovieSceneFloatChannel *param_1,FKeyHandle param_2,FMovieSceneFloatValue *param_3)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TEnumAsByte<ERichCurveTangentWeightMode> TVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  TEnumAsByte<ERichCurveTangentMode> TVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  FMovieSceneFloatValue *pFVar14;
  TArrayView<FMovieSceneFloatValue,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Times && Values",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                        ,0x122,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
  }
  iVar13 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar13 != -1) {
    local_38.DataPtr = (FMovieSceneFloatValue *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        uVar12 = (*pcVar2)();
        return (bool)uVar12;
      }
    }
    local_38.ArrayNum = iVar1;
    pFVar14 = TArrayView<FMovieSceneFloatValue,int>::operator[](&local_38,iVar13);
    fVar3 = (pFVar14->Tangent).ArriveTangent;
    fVar4 = (pFVar14->Tangent).LeaveTangent;
    fVar5 = (pFVar14->Tangent).ArriveTangentWeight;
    param_3->Value = pFVar14->Value;
    (param_3->Tangent).ArriveTangent = fVar3;
    (param_3->Tangent).LeaveTangent = fVar4;
    (param_3->Tangent).ArriveTangentWeight = fVar5;
    TVar6.Value = (pFVar14->Tangent).TangentWeightMode.Value;
    uVar7 = (pFVar14->Tangent).UnserializedPaddingBytes[0];
    uVar8 = (pFVar14->Tangent).UnserializedPaddingBytes[1];
    uVar9 = (pFVar14->Tangent).UnserializedPaddingBytes[2];
    (param_3->Tangent).LeaveTangentWeight = (pFVar14->Tangent).LeaveTangentWeight;
    (param_3->Tangent).TangentWeightMode = (TEnumAsByte<ERichCurveTangentWeightMode>)TVar6.Value;
    (param_3->Tangent).UnserializedPaddingBytes[0] = uVar7;
    (param_3->Tangent).UnserializedPaddingBytes[1] = uVar8;
    (param_3->Tangent).UnserializedPaddingBytes[2] = uVar9;
    TVar10.Value = (pFVar14->TangentMode).Value;
    uVar7 = pFVar14->PaddingByte;
    uVar8 = pFVar14->UnserializedPaddingBytes[0];
    param_3->InterpMode = (TEnumAsByte<ERichCurveInterpMode>)(pFVar14->InterpMode).Value;
    param_3->TangentMode = (TEnumAsByte<ERichCurveTangentMode>)TVar10.Value;
    param_3->PaddingByte = uVar7;
    param_3->UnserializedPaddingBytes[0] = uVar8;
    return true;
  }
  return false;
}

// GetKeyValue<FMovieSceneIntegerChannel,int> @ 14c682f90

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneIntegerChannel,int>
          (FMovieSceneIntegerChannel *param_1,FKeyHandle param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  TArrayView<int,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar5 != -1) {
    local_38.DataPtr = (int *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_38.ArrayNum = iVar1;
    piVar6 = TArrayView<int,int>::operator[](&local_38,iVar5);
    *param_3 = *piVar6;
    return true;
  }
  return false;
}

// GetKeyValue<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue> @ 14c683090

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue>
          (FMovieSceneObjectPathChannel *param_1,FKeyHandle param_2,
          FMovieSceneObjectPathChannelKeyValue *param_3)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FMovieSceneObjectPathChannelKeyValue *pFVar7;
  TArrayView<FMovieSceneObjectPathChannelKeyValue,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 != -1) {
    local_38.DataPtr = (FMovieSceneObjectPathChannelKeyValue *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_38.ArrayNum = iVar1;
    pFVar7 = TArrayView<FMovieSceneObjectPathChannelKeyValue,int>::operator[](&local_38,iVar6);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)param_3,
               (TPersistentObjectPtr<FSoftObjectPath> *)pFVar7);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (pFVar7->HardPtr).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    (param_3->HardPtr).field0_0x0 = (pFVar7->HardPtr).field0_0x0;
    return true;
  }
  return false;
}

// RemoveChannelDefault<FMovieSceneFloatChannel> @ 14c683f30

void __cdecl
UE::MovieScene::RemoveChannelDefault<FMovieSceneFloatChannel>(FMovieSceneFloatChannel *param_1)

{
  param_1->bHasDefaultValue = false;
  return;
}

// RemoveChannelDefault<FMovieSceneIntegerChannel> @ 14c683f40

void __cdecl
UE::MovieScene::RemoveChannelDefault<FMovieSceneIntegerChannel>(FMovieSceneIntegerChannel *param_1)

{
  param_1->bHasDefaultValue = false;
  return;
}

// SetChannelDefault<FMovieSceneFloatChannel,float_&> @ 14c683f50

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneFloatChannel,float_&>
          (FMovieSceneFloatChannel *param_1,float *param_2)

{
  param_1->DefaultValue = *param_2;
  param_1->bHasDefaultValue = true;
  return;
}

// SetChannelDefault<FMovieSceneIntegerChannel,int_&> @ 14c683f70

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneIntegerChannel,int_&>
          (FMovieSceneIntegerChannel *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  param_1->bHasDefaultValue = true;
  param_1->DefaultValue = iVar1;
  return;
}

// Construct<FSequencerScriptingRange> @ 14c693000

void __cdecl UE::CoreUObject::Private::Construct<FSequencerScriptingRange>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfc;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// ConstructForTests<FSequencerScriptingRange> @ 14c693020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSequencerScriptingRange>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfc;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Destruct<FSequencerScriptingRange> @ 14c693080

void __cdecl UE::CoreUObject::Private::Destruct<FSequencerScriptingRange>(void *param_1)

{
  return;
}

// Copy<FSequencerScriptingRange> @ 14c693110

bool __cdecl
UE::CoreUObject::Private::Copy<FSequencerScriptingRange>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// AddKeyToChannel<FMovieSceneParticleChannel,unsigned_char_&> @ 14c696220

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneParticleChannel,unsigned_char_&>
          (FMovieSceneParticleChannel *param_1,FFrameNumber param_2,uchar *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FKeyHandle FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneParticleChannel *pFVar6;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TMovieSceneChannelData<unsigned_char> local_38;
  
  pFVar6 = (FMovieSceneParticleChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_38,(FMovieSceneChannel *)pFVar6,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x70,
             (FKeyHandleLookupTable *)&pFVar6->field_0xa0);
  local_38.Values = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x88;
  if ((local_38._padding_ == 0) ||
     (local_38.Values == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  iVar4 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_38,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar4 == -1) {
    TMovieSceneChannelData<unsigned_char>::AddKey
              (&local_38,(FFrameNumber)(int)param_3,*(uchar *)CONCAT71(in_register_00000089,param_4)
              );
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res10);
    *(undefined4 *)param_1 = *(undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
  }
  else {
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res8);
    FVar5.Index = *(uint *)CONCAT44(extraout_var,FVar5.Index);
    *(uint *)param_1 = FVar5.Index;
    AssignValue<FMovieSceneParticleChannel,unsigned_char_&>
              (pFVar6,FVar5,(uchar *)CONCAT71(in_register_00000089,param_4));
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneStringChannel,FString_&> @ 14c696310

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneStringChannel,FString_&>
          (FMovieSceneStringChannel *param_1,FFrameNumber param_2,FString *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FKeyHandle FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneStringChannel *pFVar6;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TMovieSceneChannelData<FString> local_38;
  
  pFVar6 = (FMovieSceneStringChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_38,(FMovieSceneChannel *)pFVar6,&pFVar6->Times,
             (FKeyHandleLookupTable *)&pFVar6->KeyHandles);
  local_38.Values = &pFVar6->Values;
  if ((local_38._padding_ == 0) ||
     (local_38.Values == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  iVar4 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_38,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar4 == -1) {
    TMovieSceneChannelData<FString>::AddKey
              (&local_38,(FFrameNumber)(int)param_3,
               (FString *)CONCAT71(in_register_00000089,param_4));
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
  }
  else {
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res8);
    FVar5.Index = *(uint *)CONCAT44(extraout_var,FVar5.Index);
    *(uint *)&param_1->_padding_ = FVar5.Index;
    AssignValue<FMovieSceneStringChannel,FString_&>
              (pFVar6,FVar5,(FString *)CONCAT71(in_register_00000089,param_4));
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneTextChannel,FText_&> @ 14c696400

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneTextChannel,FText_&>
          (FMovieSceneTextChannel *param_1,FFrameNumber param_2,FText *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FKeyHandle FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneTextChannel *pFVar6;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TMovieSceneChannelData<FText> local_38;
  
  pFVar6 = (FMovieSceneTextChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_38,(FMovieSceneChannel *)pFVar6,&pFVar6->Times,
             (FKeyHandleLookupTable *)&pFVar6->KeyHandles);
  local_38.Values = &pFVar6->Values;
  if ((local_38._padding_ == 0) ||
     (local_38.Values == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  iVar4 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_38,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar4 == -1) {
    TMovieSceneChannelData<FText>::AddKey
              (&local_38,(FFrameNumber)(int)param_3,(FText *)CONCAT71(in_register_00000089,param_4))
    ;
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
  }
  else {
    FVar5 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_38,(int)local_res8);
    FVar5.Index = *(uint *)CONCAT44(extraout_var,FVar5.Index);
    *(uint *)&param_1->_padding_ = FVar5.Index;
    AssignValue<FMovieSceneTextChannel,FText_&>
              (pFVar6,FVar5,(FText *)CONCAT71(in_register_00000089,param_4));
  }
  return (FKeyHandle)(uint)param_1;
}

// AssignValue<FMovieSceneParticleChannel,unsigned_char_&> @ 14c6964f0

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneParticleChannel,unsigned_char_&>
          (FMovieSceneParticleChannel *param_1,FKeyHandle param_2,uchar *param_3)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uchar *puVar7;
  TArrayView<unsigned_char,int> local_38;
  FMovieSceneChannelData local_28;
  undefined8 *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&param_1->field_0x70,
             (FKeyHandleLookupTable *)&param_1->field_0xa0);
  local_10 = (undefined8 *)&param_1->field_0x88;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (undefined8 *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 != -1) {
    uVar1 = *param_3;
    local_38.DataPtr = (uchar *)*local_10;
    iVar2 = *(int *)(local_10 + 1);
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_38.ArrayNum = iVar2;
    puVar7 = TArrayView<unsigned_char,int>::operator[](&local_38,iVar6);
    *puVar7 = uVar1;
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneStringChannel,FString_&> @ 14c6965f0

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneStringChannel,FString_&>
          (FMovieSceneStringChannel *param_1,FKeyHandle param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *this;
  TArrayView<FString,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar5 != -1) {
    local_38.DataPtr = (FString *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_38.ArrayNum = iVar1;
    this = TArrayView<FString,int>::operator[](&local_38,iVar5);
    iVar1 = (param_3->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(this,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar5);
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneTextChannel,FText_&> @ 14c696700

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneTextChannel,FText_&>
          (FMovieSceneTextChannel *param_1,FKeyHandle param_2,FText *param_3)

{
  int iVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FText *pFVar8;
  undefined1 local_res8 [8];
  TArrayView<FText,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FText,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar7 != -1) {
    local_38.DataPtr = (FText *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    local_38.ArrayNum = iVar1;
    pFVar8 = TArrayView<FText,int>::operator[](&local_38,iVar7);
    pIVar2 = (param_3->TextData).Reference;
    pIVar3 = (pFVar8->TextData).Reference;
    if (pIVar3 != pIVar2) {
      (pFVar8->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    pFVar8->Flags = param_3->Flags;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneParticleChannel,unsigned_char> @ 14c696830

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneParticleChannel,unsigned_char>
          (FMovieSceneParticleChannel *param_1,uchar *param_2)

{
  return false;
}

// GetChannelDefault<FMovieSceneStringChannel,FString> @ 14c696840

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneStringChannel,FString>
          (FMovieSceneStringChannel *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TOptional<FString> *pTVar5;
  int iVar6;
  TOptional<FString>_u_0 local_28;
  TOptional<FString>_u_0 local_18;
  
  pTVar5 = FMovieSceneStringChannel::GetDefault(param_1,(TOptional<FString> *)&local_28.TypedValue);
  iVar6 = *(int *)((longlong)&pTVar5->field0_0x0 + 0xc);
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  if (iVar6 != -1) {
    pTVar5 = FMovieSceneStringChannel::GetDefault
                       (param_1,(TOptional<FString> *)&local_18.TypedValue);
    if (*(int *)((longlong)&pTVar5->field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar1 = *(int *)((longlong)&pTVar5->field0_0x0 + 8);
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (param_2,(wchar_t *)(pTVar5->field0_0x0).TypedValue.Data.AllocatorInstance.Data,iVar6)
    ;
    if ((local_18.TypedValue.Data.ArrayMax != -1) &&
       (local_18.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneTextChannel,FText> @ 14c696920

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneTextChannel,FText>
          (FMovieSceneTextChannel *param_1,FText *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TOptional<FText> *pTVar6;
  undefined1 local_res18 [16];
  TOptional<FText>_u_0 local_28;
  TOptional<FText>_u_0 local_18;
  
  pTVar6 = FMovieSceneTextChannel::GetDefault(param_1,(TOptional<FText> *)&local_28.TypedValue);
  pIVar1 = (pTVar6->field0_0x0).TypedValue.TextData.Reference;
  if (local_28.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TypedValue.TextData.Reference + 0x10))();
  }
  if (pIVar1 != (ITextData *)0x0) {
    pTVar6 = FMovieSceneTextChannel::GetDefault(param_1,(TOptional<FText> *)&local_18.TypedValue);
    if ((pTVar6->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pIVar1 = *(ITextData **)&pTVar6->field0_0x0;
    pIVar2 = (param_2->TextData).Reference;
    if (pIVar2 != pIVar1) {
      (param_2->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    param_2->Flags = (pTVar6->field0_0x0).TypedValue.Flags;
    if (local_18.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18.TypedValue.TextData.Reference + 0x10))();
    }
    return true;
  }
  return false;
}

// GetKeyValue<FMovieSceneParticleChannel,unsigned_char> @ 14c696a10

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneParticleChannel,unsigned_char>
          (FMovieSceneParticleChannel *param_1,FKeyHandle param_2,uchar *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uchar *puVar6;
  TArrayView<unsigned_char,int> local_38;
  FMovieSceneChannelData local_28;
  undefined8 *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&param_1->field_0x70,
             (FKeyHandleLookupTable *)&param_1->field_0xa0);
  local_10 = (undefined8 *)&param_1->field_0x88;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (undefined8 *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar5 != -1) {
    local_38.DataPtr = (uchar *)*local_10;
    iVar1 = *(int *)(local_10 + 1);
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_38.ArrayNum = iVar1;
    puVar6 = TArrayView<unsigned_char,int>::operator[](&local_38,iVar5);
    *param_3 = *puVar6;
    return true;
  }
  return false;
}

// GetKeyValue<FMovieSceneStringChannel,FString> @ 14c696b10

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneStringChannel,FString>
          (FMovieSceneStringChannel *param_1,FKeyHandle param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  TArrayView<FString,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar5 != -1) {
    local_38.DataPtr = (FString *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_38.ArrayNum = iVar1;
    pFVar6 = TArrayView<FString,int>::operator[](&local_38,iVar5);
    iVar1 = (pFVar6->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange(param_3,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar5);
    return true;
  }
  return false;
}

// GetKeyValue<FMovieSceneTextChannel,FText> @ 14c696c20

bool __cdecl
UE::MovieScene::GetKeyValue<FMovieSceneTextChannel,FText>
          (FMovieSceneTextChannel *param_1,FKeyHandle param_2,FText *param_3)

{
  int iVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FText *pFVar8;
  undefined1 local_res8 [8];
  TArrayView<FText,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FText,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar7 != -1) {
    local_38.DataPtr = (FText *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    local_38.ArrayNum = iVar1;
    pFVar8 = TArrayView<FText,int>::operator[](&local_38,iVar7);
    pIVar2 = (param_3->TextData).Reference;
    pIVar3 = (pFVar8->TextData).Reference;
    if (pIVar2 != pIVar3) {
      (param_3->TextData).Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    param_3->Flags = pFVar8->Flags;
    return true;
  }
  return false;
}

// RemoveChannelDefault<FMovieSceneParticleChannel> @ 14c698140

void __cdecl
UE::MovieScene::RemoveChannelDefault<FMovieSceneParticleChannel>
          (FMovieSceneParticleChannel *param_1)

{
  return;
}

// RemoveChannelDefault<FMovieSceneStringChannel> @ 14c698150

void __cdecl
UE::MovieScene::RemoveChannelDefault<FMovieSceneStringChannel>(FMovieSceneStringChannel *param_1)

{
  param_1->bHasDefaultValue = false;
  return;
}

// RemoveChannelDefault<FMovieSceneTextChannel> @ 14c698160

void __cdecl
UE::MovieScene::RemoveChannelDefault<FMovieSceneTextChannel>(FMovieSceneTextChannel *param_1)

{
  param_1->bHasDefaultValue = false;
  return;
}

// SetChannelDefault<FMovieSceneParticleChannel,unsigned_char_&> @ 14c698170

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneParticleChannel,unsigned_char_&>
          (FMovieSceneParticleChannel *param_1,uchar *param_2)

{
  return;
}

// SetChannelDefault<FMovieSceneStringChannel,FString_&> @ 14c698180

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneStringChannel,FString_&>
          (FMovieSceneStringChannel *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,param_2);
  param_1->bHasDefaultValue = true;
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            (&param_1->DefaultValue,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
  pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetChannelDefault<FMovieSceneTextChannel,FText_&> @ 14c6981e0

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneTextChannel,FText_&>
          (FMovieSceneTextChannel *param_1,FText *param_2)

{
  uint uVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined1 local_res8 [8];
  
  pIVar2 = (param_2->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  uVar1 = param_2->Flags;
  param_1->bHasDefaultValue = true;
  pIVar3 = (param_1->DefaultValue).TextData.Reference;
  if (pIVar3 != pIVar2) {
    (param_1->DefaultValue).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_1->DefaultValue).Flags = uVar1;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  }
  return;
}

