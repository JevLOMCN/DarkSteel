// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 125

// MakeInternal<FExponentialHeightFogDynamicState> @ 1456d83c0

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::
MakeInternal<FExponentialHeightFogDynamicState>
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,
          FExponentialHeightFogDynamicState *param_1)

{
  return;
}

// MakeInternal<FExponentialHeightFogStaticState> @ 1456d83d0

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::
MakeInternal<FExponentialHeightFogStaticState>
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,
          FExponentialHeightFogStaticState *param_1)

{
  return;
}

// MakeInternal<FParticleSystemDynamicState> @ 1456d83e0

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::MakeInternal<FParticleSystemDynamicState>
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,
          FParticleSystemDynamicState *param_1)

{
  FStateStreamHandle::MakeInternal((FStateStreamHandle *)&param_1->Transform);
  return;
}

// MakeInternal<FParticleSystemStaticState> @ 1456d83f0

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::MakeInternal<FParticleSystemStaticState>
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,
          FParticleSystemStaticState *param_1)

{
  return;
}

// MakeInternal<FSkinnedMeshDynamicState> @ 1456d8400

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::MakeInternal<FSkinnedMeshDynamicState>
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,FSkinnedMeshDynamicState *param_1)

{
  FStateStreamHandle::MakeInternal((FStateStreamHandle *)&param_1->Transform);
  return;
}

// MakeInternal<FSkinnedMeshStaticState> @ 1456d8410

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::MakeInternal<FSkinnedMeshStaticState>
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,FSkinnedMeshStaticState *param_1)

{
  return;
}

// MakeInternal<FSkyAtmosphereDynamicState> @ 1456d8420

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::MakeInternal<FSkyAtmosphereDynamicState>
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,FSkyAtmosphereDynamicState *param_1
          )

{
  return;
}

// MakeInternal<FSkyAtmosphereStaticState> @ 1456d8430

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::MakeInternal<FSkyAtmosphereStaticState>
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,FSkyAtmosphereStaticState *param_1)

{
  return;
}

// MakeInternal<FStaticMeshDynamicState> @ 1456d8440

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::MakeInternal<FStaticMeshDynamicState>
          (TStateStream<FStaticMeshStateStreamSettings> *this,FStaticMeshDynamicState *param_1)

{
  FStateStreamHandle::MakeInternal((FStateStreamHandle *)&param_1->Transform);
  return;
}

// MakeInternal<FStaticMeshStaticState> @ 1456d8450

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::MakeInternal<FStaticMeshStaticState>
          (TStateStream<FStaticMeshStateStreamSettings> *this,FStaticMeshStaticState *param_1)

{
  return;
}

// ~TStateStream<FExponentialHeightFogStateStreamSettings> @ 1456ddc00

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::
~TStateStream<FExponentialHeightFogStateStreamSettings>
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  pFVar1 = (this->DeferredDestroys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::
  ~FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>(&(this->DynamicStates).Array);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  }
  FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>::
  ~FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
            (&(this->Instances).Array);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Instances);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Instances);
  }
  this->_padding_ = (longlong)&___7IStateStream__6B_;
  return;
}

// ~TStateStream<FParticleSystemStateStreamSettingsCascade> @ 1456ddd20

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::
~TStateStream<FParticleSystemStateStreamSettingsCascade>
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  pFVar1 = (this->DeferredDestroys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TStateStreamStore<FParticleSystemDynamicState>::~TStateStreamStore<FParticleSystemDynamicState>
            (&this->DynamicStates);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  }
  TStateStreamStore<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance>::
  ~TStateStreamStore<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance>
            (&this->Instances);
  this->_padding_ = (longlong)&___7IStateStream__6B_;
  return;
}

// ~TStateStream<FSkinnedMeshStateStreamSettings> @ 1456dddc0

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::~TStateStream<FSkinnedMeshStateStreamSettings>
          (TStateStream<FSkinnedMeshStateStreamSettings> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  pFVar1 = (this->DeferredDestroys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TStateStreamStore<FSkinnedMeshDynamicState>::~TStateStreamStore<FSkinnedMeshDynamicState>
            (&this->DynamicStates);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  }
  TStateStreamStore<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance>::
  ~TStateStreamStore<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance>(&this->Instances);
  this->_padding_ = (longlong)&___7IStateStream__6B_;
  return;
}

// ~TStateStream<FSkyAtmosphereStateStreamSettings> @ 1456dde60

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::~TStateStream<FSkyAtmosphereStateStreamSettings>
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  pFVar1 = (this->DeferredDestroys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::
  ~FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>(&(this->DynamicStates).Array);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  }
  FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>::
  ~FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
            (&(this->Instances).Array);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Instances);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Instances);
  }
  this->_padding_ = (longlong)&___7IStateStream__6B_;
  return;
}

// ~TStateStream<FStaticMeshStateStreamSettings> @ 1456ddf80

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::~TStateStream<FStaticMeshStateStreamSettings>
          (TStateStream<FStaticMeshStateStreamSettings> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  pFVar1 = (this->DeferredDestroys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TStateStreamStore<FStaticMeshDynamicState>::~TStateStreamStore<FStaticMeshDynamicState>
            (&this->DynamicStates);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTickLock);
  }
  TStateStreamStore<TStateStream<FStaticMeshStateStreamSettings>::FInstance>::
  ~TStateStreamStore<TStateStream<FStaticMeshStateStreamSettings>::FInstance>(&this->Instances);
  this->_padding_ = (longlong)&___7IStateStream__6B_;
  return;
}

// ApplyChanges @ 1456f52f0

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::ApplyChanges
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,FTick *param_1,
          double param_2,uint param_3,double param_4,TBitArray<FDefaultBitArrayAllocator> *param_5)

{
  int *piVar1;
  TArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  FScriptContainerElement FVar8;
  ForElementType<unsigned_int> FVar9;
  UTextureCube *pUVar10;
  FTick *pFVar11;
  longlong lVar12;
  code *pcVar13;
  undefined8 uVar14;
  float fVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  FInstance *pFVar21;
  FExponentialHeightFogDynamicState *pFVar22;
  FExponentialHeightFogDynamicState *pFVar23;
  byte bVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  ForElementType<unsigned_int> FVar27;
  ulonglong uVar28;
  ForAnyElementType FVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104 [4];
  uint local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  uint local_c8;
  FInstance *local_c0;
  FInstance *local_b8;
  FInstance *local_b0;
  uint local_a8;
  FStateStreamCopyContext local_a4;
  uint local_a0;
  uint local_9c;
  longlong local_98;
  ulonglong local_90;
  FInstance *local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  int local_78;
  int local_74;
  FTick *local_70;
  FStateStreamInterpolateContext local_68 [3];
  ulonglong uVar33;
  
  uVar25 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iVar20 = param_5->NumBits;
  local_100 = 0;
  uVar28 = uVar25;
  if (iVar20 != 0) {
    FVar9 = (param_5->AllocatorInstance).SecondaryData;
    FVar27 = (ForElementType<unsigned_int>)param_5;
    if (FVar9 != (ForElementType<unsigned_int>)0x0) {
      FVar27 = FVar9;
    }
    uVar31 = *(uint *)FVar27;
    uVar33 = uVar25;
    while (uVar28 = 0, uVar31 == 0) {
      local_100 = (int)uVar25 + 0x20;
      uVar25 = (ulonglong)local_100;
      iVar30 = (int)uVar33;
      uVar31 = iVar30 + 1;
      uVar33 = (ulonglong)uVar31;
      if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar31) goto LAB_1456f5c24;
      uVar31 = *(uint *)((uchar *)((longlong)FVar27 + 4) + (longlong)iVar30 * 4);
    }
    local_90 = (ulonglong)(-uVar31 & uVar31);
    uVar3 = local_90 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_78 = (int)lVar12;
    uVar31 = local_78 + -1 + (int)uVar25;
    if ((int)uVar31 < iVar20) {
      local_c8 = 0xffffffff;
      do {
        pFVar21 = FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
                  ::GetElementAt(&(this->Instances).Array,uVar31);
        local_a0 = pFVar21->DeleteTick;
        if (param_3 < local_a0) {
          uVar19 = pFVar21->CreateTick;
          if ((param_3 < uVar19) && (uVar19 <= param_1->Index)) {
            bVar18 = true;
          }
          else {
            bVar18 = false;
          }
          local_9c = param_1->Index;
          bVar17 = local_a0 <= local_9c;
          if (bVar18) {
            if (local_9c < local_a0) {
              if (((pFVar21->RendDynamicState).bIsSet != false) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!Instance.RendDynamicState.IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                                      ,0x245,L""), bVar16)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar19 = 0;
              if ((int)uVar31 < (param_1->DynamicStates).ArrayNum) {
                uVar19 = ~uVar31 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar22 = FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,
                                   *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                            (longlong)(int)uVar31 * 4));
              (pFVar21->RendDynamicState).TypedValue.ModifiedFlags = pFVar22->ModifiedFlags;
              (pFVar21->RendDynamicState).TypedValue.FogDensity = pFVar22->FogDensity;
              (pFVar21->RendDynamicState).TypedValue.FogHeightFalloff = pFVar22->FogHeightFalloff;
              fVar15 = (pFVar22->SecondFogData).FogHeightFalloff;
              (pFVar21->RendDynamicState).TypedValue.SecondFogData.FogDensity =
                   (pFVar22->SecondFogData).FogDensity;
              (pFVar21->RendDynamicState).TypedValue.SecondFogData.FogHeightFalloff = fVar15;
              (pFVar21->RendDynamicState).TypedValue.SecondFogData.FogHeightOffset =
                   (pFVar22->SecondFogData).FogHeightOffset;
              uVar14 = *(undefined8 *)
                        ((longlong)&(pFVar22->FogInscatteringLuminance).field0_0x0 + 8);
              *(undefined8 *)
               &(pFVar21->RendDynamicState).TypedValue.FogInscatteringLuminance.field0_0x0 =
                   *(undefined8 *)&(pFVar22->FogInscatteringLuminance).field0_0x0;
              *(undefined8 *)
               ((longlong)
                &(pFVar21->RendDynamicState).TypedValue.FogInscatteringLuminance.field0_0x0 + 8) =
                   uVar14;
              uVar14 = *(undefined8 *)
                        ((longlong)&(pFVar22->SkyAtmosphereAmbientContributionColorScale).field0_0x0
                        + 8);
              *(undefined8 *)
               &(pFVar21->RendDynamicState).TypedValue.SkyAtmosphereAmbientContributionColorScale.
                field0_0x0 = *(undefined8 *)
                              &(pFVar22->SkyAtmosphereAmbientContributionColorScale).field0_0x0;
              *(undefined8 *)
               ((longlong)
                &(pFVar21->RendDynamicState).TypedValue.SkyAtmosphereAmbientContributionColorScale.
                 field0_0x0 + 8) = uVar14;
              pUVar10 = (pFVar22->InscatteringColorCubemap).field0_0x0.DebugPtr;
              (pFVar21->RendDynamicState).TypedValue.InscatteringColorCubemap.field0_0x0.DebugPtr =
                   pUVar10;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar10 != (UTextureCube *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar10);
              }
              (pFVar21->RendDynamicState).TypedValue.InscatteringColorCubemapAngle =
                   pFVar22->InscatteringColorCubemapAngle;
              uVar14 = *(undefined8 *)((longlong)&(pFVar22->InscatteringTextureTint).field0_0x0 + 8)
              ;
              *(undefined8 *)
               &(pFVar21->RendDynamicState).TypedValue.InscatteringTextureTint.field0_0x0 =
                   *(undefined8 *)&(pFVar22->InscatteringTextureTint).field0_0x0;
              *(undefined8 *)
               ((longlong)&(pFVar21->RendDynamicState).TypedValue.InscatteringTextureTint.field0_0x0
               + 8) = uVar14;
              (pFVar21->RendDynamicState).TypedValue.FullyDirectionalInscatteringColorDistance =
                   pFVar22->FullyDirectionalInscatteringColorDistance;
              (pFVar21->RendDynamicState).TypedValue.NonDirectionalInscatteringColorDistance =
                   pFVar22->NonDirectionalInscatteringColorDistance;
              (pFVar21->RendDynamicState).TypedValue.DirectionalInscatteringExponent =
                   pFVar22->DirectionalInscatteringExponent;
              (pFVar21->RendDynamicState).TypedValue.DirectionalInscatteringStartDistance =
                   pFVar22->DirectionalInscatteringStartDistance;
              uVar14 = *(undefined8 *)
                        ((longlong)&(pFVar22->DirectionalInscatteringLuminance).field0_0x0 + 8);
              *(undefined8 *)
               &(pFVar21->RendDynamicState).TypedValue.DirectionalInscatteringLuminance.field0_0x0 =
                   *(undefined8 *)&(pFVar22->DirectionalInscatteringLuminance).field0_0x0;
              *(undefined8 *)
               ((longlong)
                &(pFVar21->RendDynamicState).TypedValue.DirectionalInscatteringLuminance.field0_0x0
               + 8) = uVar14;
              (pFVar21->RendDynamicState).TypedValue.FogMaxOpacity = pFVar22->FogMaxOpacity;
              (pFVar21->RendDynamicState).TypedValue.StartDistance = pFVar22->StartDistance;
              (pFVar21->RendDynamicState).TypedValue.EndDistance = pFVar22->EndDistance;
              (pFVar21->RendDynamicState).TypedValue.FogCutoffDistance = pFVar22->FogCutoffDistance;
              (pFVar21->RendDynamicState).TypedValue.bEnableVolumetricFog =
                   pFVar22->bEnableVolumetricFog;
              (pFVar21->RendDynamicState).TypedValue.VolumetricFogScatteringDistribution =
                   pFVar22->VolumetricFogScatteringDistribution;
              (pFVar21->RendDynamicState).TypedValue.VolumetricFogAlbedo.field0_0x0 =
                   (pFVar22->VolumetricFogAlbedo).field0_0x0;
              uVar14 = *(undefined8 *)((longlong)&(pFVar22->VolumetricFogEmissive).field0_0x0 + 8);
              *(undefined8 *)
               &(pFVar21->RendDynamicState).TypedValue.VolumetricFogEmissive.field0_0x0 =
                   *(undefined8 *)&(pFVar22->VolumetricFogEmissive).field0_0x0;
              *(undefined8 *)
               ((longlong)&(pFVar21->RendDynamicState).TypedValue.VolumetricFogEmissive.field0_0x0 +
               8) = uVar14;
              (pFVar21->RendDynamicState).TypedValue.VolumetricFogExtinctionScale =
                   pFVar22->VolumetricFogExtinctionScale;
              (pFVar21->RendDynamicState).TypedValue.VolumetricFogDistance =
                   pFVar22->VolumetricFogDistance;
              (pFVar21->RendDynamicState).TypedValue.VolumetricFogStartDistance =
                   pFVar22->VolumetricFogStartDistance;
              (pFVar21->RendDynamicState).TypedValue.VolumetricFogNearFadeInDistance =
                   pFVar22->VolumetricFogNearFadeInDistance;
              (pFVar21->RendDynamicState).TypedValue.VolumetricFogStaticLightingScatteringIntensity
                   = pFVar22->VolumetricFogStaticLightingScatteringIntensity;
              (pFVar21->RendDynamicState).TypedValue.bOverrideLightColorsWithFogInscatteringColors =
                   pFVar22->bOverrideLightColorsWithFogInscatteringColors;
              uVar7 = (pFVar21->RendDynamicState).TypedValue.field_0xb5;
              bVar24 = ((pFVar21->RendDynamicState).TypedValue.bHoldout ^ pFVar22->bHoldout) & 1 ^
                       uVar7;
              (pFVar21->RendDynamicState).TypedValue.field_0xb5 = bVar24;
              bVar24 = (bVar24 ^ pFVar22->field_0xb5) & 2 ^ bVar24;
              (pFVar21->RendDynamicState).TypedValue.field_0xb5 = bVar24;
              bVar24 = (bVar24 ^ pFVar22->field_0xb5) & 4 ^ bVar24;
              (pFVar21->RendDynamicState).TypedValue.field_0xb5 = bVar24;
              (pFVar21->RendDynamicState).TypedValue.field_0xb5 =
                   (bVar24 ^ pFVar22->field_0xb5) & 8 ^ bVar24;
              (pFVar21->RendDynamicState).TypedValue.Height = pFVar22->Height;
              (pFVar21->RendDynamicState).bIsSet = true;
LAB_1456f569f:
              if (((pFVar21->RendDynamicState).bIsSet == false) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar16)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar19 = 0;
              if ((param_2 == param_1->Time) ||
                 (pFVar11 = param_1->PrevTick, local_70 = pFVar11, pFVar11 == (FTick *)0x0)) {
                if (bVar18) goto LAB_1456f58ab;
                local_a4.IsInternal = 1;
                if ((int)uVar31 < (param_1->DynamicStates).ArrayNum) {
                  uVar19 = ~uVar31 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar22 = FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::
                          operator[](&(this->DynamicStates).Array,
                                     *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                              (longlong)(int)uVar31 * 4));
                FExponentialHeightFogDynamicState::Apply
                          (&(pFVar21->RendDynamicState).TypedValue,&local_a4,pFVar22);
              }
              else {
                uVar32 = uVar19;
                if ((int)uVar31 < (pFVar11->DynamicStates).ArrayNum) {
                  uVar32 = ~uVar31 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_98 = (longlong)(int)uVar31;
                local_a8 = *(uint *)((pFVar11->DynamicStates).AllocatorInstance.Data + local_98 * 4)
                ;
                if ((int)uVar31 < (param_1->DynamicStates).ArrayNum) {
                  uVar19 = ~uVar31 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                dVar4 = param_1->Time;
                uVar31 = *(uint *)((param_1->DynamicStates).AllocatorInstance.Data + local_98 * 4);
                dVar5 = local_70->Time;
                dVar6 = local_70->Time;
                pFVar22 = FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::
                          operator[](&(this->DynamicStates).Array,local_a8);
                pFVar23 = FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::
                          operator[](&(this->DynamicStates).Array,uVar31);
                local_68[0]._padding_._0_4_ = 1;
                local_68[0].Factor = (param_2 - dVar5) / (dVar4 - dVar6);
                FExponentialHeightFogDynamicState::Interpolate
                          (&(pFVar21->RendDynamicState).TypedValue,local_68,pFVar22,pFVar23);
                if (bVar18) {
LAB_1456f58ab:
                  local_88 = pFVar21;
                  uStack_80 = bVar17;
                  if (((local_d8.Data <= (FScriptContainerElement *)&local_88) &&
                      ((FScriptContainerElement *)&local_88 <
                       local_d8.Data + (longlong)local_d0._4_4_ * 0x10)) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar17)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  iVar20 = (int)local_d0;
                  if ((int)local_d0 == local_d0._4_4_) {
                    iVar20 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
                  }
                  local_d0 = CONCAT44(local_d0._4_4_,iVar20 + 1);
                  *(FInstance **)(local_d8.Data + (longlong)iVar20 * 0x10) = local_88;
                  *(ulonglong *)(local_d8.Data + (longlong)iVar20 * 0x10 + 8) =
                       CONCAT71(uStack_7f,uStack_80);
                }
              }
              if (local_9c < local_a0) {
                if (!bVar18) {
                  local_b0 = pFVar21;
                  if (((local_e8.Data <= (FScriptContainerElement *)&local_b0) &&
                      ((FScriptContainerElement *)&local_b0 <
                       local_e8.Data + (longlong)local_e0._4_4_ * 8)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  iVar20 = (int)local_e0;
                  if ((int)local_e0 == local_e0._4_4_) {
                    iVar20 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_e8,(int *)((longlong)&local_e0 + 4));
                  }
                  local_e0 = CONCAT44(local_e0._4_4_,iVar20 + 1);
                  pFVar21 = local_b0;
                  FVar29.Data = local_e8.Data;
                  goto LAB_1456f5b6f;
                }
              }
              else if (bVar18) {
                pTVar2 = &this->DeferredDestroys;
                pFVar26 = (pTVar2->AllocatorInstance).Data;
                local_c0 = pFVar21;
                if (((pFVar26 <= (FScriptContainerElement *)&local_c0) &&
                    ((FScriptContainerElement *)&local_c0 <
                     pFVar26 + (longlong)(this->DeferredDestroys).ArrayMax * 8)) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar20 = (this->DeferredDestroys).ArrayNum;
                piVar1 = &(this->DeferredDestroys).ArrayMax;
                if (iVar20 == *piVar1) {
                  iVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar2->AllocatorInstance,piVar1);
                }
                (this->DeferredDestroys).ArrayNum = iVar20 + 1;
                *(FInstance **)((pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 8) = local_c0;
              }
              else {
                local_b8 = pFVar21;
                if (((local_f8.Data <= (FScriptContainerElement *)&local_b8) &&
                    ((FScriptContainerElement *)&local_b8 <
                     local_f8.Data + (longlong)local_f0._4_4_ * 8)) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar18)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar20 = (int)local_f0;
                if ((int)local_f0 == local_f0._4_4_) {
                  iVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_f8,(int *)((longlong)&local_f0 + 4));
                }
                local_f0 = CONCAT44(local_f0._4_4_,iVar20 + 1);
                pFVar21 = local_b8;
                FVar29.Data = local_f8.Data;
LAB_1456f5b6f:
                *(FInstance **)(FVar29.Data + (longlong)iVar20 * 8) = pFVar21;
              }
              uVar25 = (ulonglong)local_100;
            }
          }
          else if (uVar19 != local_9c) goto LAB_1456f569f;
        }
        local_c8 = ~(uint)local_90 & local_c8;
        FVar9 = (param_5->AllocatorInstance).SecondaryData;
        uVar19 = param_5->NumBits;
        FVar27 = (ForElementType<unsigned_int>)param_5;
        if (FVar9 != (ForElementType<unsigned_int>)0x0) {
          FVar27 = FVar9;
        }
        uVar31 = local_c8 & *(uint *)((longlong)FVar27 + (longlong)(int)uVar33 * 4);
        while (uVar31 == 0) {
          local_100 = (int)uVar25 + 0x20;
          uVar25 = (ulonglong)local_100;
          iVar20 = (int)uVar33;
          uVar32 = iVar20 + 1;
          uVar33 = (ulonglong)uVar32;
          uVar31 = uVar19;
          if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar32)
          goto LAB_1456f5c06;
          uVar31 = *(uint *)((uchar *)((longlong)FVar27 + 4) + (longlong)iVar20 * 4);
          local_c8 = 0xffffffff;
        }
        local_90 = CONCAT44(local_90._4_4_,-uVar31 & uVar31);
        uVar28 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_74 = (int)lVar12;
        uVar31 = local_74 + -1 + (int)uVar25;
        if ((int)uVar19 < (int)uVar31) {
          uVar31 = uVar19;
        }
LAB_1456f5c06:
      } while ((int)uVar31 < param_5->NumBits);
      uVar28 = local_d0 & 0xffffffff;
    }
  }
LAB_1456f5c24:
  iVar20 = (int)uVar28;
  pFVar26 = local_d8.Data + (longlong)iVar20 * 0x10;
  FVar29.Data = local_d8.Data;
  while( true ) {
    if ((int)uVar28 != iVar20) {
      local_106 = 0;
      `TCheckedPointerIterator<`TStateStream<FExponentialHeightFogStateStreamSettings>::ApplyChanges'::__l2::FCreateInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_106);
    }
    if (FVar29.Data == pFVar26) break;
    pFVar21 = *(FInstance **)FVar29.Data;
    FVar8 = FVar29.Data[8];
    if (((pFVar21->RendDynamicState).bIsSet == false) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar18)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    (**(code **)(this->_padding_ + 0x60))
              (this,pFVar21,&pFVar21->RendDynamicState,&pFVar21->UserData,FVar8);
    uVar28 = local_d0 & 0xffffffff;
    FVar29.Data = FVar29.Data + 0x10;
  }
  iVar20 = (int)local_e0;
  uVar25 = (ulonglong)(int)local_e0;
  pFVar26 = local_e8.Data + uVar25 * 8;
  FVar29.Data = local_e8.Data;
  while( true ) {
    if ((int)uVar25 != iVar20) {
      local_105 = 0;
      `TCheckedPointerIterator<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_105);
    }
    if (FVar29.Data == pFVar26) break;
    pFVar21 = *(FInstance **)FVar29.Data;
    if (((pFVar21->RendDynamicState).bIsSet == false) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar18)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    (**(code **)(this->_padding_ + 0x68))
              (this,pFVar21,&pFVar21->RendDynamicState,&pFVar21->UserData);
    uVar25 = local_e0 & 0xffffffff;
    FVar29.Data = FVar29.Data + 8;
  }
  iVar20 = (int)local_f0;
  uVar25 = (ulonglong)(int)local_f0;
  pFVar26 = local_f8.Data + uVar25 * 8;
  FVar29.Data = local_f8.Data;
  while( true ) {
    if ((int)uVar25 != iVar20) {
      local_104[0] = 0;
      `TCheckedPointerIterator<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_104);
    }
    if (FVar29.Data == pFVar26) break;
    pFVar21 = *(FInstance **)FVar29.Data;
    if (((pFVar21->RendDynamicState).bIsSet == false) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar18)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    (**(code **)(this->_padding_ + 0x70))
              (this,pFVar21,&pFVar21->RendDynamicState,&pFVar21->UserData);
    if ((pFVar21->RendDynamicState).bIsSet != false) {
      (pFVar21->RendDynamicState).bIsSet = false;
    }
    uVar25 = local_f0 & 0xffffffff;
    FVar29.Data = FVar29.Data + 8;
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// ApplyChanges @ 1456f5e40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::ApplyChanges
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,FTick *param_1,
          double param_2,uint param_3,double param_4,TBitArray<FDefaultBitArrayAllocator> *param_5)

{
  int *piVar1;
  TArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  ulonglong uVar3;
  FScriptContainerElement FVar4;
  ForElementType<unsigned_int> FVar5;
  UFXSystemAsset *pUVar6;
  FTick *pFVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FInstance *pFVar16;
  FParticleSystemDynamicState *pFVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  ForElementType<unsigned_int> FVar20;
  ulonglong uVar21;
  ForAnyElementType FVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104 [4];
  uint local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  uint local_c8;
  FInstance *local_c0;
  FInstance *local_b8;
  FInstance *local_b0;
  FStateStreamCopyContext local_a8;
  uint local_a4;
  FStateStreamCopyContext local_a0;
  uint local_9c;
  uint local_98;
  ulonglong local_90;
  FInstance *local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  int local_78;
  int local_74;
  FStateStreamCopyContext local_70 [2];
  double local_68;
  ulonglong uVar26;
  
  uVar18 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iVar15 = param_5->NumBits;
  local_100 = 0;
  uVar21 = uVar18;
  if (iVar15 != 0) {
    FVar5 = (param_5->AllocatorInstance).SecondaryData;
    FVar20 = (ForElementType<unsigned_int>)param_5;
    if (FVar5 != (ForElementType<unsigned_int>)0x0) {
      FVar20 = FVar5;
    }
    uVar24 = *(uint *)FVar20;
    uVar26 = uVar18;
    while (uVar21 = 0, uVar24 == 0) {
      local_100 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)local_100;
      iVar23 = (int)uVar26;
      uVar24 = iVar23 + 1;
      uVar26 = (ulonglong)uVar24;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar24) goto LAB_1456f6684;
      uVar24 = *(uint *)((uchar *)((longlong)FVar20 + 4) + (longlong)iVar23 * 4);
    }
    local_90 = (ulonglong)(-uVar24 & uVar24);
    uVar3 = local_90 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_78 = (int)lVar8;
    uVar24 = local_78 + -1 + (int)uVar18;
    if ((int)uVar24 < iVar15) {
      local_c8 = 0xffffffff;
      do {
        pFVar16 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
                  ::GetElementAt(&(this->Instances).Array,uVar24);
        local_9c = pFVar16->DeleteTick;
        if (param_3 < local_9c) {
          uVar14 = pFVar16->CreateTick;
          if ((param_3 < uVar14) && (uVar14 <= param_1->Index)) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
          }
          local_98 = param_1->Index;
          bVar12 = local_9c <= local_98;
          if (bVar13) {
            if (((pFVar16->RendDynamicState).bIsSet != false) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!Instance.RendDynamicState.IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                                    ,0x245,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar14 = 0;
            if ((int)uVar24 < (param_1->DynamicStates).ArrayNum) {
              uVar14 = ~uVar24 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_a8.IsInternal = 1;
            pFVar17 = FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[]
                                (&(this->DynamicStates).Array,
                                 *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                          (longlong)(int)uVar24 * 4));
            if ((pFVar16->RendDynamicState).bIsSet != false) {
              FStateStreamHandle::~FStateStreamHandle
                        ((FStateStreamHandle *)&(pFVar16->RendDynamicState).TypedValue.Transform);
            }
            (pFVar16->RendDynamicState).TypedValue.ModifiedFlags = pFVar17->ModifiedFlags;
            FStateStreamHandle::FStateStreamHandle
                      ((FStateStreamHandle *)&(pFVar16->RendDynamicState).TypedValue.Transform,
                       &local_a8,(FStateStreamHandle *)&pFVar17->Transform);
            pUVar6 = (pFVar17->SystemAsset).field0_0x0.DebugPtr;
            (pFVar16->RendDynamicState).TypedValue.SystemAsset.field0_0x0.DebugPtr = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar6 != (UFXSystemAsset *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            (pFVar16->RendDynamicState).bIsSet = true;
LAB_1456f608b:
            if (((pFVar16->RendDynamicState).bIsSet == false) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((param_2 == param_1->Time) || (pFVar7 = param_1->PrevTick, pFVar7 == (FTick *)0x0))
            {
              if (bVar13) goto LAB_1456f622b;
              local_a0.IsInternal = 1;
              uVar14 = 0;
              if ((int)uVar24 < (param_1->DynamicStates).ArrayNum) {
                uVar14 = ~uVar24 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar17 = FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,
                                   *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                            (longlong)(int)uVar24 * 4));
              if (((pFVar17->ModifiedFlags & 1) != 0) &&
                 (bVar12 = FStateStreamHandle::operator==
                                     ((FStateStreamHandle *)
                                      &(pFVar16->RendDynamicState).TypedValue.Transform,
                                      (FStateStreamHandle *)&pFVar17->Transform), !bVar12)) {
                FStateStreamHandle::Apply
                          ((FStateStreamHandle *)&(pFVar16->RendDynamicState).TypedValue.Transform,
                           &local_a0,(FStateStreamHandle *)&pFVar17->Transform);
                (pFVar16->RendDynamicState).TypedValue.ModifiedFlags =
                     (pFVar16->RendDynamicState).TypedValue.ModifiedFlags | 1;
              }
              if (((pFVar17->ModifiedFlags & 2) != 0) &&
                 (pUVar6 = (pFVar17->SystemAsset).field0_0x0.DebugPtr,
                 (pFVar16->RendDynamicState).TypedValue.SystemAsset.field0_0x0.DebugPtr != pUVar6))
              {
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar6 != (UFXSystemAsset *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar6);
                }
                (pFVar16->RendDynamicState).TypedValue.SystemAsset.field0_0x0 =
                     (pFVar17->SystemAsset).field0_0x0;
                (pFVar16->RendDynamicState).TypedValue.ModifiedFlags =
                     (pFVar16->RendDynamicState).TypedValue.ModifiedFlags | 2;
              }
            }
            else {
              uVar14 = 0;
              if ((int)uVar24 < (pFVar7->DynamicStates).ArrayNum) {
                uVar14 = ~uVar24 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_a4 = *(uint *)((pFVar7->DynamicStates).AllocatorInstance.Data +
                                  (longlong)(int)uVar24 * 4);
              uVar14 = 0;
              if ((int)uVar24 < (param_1->DynamicStates).ArrayNum) {
                uVar14 = ~uVar24 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              dVar10 = (param_2 - pFVar7->Time) / (param_1->Time - pFVar7->Time);
              uVar24 = *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar24 * 4);
              FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[]
                        (&(this->DynamicStates).Array,local_a4);
              pFVar17 = FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,uVar24);
              local_70[0].IsInternal = 1;
              (pFVar16->RendDynamicState).TypedValue.ModifiedFlags = 0;
              local_68 = dVar10;
              if ((pFVar17->ModifiedFlags & 1) != 0) {
                (pFVar16->RendDynamicState).TypedValue.ModifiedFlags = 1;
                FStateStreamHandle::Apply
                          ((FStateStreamHandle *)&(pFVar16->RendDynamicState).TypedValue.Transform,
                           local_70,(FStateStreamHandle *)&pFVar17->Transform);
              }
              if ((pFVar17->ModifiedFlags & 2) != 0) {
                (pFVar16->RendDynamicState).TypedValue.ModifiedFlags =
                     (pFVar16->RendDynamicState).TypedValue.ModifiedFlags | 2;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar6 = (pFVar17->SystemAsset).field0_0x0.DebugPtr,
                   pUVar6 != (UFXSystemAsset *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar6);
                }
                (pFVar16->RendDynamicState).TypedValue.SystemAsset.field0_0x0 =
                     (pFVar17->SystemAsset).field0_0x0;
              }
              if (bVar13) {
LAB_1456f622b:
                local_88 = pFVar16;
                uStack_80 = bVar12;
                if (((local_d8.Data <= (FScriptContainerElement *)&local_88) &&
                    ((FScriptContainerElement *)&local_88 <
                     local_d8.Data + (longlong)local_d0._4_4_ * 0x10)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar15 = (int)local_d0;
                if ((int)local_d0 == local_d0._4_4_) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
                }
                local_d0 = CONCAT44(local_d0._4_4_,iVar15 + 1);
                *(FInstance **)(local_d8.Data + (longlong)iVar15 * 0x10) = local_88;
                *(ulonglong *)(local_d8.Data + (longlong)iVar15 * 0x10 + 8) =
                     CONCAT71(uStack_7f,uStack_80);
              }
            }
            if (local_98 < local_9c) {
              if (!bVar13) {
                local_b0 = pFVar16;
                if (((local_e8.Data <= (FScriptContainerElement *)&local_b0) &&
                    ((FScriptContainerElement *)&local_b0 <
                     local_e8.Data + (longlong)local_e0._4_4_ * 8)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar15 = (int)local_e0;
                if ((int)local_e0 == local_e0._4_4_) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_e8,(int *)((longlong)&local_e0 + 4));
                }
                local_e0 = CONCAT44(local_e0._4_4_,iVar15 + 1);
                pFVar16 = local_b0;
                FVar22.Data = local_e8.Data;
                goto LAB_1456f65d4;
              }
            }
            else if (bVar13) {
              pTVar2 = &this->DeferredDestroys;
              pFVar19 = (pTVar2->AllocatorInstance).Data;
              local_c0 = pFVar16;
              if (((pFVar19 <= (FScriptContainerElement *)&local_c0) &&
                  ((FScriptContainerElement *)&local_c0 <
                   pFVar19 + (longlong)(this->DeferredDestroys).ArrayMax * 8)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar15 = (this->DeferredDestroys).ArrayNum;
              piVar1 = &(this->DeferredDestroys).ArrayMax;
              if (iVar15 == *piVar1) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar2->AllocatorInstance,piVar1);
              }
              (this->DeferredDestroys).ArrayNum = iVar15 + 1;
              *(FInstance **)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_c0;
            }
            else {
              local_b8 = pFVar16;
              if (((local_f8.Data <= (FScriptContainerElement *)&local_b8) &&
                  ((FScriptContainerElement *)&local_b8 <
                   local_f8.Data + (longlong)local_f0._4_4_ * 8)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar15 = (int)local_f0;
              if ((int)local_f0 == local_f0._4_4_) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_f8,(int *)((longlong)&local_f0 + 4));
              }
              local_f0 = CONCAT44(local_f0._4_4_,iVar15 + 1);
              pFVar16 = local_b8;
              FVar22.Data = local_f8.Data;
LAB_1456f65d4:
              *(FInstance **)(FVar22.Data + (longlong)iVar15 * 8) = pFVar16;
            }
          }
          else if (uVar14 != local_98) goto LAB_1456f608b;
          uVar18 = (ulonglong)local_100;
        }
        local_c8 = ~(uint)local_90 & local_c8;
        FVar5 = (param_5->AllocatorInstance).SecondaryData;
        uVar14 = param_5->NumBits;
        FVar20 = (ForElementType<unsigned_int>)param_5;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar20 = FVar5;
        }
        uVar24 = local_c8 & *(uint *)((longlong)FVar20 + (longlong)(int)uVar26 * 4);
        while (uVar24 == 0) {
          local_100 = (int)uVar18 + 0x20;
          uVar18 = (ulonglong)local_100;
          iVar15 = (int)uVar26;
          uVar25 = iVar15 + 1;
          uVar26 = (ulonglong)uVar25;
          uVar24 = uVar14;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar25)
          goto LAB_1456f6666;
          uVar24 = *(uint *)((uchar *)((longlong)FVar20 + 4) + (longlong)iVar15 * 4);
          local_c8 = 0xffffffff;
        }
        local_90 = CONCAT44(local_90._4_4_,-uVar24 & uVar24);
        uVar21 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_74 = (int)lVar8;
        uVar24 = local_74 + -1 + (int)uVar18;
        if ((int)uVar14 < (int)uVar24) {
          uVar24 = uVar14;
        }
LAB_1456f6666:
      } while ((int)uVar24 < param_5->NumBits);
      uVar21 = local_d0 & 0xffffffff;
    }
  }
LAB_1456f6684:
  iVar15 = (int)uVar21;
  pFVar19 = local_d8.Data + (longlong)iVar15 * 0x10;
  FVar22.Data = local_d8.Data;
  while( true ) {
    if ((int)uVar21 != iVar15) {
      local_106 = 0;
      `TCheckedPointerIterator<`TStateStream<FParticleSystemStateStreamSettingsCascade>::ApplyChanges'::__l2::FCreateInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_106);
    }
    if (FVar22.Data == pFVar19) break;
    pFVar16 = *(FInstance **)FVar22.Data;
    FVar4 = FVar22.Data[8];
    if (((pFVar16->RendDynamicState).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (**(code **)(this->_padding_ + 0x60))
              (this,pFVar16,&pFVar16->RendDynamicState,&pFVar16->UserData,FVar4);
    uVar21 = local_d0 & 0xffffffff;
    FVar22.Data = FVar22.Data + 0x10;
  }
  iVar15 = (int)local_e0;
  uVar18 = (ulonglong)(int)local_e0;
  pFVar19 = local_e8.Data + uVar18 * 8;
  FVar22.Data = local_e8.Data;
  while( true ) {
    if ((int)uVar18 != iVar15) {
      local_105 = 0;
      `TCheckedPointerIterator<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_105);
    }
    if (FVar22.Data == pFVar19) break;
    pFVar16 = *(FInstance **)FVar22.Data;
    if (((pFVar16->RendDynamicState).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (**(code **)(this->_padding_ + 0x68))
              (this,pFVar16,&pFVar16->RendDynamicState,&pFVar16->UserData);
    uVar18 = local_e0 & 0xffffffff;
    FVar22.Data = FVar22.Data + 8;
  }
  iVar15 = (int)local_f0;
  uVar18 = (ulonglong)(int)local_f0;
  pFVar19 = local_f8.Data + uVar18 * 8;
  FVar22.Data = local_f8.Data;
  while( true ) {
    if ((int)uVar18 != iVar15) {
      local_104[0] = 0;
      `TCheckedPointerIterator<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_104);
    }
    if (FVar22.Data == pFVar19) break;
    pFVar16 = *(FInstance **)FVar22.Data;
    if (((pFVar16->RendDynamicState).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (**(code **)(this->_padding_ + 0x70))
              (this,pFVar16,&pFVar16->RendDynamicState,&pFVar16->UserData);
    if ((pFVar16->RendDynamicState).bIsSet != false) {
      FStateStreamHandle::~FStateStreamHandle
                ((FStateStreamHandle *)&(pFVar16->RendDynamicState).TypedValue.Transform);
      (pFVar16->RendDynamicState).bIsSet = false;
    }
    uVar18 = local_f0 & 0xffffffff;
    FVar22.Data = FVar22.Data + 8;
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// ApplyChanges @ 1456f6890

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::ApplyChanges
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,FTick *param_1,double param_2,
          uint param_3,double param_4,TBitArray<FDefaultBitArrayAllocator> *param_5)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ulonglong uVar3;
  TArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  FScriptContainerElement FVar5;
  ForElementType<unsigned_int> FVar6;
  USkinnedAsset *pUVar7;
  FTick *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  FInstance *pFVar18;
  FSkinnedMeshDynamicState *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  ulonglong uVar24;
  ForElementType<unsigned_int> FVar25;
  ulonglong uVar26;
  ForAnyElementType FVar27;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104 [4];
  uint local_100;
  uint local_fc;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  uint local_c8;
  FInstance *local_c0;
  FInstance *local_b8;
  FInstance *local_b0;
  FStateStreamCopyContext local_a8;
  uint local_a4;
  FStateStreamCopyContext local_a0;
  uint local_9c;
  uint local_98;
  ulonglong local_90;
  FInstance *local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  int local_78;
  int local_74;
  FStateStreamCopyContext local_70 [2];
  double local_68;
  
  uVar20 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iVar17 = param_5->NumBits;
  local_100 = 0;
  local_fc = 0;
  uVar26 = uVar20;
  if (iVar17 != 0) {
    FVar6 = (param_5->AllocatorInstance).SecondaryData;
    FVar25 = (ForElementType<unsigned_int>)param_5;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FVar25 = FVar6;
    }
    uVar21 = *(uint *)FVar25;
    uVar24 = uVar20;
    while (uVar26 = 0, uVar21 == 0) {
      local_fc = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)local_fc;
      iVar23 = (int)uVar24;
      local_100 = iVar23 + 1;
      uVar24 = (ulonglong)local_100;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_100)
      goto LAB_1456f7137;
      uVar21 = *(uint *)((uchar *)((longlong)FVar25 + 4) + (longlong)iVar23 * 4);
    }
    local_90 = (ulonglong)(-uVar21 & uVar21);
    uVar3 = local_90 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_78 = (int)lVar10;
    uVar21 = local_78 + -1 + (int)uVar20;
    if ((int)uVar21 < iVar17) {
      local_c8 = 0xffffffff;
      do {
        pFVar18 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
                  ::GetElementAt(&(this->Instances).Array,uVar21);
        local_9c = pFVar18->DeleteTick;
        if (param_3 < local_9c) {
          uVar16 = pFVar18->CreateTick;
          if ((param_3 < uVar16) && (uVar16 <= param_1->Index)) {
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          local_98 = param_1->Index;
          bVar14 = local_9c <= local_98;
          if (bVar15) {
            if (local_98 < local_9c) {
              if (((pFVar18->RendDynamicState).bIsSet != false) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!Instance.RendDynamicState.IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                                      ,0x245,L""), bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar16 = 0;
              if ((int)uVar21 < (param_1->DynamicStates).ArrayNum) {
                uVar16 = ~uVar21 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              local_a8.IsInternal = 1;
              pFVar19 = FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,
                                   *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                            (longlong)(int)uVar21 * 4));
              if ((pFVar18->RendDynamicState).bIsSet != false) {
                pFVar22 = (pFVar18->RendDynamicState).TypedValue.OverrideMaterials.AllocatorInstance
                          .Data;
                if (pFVar22 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar22);
                }
                FStateStreamHandle::~FStateStreamHandle
                          ((FStateStreamHandle *)&(pFVar18->RendDynamicState).TypedValue.Transform);
              }
              (pFVar18->RendDynamicState).TypedValue.ModifiedFlags = pFVar19->ModifiedFlags;
              FStateStreamHandle::FStateStreamHandle
                        ((FStateStreamHandle *)&(pFVar18->RendDynamicState).TypedValue.Transform,
                         &local_a8,(FStateStreamHandle *)&pFVar19->Transform);
              pUVar7 = (pFVar19->SkinnedAsset).field0_0x0.DebugPtr;
              (pFVar18->RendDynamicState).TypedValue.SkinnedAsset.field0_0x0.DebugPtr = pUVar7;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar7 != (USkinnedAsset *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar7);
              }
              (pFVar18->RendDynamicState).TypedValue.OverrideMaterials.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              pTVar1 = &(pFVar18->RendDynamicState).TypedValue.OverrideMaterials;
              iVar17 = (pFVar19->OverrideMaterials).ArrayNum;
              piVar2 = &(pFVar18->RendDynamicState).TypedValue.OverrideMaterials.ArrayMax;
              pFVar22 = (pFVar19->OverrideMaterials).AllocatorInstance.Data;
              (pFVar18->RendDynamicState).TypedValue.OverrideMaterials.ArrayNum = iVar17;
              if (iVar17 == 0) {
                *piVar2 = 0;
                (pFVar18->RendDynamicState).bIsSet = true;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar17,0,&pTVar1->AllocatorInstance,iVar17,piVar2);
                ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                          ((pTVar1->AllocatorInstance).Data,
                           (TObjectPtr<UMaterialInterface> *)pFVar22,iVar17);
                (pFVar18->RendDynamicState).bIsSet = true;
              }
LAB_1456f6b5a:
              if (((pFVar18->RendDynamicState).bIsSet == false) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if ((param_2 == param_1->Time) || (pFVar8 = param_1->PrevTick, pFVar8 == (FTick *)0x0)
                 ) {
                if (bVar15) goto LAB_1456f6d18;
                local_a0.IsInternal = 1;
                uVar16 = 0;
                if ((int)uVar21 < (param_1->DynamicStates).ArrayNum) {
                  uVar16 = ~uVar21 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pFVar19 = FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[]
                                    (&(this->DynamicStates).Array,
                                     *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                              (longlong)(int)uVar21 * 4));
                FSkinnedMeshDynamicState::Apply
                          (&(pFVar18->RendDynamicState).TypedValue,&local_a0,pFVar19);
              }
              else {
                uVar16 = 0;
                if ((int)uVar21 < (pFVar8->DynamicStates).ArrayNum) {
                  uVar16 = ~uVar21 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                local_a4 = *(uint *)((pFVar8->DynamicStates).AllocatorInstance.Data +
                                    (longlong)(int)uVar21 * 4);
                uVar16 = 0;
                if ((int)uVar21 < (param_1->DynamicStates).ArrayNum) {
                  uVar16 = ~uVar21 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                dVar12 = (param_2 - pFVar8->Time) / (param_1->Time - pFVar8->Time);
                uVar21 = *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                  (longlong)(int)uVar21 * 4);
                FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[]
                          (&(this->DynamicStates).Array,local_a4);
                pFVar19 = FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[]
                                    (&(this->DynamicStates).Array,uVar21);
                local_70[0].IsInternal = 1;
                (pFVar18->RendDynamicState).TypedValue.ModifiedFlags = 0;
                local_68 = dVar12;
                if ((pFVar19->ModifiedFlags & 1) != 0) {
                  (pFVar18->RendDynamicState).TypedValue.ModifiedFlags = 1;
                  FStateStreamHandle::Apply
                            ((FStateStreamHandle *)&(pFVar18->RendDynamicState).TypedValue.Transform
                             ,local_70,(FStateStreamHandle *)&pFVar19->Transform);
                }
                if ((pFVar19->ModifiedFlags & 2) != 0) {
                  (pFVar18->RendDynamicState).TypedValue.ModifiedFlags =
                       (pFVar18->RendDynamicState).TypedValue.ModifiedFlags | 2;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar7 = (pFVar19->SkinnedAsset).field0_0x0.DebugPtr,
                     pUVar7 != (USkinnedAsset *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar7);
                  }
                  (pFVar18->RendDynamicState).TypedValue.SkinnedAsset.field0_0x0 =
                       (pFVar19->SkinnedAsset).field0_0x0;
                }
                if ((pFVar19->ModifiedFlags & 4) != 0) {
                  (pFVar18->RendDynamicState).TypedValue.ModifiedFlags =
                       (pFVar18->RendDynamicState).TypedValue.ModifiedFlags | 4;
                  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                            (&(pFVar18->RendDynamicState).TypedValue.OverrideMaterials,
                             &pFVar19->OverrideMaterials);
                }
                if (bVar15) {
LAB_1456f6d18:
                  local_88 = pFVar18;
                  uStack_80 = bVar14;
                  if (((local_d8.Data <= (FScriptContainerElement *)&local_88) &&
                      ((FScriptContainerElement *)&local_88 <
                       local_d8.Data + (longlong)local_d0._4_4_ * 0x10)) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar17 = (int)local_d0;
                  if ((int)local_d0 == local_d0._4_4_) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
                  }
                  local_d0 = CONCAT44(local_d0._4_4_,iVar17 + 1);
                  *(FInstance **)(local_d8.Data + (longlong)iVar17 * 0x10) = local_88;
                  *(ulonglong *)(local_d8.Data + (longlong)iVar17 * 0x10 + 8) =
                       CONCAT71(uStack_7f,uStack_80);
                }
              }
              if (local_98 < local_9c) {
                if (!bVar15) {
                  local_b0 = pFVar18;
                  if (((local_e8.Data <= (FScriptContainerElement *)&local_b0) &&
                      ((FScriptContainerElement *)&local_b0 <
                       local_e8.Data + (longlong)local_e0._4_4_ * 8)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar17 = (int)local_e0;
                  if ((int)local_e0 == local_e0._4_4_) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_e8,(int *)((longlong)&local_e0 + 4));
                  }
                  local_e0 = CONCAT44(local_e0._4_4_,iVar17 + 1);
                  pFVar18 = local_b0;
                  FVar27.Data = local_e8.Data;
                  goto LAB_1456f707f;
                }
              }
              else {
                if (bVar15) {
                  pTVar4 = &this->DeferredDestroys;
                  pFVar22 = (pTVar4->AllocatorInstance).Data;
                  local_c0 = pFVar18;
                  if (((pFVar22 <= (FScriptContainerElement *)&local_c0) &&
                      ((FScriptContainerElement *)&local_c0 <
                       pFVar22 + (longlong)(this->DeferredDestroys).ArrayMax * 8)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar17 = (this->DeferredDestroys).ArrayNum;
                  piVar2 = &(this->DeferredDestroys).ArrayMax;
                  if (iVar17 == *piVar2) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&pTVar4->AllocatorInstance,piVar2);
                  }
                  uVar24 = (ulonglong)local_100;
                  uVar20 = (ulonglong)local_fc;
                  (this->DeferredDestroys).ArrayNum = iVar17 + 1;
                  *(FInstance **)((pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 8) =
                       local_c0;
                  goto LAB_1456f708f;
                }
                local_b8 = pFVar18;
                if (((local_f8.Data <= (FScriptContainerElement *)&local_b8) &&
                    ((FScriptContainerElement *)&local_b8 <
                     local_f8.Data + (longlong)local_f0._4_4_ * 8)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                iVar17 = (int)local_f0;
                if ((int)local_f0 == local_f0._4_4_) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_f8,(int *)((longlong)&local_f0 + 4));
                }
                local_f0 = CONCAT44(local_f0._4_4_,iVar17 + 1);
                pFVar18 = local_b8;
                FVar27.Data = local_f8.Data;
LAB_1456f707f:
                *(FInstance **)(FVar27.Data + (longlong)iVar17 * 8) = pFVar18;
              }
              uVar24 = (ulonglong)local_100;
              uVar20 = (ulonglong)local_fc;
            }
          }
          else if (uVar16 != local_98) goto LAB_1456f6b5a;
        }
LAB_1456f708f:
        local_c8 = ~(uint)local_90 & local_c8;
        FVar6 = (param_5->AllocatorInstance).SecondaryData;
        uVar16 = param_5->NumBits;
        FVar25 = (ForElementType<unsigned_int>)param_5;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar25 = FVar6;
        }
        uVar21 = local_c8 & *(uint *)((longlong)FVar25 + (longlong)(int)uVar24 * 4);
        while (uVar21 == 0) {
          local_fc = (int)uVar20 + 0x20;
          uVar20 = (ulonglong)local_fc;
          iVar17 = (int)uVar24;
          local_100 = iVar17 + 1;
          uVar24 = (ulonglong)local_100;
          uVar21 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_100)
          goto LAB_1456f7118;
          uVar21 = *(uint *)((uchar *)((longlong)FVar25 + 4) + (longlong)iVar17 * 4);
          local_c8 = 0xffffffff;
        }
        local_90 = CONCAT44(local_90._4_4_,-uVar21 & uVar21);
        uVar26 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_74 = (int)lVar10;
        uVar21 = local_74 + -1 + (int)uVar20;
        if ((int)uVar16 < (int)uVar21) {
          uVar21 = uVar16;
        }
LAB_1456f7118:
      } while ((int)uVar21 < param_5->NumBits);
      uVar26 = local_d0 & 0xffffffff;
    }
  }
LAB_1456f7137:
  iVar17 = (int)uVar26;
  pFVar22 = local_d8.Data + (longlong)iVar17 * 0x10;
  FVar27.Data = local_d8.Data;
  while( true ) {
    if ((int)uVar26 != iVar17) {
      local_106 = 0;
      `TCheckedPointerIterator<`TStateStream<FSkinnedMeshStateStreamSettings>::ApplyChanges'::__l2::FCreateInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_106);
    }
    if (FVar27.Data == pFVar22) break;
    pFVar18 = *(FInstance **)FVar27.Data;
    FVar5 = FVar27.Data[8];
    if (((pFVar18->RendDynamicState).bIsSet == false) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    (**(code **)(this->_padding_ + 0x60))
              (this,pFVar18,&pFVar18->RendDynamicState,&pFVar18->UserData,FVar5);
    uVar26 = local_d0 & 0xffffffff;
    FVar27.Data = FVar27.Data + 0x10;
  }
  iVar17 = (int)local_e0;
  uVar20 = (ulonglong)(int)local_e0;
  pFVar22 = local_e8.Data + uVar20 * 8;
  FVar27.Data = local_e8.Data;
  while( true ) {
    if ((int)uVar20 != iVar17) {
      local_105 = 0;
      `TCheckedPointerIterator<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_105);
    }
    if (FVar27.Data == pFVar22) break;
    pFVar18 = *(FInstance **)FVar27.Data;
    if (((pFVar18->RendDynamicState).bIsSet == false) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    (**(code **)(this->_padding_ + 0x68))
              (this,pFVar18,&pFVar18->RendDynamicState,&pFVar18->UserData);
    uVar20 = local_e0 & 0xffffffff;
    FVar27.Data = FVar27.Data + 8;
  }
  iVar17 = (int)local_f0;
  uVar20 = (ulonglong)(int)local_f0;
  pFVar22 = local_f8.Data + uVar20 * 8;
  FVar27.Data = local_f8.Data;
  while( true ) {
    if ((int)uVar20 != iVar17) {
      local_104[0] = 0;
      `TCheckedPointerIterator<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_104);
    }
    if (FVar27.Data == pFVar22) break;
    pFVar18 = *(FInstance **)FVar27.Data;
    if (((pFVar18->RendDynamicState).bIsSet == false) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    (**(code **)(this->_padding_ + 0x70))
              (this,pFVar18,&pFVar18->RendDynamicState,&pFVar18->UserData);
    if ((pFVar18->RendDynamicState).bIsSet != false) {
      pFVar9 = (pFVar18->RendDynamicState).TypedValue.OverrideMaterials.AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      FStateStreamHandle::~FStateStreamHandle
                ((FStateStreamHandle *)&(pFVar18->RendDynamicState).TypedValue.Transform);
      (pFVar18->RendDynamicState).bIsSet = false;
    }
    uVar20 = local_f0 & 0xffffffff;
    FVar27.Data = FVar27.Data + 8;
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// ApplyChanges @ 1456f7350

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::ApplyChanges
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,FTick *param_1,double param_2,
          uint param_3,double param_4,TBitArray<FDefaultBitArrayAllocator> *param_5)

{
  int *piVar1;
  TArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  FScriptContainerElement FVar7;
  ForElementType<unsigned_int> FVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined7 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  FInstance *pFVar18;
  FSkyAtmosphereDynamicState *pFVar19;
  FSkyAtmosphereDynamicState *pFVar20;
  byte bVar21;
  ulonglong uVar22;
  ForElementType<unsigned_int> FVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  FScriptContainerElement *pFVar29;
  ForAnyElementType FVar30;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104 [4];
  ForAnyElementType local_100;
  undefined8 local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  uint local_d0;
  FInstance *local_c8;
  FInstance *local_c0;
  FInstance *local_b8;
  uint local_b0;
  FStateStreamCopyContext local_ac;
  uint local_a8;
  uint local_a4;
  double *local_a0;
  longlong local_98;
  FTick *local_90;
  ulonglong local_88;
  FInstance *local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  int local_70;
  int local_6c;
  FStateStreamInterpolateContext local_68 [3];
  ulonglong uVar28;
  
  uVar22 = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  iVar17 = param_5->NumBits;
  uVar24 = uVar22;
  if (iVar17 != 0) {
    FVar8 = (param_5->AllocatorInstance).SecondaryData;
    FVar23 = (ForElementType<unsigned_int>)param_5;
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FVar23 = FVar8;
    }
    uVar26 = *(uint *)FVar23;
    uVar28 = uVar22;
    while (uVar24 = 0, uVar26 == 0) {
      iVar25 = (int)uVar28;
      uVar22 = (ulonglong)((int)uVar22 + 0x20);
      uVar26 = iVar25 + 1;
      uVar28 = (ulonglong)uVar26;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar26) goto LAB_1456f7cd3;
      uVar26 = *(uint *)((uchar *)((longlong)FVar23 + 4) + (longlong)iVar25 * 4);
    }
    local_88 = (ulonglong)(-uVar26 & uVar26);
    uVar3 = local_88 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70 = (int)lVar9;
    uVar26 = local_70 + -1 + (int)uVar22;
    if ((int)uVar26 < iVar17) {
      local_d0 = 0xffffffff;
      do {
        pFVar18 = FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
                  ::GetElementAt(&(this->Instances).Array,uVar26);
        local_a8 = pFVar18->DeleteTick;
        if (param_3 < local_a8) {
          uVar16 = pFVar18->CreateTick;
          if ((param_3 < uVar16) && (uVar16 <= param_1->Index)) {
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          local_a4 = param_1->Index;
          bVar14 = local_a8 <= local_a4;
          uVar27 = 0;
          if (bVar15) {
            if (local_a4 < local_a8) {
              if (((pFVar18->RendDynamicState).bIsSet != false) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!Instance.RendDynamicState.IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                                      ,0x245,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uVar16 = uVar27;
              if ((int)uVar26 < (param_1->DynamicStates).ArrayNum) {
                uVar16 = ~uVar26 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar19 = FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,
                                   *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                            (longlong)(int)uVar26 * 4));
              (pFVar18->RendDynamicState).TypedValue.ModifiedFlags = pFVar19->ModifiedFlags;
              (pFVar18->RendDynamicState).TypedValue.TransformMode = pFVar19->TransformMode;
              (pFVar18->RendDynamicState).TypedValue.BottomRadius = pFVar19->BottomRadius;
              (pFVar18->RendDynamicState).TypedValue.GroundAlbedo.field0_0x0 =
                   (pFVar19->GroundAlbedo).field0_0x0;
              (pFVar18->RendDynamicState).TypedValue.AtmosphereHeight = pFVar19->AtmosphereHeight;
              (pFVar18->RendDynamicState).TypedValue.MultiScatteringFactor =
                   pFVar19->MultiScatteringFactor;
              (pFVar18->RendDynamicState).TypedValue.TraceSampleCountScale =
                   pFVar19->TraceSampleCountScale;
              (pFVar18->RendDynamicState).TypedValue.RayleighScatteringScale =
                   pFVar19->RayleighScatteringScale;
              uVar11 = *(undefined8 *)((longlong)&(pFVar19->RayleighScattering).field0_0x0 + 8);
              *(undefined8 *)&(pFVar18->RendDynamicState).TypedValue.RayleighScattering.field0_0x0 =
                   *(undefined8 *)&(pFVar19->RayleighScattering).field0_0x0;
              *(undefined8 *)
               ((longlong)&(pFVar18->RendDynamicState).TypedValue.RayleighScattering.field0_0x0 + 8)
                   = uVar11;
              (pFVar18->RendDynamicState).TypedValue.RayleighExponentialDistribution =
                   pFVar19->RayleighExponentialDistribution;
              (pFVar18->RendDynamicState).TypedValue.MieScatteringScale =
                   pFVar19->MieScatteringScale;
              uVar11 = *(undefined8 *)((longlong)&(pFVar19->MieScattering).field0_0x0 + 8);
              *(undefined8 *)&(pFVar18->RendDynamicState).TypedValue.MieScattering.field0_0x0 =
                   *(undefined8 *)&(pFVar19->MieScattering).field0_0x0;
              *(undefined8 *)
               ((longlong)&(pFVar18->RendDynamicState).TypedValue.MieScattering.field0_0x0 + 8) =
                   uVar11;
              (pFVar18->RendDynamicState).TypedValue.MieAbsorptionScale =
                   pFVar19->MieAbsorptionScale;
              uVar11 = *(undefined8 *)((longlong)&(pFVar19->MieAbsorption).field0_0x0 + 8);
              *(undefined8 *)&(pFVar18->RendDynamicState).TypedValue.MieAbsorption.field0_0x0 =
                   *(undefined8 *)&(pFVar19->MieAbsorption).field0_0x0;
              *(undefined8 *)
               ((longlong)&(pFVar18->RendDynamicState).TypedValue.MieAbsorption.field0_0x0 + 8) =
                   uVar11;
              (pFVar18->RendDynamicState).TypedValue.MieAnisotropy = pFVar19->MieAnisotropy;
              (pFVar18->RendDynamicState).TypedValue.MieExponentialDistribution =
                   pFVar19->MieExponentialDistribution;
              (pFVar18->RendDynamicState).TypedValue.OtherAbsorptionScale =
                   pFVar19->OtherAbsorptionScale;
              uVar11 = *(undefined8 *)((longlong)&(pFVar19->OtherAbsorption).field0_0x0 + 8);
              *(undefined8 *)&(pFVar18->RendDynamicState).TypedValue.OtherAbsorption.field0_0x0 =
                   *(undefined8 *)&(pFVar19->OtherAbsorption).field0_0x0;
              *(undefined8 *)
               ((longlong)&(pFVar18->RendDynamicState).TypedValue.OtherAbsorption.field0_0x0 + 8) =
                   uVar11;
              (pFVar18->RendDynamicState).TypedValue.OtherTentDistributionTipAltitude =
                   pFVar19->OtherTentDistributionTipAltitude;
              (pFVar18->RendDynamicState).TypedValue.OtherTentDistributionTipValue =
                   pFVar19->OtherTentDistributionTipValue;
              (pFVar18->RendDynamicState).TypedValue.OtherTentDistributionWidth =
                   pFVar19->OtherTentDistributionWidth;
              uVar11 = *(undefined8 *)((longlong)&(pFVar19->SkyLuminanceFactor).field0_0x0 + 8);
              *(undefined8 *)&(pFVar18->RendDynamicState).TypedValue.SkyLuminanceFactor.field0_0x0 =
                   *(undefined8 *)&(pFVar19->SkyLuminanceFactor).field0_0x0;
              *(undefined8 *)
               ((longlong)&(pFVar18->RendDynamicState).TypedValue.SkyLuminanceFactor.field0_0x0 + 8)
                   = uVar11;
              uVar11 = *(undefined8 *)
                        ((longlong)&(pFVar19->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8
                        );
              *(undefined8 *)
               &(pFVar18->RendDynamicState).TypedValue.SkyAndAerialPerspectiveLuminanceFactor.
                field0_0x0 = *(undefined8 *)
                              &(pFVar19->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0;
              *(undefined8 *)
               ((longlong)
                &(pFVar18->RendDynamicState).TypedValue.SkyAndAerialPerspectiveLuminanceFactor.
                 field0_0x0 + 8) = uVar11;
              (pFVar18->RendDynamicState).TypedValue.AerialPespectiveViewDistanceScale =
                   pFVar19->AerialPespectiveViewDistanceScale;
              (pFVar18->RendDynamicState).TypedValue.HeightFogContribution =
                   pFVar19->HeightFogContribution;
              (pFVar18->RendDynamicState).TypedValue.TransmittanceMinLightElevationAngle =
                   pFVar19->TransmittanceMinLightElevationAngle;
              (pFVar18->RendDynamicState).TypedValue.AerialPerspectiveStartDepth =
                   pFVar19->AerialPerspectiveStartDepth;
              uVar6 = (pFVar18->RendDynamicState).TypedValue.field_0xb4;
              bVar21 = ((pFVar18->RendDynamicState).TypedValue.bHoldout ^ pFVar19->bHoldout) & 1 ^
                       uVar6;
              (pFVar18->RendDynamicState).TypedValue.field_0xb4 = bVar21;
              bVar21 = (bVar21 ^ pFVar19->field_0xb4) & 2 ^ bVar21;
              (pFVar18->RendDynamicState).TypedValue.field_0xb4 = bVar21;
              (pFVar18->RendDynamicState).TypedValue.field_0xb4 =
                   (bVar21 ^ pFVar19->field_0xb4) & 4 ^ bVar21;
              dVar4 = (pFVar19->ComponentTransform).Rotation.XY.m128d_f64[1];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Rotation.XY.m128d_f64[0] =
                   (pFVar19->ComponentTransform).Rotation.XY.m128d_f64[0];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Rotation.XY.m128d_f64[1] =
                   dVar4;
              dVar4 = (pFVar19->ComponentTransform).Rotation.ZW.m128d_f64[1];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Rotation.ZW.m128d_f64[0] =
                   (pFVar19->ComponentTransform).Rotation.ZW.m128d_f64[0];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Rotation.ZW.m128d_f64[1] =
                   dVar4;
              dVar4 = (pFVar19->ComponentTransform).Translation.XY.m128d_f64[1];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Translation.XY.m128d_f64[0]
                   = (pFVar19->ComponentTransform).Translation.XY.m128d_f64[0];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Translation.XY.m128d_f64[1]
                   = dVar4;
              dVar4 = (pFVar19->ComponentTransform).Translation.ZW.m128d_f64[1];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Translation.ZW.m128d_f64[0]
                   = (pFVar19->ComponentTransform).Translation.ZW.m128d_f64[0];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Translation.ZW.m128d_f64[1]
                   = dVar4;
              dVar4 = (pFVar19->ComponentTransform).Scale3D.XY.m128d_f64[1];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Scale3D.XY.m128d_f64[0] =
                   (pFVar19->ComponentTransform).Scale3D.XY.m128d_f64[0];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Scale3D.XY.m128d_f64[1] =
                   dVar4;
              dVar4 = (pFVar19->ComponentTransform).Scale3D.ZW.m128d_f64[1];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Scale3D.ZW.m128d_f64[0] =
                   (pFVar19->ComponentTransform).Scale3D.ZW.m128d_f64[0];
              (pFVar18->RendDynamicState).TypedValue.ComponentTransform.Scale3D.ZW.m128d_f64[1] =
                   dVar4;
              uVar12 = *(undefined7 *)&(pFVar19->OverrideAtmosphericLight).field_0x1;
              dVar4 = (pFVar19->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.X;
              (pFVar18->RendDynamicState).TypedValue.OverrideAtmosphericLight.EnabledMask =
                   (pFVar19->OverrideAtmosphericLight).EnabledMask;
              *(undefined7 *)
               &(pFVar18->RendDynamicState).TypedValue.OverrideAtmosphericLight.field_0x1 = uVar12;
              (pFVar18->RendDynamicState).TypedValue.OverrideAtmosphericLight.Direction[0].
              field0_0x0._s_0.X = dVar4;
              dVar4 = (pFVar19->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Z;
              (pFVar18->RendDynamicState).TypedValue.OverrideAtmosphericLight.Direction[0].
              field0_0x0._s_0.Y = (pFVar19->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Y
              ;
              (pFVar18->RendDynamicState).TypedValue.OverrideAtmosphericLight.Direction[0].
              field0_0x0._s_0.Z = dVar4;
              dVar4 = (pFVar19->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Y;
              (pFVar18->RendDynamicState).TypedValue.OverrideAtmosphericLight.Direction[1].
              field0_0x0._s_0.X = (pFVar19->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.X
              ;
              (pFVar18->RendDynamicState).TypedValue.OverrideAtmosphericLight.Direction[1].
              field0_0x0._s_0.Y = dVar4;
              (pFVar18->RendDynamicState).TypedValue.OverrideAtmosphericLight.Direction[1].
              field0_0x0._s_0.Z = (pFVar19->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Z
              ;
              (pFVar18->RendDynamicState).bIsSet = true;
LAB_1456f7743:
              if (((pFVar18->RendDynamicState).bIsSet == false) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_a0 = &param_1->Time;
              if ((param_2 == param_1->Time) ||
                 (local_90 = param_1->PrevTick, local_90 == (FTick *)0x0)) {
                if (bVar15) goto LAB_1456f78c4;
                local_ac.IsInternal = 1;
                if ((int)uVar26 < (param_1->DynamicStates).ArrayNum) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pFVar19 = FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[]
                                    (&(this->DynamicStates).Array,
                                     *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                              (longlong)(int)uVar26 * 4));
                FSkyAtmosphereDynamicState::Apply
                          (&(pFVar18->RendDynamicState).TypedValue,&local_ac,pFVar19);
              }
              else {
                uVar16 = uVar27;
                if ((int)uVar26 < (local_90->DynamicStates).ArrayNum) {
                  uVar16 = ~uVar26 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                local_98 = (longlong)(int)uVar26;
                local_b0 = *(uint *)((local_90->DynamicStates).AllocatorInstance.Data + local_98 * 4
                                    );
                if ((int)uVar26 < (param_1->DynamicStates).ArrayNum) {
                  uVar27 = ~uVar26 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar26 = *(uint *)((param_1->DynamicStates).AllocatorInstance.Data + local_98 * 4);
                dVar4 = local_90->Time;
                dVar5 = *local_a0;
                pFVar19 = FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[]
                                    (&(this->DynamicStates).Array,local_b0);
                pFVar20 = FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[]
                                    (&(this->DynamicStates).Array,uVar26);
                local_68[0]._padding_._0_4_ = 1;
                local_68[0].Factor = (param_2 - dVar4) / (dVar5 - dVar4);
                FSkyAtmosphereDynamicState::Interpolate
                          (&(pFVar18->RendDynamicState).TypedValue,local_68,pFVar19,pFVar20);
                if (bVar15) {
LAB_1456f78c4:
                  local_80 = pFVar18;
                  uStack_78 = bVar14;
                  if (((local_e0.Data <= (FScriptContainerElement *)&local_80) &&
                      ((FScriptContainerElement *)&local_80 <
                       local_e0.Data + (longlong)local_d8._4_4_ * 0x10)) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  iVar17 = (int)local_d8;
                  if ((int)local_d8 == local_d8._4_4_) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_e0,(int *)((longlong)&local_d8 + 4));
                  }
                  local_d8 = CONCAT44(local_d8._4_4_,iVar17 + 1);
                  *(FInstance **)(local_e0.Data + (longlong)iVar17 * 0x10) = local_80;
                  *(ulonglong *)(local_e0.Data + (longlong)iVar17 * 0x10 + 8) =
                       CONCAT71(uStack_77,uStack_78);
                }
              }
              if (local_a4 < local_a8) {
                if (!bVar15) {
                  local_b8 = pFVar18;
                  if (((local_f0.Data <= (FScriptContainerElement *)&local_b8) &&
                      ((FScriptContainerElement *)&local_b8 <
                       local_f0.Data + (longlong)local_e8._4_4_ * 8)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  iVar17 = (int)local_e8;
                  if ((int)local_e8 == local_e8._4_4_) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_f0,(int *)((longlong)&local_e8 + 4));
                  }
                  local_e8 = CONCAT44(local_e8._4_4_,iVar17 + 1);
                  pFVar18 = local_b8;
                  FVar30.Data = local_f0.Data;
                  goto LAB_1456f7c19;
                }
              }
              else if (bVar15) {
                pTVar2 = &this->DeferredDestroys;
                pFVar29 = (pTVar2->AllocatorInstance).Data;
                local_c8 = pFVar18;
                if (((pFVar29 <= (FScriptContainerElement *)&local_c8) &&
                    ((FScriptContainerElement *)&local_c8 <
                     pFVar29 + (longlong)(this->DeferredDestroys).ArrayMax * 8)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar17 = (this->DeferredDestroys).ArrayNum;
                piVar1 = &(this->DeferredDestroys).ArrayMax;
                if (iVar17 == *piVar1) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar2->AllocatorInstance,piVar1);
                }
                (this->DeferredDestroys).ArrayNum = iVar17 + 1;
                *(FInstance **)((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_c8;
              }
              else {
                local_c0 = pFVar18;
                if (((local_100.Data <= (FScriptContainerElement *)&local_c0) &&
                    ((FScriptContainerElement *)&local_c0 <
                     local_100.Data + (longlong)local_f8._4_4_ * 8)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar17 = (int)local_f8;
                if ((int)local_f8 == local_f8._4_4_) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_100,(int *)((longlong)&local_f8 + 4));
                }
                local_f8 = CONCAT44(local_f8._4_4_,iVar17 + 1);
                pFVar18 = local_c0;
                FVar30.Data = local_100.Data;
LAB_1456f7c19:
                *(FInstance **)(FVar30.Data + (longlong)iVar17 * 8) = pFVar18;
              }
            }
          }
          else if (uVar16 != local_a4) goto LAB_1456f7743;
        }
        local_d0 = ~(uint)local_88 & local_d0;
        FVar8 = (param_5->AllocatorInstance).SecondaryData;
        uVar16 = param_5->NumBits;
        FVar23 = (ForElementType<unsigned_int>)param_5;
        if (FVar8 != (ForElementType<unsigned_int>)0x0) {
          FVar23 = FVar8;
        }
        uVar26 = local_d0 & *(uint *)((longlong)FVar23 + (longlong)(int)uVar28 * 4);
        while (uVar26 == 0) {
          iVar17 = (int)uVar28;
          uVar22 = (ulonglong)((int)uVar22 + 0x20);
          uVar27 = iVar17 + 1;
          uVar28 = (ulonglong)uVar27;
          uVar26 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
          goto LAB_1456f7cb4;
          uVar26 = *(uint *)((uchar *)((longlong)FVar23 + 4) + (longlong)iVar17 * 4);
          local_d0 = 0xffffffff;
        }
        local_88 = CONCAT44(local_88._4_4_,-uVar26 & uVar26);
        uVar24 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_6c = (int)lVar9;
        uVar26 = local_6c + -1 + (int)uVar22;
        if ((int)uVar16 < (int)uVar26) {
          uVar26 = uVar16;
        }
LAB_1456f7cb4:
      } while ((int)uVar26 < param_5->NumBits);
      uVar24 = local_d8 & 0xffffffff;
    }
  }
LAB_1456f7cd3:
  iVar17 = (int)uVar24;
  pFVar29 = local_e0.Data + (longlong)iVar17 * 0x10;
  FVar30.Data = local_e0.Data;
  while( true ) {
    if ((int)uVar24 != iVar17) {
      local_106 = 0;
      `TCheckedPointerIterator<`TStateStream<FSkyAtmosphereStateStreamSettings>::ApplyChanges'::__l2::FCreateInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_106);
    }
    if (FVar30.Data == pFVar29) break;
    pFVar18 = *(FInstance **)FVar30.Data;
    FVar7 = FVar30.Data[8];
    if (((pFVar18->RendDynamicState).bIsSet == false) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (**(code **)(this->_padding_ + 0x60))
              (this,pFVar18,&pFVar18->RendDynamicState,&pFVar18->UserData,FVar7);
    uVar24 = local_d8 & 0xffffffff;
    FVar30.Data = FVar30.Data + 0x10;
  }
  iVar17 = (int)local_e8;
  uVar22 = (ulonglong)(int)local_e8;
  pFVar29 = local_f0.Data + uVar22 * 8;
  FVar30.Data = local_f0.Data;
  while( true ) {
    if ((int)uVar22 != iVar17) {
      local_105 = 0;
      `TCheckedPointerIterator<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_105);
    }
    if (FVar30.Data == pFVar29) break;
    pFVar18 = *(FInstance **)FVar30.Data;
    if (((pFVar18->RendDynamicState).bIsSet == false) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (**(code **)(this->_padding_ + 0x68))
              (this,pFVar18,&pFVar18->RendDynamicState,&pFVar18->UserData);
    uVar22 = local_e8 & 0xffffffff;
    FVar30.Data = FVar30.Data + 8;
  }
  iVar17 = (int)local_f8;
  uVar22 = (ulonglong)(int)local_f8;
  pFVar29 = local_100.Data + uVar22 * 8;
  FVar30.Data = local_100.Data;
  while( true ) {
    if ((int)uVar22 != iVar17) {
      local_104[0] = 0;
      `TCheckedPointerIterator<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_104);
    }
    if (FVar30.Data == pFVar29) break;
    pFVar18 = *(FInstance **)FVar30.Data;
    if (((pFVar18->RendDynamicState).bIsSet == false) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (**(code **)(this->_padding_ + 0x70))
              (this,pFVar18,&pFVar18->RendDynamicState,&pFVar18->UserData);
    if ((pFVar18->RendDynamicState).bIsSet != false) {
      (pFVar18->RendDynamicState).bIsSet = false;
    }
    uVar22 = local_f8 & 0xffffffff;
    FVar30.Data = FVar30.Data + 8;
  }
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  return;
}

// ApplyChanges @ 1456f7ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::ApplyChanges
          (TStateStream<FStaticMeshStateStreamSettings> *this,FTick *param_1,double param_2,
          uint param_3,double param_4,TBitArray<FDefaultBitArrayAllocator> *param_5)

{
  TOptional<FStaticMeshDynamicState> *this_00;
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  TArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  FScriptContainerElement FVar5;
  undefined4 uVar6;
  ForElementType<unsigned_int> FVar7;
  FTick *pFVar8;
  UStaticMesh *pUVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  FInstance *pFVar19;
  FStaticMeshDynamicState *pFVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  ForElementType<unsigned_int> FVar23;
  ulonglong uVar24;
  ForAnyElementType FVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104 [4];
  uint local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  uint local_c8;
  FInstance *local_c0;
  FInstance *local_b8;
  FInstance *local_b0;
  FStateStreamCopyContext local_a8;
  uint local_a4;
  FStateStreamCopyContext local_a0;
  uint local_9c;
  uint local_98;
  FInstance *local_90;
  ulonglong local_88;
  FInstance *local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  int local_70;
  int local_6c;
  FStateStreamCopyContext local_68 [2];
  double local_60;
  ulonglong uVar29;
  
  uVar21 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iVar18 = param_5->NumBits;
  local_100 = 0;
  uVar24 = uVar21;
  if (iVar18 != 0) {
    FVar7 = (param_5->AllocatorInstance).SecondaryData;
    FVar23 = (ForElementType<unsigned_int>)param_5;
    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
      FVar23 = FVar7;
    }
    uVar27 = *(uint *)FVar23;
    uVar29 = uVar21;
    while (uVar24 = 0, uVar27 == 0) {
      local_100 = (int)uVar21 + 0x20;
      uVar21 = (ulonglong)local_100;
      iVar26 = (int)uVar29;
      uVar27 = iVar26 + 1;
      uVar29 = (ulonglong)uVar27;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar27) goto LAB_1456f8715;
      uVar27 = *(uint *)((uchar *)((longlong)FVar23 + 4) + (longlong)iVar26 * 4);
    }
    local_88 = (ulonglong)(-uVar27 & uVar27);
    uVar3 = local_88 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_70 = (int)lVar11;
    uVar27 = local_70 + -1 + (int)uVar21;
    if ((int)uVar27 < iVar18) {
      local_c8 = 0xffffffff;
      do {
        pFVar19 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
                  ::GetElementAt(&(this->Instances).Array,uVar27);
        local_9c = pFVar19->DeleteTick;
        local_90 = pFVar19;
        if (param_3 < local_9c) {
          uVar17 = pFVar19->CreateTick;
          if ((param_3 < uVar17) && (uVar17 <= param_1->Index)) {
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
          local_98 = param_1->Index;
          bVar15 = local_9c <= local_98;
          if (bVar16) {
            if (local_98 < local_9c) {
              if (((pFVar19->RendDynamicState).bIsSet != false) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!Instance.RendDynamicState.IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                                      ,0x245,L""), bVar14)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar17 = 0;
              if ((int)uVar27 < (param_1->DynamicStates).ArrayNum) {
                uVar17 = ~uVar27 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_a8.IsInternal = 1;
              pFVar20 = FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,
                                   *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                            (longlong)(int)uVar27 * 4));
              TOptional<FStaticMeshDynamicState>::
              Emplace<FStateStreamCopyContext_&,FStaticMeshDynamicState_&>
                        (&pFVar19->RendDynamicState,&local_a8,pFVar20);
LAB_1456f8100:
              this_00 = &pFVar19->RendDynamicState;
              if (((pFVar19->RendDynamicState).bIsSet == false) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar14)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if ((param_2 == param_1->Time) || (pFVar8 = param_1->PrevTick, pFVar8 == (FTick *)0x0)
                 ) {
                if (bVar16) goto LAB_1456f82fb;
                local_a0.IsInternal = 1;
                uVar17 = 0;
                if ((int)uVar27 < (param_1->DynamicStates).ArrayNum) {
                  uVar17 = ~uVar27 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar20 = FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[]
                                    (&(this->DynamicStates).Array,
                                     *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                              (longlong)(int)uVar27 * 4));
                FStaticMeshDynamicState::Apply(&this_00->TypedValue,&local_a0,pFVar20);
              }
              else {
                uVar17 = 0;
                if ((int)uVar27 < (pFVar8->DynamicStates).ArrayNum) {
                  uVar17 = ~uVar27 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_a4 = *(uint *)((pFVar8->DynamicStates).AllocatorInstance.Data +
                                    (longlong)(int)uVar27 * 4);
                uVar17 = 0;
                if ((int)uVar27 < (param_1->DynamicStates).ArrayNum) {
                  uVar17 = ~uVar27 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                dVar13 = (param_2 - pFVar8->Time) / (param_1->Time - pFVar8->Time);
                uVar27 = *(uint *)((param_1->DynamicStates).AllocatorInstance.Data +
                                  (longlong)(int)uVar27 * 4);
                FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[]
                          (&(this->DynamicStates).Array,local_a4);
                pFVar20 = FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[]
                                    (&(this->DynamicStates).Array,uVar27);
                local_68[0].IsInternal = 1;
                (this_00->TypedValue).ModifiedFlags = 0;
                local_60 = dVar13;
                if ((pFVar20->ModifiedFlags & 1) != 0) {
                  (this_00->TypedValue).ModifiedFlags = 1;
                  FStateStreamHandle::Apply
                            ((FStateStreamHandle *)&(pFVar19->RendDynamicState).TypedValue.Transform
                             ,local_68,(FStateStreamHandle *)&pFVar20->Transform);
                }
                if ((pFVar20->ModifiedFlags & 2) != 0) {
                  (this_00->TypedValue).ModifiedFlags = (this_00->TypedValue).ModifiedFlags | 2;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar9 = (pFVar20->Mesh).field0_0x0.DebugPtr, pUVar9 != (UStaticMesh *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar9);
                  }
                  (pFVar19->RendDynamicState).TypedValue.Mesh.field0_0x0 =
                       (pFVar20->Mesh).field0_0x0;
                }
                if ((pFVar20->ModifiedFlags & 4) != 0) {
                  (this_00->TypedValue).ModifiedFlags = (this_00->TypedValue).ModifiedFlags | 4;
                  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                            (&(pFVar19->RendDynamicState).TypedValue.OverrideMaterials,
                             &pFVar20->OverrideMaterials);
                }
                if ((pFVar20->ModifiedFlags & 8) != 0) {
                  (this_00->TypedValue).ModifiedFlags = (this_00->TypedValue).ModifiedFlags | 8;
                  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                            (&(pFVar19->RendDynamicState).TypedValue.Owners,&pFVar20->Owners);
                }
                if ((pFVar20->ModifiedFlags & 0x10) != 0) {
                  (this_00->TypedValue).ModifiedFlags = (this_00->TypedValue).ModifiedFlags | 0x10;
                  puVar1 = &(pFVar19->RendDynamicState).TypedValue.field_0x40;
                  *(uint *)puVar1 =
                       *(uint *)puVar1 ^
                       ((pFVar19->RendDynamicState).TypedValue.bOnlyOwnerSee ^
                       pFVar20->bOnlyOwnerSee) & 1;
                }
                if ((pFVar20->ModifiedFlags & 0x20) != 0) {
                  uVar27 = *(uint *)&(pFVar19->RendDynamicState).TypedValue.field_0x40;
                  (this_00->TypedValue).ModifiedFlags = (this_00->TypedValue).ModifiedFlags | 0x20;
                  puVar1 = &(pFVar19->RendDynamicState).TypedValue.field_0x40;
                  *(uint *)puVar1 = *(uint *)puVar1 ^ (uVar27 ^ *(uint *)&pFVar20->field_0x40) & 2;
                }
                pFVar19 = local_90;
                if (bVar16) {
LAB_1456f82fb:
                  local_80 = pFVar19;
                  uStack_78 = bVar15;
                  if (((local_d8.Data <= (FScriptContainerElement *)&local_80) &&
                      ((FScriptContainerElement *)&local_80 <
                       local_d8.Data + (longlong)local_d0._4_4_ * 0x10)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  iVar18 = (int)local_d0;
                  if ((int)local_d0 == local_d0._4_4_) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_d8,(int *)((longlong)&local_d0 + 4));
                  }
                  local_d0 = CONCAT44(local_d0._4_4_,iVar18 + 1);
                  *(FInstance **)(local_d8.Data + (longlong)iVar18 * 0x10) = local_80;
                  *(ulonglong *)(local_d8.Data + (longlong)iVar18 * 0x10 + 8) =
                       CONCAT71(uStack_77,uStack_78);
                }
              }
              if (local_98 < local_9c) {
                if (!bVar16) {
                  local_b0 = pFVar19;
                  if (((local_e8.Data <= (FScriptContainerElement *)&local_b0) &&
                      ((FScriptContainerElement *)&local_b0 <
                       local_e8.Data + (longlong)local_e0._4_4_ * 8)) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar16)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  iVar18 = (int)local_e0;
                  if ((int)local_e0 == local_e0._4_4_) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_e8,(int *)((longlong)&local_e0 + 4));
                  }
                  local_e0 = CONCAT44(local_e0._4_4_,iVar18 + 1);
                  pFVar19 = local_b0;
                  FVar25.Data = local_e8.Data;
                  goto LAB_1456f865d;
                }
              }
              else {
                if (bVar16) {
                  pTVar4 = &this->DeferredDestroys;
                  pFVar22 = (pTVar4->AllocatorInstance).Data;
                  local_c0 = pFVar19;
                  if (((pFVar22 <= (FScriptContainerElement *)&local_c0) &&
                      ((FScriptContainerElement *)&local_c0 <
                       pFVar22 + (longlong)(this->DeferredDestroys).ArrayMax * 8)) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar16)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  iVar18 = (this->DeferredDestroys).ArrayNum;
                  piVar2 = &(this->DeferredDestroys).ArrayMax;
                  if (iVar18 == *piVar2) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&pTVar4->AllocatorInstance,piVar2);
                  }
                  uVar21 = (ulonglong)local_100;
                  (this->DeferredDestroys).ArrayNum = iVar18 + 1;
                  *(FInstance **)((pTVar4->AllocatorInstance).Data + (longlong)iVar18 * 8) =
                       local_c0;
                  goto LAB_1456f8669;
                }
                local_b8 = pFVar19;
                if (((local_f8.Data <= (FScriptContainerElement *)&local_b8) &&
                    ((FScriptContainerElement *)&local_b8 <
                     local_f8.Data + (longlong)local_f0._4_4_ * 8)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                iVar18 = (int)local_f0;
                if ((int)local_f0 == local_f0._4_4_) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_f8,(int *)((longlong)&local_f0 + 4));
                }
                local_f0 = CONCAT44(local_f0._4_4_,iVar18 + 1);
                pFVar19 = local_b8;
                FVar25.Data = local_f8.Data;
LAB_1456f865d:
                *(FInstance **)(FVar25.Data + (longlong)iVar18 * 8) = pFVar19;
              }
              uVar21 = (ulonglong)local_100;
            }
          }
          else if (uVar17 != local_98) goto LAB_1456f8100;
        }
LAB_1456f8669:
        local_c8 = ~(uint)local_88 & local_c8;
        FVar7 = (param_5->AllocatorInstance).SecondaryData;
        uVar17 = param_5->NumBits;
        FVar23 = (ForElementType<unsigned_int>)param_5;
        if (FVar7 != (ForElementType<unsigned_int>)0x0) {
          FVar23 = FVar7;
        }
        uVar27 = local_c8 & *(uint *)((longlong)FVar23 + (longlong)(int)uVar29 * 4);
        while (uVar27 == 0) {
          local_100 = (int)uVar21 + 0x20;
          uVar21 = (ulonglong)local_100;
          iVar18 = (int)uVar29;
          uVar28 = iVar18 + 1;
          uVar29 = (ulonglong)uVar28;
          uVar27 = uVar17;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
          goto LAB_1456f86f6;
          uVar27 = *(uint *)((uchar *)((longlong)FVar23 + 4) + (longlong)iVar18 * 4);
          local_c8 = 0xffffffff;
        }
        local_88 = CONCAT44(local_88._4_4_,-uVar27 & uVar27);
        uVar24 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_6c = (int)lVar11;
        uVar27 = local_6c + -1 + (int)uVar21;
        if ((int)uVar17 < (int)uVar27) {
          uVar27 = uVar17;
        }
LAB_1456f86f6:
      } while ((int)uVar27 < param_5->NumBits);
      uVar24 = local_d0 & 0xffffffff;
    }
  }
LAB_1456f8715:
  iVar18 = (int)uVar24;
  pFVar22 = local_d8.Data + (longlong)iVar18 * 0x10;
  FVar25.Data = local_d8.Data;
  while( true ) {
    if ((int)uVar24 != iVar18) {
      local_106 = 0;
      `TCheckedPointerIterator<`TStateStream<FStaticMeshStateStreamSettings>::ApplyChanges'::__l2::FCreateInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_106);
    }
    if (FVar25.Data == pFVar22) break;
    pFVar19 = *(FInstance **)FVar25.Data;
    FVar5 = FVar25.Data[8];
    if (((pFVar19->RendDynamicState).bIsSet == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (**(code **)(this->_padding_ + 0x60))
              (this,pFVar19,&pFVar19->RendDynamicState,&pFVar19->UserData,FVar5);
    uVar24 = local_d0 & 0xffffffff;
    FVar25.Data = FVar25.Data + 0x10;
  }
  iVar18 = (int)local_e0;
  uVar21 = (ulonglong)(int)local_e0;
  pFVar22 = local_e8.Data + uVar21 * 8;
  FVar25.Data = local_e8.Data;
  while( true ) {
    if ((int)uVar21 != iVar18) {
      local_105 = 0;
      `TCheckedPointerIterator<TStateStream<FStaticMeshStateStreamSettings>::FInstance_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_105);
    }
    if (FVar25.Data == pFVar22) break;
    pFVar19 = *(FInstance **)FVar25.Data;
    if (((pFVar19->RendDynamicState).bIsSet == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (**(code **)(this->_padding_ + 0x68))
              (this,pFVar19,&pFVar19->RendDynamicState,&pFVar19->UserData);
    uVar21 = local_e0 & 0xffffffff;
    FVar25.Data = FVar25.Data + 8;
  }
  iVar18 = (int)local_f0;
  uVar21 = (ulonglong)(int)local_f0;
  pFVar22 = local_f8.Data + uVar21 * 8;
  FVar25.Data = local_f8.Data;
  while( true ) {
    if ((int)uVar21 != iVar18) {
      local_104[0] = 0;
      `TCheckedPointerIterator<TStateStream<FStaticMeshStateStreamSettings>::FInstance_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_104);
    }
    if (FVar25.Data == pFVar22) break;
    pFVar19 = *(FInstance **)FVar25.Data;
    if (((pFVar19->RendDynamicState).bIsSet == false) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (**(code **)(this->_padding_ + 0x70))
              (this,pFVar19,&pFVar19->RendDynamicState,&pFVar19->UserData);
    if ((pFVar19->RendDynamicState).bIsSet != false) {
      pFVar10 = (pFVar19->RendDynamicState).TypedValue.Owners.AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      pFVar10 = (pFVar19->RendDynamicState).TypedValue.OverrideMaterials.AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      FStateStreamHandle::~FStateStreamHandle
                ((FStateStreamHandle *)&(pFVar19->RendDynamicState).TypedValue.Transform);
      (pFVar19->RendDynamicState).bIsSet = false;
    }
    uVar21 = local_f0 & 0xffffffff;
    FVar25.Data = FVar25.Data + 8;
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// DebugRender @ 1456fd7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::DebugRender
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,
          IStateStreamDebugRenderer *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  FInstance *pFVar4;
  size_t sVar5;
  int iVar6;
  undefined1 auStack_898 [32];
  int local_878;
  wchar_t *local_868;
  int local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  iVar6 = 0;
  iVar3 = iVar6;
  if (this->NewestAvailableTick != (FTick *)0x0) {
    iVar3 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                      (&this->NewestAvailableTick->ModifiedInstances,0,-1);
  }
  uVar1 = (this->Instances).FirstFreeIndex;
  while (uVar1 != 0xffffffff) {
    pFVar4 = FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
             ::GetElementAt(&(this->Instances).Array,uVar1);
    uVar1 = (pFVar4->StaticState).ModifiedFlags;
  }
  (**(code **)(this->_padding_ + 0x48))(this);
  local_878 = iVar3;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"%s   Num: %u  Changed: %u");
  pcVar2 = *(code **)*param_1;
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  local_868 = local_858.Base;
  if (local_858.Base != (wchar_t *)0x0) {
    sVar5 = wcslen(local_858.Base);
    iVar6 = (int)sVar5;
  }
  local_860 = iVar6;
  (*pcVar2)(param_1,&local_868);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return;
}

// DebugRender @ 1456fd940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::DebugRender
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,
          IStateStreamDebugRenderer *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  FInstance *pFVar4;
  size_t sVar5;
  int iVar6;
  undefined1 auStack_898 [32];
  int local_878;
  wchar_t *local_868;
  int local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  iVar6 = 0;
  iVar3 = iVar6;
  if (this->NewestAvailableTick != (FTick *)0x0) {
    iVar3 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                      (&this->NewestAvailableTick->ModifiedInstances,0,-1);
  }
  uVar1 = (this->Instances).FirstFreeIndex;
  while (uVar1 != 0xffffffff) {
    pFVar4 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
             ::GetElementAt(&(this->Instances).Array,uVar1);
    uVar1 = (pFVar4->StaticState).ModifiedFlags;
  }
  (**(code **)(this->_padding_ + 0x48))(this);
  local_878 = iVar3;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"%s   Num: %u  Changed: %u");
  pcVar2 = *(code **)*param_1;
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  local_868 = local_858.Base;
  if (local_858.Base != (wchar_t *)0x0) {
    sVar5 = wcslen(local_858.Base);
    iVar6 = (int)sVar5;
  }
  local_860 = iVar6;
  (*pcVar2)(param_1,&local_868);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return;
}

// DebugRender @ 1456fda90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::DebugRender
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,IStateStreamDebugRenderer *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  FInstance *pFVar4;
  size_t sVar5;
  int iVar6;
  undefined1 auStack_898 [32];
  int local_878;
  wchar_t *local_868;
  int local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  iVar6 = 0;
  iVar3 = iVar6;
  if (this->NewestAvailableTick != (FTick *)0x0) {
    iVar3 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                      (&this->NewestAvailableTick->ModifiedInstances,0,-1);
  }
  uVar1 = (this->Instances).FirstFreeIndex;
  while (uVar1 != 0xffffffff) {
    pFVar4 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
             ::GetElementAt(&(this->Instances).Array,uVar1);
    uVar1 = (pFVar4->StaticState).ModifiedFlags;
  }
  (**(code **)(this->_padding_ + 0x48))(this);
  local_878 = iVar3;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"%s   Num: %u  Changed: %u");
  pcVar2 = *(code **)*param_1;
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  local_868 = local_858.Base;
  if (local_858.Base != (wchar_t *)0x0) {
    sVar5 = wcslen(local_858.Base);
    iVar6 = (int)sVar5;
  }
  local_860 = iVar6;
  (*pcVar2)(param_1,&local_868);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return;
}

// DebugRender @ 1456fdbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::DebugRender
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,IStateStreamDebugRenderer *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  FInstance *pFVar4;
  size_t sVar5;
  int iVar6;
  undefined1 auStack_898 [32];
  int local_878;
  wchar_t *local_868;
  int local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  iVar6 = 0;
  iVar3 = iVar6;
  if (this->NewestAvailableTick != (FTick *)0x0) {
    iVar3 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                      (&this->NewestAvailableTick->ModifiedInstances,0,-1);
  }
  uVar1 = (this->Instances).FirstFreeIndex;
  while (uVar1 != 0xffffffff) {
    pFVar4 = FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
             ::GetElementAt(&(this->Instances).Array,uVar1);
    uVar1 = (pFVar4->StaticState).ModifiedFlags;
  }
  (**(code **)(this->_padding_ + 0x48))(this);
  local_878 = iVar3;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"%s   Num: %u  Changed: %u");
  pcVar2 = *(code **)*param_1;
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  local_868 = local_858.Base;
  if (local_858.Base != (wchar_t *)0x0) {
    sVar5 = wcslen(local_858.Base);
    iVar6 = (int)sVar5;
  }
  local_860 = iVar6;
  (*pcVar2)(param_1,&local_868);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return;
}

// DebugRender @ 1456fdd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::DebugRender
          (TStateStream<FStaticMeshStateStreamSettings> *this,IStateStreamDebugRenderer *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  FInstance *pFVar4;
  size_t sVar5;
  int iVar6;
  undefined1 auStack_898 [32];
  int local_878;
  wchar_t *local_868;
  int local_860;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  iVar6 = 0;
  iVar3 = iVar6;
  if (this->NewestAvailableTick != (FTick *)0x0) {
    iVar3 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                      (&this->NewestAvailableTick->ModifiedInstances,0,-1);
  }
  uVar1 = (this->Instances).FirstFreeIndex;
  while (uVar1 != 0xffffffff) {
    pFVar4 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
             ::GetElementAt(&(this->Instances).Array,uVar1);
    uVar1 = (pFVar4->StaticState).ModifiedFlags;
  }
  (**(code **)(this->_padding_ + 0x48))(this);
  local_878 = iVar3;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_858,L"%s   Num: %u  Changed: %u");
  pcVar2 = *(code **)*param_1;
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  local_868 = local_858.Base;
  if (local_858.Base != (wchar_t *)0x0) {
    sVar5 = wcslen(local_858.Base);
    iVar6 = (int)sVar5;
  }
  local_860 = iVar6;
  (*pcVar2)(param_1,&local_868);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return;
}

// Edit @ 1456fe4b0

FExponentialHeightFogDynamicState * __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Edit
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,uint param_1,double param_2)

{
  FPlatformRWLock *SRWLock;
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  FTick *pFVar4;
  FTick *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FExponentialHeightFogDynamicState *pFVar10;
  ForElementType<unsigned_int> FVar11;
  FExponentialHeightFogDynamicState *pFVar12;
  uint uVar13;
  uint uVar14;
  uint local_res10 [2];
  
  if (param_1 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xe8,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FExponentialHeightFogDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  uVar13 = param_1 - 1;
  if (this->CurrentTick == (FTick *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FExponentialHeightFogDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  if ((uint)(this->CurrentTick->DynamicStates).ArrayNum <= uVar13) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceIndex < uint32(CurrentTick->DynamicStates.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xec,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FExponentialHeightFogDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  SRWLock = &this->CurrentTickLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar4 = this->CurrentTick;
  if (((int)uVar13 < 0) || ((pFVar4->ModifiedInstances).NumBits <= (int)uVar13)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FExponentialHeightFogDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  FVar11 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
  pFVar5 = this->CurrentTick;
  uVar14 = 1 << ((byte)uVar13 & 0x1f);
  lVar2 = (longlong)((int)(uVar13 + ((int)uVar13 >> 0x1f & 0x1fU)) >> 5) * 4;
  iVar3 = (pFVar5->DynamicStates).ArrayNum;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
  }
  if ((*(uint *)((longlong)FVar11 + lVar2) & uVar14) != 0) {
    uVar14 = 0;
    if ((int)uVar13 < iVar3) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FExponentialHeightFogDynamicState *)(*pcVar7)();
        return pFVar10;
      }
    }
    uVar13 = *(uint *)((pFVar5->DynamicStates).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    pFVar10 = FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::operator[]
                        (&(this->DynamicStates).Array,uVar13);
    return pFVar10;
  }
  uVar9 = 0;
  if ((int)uVar13 < iVar3) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FExponentialHeightFogDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  pFVar6 = (pFVar5->DynamicStates).AllocatorInstance.Data;
  pFVar4 = this->CurrentTick;
  uVar9 = *(uint *)(pFVar6 + (longlong)(int)uVar13 * 4);
  if (((int)uVar13 < 0) || ((pFVar4->ModifiedInstances).NumBits <= (int)uVar13)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FExponentialHeightFogDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  FVar11 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
  }
  puVar1 = (uint *)((longlong)FVar11 + lVar2);
  *puVar1 = *puVar1 | uVar14;
  pFVar10 = TStateStreamStore<FExponentialHeightFogDynamicState>::AddUninitialized
                      (&this->DynamicStates,local_res10);
  *(uint *)(pFVar6 + (longlong)(int)uVar13 * 4) = local_res10[0];
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  pFVar12 = FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::operator[]
                      (&(this->DynamicStates).Array,uVar9);
  pFVar10 = FExponentialHeightFogDynamicState::FExponentialHeightFogDynamicState(pFVar10,pFVar12);
  return pFVar10;
}

// Edit @ 1456fe760

FParticleSystemDynamicState * __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Edit
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,uint param_1,double param_2
          )

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  FTick *pFVar4;
  FTick *pFVar5;
  FScriptContainerElement *pFVar6;
  UFXSystemAsset *pUVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FParticleSystemDynamicState *pFVar11;
  ForElementType<unsigned_int> FVar12;
  FParticleSystemDynamicState *pFVar13;
  uint uVar14;
  uint uVar15;
  uint local_res10 [2];
  
  if (param_1 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xe8,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FParticleSystemDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  uVar14 = param_1 - 1;
  if (this->CurrentTick == (FTick *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FParticleSystemDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  if ((uint)(this->CurrentTick->DynamicStates).ArrayNum <= uVar14) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceIndex < uint32(CurrentTick->DynamicStates.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xec,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FParticleSystemDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
  pFVar4 = this->CurrentTick;
  if (((int)uVar14 < 0) || ((pFVar4->ModifiedInstances).NumBits <= (int)uVar14)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FParticleSystemDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  FVar12 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
  pFVar5 = this->CurrentTick;
  uVar15 = 1 << ((byte)uVar14 & 0x1f);
  lVar2 = (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  iVar3 = (pFVar5->DynamicStates).ArrayNum;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
  }
  if ((*(uint *)((longlong)FVar12 + lVar2) & uVar15) != 0) {
    uVar15 = 0;
    if ((int)uVar14 < iVar3) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar11 = (FParticleSystemDynamicState *)(*pcVar8)();
        return pFVar11;
      }
    }
    uVar14 = *(uint *)((pFVar5->DynamicStates).AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
    ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
    pFVar11 = FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[]
                        (&(this->DynamicStates).Array,uVar14);
    return pFVar11;
  }
  uVar10 = 0;
  if ((int)uVar14 < iVar3) {
    uVar10 = ~uVar14 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FParticleSystemDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  pFVar6 = (pFVar5->DynamicStates).AllocatorInstance.Data;
  pFVar4 = this->CurrentTick;
  uVar10 = *(uint *)(pFVar6 + (longlong)(int)uVar14 * 4);
  if (((int)uVar14 < 0) || ((pFVar4->ModifiedInstances).NumBits <= (int)uVar14)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FParticleSystemDynamicState *)(*pcVar8)();
      return pFVar11;
    }
  }
  FVar12 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<unsigned_int>)0x0) {
    FVar12 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
  }
  puVar1 = (uint *)((longlong)FVar12 + lVar2);
  *puVar1 = *puVar1 | uVar15;
  pFVar11 = TStateStreamStore<FParticleSystemDynamicState>::AddUninitialized
                      (&this->DynamicStates,local_res10);
  *(uint *)(pFVar6 + (longlong)(int)uVar14 * 4) = local_res10[0];
  ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
  pFVar13 = FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[]
                      (&(this->DynamicStates).Array,uVar10);
  pFVar11->ModifiedFlags = pFVar13->ModifiedFlags;
  FStateStreamHandle::FStateStreamHandle
            ((FStateStreamHandle *)&pFVar11->Transform,(FStateStreamHandle *)&pFVar13->Transform);
  pUVar7 = (pFVar13->SystemAsset).field0_0x0.DebugPtr;
  (pFVar11->SystemAsset).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UFXSystemAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FStateStreamHandle::MakeInternal((FStateStreamHandle *)&pFVar13->Transform);
  return pFVar11;
}

// Edit @ 1456fea50

FSkinnedMeshDynamicState * __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Edit
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,uint param_1,double param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  FTick *pFVar4;
  FTick *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FSkinnedMeshDynamicState *pFVar10;
  ForElementType<unsigned_int> FVar11;
  FSkinnedMeshDynamicState *pFVar12;
  uint uVar13;
  uint uVar14;
  uint local_res10 [2];
  
  if (param_1 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xe8,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FSkinnedMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  uVar13 = param_1 - 1;
  if (this->CurrentTick == (FTick *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FSkinnedMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  if ((uint)(this->CurrentTick->DynamicStates).ArrayNum <= uVar13) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceIndex < uint32(CurrentTick->DynamicStates.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xec,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FSkinnedMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
  pFVar4 = this->CurrentTick;
  if (((int)uVar13 < 0) || ((pFVar4->ModifiedInstances).NumBits <= (int)uVar13)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FSkinnedMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  FVar11 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
  pFVar5 = this->CurrentTick;
  uVar14 = 1 << ((byte)uVar13 & 0x1f);
  lVar2 = (longlong)((int)(uVar13 + ((int)uVar13 >> 0x1f & 0x1fU)) >> 5) * 4;
  iVar3 = (pFVar5->DynamicStates).ArrayNum;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
  }
  if ((*(uint *)((longlong)FVar11 + lVar2) & uVar14) != 0) {
    uVar14 = 0;
    if ((int)uVar13 < iVar3) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FSkinnedMeshDynamicState *)(*pcVar7)();
        return pFVar10;
      }
    }
    uVar13 = *(uint *)((pFVar5->DynamicStates).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
    ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
    pFVar10 = FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[]
                        (&(this->DynamicStates).Array,uVar13);
    return pFVar10;
  }
  uVar9 = 0;
  if ((int)uVar13 < iVar3) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FSkinnedMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  pFVar6 = (pFVar5->DynamicStates).AllocatorInstance.Data;
  pFVar4 = this->CurrentTick;
  uVar9 = *(uint *)(pFVar6 + (longlong)(int)uVar13 * 4);
  if (((int)uVar13 < 0) || ((pFVar4->ModifiedInstances).NumBits <= (int)uVar13)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FSkinnedMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  FVar11 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
  }
  puVar1 = (uint *)((longlong)FVar11 + lVar2);
  *puVar1 = *puVar1 | uVar14;
  pFVar10 = TStateStreamStore<FSkinnedMeshDynamicState>::AddUninitialized
                      (&this->DynamicStates,local_res10);
  *(uint *)(pFVar6 + (longlong)(int)uVar13 * 4) = local_res10[0];
  ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
  pFVar12 = FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[]
                      (&(this->DynamicStates).Array,uVar9);
  pFVar10 = FSkinnedMeshDynamicState::FSkinnedMeshDynamicState(pFVar10,pFVar12);
  FStateStreamHandle::MakeInternal((FStateStreamHandle *)&pFVar12->Transform);
  return pFVar10;
}

// Edit @ 1456fed20

FSkyAtmosphereDynamicState * __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Edit
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,uint param_1,double param_2)

{
  uint *puVar1;
  int iVar2;
  FTick *pFVar3;
  FTick *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  double dVar8;
  ESkyAtmosphereTransformMode EVar9;
  undefined3 uVar10;
  float fVar11;
  FColor FVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  FSkyAtmosphereDynamicState *pFVar16;
  bool bVar17;
  uint uVar18;
  FSkyAtmosphereDynamicState *pFVar19;
  ForElementType<unsigned_int> FVar20;
  FSkyAtmosphereDynamicState *pFVar21;
  FSkyAtmosphereDynamicState *pFVar22;
  FSkyAtmosphereDynamicState *pFVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint local_res10 [2];
  
  if (param_1 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("HandleId != 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                        ,0xe8,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FSkyAtmosphereDynamicState *)(*pcVar6)();
      return pFVar19;
    }
  }
  uVar25 = param_1 - 1;
  if (this->CurrentTick == (FTick *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentTick",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                        ,0xeb,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FSkyAtmosphereDynamicState *)(*pcVar6)();
      return pFVar19;
    }
  }
  if ((uint)(this->CurrentTick->DynamicStates).ArrayNum <= uVar25) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InstanceIndex < uint32(CurrentTick->DynamicStates.Num())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                        ,0xec,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FSkyAtmosphereDynamicState *)(*pcVar6)();
      return pFVar19;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
  pFVar3 = this->CurrentTick;
  if (((int)uVar25 < 0) || ((pFVar3->ModifiedInstances).NumBits <= (int)uVar25)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Index>=0 && Index<NumBits",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x5be,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FSkyAtmosphereDynamicState *)(*pcVar6)();
      return pFVar19;
    }
  }
  FVar20 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
  pFVar4 = this->CurrentTick;
  uVar26 = 1 << ((byte)uVar25 & 0x1f);
  lVar24 = (longlong)((int)(uVar25 + ((int)uVar25 >> 0x1f & 0x1fU)) >> 5) * 4;
  iVar2 = (pFVar4->DynamicStates).ArrayNum;
  if (FVar20 == (ForElementType<unsigned_int>)0x0) {
    FVar20 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
  }
  if ((*(uint *)((longlong)FVar20 + lVar24) & uVar26) != 0) {
    uVar26 = 0;
    if ((int)uVar25 < iVar2) {
      uVar26 = ~uVar25 >> 0x1f;
    }
    if (uVar26 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        pFVar19 = (FSkyAtmosphereDynamicState *)(*pcVar6)();
        return pFVar19;
      }
    }
    uVar25 = *(uint *)((pFVar4->DynamicStates).AllocatorInstance.Data + (longlong)(int)uVar25 * 4);
    ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
    pFVar19 = FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[]
                        (&(this->DynamicStates).Array,uVar25);
    return pFVar19;
  }
  uVar18 = 0;
  if ((int)uVar25 < iVar2) {
    uVar18 = ~uVar25 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FSkyAtmosphereDynamicState *)(*pcVar6)();
      return pFVar19;
    }
  }
  pFVar5 = (pFVar4->DynamicStates).AllocatorInstance.Data;
  pFVar3 = this->CurrentTick;
  uVar18 = *(uint *)(pFVar5 + (longlong)(int)uVar25 * 4);
  if (((int)uVar25 < 0) || ((pFVar3->ModifiedInstances).NumBits <= (int)uVar25)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Index>=0 && Index<NumBits",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x5be,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FSkyAtmosphereDynamicState *)(*pcVar6)();
      return pFVar19;
    }
  }
  FVar20 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
  if (FVar20 == (ForElementType<unsigned_int>)0x0) {
    FVar20 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
  }
  puVar1 = (uint *)((longlong)FVar20 + lVar24);
  *puVar1 = *puVar1 | uVar26;
  pFVar21 = TStateStreamStore<FSkyAtmosphereDynamicState>::AddUninitialized
                      (&this->DynamicStates,local_res10);
  *(uint *)(pFVar5 + (longlong)(int)uVar25 * 4) = local_res10[0];
  ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
  pFVar19 = FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[]
                      (&(this->DynamicStates).Array,uVar18);
  lVar24 = 2;
  pFVar16 = pFVar21;
  do {
    pFVar23 = pFVar16;
    pFVar22 = pFVar19;
    EVar9 = pFVar22->TransformMode;
    uVar10 = *(undefined3 *)&pFVar22->field_0x5;
    fVar11 = pFVar22->BottomRadius;
    FVar12.field0_0x0 = (pFVar22->GroundAlbedo).field0_0x0;
    pFVar23->ModifiedFlags = pFVar22->ModifiedFlags;
    pFVar23->TransformMode = EVar9;
    *(undefined3 *)&pFVar23->field_0x5 = uVar10;
    pFVar23->BottomRadius = fVar11;
    pFVar23->GroundAlbedo = (FColor)FVar12.field0_0x0;
    fVar11 = pFVar22->MultiScatteringFactor;
    fVar13 = pFVar22->TraceSampleCountScale;
    fVar14 = pFVar22->RayleighScatteringScale;
    pFVar23->AtmosphereHeight = pFVar22->AtmosphereHeight;
    pFVar23->MultiScatteringFactor = fVar11;
    pFVar23->TraceSampleCountScale = fVar13;
    pFVar23->RayleighScatteringScale = fVar14;
    uVar7 = *(undefined8 *)((longlong)&(pFVar22->RayleighScattering).field0_0x0 + 8);
    *(undefined8 *)&(pFVar23->RayleighScattering).field0_0x0 =
         *(undefined8 *)&(pFVar22->RayleighScattering).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar23->RayleighScattering).field0_0x0 + 8) = uVar7;
    fVar11 = pFVar22->MieScatteringScale;
    uVar7 = *(undefined8 *)&(pFVar22->MieScattering).field0_0x0;
    pFVar23->RayleighExponentialDistribution = pFVar22->RayleighExponentialDistribution;
    pFVar23->MieScatteringScale = fVar11;
    *(undefined8 *)&(pFVar23->MieScattering).field0_0x0 = uVar7;
    uVar7 = *(undefined8 *)&pFVar22->MieAbsorptionScale;
    *(undefined8 *)((longlong)&(pFVar23->MieScattering).field0_0x0 + 8) =
         *(undefined8 *)((longlong)&(pFVar22->MieScattering).field0_0x0 + 8);
    *(undefined8 *)&pFVar23->MieAbsorptionScale = uVar7;
    uVar7 = *(undefined8 *)((longlong)&(pFVar22->MieAbsorption).field0_0x0 + 0xc);
    *(undefined8 *)((longlong)&(pFVar23->MieAbsorption).field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(pFVar22->MieAbsorption).field0_0x0 + 4);
    *(undefined8 *)((longlong)&(pFVar23->MieAbsorption).field0_0x0 + 0xc) = uVar7;
    fVar11 = pFVar22->OtherAbsorptionScale;
    uVar7 = *(undefined8 *)&(pFVar22->OtherAbsorption).field0_0x0;
    pFVar23->MieExponentialDistribution = pFVar22->MieExponentialDistribution;
    pFVar23->OtherAbsorptionScale = fVar11;
    *(undefined8 *)&(pFVar23->OtherAbsorption).field0_0x0 = uVar7;
    fVar11 = pFVar22->OtherTentDistributionTipAltitude;
    fVar13 = pFVar22->OtherTentDistributionTipValue;
    *(undefined8 *)((longlong)&(pFVar23->OtherAbsorption).field0_0x0 + 8) =
         *(undefined8 *)((longlong)&(pFVar22->OtherAbsorption).field0_0x0 + 8);
    pFVar23->OtherTentDistributionTipAltitude = fVar11;
    pFVar23->OtherTentDistributionTipValue = fVar13;
    lVar24 = lVar24 + -1;
    pFVar19 = (FSkyAtmosphereDynamicState *)&pFVar22->OtherTentDistributionWidth;
    pFVar16 = (FSkyAtmosphereDynamicState *)&pFVar23->OtherTentDistributionWidth;
  } while (lVar24 != 0);
  uVar7 = *(undefined8 *)((longlong)&(pFVar22->SkyLuminanceFactor).field0_0x0 + 4);
  *(undefined8 *)&pFVar23->OtherTentDistributionWidth =
       *(undefined8 *)&pFVar22->OtherTentDistributionWidth;
  *(undefined8 *)((longlong)&(pFVar23->SkyLuminanceFactor).field0_0x0 + 4) = uVar7;
  uVar7 = *(undefined8 *)
           ((longlong)&(pFVar22->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 4);
  *(undefined8 *)((longlong)&(pFVar23->SkyLuminanceFactor).field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&(pFVar22->SkyLuminanceFactor).field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(pFVar23->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 4) =
       uVar7;
  fVar11 = pFVar22->HeightFogContribution;
  fVar13 = pFVar22->TransmittanceMinLightElevationAngle;
  *(undefined8 *)((longlong)&(pFVar23->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 0xc) =
       *(undefined8 *)
        ((longlong)&(pFVar22->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 0xc);
  pFVar23->HeightFogContribution = fVar11;
  pFVar23->TransmittanceMinLightElevationAngle = fVar13;
  uVar15 = *(undefined4 *)&pFVar22->field_0xb4;
  uVar7 = *(undefined8 *)&pFVar22->field_0xb8;
  pFVar23->AerialPerspectiveStartDepth = pFVar22->AerialPerspectiveStartDepth;
  *(undefined4 *)&pFVar23->field_0xb4 = uVar15;
  *(undefined8 *)&pFVar23->field_0xb8 = uVar7;
  dVar8 = (pFVar22->ComponentTransform).Rotation.XY.m128d_f64[1];
  (pFVar23->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (pFVar22->ComponentTransform).Rotation.XY.m128d_f64[0];
  (pFVar23->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar8;
  dVar8 = (pFVar22->ComponentTransform).Rotation.ZW.m128d_f64[1];
  (pFVar23->ComponentTransform).Rotation.ZW.m128d_f64[0] =
       (pFVar22->ComponentTransform).Rotation.ZW.m128d_f64[0];
  (pFVar23->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar8;
  return pFVar21;
}

// Edit @ 1456ff060

FStaticMeshDynamicState * __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Edit
          (TStateStream<FStaticMeshStateStreamSettings> *this,uint param_1,double param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  FTick *pFVar4;
  FTick *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FStaticMeshDynamicState *pFVar10;
  ForElementType<unsigned_int> FVar11;
  FStaticMeshDynamicState *pFVar12;
  uint uVar13;
  uint uVar14;
  uint local_res10 [2];
  
  if (param_1 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xe8,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FStaticMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  uVar13 = param_1 - 1;
  if (this->CurrentTick == (FTick *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FStaticMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  if ((uint)(this->CurrentTick->DynamicStates).ArrayNum <= uVar13) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceIndex < uint32(CurrentTick->DynamicStates.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xec,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FStaticMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
  pFVar4 = this->CurrentTick;
  if (((int)uVar13 < 0) || ((pFVar4->ModifiedInstances).NumBits <= (int)uVar13)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FStaticMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  FVar11 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
  pFVar5 = this->CurrentTick;
  uVar14 = 1 << ((byte)uVar13 & 0x1f);
  lVar2 = (longlong)((int)(uVar13 + ((int)uVar13 >> 0x1f & 0x1fU)) >> 5) * 4;
  iVar3 = (pFVar5->DynamicStates).ArrayNum;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
  }
  if ((*(uint *)((longlong)FVar11 + lVar2) & uVar14) != 0) {
    uVar14 = 0;
    if ((int)uVar13 < iVar3) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar10 = (FStaticMeshDynamicState *)(*pcVar7)();
        return pFVar10;
      }
    }
    uVar13 = *(uint *)((pFVar5->DynamicStates).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
    ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
    pFVar10 = FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[]
                        (&(this->DynamicStates).Array,uVar13);
    return pFVar10;
  }
  uVar9 = 0;
  if ((int)uVar13 < iVar3) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FStaticMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  pFVar6 = (pFVar5->DynamicStates).AllocatorInstance.Data;
  pFVar4 = this->CurrentTick;
  uVar9 = *(uint *)(pFVar6 + (longlong)(int)uVar13 * 4);
  if (((int)uVar13 < 0) || ((pFVar4->ModifiedInstances).NumBits <= (int)uVar13)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FStaticMeshDynamicState *)(*pcVar7)();
      return pFVar10;
    }
  }
  FVar11 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<unsigned_int>)0x0) {
    FVar11 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
  }
  puVar1 = (uint *)((longlong)FVar11 + lVar2);
  *puVar1 = *puVar1 | uVar14;
  pFVar10 = TStateStreamStore<FStaticMeshDynamicState>::AddUninitialized
                      (&this->DynamicStates,local_res10);
  *(uint *)(pFVar6 + (longlong)(int)uVar13 * 4) = local_res10[0];
  ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTickLock);
  pFVar12 = FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[]
                      (&(this->DynamicStates).Array,uVar9);
  pFVar10 = FStaticMeshDynamicState::FStaticMeshDynamicState(pFVar10,pFVar12);
  FStateStreamHandle::MakeInternal((FStateStreamHandle *)&pFVar12->Transform);
  return pFVar10;
}

// Game_AddRef @ 1457054c0

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Game_AddRef
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstance *pFVar3;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
                           *)&this->_padding_,param_1 - 1);
  if (pFVar3->RefCount == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3->RefCount = pFVar3->RefCount + 1;
    return;
  }
  pFVar3->RefCount = pFVar3->RefCount + 1;
  return;
}

// Game_AddRef @ 145705590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Game_AddRef
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstance *pFVar3;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
                           *)&this->_padding_,param_1 - 1);
  if (pFVar3->RefCount == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3->RefCount = pFVar3->RefCount + 1;
    return;
  }
  pFVar3->RefCount = pFVar3->RefCount + 1;
  return;
}

// Game_AddRef @ 145705660

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Game_AddRef
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstance *pFVar3;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>::
           GetElementAt((FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
                         *)&this->_padding_,param_1 - 1);
  if (pFVar3->RefCount == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3->RefCount = pFVar3->RefCount + 1;
    return;
  }
  pFVar3->RefCount = pFVar3->RefCount + 1;
  return;
}

// Game_AddRef @ 145705730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Game_AddRef
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstance *pFVar3;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
                           *)&this->_padding_,param_1 - 1);
  if (pFVar3->RefCount == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3->RefCount = pFVar3->RefCount + 1;
    return;
  }
  pFVar3->RefCount = pFVar3->RefCount + 1;
  return;
}

// Game_AddRef @ 145705800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Game_AddRef
          (TStateStream<FStaticMeshStateStreamSettings> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FInstance *pFVar3;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>::
           GetElementAt((FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
                         *)&this->_padding_,param_1 - 1);
  if (pFVar3->RefCount == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3->RefCount = pFVar3->RefCount + 1;
    return;
  }
  pFVar3->RefCount = pFVar3->RefCount + 1;
  return;
}

// Game_BeginTick @ 1457058d0

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Game_BeginTick
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this)

{
  uint uVar1;
  code *pcVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  bool bVar4;
  FTick *pFVar5;
  
  if ((this->CurrentTick != (FTick *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentTick",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x12d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = ::operator_new(0x50);
  if (pFVar5 != (FTick *)0x0) {
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[0] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[1] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[2] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[3] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[4] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[5] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[6] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[7] = '\0';
    pTVar3 = &pFVar5->ModifiedInstances;
    (pTVar3->AllocatorInstance).InlineData[8] = '\0';
    (pTVar3->AllocatorInstance).InlineData[9] = '\0';
    (pTVar3->AllocatorInstance).InlineData[10] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
    *(undefined8 *)&pFVar5->Index = 0;
    (pFVar5->DynamicStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->DynamicStates).ArrayNum = 0;
    (pFVar5->DynamicStates).ArrayMax = 0;
    (pFVar5->ModifiedInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (pFVar5->ModifiedInstances).NumBits = 0;
    (pFVar5->ModifiedInstances).MaxBits = 0x80;
    pFVar5->PrevTick = (FTick *)0x0;
    pFVar5->NextTick = (FTick *)0x0;
    pFVar5->Time = 0.0;
  }
  uVar1 = this->TickCounter;
  this->CurrentTick = pFVar5;
  this->TickCounter = uVar1 + 1;
  pFVar5->Index = uVar1;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentTick->DynamicStates,&this->NewestAvailableTick->DynamicStates);
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
            (&this->CurrentTick->ModifiedInstances,(this->CurrentTick->DynamicStates).ArrayNum,false
            );
  return;
}

// Game_BeginTick @ 1457059b0

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Game_BeginTick
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this)

{
  uint uVar1;
  code *pcVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  bool bVar4;
  FTick *pFVar5;
  
  if ((this->CurrentTick != (FTick *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentTick",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x12d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = ::operator_new(0x50);
  if (pFVar5 != (FTick *)0x0) {
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[0] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[1] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[2] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[3] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[4] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[5] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[6] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[7] = '\0';
    pTVar3 = &pFVar5->ModifiedInstances;
    (pTVar3->AllocatorInstance).InlineData[8] = '\0';
    (pTVar3->AllocatorInstance).InlineData[9] = '\0';
    (pTVar3->AllocatorInstance).InlineData[10] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
    *(undefined8 *)&pFVar5->Index = 0;
    (pFVar5->DynamicStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->DynamicStates).ArrayNum = 0;
    (pFVar5->DynamicStates).ArrayMax = 0;
    (pFVar5->ModifiedInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (pFVar5->ModifiedInstances).NumBits = 0;
    (pFVar5->ModifiedInstances).MaxBits = 0x80;
    pFVar5->PrevTick = (FTick *)0x0;
    pFVar5->NextTick = (FTick *)0x0;
    pFVar5->Time = 0.0;
  }
  uVar1 = this->TickCounter;
  this->CurrentTick = pFVar5;
  this->TickCounter = uVar1 + 1;
  pFVar5->Index = uVar1;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentTick->DynamicStates,&this->NewestAvailableTick->DynamicStates);
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
            (&this->CurrentTick->ModifiedInstances,(this->CurrentTick->DynamicStates).ArrayNum,false
            );
  return;
}

// Game_BeginTick @ 145705a90

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Game_BeginTick
          (TStateStream<FSkinnedMeshStateStreamSettings> *this)

{
  uint uVar1;
  code *pcVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  bool bVar4;
  FTick *pFVar5;
  
  if ((this->CurrentTick != (FTick *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentTick",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x12d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = ::operator_new(0x50);
  if (pFVar5 != (FTick *)0x0) {
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[0] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[1] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[2] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[3] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[4] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[5] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[6] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[7] = '\0';
    pTVar3 = &pFVar5->ModifiedInstances;
    (pTVar3->AllocatorInstance).InlineData[8] = '\0';
    (pTVar3->AllocatorInstance).InlineData[9] = '\0';
    (pTVar3->AllocatorInstance).InlineData[10] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
    *(undefined8 *)&pFVar5->Index = 0;
    (pFVar5->DynamicStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->DynamicStates).ArrayNum = 0;
    (pFVar5->DynamicStates).ArrayMax = 0;
    (pFVar5->ModifiedInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (pFVar5->ModifiedInstances).NumBits = 0;
    (pFVar5->ModifiedInstances).MaxBits = 0x80;
    pFVar5->PrevTick = (FTick *)0x0;
    pFVar5->NextTick = (FTick *)0x0;
    pFVar5->Time = 0.0;
  }
  uVar1 = this->TickCounter;
  this->CurrentTick = pFVar5;
  this->TickCounter = uVar1 + 1;
  pFVar5->Index = uVar1;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentTick->DynamicStates,&this->NewestAvailableTick->DynamicStates);
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
            (&this->CurrentTick->ModifiedInstances,(this->CurrentTick->DynamicStates).ArrayNum,false
            );
  return;
}

// Game_BeginTick @ 145705b70

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Game_BeginTick
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this)

{
  uint uVar1;
  code *pcVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  bool bVar4;
  FTick *pFVar5;
  
  if ((this->CurrentTick != (FTick *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentTick",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x12d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = ::operator_new(0x50);
  if (pFVar5 != (FTick *)0x0) {
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[0] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[1] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[2] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[3] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[4] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[5] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[6] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[7] = '\0';
    pTVar3 = &pFVar5->ModifiedInstances;
    (pTVar3->AllocatorInstance).InlineData[8] = '\0';
    (pTVar3->AllocatorInstance).InlineData[9] = '\0';
    (pTVar3->AllocatorInstance).InlineData[10] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
    *(undefined8 *)&pFVar5->Index = 0;
    (pFVar5->DynamicStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->DynamicStates).ArrayNum = 0;
    (pFVar5->DynamicStates).ArrayMax = 0;
    (pFVar5->ModifiedInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (pFVar5->ModifiedInstances).NumBits = 0;
    (pFVar5->ModifiedInstances).MaxBits = 0x80;
    pFVar5->PrevTick = (FTick *)0x0;
    pFVar5->NextTick = (FTick *)0x0;
    pFVar5->Time = 0.0;
  }
  uVar1 = this->TickCounter;
  this->CurrentTick = pFVar5;
  this->TickCounter = uVar1 + 1;
  pFVar5->Index = uVar1;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentTick->DynamicStates,&this->NewestAvailableTick->DynamicStates);
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
            (&this->CurrentTick->ModifiedInstances,(this->CurrentTick->DynamicStates).ArrayNum,false
            );
  return;
}

// Game_BeginTick @ 145705c50

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Game_BeginTick
          (TStateStream<FStaticMeshStateStreamSettings> *this)

{
  uint uVar1;
  code *pcVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  bool bVar4;
  FTick *pFVar5;
  
  if ((this->CurrentTick != (FTick *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentTick",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x12d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = ::operator_new(0x50);
  if (pFVar5 != (FTick *)0x0) {
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[0] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[1] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[2] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[3] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[4] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[5] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[6] = '\0';
    (pFVar5->ModifiedInstances).AllocatorInstance.InlineData[7] = '\0';
    pTVar3 = &pFVar5->ModifiedInstances;
    (pTVar3->AllocatorInstance).InlineData[8] = '\0';
    (pTVar3->AllocatorInstance).InlineData[9] = '\0';
    (pTVar3->AllocatorInstance).InlineData[10] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
    *(undefined8 *)&pFVar5->Index = 0;
    (pFVar5->DynamicStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->DynamicStates).ArrayNum = 0;
    (pFVar5->DynamicStates).ArrayMax = 0;
    (pFVar5->ModifiedInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (pFVar5->ModifiedInstances).NumBits = 0;
    (pFVar5->ModifiedInstances).MaxBits = 0x80;
    pFVar5->PrevTick = (FTick *)0x0;
    pFVar5->NextTick = (FTick *)0x0;
    pFVar5->Time = 0.0;
  }
  uVar1 = this->TickCounter;
  this->CurrentTick = pFVar5;
  this->TickCounter = uVar1 + 1;
  pFVar5->Index = uVar1;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentTick->DynamicStates,&this->NewestAvailableTick->DynamicStates);
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
            (&this->CurrentTick->ModifiedInstances,(this->CurrentTick->DynamicStates).ArrayNum,false
            );
  return;
}

// Game_CreateInstance @ 145705d30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FExponentialHeightFogHandle * __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Game_CreateInstance
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,
          FExponentialHeightFogHandle *__return_storage_ptr__,
          FExponentialHeightFogStaticState *param_1,FExponentialHeightFogDynamicState *param_2)

{
  TStateStreamStore<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance> *pTVar1;
  long64 *plVar2;
  uint *puVar3;
  void *pvVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FExponentialHeightFogHandle *pFVar9;
  void *pvVar10;
  void *pvVar11;
  FInstance *pFVar12;
  FExponentialHeightFogDynamicState *this_01;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint local_res8 [2];
  FStateStreamHandle *local_res10;
  FExponentialHeightFogStaticState *local_res18;
  FExponentialHeightFogDynamicState *local_res20;
  
  local_res10 = (FStateStreamHandle *)__return_storage_ptr__;
  local_res18 = param_1;
  local_res20 = param_2;
  if (((this->CurrentTickLock).Mutex.Mutex.Ptr == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentTick",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x9b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FExponentialHeightFogHandle *)(*pcVar6)();
    return pFVar9;
  }
  pvVar4 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  uVar14 = (uint)(this->Instances).Array.Buckets[0x14];
  if (uVar14 == 0xffffffff) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
    LOCK();
    pTVar1 = &this->Instances;
    uVar14 = *(uint *)&(pTVar1->Lock).Mutex.Mutex.Ptr;
    *(int *)&(pTVar1->Lock).Mutex.Mutex.Ptr = *(int *)&(pTVar1->Lock).Mutex.Mutex.Ptr + 1;
    UNLOCK();
    uVar8 = (uVar14 >> 4) + 1;
    uVar16 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar16 == 0; uVar16 = uVar16 - 1) {
      }
    }
    pvVar10 = (void *)(this->Instances).Array.Buckets[(ulonglong)uVar16 - 1];
    plVar2 = (this->Instances).Array.Buckets + ((ulonglong)uVar16 - 1);
    if (pvVar10 == (void *)0x0) {
      uVar8 = 1 << ((byte)uVar16 + 4 & 0x1f);
      if (uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      pvVar10 = FMemory::Malloc((ulonglong)uVar8 * 0xe0,8);
      if (((ulonglong)plVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      pvVar11 = (void *)*plVar2;
      bVar7 = pvVar11 == (void *)0x0;
      if (bVar7) {
        *plVar2 = (long64)pvVar10;
        pvVar11 = (void *)0x0;
      }
      UNLOCK();
      if (!bVar7) {
        FMemory::Free(pvVar10);
        pvVar10 = pvVar11;
      }
    }
    if (uVar16 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = (0x10 << ((byte)uVar16 & 0x1f)) + -0x10;
    }
    pFVar12 = (FInstance *)((ulonglong)(uVar14 - iVar13) * 0xe0 + (longlong)pvVar10);
  }
  else {
    pFVar12 = FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
              ::GetElementAt((FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
                              *)&this->Instances,uVar14);
    *(uint *)((this->Instances).Array.Buckets + 0x14) = (pFVar12->StaticState).ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
    pFVar12 = FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
              ::GetElementAt((FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
                              *)&this->Instances,uVar14);
  }
  uVar16 = *(uint *)((longlong)pvVar4 + 0x48);
  (pFVar12->StaticState).ModifiedFlags = local_res18->ModifiedFlags;
  pFVar12->CreateTick = uVar16;
  pFVar12->RefCount = 1;
  pFVar12->DeleteTick = 0xffffffff;
  (pFVar12->RendDynamicState).bIsSet = false;
  pFVar12->UserData = (FExponentialHeightFogSceneProxy *)0x0;
  this_01 = TStateStreamStore<FExponentialHeightFogDynamicState>::AddUninitialized
                      ((TStateStreamStore<FExponentialHeightFogDynamicState> *)
                       &this->NewestAvailableTick,local_res8);
  FExponentialHeightFogDynamicState::FExponentialHeightFogDynamicState(this_01,local_res20);
  AcquireSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  this_00 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if ((uint)this_00->ArrayNum <= uVar14) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar14 + 1,Default);
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              ((TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)(this->CurrentTickLock).Mutex.Mutex.Ptr + 0x10),uVar14 + 1,false);
  }
  pvVar4 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if ((((int)uVar14 < 0) || (*(int *)((longlong)pvVar4 + 0x28) <= (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FExponentialHeightFogHandle *)(*pcVar6)();
    return pFVar9;
  }
  lVar15 = *(longlong *)((longlong)pvVar4 + 0x20);
  if (*(longlong *)((longlong)pvVar4 + 0x20) == 0) {
    lVar15 = (longlong)pvVar4 + 0x10;
  }
  puVar3 = (uint *)(lVar15 + (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar14 & 0x1f);
  plVar5 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  uVar16 = 0;
  if ((int)uVar14 < (int)plVar5[1]) {
    uVar16 = ~uVar14 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FExponentialHeightFogHandle *)(*pcVar6)();
    return pFVar9;
  }
  *(uint *)(*plVar5 + (longlong)(int)uVar14 * 4) = local_res8[0];
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  FStateStreamHandle::FStateStreamHandle
            (local_res10,(IStateStreamHandleOwner *)&this->_padding_,uVar14 + 1);
  return (FExponentialHeightFogHandle *)local_res10;
}

// Game_CreateInstance @ 145706020

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParticleSystemHandle * __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Game_CreateInstance
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,
          FParticleSystemHandle *__return_storage_ptr__,FParticleSystemStaticState *param_1,
          FParticleSystemDynamicState *param_2)

{
  TStateStreamStore<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance> *pTVar1;
  long64 *plVar2;
  void *pvVar3;
  UFXSystemAsset *pUVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FParticleSystemHandle *pFVar9;
  void *pvVar10;
  void *pvVar11;
  FInstance *pFVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint local_res8 [2];
  FStateStreamHandle *local_res10;
  FParticleSystemStaticState *local_res18;
  FParticleSystemDynamicState *local_res20;
  
  local_res10 = (FStateStreamHandle *)__return_storage_ptr__;
  local_res18 = param_1;
  local_res20 = param_2;
  if (((this->CurrentTickLock).Mutex.Mutex.Ptr == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentTick",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x9b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FParticleSystemHandle *)(*pcVar6)();
    return pFVar9;
  }
  pvVar3 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  uVar15 = (uint)(this->Instances).Array.Buckets[0x14];
  if (uVar15 == 0xffffffff) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
    LOCK();
    pTVar1 = &this->Instances;
    uVar15 = *(uint *)&(pTVar1->Lock).Mutex.Mutex.Ptr;
    *(int *)&(pTVar1->Lock).Mutex.Mutex.Ptr = *(int *)&(pTVar1->Lock).Mutex.Mutex.Ptr + 1;
    UNLOCK();
    uVar8 = (uVar15 >> 4) + 1;
    uVar17 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar17 == 0; uVar17 = uVar17 - 1) {
      }
    }
    pvVar10 = (void *)(this->Instances).Array.Buckets[(ulonglong)uVar17 - 1];
    plVar2 = (this->Instances).Array.Buckets + ((ulonglong)uVar17 - 1);
    if (pvVar10 == (void *)0x0) {
      uVar8 = 1 << ((byte)uVar17 + 4 & 0x1f);
      if (uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      pvVar10 = FMemory::Malloc((ulonglong)uVar8 << 6,8);
      if (((ulonglong)plVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      pvVar11 = (void *)*plVar2;
      bVar7 = pvVar11 == (void *)0x0;
      if (bVar7) {
        *plVar2 = (long64)pvVar10;
        pvVar11 = (void *)0x0;
      }
      UNLOCK();
      if (!bVar7) {
        FMemory::Free(pvVar10);
        pvVar10 = pvVar11;
      }
    }
    if (uVar17 == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = (0x10 << ((byte)uVar17 & 0x1f)) + -0x10;
    }
    pFVar12 = (FInstance *)((ulonglong)(uVar15 - iVar14) * 0x40 + (longlong)pvVar10);
    param_2 = local_res20;
  }
  else {
    pFVar12 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
              ::GetElementAt((FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
                              *)&this->Instances,uVar15);
    *(uint *)((this->Instances).Array.Buckets + 0x14) = (pFVar12->StaticState).ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
    pFVar12 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
              ::GetElementAt((FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
                              *)&this->Instances,uVar15);
  }
  uVar17 = *(uint *)((longlong)pvVar3 + 0x48);
  (pFVar12->StaticState).ModifiedFlags = local_res18->ModifiedFlags;
  pFVar12->CreateTick = uVar17;
  pFVar12->RefCount = 1;
  pFVar12->DeleteTick = 0xffffffff;
  (pFVar12->RendDynamicState).bIsSet = false;
  pFVar12->UserData = (FParticleSystemObjectCascade *)0x0;
  puVar13 = TStateStreamStore<FParticleSystemDynamicState>::AddUninitialized
                      ((TStateStreamStore<FParticleSystemDynamicState> *)&this->NewestAvailableTick,
                       local_res8);
  *puVar13 = param_2->ModifiedFlags;
  FStateStreamHandle::FStateStreamHandle
            ((FStateStreamHandle *)(puVar13 + 2),(FStateStreamHandle *)&param_2->Transform);
  pUVar4 = (param_2->SystemAsset).field0_0x0.DebugPtr;
  *(UFXSystemAsset **)(puVar13 + 6) = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UFXSystemAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  this_00 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if ((uint)this_00->ArrayNum <= uVar15) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar15 + 1,Default);
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              ((TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)(this->CurrentTickLock).Mutex.Mutex.Ptr + 0x10),uVar15 + 1,false);
  }
  pvVar3 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if ((((int)uVar15 < 0) || (*(int *)((longlong)pvVar3 + 0x28) <= (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FParticleSystemHandle *)(*pcVar6)();
    return pFVar9;
  }
  lVar16 = *(longlong *)((longlong)pvVar3 + 0x20);
  if (*(longlong *)((longlong)pvVar3 + 0x20) == 0) {
    lVar16 = (longlong)pvVar3 + 0x10;
  }
  puVar13 = (uint *)(lVar16 + (longlong)((int)(uVar15 + ((int)uVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar13 = *puVar13 | 1 << ((byte)uVar15 & 0x1f);
  plVar5 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  uVar17 = 0;
  if ((int)uVar15 < (int)plVar5[1]) {
    uVar17 = ~uVar15 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FParticleSystemHandle *)(*pcVar6)();
    return pFVar9;
  }
  *(uint *)(*plVar5 + (longlong)(int)uVar15 * 4) = local_res8[0];
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  FStateStreamHandle::FStateStreamHandle
            (local_res10,(IStateStreamHandleOwner *)&this->_padding_,uVar15 + 1);
  return (FParticleSystemHandle *)local_res10;
}

// Game_CreateInstance @ 145706330

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSkinnedMeshHandle * __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Game_CreateInstance
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,
          FSkinnedMeshHandle *__return_storage_ptr__,FSkinnedMeshStaticState *param_1,
          FSkinnedMeshDynamicState *param_2)

{
  uint *puVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  void *pvVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FSkinnedMeshHandle *pFVar8;
  FSkinnedMeshDynamicState *this_01;
  longlong lVar9;
  int local_res8 [2];
  uint local_res10 [2];
  
  if ((this->CurrentTickLock).Mutex.Mutex.Ptr == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x9b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSkinnedMeshHandle *)(*pcVar4)();
      return pFVar8;
    }
  }
  local_res8[0] = 1;
  uVar6 = TStateStreamStore<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance>::
          Emplace<FSkinnedMeshStaticState_const_&,int,unsigned_int_&>
                    ((TStateStreamStore<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance> *)
                     &this->_padding_,param_1,local_res8,
                     (uint *)((longlong)(this->CurrentTickLock).Mutex.Mutex.Ptr + 0x48));
  this_01 = TStateStreamStore<FSkinnedMeshDynamicState>::AddUninitialized
                      ((TStateStreamStore<FSkinnedMeshDynamicState> *)&this->NewestAvailableTick,
                       local_res10);
  FSkinnedMeshDynamicState::FSkinnedMeshDynamicState(this_01,param_2);
  AcquireSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  this_00 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if ((uint)this_00->ArrayNum <= uVar6) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar6 + 1,Default);
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              ((TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)(this->CurrentTickLock).Mutex.Mutex.Ptr + 0x10),uVar6 + 1,false);
  }
  pvVar2 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if (((int)uVar6 < 0) || (*(int *)((longlong)pvVar2 + 0x28) <= (int)uVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSkinnedMeshHandle *)(*pcVar4)();
      return pFVar8;
    }
  }
  lVar9 = *(longlong *)((longlong)pvVar2 + 0x20);
  if (*(longlong *)((longlong)pvVar2 + 0x20) == 0) {
    lVar9 = (longlong)pvVar2 + 0x10;
  }
  puVar1 = (uint *)(lVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  plVar3 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  uVar7 = 0;
  if ((int)uVar6 < (int)plVar3[1]) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSkinnedMeshHandle *)(*pcVar4)();
      return pFVar8;
    }
  }
  *(uint *)(*plVar3 + (longlong)(int)uVar6 * 4) = local_res10[0];
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  FStateStreamHandle::FStateStreamHandle
            ((FStateStreamHandle *)__return_storage_ptr__,
             (IStateStreamHandleOwner *)&this->_padding_,uVar6 + 1);
  return __return_storage_ptr__;
}

// Game_CreateInstance @ 145706500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSkyAtmosphereHandle * __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Game_CreateInstance
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,
          FSkyAtmosphereHandle *__return_storage_ptr__,FSkyAtmosphereStaticState *param_1,
          FSkyAtmosphereDynamicState *param_2)

{
  TStateStreamStore<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance> *this_00;
  long64 *plVar1;
  uint *puVar2;
  void *pvVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this_01;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  FSkyAtmosphereHandle *pFVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *pvVar15;
  FInstance *pFVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  FSkyAtmosphereDynamicState *pFVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint local_res8 [2];
  FStateStreamHandle *local_res10;
  FSkyAtmosphereStaticState *local_res18;
  uint local_res20;
  
  local_res10 = (FStateStreamHandle *)__return_storage_ptr__;
  local_res18 = param_1;
  if (((this->CurrentTickLock).Mutex.Mutex.Ptr == (void *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentTick",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                          ,0x9b,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FSkyAtmosphereHandle *)(*pcVar5)();
    return pFVar12;
  }
  pvVar3 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  this_00 = &this->Instances;
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  uVar22 = (uint)(this->Instances).Array.Buckets[0x14];
  if (uVar22 == 0xffffffff) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
    LOCK();
    uVar22 = *(uint *)&(this_00->Lock).Mutex.Mutex.Ptr;
    *(int *)&(this_00->Lock).Mutex.Mutex.Ptr = *(int *)&(this_00->Lock).Mutex.Mutex.Ptr + 1;
    UNLOCK();
    uVar11 = (uVar22 >> 4) + 1;
    uVar23 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> uVar23 == 0; uVar23 = uVar23 - 1) {
      }
    }
    pvVar14 = (void *)(this_00->Array).Buckets[(ulonglong)uVar23 - 1];
    plVar1 = (this_00->Array).Buckets + ((ulonglong)uVar23 - 1);
    local_res20 = uVar23;
    if (pvVar14 == (void *)0x0) {
      uVar11 = 1 << ((byte)uVar23 + 4 & 0x1f);
      uVar13 = (ulonglong)uVar11;
      if (uVar11 < 0x10) {
        uVar13 = 0x10;
      }
      pvVar14 = FMemory::Malloc(uVar13 * 400,0x10);
      if (((ulonglong)plVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      pvVar15 = (void *)*plVar1;
      bVar10 = pvVar15 == (void *)0x0;
      if (bVar10) {
        *plVar1 = (long64)pvVar14;
        pvVar15 = (void *)0x0;
      }
      UNLOCK();
      if (!bVar10) {
        FMemory::Free(pvVar14);
        pvVar14 = pvVar15;
      }
    }
    if (uVar23 == 0) {
      iVar21 = 0;
    }
    else {
      iVar21 = (0x10 << ((byte)uVar23 & 0x1f)) + -0x10;
    }
    pFVar16 = (FInstance *)((ulonglong)(uVar22 - iVar21) * 400 + (longlong)pvVar14);
  }
  else {
    pFVar16 = FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
              ::GetElementAt((FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
                              *)this_00,uVar22);
    *(uint *)((this->Instances).Array.Buckets + 0x14) = (pFVar16->StaticState).ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
    pFVar16 = FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
              ::GetElementAt((FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
                              *)this_00,uVar22);
  }
  uVar23 = *(uint *)((longlong)pvVar3 + 0x48);
  (pFVar16->StaticState).ModifiedFlags = local_res18->ModifiedFlags;
  pFVar16->CreateTick = uVar23;
  pFVar16->RefCount = 1;
  pFVar16->DeleteTick = 0xffffffff;
  (pFVar16->RendDynamicState).bIsSet = false;
  pFVar16->UserData = (FSkyAtmosphereSceneProxy *)0x0;
  puVar17 = TStateStreamStore<FSkyAtmosphereDynamicState>::AddUninitialized
                      ((TStateStreamStore<FSkyAtmosphereDynamicState> *)&this->NewestAvailableTick,
                       local_res8);
  lVar19 = 2;
  do {
    pFVar20 = param_2;
    puVar18 = puVar17;
    uVar9 = *(undefined8 *)&pFVar20->BottomRadius;
    *puVar18 = *(undefined8 *)pFVar20;
    puVar18[1] = uVar9;
    uVar9 = *(undefined8 *)&pFVar20->TraceSampleCountScale;
    puVar18[2] = *(undefined8 *)&pFVar20->AtmosphereHeight;
    puVar18[3] = uVar9;
    uVar9 = *(undefined8 *)((longlong)&(pFVar20->RayleighScattering).field0_0x0 + 8);
    puVar18[4] = *(undefined8 *)&(pFVar20->RayleighScattering).field0_0x0;
    puVar18[5] = uVar9;
    uVar9 = *(undefined8 *)&(pFVar20->MieScattering).field0_0x0;
    puVar18[6] = *(undefined8 *)&pFVar20->RayleighExponentialDistribution;
    puVar18[7] = uVar9;
    uVar9 = *(undefined8 *)&pFVar20->MieAbsorptionScale;
    puVar18[8] = *(undefined8 *)((longlong)&(pFVar20->MieScattering).field0_0x0 + 8);
    puVar18[9] = uVar9;
    uVar9 = *(undefined8 *)((longlong)&(pFVar20->MieAbsorption).field0_0x0 + 0xc);
    puVar18[10] = *(undefined8 *)((longlong)&(pFVar20->MieAbsorption).field0_0x0 + 4);
    puVar18[0xb] = uVar9;
    uVar9 = *(undefined8 *)&(pFVar20->OtherAbsorption).field0_0x0;
    puVar18[0xc] = *(undefined8 *)&pFVar20->MieExponentialDistribution;
    puVar18[0xd] = uVar9;
    uVar9 = *(undefined8 *)&pFVar20->OtherTentDistributionTipAltitude;
    puVar18[0xe] = *(undefined8 *)((longlong)&(pFVar20->OtherAbsorption).field0_0x0 + 8);
    puVar18[0xf] = uVar9;
    lVar19 = lVar19 + -1;
    puVar17 = puVar18 + 0x10;
    param_2 = (FSkyAtmosphereDynamicState *)&pFVar20->OtherTentDistributionWidth;
  } while (lVar19 != 0);
  uVar9 = *(undefined8 *)((longlong)&(pFVar20->SkyLuminanceFactor).field0_0x0 + 4);
  puVar18[0x10] = *(undefined8 *)&pFVar20->OtherTentDistributionWidth;
  puVar18[0x11] = uVar9;
  uVar9 = *(undefined8 *)
           ((longlong)&(pFVar20->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 4);
  puVar18[0x12] = *(undefined8 *)((longlong)&(pFVar20->SkyLuminanceFactor).field0_0x0 + 0xc);
  puVar18[0x13] = uVar9;
  uVar9 = *(undefined8 *)&pFVar20->HeightFogContribution;
  puVar18[0x14] =
       *(undefined8 *)
        ((longlong)&(pFVar20->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 0xc);
  puVar18[0x15] = uVar9;
  uVar9 = *(undefined8 *)&pFVar20->field_0xb8;
  puVar18[0x16] = *(undefined8 *)&pFVar20->AerialPerspectiveStartDepth;
  puVar18[0x17] = uVar9;
  uVar6 = *(undefined4 *)((longlong)(pFVar20->ComponentTransform).Rotation.XY.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((pFVar20->ComponentTransform).Rotation.XY.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(pFVar20->ComponentTransform).Rotation.XY.m128d_f64 + 0xc);
  *(undefined4 *)(puVar18 + 0x18) =
       *(undefined4 *)(pFVar20->ComponentTransform).Rotation.XY.m128d_f64;
  *(undefined4 *)((longlong)puVar18 + 0xc4) = uVar6;
  *(undefined4 *)(puVar18 + 0x19) = uVar7;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = uVar8;
  uVar6 = *(undefined4 *)((longlong)(pFVar20->ComponentTransform).Rotation.ZW.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((pFVar20->ComponentTransform).Rotation.ZW.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(pFVar20->ComponentTransform).Rotation.ZW.m128d_f64 + 0xc);
  *(undefined4 *)(puVar18 + 0x1a) =
       *(undefined4 *)(pFVar20->ComponentTransform).Rotation.ZW.m128d_f64;
  *(undefined4 *)((longlong)puVar18 + 0xd4) = uVar6;
  *(undefined4 *)(puVar18 + 0x1b) = uVar7;
  *(undefined4 *)((longlong)puVar18 + 0xdc) = uVar8;
  AcquireSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  this_01 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if ((uint)this_01->ArrayNum <= uVar22) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(this_01,uVar22 + 1,Default);
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              ((TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)(this->CurrentTickLock).Mutex.Mutex.Ptr + 0x10),uVar22 + 1,false);
  }
  pvVar3 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if ((((int)uVar22 < 0) || (*(int *)((longlong)pvVar3 + 0x28) <= (int)uVar22)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FSkyAtmosphereHandle *)(*pcVar5)();
    return pFVar12;
  }
  lVar19 = *(longlong *)((longlong)pvVar3 + 0x20);
  if (*(longlong *)((longlong)pvVar3 + 0x20) == 0) {
    lVar19 = (longlong)pvVar3 + 0x10;
  }
  puVar2 = (uint *)(lVar19 + (longlong)((int)(uVar22 + ((int)uVar22 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar22 & 0x1f);
  plVar4 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  uVar23 = 0;
  if ((int)uVar22 < (int)plVar4[1]) {
    uVar23 = ~uVar22 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FSkyAtmosphereHandle *)(*pcVar5)();
    return pFVar12;
  }
  *(uint *)(*plVar4 + (longlong)(int)uVar22 * 4) = local_res8[0];
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  FStateStreamHandle::FStateStreamHandle
            (local_res10,(IStateStreamHandleOwner *)&this->_padding_,uVar22 + 1);
  return (FSkyAtmosphereHandle *)local_res10;
}

// Game_CreateInstance @ 145706870

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticMeshHandle * __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Game_CreateInstance
          (TStateStream<FStaticMeshStateStreamSettings> *this,
          FStaticMeshHandle *__return_storage_ptr__,FStaticMeshStaticState *param_1,
          FStaticMeshDynamicState *param_2)

{
  TStateStreamStore<TStateStream<FStaticMeshStateStreamSettings>::FInstance> *pTVar1;
  long64 *plVar2;
  uint *puVar3;
  void *pvVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FStaticMeshHandle *pFVar9;
  void *pvVar10;
  void *pvVar11;
  FInstance *pFVar12;
  FStaticMeshDynamicState *this_01;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint local_res8 [2];
  FStateStreamHandle *local_res10;
  FStaticMeshStaticState *local_res18;
  FStaticMeshDynamicState *local_res20;
  
  local_res10 = (FStateStreamHandle *)__return_storage_ptr__;
  local_res18 = param_1;
  local_res20 = param_2;
  if (((this->CurrentTickLock).Mutex.Mutex.Ptr == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentTick",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x9b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FStaticMeshHandle *)(*pcVar6)();
    return pFVar9;
  }
  pvVar4 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
  uVar14 = (uint)(this->Instances).Array.Buckets[0x14];
  if (uVar14 == 0xffffffff) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
    LOCK();
    pTVar1 = &this->Instances;
    uVar14 = *(uint *)&(pTVar1->Lock).Mutex.Mutex.Ptr;
    *(int *)&(pTVar1->Lock).Mutex.Mutex.Ptr = *(int *)&(pTVar1->Lock).Mutex.Mutex.Ptr + 1;
    UNLOCK();
    uVar8 = (uVar14 >> 4) + 1;
    uVar16 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar16 == 0; uVar16 = uVar16 - 1) {
      }
    }
    pvVar10 = (void *)(this->Instances).Array.Buckets[(ulonglong)uVar16 - 1];
    plVar2 = (this->Instances).Array.Buckets + ((ulonglong)uVar16 - 1);
    if (pvVar10 == (void *)0x0) {
      uVar8 = 1 << ((byte)uVar16 + 4 & 0x1f);
      if (uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      pvVar10 = FMemory::Malloc((ulonglong)uVar8 * 0x68,8);
      if (((ulonglong)plVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      pvVar11 = (void *)*plVar2;
      bVar7 = pvVar11 == (void *)0x0;
      if (bVar7) {
        *plVar2 = (long64)pvVar10;
        pvVar11 = (void *)0x0;
      }
      UNLOCK();
      if (!bVar7) {
        FMemory::Free(pvVar10);
        pvVar10 = pvVar11;
      }
    }
    if (uVar16 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = (0x10 << ((byte)uVar16 & 0x1f)) + -0x10;
    }
    pFVar12 = (FInstance *)((ulonglong)(uVar14 - iVar13) * 0x68 + (longlong)pvVar10);
  }
  else {
    pFVar12 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
              ::GetElementAt((FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
                              *)&this->Instances,uVar14);
    *(uint *)((this->Instances).Array.Buckets + 0x14) = (pFVar12->StaticState).ModifiedFlags;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
    pFVar12 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
              ::GetElementAt((FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
                              *)&this->Instances,uVar14);
  }
  uVar16 = *(uint *)((longlong)pvVar4 + 0x48);
  (pFVar12->StaticState).ModifiedFlags = local_res18->ModifiedFlags;
  pFVar12->CreateTick = uVar16;
  pFVar12->RefCount = 1;
  pFVar12->DeleteTick = 0xffffffff;
  (pFVar12->RendDynamicState).bIsSet = false;
  pFVar12->UserData = (FStaticMeshObject *)0x0;
  this_01 = TStateStreamStore<FStaticMeshDynamicState>::AddUninitialized
                      ((TStateStreamStore<FStaticMeshDynamicState> *)&this->NewestAvailableTick,
                       local_res8);
  FStaticMeshDynamicState::FStaticMeshDynamicState(this_01,local_res20);
  AcquireSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  this_00 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if ((uint)this_00->ArrayNum <= uVar14) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar14 + 1,Default);
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              ((TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)(this->CurrentTickLock).Mutex.Mutex.Ptr + 0x10),uVar14 + 1,false);
  }
  pvVar4 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  if ((((int)uVar14 < 0) || (*(int *)((longlong)pvVar4 + 0x28) <= (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FStaticMeshHandle *)(*pcVar6)();
    return pFVar9;
  }
  lVar15 = *(longlong *)((longlong)pvVar4 + 0x20);
  if (*(longlong *)((longlong)pvVar4 + 0x20) == 0) {
    lVar15 = (longlong)pvVar4 + 0x10;
  }
  puVar3 = (uint *)(lVar15 + (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar14 & 0x1f);
  plVar5 = (this->CurrentTickLock).Mutex.Mutex.Ptr;
  uVar16 = 0;
  if ((int)uVar14 < (int)plVar5[1]) {
    uVar16 = ~uVar14 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FStaticMeshHandle *)(*pcVar6)();
    return pFVar9;
  }
  *(uint *)(*plVar5 + (longlong)(int)uVar14 * 4) = local_res8[0];
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->Instances).FirstFreeIndex);
  FStateStreamHandle::FStateStreamHandle
            (local_res10,(IStateStreamHandleOwner *)&this->_padding_,uVar14 + 1);
  return (FStaticMeshHandle *)local_res10;
}

// Game_Edit @ 145706b60

void * __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Game_Edit
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,uint param_1,double param_2,
          ulong64 param_3)

{
  FExponentialHeightFogDynamicState *pFVar1;
  
  pFVar1 = Edit((TStateStream<FExponentialHeightFogStateStreamSettings> *)&this[-1].DeferredDestroys
                ,param_1,param_2);
  return pFVar1;
}

// Game_Edit @ 145706b70

void * __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Game_Edit
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,uint param_1,double param_2
          ,ulong64 param_3)

{
  FParticleSystemDynamicState *pFVar1;
  
  pFVar1 = Edit((TStateStream<FParticleSystemStateStreamSettingsCascade> *)
                &this[-1].DeferredDestroys,param_1,param_2);
  return pFVar1;
}

// Game_Edit @ 145706b80

void * __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Game_Edit
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,uint param_1,double param_2,
          ulong64 param_3)

{
  FSkinnedMeshDynamicState *pFVar1;
  
  pFVar1 = Edit((TStateStream<FSkinnedMeshStateStreamSettings> *)&this[-1].DeferredDestroys,param_1,
                param_2);
  return pFVar1;
}

// Game_Edit @ 145706b90

void * __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Game_Edit
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,uint param_1,double param_2,
          ulong64 param_3)

{
  FSkyAtmosphereDynamicState *pFVar1;
  
  pFVar1 = Edit((TStateStream<FSkyAtmosphereStateStreamSettings> *)&this[-1].DeferredDestroys,
                param_1,param_2);
  return pFVar1;
}

// Game_Edit @ 145706ba0

void * __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Game_Edit
          (TStateStream<FStaticMeshStateStreamSettings> *this,uint param_1,double param_2,
          ulong64 param_3)

{
  FStaticMeshDynamicState *pFVar1;
  
  pFVar1 = Edit((TStateStream<FStaticMeshStateStreamSettings> *)&this[-1].DeferredDestroys,param_1,
                param_2);
  return pFVar1;
}

// Game_EndTick @ 145706bb0

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Game_EndTick
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick == (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentTick->Time = param_1;
  this->CurrentTick->PrevTick = this->NewestAvailableTick;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    this->OldestAvailableTick = this->CurrentTick;
  }
  else {
    if (param_1 < this->NewestAvailableTick->Time) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewestAvailableTick->Time <= AbsoluteTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x140,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NewestAvailableTick->NextTick = this->CurrentTick;
  }
  this->NewestAvailableTick = this->CurrentTick;
  this->CurrentTick = (FTick *)0x0;
  return;
}

// Game_EndTick @ 145706ca0

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Game_EndTick
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick == (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentTick->Time = param_1;
  this->CurrentTick->PrevTick = this->NewestAvailableTick;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    this->OldestAvailableTick = this->CurrentTick;
  }
  else {
    if (param_1 < this->NewestAvailableTick->Time) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewestAvailableTick->Time <= AbsoluteTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x140,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NewestAvailableTick->NextTick = this->CurrentTick;
  }
  this->NewestAvailableTick = this->CurrentTick;
  this->CurrentTick = (FTick *)0x0;
  return;
}

// Game_EndTick @ 145706d90

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Game_EndTick
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick == (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentTick->Time = param_1;
  this->CurrentTick->PrevTick = this->NewestAvailableTick;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    this->OldestAvailableTick = this->CurrentTick;
  }
  else {
    if (param_1 < this->NewestAvailableTick->Time) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewestAvailableTick->Time <= AbsoluteTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x140,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NewestAvailableTick->NextTick = this->CurrentTick;
  }
  this->NewestAvailableTick = this->CurrentTick;
  this->CurrentTick = (FTick *)0x0;
  return;
}

// Game_EndTick @ 145706e80

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Game_EndTick
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick == (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentTick->Time = param_1;
  this->CurrentTick->PrevTick = this->NewestAvailableTick;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    this->OldestAvailableTick = this->CurrentTick;
  }
  else {
    if (param_1 < this->NewestAvailableTick->Time) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewestAvailableTick->Time <= AbsoluteTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x140,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NewestAvailableTick->NextTick = this->CurrentTick;
  }
  this->NewestAvailableTick = this->CurrentTick;
  this->CurrentTick = (FTick *)0x0;
  return;
}

// Game_EndTick @ 145706f70

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Game_EndTick
          (TStateStream<FStaticMeshStateStreamSettings> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick == (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrentTick->Time = param_1;
  this->CurrentTick->PrevTick = this->NewestAvailableTick;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    this->OldestAvailableTick = this->CurrentTick;
  }
  else {
    if (param_1 < this->NewestAvailableTick->Time) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewestAvailableTick->Time <= AbsoluteTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x140,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->NewestAvailableTick->NextTick = this->CurrentTick;
  }
  this->NewestAvailableTick = this->CurrentTick;
  this->CurrentTick = (FTick *)0x0;
  return;
}

// Game_Exit @ 145707060

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Game_Exit
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick != (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x14f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Game_Exit @ 1457070a0

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Game_Exit
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick != (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x14f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Game_Exit @ 1457070e0

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Game_Exit
          (TStateStream<FSkinnedMeshStateStreamSettings> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick != (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x14f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Game_Exit @ 145707120

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Game_Exit
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick != (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x14f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Game_Exit @ 145707160

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Game_Exit
          (TStateStream<FStaticMeshStateStreamSettings> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentTick != (FTick *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x14f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Game_GetVoidPointer @ 1457071a0

void * __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Game_GetVoidPointer
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  if (this == (TStateStream<FExponentialHeightFogStateStreamSettings> *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  return plVar1;
}

// Game_GetVoidPointer @ 1457071c0

void * __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Game_GetVoidPointer
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  if (this == (TStateStream<FParticleSystemStateStreamSettingsCascade> *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  return plVar1;
}

// Game_GetVoidPointer @ 1457071e0

void * __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Game_GetVoidPointer
          (TStateStream<FSkinnedMeshStateStreamSettings> *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  if (this == (TStateStream<FSkinnedMeshStateStreamSettings> *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  return plVar1;
}

// Game_GetVoidPointer @ 145707200

void * __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Game_GetVoidPointer
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  if (this == (TStateStream<FSkyAtmosphereStateStreamSettings> *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  return plVar1;
}

// Game_GetVoidPointer @ 145707220

void * __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Game_GetVoidPointer
          (TStateStream<FStaticMeshStateStreamSettings> *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  if (this == (TStateStream<FStaticMeshStateStreamSettings> *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  return plVar1;
}

// Game_Release @ 145707240

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Game_Release
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FInstance *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar8 = param_1 - 1;
  pFVar7 = FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
                           *)&this->_padding_,uVar8);
  if (pFVar7->RefCount == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = &pFVar7->RefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    pFVar7->DeleteTick = *(uint *)(*(longlong *)&(this->Instances).FirstFreeIndex + 0x48);
    AcquireSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    lVar2 = *(longlong *)&(this->Instances).FirstFreeIndex;
    if (((int)uVar8 < 0) || (*(int *)(lVar2 + 0x28) <= (int)uVar8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar9 = *(longlong *)(lVar2 + 0x20);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      lVar9 = lVar2 + 0x10;
    }
    puVar1 = (uint *)(lVar9 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
    plVar3 = *(longlong **)&(this->Instances).FirstFreeIndex;
    uVar6 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = *(uint *)(*plVar3 + (longlong)(int)uVar8 * 4);
    ReleaseSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::operator[]
              ((FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216> *)
               &this->NewestAvailableTick,uVar8);
  }
  return;
}

// Game_Release @ 145707400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Game_Release
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FInstance *pFVar7;
  FParticleSystemDynamicState *pFVar8;
  uint uVar9;
  longlong lVar10;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar9 = param_1 - 1;
  pFVar7 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
                           *)&this->_padding_,uVar9);
  if (pFVar7->RefCount == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = &pFVar7->RefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    pFVar7->DeleteTick = *(uint *)(*(longlong *)&(this->Instances).FirstFreeIndex + 0x48);
    AcquireSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    lVar2 = *(longlong *)&(this->Instances).FirstFreeIndex;
    if (((int)uVar9 < 0) || (*(int *)(lVar2 + 0x28) <= (int)uVar9)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar10 = *(longlong *)(lVar2 + 0x20);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      lVar10 = lVar2 + 0x10;
    }
    puVar1 = (uint *)(lVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
    plVar3 = *(longlong **)&(this->Instances).FirstFreeIndex;
    uVar6 = 0;
    if ((int)uVar9 < (int)plVar3[1]) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar9 = *(uint *)(*plVar3 + (longlong)(int)uVar9 * 4);
    ReleaseSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    pFVar8 = FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[]
                       ((FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216> *)
                        &this->NewestAvailableTick,uVar9);
    FStateStreamHandle::MakeInternal((FStateStreamHandle *)&pFVar8->Transform);
  }
  return;
}

// Game_Release @ 1457075d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Game_Release
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FInstance *pFVar7;
  FSkinnedMeshDynamicState *pFVar8;
  uint uVar9;
  longlong lVar10;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar9 = param_1 - 1;
  pFVar7 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>::
           GetElementAt((FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
                         *)&this->_padding_,uVar9);
  if (pFVar7->RefCount == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = &pFVar7->RefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    pFVar7->DeleteTick = *(uint *)(*(longlong *)&(this->Instances).FirstFreeIndex + 0x48);
    AcquireSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    lVar2 = *(longlong *)&(this->Instances).FirstFreeIndex;
    if (((int)uVar9 < 0) || (*(int *)(lVar2 + 0x28) <= (int)uVar9)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar10 = *(longlong *)(lVar2 + 0x20);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      lVar10 = lVar2 + 0x10;
    }
    puVar1 = (uint *)(lVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
    plVar3 = *(longlong **)&(this->Instances).FirstFreeIndex;
    uVar6 = 0;
    if ((int)uVar9 < (int)plVar3[1]) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar9 = *(uint *)(*plVar3 + (longlong)(int)uVar9 * 4);
    ReleaseSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    pFVar8 = FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[]
                       ((FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216> *)
                        &this->NewestAvailableTick,uVar9);
    FStateStreamHandle::MakeInternal((FStateStreamHandle *)&pFVar8->Transform);
  }
  return;
}

// Game_Release @ 1457077a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Game_Release
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FInstance *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar8 = param_1 - 1;
  pFVar7 = FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
                           *)&this->_padding_,uVar8);
  if (pFVar7->RefCount == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = &pFVar7->RefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    pFVar7->DeleteTick = *(uint *)(*(longlong *)&(this->Instances).FirstFreeIndex + 0x48);
    AcquireSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    lVar2 = *(longlong *)&(this->Instances).FirstFreeIndex;
    if (((int)uVar8 < 0) || (*(int *)(lVar2 + 0x28) <= (int)uVar8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar9 = *(longlong *)(lVar2 + 0x20);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      lVar9 = lVar2 + 0x10;
    }
    puVar1 = (uint *)(lVar9 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
    plVar3 = *(longlong **)&(this->Instances).FirstFreeIndex;
    uVar6 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = *(uint *)(*plVar3 + (longlong)(int)uVar8 * 4);
    ReleaseSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[]
              ((FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216> *)
               &this->NewestAvailableTick,uVar8);
  }
  return;
}

// Game_Release @ 145707960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Game_Release
          (TStateStream<FStaticMeshStateStreamSettings> *this,uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FInstance *pFVar7;
  FStaticMeshDynamicState *pFVar8;
  uint uVar9;
  longlong lVar10;
  
  if (*(longlong *)&(this->Instances).FirstFreeIndex == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentTick",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xbf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar9 = param_1 - 1;
  pFVar7 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>::
           GetElementAt((FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
                         *)&this->_padding_,uVar9);
  if (pFVar7->RefCount == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance.RefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = &pFVar7->RefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    pFVar7->DeleteTick = *(uint *)(*(longlong *)&(this->Instances).FirstFreeIndex + 0x48);
    AcquireSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    lVar2 = *(longlong *)&(this->Instances).FirstFreeIndex;
    if (((int)uVar9 < 0) || (*(int *)(lVar2 + 0x28) <= (int)uVar9)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar10 = *(longlong *)(lVar2 + 0x20);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      lVar10 = lVar2 + 0x10;
    }
    puVar1 = (uint *)(lVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
    plVar3 = *(longlong **)&(this->Instances).FirstFreeIndex;
    uVar6 = 0;
    if ((int)uVar9 < (int)plVar3[1]) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar9 = *(uint *)(*plVar3 + (longlong)(int)uVar9 * 4);
    ReleaseSRWLockShared((PSRWLOCK)((this->Instances).Array.Buckets + 0x14));
    pFVar8 = FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[]
                       ((FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216> *)
                        &this->NewestAvailableTick,uVar9);
    FStateStreamHandle::MakeInternal((FStateStreamHandle *)&pFVar8->Transform);
  }
  return;
}

// Game_Update @ 145707b30

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Game_Update
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,uint param_1,void *param_2,
          double param_3,ulong64 param_4)

{
  FExponentialHeightFogDynamicState *this_00;
  FStateStreamCopyContext local_res8 [8];
  
  this_00 = Edit((TStateStream<FExponentialHeightFogStateStreamSettings> *)
                 &this[-1].DeferredDestroys,param_1,param_3);
  FExponentialHeightFogDynamicState::Apply(this_00,local_res8,param_2);
  return;
}

// Game_Update @ 145707b60

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Game_Update
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,uint param_1,void *param_2,
          double param_3,ulong64 param_4)

{
  UFXSystemAsset *pUVar1;
  bool bVar2;
  FParticleSystemDynamicState *pFVar3;
  FStateStreamCopyContext local_res8 [2];
  
  pFVar3 = Edit((TStateStream<FParticleSystemStateStreamSettingsCascade> *)
                &this[-1].DeferredDestroys,param_1,param_3);
  local_res8[0].IsInternal = 0;
  if (((*(byte *)param_2 & 1) != 0) &&
     (bVar2 = FStateStreamHandle::operator==
                        ((FStateStreamHandle *)&pFVar3->Transform,
                         (FStateStreamHandle *)((longlong)param_2 + 8)), !bVar2)) {
    FStateStreamHandle::Apply
              ((FStateStreamHandle *)&pFVar3->Transform,local_res8,
               (FStateStreamHandle *)((longlong)param_2 + 8));
    pFVar3->ModifiedFlags = pFVar3->ModifiedFlags | 1;
  }
  if (((*(byte *)param_2 & 2) != 0) &&
     (pUVar1 = *(UFXSystemAsset **)((longlong)param_2 + 0x18),
     (pFVar3->SystemAsset).field0_0x0.DebugPtr != pUVar1)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UFXSystemAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (pFVar3->SystemAsset).field0_0x0 = *(TObjectPtr<UFXSystemAsset>_u_0 *)((longlong)param_2 + 0x18)
    ;
    pFVar3->ModifiedFlags = pFVar3->ModifiedFlags | 2;
  }
  return;
}

// Game_Update @ 145707c10

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Game_Update
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,uint param_1,void *param_2,
          double param_3,ulong64 param_4)

{
  FSkinnedMeshDynamicState *this_00;
  FStateStreamCopyContext local_res8 [8];
  
  this_00 = Edit((TStateStream<FSkinnedMeshStateStreamSettings> *)&this[-1].DeferredDestroys,param_1
                 ,param_3);
  local_res8[0].IsInternal = 0;
  FSkinnedMeshDynamicState::Apply(this_00,local_res8,param_2);
  return;
}

// Game_Update @ 145707c50

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Game_Update
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,uint param_1,void *param_2,
          double param_3,ulong64 param_4)

{
  FSkyAtmosphereDynamicState *this_00;
  FStateStreamCopyContext local_res8 [8];
  
  this_00 = Edit((TStateStream<FSkyAtmosphereStateStreamSettings> *)&this[-1].DeferredDestroys,
                 param_1,param_3);
  FSkyAtmosphereDynamicState::Apply(this_00,local_res8,param_2);
  return;
}

// Game_Update @ 145707c80

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Game_Update
          (TStateStream<FStaticMeshStateStreamSettings> *this,uint param_1,void *param_2,
          double param_3,ulong64 param_4)

{
  FStaticMeshDynamicState *this_00;
  FStateStreamCopyContext local_res8 [8];
  
  this_00 = Edit((TStateStream<FStaticMeshStateStreamSettings> *)&this[-1].DeferredDestroys,param_1,
                 param_3);
  local_res8[0].IsInternal = 0;
  FStaticMeshDynamicState::Apply(this_00,local_res8,param_2);
  return;
}

// GetDebugName @ 145708fc0

wchar_t * __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::GetDebugName
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this)

{
  return L"ExponentialHeightFog";
}

// GetDebugName @ 145708fd0

wchar_t * __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::GetDebugName
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this)

{
  return L"ParticleSystem(Cascade)";
}

// GetDebugName @ 145708fe0

wchar_t * __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::GetDebugName
          (TStateStream<FSkinnedMeshStateStreamSettings> *this)

{
  return L"SkinnedMesh";
}

// GetDebugName @ 145708ff0

wchar_t * __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::GetDebugName
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this)

{
  return L"SkyAtmosphere";
}

// GetDebugName @ 145709000

wchar_t * __thiscall
TStateStream<FStaticMeshStateStreamSettings>::GetDebugName
          (TStateStream<FStaticMeshStateStreamSettings> *this)

{
  return L"StaticMesh";
}

// GetId @ 145709e80

uint __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::GetId
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this)

{
  return 7;
}

// GetId @ 145709e90

uint __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::GetId
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this)

{
  return 5;
}

// GetId @ 145709ea0

uint __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::GetId
          (TStateStream<FSkinnedMeshStateStreamSettings> *this)

{
  return 3;
}

// GetId @ 145709eb0

uint __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::GetId
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this)

{
  return 6;
}

// GetId @ 145709ec0

uint __thiscall
TStateStream<FStaticMeshStateStreamSettings>::GetId
          (TStateStream<FStaticMeshStateStreamSettings> *this)

{
  return 2;
}

// Render_Exit @ 14571ab60

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Render_Exit
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this)

{
  if (this->NewestAvailableTick != (FTick *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014571ab75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))(this,__real_7fefffffffffffff);
    return;
  }
  return;
}

// Render_Exit @ 14571ab80

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Render_Exit
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this)

{
  if (this->NewestAvailableTick != (FTick *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014571ab95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))(this,__real_7fefffffffffffff);
    return;
  }
  return;
}

// Render_Exit @ 14571aba0

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Render_Exit
          (TStateStream<FSkinnedMeshStateStreamSettings> *this)

{
  if (this->NewestAvailableTick != (FTick *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014571abb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))(this,__real_7fefffffffffffff);
    return;
  }
  return;
}

// Render_Exit @ 14571abc0

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Render_Exit
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this)

{
  if (this->NewestAvailableTick != (FTick *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014571abd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))(this,__real_7fefffffffffffff);
    return;
  }
  return;
}

// Render_Exit @ 14571abe0

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Render_Exit
          (TStateStream<FStaticMeshStateStreamSettings> *this)

{
  if (this->NewestAvailableTick != (FTick *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014571abf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x20))(this,__real_7fefffffffffffff);
    return;
  }
  return;
}

// Render_GarbageCollect @ 14571ac00

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Render_GarbageCollect
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this)

{
  ulonglong uVar1;
  int iVar2;
  FTick *pFVar3;
  FTick *pFVar4;
  ForElementType<unsigned_int> FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FInstance *pFVar12;
  FExponentialHeightFogDynamicState *pFVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  FTick *local_68;
  
  pFVar3 = this->OldestAvailableTick;
  if (pFVar3 != (FTick *)0x0) {
    local_68 = this->RendTick;
    if (((local_68 != (FTick *)0x0) && (this->RendTime != local_68->Time)) &&
       (local_68->PrevTick != (FTick *)0x0)) {
      local_68 = local_68->PrevTick;
    }
    while (pFVar3 != local_68) {
      pFVar4 = pFVar3->NextTick;
      if ((pFVar4 == (FTick *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                             ,0x1cf,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar2 = (pFVar4->ModifiedInstances).NumBits;
      iVar17 = 0;
      iVar16 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar5;
        }
        uVar9 = *(uint *)FVar18;
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar17;
          iVar16 = iVar16 + 0x20;
          iVar17 = iVar17 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14571aefd;
          uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar15 = (int)lVar14 + -1 + iVar16;
        if ((int)uVar15 < iVar2) {
          uVar19 = 0xffffffff;
          do {
            if (((uVar15 < (uint)(pFVar3->DynamicStates).ArrayNum) &&
                (pFVar12 = FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
                           ::GetElementAt(&(this->Instances).Array,uVar15),
                pFVar12->DeleteTick != pFVar3->Index)) && (pFVar12->CreateTick != pFVar4->Index)) {
              uVar10 = 0;
              if ((int)uVar15 < (pFVar3->DynamicStates).ArrayNum) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar15 * 4);
              uVar11 = 0;
              if ((int)uVar15 < (pFVar4->DynamicStates).ArrayNum) {
                uVar11 = ~uVar15 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (uVar10 != *(uint *)((pFVar4->DynamicStates).AllocatorInstance.Data +
                                     (longlong)(int)uVar15 * 4)) {
                pFVar13 = FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::
                          operator[](&(this->DynamicStates).Array,uVar10);
                AcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
                pFVar13->ModifiedFlags = (this->DynamicStates).FirstFreeIndex;
                (this->DynamicStates).FirstFreeIndex = uVar10;
                ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              }
            }
            FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar4->ModifiedInstances).NumBits;
            uVar19 = ~uVar9 & uVar19;
            FVar18 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar5;
            }
            uVar9 = uVar19 & *(uint *)((longlong)FVar18 + (longlong)iVar17 * 4);
            while (uVar9 == 0) {
              lVar14 = (longlong)iVar17;
              iVar16 = iVar16 + 0x20;
              iVar17 = iVar17 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_14571aefd;
              uVar19 = 0xffffffff;
              uVar9 = *(uint *)((longlong)FVar18 + 4 + lVar14 * 4);
            }
            uVar9 = -uVar9 & uVar9;
            uVar1 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar15 = (int)lVar14 + -1 + iVar16;
          } while (((int)uVar15 <= iVar2) && ((int)uVar15 < iVar2));
        }
      }
LAB_14571aefd:
      iVar2 = (pFVar3->ModifiedInstances).NumBits;
      iVar17 = 0;
      iVar16 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar5;
        }
        uVar9 = *(uint *)FVar18;
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar17;
          iVar16 = iVar16 + 0x20;
          iVar17 = iVar17 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14571b136;
          uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar15 = (int)lVar14 + -1 + iVar16;
        if ((int)uVar15 < iVar2) {
          uVar19 = 0xffffffff;
          do {
            pFVar12 = FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
                      ::GetElementAt(&(this->Instances).Array,uVar15);
            if (pFVar12->DeleteTick == pFVar3->Index) {
              uVar10 = 0;
              if ((int)uVar15 < (pFVar3->DynamicStates).ArrayNum) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar15 * 4);
              pFVar13 = FPow2ChunkedArray<FExponentialHeightFogDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,uVar10);
              AcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              pFVar13->ModifiedFlags = (this->DynamicStates).FirstFreeIndex;
              (this->DynamicStates).FirstFreeIndex = uVar10;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              if ((pFVar12->RendDynamicState).bIsSet != false) {
                (pFVar12->RendDynamicState).bIsSet = false;
              }
              pFVar12 = FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
                        ::GetElementAt(&(this->Instances).Array,uVar15);
              AcquireSRWLockExclusive((PSRWLOCK)&this->Instances);
              (pFVar12->StaticState).ModifiedFlags = (this->Instances).FirstFreeIndex;
              (this->Instances).FirstFreeIndex = uVar15;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->Instances);
            }
            FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar3->ModifiedInstances).NumBits;
            uVar19 = ~uVar9 & uVar19;
            FVar18 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar5;
            }
            uVar9 = uVar19 & *(uint *)((longlong)FVar18 + (longlong)iVar17 * 4);
            while (uVar9 == 0) {
              lVar14 = (longlong)iVar17;
              iVar16 = iVar16 + 0x20;
              iVar17 = iVar17 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_14571b136;
              uVar19 = 0xffffffff;
              uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
            }
            uVar9 = -uVar9 & uVar9;
            uVar1 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar15 = (int)lVar14 + -1 + iVar16;
          } while (((int)uVar15 <= iVar2) && ((int)uVar15 < iVar2));
        }
      }
LAB_14571b136:
      FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      pFVar6 = (pFVar3->DynamicStates).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar3,0x50);
      pFVar3 = pFVar4;
    }
    this->OldestAvailableTick = pFVar3;
  }
  return;
}

// Render_GarbageCollect @ 14571b1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Render_GarbageCollect
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this)

{
  ulonglong uVar1;
  int iVar2;
  FTick *pFVar3;
  FTick *pFVar4;
  ForElementType<unsigned_int> FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FInstance *pFVar12;
  FParticleSystemDynamicState *pFVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  FTick *local_68;
  
  pFVar3 = this->OldestAvailableTick;
  if (pFVar3 != (FTick *)0x0) {
    local_68 = this->RendTick;
    if (((local_68 != (FTick *)0x0) && (this->RendTime != local_68->Time)) &&
       (local_68->PrevTick != (FTick *)0x0)) {
      local_68 = local_68->PrevTick;
    }
    while (pFVar3 != local_68) {
      pFVar4 = pFVar3->NextTick;
      if ((pFVar4 == (FTick *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                             ,0x1cf,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar2 = (pFVar4->ModifiedInstances).NumBits;
      iVar17 = 0;
      iVar16 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar5;
        }
        uVar9 = *(uint *)FVar18;
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar17;
          iVar16 = iVar16 + 0x20;
          iVar17 = iVar17 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14571b4c9;
          uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar15 = (int)lVar14 + -1 + iVar16;
        if ((int)uVar15 < iVar2) {
          uVar19 = 0xffffffff;
          do {
            if (((uVar15 < (uint)(pFVar3->DynamicStates).ArrayNum) &&
                (pFVar12 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
                           ::GetElementAt(&(this->Instances).Array,uVar15),
                pFVar12->DeleteTick != pFVar3->Index)) && (pFVar12->CreateTick != pFVar4->Index)) {
              uVar10 = 0;
              if ((int)uVar15 < (pFVar3->DynamicStates).ArrayNum) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar15 * 4);
              uVar11 = 0;
              if ((int)uVar15 < (pFVar4->DynamicStates).ArrayNum) {
                uVar11 = ~uVar15 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (uVar10 != *(uint *)((pFVar4->DynamicStates).AllocatorInstance.Data +
                                     (longlong)(int)uVar15 * 4)) {
                pFVar13 = FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[]
                                    (&(this->DynamicStates).Array,uVar10);
                FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)&pFVar13->Transform);
                AcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
                pFVar13->ModifiedFlags = (this->DynamicStates).FirstFreeIndex;
                (this->DynamicStates).FirstFreeIndex = uVar10;
                ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              }
            }
            FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar4->ModifiedInstances).NumBits;
            uVar19 = ~uVar9 & uVar19;
            FVar18 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar5;
            }
            uVar9 = uVar19 & *(uint *)((longlong)FVar18 + (longlong)iVar17 * 4);
            while (uVar9 == 0) {
              lVar14 = (longlong)iVar17;
              iVar16 = iVar16 + 0x20;
              iVar17 = iVar17 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_14571b4c9;
              uVar19 = 0xffffffff;
              uVar9 = *(uint *)((longlong)FVar18 + 4 + lVar14 * 4);
            }
            uVar9 = -uVar9 & uVar9;
            uVar1 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar15 = (int)lVar14 + -1 + iVar16;
          } while (((int)uVar15 <= iVar2) && ((int)uVar15 < iVar2));
        }
      }
LAB_14571b4c9:
      iVar2 = (pFVar3->ModifiedInstances).NumBits;
      iVar17 = 0;
      iVar16 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar5;
        }
        uVar9 = *(uint *)FVar18;
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar17;
          iVar16 = iVar16 + 0x20;
          iVar17 = iVar17 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14571b726;
          uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar15 = (int)lVar14 + -1 + iVar16;
        if ((int)uVar15 < iVar2) {
          uVar19 = 0xffffffff;
          do {
            pFVar12 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
                      ::GetElementAt(&(this->Instances).Array,uVar15);
            if (pFVar12->DeleteTick == pFVar3->Index) {
              uVar10 = 0;
              if ((int)uVar15 < (pFVar3->DynamicStates).ArrayNum) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar15 * 4);
              pFVar13 = FPow2ChunkedArray<FParticleSystemDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,uVar10);
              FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)&pFVar13->Transform);
              AcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              pFVar13->ModifiedFlags = (this->DynamicStates).FirstFreeIndex;
              (this->DynamicStates).FirstFreeIndex = uVar10;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              if ((pFVar12->RendDynamicState).bIsSet != false) {
                FStateStreamHandle::~FStateStreamHandle
                          ((FStateStreamHandle *)&(pFVar12->RendDynamicState).TypedValue.Transform);
                (pFVar12->RendDynamicState).bIsSet = false;
              }
              pFVar12 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
                        ::GetElementAt(&(this->Instances).Array,uVar15);
              if ((pFVar12->RendDynamicState).bIsSet != false) {
                FStateStreamHandle::~FStateStreamHandle
                          ((FStateStreamHandle *)&(pFVar12->RendDynamicState).TypedValue.Transform);
              }
              AcquireSRWLockExclusive((PSRWLOCK)&this->Instances);
              (pFVar12->StaticState).ModifiedFlags = (this->Instances).FirstFreeIndex;
              (this->Instances).FirstFreeIndex = uVar15;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->Instances);
            }
            FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar3->ModifiedInstances).NumBits;
            uVar19 = ~uVar9 & uVar19;
            FVar18 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar5;
            }
            uVar9 = uVar19 & *(uint *)((longlong)FVar18 + (longlong)iVar17 * 4);
            while (uVar9 == 0) {
              lVar14 = (longlong)iVar17;
              iVar16 = iVar16 + 0x20;
              iVar17 = iVar17 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_14571b726;
              uVar19 = 0xffffffff;
              uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
            }
            uVar9 = -uVar9 & uVar9;
            uVar1 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar15 = (int)lVar14 + -1 + iVar16;
          } while (((int)uVar15 <= iVar2) && ((int)uVar15 < iVar2));
        }
      }
LAB_14571b726:
      FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      pFVar6 = (pFVar3->DynamicStates).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar3,0x50);
      pFVar3 = pFVar4;
    }
    this->OldestAvailableTick = pFVar3;
  }
  return;
}

// Render_GarbageCollect @ 14571b7b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Render_GarbageCollect
          (TStateStream<FSkinnedMeshStateStreamSettings> *this)

{
  ulonglong uVar1;
  int iVar2;
  FTick *pFVar3;
  FTick *pFVar4;
  ForElementType<unsigned_int> FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FInstance *pFVar12;
  FSkinnedMeshDynamicState *pFVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  FTick *local_68;
  
  pFVar3 = this->OldestAvailableTick;
  if (pFVar3 != (FTick *)0x0) {
    local_68 = this->RendTick;
    if (((local_68 != (FTick *)0x0) && (this->RendTime != local_68->Time)) &&
       (local_68->PrevTick != (FTick *)0x0)) {
      local_68 = local_68->PrevTick;
    }
    while (pFVar3 != local_68) {
      pFVar4 = pFVar3->NextTick;
      if ((pFVar4 == (FTick *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                             ,0x1cf,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar2 = (pFVar4->ModifiedInstances).NumBits;
      iVar15 = 0;
      iVar17 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar5;
        }
        uVar9 = *(uint *)FVar18;
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar15;
          iVar17 = iVar17 + 0x20;
          iVar15 = iVar15 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14571baba;
          uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar16 = (int)lVar14 + -1 + iVar17;
        if ((int)uVar16 < iVar2) {
          uVar19 = 0xffffffff;
          do {
            if (((uVar16 < (uint)(pFVar3->DynamicStates).ArrayNum) &&
                (pFVar12 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
                           ::GetElementAt(&(this->Instances).Array,uVar16),
                pFVar12->DeleteTick != pFVar3->Index)) && (pFVar12->CreateTick != pFVar4->Index)) {
              uVar10 = 0;
              if ((int)uVar16 < (pFVar3->DynamicStates).ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar16 * 4);
              uVar11 = 0;
              if ((int)uVar16 < (pFVar4->DynamicStates).ArrayNum) {
                uVar11 = ~uVar16 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (uVar10 != *(uint *)((pFVar4->DynamicStates).AllocatorInstance.Data +
                                     (longlong)(int)uVar16 * 4)) {
                pFVar13 = FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[]
                                    (&(this->DynamicStates).Array,uVar10);
                pFVar6 = (pFVar13->OverrideMaterials).AllocatorInstance.Data;
                if (pFVar6 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar6);
                }
                FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)&pFVar13->Transform);
                AcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
                pFVar13->ModifiedFlags = (this->DynamicStates).FirstFreeIndex;
                (this->DynamicStates).FirstFreeIndex = uVar10;
                ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              }
            }
            FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar4->ModifiedInstances).NumBits;
            uVar19 = ~uVar9 & uVar19;
            FVar18 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar5;
            }
            uVar9 = uVar19 & *(uint *)((longlong)FVar18 + (longlong)iVar15 * 4);
            while (uVar9 == 0) {
              lVar14 = (longlong)iVar15;
              iVar17 = iVar17 + 0x20;
              iVar15 = iVar15 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_14571baba;
              uVar19 = 0xffffffff;
              uVar9 = *(uint *)((longlong)FVar18 + 4 + lVar14 * 4);
            }
            uVar9 = -uVar9 & uVar9;
            uVar1 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar16 = (int)lVar14 + -1 + iVar17;
          } while (((int)uVar16 <= iVar2) && ((int)uVar16 < iVar2));
        }
      }
LAB_14571baba:
      iVar2 = (pFVar3->ModifiedInstances).NumBits;
      iVar15 = 0;
      iVar17 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar5;
        }
        uVar9 = *(uint *)FVar18;
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar15;
          iVar17 = iVar17 + 0x20;
          iVar15 = iVar15 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14571bd45;
          uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar16 = (int)lVar14 + -1 + iVar17;
        if ((int)uVar16 < iVar2) {
          uVar19 = 0xffffffff;
          do {
            pFVar12 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
                      ::GetElementAt(&(this->Instances).Array,uVar16);
            if (pFVar12->DeleteTick == pFVar3->Index) {
              uVar10 = 0;
              if ((int)uVar16 < (pFVar3->DynamicStates).ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar16 * 4);
              pFVar13 = FPow2ChunkedArray<FSkinnedMeshDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,uVar10);
              pFVar6 = (pFVar13->OverrideMaterials).AllocatorInstance.Data;
              if (pFVar6 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar6);
              }
              FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)&pFVar13->Transform);
              AcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              pFVar13->ModifiedFlags = (this->DynamicStates).FirstFreeIndex;
              (this->DynamicStates).FirstFreeIndex = uVar10;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              if ((pFVar12->RendDynamicState).bIsSet != false) {
                pFVar6 = (pFVar12->RendDynamicState).TypedValue.OverrideMaterials.AllocatorInstance.
                         Data;
                if (pFVar6 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar6);
                }
                FStateStreamHandle::~FStateStreamHandle
                          ((FStateStreamHandle *)&(pFVar12->RendDynamicState).TypedValue.Transform);
                (pFVar12->RendDynamicState).bIsSet = false;
              }
              pFVar12 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
                        ::GetElementAt(&(this->Instances).Array,uVar16);
              if ((pFVar12->RendDynamicState).bIsSet != false) {
                pFVar6 = (pFVar12->RendDynamicState).TypedValue.OverrideMaterials.AllocatorInstance.
                         Data;
                if (pFVar6 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar6);
                }
                FStateStreamHandle::~FStateStreamHandle
                          ((FStateStreamHandle *)&(pFVar12->RendDynamicState).TypedValue.Transform);
              }
              AcquireSRWLockExclusive((PSRWLOCK)&this->Instances);
              (pFVar12->StaticState).ModifiedFlags = (this->Instances).FirstFreeIndex;
              (this->Instances).FirstFreeIndex = uVar16;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->Instances);
            }
            FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar3->ModifiedInstances).NumBits;
            uVar19 = ~uVar9 & uVar19;
            FVar18 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar5;
            }
            uVar9 = uVar19 & *(uint *)((longlong)FVar18 + (longlong)iVar15 * 4);
            while (uVar9 == 0) {
              lVar14 = (longlong)iVar15;
              iVar17 = iVar17 + 0x20;
              iVar15 = iVar15 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_14571bd45;
              uVar19 = 0xffffffff;
              uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
            }
            uVar9 = -uVar9 & uVar9;
            uVar1 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar16 = (int)lVar14 + -1 + iVar17;
          } while (((int)uVar16 <= iVar2) && ((int)uVar16 < iVar2));
        }
      }
LAB_14571bd45:
      FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      pFVar6 = (pFVar3->DynamicStates).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar3,0x50);
      pFVar3 = pFVar4;
    }
    this->OldestAvailableTick = pFVar3;
  }
  return;
}

// Render_GarbageCollect @ 14571bdd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Render_GarbageCollect
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this)

{
  ulonglong uVar1;
  int iVar2;
  FTick *pFVar3;
  FTick *pFVar4;
  ForElementType<unsigned_int> FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FInstance *pFVar12;
  FSkyAtmosphereDynamicState *pFVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  FTick *local_68;
  
  pFVar3 = this->OldestAvailableTick;
  if (pFVar3 != (FTick *)0x0) {
    local_68 = this->RendTick;
    if (((local_68 != (FTick *)0x0) && (this->RendTime != local_68->Time)) &&
       (local_68->PrevTick != (FTick *)0x0)) {
      local_68 = local_68->PrevTick;
    }
    while (pFVar3 != local_68) {
      pFVar4 = pFVar3->NextTick;
      if ((pFVar4 == (FTick *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                             ,0x1cf,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar2 = (pFVar4->ModifiedInstances).NumBits;
      iVar17 = 0;
      iVar16 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar5;
        }
        uVar9 = *(uint *)FVar18;
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar17;
          iVar16 = iVar16 + 0x20;
          iVar17 = iVar17 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14571c0cd;
          uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar15 = (int)lVar14 + -1 + iVar16;
        if ((int)uVar15 < iVar2) {
          uVar19 = 0xffffffff;
          do {
            if (((uVar15 < (uint)(pFVar3->DynamicStates).ArrayNum) &&
                (pFVar12 = FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
                           ::GetElementAt(&(this->Instances).Array,uVar15),
                pFVar12->DeleteTick != pFVar3->Index)) && (pFVar12->CreateTick != pFVar4->Index)) {
              uVar10 = 0;
              if ((int)uVar15 < (pFVar3->DynamicStates).ArrayNum) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar15 * 4);
              uVar11 = 0;
              if ((int)uVar15 < (pFVar4->DynamicStates).ArrayNum) {
                uVar11 = ~uVar15 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (uVar10 != *(uint *)((pFVar4->DynamicStates).AllocatorInstance.Data +
                                     (longlong)(int)uVar15 * 4)) {
                pFVar13 = FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[]
                                    (&(this->DynamicStates).Array,uVar10);
                AcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
                pFVar13->ModifiedFlags = (this->DynamicStates).FirstFreeIndex;
                (this->DynamicStates).FirstFreeIndex = uVar10;
                ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              }
            }
            FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar4->ModifiedInstances).NumBits;
            uVar19 = ~uVar9 & uVar19;
            FVar18 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar5;
            }
            uVar9 = uVar19 & *(uint *)((longlong)FVar18 + (longlong)iVar17 * 4);
            while (uVar9 == 0) {
              lVar14 = (longlong)iVar17;
              iVar16 = iVar16 + 0x20;
              iVar17 = iVar17 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_14571c0cd;
              uVar19 = 0xffffffff;
              uVar9 = *(uint *)((longlong)FVar18 + 4 + lVar14 * 4);
            }
            uVar9 = -uVar9 & uVar9;
            uVar1 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar15 = (int)lVar14 + -1 + iVar16;
          } while (((int)uVar15 <= iVar2) && ((int)uVar15 < iVar2));
        }
      }
LAB_14571c0cd:
      iVar2 = (pFVar3->ModifiedInstances).NumBits;
      iVar17 = 0;
      iVar16 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar5;
        }
        uVar9 = *(uint *)FVar18;
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar17;
          iVar16 = iVar16 + 0x20;
          iVar17 = iVar17 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14571c306;
          uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar15 = (int)lVar14 + -1 + iVar16;
        if ((int)uVar15 < iVar2) {
          uVar19 = 0xffffffff;
          do {
            pFVar12 = FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
                      ::GetElementAt(&(this->Instances).Array,uVar15);
            if (pFVar12->DeleteTick == pFVar3->Index) {
              uVar10 = 0;
              if ((int)uVar15 < (pFVar3->DynamicStates).ArrayNum) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar15 * 4);
              pFVar13 = FPow2ChunkedArray<FSkyAtmosphereDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,uVar10);
              AcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              pFVar13->ModifiedFlags = (this->DynamicStates).FirstFreeIndex;
              (this->DynamicStates).FirstFreeIndex = uVar10;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              if ((pFVar12->RendDynamicState).bIsSet != false) {
                (pFVar12->RendDynamicState).bIsSet = false;
              }
              pFVar12 = FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
                        ::GetElementAt(&(this->Instances).Array,uVar15);
              AcquireSRWLockExclusive((PSRWLOCK)&this->Instances);
              (pFVar12->StaticState).ModifiedFlags = (this->Instances).FirstFreeIndex;
              (this->Instances).FirstFreeIndex = uVar15;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->Instances);
            }
            FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar3->ModifiedInstances).NumBits;
            uVar19 = ~uVar9 & uVar19;
            FVar18 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar5;
            }
            uVar9 = uVar19 & *(uint *)((longlong)FVar18 + (longlong)iVar17 * 4);
            while (uVar9 == 0) {
              lVar14 = (longlong)iVar17;
              iVar16 = iVar16 + 0x20;
              iVar17 = iVar17 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_14571c306;
              uVar19 = 0xffffffff;
              uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
            }
            uVar9 = -uVar9 & uVar9;
            uVar1 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar15 = (int)lVar14 + -1 + iVar16;
          } while (((int)uVar15 <= iVar2) && ((int)uVar15 < iVar2));
        }
      }
LAB_14571c306:
      FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      pFVar6 = (pFVar3->DynamicStates).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar3,0x50);
      pFVar3 = pFVar4;
    }
    this->OldestAvailableTick = pFVar3;
  }
  return;
}

// Render_GarbageCollect @ 14571c390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Render_GarbageCollect
          (TStateStream<FStaticMeshStateStreamSettings> *this)

{
  ulonglong uVar1;
  int iVar2;
  FTick *pFVar3;
  FTick *pFVar4;
  ForElementType<unsigned_int> FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FInstance *pFVar12;
  FStaticMeshDynamicState *pFVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  FTick *local_68;
  
  pFVar3 = this->OldestAvailableTick;
  if (pFVar3 != (FTick *)0x0) {
    local_68 = this->RendTick;
    if (((local_68 != (FTick *)0x0) && (this->RendTime != local_68->Time)) &&
       (local_68->PrevTick != (FTick *)0x0)) {
      local_68 = local_68->PrevTick;
    }
    while (pFVar3 != local_68) {
      pFVar4 = pFVar3->NextTick;
      if ((pFVar4 == (FTick *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                             ,0x1cf,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar2 = (pFVar4->ModifiedInstances).NumBits;
      iVar15 = 0;
      iVar17 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar5;
        }
        uVar9 = *(uint *)FVar18;
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar15;
          iVar17 = iVar17 + 0x20;
          iVar15 = iVar15 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14571c679;
          uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar16 = (int)lVar14 + -1 + iVar17;
        if ((int)uVar16 < iVar2) {
          uVar19 = 0xffffffff;
          do {
            if (((uVar16 < (uint)(pFVar3->DynamicStates).ArrayNum) &&
                (pFVar12 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
                           ::GetElementAt(&(this->Instances).Array,uVar16),
                pFVar12->DeleteTick != pFVar3->Index)) && (pFVar12->CreateTick != pFVar4->Index)) {
              uVar10 = 0;
              if ((int)uVar16 < (pFVar3->DynamicStates).ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar16 * 4);
              uVar11 = 0;
              if ((int)uVar16 < (pFVar4->DynamicStates).ArrayNum) {
                uVar11 = ~uVar16 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (uVar10 != *(uint *)((pFVar4->DynamicStates).AllocatorInstance.Data +
                                     (longlong)(int)uVar16 * 4)) {
                TStateStreamStore<FStaticMeshDynamicState>::Remove(&this->DynamicStates,uVar10);
              }
            }
            FVar5 = (pFVar4->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar4->ModifiedInstances).NumBits;
            uVar19 = ~uVar9 & uVar19;
            FVar18 = (ForElementType<unsigned_int>)&pFVar4->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar5;
            }
            uVar9 = uVar19 & *(uint *)((longlong)FVar18 + (longlong)iVar15 * 4);
            while (uVar9 == 0) {
              lVar14 = (longlong)iVar15;
              iVar17 = iVar17 + 0x20;
              iVar15 = iVar15 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_14571c679;
              uVar19 = 0xffffffff;
              uVar9 = *(uint *)((longlong)FVar18 + 4 + lVar14 * 4);
            }
            uVar9 = -uVar9 & uVar9;
            uVar1 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar16 = (int)lVar14 + -1 + iVar17;
          } while (((int)uVar16 <= iVar2) && ((int)uVar16 < iVar2));
        }
      }
LAB_14571c679:
      iVar2 = (pFVar3->ModifiedInstances).NumBits;
      iVar15 = 0;
      iVar17 = 0;
      if (iVar2 != 0) {
        FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = FVar5;
        }
        uVar9 = *(uint *)FVar18;
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar15;
          iVar17 = iVar17 + 0x20;
          iVar15 = iVar15 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14571c935;
          uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar16 = (int)lVar14 + -1 + iVar17;
        if ((int)uVar16 < iVar2) {
          uVar19 = 0xffffffff;
          do {
            pFVar12 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
                      ::GetElementAt(&(this->Instances).Array,uVar16);
            if (pFVar12->DeleteTick == pFVar3->Index) {
              uVar10 = 0;
              if ((int)uVar16 < (pFVar3->DynamicStates).ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar10 = *(uint *)((pFVar3->DynamicStates).AllocatorInstance.Data +
                                (longlong)(int)uVar16 * 4);
              pFVar13 = FPow2ChunkedArray<FStaticMeshDynamicState,16,16777216>::operator[]
                                  (&(this->DynamicStates).Array,uVar10);
              pFVar6 = (pFVar13->Owners).AllocatorInstance.Data;
              if (pFVar6 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar6);
              }
              pFVar6 = (pFVar13->OverrideMaterials).AllocatorInstance.Data;
              if (pFVar6 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar6);
              }
              FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)&pFVar13->Transform);
              AcquireSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              pFVar13->ModifiedFlags = (this->DynamicStates).FirstFreeIndex;
              (this->DynamicStates).FirstFreeIndex = uVar10;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->DynamicStates);
              if ((pFVar12->RendDynamicState).bIsSet != false) {
                pFVar6 = (pFVar12->RendDynamicState).TypedValue.Owners.AllocatorInstance.Data;
                if (pFVar6 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar6);
                }
                pFVar6 = (pFVar12->RendDynamicState).TypedValue.OverrideMaterials.AllocatorInstance.
                         Data;
                if (pFVar6 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar6);
                }
                FStateStreamHandle::~FStateStreamHandle
                          ((FStateStreamHandle *)&(pFVar12->RendDynamicState).TypedValue.Transform);
                (pFVar12->RendDynamicState).bIsSet = false;
              }
              pFVar12 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
                        ::GetElementAt(&(this->Instances).Array,uVar16);
              if ((pFVar12->RendDynamicState).bIsSet != false) {
                pFVar6 = (pFVar12->RendDynamicState).TypedValue.Owners.AllocatorInstance.Data;
                if (pFVar6 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar6);
                }
                pFVar6 = (pFVar12->RendDynamicState).TypedValue.OverrideMaterials.AllocatorInstance.
                         Data;
                if (pFVar6 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar6);
                }
                FStateStreamHandle::~FStateStreamHandle
                          ((FStateStreamHandle *)&(pFVar12->RendDynamicState).TypedValue.Transform);
              }
              AcquireSRWLockExclusive((PSRWLOCK)&this->Instances);
              (pFVar12->StaticState).ModifiedFlags = (this->Instances).FirstFreeIndex;
              (this->Instances).FirstFreeIndex = uVar16;
              ReleaseSRWLockExclusive((PSRWLOCK)&this->Instances);
            }
            FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
            iVar2 = (pFVar3->ModifiedInstances).NumBits;
            uVar19 = ~uVar9 & uVar19;
            FVar18 = (ForElementType<unsigned_int>)&pFVar3->ModifiedInstances;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar5;
            }
            uVar9 = uVar19 & *(uint *)((longlong)FVar18 + (longlong)iVar15 * 4);
            while (uVar9 == 0) {
              lVar14 = (longlong)iVar15;
              iVar17 = iVar17 + 0x20;
              iVar15 = iVar15 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_14571c935;
              uVar19 = 0xffffffff;
              uVar9 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar14 * 4);
            }
            uVar9 = -uVar9 & uVar9;
            uVar1 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar16 = (int)lVar14 + -1 + iVar17;
          } while (((int)uVar16 <= iVar2) && ((int)uVar16 < iVar2));
        }
      }
LAB_14571c935:
      FVar5 = (pFVar3->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      pFVar6 = (pFVar3->DynamicStates).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      ::operator_delete(pFVar3,0x50);
      pFVar3 = pFVar4;
    }
    this->OldestAvailableTick = pFVar3;
  }
  return;
}

// Render_GetUserData @ 14571c9d0

void * __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Render_GetUserData
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FInstance *pFVar4;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pFVar4 = FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance,16,16777216>
                           *)&this->_padding_,param_1 - 1);
  return pFVar4->UserData;
}

// Render_GetUserData @ 14571ca30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Render_GetUserData
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FInstance *pFVar4;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pFVar4 = FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance,16,16777216>
                           *)&this->_padding_,param_1 - 1);
  return pFVar4->UserData;
}

// Render_GetUserData @ 14571ca90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Render_GetUserData
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FInstance *pFVar4;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pFVar4 = FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>::
           GetElementAt((FPow2ChunkedArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance,16,16777216>
                         *)&this->_padding_,param_1 - 1);
  return pFVar4->UserData;
}

// Render_GetUserData @ 14571caf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Render_GetUserData
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FInstance *pFVar4;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pFVar4 = FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
           ::GetElementAt((FPow2ChunkedArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance,16,16777216>
                           *)&this->_padding_,param_1 - 1);
  return pFVar4->UserData;
}

// Render_GetUserData @ 14571cb50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Render_GetUserData
          (TStateStream<FStaticMeshStateStreamSettings> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FInstance *pFVar4;
  
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HandleId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pFVar4 = FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>::
           GetElementAt((FPow2ChunkedArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance,16,16777216>
                         *)&this->_padding_,param_1 - 1);
  return pFVar4->UserData;
}

// Render_OnCreate @ 14571cbb0

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Render_OnCreate
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,
          FExponentialHeightFogStaticState *param_1,FExponentialHeightFogDynamicState *param_2,
          FExponentialHeightFogSceneProxy **param_3,bool param_4)

{
  return;
}

// Render_OnCreate @ 14571cbc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Render_OnCreate
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,
          FParticleSystemStaticState *param_1,FParticleSystemDynamicState *param_2,
          FParticleSystemObjectCascade **param_3,bool param_4)

{
  return;
}

// Render_OnCreate @ 14571cbd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Render_OnCreate
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,FSkinnedMeshStaticState *param_1,
          FSkinnedMeshDynamicState *param_2,FSkinnedMeshObject **param_3,bool param_4)

{
  return;
}

// Render_OnCreate @ 14571cbe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Render_OnCreate
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,FSkyAtmosphereStaticState *param_1,
          FSkyAtmosphereDynamicState *param_2,FSkyAtmosphereSceneProxy **param_3,bool param_4)

{
  return;
}

// Render_OnCreate @ 14571cbf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Render_OnCreate
          (TStateStream<FStaticMeshStateStreamSettings> *this,FStaticMeshStaticState *param_1,
          FStaticMeshDynamicState *param_2,FStaticMeshObject **param_3,bool param_4)

{
  return;
}

// Render_OnDestroy @ 14571e560

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Render_OnDestroy
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,
          FExponentialHeightFogStaticState *param_1,FExponentialHeightFogDynamicState *param_2,
          FExponentialHeightFogSceneProxy **param_3)

{
  return;
}

// Render_OnDestroy @ 14571e570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Render_OnDestroy
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,
          FParticleSystemStaticState *param_1,FParticleSystemDynamicState *param_2,
          FParticleSystemObjectCascade **param_3)

{
  return;
}

// Render_OnDestroy @ 14571e580

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Render_OnDestroy
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,FSkinnedMeshStaticState *param_1,
          FSkinnedMeshDynamicState *param_2,FSkinnedMeshObject **param_3)

{
  return;
}

// Render_OnDestroy @ 14571e590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Render_OnDestroy
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,FSkyAtmosphereStaticState *param_1,
          FSkyAtmosphereDynamicState *param_2,FSkyAtmosphereSceneProxy **param_3)

{
  return;
}

// Render_OnDestroy @ 14571e5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Render_OnDestroy
          (TStateStream<FStaticMeshStateStreamSettings> *this,FStaticMeshStaticState *param_1,
          FStaticMeshDynamicState *param_2,FStaticMeshObject **param_3)

{
  return;
}

// Render_OnUpdate @ 14571e860

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Render_OnUpdate
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,
          FExponentialHeightFogStaticState *param_1,FExponentialHeightFogDynamicState *param_2,
          FExponentialHeightFogSceneProxy **param_3)

{
  return;
}

// Render_OnUpdate @ 14571e870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Render_OnUpdate
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,
          FParticleSystemStaticState *param_1,FParticleSystemDynamicState *param_2,
          FParticleSystemObjectCascade **param_3)

{
  return;
}

// Render_OnUpdate @ 14571e880

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Render_OnUpdate
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,FSkinnedMeshStaticState *param_1,
          FSkinnedMeshDynamicState *param_2,FSkinnedMeshObject **param_3)

{
  return;
}

// Render_OnUpdate @ 14571e890

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Render_OnUpdate
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,FSkyAtmosphereStaticState *param_1,
          FSkyAtmosphereDynamicState *param_2,FSkyAtmosphereSceneProxy **param_3)

{
  return;
}

// Render_OnUpdate @ 14571e8a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Render_OnUpdate
          (TStateStream<FStaticMeshStateStreamSettings> *this,FStaticMeshStaticState *param_1,
          FStaticMeshDynamicState *param_2,FStaticMeshObject **param_3)

{
  return;
}

// Render_PostUpdate @ 14571e9d0

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Render_PostUpdate
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this)

{
  int *piVar1;
  TArray<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->DeferredDestroys;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  piVar1 = &(this->DeferredDestroys).ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TStateStream<FExponentialHeightFogStateStreamSettings>::FInstance_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    lVar5 = *(longlong *)pFVar9;
    if (*(char *)(lVar5 + 0xd0) == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x70))(this,lVar5,lVar5 + 0x10,lVar5 + 0xd8);
    if (*(char *)(lVar5 + 0xd0) != '\0') {
      *(undefined1 *)(lVar5 + 0xd0) = 0;
    }
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = *piVar1;
  if (iVar4 < 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar4,&pTVar2->AllocatorInstance,piVar1,
                       &(this->DeferredDestroys).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8,0,(longlong)-iVar4 << 3);
    return;
  }
  if (0 < iVar4) {
    *piVar1 = *piVar1 - iVar4;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,*piVar1,&(this->DeferredDestroys).ArrayMax);
  }
  return;
}

// Render_PostUpdate @ 14571eb20

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Render_PostUpdate
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this)

{
  int *piVar1;
  TArray<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->DeferredDestroys;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  piVar1 = &(this->DeferredDestroys).ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TStateStream<FParticleSystemStateStreamSettingsCascade>::FInstance_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    lVar5 = *(longlong *)pFVar9;
    if (*(char *)(lVar5 + 0x30) == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x70))(this,lVar5,lVar5 + 0x10,lVar5 + 0x38);
    if (*(char *)(lVar5 + 0x30) != '\0') {
      FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)(lVar5 + 0x18));
      *(undefined1 *)(lVar5 + 0x30) = 0;
    }
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = *piVar1;
  if (iVar4 < 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar4,&pTVar2->AllocatorInstance,piVar1,
                       &(this->DeferredDestroys).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8,0,(longlong)-iVar4 << 3);
    return;
  }
  if (0 < iVar4) {
    *piVar1 = *piVar1 - iVar4;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,*piVar1,&(this->DeferredDestroys).ArrayMax);
  }
  return;
}

// Render_PostUpdate @ 14571ec70

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Render_PostUpdate
          (TStateStream<FSkinnedMeshStateStreamSettings> *this)

{
  int *piVar1;
  TArray<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->DeferredDestroys;
  iVar4 = (this->DeferredDestroys).ArrayNum;
  piVar1 = &(this->DeferredDestroys).ArrayNum;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TStateStream<FSkinnedMeshStateStreamSettings>::FInstance_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    lVar5 = *(longlong *)pFVar9;
    if (*(char *)(lVar5 + 0x50) == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x70))(this,lVar5,lVar5 + 0x20,lVar5 + 0x58);
    if (*(char *)(lVar5 + 0x50) != '\0') {
      if (*(void **)(lVar5 + 0x40) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar5 + 0x40));
      }
      FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)(lVar5 + 0x28));
      *(undefined1 *)(lVar5 + 0x50) = 0;
    }
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = *piVar1;
  if (iVar4 < 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar4,&pTVar2->AllocatorInstance,piVar1,
                       &(this->DeferredDestroys).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8,0,(longlong)-iVar4 << 3);
    return;
  }
  if (0 < iVar4) {
    *piVar1 = *piVar1 - iVar4;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,*piVar1,&(this->DeferredDestroys).ArrayMax);
  }
  return;
}

// Render_PostUpdate @ 14571edd0

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Render_PostUpdate
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this)

{
  int *piVar1;
  TArray<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->DeferredDestroys;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  piVar1 = &(this->DeferredDestroys).ArrayNum;
  iVar4 = *piVar1;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TStateStream<FSkyAtmosphereStateStreamSettings>::FInstance_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    lVar5 = *(longlong *)pFVar9;
    if (*(char *)(lVar5 + 0x170) == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x70))(this,lVar5,lVar5 + 0x10,lVar5 + 0x180);
    if (*(char *)(lVar5 + 0x170) != '\0') {
      *(undefined1 *)(lVar5 + 0x170) = 0;
    }
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = *piVar1;
  if (iVar4 < 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar4,&pTVar2->AllocatorInstance,piVar1,
                       &(this->DeferredDestroys).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8,0,(longlong)-iVar4 << 3);
    return;
  }
  if (0 < iVar4) {
    *piVar1 = *piVar1 - iVar4;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,*piVar1,&(this->DeferredDestroys).ArrayMax);
  }
  return;
}

// Render_PostUpdate @ 14571ef20

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Render_PostUpdate
          (TStateStream<FStaticMeshStateStreamSettings> *this)

{
  int *piVar1;
  TArray<TStateStream<FStaticMeshStateStreamSettings>::FInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->DeferredDestroys;
  iVar4 = (this->DeferredDestroys).ArrayNum;
  piVar1 = &(this->DeferredDestroys).ArrayNum;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if (*piVar1 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TStateStream<FStaticMeshStateStreamSettings>::FInstance_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    lVar5 = *(longlong *)pFVar9;
    if (*(char *)(lVar5 + 0x58) == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x70))(this,lVar5,lVar5 + 0x10,lVar5 + 0x60);
    if (*(char *)(lVar5 + 0x58) != '\0') {
      if (*(void **)(lVar5 + 0x40) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar5 + 0x40));
      }
      if (*(void **)(lVar5 + 0x30) != (void *)0x0) {
        FMemory::Free(*(void **)(lVar5 + 0x30));
      }
      FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)(lVar5 + 0x18));
      *(undefined1 *)(lVar5 + 0x58) = 0;
    }
    pFVar9 = pFVar9 + 8;
  }
  iVar4 = *piVar1;
  if (iVar4 < 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,-iVar4,&pTVar2->AllocatorInstance,piVar1,
                       &(this->DeferredDestroys).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8,0,(longlong)-iVar4 << 3);
    return;
  }
  if (0 < iVar4) {
    *piVar1 = *piVar1 - iVar4;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,*piVar1,&(this->DeferredDestroys).ArrayMax);
  }
  return;
}

// Render_Update @ 14571f200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TStateStream<FExponentialHeightFogStateStreamSettings>::Render_Update
          (TStateStream<FExponentialHeightFogStateStreamSettings> *this,double param_1)

{
  double dVar1;
  FTick *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTick *pFVar6;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  uint uVar7;
  double dVar8;
  undefined1 auStackY_88 [32];
  <lambda_1> local_58 [8];
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  if (param_1 == this->RendTime) {
    return;
  }
  if ((param_1 <= this->RendTime) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AbsoluteTime > RendTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x169,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = this->RendTick;
  uVar7 = 0;
  bVar4 = pFVar6 == (FTick *)0x0;
  if (bVar4) {
    pFVar6 = this->OldestAvailableTick;
    this->RendTick = pFVar6;
  }
  else {
    uVar7 = pFVar6->Index;
  }
  dVar1 = this->RendTime;
  this->RendTime = param_1;
  if (param_1 <= pFVar6->Time) {
LAB_14571f2f1:
    ApplyChanges(this,pFVar6,param_1,uVar7,dVar1,&pFVar6->ModifiedInstances);
  }
  else {
    if (dVar1 == pFVar6->Time) {
      pFVar2 = pFVar6->NextTick;
      if (pFVar2 == (FTick *)0x0) {
        this->RendTime = dVar1;
        return;
      }
      if (!bVar4) {
        this->RendTick = pFVar2;
        pFVar6 = pFVar2;
      }
      if (param_1 < pFVar6->Time || param_1 == pFVar6->Time) goto LAB_14571f2f1;
    }
    local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_50.MaxBits = 0;
    local_50.NumBits = 0;
    uVar5 = (pFVar6->ModifiedInstances).NumBits + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar5) {
      local_50.MaxBits = 0x80;
      if (0x80 < (int)uVar5) {
        local_50.MaxBits = uVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
    }
    local_50.NumBits = (pFVar6->ModifiedInstances).NumBits;
    if (local_50.NumBits != 0) {
      _Src = (pFVar6->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (_Src == (ForElementType<unsigned_int>)0x0) {
        _Src = (ForElementType<unsigned_int>)&pFVar6->ModifiedInstances;
      }
      _Dst = (ForElementType<unsigned_int>)&local_50;
      if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_50.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)_Src,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
    }
    pFVar6 = this->RendTick;
    dVar8 = this->RendTime;
    if (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time) {
      do {
        pFVar2 = pFVar6->NextTick;
        if (pFVar2 == (FTick *)0x0) {
          dVar8 = pFVar6->Time;
          this->RendTime = dVar8;
          break;
        }
        this->RendTick = pFVar2;
        UE::Core::Private::
        BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseOR<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  (&pFVar2->ModifiedInstances,&local_50,MaxSize,local_58);
        pFVar6 = this->RendTick;
        dVar8 = this->RendTime;
      } while (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time);
    }
    ApplyChanges(this,pFVar6,dVar8,uVar7,dVar1,&local_50);
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Render_Update @ 14571f460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TStateStream<FParticleSystemStateStreamSettingsCascade>::Render_Update
          (TStateStream<FParticleSystemStateStreamSettingsCascade> *this,double param_1)

{
  double dVar1;
  FTick *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTick *pFVar6;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  uint uVar7;
  double dVar8;
  undefined1 auStackY_88 [32];
  <lambda_1> local_58 [8];
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  if (param_1 == this->RendTime) {
    return;
  }
  if ((param_1 <= this->RendTime) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AbsoluteTime > RendTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x169,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = this->RendTick;
  uVar7 = 0;
  bVar4 = pFVar6 == (FTick *)0x0;
  if (bVar4) {
    pFVar6 = this->OldestAvailableTick;
    this->RendTick = pFVar6;
  }
  else {
    uVar7 = pFVar6->Index;
  }
  dVar1 = this->RendTime;
  this->RendTime = param_1;
  if (param_1 <= pFVar6->Time) {
LAB_14571f551:
    ApplyChanges(this,pFVar6,param_1,uVar7,dVar1,&pFVar6->ModifiedInstances);
  }
  else {
    if (dVar1 == pFVar6->Time) {
      pFVar2 = pFVar6->NextTick;
      if (pFVar2 == (FTick *)0x0) {
        this->RendTime = dVar1;
        return;
      }
      if (!bVar4) {
        this->RendTick = pFVar2;
        pFVar6 = pFVar2;
      }
      if (param_1 < pFVar6->Time || param_1 == pFVar6->Time) goto LAB_14571f551;
    }
    local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_50.MaxBits = 0;
    local_50.NumBits = 0;
    uVar5 = (pFVar6->ModifiedInstances).NumBits + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar5) {
      local_50.MaxBits = 0x80;
      if (0x80 < (int)uVar5) {
        local_50.MaxBits = uVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
    }
    local_50.NumBits = (pFVar6->ModifiedInstances).NumBits;
    if (local_50.NumBits != 0) {
      _Src = (pFVar6->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (_Src == (ForElementType<unsigned_int>)0x0) {
        _Src = (ForElementType<unsigned_int>)&pFVar6->ModifiedInstances;
      }
      _Dst = (ForElementType<unsigned_int>)&local_50;
      if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_50.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)_Src,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
    }
    pFVar6 = this->RendTick;
    dVar8 = this->RendTime;
    if (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time) {
      do {
        pFVar2 = pFVar6->NextTick;
        if (pFVar2 == (FTick *)0x0) {
          dVar8 = pFVar6->Time;
          this->RendTime = dVar8;
          break;
        }
        this->RendTick = pFVar2;
        UE::Core::Private::
        BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseOR<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  (&pFVar2->ModifiedInstances,&local_50,MaxSize,local_58);
        pFVar6 = this->RendTick;
        dVar8 = this->RendTime;
      } while (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time);
    }
    ApplyChanges(this,pFVar6,dVar8,uVar7,dVar1,&local_50);
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Render_Update @ 14571f6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TStateStream<FSkinnedMeshStateStreamSettings>::Render_Update
          (TStateStream<FSkinnedMeshStateStreamSettings> *this,double param_1)

{
  double dVar1;
  FTick *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTick *pFVar6;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  uint uVar7;
  double dVar8;
  undefined1 auStackY_88 [32];
  <lambda_1> local_58 [8];
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  if (param_1 == this->RendTime) {
    return;
  }
  if ((param_1 <= this->RendTime) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AbsoluteTime > RendTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x169,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = this->RendTick;
  uVar7 = 0;
  bVar4 = pFVar6 == (FTick *)0x0;
  if (bVar4) {
    pFVar6 = this->OldestAvailableTick;
    this->RendTick = pFVar6;
  }
  else {
    uVar7 = pFVar6->Index;
  }
  dVar1 = this->RendTime;
  this->RendTime = param_1;
  if (param_1 <= pFVar6->Time) {
LAB_14571f7b1:
    ApplyChanges(this,pFVar6,param_1,uVar7,dVar1,&pFVar6->ModifiedInstances);
  }
  else {
    if (dVar1 == pFVar6->Time) {
      pFVar2 = pFVar6->NextTick;
      if (pFVar2 == (FTick *)0x0) {
        this->RendTime = dVar1;
        return;
      }
      if (!bVar4) {
        this->RendTick = pFVar2;
        pFVar6 = pFVar2;
      }
      if (param_1 < pFVar6->Time || param_1 == pFVar6->Time) goto LAB_14571f7b1;
    }
    local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_50.MaxBits = 0;
    local_50.NumBits = 0;
    uVar5 = (pFVar6->ModifiedInstances).NumBits + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar5) {
      local_50.MaxBits = 0x80;
      if (0x80 < (int)uVar5) {
        local_50.MaxBits = uVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
    }
    local_50.NumBits = (pFVar6->ModifiedInstances).NumBits;
    if (local_50.NumBits != 0) {
      _Src = (pFVar6->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (_Src == (ForElementType<unsigned_int>)0x0) {
        _Src = (ForElementType<unsigned_int>)&pFVar6->ModifiedInstances;
      }
      _Dst = (ForElementType<unsigned_int>)&local_50;
      if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_50.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)_Src,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
    }
    pFVar6 = this->RendTick;
    dVar8 = this->RendTime;
    if (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time) {
      do {
        pFVar2 = pFVar6->NextTick;
        if (pFVar2 == (FTick *)0x0) {
          dVar8 = pFVar6->Time;
          this->RendTime = dVar8;
          break;
        }
        this->RendTick = pFVar2;
        UE::Core::Private::
        BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseOR<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  (&pFVar2->ModifiedInstances,&local_50,MaxSize,local_58);
        pFVar6 = this->RendTick;
        dVar8 = this->RendTime;
      } while (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time);
    }
    ApplyChanges(this,pFVar6,dVar8,uVar7,dVar1,&local_50);
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Render_Update @ 14571f920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TStateStream<FSkyAtmosphereStateStreamSettings>::Render_Update
          (TStateStream<FSkyAtmosphereStateStreamSettings> *this,double param_1)

{
  double dVar1;
  FTick *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTick *pFVar6;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  uint uVar7;
  double dVar8;
  undefined1 auStackY_88 [32];
  <lambda_1> local_58 [8];
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  if (param_1 == this->RendTime) {
    return;
  }
  if ((param_1 <= this->RendTime) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AbsoluteTime > RendTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x169,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = this->RendTick;
  uVar7 = 0;
  bVar4 = pFVar6 == (FTick *)0x0;
  if (bVar4) {
    pFVar6 = this->OldestAvailableTick;
    this->RendTick = pFVar6;
  }
  else {
    uVar7 = pFVar6->Index;
  }
  dVar1 = this->RendTime;
  this->RendTime = param_1;
  if (param_1 <= pFVar6->Time) {
LAB_14571fa11:
    ApplyChanges(this,pFVar6,param_1,uVar7,dVar1,&pFVar6->ModifiedInstances);
  }
  else {
    if (dVar1 == pFVar6->Time) {
      pFVar2 = pFVar6->NextTick;
      if (pFVar2 == (FTick *)0x0) {
        this->RendTime = dVar1;
        return;
      }
      if (!bVar4) {
        this->RendTick = pFVar2;
        pFVar6 = pFVar2;
      }
      if (param_1 < pFVar6->Time || param_1 == pFVar6->Time) goto LAB_14571fa11;
    }
    local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_50.MaxBits = 0;
    local_50.NumBits = 0;
    uVar5 = (pFVar6->ModifiedInstances).NumBits + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar5) {
      local_50.MaxBits = 0x80;
      if (0x80 < (int)uVar5) {
        local_50.MaxBits = uVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
    }
    local_50.NumBits = (pFVar6->ModifiedInstances).NumBits;
    if (local_50.NumBits != 0) {
      _Src = (pFVar6->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (_Src == (ForElementType<unsigned_int>)0x0) {
        _Src = (ForElementType<unsigned_int>)&pFVar6->ModifiedInstances;
      }
      _Dst = (ForElementType<unsigned_int>)&local_50;
      if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_50.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)_Src,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
    }
    pFVar6 = this->RendTick;
    dVar8 = this->RendTime;
    if (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time) {
      do {
        pFVar2 = pFVar6->NextTick;
        if (pFVar2 == (FTick *)0x0) {
          dVar8 = pFVar6->Time;
          this->RendTime = dVar8;
          break;
        }
        this->RendTick = pFVar2;
        UE::Core::Private::
        BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseOR<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  (&pFVar2->ModifiedInstances,&local_50,MaxSize,local_58);
        pFVar6 = this->RendTick;
        dVar8 = this->RendTime;
      } while (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time);
    }
    ApplyChanges(this,pFVar6,dVar8,uVar7,dVar1,&local_50);
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Render_Update @ 14571fb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TStateStream<FStaticMeshStateStreamSettings>::Render_Update
          (TStateStream<FStaticMeshStateStreamSettings> *this,double param_1)

{
  double dVar1;
  FTick *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTick *pFVar6;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  uint uVar7;
  double dVar8;
  undefined1 auStackY_88 [32];
  <lambda_1> local_58 [8];
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NewestAvailableTick == (FTick *)0x0) {
    return;
  }
  if (param_1 == this->RendTime) {
    return;
  }
  if ((param_1 <= this->RendTime) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AbsoluteTime > RendTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\GenericStateStream.h"
                         ,0x169,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = this->RendTick;
  uVar7 = 0;
  bVar4 = pFVar6 == (FTick *)0x0;
  if (bVar4) {
    pFVar6 = this->OldestAvailableTick;
    this->RendTick = pFVar6;
  }
  else {
    uVar7 = pFVar6->Index;
  }
  dVar1 = this->RendTime;
  this->RendTime = param_1;
  if (param_1 <= pFVar6->Time) {
LAB_14571fc71:
    ApplyChanges(this,pFVar6,param_1,uVar7,dVar1,&pFVar6->ModifiedInstances);
  }
  else {
    if (dVar1 == pFVar6->Time) {
      pFVar2 = pFVar6->NextTick;
      if (pFVar2 == (FTick *)0x0) {
        this->RendTime = dVar1;
        return;
      }
      if (!bVar4) {
        this->RendTick = pFVar2;
        pFVar6 = pFVar2;
      }
      if (param_1 < pFVar6->Time || param_1 == pFVar6->Time) goto LAB_14571fc71;
    }
    local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_50.MaxBits = 0;
    local_50.NumBits = 0;
    uVar5 = (pFVar6->ModifiedInstances).NumBits + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar5) {
      local_50.MaxBits = 0x80;
      if (0x80 < (int)uVar5) {
        local_50.MaxBits = uVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
    }
    local_50.NumBits = (pFVar6->ModifiedInstances).NumBits;
    if (local_50.NumBits != 0) {
      _Src = (pFVar6->ModifiedInstances).AllocatorInstance.SecondaryData;
      if (_Src == (ForElementType<unsigned_int>)0x0) {
        _Src = (ForElementType<unsigned_int>)&pFVar6->ModifiedInstances;
      }
      _Dst = (ForElementType<unsigned_int>)&local_50;
      if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_50.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)_Src,(ulonglong)(local_50.NumBits + 0x1fU >> 5) << 2);
    }
    pFVar6 = this->RendTick;
    dVar8 = this->RendTime;
    if (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time) {
      do {
        pFVar2 = pFVar6->NextTick;
        if (pFVar2 == (FTick *)0x0) {
          dVar8 = pFVar6->Time;
          this->RendTime = dVar8;
          break;
        }
        this->RendTick = pFVar2;
        UE::Core::Private::
        BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseOR<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  (&pFVar2->ModifiedInstances,&local_50,MaxSize,local_58);
        pFVar6 = this->RendTick;
        dVar8 = this->RendTime;
      } while (pFVar6->Time <= dVar8 && dVar8 != pFVar6->Time);
    }
    ApplyChanges(this,pFVar6,dVar8,uVar7,dVar1,&local_50);
    if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

