// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 148334880

UScriptStruct * __cdecl FPlayerMuteList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlayerMuteList.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPlayerMuteList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMuteList,(UObject *)pUVar1,
                         L"PlayerMuteList");
  }
  return Z_Registration_Info_UScriptStruct_FPlayerMuteList.OuterSingleton;
}

// AddVoiceBlockReason @ 148357340

bool __thiscall
FPlayerMuteList::AddVoiceBlockReason
          (FPlayerMuteList *this,TSharedPtr<FUniqueNetId_const_,1> *param_1,
          EVoiceBlockReasons param_2)

{
  EVoiceBlockReasons EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  TSharedRef<FUniqueNetId_const_,1> *local_res8;
  int local_res18 [4];
  TSharedRef<FUniqueNetId_const_,1> local_28;
  
  if ((param_2 == None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceBlockReason != EVoiceBlockReasons::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerMuteList.cpp"
                         ,0x35,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->Object == (FUniqueNetId *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  local_28.Object = param_1->Object;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_28.Object == (FUniqueNetId *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar5 = (**(code **)(*(longlong *)local_28.Object + 0x40))();
  iVar6 = TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons>,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_>(this,uVar5,&local_28);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)&this->VoicePacketFilterMap, lVar7 == 0)) {
    local_res8 = &local_28;
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons>,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TSharedRef<FUniqueNetId_const_,1>_&&>_>
              (this,(uint)local_res18,
               (TKeyInitializer<TSharedRef<FUniqueNetId_const_,1>_&&> *)(ulonglong)uVar5,
               (bool *)&local_res8);
    lVar7 = (longlong)local_res18[0] * 0x20 + *(longlong *)&this->VoicePacketFilterMap;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  EVar1 = *(EVoiceBlockReasons *)(lVar7 + 0x10);
  *(EVoiceBlockReasons *)(lVar7 + 0x10) = EVar1 | param_2;
  if (((EVar1 & (Blocked|Gameplay|Muted)) == None) && (param_2 != BlockedBy)) {
    return true;
  }
  return false;
}

// GameplayMutePlayer @ 14837ca40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPlayerMuteList::GameplayMutePlayer
          (FPlayerMuteList *this,APlayerController *param_1,FUniqueNetIdRepl *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar3;
  TSharedPtr<FUniqueNetId_const_,1> local_48;
  undefined **local_38;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_30;
  undefined8 local_18;
  undefined8 local_10;
  
  pTVar3 = FUniqueNetIdWrapper::GetUniqueNetId((FUniqueNetIdWrapper *)param_2,&local_48);
  bVar2 = AddVoiceBlockReason(this,pTVar3,Gameplay);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (bVar2) {
    pcVar1 = *(code **)(param_1->_padding_ + 0xcd8);
    local_38 = &___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              (&local_30,
               (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&param_2->_padding_);
    local_38 = &___7FUniqueNetIdRepl__6B_;
    local_18 = 0;
    local_10 = 0;
    (*pcVar1)(param_1,&local_38);
  }
  return;
}

// GameplayUnmuteAllPlayers @ 14837cb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPlayerMuteList::GameplayUnmuteAllPlayers(FPlayerMuteList *this,APlayerController *param_1)

{
  undefined1 *puVar1;
  EVoiceBlockReasons EVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FUniqueNetId *pFVar5;
  code *pcVar6;
  FPlayerMuteList *pFVar7;
  bool bVar8;
  int iVar9;
  EVoiceBlockReasons *pEVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  FUniqueNetIdRepl *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  undefined8 local_f8;
  FPlayerMuteList *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  int local_bc;
  APlayerController *local_b8;
  FPlayerMuteList *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  TSharedRef<FUniqueNetId_const_,1> local_80;
  undefined1 local_70 [24];
  FScriptContainerElement local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_158;
  puVar1 = &(this->VoicePacketFilterMap).field_0x10;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  iVar9 = *(int *)&(this->VoicePacketFilterMap).field_0x28;
  iStack_e8 = 0;
  uStack_e4 = 1;
  iStack_d4 = 0;
  local_d0 = iStack_e8;
  if (iVar9 != 0) {
    puVar19 = *(uint **)&(this->VoicePacketFilterMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    local_d0 = 0;
    iStack_e8 = 0;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_e8;
      local_d0 = local_d0 + 0x20;
      iStack_e8 = iStack_e8 + 1;
      iStack_d4 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_14837cbbd;
      uVar17 = puVar19[lVar11 + 1];
    }
    uStack_e4 = -uVar17 & uVar17;
    uVar14 = (ulonglong)uStack_e4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_c0 = (int)lVar11;
    iStack_d4 = local_d0 + -1 + local_c0;
    if (iVar9 < iStack_d4) {
      iStack_d4 = iVar9;
    }
  }
LAB_14837cbbd:
  uVar17 = *(uint *)&(this->VoicePacketFilterMap).field_0x28;
  uVar15 = uVar17 & 0xffffffe0;
  iStack_c8 = *(int *)&(this->VoicePacketFilterMap).field_0x8 -
              *(int *)&(this->VoicePacketFilterMap).field_0x34;
  uStack_d8 = 0xffffffff;
  TStack_a8._padding_ = CONCAT44(uStack_e4,iStack_e8);
  TStack_a8.CurrentBitIndex = iStack_d4;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_a8._28_4_ = iStack_d4;
  TStack_a8.BaseBitIndex = local_d0;
  uStack_88 = CONCAT44(uStack_c4,iStack_c8);
  local_f0 = this;
  local_e0 = puVar1;
  iStack_cc = iStack_d4;
  local_b8 = param_1;
  local_b0 = this;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar9 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(this->VoicePacketFilterMap).field_0x28;
  if (uVar17 != uVar3) {
    puVar18 = *(undefined1 **)&(this->VoicePacketFilterMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14837ccd0;
      uVar17 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_bc = (int)lVar11;
    uVar17 = local_bc + -1 + uVar15;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_14837ccd0:
  do {
    pFVar7 = local_b0;
    if (*(int *)&(local_b0->VoicePacketFilterMap).field_0x8 -
        *(int *)&(local_b0->VoicePacketFilterMap).field_0x34 != (int)uStack_88) {
      local_108[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (((TStack_a8.CurrentBitIndex == uVar17) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == this)) {
      if (0 < (int)local_f8) {
        (**(code **)(local_b8->_padding_ + 0xcf8))(local_b8,&local_100);
      }
      DestructItems<FUniqueNetIdRepl,int>((FUniqueNetIdRepl *)local_100.Data,(int)local_f8);
      if ((FUniqueNetIdRepl *)local_100.Data != (FUniqueNetIdRepl *)0x0) {
        FMemory::Free(local_100.Data);
      }
      return;
    }
    plVar16 = (longlong *)
              ((longlong)TStack_a8.CurrentBitIndex * 0x20 +
              *(longlong *)&pFVar7->VoicePacketFilterMap);
    pTVar4 = (TReferenceControllerBase<1> *)plVar16[1];
    pFVar5 = (FUniqueNetId *)*plVar16;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar5 == (FUniqueNetId *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_80.Object = pFVar5;
    local_80.SharedReferenceCount.ReferenceController = pTVar4;
    if ((pFVar5 == (FUniqueNetId *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pEVar10 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>_>
              ::Find(this,&local_80);
    if (pEVar10 == (EVoiceBlockReasons *)0x0) {
LAB_14837cdb5:
      bVar8 = false;
    }
    else {
      EVar2 = *pEVar10;
      *pEVar10 = EVar2 & ~Gameplay;
      if (((EVar2 & (Blocked|Gameplay|Muted)) == None) || ((EVar2 & (Blocked|Muted)) != None))
      goto LAB_14837cdb5;
      bVar8 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (bVar8) {
      local_70._0_8_ = &___7FUniqueNetIdWrapper__6B_;
      local_58 = (FScriptContainerElement)0x0;
      local_70._8_8_ = 0;
      local_70._16_8_ = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_70._8_8_ = *plVar16;
      local_70._16_8_ = plVar16[1];
      if ((TReferenceControllerBase<1> *)local_70._16_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_70._16_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_70._16_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_70._0_8_ = &___7FUniqueNetIdRepl__6B_;
      local_50.Data = (FScriptContainerElement *)0x0;
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
      local_58 = (FScriptContainerElement)0x0;
      if (local_100.Data <= (FUniqueNetIdRepl *)local_70) {
        if ((FScriptContainerElement *)local_70 < local_100.Data + (longlong)local_f8._4_4_ * 0x30)
        {
          local_120 = (longlong)(int)local_f8;
          local_118 = 0x30;
          local_138 = local_70;
          local_130 = (FUniqueNetIdRepl *)local_100.Data;
          local_128 = (longlong)local_f8._4_4_;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      iVar9 = (int)local_f8;
      if ((int)local_f8 == local_f8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_100,(int *)((longlong)&local_f8 + 4));
      }
      local_f8 = CONCAT44(local_f8._4_4_,iVar9 + 1);
      pFVar13 = local_100.Data + (longlong)iVar9 * 0x30;
      *(undefined ***)&pFVar13->field_0x0 = &___7FUniqueNetIdWrapper__6B_;
      uVar14 = (ulonglong)(byte)local_58;
      pFVar13[0x18] = local_58;
      if ((1 < (byte)local_58) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar14] ==
          UE::Core::Private::TCopyConstructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Construct)
      {
        *(undefined8 *)(pFVar13 + 8) = local_70._8_8_;
        *(undefined8 *)(pFVar13 + 0x10) = local_70._16_8_;
        if ((TReferenceControllerBase<1> *)local_70._16_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *(atomic<int> *)(local_70._16_8_ + 8) =
               (atomic<int>)((int)*(atomic<int> *)(local_70._16_8_ + 8) + 1);
          UNLOCK();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar14])(pFVar13 + 8,local_70 + 8);
      }
      *(undefined ***)&pFVar13->field_0x0 = &___7FUniqueNetIdRepl__6B_;
      *(undefined8 *)(pFVar13 + 0x20) = 0;
      *(undefined8 *)(pFVar13 + 0x28) = 0;
      local_70._0_8_ = &___7FUniqueNetIdRepl__6B_;
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      uVar14 = (ulonglong)(byte)local_58;
      if ((1 < (byte)local_58) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_70._16_8_);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(local_70 + 8);
      }
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
}

// GameplayUnmutePlayer @ 14837d120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPlayerMuteList::GameplayUnmutePlayer
          (FPlayerMuteList *this,APlayerController *param_1,FUniqueNetIdRepl *param_2)

{
  EVoiceBlockReasons EVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FUniqueNetId_const_,1> *this_00;
  TSharedRef<FUniqueNetId_const_,1> *pTVar4;
  EVoiceBlockReasons *pEVar5;
  TSharedPtr<FUniqueNetId_const_,1> local_58;
  TSharedRef<FUniqueNetId_const_,1> local_48;
  undefined **local_38;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_30;
  undefined8 local_18;
  undefined8 local_10;
  
  this_00 = FUniqueNetIdWrapper::GetUniqueNetId((FUniqueNetIdWrapper *)param_2,&local_58);
  pTVar4 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(this_00,&local_48);
  pEVar5 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>_>
           ::Find(this,pTVar4);
  if (pEVar5 != (EVoiceBlockReasons *)0x0) {
    EVar1 = *pEVar5;
    *pEVar5 = EVar1 & ~Gameplay;
    if (((EVar1 & (Blocked|Gameplay|Muted)) != None) && ((EVar1 & (Blocked|Muted)) == None)) {
      bVar3 = true;
      goto LAB_14837d17d;
    }
  }
  bVar3 = false;
LAB_14837d17d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (bVar3) {
    pcVar2 = *(code **)(param_1->_padding_ + 0xce0);
    local_38 = &___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              (&local_30,
               (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&param_2->_padding_);
    local_38 = &___7FUniqueNetIdRepl__6B_;
    local_18 = 0;
    local_10 = 0;
    (*pcVar2)(param_1,&local_38);
  }
  return;
}

// IsPlayerMuted @ 148392e30

bool __thiscall FPlayerMuteList::IsPlayerMuted(FPlayerMuteList *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  uint uVar5;
  int iVar6;
  FUniqueNetId *pFVar7;
  FUniqueNetId *pFVar8;
  longlong lVar9;
  FUniqueNetId *pFVar10;
  FUniqueNetId *pFVar11;
  bool bVar12;
  TSharedRef<FUniqueNetId_const_,1> local_28;
  
  pFVar7 = *(FUniqueNetId **)&param_1->field_0x10;
  pFVar11 = (FUniqueNetId *)0x0;
  pFVar8 = pFVar11;
  pFVar10 = pFVar7;
  if (pFVar7 != (FUniqueNetId *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar7->field_0x8;
    do {
      pFVar10 = pFVar11;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148392e8f;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar7->field_0x8;
      bVar12 = aVar2 == aVar4;
      if (bVar12) {
        *(atomic<int> *)&pFVar7->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar12);
    pFVar8 = *(FUniqueNetId **)&param_1->field_0x8;
    pFVar10 = pFVar7;
  }
LAB_148392e8f:
  pFVar7 = (FUniqueNetId *)&pFVar8->field_0x8;
  if (pFVar8 == (FUniqueNetId *)0x0) {
    pFVar7 = pFVar11;
  }
  if ((pFVar7 != (FUniqueNetId *)&param_1->field_0x8) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x69a,L""), bVar12)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (pFVar8 == (FUniqueNetId *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar12) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar12) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar10 != (FUniqueNetId *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar10->field_0x8 =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->field_0x8 + 1);
    UNLOCK();
  }
  local_28.Object = pFVar8;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  uVar5 = (**(code **)(*(longlong *)pFVar8 + 0x40))(pFVar8);
  iVar6 = TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons>,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_>(this,uVar5,&local_28);
  if (iVar6 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  else {
    lVar9 = (longlong)iVar6 * 0x20 + *(longlong *)&this->VoicePacketFilterMap;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    pFVar7 = (FUniqueNetId *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      pFVar7 = pFVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    if ((pFVar7 != (FUniqueNetId *)0x0) && (*(char *)pFVar7 != '\0')) {
      return true;
    }
  }
  return false;
}

// RemoveVoiceBlockReason @ 1483a0df0

bool __thiscall
FPlayerMuteList::RemoveVoiceBlockReason
          (FPlayerMuteList *this,TSharedPtr<FUniqueNetId_const_,1> *param_1,
          EVoiceBlockReasons param_2)

{
  EVoiceBlockReasons EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<FUniqueNetId_const_,1> *pTVar5;
  EVoiceBlockReasons *pEVar6;
  EVoiceBlockReasons EVar7;
  TSharedRef<FUniqueNetId_const_,1> local_18;
  
  if (param_2 == None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VoiceBlockReason != EVoiceBlockReasons::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerMuteList.cpp"
                       ,0x41,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar5 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(param_1,&local_18);
  pEVar6 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>_>
           ::Find(this,pTVar5);
  if (pEVar6 != (EVoiceBlockReasons *)0x0) {
    EVar1 = *pEVar6;
    EVar7 = ~param_2 & EVar1;
    *pEVar6 = EVar7;
    if (((EVar1 & (Blocked|Gameplay|Muted)) != None) && ((EVar7 & (Blocked|Gameplay|Muted)) == None)
       ) {
      return true;
    }
  }
  return false;
}

// ServerBlockPlayer @ 1483a4110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPlayerMuteList::ServerBlockPlayer
          (FPlayerMuteList *this,APlayerController *param_1,FUniqueNetIdRepl *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar3;
  longlong lVar4;
  TSharedPtr<FUniqueNetId_const_,1> local_48;
  undefined **local_38;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_30;
  undefined8 local_18;
  undefined8 local_10;
  
  pTVar3 = FUniqueNetIdWrapper::GetUniqueNetId((FUniqueNetIdWrapper *)param_2,&local_48);
  bVar2 = AddVoiceBlockReason(this,pTVar3,Blocked);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (bVar2) {
    pcVar1 = *(code **)(param_1->_padding_ + 0xcd8);
    local_38 = &___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              (&local_30,
               (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&param_2->_padding_);
    local_38 = &___7FUniqueNetIdRepl__6B_;
    local_18 = 0;
    local_10 = 0;
    (*pcVar1)(param_1,&local_38);
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0xd00))(param_1,param_2);
  if (lVar4 != 0) {
    pTVar3 = FUniqueNetIdWrapper::GetUniqueNetId
                       ((FUniqueNetIdWrapper *)(param_1->_padding_ + 0x2d0),&local_48);
    AddVoiceBlockReason((FPlayerMuteList *)(lVar4 + 0x500),pTVar3,BlockedBy);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ServerMutePlayer @ 1483a4b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPlayerMuteList::ServerMutePlayer
          (FPlayerMuteList *this,APlayerController *param_1,FUniqueNetIdRepl *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar3;
  TSharedPtr<FUniqueNetId_const_,1> local_48;
  undefined **local_38;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_30;
  undefined8 local_18;
  undefined8 local_10;
  
  pTVar3 = FUniqueNetIdWrapper::GetUniqueNetId((FUniqueNetIdWrapper *)param_2,&local_48);
  bVar2 = AddVoiceBlockReason(this,pTVar3,Muted);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (bVar2) {
    pcVar1 = *(code **)(param_1->_padding_ + 0xcd8);
    local_38 = &___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              (&local_30,
               (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&param_2->_padding_);
    local_38 = &___7FUniqueNetIdRepl__6B_;
    local_18 = 0;
    local_10 = 0;
    (*pcVar1)(param_1,&local_38);
  }
  return;
}

// ServerUnblockPlayer @ 1483a5f70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPlayerMuteList::ServerUnblockPlayer
          (FPlayerMuteList *this,APlayerController *param_1,FUniqueNetIdRepl *param_2)

{
  EVoiceBlockReasons EVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar4;
  TSharedRef<FUniqueNetId_const_,1> *pTVar5;
  EVoiceBlockReasons *pEVar6;
  longlong lVar7;
  TSharedPtr<FUniqueNetId_const_,1> local_58;
  TSharedRef<FUniqueNetId_const_,1> local_48;
  undefined **local_38;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_30;
  undefined8 local_18;
  undefined8 local_10;
  
  pTVar4 = FUniqueNetIdWrapper::GetUniqueNetId((FUniqueNetIdWrapper *)param_2,&local_58);
  pTVar5 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(pTVar4,&local_48);
  pEVar6 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>_>
           ::Find(this,pTVar5);
  if (pEVar6 != (EVoiceBlockReasons *)0x0) {
    EVar1 = *pEVar6;
    *pEVar6 = EVar1 & ~Blocked;
    if (((EVar1 & (Blocked|Gameplay|Muted)) != None) && ((EVar1 & (Gameplay|Muted)) == None)) {
      bVar3 = true;
      goto LAB_1483a5fcd;
    }
  }
  bVar3 = false;
LAB_1483a5fcd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (bVar3) {
    pcVar2 = *(code **)(param_1->_padding_ + 0xce0);
    local_38 = &___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              (&local_30,
               (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&param_2->_padding_);
    local_38 = &___7FUniqueNetIdRepl__6B_;
    local_18 = 0;
    local_10 = 0;
    (*pcVar2)(param_1,&local_38);
  }
  lVar7 = (**(code **)(param_1->_padding_ + 0xd00))(param_1,param_2);
  if (lVar7 != 0) {
    pTVar4 = FUniqueNetIdWrapper::GetUniqueNetId
                       ((FUniqueNetIdWrapper *)(param_1->_padding_ + 0x2d0),&local_58);
    pTVar5 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(pTVar4,&local_48);
    pEVar6 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>_>
             ::Find((void *)(lVar7 + 0x500),pTVar5);
    if (pEVar6 != (EVoiceBlockReasons *)0x0) {
      *pEVar6 = *pEVar6 & ~BlockedBy;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ServerUnmutePlayer @ 1483a6350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPlayerMuteList::ServerUnmutePlayer
          (FPlayerMuteList *this,APlayerController *param_1,FUniqueNetIdRepl *param_2)

{
  EVoiceBlockReasons EVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FUniqueNetId_const_,1> *this_00;
  TSharedRef<FUniqueNetId_const_,1> *pTVar4;
  EVoiceBlockReasons *pEVar5;
  TSharedPtr<FUniqueNetId_const_,1> local_58;
  TSharedRef<FUniqueNetId_const_,1> local_48;
  undefined **local_38;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  local_30;
  undefined8 local_18;
  undefined8 local_10;
  
  this_00 = FUniqueNetIdWrapper::GetUniqueNetId((FUniqueNetIdWrapper *)param_2,&local_58);
  pTVar4 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(this_00,&local_48);
  pEVar5 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,enum_EVoiceBlockReasons,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<enum_EVoiceBlockReasons>_>
           ::Find(this,pTVar4);
  if (pEVar5 != (EVoiceBlockReasons *)0x0) {
    EVar1 = *pEVar5;
    *pEVar5 = EVar1 & ~Muted;
    if (((EVar1 & (Blocked|Gameplay|Muted)) != None) && ((EVar1 & (Blocked|Gameplay)) == None)) {
      bVar3 = true;
      goto LAB_1483a63ad;
    }
  }
  bVar3 = false;
LAB_1483a63ad:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (bVar3) {
    pcVar2 = *(code **)(param_1->_padding_ + 0xce0);
    local_38 = &___7FUniqueNetIdWrapper__6B_;
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
    ::
    TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              (&local_30,
               (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *)&param_2->_padding_);
    local_38 = &___7FUniqueNetIdRepl__6B_;
    local_18 = 0;
    local_10 = 0;
    (*pcVar2)(param_1,&local_38);
  }
  return;
}

