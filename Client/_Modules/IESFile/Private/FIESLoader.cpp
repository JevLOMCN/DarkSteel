// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IESFile
// Functions: 14

// FIESLoader @ 14e671bd0

FIESLoader * __thiscall FIESLoader::FIESLoader(FIESLoader *this,uchar *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FIESLoader *pFVar4;
  uint uVar5;
  ForAnyElementType local_18;
  int local_10 [2];
  
  this->CachedIntegral = 3.4028235e+38;
  (this->HAngles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HAngles).ArrayNum = 0;
  (this->HAngles).ArrayMax = 0;
  (this->VAngles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VAngles).ArrayNum = 0;
  (this->VAngles).ArrayMax = 0;
  (this->CandelaValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CandelaValues).ArrayNum = 0;
  (this->CandelaValues).ArrayMax = 0;
  this->Brightness = 0.0;
  this->PhotometricType = TypeC;
  ::FString::FString(&this->Error,L"No data loaded");
  if ((this->Error).Data.ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                       ,0x77,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIESLoader *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  uVar3 = 0x7ffffffe;
  if (param_2 < 0x7ffffffe) {
    uVar3 = param_2;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,uVar3 + 1,&local_18,local_10,local_10 + 1);
  memcpy(local_18.Data,param_1,(ulonglong)uVar3);
  uVar5 = 0;
  if ((int)uVar3 < local_10[0]) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIESLoader *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_18.Data[(int)uVar3] = (FScriptContainerElement)0x0;
  Load(this,(uchar *)local_18.Data);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return this;
}

// ComputeFilterPos @ 14e671d80

float __cdecl
FIESLoader::ComputeFilterPos(float param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((param_2->ArrayNum == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SortedValues.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                         ,0x1d7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar7 = (float)(*pcVar2)();
    return fVar7;
  }
  uVar5 = 0;
  uVar6 = param_2->ArrayNum - 1;
  if ((param_2->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar7 = (float)(*pcVar2)();
    return fVar7;
  }
  if (*(float *)(param_2->AllocatorInstance).Data <= param_1) {
    uVar4 = 0;
    if ((int)uVar6 < param_2->ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    pFVar1 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 4;
    if (param_1 < *(float *)pFVar1 || param_1 == *(float *)pFVar1) {
      if (uVar6 != 0) {
        do {
          uVar4 = uVar5 + 1 + uVar6 >> 1;
          if ((param_2->ArrayNum <= (int)uVar4) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            fVar7 = (float)(*pcVar2)();
            return fVar7;
          }
          if (param_1 < *(float *)((param_2->AllocatorInstance).Data + (ulonglong)uVar4 * 4)) {
            uVar4 = uVar4 - 1;
            bVar3 = uVar6 == uVar4;
            uVar6 = uVar4;
            if ((bVar3) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("EndPos != TestPos - 1",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                                   ,0x1f7,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              fVar7 = (float)(*pcVar2)();
              return fVar7;
            }
          }
          else {
            bVar3 = uVar5 == uVar4;
            uVar5 = uVar4;
            if ((bVar3) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartPos != TestPos",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                                   ,0x1f0,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              fVar7 = (float)(*pcVar2)();
              return fVar7;
            }
          }
        } while (uVar5 < uVar6);
      }
      uVar6 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar7 = (float)(*pcVar2)();
        return fVar7;
      }
      uVar6 = uVar5 + 1;
      fVar8 = 0.0;
      fVar7 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
      if (uVar6 < (uint)param_2->ArrayNum) {
        uVar4 = 0;
        if ((int)uVar6 < param_2->ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar7 = (float)(*pcVar2)();
          return fVar7;
        }
        fVar9 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) - fVar7;
        if (__real_38d1b717 < fVar9) {
          fVar8 = (param_1 - fVar7) / fVar9;
        }
      }
      fVar8 = (float)uVar5 + fVar8;
    }
    else {
      fVar8 = (float)uVar6;
    }
  }
  else {
    fVar8 = 0.0;
  }
  return fVar8;
}

// ComputeFullIntegral @ 14e672060

float __thiscall FIESLoader::ComputeFullIntegral(FIESLoader *this)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  
  dVar7 = __real_3f1a36e2e0000000;
  dVar6 = __real_bff0000000000000;
  fVar5 = __real_3f800000;
  dVar4 = __real_3ff0000000000000;
  fVar12 = this->CachedIntegral;
  if (fVar12 == __real_7f7fffff) {
    lVar11 = 1000000;
    uVar9 = 0x1234;
    uVar17 = SUB84(__real_404ca5dc0d03cf25,0);
    uVar19 = (undefined4)((ulonglong)__real_404ca5dc0d03cf25 >> 0x20);
    dVar3 = 0.0;
    do {
      do {
        do {
          uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
          uVar10 = uVar9 * 0xbb38435 + 0x3619636b;
          fVar12 = (float)(uVar9 >> 9 | 0x3f800000) - fVar5;
          uVar9 = uVar10 * 0xbb38435 + 0x3619636b;
          dVar14 = (double)((fVar12 + fVar12) - fVar5);
          fVar12 = (float)(uVar10 >> 9 | 0x3f800000) - fVar5;
          dVar2 = (double)((fVar12 + fVar12) - fVar5);
          fVar12 = (float)(uVar9 >> 9 | 0x3f800000) - fVar5;
          dVar16 = (double)((fVar12 + fVar12) - fVar5);
          dVar15 = dVar2 * dVar2 + dVar14 * dVar14 + dVar16 * dVar16;
        } while (dVar4 < dVar15);
      } while (dVar15 < dVar7);
      dVar13 = dVar4 / SQRT(dVar15);
      dVar16 = dVar16 * dVar13;
      dVar15 = dVar6;
      if ((dVar6 <= dVar16) && (dVar15 = dVar16, dVar4 <= dVar16)) {
        dVar15 = dVar4;
      }
      dVar15 = acos(dVar15);
      fVar18 = (float)(dVar15 * (double)CONCAT44(uVar19,uVar17));
      dVar14 = FGenericPlatformMath::Atan2(dVar2 * dVar13,dVar14 * dVar13);
      fVar12 = (float)(dVar14 * __real_404ca5dc0d03cf25 + __real_4066800000000000);
      if (((fVar18 < 0.0) || (__real_43340000 < fVar18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("VAngle >= 0 && VAngle <= 180",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                             ,0x1b8,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        fVar12 = (float)(*pcVar1)();
        return fVar12;
      }
      if (((fVar12 < 0.0) || (__real_43b40000 < fVar12)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("HAngle >= 0 && HAngle <= 360",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                             ,0x1b9,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        fVar12 = (float)(*pcVar1)();
        return fVar12;
      }
      fVar12 = Interpolate2D(this,fVar12,fVar18);
      uVar17 = SUB84(__real_404ca5dc0d03cf25,0);
      uVar19 = (undefined4)((ulonglong)__real_404ca5dc0d03cf25 >> 0x20);
      dVar3 = dVar3 + (double)fVar12;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    fVar12 = (float)(dVar3 * __real_3eb0c6f7a0b5ed8d);
    this->CachedIntegral = fVar12;
  }
  return fVar12;
}

// ComputeMax @ 14e672340

float __thiscall FIESLoader::ComputeMax(FIESLoader *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  uVar5 = 0;
  fVar6 = 0.0;
  if ((this->CandelaValues).ArrayNum == 0) {
    return 0.0;
  }
  do {
    uVar3 = 0;
    if ((int)uVar5 < (this->CandelaValues).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar6 = (float)(*pcVar1)();
        return fVar6;
      }
    }
    lVar4 = (longlong)(int)uVar5;
    uVar5 = uVar5 + 1;
    fVar7 = *(float *)((this->CandelaValues).AllocatorInstance.Data + lVar4 * 4);
    if (fVar7 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar6 = fVar7;
  } while (uVar5 < (uint)(this->CandelaValues).ArrayNum);
  return fVar7;
}

// ExtractInRGBA16F @ 14e6724a0

float __thiscall
FIESLoader::ExtractInRGBA16F
          (FIESLoader *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [4];
  
  if (1 < (this->Error).Data.ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                       ,0x171,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar9 = (float)(*pcVar1)();
      return fVar9;
    }
  }
  if (param_1->ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OutData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                       ,0x176,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar9 = (float)(*pcVar1)();
      return fVar9;
    }
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x80000,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
  memset((param_1->AllocatorInstance).Data + iVar4,0,0x80000);
  pFVar6 = (param_1->AllocatorInstance).Data;
  fVar10 = ComputeMax(this);
  fVar2 = __real_3f340000;
  fVar9 = __real_3fb40000;
  uVar5 = 0;
  fVar10 = __real_3f800000 / fVar10;
  do {
    uVar8 = 0;
    pFVar7 = pFVar6;
    do {
      local_res8[0] = 0;
      fVar11 = Interpolate2D(this,(float)uVar5 * fVar9,(float)uVar8 * fVar2);
      FGenericPlatformMath::StoreHalf(local_res8,fVar11 * fVar10);
      pFVar6 = pFVar7 + 8;
      uVar8 = uVar8 + 1;
      *(ushort *)pFVar7 = local_res8[0];
      *(ushort *)(pFVar7 + 2) = local_res8[0];
      *(ushort *)(pFVar7 + 4) = local_res8[0];
      *(ushort *)(pFVar7 + 6) = local_res8[0];
      pFVar7 = pFVar6;
    } while (uVar8 < 0x100);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x100);
  return __real_3f800000;
}

// GetBrightness @ 14e6726b0

float __thiscall FIESLoader::GetBrightness(FIESLoader *this)

{
  return this->Brightness;
}

// GetHeight @ 14e672860

uint __thiscall FIESLoader::GetHeight(FIESLoader *this)

{
  return 0x100;
}

// GetWidth @ 14e6729a0

uint __thiscall FIESLoader::GetWidth(FIESLoader *this)

{
  return 0x100;
}

// Interpolate1D @ 14e6729b0

float __thiscall FIESLoader::Interpolate1D(FIESLoader *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = ComputeFilterPos(param_1,&this->VAngles);
  uVar1 = (this->HAngles).ArrayNum;
  uVar2 = 0;
  fVar5 = 0.0;
  if (uVar1 != 0) {
    do {
      fVar4 = InterpolateBilinear(this,(float)uVar2,fVar3);
      uVar2 = uVar2 + 1;
      fVar5 = fVar5 + fVar4;
    } while (uVar2 < uVar1);
  }
  return fVar5 / (float)uVar1;
}

// Interpolate2D @ 14e672a40

float __thiscall FIESLoader::Interpolate2D(FIESLoader *this,float param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar10;
  
  if (this->PhotometricType == TypeA) {
    __libm_sse2_sincosf4_();
    fVar10 = extraout_XMM0_Dd * extraout_XMM0_Da;
    fVar9 = __real_bf800000;
    if ((__real_bf800000 <= fVar10) && (fVar9 = fVar10, __real_3f800000 <= fVar10)) {
      fVar9 = __real_3f800000;
    }
    fVar9 = asinf(fVar9);
    param_2 = fVar9 * __real_42652ee0;
    fVar9 = FGenericPlatformMath::Atan2(extraout_XMM0_Dc * extraout_XMM0_Da,extraout_XMM0_Db);
    param_1 = fVar9 * __real_c2652ee0;
  }
  else {
    iVar7 = (this->HAngles).ArrayNum;
    if (0 < iVar7) {
      uVar8 = 0;
      if ((int)(iVar7 - 1U) < iVar7) {
        uVar8 = ~(iVar7 - 1U) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
      iVar7 = (this->HAngles).ArrayNum;
      if (0.0 < *(float *)((this->HAngles).AllocatorInstance.Data + ((longlong)iVar7 + -1) * 4)) {
        uVar8 = 0;
        if ((int)(iVar7 - 1U) < iVar7) {
          uVar8 = ~(iVar7 - 1U) >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar9 = (float)(*pcVar2)();
          return fVar9;
        }
        iVar7 = (this->HAngles).ArrayNum;
        pFVar1 = (this->HAngles).AllocatorInstance.Data + ((longlong)iVar7 + -1) * 4;
        if (*(float *)pFVar1 <= param_1 && param_1 != *(float *)pFVar1) {
          uVar6 = 0;
          uVar8 = uVar6;
          if ((int)(iVar7 - 1U) < iVar7) {
            uVar8 = ~(iVar7 - 1U) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            fVar9 = (float)(*pcVar2)();
            return fVar9;
          }
          iVar7 = (this->HAngles).ArrayNum;
          uVar8 = iVar7 - 1;
          iVar4 = (int)((float)(int)param_1 /
                       *(float *)((this->HAngles).AllocatorInstance.Data + (longlong)(int)uVar8 * 4)
                       );
          if ((iVar4 == 1) || (iVar4 == 3)) {
            uVar5 = uVar6;
            if ((int)uVar8 < iVar7) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              fVar9 = (float)(*pcVar2)();
              return fVar9;
            }
            iVar7 = (this->HAngles).ArrayNum;
            fVar9 = *(float *)((this->HAngles).AllocatorInstance.Data + ((longlong)iVar7 + -1) * 4);
            if ((int)(iVar7 - 1U) < iVar7) {
              uVar6 = ~(iVar7 - 1U) >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              fVar9 = (float)(*pcVar2)();
              return fVar9;
            }
            fVar10 = *(float *)((this->HAngles).AllocatorInstance.Data +
                               (longlong)(this->HAngles).ArrayNum * 4 + -4);
            fVar9 = FGenericPlatformMath::Fmod(param_1,fVar9);
            param_1 = fVar10 - fVar9;
          }
          else {
            if ((int)uVar8 < iVar7) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              fVar9 = (float)(*pcVar2)();
              return fVar9;
            }
            param_1 = FGenericPlatformMath::Fmod
                                (param_1,*(float *)((this->HAngles).AllocatorInstance.Data +
                                                   (longlong)(this->HAngles).ArrayNum * 4 + -4));
          }
          goto LAB_14e672ea1;
        }
      }
      if ((iVar7 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar9 = (float)(*pcVar2)();
        return fVar9;
      }
      if (0.0 < *(float *)(this->HAngles).AllocatorInstance.Data) {
        if (((this->HAngles).ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar9 = (float)(*pcVar2)();
          return fVar9;
        }
        if (param_1 < *(float *)(this->HAngles).AllocatorInstance.Data) {
          if (((this->HAngles).ArrayNum < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            fVar9 = (float)(*pcVar2)();
            return fVar9;
          }
          iVar7 = (this->HAngles).ArrayNum;
          pFVar1 = (this->HAngles).AllocatorInstance.Data;
          uVar6 = iVar7 - 1;
          uVar8 = 0;
          if ((int)uVar6 < iVar7) {
            uVar8 = ~uVar6 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            fVar9 = (float)(*pcVar2)();
            return fVar9;
          }
          param_1 = (*(float *)((this->HAngles).AllocatorInstance.Data +
                               (longlong)(this->HAngles).ArrayNum * 4 + -4) - *(float *)pFVar1) -
                    param_1;
        }
      }
    }
  }
LAB_14e672ea1:
  fVar9 = ComputeFilterPos(param_1,&this->HAngles);
  fVar10 = ComputeFilterPos(param_2,&this->VAngles);
  fVar9 = InterpolateBilinear(this,fVar9,fVar10);
  return fVar9;
}

// InterpolateBilinear @ 14e672ef0

float __thiscall FIESLoader::InterpolateBilinear(FIESLoader *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = (int)param_2;
  iVar2 = (int)param_1;
  fVar3 = InterpolatePoint(this,iVar2,iVar1);
  fVar4 = InterpolatePoint(this,iVar2 + 1,iVar1);
  fVar5 = InterpolatePoint(this,iVar2,iVar1 + 1);
  fVar3 = (fVar5 - fVar3) * (param_2 - (float)iVar1) + fVar3;
  fVar5 = InterpolatePoint(this,iVar2 + 1,iVar1 + 1);
  return (((fVar5 - fVar4) * (param_2 - (float)iVar1) + fVar4) - fVar3) * (param_1 - (float)iVar2) +
         fVar3;
}

// InterpolatePoint @ 14e672ff0

float __thiscall FIESLoader::InterpolatePoint(FIESLoader *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  uVar3 = (this->HAngles).ArrayNum;
  uVar4 = (this->VAngles).ArrayNum;
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("X >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                       ,0x216,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Y >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                       ,0x217,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  uVar5 = (uint)param_1 % uVar3;
  if ((int)uVar3 <= (int)uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("X < (int)HAnglesNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                       ,0x21c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  if ((int)uVar4 <= (int)((uint)param_2 % uVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Y < (int)VAnglesNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\IESFile\\Private\\IESLoader.cpp"
                       ,0x21d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  uVar4 = uVar4 * uVar5 + (uint)param_2 % uVar4;
  uVar3 = 0;
  if ((int)uVar4 < (this->CandelaValues).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  return *(float *)((this->CandelaValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
}

// IsValid @ 14e6731a0

bool __thiscall FIESLoader::IsValid(FIESLoader *this)

{
  return (this->Error).Data.ArrayNum < 2;
}

// Load @ 14e6731b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FIESLoader::Load(FIESLoader *this,uchar *param_1)

{
  FString *pFVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FIESLoader *pFVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  uint uVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_828 [32];
  float *local_808;
  FScriptContainerElement *local_800;
  longlong local_7f8;
  longlong local_7f0;
  undefined8 local_7e8;
  byte *local_7d8;
  float local_7d0;
  float local_7cc;
  uint local_7c8;
  float local_7c4;
  uint local_7c0;
  float local_7bc;
  EIESPhotometricType local_7b8 [2];
  FString *local_7b0;
  float local_7a8;
  int local_7a4;
  float local_7a0;
  float local_79c;
  float local_798;
  float local_794;
  float local_790;
  float local_78c;
  FIESLoader *local_788;
  byte local_778 [256];
  byte local_678 [256];
  byte local_578 [256];
  byte local_478 [256];
  byte local_378 [256];
  byte local_278 [256];
  byte local_178 [256];
  ulonglong local_78;
  ulonglong uVar12;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_828;
  pFVar1 = &this->Error;
  local_7d8 = param_1;
  local_7b0 = pFVar1;
  local_788 = this;
  ::FString::operator=(pFVar1,L"VersionError");
  bVar6 = *param_1;
  pbVar16 = param_1;
  while (bVar6 != 0) {
    if (bVar6 == 0xd) {
      if (pbVar16[1] != 10) goto LAB_14e67322e;
      pbVar16 = pbVar16 + 2;
    }
    else {
      if (0x20 < bVar6) break;
LAB_14e67322e:
      pbVar16 = pbVar16 + 1;
    }
    local_7d8 = pbVar16;
    bVar6 = *pbVar16;
  }
  uVar17 = 0;
  pbVar13 = local_778;
  uVar11 = uVar17;
  do {
    bVar6 = *pbVar16;
    if (bVar6 == 0) break;
    if (bVar6 == 0xd) {
      if (pbVar16[1] == 10) {
        pbVar16 = pbVar16 + 2;
        local_7d8 = pbVar16;
        break;
      }
    }
    else if (bVar6 == 10) {
      pbVar16 = pbVar16 + 1;
      local_7d8 = pbVar16;
      break;
    }
    pbVar16 = pbVar16 + 1;
    *pbVar13 = bVar6;
    pbVar13 = pbVar13 + 1;
    uVar9 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar9;
    local_7d8 = pbVar16;
  } while (uVar9 < 0xff);
  local_778[uVar11] = 0;
  iVar8 = FGenericPlatformStricmp::Stricmp((char *)local_778,"IESNA:LM-63-1995");
  if (((iVar8 != 0) &&
      (iVar8 = FGenericPlatformStricmp::Stricmp((char *)local_778,"IESNA91"), iVar8 != 0)) &&
     (iVar8 = FGenericPlatformStricmp::Stricmp((char *)local_778,"IESNA:LM-63-2002"),
     local_7d8 = pbVar16, iVar8 != 0)) {
    pbVar16 = param_1;
    local_7d8 = param_1;
  }
  ::FString::operator=(pFVar1,L"HeaderError");
  bVar6 = *pbVar16;
  while (bVar6 != 0) {
    do {
      if (bVar6 == 0xd) {
        if (pbVar16[1] != 10) goto LAB_14e673308;
        pbVar16 = pbVar16 + 2;
      }
      else {
        if (0x20 < bVar6) break;
LAB_14e673308:
        pbVar16 = pbVar16 + 1;
      }
      bVar6 = *pbVar16;
      local_7d8 = pbVar16;
    } while (bVar6 != 0);
    pbVar13 = local_678;
    uVar11 = uVar17;
    do {
      bVar6 = *pbVar16;
      if (bVar6 == 0) break;
      if (bVar6 == 0xd) {
        if (pbVar16[1] == 10) {
          pbVar16 = pbVar16 + 2;
          local_7d8 = pbVar16;
          break;
        }
      }
      else if (bVar6 == 10) {
        pbVar16 = pbVar16 + 1;
        local_7d8 = pbVar16;
        break;
      }
      pbVar16 = pbVar16 + 1;
      *pbVar13 = bVar6;
      pbVar13 = pbVar13 + 1;
      uVar9 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar9;
      local_7d8 = pbVar16;
    } while (uVar9 < 0xff);
    local_678[uVar11] = 0;
    iVar8 = strcmp((char *)local_678,"TILT=NONE");
    if (iVar8 == 0) break;
    iVar8 = strncmp((char *)local_678,"TILT=",5);
    if (iVar8 == 0) {
      return;
    }
    bVar6 = *pbVar16;
  }
  ::FString::operator=(pFVar1,L"HeaderParameterError");
  bVar6 = *pbVar16;
  while (bVar6 != 0) {
    if (bVar6 == 0xd) {
      if (pbVar16[1] != 10) goto LAB_14e6733d5;
      pbVar16 = pbVar16 + 2;
    }
    else {
      if (0x20 < bVar6) break;
LAB_14e6733d5:
      pbVar16 = pbVar16 + 1;
    }
    local_7d8 = pbVar16;
    bVar6 = *pbVar16;
  }
  pbVar13 = local_578;
  uVar11 = uVar17;
  while (bVar6 = *pbVar16, bVar6 != 0) {
    if (bVar6 == 0xd) {
      if (pbVar16[1] == 10) {
        local_7d8 = pbVar16 + 2;
      }
      else {
LAB_14e673428:
        local_7d8 = pbVar16 + 1;
      }
      break;
    }
    if ((bVar6 == 10) || (bVar6 < 0x21)) goto LAB_14e673428;
    pbVar16 = pbVar16 + 1;
    *pbVar13 = bVar6;
    pbVar13 = pbVar13 + 1;
    uVar9 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar9;
    local_7d8 = pbVar16;
    if (0xfe < uVar9) break;
  }
  local_578[uVar11] = 0;
  iVar8 = atoi((char *)local_578);
  if (iVar8 < 1) {
    ::FString::operator=(pFVar1,L"Light count needs to be positive.");
  }
  else {
    bVar7 = ::GetFloat(&local_7d8,&local_7a8);
    if ((bVar7) && (bVar7 = ::GetFloat(&local_7d8,&local_7bc), bVar7)) {
      if (0.0 <= local_7bc) {
        bVar7 = ::GetInt(&local_7d8,(int *)&local_7c8);
        if ((bVar7) &&
           (bVar7 = ::GetInt(&local_7d8,(int *)&local_7c0), uVar10 = local_7c0, uVar9 = local_7c8,
           bVar7)) {
          if ((int)local_7c8 < 0) {
            ::FString::operator=(pFVar1,L"VAnglesNum is not valid");
          }
          else if ((int)local_7c0 < 0) {
            ::FString::operator=(pFVar1,L"HAnglesNum is not valid");
          }
          else {
            bVar7 = ::GetInt(&local_7d8,(int *)local_7b8);
            if (bVar7) {
              if (local_7b8[0] - TypeC < 3) {
                this->PhotometricType = local_7b8[0];
              }
              bVar7 = ::GetInt(&local_7d8,&local_7a4);
              if (((((bVar7) && (bVar7 = ::GetFloat(&local_7d8,&local_7a0), bVar7)) &&
                   (bVar7 = ::GetFloat(&local_7d8,&local_79c), bVar7)) &&
                  ((bVar7 = ::GetFloat(&local_7d8,&local_798), bVar7 &&
                   (bVar7 = ::GetFloat(&local_7d8,&local_794), bVar7)))) &&
                 ((bVar7 = ::GetFloat(&local_7d8,&local_790), bVar7 &&
                  (bVar7 = ::GetFloat(&local_7d8,&local_78c), bVar7)))) {
                ::FString::operator=(pFVar1,L"ContentError");
                fVar19 = __real_ff7fffff;
                TArray<float,TSizedDefaultAllocator<32>_>::Empty(&this->VAngles,uVar9);
                pbVar16 = local_7d8;
                uVar11 = uVar17;
                fVar22 = fVar19;
                if (uVar9 != 0) {
                  do {
                    bVar6 = *pbVar16;
                    while (bVar6 != 0) {
                      if (bVar6 == 0xd) {
                        if (pbVar16[1] != 10) goto LAB_14e67365b;
                        pbVar16 = pbVar16 + 2;
                      }
                      else {
                        if (0x20 < bVar6) break;
LAB_14e67365b:
                        pbVar16 = pbVar16 + 1;
                      }
                      local_7d8 = pbVar16;
                      bVar6 = *pbVar16;
                    }
                    pbVar13 = local_478;
                    uVar12 = uVar17;
                    while (bVar6 = *pbVar16, bVar6 != 0) {
                      if (bVar6 == 0xd) {
                        if (pbVar16[1] == 10) {
                          pbVar16 = pbVar16 + 2;
                          local_7d8 = pbVar16;
                        }
                        else {
LAB_14e6736ac:
                          pbVar16 = pbVar16 + 1;
                          local_7d8 = pbVar16;
                        }
                        break;
                      }
                      if ((bVar6 == 10) || (bVar6 < 0x21)) goto LAB_14e6736ac;
                      pbVar16 = pbVar16 + 1;
                      *pbVar13 = bVar6;
                      pbVar13 = pbVar13 + 1;
                      uVar10 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar10;
                      local_7d8 = pbVar16;
                      if (0xfe < uVar10) break;
                    }
                    local_478[uVar12] = 0;
                    dVar20 = atof((char *)local_478);
                    fVar21 = (float)dVar20;
                    local_7d0 = fVar21;
                    if (fVar21 < fVar22) {
                      ::FString::operator=(pFVar1,L"V Values are not in increasing order");
                      return;
                    }
                    pFVar3 = (this->VAngles).AllocatorInstance.Data;
                    if ((pFVar3 <= (FScriptContainerElement *)&local_7d0) &&
                       (lVar14 = (longlong)(this->VAngles).ArrayMax,
                       (FScriptContainerElement *)&local_7d0 < pFVar3 + lVar14 * 4)) {
                      local_7f0 = (longlong)(this->VAngles).ArrayNum;
                      local_7e8 = 4;
                      local_808 = &local_7d0;
                      local_800 = pFVar3;
                      local_7f8 = lVar14;
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
                    }
                    iVar8 = (this->VAngles).ArrayNum;
                    piVar2 = &(this->VAngles).ArrayMax;
                    if (iVar8 == *piVar2) {
                      iVar8 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&(this->VAngles).AllocatorInstance,piVar2);
                    }
                    (this->VAngles).ArrayNum = iVar8 + 1;
                    uVar18 = (int)uVar11 + 1;
                    *(float *)((this->VAngles).AllocatorInstance.Data + (longlong)iVar8 * 4) =
                         local_7d0;
                    uVar11 = (ulonglong)uVar18;
                    fVar22 = fVar21;
                    uVar10 = local_7c0;
                  } while (uVar18 < uVar9);
                }
                TArray<float,TSizedDefaultAllocator<32>_>::Empty(&this->HAngles,uVar10);
                uVar11 = uVar17;
                if (uVar10 != 0) {
                  do {
                    bVar6 = *pbVar16;
                    while (bVar6 != 0) {
                      if (bVar6 == 0xd) {
                        if (pbVar16[1] != 10) goto LAB_14e6737e8;
                        pbVar16 = pbVar16 + 2;
                      }
                      else {
                        if (0x20 < bVar6) break;
LAB_14e6737e8:
                        pbVar16 = pbVar16 + 1;
                      }
                      local_7d8 = pbVar16;
                      bVar6 = *pbVar16;
                    }
                    pbVar13 = local_378;
                    uVar12 = uVar17;
                    while (bVar6 = *pbVar16, bVar6 != 0) {
                      if (bVar6 == 0xd) {
                        if (pbVar16[1] == 10) {
                          pbVar16 = pbVar16 + 2;
                          local_7d8 = pbVar16;
                        }
                        else {
LAB_14e673839:
                          pbVar16 = pbVar16 + 1;
                          local_7d8 = pbVar16;
                        }
                        break;
                      }
                      if ((bVar6 == 10) || (bVar6 < 0x21)) goto LAB_14e673839;
                      pbVar16 = pbVar16 + 1;
                      *pbVar13 = bVar6;
                      pbVar13 = pbVar13 + 1;
                      uVar9 = (int)uVar12 + 1;
                      uVar12 = (ulonglong)uVar9;
                      local_7d8 = pbVar16;
                      if (0xfe < uVar9) break;
                    }
                    local_378[uVar12] = 0;
                    dVar20 = atof((char *)local_378);
                    fVar22 = (float)dVar20;
                    local_7cc = fVar22;
                    if (fVar22 < fVar19) {
                      ::FString::operator=(local_7b0,L"H Values are not in increasing order");
                      return;
                    }
                    pFVar3 = (this->HAngles).AllocatorInstance.Data;
                    if ((pFVar3 <= (FScriptContainerElement *)&local_7cc) &&
                       (lVar14 = (longlong)(this->HAngles).ArrayMax,
                       (FScriptContainerElement *)&local_7cc < pFVar3 + lVar14 * 4)) {
                      local_7f0 = (longlong)(this->HAngles).ArrayNum;
                      local_7e8 = 4;
                      local_808 = &local_7cc;
                      local_800 = pFVar3;
                      local_7f8 = lVar14;
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
                    }
                    iVar8 = (this->HAngles).ArrayNum;
                    piVar2 = &(this->HAngles).ArrayMax;
                    if (iVar8 == *piVar2) {
                      iVar8 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,(ForAnyElementType *)this,piVar2);
                    }
                    (this->HAngles).ArrayNum = iVar8 + 1;
                    uVar18 = (int)uVar11 + 1;
                    uVar11 = (ulonglong)uVar18;
                    *(float *)((this->HAngles).AllocatorInstance.Data + (longlong)iVar8 * 4) =
                         local_7cc;
                    fVar19 = fVar22;
                    uVar9 = local_7c8;
                  } while (uVar18 < uVar10);
                }
                this_00 = &this->CandelaValues;
                TArray<float,TSizedDefaultAllocator<32>_>::Empty(this_00,uVar10 * uVar9);
                uVar11 = uVar17;
                if (uVar10 != 0) {
                  do {
                    uVar12 = uVar17;
                    if (uVar9 != 0) {
                      do {
                        bVar6 = *pbVar16;
                        while (bVar6 != 0) {
                          if (bVar6 == 0xd) {
                            if (pbVar16[1] != 10) goto LAB_14e673981;
                            pbVar16 = pbVar16 + 2;
                          }
                          else {
                            if (0x20 < bVar6) break;
LAB_14e673981:
                            pbVar16 = pbVar16 + 1;
                          }
                          local_7d8 = pbVar16;
                          bVar6 = *pbVar16;
                        }
                        pbVar13 = local_278;
                        uVar15 = uVar17;
                        while (bVar6 = *pbVar16, bVar6 != 0) {
                          if (bVar6 == 0xd) {
                            if (pbVar16[1] == 10) {
                              pbVar16 = pbVar16 + 2;
                              local_7d8 = pbVar16;
                            }
                            else {
LAB_14e6739d8:
                              pbVar16 = pbVar16 + 1;
                              local_7d8 = pbVar16;
                            }
                            break;
                          }
                          if ((bVar6 == 10) || (bVar6 < 0x21)) goto LAB_14e6739d8;
                          pbVar16 = pbVar16 + 1;
                          *pbVar13 = bVar6;
                          pbVar13 = pbVar13 + 1;
                          uVar10 = (int)uVar15 + 1;
                          uVar15 = (ulonglong)uVar10;
                          local_7d8 = pbVar16;
                          if (0xfe < uVar10) break;
                        }
                        local_278[uVar15] = 0;
                        dVar20 = atof((char *)local_278);
                        pFVar3 = (this_00->AllocatorInstance).Data;
                        local_7c4 = (float)dVar20 * local_7bc;
                        if ((pFVar3 <= (FScriptContainerElement *)&local_7c4) &&
                           (lVar14 = (longlong)(this->CandelaValues).ArrayMax,
                           (FScriptContainerElement *)&local_7c4 < pFVar3 + lVar14 * 4)) {
                          local_7f0 = (longlong)(this->CandelaValues).ArrayNum;
                          local_7e8 = 4;
                          local_808 = &local_7c4;
                          local_800 = pFVar3;
                          local_7f8 = lVar14;
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
                        }
                        iVar8 = (this->CandelaValues).ArrayNum;
                        if (iVar8 == (this->CandelaValues).ArrayMax) {
                          iVar8 = UE::Core::Private::
                                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x404,&this_00->AllocatorInstance,
                                             &(this->CandelaValues).ArrayMax);
                        }
                        (this->CandelaValues).ArrayNum = iVar8 + 1;
                        uVar18 = (int)uVar12 + 1;
                        uVar12 = (ulonglong)uVar18;
                        *(float *)((this_00->AllocatorInstance).Data + (longlong)iVar8 * 4) =
                             local_7c4;
                        uVar10 = local_7c0;
                      } while (uVar18 < uVar9);
                    }
                    uVar18 = (int)uVar11 + 1;
                    uVar11 = (ulonglong)uVar18;
                  } while (uVar18 < uVar10);
                }
                pFVar1 = local_7b0;
                ::FString::operator=(local_7b0,L"Unexpected content after candela values.");
                bVar6 = *pbVar16;
                if (bVar6 != 0) {
                  do {
                    if ((bVar6 == 0xd) && (pbVar16[1] == 10)) {
                      pbVar16 = pbVar16 + 2;
                    }
                    else {
                      if (0x20 < bVar6) break;
                      pbVar16 = pbVar16 + 1;
                    }
                    bVar6 = *pbVar16;
                  } while (bVar6 != 0);
                  if (bVar6 != 0) {
                    do {
                      if (bVar6 == 0xd) {
                        if (pbVar16[1] != 10) goto LAB_14e673b34;
                        pbVar16 = pbVar16 + 2;
                      }
                      else {
                        if (0x20 < bVar6) break;
LAB_14e673b34:
                        pbVar16 = pbVar16 + 1;
                      }
                      bVar6 = *pbVar16;
                    } while (bVar6 != 0);
                    pbVar13 = local_178;
                    while (bVar6 = *pbVar16, bVar6 != 0) {
                      if (bVar6 == 0xd) {
                        if (pbVar16[1] == 10) {
                          pbVar16 = pbVar16 + 2;
                        }
                        else {
LAB_14e673b7a:
                          pbVar16 = pbVar16 + 1;
                        }
                        break;
                      }
                      if ((bVar6 == 10) || (bVar6 < 0x21)) goto LAB_14e673b7a;
                      *pbVar13 = bVar6;
                      pbVar16 = pbVar16 + 1;
                      pbVar13 = pbVar13 + 1;
                      uVar9 = (int)uVar17 + 1;
                      uVar17 = (ulonglong)uVar9;
                      if (0xfe < uVar9) break;
                    }
                    local_178[uVar17] = 0;
                    iVar8 = strcmp((char *)local_178,"END");
                    if (iVar8 == 0) {
                      bVar6 = *pbVar16;
                      while (bVar6 != 0) {
                        if (bVar6 == 0xd) {
                          if (pbVar16[1] != 10) goto LAB_14e673bb8;
                          pbVar16 = pbVar16 + 2;
                        }
                        else {
                          if (0x20 < bVar6) break;
LAB_14e673bb8:
                          pbVar16 = pbVar16 + 1;
                        }
                        bVar6 = *pbVar16;
                      }
                    }
                  }
                }
                if (*pbVar16 == 0) {
                  ::FString::operator=(pFVar1,(wchar_t *)0x0);
                  pFVar5 = local_788;
                  fVar19 = ComputeMax(local_788);
                  pFVar5->Brightness = fVar19;
                  if (fVar19 <= 0.0) {
                    pFVar5->Brightness = 1000.0;
                  }
                }
                else {
                  ::FString::operator=(pFVar1,L"Unexpected content after END.");
                }
              }
            }
          }
        }
      }
      else {
        ::FString::operator=(pFVar1,L"CandelaMult is negative");
      }
    }
  }
  return;
}

