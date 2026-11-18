// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// AddInternal<FMovieSceneByteChannel> @ 14a38bfe0

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneByteChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneByteChannel *param_1)

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
  FMovieSceneByteChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  pUVar7 = FMovieSceneByteChannel::StaticStruct();
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal((UStruct *)pUVar7);
  pUVar7 = FMovieSceneByteChannel::StaticStruct();
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
    goto LAB_14a38c146;
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
LAB_14a38c146:
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
  if (((*(FMovieSceneByteChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneByteChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  *(FMovieSceneByteChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) = local_58;
  return uVar10;
}

// AddInternal<FMovieSceneControlRigSpaceChannel> @ 14a38c2b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneControlRigSpaceChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneControlRigSpaceChannel *param_1)

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
  FMovieSceneControlRigSpaceChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel,
                         (UObject *)pUVar7,L"MovieSceneControlRigSpaceChannel");
  }
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceChannel.OuterSingleton);
  if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel,
                         (UObject *)pUVar7,L"MovieSceneControlRigSpaceChannel");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceChannel.
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
    goto LAB_14a38c466;
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
LAB_14a38c466:
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
  if (((*(FMovieSceneControlRigSpaceChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneControlRigSpaceChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  *(FMovieSceneControlRigSpaceChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) = local_58
  ;
  return uVar10;
}

