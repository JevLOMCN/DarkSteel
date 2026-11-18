// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 31

// StaticClass @ 14dad9df0

UClass * __cdecl UChaosCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCache",
               &Z_Registration_Info_UClass_UChaosCache.InnerSingleton,
               StaticRegisterNativesUChaosCache,0x390,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosCache>,InternalVTableHelperCtorCaller<UChaosCache>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosCache.InnerSingleton;
}

// FlushPendingFrames_MainPass<1> @ 14dae1170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UChaosCache::FlushPendingFrames_MainPass<1>
          (UChaosCache *this,TQueue<FPendingFrameWrite,1> *param_1,bool param_2)

{
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_01;
  TMap<FName,FParticleTransformTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FParticleTransformTrack,0>_>
  *this_02;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  FName *pFVar22;
  TStatIdData *pTVar23;
  uint *puVar24;
  FRichCurve *this_03;
  FParticleTransformTrack *pFVar25;
  byte bVar26;
  longlong *plVar27;
  uint *puVar28;
  undefined1 *puVar29;
  FNameEntryId FVar30;
  TTransform<double> *pTVar31;
  FScriptContainerElement *pFVar32;
  FName *pFVar33;
  ForElementType<unsigned_int> FVar34;
  wchar_t *in_R9;
  char *pcVar35;
  TTransform<double> *pTVar36;
  ulonglong uVar37;
  longlong lVar38;
  FParticleTransformTrack *pFVar39;
  TTransform<double> *pTVar40;
  FParticleTransformTrack *pFVar41;
  bool bVar42;
  uint uVar43;
  TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *pTVar44;
  longlong lVar45;
  ulong64 uVar46;
  float fVar47;
  undefined1 auStackY_4d8 [32];
  char *in_stack_fffffffffffffb48;
  undefined1 local_476;
  char local_475;
  undefined1 local_474;
  undefined1 local_473;
  undefined1 local_472;
  undefined1 local_471;
  undefined1 local_470 [4];
  uint local_46c;
  uint local_468;
  undefined1 local_464 [4];
  int local_460;
  undefined1 local_45c [60];
  undefined8 uStack_420;
  undefined4 uStack_418;
  uint uStack_414;
  int iStack_410;
  undefined4 uStack_40c;
  int local_408;
  undefined4 uStack_404;
  FColor_u_0 local_400;
  TKeyInitializer<FName_const_&> local_3fc;
  undefined1 local_3f4 [12];
  FName local_3e8;
  uint local_3e0;
  uint local_3d8;
  uint uStack_3d4;
  FName local_3d0;
  FName local_3c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b8;
  void *local_398;
  undefined8 local_390;
  void *local_388;
  undefined8 local_380;
  void *local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined1 local_364;
  undefined2 local_363;
  undefined1 local_361;
  void *local_360;
  undefined8 local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_350;
  FKeyHandle local_330;
  int local_32c;
  int local_328;
  int local_324;
  FKeyHandle local_31c [2];
  int local_314;
  FKeyHandle local_310 [2];
  TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *local_308;
  TQueue<FPendingFrameWrite,1> *local_300;
  FKeyHandle local_2f8 [4];
  longlong *local_2e8;
  undefined1 auStack_2e0 [32];
  undefined8 uStack_2c0;
  longlong *local_2b8;
  undefined1 auStack_2b0 [32];
  undefined8 uStack_290;
  longlong *local_288;
  undefined1 auStack_280 [32];
  undefined8 uStack_260;
  undefined4 *local_258;
  undefined1 *local_250;
  FName *local_248;
  void **local_240;
  FCacheEventTrack local_238;
  FName local_1f8;
  longlong *local_1f0;
  undefined8 uStack_1e8;
  float local_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  double local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1a4;
  undefined4 local_184;
  undefined1 local_178 [72];
  uint *local_130;
  undefined8 local_128;
  int local_11c;
  ForAnyElementType local_100;
  uint local_f8;
  longlong local_f0;
  int local_e8;
  TBitArray<FDefaultBitArrayAllocator> local_e0;
  int local_bc;
  longlong local_a0;
  int local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  int local_6c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  bVar42 = false;
  local_475 = param_2;
  local_45c._36_8_ = this;
  local_300 = param_1;
  FPendingFrameWrite::FPendingFrameWrite((FPendingFrameWrite *)local_178);
  bVar14 = TQueue<FPendingFrameWrite,1>::Dequeue(param_1,(FPendingFrameWrite *)local_178);
  do {
    if (bVar14 == false) {
      FPendingFrameWrite::~FPendingFrameWrite((FPendingFrameWrite *)local_178);
      return bVar42;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<1>(TQueue<FPendingFrameWrite,1>&___ptr64,bool)___ptr64'
         ::__l4::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<1>(TQueue<FPendingFrameWrite,1>&___ptr64,bool)___ptr64'
                             ::__l4::_thread_safe_static_guard_0__),
       `private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<1>(TQueue<FPendingFrameWrite,1>&___ptr64,bool)___ptr64'
       ::__l4::_thread_safe_static_guard_0__ == -1)) {
      _StatPtr_QSTAT_CacheFlushSingleFramePass2 = (TStatIdData *)0x0;
      FThreadSafeStaticStatInner<`UChaosCache::FlushPendingFrames_MainPass<1>'::__l4::FStat_QSTAT_CacheFlushSingleFramePass2,1>
      ::GetStatId(&`private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<1>(TQueue<FPendingFrameWrite,1>&___ptr64,bool)___ptr64'
                   ::__l4::StatPtr_QSTAT_CacheFlushSingleFramePass2);
      _Init_thread_footer(&`private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<1>(TQueue<FPendingFrameWrite,1>&___ptr64,bool)___ptr64'
                           ::__l4::_thread_safe_static_guard_0__);
    }
    pTVar23 = _StatPtr_QSTAT_CacheFlushSingleFramePass2;
    if (_StatPtr_QSTAT_CacheFlushSingleFramePass2 == (TStatIdData *)0x0) {
      pFVar22 = ::FName::FName(&local_1f8,"QSTAT_CacheFlushSingleFramePass2");
      pcVar35 = "STATGROUP_Quick";
      in_stack_fffffffffffffb48 = "STATCAT_Advanced";
      pTVar23 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<1>(TQueue<FPendingFrameWrite,1>&___ptr64,bool)___ptr64'
                            ::__l4::StatPtr_QSTAT_CacheFlushSingleFramePass2,*pFVar22,
                           L"QSTAT_CacheFlushSingleFramePass2","STATGROUP_Quick","STATCAT_Advanced",
                           L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      in_R9 = (wchar_t *)pcVar35;
    }
    FVar3 = *(FName *)&pTVar23->Name;
    bVar14 = false;
    bVar7 = false;
    local_3c8.ComparisonIndex.Value = 0;
    local_3c8.Number = 0;
    bVar13 = false;
    bVar17 = false;
    FVar30 = FVar3.ComparisonIndex.Value;
    uVar21 = FVar3.Number;
    if ((FVar30.Value == 0) && (uVar21 == 0)) {
LAB_14dae1374:
      bVar7 = bVar17;
      bVar14 = bVar13;
      bVar13 = false;
      local_45c._12_4_ = local_3c8.ComparisonIndex.Value;
      local_45c._16_4_ = local_3c8.Number;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_400.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_400._s_0,(pTVar23->StatDescriptionAnsi).Ptr);
        bVar14 = false;
        bVar7 = true;
        bVar13 = false;
        bVar17 = true;
        if (-1 < CpuChannel->Enabled) {
          in_R9 = (wchar_t *)0xe1;
          local_3d0.ComparisonIndex.Value = FVar30.Value;
          local_3d0.Number = uVar21;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_3d0,(pTVar23->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                     ,0xe1);
          bVar14 = true;
          bVar7 = true;
          bVar13 = true;
          bVar17 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14dae1374;
      local_45c._12_8_ = FVar3;
      local_3d8 = FVar30.Value;
      uStack_3d4 = uVar21;
      local_3c8 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar13 = true;
    }
    uVar21 = local_178._16_4_;
    local_46c = local_f8;
    if (0 < (int)local_178._16_4_) {
      local_46c = local_178._16_4_;
    }
    uVar46 = (ulong64)local_46c;
    local_468 = local_178._16_4_;
    bVar17 = 0 < (int)local_46c;
    local_350._padding_._4_4_ = 1;
    local_350.UnvisitedBitMask = 0xffffffff;
    local_350._padding_._0_4_ = 0;
    local_350.Array = &local_e0;
    local_350.CurrentBitIndex = 0;
    local_350.BaseBitIndex = 0;
    if (local_e0.NumBits != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_350);
    }
    iVar20 = local_e0.NumBits;
    local_45c._52_8_ = CONCAT44(local_350._padding_._4_4_,(undefined4)local_350._padding_);
    local_45c._44_8_ = &local_f0;
    uStack_414 = local_350.CurrentBitIndex;
    uStack_418 = local_350.UnvisitedBitMask;
    uStack_40c = local_350._28_4_;
    iStack_410 = local_350.BaseBitIndex;
    local_3b8.Array = &local_e0;
    bVar26 = (byte)local_e0.NumBits & 0x1f;
    local_408 = local_e8 - local_bc;
    local_3b8._padding_._0_4_ = local_e0.NumBits >> 5;
    local_3b8._padding_._4_4_ = 1 << bVar26;
    local_3b8.UnvisitedBitMask = -1 << bVar26;
    uStack_420 = local_350.Array;
    local_3b8.BaseBitIndex = local_e0.NumBits & 0xffffffe0;
    local_3b8.CurrentBitIndex = local_e0.NumBits;
    uStack_2c0 = CONCAT44(uStack_404,local_408);
    auStack_2e0._8_8_ = local_350.Array;
    local_2e8 = (longlong *)local_45c._44_8_;
    auStack_2e0._0_8_ = local_45c._52_8_;
    auStack_2e0._16_8_ = _uStack_418;
    auStack_2e0._24_8_ = _iStack_410;
    if (local_e0.NumBits < 0) {
      in_R9 = L"";
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
    }
    if (iVar20 != local_e0.NumBits) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b8);
    }
    local_45c._56_4_ = local_3b8._padding_._4_4_;
    local_45c._52_4_ = (int)local_3b8._padding_;
    local_45c._44_8_ = &local_f0;
    uStack_414 = local_3b8.CurrentBitIndex;
    uStack_418 = local_3b8.UnvisitedBitMask;
    uStack_40c = local_3b8._28_4_;
    iStack_410 = local_3b8.BaseBitIndex;
    local_408 = local_e8 - local_bc;
    uStack_420 = local_3b8.Array;
    pTVar12 = uStack_420;
    uStack_420._0_4_ = SUB84(local_3b8.Array,0);
    uStack_420._4_4_ = (undefined4)((ulonglong)local_3b8.Array >> 0x20);
    uStack_1c8 = CONCAT44(uStack_404,local_408);
    local_1e0 = (float)uStack_420;
    uStack_1dc = uStack_420._4_4_;
    uStack_1d8 = local_3b8.UnvisitedBitMask;
    uStack_1d4 = local_3b8.CurrentBitIndex;
    fVar47 = (float)uStack_420;
    uStack_420 = pTVar12;
    local_1f0 = (longlong *)local_45c._44_8_;
    uStack_1e8 = local_45c._52_8_;
    local_1d0 = (double)_iStack_410;
    while( true ) {
      plVar27 = local_2e8;
      if ((int)local_2e8[1] - *(int *)((longlong)local_2e8 + 0x34) != (int)uStack_2c0) {
        local_476 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_476);
      }
      uVar43 = (uint)uVar46;
      if (((auStack_2e0._20_4_ == uStack_1d4) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)auStack_2e0._8_8_ ==
           (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uStack_1dc,local_1e0))) &&
         (plVar27 == local_1f0)) break;
      this_00 = &this->ChannelsTracks;
      pTVar44 = (TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)
                ((longlong)(int)auStack_2e0._20_4_ * 0x20 + *plVar27);
      pFVar4 = (pTVar44->AllocatorInstance).Data;
      local_45c._20_8_ = pTVar44;
      uVar18 = ::GetTypeHash((FNameEntryId)(uint)pFVar4);
      if (*(int *)&(this->ChannelsTracks).field_0x8 != *(int *)&(this->ChannelsTracks).field_0x34) {
        puVar5 = *(undefined1 **)&(this->ChannelsTracks).field_0x40;
        puVar29 = &(this->ChannelsTracks).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar29 = puVar5;
        }
        iVar20 = *(int *)(puVar29 +
                         (ulonglong)
                         (*(int *)&(this->ChannelsTracks).field_0x48 - 1U &
                         (int)((ulonglong)pFVar4 >> 0x20) + uVar18) * 4);
        if (iVar20 != -1) {
          do {
            plVar27 = (longlong *)((longlong)iVar20 * 0x20 + *(longlong *)&this_00->field_0x0);
            if ((FScriptContainerElement *)*plVar27 == pFVar4) {
              pFVar39 = (FParticleTransformTrack *)(plVar27 + 1);
              if (plVar27 == (longlong *)0x0) {
                pFVar39 = (FParticleTransformTrack *)0x0;
              }
              local_45c._28_8_ = pFVar39;
              if (pFVar39 != (FParticleTransformTrack *)0x0) goto LAB_14dae1701;
              break;
            }
            iVar20 = (int)plVar27[3];
          } while (iVar20 != -1);
        }
      }
      in_R9 = (wchar_t *)0x0;
      local_308 = pTVar44;
      TSet<TTuple<FName,FRichCurves>,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,FRichCurves>,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>,FDefaultSetAllocator>
                  *)this_00,&local_3fc,(bool *)&local_308);
      pFVar39 = (FParticleTransformTrack *)
                (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_3fc.Key * 0x20 + 8);
      iVar20 = (pFVar39->RawTransformTrack).PosKeys.ArrayNum;
      pTVar31 = (TTransform<double> *)&(pFVar39->RawTransformTrack).PosKeys.ArrayNum;
      local_45c._28_8_ = pFVar39;
      if (iVar20 < (int)uVar43) {
        in_R9 = (wchar_t *)pFVar39;
        iVar19 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x80,8,uVar43 - iVar20,(ForAnyElementType *)pFVar39,(int *)pTVar31,
                            &(pFVar39->RawTransformTrack).PosKeys.ArrayMax);
        DefaultConstructItems<FRichCurve,int>
                  ((pFVar39->RawTransformTrack).PosKeys.AllocatorInstance.Data +
                   (longlong)iVar19 * 0x80,uVar43 - iVar20);
        in_stack_fffffffffffffb48 = (char *)pTVar31;
      }
      else {
        if ((int)uVar43 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar46);
        }
        if ((int)uVar43 < iVar20) {
          uVar18 = iVar20 - uVar43;
          if ((int)(uVar18 | uVar43) < 0) {
            in_stack_fffffffffffffb48 = (char *)(longlong)(int)uVar43;
            in_R9 = 
            L"Array range out of bounds: index %lld and length %lld into an array of size %lld";
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
          }
          if (uVar18 != 0) {
            TArray<FRichCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      ((TArray<FRichCurve,TSizedDefaultAllocator<32>_> *)pFVar39,uVar43,uVar18);
            in_R9 = (wchar_t *)(ulonglong)*(uint *)pTVar31;
            in_stack_fffffffffffffb48 = (char *)&(pFVar39->RawTransformTrack).PosKeys.ArrayMax;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,(ForAnyElementType *)pFVar39,*(uint *)pTVar31,
                       (int *)in_stack_fffffffffffffb48);
          }
        }
      }
LAB_14dae1701:
      if ((int)uVar43 < *(int *)&pTVar44[1].AllocatorInstance.Data) {
        in_R9 = L"";
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChannelData.Value.Num() <= NumParticles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                            ,0xf3,L"");
        if (bVar15) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
      }
      uVar10 = local_45c._36_8_;
      uVar8 = local_45c._28_8_;
      pTVar31 = (TTransform<double> *)0x0;
      if ((int)uVar21 < 1) {
        if (local_475 == '\0') {
          if ((int)local_46c < 1) {
            uVar46 = (ulong64)local_46c;
            goto LAB_14dae19d0;
          }
          pTVar36 = (TTransform<double> *)0x0;
          local_45c._4_8_ = 0;
          this_01 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (local_45c._36_8_ + 0x330);
          do {
            uVar11 = local_45c._36_8_;
            uVar9 = local_45c._4_8_;
            uVar43 = (uint)pTVar31;
            uVar21 = 0;
            if ((int)uVar43 < (int)local_f8) {
              uVar21 = ~uVar43 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (in_stack_fffffffffffffb48 = (char *)pTVar36,
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
            local_45c._0_4_ = *(undefined4 *)(local_100.Data + uVar9);
            if (*(int *)&((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)(uVar11 + 0x330))->field_0x8 !=
                *(int *)&((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)(uVar10 + 0x330))->field_0x34) {
              puVar5 = *(undefined1 **)
                        &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)(uVar10 + 0x330))->field_0x40;
              puVar29 = &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)(uVar10 + 0x330))->field_0x38;
              if (puVar5 != (undefined1 *)0x0) {
                puVar29 = puVar5;
              }
              uVar21 = *(uint *)(puVar29 +
                                (ulonglong)
                                (*(int *)&((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                            *)(uVar10 + 0x330))->field_0x48 - 1U & local_45c._0_4_)
                                * 4);
              if (uVar21 != 0xffffffff) {
                do {
                  puVar28 = (uint *)((longlong)(int)uVar21 * 0x10 + *(longlong *)&this_01->field_0x0
                                    );
                  if (*puVar28 == local_45c._0_4_) {
                    puVar24 = puVar28 + 1;
                    if (puVar28 == (uint *)0x0) {
                      puVar24 = (uint *)0x0;
                    }
                    if (puVar24 != (uint *)0x0) goto LAB_14dae1c9e;
                    break;
                  }
                  uVar21 = puVar28[2];
                } while (uVar21 != 0xffffffff);
              }
            }
            pFVar4 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->
                     AllocatorInstance).Data;
            if ((pFVar4 <= (FScriptContainerElement *)(local_464 + 8)) &&
               ((FScriptContainerElement *)(local_464 + 8) <
                pFVar4 + (longlong)
                         ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->ArrayMax * 4)
               ) {
              in_stack_fffffffffffffb48 = local_464 + 8;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            iVar20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->ArrayNum;
            piVar2 = &((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->ArrayMax;
            if (iVar20 == *piVar2) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)(uVar11 + 0x58),piVar2);
            }
            pFVar4 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->
                     AllocatorInstance).Data;
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->ArrayNum = iVar20 + 1;
            *(undefined4 *)(pFVar4 + (longlong)iVar20 * 4) = local_45c._0_4_;
            local_258 = (undefined4 *)(local_464 + 8);
            local_250 = (undefined1 *)((longlong)&local_3fc.Key + 4);
            local_3fc.Key._4_4_ = iVar20;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_&&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)this_01,(TPairInitializer<int_const_&,int_&&> *)local_3f4,
                       (bool *)&local_258);
            puVar24 = (uint *)(*(longlong *)&this_01->field_0x0 +
                              (longlong)(int)local_3f4._0_4_ * 0x10 + 4);
LAB_14dae1c9e:
            in_R9 = (wchar_t *)0x0;
            uVar21 = *puVar24;
            uVar18 = 0;
            if ((int)uVar21 < (((FRawAnimSequenceTrack *)uVar8)->PosKeys).ArrayNum) {
              uVar18 = ~uVar21 >> 0x1f;
            }
            if (uVar18 == 0) {
              in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffb48 = (char *)(longlong)(int)uVar21;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            pFVar4 = (((FRawAnimSequenceTrack *)uVar8)->PosKeys).AllocatorInstance.Data;
            FKeyHandle::FKeyHandle(local_310);
            uVar18 = 0;
            if ((int)uVar43 <
                *(int *)&(((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)
                          (local_45c._20_8_ + 0x10))->AllocatorInstance).Data) {
              uVar18 = ~uVar43 >> 0x1f;
            }
            if (uVar18 == 0) {
              in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffb48 = (char *)pTVar36;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            uVar9 = local_45c._4_8_;
            in_stack_fffffffffffffb48 =
                 (char *)((ulonglong)in_stack_fffffffffffffb48 & 0xffffffffffffff00);
            FRichCurve::AddKey((FRichCurve *)(pFVar4 + (longlong)(longlong)(int)uVar21 * 0x80),
                               fVar47,(float)local_178._0_4_,SUB81(in_R9,0),
                               (FKeyHandle)(uint)in_stack_fffffffffffffb48);
            local_45c._4_8_ = uVar9 + 4;
            pTVar31 = (TTransform<double> *)(ulonglong)(uVar43 + 1);
            pTVar36 = (TTransform<double> *)((longlong)(pTVar36->Rotation).XY.m128d_f64 + 1);
          } while ((int)(uVar43 + 1) < (int)local_46c);
        }
        else {
          lVar45 = *(longlong *)&pTVar44->ArrayNum;
          iVar20 = *(int *)&pTVar44[1].AllocatorInstance.Data;
          lVar38 = lVar45 + (longlong)iVar20 * 4;
          while( true ) {
            if (*(int *)&pTVar44[1].AllocatorInstance.Data != iVar20) {
              local_474 = 0;
              `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_474);
            }
            if (lVar45 == lVar38) break;
            uVar43 = (uint)pTVar31;
            uVar21 = 0;
            if ((int)uVar43 < (pFVar39->RawTransformTrack).PosKeys.ArrayNum) {
              uVar21 = ~uVar43 >> 0x1f;
            }
            if (uVar21 == 0) {
              in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffb48 = (char *)(longlong)(int)uVar43;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            pTVar31 = (TTransform<double> *)(ulonglong)(uVar43 + 1);
            pFVar4 = (pFVar39->RawTransformTrack).PosKeys.AllocatorInstance.Data;
            FKeyHandle::FKeyHandle(local_2f8);
            in_stack_fffffffffffffb48 =
                 (char *)((ulonglong)in_stack_fffffffffffffb48 & 0xffffffffffffff00);
            FRichCurve::AddKey((FRichCurve *)(pFVar4 + (longlong)(int)uVar43 * 0x80),fVar47,
                               (float)local_178._0_4_,SUB81(in_R9,0),
                               (FKeyHandle)(uint)in_stack_fffffffffffffb48);
            lVar45 = lVar45 + 4;
          }
        }
LAB_14dae19c6:
        uVar46 = (ulong64)local_46c;
        uVar21 = local_468;
      }
      else {
        uVar21 = local_468;
        if (0 < (int)uVar43) {
          local_45c._4_8_ = 0;
          pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_45c._36_8_ + 0x38);
          pTVar36 = pTVar31;
          pTVar40 = pTVar31;
          do {
            uVar8 = local_45c._36_8_;
            uVar43 = (uint)pTVar36;
            uVar21 = 0;
            if ((int)uVar43 < (int)local_178._16_4_) {
              uVar21 = ~uVar43 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (in_stack_fffffffffffffb48 = (char *)pTVar40,
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
            pFVar4 = (pTVar1->AllocatorInstance).Data;
            in_R9 = (wchar_t *)
                    (longlong)((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38))->ArrayNum
            ;
            local_464 = *(undefined1 (*) [4])(local_178._8_8_ + (longlong)&pTVar31->Rotation);
            for (pFVar32 = pFVar4; pFVar32 != pFVar4 + (longlong)in_R9 * 4; pFVar32 = pFVar32 + 4) {
              if ((undefined1  [4])*(int *)pFVar32 == local_464) {
                uVar21 = (uint)((longlong)pFVar32 - (longlong)pFVar4 >> 2);
                if (uVar21 != 0xffffffff) goto LAB_14dae18c3;
                break;
              }
            }
            if ((pFVar4 <= (FScriptContainerElement *)local_464) &&
               ((FScriptContainerElement *)local_464 <
                pFVar4 + (longlong)
                         ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38))->ArrayMax * 4)
               ) {
              in_stack_fffffffffffffb48 = local_464;
              in_R9 = 
              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
              ;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            iVar20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38))->ArrayNum;
            piVar2 = &((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38))->ArrayMax;
            if (iVar20 == *piVar2) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pTVar1,piVar2);
            }
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38))->ArrayNum = iVar20 + 1;
            piVar2 = &((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x48))
                      ->ArrayMax;
            *(undefined1 (*) [4])((pTVar1->AllocatorInstance).Data + (longlong)iVar20 * 4) =
                 local_464;
            uVar21 = ((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x48))->
                     ArrayNum;
            if (uVar21 == *piVar2) {
              uVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x898,(ForAnyElementType *)(uVar8 + 0x48),piVar2);
            }
            ((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x48))->ArrayNum
                 = uVar21 + 1;
            DefaultConstructItems<FPerParticleCacheData,int>
                      ((((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x48)
                        )->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x98,1);
LAB_14dae18c3:
            uVar18 = 0;
            if ((int)uVar21 < (((FRawAnimSequenceTrack *)local_45c._28_8_)->PosKeys).ArrayNum) {
              uVar18 = ~uVar21 >> 0x1f;
            }
            if (uVar18 == 0) {
              in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffb48 = (char *)(longlong)(int)uVar21;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            pFVar4 = (((FRawAnimSequenceTrack *)local_45c._28_8_)->PosKeys).AllocatorInstance.Data;
            FKeyHandle::FKeyHandle(&local_330);
            uVar18 = 0;
            if ((int)uVar43 <
                *(int *)&(((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)
                          (local_45c._20_8_ + 0x10))->AllocatorInstance).Data) {
              uVar18 = ~uVar43 >> 0x1f;
            }
            if (uVar18 == 0) {
              in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffb48 = (char *)pTVar40;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            uVar8 = local_45c._4_8_;
            in_stack_fffffffffffffb48 =
                 (char *)((ulonglong)in_stack_fffffffffffffb48 & 0xffffffffffffff00);
            FRichCurve::AddKey((FRichCurve *)(pFVar4 + (longlong)(int)uVar21 * 0x80),fVar47,
                               (float)local_178._0_4_,SUB81(in_R9,0),
                               (FKeyHandle)(uint)in_stack_fffffffffffffb48);
            local_45c._4_8_ = uVar8 + 4;
            pTVar36 = (TTransform<double> *)(ulonglong)(uVar43 + 1);
            pTVar40 = (TTransform<double> *)((longlong)(pTVar40->Rotation).XY.m128d_f64 + 1);
            pTVar31 = (TTransform<double> *)&pTVar31[1].Translation.ZW;
          } while ((int)(uVar43 + 1) < (int)local_46c);
          goto LAB_14dae19c6;
        }
      }
LAB_14dae19d0:
      auStack_2e0._16_4_ = auStack_2e0._16_4_ & ~auStack_2e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2e0);
      this = (UChaosCache *)local_45c._36_8_;
    }
    fVar47 = this->MinTime;
    if ((float)local_178._0_4_ <= this->MinTime) {
      fVar47 = (float)local_178._0_4_;
    }
    bVar42 = (bool)(bVar42 | bVar17 | 0 < (int)local_178._16_4_);
    local_45c._4_8_ = SEXT48((int)local_178._16_4_);
    local_468 = 0;
    this->MinTime = fVar47;
    fVar47 = (float)local_178._0_4_;
    if ((float)local_178._0_4_ <= this->MaxTime) {
      fVar47 = this->MaxTime;
    }
    this->MaxTime = fVar47;
    if (0 < (int)local_178._16_4_) {
      pFVar39 = (FParticleTransformTrack *)&this->TrackToParticle;
      lVar38 = 0;
      pTVar44 = &this->ParticleTracks;
      local_45c._20_8_ = pTVar44;
      local_45c._28_8_ = pFVar39;
      do {
        uVar21 = 0;
        if ((int)local_468 < (int)local_178._16_4_) {
          uVar21 = ~local_468 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        uVar8 = local_178._8_8_;
        pFVar4 = (pFVar39->RawTransformTrack).PosKeys.AllocatorInstance.Data;
        local_460 = *(int *)(local_178._8_8_ + lVar38);
        for (pFVar32 = pFVar4;
            pFVar32 != pFVar4 + (longlong)(pFVar39->RawTransformTrack).PosKeys.ArrayNum * 4;
            pFVar32 = pFVar32 + 4) {
          if (*(int *)pFVar32 == local_460) {
            uVar21 = (uint)((longlong)pFVar32 - (longlong)pFVar4 >> 2);
            if (uVar21 != 0xffffffff) goto LAB_14dae1f71;
            break;
          }
        }
        if (((pFVar4 <= (FScriptContainerElement *)(local_464 + 4)) &&
            ((FScriptContainerElement *)(local_464 + 4) <
             pFVar4 + (longlong)(pFVar39->RawTransformTrack).PosKeys.ArrayMax * 4)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        iVar20 = (pFVar39->RawTransformTrack).PosKeys.ArrayNum;
        piVar2 = &(pFVar39->RawTransformTrack).PosKeys.ArrayMax;
        if (iVar20 == *piVar2) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar39,piVar2);
        }
        (pFVar39->RawTransformTrack).PosKeys.ArrayNum = iVar20 + 1;
        *(int *)((pFVar39->RawTransformTrack).PosKeys.AllocatorInstance.Data + (longlong)iVar20 * 4)
             = local_460;
        uVar21 = pTVar44->ArrayNum;
        if (uVar21 == pTVar44->ArrayMax) {
          uVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x898,&pTVar44->AllocatorInstance,&pTVar44->ArrayMax);
        }
        pTVar44->ArrayNum = uVar21 + 1;
        DefaultConstructItems<FPerParticleCacheData,int>
                  ((pTVar44->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x98,1);
LAB_14dae1f71:
        uVar43 = 0;
        if ((int)uVar21 < pTVar44->ArrayNum) {
          uVar43 = ~uVar21 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        uVar37 = (ulonglong)(byte)*(FScriptContainerElement *)(uVar8 + lVar38 + 0x70);
        pFVar41 = (FParticleTransformTrack *)
                  ((pTVar44->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x98);
        in_stack_fffffffffffffb48 = (char *)(uVar8 + lVar38 + 0x10);
        bVar17 = `UChaosCache::FlushPendingFrames_MainPass<1>'::__l2::<lambda_1>::operator()
                           (local_470,pFVar41,(float)local_178._0_4_,
                            (bool)*(FScriptContainerElement *)(uVar8 + lVar38 + 0x70),
                            (TTransform<double> *)in_stack_fffffffffffffb48);
        if (bVar17) {
          iVar20 = *(int *)(uVar8 + lVar38 + 0x80);
          pFVar33 = *(FName **)(uVar8 + lVar38 + 0x78);
          pFVar22 = (FName *)((longlong)pFVar33 + (longlong)iVar20 * 0xc);
          while( true ) {
            if (*(int *)(uVar8 + lVar38 + 0x80) != iVar20) {
              local_473 = 0;
              `TCheckedPointerIterator<TTuple<FName,float>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_473);
            }
            pFVar39 = (FParticleTransformTrack *)local_45c._28_8_;
            pTVar44 = (TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)local_45c._20_8_;
            if (pFVar33 == pFVar22) break;
            FVar3 = *pFVar33;
            local_3e0 = pFVar33[1].ComparisonIndex.Value;
            local_3e8.ComparisonIndex = FVar3.ComparisonIndex.Value;
            FVar30.Value = local_3e8.ComparisonIndex.Value;
            local_3e8 = FVar3;
            uVar21 = ::GetTypeHash(FVar30);
            this_03 = TMapBase<FName,FRichCurve,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,FRichCurve,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve,0>_>
                                  *)(pFVar41 + 1),FVar3.Number + uVar21,&local_3e8);
            FKeyHandle::FKeyHandle(local_31c);
            in_stack_fffffffffffffb48 =
                 (char *)((ulonglong)in_stack_fffffffffffffb48 & 0xffffffffffffff00);
            FRichCurve::AddKey(this_03,fVar47,(float)local_178._0_4_,SUB81(uVar37,0),
                               (FKeyHandle)(uint)in_stack_fffffffffffffb48);
            pFVar33 = (FName *)&pFVar33[1].Number;
          }
        }
        lVar38 = lVar38 + 0x90;
        local_468 = local_468 + 1;
        local_45c._4_8_ = local_45c._4_8_ + -1;
      } while (local_45c._4_8_ != 0);
      local_45c._4_8_ = 0;
      this = (UChaosCache *)local_45c._36_8_;
    }
    local_45c._52_4_ = 0;
    iStack_410 = 0;
    local_45c._56_4_ = 1;
    uVar21 = (uint)local_128;
    uStack_414 = 0;
    if (uVar21 != 0) {
      puVar28 = (uint *)(local_178 + 0x38);
      if (local_130 != (uint *)0x0) {
        puVar28 = local_130;
      }
      uVar43 = *puVar28;
      local_45c._52_4_ = 0;
      iStack_410 = 0;
      while (uVar43 == 0) {
        lVar38 = (longlong)(int)local_45c._52_4_;
        iStack_410 = iStack_410 + 0x20;
        local_45c._52_4_ = local_45c._52_4_ + 1;
        uStack_414 = uVar21;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_45c._52_4_)
        goto LAB_14dae2153;
        uVar43 = puVar28[lVar38 + 1];
      }
      local_45c._56_4_ = -uVar43 & uVar43;
      uVar37 = (ulonglong)(uint)local_45c._56_4_ * 2 + 1;
      lVar38 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      local_324 = (int)lVar38;
      uStack_414 = local_324 + -1 + iStack_410;
      if ((int)uVar21 < (int)uStack_414) {
        uStack_414 = uVar21;
      }
    }
LAB_14dae2153:
    local_45c._44_8_ = local_178 + 0x28;
    uStack_420 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x38);
    uVar43 = uVar21 & 0xffffffe0;
    local_408 = local_178._48_4_ - local_11c;
    bVar26 = (byte)local_128;
    uStack_418 = 0xffffffff;
    uStack_40c = local_1a4;
    auStack_2b0._0_8_ = local_45c._52_8_;
    iVar20 = (int)uVar21 >> 5;
    uStack_290 = CONCAT44(uStack_404,local_408);
    auStack_2b0._16_8_ = _uStack_418;
    auStack_2b0._24_8_ = _iStack_410;
    uVar18 = uVar21;
    local_2b8 = (longlong *)local_45c._44_8_;
    auStack_2b0._8_8_ = uStack_420;
    if ((int)uVar21 < 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      uVar18 = (uint)local_128;
    }
    if (uVar21 != uVar18) {
      puVar28 = (uint *)(local_178 + 0x38);
      if (local_130 != (uint *)0x0) {
        puVar28 = local_130;
      }
      uVar21 = -1 << (bVar26 & 0x1f) & puVar28[iVar20];
      while (uVar21 == 0) {
        lVar38 = (longlong)iVar20;
        uVar43 = uVar43 + 0x20;
        iVar20 = iVar20 + 1;
        uVar21 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14dae2277;
        uVar21 = puVar28[lVar38 + 1];
      }
      uVar37 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar38 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      local_328 = (int)lVar38;
      uVar21 = (uVar43 - 1) + local_328;
      if ((int)uVar18 < (int)uVar21) {
        uVar21 = uVar18;
      }
    }
LAB_14dae2277:
    pFVar39 = (FParticleTransformTrack *)0x0;
    while( true ) {
      plVar27 = local_2b8;
      if ((int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34) != (int)uStack_290) {
        local_472 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_472);
      }
      if (((auStack_2b0._20_4_ == uVar21) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)auStack_2b0._8_8_ ==
           (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x38))) &&
         (plVar27 == (longlong *)(local_178 + 0x28))) break;
      lVar38 = *plVar27;
      lVar45 = *(longlong *)(lVar38 + (longlong)(int)auStack_2b0._20_4_ * 0x48);
      pFVar22 = (FName *)(lVar38 + (longlong)(int)auStack_2b0._20_4_ * 0x48);
      uVar43 = ::GetTypeHash((FNameEntryId)(uint)lVar45);
      pFVar41 = pFVar39;
      if (*(int *)&(this->EventTracks).field_0x8 != *(int *)&(this->EventTracks).field_0x34) {
        puVar5 = *(undefined1 **)&(this->EventTracks).field_0x40;
        puVar29 = &(this->EventTracks).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar29 = puVar5;
        }
        iVar20 = *(int *)(puVar29 +
                         (ulonglong)
                         (*(int *)&(this->EventTracks).field_0x48 - 1U &
                         (int)((ulonglong)lVar45 >> 0x20) + uVar43) * 4);
        if (iVar20 != -1) {
          lVar38 = *(longlong *)&this->EventTracks;
          do {
            pFVar41 = (FParticleTransformTrack *)(lVar38 + (longlong)iVar20 * 0x48);
            if (*(longlong *)(lVar38 + (longlong)iVar20 * 0x48) == lVar45) break;
            iVar20 = (pFVar41->KeyTimestamps).ArrayNum;
            pFVar41 = pFVar39;
          } while (iVar20 != -1);
        }
      }
      pFVar25 = (FParticleTransformTrack *)&(pFVar41->RawTransformTrack).PosKeys.ArrayNum;
      if (pFVar41 == (FParticleTransformTrack *)0x0) {
        pFVar25 = pFVar39;
      }
      if (pFVar25 == (FParticleTransformTrack *)0x0) {
        local_238.Name = *pFVar22;
        local_238.Struct.field0_0x0 = *(TObjectPtr<UScriptStruct>_u_0 *)(pFVar22 + 2);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_238.Struct.field0_0x0 != (TObjectPtr<UScriptStruct>_u_0)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_238.Struct.field0_0x0);
        }
        local_238.TimeStamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.TimeStamps.ArrayNum = 0;
        local_238.TimeStamps.ArrayMax = 0;
        local_238.EventData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.EventData.ArrayNum = 0;
        local_238.EventData.ArrayMax = 0;
        pFVar25 = (FParticleTransformTrack *)
                  TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                  ::Emplace<FName_const_&,FCacheEventTrack>
                            ((TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                              *)&this->EventTracks,pFVar22,&local_238);
        FCacheEventTrack::~FCacheEventTrack(&local_238);
      }
      FCacheEventTrack::Merge((FCacheEventTrack *)pFVar25,(FCacheEventTrack *)(pFVar22 + 1));
      auStack_2b0._16_4_ = auStack_2b0._16_4_ & ~auStack_2b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2b0);
    }
    local_45c._52_4_ = 0;
    local_45c._56_4_ = 1;
    uVar21 = local_90.NumBits;
    in_R9 = (wchar_t *)pFVar39;
    uStack_414 = local_45c._52_4_;
    if (uVar21 != 0) {
      FVar34 = (ForElementType<unsigned_int>)&local_90;
      if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_90.AllocatorInstance.SecondaryData;
      }
      uVar43 = *(uint *)FVar34;
      pFVar41 = pFVar39;
      local_45c._52_4_ = 0;
      while (uVar43 == 0) {
        iVar20 = (int)pFVar41;
        in_R9 = (wchar_t *)(ulonglong)((int)in_R9 + 0x20);
        local_45c._52_4_ = iVar20 + 1;
        pFVar41 = (FParticleTransformTrack *)(ulonglong)(uint)local_45c._52_4_;
        uStack_414 = uVar21;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_45c._52_4_)
        goto LAB_14dae2473;
        uVar43 = *(uint *)((longlong)FVar34 + ((longlong)iVar20 + 1) * 4);
      }
      local_45c._56_4_ = -uVar43 & uVar43;
      uVar37 = (ulonglong)(uint)local_45c._56_4_ * 2 + 1;
      lVar38 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      local_314 = (int)lVar38;
      uStack_414 = (int)in_R9 + -1 + local_314;
      if ((int)uVar21 < (int)uStack_414) {
        uStack_414 = uVar21;
      }
    }
LAB_14dae2473:
    local_45c._44_8_ = &local_a0;
    uStack_420 = &local_90;
    uVar43 = uVar21 & 0xffffffe0;
    local_408 = local_98 - local_6c;
    bVar26 = (byte)local_90.NumBits;
    uStack_418 = 0xffffffff;
    uStack_40c = local_184;
    iStack_410 = (int)in_R9;
    auStack_280._0_8_ = local_45c._52_8_;
    iVar20 = (int)uVar21 >> 5;
    uStack_260 = CONCAT44(uStack_404,local_408);
    auStack_280._16_8_ = _uStack_418;
    auStack_280._24_8_ = _iStack_410;
    uVar18 = uVar21;
    local_288 = (longlong *)local_45c._44_8_;
    auStack_280._8_8_ = uStack_420;
    if ((int)uVar21 < 0) {
      in_R9 = L"";
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      uVar18 = local_90.NumBits;
    }
    if (uVar21 != uVar18) {
      FVar34 = (ForElementType<unsigned_int>)&local_90;
      if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_90.AllocatorInstance.SecondaryData;
      }
      uVar21 = -1 << (bVar26 & 0x1f) & *(uint *)((longlong)FVar34 + (longlong)iVar20 * 4);
      while (uVar21 == 0) {
        lVar38 = (longlong)iVar20;
        uVar43 = uVar43 + 0x20;
        iVar20 = iVar20 + 1;
        uVar21 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14dae25a4;
        uVar21 = *(uint *)((longlong)FVar34 + (lVar38 + 1) * 4);
      }
      uVar37 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar38 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      local_32c = (int)lVar38;
      uVar21 = (uVar43 - 1) + local_32c;
      if ((int)uVar18 < (int)uVar21) {
        uVar21 = uVar18;
      }
    }
LAB_14dae25a4:
    while( true ) {
      plVar27 = local_288;
      if ((int)local_288[1] - *(int *)((longlong)local_288 + 0x34) != (int)uStack_260) {
        local_471 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_471);
      }
      uVar8 = local_45c._12_8_;
      if (((auStack_280._20_4_ == uVar21) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)auStack_280._8_8_ == &local_90)) &&
         (plVar27 == &local_a0)) break;
      this_02 = &this->NamedTransformTracks;
      pFVar22 = (FName *)((longlong)(int)auStack_280._20_4_ * 0x80 + *plVar27);
      FVar3 = *pFVar22;
      uVar43 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      pFVar41 = pFVar39;
      if (*(int *)&(this->NamedTransformTracks).field_0x8 !=
          *(int *)&(this->NamedTransformTracks).field_0x34) {
        puVar5 = *(undefined1 **)&(this->NamedTransformTracks).field_0x40;
        puVar29 = &(this->NamedTransformTracks).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar29 = puVar5;
        }
        iVar20 = *(int *)(puVar29 +
                         (ulonglong)
                         (*(int *)&(this->NamedTransformTracks).field_0x48 - 1U &
                         FVar3.Number + uVar43) * 4);
        if (iVar20 != -1) {
          do {
            pFVar41 = (FParticleTransformTrack *)
                      ((longlong)iVar20 * 0x58 + *(longlong *)&this_02->field_0x0);
            if ((FName)(pFVar41->RawTransformTrack).PosKeys.AllocatorInstance.Data == FVar3) break;
            iVar20 = pFVar41[1].RawTransformTrack.PosKeys.ArrayNum;
            pFVar41 = pFVar39;
          } while (iVar20 != -1);
        }
      }
      pFVar25 = (FParticleTransformTrack *)&(pFVar41->RawTransformTrack).PosKeys.ArrayNum;
      if (pFVar41 == (FParticleTransformTrack *)0x0) {
        pFVar25 = pFVar39;
      }
      if (pFVar25 == (FParticleTransformTrack *)0x0) {
        local_240 = &local_398;
        local_363 = 0;
        local_361 = 0;
        local_398 = (void *)0x0;
        local_390 = 0;
        local_388 = (void *)0x0;
        local_380 = 0;
        local_378 = (void *)0x0;
        local_370 = 0;
        local_368 = 0;
        local_364 = 0;
        local_360 = (void *)0x0;
        local_358 = 0;
        local_248 = pFVar22;
        TSet<TTuple<FName,FParticleTransformTrack>,TDefaultMapHashableKeyFuncs<FName,FParticleTransformTrack,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FParticleTransformTrack_&&>_>
                  ((TSet<TTuple<FName,FParticleTransformTrack>,TDefaultMapHashableKeyFuncs<FName,FParticleTransformTrack,0>,FDefaultSetAllocator>
                    *)this_02,
                   (TPairInitializer<FName_const_&,FParticleTransformTrack_&&> *)(local_3f4 + 4),
                   (bool *)&local_248);
        pFVar25 = (FParticleTransformTrack *)
                  (*(longlong *)&this_02->field_0x0 + (longlong)(int)local_3f4._4_4_ * 0x58 + 8);
        if (local_360 != (void *)0x0) {
          FMemory::Free(local_360);
        }
        if (local_378 != (void *)0x0) {
          FMemory::Free(local_378);
        }
        if (local_388 != (void *)0x0) {
          FMemory::Free(local_388);
        }
        if (local_398 != (void *)0x0) {
          FMemory::Free(local_398);
        }
      }
      in_stack_fffffffffffffb48 = (char *)(pFVar22 + 2);
      in_R9 = (wchar_t *)0x0;
      `UChaosCache::FlushPendingFrames_MainPass<1>'::__l2::<lambda_1>::operator()
                (local_470,pFVar25,(float)local_178._0_4_,false,
                 (TTransform<double> *)in_stack_fffffffffffffb48);
      auStack_280._16_4_ = auStack_280._16_4_ & ~auStack_280._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_280);
    }
    this->NumRecordedFrames = this->NumRecordedFrames + 1;
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar13) {
      FThreadStats::AddMessage((FName)uVar8,CycleScopeEnd);
    }
    bVar14 = TQueue<FPendingFrameWrite,1>::Dequeue(local_300,(FPendingFrameWrite *)local_178);
  } while( true );
}

// FlushPendingFrames_MainPass<0> @ 14dae2810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UChaosCache::FlushPendingFrames_MainPass<0>
          (UChaosCache *this,TQueue<FPendingFrameWrite,0> *param_1,bool param_2)

{
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_01;
  TMap<FName,FParticleTransformTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FParticleTransformTrack,0>_>
  *this_02;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  FName *pFVar22;
  TStatIdData *pTVar23;
  uint *puVar24;
  FRichCurve *this_03;
  FParticleTransformTrack *pFVar25;
  byte bVar26;
  longlong *plVar27;
  uint *puVar28;
  undefined1 *puVar29;
  FNameEntryId FVar30;
  TTransform<double> *pTVar31;
  FScriptContainerElement *pFVar32;
  FName *pFVar33;
  ForElementType<unsigned_int> FVar34;
  wchar_t *in_R9;
  char *pcVar35;
  TTransform<double> *pTVar36;
  ulonglong uVar37;
  longlong lVar38;
  FParticleTransformTrack *pFVar39;
  TTransform<double> *pTVar40;
  FParticleTransformTrack *pFVar41;
  bool bVar42;
  uint uVar43;
  TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *pTVar44;
  longlong lVar45;
  ulong64 uVar46;
  float fVar47;
  undefined1 auStackY_4d8 [32];
  char *in_stack_fffffffffffffb48;
  undefined1 local_476;
  char local_475;
  undefined1 local_474;
  undefined1 local_473;
  undefined1 local_472;
  undefined1 local_471;
  undefined1 local_470 [4];
  uint local_46c;
  uint local_468;
  undefined1 local_464 [4];
  int local_460;
  undefined1 local_45c [60];
  undefined8 uStack_420;
  undefined4 uStack_418;
  uint uStack_414;
  int iStack_410;
  undefined4 uStack_40c;
  int local_408;
  undefined4 uStack_404;
  FColor_u_0 local_400;
  TKeyInitializer<FName_const_&> local_3fc;
  undefined1 local_3f4 [12];
  FName local_3e8;
  uint local_3e0;
  uint local_3d8;
  uint uStack_3d4;
  FName local_3d0;
  FName local_3c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b8;
  void *local_398;
  undefined8 local_390;
  void *local_388;
  undefined8 local_380;
  void *local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined1 local_364;
  undefined2 local_363;
  undefined1 local_361;
  void *local_360;
  undefined8 local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_350;
  FKeyHandle local_330;
  int local_32c;
  int local_328;
  int local_324;
  FKeyHandle local_31c [2];
  int local_314;
  FKeyHandle local_310 [2];
  TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *local_308;
  TQueue<FPendingFrameWrite,0> *local_300;
  FKeyHandle local_2f8 [4];
  longlong *local_2e8;
  undefined1 auStack_2e0 [32];
  undefined8 uStack_2c0;
  longlong *local_2b8;
  undefined1 auStack_2b0 [32];
  undefined8 uStack_290;
  longlong *local_288;
  undefined1 auStack_280 [32];
  undefined8 uStack_260;
  undefined4 *local_258;
  undefined1 *local_250;
  FName *local_248;
  void **local_240;
  FCacheEventTrack local_238;
  FName local_1f8;
  longlong *local_1f0;
  undefined8 uStack_1e8;
  float local_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  double local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1a4;
  undefined4 local_184;
  undefined1 local_178 [72];
  uint *local_130;
  undefined8 local_128;
  int local_11c;
  ForAnyElementType local_100;
  uint local_f8;
  longlong local_f0;
  int local_e8;
  TBitArray<FDefaultBitArrayAllocator> local_e0;
  int local_bc;
  longlong local_a0;
  int local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  int local_6c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  bVar42 = false;
  local_475 = param_2;
  local_45c._36_8_ = this;
  local_300 = param_1;
  FPendingFrameWrite::FPendingFrameWrite((FPendingFrameWrite *)local_178);
  bVar14 = TQueue<FPendingFrameWrite,0>::Dequeue(param_1,(FPendingFrameWrite *)local_178);
  do {
    if (bVar14 == false) {
      FPendingFrameWrite::~FPendingFrameWrite((FPendingFrameWrite *)local_178);
      return bVar42;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<0>(TQueue<FPendingFrameWrite,0>&___ptr64,bool)___ptr64'
         ::__l4::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<0>(TQueue<FPendingFrameWrite,0>&___ptr64,bool)___ptr64'
                             ::__l4::_thread_safe_static_guard_0__),
       `private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<0>(TQueue<FPendingFrameWrite,0>&___ptr64,bool)___ptr64'
       ::__l4::_thread_safe_static_guard_0__ == -1)) {
      _StatPtr_QSTAT_CacheFlushSingleFramePass2 = (TStatIdData *)0x0;
      FThreadSafeStaticStatInner<`UChaosCache::FlushPendingFrames_MainPass<0>'::__l4::FStat_QSTAT_CacheFlushSingleFramePass2,1>
      ::GetStatId(&`private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<0>(TQueue<FPendingFrameWrite,0>&___ptr64,bool)___ptr64'
                   ::__l4::StatPtr_QSTAT_CacheFlushSingleFramePass2);
      _Init_thread_footer(&`private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<0>(TQueue<FPendingFrameWrite,0>&___ptr64,bool)___ptr64'
                           ::__l4::_thread_safe_static_guard_0__);
    }
    pTVar23 = _StatPtr_QSTAT_CacheFlushSingleFramePass2;
    if (_StatPtr_QSTAT_CacheFlushSingleFramePass2 == (TStatIdData *)0x0) {
      pFVar22 = ::FName::FName(&local_1f8,"QSTAT_CacheFlushSingleFramePass2");
      pcVar35 = "STATGROUP_Quick";
      in_stack_fffffffffffffb48 = "STATCAT_Advanced";
      pTVar23 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`private:_bool___cdecl_UChaosCache::FlushPendingFrames_MainPass<0>(TQueue<FPendingFrameWrite,0>&___ptr64,bool)___ptr64'
                            ::__l4::StatPtr_QSTAT_CacheFlushSingleFramePass2,*pFVar22,
                           L"QSTAT_CacheFlushSingleFramePass2","STATGROUP_Quick","STATCAT_Advanced",
                           L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      in_R9 = (wchar_t *)pcVar35;
    }
    FVar3 = *(FName *)&pTVar23->Name;
    bVar14 = false;
    bVar7 = false;
    local_3c8.ComparisonIndex.Value = 0;
    local_3c8.Number = 0;
    bVar13 = false;
    bVar17 = false;
    FVar30 = FVar3.ComparisonIndex.Value;
    uVar21 = FVar3.Number;
    if ((FVar30.Value == 0) && (uVar21 == 0)) {
LAB_14dae2a14:
      bVar7 = bVar17;
      bVar14 = bVar13;
      bVar13 = false;
      local_45c._12_4_ = local_3c8.ComparisonIndex.Value;
      local_45c._16_4_ = local_3c8.Number;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_400.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_400._s_0,(pTVar23->StatDescriptionAnsi).Ptr);
        bVar14 = false;
        bVar7 = true;
        bVar13 = false;
        bVar17 = true;
        if (-1 < CpuChannel->Enabled) {
          in_R9 = (wchar_t *)0xe1;
          local_3d0.ComparisonIndex.Value = FVar30.Value;
          local_3d0.Number = uVar21;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_3d0,(pTVar23->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                     ,0xe1);
          bVar14 = true;
          bVar7 = true;
          bVar13 = true;
          bVar17 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14dae2a14;
      local_45c._12_8_ = FVar3;
      local_3d8 = FVar30.Value;
      uStack_3d4 = uVar21;
      local_3c8 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar13 = true;
    }
    uVar21 = local_178._16_4_;
    local_46c = local_f8;
    if (0 < (int)local_178._16_4_) {
      local_46c = local_178._16_4_;
    }
    uVar46 = (ulong64)local_46c;
    local_468 = local_178._16_4_;
    bVar17 = 0 < (int)local_46c;
    local_350._padding_._4_4_ = 1;
    local_350.UnvisitedBitMask = 0xffffffff;
    local_350._padding_._0_4_ = 0;
    local_350.Array = &local_e0;
    local_350.CurrentBitIndex = 0;
    local_350.BaseBitIndex = 0;
    if (local_e0.NumBits != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_350);
    }
    iVar20 = local_e0.NumBits;
    local_45c._52_8_ = CONCAT44(local_350._padding_._4_4_,(undefined4)local_350._padding_);
    local_45c._44_8_ = &local_f0;
    uStack_414 = local_350.CurrentBitIndex;
    uStack_418 = local_350.UnvisitedBitMask;
    uStack_40c = local_350._28_4_;
    iStack_410 = local_350.BaseBitIndex;
    local_3b8.Array = &local_e0;
    bVar26 = (byte)local_e0.NumBits & 0x1f;
    local_408 = local_e8 - local_bc;
    local_3b8._padding_._0_4_ = local_e0.NumBits >> 5;
    local_3b8._padding_._4_4_ = 1 << bVar26;
    local_3b8.UnvisitedBitMask = -1 << bVar26;
    uStack_420 = local_350.Array;
    local_3b8.BaseBitIndex = local_e0.NumBits & 0xffffffe0;
    local_3b8.CurrentBitIndex = local_e0.NumBits;
    uStack_2c0 = CONCAT44(uStack_404,local_408);
    auStack_2e0._8_8_ = local_350.Array;
    local_2e8 = (longlong *)local_45c._44_8_;
    auStack_2e0._0_8_ = local_45c._52_8_;
    auStack_2e0._16_8_ = _uStack_418;
    auStack_2e0._24_8_ = _iStack_410;
    if (local_e0.NumBits < 0) {
      in_R9 = L"";
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
    }
    if (iVar20 != local_e0.NumBits) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b8);
    }
    local_45c._56_4_ = local_3b8._padding_._4_4_;
    local_45c._52_4_ = (int)local_3b8._padding_;
    local_45c._44_8_ = &local_f0;
    uStack_414 = local_3b8.CurrentBitIndex;
    uStack_418 = local_3b8.UnvisitedBitMask;
    uStack_40c = local_3b8._28_4_;
    iStack_410 = local_3b8.BaseBitIndex;
    local_408 = local_e8 - local_bc;
    uStack_420 = local_3b8.Array;
    pTVar12 = uStack_420;
    uStack_420._0_4_ = SUB84(local_3b8.Array,0);
    uStack_420._4_4_ = (undefined4)((ulonglong)local_3b8.Array >> 0x20);
    uStack_1c8 = CONCAT44(uStack_404,local_408);
    local_1e0 = (float)uStack_420;
    uStack_1dc = uStack_420._4_4_;
    uStack_1d8 = local_3b8.UnvisitedBitMask;
    uStack_1d4 = local_3b8.CurrentBitIndex;
    fVar47 = (float)uStack_420;
    uStack_420 = pTVar12;
    local_1f0 = (longlong *)local_45c._44_8_;
    uStack_1e8 = local_45c._52_8_;
    local_1d0 = (double)_iStack_410;
    while( true ) {
      plVar27 = local_2e8;
      if ((int)local_2e8[1] - *(int *)((longlong)local_2e8 + 0x34) != (int)uStack_2c0) {
        local_476 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_476);
      }
      uVar43 = (uint)uVar46;
      if (((auStack_2e0._20_4_ == uStack_1d4) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)auStack_2e0._8_8_ ==
           (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uStack_1dc,local_1e0))) &&
         (plVar27 == local_1f0)) break;
      this_00 = &this->ChannelsTracks;
      pTVar44 = (TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)
                ((longlong)(int)auStack_2e0._20_4_ * 0x20 + *plVar27);
      pFVar4 = (pTVar44->AllocatorInstance).Data;
      local_45c._20_8_ = pTVar44;
      uVar18 = ::GetTypeHash((FNameEntryId)(uint)pFVar4);
      if (*(int *)&(this->ChannelsTracks).field_0x8 != *(int *)&(this->ChannelsTracks).field_0x34) {
        puVar5 = *(undefined1 **)&(this->ChannelsTracks).field_0x40;
        puVar29 = &(this->ChannelsTracks).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar29 = puVar5;
        }
        iVar20 = *(int *)(puVar29 +
                         (ulonglong)
                         (*(int *)&(this->ChannelsTracks).field_0x48 - 1U &
                         (int)((ulonglong)pFVar4 >> 0x20) + uVar18) * 4);
        if (iVar20 != -1) {
          do {
            plVar27 = (longlong *)((longlong)iVar20 * 0x20 + *(longlong *)&this_00->field_0x0);
            if ((FScriptContainerElement *)*plVar27 == pFVar4) {
              pFVar39 = (FParticleTransformTrack *)(plVar27 + 1);
              if (plVar27 == (longlong *)0x0) {
                pFVar39 = (FParticleTransformTrack *)0x0;
              }
              local_45c._28_8_ = pFVar39;
              if (pFVar39 != (FParticleTransformTrack *)0x0) goto LAB_14dae2da1;
              break;
            }
            iVar20 = (int)plVar27[3];
          } while (iVar20 != -1);
        }
      }
      in_R9 = (wchar_t *)0x0;
      local_308 = pTVar44;
      TSet<TTuple<FName,FRichCurves>,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,FRichCurves>,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>,FDefaultSetAllocator>
                  *)this_00,&local_3fc,(bool *)&local_308);
      pFVar39 = (FParticleTransformTrack *)
                (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_3fc.Key * 0x20 + 8);
      iVar20 = (pFVar39->RawTransformTrack).PosKeys.ArrayNum;
      pTVar31 = (TTransform<double> *)&(pFVar39->RawTransformTrack).PosKeys.ArrayNum;
      local_45c._28_8_ = pFVar39;
      if (iVar20 < (int)uVar43) {
        in_R9 = (wchar_t *)pFVar39;
        iVar19 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x80,8,uVar43 - iVar20,(ForAnyElementType *)pFVar39,(int *)pTVar31,
                            &(pFVar39->RawTransformTrack).PosKeys.ArrayMax);
        DefaultConstructItems<FRichCurve,int>
                  ((pFVar39->RawTransformTrack).PosKeys.AllocatorInstance.Data +
                   (longlong)iVar19 * 0x80,uVar43 - iVar20);
        in_stack_fffffffffffffb48 = (char *)pTVar31;
      }
      else {
        if ((int)uVar43 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar46);
        }
        if ((int)uVar43 < iVar20) {
          uVar18 = iVar20 - uVar43;
          if ((int)(uVar18 | uVar43) < 0) {
            in_stack_fffffffffffffb48 = (char *)(longlong)(int)uVar43;
            in_R9 = 
            L"Array range out of bounds: index %lld and length %lld into an array of size %lld";
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
          }
          if (uVar18 != 0) {
            TArray<FRichCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      ((TArray<FRichCurve,TSizedDefaultAllocator<32>_> *)pFVar39,uVar43,uVar18);
            in_R9 = (wchar_t *)(ulonglong)*(uint *)pTVar31;
            in_stack_fffffffffffffb48 = (char *)&(pFVar39->RawTransformTrack).PosKeys.ArrayMax;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,(ForAnyElementType *)pFVar39,*(uint *)pTVar31,
                       (int *)in_stack_fffffffffffffb48);
          }
        }
      }
LAB_14dae2da1:
      if ((int)uVar43 < *(int *)&pTVar44[1].AllocatorInstance.Data) {
        in_R9 = L"";
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChannelData.Value.Num() <= NumParticles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                            ,0xf3,L"");
        if (bVar15) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
      }
      uVar10 = local_45c._36_8_;
      uVar8 = local_45c._28_8_;
      pTVar31 = (TTransform<double> *)0x0;
      if ((int)uVar21 < 1) {
        if (local_475 == '\0') {
          if ((int)local_46c < 1) {
            uVar46 = (ulong64)local_46c;
            goto LAB_14dae3070;
          }
          pTVar36 = (TTransform<double> *)0x0;
          local_45c._4_8_ = 0;
          this_01 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (local_45c._36_8_ + 0x330);
          do {
            uVar11 = local_45c._36_8_;
            uVar9 = local_45c._4_8_;
            uVar43 = (uint)pTVar31;
            uVar21 = 0;
            if ((int)uVar43 < (int)local_f8) {
              uVar21 = ~uVar43 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (in_stack_fffffffffffffb48 = (char *)pTVar36,
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
            local_45c._0_4_ = *(undefined4 *)(local_100.Data + uVar9);
            if (*(int *)&((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)(uVar11 + 0x330))->field_0x8 !=
                *(int *)&((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)(uVar10 + 0x330))->field_0x34) {
              puVar5 = *(undefined1 **)
                        &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)(uVar10 + 0x330))->field_0x40;
              puVar29 = &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)(uVar10 + 0x330))->field_0x38;
              if (puVar5 != (undefined1 *)0x0) {
                puVar29 = puVar5;
              }
              uVar21 = *(uint *)(puVar29 +
                                (ulonglong)
                                (*(int *)&((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                            *)(uVar10 + 0x330))->field_0x48 - 1U & local_45c._0_4_)
                                * 4);
              if (uVar21 != 0xffffffff) {
                do {
                  puVar28 = (uint *)((longlong)(int)uVar21 * 0x10 + *(longlong *)&this_01->field_0x0
                                    );
                  if (*puVar28 == local_45c._0_4_) {
                    puVar24 = puVar28 + 1;
                    if (puVar28 == (uint *)0x0) {
                      puVar24 = (uint *)0x0;
                    }
                    if (puVar24 != (uint *)0x0) goto LAB_14dae333e;
                    break;
                  }
                  uVar21 = puVar28[2];
                } while (uVar21 != 0xffffffff);
              }
            }
            pFVar4 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->
                     AllocatorInstance).Data;
            if ((pFVar4 <= (FScriptContainerElement *)(local_464 + 8)) &&
               ((FScriptContainerElement *)(local_464 + 8) <
                pFVar4 + (longlong)
                         ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->ArrayMax * 4)
               ) {
              in_stack_fffffffffffffb48 = local_464 + 8;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            iVar20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->ArrayNum;
            piVar2 = &((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->ArrayMax;
            if (iVar20 == *piVar2) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)(uVar11 + 0x58),piVar2);
            }
            pFVar4 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->
                     AllocatorInstance).Data;
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar11 + 0x58))->ArrayNum = iVar20 + 1;
            *(undefined4 *)(pFVar4 + (longlong)iVar20 * 4) = local_45c._0_4_;
            local_258 = (undefined4 *)(local_464 + 8);
            local_250 = (undefined1 *)((longlong)&local_3fc.Key + 4);
            local_3fc.Key._4_4_ = iVar20;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_&&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)this_01,(TPairInitializer<int_const_&,int_&&> *)local_3f4,
                       (bool *)&local_258);
            puVar24 = (uint *)(*(longlong *)&this_01->field_0x0 +
                              (longlong)(int)local_3f4._0_4_ * 0x10 + 4);
LAB_14dae333e:
            in_R9 = (wchar_t *)0x0;
            uVar21 = *puVar24;
            uVar18 = 0;
            if ((int)uVar21 < (((FRawAnimSequenceTrack *)uVar8)->PosKeys).ArrayNum) {
              uVar18 = ~uVar21 >> 0x1f;
            }
            if (uVar18 == 0) {
              in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffb48 = (char *)(longlong)(int)uVar21;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            pFVar4 = (((FRawAnimSequenceTrack *)uVar8)->PosKeys).AllocatorInstance.Data;
            FKeyHandle::FKeyHandle(local_310);
            uVar18 = 0;
            if ((int)uVar43 <
                *(int *)&(((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)
                          (local_45c._20_8_ + 0x10))->AllocatorInstance).Data) {
              uVar18 = ~uVar43 >> 0x1f;
            }
            if (uVar18 == 0) {
              in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffb48 = (char *)pTVar36;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            uVar9 = local_45c._4_8_;
            in_stack_fffffffffffffb48 =
                 (char *)((ulonglong)in_stack_fffffffffffffb48 & 0xffffffffffffff00);
            FRichCurve::AddKey((FRichCurve *)(pFVar4 + (longlong)(longlong)(int)uVar21 * 0x80),
                               fVar47,(float)local_178._0_4_,SUB81(in_R9,0),
                               (FKeyHandle)(uint)in_stack_fffffffffffffb48);
            local_45c._4_8_ = uVar9 + 4;
            pTVar31 = (TTransform<double> *)(ulonglong)(uVar43 + 1);
            pTVar36 = (TTransform<double> *)((longlong)(pTVar36->Rotation).XY.m128d_f64 + 1);
          } while ((int)(uVar43 + 1) < (int)local_46c);
        }
        else {
          lVar45 = *(longlong *)&pTVar44->ArrayNum;
          iVar20 = *(int *)&pTVar44[1].AllocatorInstance.Data;
          lVar38 = lVar45 + (longlong)iVar20 * 4;
          while( true ) {
            if (*(int *)&pTVar44[1].AllocatorInstance.Data != iVar20) {
              local_474 = 0;
              `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_474);
            }
            if (lVar45 == lVar38) break;
            uVar43 = (uint)pTVar31;
            uVar21 = 0;
            if ((int)uVar43 < (pFVar39->RawTransformTrack).PosKeys.ArrayNum) {
              uVar21 = ~uVar43 >> 0x1f;
            }
            if (uVar21 == 0) {
              in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffb48 = (char *)(longlong)(int)uVar43;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            pTVar31 = (TTransform<double> *)(ulonglong)(uVar43 + 1);
            pFVar4 = (pFVar39->RawTransformTrack).PosKeys.AllocatorInstance.Data;
            FKeyHandle::FKeyHandle(local_2f8);
            in_stack_fffffffffffffb48 =
                 (char *)((ulonglong)in_stack_fffffffffffffb48 & 0xffffffffffffff00);
            FRichCurve::AddKey((FRichCurve *)(pFVar4 + (longlong)(int)uVar43 * 0x80),fVar47,
                               (float)local_178._0_4_,SUB81(in_R9,0),
                               (FKeyHandle)(uint)in_stack_fffffffffffffb48);
            lVar45 = lVar45 + 4;
          }
        }
LAB_14dae3066:
        uVar46 = (ulong64)local_46c;
        uVar21 = local_468;
      }
      else {
        uVar21 = local_468;
        if (0 < (int)uVar43) {
          local_45c._4_8_ = 0;
          pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_45c._36_8_ + 0x38);
          pTVar36 = pTVar31;
          pTVar40 = pTVar31;
          do {
            uVar8 = local_45c._36_8_;
            uVar43 = (uint)pTVar36;
            uVar21 = 0;
            if ((int)uVar43 < (int)local_178._16_4_) {
              uVar21 = ~uVar43 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (in_stack_fffffffffffffb48 = (char *)pTVar40,
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
            pFVar4 = (pTVar1->AllocatorInstance).Data;
            in_R9 = (wchar_t *)
                    (longlong)((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38))->ArrayNum
            ;
            local_464 = *(undefined1 (*) [4])(local_178._8_8_ + (longlong)&pTVar31->Rotation);
            for (pFVar32 = pFVar4; pFVar32 != pFVar4 + (longlong)in_R9 * 4; pFVar32 = pFVar32 + 4) {
              if ((undefined1  [4])*(int *)pFVar32 == local_464) {
                uVar21 = (uint)((longlong)pFVar32 - (longlong)pFVar4 >> 2);
                if (uVar21 != 0xffffffff) goto LAB_14dae2f63;
                break;
              }
            }
            if ((pFVar4 <= (FScriptContainerElement *)local_464) &&
               ((FScriptContainerElement *)local_464 <
                pFVar4 + (longlong)
                         ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38))->ArrayMax * 4)
               ) {
              in_stack_fffffffffffffb48 = local_464;
              in_R9 = 
              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
              ;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            iVar20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38))->ArrayNum;
            piVar2 = &((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38))->ArrayMax;
            if (iVar20 == *piVar2) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pTVar1,piVar2);
            }
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar10 + 0x38))->ArrayNum = iVar20 + 1;
            piVar2 = &((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x48))
                      ->ArrayMax;
            *(undefined1 (*) [4])((pTVar1->AllocatorInstance).Data + (longlong)iVar20 * 4) =
                 local_464;
            uVar21 = ((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x48))->
                     ArrayNum;
            if (uVar21 == *piVar2) {
              uVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x898,(ForAnyElementType *)(uVar8 + 0x48),piVar2);
            }
            ((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x48))->ArrayNum
                 = uVar21 + 1;
            DefaultConstructItems<FPerParticleCacheData,int>
                      ((((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)(uVar8 + 0x48)
                        )->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x98,1);
LAB_14dae2f63:
            uVar18 = 0;
            if ((int)uVar21 < (((FRawAnimSequenceTrack *)local_45c._28_8_)->PosKeys).ArrayNum) {
              uVar18 = ~uVar21 >> 0x1f;
            }
            if (uVar18 == 0) {
              in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffb48 = (char *)(longlong)(int)uVar21;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            pFVar4 = (((FRawAnimSequenceTrack *)local_45c._28_8_)->PosKeys).AllocatorInstance.Data;
            FKeyHandle::FKeyHandle(&local_330);
            uVar18 = 0;
            if ((int)uVar43 <
                *(int *)&(((TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)
                          (local_45c._20_8_ + 0x10))->AllocatorInstance).Data) {
              uVar18 = ~uVar43 >> 0x1f;
            }
            if (uVar18 == 0) {
              in_R9 = L"Array index out of bounds: %lld into an array of size %lld";
              in_stack_fffffffffffffb48 = (char *)pTVar40;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                uVar16 = (*pcVar6)();
                return (bool)uVar16;
              }
            }
            uVar8 = local_45c._4_8_;
            in_stack_fffffffffffffb48 =
                 (char *)((ulonglong)in_stack_fffffffffffffb48 & 0xffffffffffffff00);
            FRichCurve::AddKey((FRichCurve *)(pFVar4 + (longlong)(int)uVar21 * 0x80),fVar47,
                               (float)local_178._0_4_,SUB81(in_R9,0),
                               (FKeyHandle)(uint)in_stack_fffffffffffffb48);
            local_45c._4_8_ = uVar8 + 4;
            pTVar36 = (TTransform<double> *)(ulonglong)(uVar43 + 1);
            pTVar40 = (TTransform<double> *)((longlong)(pTVar40->Rotation).XY.m128d_f64 + 1);
            pTVar31 = (TTransform<double> *)&pTVar31[1].Translation.ZW;
          } while ((int)(uVar43 + 1) < (int)local_46c);
          goto LAB_14dae3066;
        }
      }
LAB_14dae3070:
      auStack_2e0._16_4_ = auStack_2e0._16_4_ & ~auStack_2e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2e0);
      this = (UChaosCache *)local_45c._36_8_;
    }
    fVar47 = this->MinTime;
    if ((float)local_178._0_4_ <= this->MinTime) {
      fVar47 = (float)local_178._0_4_;
    }
    bVar42 = (bool)(bVar42 | bVar17 | 0 < (int)local_178._16_4_);
    local_45c._4_8_ = SEXT48((int)local_178._16_4_);
    local_468 = 0;
    this->MinTime = fVar47;
    fVar47 = (float)local_178._0_4_;
    if ((float)local_178._0_4_ <= this->MaxTime) {
      fVar47 = this->MaxTime;
    }
    this->MaxTime = fVar47;
    if (0 < (int)local_178._16_4_) {
      pFVar39 = (FParticleTransformTrack *)&this->TrackToParticle;
      lVar38 = 0;
      pTVar44 = &this->ParticleTracks;
      local_45c._20_8_ = pTVar44;
      local_45c._28_8_ = pFVar39;
      do {
        uVar21 = 0;
        if ((int)local_468 < (int)local_178._16_4_) {
          uVar21 = ~local_468 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        uVar8 = local_178._8_8_;
        pFVar4 = (pFVar39->RawTransformTrack).PosKeys.AllocatorInstance.Data;
        local_460 = *(int *)(local_178._8_8_ + lVar38);
        for (pFVar32 = pFVar4;
            pFVar32 != pFVar4 + (longlong)(pFVar39->RawTransformTrack).PosKeys.ArrayNum * 4;
            pFVar32 = pFVar32 + 4) {
          if (*(int *)pFVar32 == local_460) {
            uVar21 = (uint)((longlong)pFVar32 - (longlong)pFVar4 >> 2);
            if (uVar21 != 0xffffffff) goto LAB_14dae3611;
            break;
          }
        }
        if (((pFVar4 <= (FScriptContainerElement *)(local_464 + 4)) &&
            ((FScriptContainerElement *)(local_464 + 4) <
             pFVar4 + (longlong)(pFVar39->RawTransformTrack).PosKeys.ArrayMax * 4)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        iVar20 = (pFVar39->RawTransformTrack).PosKeys.ArrayNum;
        piVar2 = &(pFVar39->RawTransformTrack).PosKeys.ArrayMax;
        if (iVar20 == *piVar2) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar39,piVar2);
        }
        (pFVar39->RawTransformTrack).PosKeys.ArrayNum = iVar20 + 1;
        *(int *)((pFVar39->RawTransformTrack).PosKeys.AllocatorInstance.Data + (longlong)iVar20 * 4)
             = local_460;
        uVar21 = pTVar44->ArrayNum;
        if (uVar21 == pTVar44->ArrayMax) {
          uVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x898,&pTVar44->AllocatorInstance,&pTVar44->ArrayMax);
        }
        pTVar44->ArrayNum = uVar21 + 1;
        DefaultConstructItems<FPerParticleCacheData,int>
                  ((pTVar44->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x98,1);
LAB_14dae3611:
        uVar43 = 0;
        if ((int)uVar21 < pTVar44->ArrayNum) {
          uVar43 = ~uVar21 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        uVar37 = (ulonglong)(byte)*(FScriptContainerElement *)(uVar8 + lVar38 + 0x70);
        pFVar41 = (FParticleTransformTrack *)
                  ((pTVar44->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x98);
        in_stack_fffffffffffffb48 = (char *)(uVar8 + lVar38 + 0x10);
        bVar17 = `UChaosCache::FlushPendingFrames_MainPass<0>'::__l2::<lambda_1>::operator()
                           (local_470,pFVar41,(float)local_178._0_4_,
                            (bool)*(FScriptContainerElement *)(uVar8 + lVar38 + 0x70),
                            (TTransform<double> *)in_stack_fffffffffffffb48);
        if (bVar17) {
          iVar20 = *(int *)(uVar8 + lVar38 + 0x80);
          pFVar33 = *(FName **)(uVar8 + lVar38 + 0x78);
          pFVar22 = (FName *)((longlong)pFVar33 + (longlong)iVar20 * 0xc);
          while( true ) {
            if (*(int *)(uVar8 + lVar38 + 0x80) != iVar20) {
              local_473 = 0;
              `TCheckedPointerIterator<TTuple<FName,float>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_473);
            }
            pFVar39 = (FParticleTransformTrack *)local_45c._28_8_;
            pTVar44 = (TArray<FPerParticleCacheData,TSizedDefaultAllocator<32>_> *)local_45c._20_8_;
            if (pFVar33 == pFVar22) break;
            FVar3 = *pFVar33;
            local_3e0 = pFVar33[1].ComparisonIndex.Value;
            local_3e8.ComparisonIndex = FVar3.ComparisonIndex.Value;
            FVar30.Value = local_3e8.ComparisonIndex.Value;
            local_3e8 = FVar3;
            uVar21 = ::GetTypeHash(FVar30);
            this_03 = TMapBase<FName,FRichCurve,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,FRichCurve,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve,0>_>
                                  *)(pFVar41 + 1),FVar3.Number + uVar21,&local_3e8);
            FKeyHandle::FKeyHandle(local_31c);
            in_stack_fffffffffffffb48 =
                 (char *)((ulonglong)in_stack_fffffffffffffb48 & 0xffffffffffffff00);
            FRichCurve::AddKey(this_03,fVar47,(float)local_178._0_4_,SUB81(uVar37,0),
                               (FKeyHandle)(uint)in_stack_fffffffffffffb48);
            pFVar33 = (FName *)&pFVar33[1].Number;
          }
        }
        lVar38 = lVar38 + 0x90;
        local_468 = local_468 + 1;
        local_45c._4_8_ = local_45c._4_8_ + -1;
      } while (local_45c._4_8_ != 0);
      local_45c._4_8_ = 0;
      this = (UChaosCache *)local_45c._36_8_;
    }
    local_45c._52_4_ = 0;
    iStack_410 = 0;
    local_45c._56_4_ = 1;
    uVar21 = (uint)local_128;
    uStack_414 = 0;
    if (uVar21 != 0) {
      puVar28 = (uint *)(local_178 + 0x38);
      if (local_130 != (uint *)0x0) {
        puVar28 = local_130;
      }
      uVar43 = *puVar28;
      local_45c._52_4_ = 0;
      iStack_410 = 0;
      while (uVar43 == 0) {
        lVar38 = (longlong)(int)local_45c._52_4_;
        iStack_410 = iStack_410 + 0x20;
        local_45c._52_4_ = local_45c._52_4_ + 1;
        uStack_414 = uVar21;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_45c._52_4_)
        goto LAB_14dae37f3;
        uVar43 = puVar28[lVar38 + 1];
      }
      local_45c._56_4_ = -uVar43 & uVar43;
      uVar37 = (ulonglong)(uint)local_45c._56_4_ * 2 + 1;
      lVar38 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      local_324 = (int)lVar38;
      uStack_414 = local_324 + -1 + iStack_410;
      if ((int)uVar21 < (int)uStack_414) {
        uStack_414 = uVar21;
      }
    }
LAB_14dae37f3:
    local_45c._44_8_ = local_178 + 0x28;
    uStack_420 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x38);
    uVar43 = uVar21 & 0xffffffe0;
    local_408 = local_178._48_4_ - local_11c;
    bVar26 = (byte)local_128;
    uStack_418 = 0xffffffff;
    uStack_40c = local_1a4;
    auStack_2b0._0_8_ = local_45c._52_8_;
    iVar20 = (int)uVar21 >> 5;
    uStack_290 = CONCAT44(uStack_404,local_408);
    auStack_2b0._16_8_ = _uStack_418;
    auStack_2b0._24_8_ = _iStack_410;
    uVar18 = uVar21;
    local_2b8 = (longlong *)local_45c._44_8_;
    auStack_2b0._8_8_ = uStack_420;
    if ((int)uVar21 < 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      uVar18 = (uint)local_128;
    }
    if (uVar21 != uVar18) {
      puVar28 = (uint *)(local_178 + 0x38);
      if (local_130 != (uint *)0x0) {
        puVar28 = local_130;
      }
      uVar21 = -1 << (bVar26 & 0x1f) & puVar28[iVar20];
      while (uVar21 == 0) {
        lVar38 = (longlong)iVar20;
        uVar43 = uVar43 + 0x20;
        iVar20 = iVar20 + 1;
        uVar21 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14dae3917;
        uVar21 = puVar28[lVar38 + 1];
      }
      uVar37 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar38 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      local_328 = (int)lVar38;
      uVar21 = (uVar43 - 1) + local_328;
      if ((int)uVar18 < (int)uVar21) {
        uVar21 = uVar18;
      }
    }
LAB_14dae3917:
    pFVar39 = (FParticleTransformTrack *)0x0;
    while( true ) {
      plVar27 = local_2b8;
      if ((int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34) != (int)uStack_290) {
        local_472 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_472);
      }
      if (((auStack_2b0._20_4_ == uVar21) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)auStack_2b0._8_8_ ==
           (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x38))) &&
         (plVar27 == (longlong *)(local_178 + 0x28))) break;
      lVar38 = *plVar27;
      lVar45 = *(longlong *)(lVar38 + (longlong)(int)auStack_2b0._20_4_ * 0x48);
      pFVar22 = (FName *)(lVar38 + (longlong)(int)auStack_2b0._20_4_ * 0x48);
      uVar43 = ::GetTypeHash((FNameEntryId)(uint)lVar45);
      pFVar41 = pFVar39;
      if (*(int *)&(this->EventTracks).field_0x8 != *(int *)&(this->EventTracks).field_0x34) {
        puVar5 = *(undefined1 **)&(this->EventTracks).field_0x40;
        puVar29 = &(this->EventTracks).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar29 = puVar5;
        }
        iVar20 = *(int *)(puVar29 +
                         (ulonglong)
                         (*(int *)&(this->EventTracks).field_0x48 - 1U &
                         (int)((ulonglong)lVar45 >> 0x20) + uVar43) * 4);
        if (iVar20 != -1) {
          lVar38 = *(longlong *)&this->EventTracks;
          do {
            pFVar41 = (FParticleTransformTrack *)(lVar38 + (longlong)iVar20 * 0x48);
            if (*(longlong *)(lVar38 + (longlong)iVar20 * 0x48) == lVar45) break;
            iVar20 = (pFVar41->KeyTimestamps).ArrayNum;
            pFVar41 = pFVar39;
          } while (iVar20 != -1);
        }
      }
      pFVar25 = (FParticleTransformTrack *)&(pFVar41->RawTransformTrack).PosKeys.ArrayNum;
      if (pFVar41 == (FParticleTransformTrack *)0x0) {
        pFVar25 = pFVar39;
      }
      if (pFVar25 == (FParticleTransformTrack *)0x0) {
        local_238.Name = *pFVar22;
        local_238.Struct.field0_0x0 = *(TObjectPtr<UScriptStruct>_u_0 *)(pFVar22 + 2);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_238.Struct.field0_0x0 != (TObjectPtr<UScriptStruct>_u_0)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_238.Struct.field0_0x0);
        }
        local_238.TimeStamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.TimeStamps.ArrayNum = 0;
        local_238.TimeStamps.ArrayMax = 0;
        local_238.EventData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.EventData.ArrayNum = 0;
        local_238.EventData.ArrayMax = 0;
        pFVar25 = (FParticleTransformTrack *)
                  TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                  ::Emplace<FName_const_&,FCacheEventTrack>
                            ((TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                              *)&this->EventTracks,pFVar22,&local_238);
        FCacheEventTrack::~FCacheEventTrack(&local_238);
      }
      FCacheEventTrack::Merge((FCacheEventTrack *)pFVar25,(FCacheEventTrack *)(pFVar22 + 1));
      auStack_2b0._16_4_ = auStack_2b0._16_4_ & ~auStack_2b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2b0);
    }
    local_45c._52_4_ = 0;
    local_45c._56_4_ = 1;
    uVar21 = local_90.NumBits;
    in_R9 = (wchar_t *)pFVar39;
    uStack_414 = local_45c._52_4_;
    if (uVar21 != 0) {
      FVar34 = (ForElementType<unsigned_int>)&local_90;
      if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_90.AllocatorInstance.SecondaryData;
      }
      uVar43 = *(uint *)FVar34;
      pFVar41 = pFVar39;
      local_45c._52_4_ = 0;
      while (uVar43 == 0) {
        iVar20 = (int)pFVar41;
        in_R9 = (wchar_t *)(ulonglong)((int)in_R9 + 0x20);
        local_45c._52_4_ = iVar20 + 1;
        pFVar41 = (FParticleTransformTrack *)(ulonglong)(uint)local_45c._52_4_;
        uStack_414 = uVar21;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_45c._52_4_)
        goto LAB_14dae3b13;
        uVar43 = *(uint *)((longlong)FVar34 + ((longlong)iVar20 + 1) * 4);
      }
      local_45c._56_4_ = -uVar43 & uVar43;
      uVar37 = (ulonglong)(uint)local_45c._56_4_ * 2 + 1;
      lVar38 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      local_314 = (int)lVar38;
      uStack_414 = (int)in_R9 + -1 + local_314;
      if ((int)uVar21 < (int)uStack_414) {
        uStack_414 = uVar21;
      }
    }
LAB_14dae3b13:
    local_45c._44_8_ = &local_a0;
    uStack_420 = &local_90;
    uVar43 = uVar21 & 0xffffffe0;
    local_408 = local_98 - local_6c;
    bVar26 = (byte)local_90.NumBits;
    uStack_418 = 0xffffffff;
    uStack_40c = local_184;
    iStack_410 = (int)in_R9;
    auStack_280._0_8_ = local_45c._52_8_;
    iVar20 = (int)uVar21 >> 5;
    uStack_260 = CONCAT44(uStack_404,local_408);
    auStack_280._16_8_ = _uStack_418;
    auStack_280._24_8_ = _iStack_410;
    uVar18 = uVar21;
    local_288 = (longlong *)local_45c._44_8_;
    auStack_280._8_8_ = uStack_420;
    if ((int)uVar21 < 0) {
      in_R9 = L"";
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      uVar18 = local_90.NumBits;
    }
    if (uVar21 != uVar18) {
      FVar34 = (ForElementType<unsigned_int>)&local_90;
      if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_90.AllocatorInstance.SecondaryData;
      }
      uVar21 = -1 << (bVar26 & 0x1f) & *(uint *)((longlong)FVar34 + (longlong)iVar20 * 4);
      while (uVar21 == 0) {
        lVar38 = (longlong)iVar20;
        uVar43 = uVar43 + 0x20;
        iVar20 = iVar20 + 1;
        uVar21 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14dae3c44;
        uVar21 = *(uint *)((longlong)FVar34 + (lVar38 + 1) * 4);
      }
      uVar37 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar38 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      local_32c = (int)lVar38;
      uVar21 = (uVar43 - 1) + local_32c;
      if ((int)uVar18 < (int)uVar21) {
        uVar21 = uVar18;
      }
    }
LAB_14dae3c44:
    while( true ) {
      plVar27 = local_288;
      if ((int)local_288[1] - *(int *)((longlong)local_288 + 0x34) != (int)uStack_260) {
        local_471 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_471);
      }
      uVar8 = local_45c._12_8_;
      if (((auStack_280._20_4_ == uVar21) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)auStack_280._8_8_ == &local_90)) &&
         (plVar27 == &local_a0)) break;
      this_02 = &this->NamedTransformTracks;
      pFVar22 = (FName *)((longlong)(int)auStack_280._20_4_ * 0x80 + *plVar27);
      FVar3 = *pFVar22;
      uVar43 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      pFVar41 = pFVar39;
      if (*(int *)&(this->NamedTransformTracks).field_0x8 !=
          *(int *)&(this->NamedTransformTracks).field_0x34) {
        puVar5 = *(undefined1 **)&(this->NamedTransformTracks).field_0x40;
        puVar29 = &(this->NamedTransformTracks).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar29 = puVar5;
        }
        iVar20 = *(int *)(puVar29 +
                         (ulonglong)
                         (*(int *)&(this->NamedTransformTracks).field_0x48 - 1U &
                         FVar3.Number + uVar43) * 4);
        if (iVar20 != -1) {
          do {
            pFVar41 = (FParticleTransformTrack *)
                      ((longlong)iVar20 * 0x58 + *(longlong *)&this_02->field_0x0);
            if ((FName)(pFVar41->RawTransformTrack).PosKeys.AllocatorInstance.Data == FVar3) break;
            iVar20 = pFVar41[1].RawTransformTrack.PosKeys.ArrayNum;
            pFVar41 = pFVar39;
          } while (iVar20 != -1);
        }
      }
      pFVar25 = (FParticleTransformTrack *)&(pFVar41->RawTransformTrack).PosKeys.ArrayNum;
      if (pFVar41 == (FParticleTransformTrack *)0x0) {
        pFVar25 = pFVar39;
      }
      if (pFVar25 == (FParticleTransformTrack *)0x0) {
        local_240 = &local_398;
        local_363 = 0;
        local_361 = 0;
        local_398 = (void *)0x0;
        local_390 = 0;
        local_388 = (void *)0x0;
        local_380 = 0;
        local_378 = (void *)0x0;
        local_370 = 0;
        local_368 = 0;
        local_364 = 0;
        local_360 = (void *)0x0;
        local_358 = 0;
        local_248 = pFVar22;
        TSet<TTuple<FName,FParticleTransformTrack>,TDefaultMapHashableKeyFuncs<FName,FParticleTransformTrack,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FParticleTransformTrack_&&>_>
                  ((TSet<TTuple<FName,FParticleTransformTrack>,TDefaultMapHashableKeyFuncs<FName,FParticleTransformTrack,0>,FDefaultSetAllocator>
                    *)this_02,
                   (TPairInitializer<FName_const_&,FParticleTransformTrack_&&> *)(local_3f4 + 4),
                   (bool *)&local_248);
        pFVar25 = (FParticleTransformTrack *)
                  (*(longlong *)&this_02->field_0x0 + (longlong)(int)local_3f4._4_4_ * 0x58 + 8);
        if (local_360 != (void *)0x0) {
          FMemory::Free(local_360);
        }
        if (local_378 != (void *)0x0) {
          FMemory::Free(local_378);
        }
        if (local_388 != (void *)0x0) {
          FMemory::Free(local_388);
        }
        if (local_398 != (void *)0x0) {
          FMemory::Free(local_398);
        }
      }
      in_stack_fffffffffffffb48 = (char *)(pFVar22 + 2);
      in_R9 = (wchar_t *)0x0;
      `UChaosCache::FlushPendingFrames_MainPass<0>'::__l2::<lambda_1>::operator()
                (local_470,pFVar25,(float)local_178._0_4_,false,
                 (TTransform<double> *)in_stack_fffffffffffffb48);
      auStack_280._16_4_ = auStack_280._16_4_ & ~auStack_280._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_280);
    }
    this->NumRecordedFrames = this->NumRecordedFrames + 1;
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar13) {
      FThreadStats::AddMessage((FName)uVar8,CycleScopeEnd);
    }
    bVar14 = TQueue<FPendingFrameWrite,0>::Dequeue(local_300,(FPendingFrameWrite *)local_178);
  } while( true );
}

// UChaosCache @ 14dae7690

UChaosCache * __thiscall UChaosCache::UChaosCache(UChaosCache *this,FVTableHelper *param_1)

{
  TNode *_Dst;
  TNode *pTVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->InterpolationMode = QuatInterp;
  *(undefined ***)this = &___7UChaosCache__6B_;
  pTVar1 = (TNode *)0x0;
  (this->TrackToParticle).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackToParticle).ArrayNum = 0;
  (this->TrackToParticle).ArrayMax = 0;
  (this->ParticleTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleTracks).ArrayNum = 0;
  (this->ParticleTracks).ArrayMax = 0;
  (this->ChannelCurveToParticle).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelCurveToParticle).ArrayNum = 0;
  (this->ChannelCurveToParticle).ArrayMax = 0;
  *(undefined8 *)&this->ChannelsTracks = 0;
  *(undefined8 *)&(this->ChannelsTracks).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelsTracks).field_0x20 = 0;
  *(undefined4 *)&(this->ChannelsTracks).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelsTracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelsTracks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChannelsTracks).field_0x34 = 0;
  *(undefined8 *)&(this->ChannelsTracks).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelsTracks).field_0x48 = 0;
  *(undefined8 *)&this->CompressedChannelsTracks = 0;
  *(undefined8 *)&(this->CompressedChannelsTracks).field_0x8 = 0;
  *(undefined8 *)&(this->CompressedChannelsTracks).field_0x20 = 0;
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x28 = 0;
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x34 = 0;
  *(undefined8 *)&(this->CompressedChannelsTracks).field_0x40 = 0;
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x48 = 0;
  *(undefined8 *)&this->CurveData = 0;
  *(undefined8 *)&(this->CurveData).field_0x8 = 0;
  *(undefined8 *)&(this->CurveData).field_0x20 = 0;
  *(undefined4 *)&(this->CurveData).field_0x28 = 0;
  *(undefined4 *)&(this->CurveData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurveData).field_0x34 = 0;
  *(undefined8 *)&(this->CurveData).field_0x40 = 0;
  *(undefined4 *)&(this->CurveData).field_0x48 = 0;
  *(undefined8 *)&this->NamedTransformTracks = 0;
  *(undefined8 *)&(this->NamedTransformTracks).field_0x8 = 0;
  *(undefined8 *)&(this->NamedTransformTracks).field_0x20 = 0;
  *(undefined4 *)&(this->NamedTransformTracks).field_0x28 = 0;
  *(undefined4 *)&(this->NamedTransformTracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedTransformTracks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NamedTransformTracks).field_0x34 = 0;
  *(undefined8 *)&(this->NamedTransformTracks).field_0x40 = 0;
  *(undefined4 *)&(this->NamedTransformTracks).field_0x48 = 0;
  this->bCompressChannels = false;
  this->ChannelsCompressionErrorThreshold = 1e-05;
  this->ChannelsCompressionSampleRate = 0.033333335;
  *(undefined8 *)&this->CacheData = 0;
  *(undefined8 *)&(this->CacheData).field_0x8 = 0;
  *(undefined8 *)&this->EventTracks = 0;
  *(undefined8 *)&(this->EventTracks).field_0x8 = 0;
  *(undefined8 *)&(this->EventTracks).field_0x20 = 0;
  *(undefined4 *)&(this->EventTracks).field_0x28 = 0;
  *(undefined4 *)&(this->EventTracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventTracks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EventTracks).field_0x34 = 0;
  *(undefined8 *)&(this->EventTracks).field_0x40 = 0;
  *(undefined4 *)&(this->EventTracks).field_0x48 = 0;
  (this->Spawnable).DuplicatedTemplate.field0_0x0.DebugPtr = (UObject *)0x0;
  *&(this->Spawnable).InitialTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Spawnable).InitialTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Spawnable).InitialTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Spawnable).InitialTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Spawnable).InitialTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Spawnable).InitialTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->AdapterGuid).A = 0;
  (this->AdapterGuid).B = 0;
  (this->AdapterGuid).C = 0;
  (this->AdapterGuid).D = 0;
  _Dst = ::operator_new(0x130);
  if (_Dst != (TNode *)0x0) {
    memset(_Dst,0,0x130);
    _Dst->NextNode = (TNode *)0x0;
    FPendingFrameWrite::FPendingFrameWrite(&_Dst->Item);
    pTVar1 = _Dst;
  }
  (this->PendingWrites).Tail = pTVar1;
  (this->PendingWrites).Head = pTVar1;
  this->CurrentRecordCount = (atomic<int>)0x0;
  this->CurrentPlaybackCount = (atomic<int>)0x0;
  *(undefined8 *)&this->ParticleToChannelCurve = 0;
  *(undefined8 *)&(this->ParticleToChannelCurve).field_0x8 = 0;
  *(undefined8 *)&(this->ParticleToChannelCurve).field_0x20 = 0;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x28 = 0;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x34 = 0;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ParticleToChannelCurve).field_0x40 = 0;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x48 = 0;
  this->MinTime = 3.4028235e+38;
  this->MaxTime = -3.4028235e+38;
  return this;
}

// UChaosCache @ 14dae79c0

UChaosCache * __thiscall UChaosCache::UChaosCache(UChaosCache *this)

{
  TNode *_Dst;
  TNode *pTVar1;
  
  UObject::UObject((UObject *)this);
  this->InterpolationMode = QuatInterp;
  *(undefined ***)this = &___7UChaosCache__6B_;
  pTVar1 = (TNode *)0x0;
  (this->TrackToParticle).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackToParticle).ArrayNum = 0;
  (this->TrackToParticle).ArrayMax = 0;
  (this->ParticleTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleTracks).ArrayNum = 0;
  (this->ParticleTracks).ArrayMax = 0;
  (this->ChannelCurveToParticle).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelCurveToParticle).ArrayNum = 0;
  (this->ChannelCurveToParticle).ArrayMax = 0;
  *(undefined8 *)&this->ChannelsTracks = 0;
  *(undefined8 *)&(this->ChannelsTracks).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelsTracks).field_0x20 = 0;
  *(undefined4 *)&(this->ChannelsTracks).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelsTracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelsTracks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChannelsTracks).field_0x34 = 0;
  *(undefined8 *)&(this->ChannelsTracks).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelsTracks).field_0x48 = 0;
  *(undefined8 *)&this->CompressedChannelsTracks = 0;
  *(undefined8 *)&(this->CompressedChannelsTracks).field_0x8 = 0;
  *(undefined8 *)&(this->CompressedChannelsTracks).field_0x20 = 0;
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x28 = 0;
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x34 = 0;
  *(undefined8 *)&(this->CompressedChannelsTracks).field_0x40 = 0;
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x48 = 0;
  *(undefined8 *)&this->CurveData = 0;
  *(undefined8 *)&(this->CurveData).field_0x8 = 0;
  *(undefined8 *)&(this->CurveData).field_0x20 = 0;
  *(undefined4 *)&(this->CurveData).field_0x28 = 0;
  *(undefined4 *)&(this->CurveData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurveData).field_0x34 = 0;
  *(undefined8 *)&(this->CurveData).field_0x40 = 0;
  *(undefined4 *)&(this->CurveData).field_0x48 = 0;
  *(undefined8 *)&this->NamedTransformTracks = 0;
  *(undefined8 *)&(this->NamedTransformTracks).field_0x8 = 0;
  *(undefined8 *)&(this->NamedTransformTracks).field_0x20 = 0;
  *(undefined4 *)&(this->NamedTransformTracks).field_0x28 = 0;
  *(undefined4 *)&(this->NamedTransformTracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedTransformTracks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NamedTransformTracks).field_0x34 = 0;
  *(undefined8 *)&(this->NamedTransformTracks).field_0x40 = 0;
  *(undefined4 *)&(this->NamedTransformTracks).field_0x48 = 0;
  this->bCompressChannels = false;
  this->ChannelsCompressionErrorThreshold = 1e-05;
  this->ChannelsCompressionSampleRate = 0.033333335;
  *(undefined8 *)&this->CacheData = 0;
  *(undefined8 *)&(this->CacheData).field_0x8 = 0;
  *(undefined8 *)&this->EventTracks = 0;
  *(undefined8 *)&(this->EventTracks).field_0x8 = 0;
  *(undefined8 *)&(this->EventTracks).field_0x20 = 0;
  *(undefined4 *)&(this->EventTracks).field_0x28 = 0;
  *(undefined4 *)&(this->EventTracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventTracks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EventTracks).field_0x34 = 0;
  *(undefined8 *)&(this->EventTracks).field_0x40 = 0;
  *(undefined4 *)&(this->EventTracks).field_0x48 = 0;
  (this->Spawnable).DuplicatedTemplate.field0_0x0.DebugPtr = (UObject *)0x0;
  *&(this->Spawnable).InitialTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Spawnable).InitialTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Spawnable).InitialTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Spawnable).InitialTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Spawnable).InitialTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Spawnable).InitialTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Spawnable).ComponentTransform.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->AdapterGuid).A = 0;
  (this->AdapterGuid).B = 0;
  (this->AdapterGuid).C = 0;
  (this->AdapterGuid).D = 0;
  _Dst = ::operator_new(0x130);
  if (_Dst != (TNode *)0x0) {
    memset(_Dst,0,0x130);
    _Dst->NextNode = (TNode *)0x0;
    FPendingFrameWrite::FPendingFrameWrite(&_Dst->Item);
    pTVar1 = _Dst;
  }
  (this->PendingWrites).Tail = pTVar1;
  (this->PendingWrites).Head = pTVar1;
  this->CurrentRecordCount = (atomic<int>)0x0;
  this->CurrentPlaybackCount = (atomic<int>)0x0;
  *(undefined8 *)&this->ParticleToChannelCurve = 0;
  *(undefined8 *)&(this->ParticleToChannelCurve).field_0x8 = 0;
  *(undefined8 *)&(this->ParticleToChannelCurve).field_0x20 = 0;
  this->bStripMassToLocal = false;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x28 = 0;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x34 = 0;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ParticleToChannelCurve).field_0x40 = 0;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x48 = 0;
  this->Version = 0;
  this->MinTime = 3.4028235e+38;
  this->MaxTime = -3.4028235e+38;
  return this;
}

// ~UChaosCache @ 14dae8c80

void __thiscall UChaosCache::~UChaosCache(UChaosCache *this)

{
  void *pvVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined ***)this = &___7UChaosCache__6B_;
  *(undefined4 *)&(this->ParticleToChannelCurve).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ParticleToChannelCurve).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParticleToChannelCurve);
  pTVar2 = (this->PendingWrites).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->PendingWrites).Tail = pTVar2->NextNode;
    FPendingFrameWrite::~FPendingFrameWrite(&pTVar2->Item);
    ::operator_delete(pTVar2,0x130);
    pTVar2 = (this->PendingWrites).Tail;
  }
  *(undefined4 *)&(this->EventTracks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EventTracks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EventTracks);
  *(undefined4 *)&(this->NamedTransformTracks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NamedTransformTracks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FParticleTransformTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FParticleTransformTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FParticleTransformTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NamedTransformTracks);
  *(undefined4 *)&(this->CurveData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveData);
  *(undefined4 *)&(this->CompressedChannelsTracks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CompressedChannelsTracks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCompressedRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCompressedRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCompressedRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompressedChannelsTracks);
  *(undefined4 *)&(this->ChannelsTracks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChannelsTracks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelsTracks);
  pFVar3 = (this->ChannelCurveToParticle).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FPerParticleCacheData,int>
            ((FPerParticleCacheData *)(this->ParticleTracks).AllocatorInstance.Data,
             (this->ParticleTracks).ArrayNum);
  pFVar3 = (this->ParticleTracks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TrackToParticle).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14dae9330

bool __thiscall
`UChaosCache::FlushPendingFrames_MainPass<1>'::__l2::<lambda_1>::operator()
          (void *this,FParticleTransformTrack *param_1,float param_2,bool param_3,
          TTransform<double> *param_4)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  float local_res18 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  double local_28;
  double dStack_20;
  double local_18;
  
  iVar8 = (param_1->KeyTimestamps).ArrayNum;
  if (iVar8 == 0) {
    param_1->BeginOffset = param_2;
    param_1->bDeactivateOnEnd = false;
  }
  if (param_3) {
    param_1->bDeactivateOnEnd = true;
  }
  pTVar1 = &param_1->KeyTimestamps;
  local_res18[0] = param_2;
  if (iVar8 != 0) {
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)(param_1->KeyTimestamps).ArrayNum * 4 + -4
    ;
    if (local_res18[0] < *(float *)pFVar3 || local_res18[0] == *(float *)pFVar3) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8121540624227762385>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                         ,0xd1,"PTrack.GetNumKeys() == 0 || Time > PTrack.KeyTimestamps.Last()");
      if (!bVar5) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_res18) &&
      ((FScriptContainerElement *)local_res18 <
       pFVar3 + (longlong)(param_1->KeyTimestamps).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = (param_1->KeyTimestamps).ArrayNum;
  piVar2 = &(param_1->KeyTimestamps).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
    (param_1->KeyTimestamps).ArrayNum = iVar8;
  }
  (param_1->KeyTimestamps).ArrayNum = iVar8 + 1;
  local_58 = 0x3f800000;
  uStack_54 = 0x3f800000;
  local_50 = 0x3f800000;
  *(float *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_res18[0];
  pFVar3 = (param_1->RawTransformTrack).ScaleKeys.AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar3 + (longlong)(param_1->RawTransformTrack).ScaleKeys.ArrayMax * 0xc)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = (param_1->RawTransformTrack).ScaleKeys.ArrayNum;
  piVar2 = &(param_1->RawTransformTrack).ScaleKeys.ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(param_1->RawTransformTrack).ScaleKeys.AllocatorInstance,piVar2);
  }
  (param_1->RawTransformTrack).ScaleKeys.ArrayNum = iVar8 + 1;
  pFVar3 = (param_1->RawTransformTrack).ScaleKeys.AllocatorInstance.Data;
  *(ulonglong *)(pFVar3 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_54,local_58);
  *(undefined4 *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = local_50;
  local_28 = (param_4->Translation).XY.m128d_f64[0];
  dStack_20 = (param_4->Translation).XY.m128d_f64[1];
  local_18 = (param_4->Translation).ZW.m128d_f64[0];
  pFVar3 = (param_1->RawTransformTrack).PosKeys.AllocatorInstance.Data;
  local_4c = (float)local_28;
  fStack_48 = (float)dStack_20;
  local_44 = (float)local_18;
  if (((pFVar3 <= (FScriptContainerElement *)&local_4c) &&
      ((FScriptContainerElement *)&local_4c <
       pFVar3 + (longlong)(param_1->RawTransformTrack).PosKeys.ArrayMax * 0xc)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = (param_1->RawTransformTrack).PosKeys.ArrayNum;
  piVar2 = &(param_1->RawTransformTrack).PosKeys.ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)param_1,piVar2);
  }
  (param_1->RawTransformTrack).PosKeys.ArrayNum = iVar8 + 1;
  pFVar3 = (param_1->RawTransformTrack).PosKeys.AllocatorInstance.Data;
  *(ulonglong *)(pFVar3 + (longlong)iVar8 * 0xc) = CONCAT44(fStack_48,local_4c);
  *(float *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = local_44;
  pFVar3 = (param_1->RawTransformTrack).RotKeys.AllocatorInstance.Data;
  local_38 = (float)(param_4->Rotation).XY.m128d_f64[0];
  fStack_34 = (float)(param_4->Rotation).XY.m128d_f64[1];
  fStack_30 = (float)(param_4->Rotation).ZW.m128d_f64[0];
  fStack_2c = (float)(param_4->Rotation).ZW.m128d_f64[1];
  if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar3 + (longlong)(param_1->RawTransformTrack).RotKeys.ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = (param_1->RawTransformTrack).RotKeys.ArrayNum;
  piVar2 = &(param_1->RawTransformTrack).RotKeys.ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1010,&(param_1->RawTransformTrack).RotKeys.AllocatorInstance,piVar2);
  }
  (param_1->RawTransformTrack).RotKeys.ArrayNum = iVar8 + 1;
  pFVar3 = (param_1->RawTransformTrack).RotKeys.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(ulonglong *)pFVar3 = CONCAT44(fStack_34,local_38);
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(fStack_2c,fStack_30);
  return true;
}

// operator() @ 14dae9750

bool __thiscall
`UChaosCache::FlushPendingFrames_MainPass<0>'::__l2::<lambda_1>::operator()
          (void *this,FParticleTransformTrack *param_1,float param_2,bool param_3,
          TTransform<double> *param_4)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  float local_res18 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  double local_28;
  double dStack_20;
  double local_18;
  
  iVar8 = (param_1->KeyTimestamps).ArrayNum;
  if (iVar8 == 0) {
    param_1->BeginOffset = param_2;
    param_1->bDeactivateOnEnd = false;
  }
  if (param_3) {
    param_1->bDeactivateOnEnd = true;
  }
  pTVar1 = &param_1->KeyTimestamps;
  local_res18[0] = param_2;
  if (iVar8 != 0) {
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)(param_1->KeyTimestamps).ArrayNum * 4 + -4
    ;
    if (local_res18[0] < *(float *)pFVar3 || local_res18[0] == *(float *)pFVar3) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8121540624227762385>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                         ,0xd1,"PTrack.GetNumKeys() == 0 || Time > PTrack.KeyTimestamps.Last()");
      if (!bVar5) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_res18) &&
      ((FScriptContainerElement *)local_res18 <
       pFVar3 + (longlong)(param_1->KeyTimestamps).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = (param_1->KeyTimestamps).ArrayNum;
  piVar2 = &(param_1->KeyTimestamps).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
    (param_1->KeyTimestamps).ArrayNum = iVar8;
  }
  (param_1->KeyTimestamps).ArrayNum = iVar8 + 1;
  local_58 = 0x3f800000;
  uStack_54 = 0x3f800000;
  local_50 = 0x3f800000;
  *(float *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_res18[0];
  pFVar3 = (param_1->RawTransformTrack).ScaleKeys.AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar3 + (longlong)(param_1->RawTransformTrack).ScaleKeys.ArrayMax * 0xc)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = (param_1->RawTransformTrack).ScaleKeys.ArrayNum;
  piVar2 = &(param_1->RawTransformTrack).ScaleKeys.ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(param_1->RawTransformTrack).ScaleKeys.AllocatorInstance,piVar2);
  }
  (param_1->RawTransformTrack).ScaleKeys.ArrayNum = iVar8 + 1;
  pFVar3 = (param_1->RawTransformTrack).ScaleKeys.AllocatorInstance.Data;
  *(ulonglong *)(pFVar3 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_54,local_58);
  *(undefined4 *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = local_50;
  local_28 = (param_4->Translation).XY.m128d_f64[0];
  dStack_20 = (param_4->Translation).XY.m128d_f64[1];
  local_18 = (param_4->Translation).ZW.m128d_f64[0];
  pFVar3 = (param_1->RawTransformTrack).PosKeys.AllocatorInstance.Data;
  local_4c = (float)local_28;
  fStack_48 = (float)dStack_20;
  local_44 = (float)local_18;
  if (((pFVar3 <= (FScriptContainerElement *)&local_4c) &&
      ((FScriptContainerElement *)&local_4c <
       pFVar3 + (longlong)(param_1->RawTransformTrack).PosKeys.ArrayMax * 0xc)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = (param_1->RawTransformTrack).PosKeys.ArrayNum;
  piVar2 = &(param_1->RawTransformTrack).PosKeys.ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)param_1,piVar2);
  }
  (param_1->RawTransformTrack).PosKeys.ArrayNum = iVar8 + 1;
  pFVar3 = (param_1->RawTransformTrack).PosKeys.AllocatorInstance.Data;
  *(ulonglong *)(pFVar3 + (longlong)iVar8 * 0xc) = CONCAT44(fStack_48,local_4c);
  *(float *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = local_44;
  pFVar3 = (param_1->RawTransformTrack).RotKeys.AllocatorInstance.Data;
  local_38 = (float)(param_4->Rotation).XY.m128d_f64[0];
  fStack_34 = (float)(param_4->Rotation).XY.m128d_f64[1];
  fStack_30 = (float)(param_4->Rotation).ZW.m128d_f64[0];
  fStack_2c = (float)(param_4->Rotation).ZW.m128d_f64[1];
  if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar3 + (longlong)(param_1->RawTransformTrack).RotKeys.ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = (param_1->RawTransformTrack).RotKeys.ArrayNum;
  piVar2 = &(param_1->RawTransformTrack).RotKeys.ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1010,&(param_1->RawTransformTrack).RotKeys.AllocatorInstance,piVar2);
  }
  (param_1->RawTransformTrack).RotKeys.ArrayNum = iVar8 + 1;
  pFVar3 = (param_1->RawTransformTrack).RotKeys.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(ulonglong *)pFVar3 = CONCAT44(fStack_34,local_38);
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(fStack_2c,fStack_30);
  return true;
}

// operator() @ 14dae9c60

void __thiscall
`UChaosCache::CompressChannelsData'::__l6::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar3 + 0x10)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x14);
  fVar2 = *(float *)((longlong)this + 0x10);
  plVar4 = *(longlong **)((longlong)this + 8);
  lVar3 = *(longlong *)(lVar3 + 8);
  uVar7 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar3 + (longlong)param_1 * 0x80),
             (FCompressedRichCurve *)(*plVar4 + (longlong)param_1 * 0x18),fVar2,fVar1);
  return;
}

// AddFrame_Concurrent @ 14daeafe0

void __thiscall UChaosCache::AddFrame_Concurrent(UChaosCache *this,FPendingFrameWrite *param_1)

{
  TQueue<FPendingFrameWrite,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar1 = &this->PendingWrites;
  pTVar3 = ::operator_new(0x130);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    FPendingFrameWrite::FPendingFrameWrite(&pTVar3->Item,param_1);
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  return;
}

// BeginPlayback @ 14daecba0

FCacheUserToken * __thiscall
UChaosCache::BeginPlayback(UChaosCache *this,FCacheUserToken *__return_storage_ptr__)

{
  LOCK();
  this->CurrentPlaybackCount = (atomic<int>)((int)this->CurrentPlaybackCount + 1);
  UNLOCK();
  if (this->CurrentRecordCount == (atomic<int>)0x0) {
    __return_storage_ptr__->bIsOpen = true;
    __return_storage_ptr__->bIsRecord = false;
    __return_storage_ptr__->Owner = this;
    return __return_storage_ptr__;
  }
  LOCK();
  this->CurrentPlaybackCount = (atomic<int>)((int)this->CurrentPlaybackCount + -1);
  UNLOCK();
  __return_storage_ptr__->bIsOpen = false;
  __return_storage_ptr__->bIsRecord = false;
  __return_storage_ptr__->Owner = this;
  return __return_storage_ptr__;
}

// BeginRecord @ 14daecbe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCacheUserToken * __thiscall
UChaosCache::BeginRecord
          (UChaosCache *this,FCacheUserToken *__return_storage_ptr__,UPrimitiveComponent *param_1,
          FGuid *param_2,TTransform<double> *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  FPerParticleCacheData *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  UPackage *this_00;
  FString *pFVar9;
  FStaticBasicLogRecord *pFVar10;
  FString local_28;
  
  LOCK();
  paVar2 = &this->CurrentRecordCount;
  aVar3 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  if (aVar3 == (atomic<int>)0x0) {
    if (this->CurrentPlaybackCount == (atomic<int>)0x0) {
      piVar1 = &(this->ParticleTracks).ArrayMax;
      this->MinTime = 3.4028235e+38;
      this->MaxTime = -3.4028235e+38;
      this->RecordedDuration = 0.0;
      this->NumRecordedFrames = 0;
      pFVar5 = (FPerParticleCacheData *)(this->ParticleTracks).AllocatorInstance.Data;
      iVar4 = (this->ParticleTracks).ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FPerParticleCacheData,int>(pFVar5,iVar4);
        (this->ParticleTracks).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x98,8,0,&(this->ParticleTracks).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FPerParticleCacheData,int>(pFVar5,iVar4);
        (this->ParticleTracks).ArrayNum = 0;
      }
      TSet<TTuple<FName,FRichCurves>,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,FRichCurves>,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>,FDefaultSetAllocator>
               *)&this->ChannelsTracks);
      (this->TrackToParticle).ArrayNum = 0;
      if ((this->TrackToParticle).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->TrackToParticle).AllocatorInstance,0,
                   &(this->TrackToParticle).ArrayMax);
      }
      (this->ChannelCurveToParticle).ArrayNum = 0;
      if ((this->ChannelCurveToParticle).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->ChannelCurveToParticle).AllocatorInstance,0,
                   &(this->ChannelCurveToParticle).ArrayMax);
      }
      TSet<TTuple<FName,FRichCurve>,TDefaultMapHashableKeyFuncs<FName,FRichCurve,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,FRichCurve>,TDefaultMapHashableKeyFuncs<FName,FRichCurve,0>,FDefaultSetAllocator>
               *)&this->CurveData);
      TSet<TTuple<FName,FCacheEventTrack>,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,FCacheEventTrack>,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>,FDefaultSetAllocator>
               *)&this->EventTracks);
      TSet<TTuple<FName,FParticleTransformTrack>,TDefaultMapHashableKeyFuncs<FName,FParticleTransformTrack,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,FParticleTransformTrack>,TDefaultMapHashableKeyFuncs<FName,FParticleTransformTrack,0>,FDefaultSetAllocator>
               *)&this->NamedTransformTracks);
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this->ParticleToChannelCurve);
      TQueue<FPendingFrameWrite,0>::Empty(&this->PendingWrites);
      BuildSpawnableFromComponent(this,param_1,param_3);
      uVar6 = param_2->B;
      uVar7 = param_2->C;
      uVar8 = param_2->D;
      (this->AdapterGuid).A = param_2->A;
      (this->AdapterGuid).B = uVar6;
      (this->AdapterGuid).C = uVar7;
      (this->AdapterGuid).D = uVar8;
      this_00 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
      if (this_00 != (UPackage *)0x0) {
        UPackage::SetDirtyFlag(this_00,true);
      }
      __return_storage_ptr__->bIsOpen = true;
      __return_storage_ptr__->bIsRecord = true;
      goto LAB_14daece0e;
    }
    if (2 < (byte)LogChaosCache._0_1_) {
      pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
      if ((pFVar9->Data).ArrayNum == 0) {
        pFVar10 = &::LOG_Static;
      }
      else {
        pFVar10 = &::LOG_Static;
      }
      goto LAB_14daecde7;
    }
  }
  else if (2 < (byte)LogChaosCache._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
    pFVar10 = &::LOG_Static;
LAB_14daecde7:
    UE::Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogChaosCache);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  LOCK();
  this->CurrentRecordCount = (atomic<int>)((int)this->CurrentRecordCount + -1);
  UNLOCK();
  __return_storage_ptr__->bIsOpen = false;
  __return_storage_ptr__->bIsRecord = true;
LAB_14daece0e:
  __return_storage_ptr__->Owner = this;
  return __return_storage_ptr__;
}

// BuildSpawnableFromComponent @ 14daece60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UChaosCache::BuildSpawnableFromComponent
          (UChaosCache *this,UPrimitiveComponent *param_1,TTransform<double> *param_2)

{
  FCacheSpawnableTemplate *this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  undefined7 extraout_var;
  undefined1 *puVar11;
  undefined7 extraout_var_00;
  undefined1 *extraout_RAX;
  undefined4 uVar12;
  uint uVar13;
  UPrimitiveComponent *pUVar14;
  FCacheSpawnableTemplate *pFVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auStackY_148 [32];
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pUVar14 = param_1;
  pUVar9 = StaticDuplicateObject
                     ((UObject *)param_1,(UObject *)this,(FName)0x0,
                      RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                      RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                      RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                      RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                      RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                      RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                      RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                      RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                      RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public
                      ,(UClass *)0x0,Normal,
                      PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                      ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                      AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                      ReachabilityFlag0);
  this_00 = &this->Spawnable;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar9 == (UObject *)0x0)) {
    (this_00->DuplicatedTemplate).field0_0x0.DebugPtr = pUVar9;
    puVar11 = (undefined1 *)0x0;
    if (pUVar9 == (UObject *)0x0) goto LAB_14daecf2e;
  }
  else {
    UE::GC::MarkAsReachable(pUVar9);
    (this_00->DuplicatedTemplate).field0_0x0.DebugPtr = pUVar9;
  }
  pUVar10 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar14 = (UPrimitiveComponent *)this_00;
  bVar7 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
  puVar11 = (undefined1 *)CONCAT71(extraout_var,bVar7);
  if (((bVar7) &&
      (pUVar14 = (UPrimitiveComponent *)(this_00->DuplicatedTemplate).field0_0x0.DebugPtr,
      pUVar14 != (UPrimitiveComponent *)0x0)) &&
     (*(longlong *)((longlong)&pUVar14->field_0xc8 + 8) != 0)) {
    puVar11 = (undefined1 *)
              (**(code **)(*(longlong *)pUVar14 + 0x518))
                        (pUVar14,&FDetachmentTransformRules::KeepWorldTransform);
  }
LAB_14daecf2e:
  uVar12 = SUB84(pUVar14,0);
  if ((this_00->DuplicatedTemplate).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
    pFVar15 = this_00;
    bVar7 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
    uVar12 = SUB84(pFVar15,0);
    puVar11 = (undefined1 *)CONCAT71(extraout_var_00,bVar7);
    if ((bVar7) &&
       (pUVar9 = (this_00->DuplicatedTemplate).field0_0x0.DebugPtr, pUVar9 != (UObject *)0x0)) {
      puVar11 = &pUVar9[0x24].field_0x14;
      *(undefined4 *)&pUVar9[0x24].field_0x10 = 0;
      if (*(int *)puVar11 != 0) {
        uVar12 = 8;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&pUVar9[0x24].field_0x8,0,(int *)puVar11);
        puVar11 = extraout_RAX;
      }
    }
  }
  uVar6 = _UNK_15061cc8c;
  uVar5 = _UNK_15061cc88;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar3 = *(double *)&param_1->field_0x1f8;
  (this->Spawnable).InitialTransform.Rotation.XY.m128d_f64[0] = *(double *)&param_1->field_0x1f0;
  (this->Spawnable).InitialTransform.Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&param_1->field_0x208;
  (this->Spawnable).InitialTransform.Rotation.ZW.m128d_f64[0] = *(double *)&param_1->field_0x200;
  (this->Spawnable).InitialTransform.Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&param_1->field_0x218;
  (this->Spawnable).InitialTransform.Translation.XY.m128d_f64[0] = *(double *)&param_1->field_0x210;
  (this->Spawnable).InitialTransform.Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&param_1->field_0x228;
  (this->Spawnable).InitialTransform.Translation.ZW.m128d_f64[0] = *(double *)&param_1->field_0x220;
  (this->Spawnable).InitialTransform.Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&param_1->field_0x238;
  (this->Spawnable).InitialTransform.Scale3D.XY.m128d_f64[0] = *(double *)&param_1->field_0x230;
  (this->Spawnable).InitialTransform.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&param_1->field_0x248;
  (this->Spawnable).InitialTransform.Scale3D.ZW.m128d_f64[0] = *(double *)&param_1->field_0x240;
  (this->Spawnable).InitialTransform.Scale3D.ZW.m128d_f64[1] = dVar3;
  auVar17._0_8_ =
       (double)CONCAT44(uVar4 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4),
                        uVar13 & *(uint *)(param_2->Scale3D).XY.m128d_f64);
  auVar17._8_4_ = uVar5 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1);
  auVar17._12_4_ = uVar6 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
  lVar16 = -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(uVar6 & *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc),
                             uVar5 & *(uint *)((param_2->Scale3D).ZW.m128d_f64 + 1)));
  auVar2._8_4_ = (int)lVar16;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(uVar4 & *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4),
                                   uVar13 & *(uint *)(param_2->Scale3D).ZW.m128d_f64));
  auVar2._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  uVar13 = movmskpd(uVar12,auVar2);
  lVar16 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar17._8_8_);
  auVar1._8_4_ = (int)lVar16;
  auVar1._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar17._0_8_);
  auVar1._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  iVar8 = movmskpd((int)puVar11,auVar1);
  if ((uVar13 & 0x3fffffff) == 0 && iVar8 == 0) {
    local_98.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_98.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_98.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_98.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_98.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_98.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(param_2,&local_98);
  }
  local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_f8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_f8,(TTransform<double> *)&param_1->field_0x1f0,&local_98);
  (this->Spawnable).ComponentTransform.Rotation.XY.m128d_f64[0] = local_f8.Rotation.XY.m128d_f64[0];
  (this->Spawnable).ComponentTransform.Rotation.XY.m128d_f64[1] = local_f8.Rotation.XY.m128d_f64[1];
  (this->Spawnable).ComponentTransform.Rotation.ZW.m128d_f64[0] = local_f8.Rotation.ZW.m128d_f64[0];
  (this->Spawnable).ComponentTransform.Rotation.ZW.m128d_f64[1] = local_f8.Rotation.ZW.m128d_f64[1];
  (this->Spawnable).ComponentTransform.Translation.XY.m128d_f64[0] =
       local_f8.Translation.XY.m128d_f64[0];
  (this->Spawnable).ComponentTransform.Translation.XY.m128d_f64[1] =
       local_f8.Translation.XY.m128d_f64[1];
  (this->Spawnable).ComponentTransform.Translation.ZW.m128d_f64[0] =
       local_f8.Translation.ZW.m128d_f64[0];
  (this->Spawnable).ComponentTransform.Translation.ZW.m128d_f64[1] =
       local_f8.Translation.ZW.m128d_f64[1];
  (this->Spawnable).ComponentTransform.Scale3D.XY.m128d_f64[0] = local_f8.Scale3D.XY.m128d_f64[0];
  (this->Spawnable).ComponentTransform.Scale3D.XY.m128d_f64[1] = local_f8.Scale3D.XY.m128d_f64[1];
  (this->Spawnable).ComponentTransform.Scale3D.ZW.m128d_f64[0] = local_f8.Scale3D.ZW.m128d_f64[0];
  (this->Spawnable).ComponentTransform.Scale3D.ZW.m128d_f64[1] = local_f8.Scale3D.ZW.m128d_f64[1];
  return;
}

// CompressChannelsData @ 14daed990

void __thiscall UChaosCache::CompressChannelsData(UChaosCache *this,float param_1,float param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FCompressedRichCurve,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  FName *pFVar16;
  <lambda_1> local_res8;
  undefined1 local_res20 [8];
  undefined4 uStack_dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FName *local_90;
  TArray<FCompressedRichCurve,TSizedDefaultAllocator<32>_> *local_88;
  float local_80;
  float local_7c;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  FName **local_60;
  
  iVar3 = *(int *)&(this->ChannelsTracks).field_0x28;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ChannelsTracks).field_0x10;
  iVar12 = 0;
  iVar14 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ChannelsTracks).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_b8.Array;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14daeda4f;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = iVar14 + -1 + (int)lVar9;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14daeda4f:
  uVar11 = *(uint *)&(this->ChannelsTracks).field_0x28;
  puVar2 = &(this->ChannelsTracks).field_0x10;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_b8.CurrentBitIndex = iVar8;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uVar7,iVar12);
  iVar12 = (int)uVar11 >> 5;
  TStack_b8._28_4_ = iVar8;
  TStack_b8.BaseBitIndex = iVar14;
  uStack_98 = CONCAT44(uStack_dc,
                       *(int *)&(this->ChannelsTracks).field_0x8 -
                       *(int *)&(this->ChannelsTracks).field_0x34);
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ChannelsTracks).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ChannelsTracks).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14daedb5e;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14daedb5e:
  local_res8 = SUB81(this,0);
  while( true ) {
    if (*(int *)&(this->ChannelsTracks).field_0x8 - *(int *)&(this->ChannelsTracks).field_0x34 !=
        (int)uStack_98) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((TStack_b8.CurrentBitIndex == uVar11) &&
       (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar16 = (FName *)((longlong)TStack_b8.CurrentBitIndex * 0x20 +
                       *(longlong *)&(this->ChannelsTracks).field_0x0);
    FVar4 = *pFVar16;
    uVar7 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    this_00 = &TMapBase<FName,FCompressedRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCompressedRichCurves,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,FCompressedRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCompressedRichCurves,0>_>
                           *)&this->CompressedChannelsTracks,uVar7 + FVar4.Number,pFVar16)->
               CompressedRichCurves;
    iVar3 = this_00->ArrayNum;
    uVar7 = pFVar16[2].ComparisonIndex.Value;
    if (iVar3 < (int)uVar7) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,uVar7 - iVar3,&this_00->AllocatorInstance,&this_00->ArrayNum,
                          &this_00->ArrayMax);
      DefaultConstructItems<FCompressedRichCurve,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar12 * 0x18,uVar7 - iVar3);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < iVar3) {
        uVar10 = iVar3 - uVar7;
        if (((int)(uVar7 | uVar10) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar10 != 0) {
          TArray<FCompressedRichCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (this_00,uVar7,uVar10);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this_00->AllocatorInstance,this_00->ArrayNum,&this_00->ArrayMax);
        }
      }
    }
    local_78.DataPtr = (void **)0x0;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UChaosCache::CompressChannelsData'::__l6::<lambda_1>,void,int>::
               Call;
    local_60 = &local_90;
    local_78.ArrayNum = 0;
    local_90 = pFVar16;
    local_88 = this_00;
    local_80 = param_1;
    local_7c = param_2;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",uVar7,1,(TFunctionRef<void___cdecl(int)> *)&local_68,local_res8,
               None,&local_78);
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  TSet<TTuple<FName,FRichCurves>,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FRichCurves>,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>,FDefaultSetAllocator>
           *)&this->ChannelsTracks);
  return;
}

// CompressTracks @ 14daedd70

void __thiscall UChaosCache::CompressTracks(UChaosCache *this)

{
  int iVar1;
  FParticleTransformTrack *this_00;
  FParticleTransformTrack *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ParticleTracks).ArrayNum;
  this_00 = (FParticleTransformTrack *)(this->ParticleTracks).AllocatorInstance.Data;
  pFVar2 = (FParticleTransformTrack *)((longlong)this_00 + (longlong)iVar1 * 0x98);
  while( true ) {
    if ((this->ParticleTracks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPerParticleCacheData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FParticleTransformTrack::Compress(this_00);
    this_00 = (FParticleTransformTrack *)&this_00[2].RawTransformTrack.PosKeys.ArrayNum;
  }
  return;
}

// EndPlayback @ 14daf0aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UChaosCache::EndPlayback(UChaosCache *this,FCacheUserToken *param_1)

{
  if (((param_1->bIsOpen != false) && (param_1->Owner != (UChaosCache *)0x0)) &&
     (param_1->Owner == this)) {
    param_1->bIsOpen = false;
    param_1->Owner = (UChaosCache *)0x0;
    LOCK();
    this->CurrentPlaybackCount = (atomic<int>)((int)this->CurrentPlaybackCount + -1);
    UNLOCK();
    return;
  }
  if (param_1->Owner == (UChaosCache *)0x0) {
    if (2 < (byte)LogChaosCache._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
      return;
    }
  }
  else if (2 < (byte)LogChaosCache._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
    return;
  }
  return;
}

// EndRecord @ 14daf0b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UChaosCache::EndRecord(UChaosCache *this,FCacheUserToken *param_1)

{
  int iVar1;
  FStaticBasicLogRecord *pFVar2;
  FParticleTransformTrack *this_00;
  FParticleTransformTrack *pFVar3;
  undefined1 local_res8 [8];
  
  if (((param_1->bIsOpen == false) || (param_1->Owner == (UChaosCache *)0x0)) ||
     (param_1->Owner != this)) {
    if (param_1->Owner == (UChaosCache *)0x0) {
      if ((byte)LogChaosCache._0_1_ < 3) goto LAB_14daf0b90;
      pFVar2 = &::LOG_Static;
    }
    else {
      if ((byte)LogChaosCache._0_1_ < 3) goto LAB_14daf0b90;
      pFVar2 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<3>(pFVar2,(FLogCategoryBase *)&LogChaosCache);
  }
  else {
    FlushPendingFrames(this);
    param_1->bIsOpen = false;
    param_1->Owner = (UChaosCache *)0x0;
    LOCK();
    this->CurrentRecordCount = (atomic<int>)((int)this->CurrentRecordCount + -1);
    UNLOCK();
    this->Version = 1;
  }
LAB_14daf0b90:
  if (this->bCompressChannels != false) {
    CompressChannelsData
              (this,this->ChannelsCompressionErrorThreshold,this->ChannelsCompressionSampleRate);
  }
  if (bChaosCacheCompressTracksAfterRecording != false) {
    this_00 = (FParticleTransformTrack *)(this->ParticleTracks).AllocatorInstance.Data;
    iVar1 = (this->ParticleTracks).ArrayNum;
    pFVar3 = (FParticleTransformTrack *)((longlong)this_00 + (longlong)iVar1 * 0x98);
    while( true ) {
      if ((this->ParticleTracks).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPerParticleCacheData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar3) break;
      FParticleTransformTrack::Compress(this_00);
      this_00 = (FParticleTransformTrack *)&this_00[2].RawTransformTrack.PosKeys.ArrayNum;
    }
  }
  return;
}

// Evaluate @ 14daf1c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FCacheEvaluationResult * __thiscall
UChaosCache::Evaluate
          (UChaosCache *this,FCacheEvaluationResult *__return_storage_ptr__,
          FCacheEvaluationContext *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TMap<FName,FParticleTransformTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FParticleTransformTrack,0>_>
  *pTVar6;
  float fVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  FPlaybackTickRecord *pFVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  UChaosCache *pUVar22;
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *pTVar23;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar24;
  bool bVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<_public:_struct_FCacheEvaluationResult___cdecl_UChaosCache::Evaluate(FCacheEvaluationContext_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_*)const_::_2_::FStat_QSTAT_CacheEval>
  FVar31;
  FCacheEvaluationResult *pFVar32;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar33;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar34;
  longlong lVar35;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *pTVar36
  ;
  FName FVar37;
  TTransform<double> *pTVar38;
  uint uVar39;
  ulonglong uVar40;
  int iVar41;
  undefined1 *puVar42;
  TTransform<double> *pTVar43;
  uint uVar44;
  uint *puVar45;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulong64 uVar49;
  TBitArray<FDefaultBitArrayAllocator> *pTVar50;
  UChaosCache *pUVar51;
  undefined1 *puVar52;
  float fVar53;
  float fVar54;
  undefined1 auStackY_458 [32];
  longlong local_3e8;
  longlong local_3d8;
  undefined1 local_3d0;
  undefined1 local_3cf;
  undefined1 local_3ce;
  undefined1 local_3cd [5];
  UChaosCache *local_3c8;
  TBitArray<FDefaultBitArrayAllocator> *local_3c0;
  uint local_3b8;
  uint local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  FName local_3a8;
  FName local_3a0;
  undefined1 local_398 [8];
  TBitArray<FDefaultBitArrayAllocator> *local_390;
  TArray<float,TSizedDefaultAllocator<32>_> *local_388;
  TTransform<double> *local_380;
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *local_378;
  longlong lStack_370;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  int local_350;
  undefined4 uStack_34c;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_348;
  FColor_u_0 local_340;
  float local_33c;
  float local_338 [2];
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *local_330;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_328;
  undefined8 uStack_308;
  FName local_300;
  FName local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  TPairInitializer<FName_const_&,UE::Math::TTransform<double>_&&> local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  TArray<float,TSizedDefaultAllocator<32>_> *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  longlong local_1a0;
  TTransform<double> *local_198;
  FName local_190;
  FName local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_120;
  undefined4 local_e4;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_458;
  lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_3c8 = this;
  local_348 = param_2;
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_QSTAT_CacheEval ==
        (FThreadSafeStaticStat<_public:_struct_FCacheEvaluationResult___cdecl_UChaosCache::Evaluate(FCacheEvaluationContext_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_*)const_::_2_::FStat_QSTAT_CacheEval>
         )0x0) {
      pFVar30 = ::FName::FName(&local_190,"QSTAT_CacheEval");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_QSTAT_CacheEval,*pFVar30,L"QSTAT_CacheEval",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar31 = StatPtr_QSTAT_CacheEval;
  if (StatPtr_QSTAT_CacheEval ==
      (FThreadSafeStaticStat<_public:_struct_FCacheEvaluationResult___cdecl_UChaosCache::Evaluate(FCacheEvaluationContext_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_*)const_::_2_::FStat_QSTAT_CacheEval>
       )0x0) {
    pFVar30 = ::FName::FName(&local_188,"QSTAT_CacheEval");
    FVar31 = (FThreadSafeStaticStat<_public:_struct_FCacheEvaluationResult___cdecl_UChaosCache::Evaluate(FCacheEvaluationContext_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const_*)const_::_2_::FStat_QSTAT_CacheEval>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_QSTAT_CacheEval,*pFVar30,
                          L"QSTAT_CacheEval","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                          ,ST_int64,true,false,MCR_Invalid);
  }
  FVar37 = *(FName *)FVar31;
  bVar17 = false;
  bVar25 = false;
  local_2f8.ComparisonIndex.Value = 0;
  local_2f8.Number = 0;
  bVar18 = false;
  bVar21 = false;
  if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_14daf1da5:
    bVar19 = false;
    bVar20 = false;
    local_3a8 = local_2f8;
    FVar37 = local_2f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_340.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_340._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar17 = false;
      bVar25 = true;
      bVar18 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_300.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_300.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_300,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                   ,0x223);
        bVar17 = true;
        bVar25 = true;
        bVar18 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14daf1da5;
    local_3a8 = FVar37;
    local_3a0 = FVar37;
    FThreadStats::AddMessage(FVar37,CycleScopeStart);
    bVar19 = true;
    bVar20 = true;
    bVar17 = bVar18;
    bVar25 = bVar21;
  }
  (__return_storage_ptr__->Transform).ArrayMax = 0;
  pTVar1 = &__return_storage_ptr__->Curves;
  (__return_storage_ptr__->Curves).ArrayMax = 0;
  piVar4 = &(__return_storage_ptr__->Curves).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Transform).ArrayMax;
  (__return_storage_ptr__->ParticleIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00 = &__return_storage_ptr__->Channels;
  (__return_storage_ptr__->ParticleIndices).ArrayNum = 0;
  (__return_storage_ptr__->ParticleIndices).ArrayMax = 0;
  (__return_storage_ptr__->Transform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Transform).ArrayNum = 0;
  (__return_storage_ptr__->Curves).ArrayNum = 0;
  *(undefined8 *)&__return_storage_ptr__->Events = 0;
  *(undefined8 *)&(__return_storage_ptr__->Events).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Events).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Events).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Events).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Events).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Events).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Events).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Events).field_0x48 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Channels).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Channels).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Channels).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Channels).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Channels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Channels).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Channels).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Channels).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->NamedTransforms = 0;
  *(undefined8 *)&(__return_storage_ptr__->NamedTransforms).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NamedTransforms).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->NamedTransforms).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->NamedTransforms).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->NamedTransforms).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->NamedTransforms).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NamedTransforms).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->NamedTransforms).field_0x48 = 0;
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS1) &&
     (_Init_thread_header(&::_TSS1), bVar17 = bVar18, bVar20 = bVar19, bVar25 = bVar21,
     ::_TSS1 == -1)) {
    atexit(`UChaosCache::Evaluate'::__l2::_dynamic_atexit_destructor_for__EmptyMap__);
    _Init_thread_footer(&::_TSS1);
  }
  pUVar51 = local_3c8;
  if (this->CurrentPlaybackCount == (atomic<int>)0x0) {
    if (2 < (byte)LogChaosCache._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
    }
  }
  else {
    __return_storage_ptr__->EvaluatedTime =
         param_1->TickRecord->LastTime + param_1->TickRecord->CurrentDt;
    bVar8 = param_1->bEvaluateTransform;
    if ((((bVar8 == false) && (param_1->bEvaluateCurves == false)) &&
        (param_1->bEvaluateEvents == false)) &&
       ((param_1->bEvaluateChannels == false && (param_1->bEvaluateNamedTransforms == false)))) {
      if (bVar25) {
        FGenericPlatformMisc::EndNamedEvent();
        bVar17 = bVar18;
        bVar20 = bVar19;
      }
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
        bVar20 = bVar19;
      }
      goto LAB_14daf3b5b;
    }
    uVar44 = (param_1->EvaluationIndices).ArrayNum;
    uVar40 = (ulonglong)uVar44;
    if (((int)uVar44 < 1) || ((local_3c8->ParticleTracks).ArrayNum <= (int)uVar44)) {
      uVar44 = (local_3c8->ParticleTracks).ArrayNum;
      uVar40 = (ulonglong)uVar44;
      if (bVar8 != false) {
        if ((int)uVar44 < 0) goto LAB_14daf3c71;
        if ((__return_storage_ptr__->Transform).ArrayMax < (int)uVar44) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,uVar44,&(__return_storage_ptr__->Transform).AllocatorInstance,
                     (__return_storage_ptr__->Transform).ArrayNum,
                     &(__return_storage_ptr__->Transform).ArrayMax);
        }
      }
      if (param_1->bEvaluateCurves != false) {
        if ((int)uVar44 < 0) {
LAB_14daf3c71:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar40);
        }
        if ((__return_storage_ptr__->Curves).ArrayMax < (int)uVar44) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,uVar44,&(__return_storage_ptr__->Curves).AllocatorInstance,
                     (__return_storage_ptr__->Curves).ArrayNum,
                     &(__return_storage_ptr__->Curves).ArrayMax);
        }
      }
      local_3a0.ComparisonIndex.Value = 1;
      local_3a0.Number = 0;
      if (param_1->bEvaluateChannels != false) {
        if ((int)uVar44 < 1) {
          uVar40 = (ulonglong)(uint)(pUVar51->ChannelCurveToParticle).ArrayNum;
        }
        iVar26 = (int)uVar40;
        pTVar50 = (TBitArray<FDefaultBitArrayAllocator> *)&pUVar51->ChannelsTracks;
        local_2a8._padding_._0_4_ = 0;
        puVar52 = &(pUVar51->ChannelsTracks).field_0x10;
        local_2a8._padding_._4_4_ = 1;
        local_2a8.UnvisitedBitMask = 0xffffffff;
        local_2a8.CurrentBitIndex = 0;
        local_2a8.BaseBitIndex = 0;
        local_390 = pTVar50;
        local_2a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar52;
        if (*(int *)&(pUVar51->ChannelsTracks).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2a8);
        }
        TStack_328._padding_ = CONCAT44(local_2a8._padding_._4_4_,(undefined4)local_2a8._padding_);
        TStack_328.CurrentBitIndex = local_2a8.CurrentBitIndex;
        TStack_328.UnvisitedBitMask = local_2a8.UnvisitedBitMask;
        TStack_328._28_4_ = local_2a8._28_4_;
        TStack_328.BaseBitIndex = local_2a8.BaseBitIndex;
        TStack_328.Array = local_2a8.Array;
        uStack_308 = CONCAT44(uStack_308._4_4_,
                              *(int *)&(pUVar51->ChannelsTracks).field_0x8 -
                              *(int *)&(pUVar51->ChannelsTracks).field_0x34);
        TStack_1f8.Array = local_2a8.Array;
        uStack_1d8 = uStack_308;
        local_330 = (TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
                     *)pTVar50;
        local_200 = (TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
                     *)pTVar50;
        TStack_1f8._padding_ = TStack_328._padding_;
        TStack_1f8._16_8_ = TStack_328._16_8_;
        TStack_1f8._24_8_ = TStack_328._24_8_;
        pTVar33 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_140,(TBitArray<FDefaultBitArrayAllocator> *)puVar52,
                             *(int *)&(pUVar51->ChannelsTracks).field_0x28);
        pTVar34 = (TArray<float,TSizedDefaultAllocator<32>_> *)&__return_storage_ptr__->Channels;
        TStack_328._padding_ = pTVar33->_padding_;
        local_3c0 = pTVar33->Array;
        uVar10._0_4_ = pTVar33->UnvisitedBitMask;
        uVar10._4_4_ = pTVar33->CurrentBitIndex;
        TStack_328.BaseBitIndex = pTVar33->BaseBitIndex;
        TStack_328._28_4_ = *(undefined4 *)&pTVar33->field_0x1c;
        local_388 = pTVar34;
        TStack_328.Array = local_3c0;
        TStack_328._16_8_ = uVar10;
        while( true ) {
          pTVar23 = local_200;
          if (*(int *)&local_200->field_0x8 - *(int *)&local_200->field_0x34 != (int)uStack_1d8) {
            local_3ce = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,FRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3ce);
          }
          FVar37 = local_3a8;
          pUVar51 = local_3c8;
          if (((TStack_1f8.CurrentBitIndex == uVar10._4_4_) && (TStack_1f8.Array == local_3c0)) &&
             (pTVar23 ==
              (TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
               *)pTVar50)) break;
          pFVar30 = (FName *)((longlong)TStack_1f8.CurrentBitIndex * 0x20 +
                             *(longlong *)&pTVar23->field_0x0);
          FVar37 = *pFVar30;
          uVar27 = ::GetTypeHash(FVar37.ComparisonIndex.Value);
          local_380 = (TTransform<double> *)
                      TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                                  *)pTVar34,FVar37.Number + uVar27,pFVar30);
          local_338[0] = 0.0;
          TArray<float,TSizedDefaultAllocator<32>_>::Init
                    ((TArray<float,TSizedDefaultAllocator<32>_> *)local_380,local_338,iVar26);
          pTVar38 = local_380;
          uVar27 = 0;
          if (0 < iVar26) {
            lVar47 = 0;
            lVar35 = 0;
            do {
              uVar28 = 0;
              if ((int)uVar27 < (int)pFVar30[2].ComparisonIndex.Value) {
                uVar28 = ~uVar27 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              fVar53 = FRichCurve::Eval((FRichCurve *)((longlong)pFVar30[1] + lVar35),
                                        param_1->TickRecord->LastTime +
                                        param_1->TickRecord->CurrentDt,0.0);
              uVar28 = 0;
              if ((int)uVar27 < *(int *)((pTVar38->Rotation).XY.m128d_f64 + 1)) {
                uVar28 = ~uVar27 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              uVar27 = uVar27 + 1;
              lVar35 = lVar35 + 0x80;
              *(float *)((FScriptContainerElement *)(pTVar38->Rotation).XY.m128d_f64[0] + lVar47) =
                   fVar53;
              lVar47 = lVar47 + 4;
              pTVar34 = local_388;
            } while ((int)uVar27 < iVar26);
          }
          TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
          pTVar50 = local_390;
        }
        local_288._padding_._4_4_ = local_3a0.ComparisonIndex.Value;
        pTVar34 = (TArray<float,TSizedDefaultAllocator<32>_> *)&local_3c8->CompressedChannelsTracks;
        local_288._padding_._0_4_ = 0;
        puVar52 = &(local_3c8->CompressedChannelsTracks).field_0x10;
        local_288.UnvisitedBitMask = 0xffffffff;
        local_288.CurrentBitIndex = 0;
        local_288.BaseBitIndex = 0;
        local_388 = pTVar34;
        local_288.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar52;
        if (*(int *)&(local_3c8->CompressedChannelsTracks).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
        }
        lStack_370 = CONCAT44(local_288._padding_._4_4_,(undefined4)local_288._padding_);
        uStack_360._4_4_ = local_288.CurrentBitIndex;
        uStack_360._0_4_ = local_288.UnvisitedBitMask;
        uStack_358._4_4_ = local_288._28_4_;
        uStack_358._0_4_ = local_288.BaseBitIndex;
        local_350 = *(int *)&(pUVar51->CompressedChannelsTracks).field_0x8 -
                    *(int *)&(pUVar51->CompressedChannelsTracks).field_0x34;
        pTStack_368 = local_288.Array;
        uStack_1a8 = CONCAT44(uStack_34c,local_350);
        TStack_1c8.Array = local_288.Array;
        local_378 = (TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
                     *)pTVar34;
        local_1d0 = pTVar34;
        TStack_1c8._padding_ = lStack_370;
        TStack_1c8._16_8_ = uStack_360;
        TStack_1c8._24_8_ = uStack_358;
        pTVar33 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_120,(TBitArray<FDefaultBitArrayAllocator> *)puVar52,
                             *(int *)&(pUVar51->CompressedChannelsTracks).field_0x28);
        pTVar38 = (TTransform<double> *)&__return_storage_ptr__->Channels;
        lStack_370 = pTVar33->_padding_;
        local_390 = pTVar33->Array;
        uVar16._0_4_ = pTVar33->UnvisitedBitMask;
        uVar16._4_4_ = pTVar33->CurrentBitIndex;
        uStack_358._0_4_ = pTVar33->BaseBitIndex;
        uStack_358._4_4_ = *(undefined4 *)&pTVar33->field_0x1c;
        local_380 = pTVar38;
        pTStack_368 = local_390;
        uStack_360 = uVar16;
        while( true ) {
          pTVar24 = local_1d0;
          if (local_1d0->ArrayNum - *(int *)((longlong)&local_1d0[3].AllocatorInstance.Data + 4) !=
              (int)uStack_1a8) {
            local_3cd[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,FCompressedRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_3cd);
          }
          pUVar51 = local_3c8;
          if (((TStack_1c8.CurrentBitIndex == uVar16._4_4_) && (TStack_1c8.Array == local_390)) &&
             (pTVar24 == pTVar34)) break;
          pTVar50 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((pTVar24->AllocatorInstance).Data + (longlong)TStack_1c8.CurrentBitIndex * 0x20
                    );
          uVar10 = *(undefined8 *)(pTVar50->AllocatorInstance).InlineData;
          local_3c0 = pTVar50;
          uVar27 = ::GetTypeHash((FNameEntryId)(uint)uVar10);
          pTVar34 = TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                                *)pTVar38,(int)((ulonglong)uVar10 >> 0x20) + uVar27,(FName *)pTVar50
                              );
          local_3ac = 0;
          if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar40);
          }
          piVar4 = &pTVar34->ArrayMax;
          pTVar34->ArrayNum = 0;
          if (*piVar4 != iVar26) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar26,&pTVar34->AllocatorInstance,0,piVar4);
          }
          uVar49 = uVar40;
          if (0 < iVar26) {
            do {
              pFVar9 = (pTVar34->AllocatorInstance).Data;
              if (((pFVar9 <= (FScriptContainerElement *)&local_3ac) &&
                  ((FScriptContainerElement *)&local_3ac < pFVar9 + (longlong)*piVar4 * 4)) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              iVar41 = pTVar34->ArrayNum;
              if (iVar41 == *piVar4) {
                iVar41 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar34->AllocatorInstance,piVar4);
              }
              pTVar34->ArrayNum = iVar41 + 1;
              *(undefined4 *)((pTVar34->AllocatorInstance).Data + (longlong)iVar41 * 4) = local_3ac;
              uVar49 = uVar49 - 1;
            } while (uVar49 != 0);
            lVar35 = 0;
            lVar47 = 0;
            uVar27 = 0;
            do {
              uVar28 = 0;
              if ((int)uVar27 < *(int *)&(local_3c0->AllocatorInstance).SecondaryData) {
                uVar28 = ~uVar27 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              fVar53 = FCompressedRichCurve::Eval
                                 ((FCompressedRichCurve *)
                                  (*(longlong *)((local_3c0->AllocatorInstance).InlineData + 8) +
                                  lVar47),param_1->TickRecord->LastTime +
                                          param_1->TickRecord->CurrentDt,0.0);
              uVar28 = 0;
              if ((int)uVar27 < pTVar34->ArrayNum) {
                uVar28 = ~uVar27 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              uVar27 = uVar27 + 1;
              lVar47 = lVar47 + 0x18;
              *(float *)((pTVar34->AllocatorInstance).Data + lVar35) = fVar53;
              lVar35 = lVar35 + 4;
              FVar37 = local_3a8;
              pTVar38 = local_380;
            } while ((int)uVar27 < iVar26);
          }
          TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
          pTVar34 = local_388;
        }
        if (0 < (local_3c8->ChannelCurveToParticle).ArrayNum) {
          if (((local_3c8->ParticleTracks).ArrayNum != 0) &&
             (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<8121540624227762856>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                                  ,0x2a8,"ParticleTracks.Num() == 0"), bVar25)) {
            pcVar13 = (code *)swi(3);
            pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
            return pFVar32;
          }
          pTVar5 = &__return_storage_ptr__->ParticleIndices;
          if (pTVar5 != &pUVar51->ChannelCurveToParticle) {
            iVar26 = (pUVar51->ChannelCurveToParticle).ArrayNum;
            pFVar9 = (pUVar51->ChannelCurveToParticle).AllocatorInstance.Data;
            iVar41 = (__return_storage_ptr__->ParticleIndices).ArrayMax;
            (__return_storage_ptr__->ParticleIndices).ArrayNum = iVar26;
            if ((iVar26 == 0) && (iVar41 == 0)) {
              (__return_storage_ptr__->ParticleIndices).ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar26,iVar41,&pTVar5->AllocatorInstance,iVar26,
                         &(__return_storage_ptr__->ParticleIndices).ArrayMax);
              if (iVar26 != 0) {
                memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar26 << 2);
              }
            }
          }
        }
      }
      uVar27 = 0;
      if (0 < (int)uVar44) {
        pTVar3 = &__return_storage_ptr__->Transform;
        local_3e8 = 0;
        local_3c0 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
        pTVar1 = &__return_storage_ptr__->Curves;
        pTVar5 = &__return_storage_ptr__->ParticleIndices;
        do {
          pTVar50 = local_3c0;
          fVar53 = param_1->TickRecord->LastTime;
          fVar7 = param_1->TickRecord->CurrentDt;
          uVar28 = 0;
          if ((int)uVar27 < (pUVar51->ParticleTracks).ArrayNum) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar13 = (code *)swi(3);
            pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
            return pFVar32;
          }
          if (*(float *)((pUVar51->ParticleTracks).AllocatorInstance.Data + (longlong)pTVar50 + 0x30
                        ) <= fVar53 + fVar7) {
            uVar28 = 0;
            if ((int)uVar27 < (pUVar51->ParticleTracks).ArrayNum) {
              uVar28 = ~uVar27 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            if ((pUVar51->ParticleTracks).AllocatorInstance.Data[(longlong)pTVar50 + 0x34] !=
                (FScriptContainerElement)0x0) {
              fVar53 = param_1->TickRecord->LastTime;
              fVar7 = param_1->TickRecord->CurrentDt;
              uVar28 = 0;
              if ((int)uVar27 < (pUVar51->ParticleTracks).ArrayNum) {
                uVar28 = ~uVar27 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              pFVar9 = (pUVar51->ParticleTracks).AllocatorInstance.Data;
              iVar26 = *(int *)(pFVar9 + (longlong)pTVar50 + 0x40);
              if (iVar26 < 1) {
                fVar54 = 0.0;
              }
              else {
                uVar28 = 0;
                if ((int)(iVar26 - 1U) < iVar26) {
                  uVar28 = ~(iVar26 - 1U) >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar13 = (code *)swi(3);
                  pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                  return pFVar32;
                }
                fVar54 = *(float *)(*(longlong *)(pFVar9 + (longlong)pTVar50 + 0x38) + -4 +
                                   (longlong)*(int *)(pFVar9 + (longlong)pTVar50 + 0x40) * 4);
              }
              if (fVar54 < fVar53 + fVar7) goto LAB_14daf3855;
            }
            pTVar38 = (TTransform<double> *)0x0;
            pTVar46 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                       *)0x0;
            if (param_1->bEvaluateTransform != false) {
              pFVar9 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar9 < (FScriptContainerElement *)
                             ((longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
                             + 1)) &&
                  (&UE::Math::TTransform<double>::Identity <
                   (TTransform<double> *)
                   (pFVar9 + (longlong)(__return_storage_ptr__->Transform).ArrayMax * 0x60))) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              iVar26 = (__return_storage_ptr__->Transform).ArrayNum;
              if (iVar26 == (__return_storage_ptr__->Transform).ArrayMax) {
                iVar26 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1060,&pTVar3->AllocatorInstance,
                                    &(__return_storage_ptr__->Transform).ArrayMax);
              }
              (__return_storage_ptr__->Transform).ArrayNum = iVar26 + 1;
              pFVar9 = (pTVar3->AllocatorInstance).Data;
              lVar35 = (longlong)iVar26 * 0x60;
              *(double (*) [2])(pFVar9 + lVar35) =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              *(double (*) [2])(pFVar9 + lVar35 + 0x10) =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              *(double (*) [2])(pFVar9 + lVar35 + 0x20) =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              *(double (*) [2])(pFVar9 + lVar35 + 0x30) =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              *(double (*) [2])(pFVar9 + lVar35 + 0x40) =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              *(double (*) [2])(pFVar9 + lVar35 + 0x50) =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              iVar26 = (__return_storage_ptr__->Transform).ArrayNum;
              uVar39 = iVar26 - 1;
              uVar28 = 0;
              if ((int)uVar39 < iVar26) {
                uVar28 = ~uVar39 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              pTVar38 = (TTransform<double> *)
                        ((pTVar3->AllocatorInstance).Data +
                        (longlong)((__return_storage_ptr__->Transform).ArrayNum + -1) * 0x60);
            }
            if (param_1->bEvaluateCurves != false) {
              pFVar9 = (pTVar1->AllocatorInstance).Data;
              if (((pFVar9 < &EmptyMap.field_0x1) &&
                  (&EmptyMap <
                   (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                    *)(pFVar9 + (longlong)(__return_storage_ptr__->Curves).ArrayMax * 0x50))) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              iVar26 = (__return_storage_ptr__->Curves).ArrayNum;
              if (iVar26 == (__return_storage_ptr__->Curves).ArrayMax) {
                iVar26 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x850,&pTVar1->AllocatorInstance,
                                    &(__return_storage_ptr__->Curves).ArrayMax);
              }
              (__return_storage_ptr__->Curves).ArrayNum = iVar26 + 1;
              pTVar36 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                         *)((pTVar1->AllocatorInstance).Data + (longlong)iVar26 * 0x50);
              *(undefined8 *)&pTVar36->Elements = 0;
              *(undefined8 *)&(pTVar36->Elements).field_0x8 = 0;
              *(undefined8 *)&(pTVar36->Elements).field_0x20 = 0;
              *(undefined4 *)&(pTVar36->Elements).field_0x28 = 0;
              *(undefined4 *)&(pTVar36->Elements).field_0x2c = 0x80;
              *(undefined4 *)&(pTVar36->Elements).field_0x30 = 0xffffffff;
              *(undefined4 *)&(pTVar36->Elements).field_0x34 = 0;
              (pTVar36->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
              pTVar36->HashSize = 0;
              TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              ::operator=(pTVar36,(TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                                   *)&EmptyMap);
              iVar26 = (__return_storage_ptr__->Curves).ArrayNum;
              uVar39 = iVar26 - 1;
              uVar28 = 0;
              if ((int)uVar39 < iVar26) {
                uVar28 = ~uVar39 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              pTVar46 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                         *)((pTVar1->AllocatorInstance).Data +
                           (longlong)((__return_storage_ptr__->Curves).ArrayNum + -1) * 0x50);
            }
            pUVar51 = local_3c8;
            local_3b4 = 0xffffffff;
            if ((-1 < (int)uVar27) && ((int)uVar27 < (local_3c8->TrackToParticle).ArrayNum)) {
              uVar28 = 0;
              if ((int)uVar27 < (local_3c8->TrackToParticle).ArrayNum) {
                uVar28 = ~uVar27 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              local_3b4 = *(uint *)((pUVar51->TrackToParticle).AllocatorInstance.Data +
                                   local_3e8 * 4);
            }
            pFVar9 = (pTVar5->AllocatorInstance).Data;
            if (((pFVar9 <= (FScriptContainerElement *)&local_3b4) &&
                ((FScriptContainerElement *)&local_3b4 <
                 pFVar9 + (longlong)(__return_storage_ptr__->ParticleIndices).ArrayMax * 4)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            iVar26 = (__return_storage_ptr__->ParticleIndices).ArrayNum;
            if (iVar26 == (__return_storage_ptr__->ParticleIndices).ArrayMax) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar5->AllocatorInstance,
                                  &(__return_storage_ptr__->ParticleIndices).ArrayMax);
            }
            (__return_storage_ptr__->ParticleIndices).ArrayNum = iVar26 + 1;
            *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_3b4;
            if ((local_348 ==
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) ||
               (lVar35 = (longlong)(int)local_3b4, local_3b4 == 0xffffffff)) {
              pTVar43 = (TTransform<double> *)0x0;
            }
            else {
              uVar28 = 0;
              if ((int)local_3b4 < local_348->ArrayNum) {
                uVar28 = ~local_3b4 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
                return pFVar32;
              }
              pTVar43 = (TTransform<double> *)((local_348->AllocatorInstance).Data + lVar35 * 0x60);
            }
            pUVar51 = local_3c8;
            EvaluateSingle(local_3c8,uVar27,param_1->TickRecord,pTVar43,pTVar38,pTVar46);
            pTVar50 = local_3c0;
          }
LAB_14daf3855:
          local_3e8 = local_3e8 + 1;
          local_3c0 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar50 + 0x98);
          uVar27 = uVar27 + 1;
          FVar37 = local_3a8;
        } while (local_3e8 < (int)uVar44);
      }
    }
    else {
      if (bVar8 != false) {
        pTVar3 = &__return_storage_ptr__->Transform;
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Empty(pTVar3,uVar44);
        uVar48 = (ulonglong)uVar44;
        do {
          pFVar9 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar9 < (FScriptContainerElement *)0x154eba441) &&
              (&UE::Math::TTransform<double>::Identity <
               (TTransform<double> *)(pFVar9 + (longlong)*piVar2 * 0x60))) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar13 = (code *)swi(3);
            pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
            return pFVar32;
          }
          iVar26 = (__return_storage_ptr__->Transform).ArrayNum;
          if (iVar26 == *piVar2) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&pTVar3->AllocatorInstance,piVar2);
          }
          (__return_storage_ptr__->Transform).ArrayNum = iVar26 + 1;
          pFVar9 = (pTVar3->AllocatorInstance).Data;
          lVar35 = (longlong)iVar26 * 0x60;
          *(double (*) [2])(pFVar9 + lVar35) =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          *(double (*) [2])(pFVar9 + lVar35 + 0x10) =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          *(double (*) [2])(pFVar9 + lVar35 + 0x20) =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          *(double (*) [2])(pFVar9 + lVar35 + 0x30) =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          *(double (*) [2])(pFVar9 + lVar35 + 0x40) =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          *(double (*) [2])(pFVar9 + lVar35 + 0x50) =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          uVar48 = uVar48 - 1;
        } while (uVar48 != 0);
      }
      if (param_1->bEvaluateCurves != false) {
        DestructItems<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,int>
                  ((TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                    *)(pTVar1->AllocatorInstance).Data,(__return_storage_ptr__->Curves).ArrayNum);
        (__return_storage_ptr__->Curves).ArrayNum = 0;
        if (*piVar4 != uVar44) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,uVar44,&pTVar1->AllocatorInstance,0,piVar4);
        }
        do {
          pFVar9 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar9 < &EmptyMap.field_0x1) &&
              (&EmptyMap <
               (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *
               )(pFVar9 + (longlong)*piVar4 * 0x50))) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar13 = (code *)swi(3);
            pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
            return pFVar32;
          }
          iVar26 = (__return_storage_ptr__->Curves).ArrayNum;
          if (iVar26 == *piVar4) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&pTVar1->AllocatorInstance,piVar4);
          }
          (__return_storage_ptr__->Curves).ArrayNum = iVar26 + 1;
          pTVar36 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)((pTVar1->AllocatorInstance).Data + (longlong)iVar26 * 0x50);
          *(undefined8 *)&pTVar36->Elements = 0;
          *(undefined8 *)&(pTVar36->Elements).field_0x8 = 0;
          *(undefined8 *)&(pTVar36->Elements).field_0x20 = 0;
          *(undefined4 *)&(pTVar36->Elements).field_0x28 = 0;
          *(undefined4 *)&(pTVar36->Elements).field_0x2c = 0x80;
          *(undefined4 *)&(pTVar36->Elements).field_0x30 = 0xffffffff;
          *(undefined4 *)&(pTVar36->Elements).field_0x34 = 0;
          (pTVar36->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
          pTVar36->HashSize = 0;
          TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
          ::operator=(pTVar36,(TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                               *)&EmptyMap);
          uVar40 = uVar40 - 1;
        } while (uVar40 != 0);
      }
      pUVar51 = local_3c8;
      local_3a0.ComparisonIndex.Value = 1;
      local_3a0.Number = 0;
      if (param_1->bEvaluateChannels != false) {
        local_2e8._padding_._0_4_ = 0;
        local_2e8._padding_._4_4_ = 1;
        local_2e8.UnvisitedBitMask = 0xffffffff;
        pTVar38 = (TTransform<double> *)&local_3c8->ChannelsTracks;
        local_2e8.CurrentBitIndex = 0;
        local_2e8.BaseBitIndex = 0;
        puVar52 = &(local_3c8->ChannelsTracks).field_0x10;
        local_380 = pTVar38;
        local_2e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar52;
        if (*(int *)&(local_3c8->ChannelsTracks).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e8);
        }
        lStack_370 = CONCAT44(local_2e8._padding_._4_4_,(undefined4)local_2e8._padding_);
        uStack_360._4_4_ = local_2e8.CurrentBitIndex;
        uStack_360._0_4_ = local_2e8.UnvisitedBitMask;
        uStack_358._4_4_ = local_2e8._28_4_;
        uStack_358._0_4_ = local_2e8.BaseBitIndex;
        local_350 = *(int *)&(pUVar51->ChannelsTracks).field_0x8 -
                    *(int *)&(pUVar51->ChannelsTracks).field_0x34;
        pTStack_368 = local_2e8.Array;
        uStack_238 = CONCAT44(uStack_34c,local_350);
        TStack_258.Array = local_2e8.Array;
        local_378 = (TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
                     *)pTVar38;
        local_268.Value = pTVar38;
        TStack_258._padding_ = lStack_370;
        TStack_258._16_8_ = uStack_360;
        TStack_258._24_8_ = uStack_358;
        pTVar33 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_180,(TBitArray<FDefaultBitArrayAllocator> *)puVar52,
                             *(int *)&(pUVar51->ChannelsTracks).field_0x28);
        lStack_370 = pTVar33->_padding_;
        local_3c0 = pTVar33->Array;
        uVar14._0_4_ = pTVar33->UnvisitedBitMask;
        uVar14._4_4_ = pTVar33->CurrentBitIndex;
        uStack_358 = *(undefined8 *)&pTVar33->BaseBitIndex;
        pTStack_368 = local_3c0;
        uStack_360 = uVar14;
        while( true ) {
          pTVar43 = local_268.Value;
          if (*(int *)(((local_268.Value)->Rotation).XY.m128d_f64 + 1) -
              *(int *)((longlong)((local_268.Value)->Translation).ZW.m128d_f64 + 4) !=
              (int)uStack_238) {
            local_3d0 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,FRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3d0);
          }
          pUVar51 = local_3c8;
          if (((TStack_258.CurrentBitIndex == uVar14._4_4_) && (TStack_258.Array == local_3c0)) &&
             (pTVar43 == pTVar38)) break;
          pTVar50 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((FScriptContainerElement *)(pTVar43->Rotation).XY.m128d_f64[0] +
                    (longlong)TStack_258.CurrentBitIndex * 0x20);
          uVar10 = *(undefined8 *)(pTVar50->AllocatorInstance).InlineData;
          local_390 = pTVar50;
          uVar27 = ::GetTypeHash((FNameEntryId)(uint)uVar10);
          local_388 = TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                                  *)this_00,(int)((ulonglong)uVar10 >> 0x20) + uVar27,
                                 (FName *)pTVar50);
          local_33c = 0.0;
          TArray<float,TSizedDefaultAllocator<32>_>::Init(local_388,&local_33c,uVar44);
          pTVar34 = local_388;
          uVar27 = 0;
          lVar35 = 0;
          do {
            uVar28 = 0;
            if ((int)uVar27 < (param_1->EvaluationIndices).ArrayNum) {
              uVar28 = ~uVar27 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            uVar28 = *(uint *)((param_1->EvaluationIndices).AllocatorInstance.Data + lVar35);
            uVar39 = 0;
            if ((int)uVar28 < *(int *)&(pTVar50->AllocatorInstance).SecondaryData) {
              uVar39 = ~uVar28 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            fVar53 = FRichCurve::Eval((FRichCurve *)
                                      ((longlong)(int)uVar28 * 0x80 +
                                      *(longlong *)((local_390->AllocatorInstance).InlineData + 8)),
                                      param_1->TickRecord->LastTime + param_1->TickRecord->CurrentDt
                                      ,0.0);
            uVar39 = 0;
            if ((int)uVar28 < pTVar34->ArrayNum) {
              uVar39 = ~uVar28 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            uVar27 = uVar27 + 1;
            lVar35 = lVar35 + 4;
            *(float *)((pTVar34->AllocatorInstance).Data + (longlong)(int)uVar28 * 4) = fVar53;
            pTVar50 = local_390;
          } while ((int)uVar27 < (int)uVar44);
          TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
          pTVar38 = local_380;
        }
        local_2c8._padding_._4_4_ = local_3a0.ComparisonIndex.Value;
        local_2c8._padding_._0_4_ = 0;
        pTVar34 = (TArray<float,TSizedDefaultAllocator<32>_> *)&local_3c8->CompressedChannelsTracks;
        local_2c8.UnvisitedBitMask = 0xffffffff;
        puVar52 = &(local_3c8->CompressedChannelsTracks).field_0x10;
        local_2c8.CurrentBitIndex = 0;
        local_2c8.BaseBitIndex = 0;
        local_388 = pTVar34;
        local_2c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar52;
        if (*(int *)&(local_3c8->CompressedChannelsTracks).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c8);
        }
        lStack_370 = CONCAT44(local_2c8._padding_._4_4_,(undefined4)local_2c8._padding_);
        uStack_360._4_4_ = local_2c8.CurrentBitIndex;
        uStack_360._0_4_ = local_2c8.UnvisitedBitMask;
        uStack_358._4_4_ = local_2c8._28_4_;
        uStack_358._0_4_ = local_2c8.BaseBitIndex;
        local_350 = *(int *)&(pUVar51->CompressedChannelsTracks).field_0x8 -
                    *(int *)&(pUVar51->CompressedChannelsTracks).field_0x34;
        pTStack_368 = local_2c8.Array;
        uStack_208 = CONCAT44(uStack_34c,local_350);
        TStack_228.Array = local_2c8.Array;
        local_378 = (TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
                     *)pTVar34;
        local_230 = pTVar34;
        TStack_228._padding_ = lStack_370;
        TStack_228._16_8_ = uStack_360;
        TStack_228._24_8_ = uStack_358;
        pTVar33 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_160,(TBitArray<FDefaultBitArrayAllocator> *)puVar52,
                             *(int *)&(pUVar51->CompressedChannelsTracks).field_0x28);
        lStack_370 = pTVar33->_padding_;
        local_3c0 = pTVar33->Array;
        uVar15._0_4_ = pTVar33->UnvisitedBitMask;
        uVar15._4_4_ = pTVar33->CurrentBitIndex;
        uStack_358._0_4_ = pTVar33->BaseBitIndex;
        uStack_358._4_4_ = *(undefined4 *)&pTVar33->field_0x1c;
        pTStack_368 = local_3c0;
        uStack_360 = uVar15;
        while( true ) {
          pTVar24 = local_230;
          uVar40 = (ulonglong)uVar44;
          if (local_230->ArrayNum - *(int *)((longlong)&local_230[3].AllocatorInstance.Data + 4) !=
              (int)uStack_208) {
            local_3cf = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,FCompressedRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3cf);
          }
          pUVar51 = local_3c8;
          if (((TStack_228.CurrentBitIndex == uVar15._4_4_) && (TStack_228.Array == local_3c0)) &&
             (pTVar24 == pTVar34)) break;
          pTVar38 = (TTransform<double> *)
                    ((pTVar24->AllocatorInstance).Data + (longlong)TStack_228.CurrentBitIndex * 0x20
                    );
          pFVar9 = (FScriptContainerElement *)(pTVar38->Rotation).XY.m128d_f64[0];
          local_380 = pTVar38;
          uVar27 = ::GetTypeHash((FNameEntryId)(uint)pFVar9);
          pTVar34 = TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindOrAddImpl<FName_const_&>
                              ((TMapBase<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
                                *)this_00,(int)((ulonglong)pFVar9 >> 0x20) + uVar27,(FName *)pTVar38
                              );
          local_3b0 = 0;
          piVar4 = &pTVar34->ArrayMax;
          pTVar34->ArrayNum = 0;
          if (*piVar4 != uVar44) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar44,&pTVar34->AllocatorInstance,0,piVar4);
          }
          do {
            pFVar9 = (pTVar34->AllocatorInstance).Data;
            if (((pFVar9 <= (FScriptContainerElement *)&local_3b0) &&
                ((FScriptContainerElement *)&local_3b0 < pFVar9 + (longlong)*piVar4 * 4)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            iVar26 = pTVar34->ArrayNum;
            if (iVar26 == *piVar4) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar34->AllocatorInstance,piVar4);
            }
            pTVar38 = local_380;
            pTVar34->ArrayNum = iVar26 + 1;
            *(undefined4 *)((pTVar34->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_3b0;
            uVar40 = uVar40 - 1;
          } while (uVar40 != 0);
          lVar35 = 0;
          lVar47 = 0;
          uVar27 = 0;
          do {
            uVar28 = 0;
            if ((int)uVar27 < *(int *)(pTVar38->Rotation).ZW.m128d_f64) {
              uVar28 = ~uVar27 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            fVar53 = FCompressedRichCurve::Eval
                               ((FCompressedRichCurve *)
                                ((longlong)(pTVar38->Rotation).XY.m128d_f64[1] + lVar47),
                                param_1->TickRecord->LastTime + param_1->TickRecord->CurrentDt,0.0);
            uVar28 = 0;
            if ((int)uVar27 < pTVar34->ArrayNum) {
              uVar28 = ~uVar27 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            uVar27 = uVar27 + 1;
            lVar47 = lVar47 + 0x18;
            *(float *)((pTVar34->AllocatorInstance).Data + lVar35) = fVar53;
            lVar35 = lVar35 + 4;
          } while ((int)uVar27 < (int)uVar44);
          TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
          pTVar34 = local_388;
        }
        if (0 < (local_3c8->ChannelCurveToParticle).ArrayNum) {
          if (((local_3c8->ParticleTracks).ArrayNum != 0) &&
             (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<8121540624227762782>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                                  ,0x25e,"ParticleTracks.Num() == 0"), bVar25)) {
            pcVar13 = (code *)swi(3);
            pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
            return pFVar32;
          }
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    (&__return_storage_ptr__->ParticleIndices,&pUVar51->ChannelCurveToParticle);
        }
      }
      lVar35 = 0;
      uVar27 = 0;
      local_3d8 = 0;
      local_3e8 = 0;
      do {
        uVar39 = ~uVar27 >> 0x1f;
        uVar28 = 0;
        if ((int)uVar27 < (param_1->EvaluationIndices).ArrayNum) {
          uVar28 = uVar39;
        }
        if ((uVar28 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar13 = (code *)swi(3);
          pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
          return pFVar32;
        }
        uVar28 = *(uint *)((param_1->EvaluationIndices).AllocatorInstance.Data + lVar35);
        if (((int)uVar28 < 0) || ((local_3c8->ParticleTracks).ArrayNum <= (int)uVar28)) {
          bVar25 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8121540624227762790>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                              ,0x266,"ParticleTracks.IsValidIndex(CacheIndex)");
          if (bVar25) {
            pcVar13 = (code *)swi(3);
            pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
            return pFVar32;
          }
        }
        else {
          pTVar38 = (TTransform<double> *)0x0;
          pTVar46 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                     *)0x0;
          if (param_1->bEvaluateTransform != false) {
            uVar29 = 0;
            if ((int)uVar27 < (__return_storage_ptr__->Transform).ArrayNum) {
              uVar29 = uVar39;
            }
            if ((uVar29 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            pTVar38 = (TTransform<double> *)
                      ((__return_storage_ptr__->Transform).AllocatorInstance.Data + local_3e8);
          }
          if (param_1->bEvaluateCurves != false) {
            uVar29 = 0;
            if ((int)uVar27 < (__return_storage_ptr__->Curves).ArrayNum) {
              uVar29 = uVar39;
            }
            if ((uVar29 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            pTVar46 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                       *)((__return_storage_ptr__->Curves).AllocatorInstance.Data + local_3d8);
          }
          pUVar51 = local_3c8;
          local_3b8 = 0xffffffff;
          if ((int)uVar28 < (local_3c8->TrackToParticle).ArrayNum) {
            uVar39 = 0;
            if ((int)uVar28 < (local_3c8->TrackToParticle).ArrayNum) {
              uVar39 = ~uVar28 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            local_3b8 = *(uint *)((pUVar51->TrackToParticle).AllocatorInstance.Data +
                                 (longlong)(int)uVar28 * 4);
          }
          pFVar9 = (__return_storage_ptr__->ParticleIndices).AllocatorInstance.Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_3b8) &&
              ((FScriptContainerElement *)&local_3b8 <
               pFVar9 + (longlong)(__return_storage_ptr__->ParticleIndices).ArrayMax * 4)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar13 = (code *)swi(3);
            pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
            return pFVar32;
          }
          iVar26 = (__return_storage_ptr__->ParticleIndices).ArrayNum;
          if (iVar26 == (__return_storage_ptr__->ParticleIndices).ArrayMax) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(__return_storage_ptr__->ParticleIndices).AllocatorInstance,
                                &(__return_storage_ptr__->ParticleIndices).ArrayMax);
          }
          (__return_storage_ptr__->ParticleIndices).ArrayNum = iVar26 + 1;
          *(uint *)((__return_storage_ptr__->ParticleIndices).AllocatorInstance.Data +
                   (longlong)iVar26 * 4) = local_3b8;
          if ((local_348 == (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0)
             || (lVar47 = (longlong)(int)local_3b8, local_3b8 == 0xffffffff)) {
            pTVar43 = (TTransform<double> *)0x0;
          }
          else {
            uVar39 = 0;
            if ((int)local_3b8 < local_348->ArrayNum) {
              uVar39 = ~local_3b8 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
              return pFVar32;
            }
            pTVar43 = (TTransform<double> *)((local_348->AllocatorInstance).Data + lVar47 * 0x60);
          }
          EvaluateSingle(local_3c8,uVar28,param_1->TickRecord,pTVar43,pTVar38,pTVar46);
        }
        local_3d8 = local_3d8 + 0x50;
        local_3e8 = local_3e8 + 0x60;
        uVar27 = uVar27 + 1;
        lVar35 = lVar35 + 4;
        FVar37 = local_3a8;
      } while ((int)uVar27 < (int)uVar44);
    }
    pUVar51 = local_3c8;
    if (param_1->bEvaluateEvents != false) {
      TSet<TTuple<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)&__return_storage_ptr__->Events,
                *(int *)&(local_3c8->EventTracks).field_0x8 -
                *(int *)&(local_3c8->EventTracks).field_0x34);
      EvaluateEvents(pUVar51,param_1->TickRecord,&__return_storage_ptr__->Events);
    }
    if (param_1->bEvaluateNamedTransforms != false) {
      TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->NamedTransforms);
      pTStack_368 = (TBitArray<FDefaultBitArrayAllocator> *)
                    &(pUVar51->NamedTransformTracks).field_0x10;
      iVar41 = 0;
      iVar26 = *(int *)&(pUVar51->NamedTransformTracks).field_0x28;
      pTVar6 = &pUVar51->NamedTransformTracks;
      uStack_358._0_4_ = 0;
      uStack_360._4_4_ = 0;
      if (iVar26 != 0) {
        puVar45 = *(uint **)&(pUVar51->NamedTransformTracks).field_0x20;
        if (puVar45 == (uint *)0x0) {
          puVar45 = (uint *)pTStack_368;
        }
        uVar44 = *puVar45;
        while (uVar44 == 0) {
          lVar35 = (longlong)iVar41;
          uStack_358._0_4_ = (int)uStack_358 + 0x20;
          iVar41 = iVar41 + 1;
          uStack_360._4_4_ = iVar26;
          if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar41) goto LAB_14daf3953;
          uVar44 = puVar45[lVar35 + 1];
        }
        local_3a0.ComparisonIndex.Value = -uVar44 & uVar44;
        local_3a0.Number = 0;
        uVar40 = (longlong)local_3a0 * 2 + 1;
        lVar35 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        local_268.Key._4_4_ = (int)lVar35;
        uStack_360._4_4_ = (int)uStack_358 + -1 + local_268.Key._4_4_;
        if (iVar26 < uStack_360._4_4_) {
          uStack_360._4_4_ = iVar26;
        }
      }
LAB_14daf3953:
      uVar44 = *(uint *)&(pUVar51->NamedTransformTracks).field_0x28;
      local_350 = *(int *)&(pUVar51->NamedTransformTracks).field_0x8 -
                  *(int *)&(pUVar51->NamedTransformTracks).field_0x34;
      puVar52 = &(pUVar51->NamedTransformTracks).field_0x10;
      uStack_360._0_4_ = 0xffffffff;
      uVar27 = uVar44 & 0xffffffe0;
      lStack_370 = CONCAT44(local_3a0.ComparisonIndex.Value.Value,iVar41);
      uStack_358._4_4_ = local_e4;
      iVar26 = (int)uVar44 >> 5;
      uStack_308 = CONCAT44(uStack_34c,local_350);
      TStack_328.UnvisitedBitMask = 0xffffffff;
      TStack_328.CurrentBitIndex = uStack_360._4_4_;
      TStack_328.BaseBitIndex = (int)uStack_358;
      TStack_328._28_4_ = local_e4;
      local_378 = (TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
                   *)pTVar6;
      local_330 = (TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
                   *)pTVar6;
      TStack_328._padding_ = lStack_370;
      TStack_328.Array = pTStack_368;
      if (((int)uVar44 < 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar25)) {
        pcVar13 = (code *)swi(3);
        pFVar32 = (FCacheEvaluationResult *)(*pcVar13)();
        return pFVar32;
      }
      pUVar22 = local_3c8;
      uVar28 = *(uint *)&(pUVar51->NamedTransformTracks).field_0x28;
      if (uVar44 != uVar28) {
        puVar11 = *(undefined1 **)&(pUVar51->NamedTransformTracks).field_0x20;
        puVar42 = puVar52;
        if (puVar11 != (undefined1 *)0x0) {
          puVar42 = puVar11;
        }
        uVar44 = -1 << ((byte)uVar44 & 0x1f) & *(uint *)(puVar42 + (longlong)iVar26 * 4);
        while (uVar44 == 0) {
          lVar35 = (longlong)iVar26;
          uVar27 = uVar27 + 0x20;
          iVar26 = iVar26 + 1;
          uVar44 = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
          goto LAB_14daf3a80;
          uVar44 = *(uint *)(puVar42 + lVar35 * 4 + 4);
        }
        uVar40 = (ulonglong)(-uVar44 & uVar44) * 2 + 1;
        lVar35 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar44 = (int)lVar35 + -1 + uVar27;
        if ((int)uVar28 < (int)uVar44) {
          uVar44 = uVar28;
        }
      }
LAB_14daf3a80:
      while( true ) {
        pTVar23 = local_330;
        if (*(int *)&local_330->field_0x8 - *(int *)&local_330->field_0x34 != (int)uStack_308) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FParticleTransformTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_398);
        }
        if (((TStack_328.CurrentBitIndex == uVar44) &&
            (TStack_328.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar52)) &&
           (FVar37 = local_3a8,
           pTVar23 ==
           (TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
            *)pTVar6)) break;
        local_1a0 = (longlong)TStack_328.CurrentBitIndex * 0x58 + *(longlong *)&pTVar23->field_0x0;
        local_198 = FParticleTransformTrack::Evaluate
                              ((FParticleTransformTrack *)(local_1a0 + 8),&local_d8,
                               param_1->TickRecord->LastTime + param_1->TickRecord->CurrentDt,
                               (TTransform<double> *)0x0,pUVar22->InterpolationMode);
        TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,UE::Math::TTransform<double>_&&>_>
                  ((TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                    *)&__return_storage_ptr__->NamedTransforms,&local_268,(bool *)&local_1a0);
        TStack_328.UnvisitedBitMask = TStack_328.UnvisitedBitMask & ~TStack_328._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_328);
      }
    }
    pFVar12 = param_1->TickRecord;
    pFVar12->LastTime = pFVar12->LastTime + pFVar12->CurrentDt;
    param_1->TickRecord->CurrentDt = 0.0;
  }
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  bVar20 = bVar19;
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14daf3b5b:
  if (bVar20) {
    FThreadStats::AddMessage(FVar37,CycleScopeEnd);
  }
  return __return_storage_ptr__;
}

// EvaluateCurves @ 14daf3e60

void __thiscall
UChaosCache::EvaluateCurves
          (UChaosCache *this,FPerParticleCacheData *param_1,float param_2,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  float fVar18;
  undefined1 local_res10 [8];
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar3 = *(int *)&(param_1->CurveData).field_0x28;
  puVar1 = &(param_1->CurveData).field_0x10;
  iVar14 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_1->CurveData).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14daf3f0e;
      uVar12 = puVar17[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (int)lVar10 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14daf3f0e:
  uVar12 = *(uint *)&(param_1->CurveData).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar7,iVar14);
  TStack_78.CurrentBitIndex = iVar8;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_78._28_4_ = iVar8;
  TStack_78.BaseBitIndex = iVar16;
  uStack_58 = CONCAT44(uStack_84,
                       *(int *)&(param_1->CurveData).field_0x8 -
                       *(int *)&(param_1->CurveData).field_0x34);
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->CurveData).field_0x28;
  if (uVar12 != uVar7) {
    puVar15 = *(undefined1 **)&(param_1->CurveData).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar14;
      uVar11 = uVar11 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14daf4020;
      uVar12 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14daf4020:
  while( true ) {
    if (*(int *)&(param_1->CurveData).field_0x8 - *(int *)&(param_1->CurveData).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_78.CurrentBitIndex == uVar12) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar13 = (FName *)((longlong)TStack_78.CurrentBitIndex * 0x90 +
                       *(longlong *)&param_1->CurveData);
    fVar18 = FRichCurve::Eval((FRichCurve *)(pFVar13 + 1),param_2,0.0);
    FVar4 = *pFVar13;
    uVar7 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    pfVar9 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                         *)param_3,uVar7 + FVar4.Number,pFVar13);
    *pfVar9 = fVar18;
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// EvaluateEvents @ 14daf40d0

void __thiscall
UChaosCache::EvaluateEvents
          (UChaosCache *this,FPlaybackTickRecord *param_1,
          TMap<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  ulonglong uVar2;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *pTVar5;
  TMap<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  TMap<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
  *pTVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_res8 [8];
  FPlaybackTickRecord *local_res10;
  TSet<TTuple<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_res18;
  uint local_res20;
  ForAnyElementType local_128;
  undefined8 local_120;
  int *local_118;
  int iStack_110;
  uint uStack_10c;
  TKeyInitializer<FName_const_&> local_108;
  TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *local_100;
  TMap<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
  *local_f8;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  TMap<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  TPairInitializer<FName_&&,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_&&>
  local_a0;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  TMap<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FScriptContainerElement **local_58;
  FScriptContainerElement **local_50;
  
  local_res10 = param_1;
  local_res18 = (TSet<TTuple<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)param_2;
  TSet<TTuple<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)param_2);
  local_b8 = 0;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->EventTracks).field_0x10;
  iVar8 = *(int *)&(this->EventTracks).field_0x28;
  pTVar18 = &this->EventTracks;
  iStack_d0 = 0;
  uStack_cc = 1;
  iStack_bc = 0;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&(this->EventTracks).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar19;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      iStack_bc = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_14daf418e;
      uVar13 = puVar17[lVar9 + 1];
    }
    uStack_cc = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_cc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_a8 = (int)lVar9;
    iStack_bc = local_b8 + -1 + local_a8;
    if (iVar8 < iStack_bc) {
      iStack_bc = iVar8;
    }
  }
LAB_14daf418e:
  uVar13 = *(uint *)&(this->EventTracks).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_b0 = *(int *)&(this->EventTracks).field_0x8 - *(int *)&(this->EventTracks).field_0x34;
  uStack_c0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_cc,iStack_d0);
  TStack_80.CurrentBitIndex = iStack_bc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_80._28_4_ = iStack_bc;
  TStack_80.BaseBitIndex = local_b8;
  uStack_60 = CONCAT44(uStack_ac,iStack_b0);
  local_res20 = uVar13;
  local_f8 = pTVar18;
  local_d8 = pTVar18;
  local_c8 = (undefined1 *)pTVar19;
  iStack_b4 = iStack_bc;
  local_90 = pTVar19;
  local_88 = pTVar18;
  TStack_80.Array = pTVar19;
  if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = *(uint *)&(this->EventTracks).field_0x28;
  if (uVar13 != uVar14) {
    puVar16 = *(undefined1 **)&(this->EventTracks).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar19;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar14;
      local_res20 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14daf42b0;
      uVar13 = *(uint *)(puVar16 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_a4 = (int)lVar9;
    uVar13 = local_a4 + -1 + uVar12;
    local_res20 = uVar13;
    if ((int)uVar14 < (int)uVar13) {
      uVar13 = uVar14;
      local_res20 = uVar14;
    }
  }
LAB_14daf42b0:
  do {
    pTVar6 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar13) && (TStack_80.Array == pTVar19)) &&
       (pTVar6 == pTVar18)) {
      return;
    }
    pTVar1 = (TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)pTVar6 + (longlong)TStack_80.CurrentBitIndex * 0x48);
    local_100 = pTVar1;
    if (*(int *)&pTVar1[3].AllocatorInstance.Data != 0) {
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      this_00 = &param_1->LastEventPerTrack;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)pFVar3);
      if (*(int *)&(param_1->LastEventPerTrack).field_0x8 !=
          *(int *)&(param_1->LastEventPerTrack).field_0x34) {
        puVar16 = *(undefined1 **)&(param_1->LastEventPerTrack).field_0x40;
        puVar10 = &(param_1->LastEventPerTrack).field_0x38;
        if (puVar16 != (undefined1 *)0x0) {
          puVar10 = puVar16;
        }
        iVar8 = *(int *)(puVar10 +
                        (ulonglong)
                        (*(int *)&(param_1->LastEventPerTrack).field_0x48 - 1U &
                        (int)((ulonglong)pFVar3 >> 0x20) + uVar13) * 4);
        if (iVar8 != -1) {
          do {
            lVar9 = *(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x14;
            if (*(FScriptContainerElement **)
                 (*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x14) == pFVar3) {
              puVar17 = (uint *)(lVar9 + 8);
              if (lVar9 == 0) {
                puVar17 = (uint *)0x0;
              }
              if (puVar17 == (uint *)0x0) goto LAB_14daf4381;
              uVar13 = *puVar17;
              goto LAB_14daf4383;
            }
            iVar8 = *(int *)(lVar9 + 0xc);
          } while (iVar8 != -1);
        }
      }
      puVar17 = (uint *)0x0;
LAB_14daf4381:
      uVar13 = 0;
LAB_14daf4383:
      iVar8 = *(int *)&pTVar1[2].AllocatorInstance.Data;
      uVar14 = iVar8 - uVar13;
      uVar12 = 0;
      if ((int)uVar13 < iVar8) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar9 = *(longlong *)&pTVar1[1].ArrayNum + (longlong)(int)uVar13 * 4;
      if (((int)uVar14 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((int)uVar14 < 1) {
        iVar8 = 0;
        uVar12 = uVar13;
      }
      else {
        uVar12 = uVar14;
        iVar8 = 0;
        do {
          uVar15 = uVar12 >> 1;
          iVar11 = uVar15 + iVar8 + (uVar12 & 1);
          if (local_res10->LastTime < *(float *)(lVar9 + (longlong)(int)(uVar15 + iVar8) * 4)) {
            iVar11 = iVar8;
          }
          iVar8 = iVar11;
          uVar12 = uVar15;
        } while (uVar15 != 0);
        uVar12 = uVar13 + iVar8;
        iVar11 = 0;
        do {
          uVar15 = uVar14 >> 1;
          iVar8 = (uVar14 & 1) + uVar15 + iVar11;
          if (local_res10->CurrentDt + local_res10->LastTime <
              *(float *)(lVar9 + (longlong)(int)(uVar15 + iVar11) * 4)) {
            iVar8 = iVar11;
          }
          uVar14 = uVar15;
          iVar11 = iVar8;
        } while (uVar15 != 0);
      }
      local_128.Data = (FScriptContainerElement *)0x0;
      uVar14 = (iVar8 + uVar13) - uVar12;
      local_120 = 0;
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      iVar11 = 0;
      pTVar5 = local_100;
      if (0 < (int)uVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar14,&local_128,0,(int *)((longlong)&local_120 + 4));
        iVar11 = (int)local_120;
        pTVar5 = local_100;
      }
      for (; local_100 = pTVar5, uVar12 != iVar8 + uVar13; uVar12 = uVar12 + 1) {
        local_118 = (int *)0x0;
        iStack_110 = 0;
        uStack_10c = 0xffffffff;
        if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)&pTVar1[3].AllocatorInstance.Data)) {
          iStack_110 = pTVar1[3].ArrayNum;
          local_118 = &pTVar1->ArrayNum;
          uStack_10c = uVar12;
        }
        if ((local_128.Data <= (FScriptContainerElement *)&local_118) &&
           (local_120._4_4_ = (int)((ulonglong)local_120 >> 0x20), lVar9 = (longlong)local_120._4_4_
           , (FScriptContainerElement *)&local_118 < local_128.Data + lVar9 * 0x10)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = (int)local_120;
        }
        if (iVar11 == local_120._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_128,(int *)((longlong)&local_120 + 4));
        }
        local_120 = CONCAT44(local_120._4_4_,iVar11 + 1);
        *(int **)(local_128.Data + (longlong)iVar11 * 0x10) = local_118;
        *(longlong *)(local_128.Data + (longlong)iVar11 * 0x10 + 8) =
             CONCAT44(uStack_10c,iStack_110);
        iVar11 = iVar11 + 1;
        pTVar5 = local_100;
      }
      if (0 < iVar11) {
        if (puVar17 == (uint *)0x0) {
          local_a0.Value = pTVar5;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TKeyInitializer<FName_const_&>_>
                    ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)this_00,&local_108,(bool *)&local_a0.Value);
          puVar17 = (uint *)(*(longlong *)&this_00->field_0x0 +
                            ((longlong)(int)local_108.Key * 5 + 2) * 4);
          iVar11 = (int)local_120;
        }
        uVar13 = 0;
        if ((int)(iVar11 - 1U) < iVar11) {
          uVar13 = ~(iVar11 - 1U) >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = (int)local_120;
        }
        *puVar17 = *(uint *)(local_128.Data + (longlong)(iVar11 + -1) * 0x10 + 0xc);
        local_f0 = (pTVar5->AllocatorInstance).Data;
        local_e8 = local_128.Data;
        local_e0 = (int)local_120;
        local_dc = local_120._4_4_;
        local_58 = &local_f0;
        local_50 = &local_e8;
        local_128.Data = (FScriptContainerElement *)0x0;
        local_120 = 0;
        TSet<TTuple<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_&&,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_&&>_>
                  (local_res18,&local_a0,(bool *)&local_58);
        if (local_e8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8);
        }
      }
      param_1 = local_res10;
      pTVar18 = local_f8;
      uVar13 = local_res20;
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
        param_1 = local_res10;
        pTVar18 = local_f8;
        uVar13 = local_res20;
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    pTVar19 = local_90;
  } while( true );
}

// EvaluateSingle @ 14daf4760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UChaosCache::EvaluateSingle
          (UChaosCache *this,int param_1,FPlaybackTickRecord *param_2,TTransform<double> *param_3,
          TTransform<double> *param_4,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_5)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  TTransform<double> *pTVar5;
  FPerParticleCacheData *this_00;
  undefined1 auStack_138 [32];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar4 = 0;
  if (param_1 < (this->ParticleTracks).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FPerParticleCacheData *)
            ((this->ParticleTracks).AllocatorInstance.Data + (longlong)param_1 * 0x98);
  if (param_4 != (TTransform<double> *)0x0) {
    pTVar5 = FParticleTransformTrack::Evaluate
                       ((FParticleTransformTrack *)this_00,&local_108,
                        param_2->LastTime + param_2->CurrentDt,param_3,this->InterpolationMode);
    dVar2 = (pTVar5->Rotation).XY.m128d_f64[1];
    (param_4->Rotation).XY.m128d_f64[0] = (pTVar5->Rotation).XY.m128d_f64[0];
    (param_4->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Rotation).ZW.m128d_f64[1];
    (param_4->Rotation).ZW.m128d_f64[0] = (pTVar5->Rotation).ZW.m128d_f64[0];
    (param_4->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Translation).XY.m128d_f64[1];
    (param_4->Translation).XY.m128d_f64[0] = (pTVar5->Translation).XY.m128d_f64[0];
    (param_4->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Translation).ZW.m128d_f64[1];
    (param_4->Translation).ZW.m128d_f64[0] = (pTVar5->Translation).ZW.m128d_f64[0];
    (param_4->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Scale3D).XY.m128d_f64[1];
    (param_4->Scale3D).XY.m128d_f64[0] = (pTVar5->Scale3D).XY.m128d_f64[0];
    (param_4->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar5->Scale3D).ZW.m128d_f64[1];
    (param_4->Scale3D).ZW.m128d_f64[0] = (pTVar5->Scale3D).ZW.m128d_f64[0];
    (param_4->Scale3D).ZW.m128d_f64[1] = dVar2;
    local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_a8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_a8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_a8,param_4,&param_2->SpaceTransform);
    (param_4->Rotation).XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
    (param_4->Rotation).XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
    (param_4->Rotation).ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
    (param_4->Rotation).ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
    (param_4->Translation).XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
    (param_4->Translation).XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
    (param_4->Translation).ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
    (param_4->Translation).ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
    (param_4->Scale3D).XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
    (param_4->Scale3D).XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
    (param_4->Scale3D).ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
    (param_4->Scale3D).ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
  }
  if (param_5 !=
      (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0) {
    EvaluateCurves(this,this_00,param_2->LastTime + param_2->CurrentDt,param_5);
  }
  return;
}

// EvaluateTransform @ 14daf4950

void __thiscall
UChaosCache::EvaluateTransform
          (UChaosCache *this,FPerParticleCacheData *param_1,float param_2,
          TTransform<double> *param_3,TTransform<double> *param_4)

{
  double dVar1;
  TTransform<double> *pTVar2;
  TTransform<double> local_68;
  
  pTVar2 = FParticleTransformTrack::Evaluate
                     (&param_1->TransformData,&local_68,param_2,param_3,this->InterpolationMode);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (param_4->Rotation).XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (param_4->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (param_4->Rotation).ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (param_4->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (param_4->Translation).XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (param_4->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (param_4->Translation).ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (param_4->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (param_4->Scale3D).XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (param_4->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (param_4->Scale3D).ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (param_4->Scale3D).ZW.m128d_f64[1] = dVar1;
  return;
}

// FlushPendingFrames @ 14daf5aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UChaosCache::FlushPendingFrames(UChaosCache *this)

{
  ulonglong uVar1;
  TNode *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *pTVar8;
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *pTVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_void___cdecl_UChaosCache::FlushPendingFrames(void)_::_2_::FStat_QSTAT_CacheFlushPendingFrames>
  FVar16;
  TNode *pTVar17;
  FThreadSafeStaticStat<_public:_void___cdecl_UChaosCache::FlushPendingFrames(void)_::_10_::FStat_QSTAT_CacheCalcDuration>
  FVar18;
  int *piVar19;
  longlong lVar20;
  FName FVar21;
  int iVar22;
  FParticleTransformTrack *this_00;
  FName FVar23;
  TNode *pTVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  FParticleTransformTrack *pFVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  bool local_res20 [8];
  undefined1 local_168;
  undefined1 local_167 [7];
  FName local_160;
  FColor_u_0 local_158;
  FColor_u_0 local_154;
  float local_150;
  float local_14c;
  FName local_148 [2];
  TQueue<FPendingFrameWrite,1> local_138;
  FName local_128;
  FName local_118;
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *local_c8;
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78 [7];
  
  pTVar24 = (TNode *)0x0;
  uVar29 = 0;
  FVar21 = *(FName *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_160 = FVar21;
  if ((*(int *)((longlong)FVar21 + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_QSTAT_CacheFlushPendingFrames ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UChaosCache::FlushPendingFrames(void)_::_2_::FStat_QSTAT_CacheFlushPendingFrames>
         )0x0) {
      pFVar15 = ::FName::FName(&local_90,"QSTAT_CacheFlushPendingFrames");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_QSTAT_CacheFlushPendingFrames,*pFVar15,
                 L"QSTAT_CacheFlushPendingFrames","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_QSTAT_CacheFlushPendingFrames;
  if (StatPtr_QSTAT_CacheFlushPendingFrames ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UChaosCache::FlushPendingFrames(void)_::_2_::FStat_QSTAT_CacheFlushPendingFrames>
       )0x0) {
    pFVar15 = ::FName::FName(&local_88,"QSTAT_CacheFlushPendingFrames");
    FVar16 = (FThreadSafeStaticStat<_public:_void___cdecl_UChaosCache::FlushPendingFrames(void)_::_2_::FStat_QSTAT_CacheFlushPendingFrames>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_QSTAT_CacheFlushPendingFrames,
                          *pFVar15,L"QSTAT_CacheFlushPendingFrames","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar4 = false;
  bVar6 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar10 = false;
  bVar12 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_14daf5c3c:
    bVar6 = bVar12;
    bVar4 = bVar10;
    bVar10 = false;
    FVar23 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_158.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_158._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar4 = false;
      bVar6 = true;
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148[0].ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_148[0].Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_148,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                   ,0x158);
        bVar4 = true;
        bVar6 = true;
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14daf5c3c;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar10 = true;
  }
  if ((((this->PendingWrites).Tail)->NextNode == (TNode *)0x0) ||
     (((this->PendingWrites).Tail)->NextNode == (TNode *)0xfffffffffffffff8)) {
LAB_14daf5d74:
    bVar12 = FlushPendingFrames_MainPass<0>(this,&this->PendingWrites,false);
  }
  else {
    if (((this->PendingWrites).Tail)->NextNode == (TNode *)0x0) {
      piVar19 = (int *)&DAT_00000010;
    }
    else {
      piVar19 = &(((this->PendingWrites).Tail)->NextNode->Item).PendingParticleData.ArrayNum;
    }
    if (*piVar19 != 0) goto LAB_14daf5d74;
    if (((this->PendingWrites).Tail)->NextNode == (TNode *)0x0) {
      piVar19 = (int *)&DAT_00000080;
    }
    else {
      piVar19 = &(((this->PendingWrites).Tail)->NextNode->Item).PendingChannelsIndices.ArrayNum;
    }
    if (*piVar19 < 1) goto LAB_14daf5d74;
    local_res20[0] = false;
    pTVar17 = ::operator_new(0x130);
    local_138.Head = pTVar24;
    if (pTVar17 != (TNode *)0x0) {
      memset(pTVar17,0,0x130);
      pTVar17->NextNode = (TNode *)0x0;
      FPendingFrameWrite::FPendingFrameWrite(&pTVar17->Item);
      local_138.Head = pTVar17;
    }
    local_138.Tail = local_138.Head;
    FlushPendingFrames_ChannelOnlyReservePass(this,&local_138,local_res20);
    bVar12 = FlushPendingFrames_MainPass<1>(this,&local_138,local_res20[0]);
    pTVar17 = local_138.Tail;
    if (local_138.Tail != (TNode *)0x0) {
      do {
        pTVar2 = pTVar17->NextNode;
        if (pTVar17 != (TNode *)0x0) {
          FPendingFrameWrite::~FPendingFrameWrite(&pTVar17->Item);
          ::operator_delete(pTVar17,0x130);
        }
        pTVar17 = pTVar2;
      } while (pTVar2 != (TNode *)0x0);
      local_138.Tail = (TNode *)0x0;
      FVar21 = local_160;
    }
  }
  if (bVar12 == false) goto LAB_14daf61e0;
  if ((*(int *)((longlong)FVar21 + 0x9d4c) < ::_TSS1) &&
     (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_QSTAT_CacheCalcDuration ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UChaosCache::FlushPendingFrames(void)_::_10_::FStat_QSTAT_CacheCalcDuration>
         )0x0) {
      pFVar15 = ::FName::FName(&local_80,"QSTAT_CacheCalcDuration");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_QSTAT_CacheCalcDuration,*pFVar15,
                 L"QSTAT_CacheCalcDuration","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    else {
      _Init_thread_footer(&::_TSS1);
    }
  }
  FVar18 = StatPtr_QSTAT_CacheCalcDuration;
  if (StatPtr_QSTAT_CacheCalcDuration ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UChaosCache::FlushPendingFrames(void)_::_10_::FStat_QSTAT_CacheCalcDuration>
       )0x0) {
    pFVar15 = ::FName::FName(local_78,"QSTAT_CacheCalcDuration");
    FVar18 = (FThreadSafeStaticStat<_public:_void___cdecl_UChaosCache::FlushPendingFrames(void)_::_10_::FStat_QSTAT_CacheCalcDuration>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_QSTAT_CacheCalcDuration,*pFVar15,
                          L"QSTAT_CacheCalcDuration","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar18;
  bVar5 = false;
  bVar12 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  bVar13 = false;
  bVar11 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_14daf5eee:
    bVar5 = bVar13;
    bVar12 = bVar11;
    bVar11 = false;
    FVar21 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_154.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_154._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar5 = false;
      bVar12 = true;
      bVar13 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_160 = FVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_160,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                   ,0x16b);
        bVar5 = true;
        bVar12 = true;
        bVar13 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14daf5eee;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar11 = true;
  }
  iVar22 = (this->ParticleTracks).ArrayNum;
  this_00 = (FParticleTransformTrack *)(this->ParticleTracks).AllocatorInstance.Data;
  pFVar28 = (FParticleTransformTrack *)((longlong)this_00 + (longlong)iVar22 * 0x98);
  fVar33 = __real_ff7fffff;
  fVar32 = __real_7f7fffff;
  while( true ) {
    if ((this->ParticleTracks).ArrayNum != iVar22) {
      local_168 = 0;
      `TCheckedPointerIterator<FPerParticleCacheData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_168);
    }
    if (this_00 == pFVar28) break;
    if ((this_00->KeyTimestamps).ArrayNum < 1) {
      fVar31 = 0.0;
    }
    else {
      fVar31 = *(float *)(this_00->KeyTimestamps).AllocatorInstance.Data;
    }
    if (fVar32 <= fVar31) {
      fVar31 = fVar32;
    }
    fVar32 = FParticleTransformTrack::GetEndTime(this_00);
    if (fVar32 <= fVar33) {
      fVar32 = fVar33;
    }
    this_00 = (FParticleTransformTrack *)&this_00[2].RawTransformTrack.PosKeys.ArrayNum;
    fVar33 = fVar32;
    fVar32 = fVar31;
  }
  local_f8 = &(this->ChannelsTracks).field_0x10;
  uStack_fc = 1;
  uVar30 = *(uint *)&(this->ChannelsTracks).field_0x28;
  local_108 = &this->ChannelsTracks;
  local_e8 = 0;
  uStack_ec = local_e8;
  if (uVar30 != 0) {
    puVar26 = *(uint **)&(this->ChannelsTracks).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)local_f8;
    }
    uVar14 = *puVar26;
    pTVar17 = pTVar24;
    local_e8 = 0;
    uVar29 = 0;
    while (uVar14 == 0) {
      iVar22 = (int)pTVar17;
      local_e8 = (int)pTVar24 + 0x20;
      pTVar24 = (TNode *)(ulonglong)local_e8;
      uVar29 = iVar22 + 1;
      pTVar17 = (TNode *)(ulonglong)uVar29;
      uStack_ec = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
      goto LAB_14daf5fef;
      uVar14 = puVar26[(longlong)iVar22 + 1];
    }
    uStack_fc = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_fc * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_d8 = (int)lVar20;
    uStack_ec = local_d8 + -1 + local_e8;
    if ((int)uVar30 < (int)uStack_ec) {
      uStack_ec = uVar30;
    }
  }
LAB_14daf5fef:
  iStack_e0 = *(int *)&(this->ChannelsTracks).field_0x8 - *(int *)&(this->ChannelsTracks).field_0x34
  ;
  uVar14 = *(uint *)&(this->ChannelsTracks).field_0x28;
  TStack_b8._padding_ = CONCAT44(uStack_fc,uVar29);
  uStack_f0 = 0xffffffff;
  uVar27 = uVar14 & 0xffffffe0;
  TStack_b8.CurrentBitIndex = uStack_ec;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar14 >> 5;
  TStack_b8._28_4_ = uStack_ec;
  TStack_b8.BaseBitIndex = local_e8;
  uStack_98 = CONCAT44(uStack_dc,iStack_e0);
  uStack_100 = uVar29;
  uStack_e4 = uStack_ec;
  local_d0 = (TBitArray<FDefaultBitArrayAllocator> *)local_f8;
  local_c8 = local_108;
  local_c0 = local_108;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f8;
  if ((((int)uVar14 < 0) || ((int)uVar30 < (int)uVar14)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar8 = local_c8;
  pTVar7 = local_d0;
  uVar29 = *(uint *)&(this->ChannelsTracks).field_0x28;
  if (uVar14 != uVar29) {
    puVar25 = *(undefined1 **)&(this->ChannelsTracks).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = &(this->ChannelsTracks).field_0x10;
    }
    uVar30 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar22 * 4);
    while (uVar30 == 0) {
      lVar20 = (longlong)iVar22;
      uVar27 = uVar27 + 0x20;
      iVar22 = iVar22 + 1;
      uVar14 = uVar29;
      if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_14daf6110;
      uVar30 = *(uint *)(puVar25 + lVar20 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar14 = (uVar27 - 1) + (int)lVar20;
    if ((int)uVar29 < (int)uVar14) {
      uVar14 = uVar29;
    }
  }
LAB_14daf6110:
  while( true ) {
    pTVar9 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
    }
    if (((TStack_b8.CurrentBitIndex == uVar14) && (TStack_b8.Array == pTVar7)) && (pTVar9 == pTVar8)
       ) break;
    lVar20 = *(longlong *)pTVar9;
    fVar34 = fVar33;
    fVar31 = fVar32;
    if (0 < *(int *)((longlong)TStack_b8.CurrentBitIndex * 0x20 + 0x10 + lVar20)) {
      FRichCurve::GetTimeRange
                (*(FRichCurve **)((longlong)TStack_b8.CurrentBitIndex * 0x20 + 8 + lVar20),
                 &local_150,&local_14c);
      fVar31 = local_150;
      if (fVar32 <= local_150) {
        fVar31 = fVar32;
      }
      fVar34 = local_14c;
      if (local_14c <= fVar33) {
        fVar34 = fVar33;
      }
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    fVar33 = fVar34;
    fVar32 = fVar31;
  }
  this->RecordedDuration = fVar33 - fVar32;
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
LAB_14daf61e0:
  if (((this->ParticleTracks).ArrayNum == 0) &&
     (*(int *)&(this->ChannelsTracks).field_0x8 == *(int *)&(this->ChannelsTracks).field_0x34)) {
    if (this->MinTime < this->MaxTime) {
      this->RecordedDuration = this->MaxTime - this->MinTime;
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// FlushPendingFrames_ChannelOnlyReservePass @ 14daf63d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UChaosCache::FlushPendingFrames_ChannelOnlyReservePass
          (UChaosCache *this,TQueue<FPendingFrameWrite,1> *param_1,bool *param_2)

{
  TMap<FName,FRichCurves,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>_>
  *this_00;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  TNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  UChaosCache *pUVar8;
  bool *pbVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_private:_void___cdecl_UChaosCache::FlushPendingFrames_ChannelOnlyReservePass(TQueue<FPendingFrameWrite,1>_&,bool_&)_::_4_::FStat_QSTAT_CacheFlushSingleFrameReservePass>
  FVar16;
  TNode *pTVar17;
  byte bVar18;
  longlong lVar19;
  int *piVar20;
  ForElementType<FSetElementId> FVar21;
  undefined1 *puVar22;
  FNameEntryId FVar23;
  FName FVar24;
  FRichCurve *this_01;
  int iVar25;
  longlong *plVar26;
  FRichCurve *pFVar27;
  uint uVar28;
  uint uVar29;
  TArray<FRichCurve,TSizedDefaultAllocator<32>_> *this_02;
  uint *puVar30;
  longlong lVar31;
  uint uVar32;
  undefined8 uVar33;
  undefined1 auStackY_3a8 [32];
  uint local_344;
  undefined1 local_340;
  undefined1 local_33f;
  undefined1 local_33e [2];
  FColor_u_0 local_33c;
  TKeyInitializer<FName_const_&> local_338;
  TKeyInitializer<FName_const_&> local_330;
  UChaosCache *local_328;
  longlong *local_320;
  uint uStack_318;
  uint uStack_314;
  TBitArray<FDefaultBitArrayAllocator> *local_310;
  undefined4 uStack_308;
  uint uStack_304;
  uint local_300;
  undefined4 uStack_2fc;
  int iStack_2f8;
  undefined4 uStack_2f4;
  FName local_2f0;
  FName local_2e8;
  uint local_2e0;
  uint uStack_2dc;
  TQueue<FPendingFrameWrite,1> *local_2d8;
  undefined8 local_2d0;
  FName local_2c8;
  int local_2b8;
  int local_2b4;
  TPairInitializer<int_const_&,int_const_&> local_2b0;
  bool *local_2a0;
  longlong local_298;
  int local_290;
  longlong *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  longlong *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_250;
  undefined8 uStack_230;
  uint *local_228;
  undefined1 *local_220;
  FName local_218;
  FName local_210 [4];
  undefined4 local_1ec;
  undefined4 local_1cc;
  undefined1 local_1c8 [32];
  uint *local_1a8;
  uint local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  int local_194;
  undefined1 local_190 [8];
  ForElementType<FSetElementId> local_188;
  int local_180;
  undefined1 local_178 [168];
  uint *local_d0;
  uint local_c8;
  undefined8 uStack_c0;
  int iStack_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  TMap<FName,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>_>
  local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_1c8._0_8_ = 0;
  local_1c8._8_8_ = 0;
  local_1a8 = (uint *)0x0;
  local_1a0 = 0;
  local_194 = 0;
  local_188 = (ForElementType<FSetElementId>)0x0;
  local_180 = 0;
  local_178._8_8_ = (FScriptContainerElement *)0x0;
  local_178._16_4_ = 0;
  local_178._20_4_ = 0;
  local_178._24_8_ = (FScriptContainerElement *)0x0;
  local_178._32_4_ = 0;
  local_178._36_4_ = 0;
  local_178._40_8_ = 0;
  local_178._48_8_ = 0;
  local_178._72_8_ = 0;
  local_178._80_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_178._88_8_ = _UNK_150631d98;
  local_178._104_8_ = 0;
  local_178._112_4_ = 0;
  local_178._120_8_ = (FScriptContainerElement *)0x0;
  local_178._128_4_ = 0;
  local_178._132_4_ = 0;
  local_178._136_8_ = 0;
  local_178._144_8_ = 0;
  local_d0 = (uint *)0x0;
  _local_c8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_c0 = _UNK_150631d98;
  local_b0 = 0;
  local_a8 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a0._32_8_ = 0;
  local_a0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_a0._48_8_ = _UNK_150631d98;
  local_a0._64_8_ = 0;
  local_a0._72_4_ = 0;
  *param_2 = true;
  local_19c = 0x80;
  local_198 = 0xffffffff;
  local_328 = this;
  local_2d8 = param_1;
  local_2a0 = param_2;
  bVar12 = TQueue<FPendingFrameWrite,0>::Dequeue
                     (&this->PendingWrites,(FPendingFrameWrite *)local_178);
  uVar33 = 1;
  local_2d0 = 1;
  uVar28 = 1;
  if (bVar12) {
    do {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_QSTAT_CacheFlushSingleFrameReservePass =
             (FThreadSafeStaticStat<_private:_void___cdecl_UChaosCache::FlushPendingFrames_ChannelOnlyReservePass(TQueue<FPendingFrameWrite,1>_&,bool_&)_::_4_::FStat_QSTAT_CacheFlushSingleFrameReservePass>
              )0x0;
        pFVar15 = ::FName::FName(&local_218,"QSTAT_CacheFlushSingleFrameReservePass");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_QSTAT_CacheFlushSingleFrameReservePass,
                   *pFVar15,L"QSTAT_CacheFlushSingleFrameReservePass","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      FVar16 = StatPtr_QSTAT_CacheFlushSingleFrameReservePass;
      if (StatPtr_QSTAT_CacheFlushSingleFrameReservePass ==
          (FThreadSafeStaticStat<_private:_void___cdecl_UChaosCache::FlushPendingFrames_ChannelOnlyReservePass(TQueue<FPendingFrameWrite,1>_&,bool_&)_::_4_::FStat_QSTAT_CacheFlushSingleFrameReservePass>
           )0x0) {
        pFVar15 = ::FName::FName(local_210,"QSTAT_CacheFlushSingleFrameReservePass");
        FVar16 = (FThreadSafeStaticStat<_private:_void___cdecl_UChaosCache::FlushPendingFrames_ChannelOnlyReservePass(TQueue<FPendingFrameWrite,1>_&,bool_&)_::_4_::FStat_QSTAT_CacheFlushSingleFrameReservePass>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_QSTAT_CacheFlushSingleFrameReservePass,*pFVar15,
                              L"QSTAT_CacheFlushSingleFrameReservePass","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar24 = *(FName *)FVar16;
      bVar12 = false;
      bVar7 = false;
      local_2c8.ComparisonIndex.Value = 0;
      local_2c8.Number = 0;
      bVar11 = false;
      bVar13 = false;
      FVar23 = FVar24.ComparisonIndex.Value;
      uVar28 = FVar24.Number;
      if ((FVar23.Value == 0) && (uVar28 == 0)) {
LAB_14daf672c:
        bVar7 = bVar13;
        bVar12 = bVar11;
        bVar11 = false;
        local_2f0 = local_2c8;
        FVar24 = local_2c8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_33c.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_33c._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
          bVar12 = false;
          bVar7 = true;
          bVar11 = false;
          bVar13 = true;
          if (-1 < CpuChannel->Enabled) {
            local_2e8.ComparisonIndex.Value = FVar23.Value;
            local_2e8.Number = uVar28;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_2e8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                       ,0x85);
            bVar12 = true;
            bVar7 = true;
            bVar11 = true;
            bVar13 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14daf672c;
        local_2f0 = FVar24;
        local_2e0 = FVar23.Value;
        uStack_2dc = uVar28;
        local_2c8 = FVar24;
        FThreadStats::AddMessage(FVar24,CycleScopeStart);
        bVar11 = true;
      }
      if ((int)local_178._16_4_ < 1) {
        uVar28 = local_c8;
        uVar10 = local_178._128_4_;
        lVar31 = (longlong)(int)local_178._128_4_;
        uStack_314 = (uint)uVar33;
        uStack_318 = 0;
        local_300 = 0;
        uStack_304 = 0;
        if (local_c8 != 0) {
          puVar30 = (uint *)(local_178 + 0x98);
          if (local_d0 != (uint *)0x0) {
            puVar30 = local_d0;
          }
          uVar32 = *puVar30;
          local_300 = 0;
          while (uVar32 == 0) {
            lVar19 = (longlong)(int)uStack_318;
            local_300 = local_300 + 0x20;
            uStack_318 = uStack_318 + 1;
            uStack_304 = local_c8;
            if ((int)((local_c8 - 1) + ((int)(local_c8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_318
               ) goto LAB_14daf67d0;
            uVar32 = puVar30[lVar19 + 1];
          }
          uStack_314 = -uVar32 & uVar32;
          uVar2 = (ulonglong)uStack_314 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_2b8 = (int)lVar19;
          uStack_304 = local_300 + -1 + local_2b8;
          if ((int)local_c8 < (int)uStack_304) {
            uStack_304 = local_c8;
          }
        }
LAB_14daf67d0:
        local_320 = (longlong *)(local_178 + 0x88);
        uStack_2fc = local_1ec;
        local_310 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x98);
        uVar32 = local_c8 & 0xffffffe0;
        iStack_2f8 = local_178._144_4_ - iStack_bc;
        uStack_308 = 0xffffffff;
        TStack_280.CurrentBitIndex = uStack_304;
        TStack_280.UnvisitedBitMask = 0xffffffff;
        TStack_280._padding_ = CONCAT44(uStack_314,uStack_318);
        iVar25 = (int)local_c8 >> 5;
        TStack_280._28_4_ = local_1ec;
        TStack_280.BaseBitIndex = local_300;
        uStack_260 = CONCAT44(uStack_2f4,iStack_2f8);
        bVar18 = (byte)_local_c8;
        local_288 = local_320;
        TStack_280.Array = local_310;
        if ((int)local_c8 < 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L"");
          if (bVar13) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (uVar28 != local_c8) {
          puVar30 = (uint *)(local_178 + 0x98);
          if (local_d0 != (uint *)0x0) {
            puVar30 = local_d0;
          }
          uVar28 = -1 << (bVar18 & 0x1f) & puVar30[iVar25];
          while (uVar28 == 0) {
            lVar19 = (longlong)iVar25;
            uVar32 = uVar32 + 0x20;
            iVar25 = iVar25 + 1;
            uVar28 = local_c8;
            if ((int)((local_c8 - 1) + ((int)(local_c8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
            goto LAB_14daf68e5;
            uVar28 = puVar30[lVar19 + 1];
          }
          uVar2 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_2b4 = (int)lVar19;
          uVar28 = local_2b4 + -1 + uVar32;
          if ((int)local_c8 < (int)uVar28) {
            uVar28 = local_c8;
          }
        }
LAB_14daf68e5:
        while( true ) {
          plVar26 = local_288;
          if ((int)local_288[1] - *(int *)((longlong)local_288 + 0x34) != (int)uStack_260) {
            local_340 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_340);
          }
          pbVar9 = local_2a0;
          this = local_328;
          if (((TStack_280.CurrentBitIndex == uVar28) &&
              (TStack_280.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x98))) &&
             (plVar26 == (longlong *)(local_178 + 0x88))) break;
          plVar26 = (longlong *)((longlong)TStack_280.CurrentBitIndex * 0x20 + *plVar26);
          lVar19 = *plVar26;
          uVar32 = ::GetTypeHash((FNameEntryId)(uint)lVar19);
          if (local_1c8._8_4_ != local_194) {
            FVar21 = (ForElementType<FSetElementId>)local_190;
            if (local_188 != (ForElementType<FSetElementId>)0x0) {
              FVar21 = local_188;
            }
            iVar25 = *(int *)((longlong)FVar21 +
                             (ulonglong)(local_180 - 1U & (int)((ulonglong)lVar19 >> 0x20) + uVar32)
                             * 4);
            while (iVar25 != -1) {
              lVar1 = local_1c8._0_8_ + (longlong)iVar25 * 0x14;
              if (*(longlong *)(local_1c8._0_8_ + (longlong)iVar25 * 0x14) == lVar19) {
                piVar20 = (int *)(lVar1 + 8);
                if (lVar1 == 0) {
                  piVar20 = (int *)0x0;
                }
                if (piVar20 != (int *)0x0) goto LAB_14daf6a01;
                break;
              }
              iVar25 = *(int *)(lVar1 + 0xc);
            }
          }
          local_2b0.Value = (int *)plVar26;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TKeyInitializer<FName_const_&>_>
                    ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)local_1c8,&local_338,(bool *)&local_2b0.Value);
          lVar19 = (longlong)(int)local_338.Key * 5 + 2;
          *(undefined4 *)(local_1c8._0_8_ + lVar19 * 4) = 0;
          piVar20 = (int *)(local_1c8._0_8_ + lVar19 * 4);
LAB_14daf6a01:
          *piVar20 = *piVar20 + 1;
          TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
        }
        uVar28 = 0;
        lVar19 = 0;
        FVar24 = local_2f0;
        param_1 = local_2d8;
        uVar33 = local_2d0;
        if (0 < (int)uVar10) {
          do {
            uVar32 = 0;
            if ((int)uVar28 < (int)local_178._128_4_) {
              uVar32 = ~uVar28 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_344 = *(uint *)(local_178._120_8_ + lVar19 * 4);
            if ((*pbVar9 != false) && ((int)uVar28 < (this->ChannelCurveToParticle).ArrayNum)) {
              if (((int)uVar28 < 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *pbVar9 = *(uint *)((this->ChannelCurveToParticle).AllocatorInstance.Data + lVar19 * 4
                                 ) == local_344;
            }
            if (*(int *)&(this->ParticleToChannelCurve).field_0x8 !=
                *(int *)&(this->ParticleToChannelCurve).field_0x34) {
              puVar3 = *(undefined1 **)&(this->ParticleToChannelCurve).field_0x40;
              puVar22 = &(this->ParticleToChannelCurve).field_0x38;
              if (puVar3 != (undefined1 *)0x0) {
                puVar22 = puVar3;
              }
              iVar25 = *(int *)(puVar22 +
                               (ulonglong)
                               (*(int *)&(this->ParticleToChannelCurve).field_0x48 - 1U & local_344)
                               * 4);
              if (iVar25 != -1) {
                do {
                  if (*(uint *)(*(longlong *)&this->ParticleToChannelCurve + (longlong)iVar25 * 0x10
                               ) == local_344) goto LAB_14daf6c32;
                  iVar25 = *(int *)(*(longlong *)&this->ParticleToChannelCurve + 8 +
                                   (longlong)iVar25 * 0x10);
                } while (iVar25 != -1);
              }
            }
            pFVar4 = (this->ChannelCurveToParticle).AllocatorInstance.Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_344) &&
                ((FScriptContainerElement *)&local_344 <
                 pFVar4 + (longlong)(this->ChannelCurveToParticle).ArrayMax * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar25 = (this->ChannelCurveToParticle).ArrayNum;
            if (iVar25 == (this->ChannelCurveToParticle).ArrayMax) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&(this->ChannelCurveToParticle).AllocatorInstance,
                                  &(this->ChannelCurveToParticle).ArrayMax);
            }
            (this->ChannelCurveToParticle).ArrayNum = iVar25 + 1;
            *(uint *)((this->ChannelCurveToParticle).AllocatorInstance.Data + (longlong)iVar25 * 4)
                 = local_344;
            local_228 = &local_344;
            local_220 = (undefined1 *)((longlong)&local_338.Key + 4);
            local_338.Key._4_4_ = iVar25;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)&this->ParticleToChannelCurve,&local_2b0,(bool *)&local_228);
LAB_14daf6c32:
            uVar28 = uVar28 + 1;
            lVar19 = lVar19 + 1;
            FVar24 = local_2f0;
            param_1 = local_2d8;
            uVar33 = local_2d0;
          } while (lVar19 < lVar31);
        }
      }
      pTVar17 = ::operator_new(0x130);
      if (pTVar17 != (TNode *)0x0) {
        pTVar17->NextNode = (TNode *)0x0;
        FPendingFrameWrite::FPendingFrameWrite(&pTVar17->Item,(FPendingFrameWrite *)local_178);
        pTVar5 = param_1->Head;
        param_1->Head = pTVar17;
        pTVar5->NextNode = pTVar17;
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FThreadStats::AddMessage(FVar24,CycleScopeEnd);
      }
      bVar12 = TQueue<FPendingFrameWrite,0>::Dequeue
                         (&this->PendingWrites,(FPendingFrameWrite *)local_178);
      uVar28 = (uint)uVar33;
    } while (bVar12);
  }
  uStack_314 = uVar28;
  uVar32 = local_1a0;
  uStack_318 = 0;
  uVar28 = (this->ChannelCurveToParticle).ArrayNum;
  local_300 = 0;
  uStack_304 = uStack_318;
  if (local_1a0 != 0) {
    puVar30 = (uint *)(local_1c8 + 0x10);
    if (local_1a8 != (uint *)0x0) {
      puVar30 = local_1a8;
    }
    uVar29 = *puVar30;
    local_300 = 0;
    uStack_318 = 0;
    while (uVar29 == 0) {
      lVar31 = (longlong)(int)uStack_318;
      local_300 = local_300 + 0x20;
      uStack_318 = uStack_318 + 1;
      uStack_304 = local_1a0;
      if ((int)((local_1a0 - 1) + ((int)(local_1a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_318)
      goto LAB_14daf6d81;
      uVar29 = (puVar30 + 1)[lVar31];
    }
    uStack_314 = -uVar29 & uVar29;
    uVar2 = (ulonglong)uStack_314 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_2b0.Key._4_4_ = (int)lVar31;
    uStack_304 = local_2b0.Key._4_4_ + -1 + local_300;
    if ((int)local_1a0 < (int)uStack_304) {
      uStack_304 = local_1a0;
    }
  }
LAB_14daf6d81:
  local_320 = (longlong *)local_1c8;
  uStack_2fc = local_1cc;
  local_310 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1c8 + 0x10);
  uVar29 = local_1a0 & 0xffffffe0;
  iStack_2f8 = local_1c8._8_4_ - local_194;
  uStack_308 = 0xffffffff;
  TStack_250.CurrentBitIndex = uStack_304;
  TStack_250.UnvisitedBitMask = 0xffffffff;
  TStack_250._padding_ = CONCAT44(uStack_314,uStack_318);
  iVar25 = (int)local_1a0 >> 5;
  TStack_250._28_4_ = local_1cc;
  TStack_250.BaseBitIndex = local_300;
  uStack_230 = CONCAT44(uStack_2f4,iStack_2f8);
  bVar18 = (byte)local_1a0;
  local_258 = local_320;
  TStack_250.Array = local_310;
  if (((int)local_1a0 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar32 != local_1a0) {
    puVar30 = (uint *)(local_1c8 + 0x10);
    if (local_1a8 != (uint *)0x0) {
      puVar30 = local_1a8;
    }
    uVar32 = -1 << (bVar18 & 0x1f) & puVar30[iVar25];
    while (uVar32 == 0) {
      lVar31 = (longlong)iVar25;
      uVar29 = uVar29 + 0x20;
      iVar25 = iVar25 + 1;
      uVar32 = local_1a0;
      if ((int)((local_1a0 - 1) + ((int)(local_1a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_14daf6eb0;
      uVar32 = (puVar30 + 1)[lVar31];
    }
    uVar2 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar31 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_290 = (int)lVar31;
    uVar32 = (uVar29 - 1) + local_290;
    if ((int)local_1a0 < (int)uVar32) {
      uVar32 = local_1a0;
    }
  }
LAB_14daf6eb0:
  do {
    plVar26 = local_258;
    if ((int)local_258[1] - *(int *)((longlong)local_258 + 0x34) != (int)uStack_230) {
      local_33f = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_33f);
    }
    pUVar8 = local_328;
    if (((TStack_250.CurrentBitIndex == uVar32) &&
        (TStack_250.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1c8 + 0x10))) &&
       (plVar26 == (longlong *)local_1c8)) {
      FPendingFrameWrite::~FPendingFrameWrite((FPendingFrameWrite *)local_178);
      local_180 = 0;
      if (local_188 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_188);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1c8);
      return;
    }
    lVar31 = *plVar26;
    lVar19 = *(longlong *)(lVar31 + (longlong)TStack_250.CurrentBitIndex * 0x14);
    this_00 = &local_328->ChannelsTracks;
    lVar31 = lVar31 + (longlong)TStack_250.CurrentBitIndex * 0x14;
    uVar29 = ::GetTypeHash((FNameEntryId)(uint)lVar19);
    if (*(int *)&(pUVar8->ChannelsTracks).field_0x8 != *(int *)&(pUVar8->ChannelsTracks).field_0x34)
    {
      puVar3 = *(undefined1 **)&(pUVar8->ChannelsTracks).field_0x40;
      puVar22 = &(pUVar8->ChannelsTracks).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar22 = puVar3;
      }
      iVar25 = *(int *)(puVar22 +
                       (ulonglong)
                       (*(int *)&(pUVar8->ChannelsTracks).field_0x48 - 1U &
                       (int)((ulonglong)lVar19 >> 0x20) + uVar29) * 4);
      if (iVar25 != -1) {
        do {
          plVar26 = (longlong *)((longlong)iVar25 * 0x20 + *(longlong *)&this_00->field_0x0);
          if (*plVar26 == lVar19) {
            this_02 = (TArray<FRichCurve,TSizedDefaultAllocator<32>_> *)(plVar26 + 1);
            if (plVar26 == (longlong *)0x0) {
              this_02 = (TArray<FRichCurve,TSizedDefaultAllocator<32>_> *)0x0;
            }
            if (this_02 != (TArray<FRichCurve,TSizedDefaultAllocator<32>_> *)0x0)
            goto LAB_14daf7094;
            break;
          }
          iVar25 = (int)plVar26[3];
        } while (iVar25 != -1);
      }
    }
    local_298 = lVar31;
    TSet<TTuple<FName,FRichCurves>,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FName_const_&>_>
              ((TSet<TTuple<FName,FRichCurves>,TDefaultMapHashableKeyFuncs<FName,FRichCurves,0>,FDefaultSetAllocator>
                *)this_00,&local_330,(bool *)&local_298);
    this_02 = (TArray<FRichCurve,TSizedDefaultAllocator<32>_> *)
              (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_330.Key * 0x20 + 8);
    iVar25 = this_02->ArrayNum;
    if (iVar25 < (int)uVar28) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x80,8,uVar28 - iVar25,(ForAnyElementType *)this_02,&this_02->ArrayNum,
                          &this_02->ArrayMax);
      DefaultConstructItems<FRichCurve,int>
                ((this_02->AllocatorInstance).Data + (longlong)iVar14 * 0x80,uVar28 - iVar25);
    }
    else {
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
      }
      if ((int)uVar28 < iVar25) {
        uVar29 = iVar25 - uVar28;
        if (((int)(uVar29 | uVar28) < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar29 != 0) {
          TArray<FRichCurve,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_02,uVar28,uVar29);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,(ForAnyElementType *)this_02,this_02->ArrayNum,&this_02->ArrayMax);
        }
      }
    }
LAB_14daf7094:
    iVar25 = this_02->ArrayNum;
    this_01 = (FRichCurve *)(this_02->AllocatorInstance).Data;
    pFVar27 = this_01 + iVar25;
    while( true ) {
      if (this_02->ArrayNum != iVar25) {
        local_33e[0] = 0;
        `TCheckedPointerIterator<FRichCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_33e);
      }
      if (this_01 == pFVar27) break;
      FRichCurve::ReserveKeys(this_01,(this_01->Keys).ArrayNum + *(int *)(lVar31 + 8));
      this_01 = this_01 + 1;
    }
    TStack_250.UnvisitedBitMask = TStack_250.UnvisitedBitMask & ~TStack_250._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_250);
  } while( true );
}

// GetDuration @ 14daf7e30

float __thiscall UChaosCache::GetDuration(UChaosCache *this)

{
  return this->RecordedDuration;
}

// GetPrivateStaticClass @ 14daf8480

UClass * __cdecl UChaosCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCache",
               &Z_Registration_Info_UClass_UChaosCache.InnerSingleton,
               StaticRegisterNativesUChaosCache,0x390,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosCache>,InternalVTableHelperCtorCaller<UChaosCache>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosCache.InnerSingleton;
}

// GetSpawnableTemplate @ 14daf8900

FCacheSpawnableTemplate * __thiscall UChaosCache::GetSpawnableTemplate(UChaosCache *this)

{
  return &this->Spawnable;
}

// PostLoad @ 14dafe840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UChaosCache::PostLoad(UChaosCache *this)

{
  UObject *pUVar1;
  FManagedArrayCollection *this_00;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  FName FVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  FName *pFVar14;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  TReferenceControllerBase<1> *pTVar20;
  uint uVar21;
  TTransform<double> *this_01;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  uint uVar54;
  uint uVar55;
  undefined1 auStackY_2c8 [32];
  uint local_298;
  uint local_294;
  int local_290;
  longlong local_288;
  longlong local_280;
  int local_278;
  int iStack_274;
  float local_270;
  TPairInitializer<int_const_&,int_const_&> local_268;
  UChaosCache *local_258;
  TManagedArray<UE::Math::TTransform<double>_> *local_250;
  longlong local_248;
  TReferenceControllerBase<1> *local_240;
  FScriptContainerElement *local_228;
  uint *local_220;
  TTransform<double> local_218;
  FName local_1b8;
  FName local_1b0;
  ulong64 local_1a8;
  ulong64 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined1 local_180 [16];
  undefined8 local_170;
  __m128 local_168;
  undefined1 local_158 [16];
  __m128 local_148;
  __m128 local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  __m128 local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  undefined7 extraout_var;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_258 = this;
  if ((this->bStripMassToLocal != false) &&
     (pUVar1 = (this->Spawnable).DuplicatedTemplate.field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0))
  {
    pUVar13 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
    iVar12 = (int)pUVar13->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38)) &&
       (((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
         &pUVar13->_padding_ && (lVar19 = *(longlong *)(pUVar1 + 0x24), lVar19 != 0)))) {
      this_00 = *(FManagedArrayCollection **)(lVar19 + 0x278);
      pTVar20 = *(TReferenceControllerBase<1> **)(lVar19 + 0x280);
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_240 = pTVar20;
      if ((this_00 == (FManagedArrayCollection *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar8 = FTransformCollection::TransformGroup;
      pFVar14 = ::FName::FName(&local_1b8,L"MassToLocal");
      bVar10 = FManagedArrayCollection::HasAttribute(this_00,*pFVar14,FVar8);
      if (bVar10) {
        if ((this_00 == (FManagedArrayCollection *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar8 = FTransformCollection::TransformGroup;
        pFVar14 = ::FName::FName(&local_1b0,L"MassToLocal");
        pTVar15 = FManagedArrayCollection::GetAttribute<UE::Math::TTransform<double>_>
                            (this_00,*pFVar14,FVar8);
        iVar12 = (this->TrackToParticle).ArrayNum;
        local_250 = pTVar15;
        local_290 = (**(code **)(*(longlong *)pTVar15 + 0x60))(pTVar15);
        local_294 = 0;
        local_280 = 0;
        local_248 = (longlong)iVar12;
        if (0 < iVar12) {
          fVar26 = GlobalVectorConstants::SmallNumber.m128_f32[0];
          fVar27 = GlobalVectorConstants::SmallNumber.m128_f32[1];
          fVar28 = GlobalVectorConstants::SmallNumber.m128_f32[2];
          fVar29 = GlobalVectorConstants::SmallNumber.m128_f32[3];
          lVar19 = 0;
          uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          uVar41 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar45 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar49 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar53 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar54 = _UNK_15061cc88;
          uVar55 = _UNK_15061cc8c;
          do {
            lVar22 = local_280;
            uVar24 = local_294;
            uVar21 = ~local_294;
            uVar18 = 0;
            if ((int)local_294 < (this->TrackToParticle).ArrayNum) {
              uVar18 = uVar21 >> 0x1f;
            }
            if (uVar18 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
              uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
              uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
              uVar53 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
              uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
              uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
              uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
              uVar49 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
              uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
              uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
              uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
              uVar45 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
              uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
              uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
              uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
              uVar41 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
              uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
              uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
              uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
              uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
              uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
              uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
              uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
              uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
              fVar26 = GlobalVectorConstants::SmallNumber.m128_f32[0];
              fVar27 = GlobalVectorConstants::SmallNumber.m128_f32[1];
              fVar28 = GlobalVectorConstants::SmallNumber.m128_f32[2];
              fVar29 = GlobalVectorConstants::SmallNumber.m128_f32[3];
            }
            uVar18 = *(uint *)((this->TrackToParticle).AllocatorInstance.Data + lVar22 * 4);
            if ((int)uVar18 < local_290) {
              uVar16 = ~uVar18 >> 0x1f;
              uVar11 = 0;
              if ((int)uVar18 < *(int *)&pTVar15->field_0x18) {
                uVar11 = uVar16;
              }
              if (uVar11 == 0) {
                uVar16 = 0x506106c8;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar11 = (uint)CONCAT71(extraout_var,bVar10);
                if (bVar10) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
                uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
                uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
                uVar53 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
                uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar49 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                uVar45 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                uVar41 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                fVar26 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                fVar27 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                fVar28 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                fVar29 = GlobalVectorConstants::SmallNumber.m128_f32[3];
              }
              this_01 = (TTransform<double> *)
                        ((longlong)(int)uVar18 * 0x60 + *(longlong *)&pTVar15->field_0x10);
              lVar25 = -(ulonglong)
                        ((double)fVar27 <
                        (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 0xc)
                                         & uVar55,*(uint *)((this_01->Scale3D).XY.m128d_f64 + 1) &
                                                  uVar54));
              auVar6._8_4_ = (int)lVar25;
              auVar6._0_8_ = -(ulonglong)
                              ((double)fVar26 <
                              (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 +
                                                        4) & uVar23,
                                               *(uint *)(this_01->Scale3D).XY.m128d_f64 & uVar17));
              auVar6._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
              iVar12 = movmskpd(uVar11,auVar6);
              lVar25 = -(ulonglong)
                        ((double)fVar29 <
                        (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 0xc)
                                         & uVar55,*(uint *)((this_01->Scale3D).ZW.m128d_f64 + 1) &
                                                  uVar54));
              auVar5._8_4_ = (int)lVar25;
              auVar5._0_8_ = -(ulonglong)
                              ((double)fVar28 <
                              (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 +
                                                        4) & uVar23,
                                               *(uint *)(this_01->Scale3D).ZW.m128d_f64 & uVar17));
              auVar5._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
              uVar17 = movmskpd(uVar16,auVar5);
              if ((uVar17 & 0x3fffffff) == 0 && iVar12 == 0) {
                local_180._4_4_ = uVar35;
                local_180._0_4_ = uVar34;
                local_180._8_4_ = uVar36;
                local_180._12_4_ = uVar37;
                local_218.Rotation.XY.m128d_f64[0]._0_4_ = uVar50;
                local_218.Rotation.XY.m128d_f64[0]._4_4_ = uVar51;
                local_218.Rotation.XY.m128d_f64[1]._0_4_ = uVar52;
                local_218.Rotation.XY.m128d_f64[1]._4_4_ = uVar53;
                local_218.Rotation.ZW.m128d_f64[0]._0_4_ = uVar46;
                local_218.Rotation.ZW.m128d_f64[0]._4_4_ = uVar47;
                local_218.Rotation.ZW.m128d_f64[1]._0_4_ = uVar48;
                local_218.Rotation.ZW.m128d_f64[1]._4_4_ = uVar49;
                local_218.Translation.XY.m128d_f64[0]._0_4_ = uVar42;
                local_218.Translation.XY.m128d_f64[0]._4_4_ = uVar43;
                local_218.Translation.XY.m128d_f64[1]._0_4_ = uVar44;
                local_218.Translation.XY.m128d_f64[1]._4_4_ = uVar45;
                local_218.Translation.ZW.m128d_f64[0]._0_4_ = uVar38;
                local_218.Translation.ZW.m128d_f64[0]._4_4_ = uVar39;
                local_218.Translation.ZW.m128d_f64[1]._0_4_ = uVar40;
                local_218.Translation.ZW.m128d_f64[1]._4_4_ = uVar41;
                local_218.Scale3D.XY.m128d_f64[0]._0_4_ = uVar34;
                local_218.Scale3D.XY.m128d_f64[0]._4_4_ = uVar35;
                local_218.Scale3D.XY.m128d_f64[1]._0_4_ = uVar36;
                local_218.Scale3D.XY.m128d_f64[1]._4_4_ = uVar37;
                local_218.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar30;
                local_218.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar31;
                local_218.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar32;
                local_218.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar33;
              }
              else {
                UE::Math::TTransform<double>::InverseFast(this_01,&local_218);
                fVar26 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                fVar27 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                fVar28 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                fVar29 = GlobalVectorConstants::SmallNumber.m128_f32[3];
                uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                local_180._4_4_ = local_218.Scale3D.XY.m128d_f64[0]._4_4_;
                local_180._0_4_ = local_218.Scale3D.XY.m128d_f64[0]._0_4_;
                local_180._8_4_ = local_218.Scale3D.XY.m128d_f64[1]._0_4_;
                local_180._12_4_ = local_218.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                uVar41 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                uVar45 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar49 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
                uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
                uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
                uVar53 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
              }
              local_108.m128_f32[0] =
                   (float)(double)CONCAT44(local_218.Rotation.XY.m128d_f64[0]._4_4_,
                                           local_218.Rotation.XY.m128d_f64[0]._0_4_);
              uVar17 = 0;
              if ((int)uVar24 < (this->ParticleTracks).ArrayNum) {
                uVar17 = uVar21 >> 0x1f;
              }
              local_188 = CONCAT44(local_218.Translation.ZW.m128d_f64[0]._4_4_,
                                   local_218.Translation.ZW.m128d_f64[0]._0_4_);
              local_170 = CONCAT44(local_218.Scale3D.ZW.m128d_f64[0]._4_4_,
                                   local_218.Scale3D.ZW.m128d_f64[0]._0_4_);
              local_108.m128_f32[2] =
                   (float)(double)CONCAT44(local_218.Rotation.ZW.m128d_f64[0]._4_4_,
                                           local_218.Rotation.ZW.m128d_f64[0]._0_4_);
              local_108.m128_f32[3] =
                   (float)(double)CONCAT44(local_218.Rotation.ZW.m128d_f64[1]._4_4_,
                                           local_218.Rotation.ZW.m128d_f64[1]._0_4_);
              local_108.m128_f32[1] =
                   (float)(double)CONCAT44(local_218.Rotation.XY.m128d_f64[1]._4_4_,
                                           local_218.Rotation.XY.m128d_f64[1]._0_4_);
              local_f8._4_4_ =
                   (float)(double)CONCAT44(local_218.Translation.XY.m128d_f64[1]._4_4_,
                                           local_218.Translation.XY.m128d_f64[1]._0_4_);
              local_f8._0_4_ =
                   (float)(double)CONCAT44(local_218.Translation.XY.m128d_f64[0]._4_4_,
                                           local_218.Translation.XY.m128d_f64[0]._0_4_);
              local_f8._8_4_ =
                   (float)(double)CONCAT44(local_218.Translation.ZW.m128d_f64[0]._4_4_,
                                           local_218.Translation.ZW.m128d_f64[0]._0_4_);
              local_f8._12_4_ = 0;
              local_e8._4_4_ = (float)local_180._8_8_;
              local_e8._0_4_ = (float)local_180._0_8_;
              local_e8._8_4_ =
                   (float)(double)CONCAT44(local_218.Scale3D.ZW.m128d_f64[0]._4_4_,
                                           local_218.Scale3D.ZW.m128d_f64[0]._0_4_);
              local_e8._12_4_ = 0;
              local_198 = local_218.Translation.XY.m128d_f64[0]._0_4_;
              uStack_194 = local_218.Translation.XY.m128d_f64[0]._4_4_;
              uStack_190 = local_218.Translation.XY.m128d_f64[1]._0_4_;
              uStack_18c = local_218.Translation.XY.m128d_f64[1]._4_4_;
              if (uVar17 == 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar10) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
                uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
                uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
                uVar53 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
                uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                uVar49 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                uVar45 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                uVar41 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
                uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                fVar26 = GlobalVectorConstants::SmallNumber.m128_f32[0];
                fVar27 = GlobalVectorConstants::SmallNumber.m128_f32[1];
                fVar28 = GlobalVectorConstants::SmallNumber.m128_f32[2];
                fVar29 = GlobalVectorConstants::SmallNumber.m128_f32[3];
              }
              pFVar2 = (this->ParticleTracks).AllocatorInstance.Data;
              iVar12 = *(int *)(pFVar2 + lVar19 + 8);
              if ((iVar12 == *(int *)(pFVar2 + lVar19 + 0x18)) &&
                 (*(int *)(pFVar2 + lVar19 + 0x18) == *(int *)(pFVar2 + lVar19 + 0x28))) {
                uVar18 = 0;
                uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                uVar54 = _UNK_15061cc88;
                uVar55 = _UNK_15061cc8c;
                if (iVar12 < 1) goto LAB_14daff093;
                lVar25 = 0;
                lVar22 = 0;
                local_288 = (longlong)iVar12;
                do {
                  uVar23 = ~uVar18 >> 0x1f;
                  uVar17 = 0;
                  if ((int)uVar18 < *(int *)(pFVar2 + lVar19 + 0x28)) {
                    uVar17 = uVar23;
                  }
                  if ((uVar17 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_268.Value = *(int **)(pFVar2 + lVar19 + 0x20);
                  uVar17 = 0;
                  if ((int)uVar18 < *(int *)(pFVar2 + lVar19 + 8)) {
                    uVar17 = uVar23;
                  }
                  if ((uVar17 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  lVar3 = *(longlong *)(pFVar2 + lVar19);
                  uVar17 = 0;
                  if ((int)uVar18 < *(int *)(pFVar2 + lVar19 + 0x18)) {
                    uVar17 = uVar23;
                  }
                  if ((uVar17 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_138.m128_u64[0] =
                       *(ulong64 *)(lVar22 + *(longlong *)(pFVar2 + lVar19 + 0x10));
                  local_138.m128_u64[1] =
                       ((ulong64 *)(lVar22 + *(longlong *)(pFVar2 + lVar19 + 0x10)))[1];
                  local_128._8_4_ = *(undefined4 *)(lVar25 + 8 + lVar3);
                  local_128._0_8_ = *(undefined8 *)(lVar25 + lVar3);
                  local_128._12_4_ = 0;
                  local_168 = GlobalVectorConstants::Float0001;
                  local_118._8_4_ = *(undefined4 *)(lVar25 + 8 + (longlong)local_268.Value);
                  local_118._0_8_ = *(undefined8 *)(lVar25 + (longlong)local_268.Value);
                  local_118._12_4_ = 0;
                  local_148 = GlobalVectorConstants::Float1110;
                  local_158 = (undefined1  [16])GlobalVectorConstants::FloatZero;
                  UE::Math::TTransform<float>::Multiply
                            ((TTransform<float> *)&local_168,(TTransform<float> *)&local_108,
                             (TTransform<float> *)&local_138);
                  uVar7 = local_168.m128_u64[0];
                  uVar9 = local_168.m128_u64[1];
                  local_278 = local_158._0_4_;
                  iStack_274 = local_158._4_4_;
                  uVar17 = 0;
                  if ((int)uVar18 < *(int *)(pFVar2 + lVar19 + 0x18)) {
                    uVar17 = uVar23;
                  }
                  local_270 = (float)local_158._8_4_;
                  local_1a8 = local_168.m128_u64[0];
                  uStack_1a0 = local_168.m128_u64[1];
                  if ((uVar17 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  fVar26 = local_270;
                  lVar3 = *(longlong *)(pFVar2 + lVar19 + 0x10);
                  *(ulong64 *)(lVar22 + lVar3) = uVar7;
                  ((ulong64 *)(lVar22 + lVar3))[1] = uVar9;
                  uVar7 = CONCAT44(iStack_274,local_278);
                  uVar17 = 0;
                  if ((int)uVar18 < *(int *)(pFVar2 + lVar19 + 8)) {
                    uVar17 = uVar23;
                  }
                  if ((uVar17 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  lVar3 = *(longlong *)(pFVar2 + lVar19);
                  uVar18 = uVar18 + 1;
                  lVar22 = lVar22 + 0x10;
                  *(undefined8 *)(lVar3 + lVar25) = uVar7;
                  *(float *)(lVar3 + 8 + lVar25) = fVar26;
                  lVar25 = lVar25 + 0xc;
                  local_288 = local_288 + -1;
                } while (local_288 != 0);
                local_288 = 0;
                lVar22 = local_280;
                pTVar15 = local_250;
                this = local_258;
                uVar24 = local_294;
              }
              else {
                bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<8121540624227762263>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\ChaosCache.cpp"
                                    ,0x57,
                                    "(AnimTrack.PosKeys.Num() == AnimTrack.RotKeys.Num()) && (AnimTrack.RotKeys.Num() == AnimTrack.ScaleKeys.Num())"
                                   );
                if (bVar10) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              fVar26 = GlobalVectorConstants::SmallNumber.m128_f32[0];
              fVar27 = GlobalVectorConstants::SmallNumber.m128_f32[1];
              fVar28 = GlobalVectorConstants::SmallNumber.m128_f32[2];
              fVar29 = GlobalVectorConstants::SmallNumber.m128_f32[3];
              uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
              uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
              uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
              uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
              uVar34 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
              uVar35 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
              uVar36 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
              uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
              uVar38 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
              uVar39 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
              uVar40 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
              uVar41 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
              uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
              uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
              uVar44 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
              uVar45 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
              uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
              uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
              uVar48 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
              uVar49 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
              uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
              uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
              uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
              uVar53 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
              uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              uVar54 = _UNK_15061cc88;
              uVar55 = _UNK_15061cc8c;
            }
LAB_14daff093:
            local_294 = uVar24 + 1;
            local_280 = lVar22 + 1;
            lVar19 = lVar19 + 0x98;
            pTVar20 = local_240;
          } while (local_280 < local_248);
        }
        this->bStripMassToLocal = false;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    }
  }
  iVar12 = (this->ChannelCurveToParticle).ArrayNum;
  this->Version = 1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->ParticleToChannelCurve,iVar12);
  local_298 = 0;
  if (0 < (this->ChannelCurveToParticle).ArrayNum) {
    do {
      uVar17 = local_298;
      uVar23 = 0;
      if ((int)local_298 < (this->ChannelCurveToParticle).ArrayNum) {
        uVar23 = ~local_298 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_228 = (this->ChannelCurveToParticle).AllocatorInstance.Data + (longlong)(int)uVar17 * 4;
      local_220 = &local_298;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this->ParticleToChannelCurve,&local_268,(bool *)&local_228);
      local_298 = local_298 + 1;
    } while ((int)local_298 < (this->ChannelCurveToParticle).ArrayNum);
  }
  UObject::PostLoad((UObject *)this);
  return;
}

// Serialize @ 14db03f60

void __thiscall UChaosCache::Serialize(UChaosCache *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if ((iVar1 < 0x31) && (this->Version == 0)) {
      this->bStripMassToLocal = true;
    }
  }
  return;
}

// Serialize @ 14db03fd0

void __thiscall UChaosCache::Serialize(UChaosCache *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID);
    if ((iVar1 < 0x31) && (this->Version == 0)) {
      this->bStripMassToLocal = true;
    }
  }
  return;
}

// StaticRegisterNativesUChaosCache @ 14db05380

void __cdecl UChaosCache::StaticRegisterNativesUChaosCache(void)

{
  return;
}

