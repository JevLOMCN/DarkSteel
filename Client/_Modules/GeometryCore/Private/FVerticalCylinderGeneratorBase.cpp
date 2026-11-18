// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// ComputeSegLengths @ 143581db0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

float __cdecl
UE::Geometry::FVerticalCylinderGeneratorBase::ComputeSegLengths
          (TArrayView<float,int> *param_1,TArrayView<float,int> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  int local_res18;
  uint local_98;
  longlong local_90;
  
  iVar4 = param_1->ArrayNum;
  fVar18 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_3,iVar4,Default);
  if (param_3->ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      fVar18 = (float)(*pcVar6)();
      return fVar18;
    }
  }
  *(undefined4 *)(param_3->AllocatorInstance).Data = 0;
  if (1 < iVar4) {
    lVar13 = 4;
    local_90 = 4;
    local_98 = 1;
    local_res18 = 1;
    uVar12 = 0;
    do {
      uVar14 = uVar12 + 1;
      uVar15 = ~uVar14 >> 0x1f;
      uVar11 = 0;
      if (local_res18 < param_2->ArrayNum) {
        uVar11 = uVar15;
      }
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          fVar18 = (float)(*pcVar6)();
          return fVar18;
        }
      }
      fVar17 = *(float *)((longlong)param_2->DataPtr + lVar13);
      uVar11 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar11 = uVar15;
      }
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          fVar18 = (float)(*pcVar6)();
          return fVar18;
        }
      }
      fVar2 = *(float *)((longlong)param_1->DataPtr + lVar13);
      uVar11 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          fVar18 = (float)(*pcVar6)();
          return fVar18;
        }
      }
      fVar3 = *(float *)((longlong)param_2->DataPtr + lVar13 + -4);
      uVar11 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          fVar18 = (float)(*pcVar6)();
          return fVar18;
        }
      }
      dVar9 = (double)fVar17 - (double)fVar3;
      auVar16._0_8_ = (double)*(float *)((longlong)param_1->DataPtr + lVar13 + -4);
      auVar16._8_8_ = 0;
      uVar11 = 0;
      if ((int)uVar14 < param_3->ArrayNum) {
        uVar11 = uVar15;
      }
      dVar8 = (double)fVar2 - auVar16._0_8_;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar8 * dVar8 + dVar9 * dVar9;
      auVar16 = sqrtpd(auVar16,auVar7);
      fVar18 = fVar18 + (float)auVar16._0_8_;
      if (uVar11 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          fVar18 = (float)(*pcVar6)();
          return fVar18;
        }
      }
      *(float *)((param_3->AllocatorInstance).Data + lVar13) = fVar18;
      lVar13 = lVar13 + 4;
      local_res18 = local_res18 + 1;
      iVar1 = uVar12 + 2;
      uVar12 = uVar14;
    } while (iVar1 < iVar4);
    fVar17 = __real_3f800000 / fVar18;
    do {
      uVar12 = 0;
      if ((int)local_98 < param_3->ArrayNum) {
        uVar12 = ~local_98 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          fVar18 = (float)(*pcVar6)();
          return fVar18;
        }
      }
      pFVar5 = (param_3->AllocatorInstance).Data;
      local_98 = local_98 + 1;
      *(float *)(pFVar5 + local_90) = fVar17 * *(float *)(pFVar5 + local_90);
      local_90 = local_90 + 4;
    } while ((int)local_98 < iVar4);
    return fVar18;
  }
  return 0.0;
}

// GenerateVerticalCircleSweep @ 1435aec30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FVerticalCylinderGeneratorBase::GenerateVerticalCircleSweep
          (FVerticalCylinderGeneratorBase *this,TArrayView<float,int> *param_1,
          TArrayView<float,int> *param_2,TArrayView<int,int> *param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined8 extraout_XMM0_Qa;
  double dVar26;
  double dVar27;
  undefined8 extraout_XMM0_Qb;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_XMM3 [16];
  float fVar31;
  double dVar32;
  float fVar33;
  int local_1d8;
  TPolygon2<double> local_1d0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_1c0;
  int local_1b0;
  longlong local_1a8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_1a0;
  ECapType local_190 [4];
  longlong local_180;
  longlong local_178;
  uint local_170;
  longlong local_168;
  longlong local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  TArray<float,TSizedDefaultAllocator<32>_> local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float_const_,int> local_108;
  TArrayView<UE::Math::TVector<double>_const_,int> local_f8;
  TArrayView<int_const_,int> local_e8;
  TArrayView<int_const_,int> local_d8;
  TArrayView<int_const_,int> local_c8 [6];
  
  dVar27 = __real_3ff0000000000000;
  uVar20 = this->AngleSamples;
  uVar13 = 0;
  local_1d0.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Vertices.ArrayNum = 0;
  local_1d0.Vertices.ArrayMax = 0;
  if ((int)uVar20 < 1) {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar20,(ForAnyElementType *)&local_1d0,&local_1d0.Vertices.ArrayNum,
               &local_1d0.Vertices.ArrayMax);
    uVar17 = uVar13;
    do {
      uVar15 = (uint)uVar13;
      __libm_sse2_sincos_();
      uVar21 = 0;
      if ((int)uVar15 < local_1d0.Vertices.ArrayNum) {
        uVar21 = ~uVar15 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      uVar13 = (ulonglong)(uVar15 + 1);
      *(undefined8 *)(local_1d0.Vertices.AllocatorInstance.Data + uVar17) = extraout_XMM0_Qb;
      *(undefined8 *)(local_1d0.Vertices.AllocatorInstance.Data + uVar17 + 8) = extraout_XMM0_Qa;
      uVar17 = uVar17 + 0x10;
    } while ((int)(uVar15 + 1) < (int)uVar20);
  }
  local_190[0] = None;
  local_190[1] = None;
  if (this->bCapped != false) {
    local_190[1] = this->CapType;
    local_190[0] = this->CapType;
  }
  iVar12 = param_1->ArrayNum;
  local_1b0 = iVar12;
  if (iVar12 == param_2->ArrayNum) {
    if (iVar12 < param_3->ArrayNum + 2) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7550971673701253538>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\SweepGenerator.cpp"
                         ,0x1a2,"SharpNormalsAlongLength.Num() + 2 <= NumX");
      if (bVar7) goto code_r0x0001435aee38;
      bVar7 = false;
    }
    else {
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.ArrayNum = 0;
      local_128.ArrayMax = 0;
      fVar24 = ComputeSegLengths(param_1,param_2,&local_128);
      fVar33 = __real_3f800000;
      local_e8.DataPtr = param_3->DataPtr;
      local_e8.ArrayNum = param_3->ArrayNum;
      local_140 = 0x3f000000;
      uStack_13c = 0x3f000000;
      local_138 = 0x3f000000;
      uStack_134 = 0x3f000000;
      local_130 = 0x3f800000;
      uStack_12c = 0x3f800000;
      local_118.DataPtr = (float *)0x0;
      local_118.ArrayNum = 0;
      local_108.DataPtr = (float *)0x0;
      local_108.ArrayNum = 0;
      local_f8.DataPtr = (TVector<double> *)0x0;
      local_f8.ArrayNum = 0;
      local_d8.DataPtr = (int *)0x0;
      local_d8.ArrayNum = 0;
      local_c8[0].DataPtr = (int *)0x0;
      local_c8[0].ArrayNum = 0;
      FSweepGeneratorBase::ConstructMeshTopology
                ((FSweepGeneratorBase *)this,&local_1d0,local_c8,&local_d8,&local_e8,false,&local_f8
                 ,iVar12,false,local_190,(TVector2<float>)0x3f8000003f800000,
                 (TVector2<float>)0x3f0000003f000000,(TVector2<float>)0x3f0000003f000000,&local_108,
                 &local_118);
      uVar13 = 0;
      local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.ArrayNum = 0;
      local_1c0.ArrayMax = 0;
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_1c0,iVar12 + -1,Default);
      if (1 < iVar12) {
        lVar22 = 0;
        uVar17 = uVar13;
        do {
          uVar20 = (uint)uVar13;
          uVar15 = uVar20 + 1;
          uVar21 = 0;
          if ((int)uVar15 < param_2->ArrayNum) {
            uVar21 = ~uVar15 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          fVar31 = *(float *)(lVar22 + 4 + (longlong)param_2->DataPtr);
          uVar21 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar21 = ~uVar15 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          uVar16 = ~uVar20 >> 0x1f;
          fVar25 = *(float *)((longlong)param_1->DataPtr + lVar22 + 4);
          uVar21 = 0;
          if ((int)uVar20 < param_2->ArrayNum) {
            uVar21 = uVar16;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          fVar28 = *(float *)(lVar22 + (longlong)param_2->DataPtr);
          uVar21 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar21 = uVar16;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          dVar3 = (double)fVar31 - (double)fVar28;
          in_XMM2._0_8_ = (double)*(float *)((longlong)param_1->DataPtr + lVar22) - (double)fVar25;
          in_XMM2._8_8_ = 0;
          auVar29._0_8_ = dVar3 * dVar3 + in_XMM2._0_8_ * in_XMM2._0_8_;
          auVar29._8_8_ = 0;
          in_XMM3 = sqrtpd(in_XMM3,auVar29);
          if (in_XMM3._0_8_ <= 0.0) {
            dVar32 = 0.0;
            dVar3 = 0.0;
          }
          else {
            dVar32 = dVar27 / in_XMM3._0_8_;
            dVar3 = dVar32 * dVar3;
            dVar32 = dVar32 * in_XMM2._0_8_;
          }
          uVar21 = 0;
          if ((int)uVar20 < local_1c0.ArrayNum) {
            uVar21 = uVar16;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          lVar22 = lVar22 + 4;
          uVar13 = (ulonglong)uVar15;
          *(double *)(local_1c0.AllocatorInstance.Data + uVar17) = dVar3;
          *(double *)(local_1c0.AllocatorInstance.Data + uVar17 + 8) = dVar32;
          uVar17 = uVar17 + 0x10;
          iVar12 = local_1b0;
        } while ((int)(uVar20 + 2) < local_1b0);
      }
      lVar22 = 0x10;
      local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.ArrayNum = 0;
      local_1a0.ArrayMax = 0;
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_1a0,iVar12,Default);
      if ((local_1c0.ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      uVar4 = *(undefined8 *)local_1c0.AllocatorInstance.Data;
      uVar5 = *(undefined8 *)(local_1c0.AllocatorInstance.Data + 8);
      if ((local_1a0.ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      *(undefined8 *)local_1a0.AllocatorInstance.Data = uVar4;
      *(undefined8 *)(local_1a0.AllocatorInstance.Data + 8) = uVar5;
      uVar20 = 0;
      if ((int)(local_1c0.ArrayNum - 1U) < local_1c0.ArrayNum) {
        uVar20 = ~(local_1c0.ArrayNum - 1U) >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
      }
      uVar4 = *(undefined8 *)
               (local_1c0.AllocatorInstance.Data + (longlong)(local_1c0.ArrayNum + -1) * 0x10);
      uVar5 = *(undefined8 *)
               (local_1c0.AllocatorInstance.Data + (longlong)(local_1c0.ArrayNum + -1) * 0x10 + 8);
      uVar20 = 0;
      if ((int)(local_1a0.ArrayNum - 1U) < local_1a0.ArrayNum) {
        uVar20 = ~(local_1a0.ArrayNum - 1U) >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
      }
      uVar20 = 1;
      *(undefined8 *)(local_1a0.AllocatorInstance.Data + (longlong)(local_1a0.ArrayNum + -1) * 0x10)
           = uVar4;
      *(undefined8 *)
       (local_1a0.AllocatorInstance.Data + (longlong)(local_1a0.ArrayNum + -1) * 0x10 + 8) = uVar5;
      if (2 < iVar12) {
        do {
          uVar21 = 0;
          if ((int)uVar20 < local_1c0.ArrayNum) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if (uVar21 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
          }
          FVar6.Data = local_1c0.AllocatorInstance.Data;
          uVar21 = 0;
          if ((int)(uVar20 - 1) < local_1c0.ArrayNum) {
            uVar21 = -uVar20 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          dVar3 = *(double *)(local_1c0.AllocatorInstance.Data + lVar22 + -8) +
                  *(double *)(FVar6.Data + lVar22 + 8);
          dVar32 = *(double *)(FVar6.Data + lVar22) +
                   *(double *)(local_1c0.AllocatorInstance.Data + lVar22 + -0x10);
          auVar30._0_8_ = dVar3 * dVar3 + dVar32 * dVar32;
          auVar30._8_8_ = 0;
          in_XMM2 = sqrtpd(in_XMM2,auVar30);
          if (in_XMM2._0_8_ <= 0.0) {
            dVar3 = 0.0;
            dVar32 = 0.0;
          }
          else {
            dVar26 = dVar27 / in_XMM2._0_8_;
            dVar3 = dVar3 * dVar26;
            dVar32 = dVar32 * dVar26;
          }
          uVar21 = 0;
          if ((int)uVar20 < local_1a0.ArrayNum) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          *(double *)(local_1a0.AllocatorInstance.Data + lVar22) = dVar32;
          *(double *)(local_1a0.AllocatorInstance.Data + lVar22 + 8) = dVar3;
          lVar22 = lVar22 + 0x10;
          iVar9 = uVar20 + 2;
          iVar12 = local_1b0;
          uVar20 = uVar20 + 1;
        } while (iVar9 < local_1b0);
      }
      uVar20 = 0;
      lVar22 = (longlong)iVar12;
      if (0 < local_1d0.Vertices.ArrayNum) {
        local_178 = 0;
        local_1a8 = 0;
        do {
          uVar21 = 0;
          local_190[2] = 0;
          local_1d8 = 0;
          local_180 = 0;
          if (0 < lVar22) {
            local_160 = 0;
            local_168 = 0;
            uVar15 = ~uVar20 >> 0x1f;
            local_190[3] = -1;
            local_170 = uVar15;
            do {
              lVar14 = local_160;
              lVar22 = local_1a8;
              uVar23 = ~uVar21 >> 0x1f;
              uVar16 = 0;
              if ((int)uVar21 < param_1->ArrayNum) {
                uVar16 = uVar23;
              }
              if ((uVar16 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              fVar31 = param_1->DataPtr[local_180];
              uVar16 = 0;
              if ((int)uVar21 < param_2->ArrayNum) {
                uVar16 = uVar23;
              }
              if ((uVar16 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              fVar25 = param_2->DataPtr[local_180];
              uVar16 = 0;
              if ((int)uVar20 < local_1d0.Vertices.ArrayNum) {
                uVar16 = uVar15;
              }
              if ((uVar16 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              dVar27 = *(double *)(local_1d0.Vertices.AllocatorInstance.Data + lVar22 + 8);
              uVar16 = 0;
              if ((int)uVar20 < local_1d0.Vertices.ArrayNum) {
                uVar16 = uVar15;
              }
              if ((uVar16 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              dVar3 = *(double *)(local_1d0.Vertices.AllocatorInstance.Data + lVar22);
              uVar11 = uVar21 * this->AngleSamples + uVar20;
              uVar16 = 0;
              if ((int)uVar11 < (int)this->_padding_) {
                uVar16 = ~uVar11 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              lVar10 = (longlong)(int)uVar11;
              lVar22 = this->_padding_;
              *(double *)(lVar22 + lVar10 * 0x18) = (double)fVar31 * dVar3;
              *(double *)(lVar22 + 8 + lVar10 * 0x18) = (double)fVar31 * dVar27;
              *(double *)(lVar22 + 0x10 + lVar10 * 0x18) = (double)fVar25;
              if ((int)local_190[2] < param_3->ArrayNum) {
                if (((int)local_190[2] < 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  uVar8 = (*pcVar2)();
                  return (bool)uVar8;
                }
                if (uVar21 != *(uint *)(local_168 + (longlong)param_3->DataPtr)) goto LAB_1435afc28;
                if ((int)uVar21 < 1) {
                  bVar7 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<7550971673701253576>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\SweepGenerator.cpp"
                                     ,0x1c8,"XIdx > 0");
                  if (bVar7) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                }
                else {
                  uVar11 = -uVar21 >> 0x1f;
                  uVar16 = 0;
                  if ((int)local_190[3] < local_1c0.ArrayNum) {
                    uVar16 = uVar11;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  dVar27 = *(double *)(local_1c0.AllocatorInstance.Data + lVar14 + -8);
                  uVar16 = 0;
                  if ((int)uVar20 < local_1d0.Vertices.ArrayNum) {
                    uVar16 = uVar15;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  FVar6.Data = local_1d0.Vertices.AllocatorInstance.Data;
                  uVar15 = 0;
                  if ((int)(uVar21 - 1) < local_1c0.ArrayNum) {
                    uVar15 = uVar11;
                  }
                  if ((uVar15 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  dVar3 = *(double *)(local_1c0.AllocatorInstance.Data + local_160 + -0x10);
                  dVar32 = *(double *)(FVar6.Data + local_1a8 + 8);
                  uVar15 = 0;
                  if ((int)(uVar21 - 1) < local_1c0.ArrayNum) {
                    uVar15 = uVar11;
                  }
                  if ((uVar15 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  uVar15 = local_170;
                  FVar6.Data = local_1c0.AllocatorInstance.Data;
                  uVar16 = 0;
                  if ((int)uVar20 < local_1d0.Vertices.ArrayNum) {
                    uVar16 = local_170;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  lVar14 = local_160;
                  dVar26 = *(double *)(local_1d0.Vertices.AllocatorInstance.Data + local_1a8);
                  dVar1 = *(double *)(FVar6.Data + local_160 + -0x10);
                  uVar11 = local_1d8 * this->AngleSamples + uVar20;
                  uVar16 = 0;
                  if ((int)uVar11 < (int)this->_padding_) {
                    uVar16 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  lVar10 = (longlong)(int)uVar11;
                  lVar22 = this->_padding_;
                  *(float *)(lVar22 + lVar10 * 0xc) = (float)(dVar26 * dVar1);
                  *(float *)(lVar22 + 4 + lVar10 * 0xc) = (float)(dVar3 * dVar32);
                  *(float *)(lVar22 + 8 + lVar10 * 0xc) = (float)dVar27;
                }
                local_1d8 = local_1d8 + 1;
                if ((int)(uVar21 + 1) < local_1b0) {
                  uVar16 = 0;
                  if ((int)uVar21 < local_1c0.ArrayNum) {
                    uVar16 = uVar23;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  dVar27 = *(double *)(local_1c0.AllocatorInstance.Data + lVar14 + 8);
                  uVar16 = 0;
                  if ((int)uVar20 < local_1d0.Vertices.ArrayNum) {
                    uVar16 = uVar15;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  FVar6.Data = local_1d0.Vertices.AllocatorInstance.Data;
                  uVar16 = 0;
                  if ((int)uVar21 < local_1c0.ArrayNum) {
                    uVar16 = uVar23;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  dVar3 = *(double *)(local_1c0.AllocatorInstance.Data + lVar14);
                  dVar32 = *(double *)(FVar6.Data + local_1a8 + 8);
                  uVar16 = 0;
                  if ((int)uVar20 < local_1d0.Vertices.ArrayNum) {
                    uVar16 = uVar15;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  FVar6.Data = local_1d0.Vertices.AllocatorInstance.Data;
                  uVar16 = 0;
                  if ((int)uVar21 < local_1c0.ArrayNum) {
                    uVar16 = uVar23;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  dVar26 = *(double *)(local_1c0.AllocatorInstance.Data + lVar14);
                  dVar1 = *(double *)(FVar6.Data + local_1a8);
                  uVar23 = local_1d8 * this->AngleSamples + uVar20;
                  uVar16 = 0;
                  if ((int)uVar23 < (int)this->_padding_) {
                    uVar16 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  local_190[2] = local_190[2] + 1;
                  local_168 = local_168 + 4;
                  lVar10 = (longlong)(int)uVar23;
                  lVar22 = this->_padding_;
                  *(float *)(lVar22 + lVar10 * 0xc) = (float)(dVar26 * dVar1);
                  *(float *)(lVar22 + 4 + lVar10 * 0xc) = (float)(dVar3 * dVar32);
                  *(float *)(lVar22 + 8 + lVar10 * 0xc) = (float)dVar27;
                }
                else {
                  bVar7 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<7550971673701253581>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\SweepGenerator.cpp"
                                     ,0x1cd,"XIdx + 1 < NumX");
                  if (bVar7) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                  local_190[2] = local_190[2] + 1;
                  local_168 = local_168 + 4;
                }
              }
              else {
LAB_1435afc28:
                uVar16 = 0;
                if ((int)uVar21 < local_1a0.ArrayNum) {
                  uVar16 = uVar23;
                }
                if ((uVar16 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  uVar8 = (*pcVar2)();
                  return (bool)uVar8;
                }
                dVar27 = *(double *)(local_1a0.AllocatorInstance.Data + lVar14 + 8);
                uVar16 = 0;
                if ((int)uVar21 < local_1a0.ArrayNum) {
                  uVar16 = uVar23;
                }
                if ((uVar16 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  uVar8 = (*pcVar2)();
                  return (bool)uVar8;
                }
                FVar6.Data = local_1a0.AllocatorInstance.Data;
                uVar16 = 0;
                if ((int)uVar20 < local_1d0.Vertices.ArrayNum) {
                  uVar16 = uVar15;
                }
                if (uVar16 == 0) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar7) {
                    pcVar2 = (code *)swi(3);
                    uVar8 = (*pcVar2)();
                    return (bool)uVar8;
                  }
                }
                dVar3 = *(double *)(local_1d0.Vertices.AllocatorInstance.Data + local_1a8 + 8);
                dVar32 = *(double *)(FVar6.Data + lVar14);
                uVar16 = 0;
                if ((int)uVar20 < local_1d0.Vertices.ArrayNum) {
                  uVar16 = uVar15;
                }
                if ((uVar16 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  uVar8 = (*pcVar2)();
                  return (bool)uVar8;
                }
                FVar6.Data = local_1d0.Vertices.AllocatorInstance.Data;
                uVar16 = 0;
                if ((int)uVar21 < local_1a0.ArrayNum) {
                  uVar16 = uVar23;
                }
                if ((uVar16 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  uVar8 = (*pcVar2)();
                  return (bool)uVar8;
                }
                dVar26 = *(double *)(local_1a0.AllocatorInstance.Data + lVar14);
                dVar1 = *(double *)(FVar6.Data + local_1a8);
                uVar23 = local_1d8 * this->AngleSamples + uVar20;
                uVar16 = 0;
                if ((int)uVar23 < (int)this->_padding_) {
                  uVar16 = ~uVar23 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  uVar8 = (*pcVar2)();
                  return (bool)uVar8;
                }
                lVar10 = (longlong)(int)uVar23;
                lVar22 = this->_padding_;
                *(float *)(lVar22 + lVar10 * 0xc) = (float)(dVar26 * dVar1);
                *(float *)(lVar22 + 4 + lVar10 * 0xc) = (float)(dVar3 * dVar32);
                *(float *)(lVar22 + 8 + lVar10 * 0xc) = (float)dVar27;
              }
              local_1d8 = local_1d8 + 1;
              lVar22 = (longlong)local_1b0;
              local_180 = local_180 + 1;
              local_160 = lVar14 + 0x10;
              uVar21 = uVar21 + 1;
              local_190[3] = local_190[3] + 1;
            } while (local_180 < lVar22);
          }
          local_178 = local_178 + 1;
          local_1a8 = local_1a8 + 0x10;
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < local_1d0.Vertices.ArrayNum);
      }
      uVar13 = 0;
      uVar20 = 0;
      if (this->bCapped != false) {
        if (local_190[0] == FlatMidpointFan) {
          local_158 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
          dStack_150 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
          local_148 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
          if ((param_2->ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          uVar21 = *(uint *)((longlong)&this->_padding_ + 4);
          lVar14 = (longlong)(int)uVar21;
          dVar27 = (double)*param_2->DataPtr;
          uVar15 = uVar20;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar15 = ~uVar21 >> 0x1f;
          }
          dVar3 = local_158 * dVar27;
          dVar32 = dStack_150 * dVar27;
          dVar27 = local_148 * dVar27;
          if ((uVar15 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          lVar10 = this->_padding_;
          *(double *)(lVar10 + lVar14 * 0x18) = dVar3;
          *(double *)(lVar10 + 8 + lVar14 * 0x18) = dVar32;
          *(double *)(lVar10 + 0x10 + lVar14 * 0x18) = dVar27;
        }
        if (local_190[1] == 2) {
          iVar12 = param_2->ArrayNum;
          local_158 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
          dStack_150 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
          uVar21 = uVar20;
          if ((int)(iVar12 - 1U) < iVar12) {
            uVar21 = ~(iVar12 - 1U) >> 0x1f;
          }
          local_148 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          uVar21 = (uint)this->_padding_;
          lVar14 = (longlong)(int)uVar21;
          dVar27 = (double)param_2->DataPtr[(longlong)iVar12 + -1];
          uVar15 = uVar20;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar15 = ~uVar21 >> 0x1f;
          }
          dVar3 = local_158 * dVar27;
          dVar32 = dStack_150 * dVar27;
          dVar27 = local_148 * dVar27;
          if ((uVar15 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          lVar10 = this->_padding_;
          *(double *)(lVar10 + lVar14 * 0x18) = dVar3;
          *(double *)(lVar10 + 8 + lVar14 * 0x18) = dVar32;
          *(double *)(lVar10 + 0x10 + lVar14 * 0x18) = dVar27;
        }
        uVar17 = uVar13;
        if (0 < local_1d0.Vertices.ArrayNum) {
          do {
            iVar12 = (int)uVar17;
            uVar15 = *(int *)((longlong)&this->_padding_ + 4) + iVar12;
            uVar21 = uVar20;
            if ((int)uVar15 < (int)this->_padding_) {
              uVar21 = ~uVar15 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            lVar14 = this->_padding_;
            *(undefined8 *)(lVar14 + (longlong)(int)uVar15 * 0xc) = 0;
            *(undefined4 *)(lVar14 + 8 + (longlong)(int)uVar15 * 0xc) = 0xbf800000;
            uVar15 = (int)this->_padding_ + iVar12;
            uVar21 = uVar20;
            if ((int)uVar15 < (int)this->_padding_) {
              uVar21 = ~uVar15 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            uVar17 = (ulonglong)(iVar12 + 1U);
            lVar14 = this->_padding_;
            *(undefined8 *)(lVar14 + (longlong)(int)uVar15 * 0xc) = 0;
            *(undefined4 *)(lVar14 + 8 + (longlong)(int)uVar15 * 0xc) = 0x3f800000;
          } while ((int)(iVar12 + 1U) < local_1d0.Vertices.ArrayNum);
        }
        if (local_190[0] == FlatMidpointFan) {
          uVar15 = *(int *)((longlong)&this->_padding_ + 4) + local_1d0.Vertices.ArrayNum;
          uVar21 = uVar20;
          if ((int)uVar15 < (int)this->_padding_) {
            uVar21 = ~uVar15 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          lVar14 = this->_padding_;
          *(undefined8 *)(lVar14 + (longlong)(int)uVar15 * 0xc) = 0;
          *(undefined4 *)(lVar14 + 8 + (longlong)(int)uVar15 * 0xc) = 0xbf800000;
        }
        if (local_190[1] == 2) {
          uVar15 = (int)this->_padding_ + local_1d0.Vertices.ArrayNum;
          uVar21 = uVar20;
          if ((int)uVar15 < (int)this->_padding_) {
            uVar21 = ~uVar15 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          lVar14 = this->_padding_;
          *(undefined8 *)(lVar14 + (longlong)(int)uVar15 * 0xc) = 0;
          *(undefined4 *)(lVar14 + 8 + (longlong)(int)uVar15 * 0xc) = 0x3f800000;
        }
      }
      if (this->bUVScaleMatchSidesAndCaps != false) {
        if ((param_1->ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        uVar21 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar31 = (float)((uint)*param_1->DataPtr & __xmm_7fffffff7fffffff7fffffff7fffffff);
        uVar17 = uVar13;
        uVar18 = uVar13;
        if (0 < lVar22) {
          do {
            uVar16 = (uint)uVar17;
            uVar15 = uVar20;
            if ((int)uVar16 < param_1->ArrayNum) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            uVar19 = uVar18 + 1;
            fVar25 = (float)((uint)param_1->DataPtr[uVar18] & uVar21);
            if (fVar25 <= fVar31) {
              fVar25 = fVar31;
            }
            fVar31 = fVar25;
            uVar17 = (ulonglong)(uVar16 + 1);
            uVar18 = uVar19;
          } while ((longlong)uVar19 < lVar22);
        }
        uVar21 = *(uint *)((longlong)&this->_padding_ + 4);
        fVar28 = fVar31 * __real_40c90fdb;
        fVar31 = fVar31 + fVar31;
        fVar25 = fVar28;
        if (fVar28 <= fVar24) {
          fVar25 = fVar24;
        }
        if (fVar25 <= fVar31) {
          fVar25 = fVar31;
        }
        fVar33 = fVar33 / fVar25;
        uVar17 = uVar13;
        if (0 < (int)uVar21) {
          do {
            uVar15 = (uint)uVar13;
            uVar21 = uVar20;
            if ((int)uVar15 < (int)this->_padding_) {
              uVar21 = ~uVar15 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            *(float *)(this->_padding_ + uVar17 * 8) =
                 fVar33 * fVar28 * *(float *)(this->_padding_ + uVar17 * 8);
            uVar21 = uVar20;
            if ((int)uVar15 < (int)this->_padding_) {
              uVar21 = ~uVar15 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            uVar13 = (ulonglong)(uVar15 + 1);
            *(float *)(this->_padding_ + 4 + uVar17 * 8) =
                 fVar33 * fVar24 * *(float *)(this->_padding_ + 4 + uVar17 * 8);
            uVar21 = *(uint *)((longlong)&this->_padding_ + 4);
            uVar17 = uVar17 + 1;
          } while ((int)(uVar15 + 1) < (int)uVar21);
        }
        if ((int)uVar21 < (int)this->_padding_) {
          lVar22 = (longlong)(int)uVar21 * 8;
          do {
            uVar15 = uVar20;
            if ((int)uVar21 < (int)this->_padding_) {
              uVar15 = ~uVar21 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return (bool)uVar8;
            }
            lVar14 = this->_padding_;
            uVar21 = uVar21 + 1;
            *(float *)(lVar22 + lVar14) = fVar33 * fVar31 * *(float *)(lVar22 + lVar14);
            *(float *)(lVar22 + 4 + lVar14) = fVar33 * fVar31 * *(float *)(lVar22 + 4 + lVar14);
            lVar22 = lVar22 + 8;
          } while ((int)uVar21 < (int)this->_padding_);
        }
      }
      bVar7 = true;
      if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.AllocatorInstance.Data);
      }
      if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.AllocatorInstance.Data);
      }
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7550971673701253533>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\SweepGenerator.cpp"
                       ,0x19d,"NumX == Heights.Num()");
    if (bVar7) {
code_r0x0001435aee38:
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    bVar7 = false;
  }
  if (local_1d0.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Vertices.AllocatorInstance.Data);
  }
  return bVar7;
}

