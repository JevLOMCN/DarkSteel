// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// Decimate @ 14e007b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FHairStrandsDecimation::Decimate
          (FHairStrandsDatas *param_1,uint param_2,int param_3,FHairStrandsDatas *param_4,
          bool param_5)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FHairStrandsDatas *pFVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_2e8 [32];
  bool local_2a8 [4];
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  FHairStrandsDatas *local_290;
  int local_288;
  uint local_284;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_280;
  longlong *local_270;
  TArray<bool,TSizedDefaultAllocator<32>_> local_268;
  longlong *local_258;
  FPointsSampler local_250;
  undefined1 local_228 [400];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar12 = (uint)param_1->_padding_;
  uVar15 = uVar12;
  if (param_2 < uVar12) {
    uVar15 = param_2;
  }
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 0;
  local_280.ArrayMax = 0;
  uVar13 = 1;
  if (1 < uVar15) {
    uVar13 = uVar15;
  }
  local_2a4 = param_3;
  local_290 = param_4;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::Init
            (&local_280,&UE::Math::TVector<float>::ZeroVector,uVar12);
  local_270 = &param_1->_padding_;
  uVar12 = 0;
  if ((int)param_1->_padding_ == 0) {
    uVar15 = 0;
  }
  else {
    do {
      uVar15 = 0;
      if ((int)uVar12 < (int)param_1->_padding_) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar17 = (longlong)(int)uVar12;
      uVar15 = *(uint *)(param_1->_padding_ + lVar17 * 4);
      uVar9 = 0;
      if ((int)uVar15 < (int)param_1->_padding_) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = *(undefined8 *)(param_1->_padding_ + (longlong)(int)uVar15 * 0xc);
      uVar3 = *(undefined4 *)(param_1->_padding_ + 8 + (longlong)(int)uVar15 * 0xc);
      uVar15 = 0;
      if ((int)uVar12 < local_280.ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = uVar12 + 1;
      *(undefined8 *)(local_280.AllocatorInstance.Data + lVar17 * 0xc) = uVar1;
      *(undefined4 *)(local_280.AllocatorInstance.Data + lVar17 * 0xc + 8) = uVar3;
      uVar15 = (uint)param_1->_padding_;
    } while (uVar12 < uVar15);
  }
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  local_2a8[0] = true;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_268,local_2a8,uVar15);
  uVar12 = FHairStrandsCommonDatas::GetAttributes((FHairStrandsCommonDatas *)param_1);
  local_2a0 = uVar12;
  GroomBinding_RBFWeighting::FPointsSampler::FPointsSampler
            (&local_250,&local_268,(TVector<float> *)local_280.AllocatorInstance.Data,uVar13);
  iVar14 = local_250.SampleIndices.ArrayNum;
  local_258 = &param_4->_padding_;
  local_284 = local_250.SampleIndices.ArrayNum;
  FHairStrandsCurves::SetNum
            ((FHairStrandsCurves *)local_258,local_250.SampleIndices.ArrayNum,uVar12,param_5);
  FHairStrandsPoints::SetNum((FHairStrandsPoints *)param_4,local_2a4 * iVar14,uVar12,param_5);
  param_4->HairDensity = param_1->HairDensity;
  fVar6 = __real_3f000000;
  dVar5 = __real_3ff0000000000000;
  local_29c = 0;
  local_298 = 0;
  if (iVar14 != 0) {
    do {
      uVar12 = local_298;
      uVar13 = ~local_298;
      uVar15 = 0;
      if ((int)local_298 < local_250.SampleIndices.ArrayNum) {
        uVar15 = uVar13 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar15 = *(uint *)(local_250.SampleIndices.AllocatorInstance.Data + (longlong)(int)uVar12 * 4)
      ;
      uVar9 = 0;
      if ((int)uVar15 < (int)param_1->_padding_) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_288 = *(int *)(*local_270 + (longlong)(int)uVar15 * 4);
      uVar9 = 0;
      if ((int)uVar15 < (int)param_1->_padding_) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = local_258;
      uVar2 = *(ushort *)(param_1->_padding_ + (longlong)(int)uVar15 * 2);
      uVar9 = local_2a4;
      if ((int)(uint)uVar2 < (int)local_2a4) {
        uVar9 = (uint)uVar2;
      }
      uVar16 = 0;
      if ((int)uVar12 < (int)local_258[1]) {
        uVar16 = uVar13 >> 0x1f;
      }
      dVar18 = (double)((float)(int)(uVar2 - 1) / (float)(int)(uVar9 - 1));
      if (dVar18 <= dVar5) {
        dVar18 = dVar5;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(short *)(*plVar7 + (longlong)(int)uVar12 * 2) = (short)uVar9;
      FHairStrandsDatas::CopyCurve(param_1,local_290,local_2a0,uVar15,uVar12);
      param_4 = local_290;
      uVar15 = local_2a0;
      iVar14 = 0;
      uVar13 = local_29c;
      if (0 < (int)uVar9) {
        uVar16 = local_288 + -2 + (uint)uVar2;
        fVar20 = (float)local_288;
        do {
          fVar19 = (float)iVar14 * (float)dVar18 + fVar20;
          uVar10 = (int)ROUND((fVar19 + fVar19) - fVar6) >> 1;
          uVar12 = uVar16;
          if ((int)uVar10 < (int)uVar16) {
            uVar12 = uVar10;
          }
          FHairStrandsDatas::CopyPointLerp
                    (param_1,param_4,uVar15,uVar12,uVar12 + 1,fVar19 - (float)(int)uVar12,uVar13);
          uVar13 = uVar13 + 1;
          iVar14 = iVar14 + 1;
          uVar12 = local_298;
        } while (iVar14 < (int)uVar9);
      }
      local_29c = uVar13;
      local_298 = uVar12 + 1;
    } while (local_298 < local_284);
  }
  pFVar11 = HairStrandsBuilder::BuildInternalData
                      ((FHairStrandsDatas *)local_228,(FHairStrandsCommonDatas *)param_4);
  FHairStrandsDatas::operator=(param_4,pFVar11);
  FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)(local_228 + 0x78));
  FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)local_228);
  if (local_250.SamplePositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.SamplePositions.AllocatorInstance.Data);
  }
  if (local_250.SampleIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.SampleIndices.AllocatorInstance.Data);
  }
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.AllocatorInstance.Data);
  }
  return;
}

// Decimate @ 14e008100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FHairStrandsDecimation::Decimate
          (FHairStrandsDatas *param_1,float param_2,float param_3,bool param_4,
          FHairStrandsDatas *param_5,bool param_6)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FHairStrandsDatas *pFVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_2e8 [32];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_290;
  undefined4 local_280;
  uint local_27c;
  int local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  FHairStrandsDatas *local_260;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_258;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_248;
  undefined1 local_238 [400];
  ulonglong local_a8;
  
  fVar4 = __real_3f800000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar9 = (uint)param_1->_padding_;
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  local_260 = param_5;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (__real_3f800000 <= param_3) {
    param_3 = __real_3f800000;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  uVar17 = (uint)(longlong)((float)uVar9 * param_2);
  uVar8 = uVar9;
  if (uVar17 < uVar9) {
    uVar8 = uVar17;
  }
  uVar17 = 1;
  if (1 < uVar8) {
    uVar17 = uVar8;
  }
  local_274 = uVar17;
  uVar8 = FHairStrandsCommonDatas::GetAttributes((FHairStrandsCommonDatas *)param_1);
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_27c = uVar8;
  if (param_4) {
    GetCurveShuffleIndices(&local_248,uVar9);
  }
  uVar19 = (uint)param_1->_padding_;
  uVar18 = 0xdeedbeed;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  if ((param_2 < fVar4) || (param_3 < fVar4)) {
    bVar3 = true;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&local_258,uVar17,Default);
    uVar13 = local_274;
    fVar6 = __real_3f000000;
    fVar5 = __real_bf000000;
    uVar19 = 0;
    uVar12 = 0;
    uVar16 = 0xffffffff;
    fVar21 = (float)uVar9 / (float)uVar17;
    if (local_274 != 0) {
      do {
        uVar9 = uVar12 + 1;
        fVar20 = (float)uVar12 * fVar21;
        if ((float)uVar12 * fVar21 <= (float)(int)(uVar16 + 1)) {
          fVar20 = (float)(int)(uVar16 + 1);
        }
        if (0.0 < (float)uVar9 * fVar21 - fVar20) {
          iVar15 = ((int)ROUND((fVar21 + fVar21) * (float)uVar9 - fVar6) >> 1) - (int)fVar20;
          if (iVar15 < 1) {
            iVar15 = 0;
          }
          else {
            uVar18 = uVar18 * 0xbb38435 + 0x3619636b;
            iVar15 = (int)(((float)(uVar18 >> 9 | 0x3f800000) - fVar4) * (float)iVar15);
          }
          uVar16 = (int)fVar20 + iVar15;
          uVar8 = 0;
          if ((int)uVar12 < local_258.ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(uint *)(local_258.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = uVar16;
          uVar8 = uVar16;
          if (param_4) {
            uVar8 = 0;
            if ((int)uVar16 < local_248.ArrayNum) {
              uVar8 = ~uVar16 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar8 = *(uint *)(local_248.AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
          }
          uVar17 = 0;
          if ((int)uVar8 < (int)param_1->_padding_) {
            uVar17 = ~uVar8 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar1 = *(ushort *)(param_1->_padding_ + (longlong)(int)uVar8 * 2);
          uVar17 = -((int)ROUND(fVar5 - (param_3 + param_3) * (float)uVar1) >> 1);
          uVar8 = (uint)uVar1;
          if (uVar17 < uVar1) {
            uVar8 = uVar17;
          }
          uVar17 = 2;
          if (2 < uVar8) {
            uVar17 = uVar8;
          }
          uVar19 = uVar19 + uVar17;
        }
        param_5 = local_260;
        uVar8 = local_27c;
        uVar12 = uVar9;
      } while (uVar9 < uVar13);
    }
    bVar7 = true;
  }
  else {
    bVar7 = false;
    bVar3 = false;
  }
  uVar9 = local_274;
  FHairStrandsCurves::SetNum((FHairStrandsCurves *)&param_5->_padding_,local_274,uVar8,param_6);
  FHairStrandsPoints::SetNum((FHairStrandsPoints *)param_5,uVar19,uVar8,param_6);
  param_5->HairDensity = param_1->HairDensity;
  *(int *)&param_5->_padding_ = (int)param_1->_padding_;
  *(uint *)&param_5->_padding_ = (uint)param_1->_padding_;
  local_278 = 0;
  local_26c = 0;
  if (uVar9 != 0) {
    do {
      uVar8 = local_26c;
      uVar9 = local_26c;
      if (bVar7) {
        uVar9 = 0;
        if ((int)local_26c < local_258.ArrayNum) {
          uVar9 = ~local_26c >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = *(uint *)(local_258.AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
      }
      if (param_4) {
        uVar17 = 0;
        if ((int)uVar9 < local_248.ArrayNum) {
          uVar17 = ~uVar9 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_270 = uVar9,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = *(uint *)(local_248.AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      }
      uVar17 = 0;
      if ((int)uVar9 < (int)param_1->_padding_) {
        uVar17 = ~uVar9 >> 0x1f;
      }
      local_270 = uVar9;
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar17 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar9 * 4);
      uVar19 = 0;
      if ((int)uVar9 < (int)param_1->_padding_) {
        uVar19 = ~uVar9 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(ushort *)(param_1->_padding_ + (longlong)(int)uVar9 * 2);
      local_268 = (uint)uVar1;
      local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_290.ArrayNum = 0;
      local_290.ArrayMax = 0;
      uVar19 = 0;
      if (bVar3) {
        if (local_268 < 3) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_290.AllocatorInstance,&local_290.ArrayMax);
          local_280 = 1;
          iVar15 = iVar10 + 1;
          *(undefined4 *)(local_290.AllocatorInstance.Data + (longlong)iVar10 * 4) = 0;
          local_290.ArrayNum = iVar15;
          if (((local_290.AllocatorInstance.Data <= (FScriptContainerElement *)&local_280) &&
              ((FScriptContainerElement *)&local_280 <
               local_290.AllocatorInstance.Data + (longlong)local_290.ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar15 = local_290.ArrayNum;
          if (local_290.ArrayNum == local_290.ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_290.AllocatorInstance,&local_290.ArrayMax);
          }
          local_290.ArrayNum = iVar15 + 1;
          *(undefined4 *)(local_290.AllocatorInstance.Data + (longlong)iVar15 * 4) = local_280;
        }
        else {
          DecimateCurve((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)param_1,
                        uVar17,(uint)uVar1,param_3,&local_290);
        }
        local_268 = local_290.ArrayNum;
        uVar19 = local_290.ArrayNum;
      }
      pFVar11 = local_260;
      uVar16 = local_268;
      iVar15 = local_278;
      uVar18 = local_27c;
      uVar13 = 0;
      param_5 = pFVar11;
      if (local_268 != 0) {
        if (bVar3) {
          while( true ) {
            uVar9 = 0;
            if ((int)uVar13 < (int)uVar19) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FHairStrandsDatas::CopyPoint
                      (param_1,pFVar11,uVar18,
                       *(int *)(local_290.AllocatorInstance.Data + (longlong)(int)uVar13 * 4) +
                       uVar17,uVar13 + iVar15);
            uVar13 = uVar13 + 1;
            uVar8 = local_26c;
            uVar9 = local_270;
            if (uVar16 <= uVar13) break;
            uVar19 = local_290.ArrayNum;
          }
        }
        else {
          iVar15 = local_278 - uVar17;
          uVar14 = (ulonglong)local_268;
          do {
            FHairStrandsDatas::CopyPoint(param_1,pFVar11,uVar18,uVar17,iVar15 + uVar17);
            uVar17 = uVar17 + 1;
            uVar14 = uVar14 - 1;
            param_5 = local_260;
            uVar8 = local_26c;
            uVar16 = local_268;
          } while (uVar14 != 0);
        }
      }
      uVar17 = 0;
      if ((int)uVar8 < (int)param_5->_padding_) {
        uVar17 = ~uVar8 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(short *)(param_5->_padding_ + (longlong)(int)uVar8 * 2) = (short)uVar16;
      uVar17 = 0;
      if ((int)uVar8 < (int)param_5->_padding_) {
        uVar17 = ~uVar8 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar15 = local_278;
      *(int *)(param_5->_padding_ + (longlong)(int)uVar8 * 4) = local_278;
      FHairStrandsDatas::CopyCurve(param_1,param_5,local_27c,uVar9,uVar8);
      local_278 = iVar15 + uVar16;
      if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.AllocatorInstance.Data);
      }
      local_26c = uVar8 + 1;
      bVar7 = bVar3;
    } while (local_26c < local_274);
  }
  *(int *)&param_5->_padding_ = (int)param_1->_padding_;
  pFVar11 = HairStrandsBuilder::BuildInternalData
                      ((FHairStrandsDatas *)local_238,(FHairStrandsCommonDatas *)param_5);
  FHairStrandsDatas::operator=(param_5,pFVar11);
  FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)(local_238 + 0x78));
  FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)local_238);
  if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
  }
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  return;
}

// DecimateCurve @ 14e008a40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FHairStrandsDecimation::DecimateCurve
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,uint param_2,
          uint param_3,float param_4,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((param_3 < 3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount > 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                         ,0xaa8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = -((int)ROUND(__real_bf000000 - (param_4 + param_4) * (float)param_3) >> 1);
  uVar16 = param_3;
  if (uVar8 < param_3) {
    uVar16 = uVar8;
  }
  uVar8 = 2;
  if (2 < uVar16) {
    uVar8 = uVar16;
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(param_5,param_3,Default);
  uVar16 = 0;
  if (param_3 != 0) {
    do {
      uVar9 = 0;
      if ((int)uVar16 < param_5->ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(uint *)((param_5->AllocatorInstance).Data + (longlong)(int)uVar16 * 4) = uVar16;
      uVar16 = uVar16 + 1;
    } while (uVar16 < param_3);
  }
  fVar6 = __real_7f7fffff;
  fVar5 = __real_3f000000;
  iVar13 = param_5->ArrayNum;
  do {
    if (iVar13 <= (int)uVar8) {
      return;
    }
    uVar9 = 0;
    fVar21 = fVar6;
    uVar16 = 1;
    uVar17 = 0;
    if (1 < iVar13 - 1U) {
      do {
        uVar9 = 0;
        if ((int)(uVar16 - 1) < param_5->ArrayNum) {
          uVar9 = -uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar15 = *(int *)((param_5->AllocatorInstance).Data + (longlong)(int)(uVar16 - 1) * 4) +
                 param_2;
        uVar9 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar10 = (longlong)(int)uVar15;
        pFVar1 = (param_1->AllocatorInstance).Data;
        uVar9 = 0;
        if ((int)uVar16 < param_5->ArrayNum) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar15 = *(int *)((param_5->AllocatorInstance).Data + (longlong)(int)uVar16 * 4) + param_2;
        uVar9 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar11 = (longlong)(int)uVar15;
        uVar15 = uVar16 + 1;
        pFVar2 = (param_1->AllocatorInstance).Data;
        uVar9 = 0;
        if ((int)uVar15 < param_5->ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar14 = *(int *)((param_5->AllocatorInstance).Data + (longlong)(int)uVar15 * 4) + param_2;
        uVar9 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar12 = (longlong)(int)uVar14;
        pFVar3 = (param_1->AllocatorInstance).Data;
        fVar20 = (*(float *)(pFVar1 + lVar10 * 0xc) - *(float *)(pFVar2 + lVar11 * 0xc)) *
                 (*(float *)(pFVar3 + lVar12 * 0xc + 4) - *(float *)(pFVar2 + lVar11 * 0xc + 4)) -
                 (*(float *)(pFVar1 + lVar10 * 0xc + 4) - *(float *)(pFVar2 + lVar11 * 0xc + 4)) *
                 (*(float *)(pFVar3 + lVar12 * 0xc) - *(float *)(pFVar2 + lVar11 * 0xc));
        fVar19 = (*(float *)(pFVar1 + lVar10 * 0xc + 8) - *(float *)(pFVar2 + lVar11 * 0xc + 8)) *
                 (*(float *)(pFVar3 + lVar12 * 0xc) - *(float *)(pFVar2 + lVar11 * 0xc)) -
                 (*(float *)(pFVar1 + lVar10 * 0xc) - *(float *)(pFVar2 + lVar11 * 0xc)) *
                 (*(float *)(pFVar3 + lVar12 * 0xc + 8) - *(float *)(pFVar2 + lVar11 * 0xc + 8));
        fVar18 = (*(float *)(pFVar1 + lVar10 * 0xc + 4) - *(float *)(pFVar2 + lVar11 * 0xc + 4)) *
                 (*(float *)(pFVar3 + lVar12 * 0xc + 8) - *(float *)(pFVar2 + lVar11 * 0xc + 8)) -
                 (*(float *)(pFVar1 + lVar10 * 0xc + 8) - *(float *)(pFVar2 + lVar11 * 0xc + 8)) *
                 (*(float *)(pFVar3 + lVar12 * 0xc + 4) - *(float *)(pFVar2 + lVar11 * 0xc + 4));
        fVar18 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20) * fVar5;
        uVar9 = uVar16;
        if (fVar21 <= fVar18) {
          uVar9 = uVar17;
          fVar18 = fVar21;
        }
        fVar21 = fVar18;
        uVar16 = uVar15;
        uVar17 = uVar9;
      } while (uVar15 < iVar13 - 1U);
    }
    uVar16 = 0;
    if ((int)uVar9 < param_5->ArrayNum) {
      uVar16 = ~uVar9 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (param_5->AllocatorInstance).Data + (longlong)(int)uVar9 * 4;
    iVar13 = param_5->ArrayNum + ~uVar9;
    if (iVar13 != 0) {
      memmove(pFVar1,pFVar1 + 4,(longlong)iVar13 << 2);
    }
    param_5->ArrayNum = param_5->ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&param_5->AllocatorInstance,param_5->ArrayNum,&param_5->ArrayMax);
    iVar13 = param_5->ArrayNum;
  } while( true );
}

// GetCurveShuffleIndices @ 14e013890

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FHairStrandsDecimation::GetCurveShuffleIndices
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,uint param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0xdeedbeed;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(param_1,param_2,Default);
  uVar7 = 0;
  uVar8 = 0;
  if (param_2 != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) = uVar8;
      fVar4 = __real_3f800000;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
    if ((int)param_2 < 1) {
      do {
        if (((int)uVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0xce6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((param_1->ArrayNum <= (int)uVar7) || (param_1->ArrayNum < 1)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0xce7,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar7 != 0) {
          pFVar2 = (param_1->AllocatorInstance).Data;
          uVar1 = *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 * 4);
          *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 * 4) = *(undefined4 *)pFVar2;
          *(undefined4 *)pFVar2 = uVar1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_2);
    }
    else {
      do {
        uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
        uVar8 = (uint)(((float)(uVar9 >> 9 | 0x3f800000) - fVar4) * (float)(int)param_2);
        if ((((int)uVar7 < 0) || ((int)uVar8 < 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0xce6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((param_1->ArrayNum <= (int)uVar7) || (param_1->ArrayNum <= (int)uVar8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0xce7,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar7 != uVar8) {
          pFVar2 = (param_1->AllocatorInstance).Data;
          uVar1 = *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 * 4);
          *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 * 4) =
               *(undefined4 *)(pFVar2 + (longlong)(int)uVar8 * 4);
          *(undefined4 *)(pFVar2 + (longlong)(int)uVar8 * 4) = uVar1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_2);
    }
  }
  return;
}

