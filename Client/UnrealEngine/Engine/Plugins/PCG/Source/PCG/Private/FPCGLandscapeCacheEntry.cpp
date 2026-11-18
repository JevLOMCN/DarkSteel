// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// GetInterpolatedLayerWeights @ 149cc8380

void __thiscall
FPCGLandscapeCacheEntry::GetInterpolatedLayerWeights
          (FPCGLandscapeCacheEntry *this,TVector2<double> *param_1,
          TArray<FPCGLandscapeLayerWeight,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FSafeIndices *pFVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  longlong local_d0;
  TVector2<double>_u_0 local_c8 [2];
  undefined8 local_a8;
  FSafeIndices local_a0 [4];
  
  iVar14 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  uVar3 = (this->LayerData).ArrayNum;
  if (iVar14 < (int)uVar3) {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,uVar3 - iVar14,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    DefaultConstructItems<FPCGLandscapeLayerWeight,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar13 * 0xc,uVar3 - iVar14);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar14) {
      uVar19 = iVar14 - uVar3;
      if (((int)(uVar19 | uVar3) < 0) &&
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
      if (uVar19 != 0) {
        pFVar4 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0xc;
        iVar14 = (*piVar1 - uVar3) - uVar19;
        if (iVar14 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar19 * 0xc,(longlong)iVar14 * 0xc);
        }
        *piVar1 = *piVar1 - uVar19;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  if (this->bDataLoaded != false) {
    local_c8[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
    local_c8[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
    pFVar16 = PCGLandscapeCache::CalcSafeIndices
                        (local_a0,(TVector2<double> *)&local_c8[0]._s_0,this->Stride);
    local_a8._0_4_ = pFVar16->XFraction;
    local_a8._4_4_ = pFVar16->YFraction;
    uVar3 = pFVar16->X0Y0;
    uVar19 = pFVar16->X1Y0;
    uVar7 = pFVar16->X0Y1;
    uVar8 = pFVar16->X1Y1;
    iVar14 = (this->LayerData).ArrayNum;
    if (iVar14 != 0) {
      if ((iVar14 != (this->LayerDataNames).ArrayNum) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("LayerData.Num() == LayerDataNames.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                              ,0xd7,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar9 = __real_3b808081;
      uVar20 = 0;
      if (0 < (this->LayerData).ArrayNum) {
        lVar21 = 0;
        fVar10 = (float)local_a8;
        fVar11 = local_a8._4_4_;
        local_d0 = 0;
        lVar18 = 0;
        do {
          uVar17 = ~uVar20 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar20 < *piVar1) {
            uVar15 = uVar17;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (param_2->AllocatorInstance).Data;
          uVar15 = 0;
          if ((int)uVar20 < (this->LayerDataNames).ArrayNum) {
            uVar15 = uVar17;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined8 *)(pFVar4 + local_d0) =
               *(undefined8 *)((this->LayerDataNames).AllocatorInstance.Data + lVar21 * 8);
          uVar15 = 0;
          if ((int)uVar20 < (this->LayerData).ArrayNum) {
            uVar15 = uVar17;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->LayerData).AllocatorInstance.Data;
          uVar15 = 0;
          if ((int)uVar19 < *(int *)(pFVar5 + lVar18 + 8)) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar2 = *(byte *)((longlong)(int)uVar19 + *(longlong *)(pFVar5 + lVar18));
          uVar15 = 0;
          if ((int)uVar3 < *(int *)(pFVar5 + lVar18 + 8)) {
            uVar15 = ~uVar3 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar15 = 0;
          if ((int)uVar8 < *(int *)(pFVar5 + lVar18 + 8)) {
            uVar15 = ~uVar8 >> 0x1f;
          }
          fVar22 = (float)*(byte *)((longlong)(int)uVar3 + *(longlong *)(pFVar5 + lVar18)) * fVar9;
          fVar22 = ((float)bVar2 * fVar9 - fVar22) * fVar10 + fVar22;
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar2 = *(byte *)((longlong)(int)uVar8 + *(longlong *)(pFVar5 + lVar18));
          uVar15 = 0;
          if ((int)uVar7 < *(int *)(pFVar5 + lVar18 + 8)) {
            uVar15 = ~uVar7 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = pFVar5 + lVar18;
          uVar20 = uVar20 + 1;
          lVar21 = lVar21 + 1;
          lVar18 = lVar18 + 0x10;
          fVar23 = (float)*(byte *)((longlong)(int)uVar7 + *(longlong *)pFVar5) * fVar9;
          *(float *)(pFVar4 + local_d0 + 8) =
               ((((float)bVar2 * fVar9 - fVar23) * fVar10 + fVar23) - fVar22) * fVar11 + fVar22;
          local_d0 = local_d0 + 0xc;
        } while ((int)uVar20 < (this->LayerData).ArrayNum);
      }
    }
  }
  return;
}

// GetInterpolatedPoint @ 149cc8910

void __thiscall
FPCGLandscapeCacheEntry::GetInterpolatedPoint
          (FPCGLandscapeCacheEntry *this,TVector2<double> *param_1,FPCGPoint *param_2,
          UPCGMetadata *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSafeIndices *pFVar3;
  TVector2<double>_u_0 local_48;
  FSafeIndices local_38;
  FSafeIndices local_20;
  
  if (this->bDataLoaded == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDataLoaded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                       ,0x130,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = PCGLandscapeCache::CalcSafeIndices
                     (&local_20,(TVector2<double> *)&local_48._s_0,this->Stride);
  local_38.X0Y0 = pFVar3->X0Y0;
  local_38.X1Y0 = pFVar3->X1Y0;
  local_38.X0Y1 = pFVar3->X0Y1;
  local_38.X1Y1 = pFVar3->X1Y1;
  local_38.XFraction = pFVar3->XFraction;
  local_38.YFraction = pFVar3->YFraction;
  GetInterpolatedPointInternal(this,&local_38,param_2,false);
  GetInterpolatedPointMetadataInternal(this,&local_38,&param_2->MetadataEntry,param_3);
  return;
}

// GetInterpolatedPointHeightOnly @ 149cc89e0

void __thiscall
FPCGLandscapeCacheEntry::GetInterpolatedPointHeightOnly
          (FPCGLandscapeCacheEntry *this,TVector2<double> *param_1,FPCGPoint *param_2,
          UPCGMetadata *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSafeIndices *pFVar3;
  TVector2<double>_u_0 local_48;
  FSafeIndices local_38;
  FSafeIndices local_20;
  
  if (this->bDataLoaded == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDataLoaded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                       ,0x13f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = PCGLandscapeCache::CalcSafeIndices
                     (&local_20,(TVector2<double> *)&local_48._s_0,this->Stride);
  local_38.X0Y0 = pFVar3->X0Y0;
  local_38.X1Y0 = pFVar3->X1Y0;
  local_38.X0Y1 = pFVar3->X0Y1;
  local_38.X1Y1 = pFVar3->X1Y1;
  local_38.XFraction = pFVar3->XFraction;
  local_38.YFraction = pFVar3->YFraction;
  GetInterpolatedPointInternal(this,&local_38,param_2,true);
  GetInterpolatedPointMetadataInternal(this,&local_38,&param_2->MetadataEntry,param_3);
  return;
}

// GetInterpolatedPointInternal @ 149cc8ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPCGLandscapeCacheEntry::GetInterpolatedPointInternal
          (FPCGLandscapeCacheEntry *this,FSafeIndices *param_1,FPCGPoint *param_2,bool param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  uint uVar28;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  longlong local_380;
  char local_378;
  FScriptContainerElement *local_370;
  FScriptContainerElement *local_368;
  FScriptContainerElement *local_360;
  longlong local_358;
  TVector<double>_u_0 local_350;
  FPCGPoint *local_338;
  TMatrix<double> local_318 [2];
  double local_1e0;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_378 = param_3;
  local_338 = param_2;
  if ((this->bDataLoaded == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("bDataLoaded",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                          ,0xea,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->PositionsAndNormals).ArrayNum <= param_1->X1Y1 * 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("2 * Indices.X1Y1 < PositionsAndNormals.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                          ,0xeb,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar14 = (this->PositionsAndNormals).ArrayNum;
  uVar28 = param_1->X0Y0 * 2;
  uVar18 = 0;
  if ((int)uVar28 < iVar14) {
    uVar18 = ~uVar28 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_388 = (longlong)(int)uVar28;
    local_380 = (longlong)iVar14;
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
  iVar14 = (this->PositionsAndNormals).ArrayNum;
  uVar18 = param_1->X1Y0 * 2;
  local_360 = (FScriptContainerElement *)((longlong)(int)uVar28 * 3);
  local_368 = (this->PositionsAndNormals).AllocatorInstance.Data;
  uVar28 = 0;
  if ((int)uVar18 < iVar14) {
    uVar28 = ~uVar18 >> 0x1f;
  }
  if (uVar28 == 0) {
    local_388 = (longlong)(int)uVar18;
    local_380 = (longlong)iVar14;
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
  iVar14 = (this->PositionsAndNormals).ArrayNum;
  uVar28 = param_1->X0Y1 * 2;
  local_358 = (longlong)(int)uVar18 * 3;
  local_370 = (this->PositionsAndNormals).AllocatorInstance.Data;
  uVar18 = 0;
  if ((int)uVar28 < iVar14) {
    uVar18 = ~uVar28 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_388 = (longlong)(int)uVar28;
    local_380 = (longlong)iVar14;
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
  iVar14 = (this->PositionsAndNormals).ArrayNum;
  pFVar2 = (this->PositionsAndNormals).AllocatorInstance.Data;
  lVar15 = (longlong)(int)uVar28;
  uVar28 = param_1->X1Y1 * 2;
  uVar18 = 0;
  if ((int)uVar28 < iVar14) {
    uVar18 = ~uVar28 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_388 = (longlong)(int)uVar28;
    local_380 = (longlong)iVar14;
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
  dVar6 = (double)param_1->XFraction;
  lVar16 = (longlong)(int)uVar28;
  pFVar3 = (this->PositionsAndNormals).AllocatorInstance.Data;
  dVar21 = (double)param_1->YFraction;
  dVar26 = (*(double *)(local_370 + local_358 * 8) -
           *(double *)(local_368 + (longlong)local_360 * 8)) * dVar6 +
           *(double *)(local_368 + (longlong)local_360 * 8);
  dVar25 = (*(double *)(local_370 + local_358 * 8 + 0x10) -
           *(double *)(local_368 + (longlong)local_360 * 8 + 0x10)) * dVar6 +
           *(double *)(local_368 + (longlong)local_360 * 8 + 0x10);
  dVar23 = (*(double *)(local_370 + local_358 * 8 + 8) -
           *(double *)(local_368 + (longlong)local_360 * 8 + 8)) * dVar6 +
           *(double *)(local_368 + (longlong)local_360 * 8 + 8);
  local_350._s_0.Y =
       (((*(double *)(pFVar3 + lVar16 * 0x18 + 8) - *(double *)(pFVar2 + lVar15 * 0x18 + 8)) * dVar6
        + *(double *)(pFVar2 + lVar15 * 0x18 + 8)) - dVar23) * dVar21 + dVar23;
  local_350._s_0.X =
       (((*(double *)(pFVar3 + lVar16 * 0x18) - *(double *)(pFVar2 + lVar15 * 0x18)) * dVar6 +
        *(double *)(pFVar2 + lVar15 * 0x18)) - dVar26) * dVar21 + dVar26;
  local_350._s_0.Z =
       (((*(double *)(pFVar3 + lVar16 * 0x18 + 0x10) - *(double *)(pFVar2 + lVar15 * 0x18 + 0x10)) *
         dVar6 + *(double *)(pFVar2 + lVar15 * 0x18 + 0x10)) - dVar25) * dVar21 + dVar25;
  iVar14 = UPCGBlueprintHelpers::ComputeSeedFromPosition((TVector<double> *)&local_350._s_0);
  local_358 = CONCAT44(local_358._4_4_,iVar14);
  if (local_378 == '\0') {
    iVar14 = (this->PositionsAndNormals).ArrayNum;
    uVar28 = param_1->X0Y0 * 2 + 1;
    uVar18 = 0;
    if ((int)uVar28 < iVar14) {
      uVar18 = ~uVar28 >> 0x1f;
    }
    if (uVar18 == 0) {
      local_388 = (longlong)(int)uVar28;
      local_380 = (longlong)iVar14;
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
    iVar14 = (this->PositionsAndNormals).ArrayNum;
    pFVar2 = (this->PositionsAndNormals).AllocatorInstance.Data;
    lVar15 = (longlong)(int)uVar28;
    uVar28 = param_1->X1Y0 * 2 + 1;
    uVar18 = 0;
    if ((int)uVar28 < iVar14) {
      uVar18 = ~uVar28 >> 0x1f;
    }
    if (uVar18 == 0) {
      local_388 = (longlong)(int)uVar28;
      local_380 = (longlong)iVar14;
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
    iVar14 = (this->PositionsAndNormals).ArrayNum;
    pFVar3 = (this->PositionsAndNormals).AllocatorInstance.Data;
    lVar16 = (longlong)(int)uVar28;
    uVar28 = param_1->X0Y1 * 2 + 1;
    uVar18 = 0;
    if ((int)uVar28 < iVar14) {
      uVar18 = ~uVar28 >> 0x1f;
    }
    local_370._0_4_ = uVar28;
    if (uVar18 == 0) {
      local_388 = (longlong)(int)uVar28;
      local_380 = (longlong)iVar14;
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
    iVar14 = (this->PositionsAndNormals).ArrayNum;
    local_360 = (this->PositionsAndNormals).AllocatorInstance.Data;
    local_368 = (FScriptContainerElement *)((longlong)(int)(uint)local_370 * 3);
    uVar28 = param_1->X1Y1 * 2 + 1;
    local_370 = (FScriptContainerElement *)CONCAT44(local_370._4_4_,uVar28);
    uVar18 = 0;
    if ((int)uVar28 < iVar14) {
      uVar18 = ~uVar28 >> 0x1f;
    }
    if (uVar18 == 0) {
      local_388 = (longlong)(int)uVar28;
      local_380 = (longlong)iVar14;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar28 = (uint)local_370;
    }
    dVar25 = *(double *)(pFVar3 + lVar16 * 0x18);
    dVar6 = *(double *)(pFVar3 + lVar16 * 0x18 + 8);
    dVar23 = *(double *)(pFVar3 + lVar16 * 0x18 + 0x10);
    lVar17 = (longlong)(int)uVar28;
    pFVar4 = (this->PositionsAndNormals).AllocatorInstance.Data;
    dVar26 = dVar6 * dVar6 + dVar25 * dVar25 + dVar23 * dVar23;
    if (dVar26 == __real_3ff0000000000000) {
      uVar1 = *(double *)(pFVar3 + lVar16 * 0x18 + 8);
      uVar7 = *(double *)(pFVar3 + lVar16 * 0x18 + 0x10);
      uVar8 = *(double *)(pFVar3 + lVar16 * 0x18);
    }
    else {
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      if (__real_3e45798ee0000000 <= dVar26) {
        dVar26 = __real_3ff0000000000000 / SQRT(dVar26);
        uVar1 = dVar26 * dVar6;
        uVar7 = dVar26 * dVar23;
        uVar8 = dVar26 * dVar25;
      }
    }
    dVar25 = *(double *)(pFVar2 + lVar15 * 0x18);
    dVar6 = *(double *)(pFVar2 + lVar15 * 0x18 + 8);
    dVar23 = *(double *)(pFVar2 + lVar15 * 0x18 + 0x10);
    dVar26 = dVar6 * dVar6 + dVar25 * dVar25 + dVar23 * dVar23;
    if (dVar26 == __real_3ff0000000000000) {
      uVar22 = *(double *)(pFVar2 + lVar15 * 0x18);
      uVar9 = *(double *)(pFVar2 + lVar15 * 0x18 + 8);
      uVar10 = *(double *)(pFVar2 + lVar15 * 0x18 + 0x10);
    }
    else {
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar26) {
        dVar26 = __real_3ff0000000000000 / SQRT(dVar26);
        uVar22 = dVar26 * dVar25;
        uVar9 = dVar26 * dVar6;
        uVar10 = dVar26 * dVar23;
      }
    }
    dVar21 = (double)param_1->XFraction;
    dVar26 = ((double)uVar1 - (double)uVar9) * dVar21 + (double)uVar9;
    dVar6 = ((double)uVar7 - (double)uVar10) * dVar21 + (double)uVar10;
    dVar23 = ((double)uVar8 - (double)uVar22) * dVar21 + (double)uVar22;
    dVar25 = dVar26 * dVar26 + dVar23 * dVar23 + dVar6 * dVar6;
    uVar1 = dVar26;
    uVar7 = dVar6;
    uVar8 = dVar23;
    if ((dVar25 != __real_3ff0000000000000) &&
       (uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar25)) {
      dVar25 = __real_3ff0000000000000 / SQRT(dVar25);
      uVar1 = dVar26 * dVar25;
      uVar7 = dVar6 * dVar25;
      uVar8 = dVar23 * dVar25;
    }
    dVar25 = *(double *)(pFVar4 + lVar17 * 0x18 + 8);
    dVar6 = *(double *)(pFVar4 + lVar17 * 0x18 + 0x10);
    dVar23 = dVar25 * dVar25 +
             *(double *)(pFVar4 + lVar17 * 0x18) * *(double *)(pFVar4 + lVar17 * 0x18) +
             dVar6 * dVar6;
    if (dVar23 == __real_3ff0000000000000) {
      uVar22 = *(double *)(pFVar4 + lVar17 * 0x18 + 0x10);
      uVar9 = *(double *)(pFVar4 + lVar17 * 0x18 + 8);
      uVar10 = *(double *)(pFVar4 + lVar17 * 0x18);
    }
    else {
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      if (__real_3e45798ee0000000 <= dVar23) {
        dVar23 = __real_3ff0000000000000 / SQRT(dVar23);
        uVar22 = dVar23 * dVar6;
        uVar9 = dVar23 * dVar25;
        uVar10 = dVar23 * *(double *)(pFVar4 + lVar17 * 0x18);
      }
    }
    dVar25 = *(double *)(local_360 + (longlong)local_368 * 8 + 8) *
             *(double *)(local_360 + (longlong)local_368 * 8 + 8) +
             *(double *)(local_360 + (longlong)local_368 * 8) *
             *(double *)(local_360 + (longlong)local_368 * 8) +
             *(double *)(local_360 + (longlong)local_368 * 8 + 0x10) *
             *(double *)(local_360 + (longlong)local_368 * 8 + 0x10);
    if (dVar25 == __real_3ff0000000000000) {
      uVar24 = *(double *)(local_360 + (longlong)local_368 * 8);
      uVar11 = *(double *)(local_360 + (longlong)local_368 * 8 + 8);
      uVar12 = *(double *)(local_360 + (longlong)local_368 * 8 + 0x10);
    }
    else {
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar25) {
        dVar25 = __real_3ff0000000000000 / SQRT(dVar25);
        uVar24 = dVar25 * *(double *)(local_360 + (longlong)local_368 * 8);
        uVar11 = dVar25 * *(double *)(local_360 + (longlong)local_368 * 8 + 8);
        uVar12 = dVar25 * *(double *)(local_360 + (longlong)local_368 * 8 + 0x10);
      }
    }
    dVar23 = ((double)uVar9 - (double)uVar11) * dVar21 + (double)uVar11;
    dVar6 = ((double)uVar10 - (double)uVar24) * dVar21 + (double)uVar24;
    dVar26 = ((double)uVar22 - (double)uVar12) * dVar21 + (double)uVar12;
    dVar25 = dVar23 * dVar23 + dVar6 * dVar6 + dVar26 * dVar26;
    uVar22 = dVar26;
    uVar9 = dVar23;
    uVar10 = dVar6;
    if ((dVar25 != __real_3ff0000000000000) &&
       (uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar25)) {
      dVar25 = __real_3ff0000000000000 / SQRT(dVar25);
      uVar22 = dVar26 * dVar25;
      uVar9 = dVar23 * dVar25;
      uVar10 = dVar6 * dVar25;
    }
    dVar25 = (double)param_1->YFraction;
    dVar6 = ((double)uVar10 - (double)uVar8) * dVar25 + (double)uVar8;
    dVar27 = ((double)uVar22 - (double)uVar7) * dVar25 + (double)uVar7;
    dVar23 = ((double)uVar9 - (double)uVar1) * dVar25 + (double)uVar1;
    uVar19 = SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar20 = (uint)((ulonglong)dVar6 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    local_1e0 = (double)CONCAT44(uVar20,uVar19);
    dVar26 = dVar27 * dVar27 - (double)CONCAT44(uVar20,uVar19) * dVar6;
    uVar28 = SUB84(dVar27 * dVar23,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar18 = (uint)((ulonglong)(dVar27 * dVar23) >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    dVar21 = (double)CONCAT44(uVar20,uVar19) * dVar23;
    dVar25 = dVar23 * dVar23 + dVar6 * dVar6 + dVar27 * dVar27;
    local_318[0].M[2][0] = dVar6;
    local_318[0].M[2][1] = dVar23;
    local_318[0].M[2][2] = dVar27;
    if ((dVar25 != __real_3ff0000000000000) &&
       (local_318[0].M[2][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       local_318[0].M[2][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       local_318[0].M[2][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar25)) {
      dVar25 = __real_3ff0000000000000 / SQRT(dVar25);
      local_318[0].M[2][0] = dVar6 * dVar25;
      local_318[0].M[2][1] = dVar23 * dVar25;
      local_318[0].M[2][2] = dVar25 * dVar27;
    }
    dVar25 = dVar26 * dVar26 + dVar21 * dVar21 +
             (double)CONCAT44(uVar18,uVar28) * (double)CONCAT44(uVar18,uVar28);
    local_318[0].M[1][1] = dVar26;
    local_318[0].M[1][2] = (double)CONCAT44(uVar18,uVar28);
    local_318[0].M[1][0] = dVar21;
    if ((dVar25 != __real_3ff0000000000000) &&
       (local_318[0].M[1][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       local_318[0].M[1][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       local_318[0].M[1][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar25)) {
      dVar25 = __real_3ff0000000000000 / SQRT(dVar25);
      local_318[0].M[1][1] = dVar26 * dVar25;
      local_318[0].M[1][2] = (double)CONCAT44(uVar18,uVar28) * dVar25;
      local_318[0].M[1][0] = dVar21 * dVar25;
    }
    dVar25 = dVar27 * dVar27 + (double)CONCAT44(uVar20,uVar19) * (double)CONCAT44(uVar20,uVar19);
    if (dVar25 == __real_3ff0000000000000) {
      local_318[0].M[0][0] = dVar27;
      local_318[0].M[0][1] = 0.0;
      local_318[0].M[0][2] = local_1e0;
    }
    else {
      local_318[0].M[0][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_318[0].M[0][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_318[0].M[0][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar25) {
        local_318[0].M[0][0] = dVar27 * (__real_3ff0000000000000 / SQRT(dVar25));
        local_318[0].M[0][1] = 0.0;
        local_318[0].M[0][2] =
             (__real_3ff0000000000000 / SQRT(dVar25)) * (double)CONCAT44(uVar20,uVar19);
      }
    }
    local_318[0].M[3][0] = local_350._s_0.X;
    local_318[0].M[3][1] = local_350._s_0.Y;
    local_318[0].M[3][2] = local_350._s_0.Z;
    local_318[0].M[0][3] = 0.0;
    local_318[0].M[1][3] = 0.0;
    local_318[0].M[2][3] = 0.0;
    local_318[0].M[3][3] = __real_3ff0000000000000;
    UE::Math::TTransform<double>::SetFromMatrix(&local_148,local_318);
    param_2 = local_338;
    FPCGPoint::FPCGPoint(local_338,&local_148,__real_3f800000,(int)local_358);
  }
  else {
    local_1a8.Translation.XY.m128d_f64[0] = local_350._s_0.X;
    local_1a8.Translation.XY.m128d_f64[1] = local_350._s_0.Y;
    local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_1a8.Translation.ZW.m128d_f64[0] = local_350._s_0.Z;
    local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
    FPCGPoint::FPCGPoint(param_2,&local_1a8,__real_3f800000,iVar14);
  }
  uVar1 = *(undefined8 *)&(this->PointHalfSize).field0_0x0;
  uVar28 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 8);
  uVar18 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 0xc);
  uVar19 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 0x10);
  uVar20 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 0x14);
  (param_2->BoundsMin).field0_0x0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  uVar18 = uVar18 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar19 = uVar19 ^ _UNK_15066df78;
  uVar20 = uVar20 ^ _UNK_15066df7c;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 8) =
       uVar28 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 0xc) = uVar18;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 0x10) = uVar19;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 0x14) = uVar20;
  dVar25 = (this->PointHalfSize).field0_0x0._s_0.Y;
  (param_2->BoundsMax).field0_0x0._s_0.X = (this->PointHalfSize).field0_0x0._s_0.X;
  (param_2->BoundsMax).field0_0x0._s_0.Y = dVar25;
  (param_2->BoundsMax).field0_0x0._s_0.Z = (this->PointHalfSize).field0_0x0._s_0.Z;
  return;
}

// GetInterpolatedPointMetadataInternal @ 149cc96d0

void __thiscall
FPCGLandscapeCacheEntry::GetInterpolatedPointMetadataInternal
          (FPCGLandscapeCacheEntry *this,FSafeIndices *param_1,long64 *param_2,UPCGMetadata *param_3
          )

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<float> *this_01;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float local_res8 [2];
  float local_98 [4];
  FName local_88;
  FPCGMetadataDomainID local_80 [4];
  
  if (((this->bDataLoaded != false) && (param_3 != (UPCGMetadata *)0x0)) &&
     ((this->LayerData).ArrayNum != 0)) {
    UPCGMetadata::InitializeOnSet(param_3,param_2,-1,(UPCGMetadata *)0x0,-1,(UPCGMetadata *)0x0);
    if (((this->LayerData).ArrayNum != (this->LayerDataNames).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LayerData.Num() == LayerDataNames.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                           ,0x11a,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar5 = __real_3b808081;
    uVar11 = 0;
    if (0 < (this->LayerData).ArrayNum) {
      lVar12 = 0;
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (this->LayerDataNames).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->LayerDataNames).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar11 < (this->LayerData).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->LayerData).AllocatorInstance.Data;
        if ((*(int *)(pFVar3 + lVar10 + 8) <= param_1->X1Y1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Indices.X1Y1 < CurrentLayerData.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                               ,0x120,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_88 = *(FName *)(pFVar2 + lVar12 * 8);
        local_80[0].Flag = PCGMetadataDomainID::Default.Flag;
        local_80[0]._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_80[0].CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        local_80[0].DebugName = PCGMetadataDomainID::Default.DebugName;
        local_res8[0] = 0.0;
        this_00 = UPCGMetadata::FindOrCreateMetadataDomain(param_3,local_80);
        if ((this_00 != (FPCGMetadataDomain *)0x0) &&
           (this_01 = FPCGMetadataDomain::FindOrCreateAttribute<float>
                                (this_00,local_88,local_res8,true,true,true),
           this_01 != (FPCGMetadataAttribute<float> *)0x0)) {
          uVar7 = param_1->X1Y0;
          uVar9 = 0;
          if ((int)uVar7 < *(int *)(pFVar3 + lVar10 + 8)) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar1 = *(byte *)((longlong)(int)uVar7 + *(longlong *)(pFVar3 + lVar10));
          uVar7 = param_1->X0Y0;
          uVar9 = 0;
          if ((int)uVar7 < *(int *)(pFVar3 + lVar10 + 8)) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar9 = param_1->X1Y1;
          uVar8 = 0;
          if ((int)uVar9 < *(int *)(pFVar3 + lVar10 + 8)) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          fVar13 = (float)*(byte *)((longlong)(int)uVar7 + *(longlong *)(pFVar3 + lVar10)) * fVar5;
          fVar13 = ((float)bVar1 * fVar5 - fVar13) * param_1->XFraction + fVar13;
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar1 = *(byte *)((longlong)(int)uVar9 + *(longlong *)(pFVar3 + lVar10));
          uVar7 = param_1->X0Y1;
          uVar9 = 0;
          if ((int)uVar7 < *(int *)(pFVar3 + lVar10 + 8)) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar14 = (float)*(byte *)((longlong)(int)uVar7 + *(longlong *)(pFVar3 + lVar10)) * fVar5;
          local_98[0] = ((((float)bVar1 * fVar5 - fVar14) * param_1->XFraction + fVar14) - fVar13) *
                        param_1->YFraction + fVar13;
          FPCGMetadataAttribute<float>::SetValue(this_01,*param_2,local_98);
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar11 < (this->LayerData).ArrayNum);
    }
  }
  return;
}

// GetInterpolatedPointMetadataOnly @ 149cc9b40

void __thiscall
FPCGLandscapeCacheEntry::GetInterpolatedPointMetadataOnly
          (FPCGLandscapeCacheEntry *this,TVector2<double> *param_1,long64 *param_2,
          UPCGMetadata *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSafeIndices *pFVar3;
  TVector2<double>_u_0 local_48;
  FSafeIndices local_38;
  FSafeIndices local_20;
  
  if (this->bDataLoaded == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDataLoaded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                       ,0x138,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = PCGLandscapeCache::CalcSafeIndices
                     (&local_20,(TVector2<double> *)&local_48._s_0,this->Stride);
  local_38.X0Y0 = pFVar3->X0Y0;
  local_38.X1Y0 = pFVar3->X1Y0;
  local_38.X0Y1 = pFVar3->X0Y1;
  local_38.X1Y1 = pFVar3->X1Y1;
  local_38.XFraction = pFVar3->XFraction;
  local_38.YFraction = pFVar3->YFraction;
  GetInterpolatedPointMetadataInternal(this,&local_38,param_2,param_3);
  return;
}

// GetMemorySize @ 149cca080

int __thiscall FPCGLandscapeCacheEntry::GetMemorySize(FPCGLandscapeCacheEntry *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LayerData).ArrayNum;
  pFVar2 = (this->LayerData).AllocatorInstance.Data;
  iVar4 = (this->PositionsAndNormals).ArrayMax * 0x18;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LayerData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    iVar4 = iVar4 + *(int *)(pFVar2 + 0xc);
    pFVar2 = pFVar2 + 0x10;
  }
  return iVar4;
}

// GetPoint @ 149ccabc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPCGLandscapeCacheEntry::GetPoint
          (FPCGLandscapeCacheEntry *this,int param_1,FPCGPoint *param_2,UPCGMetadata *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  float fVar9;
  FPCGMetadataDomainID FVar10;
  bool bVar11;
  longlong lVar12;
  long64 lVar13;
  FPCGMetadataAttribute<float> *this_00;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  uint local_288;
  float local_284;
  undefined1 local_280 [16];
  double local_270;
  UPCGMetadata *local_268;
  FPCGPoint *local_260;
  undefined1 local_258 [16];
  double local_248;
  undefined1 local_240 [16];
  double local_230;
  TMatrix<double> local_228;
  double local_1a8;
  double local_1a0;
  double local_198;
  FName local_190;
  FPCGMetadataDomainID FStack_188;
  FPCGAttributeIdentifier local_178;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_288 = param_1;
  local_268 = param_3;
  local_260 = param_2;
  if (((this->bDataLoaded == false) || (param_1 < 0)) ||
     ((this->PositionsAndNormals).ArrayNum <= param_1 * 2)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bDataLoaded && PointIndex >= 0 && 2 * PointIndex < PositionsAndNormals.Num()"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                        ,0x97,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = (this->PositionsAndNormals).ArrayNum;
  uVar15 = param_1 * 2;
  uVar21 = 0;
  if ((int)uVar15 < iVar4) {
    uVar21 = ~uVar15 >> 0x1f;
  }
  if (uVar21 == 0) {
    local_298 = (longlong)(int)uVar15;
    local_290 = (longlong)iVar4;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = (this->PositionsAndNormals).ArrayNum;
  pFVar5 = (this->PositionsAndNormals).AllocatorInstance.Data;
  uVar14 = uVar15 + 1;
  uVar21 = 0;
  if ((int)uVar14 < iVar4) {
    uVar21 = ~uVar14 >> 0x1f;
  }
  if (uVar21 == 0) {
    local_298 = (longlong)(int)uVar14;
    local_290 = (longlong)iVar4;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_228.M[0][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  lVar12 = (longlong)(int)uVar14;
  pFVar6 = (this->PositionsAndNormals).AllocatorInstance.Data;
  local_228.M[2][0] = *(double *)(pFVar6 + lVar12 * 0x18);
  local_228.M[2][1] = *(double *)(pFVar6 + lVar12 * 0x18 + 8);
  dVar2 = *(double *)(pFVar6 + lVar12 * 0x18 + 0x10);
  uVar21 = SUB84(local_228.M[2][0],0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)local_228.M[2][0] >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  dVar8 = dVar2 * dVar2;
  local_228.M[1][0] = local_228.M[2][1] * (double)CONCAT44(uVar14,uVar21);
  local_258._8_8_ = dVar8 - local_228.M[2][0] * (double)CONCAT44(uVar14,uVar21);
  uVar22 = SUB84(local_228.M[2][1] * dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar23 = (uint)((ulonglong)(local_228.M[2][1] * dVar2) >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  dVar18 = local_228.M[2][1] * local_228.M[2][1] + local_228.M[2][0] * local_228.M[2][0] + dVar8;
  local_228.M[1][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  if (dVar18 == __real_3ff0000000000000) {
    pFVar1 = pFVar6 + lVar12 * 0x18;
    local_280 = *(undefined1 (*) [16])pFVar1;
    local_270 = *(double *)(pFVar6 + lVar12 * 0x18 + 0x10);
    local_228.M[2][0] = *(double *)&pFVar1->field_0x0;
    local_228.M[2][1] = *(double *)(pFVar1 + 8);
  }
  else if (__real_3e45798ee0000000 <= dVar18) {
    local_1a8 = __real_3ff0000000000000 / SQRT(dVar18);
    local_228.M[2][0] = local_228.M[2][0] * local_1a8;
    local_228.M[2][1] = local_228.M[2][1] * local_1a8;
    local_270 = dVar2 * local_1a8;
    local_280._8_8_ = local_228.M[2][1];
    local_280._0_8_ = local_228.M[2][0];
  }
  else {
    local_270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_280 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    local_228.M[2][0] = local_228.M[0][0];
    local_228.M[2][1] = local_228.M[1][1];
  }
  dVar18 = (double)local_258._8_8_ * (double)local_258._8_8_ + local_228.M[1][0] * local_228.M[1][0]
           + (double)CONCAT44(uVar23,uVar22) * (double)CONCAT44(uVar23,uVar22);
  if (dVar18 == __real_3ff0000000000000) {
    local_248 = (double)CONCAT44(uVar23,uVar22);
LAB_149ccaed8:
    local_228.M[1][1] = (double)local_258._8_8_;
  }
  else {
    if (__real_3e45798ee0000000 <= dVar18) {
      local_1a0 = __real_3ff0000000000000 / SQRT(dVar18);
      local_248 = local_1a0 * (double)CONCAT44(uVar23,uVar22);
      local_258._8_8_ = (double)local_258._8_8_ * local_1a0;
      local_228.M[1][0] = local_228.M[1][0] * local_1a0;
      goto LAB_149ccaed8;
    }
    local_248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    local_228.M[1][0] = local_228.M[0][0];
  }
  dVar8 = (double)CONCAT44(uVar14,uVar21) * (double)CONCAT44(uVar14,uVar21) + dVar8;
  if (dVar8 == __real_3ff0000000000000) {
    local_230 = (double)CONCAT44(uVar14,uVar21);
  }
  else {
    if (dVar8 < __real_3e45798ee0000000) {
      local_240 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
      local_230 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_149ccaf55;
    }
    local_198 = __real_3ff0000000000000 / SQRT(dVar8);
    local_230 = local_198 * (double)CONCAT44(uVar14,uVar21);
    dVar2 = dVar2 * local_198;
  }
  uVar19 = 0;
  uVar20 = 0;
  local_240._8_8_ = 0;
  local_228.M[0][0] = dVar2;
LAB_149ccaf55:
  pFVar6 = pFVar5 + (longlong)(int)uVar15 * 0x18;
  local_228.M[3][0] = *(double *)pFVar6;
  local_228.M[3][1] = *(double *)(pFVar6 + 8);
  local_228.M[3][2] = *(double *)(pFVar5 + (longlong)(int)uVar15 * 0x18 + 0x10);
  local_228.M[0][1] = (double)CONCAT44(uVar20,uVar19);
  local_228.M[0][3] = 0.0;
  local_228.M[1][3] = 0.0;
  local_228.M[2][2] = local_270;
  local_228.M[2][3] = 0.0;
  local_228.M[3][3] = __real_3ff0000000000000;
  local_228.M[0][2] = local_230;
  local_228.M[1][2] = local_248;
  UE::Math::TTransform<double>::SetFromMatrix(&local_158,&local_228);
  FPCGPoint::FPCGPoint(param_2,&local_158,__real_3f800000,param_1 + 1);
  uVar3 = *(undefined8 *)&(this->PointHalfSize).field0_0x0;
  uVar15 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 8);
  uVar21 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 0xc);
  uVar14 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 0x10);
  uVar22 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 0x14);
  (param_2->BoundsMin).field0_0x0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000);
  uVar21 = uVar21 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar14 = uVar14 ^ _UNK_15066df78;
  uVar22 = uVar22 ^ _UNK_15066df7c;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 8) =
       uVar15 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 0xc) = uVar21;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 0x10) = uVar14;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 0x14) = uVar22;
  dVar2 = (this->PointHalfSize).field0_0x0._s_0.Y;
  (param_2->BoundsMax).field0_0x0._s_0.X = (this->PointHalfSize).field0_0x0._s_0.X;
  (param_2->BoundsMax).field0_0x0._s_0.Y = dVar2;
  (param_2->BoundsMax).field0_0x0._s_0.Z = (this->PointHalfSize).field0_0x0._s_0.Z;
  if ((param_3 != (UPCGMetadata *)0x0) && (iVar4 = (this->LayerData).ArrayNum, iVar4 != 0)) {
    if (iVar4 != (this->LayerDataNames).ArrayNum) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("LayerData.Num() == LayerDataNames.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                          ,0xaa,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar13 = UPCGMetadata::AddEntry(param_3,-1);
    uVar15 = 0;
    param_2->MetadataEntry = lVar13;
    fVar9 = __real_3b808081;
    if (0 < (this->LayerData).ArrayNum) {
      lVar17 = 0;
      lVar12 = 0;
      do {
        iVar4 = (this->LayerDataNames).ArrayNum;
        uVar21 = 0;
        if ((int)uVar15 < iVar4) {
          uVar21 = ~uVar15 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_298 = (longlong)(int)uVar15;
          local_290 = (longlong)iVar4;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar4 = (this->LayerData).ArrayNum;
        pFVar5 = (this->LayerDataNames).AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar15 < iVar4) {
          uVar21 = ~uVar15 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_298 = lVar17;
          local_290 = (longlong)iVar4;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        local_190 = *(FName *)(pFVar5 + lVar17 * 8);
        pFVar5 = (this->LayerData).AllocatorInstance.Data;
        FStack_188 = PCGMetadataDomainID::Default;
        FVar10 = FStack_188;
        FStack_188._0_8_ = PCGMetadataDomainID::Default._0_8_;
        local_178.MetadataDomain.Flag = FStack_188.Flag;
        local_178.MetadataDomain._1_3_ = FStack_188._1_3_;
        local_178.MetadataDomain.CustomFlag = FStack_188.CustomFlag;
        local_178.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        FStack_188 = FVar10;
        local_178.Name = local_190;
        this_00 = (FPCGMetadataAttribute<float> *)
                  UPCGMetadata::GetMutableAttribute(local_268,&local_178);
        if (this_00 != (FPCGMetadataAttribute<float> *)0x0) {
          if ((short)this_00->_padding_ != 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Attribute->GetTypeId() == PCG::Private::MetadataTypes<float>::Id",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                                ,0xb4,L"");
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          lVar16 = (longlong)(int)local_288;
          iVar4 = *(int *)(pFVar5 + lVar12 + 8);
          uVar21 = 0;
          if ((int)local_288 < iVar4) {
            uVar21 = ~local_288 >> 0x1f;
          }
          if (uVar21 == 0) {
            local_298 = lVar16;
            local_290 = (longlong)iVar4;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          local_284 = (float)*(byte *)(*(longlong *)(pFVar5 + lVar12) + lVar16) * fVar9;
          FPCGMetadataAttribute<float>::SetValue(this_00,local_260->MetadataEntry,&local_284);
        }
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 1;
        lVar12 = lVar12 + 0x10;
      } while ((int)uVar15 < (this->LayerData).ArrayNum);
    }
  }
  return;
}

// GetPointHeightOnly @ 149ccb290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPCGLandscapeCacheEntry::GetPointHeightOnly
          (FPCGLandscapeCacheEntry *this,int param_1,FPCGPoint *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (((this->bDataLoaded == false) || (param_1 < 0)) ||
     ((this->PositionsAndNormals).ArrayNum <= param_1 * 2)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDataLoaded && PointIndex >= 0 && 2 * PointIndex < PositionsAndNormals.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                       ,0xbe,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = (this->PositionsAndNormals).ArrayNum;
  uVar6 = param_1 * 2;
  uVar9 = 0;
  if ((int)uVar6 < iVar3) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    local_98 = (longlong)(int)uVar6;
    local_90 = (longlong)iVar3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this->PositionsAndNormals).AllocatorInstance.Data;
  local_88.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  pFVar1 = pFVar4 + (longlong)(int)uVar6 * 0x18;
  local_88.Translation.XY.m128d_f64[0] = *(double *)pFVar1;
  local_88.Translation.XY.m128d_f64[1] = *(double *)(pFVar1 + 8);
  local_88.Translation.ZW.m128d_f64[0] = *(double *)(pFVar4 + (longlong)(int)uVar6 * 0x18 + 0x10);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_88.Translation.ZW.m128d_f64[1] = 0.0;
  FPCGPoint::FPCGPoint(param_2,&local_88,__real_3f800000,param_1 + 1);
  uVar2 = *(undefined8 *)&(this->PointHalfSize).field0_0x0;
  uVar6 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 8);
  uVar9 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 0xc);
  uVar10 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 0x10);
  uVar11 = *(uint *)((longlong)&(this->PointHalfSize).field0_0x0 + 0x14);
  (param_2->BoundsMin).field0_0x0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
  uVar9 = uVar9 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar10 = uVar10 ^ _UNK_15066df78;
  uVar11 = uVar11 ^ _UNK_15066df7c;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 8) =
       uVar6 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 0xc) = uVar9;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 0x10) = uVar10;
  *(uint *)((longlong)&(param_2->BoundsMin).field0_0x0 + 0x14) = uVar11;
  dVar7 = (this->PointHalfSize).field0_0x0._s_0.Y;
  (param_2->BoundsMax).field0_0x0._s_0.X = (this->PointHalfSize).field0_0x0._s_0.X;
  (param_2->BoundsMax).field0_0x0._s_0.Y = dVar7;
  (param_2->BoundsMax).field0_0x0._s_0.Z = (this->PointHalfSize).field0_0x0._s_0.Z;
  return;
}

// Serialize @ 149cdb470

void __thiscall
FPCGLandscapeCacheEntry::Serialize
          (FPCGLandscapeCacheEntry *this,FArchive *param_1,UObject *param_2,int param_3,
          EPCGLandscapeCacheSerializationContents param_4)

{
  int *piVar1;
  int *piVar2;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_18,&local_res10,true);
  if (((*(longlong *)&param_1->field_0x68 == 0) ||
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) || (param_4 == SerializeAll))
  {
LAB_149cdb4ef:
    if (this->bDataLoaded == false) goto LAB_149cdb50b;
  }
  else if (this->bDataLoaded == false) {
    SerializeFromBulkData(this);
    goto LAB_149cdb4ef;
  }
  if ((param_1->field_0x28 & 4) != 0) {
    SerializeToBulkData(this,param_4);
  }
LAB_149cdb50b:
  UE::Math::operator<<(param_1,&this->PointHalfSize);
  piVar1 = &this->Stride;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&this->LayerDataNames);
  FBulkData::SetBulkDataFlags((FBulkData *)&this->BulkData,0x400);
  FBulkData::Serialize((FBulkData *)&this->BulkData,param_1,param_2,false,1,None);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SerializeFromBulkData @ 149cdbeb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPCGLandscapeCacheEntry::SerializeFromBulkData(FPCGLandscapeCacheEntry *this)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  long64 lVar8;
  void **ppvVar9;
  undefined7 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  void *local_res18;
  FMemScope local_res20;
  FBufferReaderBase local_f8;
  
  if ((this->bDataLoaded != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bDataLoaded",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                         ,0x19a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwningCache).WeakPtr);
  if (!bVar4) {
    return false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name418,L"PCGLandscape");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name418,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name418,true);
  uVar12 = 0;
  ppvVar9 = &local_res18;
  local_res18 = (void *)0x0;
  FBulkData::GetCopy((FBulkData *)&this->BulkData,ppvVar9,true);
  lVar8 = FBulkData::GetBulkDataSize((FBulkData *)&this->BulkData);
  pvVar3 = local_res18;
  if (local_res18 == (void *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    bVar4 = false;
  }
  else {
    FArchiveState::FArchiveState((FArchiveState *)&local_f8);
    local_f8.ReaderSize = (long64)(int)lVar8;
    uVar10 = (undefined7)((ulonglong)ppvVar9 >> 8);
    local_f8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_f8.ReaderData = pvVar3;
    local_f8.ReaderPos = 0;
    local_f8.bFreeOnClose = true;
    FArchiveState::SetIsLoading((FArchiveState *)&local_f8,true);
    (**(code **)(local_f8._padding_ + 0x108))(&local_f8,CONCAT71(uVar10,1));
    local_f8._padding_ = (longlong)&___7FBufferReader__6B_;
    TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_f8,&this->PositionsAndNormals);
    local_res10[0] = 0;
    if (*(uint **)(local_f8._padding_ + 8) < *(uint **)local_f8._padding_ + 1) {
      if ((local_f8._padding_._2_1_ & 1) == 0) {
        if (*(code **)(local_f8._padding_ + 0x188) == FBufferReaderBase::Serialize) {
          FBufferReaderBase::Serialize(&local_f8,local_res10,4);
        }
        else {
          (**(code **)(local_f8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_f8,local_res10);
      }
    }
    else {
      local_res10[0] = **(uint **)local_f8._padding_;
      *(longlong *)local_f8._padding_ = *(longlong *)local_f8._padding_ + 4;
    }
    uVar7 = local_res10[0];
    iVar11 = (this->LayerData).ArrayNum;
    piVar1 = &(this->LayerData).ArrayNum;
    if (iVar11 < (int)local_res10[0]) {
      iVar11 = local_res10[0] - iVar11;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar11,&(this->LayerData).AllocatorInstance,piVar1,
                         &(this->LayerData).ArrayMax);
      memset((this->LayerData).AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
             (longlong)iVar11 << 4);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar11) {
        uVar13 = iVar11 - local_res10[0];
        if (((int)(local_res10[0] | uVar13) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (uVar13 != 0) {
          TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl(&this->LayerData,uVar7,uVar13);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(this->LayerData).AllocatorInstance,*piVar1,&(this->LayerData).ArrayMax
                    );
        }
      }
    }
    if (0 < (int)local_res10[0]) {
      do {
        uVar7 = 0;
        if ((int)uVar12 < *piVar1) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                  ((FArchive *)&local_f8,
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                   ((this->LayerData).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10));
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)local_res10[0]);
    }
    bVar4 = true;
    this->bDataLoaded = true;
    local_f8._padding_ = (longlong)&___7FBufferReader__6B_;
    if (local_f8.bFreeOnClose != false) {
      FMemory::Free(local_f8.ReaderData);
      local_f8.ReaderData = (void *)0x0;
    }
    local_f8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_f8);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return bVar4;
}

// SerializeToBulkData @ 149cdc2e0

void __thiscall
FPCGLandscapeCacheEntry::SerializeToBulkData
          (FPCGLandscapeCacheEntry *this,EPCGLandscapeCacheSerializationContents param_1)

{
  TBulkData<unsigned_char> *this_00;
  int iVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  longlong lVar5;
  undefined7 uVar6;
  FScriptContainerElement *pFVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  longlong lVar11;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_108;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_f8;
  FBufferWriter local_e8;
  
  if ((param_1 & ~SerializeAll) == SerializeOnlyPositionsAndNormals) {
    bVar2 = true;
    if (param_1 != SerializeAll) goto LAB_149cdc30c;
  }
  else {
    bVar2 = false;
LAB_149cdc30c:
    if (param_1 != SerializeOnlyLayerData) {
      bVar3 = false;
      goto LAB_149cdc317;
    }
  }
  bVar3 = true;
LAB_149cdc317:
  pTVar13 = &this->PositionsAndNormals;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  if (!bVar2) {
    pTVar13 = &local_108;
  }
  pTVar9 = &this->LayerData;
  if (!bVar3) {
    pTVar9 = &local_f8;
  }
  this_00 = &this->BulkData;
  FBulkData::Lock((FBulkData *)this_00,2);
  iVar1 = pTVar9->ArrayNum;
  pFVar7 = (pTVar9->AllocatorInstance).Data;
  pFVar14 = pFVar7 + (longlong)iVar1 * 0x10;
  iVar10 = pTVar13->ArrayNum * 0x18 + 8;
  while( true ) {
    if (pTVar9->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar14) break;
    iVar10 = iVar10 + 4 + *(int *)(pFVar7 + 8);
    pFVar7 = pFVar7 + 0x10;
  }
  lVar11 = (longlong)iVar10;
  lVar5 = lVar11;
  pvVar4 = FBulkData::Realloc((FBulkData *)this_00,lVar11,1);
  FArchiveState::FArchiveState((FArchiveState *)&local_e8);
  local_e8._padding_ = (longlong)&___7FBufferWriter__6B_;
  uVar6 = (undefined7)((ulonglong)lVar5 >> 8);
  local_e8.WriterPos = 0;
  local_e8.bFreeOnClose = false;
  local_e8.bAllowResize = false;
  local_e8.WriterData = pvVar4;
  local_e8.WriterSize = lVar11;
  FArchiveState::SetIsSaving((FArchiveState *)&local_e8,true);
  (**(code **)(local_e8._padding_ + 0x108))(&local_e8,CONCAT71(uVar6,1));
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_e8,pTVar13);
  local_res8[0] = pTVar9->ArrayNum;
  if (*(uint **)(local_e8._padding_ + 8) < *(uint **)local_e8._padding_ + 1) {
    if ((local_e8._padding_._2_1_ & 1) == 0) {
      if (*(code **)(local_e8._padding_ + 0x188) == FBufferWriter::Serialize) {
        FBufferWriter::Serialize(&local_e8,local_res8,4);
      }
      else {
        (**(code **)(local_e8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_e8,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_e8._padding_;
    *(longlong *)local_e8._padding_ = *(longlong *)local_e8._padding_ + 4;
  }
  iVar1 = pTVar9->ArrayNum;
  pTVar8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar9->AllocatorInstance).Data;
  pTVar12 = pTVar8 + iVar1;
  while( true ) {
    if (pTVar9->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pTVar8 == pTVar12) break;
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_e8,pTVar8);
    pTVar8 = pTVar8 + 1;
  }
  FBulkData::Unlock((FBulkData *)this_00);
  local_e8._padding_ = (longlong)&___7FBufferWriter__6B_;
  if (local_e8.bFreeOnClose != false) {
    FMemory::Free(local_e8.WriterData);
    local_e8.WriterData = (void *)0x0;
  }
  FArchive::~FArchive((FArchive *)&local_e8);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0,0);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return;
}

// TouchAndLoad @ 149cdea50

bool __thiscall FPCGLandscapeCacheEntry::TouchAndLoad(FPCGLandscapeCacheEntry *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  this->Touch = param_1;
  if (this->bDataLoaded == false) {
    lpCriticalSection = &this->DataLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bDataLoaded == false) {
      bVar1 = SerializeFromBulkData(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return bVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return false;
}

// Unload @ 149ce1d70

void __thiscall FPCGLandscapeCacheEntry::Unload(FPCGLandscapeCacheEntry *this)

{
  int *piVar1;
  int iVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  if (this->bDataLoaded == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDataLoaded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                       ,0x157,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = &(this->PositionsAndNormals).ArrayMax;
  (this->PositionsAndNormals).ArrayNum = 0;
  if ((this->PositionsAndNormals).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->PositionsAndNormals).AllocatorInstance,0,piVar1);
  }
  iVar2 = (this->PositionsAndNormals).ArrayNum;
  if (*piVar1 != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,&(this->PositionsAndNormals).AllocatorInstance,iVar2,piVar1);
  }
  piVar1 = &(this->LayerData).ArrayMax;
  pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
           (this->LayerData).AllocatorInstance.Data;
  iVar2 = (this->LayerData).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->LayerData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->LayerData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->LayerData).ArrayNum = 0;
  }
  iVar2 = (this->LayerData).ArrayNum;
  if (*piVar1 != iVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,&(this->LayerData).AllocatorInstance,iVar2,piVar1);
  }
  this->Touch = 0;
  this->bDataLoaded = false;
  return;
}

