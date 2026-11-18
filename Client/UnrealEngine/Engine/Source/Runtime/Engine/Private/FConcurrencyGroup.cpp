// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FConcurrencyGroup @ 1486915b0

FConcurrencyGroup * __thiscall
FConcurrencyGroup::FConcurrencyGroup
          (FConcurrencyGroup *this,uint param_1,FConcurrencyHandle *param_2)

{
  FSoundConcurrencySettings *pFVar1;
  float fVar2;
  int iVar3;
  EConcurrencyVolumeScaleMode EVar4;
  float fVar5;
  undefined1 uVar6;
  TEnumAsByte<EMaxConcurrentResolutionRule::Type> TVar7;
  undefined2 uVar8;
  LARGE_INTEGER local_res8 [4];
  
  this->GroupID = param_1;
  (this->ActiveSounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveSounds).ArrayNum = 0;
  (this->ActiveSounds).ArrayMax = 0;
  this->ObjectID = param_2->ObjectID;
  pFVar1 = param_2->Settings;
  uVar6 = pFVar1->field_0x4;
  TVar7.Value = (pFVar1->ResolutionRule).Value;
  uVar8 = *(undefined2 *)&pFVar1->field_0x6;
  fVar2 = pFVar1->RetriggerTime;
  iVar3 = (pFVar1->PlatformMaxCount).Default;
  (this->Settings).MaxCount = pFVar1->MaxCount;
  (this->Settings).field_0x4 = uVar6;
  (this->Settings).ResolutionRule = (TEnumAsByte<EMaxConcurrentResolutionRule::Type>)TVar7.Value;
  *(undefined2 *)&(this->Settings).field_0x6 = uVar8;
  (this->Settings).RetriggerTime = fVar2;
  (this->Settings).PlatformMaxCount.Default = iVar3;
  EVar4 = pFVar1->VolumeScaleMode;
  fVar2 = pFVar1->VolumeScaleAttackTime;
  fVar5 = pFVar1->VolumeScaleReleaseTime;
  (this->Settings).VolumeScale = pFVar1->VolumeScale;
  (this->Settings).VolumeScaleMode = EVar4;
  (this->Settings).VolumeScaleAttackTime = fVar2;
  (this->Settings).VolumeScaleReleaseTime = fVar5;
  (this->Settings).VoiceStealReleaseTime = pFVar1->VoiceStealReleaseTime;
  QueryPerformanceCounter(local_res8);
  this->LastTimePlayed =
       (float)((double)(ulonglong)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle64);
  return this;
}

// AddActiveSound @ 1486a4450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConcurrencyGroup::AddActiveSound(FConcurrencyGroup *this,FActiveSound *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  FActiveSound *local_58;
  uint *local_50;
  FConcurrencySoundData *local_48;
  FString local_40;
  FConcurrencySoundData local_30;
  
  if ((this->GroupID == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupID != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                         ,0x125,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = this->GroupID;
  if (*(int *)&(param_1->ConcurrencyGroupData).field_0x8 !=
      *(int *)&(param_1->ConcurrencyGroupData).field_0x34) {
    puVar7 = *(undefined1 **)&(param_1->ConcurrencyGroupData).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(param_1->ConcurrencyGroupData).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(param_1->ConcurrencyGroupData).field_0x48 - 1U & uVar2) * 4
                    );
    if (iVar6 != -1) {
      do {
        if (*(uint *)((longlong)iVar6 * 0x20 + *(longlong *)&param_1->ConcurrencyGroupData) == uVar2
           ) {
          FActiveSound::GetOwnerName(param_1,&local_40);
          UE::Logging::Private::BasicFatalLog
                    (&::LOG_Static,(FLogCategoryBase *)&LogAudioConcurrency);
          if (local_40.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
          return;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&param_1->ConcurrencyGroupData
                        );
      } while (iVar6 != -1);
    }
  }
  local_30.LerpTime = 0.0;
  local_30.Elapsed = 0.0;
  local_30.DbTargetVolume = 0.0;
  local_30.DbStartVolume = 0.0;
  local_30.Generation = 0;
  if ((this->Settings).VolumeScaleMode == Default) {
    local_30.Generation = (this->ActiveSounds).ArrayNum;
    SoundConcurrencyPrivate::SetSoundDataTarget(param_1,&local_30,__real_3f800000,0.0);
  }
  pFVar3 = (this->ActiveSounds).AllocatorInstance.Data;
  local_58 = param_1;
  if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < pFVar3 + (longlong)(this->ActiveSounds).ArrayMax * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->ActiveSounds).ArrayNum;
  piVar1 = &(this->ActiveSounds).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
    (this->ActiveSounds).ArrayNum = iVar6;
  }
  (this->ActiveSounds).ArrayNum = iVar6 + 1;
  *(FActiveSound **)((this->ActiveSounds).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_58;
  local_48 = &local_30;
  local_50 = &this->GroupID;
  TSet<TTuple<unsigned_int,FConcurrencySoundData>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FConcurrencySoundData_&&>_>
            ((TSet<TTuple<unsigned_int,FConcurrencySoundData>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>,FDefaultSetAllocator>
              *)&param_1->ConcurrencyGroupData,
             (TPairInitializer<unsigned_int_const_&,FConcurrencySoundData_&&> *)&stack0x00000008,
             (bool *)&local_50);
  UpdateGeneration(this,param_1);
  return;
}

// CanPlaySoundNow @ 1486a82d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FConcurrencyGroup::CanPlaySoundNow(FConcurrencyGroup *this,float param_1)

{
  float fVar1;
  
  fVar1 = (this->Settings).RetriggerTime;
  if ((0.0 < fVar1) && (param_1 - this->LastTimePlayed < fVar1)) {
    if (6 < (byte)LogAudioConcurrency._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioConcurrency);
    }
    return false;
  }
  return true;
}

// CullSoundsDueToMaxConcurrency @ 1486af5b0

void __thiscall FConcurrencyGroup::CullSoundsDueToMaxConcurrency(FConcurrencyGroup *this)

{
  int *piVar1;
  FIdentityFunctor FVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint local_res8 [2];
  
  if ((this->Settings).bEnableMaxCountPlatformScaling == '\0') {
    iVar8 = (this->Settings).MaxCount;
  }
  else {
    iVar8 = (this->Settings).PlatformMaxCount.Default;
  }
  if (iVar8 < 1) {
    iVar8 = 0x10;
  }
  iVar3 = (this->ActiveSounds).ArrayNum;
  if (iVar8 < iVar3) {
    FVar2 = (FIdentityFunctor)(this->Settings).ResolutionRule.Value;
    local_res8[0] = (uint)(byte)FVar2;
    AlgoImpl::
    IntroSortInternal<FActiveSound_*,int,FIdentityFunctor,TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::CullSoundsDueToMaxConcurrency_::__l2::FCompareActiveSounds>_>
              ((FActiveSound **)(this->ActiveSounds).AllocatorInstance.Data,iVar3,FVar2,
               (FCompareActiveSounds *)local_res8);
    if ((this->Settings).bEnableMaxCountPlatformScaling == '\0') {
      iVar8 = (this->Settings).MaxCount;
    }
    else {
      iVar8 = (this->Settings).PlatformMaxCount.Default;
    }
    if (iVar8 < 1) {
      iVar8 = 0x10;
    }
    piVar1 = &(this->ActiveSounds).ArrayNum;
    iVar3 = *piVar1;
    if ((iVar3 - iVar8 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSoundsToStop > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                           ,500,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = *piVar1;
    uVar11 = 0;
    if (0 < iVar10) {
      lVar12 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < iVar10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)((this->ActiveSounds).AllocatorInstance.Data + lVar12);
        if ((lVar4 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ActiveSound",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                               ,0x1f8,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(byte *)(lVar4 + 0x1a1) = *(byte *)(lVar4 + 0x1a1) & 0x7f;
        bVar7 = 0;
        if ((int)uVar11 < iVar3 - iVar8) {
          bVar7 = 0x80;
        }
        uVar11 = uVar11 + 1;
        *(byte *)(lVar4 + 0x1a1) = *(byte *)(lVar4 + 0x1a1) | bVar7;
        lVar12 = lVar12 + 8;
        iVar10 = *piVar1;
      } while ((int)uVar11 < iVar10);
    }
  }
  return;
}

// GenerateNewID @ 1486b8ce0

uint __cdecl FConcurrencyGroup::GenerateNewID(void)

{
  ConcurrencyGroupIDs = ConcurrencyGroupIDs + 1;
  return ConcurrencyGroupIDs;
}

// GetActiveSounds @ 1486baa00

TArray<FActiveSound_*,TSizedDefaultAllocator<32>_> * __thiscall
FConcurrencyGroup::GetActiveSounds(FConcurrencyGroup *this)

{
  return &this->ActiveSounds;
}

// GetGroupID @ 1486beb60

uint __thiscall FConcurrencyGroup::GetGroupID(FConcurrencyGroup *this)

{
  return this->GroupID;
}

// GetNextGeneration @ 1486c2090

int __thiscall FConcurrencyGroup::GetNextGeneration(FConcurrencyGroup *this)

{
  return (this->ActiveSounds).ArrayNum;
}

// GetObjectID @ 1486c3420

uint __thiscall FConcurrencyGroup::GetObjectID(FConcurrencyGroup *this)

{
  return this->ObjectID;
}

// GetSettings @ 1486c72e0

FSoundConcurrencySettings * __thiscall FConcurrencyGroup::GetSettings(FConcurrencyGroup *this)

{
  return &this->Settings;
}

// IsEmpty @ 1486d1000

bool __thiscall FConcurrencyGroup::IsEmpty(FConcurrencyGroup *this)

{
  return (this->ActiveSounds).ArrayNum == 0;
}

// IsFull @ 1486d1270

bool __thiscall FConcurrencyGroup::IsFull(FConcurrencyGroup *this)

{
  int iVar1;
  
  if ((this->Settings).bEnableMaxCountPlatformScaling == '\0') {
    iVar1 = (this->Settings).MaxCount;
    if (0 < iVar1) goto LAB_1486d1290;
  }
  else {
    iVar1 = (this->Settings).PlatformMaxCount.Default;
    if (0 < iVar1) {
      return iVar1 <= (this->ActiveSounds).ArrayNum;
    }
  }
  iVar1 = 0x10;
LAB_1486d1290:
  return iVar1 <= (this->ActiveSounds).ArrayNum;
}

// RemoveActiveSound @ 1486e70c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FConcurrencyGroup::RemoveActiveSound(FConcurrencyGroup *this,FActiveSound *param_1)

{
  FScriptContainerElement *pFVar1;
  FActiveSound *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FConcurrencySoundData *pFVar9;
  undefined1 *puVar10;
  uint *puVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  undefined1 local_res8 [8];
  FActiveSound *local_res10;
  
  local_res10 = param_1;
  iVar7 = TArray<FActiveSound_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                    (&this->ActiveSounds,&local_res10,Default);
  if (iVar7 != 0) {
    if ((iVar7 != 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRemoved == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                           ,0x143,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = TMapBase<unsigned_int,FConcurrencySoundData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>_>
             ::FindChecked((TMapBase<unsigned_int,FConcurrencySoundData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencySoundData,0>_>
                            *)&param_1->ConcurrencyGroupData,this->GroupID);
    fVar5 = __real_3f800000;
    pFVar12 = (this->ActiveSounds).AllocatorInstance.Data;
    iVar7 = (this->ActiveSounds).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar7 * 8;
    while( true ) {
      if ((this->ActiveSounds).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FActiveSound_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar12 == pFVar1) break;
      pFVar2 = *(FActiveSound **)pFVar12;
      if ((pFVar2 == (FActiveSound *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("OtherSound",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                             ,0x14a,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)&(pFVar2->ConcurrencyGroupData).field_0x8 !=
          *(int *)&(pFVar2->ConcurrencyGroupData).field_0x34) {
        puVar3 = *(undefined1 **)&(pFVar2->ConcurrencyGroupData).field_0x40;
        puVar10 = &(pFVar2->ConcurrencyGroupData).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar10 = puVar3;
        }
        uVar8 = *(uint *)(puVar10 +
                         (ulonglong)
                         (*(int *)&(pFVar2->ConcurrencyGroupData).field_0x48 - 1U & this->GroupID) *
                         4);
        if (uVar8 != 0xffffffff) {
          do {
            puVar11 = (uint *)((longlong)(int)uVar8 * 0x20 +
                              *(longlong *)&pFVar2->ConcurrencyGroupData);
            if (*puVar11 == this->GroupID) {
              if (puVar11 == (uint *)0x0) goto LAB_1486e7200;
              goto LAB_1486e7226;
            }
            uVar8 = puVar11[6];
          } while (uVar8 != 0xffffffff);
        }
      }
      puVar11 = (uint *)0x0;
LAB_1486e7200:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_1486e7226:
      uVar8 = puVar11[1];
      if (pFVar9->Generation < (int)uVar8) {
        if (((int)uVar8 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("OtherSoundData.Generation > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                               ,0x14e,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((this->ActiveSounds).ArrayNum < (int)puVar11[1]) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("OtherSoundData.Generation <= ActiveSounds.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundConcurrency.cpp"
                               ,0x14f,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar11[1] = puVar11[1] - 1;
        uVar8 = puVar11[1];
      }
      if (((this->Settings).bVolumeScaleCanRelease != '\0') &&
         ((this->Settings).VolumeScaleMode == Default)) {
        fVar13 = (this->Settings).VolumeScale;
        if (fVar5 <= fVar13) {
          fVar13 = fVar5;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar13 = powf(fVar13,(float)(int)((this->ActiveSounds).ArrayNum - uVar8) - fVar5);
        if (fVar5 <= fVar13) {
          fVar13 = fVar5;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        SoundConcurrencyPrivate::SetSoundDataTarget
                  (pFVar2,(FConcurrencySoundData *)(puVar11 + 1),fVar13,
                   (this->Settings).VolumeScaleReleaseTime);
      }
      pFVar12 = pFVar12 + 8;
    }
  }
  return;
}

// UpdateGeneration @ 1486f5630

void __thiscall FConcurrencyGroup::UpdateGeneration(FConcurrencyGroup *this,FActiveSound *param_1)

{
  FActiveSound *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float _X;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  FConcurrencySoundData *pFVar13;
  uint uVar14;
  FConcurrencySoundData *pFVar15;
  FConcurrencySoundData *pFVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  EConcurrencyVolumeScaleMode local_res8 [2];
  
  local_res8[0] = (this->Settings).VolumeScaleMode;
  if (local_res8[0] != Default) {
    AlgoImpl::
    IntroSortInternal<FActiveSound_*,int,FIdentityFunctor,TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::UpdateGeneration_::__l2::FCompareActiveSounds>_>
              ((FActiveSound **)(this->ActiveSounds).AllocatorInstance.Data,
               (this->ActiveSounds).ArrayNum,(FIdentityFunctor)(undefined1)local_res8[0],
               (FCompareActiveSounds *)local_res8);
    uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    _X = __real_41200000;
    fVar6 = __real_3f800000;
    fVar5 = __real_3d4ccccd;
    fVar4 = __real_322bcc77;
    iVar11 = (this->ActiveSounds).ArrayNum;
    pFVar15 = (FConcurrencySoundData *)0x0;
    pFVar13 = pFVar15;
    pFVar16 = pFVar15;
    if (0 < iVar11) {
      do {
        uVar14 = (uint)pFVar13;
        uVar9 = 0;
        if ((int)uVar14 < iVar11) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = *(FActiveSound **)
                  ((longlong)&pFVar16->Generation +
                  (longlong)(this->ActiveSounds).AllocatorInstance.Data);
        if (*(int *)&(pFVar1->ConcurrencyGroupData).field_0x8 !=
            *(int *)&(pFVar1->ConcurrencyGroupData).field_0x34) {
          puVar2 = *(undefined1 **)&(pFVar1->ConcurrencyGroupData).field_0x40;
          puVar12 = &(pFVar1->ConcurrencyGroupData).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar12 = puVar2;
          }
          uVar9 = *(uint *)(puVar12 +
                           (ulonglong)
                           (*(int *)&(pFVar1->ConcurrencyGroupData).field_0x48 - 1U & this->GroupID)
                           * 4);
          if (uVar9 != 0xffffffff) {
            do {
              puVar10 = (uint *)((longlong)(int)uVar9 * 0x20 +
                                *(longlong *)&pFVar1->ConcurrencyGroupData);
              if (*puVar10 == this->GroupID) {
                pFVar13 = (FConcurrencySoundData *)(puVar10 + 1);
                if (puVar10 == (uint *)0x0) {
                  pFVar13 = pFVar15;
                }
                if (pFVar13 == (FConcurrencySoundData *)0x0) break;
                pFVar13->Generation = uVar14;
                fVar17 = (this->Settings).VolumeScale;
                if (fVar6 <= fVar17) {
                  fVar17 = fVar6;
                }
                if (fVar17 <= 0.0) {
                  fVar17 = 0.0;
                }
                fVar17 = powf(fVar17,(float)(int)((this->ActiveSounds).ArrayNum - uVar14) - fVar6);
                if (fVar6 <= fVar17) {
                  fVar17 = fVar6;
                }
                if (fVar17 <= 0.0) {
                  fVar17 = 0.0;
                }
                if (param_1 == pFVar1) {
                  fVar19 = 0.0;
                }
                else {
                  fVar19 = (this->Settings).VolumeScaleAttackTime;
                }
                if ((float)((uint)(fVar19 - pFVar13->LerpTime) & uVar7) <= fVar4) {
                  fVar18 = powf(_X,pFVar13->DbTargetVolume * fVar5);
                  if ((fVar18 < ConcurrencyMinVolumeScaleCVar) ||
                     ((float)((uint)(fVar18 - ConcurrencyMinVolumeScaleCVar) & uVar7) <= fVar4)) {
                    fVar18 = 0.0;
                  }
                  if ((float)((uint)(fVar18 - fVar17) & uVar7) <= ConcurrencyMinVolumeScaleCVar)
                  break;
                }
                SoundConcurrencyPrivate::SetSoundDataTarget(pFVar1,pFVar13,fVar17,fVar19);
                break;
              }
              uVar9 = puVar10[6];
            } while (uVar9 != 0xffffffff);
          }
        }
        iVar11 = (this->ActiveSounds).ArrayNum;
        pFVar13 = (FConcurrencySoundData *)(ulonglong)(uVar14 + 1);
        pFVar16 = (FConcurrencySoundData *)&pFVar16->Elapsed;
      } while ((int)(uVar14 + 1) < iVar11);
    }
  }
  return;
}

