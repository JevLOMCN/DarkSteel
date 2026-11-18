// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 9

// ~FMovieSceneLiveLinkEnumHandler @ 14d09ee20

void __thiscall
FMovieSceneLiveLinkEnumHandler::~FMovieSceneLiveLinkEnumHandler
          (FMovieSceneLiveLinkEnumHandler *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CreateChannels @ 14d0a51f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneLiveLinkEnumHandler::CreateChannels
          (FMovieSceneLiveLinkEnumHandler *this,UScriptStruct *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FProperty *pFVar5;
  TArray<TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  uint uVar6;
  
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if ((param_2 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkEnumHandler.cpp"
                         ,0x13,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pFVar5 == (FProperty *)0x0) || ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    if (((*(ulonglong *)(pFVar5->_padding_ + 0x18) & 0x1000000000000) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FEnumProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkEnumHandler.cpp"
                           ,0x1b,L""), bVar3)) goto code_r0x00014d0a52c5;
  }
  else if (((*(ulonglong *)(*(longlong *)(pFVar5[1]._padding_ + 8) + 0x18) & 0x1000000000000) == 0)
          && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayProperty->Inner->IsA<FEnumProperty>()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkEnumHandler.cpp"
                                 ,0x17,L""), bVar3)) {
code_r0x00014d0a52c5:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PropertyStorage->ByteChannel,param_2,Default);
  this->ElementCount = param_2;
  this_00 = &this->Keys;
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 < param_2) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_2 - iVar1,&this_00->AllocatorInstance,&(this->Keys).ArrayNum,
                       &(this->Keys).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,
           (longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (param_2 < iVar1) {
    uVar6 = iVar1 - param_2;
    if (((int)(uVar6 | param_2) < 0) &&
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
      TArray<TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(this_00,param_2,uVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this_00->AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
    }
  }
  return;
}

// FillFrame @ 14d0a9250

void __thiscall
FMovieSceneLiveLinkEnumHandler::FillFrame
          (FMovieSceneLiveLinkEnumHandler *this,int param_1,FLiveLinkWorldTime *param_2,
          TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4,
          FLiveLinkBaseFrameData *param_5)

{
  int iVar1;
  FLiveLinkPropertyData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  FMovieSceneChannel *pFVar7;
  uint uVar8;
  TArrayView<unsigned_char,int> local_48;
  FMovieSceneChannelData local_38;
  undefined8 *local_20;
  
  uVar8 = 0;
  if (0 < this->ElementCount) {
    do {
      pFVar2 = this->PropertyStorage;
      uVar5 = 0;
      if ((int)uVar8 < (pFVar2->ByteChannel).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (FMovieSceneChannel *)
               ((pFVar2->ByteChannel).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x128);
      FMovieSceneChannelData::FMovieSceneChannelData
                (&local_38,pFVar7,
                 (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar7[1].KeyAddedEvent,
                 (FKeyHandleLookupTable *)&pFVar7[1].KeyDeletedEvent.field_0x10);
      local_20 = (undefined8 *)&pFVar7[1].KeyAddedEvent.field_0x18;
      if (((local_38.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
          (local_20 == (undefined8 *)0x0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times && Values",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                             ,0x122,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_48.DataPtr = (uchar *)*local_20;
      iVar1 = *(int *)(local_20 + 1);
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_48.ArrayNum = iVar1;
      pbVar6 = TArrayView<unsigned_char,int>::operator[](&local_48,param_1);
      FLiveLinkStructPropertyBindings::SetCurrentValueForEnumAt
                (&this->PropertyBinding,uVar8,param_4,param_5,(ulonglong)*pbVar6);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < this->ElementCount);
  }
  return;
}

// FillFrameInterpolated @ 14d0aa800

void __thiscall
FMovieSceneLiveLinkEnumHandler::FillFrameInterpolated
          (FMovieSceneLiveLinkEnumHandler *this,FFrameTime *param_1,FLiveLinkWorldTime *param_2,
          TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4,
          FLiveLinkBaseFrameData *param_5)

{
  FLiveLinkPropertyData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  byte local_res8 [8];
  
  uVar5 = 0;
  if (0 < this->ElementCount) {
    do {
      pFVar1 = this->PropertyStorage;
      uVar4 = 0;
      if ((int)uVar5 < (pFVar1->ByteChannel).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FMovieSceneByteChannel::Evaluate
                ((FMovieSceneByteChannel *)
                 ((pFVar1->ByteChannel).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x128),
                 *param_1,local_res8);
      FLiveLinkStructPropertyBindings::SetCurrentValueForEnumAt
                (&this->PropertyBinding,uVar5,param_4,param_5,(ulonglong)local_res8[0]);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < this->ElementCount);
  }
  return;
}

// Finalize @ 14d0ae1d0

void __thiscall
FMovieSceneLiveLinkEnumHandler::Finalize
          (FMovieSceneLiveLinkEnumHandler *this,bool param_1,FKeyDataOptimizationParams *param_2)

{
  int *piVar1;
  FFrameNumber FVar2;
  FLiveLinkPropertyData *pFVar3;
  code *pcVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  FMovieSceneChannel *pFVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 local_res20 [8];
  FScriptContainerElement local_a8 [8];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_a0;
  uint local_90;
  int local_8c;
  int iStack_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  FScriptContainerElement *local_68;
  FMovieSceneChannelData local_60;
  ForAnyElementType *local_48;
  
  uVar17 = 0;
  if (0 < (this->Keys).ArrayNum) {
    local_78 = 0;
    local_80 = 0;
    local_70 = 0;
    do {
      lVar13 = local_70;
      lVar5 = local_78;
      lVar14 = local_80;
      uVar8 = 0;
      if ((int)uVar17 < (this->Keys).ArrayNum) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_68 = (this->Keys).AllocatorInstance.Data + lVar5;
      local_90 = *(uint *)(local_68 + 8);
      uVar11 = (ulonglong)(int)local_90;
      pFVar16 = *(FScriptContainerElement **)local_68;
      pFVar15 = pFVar16 + uVar11 * 0x10;
      while( true ) {
        if (*(int *)(local_68 + 8) != (int)uVar11) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FLiveLinkPropertyKey<__int64>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar16 == pFVar15) break;
        pFVar3 = this->PropertyStorage;
        uVar8 = 0;
        if ((int)uVar17 < (pFVar3->ByteChannel).ArrayNum) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar12 = (FMovieSceneChannel *)((pFVar3->ByteChannel).AllocatorInstance.Data + lVar13);
        FMovieSceneChannelData::FMovieSceneChannelData
                  (&local_60,pFVar12,
                   (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar12[1].KeyAddedEvent,
                   (FKeyHandleLookupTable *)&pFVar12[1].KeyDeletedEvent.field_0x10);
        local_48 = (ForAnyElementType *)&pFVar12[1].KeyAddedEvent.field_0x18;
        if (((local_60.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
            (local_48 == (ForAnyElementType *)0x0)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times && Values",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x122,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_a8[0] = *pFVar16;
        FVar2.Value = *(int *)(pFVar16 + 8);
        iVar9 = FMovieSceneChannelData::AddKeyInternal(&local_60,FVar2);
        pFVar6 = local_48;
        if (((local_48->Data <= local_a8) &&
            (local_a8 < local_48->Data + *(int *)((longlong)&local_48[1].Data + 4))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,pFVar6,piVar1);
        }
        *(int *)&pFVar6[1].Data = iVar10 + 1;
        memmove(pFVar6->Data + iVar9 + 1,pFVar6->Data + iVar9,(longlong)(iVar10 - iVar9));
        pFVar6->Data[iVar9] = local_a8[0];
        if ((local_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_60.OwningChannel)->KeyAddedEvent), bVar7)) {
          local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.ArrayNum = 0;
          local_a0.ArrayMax = 0;
          local_8c = iVar9;
          iStack_88 = FVar2.Value;
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
          local_a0.ArrayNum = iVar9 + 1;
          *(ulonglong *)(local_a0.AllocatorInstance.Data + (longlong)iVar9 * 8) =
               CONCAT44(iStack_88,local_8c);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_60.OwningChannel)->KeyAddedEvent,local_60.OwningChannel,&local_a0);
          if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
          }
        }
        pFVar16 = pFVar16 + 0x10;
        uVar11 = (ulonglong)local_90;
        lVar13 = local_70;
        lVar14 = local_80;
      }
      local_80 = lVar14 + 1;
      local_78 = local_78 + 0x10;
      local_70 = lVar13 + 0x128;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (this->Keys).ArrayNum);
  }
  return;
}

// GetChannelValue @ 14d0b0760

long64 __thiscall
FMovieSceneLiveLinkEnumHandler::GetChannelValue
          (FMovieSceneLiveLinkEnumHandler *this,int param_1,int param_2)

{
  int iVar1;
  FLiveLinkPropertyData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  byte *pbVar7;
  FMovieSceneChannel *pFVar8;
  TArrayView<unsigned_char,int> local_38;
  FMovieSceneChannelData local_28;
  undefined8 *local_10;
  
  pFVar2 = this->PropertyStorage;
  uVar5 = 0;
  if (param_2 < (pFVar2->ByteChannel).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    lVar6 = (*pcVar3)();
    return lVar6;
  }
  pFVar8 = (FMovieSceneChannel *)
           ((pFVar2->ByteChannel).AllocatorInstance.Data + (longlong)param_2 * 0x128);
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,pFVar8,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar8[1].KeyAddedEvent,
             (FKeyHandleLookupTable *)&pFVar8[1].KeyDeletedEvent.field_0x10);
  local_10 = (undefined8 *)&pFVar8[1].KeyAddedEvent.field_0x18;
  if (((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_10 == (undefined8 *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    lVar6 = (*pcVar3)();
    return lVar6;
  }
  local_38.DataPtr = (uchar *)*local_10;
  iVar1 = *(int *)(local_10 + 1);
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    lVar6 = (*pcVar3)();
    return lVar6;
  }
  local_38.ArrayNum = iVar1;
  pbVar7 = TArrayView<unsigned_char,int>::operator[](&local_38,param_1);
  return (ulonglong)*pbVar7;
}

// GetChannelValueInterpolated @ 14d0b0e40

long64 __thiscall
FMovieSceneLiveLinkEnumHandler::GetChannelValueInterpolated
          (FMovieSceneLiveLinkEnumHandler *this,FFrameTime *param_1,int param_2)

{
  FLiveLinkPropertyData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long64 lVar5;
  byte local_res18 [16];
  
  pFVar1 = this->PropertyStorage;
  uVar4 = 0;
  if (param_2 < (pFVar1->ByteChannel).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      lVar5 = (*pcVar2)();
      return lVar5;
    }
  }
  FMovieSceneByteChannel::Evaluate
            ((FMovieSceneByteChannel *)
             ((pFVar1->ByteChannel).AllocatorInstance.Data + (longlong)param_2 * 0x128),*param_1,
             local_res18);
  return (ulonglong)local_res18[0];
}

// InitializeFromExistingChannels @ 14d0b3d20

void __thiscall
FMovieSceneLiveLinkEnumHandler::InitializeFromExistingChannels
          (FMovieSceneLiveLinkEnumHandler *this,UScriptStruct *param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FProperty *pFVar5;
  
  iVar1 = (this->PropertyStorage->ByteChannel).ArrayNum;
  this->ElementCount = iVar1;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkEnumHandler.cpp"
                       ,0x47,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if (pFVar5 != (FProperty *)0x0) {
    uVar2 = *(ulonglong *)(pFVar5->_padding_ + 0x18);
    if ((uVar2 >> 0x15 & 1) == 0) {
      if ((uVar2 >> 0x30 & 1) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FEnumProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkEnumHandler.cpp"
                           ,0x52,L"");
        if (bVar4) goto code_r0x00014d0b3dfe;
      }
    }
    else if ((*(ulonglong *)(*(longlong *)(pFVar5[1]._padding_ + 8) + 0x18) & 0x1000000000000) == 0)
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayProperty->Inner->IsA<FEnumProperty>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkEnumHandler.cpp"
                         ,0x4e,L"");
      if (!bVar4) {
        return;
      }
code_r0x00014d0b3dfe:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RecordFrame @ 14d0b5830

void __thiscall
FMovieSceneLiveLinkEnumHandler::RecordFrame
          (FMovieSceneLiveLinkEnumHandler *this,FFrameNumber *param_1,UScriptStruct *param_2,
          FLiveLinkBaseFrameData *param_3)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  long64 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  if ((param_3 != (FLiveLinkBaseFrameData *)0x0) && (uVar7 = 0, 0 < this->ElementCount)) {
    lVar8 = 0;
    do {
      local_38 = FLiveLinkStructPropertyBindings::GetCurrentValueForEnumAt
                           (&this->PropertyBinding,uVar7,param_2,param_3);
      iStack_30 = param_1->Value;
      uVar4 = 0;
      if ((int)uVar7 < (this->Keys).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (this->Keys).AllocatorInstance.Data + lVar8;
      if (((*(long64 **)&pFVar6->field_0x0 <= &local_38) &&
          (&local_38 < *(long64 **)&pFVar6->field_0x0 + (longlong)*(int *)(pFVar6 + 0xc) * 2)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = *(int *)&pFVar6[8].field_0x0;
      if (iVar5 == *(int *)(pFVar6 + 0xc)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 0xc));
      }
      uVar7 = uVar7 + 1;
      *(int *)&pFVar6[8].field_0x0 = iVar5 + 1;
      lVar8 = lVar8 + 0x10;
      plVar1 = (long64 *)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar5 * 0x10);
      *plVar1 = local_38;
      plVar1[1] = CONCAT44(uStack_2c,iStack_30);
    } while ((int)uVar7 < this->ElementCount);
  }
  return;
}

