// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// FParticleTrailsEmitterInstance_Base @ 1481c7f90

FParticleTrailsEmitterInstance_Base * __thiscall
FParticleTrailsEmitterInstance_Base::FParticleTrailsEmitterInstance_Base
          (FParticleTrailsEmitterInstance_Base *this,IParticleEmitterInstanceOwner *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  FParticleEmitterInstance::FParticleEmitterInstance((FParticleEmitterInstance *)this,param_1);
  this->bDeadTrailsOnDeactivate = 0;
  *(undefined ***)this = &___7FParticleTrailsEmitterInstance_Base__6B_;
  piVar1 = &(this->LastSpawnTime).ArrayMax;
  piVar2 = &(this->SourceDistanceTraveled).ArrayMax;
  this->VertexCount = 0;
  this->TriangleCount = 0;
  this->TrailCount = 0;
  this->MaxTrailCount = 0;
  this->bFirstUpdate = 1;
  this->bEnableInactiveTimeTracking = 0;
  piVar3 = &(this->TiledUDistanceTraveled).ArrayMax;
  this->RunningTime = 0.0;
  this->LastTickTime = 0.0;
  (this->TrailSpawnTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrailSpawnTimes).ArrayNum = 0;
  (this->TrailSpawnTimes).ArrayMax = 0;
  (this->LastSpawnTime).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->SourceDistanceTraveled).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDistanceTraveled).ArrayNum = 0;
  *piVar2 = 0;
  (this->TiledUDistanceTraveled).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TiledUDistanceTraveled).ArrayNum = 0;
  *piVar3 = 0;
  (this->LastSpawnTime).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LastSpawnTime).AllocatorInstance,0,piVar1);
  }
  (this->SourceDistanceTraveled).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SourceDistanceTraveled).AllocatorInstance,0,piVar2);
  }
  (this->TiledUDistanceTraveled).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TiledUDistanceTraveled).AllocatorInstance,0,piVar3);
  }
  return this;
}

// ~FParticleTrailsEmitterInstance_Base @ 1481c9520

void __thiscall
FParticleTrailsEmitterInstance_Base::~FParticleTrailsEmitterInstance_Base
          (FParticleTrailsEmitterInstance_Base *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FParticleTrailsEmitterInstance_Base__6B_;
  pFVar1 = (this->TiledUDistanceTraveled).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceDistanceTraveled).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSpawnTime).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrailSpawnTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FParticleEmitterInstance::~FParticleEmitterInstance((FParticleEmitterInstance *)this);
  return;
}

// AddParticleHelper @ 1481d2d90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FParticleTrailsEmitterInstance_Base::AddParticleHelper
          (FParticleTrailsEmitterInstance_Base *this,int param_1,int param_2,
          FTrailsBaseTypeDataPayload *param_3,int param_4,FTrailsBaseTypeDataPayload *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  UObjectBaseUtility *pUVar5;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  void *local_38 [2];
  
  param_5->TrailIndex = param_1;
  if ((param_3->Flags & 0xf0000000U) == 0x40000000) {
    if ((param_3->Flags & 0x3fffU) != 0x3fff) goto LAB_1481d2f37;
    param_3->Flags = (param_4 & 0x3fffU) << 0xe ^ 0x80003fff;
    if ((param_3->SpawnTime < param_5->SpawnTime || param_3->SpawnTime == param_5->SpawnTime) ||
       ((byte)LogParticles._0_1_ < 5)) goto LAB_1481d308b;
    (**(code **)(**(longlong **)&this->field_0x10 + 0x90))(*(longlong **)&this->field_0x10,local_58)
    ;
    lVar4 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
    if (lVar4 != 0) {
      pUVar5 = (UObjectBaseUtility *)(**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
      UObjectBaseUtility::GetPathName(pUVar5,&local_68,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    local_38[0] = local_58[0];
    if ((lVar4 != 0) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      local_38[0] = local_58[0];
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("((StartTrailData->Flags & 0xf0000000) == 0x40000000)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                       ,0x46a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
LAB_1481d2f37:
    if (((param_3->Flags & 0x3fffU) == 0x3fff) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("((StartTrailData->Flags & 0x00003fff) >> 0) != (0x00003fff >> 0)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                           ,0x46b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    param_3->Flags = (param_3->Flags & 0x3fffU | 0x20000000) ^ (param_4 & 0x3fffU) << 0xe;
    if ((param_3->SpawnTime < param_5->SpawnTime || param_3->SpawnTime == param_5->SpawnTime) ||
       ((byte)LogParticles._0_1_ < 5)) goto LAB_1481d308b;
    (**(code **)(**(longlong **)&this->field_0x10 + 0x90))(*(longlong **)&this->field_0x10,local_38)
    ;
    lVar4 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
    if (lVar4 != 0) {
      pUVar5 = (UObjectBaseUtility *)(**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
      UObjectBaseUtility::GetPathName(pUVar5,&local_48,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((lVar4 != 0) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
LAB_1481d308b:
  param_5->Flags =
       (((param_5->Flags | 0xfffc000U) ^ param_2) & 0xffffc000 ^ param_2) & 0xfffffff | 0x40000000;
  return true;
}

// DumpCircularTrailsSpam @ 1481e3090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleTrailsEmitterInstance_Base::DumpCircularTrailsSpam
          (FParticleTrailsEmitterInstance_Base *this)

{
  FName *this_00;
  UObjectBaseUtility *this_01;
  FString local_28;
  FString local_18;
  
  if (0 < GbEnableCircularAnimTrailDump) {
    if (2 < (byte)LogParticles._0_1_) {
      this_00 = UParticleEmitter::GetEmitterName(*(UParticleEmitter **)&this->field_0x8);
      ::FName::ToString(this_00,&local_18);
      this_01 = (UObjectBaseUtility *)(**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
      UObjectBaseUtility::GetFullName(this_01,&local_28,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (1 < GbEnableCircularAnimTrailDump) {
                    /* WARNING: Could not recover jumptable at 0x0001481e3166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this + 0x250))(this);
      return;
    }
  }
  return;
}

// ForceUpdateBoundingBox @ 1481f3210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FParticleTrailsEmitterInstance_Base::ForceUpdateBoundingBox
          (FParticleTrailsEmitterInstance_Base *this)

{
  double *pdVar1;
  ushort *puVar2;
  ushort uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  bool bVar13;
  longlong lVar14;
  TTransform<double> *this_00;
  TMatrix<double> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 *this_01;
  ushort *puVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  longlong local_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  TVector<double>_u_0 local_188;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_218;
  if ((*(int *)(*(longlong *)&this->field_0x8 + 0x48) < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SpriteTemplate->LODLevels.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0x11d,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)&this->field_0x8;
  lVar18 = 0;
  iVar22 = *(int *)(lVar4 + 0x48);
  if (iVar22 < 1) {
    local_1f8 = 0;
    local_1f0 = (longlong)iVar22;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = **(longlong **)(lVar4 + 0x40);
  if ((lVar4 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0x11f,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((*(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 1) == 0) {
    lVar14 = (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
    uVar9 = *(undefined4 *)(lVar14 + 0x24);
    uVar10 = *(undefined4 *)(lVar14 + 0x28);
    uVar11 = *(undefined4 *)(lVar14 + 0x2c);
    uVar24 = *(undefined8 *)(lVar14 + 0x30);
    *(undefined4 *)&this->field_0x1d8 = *(undefined4 *)(lVar14 + 0x20);
    *(undefined4 *)&this->field_0x1dc = uVar9;
    *(undefined4 *)&this->field_0x1e0 = uVar10;
    *(undefined4 *)&this->field_0x1e4 = uVar11;
    *(undefined8 *)&this->field_0x1e8 = uVar24;
    lVar14 = (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
    uVar12 = *(undefined8 *)(lVar14 + 0x28);
    uVar24 = *(double *)(lVar14 + 0x30);
    *(undefined8 *)&this->field_0x1c0 = *(undefined8 *)(lVar14 + 0x20);
    *(undefined8 *)&this->field_0x1c8 = uVar12;
  }
  else {
    *(double *)&this->field_0x1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this->field_0x1e0 = uVar24;
    *(double *)&this->field_0x1e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this->field_0x1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this->field_0x1c8 = uVar24;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  this_01 = &this->field_0x1c0;
  *(undefined8 *)&this->field_0x1d0 = uVar24;
  this->field_0x1f0 = 1;
  lVar14 = (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
  local_1e8 = *(double *)(lVar14 + 0x40);
  dStack_1e0 = *(double *)(lVar14 + 0x48);
  pdVar1 = (double *)(lVar14 + 0x50);
  local_1d8 = *(undefined4 *)pdVar1;
  uStack_1d4 = *(undefined4 *)(lVar14 + 0x54);
  iVar22 = *(int *)&this->field_0x18c;
  lVar14 = (longlong)iVar22;
  if (iVar22 < 1) goto LAB_1481f395c;
  local_1d0 = __real_c7efffffe0000000;
  local_1b8 = __real_47efffffe0000000;
  local_1c8 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_1c0 = _UNK_150b28868;
  local_1b0 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_1a8 = _UNK_150b2d318;
  dVar33 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dVar31 = _UNK_150b2d318;
  dVar27 = ___xmm_47efffffe000000047efffffe0000000;
  dVar32 = _UNK_150b28868;
  if (lVar14 < 4) {
    dVar30 = __real_c7efffffe0000000;
    if (0 < iVar22) {
      lVar19 = *(longlong *)&this->field_0x168;
      iVar22 = *(int *)&this->field_0x188;
      lVar23 = *(longlong *)&this->field_0x170;
      goto LAB_1481f3773;
    }
  }
  else {
    lVar23 = *(longlong *)&this->field_0x170;
    lVar19 = *(longlong *)&this->field_0x168;
    iVar22 = *(int *)&this->field_0x188;
    puVar20 = (ushort *)(lVar23 + 4);
    lVar21 = (lVar14 - 4U >> 2) + 1;
    lVar18 = lVar21 * 4;
    do {
      dVar28 = *pdVar1;
      lVar16 = (longlong)(int)((uint)puVar20[-2] * iVar22);
      dVar25 = (double)*(float *)(lVar16 + 0x60 + lVar19) * local_1e8;
      dVar30 = (double)*(float *)(lVar16 + 100 + lVar19) * dStack_1e0;
      dVar6 = *(double *)(lVar16 + 0x18 + lVar19) -
              (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      lVar17 = (longlong)(int)((uint)puVar20[-1] * iVar22);
      dVar25 = (double)*(float *)(lVar16 + 0x68 + lVar19) * dVar28;
      dVar29 = *(double *)(lVar16 + 0x20 + lVar19) -
               (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar25 = *(double *)(lVar16 + 0x28 + lVar19) -
               (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar30 = (double)*(float *)(lVar17 + 100 + lVar19) * dStack_1e0;
      dVar8 = dVar25;
      if (dVar25 <= local_1d0) {
        dVar8 = local_1d0;
      }
      dVar26 = (double)*(float *)(lVar17 + 0x60 + lVar19) * local_1e8;
      if (local_1b8 <= dVar25) {
        dVar25 = local_1b8;
      }
      dVar7 = dVar29;
      if (dVar29 <= dVar31) {
        dVar7 = dVar31;
      }
      if (dVar32 <= dVar29) {
        dVar29 = dVar32;
      }
      dVar31 = *(double *)(lVar17 + 0x20 + lVar19) -
               (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar32 = dVar6;
      if (dVar6 <= dVar33) {
        dVar32 = dVar33;
      }
      if (dVar27 <= dVar6) {
        dVar6 = dVar27;
      }
      dVar33 = *(double *)(lVar17 + 0x18 + lVar19) -
               (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      lVar16 = (longlong)(int)((uint)*puVar20 * iVar22);
      if (dVar31 <= dVar29) {
        dVar29 = dVar31;
      }
      dVar27 = (double)*(float *)(lVar17 + 0x68 + lVar19) * dVar28;
      if (dVar33 <= dVar6) {
        dVar6 = dVar33;
      }
      if (dVar32 <= dVar33) {
        dVar32 = dVar33;
      }
      if (dVar7 <= dVar31) {
        dVar7 = dVar31;
      }
      dVar33 = *(double *)(lVar17 + 0x28 + lVar19) -
               (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (dVar33 <= dVar25) {
        dVar25 = dVar33;
      }
      dVar31 = (double)*(float *)(lVar16 + 0x60 + lVar19) * local_1e8;
      if (dVar8 <= dVar33) {
        dVar8 = dVar33;
      }
      dVar26 = *(double *)(lVar16 + 0x18 + lVar19) -
               (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar33 = (double)*(float *)(lVar16 + 100 + lVar19) * dStack_1e0;
      dVar28 = (double)*(float *)(lVar16 + 0x68 + lVar19) * dVar28;
      dVar30 = *(double *)(lVar16 + 0x20 + lVar19) -
               (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar34 = *(double *)(lVar16 + 0x28 + lVar19) -
               (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar28 = dVar34;
      if (dVar25 <= dVar34) {
        dVar28 = dVar25;
      }
      puVar2 = puVar20 + 1;
      if (dVar34 <= dVar8) {
        dVar34 = dVar8;
      }
      dVar27 = dVar30;
      if (dVar30 <= dVar7) {
        dVar27 = dVar7;
      }
      if (dVar29 <= dVar30) {
        dVar30 = dVar29;
      }
      dVar25 = dVar26;
      if (dVar6 <= dVar26) {
        dVar25 = dVar6;
      }
      puVar20 = puVar20 + 4;
      if (dVar26 <= dVar32) {
        dVar26 = dVar32;
      }
      lVar16 = (longlong)(int)((uint)*puVar2 * iVar22);
      dVar33 = (double)*(float *)(lVar16 + 0x60 + lVar19) * local_1e8;
      dVar32 = (double)*(float *)(lVar16 + 100 + lVar19) * dStack_1e0;
      dVar33 = *(double *)(lVar16 + 0x18 + lVar19) -
               (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar32 = *(double *)(lVar16 + 0x20 + lVar19) -
               (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar29 = (double)*(float *)(lVar16 + 0x68 + lVar19) * *pdVar1;
      dVar31 = dVar32;
      if (dVar32 <= dVar27) {
        dVar31 = dVar27;
      }
      dVar27 = dVar33;
      if (dVar25 <= dVar33) {
        dVar27 = dVar25;
      }
      if (dVar30 <= dVar32) {
        dVar32 = dVar30;
      }
      if (dVar33 <= dVar26) {
        dVar33 = dVar26;
      }
      local_1b8 = *(double *)(lVar16 + 0x28 + lVar19) -
                  (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      local_1d0 = local_1b8;
      if (local_1b8 <= dVar34) {
        local_1d0 = dVar34;
      }
      if (dVar28 <= local_1b8) {
        local_1b8 = dVar28;
      }
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar30 = local_1d0;
    if (lVar18 < lVar14) {
LAB_1481f3773:
      puVar20 = (ushort *)(lVar23 + lVar18 * 2);
      lVar14 = lVar14 - lVar18;
      dVar25 = dVar31;
      dVar29 = dVar33;
      dVar6 = local_1d0;
      dVar8 = dVar32;
      dVar28 = local_1b8;
      do {
        uVar3 = *puVar20;
        puVar20 = puVar20 + 1;
        lVar18 = (longlong)(int)((uint)uVar3 * iVar22);
        dVar33 = (double)*(float *)(lVar18 + 0x60 + lVar19) * local_1e8;
        dVar32 = (double)*(float *)(lVar18 + 100 + lVar19) * dStack_1e0;
        dVar33 = *(double *)(lVar18 + 0x18 + lVar19) -
                 (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        dVar30 = (double)*(float *)(lVar18 + 0x68 + lVar19) * *pdVar1;
        dVar31 = *(double *)(lVar18 + 0x20 + lVar19) -
                 (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        dVar30 = *(double *)(lVar18 + 0x28 + lVar19) -
                 (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        dVar32 = dVar33;
        if (dVar27 <= dVar33) {
          dVar32 = dVar27;
        }
        dVar27 = dVar32;
        if (dVar33 <= dVar29) {
          dVar33 = dVar29;
        }
        dVar32 = dVar31;
        if (dVar8 <= dVar31) {
          dVar32 = dVar8;
        }
        if (dVar31 <= dVar25) {
          dVar31 = dVar25;
        }
        local_1b8 = dVar30;
        if (dVar28 <= dVar30) {
          local_1b8 = dVar28;
        }
        if (dVar30 <= dVar6) {
          dVar30 = dVar6;
        }
        lVar14 = lVar14 + -1;
        dVar25 = dVar31;
        dVar29 = dVar33;
        dVar6 = dVar30;
        dVar8 = dVar32;
        dVar28 = local_1b8;
      } while (lVar14 != 0);
    }
  }
  if (this->field_0x1f0 == '\0') {
    *(double *)&this->field_0x1d8 = dVar27;
    *(double *)&this->field_0x1e0 = dVar32;
    this->field_0x1f0 = 1;
    *(double *)this_01 = dVar27;
    *(double *)&this->field_0x1c8 = dVar32;
    *(double *)&this->field_0x1e8 = local_1b8;
    *(double *)&this->field_0x1d0 = local_1b8;
  }
  else {
    dVar25 = dVar27;
    if (*(double *)this_01 <= dVar27) {
      dVar25 = *(double *)this_01;
    }
    dVar29 = *(double *)&this->field_0x1c8;
    if (dVar32 <= *(double *)&this->field_0x1c8) {
      dVar29 = dVar32;
    }
    *(double *)this_01 = dVar25;
    dVar25 = local_1b8;
    if (*(double *)&this->field_0x1d0 <= local_1b8) {
      dVar25 = *(double *)&this->field_0x1d0;
    }
    *(double *)&this->field_0x1c8 = dVar29;
    dVar29 = *(double *)&this->field_0x1d8;
    if (*(double *)&this->field_0x1d8 <= dVar27) {
      dVar29 = dVar27;
    }
    *(double *)&this->field_0x1d0 = dVar25;
    dVar27 = *(double *)&this->field_0x1e0;
    if (*(double *)&this->field_0x1e0 <= dVar32) {
      dVar27 = dVar32;
    }
    *(double *)&this->field_0x1d8 = dVar29;
    dVar32 = *(double *)&this->field_0x1e8;
    if (*(double *)&this->field_0x1e8 <= local_1b8) {
      dVar32 = local_1b8;
    }
    *(double *)&this->field_0x1e0 = dVar27;
    *(double *)&this->field_0x1e8 = dVar32;
  }
  dVar32 = dVar31;
  if (*(double *)&this->field_0x1c8 <= dVar31) {
    dVar32 = *(double *)&this->field_0x1c8;
  }
  dVar27 = *(double *)this_01;
  if (dVar33 <= *(double *)this_01) {
    dVar27 = dVar33;
  }
  *(double *)&this->field_0x1c8 = dVar32;
  *(double *)this_01 = dVar27;
  dVar32 = *(double *)&this->field_0x1d8;
  if (*(double *)&this->field_0x1d8 <= dVar33) {
    dVar32 = dVar33;
  }
  dVar33 = dVar30;
  if (*(double *)&this->field_0x1d0 <= dVar30) {
    dVar33 = *(double *)&this->field_0x1d0;
  }
  if (dVar30 <= *(double *)&this->field_0x1e8) {
    dVar30 = *(double *)&this->field_0x1e8;
  }
  *(double *)&this->field_0x1d8 = dVar32;
  *(double *)&this->field_0x1d0 = dVar33;
  dVar32 = *(double *)&this->field_0x1e0;
  if (*(double *)&this->field_0x1e0 <= dVar31) {
    dVar32 = dVar31;
  }
  *(double *)&this->field_0x1e8 = dVar30;
  *(double *)&this->field_0x1e0 = dVar32;
LAB_1481f395c:
  if ((*(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 1) != 0) {
    this_00 = (TTransform<double> *)(**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
    pTVar15 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_148);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)this_01,(TBox<double> *)&local_188._s_0,pTVar15);
    *(double *)this_01 = local_188._s_0.X;
    *(double *)&this->field_0x1c8 = local_188._s_0.Y;
    *(double *)&this->field_0x1d0 = local_188._s_0.Z;
    *(undefined8 *)&this->field_0x1d8 = uStack_170;
    *(undefined8 *)&this->field_0x1e0 = local_168;
    *(undefined8 *)&this->field_0x1e8 = uStack_160;
    *(undefined8 *)&this->field_0x1f0 = local_158;
  }
  return;
}

// GetCurrentMaterial @ 1481f5200

UMaterialInterface * __thiscall
FParticleTrailsEmitterInstance_Base::GetCurrentMaterial(FParticleTrailsEmitterInstance_Base *this)

{
  UMaterialInterface *pUVar1;
  char cVar2;
  UMaterial *pUVar3;
  
  pUVar1 = *(UMaterialInterface **)&this->field_0x238;
  if (pUVar1 != (UMaterialInterface *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x378))(pUVar1,2);
    if (cVar2 != '\0') {
      *(UMaterialInterface **)&this->field_0x238 = pUVar1;
      return pUVar1;
    }
  }
  pUVar3 = UMaterial::GetDefaultMaterial(MD_Surface);
  *(UMaterial **)&this->field_0x238 = pUVar3;
  return (UMaterialInterface *)pUVar3;
}

// GetParticleInTrail @ 1481fcc10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FParticleTrailsEmitterInstance_Base::GetParticleInTrail
          (FParticleTrailsEmitterInstance_Base *this,bool param_1,FBaseParticle *param_2,
          FTrailsBaseTypeDataPayload *param_3,EGetTrailDirection param_4,
          EGetTrailParticleOption param_5,FBaseParticle **param_6,
          FTrailsBaseTypeDataPayload **param_7)

{
  byte bVar1;
  uint uVar2;
  FStaticBasicLogRecord *pFVar3;
  bool bVar4;
  
  *param_6 = (FBaseParticle *)0x0;
  *param_7 = (FTrailsBaseTypeDataPayload *)0x0;
  if (param_2 == (FBaseParticle *)0x0) {
    return false;
  }
  if (param_3 == (FTrailsBaseTypeDataPayload *)0x0) {
    return false;
  }
  if (param_5 == GET_End) {
    if ((param_4 != GET_Prev) || ((byte)LogParticles._0_1_ < 3)) goto LAB_1481fccaf;
    pFVar3 = &::LOG_Static;
  }
  else {
    if (((param_5 != GET_Start) || (param_4 != GET_Next)) || ((byte)LogParticles._0_1_ < 3))
    goto LAB_1481fccaf;
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogParticles);
LAB_1481fccaf:
  if (param_1) goto LAB_1481fcd04;
  while (param_5 != GET_Any) {
    if (param_5 == GET_Spawned) {
      bVar1 = ~param_3->bInterpolatedSpawn;
LAB_1481fccfe:
      bVar4 = (bool)(bVar1 & 1);
LAB_1481fcd00:
      bVar4 = bVar4 == true;
LAB_1481fcd02:
      if (bVar4) break;
    }
    else {
      if (param_5 == GET_Interpolated) {
        bVar1 = param_3->field_0x24;
        goto LAB_1481fccfe;
      }
      if (param_5 == GET_Start) {
        bVar4 = (param_3->Flags & 0xf0000000U) == 0x40000000;
        goto LAB_1481fcd00;
      }
      if (param_5 == GET_End) {
        bVar4 = (param_3->Flags & 0xf0000000U) == 0x80000000;
        goto LAB_1481fcd02;
      }
    }
LAB_1481fcd04:
    uVar2 = param_3->Flags;
    if (param_4 == GET_Prev) {
      uVar2 = (int)uVar2 >> 0xe;
    }
    if ((uVar2 & 0x3fff) == 0x3fff) goto LAB_1481fcd3d;
    param_2 = (FBaseParticle *)
              ((longlong)(int)((uVar2 & 0x3fff) * *(int *)&this->field_0x188) +
              *(longlong *)&this->field_0x168);
    param_3 = (FTrailsBaseTypeDataPayload *)
              ((longlong)&(param_2->OldLocation).field0_0x0 + (longlong)*(int *)&this->field_0x24);
  }
  *param_6 = param_2;
  *param_7 = param_3;
LAB_1481fcd3d:
  if ((*param_6 != (FBaseParticle *)0x0) && (*param_7 != (FTrailsBaseTypeDataPayload *)0x0)) {
    return true;
  }
  return false;
}

// Init @ 148201dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FParticleTrailsEmitterInstance_Base::Init(FParticleTrailsEmitterInstance_Base *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_TrailEmitterInstance_Init> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_TrailEmitterInstance_Init;
  if (StatPtr_STAT_TrailEmitterInstance_Init ==
      (FThreadSafeStaticStat<FStat_STAT_TrailEmitterInstance_Init>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_TrailEmitterInstance_Init");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_TrailEmitterInstance_Init>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailEmitterInstance_Init,*pFVar4,
                       L"TrailEmitterInstance Init GT","STATGROUP_Particles","STATCAT_Advanced",
                       L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    FParticleEmitterInstance::Init((FParticleEmitterInstance *)this);
    (**(code **)(*(longlong *)this + 0x238))(this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                   ,0x55);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    FParticleEmitterInstance::Init((FParticleEmitterInstance *)this);
    (**(code **)(*(longlong *)this + 0x238))(this);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// InitParameters @ 1482041e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleTrailsEmitterInstance_Base::InitParameters
          (FParticleTrailsEmitterInstance_Base *this,UParticleEmitter *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_InitParameters> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER LStackX_8;
  FName FStackX_10;
  FStatMessage FStack_38;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_ParticleEmitterInstance_InitParameters;
  if (StatPtr_STAT_ParticleEmitterInstance_InitParameters ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_InitParameters>)0x0) {
    pFVar4 = ::FName::FName(&FStackX_10,"STAT_ParticleEmitterInstance_InitParameters");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_ParticleEmitterInstance_InitParameters>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_ParticleEmitterInstance_InitParameters,*pFVar4,
                       L"EmitterInstance InitParams GT","STATGROUP_Particles","STATCAT_Advanced",
                       L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    *(UParticleEmitter **)&this->field_0x8 = param_1;
    FParticleEmitterInstance::SetupEmitterDuration((FParticleEmitterInstance *)this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar7.Value;
        LStackX_8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0x1e1);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      LStackX_8.s.LowPart = FVar7.Value;
      LStackX_8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    *(UParticleEmitter **)&this->field_0x8 = param_1;
    FParticleEmitterInstance::SetupEmitterDuration((FParticleEmitterInstance *)this);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        FStack_38.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        FStack_38.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&LStackX_8);
        FStack_38.StatData.Pad[4] = '\0';
        FStack_38.StatData.Pad[5] = '\0';
        FStack_38.StatData.Pad[6] = '\0';
        FStack_38.StatData.Pad[7] = '\0';
        FStack_38.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
        FStack_38.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
        FStack_38.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
        FStack_38.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&FStack_38);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// KillParticles @ 148205ed0

void __thiscall
FParticleTrailsEmitterInstance_Base::KillParticles
          (FParticleTrailsEmitterInstance_Base *this,int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)&this->field_0x18c;
  if (iVar7 == 0) {
    return;
  }
  iVar6 = 0;
  iVar5 = 0;
  if (iVar7 < 1) {
    return;
  }
  puVar3 = *(ushort **)&this->field_0x170;
  while( true ) {
    lVar4 = (longlong)(int)((uint)*puVar3 * *(int *)&this->field_0x188) +
            *(longlong *)&this->field_0x168;
    puVar2 = (uint *)(lVar4 + *(int *)&this->field_0x24);
    if (((*(uint *)(lVar4 + *(int *)&this->field_0x24) & 0xf0000000) == 0x80000000) &&
       (puVar2[1] == param_1)) break;
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 1;
    if (iVar7 <= iVar5) {
      return;
    }
  }
  if (lVar4 == 0) {
    return;
  }
  if (puVar2 == (uint *)0x0) {
    return;
  }
  do {
    iVar7 = iVar6;
    if (param_2 <= iVar6) break;
    *(undefined4 *)(lVar4 + 0x90) = 0x3f8ccccd;
    iVar6 = iVar6 + 1;
    uVar1 = (int)*puVar2 >> 0xe & 0x3fff;
    iVar7 = param_2;
    if (uVar1 != 0x3fff) {
      lVar4 = (longlong)(int)(uVar1 * *(int *)&this->field_0x188) + *(longlong *)&this->field_0x168;
      puVar2 = (uint *)(*(int *)&this->field_0x24 + lVar4);
      if ((*puVar2 & 0xf0000000) == 0x40000000) break;
      if ((*puVar2 & 0xf0000000) == 0x10000000) {
        puVar2[2] = 0;
        puVar2[7] = 1;
      }
    }
  } while (puVar2 != (uint *)0x0);
  if (0 < iVar7) {
    (**(code **)(*(longlong *)this + 0xe0))(this);
  }
  return;
}

// KillParticles @ 148206010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleTrailsEmitterInstance_Base::KillParticles(FParticleTrailsEmitterInstance_Base *this)

{
  uint *puVar1;
  ushort uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_TrailParticlesKilled> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  FName local_res10;
  FName local_res18;
  FStatMessage local_78 [4];
  
  if (0 < *(int *)&this->field_0x18c) {
    fVar18 = (float)(**(code **)(**(longlong **)&this->field_0x10 + 0x50))();
    fVar6 = __real_3f800000;
    bVar5 = false;
    iVar8 = *(int *)&this->field_0x18c + -1;
    lVar17 = (longlong)iVar8;
    if (-1 < iVar8) {
      do {
        iVar8 = *(int *)&this->field_0x188;
        lVar12 = *(longlong *)&this->field_0x168;
        lVar16 = (longlong)*(int *)&this->field_0x24;
        uVar2 = *(ushort *)(*(longlong *)&this->field_0x170 + lVar17 * 2);
        lVar15 = (int)((uint)uVar2 * iVar8) + lVar12;
        if ((fVar6 < *(float *)(lVar15 + 0x90)) ||
           (((this->bEnableInactiveTimeTracking != 0 && (fVar18 != 0.0)) &&
            (fVar6 / *(float *)(lVar15 + 0x94) < fVar18 - this->LastTickTime)))) {
          uVar11 = *(uint *)(lVar16 + lVar15);
          uVar14 = uVar11 & 0xf0000000;
          if ((uVar14 == 0x40000000) || (uVar14 == 0x10000000)) {
            if ((uVar11 & 0x3fff) != 0x3fff) {
              lVar12 = (int)(iVar8 * (uVar11 & 0x3fff)) + lVar12;
              uVar11 = *(uint *)(lVar16 + lVar12);
              if ((uVar11 & 0xf0000000) == 0x80000000) {
                if ((uVar14 == 0x40000000) || (uVar14 == 0x10000000)) {
                  uVar11 = uVar11 & 0xfffffff | uVar14;
                  *(uint *)(lVar16 + lVar12) = uVar11;
                }
                if (((uVar11 & 0x3fff) != 0x3fff) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("((NextTrailData->Flags & 0x00003fff) >> 0) == (0x00003fff >> 0)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                                       ,0x189,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              else {
                if (uVar14 == 0x40000000) {
                  uVar11 = uVar11 & 0xfffffff | 0x40000000;
                }
                else {
                  uVar11 = uVar11 & 0xfffffff | 0x10000000;
                }
                *(uint *)(lVar16 + lVar12) = uVar11;
              }
              *(uint *)(lVar16 + lVar12) = *(uint *)(lVar16 + lVar12) | 0xfffc000;
            }
          }
          else if (uVar14 == 0x80000000) {
            uVar11 = (int)uVar11 >> 0xe & 0x3fff;
            if (uVar11 != 0x3fff) {
              lVar12 = (int)(iVar8 * uVar11) + lVar12;
              uVar11 = *(uint *)(lVar12 + lVar16);
              if ((uVar11 & 0xf0000000) == 0x40000000) {
                *(uint *)(lVar12 + lVar16) = uVar11 | 0x3fff;
              }
              else if ((uVar11 & 0xf0000000) == 0x10000000) {
                *(undefined4 *)(lVar12 + 8 + lVar16) = 0;
                *(uint *)(lVar12 + lVar16) = uVar11 | 0x3fff;
                *(undefined4 *)(lVar12 + 0x1c + lVar16) = 1;
              }
              else {
                *(uint *)(lVar12 + lVar16) = uVar11 & 0xfffffff | 0x80003fff;
              }
            }
          }
          else if (uVar14 == 0x20000000) {
            uVar14 = (int)uVar11 >> 0xe & 0x3fff;
            uVar11 = uVar11 & 0x3fff;
            if (uVar14 != 0x3fff) {
              lVar12 = (int)(iVar8 * uVar14) + lVar12;
              uVar14 = *(uint *)(lVar12 + lVar16);
              if ((uVar14 & 0xf0000000) != 0x40000000) {
                if ((uVar14 & 0xf0000000) == 0x10000000) {
                  *(undefined4 *)(lVar12 + 8 + lVar16) = 0;
                  *(undefined4 *)(lVar12 + 0x1c + lVar16) = 1;
                }
                else {
                  uVar14 = uVar14 & 0xfffffff | 0x80000000;
                }
              }
              *(uint *)(lVar12 + lVar16) = uVar14 | 0x3fff;
            }
            if (uVar11 != 0x3fff) {
              bVar5 = true;
              do {
                lVar13 = (longlong)(int)(uVar11 * *(int *)&this->field_0x188) +
                         (longlong)*(int *)&this->field_0x24;
                lVar12 = *(longlong *)&this->field_0x168;
                puVar1 = (uint *)(lVar13 + lVar12);
                *puVar1 = *puVar1 & 0xfffffff;
                uVar11 = *(uint *)(lVar13 + lVar12) & 0x3fff;
              } while (uVar11 != 0x3fff);
            }
          }
          else if ((uVar14 != 0) &&
                  (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!L\"What the hell are you doing in here?\"",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                                      ,0x1e3,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(uint *)(lVar16 + lVar15) & 0xf0000000) != 0) {
            uVar11 = *(uint *)(lVar16 + lVar15) & 0x3fff;
            if (uVar11 != 0x3fff) {
              puVar1 = (uint *)((longlong)(int)(uVar11 * *(int *)&this->field_0x188) +
                                (longlong)*(int *)&this->field_0x24 +
                               *(longlong *)&this->field_0x168);
              *puVar1 = *puVar1 | 0xfffc000;
            }
            uVar11 = *(int *)(lVar16 + lVar15) >> 0xe & 0x3fff;
            if (uVar11 != 0x3fff) {
              puVar1 = (uint *)((longlong)(int)(uVar11 * *(int *)&this->field_0x188) +
                                (longlong)*(int *)&this->field_0x24 +
                               *(longlong *)&this->field_0x168);
              *puVar1 = *puVar1 | 0x3fff;
            }
          }
          *(uint *)(lVar16 + lVar15) = *(uint *)(lVar16 + lVar15) | 0xfffffff;
          *(undefined2 *)(*(longlong *)&this->field_0x170 + lVar17 * 2) =
               *(undefined2 *)
                (*(longlong *)&this->field_0x170 + -2 + (longlong)*(int *)&this->field_0x18c * 2);
          *(ushort *)
           (*(longlong *)&this->field_0x170 + -2 + (longlong)*(int *)&this->field_0x18c * 2) = uVar2
          ;
          *(int *)&this->field_0x18c = *(int *)&this->field_0x18c + -1;
          if (FThreadStats::bPrimaryEnable != false) {
            FVar10 = StatPtr_STAT_TrailParticlesKilled;
            if (StatPtr_STAT_TrailParticlesKilled ==
                (FThreadSafeStaticStat<FStat_STAT_TrailParticlesKilled>)0x0) {
              pFVar9 = ::FName::FName(&local_res18,"STAT_TrailParticlesKilled");
              FVar10 = (FThreadSafeStaticStat<FStat_STAT_TrailParticlesKilled>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticlesKilled,
                                  *pFVar9,L"Trail Ptcls Killed","STATGROUP_Particles",
                                  "STATCAT_Advanced",L"Particles",true,true,ST_int64,false,false,
                                  MCR_Invalid);
            }
            FVar3 = *(FName *)FVar10;
            if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_00 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_00 == (FThreadStats *)0x0) {
                this_01 = FThreadStatsPool::Get();
                this_00 = FThreadStatsPool::GetFromPool(this_01);
              }
              local_78[0].NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
              local_78[0].StatData.Pad[0] = '\x01';
              local_78[0].StatData.Pad[1] = '\0';
              local_78[0].StatData.Pad[2] = '\0';
              local_78[0].StatData.Pad[3] = '\0';
              local_78[0].StatData.Pad[4] = '\0';
              local_78[0].StatData.Pad[5] = '\0';
              local_78[0].StatData.Pad[6] = '\0';
              local_78[0].StatData.Pad[7] = '\0';
              local_res10 = FVar3;
              local_78[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(this_00,local_78);
              FStatsTrace::Add(&local_res10,1);
              if (this_00->ScopeCount == 0) {
                FThreadStats::Flush(this_00,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
              }
            }
          }
        }
        lVar17 = lVar17 + -1;
      } while (-1 < lVar17);
      if ((bVar5) && (iVar8 = *(int *)&this->field_0x18c + -1, lVar17 = (longlong)iVar8, -1 < iVar8)
         ) {
        do {
          uVar2 = *(ushort *)(*(longlong *)&this->field_0x170 + lVar17 * 2);
          lVar12 = (longlong)(int)((uint)uVar2 * *(int *)&this->field_0x188) +
                   (longlong)*(int *)&this->field_0x24;
          uVar11 = *(uint *)(lVar12 + *(longlong *)&this->field_0x168);
          if ((uVar11 & 0xf0000000) == 0) {
            *(uint *)(lVar12 + *(longlong *)&this->field_0x168) = uVar11 | 0xfffffff;
            *(undefined2 *)(*(longlong *)&this->field_0x170 + lVar17 * 2) =
                 *(undefined2 *)
                  (*(longlong *)&this->field_0x170 + -2 + (longlong)*(int *)&this->field_0x18c * 2);
            *(ushort *)
             (*(longlong *)&this->field_0x170 + -2 + (longlong)*(int *)&this->field_0x18c * 2) =
                 uVar2;
            *(int *)&this->field_0x18c = *(int *)&this->field_0x18c + -1;
          }
          lVar17 = lVar17 + -1;
        } while (-1 < lVar17);
      }
    }
  }
  return;
}

// OnDeactivateSystem @ 1482087d0

void __thiscall
FParticleTrailsEmitterInstance_Base::OnDeactivateSystem(FParticleTrailsEmitterInstance_Base *this)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  
  if ((this->bDeadTrailsOnDeactivate != 0) && (iVar2 = 0, 0 < *(int *)&this->field_0x18c)) {
    lVar3 = 0;
    do {
      puVar4 = (uint *)((longlong)
                        (int)((uint)*(ushort *)(lVar3 + *(longlong *)&this->field_0x170) *
                             *(int *)&this->field_0x188) + (longlong)*(int *)&this->field_0x24 +
                       *(longlong *)&this->field_0x168);
      uVar1 = *puVar4;
      if ((uVar1 & 0xf0000000) == 0x40000000) {
        *puVar4 = uVar1 & 0xfffffff | 0x10000000;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 2;
    } while (iVar2 < *(int *)&this->field_0x18c);
  }
  return;
}

// PrintAllActiveParticles @ 14820b910

void __thiscall
FParticleTrailsEmitterInstance_Base::PrintAllActiveParticles
          (FParticleTrailsEmitterInstance_Base *this)

{
  return;
}

// PrintParticleData @ 14820baa0

void __thiscall
FParticleTrailsEmitterInstance_Base::PrintParticleData
          (FParticleTrailsEmitterInstance_Base *this,FBaseParticle *param_1,
          FTrailsBaseTypeDataPayload *param_2,int param_3,int param_4)

{
  return;
}

// PrintTrails @ 14820be50

void __thiscall
FParticleTrailsEmitterInstance_Base::PrintTrails(FParticleTrailsEmitterInstance_Base *this)

{
  return;
}

// SetupTrailModules @ 148219fd0

void __thiscall
FParticleTrailsEmitterInstance_Base::SetupTrailModules(FParticleTrailsEmitterInstance_Base *this)

{
  return;
}

// Tick @ 148221540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleTrailsEmitterInstance_Base::Tick
          (FParticleTrailsEmitterInstance_Base *this,float param_1,bool param_2)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_TrailTickTime> FVar12;
  UParticleLODLevel *pUVar13;
  FThreadSafeStaticStat<FStat_STAT_TrailParticlesTickCalls> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FName FVar17;
  FNameEntryId FVar18;
  undefined4 uVar19;
  float fVar20;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res20;
  LARGE_INTEGER local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FStatMessage local_80;
  FStatMessage local_70 [3];
  
  FVar12 = StatPtr_STAT_TrailTickTime;
  if (StatPtr_STAT_TrailTickTime == (FThreadSafeStaticStat<FStat_STAT_TrailTickTime>)0x0) {
    pFVar11 = ::FName::FName(&local_a0,"STAT_TrailTickTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_TrailTickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailTickTime,*pFVar11,
                        L"Trail Tick Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_res8.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                   ,0x67);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar5 = true;
      goto LAB_1482216a9;
    }
  }
  bVar5 = false;
  FVar17 = local_90;
LAB_1482216a9:
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpriteTemplate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                       ,0x6d,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x48) < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpriteTemplate->LODLevels.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                       ,0x6e,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar8 = *(float *)&this->field_0x19c <= 0.0;
  pUVar13 = UParticleEmitter::GetCurrentLODLevel
                      (*(UParticleEmitter **)&this->field_0x8,(FParticleEmitterInstance *)this);
  if (pUVar13 == (UParticleLODLevel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODLevel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                       ,0x75,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1 < 0.0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("DeltaTime >= 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                       ,0x7b,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(*(longlong *)this + 0x28))(this,param_1,pUVar13);
  (**(code **)(*(longlong *)this + 0x240))(this,param_1,bVar8);
  (**(code **)(*(longlong *)this + 0xe0))(this);
  uVar19 = (**(code **)(*(longlong *)this + 0x30))(this,param_1,pUVar13,param_2,bVar8);
  *(undefined4 *)&this->field_0x198 = uVar19;
  (**(code **)(*(longlong *)this + 0xa0))(this,param_1);
  (**(code **)(*(longlong *)this + 0x38))(this,param_1,pUVar13);
  (**(code **)(*(longlong *)this + 0x40))(this,param_1,pUVar13);
  (**(code **)(*(longlong *)this + 0x68))(this,param_1);
  (**(code **)(*(longlong *)this + 0x48))(this,param_1,pUVar13);
  (**(code **)(*(longlong *)this + 0x228))(this,param_1);
  *(TObjectPtr<UMaterialInterface>_u_0 *)&this->field_0x238 =
       (((pUVar13->RequiredModule).field0_0x0.DebugPtr)->Material).field0_0x0;
  *(float *)&this->field_0x1a0 = *(float *)&this->field_0x228 + *(float *)&this->field_0x1a0;
  this->RunningTime = param_1 + this->RunningTime;
  *(undefined4 *)&this->field_0x20c = 1;
  fVar20 = (float)(**(code **)(**(longlong **)&this->field_0x10 + 0x50))();
  this->LastTickTime = fVar20;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x250 = uVar7;
  *(double *)&this->field_0x258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar14 = StatPtr_STAT_TrailParticlesTickCalls;
    if (StatPtr_STAT_TrailParticlesTickCalls ==
        (FThreadSafeStaticStat<FStat_STAT_TrailParticlesTickCalls>)0x0) {
      pFVar11 = ::FName::FName(&local_98,"STAT_TrailParticlesTickCalls");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_TrailParticlesTickCalls>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticlesTickCalls,
                          *pFVar11,L"Trail Tick Calls","STATGROUP_TrailParticles","STATCAT_Advanced"
                          ,L"Trail Particles",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar14;
    FVar18 = FVar2.ComparisonIndex.Value;
    uVar10 = FVar2.Number;
    local_res8.ComparisonIndex.Value = FVar18.Value;
    local_res8.Number = uVar10;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      local_80.NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
      local_80.StatData.Pad[0] = '\x01';
      local_80.StatData.Pad[1] = '\0';
      local_80.StatData.Pad[2] = '\0';
      local_80.StatData.Pad[3] = '\0';
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_res20 = FVar2;
      local_80.NameAndInfo.Index.Value = FVar18.Value;
      FThreadStats::AddStatMessage(pFVar15,&local_80);
      FStatsTrace::Add(&local_res20,1);
      if (pFVar15->ScopeCount == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_70[0].NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_70[0].NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_70[0].StatData.Pad[4] = '\0';
      local_70[0].StatData.Pad[5] = '\0';
      local_70[0].StatData.Pad[6] = '\0';
      local_70[0].StatData.Pad[7] = '\0';
      local_70[0].StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_70[0].StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_70[0].StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_70[0].StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,local_70);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return;
}

// Tick_RecalculateTangents @ 1482221a0

void __thiscall
FParticleTrailsEmitterInstance_Base::Tick_RecalculateTangents
          (FParticleTrailsEmitterInstance_Base *this,float param_1,UParticleLODLevel *param_2)

{
  return;
}

// UpdateBoundingBox @ 1482244c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleTrailsEmitterInstance_Base::UpdateBoundingBox
          (FParticleTrailsEmitterInstance_Base *this,float param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FName FVar10;
  FName FVar11;
  double dVar12;
  FName FVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  char cVar24;
  bool bVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds> FVar27;
  longlong lVar28;
  longlong lVar29;
  TTransform<double> *this_00;
  TMatrix<double> *pTVar30;
  FName FVar31;
  longlong lVar32;
  undefined1 *puVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  FName FVar39;
  FName FVar40;
  undefined8 uVar41;
  double dVar42;
  undefined8 uVar43;
  double dVar44;
  float fVar45;
  undefined1 auStackY_278 [32];
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  longlong local_1e0;
  double local_1d8;
  double dStack_1d0;
  FName local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  TVector<double>_u_0 local_190;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  lVar32 = 0;
  FVar27 = StatPtr_STAT_ParticleUpdateBounds;
  if (StatPtr_STAT_ParticleUpdateBounds ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds>)0x0) {
    pFVar26 = ::FName::FName(&local_1f8,"STAT_ParticleUpdateBounds");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleUpdateBounds,*pFVar26,
                        L"Update Bounds Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar27;
  bVar18 = false;
  bVar22 = false;
  local_1f0.ComparisonIndex.Value = 0;
  local_1f0.Number = 0;
  bVar20 = false;
  bVar23 = false;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_148224640:
    bVar21 = false;
    local_200 = local_1f0;
    FVar31 = local_1f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_208 = (FName)((ulonglong)local_208 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_208,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar18 = false;
      bVar22 = true;
      bVar20 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_210 = FVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_210,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                   ,0xba);
        bVar18 = true;
        bVar22 = true;
        bVar20 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148224640;
    local_200 = FVar31;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar21 = true;
    bVar20 = bVar18;
    bVar23 = bVar22;
  }
  lVar28 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
  cVar24 = (**(code **)(**(longlong **)&this->field_0x10 + 0x100))();
  if (((cVar24 == '\0') && (lVar28 != 0)) && ((*(byte *)(lVar28 + 0xf4) & 2) == 0)) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  if ((*(int *)(*(longlong *)&this->field_0x8 + 0x48) < 1) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("SpriteTemplate->LODLevels.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0xbf,L""), bVar25)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar28 = *(longlong *)&this->field_0x8;
  if ((*(int *)(lVar28 + 0x48) < 1) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar28 = **(longlong **)(lVar28 + 0x40);
  local_1e0 = lVar28;
  if ((lVar28 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0xc1,L""), bVar25)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar19) {
    if ((*(byte *)(*(longlong *)(lVar28 + 0x30) + 0x71) & 1) == 0) {
      lVar29 = (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
      uVar15 = *(undefined4 *)(lVar29 + 0x24);
      uVar16 = *(undefined4 *)(lVar29 + 0x28);
      uVar17 = *(undefined4 *)(lVar29 + 0x2c);
      uVar34 = *(undefined8 *)(lVar29 + 0x30);
      *(undefined4 *)&this->field_0x1d8 = *(undefined4 *)(lVar29 + 0x20);
      *(undefined4 *)&this->field_0x1dc = uVar15;
      *(undefined4 *)&this->field_0x1e0 = uVar16;
      *(undefined4 *)&this->field_0x1e4 = uVar17;
      *(undefined8 *)&this->field_0x1e8 = uVar34;
      lVar29 = (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
      uVar41 = *(undefined8 *)(lVar29 + 0x28);
      uVar34 = *(double *)(lVar29 + 0x30);
      *(undefined8 *)&this->field_0x1c0 = *(undefined8 *)(lVar29 + 0x20);
      *(undefined8 *)&this->field_0x1c8 = uVar41;
    }
    else {
      *(double *)&this->field_0x1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&this->field_0x1e0 = uVar34;
      *(double *)&this->field_0x1e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)&this->field_0x1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&this->field_0x1c8 = uVar34;
      uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    *(undefined8 *)&this->field_0x1d0 = uVar34;
  }
  this->field_0x1f0 = 1;
  lVar29 = (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
  iVar3 = *(int *)&this->field_0x18c;
  local_1a8 = *(double *)(lVar29 + 0x40);
  dStack_1a0 = *(double *)(lVar29 + 0x48);
  local_198 = *(undefined4 *)(lVar29 + 0x50);
  uStack_194 = *(undefined4 *)(lVar29 + 0x54);
  if (iVar3 < 1) {
    if (!bVar19) goto LAB_148224c90;
  }
  else {
    bVar2 = *(byte *)(*(longlong *)&this->field_0x8 + 0x37);
    local_1c0 = ___xmm_c7efffffe0000000c7efffffe0000000;
    dStack_1b8 = _UNK_150b2d318;
    local_208 = __real_47efffffe0000000;
    local_1c8 = __real_47efffffe0000000;
    local_210 = __real_c7efffffe0000000;
    local_1d8 = ___xmm_47efffffe000000047efffffe0000000;
    dStack_1d0 = _UNK_150b28868;
    FVar39 = __real_47efffffe0000000;
    dVar12 = ___xmm_c7efffffe0000000c7efffffe0000000;
    dVar38 = _UNK_150b28868;
    FVar40 = __real_c7efffffe0000000;
    dVar36 = ___xmm_47efffffe000000047efffffe0000000;
    dVar14 = _UNK_150b2d318;
    if (0 < iVar3) {
      do {
        lVar28 = *(longlong *)&this->field_0x168;
        lVar29 = (longlong)
                 (int)((uint)*(ushort *)(*(longlong *)&this->field_0x170 + lVar32 * 2) *
                      *(int *)&this->field_0x188);
        uVar4 = *(uint *)(lVar29 + 0x6c + lVar28);
        *(uint *)(lVar29 + 0x6c + lVar28) = uVar4 & 0xfdffffff;
        dVar35 = (double)*(float *)(lVar29 + 0x60 + lVar28) * local_1a8;
        dVar8 = (double)*(float *)(lVar29 + 100 + lVar28) * dStack_1a0;
        dVar9 = (double)*(float *)(lVar29 + 0x68 + lVar28) * (double)CONCAT44(uStack_194,local_198);
        if (((uVar4 >> 0x19 & 1) == 0) || ((~bVar2 & 1) == 0)) {
          bVar18 = false;
          uVar41 = (undefined8)(param_1 * *(float *)(lVar29 + 0x40 + lVar28));
          uVar43 = (undefined8)(param_1 * *(float *)(lVar29 + 0x44 + lVar28));
          uVar34 = (undefined8)(param_1 * *(float *)(lVar29 + 0x48 + lVar28));
        }
        else {
          bVar18 = true;
          uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        dVar42 = (double)uVar41 + *(double *)(lVar29 + 0x18 + lVar28);
        dVar44 = (double)uVar43 + *(double *)(lVar29 + 0x20 + lVar28);
        dVar7 = (double)uVar34 + *(double *)(lVar29 + 0x28 + lVar28);
        *(double *)(lVar29 + 0x18 + lVar28) = dVar42;
        *(double *)(lVar29 + 0x20 + lVar28) = dVar44;
        *(double *)(lVar29 + 0x28 + lVar28) = dVar7;
        if (bVar18) {
          fVar45 = 0.0;
        }
        else {
          fVar45 = param_1 * *(float *)(lVar29 + 0x5c + lVar28);
        }
        fVar45 = fVar45 + *(float *)(lVar29 + 0x3c + lVar28);
        *(float *)(lVar29 + 0x3c + lVar28) = fVar45;
        dVar42 = dVar42 + *(double *)&this->field_0x248;
        *(double *)(lVar29 + 0x18 + lVar28) = dVar42;
        dVar44 = dVar44 + *(double *)&this->field_0x250;
        *(double *)(lVar29 + 0x20 + lVar28) = dVar44;
        dVar7 = dVar7 + *(double *)&this->field_0x258;
        *(double *)(lVar29 + 0x28 + lVar28) = dVar7;
        uVar34 = *(undefined8 *)(lVar29 + 0x28 + lVar28);
        puVar1 = (undefined8 *)(lVar29 + 0x18 + lVar28);
        uVar41 = puVar1[1];
        *(undefined8 *)(lVar29 + lVar28) = *puVar1;
        ((undefined8 *)(lVar29 + lVar28))[1] = uVar41;
        *(undefined8 *)(lVar29 + 0x10 + lVar28) = uVar34;
        if (bVar19) {
          dVar6 = dVar42 - dVar35;
          dVar37 = dVar44 - dVar8;
          dVar42 = dVar42 + dVar35;
          dVar44 = dVar44 + dVar8;
          FVar39 = (FName)(dVar7 - dVar9);
          FVar31 = (FName)(dVar7 + dVar9);
          dVar35 = dVar6;
          if (dVar36 <= dVar6) {
            dVar35 = dVar36;
          }
          if (dVar6 <= dVar12) {
            dVar6 = dVar12;
          }
          FVar40 = FVar39;
          if ((double)FVar39 <= (double)local_210) {
            FVar40 = local_210;
          }
          if ((double)local_208 <= (double)FVar39) {
            FVar39 = local_208;
          }
          dVar36 = dVar35;
          if (dVar42 <= dVar35) {
            dVar36 = dVar42;
          }
          dVar35 = dVar37;
          if (dVar38 <= dVar37) {
            dVar35 = dVar38;
          }
          if (dVar37 <= dVar14) {
            dVar37 = dVar14;
          }
          local_208 = FVar39;
          if ((double)FVar31 <= (double)FVar39) {
            local_208 = FVar31;
          }
          local_210 = FVar40;
          if ((double)FVar40 <= (double)FVar31) {
            local_210 = FVar31;
          }
          dVar12 = dVar6;
          if (dVar6 <= dVar42) {
            dVar12 = dVar42;
          }
          dVar38 = dVar35;
          if (dVar44 <= dVar35) {
            dVar38 = dVar44;
          }
          dVar14 = dVar37;
          local_1c8 = local_208;
          if (dVar37 <= dVar44) {
            dVar14 = dVar44;
          }
        }
        FVar39 = local_208;
        FVar40 = local_210;
        fVar45 = FGenericPlatformMath::Fmod(fVar45,__real_40c90fdb);
        lVar32 = lVar32 + 1;
        *(float *)(lVar29 + 0x3c + lVar28) = fVar45;
        FVar31 = local_200;
        lVar28 = local_1e0;
        bVar18 = bVar20;
        bVar22 = bVar23;
      } while (lVar32 < iVar3);
    }
    puVar33 = &this->field_0x1c0;
    if (!bVar19) goto LAB_148224c90;
    if (this->field_0x1f0 == '\0') {
      *(double *)&this->field_0x1d8 = dVar36;
      *(double *)&this->field_0x1e0 = dVar38;
      this->field_0x1f0 = 1;
      *(double *)puVar33 = dVar36;
      *(double *)&this->field_0x1c8 = dVar38;
      *(uint *)&this->field_0x1e8 = local_1c8.ComparisonIndex.Value;
      *(uint *)&this->field_0x1ec = local_1c8.Number;
      *(uint *)&this->field_0x1d0 = local_1c8.ComparisonIndex.Value;
      *(uint *)&this->field_0x1d4 = local_1c8.Number;
    }
    else {
      dVar35 = *(double *)puVar33;
      if (dVar36 <= *(double *)puVar33) {
        dVar35 = dVar36;
      }
      dVar8 = *(double *)&this->field_0x1c8;
      if (dVar38 <= *(double *)&this->field_0x1c8) {
        dVar8 = dVar38;
      }
      if (dVar38 <= *(double *)&this->field_0x1e0) {
        dVar38 = *(double *)&this->field_0x1e0;
      }
      *(double *)puVar33 = dVar35;
      FVar10.ComparisonIndex.Value = *(uint *)&this->field_0x1d0;
      FVar10.Number = *(uint *)&this->field_0x1d4;
      if ((double)FVar39 <= (double)FVar10) {
        FVar10 = FVar39;
      }
      *(double *)&this->field_0x1c8 = dVar8;
      dVar35 = *(double *)&this->field_0x1d8;
      if (*(double *)&this->field_0x1d8 <= dVar36) {
        dVar35 = dVar36;
      }
      *(double *)&this->field_0x1e0 = dVar38;
      *(uint *)&this->field_0x1d0 = FVar10.ComparisonIndex.Value;
      *(uint *)&this->field_0x1d4 = FVar10.Number;
      FVar11.ComparisonIndex.Value = *(uint *)&this->field_0x1e8;
      FVar11.Number = *(uint *)&this->field_0x1ec;
      if ((double)FVar11 <= (double)FVar39) {
        FVar11 = FVar39;
      }
      *(double *)&this->field_0x1d8 = dVar35;
      *(uint *)&this->field_0x1e8 = FVar11.ComparisonIndex.Value;
      *(uint *)&this->field_0x1ec = FVar11.Number;
    }
    dVar36 = dVar12;
    if (*(double *)puVar33 <= dVar12) {
      dVar36 = *(double *)puVar33;
    }
    dVar38 = *(double *)&this->field_0x1c8;
    if (dVar14 <= *(double *)&this->field_0x1c8) {
      dVar38 = dVar14;
    }
    *(double *)puVar33 = dVar36;
    FVar39.ComparisonIndex.Value = *(uint *)&this->field_0x1d0;
    FVar39.Number = *(uint *)&this->field_0x1d4;
    *(double *)&this->field_0x1c8 = dVar38;
    if ((double)FVar40 <= (double)FVar39) {
      FVar39 = FVar40;
    }
    dVar36 = *(double *)&this->field_0x1d8;
    if (*(double *)&this->field_0x1d8 <= dVar12) {
      dVar36 = dVar12;
    }
    *(uint *)&this->field_0x1d0 = FVar39.ComparisonIndex.Value;
    *(uint *)&this->field_0x1d4 = FVar39.Number;
    *(double *)&this->field_0x1d8 = dVar36;
    dVar12 = *(double *)&this->field_0x1e0;
    if (*(double *)&this->field_0x1e0 <= dVar14) {
      dVar12 = dVar14;
    }
    FVar13.ComparisonIndex.Value = *(uint *)&this->field_0x1e8;
    FVar13.Number = *(uint *)&this->field_0x1ec;
    if ((double)FVar13 <= (double)FVar40) {
      FVar13 = FVar40;
    }
    *(double *)&this->field_0x1e0 = dVar12;
    *(uint *)&this->field_0x1e8 = FVar13.ComparisonIndex.Value;
    *(uint *)&this->field_0x1ec = FVar13.Number;
  }
  if ((*(byte *)(*(longlong *)(lVar28 + 0x30) + 0x71) & 1) != 0) {
    this_00 = (TTransform<double> *)(**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
    pTVar30 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_158);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&this->field_0x1c0,(TBox<double> *)&local_190._s_0,pTVar30);
    *(double *)&this->field_0x1c0 = local_190._s_0.X;
    *(double *)&this->field_0x1c8 = local_190._s_0.Y;
    *(double *)&this->field_0x1d0 = local_190._s_0.Z;
    *(undefined8 *)&this->field_0x1d8 = uStack_178;
    *(undefined8 *)&this->field_0x1e0 = local_170;
    *(undefined8 *)&this->field_0x1e8 = uStack_168;
    *(undefined8 *)&this->field_0x1f0 = local_160;
  }
LAB_148224c90:
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return;
}

// UpdateSourceData @ 148226d40

void __thiscall
FParticleTrailsEmitterInstance_Base::UpdateSourceData
          (FParticleTrailsEmitterInstance_Base *this,float param_1,bool param_2)

{
  return;
}

