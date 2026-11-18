// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 31

// FInterrogationChannels @ 14660f890

FInterrogationChannels * __thiscall
UE::MovieScene::FInterrogationChannels::FInterrogationChannels(FInterrogationChannels *this)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ForElementType<unsigned_int> FVar4;
  
  *(undefined8 *)&this->ObjectToChannel = 0;
  *(undefined8 *)&(this->ObjectToChannel).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToChannel).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToChannel).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToChannel).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToChannel).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToChannel).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToChannel).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToChannel).field_0x48 = 0;
  (this->SparseChannelInfo).ChannelInfo.Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SparseChannelInfo).ChannelInfo.Pairs.ArrayNum = 0;
  (this->SparseChannelInfo).ChannelInfo.Pairs.ArrayMax = 0;
  (this->ActiveChannelBits).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ActiveChannelBits).NumBits = 0;
  (this->ActiveChannelBits).MaxBits = 0x80;
  (this->Interrogations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interrogations).ArrayNum = 0;
  (this->Interrogations).ArrayMax = 0;
  iVar2 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->ActiveChannelBits,1);
  FVar4 = (this->ActiveChannelBits).AllocatorInstance.SecondaryData;
  uVar3 = iVar2 >> 0x1f & 0x1f;
  iVar2 = iVar2 + uVar3;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->ActiveChannelBits;
  }
  puVar1 = (uint *)((longlong)FVar4 + (longlong)(iVar2 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar2 & 0x1f) - (char)uVar3 & 0x1f));
  return this;
}

// ~FInterrogationChannels @ 146620a90

void __thiscall
UE::MovieScene::FInterrogationChannels::~FInterrogationChannels(FInterrogationChannels *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  void *pvVar3;
  
  pFVar1 = (this->Interrogations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->ActiveChannelBits).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->SparseChannelInfo).ChannelInfo.Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ObjectToChannel).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ObjectToChannel).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 1466240d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::MovieScene::FInterrogationChannels::QueryTransformOrigins'::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocation *param_1,FMovieSceneSequenceID *param_2,
          FInterrogationKey *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> TVar10;
  FInterrogationKey FVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  TQuat<double> *pTVar16;
  int iVar17;
  FComponentHeader *pFVar18;
  uint *puVar19;
  double *pdVar20;
  uint uVar21;
  FComponentHeader *pFVar22;
  EComponentHeaderLockMode EVar23;
  void *pvVar24;
  longlong *plVar25;
  longlong lVar26;
  FComponentHeader *pFVar27;
  uint *puVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  ushort local_248;
  void *local_240;
  TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> local_238;
  int local_230;
  FInterrogationKey local_228;
  TRotator<double> local_220;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1d8;
  TQuat<double> local_1c8;
  double local_1a8 [12];
  longlong local_148;
  int local_140;
  longlong local_138;
  longlong lStack_130;
  int local_128;
  longlong local_120;
  longlong local_118;
  int local_110;
  longlong local_108;
  longlong lStack_100;
  int local_f8;
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  longlong local_d8;
  longlong lStack_d0;
  int local_c8;
  longlong local_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_278;
  plVar25 = &local_148;
  local_230 = *(int *)(*(longlong *)((longlong)this + 0x30) + 0x88);
  local_248 = param_1->Size;
  lVar30 = 0xce;
  local_148 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_120 = 0;
  local_118 = 0;
  local_108 = 0;
  lStack_100 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_c0 = 0;
  local_240 = this;
  local_238 = (TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>)param_3;
  local_228 = (FInterrogationKey)param_2;
  do {
    pFVar27 = (FComponentHeader *)0x0;
    pFVar22 = param_1->ComponentHeaders;
    pFVar18 = pFVar22 + param_1->NumComponents;
    for (; pFVar22 != pFVar18; pFVar22 = pFVar22 + 1) {
      if ((pFVar22->ComponentType).Value == *(ushort *)(lVar30 + *(longlong *)this)) {
        EVar23 = param_1->LockMode;
        if (EVar23 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar22->ReadWriteLock);
        }
        LOCK();
        pFVar22->ScheduledAccessCount = (atomic<int>)((int)pFVar22->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar27 = (FComponentHeader *)pFVar22->Components;
        goto LAB_1466241cb;
      }
    }
    EVar23 = LockFree;
    local_1d8 = 0;
    pFVar22 = pFVar27;
LAB_1466241cb:
    if (*plVar25 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar25 + 0x30);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)plVar25[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*plVar25 + 0x20));
      }
    }
    FVar11 = local_228;
    TVar10 = local_238;
    dVar9 = _UNK_150689688;
    dVar8 = ___xmm_3ff00000000000003ff0000000000000;
    dVar7 = _UNK_150689518;
    dVar6 = ___xmm_00000000000000003ff0000000000000;
    *plVar25 = (longlong)pFVar22;
    lVar30 = lVar30 + 2;
    *(EComponentHeaderLockMode *)(plVar25 + 1) = EVar23;
    plVar25[2] = (longlong)pFVar27;
    plVar25 = plVar25 + 3;
  } while (lVar30 < 0xda);
  uVar31 = (ulonglong)local_248;
  if (local_248 == 0) {
LAB_14662462d:
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 0x30) = *(int *)(lStack_d0 + 0x30) + -1;
      UNLOCK();
      if (local_c8 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(lStack_d0 + 0x20));
      }
    }
    if (local_e8 != 0) {
      LOCK();
      *(int *)(local_e8 + 0x30) = *(int *)(local_e8 + 0x30) + -1;
      UNLOCK();
      if (local_e0 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_e8 + 0x20));
      }
    }
    if (lStack_100 != 0) {
      LOCK();
      *(int *)(lStack_100 + 0x30) = *(int *)(lStack_100 + 0x30) + -1;
      UNLOCK();
      if (local_f8 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(lStack_100 + 0x20));
      }
    }
    if (local_118 != 0) {
      LOCK();
      *(int *)(local_118 + 0x30) = *(int *)(local_118 + 0x30) + -1;
      UNLOCK();
      if (local_110 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_118 + 0x20));
      }
    }
    if (lStack_130 != 0) {
      LOCK();
      *(int *)(lStack_130 + 0x30) = *(int *)(lStack_130 + 0x30) + -1;
      UNLOCK();
      if (local_128 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(lStack_130 + 0x20));
      }
    }
    if (local_148 != 0) {
      LOCK();
      *(int *)(local_148 + 0x30) = *(int *)(local_148 + 0x30) + -1;
      UNLOCK();
      if (local_140 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_148 + 0x20));
      }
    }
    return;
  }
  lVar26 = 0;
  pvVar24 = local_240;
  lVar30 = lVar26;
  uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar37 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar38 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar39 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
LAB_1466242b3:
  lVar29 = 0;
  uVar13 = ((FMovieSceneSequenceID *)((longlong)FVar11 + lVar26 * 4))->Value;
  local_228 = *(FInterrogationKey *)((longlong)TVar10 + lVar26 * 8);
  puVar28 = *(uint **)((longlong)pvVar24 + 8);
  if (uVar13 != 0) {
    lVar14 = lVar29;
    if (puVar28[0x3c] != puVar28[0x47]) {
      puVar19 = puVar28 + 0x48;
      if (*(uint **)(puVar28 + 0x4a) != (uint *)0x0) {
        puVar19 = *(uint **)(puVar28 + 0x4a);
      }
      uVar21 = puVar19[puVar28[0x4c] - 1 & uVar13];
      if (uVar21 != 0xffffffff) {
        do {
          lVar14 = *(longlong *)(puVar28 + 0x3a) + (longlong)(int)uVar21 * 0x28;
          if (*(uint *)(*(longlong *)(puVar28 + 0x3a) + (longlong)(int)uVar21 * 0x28) == uVar13)
          break;
          uVar21 = *(uint *)(lVar14 + 0x20);
          lVar14 = lVar29;
        } while (uVar21 != 0xffffffff);
      }
    }
    puVar28 = (uint *)(lVar14 + 8);
    if (lVar14 == 0) {
      puVar28 = (uint *)0x0;
    }
  }
  if (puVar28 == (uint *)0x0) {
LAB_146624407:
    local_208 = (double)CONCAT44(uVar34,uVar33);
    uStack_200 = (double)CONCAT44(uVar36,uVar35);
    uVar44 = uVar33;
    uVar45 = uVar34;
    if (local_138 != 0) {
      uVar44 = (int)*(undefined8 *)(local_138 + lVar30);
      uVar45 = (int)((ulonglong)*(undefined8 *)(local_138 + lVar30) >> 0x20);
    }
    uVar40 = uVar35;
    uVar41 = uVar36;
    if (local_120 != 0) {
      uVar2 = *(undefined8 *)(local_120 + lVar26 * 8);
      uVar40 = (int)uVar2;
      uVar41 = (int)((ulonglong)uVar2 >> 0x20);
    }
    if (local_108 == 0) {
      uVar42 = (undefined4)uVar32;
      uVar43 = (undefined4)((ulonglong)uVar32 >> 0x20);
    }
    else {
      uVar2 = *(undefined8 *)(local_108 + lVar26 * 8);
      uVar42 = (undefined4)uVar2;
      uVar43 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    local_220.Roll = dVar37;
    if (local_f0 != 0) {
      local_220.Roll = *(double *)(local_f0 + lVar26 * 8);
    }
    local_220.Pitch = dVar39;
    if (local_d8 != 0) {
      local_220.Pitch = *(double *)(local_d8 + lVar26 * 8);
    }
    local_220.Yaw = dVar38;
    if (local_c0 != 0) {
      local_220.Yaw = *(double *)(local_c0 + lVar26 * 8);
    }
    puVar28 = (uint *)**(undefined8 **)((longlong)pvVar24 + 0x20);
    for (puVar19 = puVar28; local_1f8 = (double)uVar32,
        puVar19 != puVar28 + *(int *)(*(undefined8 **)((longlong)pvVar24 + 0x20) + 1);
        puVar19 = puVar19 + 1) {
      if (*puVar19 == uVar13) {
        iVar17 = (int)((longlong)puVar19 - (longlong)puVar28 >> 2);
        if (iVar17 != -1) {
          uVar21 = local_228.InterrogationIndex + iVar17 * local_230;
          pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_220,&local_1c8);
          plVar25 = *(longlong **)((longlong)pvVar24 + 0x18);
          local_1f8 = pTVar16->Z;
          dStack_1f0 = pTVar16->W;
          dVar4 = pTVar16->X;
          dVar5 = pTVar16->Y;
          iVar17 = (int)plVar25[1];
          uVar13 = 0;
          if ((int)uVar21 < iVar17) {
            uVar13 = ~uVar21 >> 0x1f;
          }
          local_208 = dVar4;
          uStack_200 = dVar5;
          if (uVar13 == 0) {
            local_258 = (longlong)(int)uVar21;
            local_250 = (longlong)iVar17;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pdVar20 = (double *)((longlong)(int)uVar21 * 0x70 + *plVar25);
          pvVar24 = local_240;
          uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          dVar37 = UE::Math::TRotator<double>::ZeroRotator.Roll;
          dVar38 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          dVar39 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          if (local_1a8 != pdVar20) {
            *pdVar20 = dVar4;
            pdVar20[1] = dVar5;
            pdVar20[2] = local_1f8;
            pdVar20[3] = dStack_1f0;
            *(undefined4 *)(pdVar20 + 4) = uVar44;
            *(undefined4 *)((longlong)pdVar20 + 0x24) = uVar45;
            *(undefined4 *)(pdVar20 + 5) = uVar40;
            *(undefined4 *)((longlong)pdVar20 + 0x2c) = uVar41;
            pdVar20[6] = (double)CONCAT44(uVar43,uVar42);
            pdVar20[7] = 0.0;
            pdVar20[8] = dVar8;
            pdVar20[9] = dVar9;
            pdVar20[10] = dVar6;
            pdVar20[0xb] = dVar7;
            *(undefined1 *)(pdVar20 + 0xc) = 1;
            uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            dVar37 = UE::Math::TRotator<double>::ZeroRotator.Roll;
            dVar38 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            dVar39 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          }
        }
        break;
      }
    }
  }
  else {
    puVar19 = (uint *)**(undefined8 **)((longlong)pvVar24 + 0x20);
    for (puVar15 = puVar19;
        puVar15 != puVar19 + *(int *)(*(undefined8 **)((longlong)pvVar24 + 0x20) + 1);
        puVar15 = puVar15 + 1) {
      if (*puVar15 == uVar13) {
        if ((int)((longlong)puVar15 - (longlong)puVar19 >> 2) != -1) {
          puVar15 = puVar19;
          goto LAB_1466243a8;
        }
        break;
      }
    }
  }
  goto LAB_1466245da;
  while (puVar15 = puVar15 + 1,
        puVar15 != puVar19 + *(int *)(*(undefined8 **)((longlong)pvVar24 + 0x20) + 1)) {
LAB_1466243a8:
    if (*puVar15 == *puVar28) {
      if ((int)((longlong)puVar15 - (longlong)puVar19 >> 2) != -1) {
        local_238._4_4_ = *puVar28;
        local_238._0_4_ = uVar13;
        TArray<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>_>
                  (*(TArray<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>,TSizedDefaultAllocator<32>_>
                     **)((longlong)pvVar24 + 0x10),&local_238);
        uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        dVar37 = UE::Math::TRotator<double>::ZeroRotator.Roll;
        dVar38 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        dVar39 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        goto LAB_146624407;
      }
      break;
    }
  }
LAB_1466245da:
  lVar26 = lVar26 + 1;
  lVar30 = lVar30 + 8;
  if ((longlong)uVar31 <= lVar26) goto LAB_14662462d;
  goto LAB_1466242b3;
}

// operator() @ 146624c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::MovieScene::FInterrogationChannels::
QueryWorldSpaceTransforms<`UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms'::__l2::<lambda_1>_>'
::__l25::<lambda_2>::operator()(void *this,FEntityAllocation *param_1,FInterrogationKey *param_2)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  FInterrogationKey FVar12;
  bool bVar13;
  FInterrogationChannel FVar14;
  uint uVar15;
  longlong *plVar16;
  TQuat<double> *pTVar17;
  FComponentHeader *pFVar18;
  longlong lVar19;
  FInterrogationChannel FVar20;
  FComponentHeader *pFVar21;
  EComponentHeaderLockMode EVar22;
  longlong lVar23;
  longlong lVar24;
  FComponentHeader *pFVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined4 uVar29;
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
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  ushort local_288;
  FInterrogationKey local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  FInterrogationKey *local_248;
  TRotator<double> local_240;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  TQuat<double> local_208;
  undefined8 local_1d8;
  TQuat<double> local_1c8;
  longlong local_1a8 [2];
  longlong local_198;
  longlong local_180;
  longlong local_168;
  longlong local_150;
  longlong local_138;
  longlong local_120;
  longlong local_108;
  longlong local_f0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_288 = param_1->Size;
  lVar26 = 9;
  plVar16 = local_1a8;
  do {
    *plVar16 = 0;
    plVar16[2] = 0;
    plVar16 = plVar16 + 3;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  plVar16 = local_1a8;
  lVar26 = 0xce;
  local_280 = (FInterrogationKey)this;
  local_248 = param_2;
  do {
    pFVar25 = (FComponentHeader *)0x0;
    pFVar21 = param_1->ComponentHeaders;
    pFVar18 = pFVar21 + param_1->NumComponents;
    for (; pFVar21 != pFVar18; pFVar21 = pFVar21 + 1) {
      if ((pFVar21->ComponentType).Value ==
          *(ushort *)(lVar26 + *(longlong *)((longlong)this + 0x18))) {
        EVar22 = param_1->LockMode;
        if (EVar22 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar21->ReadWriteLock);
        }
        LOCK();
        pFVar21->ScheduledAccessCount = (atomic<int>)((int)pFVar21->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar25 = (FComponentHeader *)pFVar21->Components;
        goto LAB_146624cdb;
      }
    }
    EVar22 = LockFree;
    local_1d8 = 0;
    pFVar21 = pFVar25;
LAB_146624cdb:
    if (*plVar16 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar16 + 0x30);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)plVar16[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*plVar16 + 0x20));
      }
    }
    FVar12 = local_280;
    *plVar16 = (longlong)pFVar21;
    lVar26 = lVar26 + 2;
    *(EComponentHeaderLockMode *)(plVar16 + 1) = EVar22;
    plVar16[2] = (longlong)pFVar25;
    plVar16 = plVar16 + 3;
    if (0xdf < lVar26) {
      uVar27 = (ulonglong)local_288;
      if (uVar27 != 0) {
        lVar26 = 0;
        lVar28 = 0;
        do {
          local_280 = local_248[lVar26];
          FVar20 = local_280.Channel.Value;
          if ((FVar20.Value == 0xffffffff) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Value != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                  ,0xa1,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar23 = *(longlong *)((longlong)FVar12 + 8);
          if (((FVar20.Value < 0) || (*(int *)(lVar23 + 0x18) <= FVar20.Value)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(lVar23 + 0x10) != 0) {
            lVar23 = *(longlong *)(lVar23 + 0x10);
          }
          FVar14.Value = FVar20.Value;
          if (FVar20.Value < 0) {
            FVar14.Value = FVar20.Value + 0x1f;
          }
          if ((*(uint *)(lVar23 + (longlong)(FVar14.Value >> 5) * 4) >> (FVar20.Value & 0x1fU) & 1)
              != 0) {
            lVar24 = (longlong)FVar20.Value;
            lVar23 = **(longlong **)((longlong)FVar12 + 0x10);
            lVar19 = lVar24 * 0x60;
            local_208.X = *(double *)(lVar23 + lVar19);
            local_208.Y = ((double *)(lVar23 + lVar19))[1];
            pdVar2 = (double *)(lVar23 + 0x10 + lVar19);
            local_208.Z = *pdVar2;
            local_208.W = pdVar2[1];
            puVar3 = (undefined8 *)(lVar23 + 0x20 + lVar19);
            local_278 = *puVar3;
            uStack_270 = puVar3[1];
            local_268 = *(undefined8 *)(lVar23 + 0x30 + lVar19);
            puVar3 = (undefined8 *)(lVar23 + 0x40 + lVar19);
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            uVar7 = *(undefined8 *)(lVar23 + 0x50 + lVar19);
            UE::Math::TQuat<double>::Rotator(&local_208,&local_240);
            if (local_198 == 0) {
              uVar39 = (undefined4)local_278;
              uVar40 = (undefined4)((ulonglong)local_278 >> 0x20);
            }
            else {
              local_278 = *(undefined8 *)(local_198 + lVar28);
              uVar39 = (undefined4)local_278;
              uVar40 = (undefined4)((ulonglong)local_278 >> 0x20);
            }
            if (local_180 == 0) {
              uVar37 = (undefined4)uStack_270;
              uVar38 = (undefined4)((ulonglong)uStack_270 >> 0x20);
            }
            else {
              uStack_270 = *(undefined8 *)(local_180 + lVar26 * 8);
              uVar37 = (undefined4)uStack_270;
              uVar38 = (undefined4)((ulonglong)uStack_270 >> 0x20);
            }
            if (local_168 == 0) {
              uVar35 = (undefined4)local_268;
              uVar36 = (undefined4)((ulonglong)local_268 >> 0x20);
            }
            else {
              local_268 = *(undefined8 *)(local_168 + lVar26 * 8);
              uVar35 = (undefined4)local_268;
              uVar36 = (undefined4)((ulonglong)local_268 >> 0x20);
            }
            if (local_150 != 0) {
              local_240.Roll = *(double *)(local_150 + lVar26 * 8);
            }
            if (local_138 != 0) {
              local_240.Pitch = *(double *)(local_138 + lVar26 * 8);
            }
            if (local_120 != 0) {
              local_240.Yaw = *(double *)(local_120 + lVar26 * 8);
            }
            if (local_108 == 0) {
              uVar33 = (undefined4)uVar8;
              uVar34 = (undefined4)((ulonglong)uVar8 >> 0x20);
              local_260 = uVar8;
            }
            else {
              local_260 = *(undefined8 *)(local_108 + lVar26 * 8);
              uVar33 = (undefined4)local_260;
              uVar34 = (undefined4)((ulonglong)local_260 >> 0x20);
            }
            if (local_f0 == 0) {
              uVar31 = (undefined4)uVar9;
              uVar32 = (undefined4)((ulonglong)uVar9 >> 0x20);
              uStack_258 = uVar9;
            }
            else {
              uStack_258 = *(undefined8 *)(local_f0 + lVar26 * 8);
              uVar31 = (undefined4)uStack_258;
              uVar32 = (undefined4)((ulonglong)uStack_258 >> 0x20);
            }
            if (local_d8 == 0) {
              uVar29 = (undefined4)uVar7;
              uVar30 = (undefined4)((ulonglong)uVar7 >> 0x20);
              local_250 = uVar7;
            }
            else {
              local_250 = *(undefined8 *)(local_d8 + lVar26 * 8);
              uVar29 = (undefined4)local_250;
              uVar30 = (undefined4)((ulonglong)local_250 >> 0x20);
            }
            pTVar17 = UE::Math::TRotator<double>::Quaternion(&local_240,&local_1c8);
            lVar19 = (longlong)local_280.InterrogationIndex;
            local_218 = pTVar17->Z;
            dStack_210 = pTVar17->W;
            dVar10 = pTVar17->X;
            dVar11 = pTVar17->Y;
            lVar23 = **(longlong **)FVar12;
            iVar5 = *(int *)(lVar23 + 8 + lVar24 * 0x10);
            uVar15 = 0;
            if (local_280.InterrogationIndex < iVar5) {
              uVar15 = (uint)~local_280.InterrogationIndex >> 0x1f;
            }
            local_228 = dVar10;
            dStack_220 = dVar11;
            if ((uVar15 == 0) &&
               (local_298 = lVar19, local_290 = (longlong)iVar5,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar23 = *(longlong *)(lVar23 + lVar24 * 0x10);
            lVar19 = lVar19 * 0x60;
            *(double *)(lVar19 + lVar23) = dVar10;
            ((double *)(lVar19 + lVar23))[1] = dVar11;
            pdVar2 = (double *)(lVar19 + 0x10 + lVar23);
            *pdVar2 = local_218;
            pdVar2[1] = dStack_210;
            puVar4 = (undefined4 *)(lVar19 + 0x20 + lVar23);
            *puVar4 = uVar39;
            puVar4[1] = uVar40;
            puVar4[2] = uVar37;
            puVar4[3] = uVar38;
            puVar3 = (undefined8 *)(lVar19 + 0x30 + lVar23);
            *puVar3 = CONCAT44(uVar36,uVar35);
            puVar3[1] = 0;
            puVar4 = (undefined4 *)(lVar19 + 0x40 + lVar23);
            *puVar4 = uVar33;
            puVar4[1] = uVar34;
            puVar4[2] = uVar31;
            puVar4[3] = uVar32;
            puVar3 = (undefined8 *)(lVar19 + 0x50 + lVar23);
            *puVar3 = CONCAT44(uVar30,uVar29);
            puVar3[1] = 0;
          }
          lVar26 = lVar26 + 1;
          lVar28 = lVar28 + 8;
        } while (lVar26 < (longlong)uVar27);
      }
      lVar26 = 9;
      plVar16 = &local_d0;
      do {
        lVar26 = lVar26 + -1;
        if (plVar16[-3] != 0) {
          LOCK();
          piVar1 = (int *)(plVar16[-3] + 0x30);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((int)plVar16[-2] == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar16[-3] + 0x20));
          }
        }
        plVar16 = plVar16 + -3;
      } while (lVar26 != 0);
      return;
    }
  } while( true );
}

// operator() @ 146625150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::MovieScene::FInterrogationChannels::
QueryWorldSpaceTransforms<`UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms'::__l2::<lambda_1>_>'
::__l25::<lambda_2>::operator()(void *this,FEntityAllocation *param_1,FInterrogationKey *param_2)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  FInterrogationKey FVar12;
  bool bVar13;
  FInterrogationChannel FVar14;
  uint uVar15;
  longlong *plVar16;
  TQuat<double> *pTVar17;
  FComponentHeader *pFVar18;
  longlong lVar19;
  FInterrogationChannel FVar20;
  FComponentHeader *pFVar21;
  EComponentHeaderLockMode EVar22;
  longlong lVar23;
  longlong lVar24;
  FComponentHeader *pFVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined4 uVar29;
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
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  ushort local_288;
  FInterrogationKey local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  FInterrogationKey *local_248;
  TRotator<double> local_240;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  TQuat<double> local_208;
  undefined8 local_1d8;
  TQuat<double> local_1c8;
  longlong local_1a8 [2];
  longlong local_198;
  longlong local_180;
  longlong local_168;
  longlong local_150;
  longlong local_138;
  longlong local_120;
  longlong local_108;
  longlong local_f0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_288 = param_1->Size;
  lVar26 = 9;
  plVar16 = local_1a8;
  do {
    *plVar16 = 0;
    plVar16[2] = 0;
    plVar16 = plVar16 + 3;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  plVar16 = local_1a8;
  lVar26 = 0xce;
  local_280 = (FInterrogationKey)this;
  local_248 = param_2;
  do {
    pFVar25 = (FComponentHeader *)0x0;
    pFVar21 = param_1->ComponentHeaders;
    pFVar18 = pFVar21 + param_1->NumComponents;
    for (; pFVar21 != pFVar18; pFVar21 = pFVar21 + 1) {
      if ((pFVar21->ComponentType).Value ==
          *(ushort *)(lVar26 + *(longlong *)((longlong)this + 0x18))) {
        EVar22 = param_1->LockMode;
        if (EVar22 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar21->ReadWriteLock);
        }
        LOCK();
        pFVar21->ScheduledAccessCount = (atomic<int>)((int)pFVar21->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar25 = (FComponentHeader *)pFVar21->Components;
        goto LAB_14662521b;
      }
    }
    EVar22 = LockFree;
    local_1d8 = 0;
    pFVar21 = pFVar25;
LAB_14662521b:
    if (*plVar16 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar16 + 0x30);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)plVar16[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*plVar16 + 0x20));
      }
    }
    FVar12 = local_280;
    *plVar16 = (longlong)pFVar21;
    lVar26 = lVar26 + 2;
    *(EComponentHeaderLockMode *)(plVar16 + 1) = EVar22;
    plVar16[2] = (longlong)pFVar25;
    plVar16 = plVar16 + 3;
    if (0xdf < lVar26) {
      uVar27 = (ulonglong)local_288;
      if (uVar27 != 0) {
        lVar26 = 0;
        lVar28 = 0;
        do {
          local_280 = local_248[lVar26];
          FVar20 = local_280.Channel.Value;
          if ((FVar20.Value == 0xffffffff) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Value != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                  ,0xa1,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar23 = *(longlong *)((longlong)FVar12 + 8);
          if (((FVar20.Value < 0) || (*(int *)(lVar23 + 0x18) <= FVar20.Value)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(lVar23 + 0x10) != 0) {
            lVar23 = *(longlong *)(lVar23 + 0x10);
          }
          FVar14.Value = FVar20.Value;
          if (FVar20.Value < 0) {
            FVar14.Value = FVar20.Value + 0x1f;
          }
          if ((*(uint *)(lVar23 + (longlong)(FVar14.Value >> 5) * 4) >> (FVar20.Value & 0x1fU) & 1)
              != 0) {
            lVar24 = (longlong)FVar20.Value;
            lVar23 = **(longlong **)((longlong)FVar12 + 0x10);
            lVar19 = lVar24 * 0x60;
            local_208.X = *(double *)(lVar23 + lVar19);
            local_208.Y = ((double *)(lVar23 + lVar19))[1];
            pdVar2 = (double *)(lVar23 + 0x10 + lVar19);
            local_208.Z = *pdVar2;
            local_208.W = pdVar2[1];
            puVar3 = (undefined8 *)(lVar23 + 0x20 + lVar19);
            local_278 = *puVar3;
            uStack_270 = puVar3[1];
            local_268 = *(undefined8 *)(lVar23 + 0x30 + lVar19);
            puVar3 = (undefined8 *)(lVar23 + 0x40 + lVar19);
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            uVar7 = *(undefined8 *)(lVar23 + 0x50 + lVar19);
            UE::Math::TQuat<double>::Rotator(&local_208,&local_240);
            if (local_198 == 0) {
              uVar39 = (undefined4)local_278;
              uVar40 = (undefined4)((ulonglong)local_278 >> 0x20);
            }
            else {
              local_278 = *(undefined8 *)(local_198 + lVar28);
              uVar39 = (undefined4)local_278;
              uVar40 = (undefined4)((ulonglong)local_278 >> 0x20);
            }
            if (local_180 == 0) {
              uVar37 = (undefined4)uStack_270;
              uVar38 = (undefined4)((ulonglong)uStack_270 >> 0x20);
            }
            else {
              uStack_270 = *(undefined8 *)(local_180 + lVar26 * 8);
              uVar37 = (undefined4)uStack_270;
              uVar38 = (undefined4)((ulonglong)uStack_270 >> 0x20);
            }
            if (local_168 == 0) {
              uVar35 = (undefined4)local_268;
              uVar36 = (undefined4)((ulonglong)local_268 >> 0x20);
            }
            else {
              local_268 = *(undefined8 *)(local_168 + lVar26 * 8);
              uVar35 = (undefined4)local_268;
              uVar36 = (undefined4)((ulonglong)local_268 >> 0x20);
            }
            if (local_150 != 0) {
              local_240.Roll = *(double *)(local_150 + lVar26 * 8);
            }
            if (local_138 != 0) {
              local_240.Pitch = *(double *)(local_138 + lVar26 * 8);
            }
            if (local_120 != 0) {
              local_240.Yaw = *(double *)(local_120 + lVar26 * 8);
            }
            if (local_108 == 0) {
              uVar33 = (undefined4)uVar8;
              uVar34 = (undefined4)((ulonglong)uVar8 >> 0x20);
              local_260 = uVar8;
            }
            else {
              local_260 = *(undefined8 *)(local_108 + lVar26 * 8);
              uVar33 = (undefined4)local_260;
              uVar34 = (undefined4)((ulonglong)local_260 >> 0x20);
            }
            if (local_f0 == 0) {
              uVar31 = (undefined4)uVar9;
              uVar32 = (undefined4)((ulonglong)uVar9 >> 0x20);
              uStack_258 = uVar9;
            }
            else {
              uStack_258 = *(undefined8 *)(local_f0 + lVar26 * 8);
              uVar31 = (undefined4)uStack_258;
              uVar32 = (undefined4)((ulonglong)uStack_258 >> 0x20);
            }
            if (local_d8 == 0) {
              uVar29 = (undefined4)uVar7;
              uVar30 = (undefined4)((ulonglong)uVar7 >> 0x20);
              local_250 = uVar7;
            }
            else {
              local_250 = *(undefined8 *)(local_d8 + lVar26 * 8);
              uVar29 = (undefined4)local_250;
              uVar30 = (undefined4)((ulonglong)local_250 >> 0x20);
            }
            pTVar17 = UE::Math::TRotator<double>::Quaternion(&local_240,&local_1c8);
            lVar19 = (longlong)local_280.InterrogationIndex;
            local_218 = pTVar17->Z;
            dStack_210 = pTVar17->W;
            dVar10 = pTVar17->X;
            dVar11 = pTVar17->Y;
            lVar23 = **(longlong **)FVar12;
            iVar5 = *(int *)(lVar23 + 8 + lVar24 * 0x10);
            uVar15 = 0;
            if (local_280.InterrogationIndex < iVar5) {
              uVar15 = (uint)~local_280.InterrogationIndex >> 0x1f;
            }
            local_228 = dVar10;
            dStack_220 = dVar11;
            if ((uVar15 == 0) &&
               (local_298 = lVar19, local_290 = (longlong)iVar5,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar23 = *(longlong *)(lVar23 + lVar24 * 0x10);
            lVar19 = lVar19 * 0x60;
            *(double *)(lVar19 + lVar23) = dVar10;
            ((double *)(lVar19 + lVar23))[1] = dVar11;
            pdVar2 = (double *)(lVar19 + 0x10 + lVar23);
            *pdVar2 = local_218;
            pdVar2[1] = dStack_210;
            puVar4 = (undefined4 *)(lVar19 + 0x20 + lVar23);
            *puVar4 = uVar39;
            puVar4[1] = uVar40;
            puVar4[2] = uVar37;
            puVar4[3] = uVar38;
            puVar3 = (undefined8 *)(lVar19 + 0x30 + lVar23);
            *puVar3 = CONCAT44(uVar36,uVar35);
            puVar3[1] = 0;
            puVar4 = (undefined4 *)(lVar19 + 0x40 + lVar23);
            *puVar4 = uVar33;
            puVar4[1] = uVar34;
            puVar4[2] = uVar31;
            puVar4[3] = uVar32;
            puVar3 = (undefined8 *)(lVar19 + 0x50 + lVar23);
            *puVar3 = CONCAT44(uVar30,uVar29);
            puVar3[1] = 0;
          }
          lVar26 = lVar26 + 1;
          lVar28 = lVar28 + 8;
        } while (lVar26 < (longlong)uVar27);
      }
      lVar26 = 9;
      plVar16 = &local_d0;
      do {
        lVar26 = lVar26 + -1;
        if (plVar16[-3] != 0) {
          LOCK();
          piVar1 = (int *)(plVar16[-3] + 0x30);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((int)plVar16[-2] == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar16[-3] + 0x20));
          }
        }
        plVar16 = plVar16 + -3;
      } while (lVar26 != 0);
      return;
    }
  } while( true );
}

// operator() @ 146625690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::MovieScene::FInterrogationChannels::
QueryWorldSpaceTransforms<`UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms'::__l2::<lambda_1>_>'
::__l25::<lambda_2>::operator()(void *this,FEntityAllocation *param_1,FInterrogationKey *param_2)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  FInterrogationKey FVar12;
  bool bVar13;
  FInterrogationChannel FVar14;
  uint uVar15;
  longlong *plVar16;
  TQuat<double> *pTVar17;
  FComponentHeader *pFVar18;
  longlong lVar19;
  FInterrogationChannel FVar20;
  FComponentHeader *pFVar21;
  EComponentHeaderLockMode EVar22;
  longlong lVar23;
  longlong lVar24;
  FComponentHeader *pFVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined4 uVar29;
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
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  ushort local_288;
  FInterrogationKey local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  FInterrogationKey *local_248;
  TRotator<double> local_240;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  TQuat<double> local_208;
  undefined8 local_1d8;
  TQuat<double> local_1c8;
  longlong local_1a8 [2];
  longlong local_198;
  longlong local_180;
  longlong local_168;
  longlong local_150;
  longlong local_138;
  longlong local_120;
  longlong local_108;
  longlong local_f0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_288 = param_1->Size;
  lVar26 = 9;
  plVar16 = local_1a8;
  do {
    *plVar16 = 0;
    plVar16[2] = 0;
    plVar16 = plVar16 + 3;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  plVar16 = local_1a8;
  lVar26 = 0xce;
  local_280 = (FInterrogationKey)this;
  local_248 = param_2;
  do {
    pFVar25 = (FComponentHeader *)0x0;
    pFVar21 = param_1->ComponentHeaders;
    pFVar18 = pFVar21 + param_1->NumComponents;
    for (; pFVar21 != pFVar18; pFVar21 = pFVar21 + 1) {
      if ((pFVar21->ComponentType).Value ==
          *(ushort *)(lVar26 + *(longlong *)((longlong)this + 0x18))) {
        EVar22 = param_1->LockMode;
        if (EVar22 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar21->ReadWriteLock);
        }
        LOCK();
        pFVar21->ScheduledAccessCount = (atomic<int>)((int)pFVar21->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar25 = (FComponentHeader *)pFVar21->Components;
        goto LAB_14662575b;
      }
    }
    EVar22 = LockFree;
    local_1d8 = 0;
    pFVar21 = pFVar25;
LAB_14662575b:
    if (*plVar16 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar16 + 0x30);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)plVar16[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*plVar16 + 0x20));
      }
    }
    FVar12 = local_280;
    *plVar16 = (longlong)pFVar21;
    lVar26 = lVar26 + 2;
    *(EComponentHeaderLockMode *)(plVar16 + 1) = EVar22;
    plVar16[2] = (longlong)pFVar25;
    plVar16 = plVar16 + 3;
    if (0xdf < lVar26) {
      uVar27 = (ulonglong)local_288;
      if (uVar27 != 0) {
        lVar26 = 0;
        lVar28 = 0;
        do {
          local_280 = local_248[lVar26];
          FVar20 = local_280.Channel.Value;
          if ((FVar20.Value == 0xffffffff) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Value != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                  ,0xa1,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar23 = *(longlong *)((longlong)FVar12 + 8);
          if (((FVar20.Value < 0) || (*(int *)(lVar23 + 0x18) <= FVar20.Value)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(lVar23 + 0x10) != 0) {
            lVar23 = *(longlong *)(lVar23 + 0x10);
          }
          FVar14.Value = FVar20.Value;
          if (FVar20.Value < 0) {
            FVar14.Value = FVar20.Value + 0x1f;
          }
          if ((*(uint *)(lVar23 + (longlong)(FVar14.Value >> 5) * 4) >> (FVar20.Value & 0x1fU) & 1)
              != 0) {
            lVar24 = (longlong)FVar20.Value;
            lVar23 = **(longlong **)((longlong)FVar12 + 0x10);
            lVar19 = lVar24 * 0x60;
            local_208.X = *(double *)(lVar23 + lVar19);
            local_208.Y = ((double *)(lVar23 + lVar19))[1];
            pdVar2 = (double *)(lVar23 + 0x10 + lVar19);
            local_208.Z = *pdVar2;
            local_208.W = pdVar2[1];
            puVar3 = (undefined8 *)(lVar23 + 0x20 + lVar19);
            local_278 = *puVar3;
            uStack_270 = puVar3[1];
            local_268 = *(undefined8 *)(lVar23 + 0x30 + lVar19);
            puVar3 = (undefined8 *)(lVar23 + 0x40 + lVar19);
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            uVar7 = *(undefined8 *)(lVar23 + 0x50 + lVar19);
            UE::Math::TQuat<double>::Rotator(&local_208,&local_240);
            if (local_198 == 0) {
              uVar39 = (undefined4)local_278;
              uVar40 = (undefined4)((ulonglong)local_278 >> 0x20);
            }
            else {
              local_278 = *(undefined8 *)(local_198 + lVar28);
              uVar39 = (undefined4)local_278;
              uVar40 = (undefined4)((ulonglong)local_278 >> 0x20);
            }
            if (local_180 == 0) {
              uVar37 = (undefined4)uStack_270;
              uVar38 = (undefined4)((ulonglong)uStack_270 >> 0x20);
            }
            else {
              uStack_270 = *(undefined8 *)(local_180 + lVar26 * 8);
              uVar37 = (undefined4)uStack_270;
              uVar38 = (undefined4)((ulonglong)uStack_270 >> 0x20);
            }
            if (local_168 == 0) {
              uVar35 = (undefined4)local_268;
              uVar36 = (undefined4)((ulonglong)local_268 >> 0x20);
            }
            else {
              local_268 = *(undefined8 *)(local_168 + lVar26 * 8);
              uVar35 = (undefined4)local_268;
              uVar36 = (undefined4)((ulonglong)local_268 >> 0x20);
            }
            if (local_150 != 0) {
              local_240.Roll = *(double *)(local_150 + lVar26 * 8);
            }
            if (local_138 != 0) {
              local_240.Pitch = *(double *)(local_138 + lVar26 * 8);
            }
            if (local_120 != 0) {
              local_240.Yaw = *(double *)(local_120 + lVar26 * 8);
            }
            if (local_108 == 0) {
              uVar33 = (undefined4)uVar8;
              uVar34 = (undefined4)((ulonglong)uVar8 >> 0x20);
              local_260 = uVar8;
            }
            else {
              local_260 = *(undefined8 *)(local_108 + lVar26 * 8);
              uVar33 = (undefined4)local_260;
              uVar34 = (undefined4)((ulonglong)local_260 >> 0x20);
            }
            if (local_f0 == 0) {
              uVar31 = (undefined4)uVar9;
              uVar32 = (undefined4)((ulonglong)uVar9 >> 0x20);
              uStack_258 = uVar9;
            }
            else {
              uStack_258 = *(undefined8 *)(local_f0 + lVar26 * 8);
              uVar31 = (undefined4)uStack_258;
              uVar32 = (undefined4)((ulonglong)uStack_258 >> 0x20);
            }
            if (local_d8 == 0) {
              uVar29 = (undefined4)uVar7;
              uVar30 = (undefined4)((ulonglong)uVar7 >> 0x20);
              local_250 = uVar7;
            }
            else {
              local_250 = *(undefined8 *)(local_d8 + lVar26 * 8);
              uVar29 = (undefined4)local_250;
              uVar30 = (undefined4)((ulonglong)local_250 >> 0x20);
            }
            pTVar17 = UE::Math::TRotator<double>::Quaternion(&local_240,&local_1c8);
            lVar19 = (longlong)local_280.InterrogationIndex;
            local_218 = pTVar17->Z;
            dStack_210 = pTVar17->W;
            dVar10 = pTVar17->X;
            dVar11 = pTVar17->Y;
            lVar23 = **(longlong **)FVar12;
            iVar5 = *(int *)(lVar23 + 8 + lVar24 * 0x10);
            uVar15 = 0;
            if (local_280.InterrogationIndex < iVar5) {
              uVar15 = (uint)~local_280.InterrogationIndex >> 0x1f;
            }
            local_228 = dVar10;
            dStack_220 = dVar11;
            if ((uVar15 == 0) &&
               (local_298 = lVar19, local_290 = (longlong)iVar5,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar23 = *(longlong *)(lVar23 + lVar24 * 0x10);
            lVar19 = lVar19 * 0x60;
            *(double *)(lVar19 + lVar23) = dVar10;
            ((double *)(lVar19 + lVar23))[1] = dVar11;
            pdVar2 = (double *)(lVar19 + 0x10 + lVar23);
            *pdVar2 = local_218;
            pdVar2[1] = dStack_210;
            puVar4 = (undefined4 *)(lVar19 + 0x20 + lVar23);
            *puVar4 = uVar39;
            puVar4[1] = uVar40;
            puVar4[2] = uVar37;
            puVar4[3] = uVar38;
            puVar3 = (undefined8 *)(lVar19 + 0x30 + lVar23);
            *puVar3 = CONCAT44(uVar36,uVar35);
            puVar3[1] = 0;
            puVar4 = (undefined4 *)(lVar19 + 0x40 + lVar23);
            *puVar4 = uVar33;
            puVar4[1] = uVar34;
            puVar4[2] = uVar31;
            puVar4[3] = uVar32;
            puVar3 = (undefined8 *)(lVar19 + 0x50 + lVar23);
            *puVar3 = CONCAT44(uVar30,uVar29);
            puVar3[1] = 0;
          }
          lVar26 = lVar26 + 1;
          lVar28 = lVar28 + 8;
        } while (lVar26 < (longlong)uVar27);
      }
      lVar26 = 9;
      plVar16 = &local_d0;
      do {
        lVar26 = lVar26 + -1;
        if (plVar16[-3] != 0) {
          LOCK();
          piVar1 = (int *)(plVar16[-3] + 0x30);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((int)plVar16[-2] == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar16[-3] + 0x20));
          }
        }
        plVar16 = plVar16 + -3;
      } while (lVar26 != 0);
      return;
    }
  } while( true );
}

// operator() @ 146625bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::MovieScene::FInterrogationChannels::
QueryLocalSpaceTransforms<`UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms'::__l2::<lambda_1>_>'
::__l29::<lambda_2>::operator()(void *this,FEntityAllocation *param_1,FInterrogationKey *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FInterrogationChannel FVar7;
  uint uVar8;
  longlong *plVar9;
  FComponentHeader *pFVar10;
  FInterrogationChannel FVar11;
  FComponentHeader *pFVar12;
  longlong lVar13;
  EComponentHeaderLockMode EVar14;
  longlong lVar15;
  FComponentHeader *pFVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  ushort local_1c8;
  undefined8 *local_1c0;
  FInterrogationKey *local_1b8;
  FInterrogationKey local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_148;
  longlong local_138 [2];
  longlong local_128;
  longlong local_110;
  longlong local_f8;
  longlong local_e0;
  longlong local_c8;
  longlong local_b0;
  longlong local_98;
  longlong local_80;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  plVar9 = local_138;
  lVar17 = 9;
  local_1c8 = param_1->Size;
  do {
    *plVar9 = 0;
    plVar9[2] = 0;
    plVar9 = plVar9 + 3;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  plVar9 = local_138;
  lVar17 = 0xce;
  local_1c0 = this;
  local_1b8 = param_2;
  do {
    pFVar16 = (FComponentHeader *)0x0;
    pFVar12 = param_1->ComponentHeaders;
    pFVar10 = pFVar12 + param_1->NumComponents;
    for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value ==
          *(ushort *)(lVar17 + *(longlong *)((longlong)this + 0x18))) {
        EVar14 = param_1->LockMode;
        if (EVar14 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
        }
        LOCK();
        pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar16 = (FComponentHeader *)pFVar12->Components;
        goto LAB_146625c9b;
      }
    }
    EVar14 = LockFree;
    local_148 = 0;
    pFVar12 = pFVar16;
LAB_146625c9b:
    if (*plVar9 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar9 + 0x30);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)plVar9[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*plVar9 + 0x20));
      }
    }
    *plVar9 = (longlong)pFVar12;
    lVar17 = lVar17 + 2;
    *(EComponentHeaderLockMode *)(plVar9 + 1) = EVar14;
    plVar9[2] = (longlong)pFVar16;
    plVar9 = plVar9 + 3;
    if (0xdf < lVar17) {
      uVar18 = (ulonglong)local_1c8;
      if (uVar18 != 0) {
        lVar17 = 0;
        lVar21 = 0;
        lVar19 = 0;
        puVar20 = local_1c0;
        do {
          lVar15 = puVar20[1];
          local_1b0 = local_1b8[lVar17];
          FVar11 = local_1b0.Channel.Value;
          if ((FVar11.Value == 0xffffffff) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                 ,0xa1,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((FVar11.Value < 0) || (*(int *)(lVar15 + 0x18) <= FVar11.Value)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(longlong *)(lVar15 + 0x10) != 0) {
            lVar15 = *(longlong *)(lVar15 + 0x10);
          }
          FVar7.Value = FVar11.Value;
          if (FVar11.Value < 0) {
            FVar7.Value = FVar11.Value + 0x1f;
          }
          if ((*(uint *)(lVar15 + (longlong)(FVar7.Value >> 5) * 4) >> (FVar11.Value & 0x1fU) & 1)
              != 0) {
            lVar15 = *(longlong *)puVar20[2];
            uVar3 = *(undefined8 *)(lVar15 + 0x40 + lVar21);
            uVar22 = (undefined4)uVar3;
            uVar23 = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_1a8 = *(undefined8 *)(lVar15 + lVar21);
            uStack_1a0 = ((undefined8 *)(lVar15 + lVar21))[1];
            puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar21);
            local_198 = *puVar2;
            uStack_190 = puVar2[1];
            puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar21);
            local_188 = *puVar2;
            uStack_180 = puVar2[1];
            puVar2 = (undefined8 *)(lVar15 + 0x30 + lVar21);
            local_178 = *puVar2;
            uStack_170 = puVar2[1];
            if (local_128 != 0) {
              local_1a8 = *(undefined8 *)(local_128 + lVar19);
            }
            if (local_110 != 0) {
              uStack_1a0 = *(undefined8 *)(local_110 + lVar17 * 8);
            }
            if (local_f8 != 0) {
              local_198 = *(undefined8 *)(local_f8 + lVar17 * 8);
            }
            if (local_e0 != 0) {
              uStack_190 = *(undefined8 *)(local_e0 + lVar17 * 8);
            }
            if (local_c8 != 0) {
              local_188 = *(undefined8 *)(local_c8 + lVar17 * 8);
            }
            if (local_b0 != 0) {
              uStack_180 = *(undefined8 *)(local_b0 + lVar17 * 8);
            }
            if (local_98 != 0) {
              local_178 = *(undefined8 *)(local_98 + lVar17 * 8);
            }
            if (local_80 != 0) {
              uStack_170 = *(undefined8 *)(local_80 + lVar17 * 8);
            }
            if (local_68 != 0) {
              local_168 = *(undefined8 *)(local_68 + lVar17 * 8);
              uVar22 = (undefined4)local_168;
              uVar23 = (undefined4)((ulonglong)local_168 >> 0x20);
            }
            plVar9 = *(longlong **)*puVar20;
            if ((FVar11.Value == 0xffffffff) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Value != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                   ,0xa1,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar15 = *plVar9;
            lVar13 = (longlong)local_1b0.InterrogationIndex;
            iVar4 = *(int *)(lVar15 + 8 + (longlong)FVar11.Value * 0x10);
            uVar8 = 0;
            if (local_1b0.InterrogationIndex < iVar4) {
              uVar8 = (uint)~local_1b0.InterrogationIndex >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (local_1d8 = lVar13, local_1d0 = (longlong)iVar4,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar15 = *(longlong *)(lVar15 + (longlong)FVar11.Value * 0x10);
            puVar20 = (undefined8 *)(lVar15 + lVar13 * 0x48);
            *puVar20 = local_1a8;
            puVar20[1] = uStack_1a0;
            puVar20 = (undefined8 *)(lVar15 + 0x10 + lVar13 * 0x48);
            *puVar20 = local_198;
            puVar20[1] = uStack_190;
            puVar20 = (undefined8 *)(lVar15 + 0x20 + lVar13 * 0x48);
            *puVar20 = local_188;
            puVar20[1] = uStack_180;
            puVar20 = (undefined8 *)(lVar15 + 0x30 + lVar13 * 0x48);
            *puVar20 = local_178;
            puVar20[1] = uStack_170;
            *(ulonglong *)(lVar15 + 0x40 + lVar13 * 0x48) = CONCAT44(uVar23,uVar22);
            puVar20 = local_1c0;
          }
          lVar17 = lVar17 + 1;
          lVar21 = lVar21 + 0x48;
          lVar19 = lVar19 + 8;
        } while (lVar17 < (longlong)uVar18);
      }
      lVar17 = 9;
      plVar9 = &local_60;
      do {
        lVar17 = lVar17 + -1;
        if (plVar9[-3] != 0) {
          LOCK();
          piVar1 = (int *)(plVar9[-3] + 0x30);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((int)plVar9[-2] == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar9[-3] + 0x20));
          }
        }
        plVar9 = plVar9 + -3;
      } while (lVar17 != 0);
      return;
    }
  } while( true );
}

// operator() @ 146626010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::MovieScene::FInterrogationChannels::
QueryLocalSpaceTransforms<`UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms'::__l2::<lambda_1>_>'
::__l29::<lambda_2>::operator()(void *this,FEntityAllocation *param_1,FInterrogationKey *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FInterrogationChannel FVar7;
  uint uVar8;
  longlong *plVar9;
  FComponentHeader *pFVar10;
  FInterrogationChannel FVar11;
  FComponentHeader *pFVar12;
  longlong lVar13;
  EComponentHeaderLockMode EVar14;
  longlong lVar15;
  FComponentHeader *pFVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  ushort local_1c8;
  undefined8 *local_1c0;
  FInterrogationKey *local_1b8;
  FInterrogationKey local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_148;
  longlong local_138 [2];
  longlong local_128;
  longlong local_110;
  longlong local_f8;
  longlong local_e0;
  longlong local_c8;
  longlong local_b0;
  longlong local_98;
  longlong local_80;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  plVar9 = local_138;
  lVar17 = 9;
  local_1c8 = param_1->Size;
  do {
    *plVar9 = 0;
    plVar9[2] = 0;
    plVar9 = plVar9 + 3;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  plVar9 = local_138;
  lVar17 = 0xce;
  local_1c0 = this;
  local_1b8 = param_2;
  do {
    pFVar16 = (FComponentHeader *)0x0;
    pFVar12 = param_1->ComponentHeaders;
    pFVar10 = pFVar12 + param_1->NumComponents;
    for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value ==
          *(ushort *)(lVar17 + *(longlong *)((longlong)this + 0x18))) {
        EVar14 = param_1->LockMode;
        if (EVar14 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
        }
        LOCK();
        pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar16 = (FComponentHeader *)pFVar12->Components;
        goto LAB_1466260db;
      }
    }
    EVar14 = LockFree;
    local_148 = 0;
    pFVar12 = pFVar16;
LAB_1466260db:
    if (*plVar9 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar9 + 0x30);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)plVar9[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*plVar9 + 0x20));
      }
    }
    *plVar9 = (longlong)pFVar12;
    lVar17 = lVar17 + 2;
    *(EComponentHeaderLockMode *)(plVar9 + 1) = EVar14;
    plVar9[2] = (longlong)pFVar16;
    plVar9 = plVar9 + 3;
    if (0xdf < lVar17) {
      uVar18 = (ulonglong)local_1c8;
      if (uVar18 != 0) {
        lVar17 = 0;
        lVar21 = 0;
        lVar19 = 0;
        puVar20 = local_1c0;
        do {
          lVar15 = puVar20[1];
          local_1b0 = local_1b8[lVar17];
          FVar11 = local_1b0.Channel.Value;
          if ((FVar11.Value == 0xffffffff) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                 ,0xa1,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((FVar11.Value < 0) || (*(int *)(lVar15 + 0x18) <= FVar11.Value)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(longlong *)(lVar15 + 0x10) != 0) {
            lVar15 = *(longlong *)(lVar15 + 0x10);
          }
          FVar7.Value = FVar11.Value;
          if (FVar11.Value < 0) {
            FVar7.Value = FVar11.Value + 0x1f;
          }
          if ((*(uint *)(lVar15 + (longlong)(FVar7.Value >> 5) * 4) >> (FVar11.Value & 0x1fU) & 1)
              != 0) {
            lVar15 = *(longlong *)puVar20[2];
            uVar3 = *(undefined8 *)(lVar15 + 0x40 + lVar21);
            uVar22 = (undefined4)uVar3;
            uVar23 = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_1a8 = *(undefined8 *)(lVar15 + lVar21);
            uStack_1a0 = ((undefined8 *)(lVar15 + lVar21))[1];
            puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar21);
            local_198 = *puVar2;
            uStack_190 = puVar2[1];
            puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar21);
            local_188 = *puVar2;
            uStack_180 = puVar2[1];
            puVar2 = (undefined8 *)(lVar15 + 0x30 + lVar21);
            local_178 = *puVar2;
            uStack_170 = puVar2[1];
            if (local_128 != 0) {
              local_1a8 = *(undefined8 *)(local_128 + lVar19);
            }
            if (local_110 != 0) {
              uStack_1a0 = *(undefined8 *)(local_110 + lVar17 * 8);
            }
            if (local_f8 != 0) {
              local_198 = *(undefined8 *)(local_f8 + lVar17 * 8);
            }
            if (local_e0 != 0) {
              uStack_190 = *(undefined8 *)(local_e0 + lVar17 * 8);
            }
            if (local_c8 != 0) {
              local_188 = *(undefined8 *)(local_c8 + lVar17 * 8);
            }
            if (local_b0 != 0) {
              uStack_180 = *(undefined8 *)(local_b0 + lVar17 * 8);
            }
            if (local_98 != 0) {
              local_178 = *(undefined8 *)(local_98 + lVar17 * 8);
            }
            if (local_80 != 0) {
              uStack_170 = *(undefined8 *)(local_80 + lVar17 * 8);
            }
            if (local_68 != 0) {
              local_168 = *(undefined8 *)(local_68 + lVar17 * 8);
              uVar22 = (undefined4)local_168;
              uVar23 = (undefined4)((ulonglong)local_168 >> 0x20);
            }
            plVar9 = *(longlong **)*puVar20;
            if ((FVar11.Value == 0xffffffff) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Value != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                   ,0xa1,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar15 = *plVar9;
            lVar13 = (longlong)local_1b0.InterrogationIndex;
            iVar4 = *(int *)(lVar15 + 8 + (longlong)FVar11.Value * 0x10);
            uVar8 = 0;
            if (local_1b0.InterrogationIndex < iVar4) {
              uVar8 = (uint)~local_1b0.InterrogationIndex >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (local_1d8 = lVar13, local_1d0 = (longlong)iVar4,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar15 = *(longlong *)(lVar15 + (longlong)FVar11.Value * 0x10);
            puVar20 = (undefined8 *)(lVar15 + lVar13 * 0x48);
            *puVar20 = local_1a8;
            puVar20[1] = uStack_1a0;
            puVar20 = (undefined8 *)(lVar15 + 0x10 + lVar13 * 0x48);
            *puVar20 = local_198;
            puVar20[1] = uStack_190;
            puVar20 = (undefined8 *)(lVar15 + 0x20 + lVar13 * 0x48);
            *puVar20 = local_188;
            puVar20[1] = uStack_180;
            puVar20 = (undefined8 *)(lVar15 + 0x30 + lVar13 * 0x48);
            *puVar20 = local_178;
            puVar20[1] = uStack_170;
            *(ulonglong *)(lVar15 + 0x40 + lVar13 * 0x48) = CONCAT44(uVar23,uVar22);
            puVar20 = local_1c0;
          }
          lVar17 = lVar17 + 1;
          lVar21 = lVar21 + 0x48;
          lVar19 = lVar19 + 8;
        } while (lVar17 < (longlong)uVar18);
      }
      lVar17 = 9;
      plVar9 = &local_60;
      do {
        lVar17 = lVar17 + -1;
        if (plVar9[-3] != 0) {
          LOCK();
          piVar1 = (int *)(plVar9[-3] + 0x30);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((int)plVar9[-2] == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar9[-3] + 0x20));
          }
        }
        plVar9 = plVar9 + -3;
      } while (lVar17 != 0);
      return;
    }
  } while( true );
}

// operator() @ 146626450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::MovieScene::FInterrogationChannels::
QueryLocalSpaceTransforms<`UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms'::__l2::<lambda_1>_>'
::__l29::<lambda_2>::operator()(void *this,FEntityAllocation *param_1,FInterrogationKey *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  FInterrogationKey FVar7;
  bool bVar8;
  uint uVar9;
  longlong *plVar10;
  FComponentHeader *pFVar11;
  FInterrogationChannel FVar12;
  FComponentHeader *pFVar13;
  FInterrogationKey FVar14;
  longlong lVar15;
  EComponentHeaderLockMode EVar16;
  FComponentHeader *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  ushort local_1c8;
  FInterrogationKey local_1c0;
  FInterrogationKey *local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_148;
  longlong local_138 [2];
  longlong local_128;
  longlong local_110;
  longlong local_f8;
  longlong local_e0;
  longlong local_c8;
  longlong local_b0;
  longlong local_98;
  longlong local_80;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  plVar10 = local_138;
  lVar18 = 9;
  local_1c8 = param_1->Size;
  do {
    *plVar10 = 0;
    plVar10[2] = 0;
    plVar10 = plVar10 + 3;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  plVar10 = local_138;
  lVar18 = 0xce;
  local_1c0 = (FInterrogationKey)this;
  local_1b8 = param_2;
  do {
    pFVar17 = (FComponentHeader *)0x0;
    pFVar13 = param_1->ComponentHeaders;
    pFVar11 = pFVar13 + param_1->NumComponents;
    for (; pFVar13 != pFVar11; pFVar13 = pFVar13 + 1) {
      if ((pFVar13->ComponentType).Value ==
          *(ushort *)(lVar18 + *(longlong *)((longlong)this + 0x18))) {
        EVar16 = param_1->LockMode;
        if (EVar16 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
        UNLOCK();
        pFVar17 = (FComponentHeader *)pFVar13->Components;
        goto LAB_14662651b;
      }
    }
    EVar16 = LockFree;
    local_148 = 0;
    pFVar13 = pFVar17;
LAB_14662651b:
    if (*plVar10 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar10 + 0x30);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)plVar10[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*plVar10 + 0x20));
      }
    }
    FVar7 = local_1c0;
    *plVar10 = (longlong)pFVar13;
    lVar18 = lVar18 + 2;
    *(EComponentHeaderLockMode *)(plVar10 + 1) = EVar16;
    plVar10[2] = (longlong)pFVar17;
    plVar10 = plVar10 + 3;
    if (0xdf < lVar18) {
      uVar19 = (ulonglong)local_1c8;
      if (uVar19 != 0) {
        lVar18 = 0;
        lVar20 = 0;
        lVar21 = 0;
        do {
          lVar15 = *(longlong *)((longlong)FVar7 + 8);
          FVar14 = local_1b8[lVar18];
          FVar12 = FVar14.Channel.Value;
          local_1c0 = FVar14;
          if ((FVar12.Value == 0xffffffff) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                 ,0xa1,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((FVar12.Value < 0) || (*(int *)(lVar15 + 0x18) <= FVar12.Value)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(lVar15 + 0x10) != 0) {
            lVar15 = *(longlong *)(lVar15 + 0x10);
          }
          if (FVar12.Value < 0) {
            FVar14.Channel.Value = FVar12.Value + 0x1f;
            FVar14.InterrogationIndex = 0;
          }
          if ((*(uint *)(lVar15 + (longlong)(FVar14.Channel.Value.Value >> 5) * 4) >>
               (FVar12.Value & 0x1fU) & 1) != 0) {
            lVar15 = **(longlong **)((longlong)FVar7 + 0x10);
            uVar3 = *(undefined8 *)(lVar15 + 0x40 + lVar20);
            uVar22 = (undefined4)uVar3;
            uVar23 = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_1a8 = *(undefined8 *)(lVar15 + lVar20);
            uStack_1a0 = ((undefined8 *)(lVar15 + lVar20))[1];
            puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar20);
            local_198 = *puVar2;
            uStack_190 = puVar2[1];
            puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar20);
            local_188 = *puVar2;
            uStack_180 = puVar2[1];
            puVar2 = (undefined8 *)(lVar15 + 0x30 + lVar20);
            local_178 = *puVar2;
            uStack_170 = puVar2[1];
            if (local_128 != 0) {
              local_1a8 = *(undefined8 *)(local_128 + lVar21);
            }
            if (local_110 != 0) {
              uStack_1a0 = *(undefined8 *)(local_110 + lVar18 * 8);
            }
            if (local_f8 != 0) {
              local_198 = *(undefined8 *)(local_f8 + lVar18 * 8);
            }
            if (local_e0 != 0) {
              uStack_190 = *(undefined8 *)(local_e0 + lVar18 * 8);
            }
            if (local_c8 != 0) {
              local_188 = *(undefined8 *)(local_c8 + lVar18 * 8);
            }
            if (local_b0 != 0) {
              uStack_180 = *(undefined8 *)(local_b0 + lVar18 * 8);
            }
            if (local_98 != 0) {
              local_178 = *(undefined8 *)(local_98 + lVar18 * 8);
            }
            if (local_80 != 0) {
              uStack_170 = *(undefined8 *)(local_80 + lVar18 * 8);
            }
            if (local_68 != 0) {
              local_168 = *(undefined8 *)(local_68 + lVar18 * 8);
              uVar22 = (undefined4)local_168;
              uVar23 = (undefined4)((ulonglong)local_168 >> 0x20);
            }
            lVar15 = (longlong)local_1c0.InterrogationIndex;
            plVar10 = (longlong *)**(longlong **)FVar7;
            iVar4 = (int)plVar10[1];
            uVar9 = 0;
            if (local_1c0.InterrogationIndex < iVar4) {
              uVar9 = (uint)~local_1c0.InterrogationIndex >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (local_1d8 = lVar15, local_1d0 = (longlong)iVar4,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar5 = *plVar10;
            puVar2 = (undefined8 *)(lVar5 + lVar15 * 0x48);
            *puVar2 = local_1a8;
            puVar2[1] = uStack_1a0;
            puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15 * 0x48);
            *puVar2 = local_198;
            puVar2[1] = uStack_190;
            puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15 * 0x48);
            *puVar2 = local_188;
            puVar2[1] = uStack_180;
            puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar15 * 0x48);
            *puVar2 = local_178;
            puVar2[1] = uStack_170;
            *(ulonglong *)(lVar5 + 0x40 + lVar15 * 0x48) = CONCAT44(uVar23,uVar22);
          }
          lVar18 = lVar18 + 1;
          lVar20 = lVar20 + 0x48;
          lVar21 = lVar21 + 8;
        } while (lVar18 < (longlong)uVar19);
      }
      lVar18 = 9;
      plVar10 = &local_60;
      do {
        lVar18 = lVar18 + -1;
        if (plVar10[-3] != 0) {
          LOCK();
          piVar1 = (int *)(plVar10[-3] + 0x30);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((int)plVar10[-2] == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar10[-3] + 0x20));
          }
        }
        plVar10 = plVar10 + -3;
      } while (lVar18 != 0);
      return;
    }
  } while( true );
}

// operator() @ 146626850

bool __thiscall
`UE::MovieScene::FInterrogationChannels::
QueryWorldSpaceTransforms<`UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms'::__l2::<lambda_1>_>'
::__l26::<lambda_3>::operator()
          (void *this,FInterrogationChannel param_1,FInterrogationChannel param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  plVar2 = *(longlong **)this;
  if (param_1.Value == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  plVar3 = *(longlong **)this;
  if (param_2.Value == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar7 = 0;
  if (param_1.Value < (int)plVar2[1]) {
    uVar7 = (uint)~param_1.Value >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_1.Value * 4);
  uVar7 = 0;
  if (param_2.Value < (int)plVar3[1]) {
    uVar7 = (uint)~param_2.Value >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  return *(int *)(*plVar3 + (longlong)param_2.Value * 4) < iVar1;
}

// operator() @ 146626990

bool __thiscall
`UE::MovieScene::FInterrogationChannels::
QueryWorldSpaceTransforms<`UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms'::__l2::<lambda_1>_>'
::__l26::<lambda_3>::operator()
          (void *this,FInterrogationChannel param_1,FInterrogationChannel param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  plVar2 = *(longlong **)this;
  if (param_1.Value == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  plVar3 = *(longlong **)this;
  if (param_2.Value == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar7 = 0;
  if (param_1.Value < (int)plVar2[1]) {
    uVar7 = (uint)~param_1.Value >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_1.Value * 4);
  uVar7 = 0;
  if (param_2.Value < (int)plVar3[1]) {
    uVar7 = (uint)~param_2.Value >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  return *(int *)(*plVar3 + (longlong)param_2.Value * 4) < iVar1;
}

// operator() @ 146626ad0

bool __thiscall
`UE::MovieScene::FInterrogationChannels::
QueryWorldSpaceTransforms<`UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms'::__l2::<lambda_1>_>'
::__l26::<lambda_3>::operator()
          (void *this,FInterrogationChannel param_1,FInterrogationChannel param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  plVar2 = *(longlong **)this;
  if (param_1.Value == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  plVar3 = *(longlong **)this;
  if (param_2.Value == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar7 = 0;
  if (param_1.Value < (int)plVar2[1]) {
    uVar7 = (uint)~param_1.Value >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_1.Value * 4);
  uVar7 = 0;
  if (param_2.Value < (int)plVar3[1]) {
    uVar7 = (uint)~param_2.Value >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  return *(int *)(*plVar3 + (longlong)param_2.Value * 4) < iVar1;
}

// ActivateChannel @ 146633eb0

void __thiscall
UE::MovieScene::FInterrogationChannels::ActivateChannel
          (FInterrogationChannels *this,FInterrogationChannel param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  
  if (param_1.Value == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((-1 < param_1.Value) && (param_1.Value < (this->ActiveChannelBits).NumBits))
  goto LAB_146633f24;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index>=0 && Index<NumBits",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                     ,0x5be,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146633f24:
  FVar4 = (this->ActiveChannelBits).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->ActiveChannelBits;
  }
  puVar1 = (uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1.Value + (param_1.Value >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1.Value & 0x1f);
  return;
}

// AddInterrogation @ 146638b50

int __thiscall
UE::MovieScene::FInterrogationChannels::AddInterrogation
          (FInterrogationChannels *this,FInterrogationParams *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<UE::MovieScene::FInterrogationParams,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 local_res8 [8];
  
  if ((this->Interrogations).ArrayNum == 0x7fffffff) {
    local_res8[0] = 0;
    bVar4 = `UE::MovieScene::FInterrogationChannels::AddInterrogation'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar4) {
      return -1;
    }
  }
  iVar5 = (this->Interrogations).ArrayNum;
  pTVar7 = &this->Interrogations;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Interrogations).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar6 = (this->Interrogations).ArrayNum;
  piVar1 = &(this->Interrogations).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar7->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  (this->Interrogations).ArrayNum = iVar6 + 1;
  *(FFrameTime *)(pFVar2 + (longlong)iVar6 * 8) = param_1->Time;
  return iVar5;
}

// AllocateChannel @ 14663bb10

FInterrogationChannel __thiscall
UE::MovieScene::FInterrogationChannels::AllocateChannel
          (FInterrogationChannels *this,UObject *param_1,FMovieScenePropertyBinding *param_2)

{
  AllocateChannel(this,param_1,(FInterrogationChannel)(int)param_2,
                  (FMovieScenePropertyBinding *)&DAT_ffffffff);
  return (FInterrogationChannel)(int)param_1;
}

// AllocateChannel @ 14663bb40

FInterrogationChannel __thiscall
UE::MovieScene::FInterrogationChannels::AllocateChannel
          (FInterrogationChannels *this,UObject *param_1,FInterrogationChannel param_2,
          FMovieScenePropertyBinding *param_3)

{
  uint *puVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FInterrogationChannelInfo *pFVar6;
  uint uVar7;
  int in_register_00000084;
  FWeakObjectPtr FVar8;
  ForElementType<unsigned_int> FVar9;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FInterrogationChannel local_res20 [2];
  FName *in_stack_00000028;
  FWeakObjectPtr local_48;
  UObject *local_40;
  
  FVar8.ObjectSerialNumber = in_register_00000084;
  FVar8.ObjectIndex = param_2.Value;
  if ((0x7ffffffe < (this->ActiveChannelBits).NumBits) &&
     (bVar4 = `UE::MovieScene::FInterrogationChannels::AllocateChannel'::__l3::<lambda_1>::
              operator()(local_res20), !bVar4)) {
    *(undefined4 *)param_1 = 0xffffffff;
    return (FInterrogationChannel)(int)param_1;
  }
  iVar2 = (this->ActiveChannelBits).NumBits;
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->ActiveChannelBits,1);
  FVar9 = (this->ActiveChannelBits).AllocatorInstance.SecondaryData;
  uVar7 = iVar5 >> 0x1f & 0x1f;
  iVar5 = iVar5 + uVar7;
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)&this->ActiveChannelBits;
  }
  puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar7 & 0x1f));
  if (((int)param_3 != -1) || (in_stack_00000028[1] != (FName)0x0)) {
    local_res20[0].Value = iVar2;
    pFVar6 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
             ::Find(&(this->SparseChannelInfo).ChannelInfo,local_res20);
    if (pFVar6 == (FInterrogationChannelInfo *)0x0) {
      pFVar6 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
               ::Emplace<UE::MovieScene::FInterrogationChannel_const_&>
                         (&(this->SparseChannelInfo).ChannelInfo,local_res20);
    }
    (pFVar6->ParentChannel).Value = (int)param_3;
    FVar3 = in_stack_00000028[1];
    (pFVar6->PropertyBinding).PropertyName = *in_stack_00000028;
    (pFVar6->PropertyBinding).PropertyPath = FVar3;
    *(uint *)&(pFVar6->PropertyBinding).bCanUseClassLookup =
         in_stack_00000028[2].ComparisonIndex.Value;
  }
  *(int *)param_1 = iVar2;
  if (iVar2 != -1) {
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    if (FVar8 != (FWeakObjectPtr)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar8);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_48 = FVar8;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar8);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_48);
      local_res10 = local_res8;
    }
    local_48 = (FWeakObjectPtr)&local_res10;
    local_40 = param_1;
    TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FObjectKey_&&,UE::MovieScene::FInterrogationChannel_const_&>_>
              ((TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FObjectKey_&&,UE::MovieScene::FInterrogationChannel_const_&>
                        *)local_res20,(bool *)&local_48);
    local_res20[0].Value = *(int *)param_1;
    pFVar6 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
             ::Find(&(this->SparseChannelInfo).ChannelInfo,local_res20);
    if (pFVar6 == (FInterrogationChannelInfo *)0x0) {
      pFVar6 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
               ::Emplace<UE::MovieScene::FInterrogationChannel_const_&>
                         (&(this->SparseChannelInfo).ChannelInfo,local_res20);
    }
    local_res8 = FVar8;
    if ((GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FWeakObjectPtr)0x0)) {
      GC::MarkAsReachable((UObject *)FVar8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)pFVar6,(FObjectPtr)&local_res8);
  }
  return (FInterrogationChannel)(int)param_1;
}

// AllocateChannel @ 14663bd40

FInterrogationChannel __thiscall
UE::MovieScene::FInterrogationChannels::AllocateChannel
          (FInterrogationChannels *this,FInterrogationChannel param_1,
          FMovieScenePropertyBinding *param_2)

{
  uint *puVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FInterrogationChannelInfo *pFVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<unsigned_int> FVar8;
  FName *in_R9;
  FInterrogationChannel local_res8 [2];
  
  if (0x7ffffffe < (this->ActiveChannelBits).NumBits) {
    bVar4 = `UE::MovieScene::FInterrogationChannels::AllocateChannel'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar4) {
      *(int *)CONCAT44(in_register_00000014,param_1.Value) = -1;
      return (FInterrogationChannel)param_1.Value;
    }
  }
  iVar2 = (this->ActiveChannelBits).NumBits;
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->ActiveChannelBits,1);
  FVar8 = (this->ActiveChannelBits).AllocatorInstance.SecondaryData;
  uVar7 = iVar5 >> 0x1f & 0x1f;
  iVar5 = iVar5 + uVar7;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->ActiveChannelBits;
  }
  puVar1 = (uint *)((longlong)FVar8 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar7 & 0x1f));
  if (((int)param_2 != -1) || (in_R9[1] != (FName)0x0)) {
    local_res8[0].Value = iVar2;
    pFVar6 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
             ::Find(&(this->SparseChannelInfo).ChannelInfo,local_res8);
    if (pFVar6 == (FInterrogationChannelInfo *)0x0) {
      pFVar6 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
               ::Emplace<UE::MovieScene::FInterrogationChannel_const_&>
                         (&(this->SparseChannelInfo).ChannelInfo,local_res8);
    }
    (pFVar6->ParentChannel).Value = (int)param_2;
    FVar3 = in_R9[1];
    (pFVar6->PropertyBinding).PropertyName = *in_R9;
    (pFVar6->PropertyBinding).PropertyPath = FVar3;
    *(uint *)&(pFVar6->PropertyBinding).bCanUseClassLookup = in_R9[2].ComparisonIndex.Value;
  }
  *(int *)CONCAT44(in_register_00000014,param_1.Value) = iVar2;
  return (FInterrogationChannel)param_1.Value;
}

// DeactivateChannel @ 146655510

void __thiscall
UE::MovieScene::FInterrogationChannels::DeactivateChannel
          (FInterrogationChannels *this,FInterrogationChannel param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  
  if (param_1.Value == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((-1 < param_1.Value) && (param_1.Value < (this->ActiveChannelBits).NumBits))
  goto LAB_146655584;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index>=0 && Index<NumBits",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                     ,0x5be,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146655584:
  FVar4 = (this->ActiveChannelBits).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->ActiveChannelBits;
  }
  puVar1 = (uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1.Value + (param_1.Value >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1.Value & 0x1f));
  return;
}

// FindChannel @ 146671e10

FInterrogationChannel __thiscall
UE::MovieScene::FInterrogationChannels::FindChannel(FInterrogationChannels *this,UObject *param_1)

{
  TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel> *pTVar1;
  UObject *in_R8;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (in_R8 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable(in_R8);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(in_R8);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  }
  pTVar1 = TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
                   *)this,(FObjectKey *)&local_res8);
  if (pTVar1 != (TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel> *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)&pTVar1->field_0x8;
    return (FInterrogationChannel)(int)param_1;
  }
  *(undefined4 *)param_1 = 0xffffffff;
  return (FInterrogationChannel)(int)param_1;
}

// QueryLocalSpaceTransforms @ 1466b39d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms
          (FInterrogationChannels *this,UMovieSceneEntitySystemLinker *param_1,
          TSparseArray<TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
          *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSparseArrayAllocationInfo *pFVar6;
  ForElementType<unsigned_int> FVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ForAnyElementType *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_a8 [32];
  <lambda_1> local_78;
  FSparseArrayAllocationInfo local_70;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_60.NumBits = (this->ActiveChannelBits).NumBits;
  uVar10 = 0;
  local_60.MaxBits = 0x80;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar9 = local_60.NumBits + 0x1fU >> 5;
  if (local_60.NumBits + 0x1fU >> 5 != 0) {
    if (4 < uVar9) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_60.AllocatorInstance,0,uVar9,4);
      local_60.MaxBits = uVar9 << 5;
    }
    FVar7 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar7 = local_60.AllocatorInstance.SecondaryData;
    }
    if (uVar9 < 9) {
      iVar8 = -1;
    }
    else {
      iVar8 = 0xff;
    }
    memset((void *)FVar7,iVar8,(ulonglong)uVar9 << 2);
    uVar9 = local_60.NumBits & 0x8000001f;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
    }
    if (uVar9 != 0) {
      FVar7 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_60.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar7 +
                       (longlong)((int)(local_60.NumBits + (local_60.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar9 & 0x1f);
    }
  }
  TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::Reserve
            ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)param_2,
             (this->ActiveChannelBits).NumBits);
  uVar13 = uVar10;
  if (0 < (this->ActiveChannelBits).NumBits) {
    do {
      uVar9 = (uint)uVar10;
      if (((int)uVar9 < 0) || (*(int *)&param_2->field_0x28 <= (int)uVar9)) {
LAB_1466b3b3e:
        pFVar6 = TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                           ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)param_2,&local_70
                            ,uVar9);
        puVar2 = pFVar6->Pointer;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
        }
      }
      else {
        if ((*(int *)&param_2->field_0x28 <= (int)uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar11 = &param_2->field_0x10;
        if (*(undefined1 **)&param_2->field_0x20 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&param_2->field_0x20;
        }
        uVar5 = uVar9;
        if ((int)uVar9 < 0) {
          uVar5 = uVar9 + 0x1f;
        }
        if ((*(uint *)(puVar11 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0)
        goto LAB_1466b3b3e;
      }
      uVar5 = (this->Interrogations).ArrayNum;
      pFVar12 = (ForAnyElementType *)(*(longlong *)param_2 + uVar13);
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      iVar8 = *(int *)((longlong)&pFVar12[1].Data + 4);
      *(undefined4 *)&pFVar12[1].Data = 0;
      if (iVar8 < (int)uVar5) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,uVar5,pFVar12,0,(int *)((longlong)&pFVar12[1].Data + 4));
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar9 + 1) < (this->ActiveChannelBits).NumBits);
  }
  local_78.OutTransformsByChannel = param_2;
  QueryLocalSpaceTransforms<_UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms_::__l2::<lambda_1>_>
            (this,param_1,&local_60,&local_78);
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

// QueryLocalSpaceTransforms @ 1466b3c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms
          (FInterrogationChannels *this,UMovieSceneEntitySystemLinker *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2,
          TSparseArray<TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
          *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FSparseArrayAllocationInfo *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  ForAnyElementType *pFVar15;
  uint uVar16;
  undefined1 *puVar17;
  <lambda_1> local_50;
  FSparseArrayAllocationInfo local_48;
  
  iVar2 = param_2->NumBits;
  iVar11 = 0;
  iVar13 = 0;
  if (iVar2 != 0) {
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)param_2;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar3;
    }
    uVar7 = *(uint *)FVar14;
    while (uVar7 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1466b3e15;
      uVar7 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar10 * 4);
    }
    uVar7 = -uVar7 & uVar7;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = iVar13 + -1 + (int)lVar10;
    if ((int)uVar12 < iVar2) {
      uVar16 = 0xffffffff;
      do {
        if (((int)uVar12 < 0) || (*(int *)&param_3->field_0x28 <= (int)uVar12)) {
LAB_1466b3d19:
          pFVar9 = TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                             ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)param_3,
                              &local_48,uVar12);
          puVar4 = pFVar9->Pointer;
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            puVar4[1] = 0;
          }
        }
        else {
          if ((*(int *)&param_3->field_0x28 <= (int)uVar12) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar17 = &param_3->field_0x10;
          if (*(undefined1 **)&param_3->field_0x20 != (undefined1 *)0x0) {
            puVar17 = *(undefined1 **)&param_3->field_0x20;
          }
          uVar8 = uVar12;
          if ((int)uVar12 < 0) {
            uVar8 = uVar12 + 0x1f;
          }
          if ((*(uint *)(puVar17 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0)
          goto LAB_1466b3d19;
        }
        pFVar15 = (ForAnyElementType *)((longlong)(int)uVar12 * 0x10 + *(longlong *)param_3);
        uVar12 = (this->Interrogations).ArrayNum;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        iVar2 = *(int *)((longlong)&pFVar15[1].Data + 4);
        *(undefined4 *)&pFVar15[1].Data = 0;
        if (iVar2 < (int)uVar12) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,uVar12,pFVar15,0,(int *)((longlong)&pFVar15[1].Data + 4));
        }
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        iVar2 = param_2->NumBits;
        uVar16 = ~uVar7 & uVar16;
        FVar14 = (ForElementType<unsigned_int>)param_2;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar3;
        }
        uVar7 = uVar16 & *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
        while (uVar7 == 0) {
          lVar10 = (longlong)iVar11;
          iVar13 = iVar13 + 0x20;
          iVar11 = iVar11 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1466b3e15;
          uVar16 = 0xffffffff;
          uVar7 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar10 * 4);
        }
        uVar7 = -uVar7 & uVar7;
        uVar1 = (ulonglong)uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar12 = (int)lVar10 + -1 + iVar13;
      } while (((int)uVar12 <= iVar2) && ((int)uVar12 < iVar2));
    }
  }
LAB_1466b3e15:
  local_50.OutTransformsByChannel = param_3;
  QueryLocalSpaceTransforms<_UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms_::__l2::<lambda_1>_>
            (this,param_1,param_2,&local_50);
  return;
}

// QueryLocalSpaceTransforms @ 1466b3e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms
          (FInterrogationChannels *this,UMovieSceneEntitySystemLinker *param_1,
          USceneComponent *param_2,
          TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_> *param_3)

{
  TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel> *pTVar1;
  FWeakObjectPtr local_res8;
  USceneComponent *local_res18;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_2 != (USceneComponent *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  }
  pTVar1 = TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
                   *)this,(FObjectKey *)&local_res8);
  if ((pTVar1 != (TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel> *)0x0) &&
     (*(int *)&pTVar1->field_0x8 != -1)) {
    QueryLocalSpaceTransforms
              (this,param_1,(FInterrogationChannel)*(int *)&pTVar1->field_0x8,param_3);
  }
  return;
}

// QueryLocalSpaceTransforms @ 1466b3f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms
          (FInterrogationChannels *this,UMovieSceneEntitySystemLinker *param_1,
          FInterrogationChannel param_2,
          TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_> *param_3)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  <lambda_1>_conflict local_48;
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((param_2.Value == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0xa1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar5 = param_2.Value + 0x20U >> 5;
  local_40.MaxBits = 0x80;
  local_40.NumBits = param_2.Value + 1;
  if (param_2.Value + 0x20U >> 5 != 0) {
    if (4 < uVar5) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_40.AllocatorInstance,0,uVar5,4);
      local_40.MaxBits = uVar5 << 5;
    }
    FVar4 = (ForElementType<unsigned_int>)&local_40;
    if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar4 = local_40.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar4,0,(ulonglong)uVar5 << 2);
    uVar5 = local_40.NumBits & 0x8000001f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
    }
    if (uVar5 != 0) {
      FVar4 = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar4 = local_40.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar4 +
                       (longlong)((int)(local_40.NumBits + (local_40.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar5 & 0x1f);
    }
  }
  if (param_2.Value == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((-1 < param_2.Value) && (param_2.Value < local_40.NumBits)) goto LAB_1466b40c7;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index>=0 && Index<NumBits",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                     ,0x5be,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1466b40c7:
  FVar4 = (ForElementType<unsigned_int>)&local_40;
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar4 = local_40.AllocatorInstance.SecondaryData;
  }
  puVar1 = (uint *)((longlong)FVar4 +
                   (longlong)((int)(param_2.Value + (param_2.Value >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2.Value & 0x1f);
  local_48.OutTransforms = param_3;
  QueryLocalSpaceTransforms<_UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms_::__l2::<lambda_1>_>
            (this,param_1,&local_40,&local_48);
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// QueryTransformOrigins @ 1466b4160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInterrogationChannels::QueryTransformOrigins
          (FInterrogationChannels *this,UMovieSceneEntitySystemLinker *param_1,
          FMovieSceneSequenceHierarchy *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *param_4,UObject *param_5)

{
  code *pcVar1;
  double dVar2;
  UObject *pUVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FBuiltInComponentTypes *pFVar8;
  UClass *pUVar9;
  longlong *plVar10;
  UClass *pUVar11;
  UFunction *pUVar12;
  TTransform<double> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  TTransform<double> *pTVar21;
  ForAnyElementType FVar22;
  int iVar23;
  uint uVar24;
  TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *pTVar25;
  uint uVar26;
  int iVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_648 [32];
  FIdentityFunctor local_5f8 [8];
  TArray<TOptional<UE::Math::TTransform<double>_>,TSizedDefaultAllocator<32>_> local_5f0;
  FComponentTypeID local_5e0;
  FComponentTypeID local_5de;
  FComponentTypeID local_5dc;
  FComponentTypeID local_5da;
  UObject *local_5d8;
  TArray<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>,TSizedDefaultAllocator<32>_> local_5d0;
  int local_5c0;
  uint local_5bc;
  FInterrogationChannels *local_5b8;
  TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *local_5b0;
  longlong local_5a8;
  TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *local_5a0;
  TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *local_598;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_590;
  undefined8 local_580;
  TStatIdData *pTStack_578;
  byte local_570;
  undefined7 uStack_56f;
  undefined4 uStack_568;
  uint uStack_564;
  initializer_list<UE::MovieScene::FComponentTypeID> local_558;
  initializer_list<UE::MovieScene::FComponentTypeID> local_548;
  TComponentTypeID<FMovieSceneSequenceID> local_538;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> TStack_536;
  undefined4 uStack_534;
  undefined8 uStack_530;
  TStatIdData *pTStack_528;
  ulonglong uStack_520;
  undefined8 uStack_518;
  <lambda_1> local_510;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  FScriptContainerElement local_478;
  FScriptContainerElement local_468 [96];
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  undefined1 local_288 [8];
  wchar_t *pwStack_280;
  TStatIdData *local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  FEntityComponentFilter local_260;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_648;
  local_5a0 = param_4;
  local_5d8 = param_5;
  local_5b8 = this;
  local_590 = param_3;
  pFVar8 = FBuiltInComponentTypes::Get();
  uVar18 = (this->Interrogations).ArrayNum * param_4->ArrayNum;
  uVar20 = (ulonglong)uVar18;
  local_5d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d0.ArrayNum = 0;
  local_5d0.ArrayMax = 0;
  local_5f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5f0.ArrayMax = 0;
  local_478 = (FScriptContainerElement)0x0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  local_5f0.ArrayNum = 0;
  if ((uVar18 != 0) &&
     (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,uVar18,&local_5f0.AllocatorInstance,0,&local_5f0.ArrayMax),
     0 < (int)uVar18)) {
    do {
      if ((local_5f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4d8) &&
         (((FScriptContainerElement *)&local_4d8 <
           local_5f0.AllocatorInstance.Data + (longlong)local_5f0.ArrayMax * 0x70 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_5f0.ArrayNum == local_5f0.ArrayMax) {
        local_5f0.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&local_5f0.AllocatorInstance,&local_5f0.ArrayMax);
      }
      iVar7 = local_5f0.ArrayNum + 1;
      lVar14 = (longlong)local_5f0.ArrayNum * 0x70;
      local_5f0.AllocatorInstance.Data[lVar14 + 0x60] = (FScriptContainerElement)0x0;
      local_5f0.AllocatorInstance.Data[lVar14 + 0x60] = local_478;
      if (local_478 != (FScriptContainerElement)0x0) {
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14) = local_4d8;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 8) = uStack_4d0;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 0x10) = local_4c8;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 0x10 + 8) = uStack_4c0;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 0x20) = local_4b8;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 0x20 + 8) = uStack_4b0;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 0x30) = local_4a8;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 0x30 + 8) = uStack_4a0;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 0x40) = local_498;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 0x40 + 8) = uStack_490;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 0x50) = local_488;
        *(undefined8 *)(local_5f0.AllocatorInstance.Data + lVar14 + 0x50 + 8) = uStack_480;
      }
      uVar20 = uVar20 - 1;
      local_5f0.ArrayNum = iVar7;
    } while (uVar20 != 0);
  }
  pUVar3 = local_5d8;
  plVar10 = (longlong *)0x0;
  if (local_5d8 == (UObject *)0x0) {
LAB_1466b4364:
    if (local_5d8 == (UObject *)0x0) goto LAB_1466b4604;
    pUVar9 = *(UClass **)&local_5d8->field_0x10;
    pUVar11 = UMovieSceneTransformOrigin::StaticClass();
    bVar5 = UClass::ImplementsInterface(pUVar9,pUVar11);
    if (!bVar5) goto LAB_1466b4604;
  }
  else {
    pUVar9 = UMovieSceneTransformOrigin::StaticClass();
    plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar3,pUVar9);
    if (plVar10 == (longlong *)0x0) goto LAB_1466b4364;
  }
  pUVar3 = local_5d8;
  if (plVar10 == (longlong *)0x0) {
    if ((local_5d8 == (UObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("O != 0",
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieSceneTracks\\UHT\\IMovieSceneTransformOrigin.gen.cpp"
                           ,0x24,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar9 = *(UClass **)&pUVar3->field_0x10;
    pUVar11 = UMovieSceneTransformOrigin::StaticClass();
    bVar5 = UClass::ImplementsInterface(pUVar9,pUVar11);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("O->GetClass()->ImplementsInterface(UMovieSceneTransformOrigin::StaticClass())"
                           ,
                           "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieSceneTracks\\UHT\\IMovieSceneTransformOrigin.gen.cpp"
                           ,0x25,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_3a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_3a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_3a8._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_398._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_398._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_398._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_388._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_388._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_388._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_378._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_378._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_378._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_368._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_368._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_368._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_358._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_358._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_358._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    pUVar12 = UObject::FindFunction(pUVar3,NAME_UMovieSceneTransformOrigin_BP_GetTransformOrigin);
    if (pUVar12 != (UFunction *)0x0) {
      (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,pUVar12);
    }
    local_168 = local_3a8._0_4_;
    uStack_164 = local_3a8._4_4_;
    uStack_160 = local_3a8._8_4_;
    uStack_15c = local_3a8._12_4_;
    local_158 = local_398._0_4_;
    uStack_154 = local_398._4_4_;
    uStack_150 = local_398._8_4_;
    uStack_14c = local_398._12_4_;
    local_148 = local_388._0_4_;
    uStack_144 = local_388._4_4_;
    uStack_140 = local_388._8_4_;
    uStack_13c = local_388._12_4_;
    local_138 = local_378._0_4_;
    uStack_134 = local_378._4_4_;
    uStack_130 = local_378._8_4_;
    uStack_12c = local_378._12_4_;
    local_128 = local_368._0_4_;
    uStack_124 = local_368._4_4_;
    uStack_120 = local_368._8_4_;
    uStack_11c = local_368._12_4_;
    local_118 = local_358._0_4_;
    uStack_114 = local_358._4_4_;
    uStack_110 = local_358._8_4_;
    uStack_10c = local_358._12_4_;
  }
  else {
    (**(code **)(*plVar10 + 0x10))(plVar10,&local_168);
  }
  uVar18 = 0;
  if (0 < (this->Interrogations).ArrayNum) {
    lVar14 = 0;
    do {
      uVar24 = 0;
      if ((int)uVar18 < local_5f0.ArrayNum) {
        uVar24 = ~uVar18 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar15 = local_5f0.AllocatorInstance.Data + lVar14;
      if (local_468 != pFVar15) {
        *(undefined4 *)pFVar15 = local_168;
        *(undefined4 *)(pFVar15 + 4) = uStack_164;
        *(undefined4 *)(pFVar15 + 8) = uStack_160;
        *(undefined4 *)(pFVar15 + 0xc) = uStack_15c;
        *(undefined4 *)(pFVar15 + 0x10) = local_158;
        *(undefined4 *)(pFVar15 + 0x14) = uStack_154;
        *(undefined4 *)(pFVar15 + 0x18) = uStack_150;
        *(undefined4 *)(pFVar15 + 0x1c) = uStack_14c;
        *(undefined4 *)(pFVar15 + 0x20) = local_148;
        *(undefined4 *)(pFVar15 + 0x24) = uStack_144;
        *(undefined4 *)(pFVar15 + 0x28) = uStack_140;
        *(undefined4 *)(pFVar15 + 0x2c) = uStack_13c;
        *(undefined4 *)(pFVar15 + 0x30) = local_138;
        *(undefined4 *)(pFVar15 + 0x34) = uStack_134;
        *(undefined4 *)(pFVar15 + 0x38) = uStack_130;
        *(undefined4 *)(pFVar15 + 0x3c) = uStack_12c;
        *(undefined4 *)(pFVar15 + 0x40) = local_128;
        *(undefined4 *)(pFVar15 + 0x44) = uStack_124;
        *(undefined4 *)(pFVar15 + 0x48) = uStack_120;
        *(undefined4 *)(pFVar15 + 0x4c) = uStack_11c;
        *(undefined4 *)(pFVar15 + 0x50) = local_118;
        *(undefined4 *)(pFVar15 + 0x54) = uStack_114;
        *(undefined4 *)(pFVar15 + 0x58) = uStack_110;
        *(undefined4 *)(pFVar15 + 0x5c) = uStack_10c;
        pFVar15[0x60] = (FScriptContainerElement)0x1;
      }
      uVar18 = uVar18 + 1;
      lVar14 = lVar14 + 0x70;
    } while ((int)uVar18 < (this->Interrogations).ArrayNum);
  }
LAB_1466b4604:
  local_510.ChildToParentMapping = &local_5d0;
  local_510.TransformOrigins = &local_5f0;
  local_580 = 0;
  local_510.InstanceData = &local_5d8;
  uStack_564 = uStack_564 & 0xffffff00;
  uStack_568 = 0x6ff;
  uStack_520 = CONCAT71(uStack_56f,local_570) & 0xffffffffffffffe0;
  uStack_518._4_4_ = uStack_564;
  uStack_518._0_4_ = AnyHiPriThreadHiPriTask;
  pTStack_578 = &TStatId::TStatId_NAME_None;
  local_538 = pFVar8->SequenceID;
  TStack_536 = (pFVar8->Interrogation).InputKey;
  local_5e0.Value = (pFVar8->Tags).SubInstance.Value;
  uStack_530 = 0;
  pTStack_528 = &TStatId::TStatId_NAME_None;
  local_288._2_2_ = TStack_536;
  local_288._0_2_ = local_538;
  local_288._4_4_ = uStack_534;
  local_510.FocusedSubsequenceHierarchy = param_4;
  pwStack_280 = (wchar_t *)0x0;
  local_278 = &TStatId::TStatId_NAME_None;
  local_260.AllMask.Bits.NumBits = 0;
  local_260.AllMask.Bits.MaxBits = 0x180;
  local_260.NoneMask.Bits.NumBits = 0;
  local_260.NoneMask.Bits.MaxBits = 0x180;
  local_260.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.ComplexMasks.ArrayNum = 0;
  local_260.ComplexMasks.ArrayMax = 0;
  local_1b0 = 0;
  local_1ac = 0x180;
  local_178 = 0;
  local_174 = 0x180;
  local_570 = local_570 & 0xe0;
  local_510.Components = pFVar8;
  local_510.Hierarchy = param_2;
  local_510.__this = this;
  uStack_270 = uStack_520;
  local_268 = uStack_518;
  AddAccessorToFilter((FComponentAccess *)local_288,&local_260);
  AddAccessorToFilter((FComponentAccess *)(local_288 + 2),&local_260);
  local_558._First = &local_5e0;
  local_558._Last = &local_5de;
  FComponentMask::SetAll(&local_260.AllMask,&local_558);
  local_5dc.Value = (pFVar8->Tags).ImportedEntity.Value;
  local_548._First = &local_5dc;
  local_548._Last = &local_5da;
  FComponentMask::SetAll(&local_260.AllMask,&local_548);
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>_>
  ::
  Iterate_PerAllocationImpl<_UE::MovieScene::FInterrogationChannels::QueryTransformOrigins_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>_>
              *)local_288,&param_1->EntityManager,&local_260,&local_510);
  if (local_260.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.ComplexMasks.AllocatorInstance.Data);
  }
  AlgoImpl::
  IntroSortInternal<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>,int,FIdentityFunctor,_UE::MovieScene::FInterrogationChannels::QueryTransformOrigins_::__l2::<lambda_2>_>
            ((TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *)local_5d0.AllocatorInstance.Data
             ,local_5d0.ArrayNum,local_5f8[0],(<lambda_2>)local_5f8[0]);
  uVar20 = (ulonglong)local_5d0.ArrayNum;
  local_5bc = local_5d0.ArrayNum;
  pTVar25 = (TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *)
            (local_5d0.AllocatorInstance.Data + uVar20 * 8);
  FVar22.Data = local_5d0.AllocatorInstance.Data;
  local_598 = pTVar25;
  do {
    local_5b0 = (TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *)FVar22.Data;
    if (local_5d0.ArrayNum != (int)uVar20) {
      local_5f8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_5f8);
    }
    pTVar4 = local_590;
    if ((TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *)FVar22.Data == pTVar25) {
      iVar7 = (this->Interrogations).ArrayNum;
      uVar18 = (param_4->ArrayNum + -1) * iVar7;
      if (0 < iVar7) {
        lVar14 = (longlong)(int)uVar18 * 0x70;
        uVar24 = uVar18;
        do {
          uVar6 = 0;
          if ((int)uVar24 < local_5f0.ArrayNum) {
            uVar6 = ~uVar24 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_5f0.AllocatorInstance.Data[lVar14 + 0x60] == (FScriptContainerElement)0x0) {
            pTVar21 = &UE::Math::TTransform<double>::Identity;
          }
          else {
            uVar6 = 0;
            if ((int)uVar24 < local_5f0.ArrayNum) {
              uVar6 = ~uVar24 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pTVar21 = (TTransform<double> *)(local_5f0.AllocatorInstance.Data + lVar14);
            if ((*(char *)pTVar21[1].Rotation.XY.m128d_f64 == '\0') &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          local_408 = (pTVar21->Rotation).XY.m128d_f64[0];
          dStack_400 = (pTVar21->Rotation).XY.m128d_f64[1];
          pFVar15 = (pTVar4->AllocatorInstance).Data;
          local_3f8 = (pTVar21->Rotation).ZW.m128d_f64[0];
          dStack_3f0 = (pTVar21->Rotation).ZW.m128d_f64[1];
          local_3e8 = (pTVar21->Translation).XY.m128d_f64[0];
          dStack_3e0 = (pTVar21->Translation).XY.m128d_f64[1];
          local_3d8 = (pTVar21->Translation).ZW.m128d_f64[0];
          dStack_3d0 = (pTVar21->Translation).ZW.m128d_f64[1];
          local_3c8 = (pTVar21->Scale3D).XY.m128d_f64[0];
          dStack_3c0 = (pTVar21->Scale3D).XY.m128d_f64[1];
          local_3b8 = (pTVar21->Scale3D).ZW.m128d_f64[0];
          dStack_3b0 = (pTVar21->Scale3D).ZW.m128d_f64[1];
          if (((pFVar15 <= (FScriptContainerElement *)&local_408) &&
              ((FScriptContainerElement *)&local_408 < pFVar15 + (longlong)pTVar4->ArrayMax * 0x60))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar7 = pTVar4->ArrayNum;
          if (iVar7 == pTVar4->ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
          }
          pTVar4->ArrayNum = iVar7 + 1;
          uVar24 = uVar24 + 1;
          lVar14 = lVar14 + 0x70;
          pFVar15 = (pTVar4->AllocatorInstance).Data;
          lVar16 = (longlong)iVar7 * 0x60;
          *(double *)(pFVar15 + lVar16) = local_408;
          *(double *)(pFVar15 + lVar16 + 8) = dStack_400;
          *(double *)(pFVar15 + lVar16 + 0x10) = local_3f8;
          *(double *)(pFVar15 + lVar16 + 0x10 + 8) = dStack_3f0;
          *(double *)(pFVar15 + lVar16 + 0x20) = local_3e8;
          *(double *)(pFVar15 + lVar16 + 0x20 + 8) = dStack_3e0;
          *(double *)(pFVar15 + lVar16 + 0x30) = local_3d8;
          *(double *)(pFVar15 + lVar16 + 0x30 + 8) = dStack_3d0;
          *(double *)(pFVar15 + lVar16 + 0x40) = local_3c8;
          *(double *)(pFVar15 + lVar16 + 0x40 + 8) = dStack_3c0;
          *(double *)(pFVar15 + lVar16 + 0x50) = local_3b8;
          *(double *)(pFVar15 + lVar16 + 0x50 + 8) = dStack_3b0;
        } while ((int)(uVar24 - uVar18) < (this->Interrogations).ArrayNum);
      }
      if (local_5f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f0.AllocatorInstance.Data);
      }
      if ((TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *)local_5d0.AllocatorInstance.Data !=
          (TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *)0x0) {
        FMemory::Free(local_5d0.AllocatorInstance.Data);
      }
      return;
    }
    pFVar15 = (param_4->AllocatorInstance).Data;
    if (pFVar15 != pFVar15 + (longlong)param_4->ArrayNum * 4) {
      pFVar17 = pFVar15;
      do {
        if (*(int *)pFVar17 ==
            *(int *)&((TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *)FVar22.Data)->field_0x4
           ) {
          iVar7 = (this->Interrogations).ArrayNum;
          iVar23 = (int)((longlong)pFVar17 - (longlong)pFVar15 >> 2) * iVar7;
          pFVar17 = pFVar15 + (longlong)param_4->ArrayNum * 4;
          goto LAB_1466b4834;
        }
        pFVar17 = pFVar17 + 4;
      } while (pFVar17 != pFVar15 + (longlong)param_4->ArrayNum * 4);
    }
    iVar7 = (this->Interrogations).ArrayNum;
    iVar23 = -iVar7;
    pFVar17 = pFVar15 + (longlong)param_4->ArrayNum * 4;
    if (pFVar15 != pFVar17) {
LAB_1466b4834:
      pFVar28 = pFVar15;
      do {
        if (*(int *)pFVar28 == *(int *)FVar22.Data) {
          iVar27 = (int)((longlong)pFVar28 - (longlong)pFVar15 >> 2);
          goto LAB_1466b484e;
        }
        pFVar28 = pFVar28 + 4;
      } while (pFVar28 != pFVar17);
    }
    iVar27 = -1;
LAB_1466b484e:
    uVar18 = iVar27 * iVar7;
    if (0 < iVar7) {
      local_5a8 = ((longlong)iVar23 - (longlong)(int)uVar18) * 0x70;
      lVar14 = (longlong)(int)uVar18 * 0x70;
      local_5c0 = iVar23 - uVar18;
      uVar24 = uVar18;
      do {
        lVar16 = local_5a8;
        uVar6 = local_5c0 + uVar24;
        uVar19 = ~uVar6 >> 0x1f;
        uVar26 = 0;
        if (iVar23 < local_5f0.ArrayNum) {
          uVar26 = uVar19;
        }
        if ((uVar26 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_5f0.AllocatorInstance.Data[lVar16 + lVar14 + 0x60] != (FScriptContainerElement)0x0
           ) {
          uVar26 = 0;
          if ((int)uVar6 < local_5f0.ArrayNum) {
            uVar26 = uVar19;
          }
          if ((uVar26 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar15 = local_5f0.AllocatorInstance.Data + lVar16 + lVar14;
          if ((pFVar15[0x60] == (FScriptContainerElement)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_348.Rotation.XY.m128d_f64[0] = *(double *)pFVar15;
          local_348.Rotation.XY.m128d_f64[1] = *(double *)(pFVar15 + 8);
          local_348.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar15 + 0x10);
          local_348.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar15 + 0x18);
          local_348.Translation.XY.m128d_f64[0] = *(double *)(pFVar15 + 0x20);
          local_348.Translation.XY.m128d_f64[1] = *(double *)(pFVar15 + 0x28);
          local_348.Translation.ZW.m128d_f64[0] = *(double *)(pFVar15 + 0x30);
          local_348.Translation.ZW.m128d_f64[1] = *(double *)(pFVar15 + 0x38);
          uVar26 = ~uVar24 >> 0x1f;
          local_348.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar15 + 0x40);
          local_348.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar15 + 0x48);
          uVar6 = 0;
          if ((int)uVar24 < local_5f0.ArrayNum) {
            uVar6 = uVar26;
          }
          local_348.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar15 + 0x50);
          local_348.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar15 + 0x58);
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_5f0.AllocatorInstance.Data[lVar14 + 0x60] == (FScriptContainerElement)0x0) {
            pTVar21 = &local_108;
            local_108.Rotation.XY.m128d_f64[0] = local_348.Rotation.XY.m128d_f64[0];
            local_108.Rotation.XY.m128d_f64[1] = local_348.Rotation.XY.m128d_f64[1];
            local_108.Rotation.ZW.m128d_f64[0] = local_348.Rotation.ZW.m128d_f64[0];
            local_108.Rotation.ZW.m128d_f64[1] = local_348.Rotation.ZW.m128d_f64[1];
            local_108.Translation.XY.m128d_f64[0] = local_348.Translation.XY.m128d_f64[0];
            local_108.Translation.XY.m128d_f64[1] = local_348.Translation.XY.m128d_f64[1];
            local_108.Translation.ZW.m128d_f64[0] = local_348.Translation.ZW.m128d_f64[0];
            local_108.Translation.ZW.m128d_f64[1] = local_348.Translation.ZW.m128d_f64[1];
            local_108.Scale3D.XY.m128d_f64[0] = local_348.Scale3D.XY.m128d_f64[0];
            local_108.Scale3D.XY.m128d_f64[1] = local_348.Scale3D.XY.m128d_f64[1];
            local_108.Scale3D.ZW.m128d_f64[0] = local_348.Scale3D.ZW.m128d_f64[0];
            local_108.Scale3D.ZW.m128d_f64[1] = local_348.Scale3D.ZW.m128d_f64[1];
          }
          else {
            uVar6 = 0;
            if ((int)uVar24 < local_5f0.ArrayNum) {
              uVar6 = uVar26;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pTVar21 = (TTransform<double> *)(local_5f0.AllocatorInstance.Data + lVar14);
            if ((*(char *)pTVar21[1].Rotation.XY.m128d_f64 == '\0') &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_2e8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_2e8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_2e8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_2e8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_2e8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_2e8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_2e8,pTVar21,&local_348);
            pTVar21 = &local_2e8;
          }
          uVar6 = 0;
          if ((int)uVar24 < local_5f0.ArrayNum) {
            uVar6 = uVar26;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pTVar13 = (TTransform<double> *)
                    (local_5f0.AllocatorInstance.Data + (longlong)(int)uVar24 * 0x70);
          if (pTVar21 != pTVar13) {
            dVar2 = (pTVar21->Rotation).XY.m128d_f64[1];
            (pTVar13->Rotation).XY.m128d_f64[0] = (pTVar21->Rotation).XY.m128d_f64[0];
            (pTVar13->Rotation).XY.m128d_f64[1] = dVar2;
            dVar2 = (pTVar21->Rotation).ZW.m128d_f64[1];
            (pTVar13->Rotation).ZW.m128d_f64[0] = (pTVar21->Rotation).ZW.m128d_f64[0];
            (pTVar13->Rotation).ZW.m128d_f64[1] = dVar2;
            dVar2 = (pTVar21->Translation).XY.m128d_f64[1];
            (pTVar13->Translation).XY.m128d_f64[0] = (pTVar21->Translation).XY.m128d_f64[0];
            (pTVar13->Translation).XY.m128d_f64[1] = dVar2;
            dVar2 = (pTVar21->Translation).ZW.m128d_f64[1];
            (pTVar13->Translation).ZW.m128d_f64[0] = (pTVar21->Translation).ZW.m128d_f64[0];
            (pTVar13->Translation).ZW.m128d_f64[1] = dVar2;
            dVar2 = (pTVar21->Scale3D).XY.m128d_f64[1];
            (pTVar13->Scale3D).XY.m128d_f64[0] = (pTVar21->Scale3D).XY.m128d_f64[0];
            (pTVar13->Scale3D).XY.m128d_f64[1] = dVar2;
            dVar2 = (pTVar21->Scale3D).ZW.m128d_f64[1];
            (pTVar13->Scale3D).ZW.m128d_f64[0] = (pTVar21->Scale3D).ZW.m128d_f64[0];
            (pTVar13->Scale3D).ZW.m128d_f64[1] = dVar2;
            *(undefined1 *)pTVar13[1].Rotation.XY.m128d_f64 = 1;
          }
        }
        uVar24 = uVar24 + 1;
        lVar14 = lVar14 + 0x70;
        iVar23 = iVar23 + 1;
        FVar22.Data = (FScriptContainerElement *)local_5b0;
        pTVar25 = local_598;
        param_4 = local_5a0;
        this = local_5b8;
      } while ((int)(uVar24 - uVar18) < (local_5b8->Interrogations).ArrayNum);
    }
    uVar20 = (ulonglong)local_5bc;
    FVar22.Data = FVar22.Data + 8;
  } while( true );
}

// QueryWorldSpaceTransforms @ 1466b4f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms
          (FInterrogationChannels *this,UMovieSceneEntitySystemLinker *param_1,
          TSparseArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
          *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSparseArrayAllocationInfo *pFVar6;
  ForElementType<unsigned_int> FVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ForAnyElementType *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_a8 [32];
  <lambda_1> local_78;
  FSparseArrayAllocationInfo local_70;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_60.NumBits = (this->ActiveChannelBits).NumBits;
  uVar10 = 0;
  local_60.MaxBits = 0x80;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar9 = local_60.NumBits + 0x1fU >> 5;
  if (local_60.NumBits + 0x1fU >> 5 != 0) {
    if (4 < uVar9) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_60.AllocatorInstance,0,uVar9,4);
      local_60.MaxBits = uVar9 << 5;
    }
    FVar7 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar7 = local_60.AllocatorInstance.SecondaryData;
    }
    if (uVar9 < 9) {
      iVar8 = -1;
    }
    else {
      iVar8 = 0xff;
    }
    memset((void *)FVar7,iVar8,(ulonglong)uVar9 << 2);
    uVar9 = local_60.NumBits & 0x8000001f;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
    }
    if (uVar9 != 0) {
      FVar7 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_60.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar7 +
                       (longlong)((int)(local_60.NumBits + (local_60.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar9 & 0x1f);
    }
  }
  TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::Reserve
            ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)param_2,
             (this->ActiveChannelBits).NumBits);
  uVar13 = uVar10;
  if (0 < (this->ActiveChannelBits).NumBits) {
    do {
      uVar9 = (uint)uVar10;
      if (((int)uVar9 < 0) || (*(int *)&param_2->field_0x28 <= (int)uVar9)) {
LAB_1466b507e:
        pFVar6 = TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                           ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)param_2,&local_70
                            ,uVar9);
        puVar2 = pFVar6->Pointer;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
        }
      }
      else {
        if ((*(int *)&param_2->field_0x28 <= (int)uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar11 = &param_2->field_0x10;
        if (*(undefined1 **)&param_2->field_0x20 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&param_2->field_0x20;
        }
        uVar5 = uVar9;
        if ((int)uVar9 < 0) {
          uVar5 = uVar9 + 0x1f;
        }
        if ((*(uint *)(puVar11 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0)
        goto LAB_1466b507e;
      }
      uVar5 = (this->Interrogations).ArrayNum;
      pFVar12 = (ForAnyElementType *)(*(longlong *)param_2 + uVar13);
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      iVar8 = *(int *)((longlong)&pFVar12[1].Data + 4);
      *(undefined4 *)&pFVar12[1].Data = 0;
      if (iVar8 < (int)uVar5) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar5,pFVar12,0,(int *)((longlong)&pFVar12[1].Data + 4));
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar9 + 1) < (this->ActiveChannelBits).NumBits);
  }
  local_78.OutTransformsByChannel = param_2;
  QueryWorldSpaceTransforms<_UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms_::__l2::<lambda_1>_>
            (this,param_1,&local_60,&local_78);
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

// QueryWorldSpaceTransforms @ 1466b5150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms
          (FInterrogationChannels *this,UMovieSceneEntitySystemLinker *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2,
          TSparseArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
          *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FSparseArrayAllocationInfo *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  ForAnyElementType *pFVar15;
  uint uVar16;
  undefined1 *puVar17;
  <lambda_1> local_50;
  FSparseArrayAllocationInfo local_48;
  
  iVar2 = param_2->NumBits;
  iVar11 = 0;
  iVar13 = 0;
  if (iVar2 != 0) {
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)param_2;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar3;
    }
    uVar7 = *(uint *)FVar14;
    while (uVar7 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1466b5355;
      uVar7 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar10 * 4);
    }
    uVar7 = -uVar7 & uVar7;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = iVar13 + -1 + (int)lVar10;
    if ((int)uVar12 < iVar2) {
      uVar16 = 0xffffffff;
      do {
        if (((int)uVar12 < 0) || (*(int *)&param_3->field_0x28 <= (int)uVar12)) {
LAB_1466b5259:
          pFVar9 = TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                             ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)param_3,
                              &local_48,uVar12);
          puVar4 = pFVar9->Pointer;
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            puVar4[1] = 0;
          }
        }
        else {
          if ((*(int *)&param_3->field_0x28 <= (int)uVar12) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar17 = &param_3->field_0x10;
          if (*(undefined1 **)&param_3->field_0x20 != (undefined1 *)0x0) {
            puVar17 = *(undefined1 **)&param_3->field_0x20;
          }
          uVar8 = uVar12;
          if ((int)uVar12 < 0) {
            uVar8 = uVar12 + 0x1f;
          }
          if ((*(uint *)(puVar17 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0)
          goto LAB_1466b5259;
        }
        pFVar15 = (ForAnyElementType *)((longlong)(int)uVar12 * 0x10 + *(longlong *)param_3);
        uVar12 = (this->Interrogations).ArrayNum;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        iVar2 = *(int *)((longlong)&pFVar15[1].Data + 4);
        *(undefined4 *)&pFVar15[1].Data = 0;
        if (iVar2 < (int)uVar12) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,uVar12,pFVar15,0,(int *)((longlong)&pFVar15[1].Data + 4));
        }
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        iVar2 = param_2->NumBits;
        uVar16 = ~uVar7 & uVar16;
        FVar14 = (ForElementType<unsigned_int>)param_2;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar3;
        }
        uVar7 = uVar16 & *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
        while (uVar7 == 0) {
          lVar10 = (longlong)iVar11;
          iVar13 = iVar13 + 0x20;
          iVar11 = iVar11 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1466b5355;
          uVar16 = 0xffffffff;
          uVar7 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar10 * 4);
        }
        uVar7 = -uVar7 & uVar7;
        uVar1 = (ulonglong)uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar12 = (int)lVar10 + -1 + iVar13;
      } while (((int)uVar12 <= iVar2) && ((int)uVar12 < iVar2));
    }
  }
LAB_1466b5355:
  local_50.OutTransformsByChannel = param_3;
  QueryWorldSpaceTransforms<_UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms_::__l2::<lambda_1>_>
            (this,param_1,param_2,&local_50);
  return;
}

// QueryWorldSpaceTransforms @ 1466b53a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms
          (FInterrogationChannels *this,UMovieSceneEntitySystemLinker *param_1,
          USceneComponent *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel> *pTVar1;
  FWeakObjectPtr local_res8;
  USceneComponent *local_res18;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_2 != (USceneComponent *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  }
  pTVar1 = TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
                   *)this,(FObjectKey *)&local_res8);
  if ((pTVar1 != (TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel> *)0x0) &&
     (*(int *)&pTVar1->field_0x8 != -1)) {
    QueryWorldSpaceTransforms
              (this,param_1,(FInterrogationChannel)*(int *)&pTVar1->field_0x8,param_3);
  }
  return;
}

// QueryWorldSpaceTransforms @ 1466b5460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms
          (FInterrogationChannels *this,UMovieSceneEntitySystemLinker *param_1,
          FInterrogationChannel param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  <lambda_1>_conflict local_48;
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((param_2.Value == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0xa1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar5 = param_2.Value + 0x20U >> 5;
  local_40.MaxBits = 0x80;
  local_40.NumBits = param_2.Value + 1;
  if (param_2.Value + 0x20U >> 5 != 0) {
    if (4 < uVar5) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_40.AllocatorInstance,0,uVar5,4);
      local_40.MaxBits = uVar5 << 5;
    }
    FVar4 = (ForElementType<unsigned_int>)&local_40;
    if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar4 = local_40.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar4,0,(ulonglong)uVar5 << 2);
    uVar5 = local_40.NumBits & 0x8000001f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
    }
    if (uVar5 != 0) {
      FVar4 = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar4 = local_40.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar4 +
                       (longlong)((int)(local_40.NumBits + (local_40.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar5 & 0x1f);
    }
  }
  if (param_2.Value == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0xa1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((-1 < param_2.Value) && (param_2.Value < local_40.NumBits)) goto LAB_1466b5607;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index>=0 && Index<NumBits",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                     ,0x5be,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1466b5607:
  FVar4 = (ForElementType<unsigned_int>)&local_40;
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar4 = local_40.AllocatorInstance.SecondaryData;
  }
  puVar1 = (uint *)((longlong)FVar4 +
                   (longlong)((int)(param_2.Value + (param_2.Value >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2.Value & 0x1f);
  local_48.OutTransforms = param_3;
  QueryWorldSpaceTransforms<_UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms_::__l2::<lambda_1>_>
            (this,param_1,&local_40,&local_48);
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// Reset @ 1466d93c0

void __thiscall UE::MovieScene::FInterrogationChannels::Reset(FInterrogationChannels *this)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  undefined1 *puVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  
  piVar1 = &(this->Interrogations).ArrayMax;
  (this->Interrogations).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Interrogations).AllocatorInstance,0,piVar1);
  }
  iVar5 = (this->ActiveChannelBits).MaxBits;
  this_00 = &this->ActiveChannelBits;
  (this->ActiveChannelBits).NumBits = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    (this->ActiveChannelBits).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
  }
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,1);
  FVar7 = (this->ActiveChannelBits).AllocatorInstance.SecondaryData;
  uVar6 = iVar5 >> 0x1f & 0x1f;
  iVar5 = iVar5 + uVar6;
  if (FVar7 == (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)this_00;
  }
  puVar3 = (uint *)((longlong)FVar7 + (longlong)(iVar5 >> 5) * 4);
  *puVar3 = *puVar3 & ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x1f));
  bVar4 = 1 < *(int *)&(this->ObjectToChannel).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar2 = &(this->ObjectToChannel).field_0xc;
  *(undefined4 *)&(this->ObjectToChannel).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ObjectToChannel).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToChannel).field_0x34 = 0;
  iVar5 = *(int *)&(this->ObjectToChannel).field_0x2c;
  *(undefined4 *)&(this->ObjectToChannel).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->ObjectToChannel).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ObjectToChannel).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->ObjectToChannel).field_0x48 = 1;
    TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FObjectKey,UE::MovieScene::FInterrogationChannel>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FInterrogationChannel,0>,FDefaultSetAllocator>
              *)this);
  }
  piVar1 = &(this->SparseChannelInfo).ChannelInfo.Pairs.ArrayMax;
  (this->SparseChannelInfo).ChannelInfo.Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)&this->SparseChannelInfo,0,piVar1);
  }
  return;
}

// operator() @ 1504ef1e0

bool __thiscall
`UE::MovieScene::FInterrogationChannels::AddInterrogation'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4998157698391343250>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4998157698391343250>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ef220

bool __thiscall
`UE::MovieScene::FInterrogationChannels::AllocateChannel'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4998157698391343200>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4998157698391343200>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

