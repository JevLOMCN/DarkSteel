// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// ComputeSingleAxisLambda @ 1482ecc20

bool __cdecl
FSimpleSuspensionHelpers::ComputeSingleAxisLambda
          (double param_1,double param_2,uint param_3,TArray<double,TFixedAllocator<2>_> *param_4,
          FString *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  ForAnyElementType _Src;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  FString local_88 [8];
  
  dVar5 = (double)param_3 * param_1 - param_2 * param_2;
  ::FString::FString(local_88,
                     L"Spring configuration is invalid! Please make sure no two springs are at the same location."
                    );
  _Src.Data = local_88[0].Data.AllocatorInstance.Data;
  bVar6 = SUSPENSION_SMALL_NUMBER <
          (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (((param_5 != (FString *)0x0) && (!bVar6)) && (param_5 != local_88)) {
    piVar1 = &(param_5->Data).ArrayMax;
    (param_5->Data).ArrayNum = local_88[0].Data.ArrayNum;
    if ((local_88[0].Data.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88[0].Data.ArrayNum,*piVar1,(ForAnyElementType *)param_5,
                 local_88[0].Data.ArrayNum,piVar1);
      if (local_88[0].Data.ArrayNum != 0) {
        memcpy((param_5->Data).AllocatorInstance.Data,_Src.Data,
               (longlong)local_88[0].Data.ArrayNum * 2);
      }
    }
  }
  if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    if ((param_4->ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    dVar2 = *(double *)(param_4->AllocatorInstance).InlineData[0].Pad;
    if ((param_4->ArrayNum < 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    dVar3 = *(double *)(param_4->AllocatorInstance).InlineData[1].Pad;
    dVar5 = __real_3ff0000000000000 / dVar5;
    uVar8 = SUB84(dVar5 * param_2,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar9 = (uint)((ulonglong)(dVar5 * param_2) >> 0x20) ^
            __xmm_80000000000000008000000000000000._4_4_;
    if ((param_4->ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    *(double *)(param_4->AllocatorInstance).InlineData[0].Pad =
         (double)param_3 * dVar5 * dVar2 + (double)CONCAT44(uVar9,uVar8) * dVar3;
    if ((param_4->ArrayNum < 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    bVar6 = true;
    *(double *)(param_4->AllocatorInstance).InlineData[1].Pad =
         dVar5 * param_1 * dVar3 + (double)CONCAT44(uVar9,uVar8) * dVar2;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// ComputeSpringCriticalDamping @ 1482ecf00

float __cdecl FSimpleSuspensionHelpers::ComputeSpringCriticalDamping(float param_1,float param_2)

{
  return (param_2 + param_2) * param_1;
}

// ComputeSpringDamping @ 1482ecf20

float __cdecl
FSimpleSuspensionHelpers::ComputeSpringDamping(float param_1,float param_2,float param_3)

{
  return (param_2 + param_2) * param_1 * param_3;
}

// ComputeSpringForce @ 1482ecf40

float __cdecl
FSimpleSuspensionHelpers::ComputeSpringForce
          (float param_1,float param_2,float param_3,float param_4)

{
  if (__real_322bcc77 < param_3) {
    return param_1 * param_3 + param_2 * param_4;
  }
  return param_1 * param_3 + 0.0;
}

// ComputeSpringNaturalFrequencyAndDampingRatio @ 1482ecf70

void __cdecl
FSimpleSuspensionHelpers::ComputeSpringNaturalFrequencyAndDampingRatio
          (float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_322bcc77;
  if (param_1 <= __real_322bcc77) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = param_2 / param_1;
  }
  fVar1 = *param_4;
  *param_4 = fVar3;
  fVar3 = (fVar1 + fVar1) * param_1;
  if (fVar2 < fVar3) {
    *param_5 = param_3 / fVar3;
    return;
  }
  *param_5 = __real_3f800000;
  return;
}

// ComputeSpringParams @ 1482ed030

void __cdecl
FSimpleSuspensionHelpers::ComputeSpringParams
          (FSimpleSuspensionParams *param_1,float param_2,float param_3,
          TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *param_4)

{
  ComputeSpringParams(&param_1->LocalSpringOrigins,&param_1->LocalCenterOfMass,param_2,
                      &param_1->LocalSuspensionNormal,param_1->LocalGroundDistance,
                      param_1->NaturalFrequency,param_1->DampingRatio,param_3,param_4);
  return;
}

// ComputeSpringParams @ 1482ed090

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FSimpleSuspensionHelpers::ComputeSpringParams
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,float param_3,TVector<double> *param_4,float param_5,
          float param_6,float param_7,float param_8,
          TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *param_9)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  float fVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  float fVar27;
  TArray<float,TSizedDefaultAllocator<32>_> local_e8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_d8 [11];
  
  iVar19 = param_9->ArrayNum;
  piVar1 = &param_9->ArrayNum;
  uVar11 = param_1->ArrayNum;
  if (iVar19 < (int)uVar11) {
    iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,4,uVar11 - iVar19,&param_9->AllocatorInstance,piVar1,&param_9->ArrayMax
                       );
    DefaultConstructItems<FSimpleSuspensionSpringParams,int>
              ((param_9->AllocatorInstance).Data + (longlong)iVar18 * 0x10,uVar11 - iVar19);
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 < iVar19) {
      uVar25 = iVar19 - uVar11;
      if (((int)(uVar25 | uVar11) < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (uVar25 != 0) {
        pFVar21 = (param_9->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
        iVar19 = (*piVar1 - uVar25) - uVar11;
        if (iVar19 != 0) {
          memmove(pFVar21,pFVar21 + (longlong)(int)uVar25 * 0x10,(longlong)iVar19 << 4);
        }
        *piVar1 = *piVar1 - uVar25;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,&param_9->AllocatorInstance,*piVar1,&param_9->ArrayMax);
      }
    }
  }
  uVar25 = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_e8,uVar11,Default);
  iVar19 = param_1->ArrayNum;
  local_d8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8[0].ArrayNum = 0;
  local_d8[0].ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(local_d8,iVar19,Default);
  if (0 < iVar19) {
    lVar23 = 0;
    lVar24 = 0;
    do {
      uVar20 = 0;
      if ((int)uVar25 < param_1->ArrayNum) {
        uVar20 = ~uVar25 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar21 = (param_1->AllocatorInstance).Data;
      dVar15 = (param_2->field0_0x0)._s_0.Y;
      dVar3 = *(double *)(pFVar21 + lVar24);
      pFVar21 = pFVar21 + lVar24 + 8;
      dVar5 = *(double *)pFVar21;
      dVar4 = (param_2->field0_0x0)._s_0.X;
      dVar14 = *(double *)(pFVar21 + 8) - (param_2->field0_0x0)._s_0.Z;
      uVar20 = 0;
      if ((int)uVar25 < local_d8[0].ArrayNum) {
        uVar20 = ~uVar25 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar25 = uVar25 + 1;
      lVar23 = lVar23 + 1;
      *(double *)(local_d8[0].AllocatorInstance.Data + lVar24) = dVar3 - dVar4;
      auVar13._8_4_ = SUB84(dVar14,0);
      auVar13._0_8_ = dVar5 - dVar15;
      auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined1 (*) [16])(local_d8[0].AllocatorInstance.Data + lVar24 + 8) = auVar13;
      lVar24 = lVar24 + 0x18;
    } while (lVar23 < iVar19);
  }
  ComputeSprungMasses(local_d8,param_3,&local_e8,(FString *)0x0);
  if (local_d8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8[0].AllocatorInstance.Data);
  }
  fVar16 = __real_322bcc77;
  uVar25 = 0;
  dVar15 = (double)param_5;
  dVar3 = (param_4->field0_0x0)._s_0.X;
  dVar4 = (param_4->field0_0x0)._s_0.Y;
  dVar14 = (param_4->field0_0x0)._s_0.Z;
  if (0 < (int)uVar11) {
    lVar23 = 0;
    lVar24 = 0;
    lVar26 = 0;
    do {
      uVar22 = ~uVar25 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar25 < param_1->ArrayNum) {
        uVar20 = uVar22;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar21 = (param_1->AllocatorInstance).Data;
      dVar5 = *(double *)(pFVar21 + lVar26 + 8);
      dVar6 = *(double *)(pFVar21 + lVar26);
      dVar7 = *(double *)(pFVar21 + lVar26 + 0x10);
      dVar8 = (param_4->field0_0x0)._s_0.Y;
      dVar9 = (param_4->field0_0x0)._s_0.X;
      dVar10 = (param_4->field0_0x0)._s_0.Z;
      uVar20 = 0;
      if ((int)uVar25 < local_e8.ArrayNum) {
        uVar20 = uVar22;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar2 = *(float *)(local_e8.AllocatorInstance.Data + lVar23 * 4);
      uVar20 = 0;
      if ((int)uVar25 < param_9->ArrayNum) {
        uVar20 = uVar22;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar21 = (param_9->AllocatorInstance).Data;
      uVar20 = 0;
      if ((int)uVar25 < local_e8.ArrayNum) {
        uVar20 = uVar22;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar27 = fVar2 * param_6 * param_6;
      *(float *)(pFVar21 + lVar24) =
           param_6 * *(float *)(local_e8.AllocatorInstance.Data + lVar23 * 4) * param_6;
      *(float *)(pFVar21 + lVar24 + 4) = (param_6 + param_6) * fVar2 * param_7;
      if (fVar27 <= fVar16) {
        fVar27 = 0.0;
      }
      else {
        fVar27 = (fVar2 * param_8) / fVar27 +
                 (float)((dVar15 * dVar4 + dVar5) * dVar8 + (dVar15 * dVar3 + dVar6) * dVar9 +
                        (dVar15 * dVar14 + dVar7) * dVar10);
      }
      *(float *)(pFVar21 + lVar24 + 8) = fVar27;
      uVar25 = uVar25 + 1;
      *(float *)(pFVar21 + lVar24 + 0xc) = fVar2;
      lVar23 = lVar23 + 1;
      lVar24 = lVar24 + 0x10;
      lVar26 = lVar26 + 0x18;
    } while (lVar23 < (int)uVar11);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// ComputeSpringRestLength @ 1482ed650

float __cdecl
FSimpleSuspensionHelpers::ComputeSpringRestLength
          (float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 * param_2 * param_2;
  if (__real_322bcc77 < fVar1) {
    return (param_1 * param_4) / fVar1 + param_3;
  }
  return 0.0;
}

// ComputeSpringStiffness @ 1482ed680

float __cdecl FSimpleSuspensionHelpers::ComputeSpringStiffness(float param_1,float param_2)

{
  return param_1 * param_2 * param_2;
}

// ComputeSprungMasses @ 1482ed690

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FSimpleSuspensionHelpers::ComputeSprungMasses
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,float param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          FString *param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_68 [4];
  
  iVar3 = param_1->ArrayNum;
  uVar13 = 0;
  local_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68[0].ArrayNum = 0;
  local_68[0].ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(local_68,iVar3,Default);
  uVar14 = uVar13;
  uVar16 = uVar13;
  if (0 < iVar3) {
    do {
      uVar15 = (uint)uVar16;
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      dVar8 = (param_2->field0_0x0)._s_0.Y;
      dVar1 = *(double *)(pFVar4 + uVar14);
      pFVar4 = pFVar4 + uVar14 + 8;
      dVar9 = *(double *)pFVar4;
      dVar2 = (param_2->field0_0x0)._s_0.X;
      dVar7 = *(double *)(pFVar4 + 8) - (param_2->field0_0x0)._s_0.Z;
      uVar12 = 0;
      if ((int)uVar15 < local_68[0].ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar13 = uVar13 + 1;
      *(double *)(local_68[0].AllocatorInstance.Data + uVar14) = dVar1 - dVar2;
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = dVar9 - dVar8;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(local_68[0].AllocatorInstance.Data + uVar14 + 8) = auVar6;
      uVar14 = uVar14 + 0x18;
      uVar16 = (ulonglong)(uVar15 + 1);
    } while ((longlong)uVar13 < (longlong)iVar3);
  }
  bVar10 = ComputeSprungMasses(local_68,param_3,param_4,param_5);
  if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].AllocatorInstance.Data);
  }
  return bVar10;
}

// ComputeSprungMasses @ 1482ed850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FSimpleSuspensionHelpers::ComputeSprungMasses
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,float param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,FString *param_4)

{
  int *piVar1;
  float fVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  TTypeCompatibleBytes<double> TVar11;
  TTypeCompatibleBytes<double> TVar12;
  double dVar13;
  TTypeCompatibleBytes<double> TVar14;
  bool bVar15;
  undefined4 uVar16;
  ForAnyElementType FVar17;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar18;
  bool bVar19;
  undefined1 uVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  undefined1 in_XMM3 [16];
  undefined1 auVar32 [16];
  double dVar33;
  float fVar34;
  undefined1 auStackY_228 [32];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  TArray<float,TSizedDefaultAllocator<32>_> *local_138;
  uchar local_130 [8];
  TArray<double,TFixedAllocator<2>_> local_128;
  TArray<double,TFixedAllocator<2>_> local_110;
  ulonglong local_f8;
  float fVar3;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar26 = param_1->ArrayNum;
  local_1d0._8_4_ = uVar26;
  local_138 = param_3;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  if (param_3->ArrayMax < (int)uVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar26,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
  }
  ::FString::FString(&local_198,L"Must have at least one spring to compute sprung masses.");
  FVar17.Data = local_198.Data.AllocatorInstance.Data;
  if (((param_4 != (FString *)0x0) && (uVar26 == 0)) && (param_4 != &local_198)) {
    piVar1 = &(param_4->Data).ArrayMax;
    (param_4->Data).ArrayNum = local_198.Data.ArrayNum;
    if ((local_198.Data.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_198.Data.ArrayNum,*piVar1,(ForAnyElementType *)param_4,
                 local_198.Data.ArrayNum,piVar1);
      if (local_198.Data.ArrayNum != 0) {
        memcpy((param_4->Data).AllocatorInstance.Data,FVar17.Data,
               (longlong)local_198.Data.ArrayNum * 2);
      }
    }
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (uVar26 == 0) {
    return false;
  }
  ::FString::FString(&local_188,L"Total mass must be greater than zero to compute sprung masses.");
  FVar17.Data = local_188.Data.AllocatorInstance.Data;
  fVar34 = __real_322bcc77;
  if (((param_4 != (FString *)0x0) && (param_2 <= __real_322bcc77)) && (param_4 != &local_188)) {
    piVar1 = &(param_4->Data).ArrayMax;
    (param_4->Data).ArrayNum = local_188.Data.ArrayNum;
    if ((local_188.Data.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_188.Data.ArrayNum,*piVar1,(ForAnyElementType *)param_4,
                 local_188.Data.ArrayNum,piVar1);
      if (local_188.Data.ArrayNum != 0) {
        memcpy((param_4->Data).AllocatorInstance.Data,FVar17.Data,
               (longlong)local_188.Data.ArrayNum * 2);
      }
    }
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  uVar28 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (param_2 <= fVar34) {
    return false;
  }
  if (uVar26 == 1) {
    if ((param_3->ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar8 = (code *)swi(3);
      uVar20 = (*pcVar8)();
      return (bool)uVar20;
    }
    *(float *)(param_3->AllocatorInstance).Data = param_2;
    return true;
  }
  if (uVar26 != 2) {
    dVar9 = (double)uVar26;
    uVar26 = 0;
    local_1a0 = (double)param_2 / dVar9;
    dVar10 = 0.0;
    dVar13 = 0.0;
    dVar31 = 0.0;
    dVar4 = 0.0;
    dVar5 = 0.0;
    local_1a8 = dVar9;
    bVar19 = true;
    bVar21 = true;
    do {
      uVar27 = ~uVar26 >> 0x1f;
      uVar23 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar23 = uVar27;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      lVar29 = (longlong)(int)uVar26;
      dVar30 = *(double *)((param_1->AllocatorInstance).Data + lVar29 * 0x18);
      uVar23 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar23 = uVar27;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      dVar33 = SUSPENSION_ALIGNMENT_TOLERANCE;
      dVar10 = dVar10 + dVar30;
      dVar6 = *(double *)((param_1->AllocatorInstance).Data + lVar29 * 0x18 + 8);
      dVar13 = dVar13 + dVar6;
      dVar31 = dVar31 + dVar6 * dVar30;
      dVar4 = dVar4 + dVar30 * dVar30;
      dVar5 = dVar5 + dVar6 * dVar6;
      if ((param_1->ArrayNum < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      dVar30 = *(double *)(param_1->AllocatorInstance).Data;
      uVar23 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar23 = uVar27;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      dVar6 = SUSPENSION_ALIGNMENT_TOLERANCE;
      dVar30 = *(double *)((param_1->AllocatorInstance).Data + lVar29 * 0x18) - dVar30;
      bVar22 = false;
      if ((double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar28,SUB84(dVar30,0) & uVar25) <=
          dVar33) {
        bVar22 = bVar19;
      }
      if ((param_1->ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      dVar30 = *(double *)((param_1->AllocatorInstance).Data + 8);
      uVar23 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar23 = uVar27;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      pTVar18 = local_138;
      uVar16 = local_1d0._8_4_;
      dVar30 = *(double *)((param_1->AllocatorInstance).Data + lVar29 * 0x18 + 8) - dVar30;
      bVar15 = false;
      if ((double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar28,SUB84(dVar30,0) & uVar25) <=
          dVar6) {
        bVar15 = bVar21;
      }
      uVar26 = uVar26 + 1;
      bVar19 = bVar22;
      bVar21 = bVar15;
    } while (uVar26 < (uint)local_1d0._8_4_);
    dVar30 = local_1a0 + local_1a0;
    local_130[0] = '\0';
    local_130[1] = '\0';
    local_130[2] = '\0';
    local_130[3] = '\0';
    local_130[4] = '\0';
    local_130[5] = '\0';
    local_130[6] = '\0';
    local_130[7] = '\0';
    local_1c0._8_8_ = dVar13 * dVar30;
    local_1c0._0_8_ = dVar30 * dVar10;
    local_1d0._0_8_ = dVar30 * dVar9 - (double)(param_2 + param_2);
    local_1b0 = dVar31;
    if (bVar15) {
      local_128.ArrayMax = 2;
      local_128.ArrayNum = 0;
      iVar24 = 0;
      if ((&local_128 <= (TArray<double,TFixedAllocator<2>_> *)local_1c0) &&
         (local_1c0 < &local_128.ArrayNum)) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar19) {
          pcVar8 = (code *)swi(3);
          uVar20 = (*pcVar8)();
          return (bool)uVar20;
        }
        iVar24 = local_128.ArrayNum;
        if (local_128.ArrayNum == local_128.ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<double>_>
                             (0x808,&local_128.AllocatorInstance,&local_128.ArrayMax);
        }
      }
      local_128.ArrayNum = iVar24 + 1;
      *(undefined8 *)local_128.AllocatorInstance.InlineData[iVar24].Pad = local_1c0._0_8_;
      if (((&local_128 <= (TArray<double,TFixedAllocator<2>_> *)local_1d0) &&
          (local_1d0 < local_128.AllocatorInstance.InlineData + local_128.ArrayMax)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      if (local_128.ArrayNum == local_128.ArrayMax) {
        local_128.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<double>_>
                       (0x808,&local_128.AllocatorInstance,&local_128.ArrayMax);
      }
      lVar29 = (longlong)local_128.ArrayNum;
      local_128.ArrayNum = local_128.ArrayNum + 1;
      *(undefined8 *)local_128.AllocatorInstance.InlineData[lVar29].Pad = local_1d0._0_8_;
      ComputeSingleAxisLambda(dVar4,dVar10,uVar16,&local_128,(FString *)0x0);
      if ((local_128.ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      TVar14.Pad = local_128.AllocatorInstance.InlineData[0].Pad;
      TVar11.Pad = local_130;
      TVar12.Pad = local_128.AllocatorInstance.InlineData[1].Pad;
      if ((local_128.ArrayNum < 2) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         TVar11.Pad = local_130, TVar12.Pad = local_128.AllocatorInstance.InlineData[1].Pad, bVar19)
         ) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
    }
    else if (bVar22) {
      local_110.ArrayMax = 2;
      local_110.ArrayNum = 0;
      iVar24 = 0;
      if ((&local_110 <= (TArray<double,TFixedAllocator<2>_> *)(local_1c0 + 8)) &&
         (local_1c0 + 8 < &local_110.ArrayNum)) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar19) {
          pcVar8 = (code *)swi(3);
          uVar20 = (*pcVar8)();
          return (bool)uVar20;
        }
        iVar24 = local_110.ArrayNum;
        if (local_110.ArrayNum == local_110.ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<double>_>
                             (0x808,&local_110.AllocatorInstance,&local_110.ArrayMax);
        }
      }
      local_110.ArrayNum = iVar24 + 1;
      *(undefined8 *)local_110.AllocatorInstance.InlineData[iVar24].Pad = local_1c0._8_8_;
      if (((&local_110 <= (TArray<double,TFixedAllocator<2>_> *)local_1d0) &&
          (local_1d0 < local_110.AllocatorInstance.InlineData + local_110.ArrayMax)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      if (local_110.ArrayNum == local_110.ArrayMax) {
        local_110.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<double>_>
                       (0x808,&local_110.AllocatorInstance,&local_110.ArrayMax);
      }
      lVar29 = (longlong)local_110.ArrayNum;
      local_110.ArrayNum = local_110.ArrayNum + 1;
      *(undefined8 *)local_110.AllocatorInstance.InlineData[lVar29].Pad = local_1d0._0_8_;
      ComputeSingleAxisLambda(dVar5,dVar13,uVar16,&local_110,(FString *)0x0);
      if ((local_110.ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      if ((local_110.ArrayNum < 2) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      TVar14.Pad[0] = '\0';
      TVar14.Pad[1] = '\0';
      TVar14.Pad[2] = '\0';
      TVar14.Pad[3] = '\0';
      TVar14.Pad[4] = '\0';
      TVar14.Pad[5] = '\0';
      TVar14.Pad[6] = '\0';
      TVar14.Pad[7] = '\0';
      TVar11.Pad = local_110.AllocatorInstance.InlineData[0].Pad;
      TVar12.Pad = local_110.AllocatorInstance.InlineData[1].Pad;
    }
    else {
      dVar9 = ((((dVar31 + dVar31) * dVar10 * dVar13 + dVar5 * dVar4 * local_1a8) -
               dVar5 * dVar10 * dVar10) - dVar13 * dVar4 * dVar13) - dVar31 * dVar31 * local_1a8;
      ::FString::FString(&local_178,
                         L"Spring configuration is invalid! Please make sure no two springs are at the same location."
                        );
      FVar17.Data = local_178.Data.AllocatorInstance.Data;
      bVar19 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
               SUSPENSION_SMALL_NUMBER;
      if (((param_4 != (FString *)0x0) && (bVar19)) && (param_4 != &local_178)) {
        piVar1 = &(param_4->Data).ArrayMax;
        (param_4->Data).ArrayNum = local_178.Data.ArrayNum;
        if ((local_178.Data.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_178.Data.ArrayNum,*piVar1,(ForAnyElementType *)param_4,
                     local_178.Data.ArrayNum,piVar1);
          if (local_178.Data.ArrayNum != 0) {
            memcpy((param_4->Data).AllocatorInstance.Data,FVar17.Data,
                   (longlong)local_178.Data.ArrayNum * 2);
          }
        }
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (bVar19) {
        return false;
      }
      dVar9 = __real_3ff0000000000000 / dVar9;
      dVar33 = (dVar13 * dVar10 - local_1b0 * local_1a8) * dVar9;
      dVar30 = (local_1b0 * dVar13 - dVar5 * dVar10) * dVar9;
      dVar6 = (local_1b0 * dVar10 - dVar13 * dVar4) * dVar9;
      TVar11.Pad = (uchar  [8])
                   ((dVar4 * local_1a8 - dVar10 * dVar10) * dVar9 * (double)local_1c0._8_8_ +
                    dVar33 * (double)local_1c0._0_8_ + dVar6 * (double)local_1d0._0_8_);
      TVar12.Pad = (uchar  [8])
                   (dVar6 * (double)local_1c0._8_8_ + dVar30 * (double)local_1c0._0_8_ +
                   (dVar5 * dVar4 - dVar31 * dVar31) * dVar9 * (double)local_1d0._0_8_);
      TVar14.Pad = (uchar  [8])
                   ((dVar5 * local_1a8 - dVar13 * dVar13) * dVar9 * (double)local_1c0._0_8_ +
                    dVar33 * (double)local_1c0._8_8_ + dVar30 * (double)local_1d0._0_8_);
    }
    dVar5 = local_1a0;
    dVar4 = __real_3fe0000000000000;
    uVar26 = 0;
    while( true ) {
      uVar28 = ~uVar26 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      lVar29 = (longlong)(int)uVar26;
      dVar9 = *(double *)((param_1->AllocatorInstance).Data + lVar29 * 0x18);
      uVar25 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      dVar31 = *(double *)((param_1->AllocatorInstance).Data + lVar29 * 0x18 + 8);
      uVar25 = 0;
      if ((int)uVar26 < pTVar18->ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      *(float *)((pTVar18->AllocatorInstance).Data + lVar29 * 4) =
           (float)(dVar5 - ((double)TVar11.Pad * dVar31 + dVar9 * (double)TVar14.Pad +
                           (double)TVar12.Pad) * dVar4);
      ::FString::FString(&local_168,
                         L"Spring configuration is invalid! Please make sure the center of mass is located inside the area covered by the springs."
                        );
      uVar25 = 0;
      if ((int)uVar26 < pTVar18->ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      FVar17.Data = local_168.Data.AllocatorInstance.Data;
      pFVar7 = (pTVar18->AllocatorInstance).Data + lVar29 * 4;
      bVar19 = *(float *)pFVar7 != 0.0;
      bVar21 = *(float *)pFVar7 <= 0.0;
      if (((param_4 != (FString *)0x0) && (bVar21 && bVar19)) && (param_4 != &local_168)) {
        piVar1 = &(param_4->Data).ArrayMax;
        iVar24 = local_168.Data.ArrayNum;
        (param_4->Data).ArrayNum = iVar24;
        if ((iVar24 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar24,*piVar1,(ForAnyElementType *)param_4,iVar24,piVar1);
          if (iVar24 != 0) {
            memcpy((param_4->Data).AllocatorInstance.Data,FVar17.Data,(longlong)iVar24 * 2);
          }
        }
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (bVar21 && bVar19) break;
      uVar26 = uVar26 + 1;
      if ((uint)local_1d0._8_4_ <= uVar26) {
        return true;
      }
    }
    return false;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar8 = (code *)swi(3);
    uVar20 = (*pcVar8)();
    return (bool)uVar20;
  }
  dVar4 = *(double *)(param_1->AllocatorInstance).Data;
  if ((param_1->ArrayNum < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar8 = (code *)swi(3);
    uVar20 = (*pcVar8)();
    return (bool)uVar20;
  }
  bVar19 = false;
  dVar5 = *(double *)((param_1->AllocatorInstance).Data + 8);
  if ((param_1->ArrayNum < 2) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar8 = (code *)swi(3);
    uVar20 = (*pcVar8)();
    return (bool)uVar20;
  }
  dVar9 = *(double *)((param_1->AllocatorInstance).Data + 0x18) - dVar4;
  if ((param_1->ArrayNum < 2) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar8 = (code *)swi(3);
    uVar20 = (*pcVar8)();
    return (bool)uVar20;
  }
  dVar31 = *(double *)((param_1->AllocatorInstance).Data + 0x20) - dVar5;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = dVar31 * dVar31 + dVar9 * dVar9;
  auVar32 = sqrtpd(in_XMM3,auVar32);
  if (auVar32._0_8_ <= __real_3e45798ee0000000) {
    fVar34 = param_2 * __real_3f000000;
    if ((param_3->ArrayNum < 2) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar8 = (code *)swi(3);
      uVar20 = (*pcVar8)();
      return (bool)uVar20;
    }
    *(float *)((param_3->AllocatorInstance).Data + 4) = fVar34;
    if ((param_3->ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar8 = (code *)swi(3);
      uVar20 = (*pcVar8)();
      return (bool)uVar20;
    }
    *(float *)(param_3->AllocatorInstance).Data = fVar34;
    return true;
  }
  dVar10 = __real_3ff0000000000000 / auVar32._0_8_;
  if ((param_3->ArrayNum < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar8 = (code *)swi(3);
    uVar20 = (*pcVar8)();
    return (bool)uVar20;
  }
  *(float *)(param_3->AllocatorInstance).Data =
       (float)((double)(float)((uint)param_2 ^ __xmm_80000000800000008000000080000000) *
               (dVar10 * dVar31 * dVar5 + dVar10 * dVar9 * dVar4) * dVar10);
  if ((param_3->ArrayNum < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar8 = (code *)swi(3);
    uVar20 = (*pcVar8)();
    return (bool)uVar20;
  }
  fVar34 = *(float *)(param_3->AllocatorInstance).Data;
  if ((param_3->ArrayNum < 2) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar8 = (code *)swi(3);
    uVar20 = (*pcVar8)();
    return (bool)uVar20;
  }
  *(float *)((param_3->AllocatorInstance).Data + 4) = param_2 - fVar34;
  ::FString::FString(&local_148,
                     L"Spring configuration is invalid! Please make sure the center of mass is located between the springs."
                    );
  if ((param_3->ArrayNum < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar8 = (code *)swi(3);
    uVar20 = (*pcVar8)();
    return (bool)uVar20;
  }
  FVar17.Data = local_148.Data.AllocatorInstance.Data;
  pFVar7 = (param_3->AllocatorInstance).Data;
  fVar34 = *(float *)pFVar7;
  fVar2 = *(float *)pFVar7;
  fVar3 = *(float *)pFVar7;
  if (param_4 == (FString *)0x0) {
LAB_1482ede4b:
    if (!NAN(fVar34) && (0.0 >= fVar3 && fVar2 != 0.0)) goto LAB_1482edef3;
LAB_1482ede54:
    ::FString::FString(&local_158,
                       L"Spring configuration is invalid! Please make sure the center of mass is located between the springs."
                      );
    if ((param_3->ArrayNum < 2) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar8 = (code *)swi(3);
      uVar20 = (*pcVar8)();
      return (bool)uVar20;
    }
    FVar17.Data = local_158.Data.AllocatorInstance.Data;
    pFVar7 = (param_3->AllocatorInstance).Data + 4;
    bVar21 = *(float *)pFVar7 != 0.0;
    bVar22 = *(float *)pFVar7 <= 0.0;
    if (((param_4 != (FString *)0x0) && (bVar22 && bVar21)) && (param_4 != &local_158)) {
      piVar1 = &(param_4->Data).ArrayMax;
      (param_4->Data).ArrayNum = local_158.Data.ArrayNum;
      if ((local_158.Data.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_158.Data.ArrayNum,*piVar1,(ForAnyElementType *)param_4,
                   local_158.Data.ArrayNum,piVar1);
        if (local_158.Data.ArrayNum == 0) goto LAB_1482edfdd;
        memcpy((param_4->Data).AllocatorInstance.Data,FVar17.Data,
               (longlong)local_158.Data.ArrayNum * 2);
      }
      bVar19 = true;
      goto LAB_1482edef3;
    }
LAB_1482edfdd:
    bVar19 = true;
    if (bVar22 && bVar21) goto LAB_1482edef3;
    bVar21 = true;
  }
  else {
    if (0.0 < fVar3 || fVar2 == 0.0) goto LAB_1482ede54;
    if (param_4 == &local_148) goto LAB_1482ede4b;
    piVar1 = &(param_4->Data).ArrayMax;
    (param_4->Data).ArrayNum = local_148.Data.ArrayNum;
    if ((local_148.Data.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_148.Data.ArrayNum,*piVar1,(ForAnyElementType *)param_4,
                 local_148.Data.ArrayNum,piVar1);
      if (local_148.Data.ArrayNum == 0) goto LAB_1482ede4b;
      memcpy((param_4->Data).AllocatorInstance.Data,FVar17.Data,
             (longlong)local_148.Data.ArrayNum * 2);
    }
LAB_1482edef3:
    bVar22 = false;
    bVar21 = false;
    if (!bVar19) goto LAB_1482edf09;
  }
  bVar22 = bVar21;
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
LAB_1482edf09:
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (!bVar22) {
    return false;
  }
  return true;
}

// ComputeSuspensionDisplacements @ 1482eeb20

void __cdecl
FSimpleSuspensionHelpers::ComputeSuspensionDisplacements
          (FSimpleSuspensionParams *param_1,
          TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int,UE::Math::TVector<double>_&,UE::Math::TVector<double>_&)>
          *param_2,FSimpleSuspensionState *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.ArrayNum = (param_3->WorldSpringOrigins).ArrayNum;
  lVar2 = (longlong)local_18.ArrayNum;
  pFVar1 = (param_3->WorldSpringOrigins).AllocatorInstance.Data;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,pFVar1,lVar2 * 0x18);
  }
  ComputeSuspensionDisplacements
            (&local_18,&param_1->SpringParams,&param_3->WorldSuspensionNormal,param_2,
             &param_3->SpringDisplacements);
  pFVar1 = (param_3->WorldSpringOrigins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_3->SpringContacts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_3->SpringForces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_3->SpringDisplacements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ComputeSuspensionDisplacements @ 1482eec20

void __cdecl
FSimpleSuspensionHelpers::ComputeSuspensionDisplacements
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *param_2,
          TVector<double> *param_3,
          TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int,UE::Math::TVector<double>_&,UE::Math::TVector<double>_&)>
          *param_4,TArray<float,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint local_c8 [2];
  longlong local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70 [56];
  
  iVar6 = param_1->ArrayNum;
  if ((param_2->ArrayNum != iVar6) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6232448831594693066>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\SimpleSuspension.cpp"
                         ,0x1ca,"SpringParams.Num() == Count"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_5->ArrayNum != iVar6) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6232448831594693067>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\SimpleSuspension.cpp"
                         ,0x1cb,"OutSpringDisplacements.Num() == Count"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar16 = 0;
  local_c0 = (longlong)iVar6;
  if (0 < iVar6) {
    lVar14 = 0;
    lVar17 = 0;
    lVar18 = 0;
    do {
      uVar15 = ~uVar16 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar2 = *(float *)((param_2->AllocatorInstance).Data + lVar18 + 8);
      uVar11 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      dVar21 = (double)fVar2;
      pFVar1 = pFVar7 + lVar17;
      local_b8 = *(double *)pFVar1;
      dStack_b0 = *(double *)(pFVar1 + 8);
      local_a8 = *(double *)(pFVar7 + lVar17 + 0x10);
      local_a0 = local_b8 - dVar21 * (param_3->field0_0x0)._s_0.X;
      local_98 = dStack_b0 - dVar21 * (param_3->field0_0x0)._s_0.Y;
      local_90 = local_a8 - dVar21 * (param_3->field0_0x0)._s_0.Z;
      local_c8[0] = uVar16;
      UE::Core::Private::Function::CheckCallable(*(void **)param_4);
      pcVar8 = *(code **)param_4;
      plVar13 = *(longlong **)&param_4->field_0x28;
      if (*(longlong **)&param_4->field_0x28 == (longlong *)0x0) {
        plVar13 = (longlong *)&param_4->field_0x10;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar10 = (*pcVar8)(uVar12,&local_b8,&local_a0,local_c8,&local_88,local_70);
      if (cVar10 == '\0') {
        uVar11 = 0;
        if ((int)uVar16 < param_5->ArrayNum) {
          uVar11 = uVar15;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)((param_5->AllocatorInstance).Data + lVar14 * 4) = 0;
      }
      else {
        dVar20 = dStack_b0 - local_80;
        dVar21 = local_b8 - local_88;
        uVar11 = 0;
        if ((int)uVar16 < param_5->ArrayNum) {
          uVar11 = uVar15;
        }
        dVar19 = local_a8 - local_78;
        dVar3 = (param_3->field0_0x0)._s_0.Y;
        dVar4 = (param_3->field0_0x0)._s_0.X;
        dVar5 = (param_3->field0_0x0)._s_0.Z;
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(float *)((param_5->AllocatorInstance).Data + lVar14 * 4) =
             fVar2 - (float)(dVar20 * dVar3 + dVar21 * dVar4 + dVar19 * dVar5);
      }
      uVar16 = uVar16 + 1;
      lVar14 = lVar14 + 1;
      lVar18 = lVar18 + 0x10;
      lVar17 = lVar17 + 0x18;
    } while (lVar14 < local_c0);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ComputeSuspensionForces @ 1482eeff0

void __cdecl
FSimpleSuspensionHelpers::ComputeSuspensionForces
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *param_6,
          TArray<float,TSizedDefaultAllocator<32>_> *param_7,TVector<double> *param_8,
          TVector<double> *param_9,TArray<float,TSizedDefaultAllocator<32>_> *param_10)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  float fVar13;
  undefined8 uVar14;
  TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  uint uVar27;
  
  pTVar16 = param_7;
  pTVar15 = param_6;
  if ((param_6->ArrayNum != param_7->ArrayNum) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6232448831594693104>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\SimpleSuspension.cpp"
                          ,0x1f0,"SpringParams.Num() == SpringDisplacements.Num()"), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar19 = 0;
  (param_8->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_8->field0_0x0)._s_0.Y = (double)uVar14;
  (param_8->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_9->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_9->field0_0x0)._s_0.Y = (double)uVar14;
  (param_9->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar13 = __real_322bcc77;
  iVar4 = param_6->ArrayNum;
  if (0 < (longlong)iVar4) {
    lVar20 = 0;
    uVar27 = (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    param_7 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    param_6 = (TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *)0x0;
    do {
      uVar21 = ~uVar19 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar19 < pTVar15->ArrayNum) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pTVar15->AllocatorInstance).Data;
      uVar18 = 0;
      if ((int)uVar19 < pTVar16->ArrayNum) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar2 = *(float *)((pTVar16->AllocatorInstance).Data + lVar20 * 4);
      uVar18 = 0;
      if ((int)uVar19 < param_5->ArrayNum) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_5->AllocatorInstance).Data;
      pFVar1 = pFVar6 + (longlong)&(param_7->AllocatorInstance).Data;
      dVar9 = *(double *)(pFVar1 + 8) - (param_3->field0_0x0)._s_0.Y;
      dVar10 = *(double *)pFVar1 - (param_3->field0_0x0)._s_0.X;
      dVar11 = *(double *)(pFVar6 + (longlong)&param_7[1].AllocatorInstance.Data) -
               (param_3->field0_0x0)._s_0.Z;
      fVar3 = *(float *)(pFVar5 + (longlong)&(param_6->AllocatorInstance).Data);
      dVar22 = (param_2->field0_0x0)._s_0.Z;
      dVar23 = (param_2->field0_0x0)._s_0.Y;
      dVar24 = (param_2->field0_0x0)._s_0.X;
      if (fVar2 <= fVar13) {
        fVar26 = 0.0;
      }
      else {
        dVar22 = ((dVar22 * dVar10 - dVar11 * dVar24) + (param_1->field0_0x0)._s_0.Y) *
                 (param_4->field0_0x0)._s_0.Y +
                 ((dVar23 * dVar11 - dVar22 * dVar9) + (param_1->field0_0x0)._s_0.X) *
                 (param_4->field0_0x0)._s_0.X +
                 ((dVar9 * dVar24 - dVar23 * dVar10) + (param_1->field0_0x0)._s_0.Z) *
                 (param_4->field0_0x0)._s_0.Z;
        fVar26 = (float)(double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) ^ (uint)uVar12,
                                         SUB84(dVar22,0) ^ uVar27) *
                 *(float *)(pFVar5 + 4 + (longlong)&(param_6->AllocatorInstance).Data);
      }
      uVar18 = 0;
      if ((int)uVar19 < param_10->ArrayNum) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(float *)((param_10->AllocatorInstance).Data + lVar20 * 4) = fVar26 + fVar2 * fVar3;
      uVar18 = 0;
      if ((int)uVar19 < param_10->ArrayNum) {
        uVar18 = uVar21;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar19 = uVar19 + 1;
      fVar2 = *(float *)((param_10->AllocatorInstance).Data + lVar20 * 4);
      lVar20 = lVar20 + 1;
      param_6 = param_6 + 1;
      param_7 = (TArray<float,TSizedDefaultAllocator<32>_> *)&param_7[1].ArrayNum;
      dVar25 = (double)fVar2 * (param_4->field0_0x0)._s_0.X;
      dVar23 = (double)fVar2 * (param_4->field0_0x0)._s_0.Y;
      dVar24 = (double)fVar2 * (param_4->field0_0x0)._s_0.Z;
      (param_8->field0_0x0)._s_0.X = dVar25 + (param_8->field0_0x0)._s_0.X;
      dVar22 = dVar24 + (param_8->field0_0x0)._s_0.Z;
      auVar8._8_4_ = SUB84(dVar22,0);
      auVar8._0_8_ = dVar23 + (param_8->field0_0x0)._s_0.Y;
      auVar8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      *(undefined1 (*) [16])((longlong)&param_8->field0_0x0 + 8) = auVar8;
      (param_9->field0_0x0)._s_0.X =
           (dVar24 * dVar9 - dVar23 * dVar11) + (param_9->field0_0x0)._s_0.X;
      (param_9->field0_0x0)._s_0.Z =
           (dVar10 * dVar23 - dVar25 * dVar9) + (param_9->field0_0x0)._s_0.Z;
      (param_9->field0_0x0)._s_0.Y =
           (dVar25 * dVar11 - dVar10 * dVar24) + (param_9->field0_0x0)._s_0.Y;
    } while (lVar20 < iVar4);
  }
  pFVar5 = (param_5->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// ComputeSuspensionForces @ 1482ef530

void __cdecl
FSimpleSuspensionHelpers::ComputeSuspensionForces
          (TVector<double> *param_1,TVector<double> *param_2,FSimpleSuspensionState *param_3,
          TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *param_4,
          FSimpleSuspensionState *param_5)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.ArrayNum = (param_3->WorldSpringOrigins).ArrayNum;
  lVar1 = (longlong)local_28.ArrayNum;
  _Src = (param_3->WorldSpringOrigins).AllocatorInstance.Data;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.ArrayNum == 0) {
    local_28.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
               &local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,_Src,lVar1 * 0x18);
  }
  ComputeSuspensionForces
            (param_1,param_2,&param_3->WorldCenterOfMass,&param_3->WorldSuspensionNormal,&local_28,
             param_4,&param_5->SpringDisplacements,&param_5->TotalForce,&param_5->TotalTorqueRad,
             &param_5->SpringForces);
  return;
}

// ComputeWorldSuspensionCoordinates @ 1482ef880

void __cdecl
FSimpleSuspensionHelpers::ComputeWorldSuspensionCoordinates
          (TVector<double> *param_1,TVector<double> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TTransform<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_7)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar44;
  undefined4 uVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar46;
  double dVar47;
  double dVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  iVar4 = param_3->ArrayNum;
  if ((param_7->ArrayNum != iVar4) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6232448831594693049>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\SimpleSuspension.cpp"
                         ,0x1b9,"OutWorldSuspensionOrigins.Num() == Count"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  auVar32 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
  auVar13 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
  dVar46 = (param_1->field0_0x0)._s_0.X * (param_4->Scale3D).XY.m128d_f64[0];
  dVar51 = (param_1->field0_0x0)._s_0.Y * (param_4->Scale3D).XY.m128d_f64[1];
  dVar38 = (param_1->field0_0x0)._s_0.Z * (param_4->Scale3D).ZW.m128d_f64[0];
  dVar47 = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar3 = (param_4->Rotation).ZW.m128d_f64[1];
  auVar52._8_4_ = SUB84(dVar51,0);
  auVar52._0_8_ = dVar46;
  uVar45 = (undefined4)((ulonglong)dVar51 >> 0x20);
  auVar52._12_4_ = uVar45;
  dVar2 = auVar32._0_8_;
  auVar22 = blendpd(auVar13,auVar32,2);
  auVar53._0_8_ = auVar52._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar46;
  auVar53._8_8_ = dVar38 * auVar13._8_8_ - dVar2 * dVar51;
  auVar39._8_4_ = SUB84(auVar53._8_8_,0);
  auVar39._0_8_ = auVar53._0_8_;
  auVar39._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
  auVar26._8_4_ = SUB84(dVar51,0);
  auVar26._0_8_ = dVar46;
  auVar26._12_4_ = uVar45;
  auVar13._8_4_ = SUB84(dVar47,0);
  auVar13._0_8_ = dVar38;
  auVar13._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
  auVar13 = blendpd(auVar26,auVar13,2);
  auVar14._0_8_ = auVar13._0_8_ * dVar2 - auVar22._0_8_ * dVar38;
  auVar14._8_8_ = auVar13._8_8_ * auVar32._8_8_ - auVar22._8_8_ * dVar47;
  auVar13 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
  auVar22 = blendpd(auVar53,auVar14,2);
  auVar54._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar54._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  dVar37 = auVar39._8_8_ + auVar39._8_8_;
  dVar44 = auVar14._0_8_ + auVar14._0_8_;
  auVar30._8_4_ = SUB84(dVar44,0);
  auVar30._0_8_ = dVar37;
  uVar45 = (undefined4)((ulonglong)dVar44 >> 0x20);
  auVar30._12_4_ = uVar45;
  auVar25._8_4_ = SUB84(dVar44,0);
  auVar25._0_8_ = dVar37;
  auVar25._12_4_ = uVar45;
  auVar26 = blendpd(auVar25,auVar54,2);
  auVar22 = blendpd(auVar13,auVar32,2);
  auVar31._0_8_ = auVar30._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar37;
  auVar31._8_8_ = auVar54._0_8_ * auVar13._8_8_ - dVar2 * dVar44;
  auVar15._8_4_ = SUB84(auVar31._8_8_,0);
  auVar15._0_8_ = auVar31._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
  auVar27._0_8_ = auVar26._0_8_ * dVar2 - auVar22._0_8_ * auVar54._0_8_;
  auVar27._8_8_ = auVar26._8_8_ * auVar32._8_8_ - auVar22._8_8_ * auVar54._8_8_;
  auVar32 = blendpd(auVar31,auVar27,2);
  dVar47 = (param_4->Translation).XY.m128d_f64[1];
  dVar2 = (param_4->Translation).ZW.m128d_f64[0];
  (param_5->field0_0x0)._s_0.X =
       dVar37 * dVar3 + dVar46 + auVar15._8_8_ + (param_4->Translation).XY.m128d_f64[0];
  (param_5->field0_0x0)._s_0.Y = dVar44 * dVar3 + dVar51 + auVar27._0_8_ + dVar47;
  (param_5->field0_0x0)._s_0.Z = auVar54._0_8_ * dVar3 + dVar38 + auVar32._0_8_ + dVar2;
  auVar32 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
  dVar47 = (param_2->field0_0x0)._s_0.Z * (param_4->Scale3D).ZW.m128d_f64[0];
  dVar38 = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar3 = (param_4->Rotation).ZW.m128d_f64[1];
  dVar44 = (param_4->Scale3D).XY.m128d_f64[0] * (param_2->field0_0x0)._s_0.X;
  dVar46 = (param_4->Scale3D).XY.m128d_f64[1] * (param_2->field0_0x0)._s_0.Y;
  auVar13 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
  auVar48._8_4_ = SUB84(dVar46,0);
  auVar48._0_8_ = dVar44;
  uVar45 = (undefined4)((ulonglong)dVar46 >> 0x20);
  auVar48._12_4_ = uVar45;
  dVar2 = auVar32._0_8_;
  auVar26 = blendpd(auVar13,auVar32,2);
  auVar49._0_8_ = auVar48._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar44;
  auVar49._8_8_ = dVar47 * auVar13._8_8_ - dVar2 * dVar46;
  auVar16._8_4_ = SUB84(dVar46,0);
  auVar16._0_8_ = dVar44;
  auVar16._12_4_ = uVar45;
  auVar22._8_4_ = SUB84(dVar38,0);
  auVar22._0_8_ = dVar47;
  auVar22._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  auVar13 = blendpd(auVar16,auVar22,2);
  auVar17._0_8_ = auVar13._0_8_ * dVar2 - auVar26._0_8_ * dVar47;
  auVar17._8_8_ = auVar13._8_8_ * auVar32._8_8_ - auVar26._8_8_ * dVar38;
  auVar13 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
  auVar40._8_4_ = SUB84(auVar49._8_8_,0);
  auVar40._0_8_ = auVar49._0_8_;
  auVar40._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
  uVar11 = 0;
  auVar22 = blendpd(auVar49,auVar17,2);
  dVar38 = auVar40._8_8_ + auVar40._8_8_;
  dVar37 = auVar17._0_8_ + auVar17._0_8_;
  auVar50._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar50._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  auVar33._8_4_ = SUB84(dVar37,0);
  auVar33._0_8_ = dVar38;
  uVar45 = (undefined4)((ulonglong)dVar37 >> 0x20);
  auVar33._12_4_ = uVar45;
  auVar28._8_4_ = SUB84(dVar37,0);
  auVar28._0_8_ = dVar38;
  auVar28._12_4_ = uVar45;
  auVar22 = blendpd(auVar28,auVar50,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar38;
  auVar34._8_8_ = auVar50._0_8_ * auVar13._8_8_ - dVar2 * dVar37;
  auVar13 = blendpd(auVar13,auVar32,2);
  auVar18._8_4_ = SUB84(auVar34._8_8_,0);
  auVar18._0_8_ = auVar34._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar29._0_8_ = auVar22._0_8_ * dVar2 - auVar13._0_8_ * auVar50._0_8_;
  auVar29._8_8_ = auVar22._8_8_ * auVar32._8_8_ - auVar13._8_8_ * auVar50._8_8_;
  auVar32 = blendpd(auVar34,auVar29,2);
  (param_6->field0_0x0)._s_0.X = dVar38 * dVar3 + dVar44 + auVar18._8_8_;
  (param_6->field0_0x0)._s_0.Y = dVar37 * dVar3 + dVar46 + auVar29._0_8_;
  (param_6->field0_0x0)._s_0.Z = auVar50._0_8_ * dVar3 + dVar47 + auVar32._0_8_;
  if (0 < iVar4) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < param_3->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auVar32 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
      auVar13 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      pFVar5 = (param_3->AllocatorInstance).Data;
      auVar22 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      dVar2 = (param_4->Rotation).ZW.m128d_f64[1];
      pFVar1 = pFVar5 + lVar12;
      dVar47 = *(double *)pFVar1 * (param_4->Scale3D).XY.m128d_f64[0];
      dVar38 = *(double *)(pFVar1 + 8) * (param_4->Scale3D).XY.m128d_f64[1];
      uVar9 = 0;
      if ((int)uVar11 < param_7->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      auVar41._8_4_ = SUB84(dVar38,0);
      auVar41._0_8_ = dVar47;
      uVar45 = (undefined4)((ulonglong)dVar38 >> 0x20);
      auVar41._12_4_ = uVar45;
      auVar55._0_8_ = *(double *)(pFVar5 + lVar12 + 0x10) * (param_4->Scale3D).ZW.m128d_f64[0];
      auVar55._8_8_ = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar26 = blendpd(auVar13,auVar32,2);
      dVar3 = auVar32._0_8_;
      auVar42._0_8_ = auVar41._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar47;
      auVar42._8_8_ = auVar55._0_8_ * auVar13._8_8_ - dVar3 * dVar38;
      auVar19._8_4_ = SUB84(dVar38,0);
      auVar19._0_8_ = dVar47;
      auVar19._12_4_ = uVar45;
      auVar13 = blendpd(auVar19,auVar55,2);
      auVar20._0_8_ = auVar13._0_8_ * dVar3 - auVar26._0_8_ * auVar55._0_8_;
      auVar20._8_8_ = auVar13._8_8_ * auVar32._8_8_ - auVar26._8_8_ * auVar55._8_8_;
      auVar13 = blendpd(auVar42,auVar20,2);
      dVar37 = auVar42._8_8_ + auVar42._8_8_;
      dVar44 = auVar20._0_8_ + auVar20._0_8_;
      uVar45 = (undefined4)((ulonglong)dVar44 >> 0x20);
      auVar43._0_8_ = auVar13._0_8_ + auVar13._0_8_;
      auVar43._8_8_ = auVar13._8_8_ + auVar13._8_8_;
      auVar35._8_4_ = SUB84(dVar44,0);
      auVar35._0_8_ = dVar37;
      auVar35._12_4_ = uVar45;
      auVar23._8_4_ = SUB84(dVar44,0);
      auVar23._0_8_ = dVar37;
      auVar23._12_4_ = uVar45;
      auVar13 = blendpd(auVar23,auVar43,2);
      auVar36._0_8_ = auVar35._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar37;
      auVar36._8_8_ = auVar43._0_8_ * auVar22._8_8_ - dVar3 * dVar44;
      auVar21._8_4_ = SUB84(auVar36._8_8_,0);
      auVar21._0_8_ = auVar36._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
      auVar22 = blendpd(auVar22,auVar32,2);
      auVar24._0_8_ = auVar13._0_8_ * dVar3 - auVar22._0_8_ * auVar43._0_8_;
      auVar24._8_8_ = auVar13._8_8_ * auVar32._8_8_ - auVar22._8_8_ * auVar43._8_8_;
      auVar32 = blendpd(auVar36,auVar24,2);
      dVar3 = (param_4->Translation).XY.m128d_f64[0];
      dVar44 = dVar44 * dVar2 + dVar38 + auVar24._0_8_ + (param_4->Translation).XY.m128d_f64[1];
      dVar38 = (param_4->Translation).ZW.m128d_f64[0];
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar1 = (param_7->AllocatorInstance).Data;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 1;
      auVar7._8_4_ = SUB84(dVar44,0);
      auVar7._0_8_ = dVar37 * dVar2 + dVar47 + auVar21._8_8_ + dVar3;
      auVar7._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar12) = auVar7;
      *(double *)(pFVar1 + lVar12 + 0x10) =
           auVar43._0_8_ * dVar2 + auVar55._0_8_ + auVar32._0_8_ + dVar38;
      lVar12 = lVar12 + 0x18;
    } while (lVar10 < iVar4);
  }
  return;
}

// ComputeWorldSuspensionCoordinates @ 1482efd20

void __cdecl
FSimpleSuspensionHelpers::ComputeWorldSuspensionCoordinates
          (FSimpleSuspensionParams *param_1,TTransform<double> *param_2,
          FSimpleSuspensionState *param_3)

{
  ComputeWorldSuspensionCoordinates
            (&param_1->LocalCenterOfMass,&param_1->LocalSuspensionNormal,
             &param_1->LocalSpringOrigins,param_2,&param_3->WorldCenterOfMass,
             &param_3->WorldSuspensionNormal,&param_3->WorldSpringOrigins);
  return;
}

// ErrCheck @ 148300610

bool __cdecl FSimpleSuspensionHelpers::ErrCheck(bool param_1,FString *param_2,FString *param_3)

{
  if ((param_3 != (FString *)0x0) && (!param_1)) {
    ::FString::operator=(param_3,param_2);
  }
  return param_1;
}

// IntegrateSpring @ 148310440

void __cdecl
FSimpleSuspensionHelpers::IntegrateSpring
          (float param_1,float param_2,float param_3,FSimpleSuspensionSpringParams *param_4,
          float param_5,float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1 * param_4->Stiffness;
  fVar1 = (fVar2 + param_4->Damping) * param_1 + param_5;
  if (__real_322bcc77 < fVar1) {
    fVar1 = __real_3f800000 / fVar1;
    *param_6 = ((param_1 * param_3 + param_2) * param_5 + param_4->Damping * param_2 * param_1) *
               fVar1;
    *param_7 = (param_3 * param_5 - fVar2 * param_2) * fVar1;
    return;
  }
  *param_6 = param_2;
  *param_7 = param_3;
  return;
}

// IntegrateSprings @ 148310510

void __cdecl
FSimpleSuspensionHelpers::IntegrateSprings
          (float param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          TArray<float,TSizedDefaultAllocator<32>_> *param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar3 = param_4->ArrayNum;
  if ((param_6->ArrayNum != iVar3) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6232448831594693167>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\SimpleSuspension.cpp"
                          ,0x22f,"OutNewSpringDisplacements.Num() == Count"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_7->ArrayNum != iVar3) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6232448831594693168>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\SimpleSuspension.cpp"
                          ,0x230,"OutNewSpringVelocities.Num() == Count"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2->ArrayNum != iVar3) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6232448831594693169>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\SimpleSuspension.cpp"
                          ,0x231,"SpringDisplacements.Num() == Count"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_3->ArrayNum != iVar3) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6232448831594693170>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\SimpleSuspension.cpp"
                          ,0x232,"SpringVelocities.Num() == Count"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_5->ArrayNum != iVar3) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6232448831594693171>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\SimpleSuspension.cpp"
                          ,0x233,"SprungMasses.Num() == Count"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar9 = __real_3f800000;
  fVar8 = __real_322bcc77;
  uVar14 = 0;
  if (0 < iVar3) {
    lVar13 = 0;
    lVar15 = 0;
    lVar16 = 0;
    do {
      uVar12 = ~uVar14 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar14 < param_7->ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (param_7->AllocatorInstance).Data;
      uVar11 = 0;
      if ((int)uVar14 < param_6->ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (param_6->AllocatorInstance).Data;
      uVar11 = 0;
      if ((int)uVar14 < param_5->ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar1 = *(float *)((param_5->AllocatorInstance).Data + lVar13 * 4);
      uVar11 = 0;
      if ((int)uVar14 < param_4->ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_4->AllocatorInstance).Data;
      uVar11 = 0;
      if ((int)uVar14 < param_3->ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar18 = *(float *)((param_3->AllocatorInstance).Data + lVar13 * 4);
      uVar11 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar2 = *(float *)(pFVar6 + lVar15 + 4);
      fVar19 = param_1 * *(float *)(pFVar6 + lVar15);
      fVar21 = *(float *)((param_2->AllocatorInstance).Data + lVar13 * 4);
      fVar17 = (fVar19 + fVar2) * param_1 + fVar1;
      if (fVar8 < fVar17) {
        fVar17 = fVar9 / fVar17;
        fVar20 = fVar18 * param_1;
        fVar18 = (fVar1 * fVar18 - fVar19 * fVar21) * fVar17;
        fVar21 = ((fVar20 + fVar21) * fVar1 + fVar2 * fVar21 * param_1) * fVar17;
      }
      uVar14 = uVar14 + 1;
      *(float *)(pFVar5 + lVar13 * 4) = fVar21;
      lVar15 = lVar15 + 0x10;
      lVar13 = lVar13 + 1;
      *(float *)(pFVar4 + lVar16) = fVar18;
      lVar16 = lVar16 + 4;
    } while (lVar13 < iVar3);
  }
  return;
}

