// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// AddInternal<FMovieSceneActorReferenceData> @ 14659c8d0

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneActorReferenceData>
          (FMovieSceneChannelProxyData *this,FMovieSceneActorReferenceData *param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UPackage *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  FMovieSceneActorReferenceData *local_58;
  FMovieSceneChannelEntry local_50;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData,(UObject *)pUVar7,
                         L"MovieSceneActorReferenceData");
  }
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton);
  if (Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData,(UObject *)pUVar7,
                         L"MovieSceneActorReferenceData");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.
                      OuterSingleton)->_padding_;
  uVar11 = (this->Entries).ArrayNum;
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = FVar1;
  }
  uVar12 = 0;
  uVar10 = uVar12;
  if (0 < (int)uVar11) {
    do {
      iVar6 = (uVar11 >> 1) + uVar10;
      local_res10 = *(FName *)((longlong)FVar8 + (longlong)iVar6 * 0x18);
      iVar5 = ::FName::Compare(&local_res10,&local_res8);
      if (iVar5 < 0) {
        uVar10 = iVar6 + (uVar11 & 1);
      }
      uVar3 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    if (((int)uVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = FVar1;
    }
    if (*(FName *)((longlong)FVar8 + (longlong)(int)uVar10 * 0x18) == local_res8)
    goto LAB_14659ca86;
  }
  local_50.ChannelTypeName = local_res8;
  local_50.Channels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Channels.ArrayNum = 0;
  local_50.Channels.ArrayMax = 0;
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Insert
            (&this->Entries,&local_50,uVar10);
  if (local_50.Channels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Channels.AllocatorInstance.Data);
  }
LAB_14659ca86:
  if ((((int)uVar10 < 0) || ((this->Entries).ArrayNum <= (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(ChannelTypeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelProxy.h"
                         ,0x19f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (FMovieSceneChannelProxyData *)FVar1;
  }
  lVar9 = (longlong)(int)uVar10 * 0x18 + (longlong)this;
  local_58 = param_1;
  if (((*(FMovieSceneActorReferenceData ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneActorReferenceData ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  iVar6 = *(int *)(lVar9 + 0x10);
  if (iVar6 == *(int *)(lVar9 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
  }
  *(int *)(lVar9 + 0x10) = iVar6 + 1;
  *(FMovieSceneActorReferenceData **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) = local_58;
  return uVar10;
}

// AddInternal<FMovieSceneAudioTriggerChannel> @ 14659cbf0

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneAudioTriggerChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneAudioTriggerChannel *param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  FMovieSceneAudioTriggerChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  pUVar7 = FMovieSceneAudioTriggerChannel::StaticStruct();
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal((UStruct *)pUVar7);
  pUVar7 = FMovieSceneAudioTriggerChannel::StaticStruct();
  uVar11 = (this->Entries).ArrayNum;
  local_res8 = (FName)pUVar7->_padding_;
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = FVar1;
  }
  uVar12 = 0;
  uVar10 = uVar12;
  if (0 < (int)uVar11) {
    do {
      iVar6 = (uVar11 >> 1) + uVar10;
      local_res10 = *(FName *)((longlong)FVar8 + (longlong)iVar6 * 0x18);
      iVar5 = ::FName::Compare(&local_res10,&local_res8);
      if (iVar5 < 0) {
        uVar10 = iVar6 + (uVar11 & 1);
      }
      uVar3 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    if (((int)uVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = FVar1;
    }
    if (*(FName *)((longlong)FVar8 + (longlong)(int)uVar10 * 0x18) == local_res8)
    goto LAB_14659cd56;
  }
  local_50.ChannelTypeName = local_res8;
  local_50.Channels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Channels.ArrayNum = 0;
  local_50.Channels.ArrayMax = 0;
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Insert
            (&this->Entries,&local_50,uVar10);
  if (local_50.Channels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Channels.AllocatorInstance.Data);
  }
LAB_14659cd56:
  if ((((int)uVar10 < 0) || ((this->Entries).ArrayNum <= (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(ChannelTypeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelProxy.h"
                         ,0x19f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (FMovieSceneChannelProxyData *)FVar1;
  }
  lVar9 = (longlong)(int)uVar10 * 0x18 + (longlong)this;
  local_58 = param_1;
  if (((*(FMovieSceneAudioTriggerChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneAudioTriggerChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  iVar6 = *(int *)(lVar9 + 0x10);
  if (iVar6 == *(int *)(lVar9 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
  }
  *(int *)(lVar9 + 0x10) = iVar6 + 1;
  *(FMovieSceneAudioTriggerChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) = local_58;
  return uVar10;
}

// AddInternal<FMovieSceneBoolChannel> @ 14659cec0

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneBoolChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneBoolChannel *param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  FMovieSceneBoolChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  pUVar7 = FMovieSceneBoolChannel::StaticStruct();
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal((UStruct *)pUVar7);
  pUVar7 = FMovieSceneBoolChannel::StaticStruct();
  uVar11 = (this->Entries).ArrayNum;
  local_res8 = (FName)pUVar7->_padding_;
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = FVar1;
  }
  uVar12 = 0;
  uVar10 = uVar12;
  if (0 < (int)uVar11) {
    do {
      iVar6 = (uVar11 >> 1) + uVar10;
      local_res10 = *(FName *)((longlong)FVar8 + (longlong)iVar6 * 0x18);
      iVar5 = ::FName::Compare(&local_res10,&local_res8);
      if (iVar5 < 0) {
        uVar10 = iVar6 + (uVar11 & 1);
      }
      uVar3 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    if (((int)uVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = FVar1;
    }
    if (*(FName *)((longlong)FVar8 + (longlong)(int)uVar10 * 0x18) == local_res8)
    goto LAB_14659d026;
  }
  local_50.ChannelTypeName = local_res8;
  local_50.Channels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Channels.ArrayNum = 0;
  local_50.Channels.ArrayMax = 0;
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Insert
            (&this->Entries,&local_50,uVar10);
  if (local_50.Channels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Channels.AllocatorInstance.Data);
  }
LAB_14659d026:
  if ((((int)uVar10 < 0) || ((this->Entries).ArrayNum <= (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(ChannelTypeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelProxy.h"
                         ,0x19f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (FMovieSceneChannelProxyData *)FVar1;
  }
  lVar9 = (longlong)(int)uVar10 * 0x18 + (longlong)this;
  local_58 = param_1;
  if (((*(FMovieSceneBoolChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneBoolChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  iVar6 = *(int *)(lVar9 + 0x10);
  if (iVar6 == *(int *)(lVar9 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
  }
  *(int *)(lVar9 + 0x10) = iVar6 + 1;
  *(FMovieSceneBoolChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) = local_58;
  return uVar10;
}

// AddInternal<FMovieSceneConstraintChannel> @ 14659d190

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneConstraintChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneConstraintChannel *param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  FMovieSceneConstraintChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  pUVar7 = FMovieSceneConstraintChannel::StaticStruct();
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal((UStruct *)pUVar7);
  pUVar7 = FMovieSceneConstraintChannel::StaticStruct();
  uVar11 = (this->Entries).ArrayNum;
  local_res8 = (FName)pUVar7->_padding_;
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = FVar1;
  }
  uVar12 = 0;
  uVar10 = uVar12;
  if (0 < (int)uVar11) {
    do {
      iVar6 = (uVar11 >> 1) + uVar10;
      local_res10 = *(FName *)((longlong)FVar8 + (longlong)iVar6 * 0x18);
      iVar5 = ::FName::Compare(&local_res10,&local_res8);
      if (iVar5 < 0) {
        uVar10 = iVar6 + (uVar11 & 1);
      }
      uVar3 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    if (((int)uVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = FVar1;
    }
    if (*(FName *)((longlong)FVar8 + (longlong)(int)uVar10 * 0x18) == local_res8)
    goto LAB_14659d2f6;
  }
  local_50.ChannelTypeName = local_res8;
  local_50.Channels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Channels.ArrayNum = 0;
  local_50.Channels.ArrayMax = 0;
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Insert
            (&this->Entries,&local_50,uVar10);
  if (local_50.Channels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Channels.AllocatorInstance.Data);
  }
LAB_14659d2f6:
  if ((((int)uVar10 < 0) || ((this->Entries).ArrayNum <= (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(ChannelTypeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelProxy.h"
                         ,0x19f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (FMovieSceneChannelProxyData *)FVar1;
  }
  lVar9 = (longlong)(int)uVar10 * 0x18 + (longlong)this;
  local_58 = param_1;
  if (((*(FMovieSceneConstraintChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneConstraintChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  iVar6 = *(int *)(lVar9 + 0x10);
  if (iVar6 == *(int *)(lVar9 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
  }
  *(int *)(lVar9 + 0x10) = iVar6 + 1;
  *(FMovieSceneConstraintChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) = local_58;
  return uVar10;
}

// AddInternal<FMovieSceneDoublePerlinNoiseChannel> @ 14659d460

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoublePerlinNoiseChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneDoublePerlinNoiseChannel *param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UPackage *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  FMovieSceneDoublePerlinNoiseChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel,
                         (UObject *)pUVar7,L"MovieSceneDoublePerlinNoiseChannel");
  }
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel.OuterSingleton);
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel,
                         (UObject *)pUVar7,L"MovieSceneDoublePerlinNoiseChannel");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel.
                      OuterSingleton)->_padding_;
  uVar11 = (this->Entries).ArrayNum;
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = FVar1;
  }
  uVar12 = 0;
  uVar10 = uVar12;
  if (0 < (int)uVar11) {
    do {
      iVar6 = (uVar11 >> 1) + uVar10;
      local_res10 = *(FName *)((longlong)FVar8 + (longlong)iVar6 * 0x18);
      iVar5 = ::FName::Compare(&local_res10,&local_res8);
      if (iVar5 < 0) {
        uVar10 = iVar6 + (uVar11 & 1);
      }
      uVar3 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    if (((int)uVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = FVar1;
    }
    if (*(FName *)((longlong)FVar8 + (longlong)(int)uVar10 * 0x18) == local_res8)
    goto LAB_14659d616;
  }
  local_50.ChannelTypeName = local_res8;
  local_50.Channels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Channels.ArrayNum = 0;
  local_50.Channels.ArrayMax = 0;
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Insert
            (&this->Entries,&local_50,uVar10);
  if (local_50.Channels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Channels.AllocatorInstance.Data);
  }
LAB_14659d616:
  if ((((int)uVar10 < 0) || ((this->Entries).ArrayNum <= (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(ChannelTypeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelProxy.h"
                         ,0x19f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (FMovieSceneChannelProxyData *)FVar1;
  }
  lVar9 = (longlong)(int)uVar10 * 0x18 + (longlong)this;
  local_58 = param_1;
  if (((*(FMovieSceneDoublePerlinNoiseChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneDoublePerlinNoiseChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  iVar6 = *(int *)(lVar9 + 0x10);
  if (iVar6 == *(int *)(lVar9 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
  }
  *(int *)(lVar9 + 0x10) = iVar6 + 1;
  *(FMovieSceneDoublePerlinNoiseChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) =
       local_58;
  return uVar10;
}

// AddInternal<FMovieSceneFloatChannel> @ 14659d780

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneFloatChannel *param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  FMovieSceneFloatChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  pUVar7 = FMovieSceneFloatChannel::StaticStruct();
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal((UStruct *)pUVar7);
  pUVar7 = FMovieSceneFloatChannel::StaticStruct();
  uVar11 = (this->Entries).ArrayNum;
  local_res8 = (FName)pUVar7->_padding_;
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = FVar1;
  }
  uVar12 = 0;
  uVar10 = uVar12;
  if (0 < (int)uVar11) {
    do {
      iVar6 = (uVar11 >> 1) + uVar10;
      local_res10 = *(FName *)((longlong)FVar8 + (longlong)iVar6 * 0x18);
      iVar5 = ::FName::Compare(&local_res10,&local_res8);
      if (iVar5 < 0) {
        uVar10 = iVar6 + (uVar11 & 1);
      }
      uVar3 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    if (((int)uVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = FVar1;
    }
    if (*(FName *)((longlong)FVar8 + (longlong)(int)uVar10 * 0x18) == local_res8)
    goto LAB_14659d8e6;
  }
  local_50.ChannelTypeName = local_res8;
  local_50.Channels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Channels.ArrayNum = 0;
  local_50.Channels.ArrayMax = 0;
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Insert
            (&this->Entries,&local_50,uVar10);
  if (local_50.Channels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Channels.AllocatorInstance.Data);
  }
LAB_14659d8e6:
  if ((((int)uVar10 < 0) || ((this->Entries).ArrayNum <= (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(ChannelTypeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelProxy.h"
                         ,0x19f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (FMovieSceneChannelProxyData *)FVar1;
  }
  lVar9 = (longlong)(int)uVar10 * 0x18 + (longlong)this;
  local_58 = param_1;
  if (((*(FMovieSceneFloatChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneFloatChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  iVar6 = *(int *)(lVar9 + 0x10);
  if (iVar6 == *(int *)(lVar9 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
  }
  *(int *)(lVar9 + 0x10) = iVar6 + 1;
  *(FMovieSceneFloatChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) = local_58;
  return uVar10;
}

// AddInternal<FMovieSceneFloatPerlinNoiseChannel> @ 14659da50

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatPerlinNoiseChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneFloatPerlinNoiseChannel *param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UPackage *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  FMovieSceneFloatPerlinNoiseChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel,
                         (UObject *)pUVar7,L"MovieSceneFloatPerlinNoiseChannel");
  }
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel.OuterSingleton);
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel,
                         (UObject *)pUVar7,L"MovieSceneFloatPerlinNoiseChannel");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel.
                      OuterSingleton)->_padding_;
  uVar11 = (this->Entries).ArrayNum;
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = FVar1;
  }
  uVar12 = 0;
  uVar10 = uVar12;
  if (0 < (int)uVar11) {
    do {
      iVar6 = (uVar11 >> 1) + uVar10;
      local_res10 = *(FName *)((longlong)FVar8 + (longlong)iVar6 * 0x18);
      iVar5 = ::FName::Compare(&local_res10,&local_res8);
      if (iVar5 < 0) {
        uVar10 = iVar6 + (uVar11 & 1);
      }
      uVar3 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    if (((int)uVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = FVar1;
    }
    if (*(FName *)((longlong)FVar8 + (longlong)(int)uVar10 * 0x18) == local_res8)
    goto LAB_14659dc06;
  }
  local_50.ChannelTypeName = local_res8;
  local_50.Channels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Channels.ArrayNum = 0;
  local_50.Channels.ArrayMax = 0;
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Insert
            (&this->Entries,&local_50,uVar10);
  if (local_50.Channels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Channels.AllocatorInstance.Data);
  }
LAB_14659dc06:
  if ((((int)uVar10 < 0) || ((this->Entries).ArrayNum <= (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(ChannelTypeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelProxy.h"
                         ,0x19f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (FMovieSceneChannelProxyData *)FVar1;
  }
  lVar9 = (longlong)(int)uVar10 * 0x18 + (longlong)this;
  local_58 = param_1;
  if (((*(FMovieSceneFloatPerlinNoiseChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneFloatPerlinNoiseChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  iVar6 = *(int *)(lVar9 + 0x10);
  if (iVar6 == *(int *)(lVar9 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
  }
  *(int *)(lVar9 + 0x10) = iVar6 + 1;
  *(FMovieSceneFloatPerlinNoiseChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) =
       local_58;
  return uVar10;
}

// AddInternal<FMovieSceneIntegerChannel> @ 14659dd70

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneIntegerChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneIntegerChannel *param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  FMovieSceneIntegerChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  pUVar7 = FMovieSceneIntegerChannel::StaticStruct();
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal((UStruct *)pUVar7);
  pUVar7 = FMovieSceneIntegerChannel::StaticStruct();
  uVar11 = (this->Entries).ArrayNum;
  local_res8 = (FName)pUVar7->_padding_;
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = FVar1;
  }
  uVar12 = 0;
  uVar10 = uVar12;
  if (0 < (int)uVar11) {
    do {
      iVar6 = (uVar11 >> 1) + uVar10;
      local_res10 = *(FName *)((longlong)FVar8 + (longlong)iVar6 * 0x18);
      iVar5 = ::FName::Compare(&local_res10,&local_res8);
      if (iVar5 < 0) {
        uVar10 = iVar6 + (uVar11 & 1);
      }
      uVar3 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    if (((int)uVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = FVar1;
    }
    if (*(FName *)((longlong)FVar8 + (longlong)(int)uVar10 * 0x18) == local_res8)
    goto LAB_14659ded6;
  }
  local_50.ChannelTypeName = local_res8;
  local_50.Channels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Channels.ArrayNum = 0;
  local_50.Channels.ArrayMax = 0;
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Insert
            (&this->Entries,&local_50,uVar10);
  if (local_50.Channels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Channels.AllocatorInstance.Data);
  }
LAB_14659ded6:
  if ((((int)uVar10 < 0) || ((this->Entries).ArrayNum <= (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(ChannelTypeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelProxy.h"
                         ,0x19f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (FMovieSceneChannelProxyData *)FVar1;
  }
  lVar9 = (longlong)(int)uVar10 * 0x18 + (longlong)this;
  local_58 = param_1;
  if (((*(FMovieSceneIntegerChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneIntegerChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  iVar6 = *(int *)(lVar9 + 0x10);
  if (iVar6 == *(int *)(lVar9 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
  }
  *(int *)(lVar9 + 0x10) = iVar6 + 1;
  *(FMovieSceneIntegerChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) = local_58;
  return uVar10;
}

// AddInternal<FMovieSceneStringChannel> @ 14659e040

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneStringChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneStringChannel *param_1)

{
  ForElementType<FMovieSceneChannelEntry> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UPackage *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FName local_res8;
  FName local_res10;
  FMovieSceneStringChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringChannel,(UObject *)pUVar7,
                         L"MovieSceneStringChannel");
  }
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton);
  if (Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringChannel,(UObject *)pUVar7,
                         L"MovieSceneStringChannel");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton)->
                      _padding_;
  uVar11 = (this->Entries).ArrayNum;
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = FVar1;
  }
  uVar12 = 0;
  uVar10 = uVar12;
  if (0 < (int)uVar11) {
    do {
      iVar6 = (uVar11 >> 1) + uVar10;
      local_res10 = *(FName *)((longlong)FVar8 + (longlong)iVar6 * 0x18);
      iVar5 = ::FName::Compare(&local_res10,&local_res8);
      if (iVar5 < 0) {
        uVar10 = iVar6 + (uVar11 & 1);
      }
      uVar3 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    if (((int)uVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar8 = FVar1;
    }
    if (*(FName *)((longlong)FVar8 + (longlong)(int)uVar10 * 0x18) == local_res8)
    goto LAB_14659e1f6;
  }
  local_50.ChannelTypeName = local_res8;
  local_50.Channels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Channels.ArrayNum = 0;
  local_50.Channels.ArrayMax = 0;
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Insert
            (&this->Entries,&local_50,uVar10);
  if (local_50.Channels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Channels.AllocatorInstance.Data);
  }
LAB_14659e1f6:
  if ((((int)uVar10 < 0) || ((this->Entries).ArrayNum <= (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(ChannelTypeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelProxy.h"
                         ,0x19f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  if ((int)uVar10 < (this->Entries).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (FMovieSceneChannelProxyData *)FVar1;
  }
  lVar9 = (longlong)(int)uVar10 * 0x18 + (longlong)this;
  local_58 = param_1;
  if (((*(FMovieSceneStringChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneStringChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  iVar6 = *(int *)(lVar9 + 0x10);
  if (iVar6 == *(int *)(lVar9 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
  }
  *(int *)(lVar9 + 0x10) = iVar6 + 1;
  *(FMovieSceneStringChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) = local_58;
  return uVar10;
}

