// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState> @ 148a30ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

bool __cdecl
FFastArraySerializer::
FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
          (TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>
           *param_1,FNetDeltaSerializeInfo *param_2,FWorldPartitionDestructibleHLODState *param_3)

{
  int *piVar1;
  FNetworkGUID_u_0 FVar2;
  FScriptContainerElement *pFVar3;
  INetDeltaBaseState *pIVar4;
  FBitWriter *this;
  UPackageMap *pUVar5;
  code *pcVar6;
  bool bVar7;
  UScriptStruct *pUVar8;
  UScriptStruct *pUVar9;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray> FVar19;
  UPackage *pUVar20;
  UStruct *pUVar21;
  ForElementType<int> FVar22;
  FNetFastTArrayBaseState *this_00;
  FNetFastTArrayBaseState *pFVar23;
  TRawPtrProxy<FNetFastTArrayBaseState> TVar24;
  ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair> FVar25;
  FFastArraySerializerGuidReferences *this_01;
  byte bVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint *puVar29;
  longlong lVar30;
  FScriptContainerElement *pFVar31;
  longlong *plVar32;
  int iVar33;
  uint uVar34;
  bool *pbVar35;
  FNetFastTArrayBaseState *pFVar36;
  longlong lVar37;
  FNetFastTArrayBaseState *pFVar38;
  FScriptContainerElement *pFVar39;
  uint uVar40;
  FWorldPartitionDestructibleHLODState *pFVar41;
  FName FVar42;
  longlong *plVar43;
  ForElementType<int> FVar44;
  longlong *plVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *pTVar49;
  FName this_02;
  undefined8 uVar50;
  undefined1 auStackY_658 [32];
  uint local_5f4;
  uint local_5f0 [2];
  FWorldPartitionDestructibleHLODState *local_5e8;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *local_5e0;
  UScriptStruct *local_5d8;
  uint local_5d0;
  uint local_5cc;
  uint local_5c8;
  undefined1 local_5c4;
  undefined1 local_5c3 [3];
  undefined8 local_5c0;
  FName local_5b8;
  FName local_5b0;
  FColor_u_0 local_5a8 [2];
  uint local_5a0;
  uint uStack_59c;
  longlong *plStack_598;
  undefined4 local_590;
  int iStack_58c;
  uint uStack_588;
  undefined4 uStack_584;
  FName local_580;
  FNetworkGUID_u_0 local_578;
  UScriptStruct *local_570;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_568;
  undefined8 uStack_548;
  longlong *local_538;
  undefined1 auStack_530 [16];
  uint uStack_520;
  uint uStack_51c;
  undefined8 local_518;
  TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
  *pTStack_510;
  TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
  *local_508;
  undefined2 local_500;
  TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
  local_4f8;
  FName local_4d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4c8;
  longlong *local_4a8;
  uint uStack_4a0;
  uint uStack_49c;
  longlong *local_498;
  undefined4 uStack_490;
  uint uStack_48c;
  uint local_488;
  uint uStack_484;
  int iStack_480;
  undefined4 uStack_47c;
  FName local_478;
  FName local_470;
  FName local_468;
  FName local_460;
  FName local_458;
  FName local_450;
  FName local_448;
  FName local_440;
  FName local_438;
  FName local_430;
  FName local_428;
  int local_420;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  undefined1 local_348 [12];
  uint local_33c;
  longlong local_338;
  uint local_330;
  int local_32c;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *local_320;
  int local_318;
  undefined1 local_314 [8];
  undefined4 local_30c;
  TPairInitializer<int_const_&,int_const_&> local_308;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  undefined8 uStack_2d0;
  uint *local_2c8;
  uint *local_2c0;
  TArrayView<int,int> local_2b8;
  undefined1 local_2a8 [24];
  longlong lStack_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
  *pTStack_270;
  FNetBitReader local_268;
  ForElementType<int> local_1a8;
  int local_180;
  int local_17c;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_178;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_148;
  TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_118;
  FFastArraySerializerHeader local_c8;
  FFastArraySerializerHeader local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_658;
  local_5e8 = param_3;
  local_5e0 = param_1;
  if ((param_3->_padding_ & 4) != 0) {
    bVar12 = FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
                       (param_1,param_2,param_3);
    return bVar12;
  }
  pFVar38 = (FNetFastTArrayBaseState *)0x0;
  uVar40 = 0;
  uVar46 = 0;
  if (GUseDetailedScopeCounters) {
    FVar19 = StatPtr_STAT_NetSerializeFastArray;
    if (StatPtr_STAT_NetSerializeFastArray ==
        (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray>)0x0) {
      pFVar18 = ::FName::FName((FName *)(local_2a8 + 8),"STAT_NetSerializeFastArray");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSerializeFastArray,*pFVar18,
                          L"NetSerializeFast Array","STATGROUP_ServerCPU","STATCAT_Advanced",
                          L"Server CPU",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  else {
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray>)&TStatId::TStatId_NAME_None;
  }
  FVar42 = *(FName *)FVar19;
  bVar12 = false;
  bVar7 = false;
  local_4d8.ComparisonIndex.Value = 0;
  local_4d8.Number = 0;
  bVar11 = false;
  bVar13 = false;
  if ((FVar42.ComparisonIndex.Value.Value == 0) && (FVar42.Number == 0)) {
LAB_148a30c65:
    bVar7 = bVar13;
    bVar12 = bVar11;
    bVar11 = false;
    local_5b8 = local_4d8;
    FVar42 = local_4d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5a8[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar7 = true;
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_580.ComparisonIndex.Value = FVar42.ComparisonIndex.Value.Value;
        local_580.Number = FVar42.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_580,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                   ,0x4c2);
        bVar12 = true;
        bVar7 = true;
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148a30c65;
    local_5b8 = FVar42;
    local_5b0 = FVar42;
    FThreadStats::AddMessage(FVar42,CycleScopeStart);
    bVar11 = true;
  }
  local_5d8 = Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
              OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar20 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState,
                         (UObject *)pUVar20,L"WorldPartitionDestructibleHLODDamagedActorState");
  }
  pUVar8 = Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
           OuterSingleton;
  local_5d8 = Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
              OuterSingleton;
  if (4 < (byte)LogNetFastTArray._0_1_) {
    pUVar21 = UField::GetOwnerStruct
                        ((UField *)
                         Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState
                         .OuterSingleton);
    local_308._4_8_ = pUVar21->_padding_;
    ::FName::ToString((FName *)((longlong)&local_308.Key + 4),&local_408);
    local_478 = (FName)pUVar8->_padding_;
    ::FName::ToString(&local_478,&local_418);
    UE::Logging::Private::BasicLog<5>
              (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    param_3 = local_5e8;
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
      param_3 = local_5e8;
    }
  }
  local_4f8.Struct = pUVar8;
  local_4f8.Items = param_1;
  local_4f8.ArraySerializer = param_3;
  local_4f8.Parms = param_2;
  TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
  ::ConditionalRebuildItemMap(&local_4f8);
  if (param_2->GatherGuidReferences ==
      (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)0x0) {
    if (param_2->MoveGuidToUnmapped != (FNetworkGUID *)0x0) {
      if (4 < (byte)LogNetFastTArray._0_1_) {
        pUVar21 = UField::GetOwnerStruct((UField *)pUVar8);
        local_460 = (FName)pUVar21->_padding_;
        ::FName::ToString(&local_460,&local_3c8);
        local_458 = (FName)pUVar8->_padding_;
        ::FName::ToString(&local_458,&local_3d8);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                    ::__l37::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
        }
      }
      pTVar49 = (TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>
                 *)&param_3->_padding_;
      local_5d8 = (UScriptStruct *)&param_3->_padding_;
      iVar33 = (int)param_3->_padding_;
      bVar13 = false;
      local_5a0 = 0;
      FVar2 = (FNetworkGUID_u_0)(param_2->MoveGuidToUnmapped->field0_0x0).ObjectId;
      local_5c0 = 1;
      uStack_59c = 1;
      iStack_58c = 0;
      uStack_588 = 0;
      if (iVar33 != 0) {
        plVar32 = (longlong *)param_3->_padding_;
        if ((longlong *)param_3->_padding_ == (longlong *)0x0) {
          plVar32 = (longlong *)local_5d8;
        }
        uVar46 = (uint)*plVar32;
        pFVar36 = pFVar38;
        while (uVar46 == 0) {
          iVar48 = (int)pFVar36;
          uStack_588 = (int)pFVar38 + 0x20;
          pFVar38 = (FNetFastTArrayBaseState *)(ulonglong)uStack_588;
          local_5a0 = iVar48 + 1;
          pFVar36 = (FNetFastTArrayBaseState *)(ulonglong)local_5a0;
          if ((int)(iVar33 + -1 + (iVar33 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_5a0)
          goto LAB_148a3120d;
          uVar46 = *(uint *)((longlong)plVar32 + (longlong)iVar48 * 4 + 4);
        }
        uStack_59c = -uVar46 & uVar46;
        uVar28 = (ulonglong)uStack_59c * 2 + 1;
        lVar27 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_318 = (int)lVar27;
        iStack_58c = (uStack_588 - 1) + local_318;
        if (iVar33 < iStack_58c) {
LAB_148a3120d:
          iStack_58c = iVar33;
        }
      }
      local_590 = 0xffffffff;
      TStack_568._padding_ = CONCAT44(uStack_59c,local_5a0);
      TStack_568.CurrentBitIndex = iStack_58c;
      TStack_568.UnvisitedBitMask = 0xffffffff;
      TStack_568._28_4_ = uStack_584;
      TStack_568.BaseBitIndex = uStack_588;
      uVar46 = (uint)local_5e8->_padding_;
      uStack_548 = CONCAT44(uStack_548._4_4_,
                            (int)local_5e8->_padding_ -
                            *(int *)((longlong)&local_5e8->_padding_ + 4));
      bVar26 = (byte)uVar46 & 0x1f;
      local_4c8._padding_._4_4_ = 1 << bVar26;
      local_4c8._padding_._0_4_ = (int)uVar46 >> 5;
      local_4c8.BaseBitIndex = uVar46 & 0xffffffe0;
      local_4c8.UnvisitedBitMask = -1 << bVar26;
      uStack_2d0 = uStack_548;
      local_5e0 = pTVar49;
      plStack_598 = (longlong *)local_5d8;
      local_578 = FVar2;
      local_570 = (UScriptStruct *)pTVar49;
      TStack_568.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_5d8;
      local_4c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_5d8;
      local_4c8.CurrentBitIndex = uVar46;
      local_2f8 = pTVar49;
      TStack_2f0._padding_ = TStack_568._padding_;
      TStack_2f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_5d8;
      TStack_2f0._16_8_ = TStack_568._16_8_;
      TStack_2f0._24_8_ = TStack_568._24_8_;
      if ((((int)uVar46 < 0) || (iVar33 < (int)uVar46)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar14 = (*pcVar6)();
        return (bool)uVar14;
      }
      uVar40 = local_4c8.CurrentBitIndex;
      pUVar8 = local_5d8;
      if (uVar46 != (uint)param_3->_padding_) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4c8);
        local_5d8 = (UScriptStruct *)local_4c8.Array;
        uVar40 = local_4c8.CurrentBitIndex;
        pUVar8 = (UScriptStruct *)local_4c8.Array;
      }
LAB_148a31310:
      pTVar10 = local_2f8;
      if (local_2f8->ArrayNum - *(int *)((longlong)&local_2f8[3].AllocatorInstance.Data + 4) !=
          (int)uStack_2d0) {
        `TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5c3);
      }
      iVar33 = TStack_2f0.CurrentBitIndex;
      if (((TStack_2f0.CurrentBitIndex != uVar40) || ((UScriptStruct *)TStack_2f0.Array != pUVar8))
         || (FVar42 = local_5b8, pTVar10 != pTVar49)) {
        pFVar39 = (pTVar10->AllocatorInstance).Data;
        uVar46 = FVar2._4_4_ * 0x17 + FVar2.Value;
        if (*(int *)(pFVar39 + (longlong)TStack_2f0.CurrentBitIndex * 200 + 0x60) !=
            *(int *)(pFVar39 + (longlong)TStack_2f0.CurrentBitIndex * 200 + 0x8c)) {
          pFVar3 = *(FScriptContainerElement **)
                    (pFVar39 + (longlong)TStack_2f0.CurrentBitIndex * 200 + 0x98);
          pFVar31 = pFVar39 + (longlong)TStack_2f0.CurrentBitIndex * 200 + 0x90;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            pFVar31 = pFVar3;
          }
          iVar48 = *(int *)(pFVar31 +
                           (ulonglong)
                           (*(int *)(pFVar39 + (longlong)TStack_2f0.CurrentBitIndex * 200 + 0xa0) -
                            1U & uVar46) * 4);
          pTVar49 = local_5e0;
          if (iVar48 != -1) {
            lVar27 = *(longlong *)(pFVar39 + (longlong)TStack_2f0.CurrentBitIndex * 200 + 0x58);
            do {
              if ((FNetworkGUID_u_0)
                  ((FNetworkGUID_u_0 *)(lVar27 + (longlong)iVar48 * 0x10))->ObjectId == FVar2) {
                pFVar31 = pFVar39 + (longlong)TStack_2f0.CurrentBitIndex * 200 + 0x90;
                if (pFVar3 != (FScriptContainerElement *)0x0) {
                  pFVar31 = pFVar3;
                }
                iVar48 = *(int *)(pFVar31 +
                                 ((longlong)
                                  *(int *)(pFVar39 +
                                          (longlong)TStack_2f0.CurrentBitIndex * 200 + 0xa0) - 1U &
                                 (longlong)(int)uVar46) * 4);
                goto joined_r0x000148a313df;
              }
              iVar48 = *(int *)(lVar27 + 8 + (longlong)iVar48 * 0x10);
            } while (iVar48 != -1);
          }
        }
        goto LAB_148a31421;
      }
      goto LAB_148a326a0;
    }
    if (param_2->bUpdateUnmappedObjects == false) {
      bVar26 = (byte)param_3->_padding_;
      if ((((bVar26 & 1) == 0) &&
          (*(byte *)&param_3->_padding_ = bVar26 | 1,
          param_2->bSupportsFastArrayDeltaStructSerialization != false)) && ((bVar26 & 2) != 0)) {
        *(byte *)&param_3->_padding_ = bVar26 | 5;
        bVar13 = FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
                           (param_1,param_2,param_3);
        goto LAB_148a326a0;
      }
      if (param_2->Writer == (FBitWriter *)0x0) {
        if (4 < (byte)LogNetFastTArray._0_1_) {
          pUVar21 = UField::GetOwnerStruct((UField *)pUVar8);
          local_430 = (FName)pUVar21->_padding_;
          ::FName::ToString(&local_430,&local_358);
          local_428 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_428,&local_368);
          UE::Logging::Private::BasicLog<5>
                    (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                      ::__l163::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
          if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_368.Data.AllocatorInstance.Data);
          }
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
        }
        if ((param_2->Reader == (FBitReader *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Parms.Reader",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                                ,0x5d7,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          uVar14 = (*pcVar6)();
          return (bool)uVar14;
        }
        this_02 = (FName)param_2->Reader;
        local_88.DeletedIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_88.DeletedIndices.ArrayNum = 0;
        local_88.DeletedIndices.ArrayMax = 8;
        local_5b8 = this_02;
        bVar13 = TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
                 ::ReadDeltaHeader(&local_4f8,&local_88);
        if (!bVar13) {
LAB_148a3268c:
          if (local_88.DeletedIndices.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_88.DeletedIndices.AllocatorInstance.SecondaryData);
          }
LAB_148a3269d:
          bVar13 = false;
          goto LAB_148a326a0;
        }
        local_148.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_148.ArrayNum = 0;
        local_148.ArrayMax = 8;
        local_178.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_178.ArrayNum = 0;
        local_178.ArrayMax = 8;
        local_5c8 = 0;
        if (0 < local_88.NumChanged) {
          uVar50 = 1;
          local_5c0 = 1;
          do {
            plVar32 = *(longlong **)((longlong)this_02 + 8);
            local_5f0[0] = 0;
            if ((uint *)plVar32[1] < (uint *)*plVar32 + 1) {
              if ((*(byte *)((longlong)this_02 + 0x2a) & 1) == 0) {
                (**(code **)(*(longlong *)this_02 + 0x188))(this_02,local_5f0,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)this_02,local_5f0);
              }
            }
            else {
              local_5f0[0] = *(uint *)*plVar32;
              *plVar32 = *plVar32 + 4;
            }
            puVar29 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                      *)param_3,local_5f0[0]);
            local_5f4 = 0;
            if (puVar29 == (uint *)0x0) {
              if (4 < (byte)LogNetFastTArray._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                            ::__l187::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
              }
              pTVar49 = local_5e0;
              iVar33 = local_5e0->ArrayNum;
              if (iVar33 == local_5e0->ArrayMax) {
                iVar33 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x414,&local_5e0->AllocatorInstance,&local_5e0->ArrayMax);
              }
              pTVar49->ArrayNum = iVar33 + 1;
              pFVar39 = (pTVar49->AllocatorInstance).Data + (longlong)iVar33 * 0x14;
              DefaultConstructItems<FWorldPartitionDestructibleHLODDamagedActorState,int>
                        (pFVar39,(int)uVar50);
              pFVar41 = local_5e8;
              *(uint *)pFVar39 = local_5f0[0];
              local_5f4 = pTVar49->ArrayNum - 1;
              local_2c8 = local_5f0;
              local_2c0 = &local_5f4;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)local_5e8,&local_308,(bool *)&local_2c8);
              FVar22 = (ForElementType<int>)&local_178;
              if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                FVar22 = local_178.AllocatorInstance.SecondaryData;
              }
              if ((ulonglong)FVar22 <= &local_5f4) {
                FVar22 = (ForElementType<int>)&local_178;
                if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                  FVar22 = local_178.AllocatorInstance.SecondaryData;
                }
                if ((&local_5f4 < (uint *)((longlong)FVar22 + (longlong)local_178.ArrayMax * 4)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  uVar14 = (*pcVar6)();
                  return (bool)uVar14;
                }
              }
              if (local_178.ArrayNum == local_178.ArrayMax) {
                local_178.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_178.AllocatorInstance,&local_178.ArrayMax);
              }
              FVar22 = (ForElementType<int>)&local_178;
              FVar44 = local_178.AllocatorInstance.SecondaryData;
              iVar33 = local_178.ArrayNum;
              local_178.ArrayNum = local_178.ArrayNum + 1;
            }
            else {
              if (4 < (byte)LogNetFastTArray._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                            ::__l198::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
              }
              pTVar49 = local_5e0;
              local_5f4 = *puVar29;
              lVar27 = (longlong)(int)local_5f4;
              uVar46 = uVar40;
              if ((int)local_5f4 < local_5e0->ArrayNum) {
                uVar46 = ~local_5f4 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                uVar14 = (*pcVar6)();
                return (bool)uVar14;
              }
              pFVar39 = (pTVar49->AllocatorInstance).Data + lVar27 * 0x14;
              FVar22 = (ForElementType<int>)&local_148;
              if (local_148.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                FVar22 = local_148.AllocatorInstance.SecondaryData;
              }
              if ((ulonglong)FVar22 <= &local_5f4) {
                FVar22 = (ForElementType<int>)&local_148;
                if (local_148.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                  FVar22 = local_148.AllocatorInstance.SecondaryData;
                }
                if ((&local_5f4 < (uint *)((longlong)FVar22 + (longlong)local_148.ArrayMax * 4)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  uVar14 = (*pcVar6)();
                  return (bool)uVar14;
                }
              }
              iVar33 = local_148.ArrayNum;
              if (local_148.ArrayNum == local_148.ArrayMax) {
                iVar33 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_148.AllocatorInstance,&local_148.ArrayMax);
              }
              local_148.ArrayNum = iVar33 + 1;
              FVar22 = (ForElementType<int>)&local_148;
              pFVar41 = local_5e8;
              FVar44 = local_148.AllocatorInstance.SecondaryData;
            }
            if (FVar44 != (ForElementType<int>)0x0) {
              FVar22 = FVar44;
            }
            *(uint *)((longlong)FVar22 + (longlong)iVar33 * 4) = local_5f4;
            *(int *)(pFVar39 + 4) = *(int *)(pFVar39 + 4) + 1;
            *(int *)(pFVar39 + 8) = local_88.ArrayReplicationKey;
            UPackageMap::ResetTrackedGuids(param_2->Map,true);
            local_5b0 = *(FName *)((longlong)this_02 + 0xa8);
            param_2->Struct = (UStruct *)local_5d8;
            param_2->Data = pFVar39;
            (**(code **)((longlong)*param_2->NetSerializeCB + 8))();
            if ((*(byte *)((longlong)this_02 + 0x29) & 2) == 0) {
              pUVar5 = param_2->Map;
              if ((*(int *)&(pUVar5->TrackedUnmappedNetGuids).Elements.field_0x8 ==
                   *(int *)&(pUVar5->TrackedUnmappedNetGuids).Elements.field_0x34) &&
                 (*(int *)&(pUVar5->TrackedMappedDynamicNetGuids).Elements.field_0x8 ==
                  *(int *)&(pUVar5->TrackedMappedDynamicNetGuids).Elements.field_0x34)) {
                TMapBase<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
                ::Remove((TMapBase<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
                          *)&pFVar41->_padding_,local_5f0[0]);
                this_02 = local_5b8;
                uVar50 = local_5c0;
              }
              else {
                this_01 = TMapBase<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
                          ::FindOrAddImpl<int_const_&>
                                    ((TMapBase<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
                                      *)&pFVar41->_padding_,local_5f0[0],(int *)local_5f0);
                bVar13 = NetworkGuidSetsAreSame
                                   (&this_01->UnmappedGUIDs,&pUVar5->TrackedUnmappedNetGuids);
                if (!bVar13) {
                  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                            (&this_01->UnmappedGUIDs,&pUVar5->TrackedUnmappedNetGuids);
                  param_2->bGuidListsChanged = true;
                }
                bVar13 = NetworkGuidSetsAreSame
                                   (&this_01->MappedDynamicGUIDs,
                                    &pUVar5->TrackedMappedDynamicNetGuids);
                if (!bVar13) {
                  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                            (&this_01->MappedDynamicGUIDs,&pUVar5->TrackedMappedDynamicNetGuids);
                  param_2->bGuidListsChanged = true;
                }
                piVar1 = &(this_01->Buffer).ArrayMax;
                (this_01->Buffer).ArrayNum = 0;
                if (*piVar1 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            ((uint)local_5c0,(uint)local_5c0,0,&(this_01->Buffer).AllocatorInstance,
                             0,piVar1);
                }
                this_02 = local_5b8;
                if ((0x7fffffff < *(longlong *)((longlong)local_5b8 + 0xa8) - (longlong)local_5b0)
                   && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Reader.GetPosBits() - Mark.GetPos() <= TNumericLimits<int32>::Max()"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                                           ,0x630,L""), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  uVar14 = (*pcVar6)();
                  return (bool)uVar14;
                }
                this_01->NumBufferBits =
                     *(int *)((longlong)this_02 + 0xa8) - local_5b0.ComparisonIndex.Value;
                FBitReaderMark::Copy
                          ((FBitReaderMark *)&local_5b0,(FBitReader *)this_02,&this_01->Buffer);
                uVar50 = local_5c0;
                if (*(int *)&(pUVar5->TrackedUnmappedNetGuids).Elements.field_0x8 !=
                    *(int *)&(pUVar5->TrackedUnmappedNetGuids).Elements.field_0x34) {
                  param_2->bOutHasMoreUnmapped = true;
                }
              }
            }
            UPackageMap::ResetTrackedGuids(param_2->Map,false);
            if ((*(byte *)((longlong)this_02 + 0x29) & 2) != 0) {
              if (2 < (byte)LogNetFastTArray._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                            ::__l234::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
              }
              if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                FMemory::Free((void *)local_178.AllocatorInstance.SecondaryData);
              }
              if (local_148.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
              }
              goto LAB_148a3268c;
            }
            local_5c8 = local_5c8 + 1;
            param_3 = local_5e8;
          } while ((int)local_5c8 < local_88.NumChanged);
        }
        TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
        ::
        PostReceiveCleanup<TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>_>
                  (&local_4f8,&local_88,&local_148,&local_178,
                   (TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>_>
                    *)&param_3->_padding_);
        if (local_178.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_178.AllocatorInstance.SecondaryData);
        }
        FVar22 = local_88.DeletedIndices.AllocatorInstance.SecondaryData;
        if (local_148.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
          FVar22 = local_88.DeletedIndices.AllocatorInstance.SecondaryData;
        }
      }
      else {
        if (4 < (byte)LogNetFastTArray._0_1_) {
          pUVar21 = UField::GetOwnerStruct((UField *)pUVar8);
          local_440 = (FName)pUVar21->_padding_;
          ::FName::ToString(&local_440,&local_378);
          local_438 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_438,&local_388);
          UE::Logging::Private::BasicLog<5>
                    (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                      ::__l116::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
          if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data.AllocatorInstance.Data);
          }
          if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_378.Data.AllocatorInstance.Data);
          }
        }
        if ((param_2->Struct == (UStruct *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Parms.Struct",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                                ,0x584,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          uVar14 = (*pcVar6)();
          return (bool)uVar14;
        }
        pIVar4 = param_2->OldState;
        this = param_2->Writer;
        iVar33 = -1;
        pFVar36 = pFVar38;
        if (pIVar4 != (INetDeltaBaseState *)0x0) {
          iVar33 = (int)pIVar4[3]._padding_;
          pFVar36 = (FNetFastTArrayBaseState *)(pIVar4 + 1);
          bVar13 = TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
                   ::ConditionalCreateNewDeltaState
                             (&local_4f8,
                              (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                               *)pFVar36,iVar33);
          if (!bVar13) goto LAB_148a3269d;
        }
        this_00 = ::operator_new(0x78);
        pFVar23 = pFVar38;
        if (this_00 != (FNetFastTArrayBaseState *)0x0) {
          pFVar23 = FNetFastTArrayBaseState::FNetFastTArrayBaseState(this_00);
        }
        if ((param_2->NewState == (TSharedPtr<INetDeltaBaseState,1> *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Parms.NewState",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                                ,0x59c,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          uVar14 = (*pcVar6)();
          return (bool)uVar14;
        }
        TVar24 = MakeShareable<FNetFastTArrayBaseState>((FNetFastTArrayBaseState *)local_2a8);
        TSharedPtr<INetDeltaBaseState,1>::operator=<FNetFastTArrayBaseState>
                  (param_2->NewState,(TRawPtrProxy<FNetFastTArrayBaseState> *)TVar24.Object);
        pFVar23->ArrayReplicationKey = *(int *)((longlong)&local_5e8->_padding_ + 4);
        local_c8.ArrayReplicationKey = *(int *)((longlong)&local_5e8->_padding_ + 4);
        local_c8.NumChanged = 0;
        local_c8.DeletedIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_c8.DeletedIndices.ArrayNum = 0;
        local_c8.DeletedIndices.ArrayMax = 8;
        local_118.AllocatorInstance.SecondaryData =
             (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0;
        local_118.ArrayNum = 0;
        local_118.ArrayMax = 8;
        local_c8.BaseReplicationKey = iVar33;
        if (param_2->bIsInitializingBaseFromDefault == false) {
          TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
          ::BuildChangedAndDeletedBuffers
                    (&local_4f8,&pFVar23->IDToCLMap,
                     (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     pFVar36,&local_118,&local_c8.DeletedIndices);
          pFVar23->ArrayReplicationKey = *(int *)((longlong)&local_5e8->_padding_ + 4);
        }
        else {
          TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
          ::BuildChangedAndDeletedBuffersFromDefault(&local_4f8,&pFVar23->IDToCLMap,&local_118);
        }
        local_c8.NumChanged = local_118.ArrayNum;
        TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
        ::WriteDeltaHeader(&local_4f8,&local_c8);
        pTVar49 = local_5e0;
        while ((FVar42 = local_5b8, uVar34 = (uint)pFVar38, -1 < (int)uVar34 &&
               ((int)uVar34 < local_118.ArrayNum))) {
          uVar47 = uVar40;
          if ((int)uVar34 < local_118.ArrayNum) {
            uVar47 = ~uVar34 >> 0x1f;
          }
          if ((uVar47 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            uVar14 = (*pcVar6)();
            return (bool)uVar14;
          }
          FVar25 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)
                   &local_118;
          if (local_118.AllocatorInstance.SecondaryData !=
              (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
            FVar25 = local_118.AllocatorInstance.SecondaryData;
          }
          uVar47 = *(uint *)((longlong)FVar25 + (longlong)(int)uVar34 * 8);
          uVar17 = uVar46;
          if ((int)uVar47 < pTVar49->ArrayNum) {
            uVar17 = ~uVar47 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            uVar14 = (*pcVar6)();
            return (bool)uVar14;
          }
          pFVar39 = (pTVar49->AllocatorInstance).Data;
          uVar17 = uVar46;
          if ((int)uVar34 < local_118.ArrayNum) {
            uVar17 = ~uVar34 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            uVar14 = (*pcVar6)();
            return (bool)uVar14;
          }
          FVar25 = (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)
                   &local_118;
          if (local_118.AllocatorInstance.SecondaryData !=
              (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
            FVar25 = local_118.AllocatorInstance.SecondaryData;
          }
          local_5cc = *(uint *)((uchar *)((longlong)FVar25 + 4) + (longlong)(int)uVar34 * 8);
          plVar32 = (longlong *)this->_padding_;
          if ((uint *)plVar32[1] < (uint *)*plVar32 + 1) {
            if ((this->_padding_ & 0x10000) == 0) {
              (**(code **)(this->_padding_ + 0x188))(this,&local_5cc,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_5cc);
            }
          }
          else {
            local_5cc = *(uint *)*plVar32;
            *plVar32 = *plVar32 + 4;
          }
          if (4 < (byte)LogNetFastTArray._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                        ::__l152::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
          }
          param_2->Struct = (UStruct *)local_5d8;
          param_2->Data = pFVar39 + (longlong)(int)uVar47 * 0x14;
          (**(code **)((longlong)*param_2->NetSerializeCB + 8))(param_2->NetSerializeCB,param_2);
          pFVar38 = (FNetFastTArrayBaseState *)(ulonglong)(uVar34 + 1);
        }
        FVar22 = local_c8.DeletedIndices.AllocatorInstance.SecondaryData;
        if (local_118.AllocatorInstance.SecondaryData !=
            (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
          FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
          FVar22 = local_c8.DeletedIndices.AllocatorInstance.SecondaryData;
        }
      }
    }
    else {
      if (4 < (byte)LogNetFastTArray._0_1_) {
        pUVar21 = UField::GetOwnerStruct((UField *)pUVar8);
        local_450 = (FName)pUVar21->_padding_;
        ::FName::ToString(&local_450,&local_3a8);
        local_448 = (FName)pUVar8->_padding_;
        ::FName::ToString(&local_448,&local_3b8);
        UE::Logging::Private::BasicLog<5>
                  (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                    ::__l56::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
        if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        }
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
      }
      plVar32 = &param_3->_padding_;
      local_1a8.SecondaryData = (ForElementType<int>)0x0;
      local_180 = 0;
      local_17c = 8;
      TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)(local_2a8 + 0x10),
                 (TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                  *)plVar32);
      pUVar8 = local_5d8;
      local_500 = 0;
      stack0xfffffffffffffad8 = local_288;
      local_538 = (longlong *)local_2a8._16_8_;
      auStack_530._0_8_ = lStack_290;
      local_518 = local_278;
      pTStack_510 = pTStack_270;
      uVar28 = local_288._8_8_ >> 0x20;
      local_508 = (TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                   *)plVar32;
      if (local_288._12_4_ < *(int *)(local_288._0_8_ + 0x18)) {
        do {
          local_5c8 = *(uint *)((longlong)(int)uVar28 * 200 + *local_538);
          lVar27 = (longlong)(int)uStack_51c * 200 + *local_538;
          if (((*(int *)(lVar27 + 0x10) == *(int *)(lVar27 + 0x3c)) &&
              (*(int *)(lVar27 + 0x60) == *(int *)(lVar27 + 0x8c))) ||
             ((int)param_3->_padding_ == *(int *)((longlong)&param_3->_padding_ + 4))) {
LAB_148a319e2:
            TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_510,uStack_51c);
            local_500 = CONCAT11(local_500._1_1_,1);
          }
          else {
            plVar32 = &param_3->_padding_;
            if ((longlong *)param_3->_padding_ != (longlong *)0x0) {
              plVar32 = (longlong *)param_3->_padding_;
            }
            uVar46 = *(uint *)((longlong)plVar32 +
                              (ulonglong)((int)param_3->_padding_ - 1U & local_5c8) * 4);
            if (uVar46 == 0xffffffff) goto LAB_148a319e2;
            while (puVar29 = (uint *)((longlong)(int)uVar46 * 0x10 + param_3->_padding_),
                  *puVar29 != local_5c8) {
              uVar46 = puVar29[2];
              if (uVar46 == 0xffffffff) goto LAB_148a319e2;
            }
            pFVar36 = (FNetFastTArrayBaseState *)(puVar29 + 1);
            if (puVar29 == (uint *)0x0) {
              pFVar36 = pFVar38;
            }
            if (pFVar36 == (FNetFastTArrayBaseState *)0x0) goto LAB_148a319e2;
            bVar13 = false;
            TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::TIterator::
            TIterator((TIterator *)local_348,
                      (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                      (lVar27 + 8));
            param_3 = local_5e8;
            param_1 = local_5e0;
            if (*(int *)(local_338 + 0x18) <= local_32c) goto LAB_148a319cb;
            do {
              iVar33 = local_32c;
              pbVar35 = (bool *)((longlong)local_32c * 0x10 + *(longlong *)local_348._0_8_);
              cVar16 = (**(code **)(param_2->Map->_padding_ + 0x340))(param_2->Map,pbVar35,0);
              if (cVar16 == '\0') {
                lVar37 = (**(code **)(param_2->Map->_padding_ + 0x330))(param_2->Map,pbVar35);
                if (lVar37 != 0) {
                  if ((*(ulonglong *)pbVar35 != 0) && ((*(ulonglong *)pbVar35 & 1) == 0)) {
                    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
                    Emplace<FNetworkGUID_const_&>
                              ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
                                *)(lVar27 + 0x58),(FNetworkGUID *)(local_314 + 4),pbVar35);
                  }
                  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
                  RemoveByIndex(local_320,iVar33);
                  bVar13 = true;
                }
              }
              else {
                if (2 < (byte)LogNetFastTArray._0_1_) {
                  ::FString::PrintfImpl(&local_398,L"%llu");
                  UE::Logging::Private::BasicLog<3>
                            (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                              ::__l75::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
                  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_398.Data.AllocatorInstance.Data);
                  }
                }
                TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
                RemoveByIndex(local_320,iVar33);
              }
              local_330 = local_330 & ~local_33c;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_348 + 8));
            } while (local_32c < *(int *)(local_338 + 0x18));
            param_3 = local_5e8;
            param_1 = local_5e0;
            if (bVar13) {
              param_2->bOutSomeObjectsWereMapped = true;
              if (param_2->bCalledPreNetReceive == false) {
                (**(code **)(*(longlong *)param_2->Object + 0x220))();
                param_2->bCalledPreNetReceive = true;
              }
              param_3 = local_5e8;
              pFVar36 = pFVar38;
              if ((int)local_5e8->_padding_ != *(int *)((longlong)&local_5e8->_padding_ + 4)) {
                plVar32 = &local_5e8->_padding_;
                if ((longlong *)local_5e8->_padding_ != (longlong *)0x0) {
                  plVar32 = (longlong *)local_5e8->_padding_;
                }
                iVar33 = *(int *)((longlong)plVar32 +
                                 (ulonglong)((int)local_5e8->_padding_ - 1U & local_5c8) * 4);
                if (iVar33 != -1) {
                  do {
                    pFVar36 = (FNetFastTArrayBaseState *)
                              ((longlong)iVar33 * 0x10 + local_5e8->_padding_);
                    if ((uint)pFVar36->_padding_ == local_5c8) {
                      if (pFVar36 != (FNetFastTArrayBaseState *)0x0) goto LAB_148a31814;
                      break;
                    }
                    iVar33 = (int)pFVar36->_padding_;
                    pFVar36 = pFVar38;
                  } while (iVar33 != -1);
                }
              }
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L"");
              if (bVar13) {
                pcVar6 = (code *)swi(3);
                uVar14 = (*pcVar6)();
                return (bool)uVar14;
              }
LAB_148a31814:
              param_1 = local_5e0;
              local_5d0 = *(uint *)((longlong)&pFVar36->_padding_ + 4);
              lVar37 = (longlong)(int)local_5d0;
              uVar46 = uVar40;
              if ((int)local_5d0 < local_5e0->ArrayNum) {
                uVar46 = ~local_5d0 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                uVar14 = (*pcVar6)();
                return (bool)uVar14;
              }
              pFVar39 = (param_1->AllocatorInstance).Data;
              FVar22 = (ForElementType<int>)&local_1a8;
              if (local_1a8.SecondaryData != (ForElementType<int>)0x0) {
                FVar22 = local_1a8.SecondaryData;
              }
              if ((ulonglong)FVar22 <= &local_5d0) {
                FVar22 = (ForElementType<int>)&local_1a8;
                if (local_1a8.SecondaryData != (ForElementType<int>)0x0) {
                  FVar22 = local_1a8.SecondaryData;
                }
                if ((&local_5d0 < (uint *)((longlong)FVar22 + (longlong)local_17c * 4)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  uVar14 = (*pcVar6)();
                  return (bool)uVar14;
                }
              }
              if (local_180 == local_17c) {
                local_180 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                      (0x404,&local_1a8,&local_17c);
              }
              FVar22 = (ForElementType<int>)&local_1a8;
              if (local_1a8.SecondaryData != (ForElementType<int>)0x0) {
                FVar22 = local_1a8.SecondaryData;
              }
              lVar30 = (longlong)local_180;
              local_180 = local_180 + 1;
              *(uint *)((longlong)FVar22 + lVar30 * 4) = local_5d0;
              FNetBitReader::FNetBitReader
                        (&local_268,param_2->Map,*(uchar **)(lVar27 + 0xa8),
                         (longlong)*(int *)(lVar27 + 0xb8));
              param_2->Struct = (UStruct *)pUVar8;
              param_2->Data = pFVar39 + lVar37 * 0x14;
              param_2->Reader = (FBitReader *)&local_268;
              (**(code **)((longlong)*param_2->NetSerializeCB + 8))(param_2->NetSerializeCB,param_2)
              ;
              FNetBitReader::~FNetBitReader(&local_268);
            }
LAB_148a319cb:
            if ((*(int *)(lVar27 + 0x10) == *(int *)(lVar27 + 0x3c)) &&
               (*(int *)(lVar27 + 0x60) == *(int *)(lVar27 + 0x8c))) goto LAB_148a319e2;
          }
          uStack_520 = uStack_520 & ~auStack_530._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_530);
          FVar42 = local_5b8;
          uVar28 = (ulonglong)uStack_51c;
        } while ((int)uStack_51c < *(int *)(auStack_530._8_8_ + 0x18));
        if (((char)local_500 != '\0') && (local_500._1_1_ != '\0')) {
          uVar46 = *(int *)&(local_508->Elements).field_0x8 -
                   *(int *)&(local_508->Elements).field_0x34;
          if (uVar46 < 4) {
            iVar33 = 1;
          }
          else {
            uVar28 = (ulonglong)((uVar46 >> 1) + 7) * 2 + 1;
            lVar27 = 0x3f;
            if (uVar28 != 0) {
              for (; uVar28 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            local_30c = (undefined4)lVar27;
            iVar33 = 1 << ((byte)lVar27 & 0x1f);
          }
          if (((0 < (int)uVar46) && (local_508->HashSize < iVar33)) ||
             (iVar33 < local_508->HashSize)) {
            local_508->HashSize = iVar33;
            TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
            ::Rehash(local_508);
          }
        }
      }
      iVar33 = local_180;
      if (0 < (int)param_3->_padding_ - *(int *)((longlong)&param_3->_padding_ + 4)) {
        param_2->bOutHasMoreUnmapped = true;
      }
      FVar22 = local_1a8.SecondaryData;
      if (param_2->bOutSomeObjectsWereMapped != false) {
        iVar48 = param_1->ArrayNum;
        local_2b8.DataPtr = (int *)&local_1a8;
        if (local_1a8.SecondaryData != (ForElementType<int>)0x0) {
          local_2b8.DataPtr = (int *)local_1a8.SecondaryData;
        }
        if ((local_180 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar6 = (code *)swi(3);
          uVar14 = (*pcVar6)();
          return (bool)uVar14;
        }
        local_2b8.ArrayNum = iVar33;
        FWorldPartitionDestructibleHLODState::PostReplicatedChange(local_5e8,&local_2b8,iVar48);
        FVar22 = local_1a8.SecondaryData;
      }
    }
    if (FVar22 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar22);
    }
  }
  else {
    if (4 < (byte)LogNetFastTArray._0_1_) {
      pUVar21 = UField::GetOwnerStruct((UField *)pUVar8);
      local_470 = (FName)pUVar21->_padding_;
      ::FName::ToString(&local_470,&local_3e8);
      local_468 = (FName)pUVar8->_padding_;
      ::FName::ToString(&local_468,&local_3f8);
      UE::Logging::Private::BasicLog<5>
                (&`public:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
    }
    pFVar41 = local_5e8;
    local_5d8 = (UScriptStruct *)&param_3->_padding_;
    uStack_49c = 1;
    plVar32 = &local_5e8->_padding_;
    uVar34 = (uint)local_5e8->_padding_;
    uStack_48c = uVar46;
    local_488 = uVar46;
    if (uVar34 != 0) {
      plVar45 = (longlong *)local_5e8->_padding_;
      if ((longlong *)local_5e8->_padding_ == (longlong *)0x0) {
        plVar45 = plVar32;
      }
      uVar47 = (uint)*plVar45;
      pFVar36 = pFVar38;
      local_488 = uVar40;
      uVar46 = uVar40;
      while (uVar47 == 0) {
        iVar33 = (int)pFVar36;
        local_488 = (int)pFVar38 + 0x20;
        pFVar38 = (FNetFastTArrayBaseState *)(ulonglong)local_488;
        uVar46 = iVar33 + 1;
        pFVar36 = (FNetFastTArrayBaseState *)(ulonglong)uVar46;
        uStack_48c = uVar34;
        if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar46)
        goto LAB_148a30ee0;
        uVar47 = *(uint *)((longlong)plVar45 + (longlong)iVar33 * 4 + 4);
      }
      uStack_49c = -uVar47 & uVar47;
      uVar28 = (ulonglong)uStack_49c * 2 + 1;
      lVar27 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_420 = (int)lVar27;
      uStack_48c = (local_488 - 1) + local_420;
      if ((int)uVar34 < (int)uStack_48c) {
        uStack_48c = uVar34;
      }
    }
LAB_148a30ee0:
    iStack_480 = (int)local_5e8->_padding_ - *(int *)((longlong)&local_5e8->_padding_ + 4);
    uVar40 = (uint)local_5e8->_padding_;
    TStack_568._padding_ = CONCAT44(uStack_49c,uVar46);
    uStack_490 = 0xffffffff;
    uVar47 = uVar40 & 0xffffffe0;
    TStack_568.CurrentBitIndex = uStack_48c;
    TStack_568.UnvisitedBitMask = 0xffffffff;
    iVar33 = (int)uVar40 >> 5;
    TStack_568._28_4_ = uStack_48c;
    TStack_568.BaseBitIndex = local_488;
    uStack_548 = CONCAT44(uStack_47c,iStack_480);
    local_570 = local_5d8;
    TStack_568.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar32;
    local_4a8 = (longlong *)local_5d8;
    uStack_4a0 = uVar46;
    local_498 = plVar32;
    uStack_484 = uStack_48c;
    if ((((int)uVar40 < 0) || ((int)uVar34 < (int)uVar40)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      uVar14 = (*pcVar6)();
      return (bool)uVar14;
    }
    pUVar8 = local_5d8;
    uVar46 = (uint)pFVar41->_padding_;
    if (uVar40 != uVar46) {
      plVar45 = (longlong *)pFVar41->_padding_;
      plVar43 = plVar32;
      if (plVar45 != (longlong *)0x0) {
        plVar43 = plVar45;
      }
      uVar40 = -1 << ((byte)uVar40 & 0x1f) & *(uint *)((longlong)plVar43 + (longlong)iVar33 * 4);
      while (uVar40 == 0) {
        lVar27 = (longlong)iVar33;
        uVar47 = uVar47 + 0x20;
        iVar33 = iVar33 + 1;
        uVar40 = uVar46;
        if ((int)((uVar46 - 1) + ((int)(uVar46 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
        goto LAB_148a31010;
        uVar40 = *(uint *)((longlong)plVar43 + lVar27 * 4 + 4);
      }
      uVar28 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      uVar40 = (int)lVar27 + -1 + uVar47;
      if ((int)uVar46 < (int)uVar40) {
        uVar40 = uVar46;
      }
    }
LAB_148a31010:
    while( true ) {
      pUVar9 = local_570;
      if ((int)local_570->_padding_ - *(int *)((longlong)&local_570->_padding_ + 4) !=
          (int)uStack_548) {
        `TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5c4);
      }
      if (((TStack_568.CurrentBitIndex == uVar40) &&
          (TStack_568.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar32)) &&
         (pUVar9 == pUVar8)) break;
      lVar27 = pUVar9->_padding_ + (longlong)TStack_568.CurrentBitIndex * 200;
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>
                (param_2->GatherGuidReferences,
                 (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                 (lVar27 + 8));
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>
                (param_2->GatherGuidReferences,
                 (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                 (lVar27 + 0x58));
      piVar1 = param_2->TrackedGuidMemoryBytes;
      if (piVar1 != (int *)0x0) {
        *piVar1 = *piVar1 + *(int *)(lVar27 + 0xb0);
      }
      TStack_568.UnvisitedBitMask = TStack_568.UnvisitedBitMask & ~TStack_568._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_568);
    }
  }
  bVar13 = true;
LAB_148a326a0:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar42,CycleScopeEnd);
  }
  return bVar13;
joined_r0x000148a313df:
  if (iVar48 == -1) goto LAB_148a31402;
  if ((FNetworkGUID_u_0)((FNetworkGUID_u_0 *)(lVar27 + (longlong)iVar48 * 0x10))->ObjectId == FVar2)
  {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::RemoveByIndex
              ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
               (pFVar39 + (longlong)TStack_2f0.CurrentBitIndex * 200 + 0x58),iVar48);
    goto LAB_148a31402;
  }
  iVar48 = *(int *)(lVar27 + 8 + (longlong)iVar48 * 0x10);
  goto joined_r0x000148a313df;
LAB_148a31402:
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  Emplace<FNetworkGUID_const_&>
            ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
             (pFVar39 + (longlong)iVar33 * 200 + 8),(FNetworkGUID *)local_314,(bool *)&local_578);
  bVar13 = true;
  pTVar49 = local_5e0;
LAB_148a31421:
  TStack_2f0.UnvisitedBitMask = TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
  goto LAB_148a31310;
}

// FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState> @ 148a32720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

bool __cdecl
FFastArraySerializer::
FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
          (TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>
           *param_1,FNetDeltaSerializeInfo *param_2,FWorldPartitionDestructibleHLODState *param_3)

{
  int iVar1;
  INetDeltaBaseState *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UScriptStruct *this;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  char cVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray_DeltaStruct> FVar12;
  UPackage *pUVar13;
  UStruct *pUVar14;
  FNetFastTArrayBaseState *pFVar15;
  undefined ***pppuVar16;
  ForElementType<int> FVar17;
  FName FVar18;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar19;
  undefined1 auStackY_468 [32];
  int local_408;
  uint local_404;
  uint local_400;
  FColor_u_0 local_3f8 [2];
  FName local_3f0;
  FName local_3e8;
  TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
  local_3e0;
  FName local_3c0;
  FName local_3b0;
  FName local_3a8;
  FName local_3a0;
  FName local_398;
  FName local_390;
  FName local_388;
  FName local_380;
  TRawPtrProxy<FNetFastTArrayBaseState> local_378;
  FName local_370;
  FName local_368;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  TArrayView<int,int> local_2c0;
  FName local_2b0;
  FNetDeltaSerializeInfo *local_2a8;
  FWorldPartitionDestructibleHLODState *local_2a0;
  code *local_298;
  undefined **local_288;
  code *local_280;
  undefined ***local_270;
  code *local_268;
  undefined **local_258;
  code *local_250;
  undefined ***local_240;
  code *local_238;
  undefined **local_228;
  code *local_220;
  undefined ***local_210;
  code *local_208;
  undefined **local_1f8;
  code *local_1f0;
  undefined ***local_1e0;
  TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *local_1d8;
  FNetFastTArrayBaseState *pFStack_1d0;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *local_1c8;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTStack_1c0;
  undefined8 local_1b8;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_1a8;
  FFastArraySerializerHeader local_178;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_138;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_108;
  FFastArraySerializerHeader local_d8;
  TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_3f0 = (FName)param_1;
  if (GUseDetailedScopeCounters) {
    FVar12 = StatPtr_STAT_NetSerializeFastArray_DeltaStruct;
    if (StatPtr_STAT_NetSerializeFastArray_DeltaStruct ==
        (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray_DeltaStruct>)0x0) {
      pFVar11 = ::FName::FName(&local_2b0,"STAT_NetSerializeFastArray_DeltaStruct");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray_DeltaStruct>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NetSerializeFastArray_DeltaStruct,*pFVar11,
                          L"NetSerializeFast Array Delta Struct","STATGROUP_ServerCPU",
                          "STATCAT_Advanced",L"Server CPU",true,true,ST_int64,true,false,MCR_Invalid
                         );
    }
  }
  else {
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray_DeltaStruct>)
             &TStatId::TStatId_NAME_None;
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  local_3c0.ComparisonIndex.Value = 0;
  local_3c0.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_148a3288f:
    bVar5 = false;
    FVar18 = local_3c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3f8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3e8.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_3e8.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3e8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                   ,0x693);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148a3288f;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar13 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState,
                         (UObject *)pUVar13,L"WorldPartitionDestructibleHLODDamagedActorState");
  }
  this = Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
         OuterSingleton;
  local_298 = UE::Core::Private::Function::
              TFunctionRefCaller<void_(__cdecl*)(void_*,FFastArrayDeltaSerializeParams_const_&),void,void_*,FFastArrayDeltaSerializeParams_const_&>
              ::Call;
  local_268 = UE::Core::Private::Function::
              TFunctionRefCaller<void_(__cdecl*)(void_*,FFastArrayDeltaSerializeParams_const_&),void,void_*,FFastArrayDeltaSerializeParams_const_&>
              ::Call;
  local_238 = UE::Core::Private::Function::
              TFunctionRefCaller<void_(__cdecl*)(void_*,FFastArrayDeltaSerializeParams_const_&),void,void_*,FFastArrayDeltaSerializeParams_const_&>
              ::Call;
  local_280 = `FFastArraySerializer::
              FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>'
              ::__l2::FFastArrayItemCallbackHelper::PreReplicatedRemove;
  local_250 = `FFastArraySerializer::
              FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>'
              ::__l2::FFastArrayItemCallbackHelper::PostReplicatedAdd;
  local_220 = `FFastArraySerializer::
              FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>'
              ::__l2::FFastArrayItemCallbackHelper::PostReplicatedChange;
  local_1f8 = &
              ___7__TFunction_OwnedObject_P6AXPEAXAEBUFFastArrayDeltaSerializeParams__I_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_1f0 = `FFastArraySerializer::
              FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>'
              ::__l2::FFastArrayItemCallbackHelper::ReceivedItem;
  local_208 = UE::Core::Private::Function::
              TFunctionRefCaller<void_(__cdecl*)(void_*,FFastArrayDeltaSerializeParams_const_&,unsigned_int),void,void_*,FFastArrayDeltaSerializeParams_const_&,unsigned_int>
              ::Call;
  local_270 = (undefined ***)0x0;
  local_288 = &
              ___7__TFunction_OwnedObject_P6AXPEAXAEBUFFastArrayDeltaSerializeParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_240 = (undefined ***)0x0;
  local_258 = &
              ___7__TFunction_OwnedObject_P6AXPEAXAEBUFFastArrayDeltaSerializeParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_210 = (undefined ***)0x0;
  local_228 = &
              ___7__TFunction_OwnedObject_P6AXPEAXAEBUFFastArrayDeltaSerializeParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_1e0 = (undefined ***)0x0;
  local_1d8 = (TArray<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *)0x0;
  pFStack_1d0 = (FNetFastTArrayBaseState *)0x0;
  local_1c8 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0;
  pTStack_1c0 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_1b8 = 0xffffffffffffffff;
  local_3e0.Struct =
       Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState.
       OuterSingleton;
  local_3e0.Items = param_1;
  local_3e0.ArraySerializer = param_3;
  local_3e0.Parms = param_2;
  local_2a8 = param_2;
  local_2a0 = param_3;
  TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
  ::ConditionalRebuildItemMap(&local_3e0);
  if (param_2->GatherGuidReferences !=
      (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)0x0) {
    if (4 < (byte)LogNetFastTArray._0_1_) {
      pUVar14 = UField::GetOwnerStruct((UField *)this);
      local_3b0 = (FName)pUVar14->_padding_;
      ::FName::ToString(&local_3b0,&local_350);
      local_3a8 = (FName)this->_padding_;
      ::FName::ToString(&local_3a8,&local_360);
      UE::Logging::Private::BasicLog<5>
                (&`private:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)((longlong)*param_2->NetSerializeCB + 0x10))(param_2->NetSerializeCB,&local_2a8);
    uVar8 = 1;
    goto LAB_148a33102;
  }
  if (param_2->MoveGuidToUnmapped != (FNetworkGUID *)0x0) {
    if (4 < (byte)LogNetFastTArray._0_1_) {
      pUVar14 = UField::GetOwnerStruct((UField *)this);
      local_3a0 = (FName)pUVar14->_padding_;
      ::FName::ToString(&local_3a0,&local_330);
      local_3f0 = (FName)this->_padding_;
      ::FName::ToString(&local_3f0,&local_340);
      UE::Logging::Private::BasicLog<5>
                (&`private:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                  ::__l19::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data.AllocatorInstance.Data);
      }
      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
    }
    uVar8 = (**(code **)((longlong)*param_2->NetSerializeCB + 0x18))
                      (param_2->NetSerializeCB,&local_2a8);
    goto LAB_148a33102;
  }
  if (param_2->bUpdateUnmappedObjects != false) {
    if (4 < (byte)LogNetFastTArray._0_1_) {
      pUVar14 = UField::GetOwnerStruct((UField *)this);
      local_398 = (FName)pUVar14->_padding_;
      ::FName::ToString(&local_398,&local_310);
      local_390 = (FName)this->_padding_;
      ::FName::ToString(&local_390,&local_320);
      UE::Logging::Private::BasicLog<5>
                (&`private:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
    }
    local_1c8 = &local_1a8;
    local_1a8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_1a8.ArrayNum = 0;
    local_1a8.ArrayMax = 8;
    (**(code **)((longlong)*param_2->NetSerializeCB + 0x20))(param_2->NetSerializeCB,&local_2a8);
    iVar7 = local_1a8.ArrayNum;
    FVar17 = local_1a8.AllocatorInstance.SecondaryData;
    if (param_2->bOutSomeObjectsWereMapped != false) {
      local_2c0.DataPtr = (int *)&local_1a8;
      if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        local_2c0.DataPtr = (int *)local_1a8.AllocatorInstance.SecondaryData;
      }
      iVar1 = *(int *)((longlong)local_3f0 + 8);
      if ((local_1a8.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      local_2c0.ArrayNum = iVar7;
      FWorldPartitionDestructibleHLODState::PostReplicatedChange(param_3,&local_2c0,iVar1);
      FVar17 = local_1a8.AllocatorInstance.SecondaryData;
    }
LAB_148a33240:
    if (FVar17 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar17);
    }
    uVar8 = 1;
    goto LAB_148a33102;
  }
  if (param_2->Writer == (FBitWriter *)0x0) {
    if (4 < (byte)LogNetFastTArray._0_1_) {
      pUVar14 = UField::GetOwnerStruct((UField *)this);
      local_370 = (FName)pUVar14->_padding_;
      ::FName::ToString(&local_370,&local_2d0);
      local_368 = (FName)this->_padding_;
      ::FName::ToString(&local_368,&local_2e0);
      UE::Logging::Private::BasicLog<5>
                (&`private:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                  ::__l85::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
      }
      if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      }
    }
    if ((param_2->Reader == (FBitReader *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parms.Reader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                           ,0x727,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    local_d8.DeletedIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_d8.DeletedIndices.ArrayNum = 0;
    local_d8.DeletedIndices.ArrayMax = 8;
    bVar9 = TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
            ::ReadDeltaHeader(&local_3e0,&local_d8);
    if (bVar9) {
      pTStack_1c0 = &local_138;
      local_1c8 = &local_108;
      local_108.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_1b8 = CONCAT44(local_d8.ArrayReplicationKey,local_d8.NumChanged);
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 8;
      local_138.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 8;
      cVar10 = (**(code **)((longlong)*param_2->NetSerializeCB + 0x28))
                         (param_2->NetSerializeCB,&local_2a8);
      if (cVar10 != '\0') {
        TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
        ::
        PostReceiveCleanup<TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>_>
                  (&local_3e0,&local_d8,&local_108,&local_138,
                   (TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>_>
                    *)&param_3->_padding_);
        if (local_138.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
        }
        FVar17 = local_d8.DeletedIndices.AllocatorInstance.SecondaryData;
        if (local_108.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
          FVar17 = local_d8.DeletedIndices.AllocatorInstance.SecondaryData;
        }
        goto LAB_148a33240;
      }
      if (local_138.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
      }
      if (local_108.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
      }
    }
    if (local_d8.DeletedIndices.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_d8.DeletedIndices.AllocatorInstance.SecondaryData);
    }
LAB_148a330ff:
    uVar8 = 0;
  }
  else {
    if (4 < (byte)LogNetFastTArray._0_1_) {
      pUVar14 = UField::GetOwnerStruct((UField *)this);
      local_388 = (FName)pUVar14->_padding_;
      ::FName::ToString(&local_388,&local_2f0);
      local_380 = (FName)this->_padding_;
      ::FName::ToString(&local_380,&local_300);
      UE::Logging::Private::BasicLog<5>
                (&`private:_static_bool___cdecl_FFastArraySerializer::FastArrayDeltaSerialize_DeltaSerializeStructs<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>&___ptr64,FNetDeltaSerializeInfo&___ptr64,FWorldPartitionDestructibleHLODState&___ptr64)'
                  ::__l49::LOG_Static,(FLogCategoryBase *)&LogNetFastTArray);
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
    }
    pTVar19 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)0x0;
    if ((param_2->Struct == (UStruct *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parms.Struct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                           ,0x6d5,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    pIVar2 = param_2->OldState;
    local_408 = -1;
    local_404 = 0;
    local_400 = 0;
    if (pIVar2 != (INetDeltaBaseState *)0x0) {
      local_408 = (int)pIVar2[3]._padding_;
      pTVar19 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                (pIVar2 + 1);
      local_404 = pIVar2->ChangelistHistory;
      local_400 = pIVar2->LastAckedHistory;
      bVar9 = TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
              ::ConditionalCreateNewDeltaState(&local_3e0,pTVar19,local_408);
      if (!bVar9) goto LAB_148a330ff;
    }
    pFVar15 = ::operator_new(0x78);
    if (pFVar15 == (FNetFastTArrayBaseState *)0x0) {
      pFVar15 = (FNetFastTArrayBaseState *)0x0;
    }
    else {
      pFVar15->_padding_ = 0;
      pFVar15->_padding_ = 0;
      pFVar15->_padding_ = 0;
      *(undefined8 *)&pFVar15->IDToCLMap = 0;
      *(undefined8 *)&(pFVar15->IDToCLMap).field_0x8 = 0;
      *(undefined8 *)&(pFVar15->IDToCLMap).field_0x20 = 0;
      pFVar15->_padding_ = (longlong)&___7FNetFastTArrayBaseState__6B_;
      *(undefined4 *)&(pFVar15->IDToCLMap).field_0x28 = 0;
      *(undefined4 *)&(pFVar15->IDToCLMap).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar15->IDToCLMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar15->IDToCLMap).field_0x34 = 0;
      *(undefined8 *)&(pFVar15->IDToCLMap).field_0x40 = 0;
      *(undefined4 *)&(pFVar15->IDToCLMap).field_0x48 = 0;
      pFVar15->ArrayReplicationKey = -1;
    }
    if ((param_2->NewState == (TSharedPtr<INetDeltaBaseState,1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parms.NewState",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Classes\\Net\\Serialization\\FastArraySerializer.h"
                           ,0x6f2,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if ((((pFVar15 != (FNetFastTArrayBaseState *)0x0) && (pFVar15->_padding_ != 0)) &&
        (pFVar15->_padding_ != 0)) &&
       ((0 < *(int *)(pFVar15->_padding_ + 8) &&
        (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar9)))) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    local_378.Object = pFVar15;
    TSharedPtr<INetDeltaBaseState,1>::operator=<FNetFastTArrayBaseState>
              (param_2->NewState,&local_378);
    pFVar15->ArrayReplicationKey = *(int *)((longlong)&param_3->_padding_ + 4);
    local_178.ArrayReplicationKey = *(int *)((longlong)&param_3->_padding_ + 4);
    local_178.BaseReplicationKey = local_408;
    local_178.NumChanged = 0;
    local_178.DeletedIndices.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_178.DeletedIndices.ArrayNum = 0;
    local_178.DeletedIndices.ArrayMax = 8;
    local_98.AllocatorInstance.SecondaryData =
         (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 8;
    if (param_2->bIsInitializingBaseFromDefault == false) {
      TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
      ::BuildChangedAndDeletedBuffers
                (&local_3e0,&pFVar15->IDToCLMap,pTVar19,&local_98,&local_178.DeletedIndices);
      pFVar15->ArrayReplicationKey = *(int *)((longlong)&param_3->_padding_ + 4);
    }
    else {
      TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
      ::BuildChangedAndDeletedBuffersFromDefault(&local_3e0,&pFVar15->IDToCLMap,&local_98);
    }
    local_178.NumChanged = local_98.ArrayNum;
    TFastArraySerializeHelper<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
    ::WriteDeltaHeader(&local_3e0,&local_178);
    *(uint *)((longlong)&pFVar15->_padding_ + 4) = local_404;
    *(uint *)&pFVar15->_padding_ = local_400;
    local_1d8 = &local_98;
    pFStack_1d0 = pFVar15;
    uVar8 = (**(code **)((longlong)*param_2->NetSerializeCB + 0x28))
                      (param_2->NetSerializeCB,&local_2a8);
    if (local_98.AllocatorInstance.SecondaryData !=
        (ForElementType<FFastArraySerializer_FastArrayDeltaSerialize_FIdxIDPair>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
    if (local_178.DeletedIndices.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_178.DeletedIndices.AllocatorInstance.SecondaryData);
    }
  }
LAB_148a33102:
  if (local_208 != (code *)0x0) {
    pppuVar16 = &local_1f8;
    if (local_1e0 != (undefined ***)0x0) {
      pppuVar16 = local_1e0;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_238 != (code *)0x0) {
    pppuVar16 = &local_228;
    if (local_210 != (undefined ***)0x0) {
      pppuVar16 = local_210;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_268 != (code *)0x0) {
    pppuVar16 = &local_258;
    if (local_240 != (undefined ***)0x0) {
      pppuVar16 = local_240;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (local_298 != (code *)0x0) {
    pppuVar16 = &local_288;
    if (local_270 != (undefined ***)0x0) {
      pppuVar16 = local_270;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return (bool)uVar8;
}

// MarkItemDirty @ 148a5f360

void __thiscall
FFastArraySerializer::MarkItemDirty(FFastArraySerializer *this,FFastArraySerializerItem *param_1)

{
  if (param_1->ReplicationID == -1) {
    this->IDCounter = this->IDCounter + 1;
    param_1->ReplicationID = this->IDCounter;
    if (this->IDCounter == -1) {
      this->IDCounter = 0;
    }
  }
  param_1->ReplicationKey = param_1->ReplicationKey + 1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this);
  this->ArrayReplicationKey = this->ArrayReplicationKey + 1;
  this->CachedNumItems = -1;
  this->CachedNumItemsToConsiderForWriting = -1;
  if (this->ArrayReplicationKey == -1) {
    this->ArrayReplicationKey = 0;
  }
  return;
}

