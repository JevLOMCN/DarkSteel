// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// AddInfluence @ 143eb43f0

/* WARNING: Enum "EBuildStep": Some values do not have unique names */

void __thiscall
Chaos::FWeightedLatticeImplicitObjectBuilder::AddInfluence
          (FWeightedLatticeImplicitObjectBuilder *this,int param_1,ushort param_2,float param_3,
          bool param_4)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  char *pcVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  lVar11 = (longlong)param_1;
  if ((this->BuildStep != GridValid) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuildStep == EBuildStep::GridValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                         ,0x327,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = 0;
  if (param_1 < *(int *)&(this->BoneData).field_0x18) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pbVar12 = (byte *)(lVar11 * 0x4c + *(longlong *)&(this->BoneData).field_0x10);
  uVar5 = 0;
  if (param_1 < (this->BuildData).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->BuildData).AllocatorInstance.Data;
  FVar1 = pFVar2[lVar11];
  if (param_4) {
    if (FVar1 == (FScriptContainerElement)0x0) {
      return;
    }
  }
  else if (FVar1 != (FScriptContainerElement)0x0) {
    *pbVar12 = 0;
  }
  bVar9 = *pbVar12;
  uVar7 = 0;
  if (bVar9 != 0) {
    do {
      bVar6 = (byte)uVar7;
      if (*(float *)(pbVar12 + uVar7 * 4 + 0x1c) <= param_3 &&
          param_3 != *(float *)(pbVar12 + uVar7 * 4 + 0x1c)) goto LAB_143eb453a;
      uVar7 = (ulonglong)(byte)(bVar6 + 1);
    } while ((byte)(bVar6 + 1) < bVar9);
  }
  bVar6 = bVar9;
  if (bVar9 != 0xc) {
LAB_143eb453a:
    if (bVar9 < 0xc) {
      bVar9 = bVar9 + 1;
      *pbVar12 = bVar9;
    }
    lVar10 = (ulonglong)bVar9 - 1;
    uVar7 = (ulonglong)bVar6;
    if ((longlong)uVar7 < lVar10) {
      pbVar14 = pbVar12 + lVar10 * 4 + 0x1c;
      pbVar15 = pbVar12 + lVar10 * 2 + 2;
      do {
        if (lVar10 < 0xc) {
          if (lVar10 < 1) {
            iVar13 = 0x34d;
            pcVar8 = "Idx > 0";
            goto LAB_143eb4592;
          }
        }
        else {
          iVar13 = 0x34c;
          pcVar8 = "Idx < Data.MaxTotalInfluences";
LAB_143eb4592:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            (pcVar8,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                             ,iVar13,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar10 = lVar10 + -1;
        *(undefined2 *)pbVar15 = *(undefined2 *)(pbVar15 + -2);
        pbVar15 = pbVar15 + -2;
        *(undefined4 *)pbVar14 = *(undefined4 *)(pbVar14 + -4);
        pbVar14 = pbVar14 + -4;
      } while ((longlong)uVar7 < lVar10);
    }
    if ((0xb < bVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InsertIndex < Data.MaxTotalInfluences",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                           ,0x352,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(ushort *)(pbVar12 + uVar7 * 2 + 2) = param_2;
    *(float *)(pbVar12 + uVar7 * 4 + 0x1c) = param_3;
    pFVar2[lVar11] = (FScriptContainerElement)param_4;
  }
  return;
}

// GenerateGrid @ 143ebfeb0

/* WARNING: Enum "EBuildStep": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FWeightedLatticeImplicitObjectBuilder::GenerateGrid
          (FWeightedLatticeImplicitObjectBuilder *this,int param_1,TAABB<double,3> *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  TArray<Chaos::FWeightedLatticeImplicitObjectBuilder::FInfluenceBuildData,TSizedDefaultAllocator<32>_>
  *pTVar4;
  uint uVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *_Dst;
  int iVar10;
  uint uVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  TVector<int,3>_u_0 local_b8;
  int local_a8;
  int iStack_a4;
  int local_a0;
  double local_98;
  double local_90;
  double local_88;
  TUniformGridBase<double,3> local_80;
  
  dVar13 = *(double *)&param_2->MMax - *(double *)&param_2->MMin;
  dVar15 = *(double *)&(param_2->MMax).field_0x8 - *(double *)&(param_2->MMin).field_0x8;
  dVar16 = *(double *)&(param_2->MMax).field_0x10 - *(double *)&(param_2->MMin).field_0x10;
  dVar7 = dVar13;
  if (dVar13 <= dVar15) {
    dVar7 = dVar15;
  }
  iVar9 = 1;
  if (1 < param_1 + -6) {
    iVar9 = param_1 + -6;
  }
  if (dVar7 <= dVar16) {
    dVar7 = dVar16;
  }
  dVar7 = dVar7 / (double)iVar9;
  dVar14 = __real_3ff0000000000000 / dVar7;
  iVar10 = -((int)ROUND(__real_bfe0000000000000 - (dVar13 + dVar13) * dVar14) >> 1);
  iVar9 = -((int)ROUND(__real_bfe0000000000000 - (dVar16 + dVar16) * dVar14) >> 1);
  iVar12 = -((int)ROUND(__real_bfe0000000000000 - (dVar15 + dVar15) * dVar14) >> 1);
  local_b8._s_0.X = 1;
  if (1 < iVar10) {
    local_b8._s_0.X = iVar10;
  }
  local_b8._s_0.Y = 1;
  if (1 < iVar12) {
    local_b8._s_0.Y = iVar12;
  }
  local_b8._s_0.Z = 1;
  if (1 < iVar9) {
    local_b8._s_0.Z = iVar9;
  }
  local_98 = ((double)local_b8._s_0.X + __real_3fe0000000000000) * dVar7 + *(double *)&param_2->MMin
  ;
  local_88 = (double)local_b8._s_0.Z * dVar7 + *(double *)&(param_2->MMin).field_0x10;
  local_90 = (double)local_b8._s_0.Y * dVar7 + *(double *)&(param_2->MMin).field_0x8;
  TUniformGridBase<double,3>::TUniformGridBase<double,3>
            (&local_80,&param_2->MMin,(TVector<double,3> *)&local_98,
             (TVector<int,3> *)&local_b8._s_0,3);
  *(undefined8 *)&this->Grid = local_80.MMinCorner._0_8_;
  *(undefined8 *)&(this->Grid).field_0x8 = local_80.MMinCorner._8_8_;
  *(undefined8 *)&(this->Grid).field_0x10 = local_80.MMinCorner._16_8_;
  *(undefined8 *)&(this->Grid).field_0x18 = local_80.MMaxCorner._0_8_;
  puVar1 = &(this->BoneData).field_0x1c;
  *(undefined8 *)&(this->Grid).field_0x20 = local_80.MMaxCorner._8_8_;
  *(undefined8 *)&(this->Grid).field_0x28 = local_80.MMaxCorner._16_8_;
  *(undefined8 *)&(this->Grid).field_0x30 = local_80.MCells.field0_0x0._0_8_;
  *(undefined8 *)&(this->Grid).field_0x38 = local_80._56_8_;
  *(undefined8 *)&(this->Grid).field_0x40 = local_80.MDx._0_8_;
  *(undefined8 *)&(this->Grid).field_0x48 = local_80.MDx._8_8_;
  *(undefined8 *)&(this->Grid).field_0x50 = local_80.MDx._16_8_;
  *(undefined8 *)&this->BoneData = 0;
  *(undefined4 *)&(this->BoneData).field_0x8 = 0;
  *(undefined4 *)&(this->BoneData).field_0x18 = 0;
  if (*(int *)puVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4c,4,0,(ForAnyElementType *)&(this->BoneData).field_0x10,0,(int *)puVar1);
  }
  local_a8 = *(int *)&(this->Grid).field_0x30 + 1;
  iStack_a4 = *(int *)&(this->Grid).field_0x34 + 1;
  local_a0 = *(int *)&(this->Grid).field_0x38 + 1;
  *(ulonglong *)&this->BoneData = CONCAT44(iStack_a4,local_a8);
  *(int *)&(this->BoneData).field_0x8 = local_a0;
  TArray<Chaos::FWeightedLatticeInfluenceData,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::FWeightedLatticeInfluenceData,TSizedDefaultAllocator<32>_> *)
             &(this->BoneData).field_0x10,
             local_a0 * *(int *)&(this->BoneData).field_0x4 * *(int *)&this->BoneData,Default);
  memset(*(void **)&(this->BoneData).field_0x10,0,
         (longlong)*(int *)&(this->BoneData).field_0x18 * 0x4c);
  pTVar4 = &this->BuildData;
  piVar2 = &(this->BuildData).ArrayMax;
  (this->BuildData).ArrayNum = 0;
  piVar3 = &(this->BuildData).ArrayNum;
  if ((this->BuildData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar4->AllocatorInstance,0,piVar2);
  }
  uVar5 = *(uint *)&(this->BoneData).field_0x18;
  iVar9 = *piVar3;
  if (iVar9 < (int)uVar5) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar5 - iVar9,&pTVar4->AllocatorInstance,piVar3,piVar2);
    DefaultConstructItems<Chaos::FWeightedLatticeImplicitObjectBuilder::FInfluenceBuildData,int>
              ((pTVar4->AllocatorInstance).Data + iVar10,uVar5 - iVar9);
  }
  else {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((int)uVar5 < iVar9) {
      uVar11 = iVar9 - uVar5;
      if ((int)(uVar5 | uVar11) < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (uVar11 != 0) {
        _Dst = (pTVar4->AllocatorInstance).Data + (int)uVar5;
        iVar9 = (*piVar3 - uVar11) - uVar5;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + (int)uVar11,(longlong)iVar9);
        }
        *piVar3 = *piVar3 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&pTVar4->AllocatorInstance,*piVar3,piVar2);
      }
    }
  }
  this->BuildStep = GridValid;
  return;
}

// NormalizeBoneWeights @ 143ec7560

/* WARNING: Enum "EBuildStep": Some values do not have unique names */

void __thiscall
Chaos::FWeightedLatticeImplicitObjectBuilder::NormalizeBoneWeights
          (FWeightedLatticeImplicitObjectBuilder *this)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  byte bVar8;
  ulonglong uVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  
  fVar4 = __real_3dcccccd;
  fVar3 = __real_3f800000;
  fVar2 = __real_322bcc77;
  iVar10 = *(int *)&(this->BoneData).field_0x18;
  uVar12 = 0;
  if (0 < iVar10) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar12 < iVar10) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar15 = 0.0;
      pbVar11 = (byte *)(*(longlong *)&(this->BoneData).field_0x10 + lVar14);
      uVar9 = (ulonglong)*pbVar11;
      if (*pbVar11 == 0) {
LAB_143ec7699:
        *pbVar11 = 0;
      }
      else {
        pfVar7 = (float *)(pbVar11 + 0x1c);
        do {
          fVar15 = fVar15 + *pfVar7;
          pfVar7 = pfVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        if (fVar15 < fVar2) goto LAB_143ec7699;
        uVar6 = 0;
        if ((int)uVar12 < (this->BuildData).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((this->BuildData).AllocatorInstance.Data[lVar13] != (FScriptContainerElement)0x0) &&
           (fVar15 < fVar4)) goto LAB_143ec7699;
      }
      bVar8 = 0;
      if (*pbVar11 != 0) {
        do {
          uVar9 = (ulonglong)bVar8;
          bVar8 = bVar8 + 1;
          *(float *)(pbVar11 + uVar9 * 4 + 0x1c) =
               (fVar3 / fVar15) * *(float *)(pbVar11 + uVar9 * 4 + 0x1c);
        } while (bVar8 < *pbVar11);
      }
      iVar10 = *(int *)&(this->BoneData).field_0x18;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 0x4c;
    } while ((int)uVar12 < iVar10);
  }
  return;
}

