// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// AddInternal<FMovieSceneTimeWarpChannel> @ 146069f80

/* WARNING: Removing unreachable block (ram,0x00014606a2d5) */

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneTimeWarpChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneTimeWarpChannel *param_1)

{
  int *piVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  UScriptStruct *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UPackage *pUVar11;
  ForElementType<FMovieSceneChannelEntry> FVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<FMovieSceneChannelEntry> FVar15;
  uint uVar16;
  TPairInitializer<FName_const_&,TWeakObjectPtr<UStruct,FWeakObjectPtr>_&&> local_res8;
  FWeakObjectPtr local_res18;
  FName local_res20;
  FMovieSceneTimeWarpChannel *local_98;
  UScriptStruct *local_90;
  longlong local_88;
  FName local_80;
  longlong *local_78;
  FWeakObjectPtr *local_70;
  FName local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_res8.Value = (TWeakObjectPtr<UStruct,FWeakObjectPtr> *)param_1;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar11 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel,(UObject *)pUVar11,
                         L"MovieSceneTimeWarpChannel");
  }
  pUVar6 = Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.OuterSingleton;
  lVar3 = (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.OuterSingleton)->_padding_;
  local_88 = lVar3;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
  if (UE::MovieScene::GChannelTypeNamesToClassTypes._8_4_ !=
      UE::MovieScene::GChannelTypeNamesToClassTypes._52_4_) {
    lVar13 = 0x154bef738;
    if (UE::MovieScene::GChannelTypeNamesToClassTypes._64_8_ != 0) {
      lVar13 = UE::MovieScene::GChannelTypeNamesToClassTypes._64_8_;
    }
    for (iVar10 = *(int *)(lVar13 + (ulonglong)
                                    (UE::MovieScene::GChannelTypeNamesToClassTypes._72_4_ - 1 &
                                    (int)((ulonglong)lVar3 >> 0x20) + uVar8) * 4); iVar10 != -1;
        iVar10 = *(int *)(UE::MovieScene::GChannelTypeNamesToClassTypes._0_8_ + 0x10 +
                         (longlong)iVar10 * 0x18)) {
      if (*(longlong *)
           (UE::MovieScene::GChannelTypeNamesToClassTypes._0_8_ + (longlong)iVar10 * 0x18) == lVar3)
      goto LAB_14606a0a7;
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_90 = pUVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_90);
  local_78 = &local_88;
  local_70 = &local_res18;
  TSet<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<UStruct,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&UE::MovieScene::GChannelTypeNamesToClassTypes,&local_res8,(bool *)&local_78);
LAB_14606a0a7:
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar11 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpChannel,(UObject *)pUVar11,
                         L"MovieSceneTimeWarpChannel");
  }
  FVar15 = (this->Entries).AllocatorInstance.SecondaryData;
  local_res20 = (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpChannel.OuterSingleton)
                       ->_padding_;
  uVar8 = (this->Entries).ArrayNum;
  uVar16 = 0;
  FVar12 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar15 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar12 = FVar15;
  }
  uVar14 = uVar16;
  if (0 < (int)uVar8) {
    do {
      iVar10 = (uVar8 >> 1) + uVar14;
      local_80 = *(FName *)((longlong)FVar12 + (longlong)iVar10 * 0x18);
      iVar9 = ::FName::Compare(&local_80,&local_res20);
      if (iVar9 < 0) {
        uVar14 = iVar10 + (uVar8 & 1);
      }
      uVar5 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar5 != 0);
    FVar15 = (this->Entries).AllocatorInstance.SecondaryData;
  }
  if ((int)uVar14 < (this->Entries).ArrayNum) {
    if (((int)uVar14 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar10 = (*pcVar4)();
      return iVar10;
    }
    FVar15 = (this->Entries).AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar15 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar12 = FVar15;
    }
    if (*(FName *)((longlong)FVar12 + (longlong)(int)uVar14 * 0x18) == local_res20)
    goto LAB_14606a2da;
  }
  local_68 = local_res20;
  local_60 = 0;
  FVar12 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar15 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar12 = FVar15;
  }
  local_58 = 0;
  if ((ulonglong)FVar12 <= &local_68) {
    FVar12 = (ForElementType<FMovieSceneChannelEntry>)this;
    if (FVar15 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
      FVar12 = FVar15;
    }
    if ((&local_68 < (FName *)((longlong)FVar12 + (longlong)(this->Entries).ArrayMax * 0x18)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar10 = (*pcVar4)();
      return iVar10;
    }
  }
  iVar10 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                       (0x818,(ForElementType<FMovieSceneChannelEntry> *)this,piVar1);
  }
  (this->Entries).ArrayNum = iVar10 + 1;
  FVar15 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar12 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar15 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar12 = FVar15;
  }
  lVar3 = (longlong)(int)uVar14 * 0x18;
  memmove((void *)((longlong)FVar12 + lVar3 + 0x18),(void *)((longlong)FVar12 + lVar3),
          (longlong)(int)(iVar10 - uVar14) * 0x18);
  FVar15 = (this->Entries).AllocatorInstance.SecondaryData;
  FVar12 = (ForElementType<FMovieSceneChannelEntry>)this;
  if (FVar15 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar12 = FVar15;
  }
  *(FName *)((longlong)FVar12 + lVar3) = local_68;
  puVar2 = (uchar *)((longlong)FVar12 + 8) + lVar3;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar12 + 8) + lVar3) = local_60;
  local_60 = 0;
  *(undefined4 *)((uchar *)((longlong)FVar12 + 0x10) + lVar3) = (undefined4)local_58;
  *(undefined4 *)((uchar *)((longlong)FVar12 + 0x14) + lVar3) = local_58._4_4_;
  local_58 = 0;
LAB_14606a2da:
  if ((((int)uVar14 < 0) || ((this->Entries).ArrayNum <= (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entries.IsValidIndex(ChannelTypeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelProxy.h"
                         ,0x19f,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return iVar10;
  }
  if ((int)uVar14 < (this->Entries).ArrayNum) {
    uVar16 = ~uVar14 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return iVar10;
  }
  FVar15 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar15 != (ForElementType<FMovieSceneChannelEntry>)0x0) {
    this = (FMovieSceneChannelProxyData *)FVar15;
  }
  local_98 = (FMovieSceneTimeWarpChannel *)local_res8.Value;
  lVar3 = (longlong)this + (longlong)(int)uVar14 * 0x18;
  if (((*(FMovieSceneTimeWarpChannel ***)(lVar3 + 8) <= &local_98) &&
      (&local_98 < *(FMovieSceneTimeWarpChannel ***)(lVar3 + 8) + *(int *)(lVar3 + 0x14))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return iVar10;
  }
  iVar10 = *(int *)(lVar3 + 0x10);
  if (iVar10 == *(int *)(lVar3 + 0x14)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)(lVar3 + 8),(int *)(lVar3 + 0x14));
  }
  *(int *)(lVar3 + 0x10) = iVar10 + 1;
  *(FMovieSceneTimeWarpChannel **)(*(longlong *)(lVar3 + 8) + (longlong)iVar10 * 8) = local_98;
  return uVar14;
}

// AddInternal<FMovieSceneDoubleChannel> @ 14627ced0

int __thiscall
FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>
          (FMovieSceneChannelProxyData *this,FMovieSceneDoubleChannel *param_1)

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
  FMovieSceneDoubleChannel *local_58;
  FMovieSceneChannelEntry local_50;
  
  pUVar7 = FMovieSceneDoubleChannel::StaticStruct();
  FMovieSceneChannelHandle::TrackChannelTypeNameInternal((UStruct *)pUVar7);
  pUVar7 = FMovieSceneDoubleChannel::StaticStruct();
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
    goto LAB_14627d036;
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
LAB_14627d036:
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
  if (((*(FMovieSceneDoubleChannel ***)(lVar9 + 8) <= &local_58) &&
      (&local_58 < *(FMovieSceneDoubleChannel ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  *(FMovieSceneDoubleChannel **)(*(longlong *)(lVar9 + 8) + (longlong)iVar6 * 8) = local_58;
  return uVar10;
}

