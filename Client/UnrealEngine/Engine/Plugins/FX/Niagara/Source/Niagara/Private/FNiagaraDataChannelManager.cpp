// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 13

// FNiagaraDataChannelManager @ 1490b1540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraDataChannelManager * __thiscall
FNiagaraDataChannelManager::FNiagaraDataChannelManager
          (FNiagaraDataChannelManager *this,FNiagaraWorldManager *param_1)

{
  this->WorldMan = param_1;
  *(undefined8 *)&this->Channels = 0;
  *(undefined8 *)&(this->Channels).field_0x8 = 0;
  *(undefined8 *)&(this->Channels).field_0x20 = 0;
  *(undefined4 *)&(this->Channels).field_0x28 = 0;
  *(undefined4 *)&(this->Channels).field_0x2c = 0x80;
  *(undefined4 *)&(this->Channels).field_0x34 = 0;
  *(undefined4 *)&(this->Channels).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Channels).field_0x40 = 0;
  *(undefined4 *)&(this->Channels).field_0x48 = 0;
  this->bIsCleanedUp = false;
  this->bIsInitialized = false;
  return this;
}

// AddReferencedObjects @ 1490cb290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDataChannelManager::AddReferencedObjects
          (FNiagaraDataChannelManager *this,FReferenceCollector *param_1)

{
  FReferenceCollector::
  AddReferencedObjects<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,UNiagaraDataChannelHandler,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
            (param_1,(TMapBase<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
                      *)&this->Channels,(UObject *)0x0,(FProperty *)0x0);
  return;
}

// BeginFrame @ 1490cd7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDataChannelManager::BeginFrame(FNiagaraDataChannelManager *this,float param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_DataChannelManager_BeginFrame> FVar9;
  UObject *pUVar10;
  uint uVar11;
  FColor_u_0 FVar12;
  FName FVar13;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *pTVar14;
  ulonglong uVar15;
  uint uVar16;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20;
  uint local_res24;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
  *local_88;
  char local_80;
  char cStack_7f;
  FName local_78;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  if (!INiagaraModule::bDataChannelsEnabled) {
    return;
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelManager.cpp"
                         ,0x4a,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar9 = StatPtr_STAT_DataChannelManager_BeginFrame;
  if (StatPtr_STAT_DataChannelManager_BeginFrame ==
      (FThreadSafeStaticStat<FStat_STAT_DataChannelManager_BeginFrame>)0x0) {
    pFVar8 = ::FName::FName(&local_78,"STAT_DataChannelManager_BeginFrame");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_DataChannelManager_BeginFrame>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DataChannelManager_BeginFrame,
                       *pFVar8,L"FNiagaraDataChannelManager::BeginFrame",
                       "STATGROUP_NiagaraDataChannels","STATCAT_Niagara",L"Niagara Data Channels",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar6 = false;
  bVar5 = false;
  FVar12.Bits = (uint)FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Bits != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar12.Bits;
        local_res24 = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelManager.cpp"
                   ,0x4b);
        bVar6 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar12.Bits;
      uStackX_1c = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_1490cd947;
    }
  }
  bVar4 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_1490cd947:
  if (__CsvProfilerStat76 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("CoreSystems_NiagaraDataChannelManager",_GCsvCategory_Particles.Index);
    __CsvProfilerStat76 = true;
  }
  uVar11 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_NiagaraDataChannelManager",_GCsvCategory_Particles.Index,
             "CSV_CoreSystems_NiagaraDataChannelManager");
  if ((this->bIsCleanedUp == false) && (this->bIsInitialized == false)) {
    this->bIsCleanedUp = false;
    this->bIsInitialized = true;
    UNiagaraDataChannel::ForEachDataChannel<_FNiagaraDataChannelManager::Init_::__l2::<lambda_1>_>
              ((<lambda_1>)this);
  }
  pTVar14 = &this->Channels;
  TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_70,
             (TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
              *)pTVar14);
  local_80 = '\0';
  cStack_7f = '\0';
  stack0xffffffffffffff58 = local_70._16_16_;
  auStack_b0._0_8_ = local_70._8_8_;
  local_98 = local_50;
  pTStack_90 = pTStack_48;
  uVar15 = local_70._24_8_ >> 0x20;
  local_88 = (TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
              *)pTVar14;
  if (local_70._28_4_ < *(int *)(local_70._16_8_ + 0x18)) {
    do {
      iVar7 = (int)uVar15;
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (*(longlong *)local_70._0_8_ + (longlong)iVar7 * 0x18));
      plVar1 = *(longlong **)(*(longlong *)local_70._0_8_ + 8 + (longlong)iVar7 * 0x18);
      lVar2 = *plVar1;
      if (pUVar10 == (UObject *)0x0) {
        (**(code **)(lVar2 + 0x2b8))();
        TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_90,iVar7);
        local_80 = '\x01';
      }
      else {
        (**(code **)(lVar2 + 0x2c0))(plVar1,param_1);
      }
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar15 = (ulonglong)uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if ((local_80 != '\0') && (cStack_7f != '\0')) {
      uVar16 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (uVar16 < 4) {
        iVar7 = 1;
      }
      else {
        uVar15 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar16) && (local_88->HashSize < iVar7)) || (iVar7 < local_88->HashSize)) {
        local_88->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  FCsvProfiler::EndStat("CoreSystems_NiagaraDataChannelManager",uVar11);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// Cleanup @ 1490d2b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraDataChannelManager::Cleanup(FNiagaraDataChannelManager *this)

{
  undefined1 *puVar1;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Channels).field_0x28;
  puVar1 = &(this->Channels).field_0x10;
  iVar10 = 0;
  this_00 = &this->Channels;
  iVar12 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Channels).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1490d2bcd;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1490d2bcd:
  uVar9 = *(uint *)&(this->Channels).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Channels).field_0x8 - *(int *)&(this->Channels).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Channels).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->Channels).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1490d2cd0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_1490d2cd0:
  while( true ) {
    if (*(int *)&(this->Channels).field_0x8 - *(int *)&(this->Channels).field_0x34 != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(**(longlong **)
                   (*(longlong *)&this_00->field_0x0 + 8 +
                   (longlong)TStack_60.CurrentBitIndex * 0x18) + 0x2b8))();
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar5 = 1 < *(int *)&(this->Channels).field_0x48;
  if (!bVar5) {
    TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->Channels).field_0xc;
  *(undefined4 *)&(this->Channels).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Channels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Channels).field_0x34 = 0;
  iVar3 = *(int *)&(this->Channels).field_0x2c;
  *(undefined4 *)&(this->Channels).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->Channels).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Channels).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->Channels).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this->bIsCleanedUp = true;
  this->bIsInitialized = false;
  return;
}

// EndFrame @ 1490f02c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraDataChannelManager::EndFrame(FNiagaraDataChannelManager *this,float param_1)

{
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_DataChannelManager_EndFrame> FVar10;
  UObject *pUVar11;
  uint uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  ulonglong uVar15;
  uint uVar16;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20;
  uint local_res24;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
  *local_88;
  char local_80;
  char cStack_7f;
  FName local_78;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  if (!INiagaraModule::bDataChannelsEnabled) {
    return;
  }
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelManager.cpp"
                         ,0x67,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = StatPtr_STAT_DataChannelManager_EndFrame;
  if (StatPtr_STAT_DataChannelManager_EndFrame ==
      (FThreadSafeStaticStat<FStat_STAT_DataChannelManager_EndFrame>)0x0) {
    pFVar9 = ::FName::FName(&local_78,"STAT_DataChannelManager_EndFrame");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_DataChannelManager_EndFrame>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DataChannelManager_EndFrame,
                        *pFVar9,L"FNiagaraDataChannelManager::EndFrame",
                        "STATGROUP_NiagaraDataChannels","STATCAT_Niagara",L"Niagara Data Channels",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar7 = false;
  bVar6 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar13.Bits;
        local_res24 = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelManager.cpp"
                   ,0x68);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar13.Bits;
      uStackX_1c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_1490f0447;
    }
  }
  bVar5 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1490f0447:
  if (__CsvProfilerStat105 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("CoreSystems_NiagaraDataChannelManager",_GCsvCategory_Particles.Index);
    __CsvProfilerStat105 = true;
  }
  uVar12 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_NiagaraDataChannelManager",_GCsvCategory_Particles.Index,
             "CSV_CoreSystems_NiagaraDataChannelManager");
  pTVar1 = &this->Channels;
  TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_70,
             (TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_80 = '\0';
  cStack_7f = '\0';
  stack0xffffffffffffff58 = local_70._16_16_;
  auStack_b0._0_8_ = local_70._8_8_;
  local_98 = local_50;
  pTStack_90 = pTStack_48;
  uVar15 = local_70._24_8_ >> 0x20;
  local_88 = (TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_70._28_4_ < *(int *)(local_70._16_8_ + 0x18)) {
    do {
      iVar8 = (int)uVar15;
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (*(longlong *)local_70._0_8_ + (longlong)iVar8 * 0x18));
      plVar2 = *(longlong **)(*(longlong *)local_70._0_8_ + 8 + (longlong)iVar8 * 0x18);
      lVar3 = *plVar2;
      if (pUVar11 == (UObject *)0x0) {
        (**(code **)(lVar3 + 0x2b8))();
        TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_90,iVar8);
        local_80 = '\x01';
      }
      else {
        (**(code **)(lVar3 + 0x2c8))(plVar2,param_1);
      }
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar15 = (ulonglong)uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if ((local_80 != '\0') && (cStack_7f != '\0')) {
      uVar16 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (uVar16 < 4) {
        iVar8 = 1;
      }
      else {
        uVar15 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar16) && (local_88->HashSize < iVar8)) || (iVar8 < local_88->HashSize)) {
        local_88->HashSize = iVar8;
        TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  FCsvProfiler::EndStat("CoreSystems_NiagaraDataChannelManager",uVar12);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return;
}

// FindDataChannelHandler @ 1490f9470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler * __thiscall
FNiagaraDataChannelManager::FindDataChannelHandler
          (FNiagaraDataChannelManager *this,UNiagaraDataChannel *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UNiagaraDataChannelHandler *pUVar5;
  undefined8 *puVar6;
  FWeakObjectPtr local_res10;
  UNiagaraDataChannel *local_res18;
  FWeakObjectPtr local_res20;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelManager.cpp"
                       ,0x95,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UNiagaraDataChannelHandler *)(*pcVar2)();
      return pUVar5;
    }
  }
  if (param_1 != (UNiagaraDataChannel *)0x0) {
    if (GNDCAllowLazyHandlerInit != 0) {
      pUVar5 = InitDataChannel(this,param_1,false);
      return pUVar5;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    local_res20 = local_res10;
    iVar4 = TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
                        *)&this->Channels,local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                       (TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr> *)&local_res20);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->Channels + (longlong)iVar4 * 0x18;
      puVar6 = (undefined8 *)(lVar1 + 8);
      if (lVar1 == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      if (puVar6 != (undefined8 *)0x0) {
        return (UNiagaraDataChannelHandler *)*puVar6;
      }
    }
  }
  return (UNiagaraDataChannelHandler *)0x0;
}

// GetWorld @ 149111ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UWorld * __thiscall FNiagaraDataChannelManager::GetWorld(FNiagaraDataChannelManager *this)

{
  UWorld *pUVar1;
  
  pUVar1 = FNiagaraWorldManager::GetWorld(this->WorldMan);
  return pUVar1;
}

// Init @ 149113c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraDataChannelManager::Init(FNiagaraDataChannelManager *this)

{
  this->bIsCleanedUp = false;
  this->bIsInitialized = true;
  UNiagaraDataChannel::ForEachDataChannel<_FNiagaraDataChannelManager::Init_::__l2::<lambda_1>_>
            ((<lambda_1>)this);
  return;
}

// InitDataChannel @ 149114800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler * __thiscall
FNiagaraDataChannelManager::InitDataChannel
          (FNiagaraDataChannelManager *this,UNiagaraDataChannel *param_1,bool param_2)

{
  FNiagaraDataChannelLayoutInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UNiagaraDataChannelHandler *pUVar5;
  UWorld *pUVar6;
  UObject *pUVar7;
  longlong lVar8;
  uint uVar9;
  int local_res8 [2];
  FWeakObjectPtr local_res20;
  UNiagaraDataChannel *local_38;
  FWeakObjectPtr *local_30;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelManager.cpp"
                         ,0xad,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UNiagaraDataChannelHandler *)(*pcVar2)();
    return pUVar5;
  }
  pUVar6 = FNiagaraWorldManager::GetWorld(this->WorldMan);
  if (((((INiagaraModule::bDataChannelsEnabled == false) || (pUVar6 == (UWorld *)0x0)) ||
       (pFVar1 = (param_1->LayoutInfo).Object, pFVar1 == (FNiagaraDataChannelLayoutInfo *)0x0)) ||
      ((iVar4 = (param_1->ChannelVariables).ArrayNum, iVar4 < 1 ||
       ((pFVar1->CompiledData).Variables.ArrayNum != iVar4)))) ||
     ((pFVar1->CompiledDataGPU).Variables.ArrayNum != (param_1->ChannelVariables).ArrayNum)) {
    return (UNiagaraDataChannelHandler *)0x0;
  }
  if ((this->bIsCleanedUp == false) && (this->bIsInitialized == false)) {
    this->bIsCleanedUp = false;
    this->bIsInitialized = true;
    UNiagaraDataChannel::ForEachDataChannel<_FNiagaraDataChannelManager::Init_::__l2::<lambda_1>_>
              ((<lambda_1>)this);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_38 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_38);
  uVar9 = local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex;
  iVar4 = TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
                      *)&this->Channels,uVar9,
                     (TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr> *)&local_res20);
  if ((iVar4 == -1) || (lVar8 = *(longlong *)&this->Channels + (longlong)iVar4 * 0x18, lVar8 == 0))
  {
    local_30 = &local_res20;
    TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
                *)&this->Channels,(uint)local_res8,
               (TKeyInitializer<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>_&&> *)
               (ulonglong)uVar9,(bool *)&local_30);
    lVar8 = *(longlong *)&this->Channels + (longlong)local_res8[0] * 0x18;
  }
  if (param_2) {
    if (*(longlong **)(lVar8 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar8 + 8) + 0x2b8))();
    }
  }
  else if (*(longlong *)(lVar8 + 8) != 0) goto LAB_1491149e2;
  pcVar2 = *(code **)(param_1->_padding_ + 0x2b8);
  pUVar6 = FNiagaraWorldManager::GetWorld(this->WorldMan);
  pUVar7 = (UObject *)(*pcVar2)(param_1,pUVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  *(UObject **)(lVar8 + 8) = pUVar7;
  *(FNiagaraWorldManager **)(pUVar7 + 1) = this->WorldMan;
LAB_1491149e2:
  return *(UNiagaraDataChannelHandler **)(lVar8 + 8);
}

// OnComputeDispatchInterfaceDestroyed @ 149119cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraDataChannelManager::OnComputeDispatchInterfaceDestroyed
          (FNiagaraDataChannelManager *this,FNiagaraGpuComputeDispatchInterface *param_1)

{
  undefined1 *puVar1;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  atomic<int> aVar8;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *pTVar9;
  bool bVar10;
  atomic<int> aVar11;
  longlong lVar12;
  int iVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined8 local_c8;
  FSharedReferencer<1> FStack_c0;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelManager.cpp"
                          ,0xdb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar4 = *(int *)&(this->Channels).field_0x28;
  puVar1 = &(this->Channels).field_0x10;
  iStack_b0 = 0;
  pTVar2 = &this->Channels;
  local_98 = 0;
  uStack_ac = 1;
  iStack_9c = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->Channels).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_149119dce;
      uVar17 = puVar20[lVar12 + 1];
    }
    uStack_ac = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_ac * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iStack_9c = local_res20 + -1 + local_98;
    if (iVar4 < iStack_9c) {
      iStack_9c = iVar4;
    }
  }
LAB_149119dce:
  uVar17 = *(uint *)&(this->Channels).field_0x28;
  uStack_94 = local_3c;
  iStack_90 = *(int *)&(this->Channels).field_0x8 - *(int *)&(this->Channels).field_0x34;
  uStack_a0 = 0xffffffff;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar17 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = pTVar2;
  local_a8 = puVar1;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->Channels).field_0x28;
  if (uVar17 != uVar5) {
    puVar19 = *(undefined1 **)&(this->Channels).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_149119ed0;
      uVar17 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar17 = (int)lVar12 + -1 + uVar15;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_149119ed0:
  do {
    pTVar9 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar17) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    {
      return;
    }
    lVar12 = *(longlong *)(*(longlong *)pTVar9 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x18);
    bVar10 = IsInGameThread();
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                            ,0x99,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar4 = *(int *)(lVar12 + 0x58);
    plVar18 = *(longlong **)(lVar12 + 0x50);
    plVar16 = plVar18 + (longlong)iVar4 * 2;
    while( true ) {
      if (*(int *)(lVar12 + 0x58) != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TWeakPtr<FNiagaraDataChannelData,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (plVar18 == plVar16) break;
      pTVar14 = (TReferenceControllerBase<1> *)plVar18[1];
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_149119f90:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        plVar18 = plVar18 + 2;
      }
      else {
        aVar8 = pTVar14->SharedReferenceCount;
        do {
          if (aVar8 == (atomic<int>)0x0) {
            pTVar14 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_149119f90;
          }
          LOCK();
          aVar11 = pTVar14->SharedReferenceCount;
          bVar10 = aVar8 == aVar11;
          if (bVar10) {
            pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar11 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar11;
        } while (!bVar10);
        lVar6 = *plVar18;
        if (lVar6 == 0) goto LAB_149119f90;
        local_c8 = 0;
        FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if ((undefined8 *)(lVar6 + 0x48) != &local_c8) {
          *(undefined8 *)(lVar6 + 0x48) = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(lVar6 + 0x50),&FStack_c0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_c0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        plVar18 = plVar18 + 2;
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// RefreshDataChannels @ 1491268a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraDataChannelManager::RefreshDataChannels(FNiagaraDataChannelManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong lVar7;
  TObjectIterator<UNiagaraDataChannel> TStack_28;
  
  if (this->bIsCleanedUp != false) {
    return;
  }
  TStack_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_28.ObjectArray.ArrayNum = 0;
  TStack_28.ObjectArray.ArrayMax = 0;
  TStack_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UNiagaraDataChannel::StaticClass();
  GetObjectsOfClass(pUVar6,&TStack_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraDataChannel>::Advance(&TStack_28);
    lVar7 = (longlong)TStack_28.Index;
    if (TStack_28.Index < 0) break;
    if (TStack_28.ObjectArray.ArrayNum <= TStack_28.Index) break;
    uVar5 = 0;
    if (TStack_28.Index < TStack_28.ObjectArray.ArrayNum) {
      uVar5 = (uint)~TStack_28.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar7 = *(longlong *)(TStack_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
    if (((lVar7 != 0) && ((*(uint *)(lVar7 + 8) & 0x50) == 0)) &&
       (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 != 0)) {
      pUVar6 = UNiagaraDataChannelAsset::StaticClass();
      lVar7 = *(longlong *)(lVar7 + 0x10);
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(lVar7 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        lVar7 = (longlong)TStack_28.Index;
        uVar5 = 0;
        if (TStack_28.Index < TStack_28.ObjectArray.ArrayNum) {
          uVar5 = (uint)~TStack_28.Index >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        InitDataChannel(this,*(UNiagaraDataChannel **)
                              (TStack_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8),false);
      }
    }
  }
  if (TStack_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// RemoveDataChannel @ 14912b040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDataChannelManager::RemoveDataChannel
          (FNiagaraDataChannelManager *this,UNiagaraDataChannel *param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FWeakObjectPtr local_res8;
  UNiagaraDataChannel *local_res10;
  FWeakObjectPtr local_res18 [2];
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelManager.cpp"
                       ,200,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraDataChannel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraDataChannel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res18[0] = local_res8;
  iVar6 = TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
                      *)&this->Channels,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr> *)local_res18);
  if (iVar6 != -1) {
    lVar1 = *(longlong *)&this->Channels + (longlong)iVar6 * 0x18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = *(UObject **)(lVar1 + 8), pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    plVar3 = *(longlong **)(lVar1 + 8);
    TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
    ::RemoveByIndex((TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
                     *)&this->Channels,iVar6);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014912b134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2b8))(plVar3);
      return;
    }
  }
  return;
}

// Tick @ 14913a950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDataChannelManager::Tick
          (FNiagaraDataChannelManager *this,float param_1,ETickingGroup param_2)

{
  undefined1 *puVar1;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *pTVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_DataChannelManager_Tick> FVar13;
  longlong lVar14;
  FNameEntryId FVar15;
  int iVar16;
  FName FVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 local_res20 [8];
  undefined1 local_168 [8];
  uint local_160;
  uint uStack_15c;
  FColor_u_0 local_158 [2];
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *local_150;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  FName local_118;
  FName local_110;
  int local_100;
  int local_fc;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FName local_98 [4];
  undefined4 local_74;
  undefined4 local_54;
  
  if (!INiagaraModule::bDataChannelsEnabled) {
    iVar18 = *(int *)&(this->Channels).field_0x28;
    puVar1 = &(this->Channels).field_0x10;
    pTVar2 = &this->Channels;
    iStack_140 = 0;
    local_150 = (TMap<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>_>
                 *)0x1;
    local_128 = 0;
    uStack_13c = 1;
    iStack_12c = 0;
    if (iVar18 != 0) {
      puVar22 = *(uint **)&(this->Channels).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uStack_13c = *puVar22;
      local_128 = 0;
      while (uStack_13c == 0) {
        lVar14 = (longlong)iStack_140;
        local_128 = local_128 + 0x20;
        iStack_140 = iStack_140 + 1;
        uStack_13c = 1;
        iStack_12c = iVar18;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140)
        goto LAB_14913addd;
        uStack_13c = puVar22[lVar14 + 1];
      }
      uStack_13c = -uStack_13c & uStack_13c;
      uVar3 = (ulonglong)uStack_13c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_fc = (int)lVar14;
      iStack_12c = local_fc + -1 + local_128;
      if (iVar18 < iStack_12c) {
        iStack_12c = iVar18;
      }
    }
LAB_14913addd:
    uVar20 = *(uint *)&(this->Channels).field_0x28;
    iStack_120 = *(int *)&(this->Channels).field_0x8 - *(int *)&(this->Channels).field_0x34;
    uVar23 = uVar20 & 0xffffffe0;
    uStack_130 = 0xffffffff;
    TStack_c0._padding_ = CONCAT44(uStack_13c,iStack_140);
    TStack_c0.CurrentBitIndex = iStack_12c;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar20 >> 5;
    TStack_c0._28_4_ = local_54;
    TStack_c0.BaseBitIndex = local_128;
    uStack_a0 = CONCAT44(uStack_11c,iStack_120);
    local_148 = pTVar2;
    local_138 = puVar1;
    local_c8 = pTVar2;
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar20 < 0) || (iVar18 < (int)uVar20)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = *(uint *)&(this->Channels).field_0x28;
    if (uVar20 != uVar4) {
      puVar21 = *(undefined1 **)&(this->Channels).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
      while (uVar20 == 0) {
        lVar14 = (longlong)iVar16;
        uVar23 = uVar23 + 0x20;
        iVar16 = iVar16 + 1;
        uVar20 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14913aee0;
        uVar20 = *(uint *)(puVar21 + lVar14 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar20 = (int)lVar14 + -1 + uVar23;
      if ((int)uVar4 < (int)uVar20) {
        uVar20 = uVar4;
      }
    }
LAB_14913aee0:
    while( true ) {
      pTVar9 = local_c8;
      if (*(int *)(&local_c8->field_0x0 + 8) - *(int *)(&local_c8->field_0x0 + 0x34) !=
          (int)uStack_a0) {
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
      }
      if (((TStack_c0.CurrentBitIndex == uVar20) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2)
         ) break;
      (**(code **)(**(longlong **)
                     (*(longlong *)&pTVar9->field_0x0 + 8 +
                     (longlong)TStack_c0.CurrentBitIndex * 0x18) + 0x2b8))();
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    bVar10 = *(int *)&(this->Channels).field_0x48 < 2;
    if (bVar10) {
      TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
                        *)pTVar2);
    }
    puVar1 = &(this->Channels).field_0xc;
    *(undefined4 *)&(this->Channels).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->Channels).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->Channels).field_0x34 = 0;
    iVar18 = *(int *)&(this->Channels).field_0x2c;
    *(undefined4 *)&(this->Channels).field_0x28 = 0;
    if ((iVar18 < 0) || (0x80 < iVar18)) {
      *(undefined4 *)&(this->Channels).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Channels).field_0x10,0);
    }
    if (bVar10) {
      return;
    }
    *(int *)&(this->Channels).field_0x48 = (int)local_150;
    TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
              *)pTVar2);
    return;
  }
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelManager.cpp"
                          ,0x7f,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar18 = 0;
  FVar13 = StatPtr_STAT_DataChannelManager_Tick;
  if (StatPtr_STAT_DataChannelManager_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_DataChannelManager_Tick>)0x0) {
    pFVar12 = ::FName::FName(local_98,"STAT_DataChannelManager_Tick");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_DataChannelManager_Tick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DataChannelManager_Tick,*pFVar12,
                        L"FNiagaraDataChannelManager::Tick","STATGROUP_NiagaraDataChannels",
                        "STATCAT_Niagara",L"Niagara Data Channels",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar10 = false;
  bVar8 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FVar15 = FVar17.ComparisonIndex.Value;
  uVar20 = FVar17.Number;
  if ((FVar15.Value != 0) || (uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_158[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_158[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar15.Value;
        local_118.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelManager.cpp"
                   ,0x80);
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_160 = FVar15.Value;
      uStack_15c = uVar20;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar7 = true;
      goto LAB_14913aad6;
    }
  }
  bVar7 = false;
  FVar17 = local_110;
LAB_14913aad6:
  if (__CsvProfilerStat129 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("CoreSystems_NiagaraDataChannelManager",_GCsvCategory_Particles.Index);
    __CsvProfilerStat129 = true;
  }
  local_160 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_NiagaraDataChannelManager",_GCsvCategory_Particles.Index,
             "CSV_CoreSystems_NiagaraDataChannelManager");
  iVar16 = *(int *)&(this->Channels).field_0x28;
  puVar1 = &(this->Channels).field_0x10;
  local_150 = &this->Channels;
  uStack_13c = 1;
  local_128 = 0;
  iStack_12c = local_128;
  if (iVar16 != 0) {
    puVar22 = *(uint **)&(this->Channels).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar20 = *puVar22;
    local_128 = 0;
    iVar18 = 0;
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar18;
      local_128 = local_128 + 0x20;
      iVar18 = iVar18 + 1;
      iStack_12c = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14913ab9d;
      uVar20 = puVar22[lVar14 + 1];
    }
    uStack_13c = -uVar20 & uVar20;
    uVar3 = (ulonglong)uStack_13c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_100 = (int)lVar14;
    iStack_12c = local_100 + -1 + local_128;
    if (iVar16 < iStack_12c) {
      iStack_12c = iVar16;
    }
  }
LAB_14913ab9d:
  uStack_124 = local_74;
  iStack_120 = *(int *)&(this->Channels).field_0x8 - *(int *)&(this->Channels).field_0x34;
  uVar20 = *(uint *)&(this->Channels).field_0x28;
  uStack_130 = 0xffffffff;
  uVar23 = uVar20 & 0xffffffe0;
  TStack_f0._padding_ = CONCAT44(uStack_13c,iVar18);
  TStack_f0.CurrentBitIndex = iStack_12c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar20 >> 5;
  TStack_f0._28_4_ = local_74;
  TStack_f0.BaseBitIndex = local_128;
  uStack_d0 = CONCAT44(uStack_11c,iStack_120);
  local_148 = local_150;
  iStack_140 = iVar18;
  local_138 = puVar1;
  local_f8 = local_150;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar16 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar2 = local_150;
  uVar4 = *(uint *)&(this->Channels).field_0x28;
  if (uVar20 != uVar4) {
    puVar21 = *(undefined1 **)&(this->Channels).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar19 * 4);
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar19;
      uVar23 = uVar23 + 0x20;
      iVar19 = iVar19 + 1;
      uVar20 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14913acb0;
      uVar20 = *(uint *)(puVar21 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar20 = (int)lVar14 + -1 + uVar23;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_14913acb0:
  while( true ) {
    pTVar9 = local_f8;
    if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_f0.CurrentBitIndex == uVar20) &&
        (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    plVar5 = *(longlong **)(*(longlong *)pTVar9 + 8 + (longlong)TStack_f0.CurrentBitIndex * 0x18);
    (**(code **)(*plVar5 + 0x2d0))(plVar5,param_1,param_2);
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  }
  FCsvProfiler::EndStat("CoreSystems_NiagaraDataChannelManager",local_160);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

