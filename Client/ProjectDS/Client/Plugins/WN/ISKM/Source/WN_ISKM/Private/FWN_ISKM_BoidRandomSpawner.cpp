// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 5

// RemoveAllBoids @ 14a8529d0

void __thiscall
FWN_ISKM_BoidRandomSpawner::RemoveAllBoids
          (FWN_ISKM_BoidRandomSpawner *this,AWN_ISKM_BoidsActor *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar3 = (this->Indices).ArrayNum;
  if (iVar3 != 0) {
    pFVar4 = (this->Indices).AllocatorInstance.Data;
    pFVar2 = pFVar4 + (longlong)iVar3 * 4;
    while( true ) {
      if ((this->Indices).ArrayNum != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar2) break;
      AWN_ISKM_BoidsActor::RemoveBoid(param_1,*(int *)pFVar4);
      pFVar4 = pFVar4 + 4;
    }
    piVar1 = &(this->Indices).ArrayMax;
    (this->Indices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->Indices).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// Start @ 14a855010

void __thiscall
FWN_ISKM_BoidRandomSpawner::Start
          (FWN_ISKM_BoidRandomSpawner *this,FWN_ISKM_BoidRandomSpawnInfo *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  int iVar20;
  TQuat<double> *pTVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  TQuat<double> local_118;
  TQuat<double> local_f8 [6];
  
  if (param_1->NumBoids != 0) {
    if ((param_1->bUseNavInfo == true) && ((param_1->SpawnTiles).ArrayNum != 0)) {
      StartWithNavInfo(this,param_1);
      return;
    }
    FWN_ISKM_BoidRandomSpawnInfo::operator=(&this->SpawnInfo,param_1);
    fVar32 = __real_bf000000;
    fVar31 = (this->SpawnInfo).Radius;
    if (fVar31 <= __real_42c80000) {
      fVar31 = __real_42c80000;
    }
    fVar2 = (this->SpawnInfo).MaxZ;
    fVar3 = (this->SpawnInfo).MinScale;
    fVar4 = (this->SpawnInfo).MinZ;
    bVar6 = (this->SpawnInfo).bTracingToGround;
    fVar30 = fVar31 + fVar31;
    fVar29 = SQRT((float)(this->SpawnInfo).NumBoids);
    fVar5 = (this->SpawnInfo).MinDistance;
    if (fVar5 <= __real_41200000) {
      fVar5 = __real_41200000;
    }
    if (fVar29 <= __real_3f800000) {
      fVar29 = __real_3f800000;
    }
    fVar36 = fVar30 / fVar29;
    if (fVar5 <= fVar30 / fVar29) {
      fVar36 = fVar5;
    }
    fVar33 = fVar36 * __real_3f000000;
    fVar35 = fVar33 * __real_3f000000;
    fVar29 = fVar33 - fVar31;
    fVar5 = (this->SpawnInfo).MaxScale;
    uVar23 = -((int)ROUND(__real_bf000000 - (fVar30 + fVar30) / fVar36) >> 1);
    uVar26 = uVar23 * uVar23;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    piVar1 = &(this->Transforms).ArrayMax;
    if (*piVar1 < (int)uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar26,&(this->Transforms).AllocatorInstance,(this->Transforms).ArrayNum,
                 piVar1);
    }
    fVar30 = __real_38000100;
    iVar27 = 0;
    iVar28 = 0;
    if (0 < (int)uVar23) {
      fVar32 = fVar35 - fVar33 * fVar32;
      do {
        iVar24 = 0;
        do {
          uVar26 = rand();
          fVar33 = ((float)(uVar26 & 0x7fff) * fVar32 * fVar30 - fVar35) +
                   (float)iVar28 * fVar36 + fVar29;
          uVar26 = rand();
          fVar34 = ((float)(uVar26 & 0x7fff) * fVar32 * fVar30 - fVar35) +
                   (float)iVar24 * fVar36 + fVar29;
          if (fVar34 * fVar34 + fVar33 * fVar33 < fVar31 * fVar31) {
            if (bVar6 == false) {
              uVar26 = rand();
              dVar14 = (double)((float)(uVar26 & 0x7fff) * (fVar2 - fVar4) * fVar30 + fVar4);
            }
            else {
              dVar14 = 0.0;
            }
            uVar26 = rand();
            local_118.X = 0.0;
            local_118.Z = 0.0;
            iVar19 = (int)((float)(uVar26 & 0x7fff) * __real_3c348169);
            iVar20 = 0x168;
            if (iVar19 < 0x168) {
              iVar20 = iVar19;
            }
            local_118.Y = (double)iVar20;
            uVar26 = rand();
            dVar8 = (double)((float)(uVar26 & 0x7fff) * (fVar5 - fVar3) * fVar30 + fVar3);
            pTVar21 = UE::Math::TRotator<double>::Quaternion
                                ((TRotator<double> *)&local_118,local_f8);
            dVar9 = pTVar21->X;
            dVar15 = pTVar21->Y;
            dVar16 = pTVar21->Z;
            dVar17 = pTVar21->W;
            iVar20 = (this->Transforms).ArrayNum;
            if (iVar20 == *piVar1) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1060,&(this->Transforms).AllocatorInstance,piVar1);
            }
            (this->Transforms).ArrayNum = iVar20 + 1;
            pFVar7 = (this->Transforms).AllocatorInstance.Data;
            lVar22 = (longlong)iVar20 * 0x60;
            *(double *)(pFVar7 + lVar22) = dVar9;
            *(double *)(pFVar7 + lVar22 + 8) = dVar15;
            *(double *)(pFVar7 + lVar22 + 0x10) = dVar16;
            *(double *)(pFVar7 + lVar22 + 0x10 + 8) = dVar17;
            auVar12._8_4_ = SUB84((double)fVar33,0);
            auVar12._0_8_ = (double)fVar34;
            auVar12._12_4_ = (int)((ulonglong)(double)fVar33 >> 0x20);
            *(undefined1 (*) [16])(pFVar7 + lVar22 + 0x20) = auVar12;
            *(double *)(pFVar7 + lVar22 + 0x30) = dVar14;
            *(double *)(pFVar7 + lVar22 + 0x30 + 8) = 0.0;
            auVar10._8_4_ = SUB84(dVar8,0);
            auVar10._0_8_ = dVar8;
            auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            *(undefined1 (*) [16])(pFVar7 + lVar22 + 0x40) = auVar10;
            *(double *)(pFVar7 + lVar22 + 0x50) = dVar8;
            *(double *)(pFVar7 + lVar22 + 0x50 + 8) = 0.0;
          }
          iVar24 = iVar24 + 1;
        } while (iVar24 < (int)uVar23);
        iVar28 = iVar28 + 1;
      } while (iVar28 < (int)uVar23);
    }
    if (((this->Transforms).ArrayNum < (this->SpawnInfo).NumBoids) && (0 < (int)uVar23)) {
      do {
        fVar32 = (float)iVar27 * fVar36 + fVar29;
        if (fVar31 * fVar31 <= (fVar32 + fVar32) * fVar32) {
          dVar14 = (double)fVar32;
          uVar25 = (ulonglong)uVar23;
          do {
            fVar32 = __real_3c348169;
            if (bVar6 == false) {
              uVar26 = rand();
              dVar8 = (double)((float)(uVar26 & 0x7fff) * (fVar2 - fVar4) * fVar30 + fVar4);
            }
            else {
              dVar8 = 0.0;
            }
            uVar26 = rand();
            local_f8[0].X = 0.0;
            local_f8[0].Z = 0.0;
            iVar24 = (int)((float)(uVar26 & 0x7fff) * fVar32);
            iVar28 = 0x168;
            if (iVar24 < 0x168) {
              iVar28 = iVar24;
            }
            local_f8[0].Y = (double)iVar28;
            uVar26 = rand();
            dVar9 = (double)((float)(uVar26 & 0x7fff) * (fVar5 - fVar3) * fVar30 + fVar3);
            pTVar21 = UE::Math::TRotator<double>::Quaternion
                                ((TRotator<double> *)local_f8,&local_118);
            dVar15 = pTVar21->X;
            dVar16 = pTVar21->Y;
            dVar17 = pTVar21->Z;
            dVar18 = pTVar21->W;
            iVar28 = (this->Transforms).ArrayNum;
            if (iVar28 == *piVar1) {
              iVar28 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1060,&(this->Transforms).AllocatorInstance,piVar1);
            }
            (this->Transforms).ArrayNum = iVar28 + 1;
            pFVar7 = (this->Transforms).AllocatorInstance.Data;
            lVar22 = (longlong)iVar28 * 0x60;
            *(double *)(pFVar7 + lVar22) = dVar15;
            *(double *)(pFVar7 + lVar22 + 8) = dVar16;
            *(double *)(pFVar7 + lVar22 + 0x10) = dVar17;
            *(double *)(pFVar7 + lVar22 + 0x10 + 8) = dVar18;
            auVar13._8_4_ = SUB84(dVar14,0);
            auVar13._0_8_ = dVar14;
            auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
            *(undefined1 (*) [16])(pFVar7 + lVar22 + 0x20) = auVar13;
            *(double *)(pFVar7 + lVar22 + 0x30) = dVar8;
            *(double *)(pFVar7 + lVar22 + 0x30 + 8) = 0.0;
            auVar11._8_4_ = SUB84(dVar9,0);
            auVar11._0_8_ = dVar9;
            auVar11._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            *(undefined1 (*) [16])(pFVar7 + lVar22 + 0x40) = auVar11;
            *(double *)(pFVar7 + lVar22 + 0x50) = dVar9;
            *(double *)(pFVar7 + lVar22 + 0x50 + 8) = 0.0;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        iVar27 = iVar27 + 1;
      } while (iVar27 < (int)uVar23);
    }
    uVar23 = (this->SpawnInfo).NumBoids;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if ((this->Indices).ArrayMax < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar23,&(this->Indices).AllocatorInstance,(this->Indices).ArrayNum,
                 &(this->Indices).ArrayMax);
    }
  }
  return;
}

// StartWithNavInfo @ 14a855750

void __thiscall
FWN_ISKM_BoidRandomSpawner::StartWithNavInfo
          (FWN_ISKM_BoidRandomSpawner *this,FWN_ISKM_BoidRandomSpawnInfo *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  TQuat<double> *pTVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  int iVar31;
  double dVar32;
  TRotator<double> local_138;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  TQuat<double> local_f8 [6];
  
  if (param_1->NumBoids != 0) {
    FWN_ISKM_BoidRandomSpawnInfo::operator=(&this->SpawnInfo,param_1);
    uVar23 = (this->SpawnInfo).SpawnTiles.ArrayNum;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    piVar1 = &(this->Transforms).ArrayMax;
    if (*piVar1 < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar23,&(this->Transforms).AllocatorInstance,(this->Transforms).ArrayNum,
                 piVar1);
    }
    piVar26 = &(this->Transforms).ArrayMax;
    uVar23 = (this->SpawnInfo).NumBoids;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if (*piVar26 < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar23,&(this->Transforms).AllocatorInstance,(this->Transforms).ArrayNum,
                 piVar26);
    }
    fVar19 = __real_38000100;
    bVar10 = (this->SpawnInfo).bTracingToGround;
    fVar2 = (this->SpawnInfo).MinScale;
    iVar31 = (this->Transforms).ArrayNum;
    uVar23 = (this->SpawnInfo).NumBoids;
    fVar3 = (this->SpawnInfo).MinZ;
    fVar4 = (this->SpawnInfo).MaxZ;
    fVar5 = (this->SpawnInfo).MaxScale;
    if (iVar31 < (int)uVar23) {
      dVar16 = (double)(this->SpawnInfo).TileSize;
      do {
        iVar21 = rand();
        iVar25 = (this->SpawnInfo).SpawnTiles.ArrayNum;
        uVar28 = iVar21 % iVar25;
        lVar29 = (longlong)(int)uVar28;
        uVar30 = ~uVar28 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar28 < iVar25) {
          uVar23 = uVar30;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        dVar6 = *(double *)((this->SpawnInfo).SpawnTiles.AllocatorInstance.Data + lVar29 * 0x18);
        uVar23 = 0;
        if ((int)uVar28 < (this->SpawnInfo).SpawnTiles.ArrayNum) {
          uVar23 = uVar30;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        dVar7 = *(double *)((this->SpawnInfo).SpawnTiles.AllocatorInstance.Data + lVar29 * 0x18);
        uVar22 = rand();
        uVar23 = 0;
        if ((int)uVar28 < (this->SpawnInfo).SpawnTiles.ArrayNum) {
          uVar23 = uVar30;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        dVar32 = *(double *)
                  ((this->SpawnInfo).SpawnTiles.AllocatorInstance.Data + lVar29 * 0x18 + 8);
        uVar23 = 0;
        if ((int)uVar28 < (this->SpawnInfo).SpawnTiles.ArrayNum) {
          uVar23 = uVar30;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        dVar8 = *(double *)((this->SpawnInfo).SpawnTiles.AllocatorInstance.Data + lVar29 * 0x18 + 8)
        ;
        uVar23 = rand();
        if (bVar10 == false) {
          uVar28 = rand();
          dVar9 = (double)((float)(uVar28 & 0x7fff) * (fVar4 - fVar3) * fVar19 + fVar3);
        }
        else {
          uVar24 = 0;
          if ((int)uVar28 < (this->SpawnInfo).SpawnTiles.ArrayNum) {
            uVar24 = uVar30;
          }
          if ((uVar24 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          dVar9 = *(double *)
                   ((this->SpawnInfo).SpawnTiles.AllocatorInstance.Data + lVar29 * 0x18 + 0x10);
        }
        uVar28 = rand();
        local_138.Pitch = 0.0;
        local_138.Roll = 0.0;
        iVar21 = (int)((float)(uVar28 & 0x7fff) * __real_3c348169);
        iVar25 = 0x168;
        if (iVar21 < 0x168) {
          iVar25 = iVar21;
        }
        local_138.Yaw = (double)iVar25;
        uVar28 = rand();
        dVar13 = (double)((float)(uVar28 & 0x7fff) * (fVar5 - fVar2) * fVar19 + fVar2);
        pTVar27 = UE::Math::TRotator<double>::Quaternion(&local_138,local_f8);
        local_108 = pTVar27->Z;
        dStack_100 = pTVar27->W;
        dVar17 = pTVar27->X;
        dVar18 = pTVar27->Y;
        iVar25 = (this->Transforms).ArrayNum;
        dVar32 = (double)(float)((double)((float)(uVar23 & 0x7fff) * fVar19) *
                                 ((dVar16 + dVar32) - dVar8) + dVar8);
        local_118 = dVar17;
        dStack_110 = dVar18;
        if (iVar25 == (this->Transforms).ArrayMax) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&(this->Transforms).AllocatorInstance,piVar1);
          (this->Transforms).ArrayNum = iVar25;
        }
        iVar31 = iVar31 + 1;
        (this->Transforms).ArrayNum = iVar25 + 1;
        pFVar11 = (this->Transforms).AllocatorInstance.Data;
        lVar29 = (longlong)iVar25 * 0x60;
        *(double *)(pFVar11 + lVar29) = dVar17;
        *(double *)(pFVar11 + lVar29 + 8) = dVar18;
        *(double *)(pFVar11 + lVar29 + 0x10) = local_108;
        *(double *)(pFVar11 + lVar29 + 0x10 + 8) = dStack_100;
        auVar15._8_4_ = SUB84(dVar32,0);
        auVar15._0_8_ =
             (double)(float)((double)((float)(uVar22 & 0x7fff) * fVar19) *
                             ((dVar16 + dVar6) - dVar7) + dVar7);
        auVar15._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        *(undefined1 (*) [16])(pFVar11 + lVar29 + 0x20) = auVar15;
        *(double *)(pFVar11 + lVar29 + 0x30) = dVar9;
        *(double *)(pFVar11 + lVar29 + 0x30 + 8) = 0.0;
        auVar14._8_4_ = SUB84(dVar13,0);
        auVar14._0_8_ = dVar13;
        auVar14._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(pFVar11 + lVar29 + 0x40) = auVar14;
        *(double *)(pFVar11 + lVar29 + 0x50) = dVar13;
        *(double *)(pFVar11 + lVar29 + 0x50 + 8) = 0.0;
        uVar23 = (this->SpawnInfo).NumBoids;
      } while (iVar31 < (int)uVar23);
    }
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if ((this->Indices).ArrayMax < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar23,&(this->Indices).AllocatorInstance,(this->Indices).ArrayNum,
                 &(this->Indices).ArrayMax);
    }
  }
  return;
}

// Stop @ 14a855f60

void __thiscall FWN_ISKM_BoidRandomSpawner::Stop(FWN_ISKM_BoidRandomSpawner *this)

{
  (this->Transforms).ArrayNum = 0;
  if ((this->Transforms).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->Transforms).AllocatorInstance,0,&(this->Transforms).ArrayMax);
  }
  return;
}

// Update @ 14a856e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWN_ISKM_BoidRandomSpawner::Update(FWN_ISKM_BoidRandomSpawner *this,AWN_ISKM_BoidsActor *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  UWN_ISKM_Profile *pUVar13;
  FName FVar14;
  uint uVar15;
  FName FVar16;
  longlong lVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_1d8 [32];
  FWN_ISKM_BoidInfo local_198;
  double local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((this->Transforms).ArrayNum != 0) {
    if ((this->Indices).ArrayNum == (this->SpawnInfo).NumBoids) {
      (this->Transforms).ArrayNum = 0;
      if ((this->Transforms).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&(this->Transforms).AllocatorInstance,0,&(this->Transforms).ArrayMax)
        ;
      }
    }
    else {
      pUVar13 = TSoftObjectPtr<UWN_ISKM_Profile>::LoadSynchronous(&param_1->Profile);
      if ((param_1 == (AWN_ISKM_BoidsActor *)0x0) || (pUVar13 == (UWN_ISKM_Profile *)0x0)) {
        piVar1 = &(this->Transforms).ArrayMax;
        (this->Transforms).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,0,&(this->Transforms).AllocatorInstance,0,piVar1);
        }
      }
      else {
        uVar15 = 0;
        FVar16 = (this->SpawnInfo).SpecificAnimSequenceName;
        if (FVar16 == (FName)0x0) {
          uVar9 = FMath::RandRange(0,(pUVar13->AnimationInfos).ArrayNum + -1);
          uVar10 = uVar15;
          if ((int)uVar9 < (pUVar13->AnimationInfos).ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pUVar13->AnimationInfos).AllocatorInstance.Data;
          pFVar2 = pFVar3 + (longlong)(int)uVar9 * 0x40 + 8;
          local_c0 = *(undefined8 *)pFVar2;
          uStack_b8 = *(undefined8 *)(pFVar2 + 8);
          FVar16 = *(FName *)(pFVar3 + (longlong)(int)uVar9 * 0x40 + 0x10);
        }
        FVar14 = (this->SpawnInfo).SpecificSkeletalMeshName;
        iVar12 = (pUVar13->SkeletalMeshInfos).ArrayNum;
        if (FVar14 == (FName)0x0) {
          uVar10 = FMath::RandRange(0,iVar12 + -1);
          uVar9 = uVar15;
          if ((int)uVar10 < (pUVar13->SkeletalMeshInfos).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pUVar13->SkeletalMeshInfos).AllocatorInstance.Data;
          pFVar2 = pFVar3 + (longlong)(int)uVar10 * 0x48 + 8;
          local_b0 = *(undefined8 *)pFVar2;
          uStack_a8 = *(undefined8 *)(pFVar2 + 8);
          FVar14 = *(FName *)(pFVar3 + (longlong)(int)uVar10 * 0x48 + 0x10);
        }
        else {
          uVar10 = TArray<FWN_ISKM_SkeletalMeshInfo,TSizedDefaultAllocator<32>_>::
                   FindLastByPredicate<_FWN_ISKM_BoidRandomSpawner::Update_::__l19::<lambda_1>_>
                             (&pUVar13->SkeletalMeshInfos,(<lambda_1>)FVar14,iVar12);
        }
        local_198._SkippedSimulationTime = 0.0;
        local_198._AnimTime = 0.0;
        local_198._BlendingAnimTime = 0.0;
        local_198._AnimTransitionTime = 0.0;
        local_198._bIsValid = false;
        local_198._bIsBacksideOfCamera = false;
        local_198._PrevAnimSequenceName.ComparisonIndex.Value = 0;
        local_198._PrevAnimSequenceName.Number = 0;
        local_198._AnimTransitionInterval = 0.0;
        local_198._BlendingWeight = 0.0;
        local_198._DistFromCamera = 0.0;
        local_198._AnimSpeed = 1.0;
        local_198.Transform.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_198.Transform.Rotation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_198.Transform.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_198._LastSimulationFrameCounter = 0;
        local_198._Actor = (AWN_ISKM_BoidsActor *)0x0;
        local_198.Transform.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_198.Transform.Rotation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_198.Transform.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_198.Transform.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_198.Transform.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_198.Transform.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_198.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_198.Transform.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_198.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_198.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_198.Transform.Scale3D.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_198.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_198.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_198.Transform.Scale3D.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_198.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_198.SkeletalMeshName = FVar14;
        local_198.AnimSequenceName = FVar16;
        local_198._SKMIndex = uVar10;
        uVar9 = FMath::RandRange(0,(this->Transforms).ArrayNum + -1);
        uVar18 = ~uVar9 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar9 < (this->Transforms).ArrayNum) {
          uVar10 = uVar18;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Transforms).AllocatorInstance.Data;
        lVar17 = (longlong)(int)uVar9 * 0x60;
        local_198.Transform.Rotation.XY.m128d_f64 = *(double (*) [2])(pFVar3 + lVar17);
        local_198.Transform.Rotation.ZW.m128d_f64 = *(double (*) [2])(pFVar3 + lVar17 + 0x10);
        pFVar2 = pFVar3 + lVar17 + 0x20;
        dVar6 = *(double *)&pFVar2->field_0x0;
        dVar5 = *(double *)(pFVar2 + 8);
        local_198.Transform.Translation.XY.m128d_f64 = *(double (*) [2])pFVar2;
        dVar7 = *(double *)&pFVar3[lVar17 + 0x30].field_0x0;
        local_198.Transform.Translation.ZW.m128d_f64 = *(double (*) [2])(pFVar3 + lVar17 + 0x30);
        local_198.Transform.Scale3D.XY.m128d_f64 = *(double (*) [2])(pFVar3 + lVar17 + 0x40);
        local_198.Transform.Scale3D.ZW.m128d_f64 = *(double (*) [2])(pFVar3 + lVar17 + 0x50);
        if ((int)uVar9 < (this->Transforms).ArrayNum) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (this->Transforms).ArrayNum;
        pFVar2 = (this->Transforms).AllocatorInstance.Data;
        iVar12 = ~uVar9 + iVar11;
        if (1 < iVar12) {
          iVar12 = 1;
        }
        if (iVar12 != 0) {
          memmove(pFVar2 + lVar17,pFVar2 + (longlong)(iVar11 - iVar12) * 0x60,
                  (longlong)iVar12 * 0x60);
        }
        piVar1 = &(this->Transforms).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,&(this->Transforms).AllocatorInstance,(this->Transforms).ArrayNum,
                   &(this->Transforms).ArrayMax);
        bVar8 = (this->SpawnInfo).bUseNavInfo;
        uVar23 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar24 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        if ((bVar8 == false) && (lVar17 = param_1->_padding_, lVar17 != 0)) {
          uVar23 = (undefined4)*(undefined8 *)(lVar17 + 0x220);
          uVar24 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x220) >> 0x20);
          uVar19 = *(undefined4 *)(lVar17 + 0x210);
          uVar20 = *(undefined4 *)(lVar17 + 0x214);
          uVar21 = *(undefined4 *)(lVar17 + 0x218);
          uVar22 = *(undefined4 *)(lVar17 + 0x21c);
        }
        dVar5 = dVar5 + (double)CONCAT44(uVar22,uVar21);
        local_198.Transform.Translation.ZW.m128d_f64[1] = 0.0;
        local_198.Transform.Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar24,uVar23) + dVar7;
        local_198.Transform.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
        local_198.Transform.Translation.XY.m128d_f64[0] = (double)CONCAT44(uVar20,uVar19) + dVar6;
        local_198.Transform.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
        local_c8 = dVar7;
        iVar11 = AWN_ISKM_BoidsActor::AddBoid
                           (param_1,&local_198,(this->SpawnInfo).bTracingToGround,bVar8);
        piVar1 = &(this->Indices).ArrayMax;
        iVar12 = (this->Indices).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->Indices).AllocatorInstance,piVar1);
        }
        (this->Indices).ArrayNum = iVar12 + 1;
        *(int *)((this->Indices).AllocatorInstance.Data + (longlong)iVar12 * 4) = iVar11;
      }
    }
  }
  return;
}

