// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 7

// ConstructMesh @ 14e80aae0

void __cdecl
FFractureEngineUtility::ConstructMesh
          (FDynamicMesh3 *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FIndex3i_u_0 local_68;
  TVector<double>_u_0 local_58;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  float local_2c;
  TVector2<float>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  
  uVar7 = 0;
  iVar6 = param_2->ArrayNum;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
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
      pFVar2 = (param_2->AllocatorInstance).Data;
      local_20 = 0;
      local_1e = 0;
      local_58._s_0.X = (double)*(float *)(pFVar2 + lVar9);
      local_58._s_0.Y = (double)*(float *)(pFVar2 + lVar9 + 4);
      local_58._s_0.Z = (double)*(float *)(pFVar2 + lVar9 + 8);
      local_38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_28 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_34 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      UE::Geometry::FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_58._s_0);
      iVar6 = param_2->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0xc;
    } while ((int)uVar7 < iVar6);
  }
  iVar6 = param_3->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = uVar8;
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
      iVar6 = *(int *)((param_3->AllocatorInstance).Data + lVar9 + 8);
      uVar5 = 0;
      if ((int)uVar7 < param_3->ArrayNum) {
        uVar5 = uVar8;
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
      iVar1 = *(int *)((param_3->AllocatorInstance).Data + lVar9 + 4);
      uVar5 = 0;
      if ((int)uVar7 < param_3->ArrayNum) {
        uVar5 = uVar8;
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
      local_68._s_0.A = *(undefined4 *)((param_3->AllocatorInstance).Data + lVar9);
      local_68._s_0.B = iVar1;
      local_68._s_0.C = iVar6;
      UE::Geometry::FDynamicMesh3::AppendTriangle(param_1,(FIndex3i *)&local_68._s_0,0);
      iVar6 = param_3->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0xc;
    } while ((int)uVar7 < iVar6);
  }
  return;
}

// ConvertBoxToVertexAndTriangleData @ 14e80ad50

void __cdecl
FFractureEngineUtility::ConvertBoxToVertexAndTriangleData
          (TBox<double> *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  piVar1 = &param_2->ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  piVar2 = &param_3->ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0xc,&param_3->AllocatorInstance,piVar2,&param_3->ArrayMax);
  dVar3 = (param_1->Max).field0_0x0._s_0.Z;
  dVar6 = (param_1->Max).field0_0x0._s_0.X;
  dVar7 = (param_1->Max).field0_0x0._s_0.Y;
  fVar13 = (float)(param_1->Min).field0_0x0._s_0.X;
  fVar12 = (float)(param_1->Min).field0_0x0._s_0.Y;
  fVar11 = (float)(param_1->Min).field0_0x0._s_0.Z;
  if (*piVar1 < 1) {
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
  pFVar4 = (param_2->AllocatorInstance).Data;
  fVar9 = (float)dVar6;
  *(float *)pFVar4 = fVar13;
  *(float *)(pFVar4 + 4) = fVar12;
  *(float *)(pFVar4 + 8) = fVar11;
  if (*piVar1 < 2) {
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
  pFVar4 = (param_2->AllocatorInstance).Data;
  fVar10 = (float)dVar7;
  *(float *)(pFVar4 + 0xc) = fVar9;
  *(float *)(pFVar4 + 0x10) = fVar12;
  *(float *)(pFVar4 + 0x14) = fVar11;
  if (*piVar1 < 3) {
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
  pFVar4 = (param_2->AllocatorInstance).Data;
  *(float *)(pFVar4 + 0x18) = fVar9;
  *(float *)(pFVar4 + 0x1c) = fVar10;
  *(float *)(pFVar4 + 0x20) = fVar11;
  if (*piVar1 < 4) {
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
  pFVar4 = (param_2->AllocatorInstance).Data;
  *(float *)(pFVar4 + 0x24) = fVar13;
  *(float *)(pFVar4 + 0x28) = fVar10;
  *(float *)(pFVar4 + 0x2c) = fVar11;
  fVar11 = (float)dVar3;
  if (*piVar1 < 5) {
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
  pFVar4 = (param_2->AllocatorInstance).Data;
  *(float *)(pFVar4 + 0x30) = fVar13;
  *(float *)(pFVar4 + 0x34) = fVar12;
  *(float *)(pFVar4 + 0x38) = fVar11;
  if (*piVar1 < 6) {
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
  pFVar4 = (param_2->AllocatorInstance).Data;
  *(float *)(pFVar4 + 0x3c) = fVar9;
  *(float *)(pFVar4 + 0x40) = fVar12;
  *(float *)(pFVar4 + 0x44) = fVar11;
  if (*piVar1 < 7) {
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
  pFVar4 = (param_2->AllocatorInstance).Data;
  *(float *)(pFVar4 + 0x48) = fVar9;
  *(float *)(pFVar4 + 0x4c) = fVar10;
  *(float *)(pFVar4 + 0x50) = fVar11;
  if (*piVar1 < 8) {
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
  pFVar4 = (param_2->AllocatorInstance).Data;
  *(float *)(pFVar4 + 0x54) = fVar13;
  *(float *)(pFVar4 + 0x58) = fVar10;
  *(float *)(pFVar4 + 0x5c) = fVar11;
  if (*piVar2 < 1) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)pFVar4 = 0;
  *(undefined4 *)(pFVar4 + 4) = 1;
  *(undefined4 *)(pFVar4 + 8) = 3;
  if (*piVar2 < 2) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + 0xc) = 1;
  *(undefined4 *)(pFVar4 + 0x10) = 2;
  *(undefined4 *)(pFVar4 + 0x14) = 3;
  if (*piVar2 < 3) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + 0x18) = 0;
  *(undefined4 *)(pFVar4 + 0x1c) = 4;
  *(undefined4 *)(pFVar4 + 0x20) = 1;
  if (*piVar2 < 4) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + 0x24) = 4;
  *(undefined4 *)(pFVar4 + 0x28) = 5;
  *(undefined4 *)(pFVar4 + 0x2c) = 1;
  if (*piVar2 < 5) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + 0x30) = 5;
  *(undefined4 *)(pFVar4 + 0x34) = 2;
  *(undefined4 *)(pFVar4 + 0x38) = 1;
  if (*piVar2 < 6) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + 0x3c) = 5;
  *(undefined4 *)(pFVar4 + 0x40) = 6;
  *(undefined4 *)(pFVar4 + 0x44) = 2;
  if (*piVar2 < 7) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + 0x48) = 3;
  *(undefined4 *)(pFVar4 + 0x4c) = 2;
  *(undefined4 *)(pFVar4 + 0x50) = 6;
  if (*piVar2 < 8) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + 0x54) = 7;
  *(undefined4 *)(pFVar4 + 0x58) = 3;
  *(undefined4 *)(pFVar4 + 0x5c) = 6;
  if (*piVar2 < 9) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + 0x60) = 0;
  *(undefined4 *)(pFVar4 + 100) = 3;
  *(undefined4 *)(pFVar4 + 0x68) = 7;
  if (*piVar2 < 10) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + 0x6c) = 4;
  *(undefined4 *)(pFVar4 + 0x74) = 7;
  if (*piVar2 < 0xb) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + 0x78) = 5;
  *(undefined4 *)(pFVar4 + 0x7c) = 4;
  *(undefined4 *)(pFVar4 + 0x80) = 7;
  if (*piVar2 < 0xc) {
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
  pFVar4 = (param_3->AllocatorInstance).Data;
  *(undefined4 *)(pFVar4 + 0x84) = 5;
  *(undefined4 *)(pFVar4 + 0x88) = 7;
  *(undefined4 *)(pFVar4 + 0x8c) = 6;
  return;
}

// DeconstructMesh @ 14e80e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FFractureEngineUtility::DeconstructMesh
          (FDynamicMesh3 *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  double *pdVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FRefCountVector *pFVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  FFunctionStorage *pFVar18;
  undefined ***pppuVar19;
  longlong *plVar20;
  longlong *plVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  float fVar27;
  undefined1 auStackY_298 [32];
  undefined8 local_248;
  uint uStack_240;
  uint uStack_23c;
  FRefCountVector *local_238;
  uint local_230;
  uint local_228 [4];
  code *local_218;
  undefined **local_208;
  FDynamicMesh3 *local_200;
  undefined ***local_1f0;
  code *local_1e8 [2];
  FFunctionStorage local_1d8;
  double local_1a8;
  BaseIterator local_198;
  code *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  longlong *plStack_160;
  code *local_158 [2];
  longlong local_148 [3];
  longlong *local_130;
  FRefCountVector *local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_10c;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong *plStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong *plStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if ((param_1->VertexRefCounts).UsedCount < 1) {
    return;
  }
  iVar15 = (param_1->TriangleRefCounts).UsedCount;
  if (iVar15 < 1) {
    return;
  }
  piVar1 = &param_3->ArrayMax;
  if (*piVar1 < iVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar15,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
  }
  local_208 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__TrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_UFIndex3i_Geometry_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_218 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex3i,int>
              ::Call;
  local_1e8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex3i,int>
                 ::Call;
  local_1f0 = (undefined ***)0x0;
  local_1d8.HeapAllocation = (FFunctionStorage *)0x0;
  local_200 = param_1;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,0,0>::
  CloneToEmptyStorage(&local_208,&local_1d8);
  local_158[0] = (code *)0x0;
  local_130 = (longlong *)0x0;
  local_128 = &param_1->TriangleRefCounts;
  TFunction<UE::Geometry::FIndex3i___cdecl(int)>::operator=
            ((TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_158,
             (TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_1e8);
  if (local_1e8[0] != (code *)0x0) {
    pFVar18 = &local_1d8;
    if (local_1d8.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar18 = local_1d8.HeapAllocation;
    }
    (**(code **)(*(longlong *)pFVar18->InlineAllocation + 0x10))();
  }
  if (local_218 != (code *)0x0) {
    pppuVar19 = &local_208;
    if (local_1f0 != (undefined ***)0x0) {
      pppuVar19 = local_1f0;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  local_248 = local_128;
  pFVar13 = local_248;
  uStack_240 = 0;
  uStack_23c = (local_128->RefCounts).CurBlock * 0x200 + (local_128->RefCounts).CurBlockUsed;
  if ((uStack_23c != 0) &&
     (pFVar4 = (local_128->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar25 = 1;
    uStack_240 = 1;
    if (1 < (int)uStack_23c) {
      do {
        sVar3 = *(short *)(*(longlong *)(pFVar4 + (uVar25 >> 9) * 8) +
                          (ulonglong)(uStack_240 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uStack_240 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uStack_240;
      } while ((int)uStack_240 < (int)uStack_23c);
    }
  }
  local_188 = (code *)0x0;
  plStack_160 = (longlong *)0x0;
  local_d8 = local_158[0];
  plStack_b0 = (longlong *)0x0;
  local_248._0_4_ = SUB84(local_128,0);
  uVar9 = (undefined4)local_248;
  local_248._4_4_ = (undefined4)((ulonglong)local_128 >> 0x20);
  local_198.Vector._0_4_ = (undefined4)local_248;
  local_198.Vector._4_4_ = local_248._4_4_;
  local_198.Index = uStack_240;
  local_198.LastIndex = uStack_23c;
  local_248 = pFVar13;
  if (local_158[0] != (code *)0x0) {
    plVar21 = local_148;
    if (local_130 != (longlong *)0x0) {
      plVar21 = local_130;
    }
    (**(code **)*plVar21)(uVar9,&local_c8);
  }
  plVar21 = plStack_160;
  uVar12 = uStack_16c;
  uVar11 = uStack_170;
  uVar10 = uStack_174;
  uVar9 = local_178;
  uVar17 = uStack_180;
  pcVar6 = local_188;
  local_188 = local_d8;
  uStack_180 = uStack_d0;
  local_168 = local_b8;
  uStack_164 = uStack_b4;
  plStack_160 = plStack_b0;
  local_178 = (undefined4)local_c8;
  uStack_174 = local_c8._4_4_;
  uStack_170 = uStack_c0;
  uStack_16c = uStack_bc;
  local_d8 = pcVar6;
  uStack_d0 = uVar17;
  local_c8._0_4_ = uVar9;
  local_c8._4_4_ = uVar10;
  uStack_c0 = uVar11;
  uStack_bc = uVar12;
  plStack_b0 = plVar21;
  if (pcVar6 != (code *)0x0) {
    plVar20 = &local_c8;
    if (plVar21 != (longlong *)0x0) {
      plVar20 = plVar21;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  uStack_240 = (local_128->RefCounts).CurBlockUsed + (local_128->RefCounts).CurBlock * 0x200;
  local_108 = (code *)0x0;
  plStack_e0 = (longlong *)0x0;
  local_a8 = local_158[0];
  plStack_80 = (longlong *)0x0;
  local_248._0_4_ = SUB84(local_128,0);
  local_248._4_4_ = (undefined4)((ulonglong)local_128 >> 0x20);
  local_118 = (undefined4)local_248;
  uStack_114 = local_248._4_4_;
  uStack_110 = uStack_240;
  uStack_10c = uStack_240;
  pFVar13 = local_128;
  uStack_23c = uStack_240;
  if (local_158[0] != (code *)0x0) {
    plVar21 = local_148;
    if (local_130 != (longlong *)0x0) {
      plVar21 = local_130;
    }
    uVar9 = (undefined4)local_248;
    local_248 = local_128;
    (**(code **)*plVar21)(uVar9,&local_98);
    pFVar13 = local_248;
  }
  local_248 = pFVar13;
  plVar21 = plStack_e0;
  uVar12 = uStack_ec;
  uVar11 = uStack_f0;
  uVar10 = uStack_f4;
  uVar9 = local_f8;
  uVar17 = uStack_100;
  pcVar6 = local_108;
  local_108 = local_a8;
  uStack_100 = uStack_a0;
  local_e8 = local_88;
  uStack_e4 = uStack_84;
  plStack_e0 = plStack_80;
  local_f8 = (undefined4)local_98;
  uStack_f4 = local_98._4_4_;
  uStack_f0 = uStack_90;
  uStack_ec = uStack_8c;
  local_a8 = pcVar6;
  uStack_a0 = uVar17;
  local_98._0_4_ = uVar9;
  local_98._4_4_ = uVar10;
  uStack_90 = uVar11;
  uStack_8c = uVar12;
  plStack_80 = plVar21;
  if (pcVar6 != (code *)0x0) {
    plVar20 = &local_98;
    if (plVar21 != (longlong *)0x0) {
      plVar20 = plVar21;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if (local_198.Index != uStack_110) {
    do {
      local_228[0] = local_198.Index;
      UE::Core::Private::Function::CheckCallable(local_188);
      pcVar6 = local_188;
      plVar21 = (longlong *)&local_178;
      if (plStack_160 != (longlong *)0x0) {
        plVar21 = plStack_160;
      }
      uVar17 = (**(code **)(*plVar21 + 8))();
      (*pcVar6)(&local_248,uVar17,local_228);
      pFVar4 = (param_3->AllocatorInstance).Data;
      local_230 = uStack_240;
      local_238 = local_248;
      if (((pFVar4 <= (FScriptContainerElement *)&local_238) &&
          ((FScriptContainerElement *)&local_238 < pFVar4 + (longlong)*piVar1 * 0xc)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = param_3->ArrayNum;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar15 + 1;
      pFVar4 = (param_3->AllocatorInstance).Data;
      *(FRefCountVector **)(pFVar4 + (longlong)iVar15 * 0xc) = local_238;
      *(uint *)(pFVar4 + (longlong)iVar15 * 0xc + 8) = local_230;
      UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_198);
    } while (local_198.Index != uStack_110);
  }
  if (local_108 != (code *)0x0) {
    plVar21 = (longlong *)&local_f8;
    if (plStack_e0 != (longlong *)0x0) {
      plVar21 = plStack_e0;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (local_188 != (code *)0x0) {
    plVar21 = (longlong *)&local_178;
    if (plStack_160 != (longlong *)0x0) {
      plVar21 = plStack_160;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (local_158[0] != (code *)0x0) {
    plVar21 = local_148;
    if (local_130 != (longlong *)0x0) {
      plVar21 = local_130;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  iVar22 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0xc,4,iVar22,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax
                     );
  memset((param_2->AllocatorInstance).Data + (longlong)iVar15 * 0xc,0,(longlong)iVar22 * 0xc);
  uVar23 = 0;
  uVar24 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar24 != 0) &&
     (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar23 = 1;
    bVar14 = uVar24 == 1;
    if ((int)uVar24 < 2) goto LAB_14e80ea59;
    do {
      sVar3 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar23 >> 9) * 8) +
                        (ulonglong)(uVar23 & 0x1ff) * 2);
      if ((sVar3 != 0) && (sVar3 != -1)) break;
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < (int)uVar24);
  }
  bVar14 = uVar23 == uVar24;
LAB_14e80ea59:
  if (!bVar14) {
LAB_14e80ea80:
    do {
      lVar26 = (longlong)(int)uVar23;
      lVar5 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar23 >> 9) * 8);
      pdVar2 = (double *)(lVar5 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
      dVar7 = *pdVar2;
      dVar8 = pdVar2[1];
      local_1a8 = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
      uVar16 = 0;
      if ((int)uVar23 < param_2->ArrayNum) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      fVar27 = (float)local_1a8;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      uVar23 = uVar23 + 1;
      *(float *)(pFVar4 + lVar26 * 0xc) = (float)dVar7;
      *(float *)(pFVar4 + lVar26 * 0xc + 4) = (float)dVar8;
      *(float *)(pFVar4 + lVar26 * 0xc + 8) = fVar27;
      if ((int)uVar23 < (int)uVar24) {
        do {
          lVar5 = *(longlong *)
                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar23 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar23 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar23 & 0x1ff) * 2) != -1)) goto LAB_14e80ea80;
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < (int)uVar24);
      }
    } while (uVar23 != uVar24);
  }
  return;
}

// FixTinyGeo @ 14e80f010

void __cdecl
FFractureEngineUtility::FixTinyGeo
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2,
          EFixTinyGeoMergeType param_3,bool param_4,EFixTinyGeoGeometrySelectionMethod param_5,
          float param_6,float param_7,EFixTinyGeoUseBoneSelection param_8,bool param_9,
          EFixTinyGeoNeighborSelectionMethod param_10,bool param_11,bool param_12,bool param_13)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FGeometryCollection *pFVar4;
  TArray<double,TSizedDefaultAllocator<32>_> local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  double local_b8;
  FGeometryCollectionProximityUtility local_b0;
  TArrayView<int_const_,int> local_a8;
  TArrayView<double_const_,int> local_98;
  TArrayView<int_const_,int> local_88;
  TArrayView<int_const_,int> local_78;
  TArrayView<double_const_,int> local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58 [2];
  
  pFVar4 = FManagedArrayCollection::NewCopy<FGeometryCollection>(param_1);
  if (pFVar4 != (FGeometryCollection *)0x0) {
    FDataflowSelection::AsArray((FDataflowSelection *)param_2,local_58);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    bVar3 = CollectTargetBones(pFVar4,local_58,&local_c8,&local_d8,&local_b8,param_3,param_4,param_5
                               ,param_6,param_7,param_8,param_9);
    if (bVar3) {
      if (param_13) {
        FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility(&local_b0,pFVar4);
        FGeometryCollectionProximityUtility::UpdateProximity(&local_b0,(FConvexHulls *)0x0);
      }
      iVar2 = local_c8.ArrayNum;
      if (param_3 == MergeGeometry) {
        local_a8.DataPtr = (int *)local_c8.AllocatorInstance.Data;
        if (local_c8.ArrayNum < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_a8.ArrayNum = iVar2;
        iVar2 = local_d8.ArrayNum;
        local_98.DataPtr = (double *)local_d8.AllocatorInstance.Data;
        if (local_d8.ArrayNum < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_98.ArrayNum = iVar2;
        local_88.DataPtr = (int *)0x0;
        local_88.ArrayNum = 0;
        MergeBones(pFVar4,&local_88,&local_98,local_b8,&local_a8,false,
                   (uint)(param_10 == NearestCenter),param_13,param_12);
      }
      else {
        local_78.DataPtr = (int *)local_c8.AllocatorInstance.Data;
        if (local_c8.ArrayNum < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_78.ArrayNum = iVar2;
        iVar2 = local_d8.ArrayNum;
        local_68.DataPtr = (double *)local_d8.AllocatorInstance.Data;
        if (local_d8.ArrayNum < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_68.ArrayNum = iVar2;
        MergeClusters(pFVar4,&local_68,local_b8,&local_78,(uint)(param_10 == NearestCenter),param_11
                      ,param_12,param_13);
      }
      FManagedArrayCollection::operator=(param_1,(FManagedArrayCollection *)pFVar4);
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].AllocatorInstance.Data);
    }
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  if (*(void **)&param_2->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x18);
  }
  return;
}

// RecomputeNormalsInGeometryCollection @ 14e8191a0

void __cdecl
FFractureEngineUtility::RecomputeNormalsInGeometryCollection
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2,bool param_3,
          bool param_4,float param_5,bool param_6)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCollection *pFVar3;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<int_const_,int> local_48;
  
  pFVar3 = FManagedArrayCollection::NewCopy<FGeometryCollection>(param_1);
  if (pFVar3 != (FGeometryCollection *)0x0) {
    FDataflowSelection::AsArray((FDataflowSelection *)param_2,&local_58);
    local_48.DataPtr = (int *)local_58.AllocatorInstance.Data;
    if (local_58.ArrayNum < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_48.ArrayNum = local_58.ArrayNum;
    RecomputeNormalsAndTangents(param_3,param_4,param_5,pFVar3,&local_48,param_6);
    FManagedArrayCollection::operator=(param_1,(FManagedArrayCollection *)pFVar3);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  if (*(void **)&param_2->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x18);
  }
  return;
}

// ResampleGeometryCollection @ 14e819a00

int __cdecl
FFractureEngineUtility::ResampleGeometryCollection
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FGeometryCollection *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<int_const_,int> local_38 [2];
  
  pFVar4 = FManagedArrayCollection::NewCopy<FGeometryCollection>(param_1);
  if (pFVar4 != (FGeometryCollection *)0x0) {
    FDataflowSelection::AsArray((FDataflowSelection *)param_2,&local_48);
    local_38[0].DataPtr = (int *)local_48.AllocatorInstance.Data;
    if (local_48.ArrayNum < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    local_38[0].ArrayNum = local_48.ArrayNum;
    AddCollisionSampleVertices((double)param_3,pFVar4,local_38);
    FManagedArrayCollection::operator=(param_1,(FManagedArrayCollection *)pFVar4);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  if (*(void **)&param_2->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x18);
  }
  return -1;
}

// ValidateGeometryCollection @ 14e823dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FFractureEngineUtility::ValidateGeometryCollection
          (FManagedArrayCollection *param_1,bool param_2,bool param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FGeometryCollection *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint local_48 [2];
  undefined8 local_40;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  pFVar7 = FManagedArrayCollection::NewCopy<FGeometryCollection>(param_1);
  if (pFVar7 == (FGeometryCollection *)0x0) {
    return;
  }
  bVar4 = false;
  if (param_2) {
    uVar5 = (**(code **)(*(longlong *)&pFVar7->TransformIndex + 0x60))(&pFVar7->TransformIndex);
    uVar8 = 0;
    local_2c = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    local_48[0] = 0;
    if (0 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&local_38,0,&local_2c);
      do {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)&(pFVar7->TransformIndex).field_0x18) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(*(longlong *)&(pFVar7->TransformIndex).field_0x10 + (longlong)(int)uVar8 * 4)
            == -1) {
LAB_14e823f78:
          if (((local_38.Data <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 < local_38.Data + (longlong)local_2c * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_30 == local_2c) {
            local_30 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_38,&local_2c);
          }
          iVar1 = local_30 + 1;
          *(uint *)(local_38.Data + (longlong)local_30 * 4) = local_48[0];
          local_30 = iVar1;
          if (5 < (byte)LogFractureEngineUtility._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogFractureEngineUtility);
          }
          bVar4 = true;
        }
        else {
          lVar9 = (longlong)(int)local_48[0];
          uVar8 = 0;
          if ((int)local_48[0] < *(int *)&(pFVar7->TransformIndex).field_0x18) {
            uVar8 = ~local_48[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar8 = *(uint *)(*(longlong *)&(pFVar7->TransformIndex).field_0x10 + lVar9 * 4);
          uVar6 = 0;
          if ((int)uVar8 < *(int *)&(pFVar7->TransformToGeometryIndex).field_0x18) {
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
            (*pcVar2)();
            return;
          }
          if (*(uint *)(*(longlong *)&(pFVar7->TransformToGeometryIndex).field_0x10 +
                       (longlong)(int)uVar8 * 4) != local_48[0]) goto LAB_14e823f78;
        }
        uVar8 = local_48[0] + 1;
        local_48[0] = uVar8;
      } while ((int)uVar8 < (int)uVar5);
    }
    if (0 < local_30) {
      (**(code **)(pFVar7->_padding_ + 0x28))
                (pFVar7,&FGeometryCollection::GeometryGroup,&local_38,0x101);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  if ((param_3) &&
     (bVar3 = FGeometryCollectionClusteringUtility::RemoveClustersOfOnlyOneChild(pFVar7), bVar3)) {
    if (5 < (byte)LogFractureEngineUtility._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogFractureEngineUtility)
      ;
    }
    bVar4 = true;
  }
  if ((param_4) &&
     (bVar3 = FGeometryCollectionClusteringUtility::RemoveDanglingClusters(pFVar7), bVar3)) {
    if (5 < (byte)LogFractureEngineUtility._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogFractureEngineUtility)
      ;
    }
  }
  else if (!bVar4) goto LAB_14e824112;
  FGeometryCollectionClusteringUtility::UpdateHierarchyLevelOfChildren
            ((FManagedArrayCollection *)pFVar7,-1);
  bVar4 = FGeometryCollectionClusteringUtility::ContainsMultipleRootBones(pFVar7);
  if (bVar4) {
    local_40 = 0;
    FGeometryCollectionClusteringUtility::ClusterAllBonesUnderNewRoot(pFVar7,(FName)0x0,true);
  }
LAB_14e824112:
  FManagedArrayCollection::operator=(param_1,(FManagedArrayCollection *)pFVar7);
  (**(code **)pFVar7->_padding_)(pFVar7,1);
  return;
}

